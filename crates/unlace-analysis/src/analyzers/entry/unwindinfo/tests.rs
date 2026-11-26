use super::*;

fn fixture(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    std::fs::read(&path).unwrap_or_else(|_| panic!("read fixture {path}"))
}

/// The headline: on a stripped arm64 Mach-O (no `LC_FUNCTION_STARTS`, local
/// symbols removed) the four `uw_*` function starts live only in
/// `__TEXT,__unwind_info`, and this oracle recovers exactly them.
#[test]
fn recovers_the_unwind_only_function_starts() {
    let bytes = fixture("macho_unwind_only_arm64");
    let file = object::File::parse(bytes.as_slice()).expect("parse fixture");
    let starts = unwind_info_starts(&file, &bytes);
    for a in [0x1000002e0u64, 0x100000328, 0x100000370, 0x1000003bc] {
        assert!(
            starts.contains(&a),
            "unwind start {a:#x} missing; got {starts:#x?}"
        );
    }
    // `_main` (0x10000040c) is a function symbol, so the funcsym filter drops it
    // (another oracle already names it) — the pass only ADDS new starts.
    assert!(
        !starts.contains(&0x10000040c),
        "a funcsym start must be filtered out"
    );
    // The Mach header (0x100000000) is not in an executable section.
    assert!(
        !starts.contains(&0x100000000),
        "the mach header is not a function"
    );
}

/// Mach-O only: an ELF image yields nothing (the parser finds no section and
/// `collect_thin` never runs).
#[test]
fn non_macho_yields_nothing() {
    let bytes = fixture("cet_pie_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse elf");
    assert!(unwind_info_starts(&file, &bytes).is_empty());
}

/// Every read is bounds-checked: a short or empty blob is parsed to no starts,
/// never a panic.
#[test]
fn short_blob_does_not_panic() {
    let mut out = Vec::new();
    parse_unwind_info(&[], 0x1000, &mut out);
    parse_unwind_info(&[1, 0, 0, 0], 0x1000, &mut out);
    parse_unwind_info(&[0u8; 27], 0x1000, &mut out);
    assert!(out.is_empty());
}

/// A section header: version 1, no common encodings or personalities, and an
/// index array of `index_count` entries at `index_off`.
fn header(index_off: u32, index_count: u32) -> Vec<u8> {
    let mut b = Vec::new();
    for v in [1u32, 0, 0, 0, 0, index_off, index_count] {
        b.extend_from_slice(&v.to_le_bytes());
    }
    b
}

/// A compressed second-level page claiming `entry_count` entries, padded with
/// zero entries to `len` bytes.
fn compressed_page(entry_count: u16, len: usize) -> Vec<u8> {
    let mut p = Vec::new();
    p.extend_from_slice(&3u32.to_le_bytes());
    p.extend_from_slice(&12u16.to_le_bytes());
    p.extend_from_slice(&entry_count.to_le_bytes());
    p.extend_from_slice(&[0u8; 4]);
    p.resize(len, 0);
    p
}

/// An index count near `u32::MAX` over a 28-byte section reads the index
/// entries that fit (none) and stops, rather than looping over the count.
#[test]
fn huge_index_count_is_clamped_to_the_section() {
    let mut out = Vec::new();
    parse_unwind_info(&header(28, u32::MAX), 0x1000, &mut out);
    assert!(out.is_empty());
}

/// A page whose entry count runs past its 4 KiB extent yields only the entries
/// inside the page; the bytes after it are not read as function offsets.
#[test]
fn page_entries_stay_inside_their_page() {
    let mut buf = header(28, 2);
    for v in [0x1000u32, 64, 0, 0x2000, 0, 0] {
        buf.extend_from_slice(&v.to_le_bytes());
    }
    buf.resize(64, 0);
    buf.extend_from_slice(&compressed_page(0xFFFF, 2 * SECOND_LEVEL_PAGE_SIZE));
    let mut out = Vec::new();
    parse_unwind_info(&buf, 0, &mut out);
    assert_eq!(out.len(), (SECOND_LEVEL_PAGE_SIZE - 12) / 4);
}

/// Many index entries naming the same full page cannot multiply the output:
/// it is capped at one start per four section bytes.
#[test]
fn repeated_pages_are_capped_by_the_section_size() {
    let pages = 200u32;
    let page_off = 28 + (pages + 1) * 12;
    let mut buf = header(28, pages + 1);
    for _ in 0..pages {
        for v in [0x1000u32, page_off, 0] {
            buf.extend_from_slice(&v.to_le_bytes());
        }
    }
    buf.extend_from_slice(&[0u8; 12]);
    buf.extend_from_slice(&compressed_page(0xFFFF, SECOND_LEVEL_PAGE_SIZE));
    let mut out = Vec::new();
    parse_unwind_info(&buf, 0, &mut out);
    assert!(!out.is_empty());
    assert!(
        out.len() <= buf.len() / MIN_ENTRY_SIZE,
        "{} starts from {} bytes",
        out.len(),
        buf.len()
    );
}

/// Only `__TEXT,__unwind_info` is the unwinder's table: the same bytes
/// under a section that names another segment give no starts.
#[test]
fn unwind_info_outside_text_is_ignored() {
    let mut bytes = fixture("macho_unwind_only_arm64");
    let at = bytes
        .windows(32)
        .position(|w| w == b"__unwind_info\0\0\0__TEXT\0\0\0\0\0\0\0\0\0\0")
        .expect("the __unwind_info section header");
    bytes[at + 16..at + 22].copy_from_slice(b"__DATA");
    let file = object::File::parse(bytes.as_slice()).expect("parse patched fixture");
    assert!(unwind_info_starts(&file, &bytes).is_empty());
}

/// A header of any version other than 1 is not a layout this reader knows.
#[test]
fn only_version_1_is_read() {
    let mut buf = header(28, 2);
    for v in [0x1000u32, 64, 0, 0x2000, 0, 0] {
        buf.extend_from_slice(&v.to_le_bytes());
    }
    buf.resize(64, 0);
    buf.extend_from_slice(&compressed_page(4, 64));
    let mut out = Vec::new();
    parse_unwind_info(&buf, 0, &mut out);
    assert_eq!(out.len(), 4);
    buf[0] = 2;
    out.clear();
    parse_unwind_info(&buf, 0, &mut out);
    assert!(out.is_empty());
}
