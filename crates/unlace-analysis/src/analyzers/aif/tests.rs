use super::*;
use crate::listing::Insn;

// The fingerprint + gap-walk + valid-subroutine logic is exercised end-to-end
// by the cross-crate `verify_aif.rs` gate (a stripped x86-64 fixture with a
// function reachable only through a function-pointer table). The constants and
// the pass identity are pinned here; the predicate helpers stay small.

#[test]
fn thresholds_match_ghidra() {
    assert_eq!(MINIMUM_FUNCTION_COUNT, 20);
    assert_eq!(FINGERPRINT_THRESHOLD, 4);
    assert_eq!(MIN_SUBROUTINE_INSNS, 3);
    assert_eq!(FINGERPRINT_INSNS, 2);
}

#[test]
fn strict_candidate_instruction_cannot_cross_into_known_code() {
    assert!(strict_instruction_fits_gap(0x1000, 5, 0x1005));
    assert!(!strict_instruction_fits_gap(0x1000, 6, 0x1005));
    assert!(!strict_instruction_fits_gap(u64::MAX - 1, 4, u64::MAX));
}

#[test]
fn pass_identity_wiring() {
    let p = AggressiveInstructionFinderPass;
    assert_eq!(p.id(), "aif");
    assert_eq!(p.phase(), Phase::P1);
}

#[test]
fn thumb_lr_prologue_matcher() {
    // PUSH {r4,lr} = 0xB510 -> LE bytes [0x10, 0xB5]; the second byte 0xB5 is
    // the discriminant (angr's `[\x00-\xff]\xb5`).
    assert!(is_thumb_lr_prologue(&[0x10, 0xB5], 0));
    assert!(is_thumb_lr_prologue(&[0xF0, 0xB5], 0)); // PUSH {r4-r7,lr}
    assert!(is_thumb_lr_prologue(&[0x00, 0xB5], 0)); // PUSH {lr}
    // PUSH.W {..,lr} = 0xE92D 0x4???  -> LE bytes [0x2D,0xE9, lo, hi] with the
    // LR bit (bit 14) set in `hi` (0x40).  0xE92D4800 = PUSH.W {r11,lr}.
    assert!(is_thumb_lr_prologue(&[0x2D, 0xE9, 0x00, 0x48], 0));
    assert!(is_thumb_lr_prologue(&[0x2D, 0xE9, 0xF0, 0x4F], 0)); // {r4-r11,lr}
    // A non-LR STMDB SP! (0xE92D 0x0???) is NOT a prologue — no LR bit.
    assert!(!is_thumb_lr_prologue(&[0x2D, 0xE9, 0x00, 0x0F], 0));
    // Random bytes / not-a-prologue.
    assert!(!is_thumb_lr_prologue(&[0x00, 0x00], 0));
    assert!(!is_thumb_lr_prologue(&[0xB5, 0x10], 0)); // 0xB5 in the wrong (low) byte
    // Bounds: too short for a 32-bit check falls back to the 16-bit test.
    assert!(!is_thumb_lr_prologue(&[0x2D, 0xE9], 0)); // no 2nd halfword => reject
    assert!(!is_thumb_lr_prologue(&[0x2D], 0));
}

#[test]
fn thumb_function_prologue_matcher() {
    // PUSH {r4,lr} = 0xB510 -> LE [0x10,0xB5]; PUSH {r4} (no LR) = 0xB410.
    assert!(is_thumb_function_prologue(&[0x10, 0xB5]));
    assert!(is_thumb_function_prologue(&[0x10, 0xB4])); // push without LR (Stage-2 skips this)
    // SUB SP,SP,#8 = 0xB082 -> LE [0x82,0xB0]; the imm7-form bit (0x80) is set.
    assert!(is_thumb_function_prologue(&[0x82, 0xB0]));
    assert!(is_thumb_function_prologue(&[0x84, 0xB0])); // SUB SP,#0x10
    // ADD SP,SP,#imm = 0xB0(0x00|imm7) has bit7 CLEAR -> not a frame prologue.
    assert!(!is_thumb_function_prologue(&[0x02, 0xB0]));
    // PUSH.W {..} = 0xE92D.. ; VPUSH = 0xED2D.. ; SUB.W SP = 0xF1AD/0xF2AD.
    assert!(is_thumb_function_prologue(&[0x2D, 0xE9, 0x00, 0x48]));
    assert!(is_thumb_function_prologue(&[0x2D, 0xED, 0x04, 0x8B])); // vpush {d8}
    assert!(is_thumb_function_prologue(&[0xAD, 0xF1, 0x08, 0x0D])); // sub.w sp,sp,#8
    assert!(is_thumb_function_prologue(&[0xAD, 0xF2, 0x08, 0x0D]));
    // Non-prologues.
    assert!(!is_thumb_function_prologue(&[0x00, 0x00]));
    assert!(!is_thumb_function_prologue(&[0xB5, 0x10])); // 0xB5 in the wrong byte
    assert!(!is_thumb_function_prologue(&[0x2D, 0xE9])); // truncated 32-bit -> reject
    assert!(!is_thumb_function_prologue(&[0x2D]));
}

