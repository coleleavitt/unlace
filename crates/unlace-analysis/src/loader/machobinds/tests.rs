use super::*;

#[test]
fn the_fixture_binds_name_their_data_pointers() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_bindslots_arm64"
    );
    let bytes = std::fs::read(path).unwrap();
    let file = object::File::parse(bytes.as_slice()).unwrap();
    assert_eq!(
        bound_slots(&file, &bytes),
        [
            (0x1_0000_4000, "ext_handler".to_string()),
            (0x1_0000_4008, "ext_counter".to_string())
        ]
    );
}
