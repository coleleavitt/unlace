//! Linux ptrace debugger backend.
//!
//! Drives the kernel's `ptrace(2)` interface directly via raw syscalls:
//!
//! - `PTRACE_ATTACH`  / `PTRACE_DETACH`            — attach to / leave a PID
//! - `PTRACE_PEEKTEXT` / `PTRACE_POKETEXT`         — read/write tracee memory
//! - `PTRACE_GETREGS` / `PTRACE_SETREGS`           — register file
//! - `PTRACE_CONT`    / `PTRACE_SINGLESTEP`        — resume execution
//!
//! Software breakpoints are implemented as `INT3` (0xCC) overwrites of
//! the first byte of the target instruction. We remember the original
//! byte in [`BreakpointTable`] so the byte can be restored on remove
//! and on hit-and-resume. These remain the default.
//!
//! Hardware breakpoints (execute) are programmed into the x86 debug
//! registers DR0-DR3 + DR7 via `PTRACE_POKEUSER` into the user-area
//! `u_debugreg` offsets; up to four can be active at once.
//!
//! `stack_trace()` performs a frame-pointer (RBP-chain) walk: RIP is
//! frame 0, then saved-RBP at `[rbp]` and return-address at `[rbp + 8]`
//! are followed up to a bounded depth.
//!
//! References:
//! - `man 2 ptrace`
//! - `research/decompiled-references/ida/plugins/linux_user/all/` — IDA's Linux debugger
//! - `research/decompiled-references/ida/plugins/gdb_user/all/`   — reference for ptrace-shape ops

use std::mem::MaybeUninit;

use libc::{
    PTRACE_ATTACH, PTRACE_CONT, PTRACE_DETACH, PTRACE_GETREGS, PTRACE_PEEKDATA, PTRACE_POKEDATA,
    PTRACE_POKEUSER, PTRACE_SETREGS, PTRACE_SINGLESTEP, WIFEXITED, WIFSIGNALED, WIFSTOPPED,
    WSTOPSIG, c_long, c_void, pid_t, ptrace, user_regs_struct, waitpid,
};

use crate::breakpoint::BreakpointKind;
use crate::regs::RegisterSet;
use crate::{BreakpointTable, Debugger, DebuggerError, Result, StopReason};

const INT3: u8 = 0xCC;

/// Number of x86 hardware debug-address registers (DR0-DR3).
const HW_BP_SLOTS: usize = 4;

/// Maximum frames collected by the frame-pointer stack walk.
const MAX_STACK_DEPTH: usize = 64;

/// Byte offset of `u_debugreg[0]` inside `struct user` on x86_64.
///
/// `offsetof(struct user, u_debugreg) == 848` (verified against
/// `<sys/user.h>`); each entry is a `u64`, so `DRn` lives at
/// `DEBUGREG_OFFSET + n * 8`. `PTRACE_POKEUSER` writes there directly.
const DEBUGREG_OFFSET: u64 = 848;

/// Offset of debug register `n` (DR0..=DR7) in the user area.
fn debugreg_offset(n: usize) -> u64 {
    DEBUGREG_OFFSET + (n as u64) * 8
}

/// Compute the DR7 control-register value that locally enables the given
/// debug-register slots (`0..=3`) as **execute** breakpoints, starting from
/// a prior `current` DR7 value.
///
/// DR7 layout (x86): for slot `n`, bit `2*n` is the *local enable* bit, and
/// the 4-bit field at `16 + 4*n` holds `RW` (low 2 bits) and `LEN` (high 2
/// bits). An execute breakpoint uses `RW = 00` and `LEN = 00`, so enabling
/// slot `n` for execution is just setting its local-enable bit and clearing
/// its control nibble. Bit 8 (`LE`, "local exact") is also set, matching
/// what the kernel/ptrace conventionally programs.
fn dr7_enable_execute(current: u64, slots: &[usize]) -> u64 {
    let mut dr7 = current;
    for &n in slots {
        debug_assert!(n < HW_BP_SLOTS);
        // Local-enable bit for this slot.
        dr7 |= 1u64 << (2 * n);
        // Clear the RW/LEN nibble (RW=00 execute, LEN=00 one byte).
        dr7 &= !(0b1111u64 << (16 + 4 * n));
    }
    if slots.is_empty() {
        dr7
    } else {
        // LE bit — recommended set whenever any local breakpoint is enabled.
        dr7 | (1u64 << 8)
    }
}

