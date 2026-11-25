use super::*;
use unlace_decomp::dtype::TypeFactoryImpl;

fn factory() -> TypeFactoryImpl {
    let types = TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    let _ = types.cache_core_types();
    types
}

fn fields(t: &Datatype) -> Vec<(int4, String)> {
    (0..t.num_depend())
        .filter_map(|i| t.get_field(i))
        .map(|f| (f.offset, f.name.clone()))
        .collect()
}

fn open(name: &str) -> pdb::PDB<'static, std::fs::File> {
    let path = format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR"));
    let file = std::fs::File::open(path).expect("open the fixture pdb");
    pdb::PDB::open(file).expect("parse the fixture pdb")
}

/// The structure behind a forward reference gets its layout, members in
/// order and at the compiler's offsets, including a pointer to itself.
#[test]
fn forward_reference_resolves_to_the_layout() {
    let types = factory();
    let mut pdb = open("pdb_types_x86_64.pdb");
    let info = pdb.type_information().expect("TPI stream");
    let mut tpi = TpiMapper::new(&info, &types, 8);
    // 0x1002 is the forward reference to geo::Rect (llvm-pdbutil dump --types).
    let rect = tpi.map(pdb::TypeIndex(0x1002)).expect("geo::Rect maps");
    assert_eq!(rect.get_name(), "geo::Rect");
    assert_eq!(rect.get_size(), 32);
    assert_eq!(
        fields(&rect),
        [
            (0, "origin".to_string()),
            (8, "extent".to_string()),
            (16, "color".to_string()),
            (20, "tag".to_string()),
            (24, "next".to_string()),
        ]
    );
}

/// An enumeration keeps its constants, and a union both its members.
#[test]
fn enum_and_union() {
    let types = factory();
    let mut pdb = open("pdb_types_x86_64.pdb");
    let info = pdb.type_information().expect("TPI stream");
    let mut tpi = TpiMapper::new(&info, &types, 8);
    let color = tpi.map(pdb::TypeIndex(0x1008)).expect("geo::Color maps");
    assert!(color.is_enum_type());
    assert_eq!(color.get_size(), 4);
    let word = tpi.map(pdb::TypeIndex(0x1009)).expect("geo::Word maps");
    assert_eq!(word.get_metatype(), type_metatype::TYPE_UNION);
    assert_eq!(word.get_size(), 4);
    assert_eq!(fields(&word).len(), 2);
}

/// A class with virtuals gets its table pointer at offset 0 and a derived
/// class its base as a member; the table has one slot per introduced virtual.
#[test]
fn classes_carry_their_vftable() {
    let types = factory();
    let mut pdb = open("pdb_types_x86_64.pdb");
    let info = pdb.type_information().expect("TPI stream");
    let mut tpi = TpiMapper::new(&info, &types, 8);
    let shape = tpi.map(pdb::TypeIndex(0x101B)).expect("geo::Shape maps");
    let names: Vec<String> = fields(&shape).into_iter().map(|(_, n)| n).collect();
    assert_eq!(names, ["__vftable", "id"]);
    let square = tpi.map(pdb::TypeIndex(0x1016)).expect("geo::Square maps");
    let names: Vec<String> = fields(&square).into_iter().map(|(_, n)| n).collect();
    assert_eq!(names, ["super_Shape", "side"]);
    assert_eq!(tpi.vftable_slots("geo::Shape"), Some(2));
    assert_eq!(tpi.vftable_slots("geo::Square"), Some(2));
}

/// A structure's bitfields keep their bit positions in the smallest byte span
/// covering each, and its plain members stay fields.
#[test]
fn bitfields_keep_their_bits() {
    let types = factory();
    let mut pdb = open("pdb_bitfields.pdb");
    let info = pdb.type_information().expect("TPI stream");
    let mut tpi = TpiMapper::new(&info, &types, 8);
    // 0x1006 is the field list of `Flags` (llvm-pdbutil dump --types).
    let (plain, bits) = tpi.members(Some(pdb::TypeIndex(0x1006)), 12, false);
    let plain: Vec<(int4, String)> = plain.iter().map(|f| (f.offset, f.name.clone())).collect();
    assert_eq!(plain, [(8, "d".to_string())]);
    let bits: Vec<(String, int4, int4, int4, int4)> = bits
        .iter()
        .map(|b| {
            (
                b.name.clone(),
                b.byte_offset,
                b.byte_size,
                b.least_sig_bit,
                b.num_bits,
            )
        })
        .collect();
    assert_eq!(
        bits,
        [
            ("a".to_string(), 0, 1, 0, 3),
            ("b".to_string(), 0, 1, 3, 5),
            ("c".to_string(), 4, 2, 0, 9),
        ]
    );
    let flags = tpi.map(pdb::TypeIndex(0x1002)).expect("Flags maps");
    assert_eq!(flags.get_size(), 12);
}

#[test]
fn base_class_member_names() {
    assert_eq!(short_name("geo::Shape"), "Shape");
    assert_eq!(
        short_name(
            "std::_String_alloc<std::_String_base_types<wchar_t,std::allocator<wchar_t> > >"
        ),
        "_String_alloc"
    );
    assert_eq!(short_name("ns::Outer<int>::Inner"), "Inner");
    assert_eq!(short_name("operator<"), "operator");
}

/// A member function's prototype leads with its `this` pointer.
#[test]
fn member_function_prototype_has_this() {
    let types = factory();
    let mut pdb = open("pdb_types_x86_64.pdb");
    let info = pdb.type_information().expect("TPI stream");
    let mut tpi = TpiMapper::new(&info, &types, 8);
    let area = tpi.procedure(pdb::TypeIndex(0x101F)).expect("Square::area");
    assert!(area.has_this);
    assert_eq!(area.pieces.intypes.len(), 1);
    let rect_area = tpi.procedure(pdb::TypeIndex(0x1005)).expect("rect_area");
    assert!(!rect_area.has_this);
    assert_eq!(rect_area.pieces.intypes.len(), 2);
    assert_eq!(rect_area.pieces.first_var_arg_slot, -1);
}
