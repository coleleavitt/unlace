use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

use super::*;
use crate::context::ArchContext;

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

/// Every merge-group leaf carries the exact C++ `name()` string and is
/// `rule_onceperfunc`.
#[test]
fn names_and_flags_match_cpp() {
    let cases: Vec<(Box<dyn Action>, &str)> = vec![
        (ActionAssignHigh::boxed("g0"), "assignhigh"),
        (ActionMergeRequired::boxed("g0"), "mergerequired"),
        (ActionMarkExplicit::boxed("g0"), "markexplicit"),
        (ActionMarkImplied::boxed("g0"), "markimplied"),
        (ActionMergeMultiEntry::boxed("g0"), "mergemultientry"),
        (ActionMergeCopy::boxed("g0"), "mergecopy"),
        (ActionDominantCopy::boxed("g0"), "dominantcopy"),
        (ActionMarkIndirectOnly::boxed("g0"), "markindirectonly"),
        (ActionMergeAdjacent::boxed("g0"), "mergeadjacent"),
        (ActionMergeType::boxed("g0"), "mergetype"),
        (ActionHideShadow::boxed("g0"), "hideshadow"),
        (ActionCopyMarker::boxed("g0"), "copymarker"),
        (ActionNameVars::boxed("g0"), "namevars"),
        (ActionSetCasts::boxed("g0"), "setcasts"),
    ];
    for (act, expect) in &cases {
        assert_eq!(act.get_name(), *expect, "name mismatch");
        assert_eq!(act.get_group(), "g0", "group must be the ctor's `g`");
        // All fourteen are rule_onceperfunc in the C++ constructors.
        assert_eq!(
            act.base().flags,
            ruleflags::rule_onceperfunc,
            "{} must be rule_onceperfunc",
            expect
        );
    }
}

/// `clone_filtered` mirrors the C++ `clone(grouplist)` group filter: present
/// iff the grouplist contains the action's group, else dropped.
#[test]
fn clone_filtered_obeys_grouplist() {
    let act = ActionMergeRequired::boxed("merge");
    // In-list: cloned, name and group preserved.
    let yes = ActionGroupList::from_names(["merge", "casts"]);
    let cl = act
        .clone_filtered(&yes)
        .expect("present when grouplist contains group");
    assert_eq!(cl.get_name(), "mergerequired");
    assert_eq!(cl.get_group(), "merge");
    // Out-of-list: dropped (the C++ `return (Action *)0`).
    let no = ActionGroupList::from_names(["analysis"]);
    assert!(
        act.clone_filtered(&no).is_none(),
        "dropped when group absent"
    );

    // ActionSetCasts lives in its own "casts" group.
    let casts = ActionSetCasts::boxed("casts");
    assert!(casts.clone_filtered(&yes).is_some());
    assert!(
        casts
            .clone_filtered(&ActionGroupList::from_names(["merge"]))
            .is_none()
    );
}

/// `ActionAssignHigh::apply` is realized: it turns on the HighVariable layer
/// (`Funcdata::set_high_level`) and is idempotent (the C++ `setHighLevel`
/// early-returns if `isHighOn`).  It signals no change (C++ `return 0`).
#[test]
fn assign_high_turns_on_high_layer() {
    let mut fd = build_fd();
    let mut ctx = ActionContext::new();
    assert!(!fd.is_high_on(), "high layer starts off");

    let mut act = ActionAssignHigh::boxed("merge");
    let r = act.apply(&mut fd, &mut ctx);
    assert_eq!(r, 0, "apply returns 0");
    assert_eq!(act.base().count, 0, "setHighLevel signals no change");
    assert!(fd.is_high_on(), "high layer is on after assignhigh");

    // Idempotent: a second pass changes nothing.
    let r2 = act.apply(&mut fd, &mut ctx);
    assert_eq!(r2, 0);
    assert!(fd.is_high_on());
}

/// The merge-delegation actions are stubbed (no `getMerge()` bridge yet): each
/// `apply` runs cleanly and signals no change on a hand-built empty function.
#[test]
fn stubbed_merge_actions_apply_as_noop() {
    let mut fd = build_fd();
    let mut ctx = ActionContext::new();
    let mut acts: Vec<Box<dyn Action>> = vec![
        ActionMergeRequired::boxed("merge"),
        ActionMergeMultiEntry::boxed("merge"),
        ActionMergeCopy::boxed("merge"),
        ActionDominantCopy::boxed("merge"),
        ActionMarkIndirectOnly::boxed("merge"),
        ActionMergeAdjacent::boxed("merge"),
        ActionMergeType::boxed("merge"),
        ActionCopyMarker::boxed("merge"),
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

/// The W8 schedule helper enumerates all fourteen leaves in C++ schedule
/// order, in the schedule's group strings (`"merge"` except `setcasts`).
#[test]
fn merge_actions_schedule_order_and_groups() {
    let acts = merge_actions();
    let names: Vec<&str> = acts.iter().map(|a| a.get_name()).collect();
    assert_eq!(
        names,
        vec![
            "assignhigh",
            "mergerequired",
            "markexplicit",
            "markimplied",
            "mergemultientry",
            "mergecopy",
            "dominantcopy",
            "markindirectonly",
            "mergeadjacent",
            "mergetype",
            "hideshadow",
            "copymarker",
            "namevars",
            "setcasts",
        ]
    );
    // Group strings: all "merge" except the final "casts".
    for a in &acts[..acts.len() - 1] {
        assert_eq!(a.get_group(), "merge");
    }
    assert_eq!(acts.last().unwrap().get_group(), "casts");
}

#[test]
fn store_blocks_offers_only_the_stores_a_cover_reaches() {
    use slotmap::KeyData;
    let op = |n: u64| crate::context::OpId::from(KeyData::from_ffi(n));
    let stores = StoreBlocks(vec![
        (0, op(1)),
        (1, op(2)),
        (1, op(3)),
        (2, op(4)),
        (4, op(5)),
        (7, op(6)),
    ]);
    let point = crate::cover::CoverPoint::Op {
        uindex: 3,
        multiequal: false,
    };
    let mut cover = crate::cover::Cover::new();
    cover.add_def_point(Some((1, point)), false);
    for blk in [4, 5] {
        let mut more = crate::cover::Cover::new();
        more.add_def_point(Some((blk, point)), false);
        cover.merge(&more);
    }
    assert_eq!(stores.within(&cover), vec![op(2), op(3), op(5)]);
    assert!(stores.within(&crate::cover::Cover::new()).is_empty());
}
