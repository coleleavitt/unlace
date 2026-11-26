use super::*;
use object::{RelocationEncoding, RelocationKind};

fn reloc(r_type: u32, implicit: bool) -> RelocationInfo {
    RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend: 0,
        implicit_addend: implicit,
        r_type: Some(r_type),
    }
}

fn generic_reloc(
    kind: RelocationKind,
    encoding: RelocationEncoding,
    size: u8,
    addend: i64,
    implicit_addend: bool,
) -> RelocationInfo {
    RelocationInfo {
        kind,
        encoding,
        size,
        addend,
        implicit_addend,
        r_type: None,
    }
}

#[test]
fn no_op_and_generic_classification_cover_the_supported_widths() {
    for (arch, r_type) in [
        (Architecture::Arm, elf::R_ARM_NONE),
        (Architecture::Arm, elf::R_ARM_V4BX),
        (Architecture::Aarch64, elf::R_AARCH64_NONE),
        (Architecture::PowerPc64, elf::R_PPC64_NONE),
    ] {
        assert!(classify_info(arch, reloc(r_type, false)).unwrap().is_none());
    }
    assert!(
        classify_info(
            Architecture::X86_64,
            generic_reloc(
                RelocationKind::None,
                RelocationEncoding::Generic,
                0,
                0,
                false,
            ),
        )
        .unwrap()
        .is_none()
    );

    for bits in [8, 16, 32, 64] {
        let info = generic_reloc(
            RelocationKind::Absolute,
            RelocationEncoding::Generic,
            bits,
            0,
            false,
        );
        let spec = classify_info(Architecture::X86_64, info).unwrap().unwrap();
        assert_eq!(spec.width(), usize::from(bits / 8));
    }

    let unsupported = generic_reloc(
        RelocationKind::Absolute,
        RelocationEncoding::Generic,
        24,
        0,
        false,
    );
    assert!(matches!(
        classify_info(Architecture::X86_64, unsupported),
        Err(RelocationFailure::Unsupported)
    ));
    let unsupported = generic_reloc(
        RelocationKind::SectionOffset,
        RelocationEncoding::Generic,
        32,
        0,
        false,
    );
    assert!(matches!(
        classify_info(Architecture::X86_64, unsupported),
        Err(RelocationFailure::Unsupported)
    ));
}

