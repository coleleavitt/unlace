use super::*;
use crate::dtype::{DatatypeKind, TypeField, sub_metatype};
use unlace_base::address::sign_extend;

// ---- synthetic-type builders --------------------------------------------

fn base_type(size: int4, m: type_metatype) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, m))
}

fn with_id(mut dt: Datatype, id: uint8) -> Rc<Datatype> {
    dt.id = id;
    Rc::new(dt)
}

fn pointer_to(ptrto: Rc<Datatype>, size: int4, wordsize: u32) -> Rc<Datatype> {
    let mut p = Datatype::new(size, type_metatype::TYPE_PTR);
    p.submeta = sub_metatype::SUB_PTR;
    p.kind = DatatypeKind::Pointer {
        ptrto,
        spaceid: None,
        truncate: None,
        wordsize,
    };
    Rc::new(p)
}

/// Build a union with the given (offset, type) fields.
fn make_union(size: int4, fields: &[(int4, Rc<Datatype>)]) -> Rc<Datatype> {
    let mut u = Datatype::new(size, type_metatype::TYPE_UNION);
    u.submeta = sub_metatype::SUB_UNION;
    let field: Vec<TypeField> = fields
        .iter()
        .enumerate()
        .map(|(i, (off, ct))| TypeField::new(i as int4, *off, format!("f{i}"), Rc::clone(ct)))
        .collect();
    u.kind = DatatypeKind::Union { field };
    Rc::new(u)
}

// ---- ResolveEdge total order (the unionMap key) -------------------------

#[test]
fn resolve_edge_order_typeid_then_encoding_then_optime() {
    // typeId dominates; then encoding; then opTime.
    let int_t = base_type(4, type_metatype::TYPE_INT);
    let mut a = ResolveEdge::new_op(&int_t, 100, 0);
    // Make three edges sharing typeId but differing in encoding/opTime.
    a.type_id = 5;
    a.encoding = 2;
    a.op_time = 100;
    let mut b = a;
    b.encoding = 3; // bigger encoding -> bigger
    assert!(a < b);
    let mut c = a;
    c.type_id = 6; // typeId dominates everything
    c.encoding = 0;
    c.op_time = 0;
    assert!(a < c);
    let mut d = a;
    d.op_time = 200; // same typeId+encoding, bigger opTime
    assert!(a < d);
    // equality
    let e = a;
    assert_eq!(a.cmp(&e), std::cmp::Ordering::Equal);
}

#[test]
fn resolve_edge_op_pointer_strips_and_flags() {
    // For a pointer, typeId = ptrTo->getId() and encoding = slot + 0x1000.
    let union_t = with_id(
        (*make_union(4, &[(0, base_type(4, type_metatype::TYPE_INT))])).clone(),
        42,
    );
    let ptr = pointer_to(Rc::clone(&union_t), 8, 1);
    let edge = ResolveEdge::new_op(&ptr, 7, 3);
    assert_eq!(edge.type_id, 42); // stripped to the union's id
    assert_eq!(edge.encoding, 3 + 0x1000); // pointer flag
    assert_eq!(edge.op_time, 7);

    // Non-pointer: typeId = unresType->getId(), no flag.
    let edge2 = ResolveEdge::new_op(&union_t, 9, 1);
    assert_eq!(edge2.type_id, 42);
    assert_eq!(edge2.encoding, 1);
}

#[test]
fn resolve_edge_addr_form_encodes_0x2000() {
    let union_t = with_id(
        (*make_union(4, &[(0, base_type(4, type_metatype::TYPE_INT))])).clone(),
        17,
    );
    let addr = Address::new_invalid();
    // invalid address offset is 0; use a real space-less test of the encoding.
    let edge = ResolveEdge::new_addr(&union_t, &addr, 99);
    assert_eq!(edge.encoding, 0x2000); // slot ignored
    assert_eq!(edge.type_id, 17);
    assert_eq!(edge.op_time, addr.get_offset() as uintm);
}

// ---- ResolvedUnion ------------------------------------------------------

