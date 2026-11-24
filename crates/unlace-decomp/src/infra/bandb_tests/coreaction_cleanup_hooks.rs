//! Tests moved out of `coreaction_cleanup` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `coreaction_cleanup` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::action::{
        Action, ActionBase, ActionContext, ActionGroupList, ApplyResult, ruleflags,
    };
    pub(super) use crate::funcdata::Funcdata;
    pub(super) use crate::stablenames::FuncdataStablenamesExt;
    pub(super) use unlace_base::types::int4;
    pub(super) use unlace_num::opcodes::OpCode;
}
use crate::context::ArchContext;
use crate::coreaction_cleanup::*;
use module_scope::*;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

// Mirrors the coreaction_protos.rs test harness (funcdata_block fixtures).
fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

/// The marking/name/cast actions are stubbed (HighVariable/symbol/cast bridge
/// absent): each `apply` runs cleanly and signals no change.
#[test]
fn stubbed_marking_actions_apply_as_noop() {
    let mut fd = build_fd();
    let mut ctx = ActionContext::new();
    let mut acts: Vec<Box<dyn Action>> = vec![
        ActionMarkExplicit::boxed("merge"),
        ActionMarkImplied::boxed("merge"),
        ActionHideShadow::boxed("merge"),
        ActionNameVars::boxed("merge"),
        ActionSetCasts::boxed("casts"),
    ];
    for act in &mut acts {
        let r = act.apply(&mut fd, &mut ctx);
        assert_eq!(r, 0, "{} stub returns 0", act.get_name());
        assert_eq!(
            act.base().count,
            0,
            "{} stub makes no change",
            act.get_name()
        );
    }
}
