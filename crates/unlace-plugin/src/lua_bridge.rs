//! Lua scripting binding interface (t442).
//!
//! Defines the Rust-side bridge types for embedding a Lua interpreter.
//! Lua scripts can query function info, iterate blocks, and emit findings
//! without needing Rust compilation. Designed for quick analyst scripting.

/// A Lua-accessible function handle.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LuaFunction {
    pub name: String,
    pub addr: u64,
    pub size: u64,
}

/// A Lua-accessible basic block.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LuaBlock {
    pub id: u32,
    pub start_addr: u64,
    pub insn_count: usize,
    pub successors: Vec<u32>,
}

/// Commands a Lua script can issue to the host.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum LuaCommand {
    /// Request decompilation of a function.
    Decompile { addr: u64 },
    /// Emit a finding/annotation.
    EmitFinding { kind: String, message: String, addr: Option<u64> },
    /// Set a comment at an address.
    SetComment { addr: u64, text: String },
    /// Rename a function.
    Rename { addr: u64, new_name: String },
}

/// Result of executing a Lua script.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LuaExecResult {
    pub commands: Vec<LuaCommand>,
    pub output: String,
    pub error: Option<String>,
}

/// Validate a Lua script for basic syntax (bracket/paren matching).
pub fn validate_lua_syntax(script: &str) -> Result<(), String> {
    let mut depth_paren = 0i32;
    let mut depth_bracket = 0i32;
    for (i, ch) in script.chars().enumerate() {
        match ch {
            '(' => depth_paren += 1,
            ')' => { depth_paren -= 1; if depth_paren < 0 { return Err(format!("unmatched ')' at offset {}", i)); } }
            '[' => depth_bracket += 1,
            ']' => { depth_bracket -= 1; if depth_bracket < 0 { return Err(format!("unmatched ']' at offset {}", i)); } }
            _ => {}
        }
    }
    if depth_paren != 0 { return Err("unmatched '('".into()); }
    if depth_bracket != 0 { return Err("unmatched '['".into()); }
    Ok(())
}

/// Parse Lua-emitted findings from a standardized output format.
/// Format: `FINDING:<kind>:<addr_hex>:<message>\n`
pub fn parse_lua_findings(output: &str) -> Vec<LuaCommand> {
    output.lines().filter_map(|line| {
        let rest = line.strip_prefix("FINDING:")?;
        let parts: Vec<&str> = rest.splitn(3, ':').collect();
        if parts.len() < 3 { return None; }
        let kind = parts[0].to_string();
        let addr = u64::from_str_radix(parts[1].trim_start_matches("0x"), 16).ok();
        let message = parts[2].to_string();
        Some(LuaCommand::EmitFinding { kind, message, addr })
    }).collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn valid_syntax() {
        assert!(validate_lua_syntax("print(x[1])").is_ok());
    }

    #[test]
    fn unmatched_paren() {
        assert!(validate_lua_syntax("print(x").is_err());
    }

    #[test]
    fn parse_findings_output() {
        let output = "FINDING:crypto:0x401000:uses weak hash\nFINDING:vuln:0x402000:buffer overflow\n";
        let cmds = parse_lua_findings(output);
        assert_eq!(cmds.len(), 2);
        match &cmds[0] {
            LuaCommand::EmitFinding { kind, addr, message } => {
                assert_eq!(kind, "crypto");
                assert_eq!(*addr, Some(0x401000));
                assert!(message.contains("weak hash"));
            }
            _ => panic!("wrong variant"),
        }
    }

    #[test]
    fn parse_empty_output() {
        assert!(parse_lua_findings("").is_empty());
        assert!(parse_lua_findings("some random text\n").is_empty());
    }
}
