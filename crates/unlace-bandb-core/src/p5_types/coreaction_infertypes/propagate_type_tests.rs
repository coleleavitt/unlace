//! Focused tests of the LOAD/STORE pointer-propagation helpers (C++
//! `TypeOp::propagateToPointer`/`propagateFromPointer`) — the core of the
//! W10 propagateType overrides.  These exercise the type transforms directly
//! against a populated `TypeFactoryImpl` (no full `Funcdata` required), so a
//! regression in the pointer `*T <-> T` flow is caught even while the corpus
//! seeds (typed parameters / stack locals) remain unported (LOSS-131/132).
use super::*;
use crate::dtype::TypeFactoryImpl;

fn factory() -> TypeFactoryImpl {
    let f = TypeFactoryImpl::new();
    f.set_default_alignment_map();
    f.set_max_basetype_size(8);
    f
}

#[test]
fn from_pointer_dereferences_to_pointee_when_sizes_match() {
    // int4 * --LOAD(4)--> int4   (propagateFromPointer: ptrto->getSize()==sz)
    let f = factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let ptr = f.get_type_pointer(8, Rc::clone(&int4t), 1).unwrap();
    let out = propagate_from_pointer(&f, ptr, 4).expect("should dereference");
    assert_eq!(out.get_metatype(), type_metatype::TYPE_INT);
    assert_eq!(out.get_size(), 4);
    assert!(Rc::ptr_eq(&out, &int4t), "returns the exact pointee type");
}

#[test]
fn from_pointer_declines_on_size_mismatch_for_non_enum() {
    // int4 * --LOAD(2)--> (size mismatch, not an enum) -> no propagation.
    let f = factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let ptr = f.get_type_pointer(8, int4t, 1).unwrap();
    assert!(propagate_from_pointer(&f, ptr, 2).is_none());
}

#[test]
fn from_pointer_declines_for_non_pointer_input() {
    let f = factory();
    let int8t = f.get_base(8, type_metatype::TYPE_INT).unwrap();
    assert!(propagate_from_pointer(&f, int8t, 8).is_none());
}

#[test]
fn to_pointer_wraps_pointee_in_a_pointer_of_the_pointer_size() {
    // int4 --STORE(value->ptr)--> int4 * (propagateToPointer of a plain value).
    let f = factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let out = propagate_to_pointer(&f, Rc::clone(&int4t), 8, 1).expect("should wrap");
    assert_eq!(out.get_metatype(), type_metatype::TYPE_PTR);
    assert_eq!(out.get_size(), 8);
    let pointee = out.get_ptr_to().unwrap();
    assert!(
        Rc::ptr_eq(&pointee, &int4t),
        "points at the original value type"
    );
}

#[test]
fn to_pointer_of_a_pointer_demotes_pointee_to_unknown_of_same_size() {
    // A pointer value never produces a ptr->ptr deeper than depth 1: the
    // pointee is reduced to an UNKNOWN of the pointer's size.
    let f = factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let inner = f.get_type_pointer(8, int4t, 1).unwrap();
    let out = propagate_to_pointer(&f, inner, 8, 1).expect("should wrap");
    assert_eq!(out.get_metatype(), type_metatype::TYPE_PTR);
    let pointee = out.get_ptr_to().unwrap();
    assert_eq!(pointee.get_metatype(), type_metatype::TYPE_UNKNOWN);
    assert_eq!(pointee.get_size(), 8);
}

#[test]
fn from_pointer_to_struct_dereferences_whole_struct_when_size_matches() {
    // A pointer to an 8-byte struct, dereferenced at full size, yields the
    // struct — the ptr->*struct flow the array/struct overrides build on.
    let f = factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let st = f.get_type_struct("twofield").unwrap();
    let fields = vec![
        crate::dtype::TypeField::new(0, 0, "a", Rc::clone(&int4t)),
        crate::dtype::TypeField::new(1, 4, "b", Rc::clone(&int4t)),
    ];
    let st = f.assign_raw_fields_struct(&st, fields, Vec::new()).unwrap();
    let sz = st.get_size();
    let ptr = f.get_type_pointer(8, Rc::clone(&st), 1).unwrap();
    let out = propagate_from_pointer(&f, ptr, sz).expect("deref whole struct");
    assert_eq!(out.get_metatype(), type_metatype::TYPE_STRUCT);
    assert!(Rc::ptr_eq(&out, &st));
}

