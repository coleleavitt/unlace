//! Null debugger backend — every operation returns `BackendUnavailable`.
//!
//! Used in tests + as a placeholder when the host has no real backend
//! compiled in. Lets downstream consumers always have a working `Debugger`
//! instance even on hosts without ptrace / DebugAPI / GDB stubs.

use crate::regs::RegisterSet;
use crate::{Debugger, DebuggerError, Result, StopReason};

#[derive(Default)]
pub struct NullDebugger;

impl NullDebugger {
    pub fn new() -> Self {
        Self
    }
}

impl Debugger for NullDebugger {
    fn attach(&mut self, _pid: u32) -> Result<()> {
        Err(DebuggerError::BackendUnavailable)
    }
    fn detach(&mut self) -> Result<()> {
        Err(DebuggerError::BackendUnavailable)
    }
    fn cont(&mut self) -> Result<StopReason> {
        Err(DebuggerError::BackendUnavailable)
    }
    fn step(&mut self) -> Result<StopReason> {
        Err(DebuggerError::BackendUnavailable)
    }
    fn set_breakpoint(&mut self, _ea: u64) -> Result<u32> {
        Err(DebuggerError::BackendUnavailable)
    }
    fn remove_breakpoint(&mut self, _id: u32) -> Result<()> {
        Err(DebuggerError::BackendUnavailable)
    }
    fn read_memory(&self, _ea: u64, _n: usize) -> Result<Vec<u8>> {
        Err(DebuggerError::BackendUnavailable)
    }
    fn write_memory(&mut self, _ea: u64, _bytes: &[u8]) -> Result<()> {
        Err(DebuggerError::BackendUnavailable)
    }
    fn read_registers(&self) -> Result<RegisterSet> {
        Err(DebuggerError::BackendUnavailable)
    }
    fn stack_trace(&self) -> Result<Vec<u64>> {
        Err(DebuggerError::BackendUnavailable)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_null_backend_returns_unavailable_for_all_ops() {
        let mut d = NullDebugger::new();
        assert!(d.attach(123).is_err());
        assert!(d.cont().is_err());
        assert!(d.step().is_err());
        assert!(d.set_breakpoint(0x100).is_err());
        assert!(d.read_memory(0x100, 4).is_err());
    }
}
