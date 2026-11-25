use super::*;

/// The `type_metatype` discriminants must match `type.hh:80-100` exactly:
/// these numeric values are load-bearing (the `<=` ordering in
/// `isPieceStructured`, the `base2sub` index, the cast-propagation order).
#[test]
fn type_metatype_discriminants() {
    assert_eq!(type_metatype::TYPE_PARTIALUNION as i32, 0);
    assert_eq!(type_metatype::TYPE_PARTIALSTRUCT as i32, 1);
    assert_eq!(type_metatype::TYPE_PARTIALENUM as i32, 2);
    assert_eq!(type_metatype::TYPE_UNION as i32, 3);
    assert_eq!(type_metatype::TYPE_STRUCT as i32, 4);
    assert_eq!(type_metatype::TYPE_ENUM_INT as i32, 5);
    assert_eq!(type_metatype::TYPE_ENUM_UINT as i32, 6);
    assert_eq!(type_metatype::TYPE_ARRAY as i32, 7);
    assert_eq!(type_metatype::TYPE_PTRREL as i32, 8);
    assert_eq!(type_metatype::TYPE_PTR as i32, 9);
    assert_eq!(type_metatype::TYPE_FLOAT as i32, 10);
    assert_eq!(type_metatype::TYPE_CODE as i32, 11);
    assert_eq!(type_metatype::TYPE_BOOL as i32, 12);
    assert_eq!(type_metatype::TYPE_UINT as i32, 13);
    assert_eq!(type_metatype::TYPE_INT as i32, 14);
    assert_eq!(type_metatype::TYPE_UNKNOWN as i32, 15);
    assert_eq!(type_metatype::TYPE_SPACEBASE as i32, 16);
    assert_eq!(type_metatype::TYPE_VOID as i32, 17);
}

/// `sub_metatype` ordering drives cast/propagation; the numeric values
/// MATTER (transcribed from `type.hh:104-129`).
#[test]
fn sub_metatype_discriminants() {
    assert_eq!(sub_metatype::SUB_VOID as i32, 23);
    assert_eq!(sub_metatype::SUB_SPACEBASE as i32, 22);
    assert_eq!(sub_metatype::SUB_UNKNOWN as i32, 21);
    assert_eq!(sub_metatype::SUB_PARTIALSTRUCT as i32, 20);
    assert_eq!(sub_metatype::SUB_INT_CHAR as i32, 19);
    assert_eq!(sub_metatype::SUB_UINT_CHAR as i32, 18);
    assert_eq!(sub_metatype::SUB_INT_PLAIN as i32, 17);
    assert_eq!(sub_metatype::SUB_UINT_PLAIN as i32, 16);
    assert_eq!(sub_metatype::SUB_INT_ENUM as i32, 15);
    assert_eq!(sub_metatype::SUB_UINT_PARTIALENUM as i32, 14);
    assert_eq!(sub_metatype::SUB_UINT_ENUM as i32, 13);
    assert_eq!(sub_metatype::SUB_INT_UNICODE as i32, 12);
    assert_eq!(sub_metatype::SUB_UINT_UNICODE as i32, 11);
    assert_eq!(sub_metatype::SUB_BOOL as i32, 10);
    assert_eq!(sub_metatype::SUB_CODE as i32, 9);
    assert_eq!(sub_metatype::SUB_FLOAT as i32, 8);
    assert_eq!(sub_metatype::SUB_PTRREL_UNK as i32, 7);
    assert_eq!(sub_metatype::SUB_PTR as i32, 6);
    assert_eq!(sub_metatype::SUB_PTRREL as i32, 5);
    assert_eq!(sub_metatype::SUB_PTR_STRUCT as i32, 4);
    assert_eq!(sub_metatype::SUB_ARRAY as i32, 3);
    assert_eq!(sub_metatype::SUB_STRUCT as i32, 2);
    assert_eq!(sub_metatype::SUB_UNION as i32, 1);
    assert_eq!(sub_metatype::SUB_PARTIALUNION as i32, 0);
}

/// `Ord` on the enums must follow the discriminant order (used by
/// `compare`'s `submeta < op.submeta`).
#[test]
fn sub_metatype_ord_matches_discriminant() {
    assert!(sub_metatype::SUB_PARTIALUNION < sub_metatype::SUB_VOID);
    assert!(sub_metatype::SUB_PTR < sub_metatype::SUB_FLOAT);
    assert!(sub_metatype::SUB_INT_PLAIN > sub_metatype::SUB_UINT_PLAIN);
}

/// `type_class` discriminants (type.hh:132-142), including the 100+ class jumps.
#[test]
fn type_class_discriminants() {
    assert_eq!(type_class::TYPECLASS_GENERAL as i32, 0);
    assert_eq!(type_class::TYPECLASS_FLOAT as i32, 1);
    assert_eq!(type_class::TYPECLASS_PTR as i32, 2);
    assert_eq!(type_class::TYPECLASS_HIDDENRET as i32, 3);
    assert_eq!(type_class::TYPECLASS_VECTOR as i32, 4);
    assert_eq!(type_class::TYPECLASS_CLASS1 as i32, 100);
    assert_eq!(type_class::TYPECLASS_CLASS2 as i32, 101);
    assert_eq!(type_class::TYPECLASS_CLASS3 as i32, 102);
    assert_eq!(type_class::TYPECLASS_CLASS4 as i32, 103);
}

/// `base2sub[m]` parity with `type.cc:23-27` for every metatype.
#[test]
fn base2sub_parity() {
    use sub_metatype::*;
    use type_metatype::*;
    assert_eq!(base2sub(TYPE_PARTIALUNION), SUB_PARTIALUNION);
    assert_eq!(base2sub(TYPE_PARTIALSTRUCT), SUB_PARTIALSTRUCT);
    assert_eq!(base2sub(TYPE_PARTIALENUM), SUB_UINT_PARTIALENUM);
    assert_eq!(base2sub(TYPE_UNION), SUB_UNION);
    assert_eq!(base2sub(TYPE_STRUCT), SUB_STRUCT);
    assert_eq!(base2sub(TYPE_ENUM_INT), SUB_INT_ENUM);
    assert_eq!(base2sub(TYPE_ENUM_UINT), SUB_UINT_ENUM);
    assert_eq!(base2sub(TYPE_ARRAY), SUB_ARRAY);
    assert_eq!(base2sub(TYPE_PTRREL), SUB_PTRREL);
    assert_eq!(base2sub(TYPE_PTR), SUB_PTR);
    assert_eq!(base2sub(TYPE_FLOAT), SUB_FLOAT);
    assert_eq!(base2sub(TYPE_CODE), SUB_CODE);
    assert_eq!(base2sub(TYPE_BOOL), SUB_BOOL);
    assert_eq!(base2sub(TYPE_UINT), SUB_UINT_PLAIN);
    assert_eq!(base2sub(TYPE_INT), SUB_INT_PLAIN);
    assert_eq!(base2sub(TYPE_UNKNOWN), SUB_UNKNOWN);
    assert_eq!(base2sub(TYPE_SPACEBASE), SUB_SPACEBASE);
    assert_eq!(base2sub(TYPE_VOID), SUB_VOID);
}

/// `metatype2string` round-trips through `string2metatype` for every
/// metatype `string2metatype` recognizes.
///
/// `TYPE_PARTIALENUM` is **deliberately excluded**: upstream C++
/// `string2metatype` (type.cc:307-369) has no `"partenum"` case (its 'p'
/// branch only matches ptr/ptrrel/partunion/partstruct), so the string
/// `"partenum"` does not decode back. This asymmetry is faithfully
/// reproduced — see [`partenum_string_is_not_decodable`].
#[test]
fn metatype_string_roundtrip() {
    use type_metatype::*;
    for m in [
        TYPE_PARTIALUNION,
        TYPE_PARTIALSTRUCT,
        TYPE_UNION,
        TYPE_STRUCT,
        TYPE_ENUM_INT,
        TYPE_ENUM_UINT,
        TYPE_ARRAY,
        TYPE_PTRREL,
        TYPE_PTR,
        TYPE_FLOAT,
        TYPE_CODE,
        TYPE_BOOL,
        TYPE_UINT,
        TYPE_INT,
        TYPE_UNKNOWN,
        TYPE_SPACEBASE,
        TYPE_VOID,
    ] {
        let s = metatype2string(m).unwrap();
        assert_eq!(string2metatype(&s).unwrap(), m, "roundtrip failed for {s}");
    }
}

/// Faithful upstream asymmetry: `metatype2string(TYPE_PARTIALENUM)` yields
/// `"partenum"`, but `string2metatype("partenum")` is not a case in the C++
/// and therefore errors (type.cc 'p' branch omits it).
#[test]
fn partenum_string_is_not_decodable() {
    assert_eq!(
        metatype2string(type_metatype::TYPE_PARTIALENUM).unwrap(),
        "partenum"
    );
    assert!(string2metatype("partenum").is_err());
}

/// A couple of the load-bearing exact spellings (used in encode/decode).
#[test]
fn metatype_string_exact_spellings() {
    assert_eq!(
        metatype2string(type_metatype::TYPE_PARTIALUNION).unwrap(),
        "partunion"
    );
    assert_eq!(
        metatype2string(type_metatype::TYPE_PARTIALSTRUCT).unwrap(),
        "partstruct"
    );
    assert_eq!(
        metatype2string(type_metatype::TYPE_PARTIALENUM).unwrap(),
        "partenum"
    );
    assert_eq!(
        metatype2string(type_metatype::TYPE_ENUM_INT).unwrap(),
        "enum_int"
    );
    assert_eq!(
        metatype2string(type_metatype::TYPE_ENUM_UINT).unwrap(),
        "enum_uint"
    );
    assert_eq!(
        metatype2string(type_metatype::TYPE_SPACEBASE).unwrap(),
        "spacebase"
    );
}

#[test]
fn string2metatype_unknown_errors() {
    assert!(string2metatype("notatype").is_err());
    // Known first char, unknown full string still errors (C++ break + throw).
    assert!(string2metatype("ptrx").is_err());
}

