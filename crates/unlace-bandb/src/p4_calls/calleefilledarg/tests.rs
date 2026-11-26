use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{AddrSpace, AddrSpaceManager, spacetype};

use crate::dtype::type_class;
use crate::fspec::{ParamActive, ParamEntry, ParamListKind, ParamListStandard};

/// Five register slots; the caller fills slot 0, nothing fills slot 1, and
/// slots 2 and 3 are actively staged.
fn model() -> (AddrSpaceManager, Rc<AddrSpace>, ParamListStandard) {
    let mgr = AddrSpaceManager::new();
    let reg = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        8,
        1,
        3,
        0,
        0,
        0,
    ));
    let mut model = ParamListStandard::new(ParamListKind::Standard);
    for group in 0..5 {
        let e = ParamEntry::seed(
            group,
            type_class::TYPECLASS_GENERAL,
            Rc::clone(&reg),
            group as u64 * 8,
            8,
            1,
            0,
            0,
            true,
            false,
            model.get_entry(),
            &mgr,
        )
        .unwrap();
        model.push_entry(e);
    }
    model.finish_decode();
    (mgr, reg, model)
}

fn used(active: &ParamActive) -> Vec<u64> {
    (0..active.get_num_trials())
        .filter(|&i| active.get_trial(i).is_used())
        .map(|i| active.get_trial(i).get_address().get_offset())
        .collect()
}

#[test]
fn an_unfilled_slot_ends_the_list_unless_the_callee_fills_it() {
    for (filled, expected) in [(false, vec![0]), (true, vec![0, 16, 24])] {
        let (mgr, reg, model) = model();
        let mut active = ParamActive::new(true);
        for slot in 0..4u64 {
            active.register_trial(&Address::new(Rc::clone(&reg), slot * 8), 8);
        }
        active.get_trial_mut(0).mark_active();
        active.get_trial_mut(1).mark_no_use();
        if filled {
            active.get_trial_mut(1).set_callee_filled();
        }
        active.get_trial_mut(2).mark_active();
        active.get_trial_mut(3).mark_active();
        model.fillin_map(&mut active, &mgr).unwrap();
        assert_eq!(used(&active), expected, "filled={filled}");
    }
}

#[test]
fn a_filled_hole_still_counts_against_the_chain() {
    // Three unfilled slots before the active one exceed the chain the
    // convention tolerates, filled or not: the list ends at slot 0.
    let (mgr, reg, model) = model();
    let mut active = ParamActive::new(true);
    for slot in 0..5u64 {
        active.register_trial(&Address::new(Rc::clone(&reg), slot * 8), 8);
    }
    active.get_trial_mut(0).mark_active();
    active.get_trial_mut(2).set_callee_filled();
    active.get_trial_mut(4).mark_active();
    model.fillin_map(&mut active, &mgr).unwrap();
    assert_eq!(used(&active), vec![0]);
}

#[test]
fn a_filled_slot_is_never_hole_filled() {
    let (mgr, reg, model) = model();
    let mut active = ParamActive::new(true);
    for slot in 0..3u64 {
        active.register_trial(&Address::new(Rc::clone(&reg), slot * 8), 8);
    }
    active.get_trial_mut(0).mark_inactive();
    active.get_trial_mut(1).mark_no_use();
    active.get_trial_mut(1).set_callee_filled();
    active.get_trial_mut(2).mark_active();
    model.fillin_map(&mut active, &mgr).unwrap();
    assert_eq!(used(&active), vec![0, 16]);
}