/// Walk a frame-pointer (RBP) chain into a list of frame addresses.
///
/// Frame 0 is `rip`. Then, for each frame, the saved caller RBP lives at
/// `[rbp]` and the return address at `[rbp + 8]` (System V x86_64 prologue:
/// `push rbp; mov rbp, rsp`). `read_qword(addr)` returns the 8-byte little
/// endian value at `addr` (or `None` if unreadable). The walk stops when:
/// - `rbp` is null,
/// - the saved return address is null,
/// - memory is unreadable,
/// - the next `rbp` does not strictly ascend (guards against cycles and
///   corrupt/leaf frames), or
/// - `max_depth` frames have been collected.
///
/// Pure and side-effect free given `read_qword`, so it is unit-testable with
/// a mock memory reader.
fn fp_walk<F>(rip: u64, mut rbp: u64, mut read_qword: F, max_depth: usize) -> Vec<u64>
where
    F: FnMut(u64) -> Option<u64>,
{
    let mut frames = vec![rip];
    for _ in 0..max_depth {
        if rbp == 0 {
            break;
        }
        let Some(saved_rbp) = read_qword(rbp) else {
            break;
        };
        let Some(return_addr) = read_qword(rbp.wrapping_add(8)) else {
            break;
        };
        if return_addr == 0 {
            break;
        }
        frames.push(return_addr);
        // RBP chains must strictly ascend toward higher (older) stack
        // addresses; anything else is a leaf/garbage frame or a cycle.
        if saved_rbp <= rbp {
            break;
        }
        rbp = saved_rbp;
    }
    frames
}

/// Software-breakpoint record with original byte saved for restore.
#[derive(Clone, Debug)]
struct SoftBpRecord {
    id: u32,
    ea: u64,
    original_byte: u8,
}

/// Hardware-breakpoint record: which DRn slot it occupies. The address
/// itself is tracked in [`BreakpointTable`] under the same `id`.
#[derive(Clone, Debug)]
struct HwBpRecord {
    id: u32,
    slot: usize,
}

/// Real ptrace-based debugger.
#[derive(Default)]
pub struct LinuxPtraceDebugger {
    pid: Option<pid_t>,
    table: BreakpointTable,
    soft_bps: Vec<SoftBpRecord>,
    hw_bps: Vec<HwBpRecord>,
    pending_id_to_restore: Option<u32>,
}

impl LinuxPtraceDebugger {
    pub fn new() -> Self {
        Self::default()
    }

    fn require_pid(&self) -> Result<pid_t> {
        self.pid.ok_or(DebuggerError::NotAttached)
    }

    fn wait_for_stop(&mut self) -> Result<StopReason> {
        let pid = self.require_pid()?;
        let mut status: i32 = 0;
        let rc = unsafe { waitpid(pid, &mut status, 0) };
        if rc < 0 {
            return Err(DebuggerError::Io(std::io::Error::last_os_error()));
        }
        if WIFEXITED(status) {
            self.pid = None;
            return Ok(StopReason::Exited(libc::WEXITSTATUS(status)));
        }
        if WIFSIGNALED(status) {
            self.pid = None;
            return Ok(StopReason::Signal(libc::WTERMSIG(status)));
        }
        if WIFSTOPPED(status) {
            let sig = WSTOPSIG(status);
            if sig == libc::SIGTRAP {
                if let Some(reason) = self.handle_int3_hit()? {
                    return Ok(reason);
                }
                return Ok(StopReason::SingleStep);
            }
            return Ok(StopReason::Signal(sig));
        }
        Ok(StopReason::SingleStep)
    }

