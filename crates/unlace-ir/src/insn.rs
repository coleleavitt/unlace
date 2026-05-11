//! IR instruction type.

use smallvec::SmallVec;

use crate::{IrOp, Varnode};

/// A single IR instruction: one opcode applied to Varnode operands.
///
/// An instruction optionally produces an `output` Varnode, reads zero or more
/// `inputs`, and is located at machine address `addr`. When `guard` is set,
/// the instruction executes only if the named architecture condition holds —
/// today this is exclusively populated by the ARM/Thumb lifter for insns
/// inside an `IT` block (cond codes 0..=15, ARM ARM A8.3 encoding).
#[derive(Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct IrInsn {
    pub op: IrOp,
    pub output: Option<Varnode>,
    pub inputs: SmallVec<[Varnode; 3]>,
    /// Machine address this instruction was lifted from.
    pub addr: u64,
    /// Architecture condition code that guards execution, or `None` for
    /// unconditional insns.
    pub guard: Option<u8>,
}

impl IrInsn {
    /// Construct a new instruction with output.
    pub fn with_output(
        op: IrOp,
        output: Varnode,
        inputs: impl Into<SmallVec<[Varnode; 3]>>,
        addr: u64,
    ) -> Self {
        Self {
            op,
            output: Some(output),
            inputs: inputs.into(),
            addr,
            guard: None,
        }
    }

    /// Construct an instruction without output (e.g. STORE, BRANCH).
    pub fn without_output(op: IrOp, inputs: impl Into<SmallVec<[Varnode; 3]>>, addr: u64) -> Self {
        Self {
            op,
            output: None,
            inputs: inputs.into(),
            addr,
            guard: None,
        }
    }
}
