//! IR-level interpreter for unlace.
//!
//! Walks `unlace-ir::IrInsn` directly and updates a [`MachineState`]:
//! register file, memory map, syscall trace. Used for:
//! - Sandboxed malware analysis
//! - ROP / shellcode triage
//! - Coverage-guided fuzz harnesses
//! - Single-step debug backend (paired with `unlace-debugger`)
//!
//! Reference: research/ida-hexrays-docs/pdfs/bh-us-18-guilfanov-decompiler-internals-microcode.pdf
//! for the canonical IR-opcode semantics.

pub mod interpreter;
pub mod memory;
pub mod regs;
pub mod runner;
pub mod syscalls;

pub use interpreter::{Interpreter, StepOutcome};
pub use memory::MemoryMap;
pub use regs::EmuRegs;
pub use runner::{RunConfig, RunResult, run, run_with_initial_syscall};