    /// After SIGTRAP, see if PC-1 matches an active soft breakpoint.
    /// If yes: restore the original byte, rewind PC by 1, return a
    /// `Breakpoint` stop. Otherwise return None (treat as single-step).
    fn handle_int3_hit(&mut self) -> Result<Option<StopReason>> {
        let regs = self.read_user_regs()?;
        let int3_addr = regs.rip.saturating_sub(1);
        let Some(idx) = self.soft_bps.iter().position(|b| b.ea == int3_addr) else {
            return Ok(None);
        };
        let rec = self.soft_bps[idx].clone();
        self.poke_byte(rec.ea, rec.original_byte)?;
        let mut adjusted = regs;
        adjusted.rip = int3_addr;
        self.write_user_regs(&adjusted)?;
        self.pending_id_to_restore = Some(rec.id);
        Ok(Some(StopReason::Breakpoint {
            id: rec.id,
            ea: rec.ea,
        }))
    }

    fn poke_byte(&self, ea: u64, byte: u8) -> Result<()> {
        let pid = self.require_pid()?;
        let aligned = ea & !(std::mem::size_of::<c_long>() as u64 - 1);
        let offset = (ea - aligned) as usize;
        let mut word = peek_word(pid, aligned)?;
        let mut buf = word.to_le_bytes();
        buf[offset] = byte;
        word = c_long::from_le_bytes(buf);
        poke_word(pid, aligned, word)
    }

    fn read_user_regs(&self) -> Result<user_regs_struct> {
        let pid = self.require_pid()?;
        let mut regs = MaybeUninit::<user_regs_struct>::uninit();
        let rc = unsafe {
            ptrace(
                PTRACE_GETREGS,
                pid,
                std::ptr::null_mut::<c_void>(),
                regs.as_mut_ptr() as *mut c_void,
            )
        };
        if rc < 0 {
            return Err(DebuggerError::Io(std::io::Error::last_os_error()));
        }
        Ok(unsafe { regs.assume_init() })
    }

    fn write_user_regs(&self, regs: &user_regs_struct) -> Result<()> {
        let pid = self.require_pid()?;
        let rc = unsafe {
            ptrace(
                PTRACE_SETREGS,
                pid,
                std::ptr::null_mut::<c_void>(),
                regs as *const _ as *mut c_void,
            )
        };
        if rc < 0 {
            return Err(DebuggerError::Io(std::io::Error::last_os_error()));
        }
        Ok(())
    }

    /// After hitting a soft bp and stepping past it, re-arm the INT3.
    fn rearm_pending(&mut self) -> Result<()> {
        let Some(id) = self.pending_id_to_restore.take() else {
            return Ok(());
        };
        let Some(rec) = self.soft_bps.iter().find(|r| r.id == id).cloned() else {
            return Ok(());
        };
        self.poke_byte(rec.ea, INT3)
    }

    /// Write a value into the tracee's user area at `offset` via
    /// `PTRACE_POKEUSER` (used to program the debug registers DR0-DR7).
    fn poke_user(&self, offset: u64, value: u64) -> Result<()> {
        let pid = self.require_pid()?;
        // SAFETY: `PTRACE_POKEUSER` writes one word at `offset` in the
        // tracee's user area for the traced `pid`. `offset` is a valid,
        // word-aligned debug-register offset (DEBUGREG_OFFSET + n*8) and
        // `value` is passed by value, not as a pointer the kernel reads, so
        // there is no aliasing of our address space. Errors surface via the
        // -1 return + errno below.
        let rc = unsafe {
            ptrace(
                PTRACE_POKEUSER,
                pid,
                offset as *mut c_void,
                value as *mut c_void,
            )
        };
        if rc < 0 {
            return Err(DebuggerError::Io(std::io::Error::last_os_error()));
        }
        Ok(())
    }