#[test]
fn string2typeclass_parity() {
    use type_class::*;
    assert_eq!(string2typeclass("general").unwrap(), TYPECLASS_GENERAL);
    assert_eq!(string2typeclass("float").unwrap(), TYPECLASS_FLOAT);
    assert_eq!(string2typeclass("ptr").unwrap(), TYPECLASS_PTR);
    assert_eq!(string2typeclass("pointer").unwrap(), TYPECLASS_PTR);
    assert_eq!(string2typeclass("hiddenret").unwrap(), TYPECLASS_HIDDENRET);
    assert_eq!(string2typeclass("vector").unwrap(), TYPECLASS_VECTOR);
    assert_eq!(string2typeclass("class1").unwrap(), TYPECLASS_CLASS1);
    assert_eq!(string2typeclass("class4").unwrap(), TYPECLASS_CLASS4);
    // 'u' "unknown" maps to general (type.cc:409-411).
    assert_eq!(string2typeclass("unknown").unwrap(), TYPECLASS_GENERAL);
    assert!(string2typeclass("bogus").is_err());
}

#[test]
fn metatype2typeclass_parity() {
    use type_class::*;
    use type_metatype::*;
    assert_eq!(metatype2typeclass(TYPE_FLOAT), TYPECLASS_FLOAT);
    assert_eq!(metatype2typeclass(TYPE_PTR), TYPECLASS_PTR);
    assert_eq!(metatype2typeclass(TYPE_INT), TYPECLASS_GENERAL);
    assert_eq!(metatype2typeclass(TYPE_STRUCT), TYPECLASS_GENERAL);
}

/// The 2-arg skeletal constructor (preserved from W3) sets align=-1 and
/// derives `submeta` from `base2sub`.
#[test]
fn new_skeletal_derives_submeta() {
    let dt = Datatype::new(4, type_metatype::TYPE_INT);
    assert_eq!(dt.get_size(), 4);
    assert_eq!(dt.get_metatype(), type_metatype::TYPE_INT);
    assert_eq!(dt.get_sub_meta(), sub_metatype::SUB_INT_PLAIN);
    assert_eq!(dt.alignment, -1);
    assert_eq!(dt.align_size, 4);
    assert_eq!(dt.id, 0);
    assert_eq!(dt.flags, 0);
}

/// The 3-arg constructor mirrors `Datatype(s,align,m)`.
#[test]
fn new_with_align_parity() {
    let dt = Datatype::new_with_align(8, 8, type_metatype::TYPE_FLOAT);
    assert_eq!(dt.get_alignment(), 8);
    assert_eq!(dt.get_align_size(), 8);
    assert_eq!(dt.get_sub_meta(), sub_metatype::SUB_FLOAT);
}

/// Kind-payload construction: a pointer carries ptrto/wordsize and the
/// dependency/accessor methods read it.
#[test]
fn pointer_kind_payload() {
    let ptrto = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let mut p = Datatype::new_with_align(8, -1, type_metatype::TYPE_PTR);
    p.kind = DatatypeKind::Pointer {
        ptrto: Rc::clone(&ptrto),
        spaceid: None,
        truncate: None,
        wordsize: 1,
    };
    assert_eq!(p.num_depend(), 1);
    assert_eq!(p.get_word_size(), Some(1));
    assert_eq!(p.get_ptr_to().unwrap().get_size(), 4);
    assert_eq!(p.get_depend(0).unwrap().get_size(), 4);
    let (into, off) = p.get_ptr_into().unwrap().unwrap();
    assert_eq!(into.get_size(), 4);
    assert_eq!(off, 0);
}

/// Kind-payload construction: an array carries arrayof/arraysize.
#[test]
fn array_kind_payload() {
    let elem = Rc::new(Datatype::new(2, type_metatype::TYPE_INT));
    let mut a = Datatype::new_with_align(20, -1, type_metatype::TYPE_ARRAY);
    a.kind = DatatypeKind::Array {
        arrayof: Rc::clone(&elem),
        arraysize: 10,
    };
    assert_eq!(a.num_depend(), 1);
    assert_eq!(a.num_elements(), Some(10));
    assert_eq!(a.get_array_base().unwrap().get_size(), 2);
}

/// Struct field count drives num_depend/get_depend.
#[test]
fn struct_kind_payload() {
    let f0 = TypeField::new(
        0,
        0,
        "a",
        Rc::new(Datatype::new(4, type_metatype::TYPE_INT)),
    );
    let f1 = TypeField::new(
        1,
        4,
        "b",
        Rc::new(Datatype::new(2, type_metatype::TYPE_INT)),
    );
    let mut s = Datatype::new_with_align(8, -1, type_metatype::TYPE_STRUCT);
    s.kind = DatatypeKind::Struct {
        field: vec![f0, f1],
        bitfield: vec![],
    };
    assert_eq!(s.num_depend(), 2);
    assert_eq!(s.get_depend(1).unwrap().get_size(), 2);
    assert!(s.get_depend(2).is_none());
}

/// The base `compare`/`compareDependency` (the implemented path) sort on
/// submeta then size, per `type.cc:216-237`.
#[test]
fn compare_base_orders_submeta_then_size() {
    let int_t = Datatype::new(4, type_metatype::TYPE_INT); // submeta INT_PLAIN=17
    let uint_t = Datatype::new(4, type_metatype::TYPE_UINT); // submeta UINT_PLAIN=16
    // UINT_PLAIN(16) < INT_PLAIN(17): uint precedes int -> int.compare(uint) == 1.
    assert_eq!(int_t.compare(&uint_t, 10).unwrap(), 1);
    assert_eq!(uint_t.compare(&int_t, 10).unwrap(), -1);
    // Same submeta, different size: returns op.size - size.
    let int8_t = Datatype::new(8, type_metatype::TYPE_INT);
    assert_eq!(int_t.compare(&int8_t, 10).unwrap(), 8 - 4);
    assert_eq!(int_t.compare(&int_t, 10).unwrap(), 0);
    // compareDependency shares the body.
    assert_eq!(int_t.compare_dependency(&uint_t).unwrap(), 1);
}

/// `is_piece_structured` follows `metatype <= TYPE_ARRAY`.
#[test]
fn is_piece_structured_boundary() {
    assert!(Datatype::new(4, type_metatype::TYPE_ARRAY).is_piece_structured());
    assert!(Datatype::new(4, type_metatype::TYPE_STRUCT).is_piece_structured());
    assert!(!Datatype::new(8, type_metatype::TYPE_PTR).is_piece_structured());
    assert!(!Datatype::new(4, type_metatype::TYPE_INT).is_piece_structured());
}

/// Boolean property flags read out of `flags` correctly.
#[test]
fn flag_property_queries() {
    let mut dt = Datatype::new(1, type_metatype::TYPE_INT);
    assert!(!dt.is_core_type());
    assert!(!dt.needs_resolution());
    dt.flags |= flags::coretype | flags::needs_resolution | flags::chartype;
    assert!(dt.is_core_type());
    assert!(dt.needs_resolution());
    assert!(dt.is_ascii());
    assert!(dt.is_char_print());
    // display format encoded in bits 12-14.
    dt.flags |= 2 << 12; // dec
    assert_eq!(dt.get_display_format(), 2);
}

/// The structured-override compare is implemented in type-2: two identical
/// empty structs compare equal; differing field counts order by the
/// `(op.field.size() - field.size())` finisher.
#[test]
fn compare_struct_implemented() {
    let mut s = Datatype::new_with_align(8, -1, type_metatype::TYPE_STRUCT);
    s.kind = DatatypeKind::Struct {
        field: vec![],
        bitfield: vec![],
    };
    let other = s.clone();
    assert_eq!(s.compare(&other, 10).unwrap(), 0);
    // A struct with one field vs an empty struct: base compare ties (same
    // submeta/size), then field.size() differs: ts(0) - this(1) = -1.
    let mut s1 = Datatype::new_with_align(8, -1, type_metatype::TYPE_STRUCT);
    s1.kind = DatatypeKind::Struct {
        field: vec![TypeField::new(
            0,
            0,
            "a",
            Rc::new(Datatype::new(8, type_metatype::TYPE_INT)),
        )],
        bitfield: vec![],
    };
    // s1 (1 field) vs s (0 fields): returns op.field.size() - field.size() = -1.
    assert_eq!(s1.compare(&s, 10).unwrap(), -1);
    assert_eq!(s.compare(&s1, 10).unwrap(), 1);
}

/// `is_ptrsub_matching` base returns false for non-pointers (type.cc:555-559),
/// and `TypePointer::isPtrsubMatching` (type.cc:1260-1312) returns false for a
/// pointer to a non-structured (plain) type.  A pointer to a TYPE_STRUCT now
/// walks the real (type-2) `ptrto.get_sub_type` and resolves the field.
#[test]
fn is_ptrsub_matching_routing() {
    // base: non-pointer -> false.
    let int_t = Datatype::new(4, type_metatype::TYPE_INT);
    assert!(!int_t.is_ptrsub_matching(0, 0, 1).unwrap());
    // pointer to plain int: TypePointer override hits the `else` -> false.
    let mut p = Datatype::new_with_align(8, -1, type_metatype::TYPE_PTR);
    p.kind = DatatypeKind::Pointer {
        ptrto: Rc::new(Datatype::new(4, type_metatype::TYPE_INT)),
        spaceid: None,
        truncate: None,
        wordsize: 1,
    };
    assert!(!p.is_ptrsub_matching(0, 0, 1).unwrap());
    // pointer to an array of int: off==0, multiplier(1) < element align-size(4)
    // -> matches (true).
    let mut elem = Datatype::new_with_align(4, 4, type_metatype::TYPE_INT);
    elem.align_size = 4;
    let mut arr = Datatype::new_with_align(8, 4, type_metatype::TYPE_ARRAY);
    arr.kind = DatatypeKind::Array {
        arrayof: Rc::new(elem),
        arraysize: 2,
    };
    let mut p_arr = Datatype::new_with_align(8, -1, type_metatype::TYPE_PTR);
    p_arr.kind = DatatypeKind::Pointer {
        ptrto: Rc::new(arr),
        spaceid: None,
        truncate: None,
        wordsize: 1,
    };
    assert!(p_arr.is_ptrsub_matching(0, 0, 1).unwrap());
    // pointer to a struct: the override now calls the real (type-2)
    // ptrto.get_sub_type.  Field "a" is an int4 at offset 0 (size 4) in an
    // 8-byte struct (align 4).  is_ptrsub_matching(off=0, extra=4, mult=1):
    // multiplier(1) < align_size(4); getSubType(0) -> the int (size 4),
    // newoff==0; extra(4) >= sub.size(4) and the int has no array slack, so
    // the field check fails -> false.
    let mut st = Datatype::new_with_align(8, 4, type_metatype::TYPE_STRUCT);
    let int4_field = {
        let mut f = Datatype::new_with_align(4, 4, type_metatype::TYPE_INT);
        f.align_size = 4;
        f
    };
    st.kind = DatatypeKind::Struct {
        field: vec![TypeField::new(0, 0, "a", Rc::new(int4_field))],
        bitfield: vec![],
    };
    st.align_size = 8;
    let mut p_st = Datatype::new_with_align(8, -1, type_metatype::TYPE_PTR);
    p_st.kind = DatatypeKind::Pointer {
        ptrto: Rc::new(st),
        spaceid: None,
        truncate: None,
        wordsize: 1,
    };
    assert!(!p_st.is_ptrsub_matching(0, 4, 1).unwrap());
    // extra=0 lands inside field "a" (0 < 4), so the same struct matches.
    assert!(p_st.is_ptrsub_matching(0, 0, 1).unwrap());
}

