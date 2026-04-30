//! Control-flow structuring: recover `if`/`while`/`switch` from SSA CFGs.

pub mod hir;
pub mod structurer;
pub mod switch_recovery;
pub mod ternary_recovery;

pub use hir::{HirFunction, HirNode, LabelId, SwitchCase};
pub use structurer::{recover_for_loops, structure, StructureError};
pub use switch_recovery::recover_switches;
pub use ternary_recovery::ternary_recovery;
