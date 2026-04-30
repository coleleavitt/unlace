//! Control-flow structuring: recover `if`/`while`/`switch` from SSA CFGs.

pub mod hir;
pub mod structurer;
pub mod switch_recovery;
pub mod ternary_recovery;

pub use hir::{HirFunction, HirNode, LabelId, SwitchCase};
pub use structurer::{recover_for_loops, structure, structure_with_landing_pads, StructureError};
pub use switch_recovery::recover_switches;
pub use ternary_recovery::ternary_recovery;