/// `is_primitive_whole` follows the C++ recursion (type.cc:505-518).
#[test]
fn is_primitive_whole_recursion() {
    // Plain int is primitive whole.
    assert!(Datatype::new(4, type_metatype::TYPE_INT).is_primitive_whole());
    // Array of one element of equal size -> recurses to the element.
    let elem = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let mut a = Datatype::new_with_align(4, -1, type_metatype::TYPE_ARRAY);
    a.kind = DatatypeKind::Array {
        arrayof: elem,
        arraysize: 1,
    };
    assert!(a.is_primitive_whole());
    // Struct with a smaller single component -> not whole (size mismatch).
    let f0 = TypeField::new(
        0,
        0,
        "a",
        Rc::new(Datatype::new(4, type_metatype::TYPE_INT)),
    );
    let mut s = Datatype::new_with_align(8, -1, type_metatype::TYPE_STRUCT);
    s.kind = DatatypeKind::Struct {
        field: vec![f0],
        bitfield: vec![],
    };
    assert!(!s.is_primitive_whole());
}

// -- Pointer / Array compare overrides (type.cc:1074-1108, 1363-1384) ----

/// Build a distinct address space with a chosen index (for the spaceid
/// tie-break in `TypePointer::compare`).
fn space_with_index(idx: int4) -> Rc<AddrSpace> {
    use unlace_base::space::spacetype;
    Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        idx,
        0,
        0,
        0,
    ))
}

fn make_pointer(ptrto: Rc<Datatype>, spaceid: Option<Rc<AddrSpace>>, wordsize: uint4) -> Datatype {
    let mut p = Datatype::new_with_align(8, -1, type_metatype::TYPE_PTR);
    p.kind = DatatypeKind::Pointer {
        ptrto,
        spaceid,
        truncate: None,
        wordsize,
    };
    p
}

fn make_array(arrayof: Rc<Datatype>, arraysize: int4, size: int4) -> Datatype {
    let mut a = Datatype::new_with_align(size, -1, type_metatype::TYPE_ARRAY);
    a.kind = DatatypeKind::Array { arrayof, arraysize };
    a
}

/// `TypePointer::compare` (type.cc:1074-1093): after the base step, tie-break
/// on wordsize, then spaceid (no-space later, else by getIndex), then recurse
/// into ptrto with a decremented level.
#[test]
fn pointer_compare_tiebreaks() {
    let int4_t = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    // wordsize tie-break: smaller wordsize earlier.
    let p_ws1 = make_pointer(Rc::clone(&int4_t), None, 1);
    let p_ws2 = make_pointer(Rc::clone(&int4_t), None, 2);
    assert_eq!(p_ws1.compare(&p_ws2, 10).unwrap(), -1);
    assert_eq!(p_ws2.compare(&p_ws1, 10).unwrap(), 1);

    // spaceid tie-break: a pointer WITH a space comes earlier than one without.
    let spc = space_with_index(3);
    let p_nospace = make_pointer(Rc::clone(&int4_t), None, 1);
    let p_space = make_pointer(Rc::clone(&int4_t), Some(Rc::clone(&spc)), 1);
    assert_eq!(p_nospace.compare(&p_space, 10).unwrap(), 1); // no space -> later
    assert_eq!(p_space.compare(&p_nospace, 10).unwrap(), -1);

    // two spaces: ordered by index.
    let spc5 = space_with_index(5);
    let p_s3 = make_pointer(Rc::clone(&int4_t), Some(Rc::clone(&spc)), 1);
    let p_s5 = make_pointer(Rc::clone(&int4_t), Some(Rc::clone(&spc5)), 1);
    assert_eq!(p_s3.compare(&p_s5, 10).unwrap(), -1);
    assert_eq!(p_s5.compare(&p_s3, 10).unwrap(), 1);

    // ptrto recursion: ptr-to-int4 vs ptr-to-int8 -> recurse, op.size - size = 4.
    let int8_t = Rc::new(Datatype::new(8, type_metatype::TYPE_INT));
    let p_int4 = make_pointer(Rc::clone(&int4_t), None, 1);
    let p_int8 = make_pointer(Rc::clone(&int8_t), None, 1);
    assert_eq!(p_int4.compare(&p_int8, 10).unwrap(), 8 - 4);

    // level == 0 short-circuits to id comparison instead of recursing.
    let mut p_a = make_pointer(Rc::clone(&int4_t), None, 1);
    let mut p_b = make_pointer(Rc::clone(&int8_t), None, 1);
    p_a.id = 100;
    p_b.id = 200;
    assert_eq!(p_a.compare(&p_b, 0).unwrap(), -1); // level-1 < 0 -> id 100 < 200
    assert_eq!(p_b.compare(&p_a, 0).unwrap(), 1);
}

/// `TypePointer::compareDependency` (type.cc:1095-1108): submeta, then
/// ptrto-identity, wordsize, spaceid, then op.size - size.
#[test]
fn pointer_compare_dependency_uses_ptr_identity() {
    let int4_a = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let int4_b = Rc::new(Datatype::new(4, type_metatype::TYPE_INT)); // distinct alloc
    let p_a = make_pointer(Rc::clone(&int4_a), None, 1);
    let p_a2 = make_pointer(Rc::clone(&int4_a), None, 1); // same ptrto alloc
    let p_b = make_pointer(Rc::clone(&int4_b), None, 1); // different ptrto alloc
    // Same ptrto identity + same wordsize/space/size -> 0.
    assert_eq!(p_a.compare_dependency(&p_a2).unwrap(), 0);
    // Different ptrto identity -> nonzero, and antisymmetric.
    let ab = p_a.compare_dependency(&p_b).unwrap();
    let ba = p_b.compare_dependency(&p_a).unwrap();
    assert!(ab != 0);
    assert_eq!(ab, -ba);
}

/// `TypeArray::compare` (type.cc:1363-1375) recurses into the element with a
/// decremented level, and `compareDependency` (1377-1384) uses element
/// pointer identity.
#[test]
fn array_compare_and_dependency() {
    let int4_t = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let int8_t = Rc::new(Datatype::new(8, type_metatype::TYPE_INT));
    // array[2] of int4 (size 8) vs array[1] of int8 (size 8): same submeta,
    // same size -> base step 0; recurse into element: op.size(8)-size(4)=4.
    let a_i4 = make_array(Rc::clone(&int4_t), 2, 8);
    let a_i8 = make_array(Rc::clone(&int8_t), 1, 8);
    assert_eq!(a_i4.compare(&a_i8, 10).unwrap(), 4);
    assert_eq!(a_i8.compare(&a_i4, 10).unwrap(), -4);

    // compareDependency uses element identity; same element alloc -> 0.
    let a_same = make_array(Rc::clone(&int4_t), 2, 8);
    assert_eq!(a_i4.compare_dependency(&a_same).unwrap(), 0);

    // level == 0 short-circuits to id comparison.
    let mut a1 = make_array(Rc::clone(&int4_t), 2, 8);
    let mut a2 = make_array(Rc::clone(&int8_t), 1, 8);
    a1.id = 7;
    a2.id = 9;
    assert_eq!(a1.compare(&a2, 0).unwrap(), -1);
}

