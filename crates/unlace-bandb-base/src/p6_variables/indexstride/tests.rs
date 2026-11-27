use std::rc::Rc;

use unlace_base::types::{int4, uintb};

use super::*;
use crate::dtype::Datatype;

fn base(size: int4, meta: type_metatype) -> Rc<Datatype> {
    Rc::new(Datatype::new_with_align(size, size, meta))
}

fn hint(start: uintb, ct: Rc<Datatype>, flags: u32, rt: RangeType, highind: int4) -> RangeHint {
    let size = ct.get_size();
    RangeHint::new(start, size, start as intb, ct, flags, rt, highind)
}

fn fixed(start: uintb, size: int4, meta: type_metatype) -> RangeHint {
    hint(start, base(size, meta), 0, RangeType::Fixed, -1)
}

fn kept(hints: &[RangeHint]) -> Vec<(uintb, int4, RangeType)> {
    hints
        .iter()
        .map(|h| (h.start, h.size, h.range_type))
        .collect()
}

#[test]
fn option_parses_on_and_off() {
    assert!(OptionIndexStride.apply("on").unwrap().0);
    assert!(!OptionIndexStride.apply("off").unwrap().0);
    assert!(OptionIndexStride.apply("maybe").is_err());
}

#[test]
fn wider_integer_reads_inside_the_index_reach_are_dropped() {
    let char_t = base(1, type_metatype::TYPE_INT);
    let mut hints = vec![
        hint(0x10, char_t, 0, RangeType::Open, 3),
        fixed(0x10, 2, type_metatype::TYPE_INT),
        fixed(0x10, 4, type_metatype::TYPE_UINT),
        fixed(0x12, 1, type_metatype::TYPE_INT),
        fixed(0x12, 2, type_metatype::TYPE_UNKNOWN),
        fixed(0x14, 4, type_metatype::TYPE_INT),
    ];
    settle_hints(&mut hints);
    assert_eq!(
        kept(&hints),
        vec![
            (0x10, 1, RangeType::Open),
            (0x12, 1, RangeType::Fixed),
            (0x14, 4, RangeType::Fixed),
        ]
    );
}

#[test]
fn locked_shared_constant_float_and_misaligned_hints_are_kept() {
    let short_t = base(2, type_metatype::TYPE_INT);
    let mut hints = vec![
        hint(0x20, short_t, 0, RangeType::Open, 3),
        hint(
            0x20,
            base(4, type_metatype::TYPE_INT),
            TYPELOCK,
            RangeType::Fixed,
            -1,
        ),
        hint(
            0x20,
            base(8, type_metatype::TYPE_INT),
            SHARED_STORAGE,
            RangeType::Fixed,
            -1,
        ),
        hint(
            0x20,
            base(8, type_metatype::TYPE_UINT),
            COPY_CONSTANT,
            RangeType::Fixed,
            -1,
        ),
        fixed(0x20, 4, type_metatype::TYPE_FLOAT),
        fixed(0x21, 4, type_metatype::TYPE_INT),
        fixed(0x22, 4, type_metatype::TYPE_INT),
    ];
    settle_hints(&mut hints);
    assert_eq!(
        kept(&hints),
        vec![
            (0x20, 2, RangeType::Open),
            (0x20, 4, RangeType::Fixed),
            (0x20, 8, RangeType::Fixed),
            (0x20, 8, RangeType::Fixed),
            (0x20, 4, RangeType::Fixed),
            (0x21, 4, RangeType::Fixed),
        ]
    );
}

#[test]
fn an_unindexed_open_range_takes_nothing() {
    let char_t = base(1, type_metatype::TYPE_UNKNOWN);
    let mut hints = vec![
        hint(0x30, char_t, 0, RangeType::Open, -1),
        fixed(0x30, 2, type_metatype::TYPE_INT),
    ];
    settle_hints(&mut hints);
    assert_eq!(hints.len(), 2);
}