#[test]
fn bpf_map_reference_patches_both_imm_halves_and_keeps_the_opcode() {
    let r = reloc(elf::R_BPF_64_64, true);
    let spec = classify_info(Architecture::Bpf, r).unwrap().unwrap();
    assert_eq!(spec.width(), 16);
    assert!(!spec.targets_code());
    // lddw r1, 0x10 (the implicit addend sits in the low imm).
    let mut bytes = [0x18, 0x01, 0, 0, 0x10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
    apply_info(
        spec,
        r,
        &mut bytes,
        true,
        0x1_2345_6780,
        0x400020,
        None,
        None,
    )
    .unwrap();
    assert_eq!(&bytes[..4], &[0x18, 0x01, 0, 0]);
    assert_eq!(
        u32::from_le_bytes(bytes[4..8].try_into().unwrap()),
        0x2345_6790
    );
    assert_eq!(&bytes[8..12], &[0, 0, 0, 0]);
    assert_eq!(u32::from_le_bytes(bytes[12..16].try_into().unwrap()), 1);

    let mut be = [0x18, 0x10, 0, 0, 0, 0, 0, 0x10, 0, 0, 0, 0, 0, 0, 0, 0];
    apply_info(spec, r, &mut be, false, 0x1_2345_6780, 0x400020, None, None).unwrap();
    assert_eq!(
        u32::from_be_bytes(be[4..8].try_into().unwrap()),
        0x2345_6790
    );
    assert_eq!(u32::from_be_bytes(be[12..16].try_into().unwrap()), 1);

    let mut not_lddw = [0x85u8; 16];
    assert_eq!(
        apply_info(spec, r, &mut not_lddw, true, 0, 0, None, None),
        Err(RelocationFailure::InvalidEncoding)
    );
}

#[test]
fn bpf_subprogram_call_encodes_the_instruction_displacement() {
    let r = reloc(elf::R_BPF_64_32, true);
    let spec = classify_info(Architecture::Bpf, r).unwrap().unwrap();
    assert_eq!(spec.width(), 8);
    assert!(spec.is_call() && spec.targets_code());
    // call -1 at 0x400078 to a callee at 0x400000: (S - P) / 8 - 1 = -16.
    let mut bytes = [0x85, 0x10, 0, 0, 0xff, 0xff, 0xff, 0xff];
    apply_info(spec, r, &mut bytes, true, 0x400000, 0x400078, None, None).unwrap();
    assert_eq!(&bytes[..4], &[0x85, 0x10, 0, 0]);
    assert_eq!(i32::from_le_bytes(bytes[4..8].try_into().unwrap()), -16);

    // call 2 against `.text` at 0x400000: the static callee is at 0x400018.
    let mut section = [0x85, 0x10, 0, 0, 2, 0, 0, 0];
    apply_info(spec, r, &mut section, true, 0x400000, 0x400078, None, None).unwrap();
    assert_eq!(i32::from_le_bytes(section[4..8].try_into().unwrap()), -13);
    let mut be = [0x85, 0x01, 0, 0, 0, 0, 0, 2];
    apply_info(spec, r, &mut be, false, 0x400000, 0x400078, None, None).unwrap();
    assert_eq!(be, [0x85, 0x01, 0, 0, 0xff, 0xff, 0xff, 0xf3]);

    let mut misaligned = [0x85, 0x10, 0, 0, 0, 0, 0, 0];
    assert_eq!(
        apply_info(
            spec,
            r,
            &mut misaligned,
            true,
            0x400004,
            0x400078,
            None,
            None
        ),
        Err(RelocationFailure::Misaligned)
    );
    let mut helper = [0x85, 0x00, 0, 0, 1, 0, 0, 0];
    assert_eq!(
        apply_info(spec, r, &mut helper, true, 0x400000, 0x400078, None, None),
        Err(RelocationFailure::InvalidEncoding)
    );
}

#[test]
fn bpf_data_relocations_are_plain_words() {
    assert!(
        classify_info(Architecture::Bpf, reloc(elf::R_BPF_NONE, true))
            .unwrap()
            .is_none()
    );
    let abs64 = classify_info(Architecture::Bpf, reloc(R_BPF_64_ABS64, true))
        .unwrap()
        .unwrap();
    assert_eq!(abs64.width(), 8);
    let abs32 = classify_info(Architecture::Bpf, reloc(R_BPF_64_ABS32, true))
        .unwrap()
        .unwrap();
    assert_eq!(abs32.width(), 4);
    let nodyld = classify_info(Architecture::Bpf, reloc(R_BPF_64_NODYLD32, true))
        .unwrap()
        .unwrap();
    assert_eq!(nodyld.width(), 4);
}

#[test]
fn arm_call_preserves_opcode_and_encodes_implicit_addend() {
    let r = reloc(elf::R_ARM_CALL, true);
    let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
    let mut bytes = 0xebff_fffeu32.to_le_bytes(); // BL with implicit A=-8
    apply_info(spec, r, &mut bytes, true, 0x400100, 0x400000, None, None).unwrap();
    assert_eq!(u32::from_le_bytes(bytes), 0xeb00_003e);
}

#[test]
fn arm_jump_out_of_range_does_not_mutate_opcode() {
    let r = reloc(elf::R_ARM_JUMP24, true);
    let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
    let mut bytes = 0xeaff_fffeu32.to_le_bytes();
    let before = bytes;
    assert_eq!(
        apply_info(spec, r, &mut bytes, true, 0x9000_0000, 0x400000, None, None,),
        Err(RelocationFailure::OutOfRange)
    );
    assert_eq!(bytes, before);
}

#[test]
fn arm_thumb_call_encodes_split_immediate_without_touching_opcode_bits() {
    let r = reloc(elf::R_ARM_THM_PC22, false);
    let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
    let mut bytes = [0x00, 0xf0, 0x00, 0xf8];
    apply_info(spec, r, &mut bytes, true, 0x400100, 0x400000, None, None).unwrap();
    assert_eq!(bytes, [0x00, 0xf0, 0x80, 0xf8]);
}

#[test]
fn arm_data_relocations_preserve_addends_and_prel31_flag_bit() {
    let rel32 = reloc(elf::R_ARM_REL32, true);
    let rel32_spec = classify_info(Architecture::Arm, rel32).unwrap().unwrap();
    let mut relative = (-4i32).to_le_bytes();
    apply_info(
        rel32_spec,
        rel32,
        &mut relative,
        true,
        0x400100,
        0x400000,
        None,
        None,
    )
    .unwrap();
    assert_eq!(i32::from_le_bytes(relative), 0xfc);

    let prel31 = reloc(elf::R_ARM_PREL31, true);
    let prel31_spec = classify_info(Architecture::Arm, prel31).unwrap().unwrap();
    let mut flagged = 0x8000_0004u32.to_le_bytes();
    apply_info(
        prel31_spec,
        prel31,
        &mut flagged,
        true,
        0x400100,
        0x400000,
        None,
        None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(flagged), 0x8000_0104);

    let mut out_of_range = 0x8000_0000u32.to_le_bytes();
    let before = out_of_range;
    assert_eq!(
        apply_info(
            prel31_spec,
            prel31,
            &mut out_of_range,
            true,
            0x8000_0000,
            0,
            None,
            None,
        ),
        Err(RelocationFailure::OutOfRange)
    );
    assert_eq!(out_of_range, before);
}

#[test]
fn arm_calls_convert_between_bl_and_blx_for_typed_targets() {
    let r = reloc(elf::R_ARM_CALL, false);
    let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();

    let mut to_thumb = 0xeb00_0000u32.to_le_bytes();
    apply_info(
        spec,
        r,
        &mut to_thumb,
        true,
        0x400103,
        0x400000,
        Some(true),
        None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(to_thumb), 0xfb00_0040);

    let mut to_arm = 0xfa00_0000u32.to_le_bytes();
    apply_info(
        spec,
        r,
        &mut to_arm,
        true,
        0x400100,
        0x400000,
        Some(false),
        None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(to_arm), 0xeb00_0040);
}

#[test]
fn thumb_call_converts_bl_to_blx_and_aligns_its_pc_base() {
    let r = reloc(elf::R_ARM_THM_PC22, false);
    let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
    let mut bytes = [0x00, 0xf0, 0x00, 0xf8];
    apply_info(
        spec,
        r,
        &mut bytes,
        true,
        0x400100,
        0x400002,
        Some(false),
        None,
    )
    .unwrap();
    assert_eq!(bytes, [0x00, 0xf0, 0x80, 0xe8]);
}

#[test]
fn cross_state_jumps_require_a_veneer_without_mutating_code() {
    let arm = reloc(elf::R_ARM_JUMP24, false);
    let arm_spec = classify_info(Architecture::Arm, arm).unwrap().unwrap();
    let mut arm_bytes = 0xea00_0000u32.to_le_bytes();
    let arm_before = arm_bytes;
    assert_eq!(
        apply_info(
            arm_spec,
            arm,
            &mut arm_bytes,
            true,
            0x400101,
            0x400000,
            Some(true),
            None,
        ),
        Err(RelocationFailure::RequiresVeneer)
    );
    assert_eq!(arm_bytes, arm_before);

    let thumb = reloc(elf::R_ARM_THM_JUMP24, false);
    let thumb_spec = classify_info(Architecture::Arm, thumb).unwrap().unwrap();
    let mut thumb_bytes = [0x00, 0xf0, 0x00, 0xb8];
    let thumb_before = thumb_bytes;
    assert_eq!(
        apply_info(
            thumb_spec,
            thumb,
            &mut thumb_bytes,
            true,
            0x400100,
            0x400000,
            Some(false),
            None,
        ),
        Err(RelocationFailure::RequiresVeneer)
    );
    assert_eq!(thumb_bytes, thumb_before);
}

#[test]
fn aarch64_call_and_page_pair_keep_opcode_register_bits() {
    let call = reloc(elf::R_AARCH64_CALL26, false);
    let call_spec = classify_info(Architecture::Aarch64, call).unwrap().unwrap();
    let mut branch = 0x9400_0000u32.to_le_bytes();
    apply_info(
        call_spec,
        call,
        &mut branch,
        true,
        0x401000,
        0x400000,
        None,
        None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(branch), 0x9400_0400);

    let adrp = reloc(elf::R_AARCH64_ADR_PREL_PG_HI21, false);
    let adrp_spec = classify_info(Architecture::Aarch64, adrp).unwrap().unwrap();
    let mut page = 0x9000_0013u32.to_le_bytes();
    apply_info(
        adrp_spec, adrp, &mut page, true, 0x412345, 0x400004, None, None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(page) & 0x1f, 0x13);
    assert_eq!(u32::from_le_bytes(page) & 0x9f00_0000, 0x9000_0000);
}

#[test]
fn aarch64_instructions_stay_little_endian_in_a_big_endian_object() {
    // `b fib` in an aarch64_be object: data is big-endian, A64 code is not.
    let jump = reloc(elf::R_AARCH64_JUMP26, false);
    let spec = classify_info(Architecture::Aarch64, jump).unwrap().unwrap();
    let mut branch = 0x1400_0000u32.to_le_bytes();
    apply_info(
        spec,
        jump,
        &mut branch,
        false,
        0x400164,
        0x400160,
        None,
        None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(branch), 0x1400_0001);
    let data = generic_reloc(
        RelocationKind::Absolute,
        RelocationEncoding::Generic,
        64,
        0,
        false,
    );
    let spec = classify_info(Architecture::Aarch64, data).unwrap().unwrap();
    let mut word = [0; 8];
    apply_info(spec, data, &mut word, false, 0x400164, 0, None, None).unwrap();
    assert_eq!(u64::from_be_bytes(word), 0x400164);
}

#[test]
fn aarch64_call_checks_alignment_and_range() {
    let r = reloc(elf::R_AARCH64_CALL26, false);
    let spec = classify_info(Architecture::Aarch64, r).unwrap().unwrap();
    let mut bytes = 0x9400_0000u32.to_le_bytes();
    assert_eq!(
        apply_info(spec, r, &mut bytes, true, 0x400002, 0x400000, None, None,),
        Err(RelocationFailure::Misaligned)
    );
    assert_eq!(
        apply_info(spec, r, &mut bytes, true, 0x4000_0000, 0x400000, None, None,),
        Err(RelocationFailure::OutOfRange)
    );
}

#[test]
fn aarch64_jump_unchecked_page_and_every_low12_scale_apply() {
    let jump = reloc(elf::R_AARCH64_JUMP26, false);
    let jump_spec = classify_info(Architecture::Aarch64, jump).unwrap().unwrap();
    assert!(!jump_spec.is_call());
    let mut branch = 0x1400_0000u32.to_le_bytes();
    apply_info(
        jump_spec,
        jump,
        &mut branch,
        true,
        0x400100,
        0x400000,
        None,
        None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(branch), 0x1400_0040);

    let checked = reloc(elf::R_AARCH64_ADR_PREL_PG_HI21, false);
    let checked_spec = classify_info(Architecture::Aarch64, checked)
        .unwrap()
        .unwrap();
    let unchecked = reloc(elf::R_AARCH64_ADR_PREL_PG_HI21_NC, false);
    let unchecked_spec = classify_info(Architecture::Aarch64, unchecked)
        .unwrap()
        .unwrap();
    let mut checked_page = 0x9000_0007u32.to_le_bytes();
    assert_eq!(
        apply_info(
            checked_spec,
            checked,
            &mut checked_page,
            true,
            0x1_0000_0000,
            0,
            None,
            None,
        ),
        Err(RelocationFailure::OutOfRange)
    );
    let mut unchecked_page = 0x9000_0007u32.to_le_bytes();
    apply_info(
        unchecked_spec,
        unchecked,
        &mut unchecked_page,
        true,
        0x1_0000_0000,
        0,
        None,
        None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(unchecked_page), 0x9080_0007);

    for (r_type, scale, opcode) in [
        (elf::R_AARCH64_ADD_ABS_LO12_NC, 0, 0x9100_0083u32),
        (elf::R_AARCH64_LDST8_ABS_LO12_NC, 0, 0x3940_0083),
        (elf::R_AARCH64_LDST16_ABS_LO12_NC, 1, 0x7940_0083),
        (elf::R_AARCH64_LDST32_ABS_LO12_NC, 2, 0xb940_0083),
        (elf::R_AARCH64_LDST64_ABS_LO12_NC, 3, 0xf940_0083),
        (elf::R_AARCH64_LDST128_ABS_LO12_NC, 4, 0x3dc0_0083),
    ] {
        let info = reloc(r_type, false);
        let spec = classify_info(Architecture::Aarch64, info).unwrap().unwrap();
        // Symbols whose page offset is identical but whose page differs:
        // the encoded immediate must depend only on the low 12 bits.
        for symbol in [0x7f0u64, 0x1040, 0x2ff8, 0x3010, 0x40_4040, 0x40_8040] {
            if symbol & ((1u64 << scale) - 1) != 0 {
                continue;
            }
            let mut field = opcode.to_le_bytes();
            apply_info(spec, info, &mut field, true, symbol, 0, None, None).unwrap();
            let relocated = u32::from_le_bytes(field);
            assert_eq!(relocated & !(0xfff << 10), opcode & !(0xfff << 10));
            assert_eq!(
                (relocated >> 10) & 0xfff,
                ((symbol & 0xfff) >> scale) as u32,
                "r_type={r_type} symbol={symbol:#x}"
            );
        }

        if scale != 0 {
            let mut misaligned = opcode.to_le_bytes();
            let before = misaligned;
            assert_eq!(
                apply_info(
                    spec,
                    info,
                    &mut misaligned,
                    true,
                    (1u64 << scale) - 1,
                    0,
                    None,
                    None,
                ),
                Err(RelocationFailure::Misaligned),
                "r_type={r_type}"
            );
            assert_eq!(misaligned, before);
        }
    }
}

#[test]
fn aarch64_low12_rejects_instructions_outside_its_encoding() {
    for (r_type, opcode) in [
        (elf::R_AARCH64_ADD_ABS_LO12_NC, 0xb940_0083u32), // LDR, not ADD
        (elf::R_AARCH64_LDST32_ABS_LO12_NC, 0x9100_0083), // ADD, not LDR
        (elf::R_AARCH64_LDST32_ABS_LO12_NC, 0xf940_0083), // 64-bit LDR at scale 2
        (elf::R_AARCH64_LDST64_ABS_LO12_NC, 0x3dc0_0083), // 128-bit LDR at scale 3
    ] {
        let info = reloc(r_type, false);
        let spec = classify_info(Architecture::Aarch64, info).unwrap().unwrap();
        let mut field = opcode.to_le_bytes();
        let before = field;
        assert_eq!(
            apply_info(spec, info, &mut field, true, 0x40, 0, None, None),
            Err(RelocationFailure::InvalidEncoding),
            "r_type={r_type} opcode={opcode:#x}"
        );
        assert_eq!(field, before);
    }
}

#[test]
fn arm_blx_with_the_halfword_bit_set_is_not_a_conditional_bl() {
    let r = reloc(elf::R_ARM_CALL, true);
    let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
    let mut bytes = 0xfbff_fffeu32.to_le_bytes(); // BLX with H=1, addend -6
    apply_info(
        spec,
        r,
        &mut bytes,
        true,
        0x400101,
        0x400000,
        Some(true),
        None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(bytes), 0xfb00_003e);
}

#[test]
fn thumb_branch_forms_are_validated_before_the_immediate_is_rewritten() {
    let call = reloc(elf::R_ARM_THM_PC22, false);
    let call_spec = classify_info(Architecture::Arm, call).unwrap().unwrap();
    let mut conditional = [0x00, 0xf0, 0x00, 0x80]; // B<c>.W (T3)
    let before = conditional;
    assert_eq!(
        apply_info(
            call_spec,
            call,
            &mut conditional,
            true,
            0x400100,
            0x400000,
            None,
            None,
        ),
        Err(RelocationFailure::InvalidEncoding)
    );
    assert_eq!(conditional, before);

    let jump = reloc(elf::R_ARM_THM_JUMP24, false);
    let jump_spec = classify_info(Architecture::Arm, jump).unwrap().unwrap();
    let mut as_call = [0x00, 0xf0, 0x00, 0xf8]; // BL (T1)
    let before = as_call;
    assert_eq!(
        apply_info(
            jump_spec,
            jump,
            &mut as_call,
            true,
            0x400100,
            0x400000,
            None,
            None,
        ),
        Err(RelocationFailure::InvalidEncoding)
    );
    assert_eq!(as_call, before);
}

#[test]
fn thumb_blx_reports_a_misaligned_displacement_instead_of_rounding_it() {
    let r = reloc(elf::R_ARM_THM_PC22, false);
    let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
    let mut bytes = [0x00, 0xf0, 0x00, 0xf8];
    let before = bytes;
    assert_eq!(
        apply_info(
            spec,
            r,
            &mut bytes,
            true,
            0x400100,
            0x400001,
            Some(false),
            None,
        ),
        Err(RelocationFailure::Misaligned)
    );
    assert_eq!(bytes, before);
}

#[test]
fn arm_rel32_truncates_instead_of_reporting_an_overflow() {
    let r = reloc(elf::R_ARM_REL32, true);
    let spec = classify_info(Architecture::Arm, r).unwrap().unwrap();
    let mut field = 0u32.to_le_bytes();
    apply_info(spec, r, &mut field, true, 0x9000_0000, 0x100, None, None).unwrap();
    assert_eq!(u32::from_le_bytes(field), 0x8fff_ff00);
}

#[test]
fn ppc64_rel24_is_big_endian_and_preserves_link_bit() {
    let r = reloc(elf::R_PPC64_REL24, false);
    let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
    let mut bytes = 0x4800_0001u32.to_be_bytes();
    apply_info(
        spec,
        r,
        &mut bytes,
        false,
        0x400100,
        0x400000,
        None,
        Some(0x408000),
    )
    .unwrap();
    assert_eq!(u32::from_be_bytes(bytes), 0x4800_0101);
}

#[test]
fn ppc64_rel24_callness_comes_from_the_link_bit() {
    let r = reloc(elf::R_PPC64_REL24, false);
    let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
    assert!(
        !spec
            .refine_call_from_field(&0x4800_0000u32.to_be_bytes(), false)
            .is_call()
    );
    assert!(
        spec.refine_call_from_field(&0x4800_0001u32.to_be_bytes(), false)
            .is_call()
    );
}

#[test]
fn ppc32_calls_encode_their_target_and_pltrel24_drops_its_got2_addend() {
    for (r_type, addend) in [
        (elf::R_PPC_REL24, 0),
        (elf::R_PPC_LOCAL24PC, 0),
        (elf::R_PPC_PLTREL24, 0x8000),
    ] {
        let r = RelocationInfo {
            addend,
            ..reloc(r_type, false)
        };
        let spec = classify_info(Architecture::PowerPc, r).unwrap().unwrap();
        assert!(spec.targets_code());
        let mut bytes = 0x4800_0001u32.to_be_bytes();
        apply_info(spec, r, &mut bytes, false, 0x400100, 0x400040, None, None).unwrap();
        assert_eq!(u32::from_be_bytes(bytes), 0x4800_00c1, "type {r_type}");
    }
    // A `bla` is no `REL24` field.
    let r = reloc(elf::R_PPC_REL24, false);
    let spec = classify_info(Architecture::PowerPc, r).unwrap().unwrap();
    let mut bytes = 0x4800_0003u32.to_be_bytes();
    assert_eq!(
        apply_info(spec, r, &mut bytes, false, 0x400100, 0x400040, None, None),
        Err(RelocationFailure::InvalidEncoding)
    );
}

#[test]
fn ppc_conditional_and_absolute_branches_keep_their_other_bits() {
    let r = reloc(elf::R_PPC_REL14, false);
    let spec = classify_info(Architecture::PowerPc, r).unwrap().unwrap();
    let mut bytes = 0x4082_0000u32.to_be_bytes(); // bne
    apply_info(spec, r, &mut bytes, false, 0x400020, 0x400000, None, None).unwrap();
    assert_eq!(u32::from_be_bytes(bytes), 0x4082_0020);
    let r = reloc(elf::R_PPC_ADDR24, false);
    let spec = classify_info(Architecture::PowerPc, r).unwrap().unwrap();
    let mut bytes = 0x4800_0003u32.to_be_bytes(); // bla
    apply_info(spec, r, &mut bytes, false, 0x1000, 0x400000, None, None).unwrap();
    assert_eq!(u32::from_be_bytes(bytes), 0x4800_1003);
}

#[test]
fn ppc_address_halves_are_absolute_or_pc_relative() {
    for (arch, r_type, symbol, place, expected) in [
        (
            Architecture::PowerPc,
            elf::R_PPC_ADDR16_HA,
            0x41_8000u64,
            0u64,
            0x0042u16,
        ),
        (
            Architecture::PowerPc,
            elf::R_PPC_ADDR16_HI,
            0x41_8000,
            0,
            0x0041,
        ),
        (
            Architecture::PowerPc,
            elf::R_PPC_ADDR16_LO,
            0x41_8000,
            0,
            0x8000,
        ),
        (Architecture::PowerPc, elf::R_PPC_ADDR16, 0xfffe, 0, 0xfffe),
        (
            Architecture::PowerPc,
            elf::R_PPC_REL16_HA,
            0x40_9000,
            0x40_0000,
            0x0001,
        ),
        (
            Architecture::PowerPc,
            elf::R_PPC_REL16_LO,
            0x40_9000,
            0x40_0000,
            0x9000,
        ),
        (
            Architecture::PowerPc64,
            elf::R_PPC64_ADDR16_HIGHESTA,
            0x1234_5678_9abc_def0,
            0,
            0x1234,
        ),
        (
            Architecture::PowerPc64,
            elf::R_PPC64_ADDR16_HIGHERA,
            0x1234_5678_9abc_def0,
            0,
            0x5679,
        ),
    ] {
        let r = reloc(r_type, false);
        let spec = classify_info(arch, r).unwrap().unwrap();
        assert_eq!(spec.width(), 2);
        let mut bytes = [0u8; 2];
        apply_info(spec, r, &mut bytes, false, symbol, place, None, None).unwrap();
        assert_eq!(u16::from_be_bytes(bytes), expected, "type {r_type}");
    }
    let r = reloc(elf::R_PPC_ADDR16, false);
    let spec = classify_info(Architecture::PowerPc, r).unwrap().unwrap();
    assert_eq!(
        apply_info(spec, r, &mut [0u8; 2], false, 0x1_0000, 0, None, None),
        Err(RelocationFailure::OutOfRange)
    );
}

#[test]
fn ppc_data_words_are_absolute_or_pc_relative() {
    for (arch, r_type, width, place, expected) in [
        (
            Architecture::PowerPc,
            elf::R_PPC_REL32,
            4,
            0x40_0010u64,
            0x30u64,
        ),
        (Architecture::PowerPc, elf::R_PPC_UADDR32, 4, 0, 0x40_0040),
        (
            Architecture::PowerPc64,
            elf::R_PPC64_REL64,
            8,
            0x40_0010,
            0x30,
        ),
        (
            Architecture::PowerPc64,
            elf::R_PPC64_UADDR64,
            8,
            0,
            0x40_0040,
        ),
    ] {
        let r = reloc(r_type, false);
        let spec = classify_info(arch, r).unwrap().unwrap();
        assert_eq!(spec.width(), width);
        let mut bytes = vec![0u8; width];
        apply_info(spec, r, &mut bytes, false, 0x40_0040, place, None, None).unwrap();
        assert_eq!(read_integer(&bytes, false), expected, "type {r_type}");
    }
}

#[test]
fn ppc64_toc_split_fields_are_big_endian() {
    let r = reloc(elf::R_PPC64_TOC16_HA, false);
    let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
    let mut bytes = [0xaa, 0xaa];
    apply_info(
        spec,
        r,
        &mut bytes,
        false,
        0x40_0000,
        0,
        None,
        Some(0x40_8000),
    )
    .unwrap();
    assert_eq!(bytes, [0x00, 0x00]);

    let r = reloc(elf::R_PPC64_TOC16_LO_DS, false);
    let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
    let mut bytes = [0x00, 0x02];
    apply_info(
        spec,
        r,
        &mut bytes,
        false,
        0x40_0000,
        0,
        None,
        Some(0x40_8000),
    )
    .unwrap();
    assert_eq!(bytes, [0x80, 0x02]);
}

#[test]
fn ppc64_rel24_and_checked_toc_ds_reject_out_of_range_values() {
    let r = reloc(elf::R_PPC64_REL24, false);
    let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
    let mut branch = 0x4800_0001u32.to_be_bytes();
    assert_eq!(
        apply_info(
            spec,
            r,
            &mut branch,
            false,
            0x8000_0000,
            0x400000,
            None,
            None,
        ),
        Err(RelocationFailure::OutOfRange)
    );

    let r = reloc(elf::R_PPC64_TOC16_DS, false);
    let spec = classify_info(Architecture::PowerPc64, r).unwrap().unwrap();
    let mut field = [0x00, 0x02];
    assert_eq!(
        apply_info(
            spec,
            r,
            &mut field,
            false,
            0x41_0000,
            0,
            None,
            Some(0x40_8000),
        ),
        Err(RelocationFailure::OutOfRange)
    );
}

#[test]
fn ppc64_toc_family_covers_every_form_and_missing_toc() {
    let toc = 0x40_0000;
    for (r_type, symbol, initial, expected) in [
        (elf::R_PPC64_TOC16, toc + 0x1234, 0u16, 0x1234u16),
        (elf::R_PPC64_TOC16_LO, toc + 0x1234_5678, 0, 0x5678),
        (elf::R_PPC64_TOC16_HI, toc + 0x1234_5678, 0, 0x1234),
        (elf::R_PPC64_TOC16_HA, toc + 0x1234_8000, 0, 0x1235),
        (elf::R_PPC64_TOC16_DS, toc - 0x100, 2, 0xff02),
        (elf::R_PPC64_TOC16_LO_DS, toc + 0x1234_5678, 2, 0x567a),
    ] {
        let info = reloc(r_type, false);
        let spec = classify_info(Architecture::PowerPc64, info)
            .unwrap()
            .unwrap();
        let mut field = initial.to_be_bytes();
        apply_info(spec, info, &mut field, false, symbol, 0, None, Some(toc)).unwrap();
        assert_eq!(u16::from_be_bytes(field), expected, "r_type={r_type}");
    }

    let toc64 = reloc(elf::R_PPC64_TOC, false);
    let toc64_spec = classify_info(Architecture::PowerPc64, toc64)
        .unwrap()
        .unwrap();
    assert!(!toc64_spec.requires_symbol());
    let mut field = [0; 8];
    apply_info(
        toc64_spec,
        toc64,
        &mut field,
        false,
        0,
        0,
        None,
        Some(0x40_8000),
    )
    .unwrap();
    assert_eq!(u64::from_be_bytes(field), 0x40_8000);

    let toc16 = reloc(elf::R_PPC64_TOC16, false);
    let toc16_spec = classify_info(Architecture::PowerPc64, toc16)
        .unwrap()
        .unwrap();
    let mut short = [0; 2];
    assert_eq!(
        apply_info(toc16_spec, toc16, &mut short, false, toc, 0, None, None),
        Err(RelocationFailure::MissingToc)
    );
    let mut wide = [0; 8];
    assert_eq!(
        apply_info(toc64_spec, toc64, &mut wide, false, 0, 0, None, None),
        Err(RelocationFailure::MissingToc)
    );

    let malformed = reloc(elf::R_PPC64_TOC16_LO, true);
    let malformed_spec = classify_info(Architecture::PowerPc64, malformed)
        .unwrap()
        .unwrap();
    assert_eq!(
        apply_info(
            malformed_spec,
            malformed,
            &mut short,
            false,
            toc,
            0,
            None,
            Some(toc),
        ),
        Err(RelocationFailure::InvalidEncoding)
    );
}

#[test]
fn s390x_dbl_relocations_count_halfwords() {
    // `larl %r2, .rodata` at 0x4000da: the field is at +2 and the addend 2.
    let info = generic_reloc(
        RelocationKind::Relative,
        RelocationEncoding::S390xDbl,
        32,
        2,
        false,
    );
    let spec = classify_info(Architecture::S390x, info).unwrap().unwrap();
    let mut field = [0; 4];
    apply_info(
        spec, info, &mut field, false, 0x40_0700, 0x40_00dc, None, None,
    )
    .unwrap();
    assert_eq!(field, 0x313u32.to_be_bytes());
    assert_eq!(0x40_00da + 2 * 0x313, 0x40_0700);
    assert_eq!(
        apply_info(
            spec, info, &mut field, false, 0x40_0701, 0x40_00dc, None, None
        ),
        Err(RelocationFailure::Misaligned)
    );
    let call = generic_reloc(
        RelocationKind::PltRelative,
        RelocationEncoding::S390xDbl,
        32,
        2,
        false,
    );
    let spec = classify_info(Architecture::S390x, call).unwrap().unwrap();
    apply_info(
        spec, call, &mut field, false, 0x40_0150, 0x40_010e, None, None,
    )
    .unwrap();
    assert_eq!(
        0x40_010c + 2 * i64::from(i32::from_be_bytes(field)),
        0x40_0150
    );
}

#[test]
fn generic_relocations_cover_kinds_endianness_and_bounds() {
    for (bits, little_endian, symbol, expected) in [
        (8, true, 0x12, vec![0x12]),
        (16, false, 0x1234, vec![0x12, 0x34]),
        (32, true, 0x1234_5678, vec![0x78, 0x56, 0x34, 0x12]),
        (
            64,
            false,
            0x0123_4567_89ab_cdef,
            vec![0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef],
        ),
    ] {
        let info = generic_reloc(
            RelocationKind::Absolute,
            RelocationEncoding::Generic,
            bits,
            0,
            false,
        );
        let spec = classify_info(Architecture::X86_64, info).unwrap().unwrap();
        let mut field = vec![0; spec.width()];
        apply_info(spec, info, &mut field, little_endian, symbol, 0, None, None).unwrap();
        assert_eq!(field, expected, "bits={bits}");
    }

    for kind in [RelocationKind::Relative, RelocationKind::PltRelative] {
        let info = generic_reloc(kind, RelocationEncoding::Generic, 16, 0, false);
        let spec = classify_info(Architecture::X86_64, info).unwrap().unwrap();
        assert_eq!(spec.is_call(), kind == RelocationKind::PltRelative);
        let mut field = [0; 2];
        apply_info(spec, info, &mut field, true, 0x1010, 0x1000, None, None).unwrap();
        assert_eq!(i16::from_le_bytes(field), 0x10);
    }

    let image = generic_reloc(
        RelocationKind::ImageOffset,
        RelocationEncoding::Generic,
        32,
        0,
        false,
    );
    let image_spec = classify_info(Architecture::X86_64, image).unwrap().unwrap();
    let mut image_field = [0; 4];
    apply_info(
        image_spec,
        image,
        &mut image_field,
        true,
        super::super::reloc_object::RELOC_BASE + 0x34,
        0,
        None,
        None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(image_field), 0x34);

    let signed = generic_reloc(
        RelocationKind::Absolute,
        RelocationEncoding::X86Signed,
        8,
        -1,
        false,
    );
    let signed_spec = classify_info(Architecture::X86_64, signed)
        .unwrap()
        .unwrap();
    let mut signed_field = [0];
    apply_info(
        signed_spec,
        signed,
        &mut signed_field,
        true,
        0,
        0,
        None,
        None,
    )
    .unwrap();
    assert_eq!(signed_field, [0xff]);

    let with_addends = generic_reloc(
        RelocationKind::Absolute,
        RelocationEncoding::Generic,
        16,
        2,
        true,
    );
    let with_addends_spec = classify_info(Architecture::X86_64, with_addends)
        .unwrap()
        .unwrap();
    let mut with_addends_field = 3u16.to_le_bytes();
    apply_info(
        with_addends_spec,
        with_addends,
        &mut with_addends_field,
        true,
        5,
        0,
        None,
        None,
    )
    .unwrap();
    assert_eq!(u16::from_le_bytes(with_addends_field), 10);

    let unsigned = generic_reloc(
        RelocationKind::Absolute,
        RelocationEncoding::Generic,
        8,
        0,
        false,
    );
    let unsigned_spec = classify_info(Architecture::X86_64, unsigned)
        .unwrap()
        .unwrap();
    let mut overflow = [0x5a];
    assert_eq!(
        apply_info(
            unsigned_spec,
            unsigned,
            &mut overflow,
            true,
            0x100,
            0,
            None,
            None
        ),
        Err(RelocationFailure::OutOfRange)
    );
    assert_eq!(overflow, [0x5a]);
}

#[test]
fn invalid_instruction_encodings_do_not_mutate_fields() {
    for (arch, r_type, little_endian, mut field) in [
        (Architecture::Arm, elf::R_ARM_CALL, true, vec![0; 4]),
        (Architecture::Arm, elf::R_ARM_THM_PC22, true, vec![0; 4]),
        (
            Architecture::Aarch64,
            elf::R_AARCH64_CALL26,
            true,
            vec![0; 4],
        ),
        (
            Architecture::Aarch64,
            elf::R_AARCH64_ADR_PREL_PG_HI21,
            true,
            vec![0; 4],
        ),
        (
            Architecture::PowerPc64,
            elf::R_PPC64_REL24,
            false,
            vec![0; 4],
        ),
    ] {
        let info = reloc(r_type, false);
        let spec = classify_info(arch, info).unwrap().unwrap();
        let before = field.clone();
        assert_eq!(
            apply_info(spec, info, &mut field, little_endian, 0, 0, None, None),
            Err(RelocationFailure::InvalidEncoding),
            "arch={arch:?} r_type={r_type}"
        );
        assert_eq!(field, before);
    }
}