/// **Total-order fidelity** (the riskiest surface).  Over a corpus of the
/// in-scope kinds (plain scalars, pointers with varying ptrto/wordsize/space,
/// arrays), `compare`/`compareDependency` must be a total order:
/// reflexive (x∘x==0), antisymmetric (sign(x∘y) == -sign(y∘x)), and the sign
/// must be consistent (a strict weak ordering — equal classes are
/// transitive).  A wrong subclass grouping silently corrupts the TypeFactory
/// tree, so this generated matrix is the guard.
#[test]
fn compare_total_order_matrix() {
    let i1 = Rc::new(Datatype::new(1, type_metatype::TYPE_INT));
    let i4 = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let u4 = Rc::new(Datatype::new(4, type_metatype::TYPE_UINT));
    let f8 = Rc::new(Datatype::new(8, type_metatype::TYPE_FLOAT));
    let b1 = Rc::new(Datatype::new(1, type_metatype::TYPE_BOOL));
    let spc = space_with_index(2);

    let corpus: Vec<Rc<Datatype>> = vec![
        Rc::clone(&i1),
        Rc::clone(&i4),
        Rc::clone(&u4),
        Rc::clone(&f8),
        Rc::clone(&b1),
        Rc::new(make_pointer(Rc::clone(&i4), None, 1)),
        Rc::new(make_pointer(Rc::clone(&i4), None, 2)),
        Rc::new(make_pointer(Rc::clone(&i4), Some(Rc::clone(&spc)), 1)),
        Rc::new(make_pointer(Rc::clone(&f8), None, 1)),
        Rc::new(make_array(Rc::clone(&i4), 2, 8)),
        Rc::new(make_array(Rc::clone(&i1), 4, 4)),
    ];

    let sign = |x: int4| -> int4 { x.signum() };

    // Reflexivity + antisymmetry for both comparators.
    for a in &corpus {
        assert_eq!(a.compare(a, 10).unwrap(), 0, "compare not reflexive");
        assert_eq!(
            a.compare_dependency(a).unwrap(),
            0,
            "compareDependency not reflexive"
        );
        for b in &corpus {
            let ab = sign(a.compare(b, 10).unwrap());
            let ba = sign(b.compare(a, 10).unwrap());
            assert_eq!(ab, -ba, "compare not antisymmetric");
            let dab = sign(a.compare_dependency(b).unwrap());
            let dba = sign(b.compare_dependency(a).unwrap());
            assert_eq!(dab, -dba, "compareDependency not antisymmetric");
        }
    }

    // Transitivity of the strict order: if a<b and b<c then a<c, over all
    // ordered triples (compare with level 10).
    for a in &corpus {
        for b in &corpus {
            for c in &corpus {
                let ab = sign(a.compare(b, 10).unwrap());
                let bc = sign(b.compare(c, 10).unwrap());
                let ac = sign(a.compare(c, 10).unwrap());
                if ab < 0 && bc < 0 {
                    assert!(ac < 0, "compare not transitive (a<b<c => a<c)");
                }
                if ab == 0 && bc == 0 {
                    assert_eq!(ac, 0, "compare equality not transitive");
                }
            }
        }
    }
}

/// `getSubType` for the in-scope pointer/array kinds (type.cc:1061-1072,
/// 1386-1393).
#[test]
fn get_sub_type_pointer_and_array() {
    // Array: off < size -> element with renormalized offset modulo align-size.
    let mut elem = Datatype::new_with_align(4, 4, type_metatype::TYPE_INT);
    elem.align_size = 4;
    let arr = make_array(Rc::new(elem), 3, 12);
    let (sub, newoff) = arr.get_sub_type(7).unwrap();
    assert_eq!(sub.unwrap().get_size(), 4); // element
    assert_eq!(newoff, 7 % 4); // 3
    // off >= size -> base (None, off).
    let (sub, newoff) = arr.get_sub_type(12).unwrap();
    assert!(sub.is_none());
    assert_eq!(newoff, 12);

    // Pointer without truncate -> base (None, off).
    let int4_t = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let p = make_pointer(Rc::clone(&int4_t), None, 1);
    let (sub, newoff) = p.get_sub_type(3).unwrap();
    assert!(sub.is_none());
    assert_eq!(newoff, 3);

    // Pointer WITH a truncate window (little-endian: min == 0).
    let trunc = Rc::new(Datatype::new(4, type_metatype::TYPE_PTR));
    let mut p_tr = Datatype::new_with_align(8, -1, type_metatype::TYPE_PTR);
    p_tr.kind = DatatypeKind::Pointer {
        ptrto: Rc::clone(&int4_t),
        spaceid: None,
        truncate: Some(Rc::clone(&trunc)),
        wordsize: 1,
    };
    // off in [0,4) -> the truncated form, newoff = off - 0.
    let (sub, newoff) = p_tr.get_sub_type(2).unwrap();
    assert_eq!(sub.unwrap().get_size(), 4);
    assert_eq!(newoff, 2);
    // off >= 4 -> outside the window -> base (None, off).
    let (sub, newoff) = p_tr.get_sub_type(5).unwrap();
    assert!(sub.is_none());
    assert_eq!(newoff, 5);
}

/// `nearestArrayedComponent{Forward,Backward}` for the TypeArray override and
/// the base default (type.cc:1395-1413, 190-209).
#[test]
fn nearest_arrayed_component() {
    let mut elem = Datatype::new_with_align(4, 4, type_metatype::TYPE_INT);
    elem.align_size = 4;
    let arr = make_array(Rc::new(elem), 3, 12);
    // forward: off<=0 -> distance -off, element size = align-size of element.
    let (dist, newoff, el) = arr.nearest_arrayed_component_forward(0, 128).unwrap();
    assert_eq!((dist, newoff, el), (0, 0, 4));
    // forward: off>0 -> -1 (in middle of array).
    let (dist, _, _) = arr.nearest_arrayed_component_forward(4, 128).unwrap();
    assert_eq!(dist, -1);
    // backward: off>=0 and off<=size -> size - off.
    let (dist, newoff, el) = arr.nearest_arrayed_component_backward(4, 128).unwrap();
    assert_eq!((dist, newoff, el), (12 - 4, 4, 4));
    // backward: off<0 -> -1.
    let (dist, _, _) = arr.nearest_arrayed_component_backward(-1, 128).unwrap();
    assert_eq!(dist, -1);

    // base default for a non-array: -1.
    let int4_t = Datatype::new(4, type_metatype::TYPE_INT);
    assert_eq!(
        int4_t.nearest_arrayed_component_forward(0, 128).unwrap().0,
        -1
    );
    assert_eq!(
        int4_t.nearest_arrayed_component_backward(0, 128).unwrap().0,
        -1
    );
}

/// `TypeArray::getHoleSize` (type.cc:1415-1420) renormalizes into the element
/// and recurses; for a plain element (no holes) the result is 0.
#[test]
fn array_get_hole_size() {
    let mut elem = Datatype::new_with_align(4, 4, type_metatype::TYPE_INT);
    elem.align_size = 4;
    let arr = make_array(Rc::new(elem), 3, 12);
    assert_eq!(arr.get_hole_size(5).unwrap(), 0);
}

/// LOSS-050 restored: `resolveInFlow`/`findResolve` return the receiver
/// unchanged for every kind without a union override; the array and
/// pointer-to-union paths still STUB.
#[test]
fn resolve_in_flow_returns_self_for_plain_kinds() {
    let int_t = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let op = crate::context::OpId::default();
    let r = int_t.resolve_in_flow(op, 0).unwrap();
    assert!(Rc::ptr_eq(&r, &int_t));
    let f = int_t.find_resolve(op, -1).unwrap();
    assert!(Rc::ptr_eq(&f, &int_t));

    // Pointer to a non-union -> return self.
    let p: Rc<Datatype> = Rc::new(make_pointer(Rc::clone(&int_t), None, 1));
    let rp = p.resolve_in_flow(op, 0).unwrap();
    assert!(Rc::ptr_eq(&rp, &p));

    // Array always stubs out (needs Funcdata scoring).
    let a: Rc<Datatype> = Rc::new(make_array(Rc::clone(&int_t), 2, 8));
    assert!(a.resolve_in_flow(op, 0).is_err());

    // Pointer to a UNION -> STUB (needs Funcdata).
    let mut u = Datatype::new_with_align(8, -1, type_metatype::TYPE_UNION);
    u.kind = DatatypeKind::Union { field: vec![] };
    let p_u: Rc<Datatype> = Rc::new(make_pointer(Rc::new(u), None, 1));
    assert!(p_u.resolve_in_flow(op, 0).is_err());
}

// ----------------------------------------------------------------------
// TypePointerRel (type-3) compare/compareDependency/isPtrsubMatching
// ----------------------------------------------------------------------

fn make_pointer_rel(
    ptrto: Rc<Datatype>,
    wordsize: uint4,
    stripped: Option<Rc<Datatype>>,
    parent: Rc<Datatype>,
    offset: int4,
) -> Datatype {
    let mut pr = Datatype::new_with_align(8, -1, type_metatype::TYPE_PTRREL);
    pr.submeta = sub_metatype::SUB_PTRREL;
    pr.kind = DatatypeKind::PointerRel {
        ptrto,
        wordsize,
        stripped,
        parent,
        offset,
    };
    pr
}

/// `TypePointerRel::compare` (type.cc:3072-3090): compares as a plain pointer
/// first, then prefers the *formal* version (stripped==None) over the ephemeral
/// one (stripped==Some).
#[test]
fn pointer_rel_compare_prefers_formal() {
    let int4_t = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let parent = Rc::new(Datatype::new(16, type_metatype::TYPE_STRUCT));
    let strip: Rc<Datatype> = Rc::new(make_pointer(Rc::clone(&int4_t), None, 1));
    let formal = make_pointer_rel(Rc::clone(&int4_t), 1, None, Rc::clone(&parent), 4);
    let ephemeral = make_pointer_rel(Rc::clone(&int4_t), 1, Some(strip), Rc::clone(&parent), 4);
    // formal (None) vs ephemeral (Some) -> formal preferred (earlier) = -1.
    assert_eq!(formal.compare(&ephemeral, 10).unwrap(), -1);
    assert_eq!(ephemeral.compare(&formal, 10).unwrap(), 1);
    // Two formals with identical fields tie at 0.
    let formal2 = make_pointer_rel(Rc::clone(&int4_t), 1, None, Rc::clone(&parent), 4);
    assert_eq!(formal.compare(&formal2, 10).unwrap(), 0);
}

/// `TypePointerRel::compareDependency` (type.cc:3092-3103): submeta, ptrto
/// identity, offset, parent identity, wordsize, then (op.size - size).
#[test]
fn pointer_rel_compare_dependency_fields() {
    let int4_t = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let parent = Rc::new(Datatype::new(16, type_metatype::TYPE_STRUCT));
    let a = make_pointer_rel(Rc::clone(&int4_t), 1, None, Rc::clone(&parent), 4);
    let a2 = make_pointer_rel(Rc::clone(&int4_t), 1, None, Rc::clone(&parent), 4);
    // Same ptrto/offset/parent/wordsize/size identity -> 0.
    assert_eq!(a.compare_dependency(&a2).unwrap(), 0);
    // Different offset -> ordered by offset.
    let b = make_pointer_rel(Rc::clone(&int4_t), 1, None, Rc::clone(&parent), 8);
    assert_eq!(a.compare_dependency(&b).unwrap(), -1);
    assert_eq!(b.compare_dependency(&a).unwrap(), 1);
}

