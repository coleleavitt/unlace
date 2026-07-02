//! Intermediate representation for the unlace decompiler.
//!
//! Models a P-code-style LIR with 75 opcodes (v1.0 frozen), suitable for
//! multi-architecture lifting and subsequent analysis passes.
//!
//! See `docs/ir-spec.md` for the full specification.

pub mod alias;
mod arch;
pub mod arch_support;
mod block;
pub mod cfg;
pub mod data_layout;
pub mod data_xrefs;
mod display;
mod function;
mod insn;
pub mod known_bits;
mod lifter;
pub mod lvar;
pub mod memory_ssa;
mod op;
pub mod reg_alias;
mod space;
pub mod ssa;
pub mod stack;
pub mod tinfo;
pub mod types;
pub mod value_lattice;
mod varnode;
pub mod verify;
pub mod xref;

pub use alias::AliasCategory;
pub use arch::ArchId;
pub use block::{BasicBlock, BlockId};
pub use data_layout::{DataLayout, Endianness};
pub use function::Function;
pub use insn::IrInsn;
pub use lifter::{LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile};
pub use op::{IROP_COUNT, IrOp};
pub use space::SpaceId;
pub use ssa::Maturity;
pub use tinfo::{
    CallingConv, MemberPathEntry, ResolvedMember, TEnumVariant, TField, TInfo, TQualifiers,
    TypeSource,
};
pub use value_lattice::ValueLattice;
pub use varnode::Varnode;
pub use verify::{
    VerifyError, prune_dangling_metadata, verify_ssa_function, verify_ssa_function_pipeline,
    verify_ssa_function_structural,
};
