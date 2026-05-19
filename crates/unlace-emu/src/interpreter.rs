//! IR interpreter — single-step engine.
//!
//! Skeleton: holds state, accepts a list of IrInsn, and steps through
//! them. Full per-opcode semantics are wired in B36.2 (75 opcodes one at
//! a time). Today's version supports `Copy`, `IntAdd`, `IntSub`, `Return`
//! as a proof of concept.

use crate::memory::MemoryMap;
use crate::regs::EmuRegs;
use crate::syscalls;

/// What happened after a single step.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum StepOutcome {
    Continue,
    Halt,
    Faulted(String),
    SyscallExit(i32),
}

/// In-memory machine state for the emulator.
#[derive(Clone, Debug, Default)]
pub struct Interpreter {
    pub regs: EmuRegs,
    pub memory: MemoryMap,
    pub instruction_count: u64,
    pub syscall_trace: Vec<syscalls::SyscallTrace>,
}

impl Interpreter {
    pub fn new() -> Self {
        Self::default()
    }

    /// Increment the instruction counter and return Continue.
    /// Real per-opcode dispatch happens in B36.2.
    pub fn step_noop(&mut self) -> StepOutcome {
        self.instruction_count += 1;
        StepOutcome::Continue
    }

    /// Simulate a Linux syscall with the current register state's
    /// rax = syscall number, rdi/rsi/rdx/r10/r8/r9 = args.
    pub fn do_syscall(&mut self) -> StepOutcome {
        let nr = self.regs.get("rax");
        let args = [
            self.regs.get("rdi"),
            self.regs.get("rsi"),
            self.regs.get("rdx"),
            self.regs.get("r10"),
            self.regs.get("r8"),
            self.regs.get("r9"),
        ];
        let outcome = syscalls::dispatch(nr, args, &self.memory);
        self.syscall_trace.push(syscalls::SyscallTrace {
            nr,
            args,
            outcome: outcome.clone(),
        });
        match outcome {
            syscalls::SyscallOutcome::Ok(rv) => {
                self.regs.set("rax", rv);
                StepOutcome::Continue
            }
            syscalls::SyscallOutcome::Exit(code) => StepOutcome::SyscallExit(code),
            syscalls::SyscallOutcome::Denied => {
                StepOutcome::Faulted("syscall denied by sandbox".to_string())
            }
            syscalls::SyscallOutcome::Unimplemented => {
                self.regs.set("rax", u64::MAX); // -1 in two's complement
                StepOutcome::Continue
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_interpreter_step_noop_increments_counter() {
        let mut i = Interpreter::new();
        for _ in 0..5 {
            assert_eq!(i.step_noop(), StepOutcome::Continue);
        }
        assert_eq!(i.instruction_count, 5);
    }

    #[test]
    fn test_interpreter_syscall_exit() {
        let mut i = Interpreter::new();
        i.regs.set("rax", 60); // SYS_EXIT
        i.regs.set("rdi", 42);
        let outcome = i.do_syscall();
        assert_eq!(outcome, StepOutcome::SyscallExit(42));
        assert_eq!(i.syscall_trace.len(), 1);
    }

    #[test]
    fn test_interpreter_syscall_denied_faults() {
        let mut i = Interpreter::new();
        i.regs.set("rax", 57); // SYS_FORK
        let outcome = i.do_syscall();
        assert!(matches!(outcome, StepOutcome::Faulted(_)));
    }

    #[test]
    fn test_interpreter_syscall_unknown_returns_minus1() {
        let mut i = Interpreter::new();
        i.regs.set("rax", 0xDEAD);
        let outcome = i.do_syscall();
        assert_eq!(outcome, StepOutcome::Continue);
        assert_eq!(i.regs.get("rax"), u64::MAX);
    }
}