/// `TypePointerRel::isPtrsubMatching` (type.cc:3138-3147): with stripped==None,
/// the bound check is `0 <= offset+extra+iOff <= parent.getSize()`.
#[test]
fn pointer_rel_is_ptrsub_matching_bounds() {
    let int4_t = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let parent = Rc::new(Datatype::new(16, type_metatype::TYPE_STRUCT));
    let pr = make_pointer_rel(Rc::clone(&int4_t), 1, None, Rc::clone(&parent), 4);
    assert!(pr.is_ptrsub_matching(0, 0, 1).unwrap()); // 4 in [0,16]
    assert!(pr.is_ptrsub_matching(0, 12, 1).unwrap()); // 16 in [0,16]
    assert!(!pr.is_ptrsub_matching(0, 13, 1).unwrap()); // 17 > 16
    assert!(!pr.is_ptrsub_matching(-5, 0, 1).unwrap()); // -1 < 0
}

// ----------------------------------------------------------------------
// Wire encode (Datatype::encodeRef / encode) — differential against the
// already-shipped decode side: what `encode_ref` writes, `decode_type`
// must resolve back to the SAME interned object.
// ----------------------------------------------------------------------

/// encode_ref of a named (id-carrying) core type emits `<typeref name id>`
/// and the wire decoder resolves it to the identical interned Rc; an
/// id-less derived type (pointer/array) emits the full `<type>` form with
/// a one-level `<typeref>` descent, and decode re-interns to the same Rc.
#[test]
fn wire_encode_roundtrips_through_decode_type() {
    use unlace_base::marshal::{Decoder, PackedDecode, PackedEncode};
    let f = factory();
    f.set_core_type("int", 4, type_metatype::TYPE_INT, false)
        .unwrap();
    f.set_core_type("undefined", 1, type_metatype::TYPE_UNKNOWN, false)
        .unwrap();
    f.cache_core_types().unwrap();
    let m = unlace_base::space::AddrSpaceManager::new();
    let roundtrip = |t: &Rc<Datatype>, full: bool| -> Rc<Datatype> {
        let mut bytes: Vec<u8> = Vec::new();
        {
            let mut e = PackedEncode::new(&mut bytes);
            if full {
                t.encode(&mut e).unwrap();
            } else {
                t.encode_ref(&mut e).unwrap();
            }
        }
        let mut d = PackedDecode::new(&m);
        d.ingest_stream(&bytes).unwrap();
        f.decode_type(&mut d).unwrap()
    };

    let i4 = crate::dtype::TypeFactory::find_by_name(&f, "int")
        .unwrap()
        .unwrap();
    assert_ne!(i4.get_id(), 0, "core types carry hashed ids");
    let back = roundtrip(&i4, false);
    assert!(
        Rc::ptr_eq(&back, &i4),
        "<typeref> resolves to the same interned type"
    );

    let p = crate::dtype::TypeFactory::get_type_pointer(&f, 8, Rc::clone(&i4), 1).unwrap();
    assert_eq!(
        p.get_id(),
        0,
        "derived pointer has no id -> full <type> form"
    );
    let back = roundtrip(&p, false);
    assert!(
        Rc::ptr_eq(&back, &p),
        "full <type ptr> re-interns to the same object"
    );

    let a = crate::dtype::TypeFactory::get_type_array(&f, 5, Rc::clone(&i4)).unwrap();
    let back = roundtrip(&a, true);
    assert!(
        Rc::ptr_eq(&back, &a),
        "full <type array> re-interns to the same object"
    );
}

/// `decode_integer_format` is the inverse of the wire format vocabulary
/// (`wire_integer_format`), and errors on out-of-range codes.
#[test]
fn decode_integer_format_vocabulary() {
    for (code, s) in [
        (1u32, "hex"),
        (2, "dec"),
        (3, "oct"),
        (4, "bin"),
        (5, "char"),
    ] {
        assert_eq!(Datatype::decode_integer_format(code).unwrap(), s);
        assert_eq!(wire_integer_format(s), code);
    }
    assert!(Datatype::decode_integer_format(0).is_err());
    assert!(Datatype::decode_integer_format(6).is_err());
}

// ----------------------------------------------------------------------
// TypeFactoryImpl — findAdd dedup, core-type cache, downChain/getExactPiece
// ----------------------------------------------------------------------

/// A minimally-configured factory: default alignment map + the size-1
/// TYPE_UNKNOWN base cached (needed by getBase's oversize-array path and by
/// partial-type construction), and a max-basetype-size of 8.
fn factory() -> TypeFactoryImpl {
    let f = TypeFactoryImpl::new();
    f.set_default_alignment_map();
    f.set_max_basetype_size(8);
    f
}

/// A negative requested size is an error, never a panic (GH-339). Both cache
/// lookups index a fixed-length array by the size, so before the lower bound a
/// negative `int4` — reachable from an image's declared symbol extent — took
/// the whole process down instead of costing one symbol.
#[test]
fn factory_negative_size_is_an_error_not_a_panic() {
    use type_metatype::*;
    let f = factory();
    f.set_core_type("undefined", 1, TYPE_UNKNOWN, false)
        .unwrap();
    f.set_core_type("char", 1, TYPE_INT, true).unwrap();
    f.cache_core_types().unwrap();

    // The two sign-bit patterns a 32-bit-truncated `st_size` produces.
    for s in [-1i32, -16, i32::MIN] {
        assert!(
            f.get_base(s, TYPE_UNKNOWN).is_err(),
            "getBase({s}) must be an error"
        );
        assert!(
            f.get_base_no_char(s, TYPE_INT).is_err(),
            "getBaseNoChar({s}) must be an error"
        );
        assert!(
            f.get_type_char(s).is_err(),
            "getTypeChar({s}) must be an error"
        );
    }
    // The valid domain is untouched.
    assert!(f.get_base(4, TYPE_UNKNOWN).is_ok());
    assert!(f.get_type_char(1).is_ok());
}

/// `findAdd` interns by structural identity: two structurally-identical
/// requests return the *same* `Rc` allocation; a different request does not.
#[test]
fn factory_find_add_dedup_identity() {
    let f = factory();
    let i4_a = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let i4_b = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    assert!(
        Rc::ptr_eq(&i4_a, &i4_b),
        "identical getBase requests dedup to one object"
    );
    let i8 = f.get_base(8, type_metatype::TYPE_INT).unwrap();
    assert!(!Rc::ptr_eq(&i4_a, &i8), "different size -> distinct object");

    // Pointer-to-int dedups, and the ptrto sub-type is itself the interned one.
    let p_a = f.get_type_pointer(8, Rc::clone(&i4_a), 1).unwrap();
    let p_b = f.get_type_pointer(8, Rc::clone(&i4_b), 1).unwrap();
    assert!(Rc::ptr_eq(&p_a, &p_b), "identical pointers dedup");
    assert!(Rc::ptr_eq(&p_a.get_ptr_to().unwrap(), &i4_a));
}

/// A name probe is the ordered search of the (name, id) index: an exact id
/// finds that entry, id 0 the lowest id under the name, and a name that is
/// only a prefix of held ones, or sorts between them, finds nothing.
#[test]
fn factory_name_lookup_is_the_ordered_search() {
    let f = factory();
    for name in ["struct_1", "struct_10", "struct_2", "struct_0"] {
        f.get_type_struct(name).unwrap();
    }
    let mut alias = Datatype::new(8, type_metatype::TYPE_INT);
    alias.name = "struct_1".into();
    alias.display_name = "struct_1".into();
    alias.id = 7;
    let alias = f.find_add(alias).unwrap();
    let first = f.find_by_name("struct_1").unwrap().unwrap();
    assert_eq!(first.get_id(), 7, "the lowest id under a shared name");
    let held = f
        .find_by_id_local("struct_1", Datatype::hash_name("struct_1"))
        .unwrap();
    assert_eq!(held.get_metatype(), type_metatype::TYPE_STRUCT);
    assert!(Rc::ptr_eq(
        &f.find_by_id_local("struct_1", 7).unwrap(),
        &alias
    ));
    assert!(f.find_by_id_local("struct_1", 8).is_none());
    for absent in ["struct_", "struct_11", "struct_3", "a", "zzz", ""] {
        assert!(f.find_by_name(absent).unwrap().is_none(), "{absent:?}");
    }
    for name in ["struct_0", "struct_10", "struct_2"] {
        assert_eq!(f.find_by_name(name).unwrap().unwrap().get_name(), name);
    }
}

/// `getBaseNoChar` returns the cached non-char int for size-1 INT, and the
/// char/int caches behave per `cacheCoreTypes`.
#[test]
fn factory_core_type_cache() {
    use type_metatype::*;
    let f = factory();
    // setCoreType for the primitives cacheCoreTypes reads.  `type_nochar` is
    // seeded by a *non*-char 1-byte INT (the C++ "sbyte"); the ASCII "char"
    // takes the typecache[1][INT] slot, so getBase(1,INT) prefers it.
    f.set_core_type("void", 0, TYPE_VOID, false).unwrap();
    f.set_core_type("byte", 1, TYPE_UINT, false).unwrap();
    f.set_core_type("sbyte", 1, TYPE_INT, false).unwrap(); // non-char 1-byte INT
    f.set_core_type("char", 1, TYPE_INT, true).unwrap(); // chartype -> ASCII
    f.set_core_type("undefined", 1, TYPE_UNKNOWN, false)
        .unwrap();
    f.set_core_type("int", 4, TYPE_INT, false).unwrap();
    f.set_core_type("double", 8, TYPE_FLOAT, false).unwrap();
    f.cache_core_types().unwrap();

    // getBase(1,TYPE_INT) prefers the ASCII char (cacheCoreTypes seeds the
    // typecache[1][INT] slot with the char).
    let c = f.get_base(1, TYPE_INT).unwrap();
    assert!(
        c.is_ascii(),
        "getBase(1,INT) returns the char (preferred over nochar)"
    );
    // getBaseNoChar(1,TYPE_INT) returns the cached type_nochar instead.
    let nc = f.get_base_no_char(1, TYPE_INT).unwrap();
    assert!(
        !nc.is_ascii(),
        "getBaseNoChar(1,INT) returns the non-char int"
    );
    // getTypeChar(1) returns the cached 1-byte char.
    let ch = f.get_type_char(1).unwrap();
    assert!(ch.is_ascii());
    // The 4-byte int and 8-byte float are cached and dedup on re-request.
    let i4 = f.get_base(4, TYPE_INT).unwrap();
    let i4b = f.get_base(4, TYPE_INT).unwrap();
    assert!(Rc::ptr_eq(&i4, &i4b));
    let d = f.get_base(8, TYPE_FLOAT).unwrap();
    assert_eq!(d.get_metatype(), TYPE_FLOAT);
}

