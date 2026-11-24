//! Tests moved out of `unlace_nulterminator` because they reach pass hooks a higher crate
//! provides (unlace-bandb, the crate above). They live in that crate.

#![allow(unused_imports, dead_code)]

/// The imports of `unlace_nulterminator` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::dtype::type_metatype;
    pub(super) use crate::options::on_or_off;
    pub(super) use crate::varmap::{COPY_CONSTANT, MapState, RangeHint, RangeType};
    pub(super) use unlace_base::marshal::ElementId;
    pub(super) use unlace_base::types::{int4, intb};
}
use crate::dtype::{Datatype, TypeFactoryImpl};
use crate::nulterminator::*;
use crate::varmap::{ScopeLocal, TYPELOCK};
use module_scope::*;
use unlace_base::address::RangeList;
use unlace_base::space::{AddrSpace, addrspace_flags, spacetype};
use unlace_base::types::{int4, intb, uintb};

// Unit tests for (unlace) `nulterminator`.

use std::rc::Rc;

fn stack_space() -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "stack",
        false,
        8,
        1,
        4,
        addrspace_flags::hasphysical,
        1,
        1,
    ))
}

fn base(size: int4, meta: type_metatype) -> Rc<Datatype> {
    Rc::new(Datatype::new_with_align(size, size, meta))
}

fn factory() -> TypeFactoryImpl {
    let factory = TypeFactoryImpl::new();
    factory.set_default_alignment_map();
    factory.set_max_basetype_size(8);
    factory
}

fn window(space: &Rc<AddrSpace>) -> RangeList {
    let mut rn = RangeList::new();
    rn.insert_range(Rc::clone(space), 0, 0xff);
    rn
}

fn state() -> MapState {
    let space = stack_space();
    MapState::new(
        Rc::clone(&space),
        &window(&space),
        &RangeList::new(),
        base(1, type_metatype::TYPE_UNKNOWN),
    )
}

fn open_array(start: uintb, elem: Rc<Datatype>) -> RangeHint {
    let size = elem.get_size();
    RangeHint::new(start, size, start as intb, elem, 0, RangeType::Open, 3)
}

fn zero_store(start: uintb, size: int4) -> RangeHint {
    RangeHint::new(
        start,
        size,
        start as intb,
        base(size, type_metatype::TYPE_UNKNOWN),
        COPY_CONSTANT,
        RangeType::Fixed,
        -1,
    )
}

fn fixed(start: uintb, size: int4) -> RangeHint {
    RangeHint::new(
        start,
        size,
        start as intb,
        base(size, type_metatype::TYPE_INT),
        0,
        RangeType::Fixed,
        -1,
    )
}

fn char_array() -> RangeHint {
    open_array(0x30, base(1, type_metatype::TYPE_UINT))
}

/// The recovered layout of one `restructure` sweep over `hints`, as sorted
/// `(offset, size)` pairs.  `zeros` are the constant-zero slots nothing reads.
fn layout(hints: &[RangeHint], zeros: &[(uintb, int4)]) -> Vec<(uintb, int4)> {
    let types = factory();
    let space = stack_space();
    let mut scope = ScopeLocal::new(0x1234, Rc::clone(&space), "frame", 8).expect("scope");
    let rn = window(&space);
    scope.reset_local_window(&rn, &RangeList::new(), false);
    let mut st = MapState::new(
        Rc::clone(&space),
        &rn,
        &RangeList::new(),
        base(1, type_metatype::TYPE_UNKNOWN),
    );
    for h in hints {
        let ct = if h.range_type == RangeType::Open {
            Some(Rc::clone(&h.type_))
        } else {
            None
        };
        match h.range_type {
            RangeType::Open => st.add_range_pub(h.start, ct, h.flags, RangeType::Open, h.highind),
            _ => st.add_fixed_type_pub(h.start, Rc::clone(&h.type_), h.flags, &types),
        }
    }
    for &(start, size) in zeros {
        st.note_terminator_store(start, size, true);
    }
    scope.restructure(&mut st, &types).expect("restructure");
    let mut out: Vec<(uintb, int4)> = scope
        .mapped_symbol_specs()
        .into_iter()
        .map(|(_, ct, addr, _)| (addr.get_offset(), ct.get_size()))
        .collect();
    out.sort();
    out
}

