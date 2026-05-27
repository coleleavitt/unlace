//! Stack-trace contextual decompilation (t424).
//!
//! Given a crash dump or live-process stack trace (a sequence of return
//! addresses), prioritize decompilation of the active call frames.
//! This module parses stack frames and orders functions for lifting.

/// A single frame in a captured stack trace.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StackFrame {
    /// Return address (or current PC for frame 0).
    pub pc: u64,
    /// Frame pointer value, if available.
    pub fp: Option<u64>,
    /// Resolved function name, if known.
    pub function_name: Option<String>,
    /// Resolved module name.
    pub module: Option<String>,
}

/// A full stack trace from a crash or breakpoint.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StackTrace {
    pub thread_id: u64,
    pub frames: Vec<StackFrame>,
}

/// Extract unique function addresses from stack traces, prioritized by
/// frame depth (innermost frames first — most likely crash-relevant).
pub fn prioritize_functions(traces: &[StackTrace]) -> Vec<u64> {
    let mut seen = std::collections::BTreeSet::new();
    let mut result = Vec::new();

    // Process all traces, innermost frames first
    let max_depth = traces.iter().map(|t| t.frames.len()).max().unwrap_or(0);
    for depth in 0..max_depth {
        for trace in traces {
            if let Some(frame) = trace.frames.get(depth)
                && seen.insert(frame.pc)
            {
                result.push(frame.pc);
            }
        }
    }
    result
}

/// Filter frames to only those within a specific module.
pub fn frames_in_module<'a>(trace: &'a StackTrace, module: &str) -> Vec<&'a StackFrame> {
    trace
        .frames
        .iter()
        .filter(|f| f.module.as_deref() == Some(module))
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    fn frame(pc: u64, name: Option<&str>) -> StackFrame {
        StackFrame {
            pc,
            fp: None,
            function_name: name.map(Into::into),
            module: None,
        }
    }

    #[test]
    fn prioritize_innermost_first() {
        let traces = vec![
            StackTrace {
                thread_id: 1,
                frames: vec![
                    frame(0x1000, Some("crash")),
                    frame(0x2000, Some("caller")),
                    frame(0x3000, Some("main")),
                ],
            },
            StackTrace {
                thread_id: 2,
                frames: vec![frame(0x4000, Some("other")), frame(0x2000, Some("caller"))],
            },
        ];
        let prio = prioritize_functions(&traces);
        assert_eq!(prio, vec![0x1000, 0x4000, 0x2000, 0x3000]);
    }

    #[test]
    fn empty_traces() {
        assert_eq!(prioritize_functions(&[]), Vec::<u64>::new());
    }

    #[test]
    fn module_filter() {
        let trace = StackTrace {
            thread_id: 1,
            frames: vec![
                StackFrame {
                    pc: 0x1000,
                    fp: None,
                    function_name: None,
                    module: Some("libc.so".into()),
                },
                StackFrame {
                    pc: 0x2000,
                    fp: None,
                    function_name: None,
                    module: Some("app".into()),
                },
                StackFrame {
                    pc: 0x3000,
                    fp: None,
                    function_name: None,
                    module: Some("libc.so".into()),
                },
            ],
        };
        let filtered = frames_in_module(&trace, "libc.so");
        assert_eq!(filtered.len(), 2);
        assert_eq!(filtered[0].pc, 0x1000);
    }
}
