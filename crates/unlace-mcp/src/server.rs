//! The read-only MCP server implementation.

use rmcp::{handler::server::wrapper::Parameters, schemars, tool, tool_router};
use tokio::process::Command;

/// A binary-path-only request.
#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct BinaryRequest {
    /// Filesystem path to the binary (ELF / PE / Mach-O / …) to analyze.
    pub binary: String,
}

/// A single-function decompile request.
#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct DecompileRequest {
    /// Filesystem path to the binary to analyze.
    pub binary: String,
    /// Function to decompile: a symbol name or a hex address like `0x401000`.
    /// When omitted, every discovered function is decompiled.
    pub function: Option<String>,
}

/// A single-function IR dump request.
#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct IrDumpRequest {
    /// Filesystem path to the binary to analyze.
    pub binary: String,
    /// Function to dump: a symbol name or a hex address like `0x401000`.
    /// When omitted, every discovered function is dumped.
    pub function: Option<String>,
    /// Pipeline phase to snapshot: `lift`, `post-passes`, or `post-structuring`.
    /// Defaults to the CLI's `post-passes` phase.
    pub phase: Option<String>,
}

#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct XrefsFromRequest {
    pub binary: String,
    pub address: String,
}

#[derive(Debug, serde::Deserialize, schemars::JsonSchema)]
pub struct DecompileTextRequest {
    pub binary: String,
    pub address: String,
}

/// Read-only unlace decompiler exposed over MCP.
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
        description = "Open a binary and return a quality/summary report: detected architecture, \
                       function count, and a per-function table. Read-only."
    )]
    async fn binary_info(
        &self,
        Parameters(BinaryRequest { binary }): Parameters<BinaryRequest>,
    ) -> String {
        run_unlace(&["quality", &binary]).await
    }

    #[tool(
        description = "List the functions unlace discovers in a binary (name + ok/failed status), \
                       parsed from the quality report. Read-only."
    )]
    async fn list_functions(
        &self,
        Parameters(BinaryRequest { binary }): Parameters<BinaryRequest>,
    ) -> String {
        let report = run_unlace(&["quality", &binary]).await;
        let funcs = parse_function_names(&report);
        if funcs.is_empty() {
            return report;
        }
        funcs.join("\n")
    }

    #[tool(
        description = "Decompile one function (or all functions when `function` is omitted) to \
                       pseudo-C. `function` may be a symbol name or a hex address. Read-only."
    )]
    async fn decompile_function(
        &self,
        Parameters(DecompileRequest { binary, function }): Parameters<DecompileRequest>,
    ) -> String {
        let mut args: Vec<&str> = vec!["decompile", &binary, "--emit", "c"];
        if let Some(func) = function.as_deref() {
            args.push("--function");
            args.push(func);
        }
        run_unlace(&args).await
    }

    #[tool(
        description = "Dump SSA IR for one function (or all functions) at a named pipeline phase. \
                       Useful for explaining decompilation gaps. Read-only."
    )]
    async fn ir_dump_function(
        &self,
        Parameters(IrDumpRequest {
            binary,
            function,
            phase,
        }): Parameters<IrDumpRequest>,
    ) -> String {
        let args = ir_dump_args(&binary, function.as_deref(), phase.as_deref());
        run_unlace_owned(&args).await
    }

    #[tool(
        description = "List instruction targets referenced from an address using unlace's staged \
                       IDAPython XrefsFrom surface. Requires UNLACE_BIN/path `unlace` to be built \
                       with the unlace-cli `python` feature. The generated script is read-only."
    )]
    async fn xrefs_from(
        &self,
        Parameters(XrefsFromRequest { binary, address }): Parameters<XrefsFromRequest>,
    ) -> String {
        let address = match parse_xref_address(&address) {
            Ok(address) => address,
            Err(err) => return format!("error: invalid address `{address}` ({err})"),
        };
        run_xrefs_from(&binary, address).await
    }

    #[tool(
        description = "List addresses that reference a target address using unlace's staged \
                       IDAPython XrefsTo surface. Requires UNLACE_BIN/path `unlace` to be built \
                       with the unlace-cli `python` feature. The generated script is read-only."
    )]
    async fn xrefs_to(
        &self,
        Parameters(XrefsFromRequest { binary, address }): Parameters<XrefsFromRequest>,
    ) -> String {
        let address = match parse_xref_address(&address) {
            Ok(address) => address,
            Err(err) => return format!("error: invalid address `{address}` ({err})"),
        };
        run_xrefs_to(&binary, address).await
    }

    #[tool(
        description = "Return staged pseudocode text for the function containing an address using \
                       unlace's IDAPython idaapi/ida_hexrays decompile surface. Requires \
                       UNLACE_BIN/path `unlace` to be built with the unlace-cli `python` feature. \
                       The generated script is read-only."
    )]
    async fn decompile_text(
        &self,
        Parameters(DecompileTextRequest { binary, address }): Parameters<DecompileTextRequest>,
    ) -> String {
        let address = match parse_xref_address(&address) {
            Ok(address) => address,
            Err(err) => return format!("error: invalid address `{address}` ({err})"),
        };
        run_decompile_text(&binary, address).await
    }
}