#[test]
fn resolved_union_self_resolution_strips_base() {
    // Pointer parent: baseType strips to ptrTo.
    let union_t = make_union(4, &[(0, base_type(4, type_metatype::TYPE_INT))]);
    let ptr = pointer_to(Rc::clone(&union_t), 8, 1);
    let res = ResolvedUnion::new(Rc::clone(&ptr));
    assert!(Rc::ptr_eq(res.get_datatype(), &ptr)); // resolves to the parent
    assert!(Rc::ptr_eq(res.get_base(), &union_t)); // base is the stripped union
    assert_eq!(res.get_field_num(), -1);
    assert!(!res.is_locked());

    // Non-pointer parent: baseType is the parent.
    let res2 = ResolvedUnion::new(Rc::clone(&union_t));
    assert!(Rc::ptr_eq(res2.get_base(), &union_t));
    assert_eq!(res2.get_field_num(), -1);
}

#[test]
fn resolved_union_update_lock_protects_fieldnum() {
    let union_t = make_union(4, &[(0, base_type(4, type_metatype::TYPE_INT))]);
    let int_t = base_type(4, type_metatype::TYPE_INT);
    let mut res = ResolvedUnion::new(Rc::clone(&union_t));
    res.set_lock(true);
    // Same fieldNum, same resolve -> no change.
    let same = ResolvedUnion::new(Rc::clone(&union_t));
    assert!(!res.clone().update(&same));
    // Locked, but a different fieldNum -> rejected.
    let mut other = ResolvedUnion::new(Rc::clone(&union_t));
    other.field_num = 0;
    other.resolve = Rc::clone(&int_t);
    assert!(!res.update(&other));
    // Same fieldNum but new resolve -> change accepted even when locked.
    let mut newres = ResolvedUnion::new(Rc::clone(&union_t));
    newres.field_num = -1;
    newres.resolve = Rc::clone(&int_t);
    assert!(res.update(&newres));
    assert!(Rc::ptr_eq(res.get_datatype(), &int_t));
}

// ---- score_locked_type matrix -------------------------------------------

#[test]
fn score_locked_type_matrix() {
    let int4_t = base_type(4, type_metatype::TYPE_INT);
    let uint4_t = base_type(4, type_metatype::TYPE_UINT);
    let int8_t = base_type(8, type_metatype::TYPE_INT);
    let struct_t = base_type(4, type_metatype::TYPE_STRUCT);

    // Perfect pointer identity + same metatype (plain int, not composite): 5 + 3.
    assert_eq!(score_locked_type(&int4_t, &int4_t), 5 + 3);
    // Different objects, same metatype int (size match): +3.
    let int4_b = base_type(4, type_metatype::TYPE_INT);
    assert_eq!(score_locked_type(&int4_t, &int4_b), 3);
    // int vs uint, same size: -1 mismatch, no size penalty.
    assert_eq!(score_locked_type(&int4_t, &uint4_t), -1);
    // int vs int, different size: same metatype +3 (size only penalizes on mismatch metatype).
    assert_eq!(score_locked_type(&int4_t, &int8_t), 3);
    // int vs uint, different size: -1 (sign mismatch) + (-2 size): -3.
    let uint8_t = base_type(8, type_metatype::TYPE_UINT);
    assert_eq!(score_locked_type(&int4_t, &uint8_t), -1 - 2);
    // struct vs struct, same metatype composite: +3? No — composite gets +10.
    let struct_b = base_type(4, type_metatype::TYPE_STRUCT);
    assert_eq!(score_locked_type(&struct_t, &struct_b), 10);
    // int vs struct (general mismatch), same size: -5.
    assert_eq!(score_locked_type(&int4_t, &struct_t), -5);

    // Pointer chain: ptr->ptr->int vs ptr->ptr->int, identity at top: 5 + 5 + 5 + 3.
    let pp_a = pointer_to(pointer_to(Rc::clone(&int4_t), 8, 1), 8, 1);
    assert_eq!(score_locked_type(&pp_a, &pp_a), 5 + 5 + 5 + 3);
}

// ---- score_parameter / score_return_type --------------------------------

#[test]
fn score_parameter_unlocked_defaults() {
    let int_t = base_type(4, type_metatype::TYPE_INT);
    let struct_t = base_type(4, type_metatype::TYPE_STRUCT);
    // No proto: composite -> -1, scalar -> 0.
    assert_eq!(score_parameter(&struct_t, None, 0), -1);
    assert_eq!(score_parameter(&int_t, None, 0), 0);
    assert_eq!(score_return_type(&struct_t, None), -1);
    assert_eq!(score_return_type(&int_t, None), 0);
}

