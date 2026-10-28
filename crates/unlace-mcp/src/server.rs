//! The MCP tool surface: argument types, tool descriptions, and the hop from
//! the async server onto blocking analysis threads.

use std::path::PathBuf;

use rmcp::{Json, handler::server::wrapper::Parameters, schemars, tool, tool_router};
use serde::Deserialize;

use crate::analysis::{self, Address, BinaryInfo, Decompilation, FunctionList, XrefsFrom, XrefsTo};

#[derive(Debug, Deserialize, schemars::JsonSchema)]
pub struct BinaryRequest {
    /// Filesystem path to the ELF, PE, or Mach-O binary.
    pub binary: PathBuf,
}

#[derive(Debug, Deserialize, schemars::JsonSchema)]
pub struct FunctionRequest {
    /// Filesystem path to the binary.
    pub binary: PathBuf,
    /// Function symbol name or entry address (`0x401000` or decimal).
    pub function: String,
}

#[derive(Debug, Deserialize, schemars::JsonSchema)]
pub struct IrDumpRequest {
    /// Filesystem path to the binary.
    pub binary: PathBuf,
    /// Function symbol name or entry address (`0x401000` or decimal).
    pub function: String,
    /// Pipeline milestone: `lift`, `post-passes` (default), `post-structuring`,
    /// `lvars`, or `types`.
    pub phase: Option<String>,
}

#[derive(Debug, Deserialize, schemars::JsonSchema)]
pub struct AddressRequest {
    /// Filesystem path to the binary.
    pub binary: PathBuf,
    /// Virtual address (`0x401000` or decimal).
    pub address: String,
}

/// Read-only unlace analysis exposed over MCP.
#[derive(Debug, Clone, Default)]
pub struct UnlaceServer;

impl UnlaceServer {
    pub fn new() -> Self {
        Self
    }
}

#[tool_router(server_handler)]
impl UnlaceServer {
    #[tool(
        description = "Load a binary and summarize it: architecture, byte order, entry point, \
                       sections, and symbol, relocation, and discovered-function counts."
    )]
    async fn binary_info(
        &self,
        Parameters(BinaryRequest { binary }): Parameters<BinaryRequest>,
    ) -> Result<Json<BinaryInfo>, String> {
        blocking(move || analysis::binary_info(&binary))
            .await
            .map(Json)
    }

    #[tool(description = "List the functions unlace discovers in a binary (name, address, size).")]
    async fn list_functions(
        &self,
        Parameters(BinaryRequest { binary }): Parameters<BinaryRequest>,
    ) -> Result<Json<FunctionList>, String> {
        blocking(move || analysis::list_functions(&binary))
            .await
            .map(Json)
    }

    #[tool(
        description = "Decompile one function, selected by symbol name or entry address, to \
                       pseudo-C. The code matches `unlace decompile --function <function>`."
    )]
    async fn decompile_function(
        &self,
        Parameters(FunctionRequest { binary, function }): Parameters<FunctionRequest>,
    ) -> Result<Json<Decompilation>, String> {
        blocking(move || analysis::decompile_function(&binary, &function))
            .await
            .map(Json)
    }

    #[tool(
        description = "Dump one function's SSA IR at a pipeline milestone, as `unlace ir-dump` \
                       prints it. Useful for explaining decompilation gaps."
    )]
    async fn ir_dump_function(
        &self,
        Parameters(IrDumpRequest {
            binary,
            function,
            phase,
        }): Parameters<IrDumpRequest>,
    ) -> Result<String, String> {
        blocking(move || analysis::ir_dump_function(&binary, &function, phase.as_deref())).await
    }

    #[tool(
        description = "Direct call and branch edges leaving `address`. When `address` is a \
                       function entry, returns every edge leaving that function."
    )]
    async fn xrefs_from(
        &self,
        Parameters(AddressRequest { binary, address }): Parameters<AddressRequest>,
    ) -> Result<Json<XrefsFrom>, String> {
        let address = decode_address(&address)?;
        blocking(move || analysis::xrefs_from(&binary, address))
            .await
            .map(Json)
    }

    #[tool(
        description = "Direct call and branch edges targeting `address`, plus the relocations \
                       (GOT/PLT slots) that patch it."
    )]
    async fn xrefs_to(
        &self,
        Parameters(AddressRequest { binary, address }): Parameters<AddressRequest>,
    ) -> Result<Json<XrefsTo>, String> {
        let address = decode_address(&address)?;
        blocking(move || analysis::xrefs_to(&binary, address))
            .await
            .map(Json)
    }
}

fn decode_address(address: &str) -> Result<Address, String> {
    address
        .parse()
        .map_err(|err| format!("invalid address `{address}`: {err}"))
}

/// Run `analysis` on the blocking pool; errors become tool-level error text.
async fn blocking<T, F>(analysis: F) -> Result<T, String>
where
    T: Send + 'static,
    F: FnOnce() -> anyhow::Result<T> + Send + 'static,
{
    tokio::task::spawn_blocking(analysis)
        .await
        .map_err(|err| format!("analysis task failed: {err}"))?
        .map_err(|err| format!("{err:#}"))
}

