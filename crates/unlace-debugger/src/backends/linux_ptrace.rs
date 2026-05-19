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
//! and on hit-and-resume.
//!
//! References:
//! - `man 2 ptrace`
//! - `references/ida/plugins/linux_user/all/` — IDA's Linux debugger
//! - `references/ida/plugins/gdb_user/all/`   — reference for ptrace-shape ops

use std::mem::MaybeUninit;

use libc::{
    PTRACE_ATTACH, PTRACE_CONT, PTRACE_DETACH, PTRACE_GETREGS, PTRACE_PEEKDATA, PTRACE_POKEDATA,
    PTRACE_SETREGS, PTRACE_SINGLESTEP, WIFEXITED, WIFSIGNALED, WIFSTOPPED, WSTOPSIG, c_long,
    c_void, pid_t, ptrace, user_regs_struct, waitpid,
};

use crate::breakpoint::BreakpointKind;
use crate::regs::RegisterSet;
use crate::{BreakpointTable, Debugger, DebuggerError, Result, StopReason};

const INT3: u8 = 0xCC;

/// Software-breakpoint record with original byte saved for restore.
#[derive(Clone, Debug)]
struct SoftBpRecord {
    id: u32,
    ea: u64,
    original_byte: u8,
}

/// Real ptrace-based debugger.
#[derive(Default)]
pub struct LinuxPtraceDebugger {
    pid: Option<pid_t>,
    table: BreakpointTable,
    soft_bps: Vec<SoftBpRecord>,
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
        // Naive frame-pointer walk; works for non-omit-frame-pointer code.
        let mut frames = vec![regs.rip];
        let mut rbp = regs.rbp;
        for _ in 0..64 {
            if rbp == 0 {
                break;
            }
            let next = match read_bytes(pid, rbp, 16) {
                Ok(b) if b.len() == 16 => b,
                _ => break,
            };
            let saved_rbp = u64::from_le_bytes(next[0..8].try_into().unwrap());
            let return_addr = u64::from_le_bytes(next[8..16].try_into().unwrap());
            if return_addr == 0 {
                break;
            }
            frames.push(return_addr);
            rbp = saved_rbp;
        }
        Ok(frames)
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