#[test]
fn score_parameter_locked_uses_score_locked_type() {
    let int_t = base_type(4, type_metatype::TYPE_INT);
    let facts = LockedProtoFacts {
        input_locked: true,
        output_locked: true,
        num_params: 1,
        param_types: vec![Rc::clone(&int_t)],
        output_type: Some(Rc::clone(&int_t)),
    };
    // Locked, slot 0 in range -> scoreLockedType(int,int identity) = 5+3.
    assert_eq!(score_parameter(&int_t, Some(&facts), 0), 8);
    // Locked but slot out of range -> falls through to default scalar 0.
    assert_eq!(score_parameter(&int_t, Some(&facts), 5), 0);
    // Locked output -> scoreLockedType identity 8.
    assert_eq!(score_return_type(&int_t, Some(&facts)), 8);
}

// ---- score_constant_fit -------------------------------------------------

#[test]
fn score_constant_fit_matrix() {
    use type_metatype::*;
    let no_facts = ConstantFitFacts {
        float_fact: None,
        looks_like_pointer: false,
    };
    // bool: size 1, val<2 -> 2; else -2.
    assert_eq!(score_constant_fit(1, 1, TYPE_BOOL, &no_facts), 2);
    assert_eq!(score_constant_fit(1, 5, TYPE_BOOL, &no_facts), -2);
    assert_eq!(score_constant_fit(2, 1, TYPE_BOOL, &no_facts), -2);
    // float, no format -> -1.
    assert_eq!(score_constant_fit(4, 0, TYPE_FLOAT, &no_facts), -1);
    // float, zero class -> 2.
    let zero_facts = ConstantFitFacts {
        float_fact: Some(FloatConstFact::Zero),
        looks_like_pointer: false,
    };
    assert_eq!(score_constant_fit(4, 0, TYPE_FLOAT, &zero_facts), 2);
    // float, normalized in range -> 2, out of range -> -1.
    let norm_in = ConstantFitFacts {
        float_fact: Some(FloatConstFact::Normalized { exponent: 3 }),
        looks_like_pointer: false,
    };
    assert_eq!(score_constant_fit(4, 1, TYPE_FLOAT, &norm_in), 2);
    let norm_out = ConstantFitFacts {
        float_fact: Some(FloatConstFact::Normalized { exponent: 20 }),
        looks_like_pointer: false,
    };
    assert_eq!(score_constant_fit(4, 1, TYPE_FLOAT, &norm_out), -1);
    // int/uint/ptr, val==0 -> 2.
    assert_eq!(score_constant_fit(4, 0, TYPE_INT, &no_facts), 2);
    assert_eq!(score_constant_fit(4, 0, TYPE_PTR, &no_facts), 2);
    // nonzero ptr, looks like pointer -> 2, else -2.
    let ptrish = ConstantFitFacts {
        float_fact: None,
        looks_like_pointer: true,
    };
    assert_eq!(score_constant_fit(4, 0x401000, TYPE_PTR, &ptrish), 2);
    assert_eq!(score_constant_fit(4, 0x401000, TYPE_PTR, &no_facts), -2);
    // nonzero int, looks like pointer -> 1, else -> 2.
    assert_eq!(score_constant_fit(4, 0x401000, TYPE_INT, &ptrish), 1);
    assert_eq!(score_constant_fit(4, 0x401000, TYPE_INT, &no_facts), 2);
    // array -> 0; other -> -2.
    assert_eq!(score_constant_fit(4, 7, TYPE_ARRAY, &no_facts), 0);
    assert_eq!(score_constant_fit(4, 7, TYPE_CODE, &no_facts), -2);
}

#[test]
fn looks_like_pointer_bounds_and_transitions() {
    // In bounds with enough bit transitions.
    assert!(looks_like_pointer(0x401000, 4, 0x1000, 0x7fffffff));
    // Out of (above) upper bound.
    assert!(!looks_like_pointer(0x80000000, 4, 0x1000, 0x7fffffff));
    // In bounds but too few bit transitions (e.g. a single run).
    assert!(!looks_like_pointer(0x1, 4, 0x0, 0x7fffffff));
}

// ---- compute_best_index -------------------------------------------------

