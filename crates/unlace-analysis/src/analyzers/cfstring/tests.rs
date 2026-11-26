use super::*;

fn fixture() -> Vec<u8> {
    std::fs::read(concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_cfstring"
    ))
    .unwrap()
}

fn texts(bytes: &[u8]) -> Vec<String> {
    let file = object::File::parse(bytes).unwrap();
    collect(&file, bytes)
        .cfstrings
        .iter()
        .map(|f| String::from_utf8(f.bytes.clone()).unwrap())
        .collect()
}

fn section_size_offset(bytes: &[u8]) -> usize {
    let file = object::File::parse(bytes).unwrap();
    let sec = file.section_by_name(SEC_CFSTRING).unwrap();
    let (file_off, _) = sec.file_range().unwrap();
    // `section_64` header: sectname[16] segname[16] addr size offset ...; find the
    // header whose `offset` field names this section's file offset.
    (0..bytes.len() - 80)
        .find(|&at| {
            bytes[at..at + 16].starts_with(b"__cfstring\0")
                && u32::from_le_bytes(bytes[at + 48..at + 52].try_into().unwrap()) as u64
                    == file_off
        })
        .map(|at| at + 40)
        .unwrap()
}

#[test]
fn reads_every_entry_of_the_fixture() {
    assert_eq!(
        texts(&fixture()),
        [
            "cfstring hello",
            "a constant string longer than one entry",
            "after the long one"
        ]
    );
}

#[test]
fn a_section_size_past_the_file_does_not_drive_the_walk() {
    let mut bytes = fixture();
    let at = section_size_offset(&bytes);
    bytes[at..at + 8].copy_from_slice(&0xffff_ffff_ffff_0000u64.to_le_bytes());
    let started = std::time::Instant::now();
    let _ = texts(&bytes);
    assert!(started.elapsed() < std::time::Duration::from_secs(5));
}

/// A minimal arm64 Mach-O whose `__cfstring` holds `n` entries that all point
/// at one `run`-byte `__cstring` run.
fn shared_run_image(n: usize, run: usize) -> Vec<u8> {
    let (cmds, data_off) = (72 + 2 * 80, 32 + 72 + 2 * 80);
    let cf_off = data_off + run;
    let mut b = vec![0u8; cf_off + n * 32];
    let total = b.len() as u64;
    let base = 0x1_0000_0000u64;
    let put32 =
        |b: &mut Vec<u8>, at: usize, v: u32| b[at..at + 4].copy_from_slice(&v.to_le_bytes());
    let put64 =
        |b: &mut Vec<u8>, at: usize, v: u64| b[at..at + 8].copy_from_slice(&v.to_le_bytes());
    let name =
        |b: &mut Vec<u8>, at: usize, s: &str| b[at..at + s.len()].copy_from_slice(s.as_bytes());
    for (at, v) in [
        (0, 0xfeed_facf),
        (4, 0x0100_000c),
        (12, 2),
        (16, 1),
        (20, cmds as u32),
    ] {
        put32(&mut b, at, v);
    }
    put32(&mut b, 32, 0x19);
    put32(&mut b, 36, cmds as u32);
    name(&mut b, 40, "__DATA");
    put64(&mut b, 56, base);
    put64(&mut b, 64, total);
    put64(&mut b, 80, total);
    for at in [88, 92] {
        put32(&mut b, at, 3);
    }
    put32(&mut b, 96, 2);
    for (i, (sect, off, size)) in [("__cstring", data_off, run), ("__cfstring", cf_off, n * 32)]
        .into_iter()
        .enumerate()
    {
        let at = 104 + i * 80;
        name(&mut b, at, sect);
        name(&mut b, at + 16, "__DATA");
        put64(&mut b, at + 32, base + off as u64);
        put64(&mut b, at + 40, size as u64);
        put32(&mut b, at + 48, off as u32);
    }
    b[data_off..cf_off].fill(b'a');
    for e in 0..n {
        let at = cf_off + e * 32;
        put64(&mut b, at + 8, 0x7c8);
        put64(&mut b, at + 16, base + data_off as u64);
        put64(&mut b, at + 24, run as u64);
    }
    b
}

#[test]
fn entries_sharing_one_run_read_no_more_than_the_file() {
    let bytes = shared_run_image(1024, MAX_CFSTRING_BYTES as usize);
    let file = object::File::parse(&*bytes).unwrap();
    let out = collect(&file, &bytes);
    let total: usize = out.cfstrings.iter().map(|f| f.bytes.len()).sum();
    assert!(!out.cfstrings.is_empty());
    assert!(
        total <= bytes.len(),
        "{total} string bytes from a {}-byte file",
        bytes.len()
    );
}

#[test]
fn the_walk_stops_at_its_budget_of_span_checks() {
    let bytes = shared_run_image(64, 16);
    let file = object::File::parse(&*bytes).unwrap();
    assert_eq!(collect(&file, &bytes).cfstrings.len(), 64);
    let budget = 4 * file.sections().count() as u64 * 10;
    assert_eq!(collect_bounded(&file, &bytes, budget).cfstrings.len(), 10);
}

#[test]
fn a_string_holding_a_nul_is_skipped_not_cut_short() {
    assert!(!nul_inside(b"plain"));
    assert!(nul_inside(b"a\0b"));
    let mut bytes = fixture();
    let at = bytes
        .windows(14)
        .position(|w| w == b"cfstring hello")
        .unwrap();
    bytes[at + 8] = 0;
    assert_eq!(
        texts(&bytes),
        [
            "a constant string longer than one entry",
            "after the long one"
        ]
    );
}

#[test]
fn a_string_ending_in_a_nul_is_skipped_too() {
    assert!(nul_inside(b"trailing\0"));
    let mut bytes = fixture();
    let at = bytes
        .windows(14)
        .position(|w| w == b"cfstring hello")
        .unwrap();
    bytes[at + 13] = 0;
    assert_eq!(
        texts(&bytes),
        [
            "a constant string longer than one entry",
            "after the long one"
        ]
    );
}

/// The chained-fixup image: each `data` pointer is a chained rebase, the
/// UTF-16 entry decodes, and the entry holding a NUL is skipped.
#[test]
fn reads_a_chained_image_with_a_utf16_entry() {
    let bytes = std::fs::read(concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_cfstring_chained_arm64"
    ))
    .unwrap();
    assert_eq!(texts(&bytes), ["chained hello", "café \u{2192} ok"]);
}

#[test]
fn utf16_decodes_in_either_byte_order_and_refuses_a_lone_surrogate() {
    let snowman_le = [0x03, 0x26, 0x20, 0x00];
    let snowman_be = [0x26, 0x03, 0x00, 0x20];
    assert_eq!(
        decode_utf16(&snowman_le, true).unwrap(),
        "\u{2603} ".as_bytes()
    );
    assert_eq!(
        decode_utf16(&snowman_be, false).unwrap(),
        "\u{2603} ".as_bytes()
    );
    assert_eq!(decode_utf16(&[0x00, 0xd8], true), None);
}

#[test]
fn an_8bit_entry_that_is_not_utf8_is_skipped() {
    let mut bytes = fixture();
    let at = bytes
        .windows(14)
        .position(|w| w == b"cfstring hello")
        .unwrap();
    bytes[at + 3] = 0xff;
    assert_eq!(
        texts(&bytes),
        [
            "a constant string longer than one entry",
            "after the long one"
        ]
    );
}
