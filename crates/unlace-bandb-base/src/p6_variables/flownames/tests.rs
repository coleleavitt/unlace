use super::*;

#[test]
fn made_up_field_names_name_nothing() {
    assert_eq!(usable_field("st_size"), Some("st_size"));
    assert_eq!(usable_field("_flags"), Some("flags"));
    for name in [
        "field_0x10",
        "__glibc_reserved",
        "__pad0",
        "",
        "_",
        "0x10",
        "a b",
        "reserved_x",
        "unused2",
    ] {
        assert_eq!(usable_field(name), None, "{name}");
    }
}

#[test]
fn synthesized_structures_have_no_type_word() {
    assert_eq!(type_word("passwd"), Some("passwd"));
    assert_eq!(type_word("_IO_FILE"), Some("IO_FILE"));
    assert_eq!(type_word("std::vector<int>"), Some("vector"));
    for name in [
        "struct_3",
        "astruct",
        "astruct_12",
        "frame_1",
        "anon",
        "1abc",
    ] {
        assert_eq!(type_word(name), None, "{name}");
    }
}