fn ir_dump_args(binary: &str, function: Option<&str>, phase: Option<&str>) -> Vec<String> {
    let mut args = vec!["ir-dump".to_string(), binary.to_string()];
    if let Some(func) = function {
        args.push("--function".to_string());
        args.push(func.to_string());
    }
    if let Some(phase) = phase {
        args.push("--phase".to_string());
        args.push(phase.to_string());
    }
    args
}

async fn run_unlace_owned(args: &[String]) -> String {
    let borrowed: Vec<&str> = args.iter().map(String::as_str).collect();
    run_unlace(&borrowed).await
}

async fn run_xrefs_from(binary: &str, address: u64) -> String {
    run_artifact_script(
        binary,
        address,
        "from",
        xrefs_from_script,
        normalize_xrefs_from_error,
    )
    .await
}

async fn run_xrefs_to(binary: &str, address: u64) -> String {
    run_artifact_script(
        binary,
        address,
        "to",
        xrefs_to_script,
        normalize_xrefs_to_error,
    )
    .await
}

async fn run_decompile_text(binary: &str, address: u64) -> String {
    run_artifact_script(
        binary,
        address,
        "decompile",
        decompile_text_script,
        normalize_decompile_text_error,
    )
    .await
}

async fn run_artifact_script(
    binary: &str,
    address: u64,
    kind: &str,
    build_script: fn(u64, &str) -> String,
    normalize_error: fn(&str) -> String,
) -> String {
    let output_path = std::env::temp_dir().join(format!(
        "unlace-mcp-artifact-{kind}-{}-{}.txt",
        std::process::id(),
        std::time::SystemTime::now()
            .duration_since(std::time::UNIX_EPOCH)
            .map(|duration| duration.as_nanos())
            .unwrap_or_default()
    ));
    let script = build_script(address, &output_path.to_string_lossy());
    let script_path = std::env::temp_dir().join(format!(
        "unlace-mcp-artifact-{kind}-{}-{}.py",
        std::process::id(),
        std::time::SystemTime::now()
            .duration_since(std::time::UNIX_EPOCH)
            .map(|duration| duration.as_nanos())
            .unwrap_or_default()
    ));
    if let Err(err) = std::fs::write(&script_path, script) {
        return format!(
            "error: failed to write temporary script `{}` ({err})",
            script_path.display()
        );
    }
    let args = vec![
        "py".to_string(),
        script_path.to_string_lossy().into_owned(),
        "--binary".to_string(),
        binary.to_string(),
    ];
    let output = run_unlace_owned(&args).await;
    let _ = std::fs::remove_file(&script_path);
    if output.starts_with("error:") {
        let _ = std::fs::remove_file(&output_path);
        return normalize_error(&output);
    }
    let artifact = std::fs::read_to_string(&output_path).unwrap_or_else(|err| {
        format!(
            "error: failed to read temporary script output `{}` ({err})",
            output_path.display()
        )
    });
    let _ = std::fs::remove_file(&output_path);
    artifact
}

