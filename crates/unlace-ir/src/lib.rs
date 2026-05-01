//! Intermediate representation for the unlace decompiler.
//!
//! Models a P-code-style LIR with 75 opcodes (v1.0 frozen), suitable for
//! multi-architecture lifting and subsequent analysis passes.
//!
//! See `docs/ir-spec.md` for the full specification.

mod arch;
mod block;
pub mod cfg;
mod display;
mod function;
mod insn;
mod lifter;
mod op;
mod space;
pub mod ssa;
pub mod types;
mod varnode;
pub mod xref;

pub use arch::ArchId;
pub use block::{BasicBlock, BlockId};
pub use function::Function;
pub use insn::IrInsn;
pub use lifter::{LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile};
pub use op::{IROP_COUNT, IrOp};
pub use space::SpaceId;
pub use varnode::Varnode;
