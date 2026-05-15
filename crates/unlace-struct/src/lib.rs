//! Control-flow structuring: recover `if`/`while`/`switch` from SSA CFGs.

pub mod bitfield_recovery;
pub mod block_merge;
pub mod cmov_switch;
pub mod condition_dup;
pub mod continue_break;
pub mod cpp_eh;
pub mod cross_jump_revert;
pub mod eager_returns;
pub mod empty_if_cleanup;
pub mod flatten_if_else;
pub mod goto_elim;
pub mod goto_to_break;
pub mod goto_to_continue;
pub mod hir;
pub mod hir_cse;
pub mod hir_licm;
pub mod if_to_switch;
pub mod irreducible;
pub mod label_cleanup;
pub mod label_fallthrough;
pub mod label_hoist;
pub mod loop_normalize;
pub mod node_split;
pub mod region_structurer;
pub mod return_merge;
pub mod seh_lower;
pub mod short_circuit;
pub mod structurer;
pub mod switch_recovery;
pub mod tail_duplication;
pub mod ternary_recovery;
pub mod while_to_for;

pub use block_merge::merge_linear_blocks;
pub use cmov_switch::recover_cmov_switches;
pub use condition_dup::duplicate_goto_conditions;
pub use continue_break::detect_continue_break;
pub use cpp_eh::cpp_eh_regions_to_seh;
pub use cross_jump_revert::cross_jump_revert;
pub use eager_returns::eager_returns;
pub use empty_if_cleanup::cleanup_empty_ifs;
pub use flatten_if_else::{flatten_if_else_chains, simplify_chain_conditions};
pub use goto_elim::eliminate_forward_gotos;
pub use goto_to_break::goto_to_break;
pub use goto_to_continue::goto_to_continue;
pub use hir::{HirFunction, HirNode, LabelId, ObjcBlockCapture, SwitchCase};
pub use hir_cse::eliminate_common_subexpressions;
pub use hir_licm::hoist_loop_invariants;
pub use if_to_switch::{if_chain_to_switch, range_chain_to_switch};
pub use irreducible::{IrreducibleRegion, detect_irreducible_regions};
pub use label_cleanup::cleanup_unreachable_labels;
pub use label_fallthrough::collapse_label_fallthroughs;
pub use label_hoist::hoist_cross_branch_labels;
pub use loop_normalize::normalize_dowhile_to_while;
pub use node_split::split_irreducible_entries;
pub use region_structurer::{Region, count_gotos, regions_to_hir, structure_regions};
pub use return_merge::return_merge;
pub use seh_lower::{
    AddrRange, SehCatchArm, SehHandler, SehRegion, catch_all_type, wrap_seh_regions,
};
pub use short_circuit::short_circuit_recovery;
pub use structurer::{
    StructureError, recover_for_loops, structure, structure_preserve_returns,
    structure_preserve_returns_with_landing_pads, structure_with_arch, structure_with_landing_pads,
    structure_with_landing_pads_and_arch,
};
pub use switch_recovery::{
    ComputedGoto, IndirectBranchKind, JumpTable, JumpTableKind, SectionPerms, SectionView,
    TableEndian, classify_indirect_branch, computed_goto_to_switch, detect_computed_goto,
    find_default_target, read_jump_table, recover_switches, refine_switches_with_tables,
    validate_table_base,
};
pub use tail_duplication::{tail_duplicate_aggressive, tail_duplicate_small_blocks};
pub use ternary_recovery::ternary_recovery;
pub use while_to_for::{recover_guarded_whiles, while_to_for};
