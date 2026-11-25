use super::literal_sections;

#[test]
fn only_string_literal_sections_are_taken() {
    let rows = [
        ("__text", "Text", 0x1000, 0x100),
        ("__cstring", "ReadOnlyString", 0x2000, 0x40),
        ("__const", "ReadOnlyData", 0x3000, 0x10),
        ("__cstring", "ReadOnlyString", 0x4000, 0),
        (".rodata", "ReadOnlyString", 0x5000, 0x80),
    ];
    assert_eq!(literal_sections(rows), [(0x2000, 0x2040)]);
}