#[test]
fn compute_best_index_ties_keep_lowest() {
    // index 0 is the whole-union; field_num = bestIndex - 1.
    let (fnum, idx) = compute_best_index(&[0, 5, 5, 3]);
    assert_eq!(idx, 1); // strict > keeps the first max
    assert_eq!(fnum, 0);
    // whole union wins.
    let (fnum2, idx2) = compute_best_index(&[10, 5, 3]);
    assert_eq!(idx2, 0);
    assert_eq!(fnum2, -1);
    // last field wins.
    let (fnum3, idx3) = compute_best_index(&[0, 1, 2, 9]);
    assert_eq!(idx3, 3);
    assert_eq!(fnum3, 2);
}

// ---- score_truncation ---------------------------------------------------

#[test]
fn score_truncation_union_field_match() {
    use type_metatype::*;
    // Union with an int4 field at offset 0 and a uint2 field at offset 0.
    let int4_t = base_type(4, TYPE_INT);
    let uint2_t = base_type(2, TYPE_UINT);
    let union_t = make_union(4, &[(0, Rc::clone(&int4_t)), (0, Rc::clone(&uint2_t))]);
    // Truncation of size 2 at offset 0 matches the uint2 field -> 10, no recurse.
    let (score, recurse) = score_truncation(&union_t, 2, 0, None).unwrap();
    assert_eq!(score, 10);
    assert!(recurse.is_none()); // unions never recurse from truncation
    // With result.getBase() == this union -> +5 bonus.
    let (score_b, _) = score_truncation(&union_t, 2, 0, Some(&union_t)).unwrap();
    assert_eq!(score_b, 15);
    // No field matching size 3 -> -10.
    let (score_c, recurse_c) = score_truncation(&union_t, 3, 0, None).unwrap();
    assert_eq!(score_c, -10);
    assert!(recurse_c.is_none());
}

#[test]
fn score_truncation_scalar_exact_match() {
    use type_metatype::*;
    // Exact size match at offset 0: score 10, recurse the type itself.
    let int4_t = base_type(4, TYPE_INT);
    let (score, recurse) = score_truncation(&int4_t, 4, 0, None).unwrap();
    assert_eq!(score, 10);
    assert!(recurse.is_some());
    assert!(Rc::ptr_eq(&recurse.unwrap(), &int4_t));
    // int wider than the varnode, offset 0: int can hold it -> score 1.
    let int8_t = base_type(8, TYPE_INT);
    let (score2, _) = score_truncation(&int8_t, 4, 0, None).unwrap();
    assert_eq!(score2, 1);
}

// ---- score table matrices (the down/up walk) ----------------------------

#[test]
fn score_trial_down_pure_samples() {
    use OpCode::*;
    use score_tables::score_trial_down_pure as down;
    use type_metatype::*;
    // CBRANCH: bool -> 10, else -10.
    assert_eq!(down(CPUI_CBRANCH, TYPE_BOOL, -1), Some(10));
    assert_eq!(down(CPUI_CBRANCH, TYPE_INT, -1), Some(-10));
    // INT_SLESS: signed int -> 5; uint -> -1; struct -> -5.
    assert_eq!(down(CPUI_INT_SLESS, TYPE_INT, 0), Some(5));
    assert_eq!(down(CPUI_INT_SLESS, TYPE_UINT, 0), Some(-1));
    assert_eq!(down(CPUI_INT_SLESS, TYPE_STRUCT, 0), Some(-5));
    // INT_LESS: uint/ptr/unknown -> 5; int -> -5; bool -> 0 (falls to else).
    assert_eq!(down(CPUI_INT_LESS, TYPE_UINT, 0), Some(5));
    assert_eq!(down(CPUI_INT_LESS, TYPE_INT, 0), Some(-5));
    assert_eq!(down(CPUI_INT_LESS, TYPE_BOOL, 0), Some(0));
    // INT_LEFT slot 0 vs slot 1 differ.
    assert_eq!(down(CPUI_INT_LEFT, TYPE_UINT, 0), Some(2));
    assert_eq!(down(CPUI_INT_LEFT, TYPE_UINT, 1), Some(1));
    assert_eq!(down(CPUI_INT_LEFT, TYPE_PTR, 1), Some(-5));
    // SEGMENTOP slot 2 vs other.
    assert_eq!(down(CPUI_SEGMENTOP, TYPE_PTR, 2), Some(5));
    assert_eq!(down(CPUI_SEGMENTOP, TYPE_PTR, 0), Some(-2));
    // FLOAT_ADD: float -> 10 else -10.
    assert_eq!(down(CPUI_FLOAT_ADD, TYPE_FLOAT, 0), Some(10));
    assert_eq!(down(CPUI_FLOAT_ADD, TYPE_INT, 0), Some(-10));
    // Driver-handled arms return None.
    assert_eq!(down(CPUI_COPY, TYPE_INT, 0), None);
    assert_eq!(down(CPUI_LOAD, TYPE_PTR, -1), None);
    assert_eq!(down(CPUI_INT_ADD, TYPE_PTR, 0), None);
    assert_eq!(down(CPUI_SUBPIECE, TYPE_INT, 0), None);
    // Unknown opcode default -10.
    assert_eq!(down(CPUI_NEW, TYPE_INT, 0), Some(-10));
}

