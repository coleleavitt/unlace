//! Linux syscall simulator — sandboxed.
//!
//! Implements the most-common syscalls needed to run hello_world.elf
//! under the interpreter: write, read, brk, mmap, exit. fork/exec/clone
//! are explicitly NOT implemented for safety.

use crate::memory::MemoryMap;

/// Effect of a simulated syscall on emulator state.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum SyscallOutcome {
    /// Return this value in the syscall-return register.
    Ok(u64),
    /// Process exited with this status.
    Exit(i32),
    /// Syscall not implemented; emulator should fault.
    Unimplemented,
    /// Sandbox denied the call.
    Denied,
}

/// Capture a single syscall event for tracing.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SyscallTrace {
    pub nr: u64,
    pub args: [u64; 6],
    pub outcome: SyscallOutcome,
}

/// Linux syscall numbers we recognize (x86_64). Subset.
pub mod nr {
    pub const READ: u64 = 0;
    pub const WRITE: u64 = 1;
    pub const OPEN: u64 = 2;
    pub const CLOSE: u64 = 3;
    pub const MMAP: u64 = 9;
    pub const BRK: u64 = 12;
    pub const EXIT: u64 = 60;
    pub const FORK: u64 = 57;
    pub const EXECVE: u64 = 59;
    pub const CLONE: u64 = 56;
}

/// Run a syscall. Reads `args[i]` for the standard Linux x86_64 ABI.
pub fn dispatch(nr_value: u64, args: [u64; 6], mem: &MemoryMap) -> SyscallOutcome {
    match nr_value {
        nr::EXIT => SyscallOutcome::Exit(args[0] as i32),
        nr::FORK | nr::EXECVE | nr::CLONE => SyscallOutcome::Denied,
        nr::WRITE => simulate_write(args[0], args[1], args[2], mem),
        nr::READ => SyscallOutcome::Ok(0), // stub: report 0 bytes read
        nr::BRK => SyscallOutcome::Ok(args[0]),
        nr::MMAP => SyscallOutcome::Ok(args[0]),
        nr::OPEN | nr::CLOSE => SyscallOutcome::Ok(0),
        _ => SyscallOutcome::Unimplemented,
    }
}

fn simulate_write(fd: u64, buf: u64, n: u64, mem: &MemoryMap) -> SyscallOutcome {
    if fd != 1 && fd != 2 {
        // Only stdout/stderr; everything else is denied for safety.
        return SyscallOutcome::Denied;
    }
    let bytes = mem.read(buf, n as usize).unwrap_or_default();
    let s = String::from_utf8_lossy(&bytes);
    // Forward to actual stdout/stderr.
    if fd == 1 {
        print!("{s}");
    } else {
        eprint!("{s}");
    }
    SyscallOutcome::Ok(bytes.len() as u64)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_syscall_exit_returns_exit_outcome() {
        let m = MemoryMap::new();
        let r = dispatch(nr::EXIT, [42, 0, 0, 0, 0, 0], &m);
        assert_eq!(r, SyscallOutcome::Exit(42));
    }

    #[test]
    fn test_syscall_fork_exec_denied() {
        let m = MemoryMap::new();
        assert_eq!(dispatch(nr::FORK, [0; 6], &m), SyscallOutcome::Denied);
        assert_eq!(dispatch(nr::EXECVE, [0; 6], &m), SyscallOutcome::Denied);
        assert_eq!(dispatch(nr::CLONE, [0; 6], &m), SyscallOutcome::Denied);
    }

    #[test]
    fn test_syscall_unknown_returns_unimplemented() {
        let m = MemoryMap::new();
        assert_eq!(
            dispatch(0xDEAD, [0; 6], &m),
            SyscallOutcome::Unimplemented
        );
    }

    #[test]
    fn test_syscall_write_unprivileged_fd_denied() {
        let mut m = MemoryMap::new();
        m.map(0x1000, b"hello", (true, false, false));
        let r = dispatch(nr::WRITE, [99, 0x1000, 5, 0, 0, 0], &m);
        assert_eq!(r, SyscallOutcome::Denied);
    }
}
