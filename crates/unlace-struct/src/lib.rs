//! Control-flow structuring: recover `if`/`while`/`switch` from SSA CFGs.

pub mod block_merge;
pub mod cross_jump_revert;
pub mod eager_returns;
pub mod hir;
pub mod if_to_switch;
pub mod short_circuit;
pub mod structurer;
pub mod switch_recovery;
pub mod ternary_recovery;

pub use block_merge::merge_linear_blocks;
pub use cross_jump_revert::cross_jump_revert;
pub use eager_returns::eager_returns;
pub use hir::{HirFunction, HirNode, LabelId, SwitchCase};
pub use if_to_switch::if_chain_to_switch;
pub use short_circuit::short_circuit_recovery;
pub use structurer::{
    recover_for_loops, structure, structure_preserve_returns,
    structure_preserve_returns_with_landing_pads, structure_with_landing_pads, StructureError,
};
pub use switch_recovery::recover_switches;
pub use ternary_recovery::ternary_recovery;