    /// Find the first free DR slot (0-3); error if all four are in use.
    fn allocate_hw_slot(&self) -> Result<usize> {
        (0..HW_BP_SLOTS)
            .find(|n| !self.hw_bps.iter().any(|r| r.slot == *n))
            .ok_or(DebuggerError::Protocol(
                "all 4 hardware debug-register slots are in use".to_string(),
            ))
    }

    /// Program an x86 hardware (execute) breakpoint at `ea` using a free
    /// DRn slot, then enable it in DR7. Returns the breakpoint id.
    ///
    /// Public inherent API: callers opt into a hardware breakpoint here,
    /// whereas the [`Debugger::set_breakpoint`] trait method keeps INT3
    /// software breakpoints as the default.
    pub fn set_hw_breakpoint(&mut self, ea: u64) -> Result<u32> {
        self.require_pid()?;
        let slot = self.allocate_hw_slot()?;
        // Program the address register DRn.
        self.poke_user(debugreg_offset(slot), ea)?;
        // Recompute DR7 to enable every active slot (the new one included).
        let mut slots: Vec<usize> = self.hw_bps.iter().map(|r| r.slot).collect();
        slots.push(slot);
        let dr7 = dr7_enable_execute(0, &slots);
        self.poke_user(debugreg_offset(7), dr7)?;

        let id = self.table.add(ea);
        if let Some(bp) = self.table.bps.get_mut(&id) {
            bp.kind = BreakpointKind::Hardware;
        }
        self.hw_bps.push(HwBpRecord { id, slot });
        Ok(id)
    }

    /// Disable a hardware breakpoint by id: clear its DRn and rebuild DR7.
    fn clear_hw_breakpoint(&mut self, id: u32) -> Result<()> {
        let Some(idx) = self.hw_bps.iter().position(|r| r.id == id) else {
            return Err(DebuggerError::BreakpointNotFound(0));
        };
        let rec = self.hw_bps.remove(idx);
        // Zero the address register and rebuild DR7 from the survivors.
        let _ = self.poke_user(debugreg_offset(rec.slot), 0);
        let slots: Vec<usize> = self.hw_bps.iter().map(|r| r.slot).collect();
        let dr7 = dr7_enable_execute(0, &slots);
        let _ = self.poke_user(debugreg_offset(7), dr7);
        self.table.remove(id);
        Ok(())
    }
}

impl Debugger for LinuxPtraceDebugger {
    fn attach(&mut self, pid: u32) -> Result<()> {
        let pid = pid as pid_t;
        let rc = unsafe {
            ptrace(
                PTRACE_ATTACH,
                pid,
                std::ptr::null_mut::<c_void>(),
                std::ptr::null_mut::<c_void>(),
            )
        };
        if rc < 0 {
            return Err(DebuggerError::Io(std::io::Error::last_os_error()));
        }
        self.pid = Some(pid);
        // Wait for the initial SIGSTOP delivery.
        let mut status: i32 = 0;
        let _ = unsafe { waitpid(pid, &mut status, 0) };
        Ok(())
    }

    fn detach(&mut self) -> Result<()> {
        let pid = self.require_pid()?;
        // Restore all soft breakpoints before detaching.
        let records = std::mem::take(&mut self.soft_bps);
        for r in &records {
            let _ = self.poke_byte(r.ea, r.original_byte);
        }
        // Disable all hardware breakpoints: zero each DRn and clear DR7.
        let hw = std::mem::take(&mut self.hw_bps);
        for r in &hw {
            let _ = self.poke_user(debugreg_offset(r.slot), 0);
        }
        if !hw.is_empty() {
            let _ = self.poke_user(debugreg_offset(7), 0);
        }
        let rc = unsafe {
            ptrace(
                PTRACE_DETACH,
                pid,
                std::ptr::null_mut::<c_void>(),
                std::ptr::null_mut::<c_void>(),
            )
        };
        self.pid = None;
        if rc < 0 {
            return Err(DebuggerError::Io(std::io::Error::last_os_error()));
        }
        Ok(())
    }