fn normalize_xrefs_from_error(output: &str) -> String {
    if output.contains("built without the `python` feature") {
        return "error: xrefs_from requires `unlace` built with the `python` feature. Set UNLACE_BIN to a python-enabled unlace binary.".to_string();
    }
    output.to_string()
}

fn normalize_xrefs_to_error(output: &str) -> String {
    if output.contains("built without the `python` feature") {
        return "error: xrefs_to requires `unlace` built with the `python` feature. Set UNLACE_BIN to a python-enabled unlace binary.".to_string();
    }
    output.to_string()
}

fn normalize_decompile_text_error(output: &str) -> String {
    if output.contains("built without the `python` feature") {
        return "error: decompile_text requires `unlace` built with the `python` feature. Set UNLACE_BIN to a python-enabled unlace binary.".to_string();
    }
    output.to_string()
}

fn xrefs_from_script(address: u64, output_path: &str) -> String {
    format!(
        "import idautils\nwith open({output_path:?}, 'w', encoding='utf-8') as f:\n    for x in idautils.XrefsFrom({address:#x}, 0):\n        f.write(hex(x) + '\\n')\n"
    )
}

fn xrefs_to_script(address: u64, output_path: &str) -> String {
    format!(
        "import idautils\nwith open({output_path:?}, 'w', encoding='utf-8') as f:\n    for x in idautils.XrefsTo({address:#x}, 0):\n        f.write(hex(x) + '\\n')\n"
    )
}

fn decompile_text_script(address: u64, output_path: &str) -> String {
    format!(
        "import idaapi, ida_hexrays\ntext = idaapi.decompile({address:#x})\nhexrays_cfunc = ida_hexrays.decompile({address:#x})\nhexrays_text = None if hexrays_cfunc is None else str(hexrays_cfunc)\nif text is None:\n    text = ''\nif hexrays_text is not None and text != hexrays_text:\n    raise AssertionError('idaapi and ida_hexrays decompile text differ')\nwith open({output_path:?}, 'w', encoding='utf-8') as f:\n    f.write(text)\n"
    )
}

fn parse_xref_address(address: &str) -> Result<u64, std::num::ParseIntError> {
    if let Some(hex) = address
        .strip_prefix("0x")
        .or_else(|| address.strip_prefix("0X"))
    {
        u64::from_str_radix(hex, 16)
    } else {
        address.parse()
    }
}

/// Resolve the `unlace` binary: `$UNLACE_BIN` if set, else `unlace` on `PATH`.
fn unlace_bin() -> String {
    std::env::var("UNLACE_BIN").unwrap_or_else(|_| "unlace".to_string())
}

/// Run `unlace <args...>` and return combined human-readable output. On failure
/// returns a structured error string rather than panicking — MCP tools must not
/// crash the server on bad input.
async fn run_unlace(args: &[&str]) -> String {
    let bin = unlace_bin();
    let output = match Command::new(&bin).args(args).output().await {
        Ok(o) => o,
        Err(e) => {
            return format!(
                "error: failed to spawn `{bin}` ({e}). Set UNLACE_BIN to the unlace binary path."
            );
        }
    };
    let stdout = String::from_utf8_lossy(&output.stdout);
    if output.status.success() {
        stdout.into_owned()
    } else {
        let stderr = String::from_utf8_lossy(&output.stderr);
        format!(
            "error: `{bin} {}` exited with {}.\n--- stderr ---\n{}\n--- stdout ---\n{}",
            args.join(" "),
            output.status,
            stderr.trim(),
            stdout.trim()
        )
    }
}

