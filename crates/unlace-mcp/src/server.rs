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
}