fn chars_at(start: uintb) -> RangeHint {
    open_array(start, base(1, type_metatype::TYPE_INT))
}

fn read_char(start: uintb) -> RangeHint {
    RangeHint::new(
        start,
        1,
        start as intb,
        base(1, type_metatype::TYPE_INT),
        0,
        RangeType::Fixed,
        -1,
    )
}

#[test]
fn sweep_the_terminator_joins_the_array_and_the_padding_stays_unmapped() {
    let hints = [chars_at(0x10), zero_store(0x31, 1), fixed(0x38, 4)];
    assert_eq!(
        layout(&hints, &[]),
        vec![(0x10, 0x21), (0x31, 1), (0x38, 4)]
    );
    assert_eq!(layout(&hints, &[(0x31, 1)]), vec![(0x10, 0x22), (0x38, 4)]);
}

#[test]
fn sweep_a_zero_two_elements_past_the_new_end_stays_separate() {
    let hints = [
        chars_at(0x10),
        zero_store(0x1f, 1),
        zero_store(0x21, 1),
        fixed(0x28, 4),
    ];
    let zeros = [(0x1f, 1), (0x21, 1)];
    assert_eq!(
        layout(&hints, &zeros),
        vec![(0x10, 0x10), (0x21, 1), (0x28, 4)]
    );
}

#[test]
fn sweep_an_adjacent_second_zero_stays_separate() {
    let hints = [
        chars_at(0x10),
        zero_store(0x1f, 1),
        zero_store(0x20, 1),
        fixed(0x28, 4),
    ];
    let zeros = [(0x1f, 1), (0x20, 1)];
    assert_eq!(
        layout(&hints, &zeros),
        vec![(0x10, 0x10), (0x20, 1), (0x28, 4)]
    );
}

#[test]
fn sweep_a_zero_after_alignment_padding_stays_separate() {
    let hints = [
        chars_at(0x10),
        zero_store(0x2d, 1),
        zero_store(0x30, 1),
        fixed(0x34, 4),
    ];
    let zeros = [(0x2d, 1), (0x30, 1)];
    assert_eq!(
        layout(&hints, &zeros),
        vec![(0x10, 0x1e), (0x30, 1), (0x34, 4)]
    );
}

#[test]
fn sweep_a_zero_local_that_is_read_later_ends_the_array_before_it() {
    let hints = [
        chars_at(0x10),
        read_char(0x1f),
        zero_store(0x1f, 1),
        fixed(0x28, 4),
    ];
    assert_eq!(
        layout(&hints, &[(0x1f, 1)]),
        vec![(0x10, 0xf), (0x1f, 1), (0x28, 4)]
    );
}

#[test]
fn sweep_an_address_taken_at_the_slot_keeps_it_separate() {
    let hints = [
        chars_at(0x10),
        zero_store(0x1f, 1),
        chars_at(0x1f),
        fixed(0x28, 4),
    ];
    let expected = layout(&hints, &[]);
    assert_eq!(layout(&hints, &[(0x1f, 1)]), expected);
    assert!(expected.iter().any(|&(start, _)| start == 0x1f));
}

#[test]
fn sweep_a_wider_element_array_is_unchanged() {
    let ints = open_array(0x10, base(4, type_metatype::TYPE_INT));
    let hints = [ints, zero_store(0x20, 4), fixed(0x28, 4)];
    assert_eq!(layout(&hints, &[(0x20, 4)]), layout(&hints, &[]));
}