/// `concretize` collapses a size-1 TYPE_CODE to a size-1 TYPE_UNKNOWN, and is
/// the identity on already-concrete types.
#[test]
fn factory_concretize() {
    let f = factory();
    // Seed a size-1 unknown so getBase(1,UNKNOWN) is available.
    let unk = f.get_base(1, type_metatype::TYPE_UNKNOWN).unwrap();
    let code = f.get_type_code().unwrap();
    assert_eq!(code.get_metatype(), type_metatype::TYPE_CODE);
    let conc = f.concretize(code).unwrap();
    assert_eq!(conc.get_metatype(), type_metatype::TYPE_UNKNOWN);
    assert!(Rc::ptr_eq(&conc, &unk));
    // Already concrete -> identity.
    let i4 = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    assert!(Rc::ptr_eq(&f.concretize(Rc::clone(&i4)).unwrap(), &i4));
}

/// `getExactPiece` drills into a struct to the exact field, builds a partial
/// struct when the range straddles, and returns the whole when sizes match.
#[test]
fn factory_get_exact_piece_matrix() {
    use type_metatype::*;
    let f = factory();
    f.get_base(1, TYPE_UNKNOWN).unwrap(); // needed for partial stripped types
    let i4 = f.get_base(4, TYPE_INT).unwrap();
    // struct { int a@0; int b@4; } size 8.
    let mut s = Datatype::new_with_align(8, 4, TYPE_STRUCT);
    s.kind = DatatypeKind::Struct {
        field: vec![
            TypeField::new(0, 0, "a", Rc::clone(&i4)),
            TypeField::new(1, 4, "b", Rc::clone(&i4)),
        ],
        bitfield: vec![],
    };
    let s = f.find_add(s).unwrap();

    // Whole-struct size match -> the struct itself.
    let whole = f.get_exact_piece(Rc::clone(&s), 0, 8).unwrap().unwrap();
    assert!(Rc::ptr_eq(&whole, &s));
    // Field b (offset 4, size 4) -> the int field exactly.
    let field_b = f.get_exact_piece(Rc::clone(&s), 4, 4).unwrap().unwrap();
    assert!(Rc::ptr_eq(&field_b, &i4));
    // A 2-byte slice wholly inside a 4-byte field -> null (only a partial field).
    assert!(f.get_exact_piece(Rc::clone(&s), 0, 2).unwrap().is_none());
    // A 4-byte slice at offset 2 crosses the a/b field boundary -> partial struct.
    let part = f.get_exact_piece(Rc::clone(&s), 2, 4).unwrap().unwrap();
    assert_eq!(part.get_metatype(), TYPE_PARTIALSTRUCT);
    assert_eq!(part.get_size(), 4);
}

/// W10 (rport/w10-enum-trunc-propagate) adversarial: `getTypePartialEnum`
/// (type.cc:2683 via `TypeEnum(sz,TYPE_PARTIALENUM)`, type.hh:548) must
/// produce a data-type that is RECOGNISED AS AN ENUM through the truncation,
/// not a bare `TYPE_PARTIALENUM` metatype.  The C++ ctor chain overrides the
/// live metatype to `(TYPE_PARTIALENUM==TYPE_ENUM_INT)?TYPE_INT:TYPE_UINT`
/// (=TYPE_UINT) and sets `flags|=enumtype|has_stripped`, leaving only the
/// `submeta` (`SUB_UINT_PARTIALENUM`) and the marshalling override carrying
/// the partial-enum identity.  Without this, `pushConstant` (printc.cc:1817)
/// — which switches on `getMetatype()==TYPE_UINT/TYPE_INT` and `isEnumType()`
/// — never reaches `pushEnumConstant`, and a truncated enum AND constant
/// renders as a raw hex literal (`& 0x2c`) instead of by flag-name
/// (`& (FLAG_20|FLAG_8|FLAG_4)`).
#[test]
fn factory_partial_enum_is_recognised_as_enum() {
    use type_metatype::*;
    let f = factory();
    f.get_base(1, TYPE_UNKNOWN).unwrap(); // stripped base for partials
    f.get_base(4, TYPE_UNKNOWN).unwrap();
    // An 8-byte enum (the `flags` data-type in enum.xml).
    let en = {
        let mut e = Datatype::new(8, TYPE_ENUM_UINT);
        e.name = "flags".to_string();
        e.display_name = "flags".to_string();
        e.flags |= flags::enumtype;
        e.metatype = TYPE_UINT;
        e.kind = DatatypeKind::Enum {
            namemap: std::collections::BTreeMap::new(),
        };
        e.id = Datatype::hash_name("flags");
        f.find_add(e).unwrap()
    };
    assert!(en.is_enum_type());

    // Generic over the truncation geometry: BOTH the offset-0/size-1 piece
    // (enum #3, ptrenumlow) AND the offset-4/size-4 piece (enum #4,
    // ptrenumhigh) must come back recognisable as enums.  No special-casing
    // on the offset, the size, or the value.
    let geometries: [(int4, int4); 5] = [(0, 1), (4, 4), (0, 4), (2, 1), (7, 1)];
    for &(off, sz) in geometries.iter() {
        let pe = f.get_type_partial_enum(Rc::clone(&en), off, sz).unwrap();
        assert!(
            pe.is_enum_type(),
            "partial enum (off={off},sz={sz}) must keep the enumtype flag"
        );
        assert_eq!(
            pe.get_metatype(),
            TYPE_UINT,
            "TypeEnum ctor overrides the partial-enum metatype to TYPE_UINT (off={off},sz={sz})"
        );
        assert_eq!(
            pe.get_sub_meta(),
            sub_metatype::SUB_UINT_PARTIALENUM,
            "the partial-enum identity survives in submeta (off={off},sz={sz})"
        );
        assert!(
            pe.has_stripped(),
            "TypePartialEnum sets has_stripped (type.cc:2687) (off={off},sz={sz})"
        );
        assert_eq!(
            pe.get_size(),
            sz,
            "partial covers exactly the requested size"
        );
    }
}

/// W10 adversarial: `getExactPiece` of a SUB-FIELD slice of an enum struct
/// member yields an enum-typed partial — the exact `propagateFromPointer`
/// pointer-rel path (typeop.cc:219-224 -> `getExactPiece(...,isEnumType)`) the
/// enum.xml `ptr->flagfield` truncated reads drive.  Generic: keyed only on
/// the enum data-type + the slice geometry, never on a field/flag name.
#[test]
fn factory_get_exact_piece_enum_member_yields_partial_enum() {
    use type_metatype::*;
    let f = factory();
    f.get_base(1, TYPE_UNKNOWN).unwrap();
    f.get_base(4, TYPE_UNKNOWN).unwrap();
    let i4 = f.get_base(4, TYPE_INT).unwrap();
    // enumstruct { int a@0; int b@4; flags flagfield@8; } (size 16) — the
    // enum.xml fixture struct.
    let en = {
        let mut e = Datatype::new(8, TYPE_ENUM_UINT);
        e.name = "flags".to_string();
        e.display_name = "flags".to_string();
        e.flags |= flags::enumtype;
        e.metatype = TYPE_UINT;
        e.kind = DatatypeKind::Enum {
            namemap: std::collections::BTreeMap::new(),
        };
        e.id = Datatype::hash_name("flags");
        f.find_add(e).unwrap()
    };
    let mut s = Datatype::new_with_align(16, 8, TYPE_STRUCT);
    s.kind = DatatypeKind::Struct {
        field: vec![
            TypeField::new(0, 0, "a", Rc::clone(&i4)),
            TypeField::new(1, 4, "b", Rc::clone(&i4)),
            TypeField::new(2, 8, "flagfield", Rc::clone(&en)),
        ],
        bitfield: vec![],
    };
    let s = f.find_add(s).unwrap();

    // Whole field (offset 8, size 8) -> the enum itself (perfect size match).
    let whole = f.get_exact_piece(Rc::clone(&s), 8, 8).unwrap().unwrap();
    assert!(
        Rc::ptr_eq(&whole, &en),
        "perfect-size read of the field is the enum"
    );
    // ptrenumlow: 1-byte low slice of the field (struct offset 8) -> enum.
    let low = f.get_exact_piece(Rc::clone(&s), 8, 1).unwrap().unwrap();
    assert!(
        low.is_enum_type(),
        "byte slice of an enum field stays an enum"
    );
    assert_eq!(low.get_metatype(), TYPE_UINT);
    assert_eq!(low.get_size(), 1);
    // ptrenumhigh: 4-byte high slice of the field (struct offset 12) -> enum.
    let high = f.get_exact_piece(Rc::clone(&s), 12, 4).unwrap().unwrap();
    assert!(
        high.is_enum_type(),
        "high dword slice of an enum field stays an enum"
    );
    assert_eq!(high.get_metatype(), TYPE_UINT);
    assert_eq!(high.get_size(), 4);
    // The C++ partial-enum carries the offset into the parent enum (the
    // `>> 0x20` shift for the high slice); the slice at offset 12 = field
    // offset 4 must record offset 4 so getMatches shifts correctly.
    assert_eq!(
        high.get_partial_offset(),
        Some(4),
        "high slice records its byte offset into the parent enum"
    );
}