#[cfg(test)]
mod tests {
    use std::path::Path;

    use rmcp::ServiceExt;
    use serde_json::{Value, json};
    use tokio::io::{AsyncBufReadExt, AsyncWriteExt, BufReader, Lines, ReadHalf, WriteHalf};
    use tokio::io::{DuplexStream, duplex, split};

    use super::*;

    #[test]
    fn requests_decode_from_tool_arguments() {
        let ir: IrDumpRequest =
            serde_json::from_value(json!({"binary": "a.elf", "function": "main"})).unwrap();
        assert_eq!(ir.binary, Path::new("a.elf"));
        assert_eq!(ir.function, "main");
        assert_eq!(ir.phase, None);

        let missing_function =
            serde_json::from_value::<FunctionRequest>(json!({"binary": "a.elf"}));
        assert!(missing_function.is_err());

        assert_eq!(decode_address("0x1050"), Ok(Address(0x1050)));
        assert_eq!(decode_address("4176"), Ok(Address(0x1050)));
        assert!(
            decode_address("main")
                .unwrap_err()
                .starts_with("invalid address `main`")
        );
    }

    struct Client {
        lines: Lines<BufReader<ReadHalf<DuplexStream>>>,
        write: WriteHalf<DuplexStream>,
        next_id: u64,
    }

    impl Client {
        async fn send(&mut self, message: Value) {
            let mut line = message.to_string();
            line.push('\n');
            self.write.write_all(line.as_bytes()).await.unwrap();
        }

        async fn request(&mut self, method: &str, params: Value) -> Value {
            self.next_id += 1;
            let id = self.next_id;
            self.send(json!({"jsonrpc": "2.0", "id": id, "method": method, "params": params}))
                .await;
            loop {
                let line = self
                    .lines
                    .next_line()
                    .await
                    .unwrap()
                    .expect("server closed");
                let message: Value = serde_json::from_str(&line).unwrap();
                if message["id"] == id {
                    return message;
                }
            }
        }

        async fn call(&mut self, tool: &str, arguments: Value) -> Value {
            let response = self
                .request("tools/call", json!({"name": tool, "arguments": arguments}))
                .await;
            response["result"].clone()
        }
    }

    #[tokio::test]
    async fn stdio_session_initializes_lists_and_calls_tools() {
        let (client_io, server_io) = duplex(1 << 20);
        let server = tokio::spawn(async move {
            let running = UnlaceServer::new().serve(server_io).await.unwrap();
            running.waiting().await.unwrap();
        });
        let (read, write) = split(client_io);
        let mut client = Client {
            lines: BufReader::new(read).lines(),
            write,
            next_id: 0,
        };

        let init = client
            .request(
                "initialize",
                json!({
                    "protocolVersion": "2025-06-18",
                    "capabilities": {},
                    "clientInfo": {"name": "unlace-mcp-smoke", "version": "0"},
                }),
            )
            .await;
        assert!(
            init["result"]["capabilities"]["tools"].is_object(),
            "{init}"
        );
        client
            .send(json!({"jsonrpc": "2.0", "method": "notifications/initialized"}))
            .await;

        let listed = client.request("tools/list", json!({})).await;
        let mut names: Vec<&str> = listed["result"]["tools"]
            .as_array()
            .unwrap()
            .iter()
            .map(|tool| tool["name"].as_str().unwrap())
            .collect();
        names.sort_unstable();
        assert_eq!(
            names,
            [
                "binary_info",
                "decompile_function",
                "ir_dump_function",
                "list_functions",
                "xrefs_from",
                "xrefs_to",
            ]
        );

        let binary = Path::new(env!("CARGO_MANIFEST_DIR")).join("../../fixtures/hello_world.elf");

        let info = client.call("binary_info", json!({"binary": binary})).await;
        assert!(
            info["structuredContent"]["function_count"]
                .as_u64()
                .unwrap()
                > 0,
            "{info}"
        );

        let decompiled = client
            .call(
                "decompile_function",
                json!({"binary": binary, "function": "main"}),
            )
            .await;
        let decompiled = &decompiled["structuredContent"];
        assert_eq!(
            decompiled["functions"][0]["address"], "0x1060",
            "{decompiled}"
        );
        assert!(
            decompiled["code"].as_str().unwrap().contains("main("),
            "{decompiled}"
        );

        let callers = client
            .call("xrefs_to", json!({"binary": binary, "address": "0x1050"}))
            .await;
        let callers = &callers["structuredContent"]["xrefs"];
        assert!(
            callers.as_array().unwrap().contains(&json!({
                "from": "0x106f",
                "from_function": "main",
                "to": "0x1050",
                "to_function": null,
                "kind": "call",
            })),
            "{callers}"
        );

        let bad = client
            .call("xrefs_from", json!({"binary": binary, "address": "main"}))
            .await;
        assert_eq!(bad["isError"], true, "{bad}");

        drop(client);
        server.await.unwrap();
    }
}
