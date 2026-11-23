//! Opt-in stack-address evidence for an existing register input trial.
use super::kuna_spillargtrial::{frame_slot, stack_pointer_storage};
use crate::{context::VarnodeId, funcdata::Funcdata};

/// A same-width copy/displacement chain must reach a particular stack pointer.
/// Unknown inputs, phi merges, and values killed by another call are declined.
#[doc(hidden)]
pub fn carries_stack_address(data: &Funcdata, vn: VarnodeId) -> bool {
    if !data
        .get_arch()
        .kuna_options
        .get::<crate::kuna_stackaddrargtrial::StackAddrArgTrial>()
        .0
    {
        return false;
    }
    let Some(sp) = stack_pointer_storage(data) else {
        return false;
    };
    let Some(v) = data.vbank().get(vn) else {
        return false;
    };
    if v.get_size() != sp.size as i32 || !v.is_written() {
        return false;
    }
    frame_slot(data, vn, &sp).is_some_and(|(base, _)| base != vn)
}

/// Preserve proven register pointers across the inactive-prefix length heuristic.
/// The existing ABI hole-filling loop supplies earlier register positions.
#[doc(hidden)]
pub fn trial_is_protected(
    active: &crate::fspec::ParamActive,
    trial: &crate::fspec::ParamTrial,
    entries: &[crate::fspec::ParamEntry],
) -> bool {
    active.is_recover_subcall()
        && trial.is_active()
        && trial.has_stack_address()
        && trial.get_entry().is_some_and(|i| entries[i].is_exclusion())
}

crate::kuna_flag!(
    /// Opt-in stack-address evidence for call input trials.
    StackAddrArgTrial,
    "stackaddrargtrial",
    "Stack-address input trials",
    unset: false,
    shipped: false
);

/// Fill this pass's hooks ([`crate::kuna_passhooks`]).
pub fn provide(hooks: &mut crate::kuna_passhooks::KunaHookSlots) {
    hooks.stackaddrargtrial_trial_is_protected = Some(trial_is_protected);
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{
        dtype::type_class,
        fspec::{ParamActive, ParamEntry},
    };
    use std::rc::Rc;
    use unlace_base::{
        address::Address,
        space::{AddrSpace, AddrSpaceManager, spacetype},
    };

    #[test]
    fn pointer_evidence_does_not_protect_a_stack_slot_or_own_input() {
        let mgr = AddrSpaceManager::new();
        let stack = Rc::new(AddrSpace::new(
            spacetype::IPTR_SPACEBASE,
            "stack",
            false,
            4,
            1,
            4,
            0,
            0,
            0,
        ));
        let entry = ParamEntry::seed(
            0,
            type_class::TYPECLASS_GENERAL,
            Rc::clone(&stack),
            0,
            128,
            1,
            4,
            0,
            true,
            false,
            &[],
            &mgr,
        )
        .unwrap();
        let mut active = ParamActive::new(true);
        active.register_trial(&Address::new(stack, 0), 4);
        let trial = active.get_trial_mut(0);
        trial.mark_active();
        trial.set_stack_address();
        trial.set_entry(Some(0), 0);
        assert!(!trial_is_protected(&active, active.get_trial(0), &[entry]));
        let own = ParamActive::new(false);
        assert!(!trial_is_protected(&own, active.get_trial(0), &[]));
    }
}
