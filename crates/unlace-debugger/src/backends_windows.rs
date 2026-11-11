//! Windows DebugAPI backend (ROADMAP Phase G.1).
//!
//! Implements the [`Debugger`] trait over the Win32 debugging API
//! (`DebugActiveProcess` / `WaitForDebugEvent` / `ContinueDebugEvent` /
//! `ReadProcessMemory` / `WriteProcessMemory`). The build host here is Linux,
//! so the actual WinAPI calls are `#[cfg(windows)]`-gated; on any other host
//! every operation returns [`DebuggerError::BackendUnavailable`] and the struct
//! + trait impl still compile (so the crate builds with `--features
//! windows-debugapi` on Linux for CI coverage).
//!
//! The host-independent logic — mapping a `DEBUG_EVENT` code to a
//! [`StopReason`] and the INT3 software-breakpoint patch/restore bookkeeping —
//! is factored into pure functions ([`debug_event_to_stop`],
//! [`BreakpointPatch`]) and unit-tested on Linux. The WinAPI call sites
//! themselves are compile-only here and untested without a live Windows tracee.

use std::collections::BTreeMap;

use crate::regs::RegisterSet;
use crate::{Debugger, DebuggerError, Result, StopReason};

/// Win32 `DEBUG_EVENT` dwDebugEventCode values we map.
pub mod debug_event_code {
    pub const EXCEPTION_DEBUG_EVENT: u32 = 1;
    pub const CREATE_PROCESS_DEBUG_EVENT: u32 = 3;
    pub const EXIT_PROCESS_DEBUG_EVENT: u32 = 5;
}

/// Win32 exception codes relevant to debugging.
pub mod exception_code {
    pub const EXCEPTION_BREAKPOINT: u32 = 0x8000_0003; // STATUS_BREAKPOINT (INT3)
    pub const EXCEPTION_SINGLE_STEP: u32 = 0x8000_0004; // STATUS_SINGLE_STEP
}

/// The INT3 opcode used for x86/x64 software breakpoints.
const INT3: u8 = 0xCC;

/// Pure mapping from a debug event (and, for exceptions, its exception code +
/// faulting address + exit code) to a [`StopReason`]. Host-independent so it
/// can be unit-tested without a Windows process.
pub fn debug_event_to_stop(
    event_code: u32,
    exception_code: u32,
    address: u64,
    exit_code: i32,
) -> StopReason {
    match event_code {
        debug_event_code::EXCEPTION_DEBUG_EVENT => match exception_code {
            exception_code::EXCEPTION_BREAKPOINT => StopReason::Breakpoint { id: 0, ea: address },
            exception_code::EXCEPTION_SINGLE_STEP => StopReason::SingleStep,
            other => StopReason::Signal(other as i32),
        },
        debug_event_code::EXIT_PROCESS_DEBUG_EVENT => StopReason::Exited(exit_code),
        // Process creation and other events resume transparently; model as a
        // benign signal-0 stop the caller can ignore/continue.
        _ => StopReason::Signal(0),
    }
}

/// Bookkeeping for one INT3 software breakpoint: the address and the original
/// byte that 0xCC replaced (so it can be restored). Host-independent.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct BreakpointPatch {
    pub ea: u64,
    pub original_byte: u8,
}

impl BreakpointPatch {
    /// Record a breakpoint at `ea`, capturing the original byte that will be
    /// overwritten with INT3.
    pub fn new(ea: u64, original_byte: u8) -> Self {
        Self { ea, original_byte }
    }

    /// The byte to write to install the breakpoint (always INT3).
    pub fn patch_byte(&self) -> u8 {
        INT3
    }

    /// The byte to write to remove the breakpoint (the saved original).
    pub fn restore_byte(&self) -> u8 {
        self.original_byte
    }
}

/// A debugger driven over the Win32 DebugAPI.
///
/// On non-Windows hosts this is a compile-only shell whose operations report
/// [`DebuggerError::BackendUnavailable`]; the breakpoint bookkeeping is still
/// real so the pure logic is exercised by tests.
pub struct WindowsDebugger {
    pid: Option<u32>,
    breakpoints: BTreeMap<u32, BreakpointPatch>,
    next_id: u32,
}

impl Default for WindowsDebugger {
    fn default() -> Self {
        Self::new()
    }
}

impl WindowsDebugger {
    pub fn new() -> Self {
        Self {
            pid: None,
            breakpoints: BTreeMap::new(),
            next_id: 1,
        }
    }

