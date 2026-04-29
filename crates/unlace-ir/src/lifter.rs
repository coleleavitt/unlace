//! Lifter trait and supporting types for architecture-specific instruction lifting.

use crate::{ArchId, IrInsn, Varnode};

/// Result of lifting a single machine instruction into IR.
#[derive(Clone, Debug)]
pub struct LiftedInsn {
    /// The IR instructions this machine instruction expands to.
    pub ir_ops: Vec<IrInsn>,
    /// Length of the machine instruction in bytes.
    pub len: usize,
}

/// A named register in an architecture's register file.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct RegisterDef {
    pub name: &'static str,
    pub varnode: Varnode,
}

/// Complete register file for an architecture.
#[derive(Clone, Debug)]
pub struct RegisterFile {
    pub registers: Vec<RegisterDef>,
}

/// Errors that can occur during instruction lifting.
#[derive(Debug, thiserror::Error)]
pub enum LiftError {
    #[error("decode error: {0}")]
    Decode(String),
    #[error("unsupported instruction")]
    Unsupported,
    #[error("buffer too short to decode instruction")]
    ShortBuffer,
}

/// Architecture-specific instruction lifter.
///
/// Implementations decode machine instructions and emit IR ops.
pub trait Lifter: Send + Sync {
    fn arch(&self) -> ArchId;
    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError>;
    fn register_file(&self) -> &RegisterFile;
}
