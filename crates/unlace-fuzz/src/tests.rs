use super::*;

/// Empty input: the magic gate rejects it before anything runs.
#[test]
fn empty_input_is_not_binary() {
    assert_eq!(fuzz_iteration(&[]), FuzzResult::NotBinary);
}

/// Bytes without a container magic are rejected.
#[test]
fn random_garbage_is_not_binary() {
    assert_eq!(fuzz_iteration(&[0xff; 64]), FuzzResult::NotBinary);
}

/// A truncated ELF (magic, then nothing) must not panic. It loads as an
/// error or as an empty program, never as a finding.
#[test]
fn truncated_elf_does_not_panic() {
    let mut buf = vec![0u8; 32];
    buf[0..4].copy_from_slice(b"\x7fELF");
    buf[4] = 2; // 64-bit
    buf[5] = 1; // little-endian
    let result = fuzz_iteration(&buf);
    assert!(
        matches!(result, FuzzResult::LoadFailed(_) | FuzzResult::Ok { .. }),
        "truncated ELF produced {result:?}"
    );
}

/// The synthetic predicate fires when the input contains the marker
/// `[0xCA, 0xFE]`. The minimiser must shrink to the smallest prefix that
/// still contains both bytes.
#[test]
fn minimise_crash_with_shrinks_to_marker_prefix() {
    let mut input = vec![0u8; 100];
    input[40] = 0xCA;
    input[41] = 0xFE;
    let predicate = |bytes: &[u8]| bytes.windows(2).any(|w| w == [0xCA, 0xFE]);
    let minimised = minimise_crash_with(&input, predicate);
    assert_eq!(minimised.len(), 42);
    assert_eq!(minimised[40], 0xCA);
    assert_eq!(minimised[41], 0xFE);
}

/// A predicate that does not fire on the full input must not shrink it:
/// otherwise a false alarm would come back as an empty buffer.
#[test]
fn minimise_crash_with_returns_input_when_predicate_false() {
    let input = vec![0xAAu8; 32];
    assert_eq!(minimise_crash_with(&input, |_| false), input);
}

#[test]
fn minimise_crash_with_empty_input() {
    assert!(minimise_crash_with(&[], |_| true).is_empty());
}

/// When the smallest witness is one byte, the search must end at 1.
#[test]
fn minimise_crash_with_single_byte_witness() {
    let input = vec![0xDEu8; 50];
    let minimised = minimise_crash_with(&input, |b| !b.is_empty());
    assert_eq!(minimised.len(), 1);
}

/// A non-crashing input comes back unchanged through the real predicate.
#[test]
fn minimise_crash_no_op_on_clean_input() {
    let bytes = b"not a binary, will return NotBinary";
    assert_eq!(minimise_crash(bytes).as_slice(), bytes.as_slice());
}
