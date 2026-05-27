//! Attributor-style summary propagation.

use crate::ipa_summary::{FunctionSummary, FunctionSummaryRegistry};

pub fn propagate_readonly_once(registry: &mut FunctionSummaryRegistry) -> bool {
    let mut changed = false;
    for summary in registry.values_mut() {
        if summary.has_calls && summary.is_memory_pure() {
            summary.reads_memory = true;
            changed = true;
        }
    }
    changed
}

pub fn merge_summary(into: &mut FunctionSummary, callee: &FunctionSummary) -> bool {
    let before = into.clone();
    into.noreturn |= callee.noreturn;
    into.reads_memory |= callee.reads_memory;
    into.writes_memory |= callee.writes_memory;
    into.stack_address_escapes |= callee.stack_address_escapes;
    *into != before
}

#[cfg(test)]
mod tests {
    use crate::ipa_summary::FunctionSummary;

    use super::*;

    #[test]
    fn merge_propagates_side_effects() {
        let mut a = FunctionSummary::default();
        let b = FunctionSummary {
            writes_memory: true,
            ..FunctionSummary::default()
        };
        assert!(merge_summary(&mut a, &b));
        assert!(a.writes_memory);
    }
}
