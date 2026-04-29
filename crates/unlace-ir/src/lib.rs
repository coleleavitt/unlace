//! Intermediate representation for the unlace decompiler.
//!
//! Models a P-code-style LIR with 75 opcodes (v1.0 frozen), suitable for
//! multi-architecture lifting and subsequent analysis passes.
//!
//! See `docs/ir-spec.md` for the full specification.

mod space;
mod varnode;
mod op;
mod insn;
mod block;
mod function;
mod display;
mod arch;
mod lifter;
pub mod cfg;
pub mod ssa;

pub use space::SpaceId;
pub use varnode::Varnode;
pub use op::{IrOp, IROP_COUNT};
pub use insn::IrInsn;
pub use block::{BlockId, BasicBlock};
pub use function::Function;
pub use arch::ArchId;
pub use lifter::{Lifter, LiftedInsn, LiftError, RegisterFile, RegisterDef};
