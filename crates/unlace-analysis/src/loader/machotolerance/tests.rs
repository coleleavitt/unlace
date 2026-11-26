use super::*;

fn fixture(name: &str) -> Vec<u8> {
    std::fs::read(format!(
        "{}/tests/fixtures/{name}",
        env!("CARGO_MANIFEST_DIR")
    ))
    .unwrap()
}

#[test]
fn a_whole_image_is_returned_untouched() {
    let bytes = fixture("macho_unwind_only_arm64");
    let (out, note) = clamp_out_of_file_ranges(bytes.clone());
    assert_eq!(out, bytes);
    assert!(note.is_none());
}

#[test]
fn a_truncated_image_parses_and_maps_after_the_clamp() {
    let mut bytes = fixture("macho_unwind_only_arm64");
    bytes.truncate(0x600);
    let (out, note) = clamp_out_of_file_ranges(bytes);
    let note = note.unwrap();
    assert!(
        note.contains("segment __TEXT") && note.contains("symbol table"),
        "{note}"
    );
    let file = object::File::parse(out.as_slice()).unwrap();
    for seg in object::Object::segments(&file) {
        object::ObjectSegment::data(&seg).unwrap();
    }
    for sec in object::Object::sections(&file) {
        object::ObjectSection::data(&sec).unwrap();
    }
}

#[test]
fn cryptid_one_is_named_and_zero_is_not() {
    let mut bytes = fixture("macho_unwind_only_arm64");
    assert!(encryption_note(&bytes).is_none());
    let (_, at) = commands(&bytes)
        .into_iter()
        .find(|c| c.0 == LC_SEGMENT_64)
        .unwrap();
    bytes[at..at + 4].copy_from_slice(&LC_ENCRYPTION_INFO_64.to_le_bytes());
    bytes[at + 8..at + 20].copy_from_slice(&[0, 0x40, 0, 0, 0, 0x40, 0, 0, 1, 0, 0, 0]);
    assert!(encryption_note(&bytes).unwrap().contains("cryptid 1"));
}