#[test]
fn score_trial_up_pure_samples() {
    use OpCode::*;
    use score_tables::score_trial_up_pure as up;
    use type_metatype::*;
    // Comparison: bool -> 10; size-1 -> 1; else -10.
    assert_eq!(up(CPUI_INT_EQUAL, TYPE_BOOL, 1), Some(10));
    assert_eq!(up(CPUI_INT_EQUAL, TYPE_INT, 1), Some(1));
    assert_eq!(up(CPUI_INT_EQUAL, TYPE_INT, 4), Some(-10));
    // INT_MULT: composite -> -10; ptr/bool -> -2; else 5.
    assert_eq!(up(CPUI_INT_MULT, TYPE_STRUCT, 4), Some(-10));
    assert_eq!(up(CPUI_INT_MULT, TYPE_PTR, 8), Some(-2));
    assert_eq!(up(CPUI_INT_MULT, TYPE_INT, 4), Some(5));
    // FLOAT_TRUNC: int/uint -> 2 else -2.
    assert_eq!(up(CPUI_FLOAT_TRUNC, TYPE_INT, 4), Some(2));
    assert_eq!(up(CPUI_FLOAT_TRUNC, TYPE_FLOAT, 4), Some(-2));
    // PIECE: float/bool -> -5; code/ptr -> -2; else 0.
    assert_eq!(up(CPUI_PIECE, TYPE_FLOAT, 4), Some(-5));
    assert_eq!(up(CPUI_PIECE, TYPE_CODE, 4), Some(-2));
    assert_eq!(up(CPUI_PIECE, TYPE_INT, 4), Some(0));
    // Driver-handled arms return None.
    assert_eq!(up(CPUI_COPY, TYPE_INT, 4), None);
    assert_eq!(up(CPUI_PTRADD, TYPE_PTR, 8), None);
    assert_eq!(up(CPUI_INT_ADD, TYPE_PTR, 8), None);
    // Unknown default -10.
    assert_eq!(up(CPUI_NEW, TYPE_INT, 4), Some(-10));
}

// ---- ResolveCache stub --------------------------------------------------

#[test]
fn resolve_cache_empty_returns_unresolved() {
    let cache = ResolveCache::new();
    let int_t = base_type(4, type_metatype::TYPE_INT);
    // No records (population is STUB(W6)) -> returns the original data-type.
    assert!(Rc::ptr_eq(&cache.resolve(0, &int_t), &int_t));
}

// Touch the otherwise-driver-only imports so a future driver wiring change
// surfaces here rather than as dead-code warnings.
#[test]
fn constants_and_helpers_present() {
    assert_eq!(THRESHOLD, 256);
    assert_eq!(MAX_PASSES, 6);
    assert_eq!(MAX_TRIALS, 1024);
    // sign_extend/int8/uint8/uintb are used by the seamed driver helpers;
    // exercise sign_extend here to keep the import live and pin its behavior
    // for the INT_ADD constant-offset arm (C++ `sign_extend(off,size*8-1)`).
    let off: int8 = sign_extend(0xff, 8 - 1);
    assert_eq!(off, -1);
    let _ = (0u64 as uint8, 0u64 as uintb);
}

fn _use_deref(typegrp: &dyn TypeFactory) {
    // Reference deref_pointer / direction so a driver rewiring keeps them
    // discoverable (not invoked: needs a live TypeFactory).
    let int_t = base_type(4, type_metatype::TYPE_INT);
    let _ = deref_pointer(&int_t, 0, 4, typegrp);
    let _ = score_tables::Direction::Down;
    let _ = score_tables::Direction::Up;
}