// ---- W10 verifier (w10-type-propagation) adversarial tests ------------
// Hunt-list targets: the enum size-mismatch arm of propagateFromPointer
// (newly-wired getTypePartialEnum), the PARTIALSTRUCT arm of
// propagateToPointer (getComponentForPtr), and the multi-level downChain
// parent retention that propagateAddIn2Out relies on.

/// An enum factory with a non-zero enum size (setup_sizes seeds enumsize).
fn enum_factory() -> TypeFactoryImpl {
    let f = TypeFactoryImpl::new();
    f.set_default_alignment_map();
    f.set_max_basetype_size(8);
    // stack_pointer_size, default_data_addr_size, default_size(=enumsize)
    f.setup_sizes(Some(8), 8, 4);
    f
}

/// C++ typeop.cc:225-227 — a pointer to an enum, dereferenced at a *smaller*
/// size, propagates a partial enumeration (not null, not the whole enum).
/// This is the wrap-prone enum arm: getTypePartialEnum(ptrto, 0, sz).
#[test]
fn w10_from_pointer_enum_size_mismatch_yields_partial_enum() {
    let f = enum_factory();
    let en = f.get_type_enum("E").expect("enum");
    assert!(en.is_enum_type(), "fixture must be a real enum");
    let full = en.get_size();
    assert!(full >= 2, "enum must be wider than the truncated deref");
    let ptr = f.get_type_pointer(8, Rc::clone(&en), 1).unwrap();
    // Dereference at a strictly smaller size than the enum.
    let out = propagate_from_pointer(&f, ptr, 1).expect("partial enum, not null");
    // C++ `TypePartialEnum(par,off,sz,strip)` chains `TypeEnum(sz,
    // TYPE_PARTIALENUM)`, whose ctor body **overrides** the live metatype to
    // `(TYPE_PARTIALENUM==TYPE_ENUM_INT)?TYPE_INT:TYPE_UINT` = TYPE_UINT and
    // sets the `enumtype` flag (type.hh:548, type.cc:2683).  The
    // `TYPE_PARTIALENUM` value survives only in `submeta`
    // (`SUB_UINT_PARTIALENUM`) and as the marshalling override.  So the
    // result must read as an ENUM, not as a bare TYPE_PARTIALENUM metatype.
    assert!(
        out.is_enum_type(),
        "partial enum keeps the enumtype flag so getExactPiece/AND typing recognises it"
    );
    assert_eq!(
        out.get_metatype(),
        type_metatype::TYPE_UINT,
        "TypeEnum ctor overrides metatype to TYPE_UINT for a partial enum"
    );
    assert!(
        out.has_stripped(),
        "TypePartialEnum sets has_stripped (type.cc:2687)"
    );
    assert_eq!(out.get_size(), 1, "partial covers the dereferenced size");
}

/// C++ typeop.cc:225 guard — a *plain* (non-enum) pointer dereferenced at a
/// mismatched size must still decline (no enum, no relptr exact-piece).
#[test]
fn w10_from_pointer_plain_size_mismatch_still_declines() {
    let f = enum_factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let ptr = f.get_type_pointer(8, int4t, 1).unwrap();
    assert!(
        propagate_from_pointer(&f, ptr, 1).is_none(),
        "non-enum size mismatch declines (only enums propagate here)"
    );
}

/// C++ typeop.cc:195-197 — propagateToPointer of a TYPE_PARTIALSTRUCT routes
/// through getComponentForPtr: an element-aligned partial of an array yields
/// a pointer to the *element*, not to the partial.
#[test]
fn w10_to_pointer_partialstruct_uses_component_for_ptr() {
    let f = factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    // array of 3 int4 (align_size of element = 4); a partial at offset 0 of
    // a whole element should resolve to the int4 element type.
    let arr = f.get_type_array(3, Rc::clone(&int4t)).unwrap();
    let partial = f.get_type_partial_struct(Rc::clone(&arr), 0, 4).unwrap();
    assert_eq!(partial.get_metatype(), type_metatype::TYPE_PARTIALSTRUCT);
    // getComponentForPtr should pick the element type (offset 0 % 4 == 0).
    let comp = partial.get_component_for_ptr().expect("component");
    assert!(
        Rc::ptr_eq(&comp, &int4t),
        "element-aligned partial of an array maps to the element type"
    );
    let out = propagate_to_pointer(&f, partial, 8, 1).expect("pointer");
    assert_eq!(out.get_metatype(), type_metatype::TYPE_PTR);
    let pointee = out.get_ptr_to().unwrap();
    assert!(
        Rc::ptr_eq(&pointee, &int4t),
        "the produced pointer points at the array element, not the partial"
    );
}

