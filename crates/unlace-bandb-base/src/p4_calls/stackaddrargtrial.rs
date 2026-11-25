//! Opt-in stack-address evidence for an existing register input trial.
use super::spillargtrial::{frame_slot, stack_pointer_storage};
use crate::{context::VarnodeId, funcdata::Funcdata};

/// A same-width copy/displacement chain must reach a particular stack pointer.
/// Unknown inputs, phi merges, and values killed by another call are declined.
#[doc(hidden)]
pub fn carries_stack_address(data: &Funcdata, vn: VarnodeId) -> bool {
    if !data
        .get_arch()
        .unlace_options
        .get::<crate::stackaddrargtrial::StackAddrArgTrial>()
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

crate::unlace_flag!(
    /// Opt-in stack-address evidence for call input trials.
    StackAddrArgTrial,
    "stackaddrargtrial",
    "Stack-address input trials",
    unset: false,
    shipped: false
);

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.stackaddrargtrial_trial_is_protected = Some(trial_is_protected);
}

#[cfg(test)]
mod tests;
