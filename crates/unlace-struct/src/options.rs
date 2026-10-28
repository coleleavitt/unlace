//! Complexity budgets for control-flow structuring.
//!
//! A limit of `0` disables that budget.

use serde::{Deserialize, Serialize};

/// Options consumed by [`structure_with_options`](crate::structure_with_options)
/// and [`structure_unstructured_fallback_with_options`](crate::structure_unstructured_fallback_with_options).
#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default, deny_unknown_fields)]
pub struct StructureOptions {
    /// Phi nodes above which structuring fails with a complexity error and
    /// the caller falls back to labels and gotos.
    pub max_phis: usize,
    /// Blocks above which the unstructured fallback prints a summary
    /// comment instead of every block.
    pub fallback_max_blocks: usize,
    /// Instructions above which the unstructured fallback prints a summary
    /// comment instead of every block.
    pub fallback_max_insns: usize,
    /// Condition-tree nodes above which reaching-condition analysis of a
    /// region gives up.
    pub max_reaching_condition_nodes: usize,
}

impl Default for StructureOptions {
    fn default() -> Self {
        Self {
            max_phis: 12_288,
            fallback_max_blocks: 256,
            fallback_max_insns: 4_096,
            max_reaching_condition_nodes: 8_192,
        }
    }
}
