//! Frida dynamic instrumentation bridge.
//!
//! Provides data structures and protocol definitions for communicating with
//! a Frida agent to collect runtime information (function call traces,
//! memory snapshots, hook results) that feed back into the decompiler.

/// A Frida hook event received from the agent.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum FridaEvent {
    /// Function was entered.
    FunctionEnter {
        address: u64,
        thread_id: u32,
        args: Vec<u64>,
    },
    /// Function returned.
    FunctionLeave {
        address: u64,
        thread_id: u32,
        retval: u64,
    },
    /// Memory read/write observed.
    MemoryAccess {
        address: u64,
        size: u32,
        is_write: bool,
        value: Vec<u8>,
    },
    /// Module loaded.
    ModuleLoad {
        name: String,
        base: u64,
        size: u64,
    },
}

/// Configuration for a Frida hook session.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FridaHookConfig {
    /// Target process name or PID.
    pub target: String,
    /// Functions to hook (by address).
    pub hook_addresses: Vec<u64>,
    /// Whether to trace all function calls (interceptor mode).
    pub trace_all_calls: bool,
    /// Memory regions to watch.
    pub memory_watches: Vec<(u64, u64)>, // (address, size)
}

/// Parse a JSON-encoded Frida event (simplified).
pub fn parse_frida_event(json: &str) -> Option<FridaEvent> {
    // Simplified parser for demonstration.
    if json.contains("\"type\":\"enter\"") {
        let addr = extract_u64_field(json, "address")?;
        let tid = extract_u64_field(json, "threadId")? as u32;
        Some(FridaEvent::FunctionEnter {
            address: addr,
            thread_id: tid,
            args: Vec::new(),
        })
    } else if json.contains("\"type\":\"leave\"") {
        let addr = extract_u64_field(json, "address")?;
        let tid = extract_u64_field(json, "threadId")? as u32;
        let ret = extract_u64_field(json, "retval").unwrap_or(0);
        Some(FridaEvent::FunctionLeave {
            address: addr,
            thread_id: tid,
            retval: ret,
        })
    } else if json.contains("\"type\":\"module\"") {
        Some(FridaEvent::ModuleLoad {
            name: extract_string_field(json, "name").unwrap_or_default(),
            base: extract_u64_field(json, "base").unwrap_or(0),
            size: extract_u64_field(json, "size").unwrap_or(0),
        })
    } else {
        None
    }
}

fn extract_u64_field(json: &str, field: &str) -> Option<u64> {
    let key = format!("\"{}\":", field);
    let pos = json.find(&key)? + key.len();
    let rest = json[pos..].trim_start();
    let end = rest.find(|c: char| !c.is_ascii_digit()).unwrap_or(rest.len());
    rest[..end].parse().ok()
}

fn extract_string_field(json: &str, field: &str) -> Option<String> {
    let key = format!("\"{}\":\"", field);
    let pos = json.find(&key)? + key.len();
    let end = json[pos..].find('"')?;
    Some(json[pos..pos+end].to_string())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_enter_event() {
        let json = r#"{"type":"enter","address":4194304,"threadId":1234}"#;
        let event = parse_frida_event(json).unwrap();
        assert!(matches!(event, FridaEvent::FunctionEnter { address: 4194304, thread_id: 1234, .. }));
    }

    #[test]
    fn test_parse_leave_event() {
        let json = r#"{"type":"leave","address":4194304,"threadId":1,"retval":42}"#;
        let event = parse_frida_event(json).unwrap();
        assert!(matches!(event, FridaEvent::FunctionLeave { retval: 42, .. }));
    }

    #[test]
    fn test_parse_module_event() {
        let json = r#"{"type":"module","name":"libc.so","base":140000000,"size":2000000}"#;
        let event = parse_frida_event(json).unwrap();
        if let FridaEvent::ModuleLoad { name, .. } = event {
            assert_eq!(name, "libc.so");
        } else {
            panic!("expected ModuleLoad");
        }
    }
}
