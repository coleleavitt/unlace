//! Unit tests for (kuna) `nulterminator`.

use std::rc::Rc;

use unlace_base::address::RangeList;
use unlace_base::space::{AddrSpace, addrspace_flags, spacetype};
use unlace_base::types::{int4, intb, uintb};

use super::*;
use crate::dtype::Datatype;
use crate::varmap::TYPELOCK;

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

#[test]
fn a_zero_at_the_array_end_closes_the_array_one_element_later() {
    let mut st = state();
    st.note_terminator_store(0x6f, 1, true);
    let closed = close_at_terminator(
        &char_array(),
        &zero_store(0x6f, 1),
        Some(&fixed(0x70, 8)),
        &st,
    )
    .expect("an unread zero at the end of an open char array terminates it");
    assert_eq!(closed.sstart, 0x30);
    assert_eq!(closed.size, 0x40);
    assert_eq!(closed.range_type, RangeType::Fixed);
}

#[test]
fn the_closed_array_never_reaches_the_padding_after_its_terminator() {
    let mut st = state();
    st.note_terminator_store(0x51, 1, true);
    let closed = close_at_terminator(
        &char_array(),
        &zero_store(0x51, 1),
        Some(&fixed(0x58, 8)),
        &st,
    )
    .expect("terminator");
    assert_eq!(
        closed.size, 0x22,
        "34 elements, not the 40 the following hint would give"
    );
}

#[test]
fn a_utf16_unit_terminates_a_utf16_array() {
    let mut st = state();
    st.note_terminator_store(0x4e, 2, true);
    let wide = open_array(0x30, base(2, type_metatype::TYPE_UINT));
    let closed = close_at_terminator(&wide, &zero_store(0x4e, 2), Some(&fixed(0x50, 4)), &st)
        .expect("terminator");
    assert_eq!(closed.size, 0x20);
}

#[test]
fn nothing_closes_without_terminator_evidence() {
    let st = state();
    assert!(
        close_at_terminator(
            &char_array(),
            &zero_store(0x6f, 1),
            Some(&fixed(0x70, 8)),
            &st
        )
        .is_none()
    );
}

#[test]
fn one_read_or_nonzero_write_disqualifies_the_slot() {
    let mut st = state();
    st.note_terminator_store(0x6f, 1, true);
    st.note_terminator_store(0x6f, 1, false);
    assert!(
        close_at_terminator(
            &char_array(),
            &zero_store(0x6f, 1),
            Some(&fixed(0x70, 8)),
            &st
        )
        .is_none()
    );
}

/// A single non-terminator write to a slot poisons it for good, regardless of
/// which write came last: `is_terminator_store` folds with AND, not last-wins.
/// A terminator (an unread zero) followed by a non-terminator write (a later
/// non-zero, or a read) must NOT read back as a terminator, and neither must
/// the reverse order.
#[test]
fn any_non_terminator_write_poisons_the_slot_in_either_order() {
    let mut early_bad = state();
    early_bad.note_terminator_store(0x6f, 1, false);
    early_bad.note_terminator_store(0x6f, 1, true);
    assert!(
        !early_bad.is_terminator_store(0x6f, 1),
        "a later zero cannot rescue a poisoned slot"
    );

    let mut late_bad = state();
    late_bad.note_terminator_store(0x6f, 1, true);
    late_bad.note_terminator_store(0x6f, 1, false);
    assert!(
        !late_bad.is_terminator_store(0x6f, 1),
        "a later non-terminator write poisons the slot"
    );

    let mut clean = state();
    clean.note_terminator_store(0x6f, 1, true);
    clean.note_terminator_store(0x6f, 1, true);
    assert!(
        clean.is_terminator_store(0x6f, 1),
        "only if every write is an unread zero"
    );
}

#[test]
fn another_hint_over_the_slot_disqualifies_it() {
    let mut st = state();
    st.note_terminator_store(0x6f, 1, true);
    let next = zero_store(0x6f, 1);
    let address_taken = RangeHint::new(
        0x6f,
        1,
        0x6f,
        base(1, type_metatype::TYPE_INT),
        0,
        RangeType::Open,
        -1,
    );
    assert!(close_at_terminator(&char_array(), &next, Some(&address_taken), &st).is_none());
    assert!(close_at_terminator(&char_array(), &next, Some(&fixed(0x6f, 4)), &st).is_none());
    assert!(close_at_terminator(&char_array(), &next, None, &st).is_none());
    let mut wide_st = state();
    wide_st.note_terminator_store(0x4e, 2, true);
    let wide = open_array(0x30, base(2, type_metatype::TYPE_UINT));
    assert!(
        close_at_terminator(&wide, &zero_store(0x4e, 2), Some(&fixed(0x4f, 1)), &wide_st).is_none()
    );
}