/// Extract backtick-quoted function names from the markdown quality table rows
/// (`| \`name\` | … |`). Deterministic: preserves the report's row order.
fn parse_function_names(report: &str) -> Vec<String> {
    let mut out = Vec::new();
    for line in report.lines() {
        let trimmed = line.trim_start();
        if !trimmed.starts_with("| `") {
            continue;
        }
        // First cell looks like: | `name` |
        if let Some(rest) = trimmed.strip_prefix("| `")
            && let Some(end) = rest.find('`')
        {
            let name = &rest[..end];
            if name != "TOTAL" && !name.is_empty() {
                out.push(name.to_string());
            }
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_function_names_from_quality_table() {
        let report = "\
# Quality report

| function | insns |
|----------|------:|
| `main` | 6 |
| `_start` | 14 |
| `sub_1120` | 34 |
| **TOTAL** | 72 |
";
        let funcs = parse_function_names(report);
        assert_eq!(funcs, vec!["main", "_start", "sub_1120"]);
    }

    #[test]
    fn empty_report_yields_no_names() {
        assert!(parse_function_names("no table here").is_empty());
    }

    #[test]
    fn ir_dump_args_include_function_and_phase() {
        assert_eq!(
            ir_dump_args("bin.elf", Some("main"), Some("lift")),
            vec![
                "ir-dump",
                "bin.elf",
                "--function",
                "main",
                "--phase",
                "lift"
            ]
        );
    }

    #[test]
    fn xrefs_from_script_uses_numeric_address_literal() {
        let script = xrefs_from_script(0x1010, "/tmp/xrefs.txt");
        assert!(script.contains("idautils.XrefsFrom(0x1010, 0)"));
        assert!(script.contains("\"/tmp/xrefs.txt\""));
        assert!(script.contains("f.write(hex(x) + '\\n')"));
    }

    #[test]
    fn xrefs_to_script_uses_numeric_address_literal() {
        let script = xrefs_to_script(0x4010, "/tmp/xrefs-to.txt");
        assert!(script.contains("idautils.XrefsTo(0x4010, 0)"));
        assert!(script.contains("\"/tmp/xrefs-to.txt\""));
        assert!(script.contains("f.write(hex(x) + '\\n')"));
    }

    #[test]
    fn parse_xref_address_accepts_hex_and_decimal() {
        assert_eq!(parse_xref_address("0x1010").unwrap(), 0x1010);
        assert_eq!(parse_xref_address("4112").unwrap(), 4112);
    }

    #[test]
    fn xrefs_from_error_names_python_feature_requirement() {
        let output = "error: `unlace py script.py --binary bin` exited with exit status: 1.\n--- stderr ---\nunlace-cli was built without the `python` feature\n--- stdout ---";

        assert_eq!(
            normalize_xrefs_from_error(output),
            "error: xrefs_from requires `unlace` built with the `python` feature. Set UNLACE_BIN to a python-enabled unlace binary."
        );
    }

    #[test]
    fn xrefs_to_error_names_python_feature_requirement() {
        let output = "error: `unlace py script.py --binary bin` exited with exit status: 1.\n--- stderr ---\nunlace-cli was built without the `python` feature\n--- stdout ---";

        assert_eq!(
            normalize_xrefs_to_error(output),
            "error: xrefs_to requires `unlace` built with the `python` feature. Set UNLACE_BIN to a python-enabled unlace binary."
        );
    }

    #[test]
    fn decompile_text_script_uses_numeric_address_literal() {
        let script = decompile_text_script(0x1060, "/tmp/decompile.txt");
        assert!(script.contains("idaapi.decompile(0x1060)"));
        assert!(script.contains("ida_hexrays.decompile(0x1060)"));
        assert!(script.contains("str(hexrays_cfunc)"));
        assert!(script.contains("\"/tmp/decompile.txt\""));
        assert!(script.contains("f.write(text)"));
    }

    #[test]
    fn decompile_text_error_names_python_feature_requirement() {
        let output = "error: `unlace py script.py --binary bin` exited with exit status: 1.\n--- stderr ---\nunlace-cli was built without the `python` feature\n--- stdout ---";

        assert_eq!(
            normalize_decompile_text_error(output),
            "error: decompile_text requires `unlace` built with the `python` feature. Set UNLACE_BIN to a python-enabled unlace binary."
        );
    }
}