#[test]
fn sweep_a_closed_array_that_would_not_fit_falls_back_to_upstream() {
    let types = factory();
    let space = stack_space();
    let mut scope = ScopeLocal::new(0x1234, Rc::clone(&space), "frame", 8).expect("scope");
    let rn = window(&space);
    scope.reset_local_window(&rn, &RangeList::new(), false);
    let at = unlace_base::address::Address::new(Rc::clone(&space), 0x1f);
    scope
        .add_symbol(
            "pinned",
            base(1, type_metatype::TYPE_INT),
            &at,
            &unlace_base::address::Address::new_invalid(),
        )
        .expect("pinned symbol");
    let mut st = MapState::new(
        Rc::clone(&space),
        &rn,
        &RangeList::new(),
        base(1, type_metatype::TYPE_UNKNOWN),
    );
    st.add_range_pub(
        0x10,
        Some(base(1, type_metatype::TYPE_INT)),
        0,
        RangeType::Open,
        3,
    );
    st.add_fixed_type_pub(
        0x20,
        base(1, type_metatype::TYPE_UNKNOWN),
        COPY_CONSTANT,
        &types,
    );
    st.add_fixed_type_pub(0x28, base(4, type_metatype::TYPE_INT), 0, &types);
    st.note_terminator_store(0x20, 1, true);
    scope.restructure(&mut st, &types).expect("restructure");
    let mut out: Vec<(uintb, int4)> = scope
        .mapped_symbol_specs()
        .into_iter()
        .map(|(_, ct, addr, _)| (addr.get_offset(), ct.get_size()))
        .collect();
    out.sort();
    assert_eq!(out, vec![(0x10, 0xf), (0x1f, 1), (0x20, 1), (0x28, 4)]);
}

#[test]
fn sweep_an_address_inside_the_array_keeps_upstream_layout() {
    let ch = base(1, type_metatype::TYPE_INT);
    let pointer = |start: uintb, highind: int4| {
        RangeHint::new(
            start,
            1,
            start as intb,
            Rc::clone(&ch),
            0,
            RangeType::Open,
            highind,
        )
    };
    let stored = RangeHint::new(0x12, 1, 0x12, Rc::clone(&ch), 0, RangeType::Fixed, -1);
    let zeros = [(0x11, 1), (0x13, 1)];
    let two_literals = [
        pointer(0x10, -1),
        zero_store(0x11, 1),
        stored.clone(),
        pointer(0x12, -1),
        zero_store(0x13, 1),
        fixed(0x18, 4),
    ];
    assert_eq!(
        layout(&two_literals, &[]),
        vec![(0x10, 3), (0x13, 1), (0x18, 4)]
    );
    assert_eq!(
        layout(&two_literals, &zeros),
        vec![(0x10, 3), (0x13, 1), (0x18, 4)]
    );
    let one_literal = [
        pointer(0x10, -1),
        zero_store(0x11, 1),
        stored,
        zero_store(0x13, 1),
        fixed(0x18, 4),
    ];
    assert_eq!(layout(&one_literal, &zeros), vec![(0x10, 4), (0x18, 4)]);
}

#[test]
fn sweep_an_indexed_hint_inside_the_array_is_element_arithmetic() {
    let ch = base(1, type_metatype::TYPE_UINT);
    let pointer = |start: uintb, highind: int4| {
        RangeHint::new(
            start,
            1,
            start as intb,
            Rc::clone(&ch),
            0,
            RangeType::Open,
            highind,
        )
    };
    let zeros = [(0x17, 1)];
    let next_element = [
        pointer(0x10, 3),
        pointer(0x11, 3),
        zero_store(0x17, 1),
        fixed(0x18, 4),
    ];
    assert_eq!(
        layout(&next_element, &[]),
        vec![(0x10, 7), (0x17, 1), (0x18, 4)]
    );
    assert_eq!(layout(&next_element, &zeros), vec![(0x10, 8), (0x18, 4)]);
    let address = [
        pointer(0x10, 3),
        pointer(0x11, -1),
        zero_store(0x17, 1),
        fixed(0x18, 4),
    ];
    assert_eq!(
        layout(&address, &zeros),
        vec![(0x10, 7), (0x17, 1), (0x18, 4)]
    );
}
