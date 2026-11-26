use super::*;

/// The ABI's `(1 << n) >> 2 << 2` packing, including the three values that
/// name no distinct local entry (0 and 1 mean the entries coincide, 7 is
/// reserved).
#[test]
fn local_entry_offset_decodes_the_st_other_field() {
    let at = |n: u8| local_entry_offset(n << 5);
    assert_eq!(at(0), None);
    assert_eq!(at(1), None);
    assert_eq!(at(2), Some(4));
    assert_eq!(at(3), Some(8));
    assert_eq!(at(4), Some(16));
    assert_eq!(at(5), Some(32));
    assert_eq!(at(6), Some(64));
    assert_eq!(at(7), None);
    // The low five bits are visibility/reserved and must not leak in.
    assert_eq!(local_entry_offset((3 << 5) | 0x1f), Some(8));
}

/// The repo's ppc64le fixture: every `crtstuff.c` routine carries
/// `[<localentry>: 8]`, and each fold points 8 bytes back at its own symbol.
#[test]
fn fixture_declares_a_local_entry_for_every_crtstuff_routine() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/plt_ppc64le");
    let bytes = std::fs::read(path).expect("fixture readable");
    let file = object::File::parse(&*bytes).expect("fixture parses");
    let folds = declared_local_entries(&file);
    for (global, local) in [
        (0x6f0, 0x6f8),
        (0x750, 0x758),
        (0x7c0, 0x7c8),
        (0x8b0, 0x8b8),
        (0x940, 0x948),
    ] {
        assert_eq!(
            folds.get(&local),
            Some(&global),
            "0x{local:x} is 0x{global:x}'s ELFv2 local entry"
        );
    }
    // Every fold is 8 bytes past its global entry and nothing else folds.
    for (&local, &global) in &folds {
        assert_eq!(
            local - global,
            8,
            "fixture is built with an 8-byte TOC prologue"
        );
    }
}

/// A non-PPC64 image folds nothing at all, whatever its symbols look like.
#[test]
fn non_ppc64_images_fold_nothing() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("fixture readable");
    let file = object::File::parse(&*bytes).expect("fixture parses");
    assert!(declared_local_entries(&file).is_empty());
}