/// A text-free Listing builds a HYBRID fingerprint record — mnemonic from the
/// re-decode, stride and total length from the Listing — and the re-decode is
/// not guaranteed to see the instruction the walk saw: `Sleigh::one_instruction`
/// commits `globalset` context writes, and both the ARM (`TMode`) and MIPS
/// (`ISA_MODE`) specs globalset a decode mode at a branch target, so a later
/// decode can change the mode a given address decodes in. The lengths are the
/// observable, so a disagreement must decline the fingerprint rather than pair
/// one instruction's mnemonic with another's stride.
#[test]
fn a_relaxed_redecode_declines_rather_than_mixing_two_instructions() {
    // Two 4-byte instructions the walk decoded, with no captured text — the
    // Listing a `--mode fast` load produces.
    let insn = |addr: u64, mnemonic: &str| Insn {
        addr,
        len: 4,
        fall_through: Some(addr + 4),
        flow: Default::default(),
        flows: Vec::new(),
        mnemonic: mnemonic.to_string().into(),
        operands: String::new(),
        pcode: None,
    };
    let textless = Listing::from_insns_for_test(vec![insn(0x1000, ""), insn(0x1004, "")], false);

    // Agreement: the re-decode read the same two 4-byte instructions, so the
    // fingerprint is exactly what a text-carrying Listing would have produced.
    let agreeing = |vma: u64| Some((if vma == 0x1000 { "PUSH" } else { "MOV" }.to_string(), 4));
    assert_eq!(
        fingerprint_over_listing(&textless, 0x1000, agreeing),
        Some((["PUSH".into(), "MOV".into()], 8))
    );

    // Disagreement on the FIRST instruction (a 2-byte Thumb/MIPS16 re-decode of
    // what the walk read as a 4-byte A32/MIPS32 word) — decline.
    let alt_isa = |vma: u64| Some((if vma == 0x1000 { "push" } else { "MOV" }.to_string(), 2));
    assert_eq!(fingerprint_over_listing(&textless, 0x1000, alt_isa), None);

    // ...and on the SECOND, where the first step already contributed a mnemonic.
    let alt_isa_second = |vma: u64| {
        if vma == 0x1000 {
            Some(("PUSH".to_string(), 4))
        } else {
            Some(("movs".to_string(), 2))
        }
    };
    assert_eq!(
        fingerprint_over_listing(&textless, 0x1000, alt_isa_second),
        None
    );

    // An undecodable re-decode and an empty mnemonic still reject, as before.
    assert_eq!(fingerprint_over_listing(&textless, 0x1000, |_| None), None);
    assert_eq!(
        fingerprint_over_listing(&textless, 0x1000, |_| Some((String::new(), 4))),
        None
    );

    // A Listing that DOES carry text never consults the re-decode at all, so a
    // hostile probe cannot change the answer.
    let with_text =
        Listing::from_insns_for_test(vec![insn(0x1000, "PUSH"), insn(0x1004, "MOV")], true);
    assert_eq!(
        fingerprint_over_listing(&with_text, 0x1000, |_| panic!("must not re-decode")),
        Some((["PUSH".into(), "MOV".into()], 8))
    );
}

#[test]
fn fingerprint_is_operand_insensitive_by_construction() {
    // Two prologues with the same mnemonic sequence + total length collide
    // (the masked-bytes equivalence class). Differing only by operand text (not
    // captured in the mnemonic) keeps them in the same bucket.
    let a: Fingerprint = (["PUSH".into(), "MOV".into()], 4);
    let b: Fingerprint = (["PUSH".into(), "MOV".into()], 4);
    let c: Fingerprint = (["PUSH".into(), "SUB".into()], 4);
    let mut hist: BTreeMap<Fingerprint, usize> = BTreeMap::new();
    *hist.entry(a.clone()).or_insert(0) += 1;
    *hist.entry(b).or_insert(0) += 1; // same key → count 2
    *hist.entry(c.clone()).or_insert(0) += 1;
    assert_eq!(hist.get(&a).copied(), Some(2));
    assert_eq!(hist.get(&c).copied(), Some(1));
}
