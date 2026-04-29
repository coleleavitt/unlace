//! Control-flow structuring: recover `if`/`while`/`switch` from SSA CFGs.

pub mod hir;
pub mod structurer;

pub use hir::{HirFunction, HirNode, LabelId, SwitchCase};
pub use structurer::{structure, StructureError};