/// C++ TypePointer::downChain (type.cc:1247-1250) only writes `par`/`parOff`
/// when the pointed-to type is a STRUCT/ARRAY. propagateAddIn2Out's do-while
/// loop overwrites parent every iteration, so the *last* downChain call's
/// parent wins.  Pin the single-level case the override depends on: a pointer
/// into the middle of a struct hands back (parent=struct-ptr, parentOff=off).
#[test]
fn w10_downchain_struct_sets_parent_and_offset() {
    let f = factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let st = f.get_type_struct("two").unwrap();
    let fields = vec![
        crate::dtype::TypeField::new(0, 0, "a", Rc::clone(&int4t)),
        crate::dtype::TypeField::new(1, 4, "b", Rc::clone(&int4t)),
    ];
    let st = f.assign_raw_fields_struct(&st, fields, Vec::new()).unwrap();
    let ptr = f.get_type_pointer(8, Rc::clone(&st), 1).unwrap();
    // downChain into offset 4 (the second field): parent must be the struct
    // pointer, parentOff the entry offset (4), result a pointer to field `b`.
    let (next, off, parent, par_off) = f.down_chain(&ptr, 4, true).expect("downchain");
    let parent = parent.expect("struct sets parent");
    assert_eq!(parent.get_metatype(), type_metatype::TYPE_PTR);
    assert!(
        Rc::ptr_eq(&parent.get_ptr_to().unwrap(), &st),
        "parent is the pointer to the containing struct"
    );
    assert_eq!(par_off, 4, "parentOff is the byte offset of entry");
    assert_eq!(off, 0, "landed exactly on field b");
    let next = next.expect("sub-pointer");
    assert!(Rc::ptr_eq(&next.get_ptr_to().unwrap(), &int4t));
}

/// downChain on a *scalar* pointee must NOT set a parent (C++ only the
/// STRUCT/ARRAY arm writes `par`).  This pins the precondition under which
/// the loop's unconditional `parent = par` overwrite is safe: a terminal
/// scalar descent reports parent=None, matching C++ leaving the ref untouched
/// from a prior struct hit only when the scalar is the *same* iteration.
#[test]
fn w10_downchain_scalar_pointee_reports_no_parent() {
    let f = factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let ptr = f.get_type_pointer(8, int4t, 1).unwrap();
    let (_next, _off, parent, par_off) = f.down_chain(&ptr, 0, true).expect("downchain");
    assert!(parent.is_none(), "scalar pointee never sets a parent");
    assert_eq!(par_off, 0);
}