    fn cont(&mut self) -> Result<StopReason> {
        // If we just hit a soft bp, single-step once to clear it, then re-arm.
        if self.pending_id_to_restore.is_some() {
            let _ = self.step()?;
            self.rearm_pending()?;
        }
        let pid = self.require_pid()?;
        let rc = unsafe {
            ptrace(
                PTRACE_CONT,
                pid,
                std::ptr::null_mut::<c_void>(),
                std::ptr::null_mut::<c_void>(),
            )
        };
        if rc < 0 {
            return Err(DebuggerError::Io(std::io::Error::last_os_error()));
        }
        self.wait_for_stop()
    }

    fn step(&mut self) -> Result<StopReason> {
        let pid = self.require_pid()?;
        let rc = unsafe {
            ptrace(
                PTRACE_SINGLESTEP,
                pid,
                std::ptr::null_mut::<c_void>(),
                std::ptr::null_mut::<c_void>(),
            )
        };
        if rc < 0 {
            return Err(DebuggerError::Io(std::io::Error::last_os_error()));
        }
        self.wait_for_stop()
    }

    fn set_breakpoint(&mut self, ea: u64) -> Result<u32> {
        let pid = self.require_pid()?;
        let original = read_byte(pid, ea)?;
        self.poke_byte(ea, INT3)?;
        let id = self.table.add(ea);
        if let Some(bp) = self.table.bps.get_mut(&id) {
            bp.kind = BreakpointKind::Software;
        }
        self.soft_bps.push(SoftBpRecord {
            id,
            ea,
            original_byte: original,
        });
        Ok(id)
    }

    fn remove_breakpoint(&mut self, id: u32) -> Result<()> {
        // Hardware breakpoint? Clear its debug register + DR7 bit.
        if self.hw_bps.iter().any(|r| r.id == id) {
            return self.clear_hw_breakpoint(id);
        }
        let Some(idx) = self.soft_bps.iter().position(|r| r.id == id) else {
            return Err(DebuggerError::BreakpointNotFound(0));
        };
        let rec = self.soft_bps.remove(idx);
        let _ = self.poke_byte(rec.ea, rec.original_byte);
        self.table.remove(id);
        Ok(())
    }

    fn read_memory(&self, ea: u64, n: usize) -> Result<Vec<u8>> {
        let pid = self.require_pid()?;
        read_bytes(pid, ea, n)
    }

    fn write_memory(&mut self, ea: u64, bytes: &[u8]) -> Result<()> {
        let pid = self.require_pid()?;
        write_bytes(pid, ea, bytes)
    }

    fn read_registers(&self) -> Result<RegisterSet> {
        let regs = self.read_user_regs()?;
        let mut set = RegisterSet::new();
        set.set("rax", regs.rax);
        set.set("rbx", regs.rbx);
        set.set("rcx", regs.rcx);
        set.set("rdx", regs.rdx);
        set.set("rsi", regs.rsi);
        set.set("rdi", regs.rdi);
        set.set("rbp", regs.rbp);
        set.set("rsp", regs.rsp);
        set.set("r8", regs.r8);
        set.set("r9", regs.r9);
        set.set("r10", regs.r10);
        set.set("r11", regs.r11);
        set.set("r12", regs.r12);
        set.set("r13", regs.r13);
        set.set("r14", regs.r14);
        set.set("r15", regs.r15);
        set.set("rip", regs.rip);
        set.set("eflags", regs.eflags);
        set.set("cs", regs.cs);
        set.set("ds", regs.ds);
        set.set("es", regs.es);
        set.set("fs", regs.fs);
        set.set("gs", regs.gs);
        set.set("ss", regs.ss);
        set.set("fs_base", regs.fs_base);
        set.set("gs_base", regs.gs_base);
        set.set("orig_rax", regs.orig_rax);
        Ok(set)
    }

