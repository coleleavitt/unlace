//! Debugger trait and backend stubs for unlace.
//!
//! Defines the [`Debugger`] trait and concrete backends:
//! - [`backends::linux_ptrace`] — Linux ptrace (feature `linux-ptrace`)
//! - [`backends::windows`] — Windows DebugActiveProcess (feature
//!   `windows-debugapi`)
//! - [`backends::gdb_stub`] — GDB Remote Serial Protocol client (feature
//!   `gdb-stub`)
//!
//! References:
//! - `research/ida-hexrays-docs/sdk/dbg/` — IDA SDK debugger plugin samples
//! - `references/ida/plugins/linux_user/all/` — IDA's local Linux debugger
//! - `references/ida/plugins/gdb_user/all/` — IDA's GDB stub backend
//! - `references/ida/plugins/bochs_user/all/` — IDA's Bochs integration

pub mod backends;
pub mod breakpoint;
pub mod gdb_rsp;
pub mod regs;

pub use backends::NullDebugger;
#[cfg(feature = "linux-ptrace")]
pub use backends::LinuxPtraceDebugger;

use std::collections::BTreeMap;

use thiserror::Error;

/// All errors a debugger backend can produce.
#[derive(Debug, Error)]
pub enum DebuggerError {
    #[error("backend not available on this host (feature not enabled)")]
    BackendUnavailable,
    #[error("process not attached")]
    NotAttached,
    #[error("breakpoint at {0:#x} not found")]
    BreakpointNotFound(u64),
    #[error("I/O error: {0}")]
    Io(#[from] std::io::Error),
    #[error("protocol error: {0}")]
    Protocol(String),
}

pub type Result<T> = std::result::Result<T, DebuggerError>;

/// Standard debugger interface that all backends implement.
pub trait Debugger {
    /// Attach to an already-running process by PID.
    fn attach(&mut self, pid: u32) -> Result<()>;
    /// Detach from the current process.
    fn detach(&mut self) -> Result<()>;
    /// Continue execution.
    fn cont(&mut self) -> Result<StopReason>;
    /// Single-step one instruction.
    fn step(&mut self) -> Result<StopReason>;
    /// Set or clear a breakpoint at ea. Returns the breakpoint id.
    fn set_breakpoint(&mut self, ea: u64) -> Result<u32>;
    fn remove_breakpoint(&mut self, id: u32) -> Result<()>;
    /// Read `n` bytes at ea.
    fn read_memory(&self, ea: u64, n: usize) -> Result<Vec<u8>>;
    /// Write bytes at ea.
    fn write_memory(&mut self, ea: u64, bytes: &[u8]) -> Result<()>;
    /// Read all registers.
    fn read_registers(&self) -> Result<regs::RegisterSet>;
    /// Get call stack as a list of frame addresses.
    fn stack_trace(&self) -> Result<Vec<u64>>;
}

/// Why execution stopped.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum StopReason {
    Breakpoint { id: u32, ea: u64 },
    SingleStep,
    Signal(i32),
    Exited(i32),
}

/// An in-memory record of registered breakpoints (shared across backends).
#[derive(Clone, Debug, Default)]
pub struct BreakpointTable {
    pub bps: BTreeMap<u32, breakpoint::Breakpoint>,
    next_id: u32,
}

impl BreakpointTable {
    pub fn new() -> Self {
        Self::default()
    }

    pub fn add(&mut self, ea: u64) -> u32 {
        let id = self.next_id;
        self.next_id += 1;
        self.bps.insert(
            id,
            breakpoint::Breakpoint {
                id,
                ea,
                enabled: true,
                kind: breakpoint::BreakpointKind::Software,
            },
        );
        id
    }

    pub fn remove(&mut self, id: u32) -> bool {
        self.bps.remove(&id).is_some()
    }

    pub fn find_by_ea(&self, ea: u64) -> Option<&breakpoint::Breakpoint> {
        self.bps.values().find(|b| b.ea == ea)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_breakpoint_table_add_returns_unique_ids() {
        let mut t = BreakpointTable::new();
        let a = t.add(0x401000);
        let b = t.add(0x401020);
        assert_ne!(a, b);
        assert_eq!(t.bps.len(), 2);
    }

    #[test]
    fn test_breakpoint_table_remove() {
        let mut t = BreakpointTable::new();
        let id = t.add(0x401000);
        assert!(t.remove(id));
        assert!(!t.remove(id));
    }

    #[test]
    fn test_breakpoint_table_find_by_ea() {
        let mut t = BreakpointTable::new();
        let added_id = t.add(0x401000);
        let bp = t.find_by_ea(0x401000).unwrap();
        assert_eq!(bp.ea, 0x401000);
        assert_eq!(bp.id, added_id);
        assert!(t.find_by_ea(0x999).is_none());
    }
}