/// FINDING F1 fix (multi-iteration parent retention): C++ `propagateAddIn2Out`'s
/// do-while passes `par`/`parOff` by reference, and `TypePointer::downChain`
/// writes them ONLY on the STRUCT/ARRAY arm (type.cc:1247-1250); a later
/// scalar iteration leaves the prior struct parent intact (the ref is never
/// reset).  The fixed Rust loop mirrors this by overwriting `parent`/`parent_off`
/// only when `par.is_some()`, so a scalar tail iteration (which returns None)
/// must NOT clear a struct container set by an earlier iteration.
///
/// This test replays the exact loop body of `propagate_add_in2_out` for a
/// pointer into the *middle of a scalar field of a struct* (`&s.a + 2`,
/// `a` an int4 at offset 0) and shows the loop now ends with the struct
/// pointer retained, feeding `getTypePointerRel` to produce a TYPE_PTRREL.
#[test]
fn w10_downchain_loop_retains_struct_parent_on_scalar_tail() {
    let f = factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let st = f.get_type_struct("s").unwrap();
    let fields = vec![crate::dtype::TypeField::new(0, 0, "a", Rc::clone(&int4t))];
    let st = f.assign_raw_fields_struct(&st, fields, Vec::new()).unwrap();
    let ptr = f.get_type_pointer(8, Rc::clone(&st), 1).unwrap();

    // Exact replica of the FIXED propagate_add_in2_out do-while (allow_wrap=true,
    // type_offset=2 == 2 bytes into the int4 field).
    let mut type_offset: int8 = 2;
    let mut pointer: Option<Rc<Datatype>> = Some(Rc::clone(&ptr));
    let mut parent: Option<Rc<Datatype>> = None;
    let mut parent_off: int8 = 0;
    let mut iters = 0;
    while let Some(cur) = pointer.clone() {
        let (next, new_off, par, par_off) = f.down_chain(&cur, type_offset, true).unwrap();
        type_offset = new_off;
        // The fix under test: only overwrite when a container is present, so a
        // scalar tail does not clobber the struct seen on the first iteration.
        if par.is_some() {
            parent = par;
            parent_off = par_off;
        }
        pointer = next;
        iters += 1;
        if pointer.is_none() || type_offset == 0 {
            break;
        }
    }
    assert!(
        iters >= 2,
        "must take the multi-iteration path (struct then scalar)"
    );
    // After the fix: parent is the struct pointer from iter1, retained across
    // the scalar tail iteration (which returned par=None) — matching C++.
    let parent = parent.expect("struct container retained across scalar tail");
    assert_eq!(parent.get_metatype(), type_metatype::TYPE_PTR);
    assert!(
        Rc::ptr_eq(&parent.get_ptr_to().unwrap(), &st),
        "retained parent is the pointer to the containing struct"
    );
    assert_eq!(
        parent_off, 2,
        "parentOff is the byte offset into the struct"
    );

    // The container, fed to getTypePointerRel, yields a struct-relative pointer
    // preserving the container — exactly the C++ wrap on this edge.  C++
    // `TypePointerRel` keeps `metatype == TYPE_PTR` internally (type.cc:3010,
    // "Don't use TYPE_PTRREL internally"); the relative identity is the
    // `is_pointer_rel()`/parent surface, not the metatype.
    let pt = match &pointer {
        None => f.get_base(1, type_metatype::TYPE_UNKNOWN).unwrap(),
        Some(p) => p.get_ptr_to().unwrap(),
    };
    // cast: int8->int4 narrow matching C++ getTypePointerRel(int4 off).
    let rel = f
        .get_type_pointer_rel(parent, pt, parent_off as int4)
        .expect("relative pointer");
    assert_eq!(
        rel.get_metatype(),
        type_metatype::TYPE_PTR,
        "a relative pointer reports TYPE_PTR internally (TYPE_PTRREL is the marshalling override)"
    );
    assert!(
        rel.is_pointer_rel(),
        "interior-of-scalar-field-of-struct yields a struct-relative pointer (is_pointer_rel)"
    );
}

// ====================================================================
// Round-2 verifier adversarial tests (w10-type-propagation, F1 fix).
// These probe the *opposite* failure mode of the F1 fix: the
// `if par.is_some()` guard must not OVER-retain — a later STRUCT/ARRAY
// container must replace an earlier one (C++ writes the ref every time
// it hits the STRUCT/ARRAY arm, so the LAST container wins), and a chain
// with NO container at all must leave parent None (no spurious PTRREL).
// ====================================================================

/// F1-fix boundary: STRUCT whose field is an inline ARRAY of int4.  In C++
/// `downChain`, the struct arm sets `par=struct,parOff=off`, `getSubType`
/// returns the ARRAY field, and because `!isArray` it goes through
/// `getTypePointerStripArray` — which STRIPS the array to a pointer-to-int4
/// element (type.cc:1256, 4323-4332).  So the array never surfaces as a
/// standalone `par`; iter2 is a scalar int4 tail returning `par=None`.  The
/// retained container is therefore the STRUCT (parOff = the byte offset),
/// and the F1 fix must keep it across the scalar tail — NOT clear it.  This
/// pins that the strip-array path does not accidentally bury the struct
/// container, and that the fix retains it.
#[test]
fn w10_r2_downchain_struct_with_array_field_retains_struct_across_strip() {
    let f = factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let arr = f.get_type_array(3, Rc::clone(&int4t)).unwrap(); // int4[3], size 12
    let st = f.get_type_struct("sa").unwrap();
    let fields = vec![crate::dtype::TypeField::new(0, 0, "arr", Rc::clone(&arr))];
    let st = f.assign_raw_fields_struct(&st, fields, Vec::new()).unwrap();
    let ptr = f.get_type_pointer(8, Rc::clone(&st), 1).unwrap();

    // Replay the FIXED loop body for byte offset 4 (== &s.arr[1]).
    let mut type_offset: int8 = 4;
    let mut pointer: Option<Rc<Datatype>> = Some(Rc::clone(&ptr));
    let mut parent: Option<Rc<Datatype>> = None;
    let mut parent_off: int8 = 0;
    let mut saw_struct_parent = false;
    let mut saw_scalar_tail_none = false;
    let mut iters = 0;
    while let Some(cur) = pointer.clone() {
        let (next, new_off, par, par_off) = f.down_chain(&cur, type_offset, true).unwrap();
        type_offset = new_off;
        match &par {
            Some(p) if Rc::ptr_eq(&p.get_ptr_to().unwrap(), &st) => saw_struct_parent = true,
            None if iters >= 1 => saw_scalar_tail_none = true,
            _ => {}
        }
        // The element reached after the struct must be the STRIPPED int4
        // element, never a pointer-to-array (proves getTypePointerStripArray ran).
        if iters == 0 {
            assert_eq!(
                next.as_ref().unwrap().get_ptr_to().unwrap().get_metatype(),
                type_metatype::TYPE_INT,
                "struct's array field is stripped to a pointer-to-element on descent"
            );
        }
        if par.is_some() {
            parent = par;
            parent_off = par_off;
        }
        pointer = next;
        iters += 1;
        if pointer.is_none() || type_offset == 0 {
            break;
        }
    }
    assert!(iters >= 2, "struct descent then scalar-element tail");
    assert!(saw_struct_parent, "iter1 produced the struct container");
    assert!(
        saw_scalar_tail_none,
        "scalar tail iteration returned par=None"
    );
    let parent = parent.expect("struct container retained across the scalar tail");
    // The retained container is the STRUCT (the array was stripped, so it
    // never became a `par`); the fix kept it across the par=None tail.
    assert!(
        Rc::ptr_eq(&parent.get_ptr_to().unwrap(), &st),
        "retained parent is the struct, kept across the scalar tail (F1 fix)"
    );
    assert_eq!(
        parent_off, 4,
        "parentOff is the byte offset into the struct"
    );
}

