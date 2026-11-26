//! Port of `decompiler/unittests/testtypes.cc`: the two TESTs that need only
//! `TypeEnum::getMatches` (`Datatype::get_matches`, `dtype.rs`), `enum_matching`
//! and `enum_matching2`. The enums are built directly (the value->name map a
//! decoded `TypeEnum` would hold) at the x86-64 default enum size of 8 bytes.

use std::collections::BTreeMap;
use std::rc::Rc;

use unlace_decomp::dtype::{Datatype, DatatypeKind, flags, type_metatype};

/// Build a `TypeEnum` from a (value -> name) map, mirroring the C++
/// `parse("enum name { ... }")` result (an interned `TypeEnum` after decode).
/// The x86-64 test environment's default enum size is 8.
fn make_enum(size: i32, entries: &[(u64, &str)]) -> Rc<Datatype> {
    let mut dt = Datatype::new_with_align(size, size, type_metatype::TYPE_INT);
    dt.flags |= flags::enumtype;
    let mut namemap: BTreeMap<u64, String> = BTreeMap::new();
    for (v, n) in entries {
        namemap.insert(*v, (*n).to_string());
    }
    dt.kind = DatatypeKind::Enum { namemap };
    Rc::new(dt)
}

// ===========================================================================
// Cast TESTs — blocked on the C-type grammar + CastStrategy/TypeOpCast port.
// ===========================================================================

// ===========================================================================
// Enum getMatches TESTs — ported (TypeEnum::getMatches is available).
// ===========================================================================

/// C++ `enum_matching` (testtypes.cc:215-239): enum3 { ZERO=0, ONE=1, TWO=2,
/// FOUR=4, EIGHT=8 } at the x86-64 default size of 8.
#[test]
fn enum_matching() {
    let enum3 = make_enum(
        8,
        &[
            (0, "ZERO"),
            (1, "ONE"),
            (2, "TWO"),
            (4, "FOUR"),
            (8, "EIGHT"),
        ],
    );

    let mut rep = enum3.get_matches(5).unwrap();
    assert_eq!(rep.match_name.len(), 2);
    assert_eq!(rep.match_name[0], "FOUR");
    assert_eq!(rep.match_name[1], "ONE");
    assert!(!rep.complement);

    rep.match_name.clear();
    rep = enum3.get_matches(0xfffffffffffffff7).unwrap();
    assert_eq!(rep.match_name.len(), 1);
    assert_eq!(rep.match_name[0], "EIGHT");
    assert!(rep.complement);

    rep.match_name.clear();
    rep.complement = false;
    rep = enum3.get_matches(0).unwrap();
    assert_eq!(rep.match_name.len(), 1);
    assert_eq!(rep.match_name[0], "ZERO");
    assert!(!rep.complement);

    rep.match_name.clear();
    rep = enum3.get_matches(0x10).unwrap();
    assert_eq!(rep.match_name.len(), 0);
    assert!(!rep.complement);
}

/// C++ `enum_matching2` (testtypes.cc:241-261): enum4 { ZERO=0, ONE=1, TWO=2,
/// FOUR=4, SIX=6, EIGHT=8, ELEVEN=11 } at the x86-64 default size of 8.
#[test]
fn enum_matching2() {
    let enum4 = make_enum(
        8,
        &[
            (0, "ZERO"),
            (1, "ONE"),
            (2, "TWO"),
            (4, "FOUR"),
            (6, "SIX"),
            (8, "EIGHT"),
            (11, "ELEVEN"),
        ],
    );

    let mut rep = enum4.get_matches(12).unwrap();
    assert_eq!(rep.match_name.len(), 2);
    assert_eq!(rep.match_name[0], "EIGHT");
    assert_eq!(rep.match_name[1], "FOUR");
    assert!(!rep.complement);

    rep.match_name.clear();
    rep = enum4.get_matches(7).unwrap();
    assert_eq!(rep.match_name.len(), 2);
    assert_eq!(rep.match_name[0], "SIX");
    assert_eq!(rep.match_name[1], "ONE");
    assert!(!rep.complement);

    rep.match_name.clear();
    rep = enum4.get_matches(11).unwrap();
    assert_eq!(rep.match_name.len(), 1);
    assert_eq!(rep.match_name[0], "ELEVEN");
    assert!(!rep.complement);
}