/// `TypeFactory::dependentOrder` (type.cc) puts a component BEFORE its
/// container: for `struct outer { struct inner in_; ... }` the postorder
/// DFS yields `inner` before `outer`, while the raw interning `tree`
/// (ordered by `compareDependency`: submeta, then DESCENDING size) has
/// `outer` (size 16) before `inner` (size 8) — emitting C definitions in
/// raw tree order would use `inner` before defining it.  This pins WHY the
/// explicit DFS exists.
#[test]
fn dependent_order_nested_struct() {
    use type_metatype::*;
    let f = factory();
    let i4 = f.get_base(4, TYPE_INT).unwrap();
    // struct inner { int4 a@0; int4 b@4; } (size 8).
    let inner = {
        let mut s = Datatype::new_with_align(8, 4, TYPE_STRUCT);
        s.name = "inner".to_string();
        s.display_name = "inner".to_string();
        s.id = Datatype::hash_name("inner");
        s.kind = DatatypeKind::Struct {
            field: vec![
                TypeField::new(0, 0, "a", Rc::clone(&i4)),
                TypeField::new(1, 4, "b", Rc::clone(&i4)),
            ],
            bitfield: vec![],
        };
        f.find_add(s).unwrap()
    };
    // struct outer { inner in_@0; int4 c@8; int4 d@12; } (size 16) —
    // contains inner BY VALUE.
    let outer = {
        let mut s = Datatype::new_with_align(16, 4, TYPE_STRUCT);
        s.name = "outer".to_string();
        s.display_name = "outer".to_string();
        s.id = Datatype::hash_name("outer");
        s.kind = DatatypeKind::Struct {
            field: vec![
                TypeField::new(0, 0, "in_", Rc::clone(&inner)),
                TypeField::new(1, 8, "c", Rc::clone(&i4)),
                TypeField::new(2, 12, "d", Rc::clone(&i4)),
            ],
            bitfield: vec![],
        };
        f.find_add(s).unwrap()
    };

    // The raw tree order is BROKEN for definition-before-use: same submeta,
    // descending size puts the bigger `outer` first.
    let tree_pos = |t: &Rc<Datatype>| {
        f.store
            .borrow()
            .tree
            .iter()
            .position(|k| Rc::ptr_eq(&k.0, t))
            .expect("struct is interned in the tree")
    };
    assert!(
        tree_pos(&outer) < tree_pos(&inner),
        "precondition: raw compareDependency tree order has outer (size 16) \
             before inner (size 8) — the order the DFS must correct"
    );

    // dependentOrder: the component precedes its container.
    let order = f.dependent_order();
    let pos = |t: &Rc<Datatype>| {
        order
            .iter()
            .position(|c| Rc::ptr_eq(c, t))
            .expect("type is in dependentOrder")
    };
    assert!(
        pos(&inner) < pos(&outer),
        "dependentOrder must place inner before the outer struct containing it"
    );
    assert!(pos(&i4) < pos(&inner), "the int4 component precedes inner");
    // Every interned tree entry appears in the order (the C++ walk seeds
    // from every tree node).
    let store = f.store.borrow();
    for k in store.tree.iter() {
        assert!(
            order.iter().any(|c| Rc::ptr_eq(c, &k.0)),
            "tree entry `{}` missing from dependentOrder",
            k.0.get_name()
        );
    }
}

/// `dependentOrder` on a POINTER CYCLE (`struct A { B *pb; }; struct B
/// { A *pa; };`, built through the real incomplete-struct + assignRawFields
/// flow) terminates — the `Rc::as_ptr` mark set breaks the cycle — and each
/// data-type object appears exactly once.
#[test]
fn dependent_order_pointer_cycle() {
    let f = factory();
    // The real construction flow: two incomplete structs, mutual pointers,
    // then complete each with a field pointing at the other.
    let a0 = f.get_type_struct("cycA").unwrap();
    let b0 = f.get_type_struct("cycB").unwrap();
    let pb = f.get_type_pointer(8, Rc::clone(&b0), 1).unwrap();
    let pa = f.get_type_pointer(8, Rc::clone(&a0), 1).unwrap();
    let a1 = f
        .assign_raw_fields_struct(
            &a0,
            vec![TypeField::new(0, -1, "next_b", Rc::clone(&pb))],
            vec![],
        )
        .unwrap();
    let b1 = f
        .assign_raw_fields_struct(
            &b0,
            vec![TypeField::new(0, -1, "next_a", Rc::clone(&pa))],
            vec![],
        )
        .unwrap();

    // Terminates (would loop forever without the mark set) and each object
    // appears EXACTLY once.
    let order = f.dependent_order();
    let mut seen: std::collections::HashSet<*const Datatype> = std::collections::HashSet::new();
    for ct in &order {
        assert!(
            seen.insert(Rc::as_ptr(ct)),
            "data-type `{}` appears twice in dependentOrder",
            ct.get_name()
        );
    }
    // The completed structs and both pointers are all present.
    for (what, t) in [
        ("cycA", &a1),
        ("cycB", &b1),
        ("cycA *", &pa),
        ("cycB *", &pb),
    ] {
        assert!(
            order.iter().any(|c| Rc::ptr_eq(c, t)),
            "`{what}` missing from dependentOrder"
        );
    }
    // Every interned tree entry made it into the order.
    let store = f.store.borrow();
    for k in store.tree.iter() {
        assert!(
            order.iter().any(|c| Rc::ptr_eq(c, &k.0)),
            "tree entry `{}` missing from dependentOrder",
            k.0.get_name()
        );
    }
}

/// `getPtrToFromParent` (type.cc:3157-3171) walks `getSubType` down a container
/// to the data-type that a relative pointer at the given byte offset points
/// directly at; a non-positive or escaping offset falls back to the size-1
/// `getBase(1,TYPE_UNKNOWN)`.  This is the `pointer setting <n> <s> offset <o>`
/// relptr ptrto resolution.
#[test]
fn factory_get_ptr_to_from_parent() {
    use type_metatype::*;
    let f = factory();
    let unk1 = f.get_base(1, TYPE_UNKNOWN).unwrap();
    let i4 = f.get_base(4, TYPE_INT).unwrap();
    let f4 = f.get_base(4, TYPE_FLOAT).unwrap();
    // struct mystruct { int a@0; float b@4; int c@8; int d@12; } size 16.
    let mut s = Datatype::new_with_align(16, 4, TYPE_STRUCT);
    s.kind = DatatypeKind::Struct {
        field: vec![
            TypeField::new(0, 0, "a", Rc::clone(&i4)),
            TypeField::new(1, 4, "b", Rc::clone(&f4)),
            TypeField::new(2, 8, "c", Rc::clone(&i4)),
            TypeField::new(3, 12, "d", Rc::clone(&i4)),
        ],
        bitfield: vec![],
    };
    let s = f.find_add(s).unwrap();

    // offset 8 lands exactly on field `c` (the int) — `pointer setting ...
    // offset 8` in pointerrel.xml.
    let at8 = f.get_ptr_to_from_parent(Rc::clone(&s), 8).unwrap();
    assert!(Rc::ptr_eq(&at8, &i4), "offset 8 resolves to field c (int)");
    // offset 4 lands on field `b` (the float).
    let at4 = f.get_ptr_to_from_parent(Rc::clone(&s), 4).unwrap();
    assert!(
        Rc::ptr_eq(&at4, &f4),
        "offset 4 resolves to field b (float)"
    );
    // offset 0 is the non-positive fallback -> getBase(1,TYPE_UNKNOWN).
    let at0 = f.get_ptr_to_from_parent(Rc::clone(&s), 0).unwrap();
    assert!(Rc::ptr_eq(&at0, &unk1), "offset 0 falls back to unknown1");
    // offset 100 escapes the container -> getSubType yields None -> unknown1.
    let oob = f.get_ptr_to_from_parent(Rc::clone(&s), 100).unwrap();
    assert!(
        Rc::ptr_eq(&oob, &unk1),
        "escaping offset falls back to unknown1"
    );
}

/// `downChain` on a pointer-to-struct descends to the field pointer and passes
/// back the container; on a pointer-to-array it descends to the element.
#[test]
fn factory_down_chain_matrix() {
    use type_metatype::*;
    let f = factory();
    let i4 = f.get_base(4, TYPE_INT).unwrap();
    // struct { int a@0; int b@4; }
    let mut s = Datatype::new_with_align(8, 4, TYPE_STRUCT);
    s.kind = DatatypeKind::Struct {
        field: vec![
            TypeField::new(0, 0, "a", Rc::clone(&i4)),
            TypeField::new(1, 4, "b", Rc::clone(&i4)),
        ],
        bitfield: vec![],
    };
    let s = f.find_add(s).unwrap();
    let ps = f.get_type_pointer(8, Rc::clone(&s), 1).unwrap();
    // downChain at offset 4 -> pointer to int (field b), off renormalized to 0,
    // and the container (the pointer-to-struct) passed back at parOff 4.
    let (res, off, par, par_off) = f.down_chain(&ps, 4, false).unwrap();
    let res = res.expect("downChain found the field");
    assert_eq!(res.get_metatype(), TYPE_PTR);
    assert!(Rc::ptr_eq(&res.get_ptr_to().unwrap(), &i4));
    assert_eq!(off, 0);
    assert!(Rc::ptr_eq(&par.unwrap(), &ps));
    assert_eq!(par_off, 4);

    // Pointer-to-array of 4 ints; downChain at offset 8 -> element pointer.
    let arr = f.get_type_array(4, Rc::clone(&i4)).unwrap();
    let pa = f.get_type_pointer(8, Rc::clone(&arr), 1).unwrap();
    let (res2, off2, _par2, _po2) = f.down_chain(&pa, 8, false).unwrap();
    let res2 = res2.expect("downChain into array element");
    assert!(Rc::ptr_eq(&res2.get_ptr_to().unwrap(), &i4));
    assert_eq!(off2, 0);
}

/// `get_sub_type_via_factory` RESOLVES the type-2 `TypeCode::getSubType` stub:
/// a bound factory returns `getBase(1,TYPE_CODE)` with newoff 0.
#[test]
fn factory_resolves_typecode_get_sub_type_stub() {
    let f = factory();
    let code = f.get_type_code().unwrap();
    // The bare method still stubs out (no bound factory on the value itself).
    assert!(code.get_sub_type(0).is_err());
    // The factory-aware path resolves to getBase(1, TYPE_CODE), newoff 0.
    let (sub, newoff) = f.get_sub_type_via_factory(&code, 0).unwrap();
    let sub = sub.expect("factory resolves the code byte");
    assert_eq!(sub.get_metatype(), type_metatype::TYPE_CODE);
    assert_eq!(sub.get_size(), 1);
    assert_eq!(newoff, 0);
}

