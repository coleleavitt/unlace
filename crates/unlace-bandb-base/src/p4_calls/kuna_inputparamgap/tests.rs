//! Unit tests for the own-input register-gap tolerance installed in
//! `ParamListStandard::fillin_map`.
//!
//! The model mirrors the SysV x86-64 input list the witness is scored against:
//! six exclusion (register) groups followed by a non-exclusion stack resource,
//! so both halves of the narrowing can be exercised.

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{AddrSpace, AddrSpaceManager, spacetype};
use unlace_base::types::int4;

use crate::dtype::type_class;
use crate::fspec::{ParamListKind, ParamListStandard};

use super::*;

fn reg_space() -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        4,
        1,
        3,
        0,
        0,
        0,
    ))
}

fn stack_space() -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_SPACEBASE,
        "stack",
        false,
        4,
        1,
        4,
        0,
        0,
        0,
    ))
}

fn addr(spc: &Rc<AddrSpace>, off: u64) -> Address {
    Address::new(Rc::clone(spc), off)
}

fn excl(
    grp: int4,
    space: &Rc<AddrSpace>,
    base: u64,
    prev: &[ParamEntry],
    mgr: &AddrSpaceManager,
) -> ParamEntry {
    ParamEntry::seed(
        grp,
        type_class::TYPECLASS_GENERAL,
        Rc::clone(space),
        base,
        4,
        1,
        0,
        0,
        true,
        false,
        prev,
        mgr,
    )
    .expect("seed exclusion entry")
}

fn stack_res(
    grp: int4,
    space: &Rc<AddrSpace>,
    prev: &[ParamEntry],
    mgr: &AddrSpaceManager,
) -> ParamEntry {
    ParamEntry::seed(
        grp,
        type_class::TYPECLASS_GENERAL,
        Rc::clone(space),
        0,
        128,
        1,
        4, // alignment != 0 -> non-exclusion resource
        0,
        true,
        false,
        prev,
        mgr,
    )
    .expect("seed stack entry")
}

/// Six register groups (0..5) then one stack resource, as SysV x86-64 has.
fn sysv_like_model() -> (
    ParamListStandard,
    Rc<AddrSpace>,
    Rc<AddrSpace>,
    AddrSpaceManager,
) {
    let mgr = AddrSpaceManager::new();
    let reg = reg_space();
    let stk = stack_space();
    let mut model = ParamListStandard::new(ParamListKind::Standard);
    for g in 0..6 {
        let e = excl(g, &reg, 0x10 + (g as u64) * 0x10, model.get_entry(), &mgr);
        model.push_entry(e);
    }
    let s = stack_res(6, &stk, model.get_entry(), &mgr);
    model.push_entry(s);
    model.finish_decode();
    (model, reg, stk, mgr)
}

/// The predicate itself: a call site's trials are never protected, whatever the
/// architecture flag says, because nothing sets the flag on them.
#[test]
fn a_call_sites_trials_are_never_protected() {
    let (model, reg, _stk, mgr) = sysv_like_model();
    let mut active = ParamActive::new(true); // recoversubcall
    active.register_trial(&addr(&reg, 0x10), 4);
    active.get_trial_mut(0).mark_active();
    assert!(!active.is_own_input_gap());
    assert!(!trial_is_protected(
        &active,
        active.get_trial(0),
        model.get_entry()
    ));
    let _ = mgr;
}
