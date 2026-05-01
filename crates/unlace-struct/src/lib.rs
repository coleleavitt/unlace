//! Control-flow structuring: recover `if`/`while`/`switch` from SSA CFGs.

pub mod block_merge;
pub mod cross_jump_revert;
pub mod eager_returns;
pub mod flatten_if_else;
pub mod goto_to_break;
pub mod goto_to_continue;
pub mod hir;
pub mod if_to_switch;
pub mod irreducible;
pub mod node_split;
pub mod return_merge;
pub mod short_circuit;
pub mod structurer;
pub mod switch_recovery;
pub mod tail_duplication;
pub mod ternary_recovery;

pub use block_merge::merge_linear_blocks;
pub use cross_jump_revert::cross_jump_revert;
pub use eager_returns::eager_returns;
pub use flatten_if_else::{flatten_if_else_chains, simplify_chain_conditions};
pub use goto_to_break::goto_to_break;
pub use goto_to_continue::goto_to_continue;
pub use hir::{HirFunction, HirNode, LabelId, SwitchCase};
pub use if_to_switch::if_chain_to_switch;
pub use irreducible::{IrreducibleRegion, detect_irreducible_regions};
pub use node_split::split_irreducible_entries;
pub use return_merge::return_merge;
pub use short_circuit::short_circuit_recovery;
pub use structurer::{
    StructureError, recover_for_loops, structure, structure_preserve_returns,
    structure_preserve_returns_with_landing_pads, structure_with_landing_pads,
};
pub use switch_recovery::{
    JumpTable, JumpTableKind, SectionPerms, SectionView, TableEndian, find_default_target,
    read_jump_table, recover_switches, refine_switches_with_tables, validate_table_base,
};
pub use tail_duplication::tail_duplicate_small_blocks;
pub use ternary_recovery::ternary_recovery;