    fn stack_trace(&self) -> Result<Vec<u64>> {
        let pid = self.require_pid()?;
        let regs = self.read_user_regs()?;
        // Frame-pointer (RBP-chain) walk. Works for code compiled with frame
        // pointers; the bounded depth + strict-ascend guard in `fp_walk`
        // protect against corrupt / omit-frame-pointer stacks. The closure
        // reads one 8-byte qword via PTRACE_PEEKDATA, returning `None` on an
        // unreadable address so the walk terminates cleanly.
        let read_qword = |addr: u64| -> Option<u64> {
            let bytes = read_bytes(pid, addr, 8).ok()?;
            let arr: [u8; 8] = bytes.try_into().ok()?;
            Some(u64::from_le_bytes(arr))
        };
        Ok(fp_walk(regs.rip, regs.rbp, read_qword, MAX_STACK_DEPTH))
    }
}

fn peek_word(pid: pid_t, aligned_ea: u64) -> Result<c_long> {
    // Reset errno; ptrace PEEK returns -1 either as a valid word or an error.
    unsafe {
        *libc::__errno_location() = 0;
    }
    let v = unsafe {
        ptrace(
            PTRACE_PEEKDATA,
            pid,
            aligned_ea as *mut c_void,
            std::ptr::null_mut::<c_void>(),
        )
    };
    let errno = unsafe { *libc::__errno_location() };
    if v == -1 && errno != 0 {
        return Err(DebuggerError::Io(std::io::Error::from_raw_os_error(errno)));
    }
    Ok(v)
}

fn poke_word(pid: pid_t, aligned_ea: u64, value: c_long) -> Result<()> {
    let rc = unsafe {
        ptrace(
            PTRACE_POKEDATA,
            pid,
            aligned_ea as *mut c_void,
            value as *mut c_void,
        )
    };
    if rc < 0 {
        return Err(DebuggerError::Io(std::io::Error::last_os_error()));
    }
    Ok(())
}

fn read_byte(pid: pid_t, ea: u64) -> Result<u8> {
    let bytes = read_bytes(pid, ea, 1)?;
    Ok(bytes[0])
}

fn read_bytes(pid: pid_t, ea: u64, n: usize) -> Result<Vec<u8>> {
    let word_size = std::mem::size_of::<c_long>() as u64;
    let mut out = Vec::with_capacity(n);
    let mut addr = ea;
    while out.len() < n {
        let aligned = addr & !(word_size - 1);
        let offset = (addr - aligned) as usize;
        let word = peek_word(pid, aligned)?;
        let buf = word.to_le_bytes();
        let take = (word_size as usize - offset).min(n - out.len());
        out.extend_from_slice(&buf[offset..offset + take]);
        addr += take as u64;
    }
    Ok(out)
}