#[test]
fn the_store_must_be_exactly_one_element_at_a_whole_element_distance() {
    let mut st = state();
    st.note_terminator_store(0x6c, 4, true);
    st.note_terminator_store(0x6e, 2, true);
    st.note_terminator_store(0x6f, 1, true);
    st.note_terminator_store(0x6f, 2, true);
    let after = fixed(0x78, 8);
    let bytes = char_array();
    assert!(close_at_terminator(&bytes, &zero_store(0x6c, 4), Some(&after), &st).is_none());
    assert!(close_at_terminator(&bytes, &zero_store(0x6e, 2), Some(&after), &st).is_none());
    let wide = open_array(0x30, base(2, type_metatype::TYPE_UINT));
    assert!(close_at_terminator(&wide, &zero_store(0x6f, 1), Some(&after), &st).is_none());
    assert!(close_at_terminator(&wide, &zero_store(0x6f, 2), Some(&after), &st).is_none());
    assert!(close_at_terminator(&wide, &zero_store(0x6e, 2), Some(&after), &st).is_some());
}

#[test]
fn a_zeroed_slot_after_a_wider_array_is_not_a_terminator() {
    let mut st = state();
    st.note_terminator_store(0x20, 8, true);
    st.note_terminator_store(0x20, 4, true);
    let after = fixed(0x28, 8);
    let words = open_array(0x10, base(8, type_metatype::TYPE_INT));
    assert!(close_at_terminator(&words, &zero_store(0x20, 8), Some(&after), &st).is_none());
    let ints = open_array(0x10, base(4, type_metatype::TYPE_UINT));
    assert!(close_at_terminator(&ints, &zero_store(0x20, 4), Some(&after), &st).is_none());
}

#[test]
fn only_an_open_unlocked_integer_array_is_terminated() {
    let mut st = state();
    st.note_terminator_store(0x6f, 1, true);
    let next = zero_store(0x6f, 1);
    let after = fixed(0x70, 8);

    let mut closed_already = char_array();
    closed_already.range_type = RangeType::Fixed;
    assert!(close_at_terminator(&closed_already, &next, Some(&after), &st).is_none());

    let mut locked = char_array();
    locked.flags = TYPELOCK;
    assert!(close_at_terminator(&locked, &next, Some(&after), &st).is_none());

    let unknown = open_array(0x30, base(1, type_metatype::TYPE_UNKNOWN));
    assert!(close_at_terminator(&unknown, &next, Some(&after), &st).is_none());

    let flags = open_array(0x30, base(1, type_metatype::TYPE_BOOL));
    assert!(close_at_terminator(&flags, &next, Some(&after), &st).is_none());
}

#[test]
fn the_terminator_must_be_a_plain_constant_copy_past_the_array_start() {
    let mut st = state();
    st.note_terminator_store(0x6f, 1, true);
    st.note_terminator_store(0x30, 1, true);
    let after = fixed(0x70, 8);

    let mut read = zero_store(0x6f, 1);
    read.flags = 0;
    assert!(close_at_terminator(&char_array(), &read, Some(&after), &st).is_none());

    let mut locked = zero_store(0x6f, 1);
    locked.flags = COPY_CONSTANT | TYPELOCK;
    assert!(close_at_terminator(&char_array(), &locked, Some(&after), &st).is_none());

    let mut open = zero_store(0x6f, 1);
    open.range_type = RangeType::Open;
    assert!(close_at_terminator(&char_array(), &open, Some(&after), &st).is_none());

    let mut typed = zero_store(0x6f, 1);
    typed.type_ = base(1, type_metatype::TYPE_STRUCT);
    assert!(close_at_terminator(&char_array(), &typed, Some(&after), &st).is_none());

    assert!(
        close_at_terminator(
            &char_array(),
            &zero_store(0x30, 1),
            Some(&fixed(0x31, 1)),
            &st
        )
        .is_none()
    );
}
