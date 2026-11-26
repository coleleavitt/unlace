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
