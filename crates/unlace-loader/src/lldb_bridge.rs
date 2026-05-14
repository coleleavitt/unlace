//! LLDB debugging bridge protocol.
//!
//! Defines the communication protocol for interfacing with LLDB to collect
//! runtime information (register state, memory, breakpoints) for use in
//! dynamic-assisted decompilation.

/// An LLDB command/response pair.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum LldbCommand {
    /// Read register values.
    ReadRegisters { thread_id: u32 },
    /// Read memory at address.
    ReadMemory { address: u64, size: u32 },
    /// Set breakpoint.
    SetBreakpoint { address: u64 },
    /// Continue execution.
    Continue,
    /// Step one instruction.
    StepInstruction,
    /// Evaluate expression.
    Evaluate(String),
}

/// An LLDB response.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum LldbResponse {
    /// Register values.
    Registers(Vec<(String, u64)>),
    /// Memory read result.
    Memory { address: u64, data: Vec<u8> },
    /// Breakpoint set confirmation.
    BreakpointSet { id: u32 },
    /// Process stopped.
    Stopped { reason: String, address: u64 },
    /// Expression result.
    ExprResult(String),
    /// Error.
    Error(String),
}

/// Parse LLDB-style hexadecimal register dump.
pub fn parse_register_dump(output: &str) -> Vec<(String, u64)> {
    let mut regs = Vec::new();
    for line in output.lines() {
        let trimmed = line.trim();
        // Format: "  rax = 0x00000000deadbeef"
        if let Some((name, value)) = trimmed.split_once('=') {
            let name = name.trim().to_string();
            let value_str = value.trim().trim_start_matches("0x");
            if let Ok(val) = u64::from_str_radix(value_str, 16) {
                regs.push((name, val));
            }
        }
    }
    regs
}

/// Format a memory read command for the LLDB/GDB remote protocol.
pub fn format_memory_read(address: u64, size: u32) -> String {
    format!("m{:x},{:x}", address, size)
}

/// Parse a hex-encoded memory response from GDB remote protocol.
pub fn parse_memory_response(hex: &str) -> Vec<u8> {
    let mut bytes = Vec::new();
    let clean = hex.trim();
    let mut chars = clean.chars();
    while let (Some(hi), Some(lo)) = (chars.next(), chars.next()) {
        if let Ok(byte) = u8::from_str_radix(&format!("{}{}", hi, lo), 16) {
            bytes.push(byte);
        }
    }
    bytes
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_register_dump() {
        let output = "  rax = 0x00000000deadbeef\n  rbx = 0x00000000cafebabe\n";
        let regs = parse_register_dump(output);
        assert_eq!(regs.len(), 2);
        assert_eq!(regs[0], ("rax".to_string(), 0xdeadbeef));
        assert_eq!(regs[1], ("rbx".to_string(), 0xcafebabe));
    }

    #[test]
    fn test_format_memory_read() {
        assert_eq!(format_memory_read(0x1000, 64), "m1000,40");
    }

    #[test]
    fn test_parse_memory_response() {
        let hex = "deadbeef";
        let bytes = parse_memory_response(hex);
        assert_eq!(bytes, vec![0xde, 0xad, 0xbe, 0xef]);
    }
}
