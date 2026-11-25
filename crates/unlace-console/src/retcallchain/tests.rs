use std::rc::Rc;

use unlace_base::space::{AddrSpace, ConstantSpace, UniqueSpace, spacetype};

use super::*;

fn vn(space: &Rc<AddrSpace>, offset: uintb, size: u32) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(space)),
        offset,
        size,
    }
}

struct RetOps {
    space: VarnodeData,
    pointer: VarnodeData,
    loaded: VarnodeData,
    plus_word: VarnodeData,
    userop: VarnodeData,
}

fn spaces() -> (Rc<AddrSpace>, Rc<AddrSpace>, Rc<AddrSpace>) {
    let constant = Rc::new(ConstantSpace::new());
    let register = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        4,
        1,
        1,
        0,
        1,
        1,
    ));
    let unique = Rc::new(UniqueSpace::new(2, 0, false));
    (constant, register, unique)
}

/// Prepare the two stores immediately before an i386 RET-call link. The
/// target is at base-8 and its continuation at base-4.
fn prepared(
    target_space: uintb,
    continuation_space: uintb,
    fallthrough: uintb,
) -> (ReturnProvenance, RetOps) {
    let (constant, register, unique) = spaces();
    let pointer = vn(&register, 0, 4);
    let base = ReturnProvenance::key(&pointer).unwrap();
    let target_space = vn(&constant, target_space, 8);
    let continuation_space = vn(&constant, continuation_space, 8);
    let target = vn(&constant, 0x1122_3344, 4);
    let continuation = vn(&constant, fallthrough, 4);
    let mut provenance = ReturnProvenance::default();

    provenance.set(
        Some(&pointer),
        Some(TrackedValue::Relative(RelativeAddress { base, offset: -4 })),
    );
    provenance.store(&continuation_space, &pointer, &continuation);
    provenance.set(
        Some(&pointer),
        Some(TrackedValue::Relative(RelativeAddress { base, offset: -8 })),
    );
    provenance.store(&target_space, &pointer, &target);

    (
        provenance,
        RetOps {
            space: target_space,
            pointer,
            loaded: vn(&unique, 0x100, 4),
            plus_word: vn(&constant, 4, 4),
            userop: vn(&constant, 7, 4),
        },
    )
}

fn ret_ops(parts: &RetOps, with_userop: bool) -> Vec<RawOp> {
    let mut ops = Vec::new();
    if with_userop {
        ops.push(RawOp {
            opcode: OpCode::CPUI_CALLOTHER,
            out: None,
            ins: vec![parts.userop.clone()],
        });
    }
    ops.extend([
        RawOp {
            opcode: OpCode::CPUI_LOAD,
            out: Some(parts.loaded.clone()),
            ins: vec![parts.space.clone(), parts.pointer.clone()],
        },
        RawOp {
            opcode: OpCode::CPUI_INT_ADD,
            out: Some(parts.pointer.clone()),
            ins: vec![parts.pointer.clone(), parts.plus_word.clone()],
        },
        RawOp {
            opcode: OpCode::CPUI_RETURN,
            out: None,
            ins: vec![parts.loaded.clone()],
        },
    ]);
    ops
}

#[test]
fn load_and_continuation_must_share_the_exact_memory_space() {
    let fallthrough = 0x804_900c;
    let (mut same, same_ops) = prepared(3, 3, fallthrough);
    assert!(
        same.apply(&ret_ops(&same_ops, false), fallthrough)
            .own_fallthrough
    );

    let (mut crossed, crossed_ops) = prepared(3, 4, fallthrough);
    assert!(
        !crossed
            .apply(&ret_ops(&crossed_ops, false), fallthrough)
            .own_fallthrough
    );
}

#[test]
fn callother_between_setup_and_return_clears_all_provenance() {
    let fallthrough = 0x804_900c;
    let (mut provenance, parts) = prepared(3, 3, fallthrough);
    let matched = provenance.apply(&ret_ops(&parts, true), fallthrough);
    assert!(!matched.own_fallthrough);
    assert_eq!(matched.immediate_tail, None);
    assert!(provenance.stores.is_empty());
}

#[test]
fn one_immediate_stack_store_is_a_tail_target() {
    let fallthrough = 0x804_900c;
    let (mut provenance, parts) = prepared(3, 3, fallthrough);
    provenance
        .stores
        .retain(|fact| fact.location.address.offset == -8);
    let matched = provenance.apply(&ret_ops(&parts, false), fallthrough);
    assert!(!matched.own_fallthrough);
    assert_eq!(matched.immediate_tail, Some(0x1122_3344));
}

#[test]
fn adjacent_store_pair_is_not_an_immediate_tail() {
    let fallthrough = 0x804_900c;
    let (mut provenance, parts) = prepared(3, 3, fallthrough);
    let matched = provenance.apply(&ret_ops(&parts, false), fallthrough);
    assert!(matched.own_fallthrough);
    assert_eq!(matched.immediate_tail, None);
}

#[test]
fn computed_stack_store_is_not_an_immediate_tail() {
    let fallthrough = 0x804_900c;
    let (mut provenance, parts) = prepared(3, 3, fallthrough);
    provenance
        .stores
        .retain(|fact| fact.location.address.offset == -8);
    provenance.stores[0].value = Some(TrackedValue::Relative(RelativeAddress {
        base: ReturnProvenance::key(&parts.pointer).unwrap(),
        offset: 0,
    }));
    let matched = provenance.apply(&ret_ops(&parts, false), fallthrough);
    assert!(!matched.own_fallthrough);
    assert_eq!(matched.immediate_tail, None);
}