/// `hashName`/`hashSize` reproduce the C++ hashes bit-for-bit (the header bits
/// and the size reversibility property).
#[test]
fn factory_hash_name_and_size() {
    // Name hashes carry the two top header bits.
    let h = Datatype::hash_name("int");
    assert_eq!(h & 0xC000000000000000, 0xC000000000000000);
    // Determinism.
    assert_eq!(h, Datatype::hash_name("int"));
    assert_ne!(h, Datatype::hash_name("uint"));
    // hashSize is reversible: applying twice with the same size restores the id.
    let id = 0x1234_5678_9abc_def0u64;
    let sized = Datatype::hash_size(id, 7);
    assert_ne!(sized, id);
    assert_eq!(Datatype::hash_size(sized, 7), id);
}

// =========================================================================
// collectBitFields / hasBitFieldsInRange / BitFieldTriple (type.cc:1804-1852,
// 932-949) — the bitfield query layer the bitfield transforms read.
// =========================================================================

/// Build a one-byte container's three bitfields, modeling `myfoo`'s first
/// byte (`bitfields.xml`): `uint4 field3:3` (lsb0,3b), `int4 sfield4:4`
/// (lsb3,4b), `bool fieldb:1` (lsb7,1b).  All little-endian, byteOffset 0,
/// byteSize 1.
fn myfoo_byte0_bitfields() -> Vec<TypeBitField> {
    let mk = |id, lsb, nb, name: &str, meta| {
        let mut bf = TypeBitField::new(id, nb, false, name, Rc::new(Datatype::new(4, meta)));
        // TypeBitField::new puts the field at lsb 0; place it at the real
        // container position for the layout the struct holds.
        bf.least_sig_bit = lsb;
        bf.byte_offset = 0;
        bf.byte_size = 1;
        bf
    };
    vec![
        mk(0, 0, 3, "field3", type_metatype::TYPE_UINT),
        mk(1, 3, 4, "sfield4", type_metatype::TYPE_INT),
        mk(2, 7, 1, "fieldb", type_metatype::TYPE_BOOL),
    ]
}

fn struct_with_bitfields(
    field: Vec<TypeField>,
    bitfield: Vec<TypeBitField>,
    size: int4,
) -> Datatype {
    let mut s = Datatype::new_with_align(size, 4, type_metatype::TYPE_STRUCT);
    if !bitfield.is_empty() {
        s.flags |= flags::has_bitfields;
    }
    s.kind = DatatypeKind::Struct { field, bitfield };
    s
}

#[test]
fn collect_bit_fields_single_byte_container() {
    let s = struct_with_bitfields(vec![], myfoo_byte0_bitfields(), 1);
    let mut res = Vec::new();
    s.collect_bit_fields(0, &mut res, 0, 1);
    // All three bitfields overlap byte [0,1).
    assert_eq!(res.len(), 3);
    let names: Vec<&str> = res.iter().map(|t| t.bitfield.name.as_str()).collect();
    assert_eq!(names, vec!["field3", "sfield4", "fieldb"]);
    // offset (container offset within parent) is 0 for all.
    assert!(res.iter().all(|t| t.offset == 0));
}

#[test]
fn collect_bit_fields_range_outside_container_is_empty() {
    let s = struct_with_bitfields(vec![], myfoo_byte0_bitfields(), 4);
    // Query a byte range past the bitfield container (offset 2, size 1):
    // compareMaxByte upper_bound lands at end() -> no bitfields.
    let mut res = Vec::new();
    s.collect_bit_fields(0, &mut res, 2, 1);
    assert!(res.is_empty());
}

#[test]
fn has_bit_fields_in_range_matches_collect() {
    let s = struct_with_bitfields(vec![], myfoo_byte0_bitfields(), 4);
    assert!(s.has_bit_fields_in_range(0, 1));
    assert!(!s.has_bit_fields_in_range(2, 2));
    // A non-struct never has bitfields in range.
    let i = Datatype::new(4, type_metatype::TYPE_INT);
    assert!(!i.has_bit_fields_in_range(0, 4));
}

#[test]
fn collect_bit_fields_nested_struct_recurses() {
    // Outer struct: field "inner" at offset 4 is a struct holding byte0
    // bitfields; the outer also needs has_bitfields on the inner field type.
    let inner = Rc::new(struct_with_bitfields(vec![], myfoo_byte0_bitfields(), 1));
    let inner_field = TypeField::new(0, 4, "inner", inner);
    let outer = struct_with_bitfields(vec![inner_field], vec![], 8);
    // Query the whole outer range — the recursion shifts offset by the field
    // offset (4) and reports the container offset as base_offset + 4.
    let mut res = Vec::new();
    outer.collect_bit_fields(0, &mut res, 0, 8);
    assert_eq!(res.len(), 3);
    assert!(res.iter().all(|t| t.offset == 4));
}

/// Only a record the C grammar declared reads through its completion: a stub
/// from `get_type_struct` (the DWARF and library importers' shell) completed
/// later leaves a pointer built to it naming the stub, as before.
#[test]
fn only_a_declared_record_completes_its_earlier_pointers() {
    use type_metatype::*;
    let f = factory();
    f.set_core_type("int4", 4, TYPE_INT, false).unwrap();
    f.cache_core_types().unwrap();
    let int4 = f.get_base(4, TYPE_INT).unwrap();
    for declared in [false, true] {
        let name = if declared { "Declared" } else { "Imported" };
        let stub = if declared {
            f.unlace_declare_record(name, false).unwrap()
        } else {
            f.get_type_struct(name).unwrap()
        };
        let early = f.get_type_pointer(8, Rc::clone(&stub), 1).unwrap();
        let fields = vec![
            TypeField::new(0, 0, "next", Rc::clone(&early)),
            TypeField::new(1, 8, "value", Rc::clone(&int4)),
        ];
        let full = f
            .set_fields_struct_raw(&stub, fields, Vec::new(), 16, 8, 0)
            .unwrap();
        let seen = early.get_ptr_to().unwrap();
        assert_eq!(Rc::ptr_eq(&seen, &full), declared, "{name}");
        assert_eq!(seen.is_incomplete(), !declared, "{name}");
    }
}

/// A declared record's stub and completion are one identity, so a third
/// type of the same id orders the same way against either of them.
#[test]
fn a_completion_link_orders_like_its_stub() {
    let int4 = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let with_field = |base: &Datatype, name: &str| {
        let mut ct = base.clone();
        ct.kind = DatatypeKind::Struct {
            field: vec![TypeField::new(0, 0, name, Rc::clone(&int4))],
            bitfield: vec![],
        };
        ct
    };
    let mut stub = struct_with_bitfields(vec![], vec![], 0);
    stub.id = Datatype::hash_name("rec");
    let other = Rc::new(with_field(&stub, "b"));
    stub.record_completion = Some(Rc::new(RefCell::new(std::rc::Weak::new())));
    let full = Rc::new(with_field(&stub, "a"));
    let stub = Rc::new(stub);
    assert_eq!(Datatype::compare_dependency_ptr(&stub, &full), 0);
    assert_eq!(
        Datatype::compare_dependency_ptr(&stub, &other),
        Datatype::compare_dependency_ptr(&full, &other),
    );
}

/// A panic unwinding out of the shape walk leaves the walk depth as it was,
/// so a later comparison of the same pair gives the same answer.
#[test]
fn shape_depth_survives_an_unwind() {
    let uint4 = || Rc::new(Datatype::new(4, type_metatype::TYPE_UINT));
    let mut uints: Vec<Rc<Datatype>> = (0..32).map(|_| uint4()).collect();
    let int = &Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    uints.extend((0..32).map(|_| uint4()));
    let shape = int.compare_dependency(&uints[0]).unwrap().signum();
    let Some(uint) = uints
        .iter()
        .find(|u| ((Rc::as_ptr(int) as i128) - (Rc::as_ptr(u) as i128)).signum() as int4 != shape)
    else {
        return;
    };
    let chain = |leaf: &Rc<Datatype>| {
        let mut t = Rc::clone(leaf);
        for _ in 0..8 {
            t = Rc::new(make_pointer(t, None, 1));
        }
        t
    };
    let (a, b) = (chain(int), chain(uint));
    let before = a.compare_dependency(&b).unwrap().signum();
    let code = || {
        let mut c = Datatype::new(1, type_metatype::TYPE_CODE);
        c.kind = DatatypeKind::Code {
            proto: Some(Rc::new(crate::fspec::FuncProto::new())),
        };
        Rc::new(make_pointer(Rc::new(c), None, 1))
    };
    let (p1, p2) = (code(), code());
    let caught =
        std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| p1.compare_dependency(&p2)));
    assert!(caught.is_err());
    assert_eq!(before, shape);
    assert_eq!(a.compare_dependency(&b).unwrap().signum(), before);
}

#[test]
fn bitfield_triple_compare_orders_least_to_most_significant() {
    // Little-endian: smaller byte offset is less significant; within a byte,
    // smaller leastSigBit is less significant.
    let bf = myfoo_byte0_bitfields();
    let t_field3 = BitFieldTriple::new(bf[0].clone(), 0); // lsb0
    let t_sfield4 = BitFieldTriple::new(bf[1].clone(), 0); // lsb3
    // field3 (lsb0) sorts before sfield4 (lsb3).
    assert!(BitFieldTriple::compare(&t_field3, &t_sfield4));
    assert!(!BitFieldTriple::compare(&t_sfield4, &t_field3));
    // Equal start bit -> neither strictly less.
    assert!(!BitFieldTriple::compare(&t_field3, &t_field3));
    // Different container byte offsets: smaller offset is less significant (LE).
    let mut hi = bf[0].clone();
    hi.byte_offset = 2;
    let t_hi = BitFieldTriple::new(hi, 0);
    assert!(BitFieldTriple::compare(&t_field3, &t_hi));
    assert!(!BitFieldTriple::compare(&t_hi, &t_field3));
}
