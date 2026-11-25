use super::*;

#[test]
fn method_names_come_from_the_mangled_symbol() {
    assert_eq!(method_name("_ZNK6Square4areaEi").as_deref(), Some("area"));
    assert_eq!(
        method_name("_ZN6SquareD0Ev").as_deref(),
        Some("deleting_dtor")
    );
    assert_eq!(method_name("_ZN6SquareD1Ev").as_deref(), Some("dtor"));
    assert_eq!(method_name("_ZThn16_N2MI2m2Ei").as_deref(), Some("m2"));
    assert_eq!(method_name("_ZTv0_n24_N2VD2vbEi").as_deref(), Some("vb"));
    assert_eq!(method_name("_ZN2ns3VecIiE4pushEi").as_deref(), Some("push"));
    assert_eq!(method_name("main"), None);
}

#[test]
fn struct_names_are_innermost_and_template_free() {
    assert_eq!(struct_name("IShape"), "IShape");
    assert_eq!(struct_name("leveldb::TableBuilder"), "TableBuilder");
    assert_eq!(struct_name("ns::Vec<std::pair<int, int> >"), "Vec");
    assert_eq!(struct_name("(anonymous namespace)::Hidden"), "Hidden");
}