    /// Allocate the next breakpoint id (host-independent).
    fn alloc_id(&mut self) -> u32 {
        let id = self.next_id;
        self.next_id += 1;
        id
    }
}

// The live debugging operations report `BackendUnavailable` on every host
// until the `#[cfg(windows)]` WinAPI body (DebugActiveProcess /
// WaitForDebugEvent / ContinueDebugEvent / Read/WriteProcessMemory, driven by
// `debug_event_to_stop` + `BreakpointPatch`) is wired. This is the honest
// current state: the trait + the breakpoint/event logic are real and tested;
// the kernel32 call sites are not yet implemented. The impl is unconditional so
// the crate builds identically on Windows and non-Windows hosts.
impl Debugger for WindowsDebugger {
    fn attach(&mut self, pid: u32) -> Result<()> {
        self.pid = Some(pid);
        Err(DebuggerError::BackendUnavailable)
    }
    fn detach(&mut self) -> Result<()> {
        self.pid = None;
        Err(DebuggerError::BackendUnavailable)
    }
    fn cont(&mut self) -> Result<StopReason> {
        Err(DebuggerError::BackendUnavailable)
    }
    fn step(&mut self) -> Result<StopReason> {
        Err(DebuggerError::BackendUnavailable)
    }
    fn set_breakpoint(&mut self, ea: u64) -> Result<u32> {
        // Record the breakpoint (id + patch bookkeeping is real); the actual
        // memory patch via WriteProcessMemory is the unimplemented WinAPI step.
        let id = self.alloc_id();
        self.breakpoints.insert(id, BreakpointPatch::new(ea, 0));
        Err(DebuggerError::BackendUnavailable)
    }
    fn remove_breakpoint(&mut self, id: u32) -> Result<()> {
        if self.breakpoints.remove(&id).is_none() {
            return Err(DebuggerError::BreakpointNotFound(id as u64));
        }
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
    fn breakpoint_event_maps_to_breakpoint_stop() {
        let stop = debug_event_to_stop(
            debug_event_code::EXCEPTION_DEBUG_EVENT,
            exception_code::EXCEPTION_BREAKPOINT,
            0x401000,
            0,
        );
        assert_eq!(
            stop,
            StopReason::Breakpoint {
                id: 0,
                ea: 0x401000
            }
        );
    }

    #[test]
    fn single_step_event_maps_to_single_step() {
        let stop = debug_event_to_stop(
            debug_event_code::EXCEPTION_DEBUG_EVENT,
            exception_code::EXCEPTION_SINGLE_STEP,
            0,
            0,
        );
        assert_eq!(stop, StopReason::SingleStep);
    }

    #[test]
    fn exit_event_maps_to_exited() {
        let stop = debug_event_to_stop(debug_event_code::EXIT_PROCESS_DEBUG_EVENT, 0, 0, 42);
        assert_eq!(stop, StopReason::Exited(42));
    }

    #[test]
    fn breakpoint_patch_round_trip() {
        let patch = BreakpointPatch::new(0x401000, 0x55); // original `push rbp`
        assert_eq!(patch.patch_byte(), 0xCC);
        assert_eq!(patch.restore_byte(), 0x55);
    }

    #[test]
    fn ids_are_allocated_monotonically() {
        let mut dbg = WindowsDebugger::new();
        assert_eq!(dbg.alloc_id(), 1);
        assert_eq!(dbg.alloc_id(), 2);
        dbg.breakpoints
            .insert(1, BreakpointPatch::new(0x1000, 0x90));
        assert_eq!(dbg.breakpoints.len(), 1);
    }

    #[test]
    fn live_trait_ops_report_unavailable() {
        let mut dbg = WindowsDebugger::new();
        assert!(matches!(
            dbg.attach(1234),
            Err(DebuggerError::BackendUnavailable)
        ));
        assert_eq!(dbg.pid, Some(1234));
        assert!(matches!(
            dbg.read_memory(0x1000, 8),
            Err(DebuggerError::BackendUnavailable)
        ));
        // Breakpoint bookkeeping is real even though the patch is unavailable.
        let _ = dbg.set_breakpoint(0x401000);
        assert_eq!(dbg.breakpoints.len(), 1);
        assert!(matches!(
            dbg.remove_breakpoint(999),
            Err(DebuggerError::BreakpointNotFound(999))
        ));
    }
}
