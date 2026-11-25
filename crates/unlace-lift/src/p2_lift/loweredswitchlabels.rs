//! Preserve case-label signedness while recovering a lowered switch.
//!
//! A lowered cascade's required range comparisons carry the controlling C
//! interpretation: `INT_SLESS`/`INT_SLESSEQUAL` are signed and
//! `INT_LESS`/`INT_LESSEQUAL` are unsigned. `INT_ZEXT` and `INT_SEXT` on the
//! canonical selector path independently prove unsigned and signed widening.
//! Equality-case bit patterns do not vote, but their widening paths must agree.
//! Recovery therefore accepts one consistent interpretation and declines mixed,
//! conflicting, or missing evidence.

use unlace_base::marshal::ElementId;
use unlace_num::opcodes::OpCode;

/// Marshaling element `<loweredswitchlabels>` (unlace 4000+ range).
pub const ELEM_LOWEREDSWITCHLABELS: ElementId = ElementId::new("loweredswitchlabels", 4093);

/// Signedness proved by a lowered-switch range comparison.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum LoweredSwitchSignedness {
    Signed,
    Unsigned,
}

impl LoweredSwitchSignedness {
    pub fn from_range_opcode(opcode: OpCode) -> Option<Self> {
        match opcode {
            OpCode::CPUI_INT_SLESS | OpCode::CPUI_INT_SLESSEQUAL => Some(Self::Signed),
            OpCode::CPUI_INT_LESS | OpCode::CPUI_INT_LESSEQUAL => Some(Self::Unsigned),
            _ => None,
        }
    }

    pub fn signed_labels(self) -> bool {
        self == Self::Signed
    }
}

/// Reconcile one range-comparison fact with the cascade's controlling fact.
pub fn reconcile_range_signedness(
    current: Option<LoweredSwitchSignedness>,
    next: Option<LoweredSwitchSignedness>,
) -> Option<LoweredSwitchSignedness> {
    let next = next?;
    match current {
        None => Some(next),
        Some(cur) if cur == next => Some(cur),
        Some(_) => None,
    }
}

#[cfg(test)]
mod tests;