fn write_bytes(pid: pid_t, ea: u64, bytes: &[u8]) -> Result<()> {
    let word_size = std::mem::size_of::<c_long>() as u64;
    let mut addr = ea;
    let mut i = 0usize;
    while i < bytes.len() {
        let aligned = addr & !(word_size - 1);
        let offset = (addr - aligned) as usize;
        let mut buf = peek_word(pid, aligned)?.to_le_bytes();
        let take = (word_size as usize - offset).min(bytes.len() - i);
        buf[offset..offset + take].copy_from_slice(&bytes[i..i + take]);
        poke_word(pid, aligned, c_long::from_le_bytes(buf))?;
        addr += take as u64;
        i += take;
    }
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    // Most tests need an actual tracee; we cover only offline behaviors here.

    #[test]
    fn test_int3_constant_value() {
        // x86_64 software breakpoint is INT3 = 0xCC.
        assert_eq!(INT3, 0xCC);
    }

    #[test]
    fn test_default_constructor_has_no_pid() {
        let dbg = LinuxPtraceDebugger::new();
        assert!(dbg.pid.is_none());
        assert!(dbg.soft_bps.is_empty());
        assert!(dbg.hw_bps.is_empty());
    }

    #[test]
    fn test_operations_without_attach_error_not_attached() {
        let mut dbg = LinuxPtraceDebugger::new();
        assert!(matches!(
            dbg.cont().unwrap_err(),
            DebuggerError::NotAttached
        ));
        assert!(matches!(
            dbg.step().unwrap_err(),
            DebuggerError::NotAttached
        ));
        assert!(matches!(
            dbg.set_breakpoint(0x1000).unwrap_err(),
            DebuggerError::NotAttached
        ));
        assert!(matches!(
            dbg.read_memory(0x1000, 4).unwrap_err(),
            DebuggerError::NotAttached
        ));
        assert!(matches!(
            dbg.read_registers().unwrap_err(),
            DebuggerError::NotAttached
        ));
    }

    #[test]
    fn test_remove_breakpoint_unknown_id_errors() {
        let mut dbg = LinuxPtraceDebugger::new();
        assert!(matches!(
            dbg.remove_breakpoint(99).unwrap_err(),
            DebuggerError::BreakpointNotFound(_)
        ));
    }

    // ---- Pure helper tests (no tracee required) -------------------------

    #[test]
    fn test_debugreg_offset() {
        // offsetof(struct user, u_debugreg) == 848 on x86_64; 8 bytes each.
        assert_eq!(debugreg_offset(0), 848);
        assert_eq!(debugreg_offset(3), 848 + 24);
        assert_eq!(debugreg_offset(7), 848 + 56); // DR7 control register
    }

    #[test]
    fn test_dr7_enable_execute_single_slots() {
        // Slot 0: local-enable bit 0 set, plus LE bit 8. Control nibble 0.
        assert_eq!(dr7_enable_execute(0, &[0]), (1 << 0) | (1 << 8));
        // Slot 1: local-enable bit 2.
        assert_eq!(dr7_enable_execute(0, &[1]), (1 << 2) | (1 << 8));
        // Slot 2: local-enable bit 4.
        assert_eq!(dr7_enable_execute(0, &[2]), (1 << 4) | (1 << 8));
        // Slot 3: local-enable bit 6.
        assert_eq!(dr7_enable_execute(0, &[3]), (1 << 6) | (1 << 8));
    }

    #[test]
    fn test_dr7_enable_execute_multiple_slots() {
        let dr7 = dr7_enable_execute(0, &[0, 1, 2, 3]);
        // All four local-enable bits (0,2,4,6) and the LE bit (8).
        let expected = (1 << 0) | (1 << 2) | (1 << 4) | (1 << 6) | (1 << 8);
        assert_eq!(dr7, expected);
        // Execute breakpoints clear the RW/LEN control nibbles (bits 16..32).
        assert_eq!(dr7 >> 16, 0);
    }

    #[test]
    fn test_dr7_enable_execute_empty_is_noop() {
        // No slots → no enable bits, no LE bit, value unchanged.
        assert_eq!(dr7_enable_execute(0, &[]), 0);
        assert_eq!(dr7_enable_execute(0xdead_beef, &[]), 0xdead_beef);
    }

    #[test]
    fn test_dr7_enable_execute_clears_stale_control_nibble() {
        // A stale RW/LEN nibble for slot 0 must be cleared for execute mode.
        let stale = 0b1111u64 << 16; // slot 0 RW=11, LEN=11
        let dr7 = dr7_enable_execute(stale, &[0]);
        assert_eq!(dr7, (1 << 0) | (1 << 8));
        assert_eq!(dr7 >> 16, 0);
    }

    #[test]
    fn test_fp_walk_simple_chain() {
        // Build a fake stack: three frames chained via RBP.
        //   rbp0 -> [saved=rbp1, ret=0x1111]
        //   rbp1 -> [saved=rbp2, ret=0x2222]
        //   rbp2 -> [saved=0,    ret=0x3333]
        let (rbp0, rbp1, rbp2) = (0x7000u64, 0x7100u64, 0x7200u64);
        let mem = move |addr: u64| -> Option<u64> {
            match addr {
                a if a == rbp0 => Some(rbp1),
                a if a == rbp0 + 8 => Some(0x1111),
                a if a == rbp1 => Some(rbp2),
                a if a == rbp1 + 8 => Some(0x2222),
                a if a == rbp2 => Some(0), // top frame: saved rbp null
                a if a == rbp2 + 8 => Some(0x3333),
                _ => None,
            }
        };
        let frames = fp_walk(0xdead, rbp0, mem, 64);
        assert_eq!(frames, vec![0xdead, 0x1111, 0x2222, 0x3333]);
    }

    #[test]
    fn test_fp_walk_stops_on_null_rbp() {
        let frames = fp_walk(0xabc, 0, |_| Some(0), 64);
        assert_eq!(frames, vec![0xabc]);
    }

    #[test]
    fn test_fp_walk_stops_on_null_return_addr() {
        // saved rbp ascends, but return address is null -> stop without push.
        let rbp = 0x9000u64;
        let mem = move |addr: u64| -> Option<u64> {
            match addr {
                a if a == rbp => Some(0x9100),
                a if a == rbp + 8 => Some(0),
                _ => None,
            }
        };
        let frames = fp_walk(0x1, rbp, mem, 64);
        assert_eq!(frames, vec![0x1]);
    }

    #[test]
    fn test_fp_walk_stops_on_non_ascending_rbp() {
        // Return addr is valid (pushed), but next rbp does not ascend, so
        // the walk records that frame then halts to avoid a cycle.
        let rbp = 0x8000u64;
        let mem = move |addr: u64| -> Option<u64> {
            match addr {
                a if a == rbp => Some(0x7000), // saved rbp < current rbp
                a if a == rbp + 8 => Some(0x4444),
                _ => None,
            }
        };
        let frames = fp_walk(0x1, rbp, mem, 64);
        assert_eq!(frames, vec![0x1, 0x4444]);
    }

    #[test]
    fn test_fp_walk_stops_on_unreadable_memory() {
        // Reader always fails -> only frame 0 survives.
        let frames = fp_walk(0x2, 0x5000, |_| None, 64);
        assert_eq!(frames, vec![0x2]);
    }

    #[test]
    fn test_fp_walk_respects_max_depth() {
        // Infinite strictly-ascending chain; bound to max_depth frames added.
        let mem = |addr: u64| -> Option<u64> {
            // [rbp] -> rbp + 0x100 (ascends), [rbp+8] -> nonzero ret.
            if addr.is_multiple_of(0x100) {
                Some(addr + 0x100)
            } else {
                Some(0xface)
            }
        };
        let frames = fp_walk(0x0, 0x1000, mem, 3);
        // frame 0 + at most max_depth return addresses.
        assert_eq!(frames.len(), 1 + 3);
    }

    #[test]
    fn test_int3_byte_overwrite_logic() {
        // Verify the byte-overwrite path doesn't depend on attach.
        // We assemble a fake 8-byte word and patch the second byte.
        let word: c_long = 0x4142434445464748;
        let mut buf = word.to_le_bytes();
        buf[1] = INT3;
        let new_word = c_long::from_le_bytes(buf);
        let new_bytes = new_word.to_le_bytes();
        assert_eq!(new_bytes[0], 0x48);
        assert_eq!(new_bytes[1], INT3);
        assert_eq!(new_bytes[2], 0x46);
    }
}
