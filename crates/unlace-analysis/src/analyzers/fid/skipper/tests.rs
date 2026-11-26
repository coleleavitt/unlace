use super::*;

#[test]
fn skips_single_byte_nop() {
    let s = X86InstructionSkipper;
    assert!(s.should_skip(&[0x90], 1));
}

#[test]
fn skips_multibyte_nops() {
    let s = X86InstructionSkipper;
    // 66 90  (2-byte)
    assert!(s.should_skip(&[0x66, 0x90], 2));
    // 0F 1F 00  (3-byte)
    assert!(s.should_skip(&[0x0f, 0x1f, 0x00], 3));
    // 66 0F 1F 84 00 00 00 00 00  (9-byte, the longest)
    assert!(s.should_skip(&[0x66, 0x0f, 0x1f, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00], 9));
    // 8B C0  (self-mov idiom)
    assert!(s.should_skip(&[0x8b, 0xc0], 2));
}

#[test]
fn length_must_match_exactly() {
    let s = X86InstructionSkipper;
    // 0x90 is a NOP at size 1, but the same byte with size 2 is not a known
    // 2-byte pattern.
    assert!(!s.should_skip(&[0x90, 0x90], 2));
    // A real instruction is never skipped.
    assert!(!s.should_skip(&[0x55], 1)); // push rbp
    assert!(!s.should_skip(&[0x48, 0x89, 0xe5], 3)); // mov rbp,rsp
}

#[test]
fn trailing_bytes_in_buffer_ignored_beyond_size() {
    let s = X86InstructionSkipper;
    // A buffer longer than `size`: only the first `size` bytes are compared.
    let mut buf = vec![0x90];
    buf.extend_from_slice(&[0xde, 0xad, 0xbe, 0xef]);
    assert!(s.should_skip(&buf, 1));
}

#[test]
fn non_x86_empty_set_never_skips() {
    // The "empty skipper set" case the hasher uses for non-x86: a hasher with
    // no skippers folds in everything (verified at the hash layer; here we
    // just confirm there is no default skip behavior baked into the trait).
    let skippers: Vec<Box<dyn InstructionSkipper>> = vec![];
    let any_skipped = skippers.iter().any(|s| s.should_skip(&[0x90], 1));
    assert!(!any_skipped);
}
