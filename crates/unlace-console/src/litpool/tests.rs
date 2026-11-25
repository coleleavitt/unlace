use super::*;

const ALWAYS: &dyn Fn(u64) -> bool = &|_| true;
const NEVER: &dyn Fn(u64) -> bool = &|_| false;

/// Four 4-byte rows at 0x100..0x110.
fn rows() -> Vec<Boundary> {
    vec![(0x100, 4), (0x104, 4), (0x108, 4), (0x10c, 4)]
}

/// The shape the need is about: an instruction in the range reads a word
/// that lies later in the same range, so that word is data.
#[test]
fn a_word_the_range_reads_at_a_fixed_address_is_a_pool_word() {
    let got = pool_words(&rows(), &[(0x108, 4)], &[], (0x100, 0x110), ALWAYS);
    assert_eq!(got, BTreeMap::from([(0x108, 4)]));
}

/// A branch target is a label whatever else reads it.
#[test]
fn a_branch_target_is_never_folded() {
    let got = pool_words(&rows(), &[(0x108, 4)], &[0x108], (0x100, 0x110), ALWAYS);
    assert!(got.is_empty());
}

/// A writable slot holds whatever the loader last wrote, and an address a
/// function symbol sits on is code by declaration; neither can hold a pool.
#[test]
fn a_slot_the_program_refuses_is_never_folded() {
    let got = pool_words(&rows(), &[(0x108, 4)], &[], (0x100, 0x110), NEVER);
    assert!(got.is_empty());
}

/// Outside the listed span there is no evidence and no row to fold.
#[test]
fn a_target_outside_the_span_is_never_folded() {
    let outside = pool_words(&rows(), &[(0x200, 4)], &[], (0x100, 0x110), ALWAYS);
    assert!(outside.is_empty());
    let first = pool_words(&rows(), &[(0x100, 4)], &[], (0x100, 0x110), ALWAYS);
    assert!(
        first.is_empty(),
        "the address the caller asked to disassemble stays code"
    );
    let past_end = pool_words(&rows(), &[(0x10c, 8)], &[], (0x100, 0x110), ALWAYS);
    assert!(past_end.is_empty());
}

/// A real pool word is a naturally-aligned scalar.
#[test]
fn an_unaligned_or_odd_width_target_is_never_folded() {
    assert!(pool_words(&rows(), &[(0x106, 4)], &[], (0x100, 0x110), ALWAYS).is_empty());
    assert!(pool_words(&rows(), &[(0x108, 3)], &[], (0x100, 0x110), ALWAYS).is_empty());
}

/// Folding only on an exact tiling is what stops the listing re-aligning:
/// a 4-byte read landing mid-instruction, or covering part of the next one,
/// is declined.
#[test]
fn a_read_that_does_not_tile_whole_rows_is_declined() {
    let mixed = vec![(0x100, 4), (0x104, 2), (0x106, 4), (0x10a, 2), (0x10c, 4)];
    assert!(
        pool_words(&mixed, &[(0x104, 4)], &[], (0x100, 0x110), ALWAYS).is_empty(),
        "0x104 is 2 bytes and 0x106 is 4, so nothing tiles 4 bytes"
    );
    // Two Thumb-sized rows DO tile a 4-byte word.
    let thumb = vec![(0x100, 2), (0x102, 2), (0x104, 2), (0x106, 2)];
    assert_eq!(
        pool_words(&thumb, &[(0x104, 4)], &[], (0x100, 0x108), ALWAYS),
        BTreeMap::from([(0x104, 4)])
    );
}

/// A `--follow` listing can hold an overlapping reading of the same bytes:
/// its row is not part of the word's tiling, even where its size happens to
/// make up the difference.
#[test]
fn an_overlapping_row_does_not_tile_a_word() {
    let overlapping = vec![(0x100, 4), (0x104, 2), (0x105, 2), (0x106, 2), (0x108, 4)];
    assert!(
        pool_words(&overlapping, &[(0x104, 4)], &[], (0x100, 0x10c), ALWAYS).is_empty(),
        "0x104 + 0x105 sum to 4 bytes but cover only 0x104..0x107"
    );
}

#[test]
fn a_word_reads_in_the_programs_own_byte_order_padded_to_its_width() {
    assert_eq!(word_operand(&[0x39, 0x05, 0x00, 0x00], false), "0x00000539");
    assert_eq!(word_operand(&[0x00, 0x00, 0x05, 0x39], true), "0x00000539");
    assert_eq!(word_mnemonic(4), ".word");
    assert_eq!(word_mnemonic(2), ".short");
    assert_eq!(word_mnemonic(8), ".quad");
}
