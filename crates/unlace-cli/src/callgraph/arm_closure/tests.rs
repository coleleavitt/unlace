use super::packs_relocations;

fn dynamic(tags: &[u32]) -> Vec<u8> {
    tags.iter()
        .flat_map(|t| t.to_le_bytes().into_iter().chain(0u32.to_le_bytes()))
        .collect()
}

#[test]
fn android_packed_relocations_are_unreadable() {
    assert!(packs_relocations(
        &dynamic(&[0x6000_0011, 0x6000_0012, 0x17, 0]),
        true
    ));
    assert!(packs_relocations(&dynamic(&[0x6000_000f, 0]), true));
}

#[test]
fn rel_rela_and_relr_tables_are_readable() {
    assert!(!packs_relocations(
        &dynamic(&[0x11, 0x12, 0x13, 0x7, 0x8, 0x9, 0x24, 0x23, 0x25, 0]),
        true
    ));
}
