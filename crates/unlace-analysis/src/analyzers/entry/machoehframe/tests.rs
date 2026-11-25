use super::*;

fn fixture(name: &str) -> Vec<u8> {
    std::fs::read(format!(
        "{}/tests/fixtures/{name}",
        env!("CARGO_MANIFEST_DIR")
    ))
    .unwrap()
}

#[test]
fn stripped_image_keeps_its_fde_starts() {
    let bytes = fixture("macho_ehframe_only_arm64");
    let file = object::File::parse(bytes.as_slice()).unwrap();
    assert_eq!(
        macho_eh_frame_starts(&file),
        [0x1_0000_0330, 0x1_0000_0378, 0x1_0000_03c0]
    );
}

#[test]
fn an_image_without_eh_frame_adds_nothing() {
    let bytes = fixture("macho_unwind_only_arm64");
    let file = object::File::parse(bytes.as_slice()).unwrap();
    assert!(macho_eh_frame_starts(&file).is_empty());
}
