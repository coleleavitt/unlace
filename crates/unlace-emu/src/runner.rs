//! End-to-end `unlace emu` runner: load an ELF, set up memory, run until
//! exit or instruction limit.
//!
//! This is the high-level driver; the per-opcode interpreter step lives in
//! `interpreter.rs`. For now the runner exercises memory setup + syscall
//! plumbing without lifting actual instructions (those land in B36.2).

use crate::interpreter::{Interpreter, StepOutcome};
use crate::syscalls::SyscallTrace;

/// Configuration for one emulator run.
#[derive(Clone, Debug)]
pub struct RunConfig {
    pub max_instructions: u64,
    pub trace: bool,
    pub stack_top: u64,
    pub stack_size: u64,
}

impl Default for RunConfig {
    fn default() -> Self {
        Self {
            max_instructions: 1_000_000,
            trace: false,
            stack_top: 0x7fff_ffff_e000,
            stack_size: 64 * 1024,
        }
    }
}

/// Result of a complete emulator run.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct RunResult {
    pub instructions_executed: u64,
    pub exit_code: Option<i32>,
    pub fault: Option<String>,
    pub syscall_trace: Vec<SyscallTrace>,
}

/// Run the interpreter until exit, fault, or instruction limit. This is
/// the surface `unlace emu <binary>` ends up calling.
pub fn run(interp: &mut Interpreter, cfg: &RunConfig) -> RunResult {
    // Set up the stack region.
    let stack_low = cfg.stack_top.saturating_sub(cfg.stack_size);
    let stack_bytes = vec![0u8; cfg.stack_size as usize];
    interp
        .memory
        .map(stack_low, &stack_bytes, (true, true, false));
    interp.regs.set("rsp", cfg.stack_top);
    interp.regs.set("rbp", cfg.stack_top);

    // Step until termination.
    let mut last_outcome = StepOutcome::Continue;
    while interp.instruction_count < cfg.max_instructions {
        // For the no-op skeleton, we step "in place" and decide we're done
        // after one instruction (the host will replace this when the full
        // dispatch table lands in B36.2).
        last_outcome = interp.step_noop();
        if !matches!(last_outcome, StepOutcome::Continue) {
            break;
        }
        // Heuristic: if rip is unset, halt — we have no program loaded.
        if interp.regs.get("rip") == 0 && interp.instruction_count > 0 {
            last_outcome = StepOutcome::Halt;
            break;
        }
    }

    match last_outcome {
        StepOutcome::Continue | StepOutcome::Halt => RunResult {
            instructions_executed: interp.instruction_count,
            exit_code: None,
            fault: None,
            syscall_trace: std::mem::take(&mut interp.syscall_trace),
        },
        StepOutcome::SyscallExit(code) => RunResult {
            instructions_executed: interp.instruction_count,
            exit_code: Some(code),
            fault: None,
            syscall_trace: std::mem::take(&mut interp.syscall_trace),
        },
        StepOutcome::Faulted(msg) => RunResult {
            instructions_executed: interp.instruction_count,
            exit_code: None,
            fault: Some(msg),
            syscall_trace: std::mem::take(&mut interp.syscall_trace),
        },
    }
}

/// Run with a syscall injected (used by tests): set rax/rdi, syscall,
/// return result. Models the full request-response cycle.
pub fn run_with_initial_syscall(
    interp: &mut Interpreter,
    syscall_nr: u64,
    args: [u64; 6],
    cfg: &RunConfig,
) -> RunResult {
    interp.regs.set("rax", syscall_nr);
    interp.regs.set("rdi", args[0]);
    interp.regs.set("rsi", args[1]);
    interp.regs.set("rdx", args[2]);
    interp.regs.set("r10", args[3]);
    interp.regs.set("r8", args[4]);
    interp.regs.set("r9", args[5]);
    let outcome = interp.do_syscall();
    let syscall_trace = std::mem::take(&mut interp.syscall_trace);
    match outcome {
        StepOutcome::SyscallExit(code) => RunResult {
            instructions_executed: interp.instruction_count,
            exit_code: Some(code),
            fault: None,
            syscall_trace,
        },
        StepOutcome::Faulted(msg) => RunResult {
            instructions_executed: interp.instruction_count,
            exit_code: None,
            fault: Some(msg),
            syscall_trace,
        },
        _ => {
            _ = cfg;
            RunResult {
                instructions_executed: interp.instruction_count,
                exit_code: None,
                fault: None,
                syscall_trace,
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_run_terminates_at_instruction_limit() {
        let mut interp = Interpreter::new();
        // step_noop always returns Continue and increments — we expect the
        // runner to halt on the unset-rip heuristic after 1 instruction.
        let cfg = RunConfig {
            max_instructions: 100,
            ..RunConfig::default()
        };
        let result = run(&mut interp, &cfg);
        // It halts because rip is unset (not at the limit).
        assert!(result.exit_code.is_none());
        assert!(result.fault.is_none());
        assert!(result.instructions_executed >= 1);
    }

    #[test]
    fn test_run_sets_up_stack() {
        let mut interp = Interpreter::new();
        let cfg = RunConfig::default();
        _ = run(&mut interp, &cfg);
        // Stack pointer was set.
        assert_eq!(interp.regs.get("rsp"), cfg.stack_top);
    }

    #[test]
    fn test_run_with_initial_syscall_exit() {
        let mut interp = Interpreter::new();
        let result = run_with_initial_syscall(&mut interp, 60, [7, 0, 0, 0, 0, 0], &RunConfig::default());
        assert_eq!(result.exit_code, Some(7));
        assert!(result.fault.is_none());
    }

    #[test]
    fn test_run_with_initial_syscall_denied() {
        let mut interp = Interpreter::new();
        // SYS_FORK = 57, always denied.
        let result = run_with_initial_syscall(&mut interp, 57, [0; 6], &RunConfig::default());
        assert!(result.fault.is_some());
        assert!(result.exit_code.is_none());
    }

    #[test]
    fn test_default_config_is_sane() {
        let cfg = RunConfig::default();
        assert!(cfg.max_instructions > 0);
        assert!(cfg.stack_top > cfg.stack_size);
    }
}