/// F1-fix negative: a pointer into a pure SCALAR (no struct/array anywhere
/// in the descent) must leave `parent == None` after the loop, so the
/// post-loop `if let Some(par)` block is SKIPPED and no spurious TYPE_PTRREL
/// is produced.  This guards against the fix accidentally seeding a parent.
#[test]
fn w10_r2_downchain_pure_scalar_leaves_no_parent() {
    let f = factory();
    // 8-byte scalar pointed at; offset 4 wraps within the scalar (allow_wrap).
    let int8t = f.get_base(8, type_metatype::TYPE_INT).unwrap();
    let ptr = f.get_type_pointer(8, int8t, 1).unwrap();

    let mut type_offset: int8 = 4;
    let mut pointer: Option<Rc<Datatype>> = Some(Rc::clone(&ptr));
    let mut parent: Option<Rc<Datatype>> = None;
    let mut iters = 0;
    while let Some(cur) = pointer.clone() {
        let (next, new_off, par, par_off) = f.down_chain(&cur, type_offset, true).unwrap();
        type_offset = new_off;
        if par.is_some() {
            parent = par;
            let _ = par_off;
        }
        pointer = next;
        iters += 1;
        if pointer.is_none() || type_offset == 0 || iters > 8 {
            break;
        }
    }
    assert!(
        parent.is_none(),
        "no struct/array anywhere -> parent stays None -> post-loop rel-wrap is skipped"
    );
}

/// `get_component_for_ptr` (the PARTIALSTRUCT arm of propagate_to_pointer):
/// the array-element fast path is gated on `offset % eltype.alignSize == 0`.
/// At a MISALIGNED offset (2, into the middle of an int4 element) the C++
/// returns `stripped`, NOT the element type.  This pins the gate so a
/// shortcut that always returns the element type would fail.
#[test]
fn w10_r2_component_for_ptr_misaligned_offset_returns_stripped_not_element() {
    let f = factory();
    let int4t = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let arr = f.get_type_array(3, Rc::clone(&int4t)).unwrap();
    // partial struct over the array, offset 2 (misaligned within int4 element).
    let partial_mis = f.get_type_partial_struct(Rc::clone(&arr), 2, 4).unwrap();
    let comp_mis = partial_mis
        .get_component_for_ptr()
        .expect("partial-struct yields a component");
    assert_ne!(
        comp_mis.get_metatype(),
        type_metatype::TYPE_INT,
        "misaligned offset must NOT take the element fast-path; returns stripped"
    );
    // Aligned offset 0 DOES take the element fast-path -> the int4 element.
    let partial_aln = f.get_type_partial_struct(Rc::clone(&arr), 0, 4).unwrap();
    let comp_aln = partial_aln.get_component_for_ptr().expect("component");
    assert!(
        Rc::ptr_eq(&comp_aln, &int4t),
        "aligned element-boundary offset returns the array element type"
    );
}
