use super::*;

fn blob(version: u32, page_size: u32, words: &[u8]) -> Vec<u8> {
    let mut b = version.to_le_bytes().to_vec();
    b.extend(page_size.to_le_bytes());
    b.extend(words);
    b
}

fn page_with(slots: &[(usize, u64)]) -> Vec<u8> {
    let mut page = vec![0u8; 0x1000];
    for &(off, raw) in slots {
        page[off..off + 8].copy_from_slice(&raw.to_le_bytes());
    }
    page
}

fn slot(page: &[u8], off: usize) -> u64 {
    u64::from_le_bytes(page[off..off + 8].try_into().unwrap())
}

#[test]
fn v3_plain_and_auth_pointers_resolve_to_unslid_targets() {
    let mut header = Vec::new();
    header.extend(1u32.to_le_bytes());
    header.extend(0u32.to_le_bytes());
    header.extend(0x1_8000_0000u64.to_le_bytes());
    header.extend(0x10u16.to_le_bytes());
    let info = SlideInfo::parse(&blob(3, 0x1000, &header))
        .unwrap()
        .unwrap();
    let plain = (2u64 << 51) | 0x1_8000_1234;
    let auth = (1u64 << 63) | (1 << 48) | (0x1234 << 32) | 0x5_1234;
    let mut page = page_with(&[(0x10, plain), (0x20, auth)]);
    info.apply(&mut page, 0);
    assert_eq!(slot(&page, 0x10), 0x1_8000_1234);
    assert_eq!(slot(&page, 0x20), 0x1_8005_1234);
}

#[test]
fn v3_plain_pointer_keeps_its_top_byte() {
    let raw = (0x5au64 << 43) | 0x1234;
    assert_eq!(v3_target(raw, 0), (0x5a << 56) | 0x1234);
}

#[test]
fn v2_follows_extras_chains_and_keeps_zero_slots_zero() {
    let delta_mask = 0x00FF_FF00_0000_0000u64;
    let mut header = Vec::new();
    for v in [40u32, 1, 42, 2] {
        header.extend(v.to_le_bytes());
    }
    header.extend(delta_mask.to_le_bytes());
    header.extend(0x10u64.to_le_bytes());
    header.extend(0x8000u16.to_le_bytes());
    header.extend(0x0002u16.to_le_bytes());
    header.extend((0x8000u16 | 0x0040).to_le_bytes());
    let info = SlideInfo::parse(&blob(2, 0x1000, &header))
        .unwrap()
        .unwrap();
    let link = |bytes: u64| bytes << 38;
    let mut page = page_with(&[(0x08, link(8) | 0x1000), (0x10, 0), (0x100, 0x2000)]);
    info.apply(&mut page, 0);
    assert_eq!(slot(&page, 0x08), 0x1010);
    assert_eq!(slot(&page, 0x10), 0);
    assert_eq!(slot(&page, 0x100), 0x2010);
}

#[test]
fn v4_keeps_small_values_and_sign_extends_small_negatives() {
    let delta_mask = 0xC000_0000u64;
    let mut header = Vec::new();
    for v in [40u32, 1, 42, 0] {
        header.extend(v.to_le_bytes());
    }
    header.extend(delta_mask.to_le_bytes());
    header.extend(0x1A00_0000u64.to_le_bytes());
    header.extend(0u16.to_le_bytes());
    let info = SlideInfo::parse(&blob(4, 0x1000, &header))
        .unwrap()
        .unwrap();
    let link = |bytes: u32| (bytes / 4) << 30;
    let mut page = vec![0u8; 0x1000];
    for (off, raw) in [
        (0usize, link(4) | 0x0012_3450),
        (4, link(4) | 0x7FF0),
        (8, 0x3FFF_FFF0),
    ] {
        page[off..off + 4].copy_from_slice(&raw.to_le_bytes());
    }
    info.apply(&mut page, 0);
    let word = |off: usize| u32::from_le_bytes(page[off..off + 4].try_into().unwrap());
    assert_eq!(word(0), 0x1A12_3450, "a pointer gets value_add");
    assert_eq!(word(4), 0x7FF0, "a small positive value is kept");
    assert_eq!(
        word(8),
        0xFFFF_FFF0,
        "a small negative value is sign-extended"
    );
}

#[test]
fn v5_adds_value_add_and_restores_the_high_byte() {
    let mut header = Vec::new();
    header.extend(1u32.to_le_bytes());
    header.extend(0u32.to_le_bytes());
    header.extend(0x1_8000_0000u64.to_le_bytes());
    header.extend(0u16.to_le_bytes());
    let info = SlideInfo::parse(&blob(5, 0x1000, &header))
        .unwrap()
        .unwrap();
    let plain = (1u64 << 52) | (0x7f << 34) | 0x4000;
    let auth = (1 << 63) | (0xbeef << 34) | 0x8000;
    let mut page = page_with(&[(0, plain), (8, auth)]);
    info.apply(&mut page, 0);
    assert_eq!(slot(&page, 0), (0x7f << 56) | 0x1_8000_4000);
    assert_eq!(slot(&page, 8), 0x1_8000_8000);
}

#[test]
fn v1_needs_no_rewrite_and_unknown_versions_are_refused() {
    assert!(SlideInfo::parse(&blob(1, 0, &[0; 16])).unwrap().is_none());
    assert!(SlideInfo::parse(&blob(6, 0x1000, &[0; 32])).is_err());
}
