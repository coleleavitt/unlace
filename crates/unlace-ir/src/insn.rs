//! IR instruction type.

use smallvec::SmallVec;

use crate::{AliasCategory, IrOp, Varnode};

/// A single IR instruction: one opcode applied to Varnode operands.
///
/// An instruction optionally produces an `output` Varnode, reads zero or more
/// `inputs`, and is located at machine address `addr`. When `guard` is set,
/// the instruction executes only if the named architecture condition holds —
/// today this is exclusively populated by the ARM/Thumb lifter for insns
/// inside an `IT` block (cond codes 0..=15, ARM ARM A8.3 encoding).
///
/// For `LOAD`/`STORE` opcodes, `category` may carry an [`AliasCategory`]
/// tag describing the kind of memory accessed. `None` (the default)
/// preserves pre-existing pass behavior — passes treat it as `Unknown`.
/// The tag is purely additive metadata: IR text dumps and golden files
/// are unaffected.
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
    /// Optional aliasing / pointer-provenance category for `LOAD`/`STORE`
    /// instructions. `None` means "not categorized"; passes fall back to
    /// their existing conservative behavior. See [`AliasCategory`] for
    /// the barrier semantics applied to `Mmio` / `Volatile`.
    ///
    /// Serialized with a default of `None` so old IR blobs without this
    /// field deserialize cleanly.
    #[serde(default, skip_serializing_if = "Option::is_none")]
    pub category: Option<AliasCategory>,
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
            category: None,
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
            category: None,
        }
    }

    /// Returns the alias category, treating `None` as `AliasCategory::Unknown`.
    /// Useful for passes that want a uniform classification without
    /// distinguishing "not yet tagged" from "explicitly unknown".
    pub fn category_or_unknown(&self) -> AliasCategory {
        self.category.unwrap_or(AliasCategory::Unknown)
    }

    /// Builder: attach an [`AliasCategory`] tag. Only meaningful for
    /// `LOAD` and `STORE` opcodes; other ops accept it silently so call
    /// sites don't need a type guard.
    pub fn with_category(mut self, category: AliasCategory) -> Self {
        self.category = Some(category);
        self
    }
}
