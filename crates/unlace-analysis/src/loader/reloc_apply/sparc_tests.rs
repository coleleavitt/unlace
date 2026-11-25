use super::*;

fn rela(r_type: u32, addend: i64) -> RelocationInfo {
    RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend,
        implicit_addend: false,
        r_type: Some(r_type),
    }
}

fn patch(
    r_type: u32,
    addend: i64,
    insn: u32,
    symbol: u64,
    place: u64,
) -> Result<u32, RelocationFailure> {
    let info = rela(r_type, addend);
    let spec = classify_info(Architecture::Sparc, info)?.expect("not a no-op");
    assert_eq!(spec.width(), 4);
    let mut field = insn.to_be_bytes();
    apply_info(spec, info, &mut field, false, symbol, place, None, None)?;
    Ok(u32::from_be_bytes(field))
}

#[test]
fn sparc_none_is_a_no_op_on_both_32_bit_machines() {
    for arch in [Architecture::Sparc, Architecture::Sparc32Plus] {
        assert!(
            classify_info(arch, rela(elf::R_SPARC_NONE, 0))
                .unwrap()
                .is_none()
        );
    }
}

#[test]
fn sparc_wdisp30_encodes_forward_backward_and_addend_displacements() {
    assert_eq!(
        patch(elf::R_SPARC_WDISP30, 0, 0x4000_0000, 0x40_0100, 0x40_0000),
        Ok(0x4000_0040)
    );
    assert_eq!(
        patch(elf::R_SPARC_WDISP30, 0, 0x4000_0000, 0x40_0000, 0x40_0010),
        Ok(0x7fff_fffc)
    );
    assert_eq!(
        patch(elf::R_SPARC_WDISP30, 8, 0x4000_0000, 0x40_0000, 0x40_0000),
        Ok(0x4000_0002)
    );
    assert_eq!(
        patch(elf::R_SPARC_WDISP30, 0, 0x4000_0000, 0x8000_0000, 0x40_0000),
        Ok(0x4000_0000 | (0x7fc0_0000u32 >> 2))
    );
}

#[test]
fn sparc_calls_wrap_displacements_in_the_32_bit_address_space() {
    for r_type in [elf::R_SPARC_WDISP30, elf::R_SPARC_WPLT30] {
        assert_eq!(
            patch(r_type, 0, 0x4000_0000, 0xf000_0000, 0x40_0004),
            Ok(0x7bef_ffff)
        );
        assert_eq!(
            patch(r_type, 0, 0x4000_0000, 0x40_0004, 0xf000_0000),
            Ok(0x4410_0001)
        );
        assert_eq!(
            patch(r_type, 8, 0x4000_0000, 0xffff_fffc, 0x40_0000),
            Ok(0x7ff0_0001)
        );
    }
}

#[test]
fn sparc_pc_relative_forms_subtract_the_place() {
    assert_eq!(
        patch(elf::R_SPARC_WPLT30, 0, 0x4000_0000, 0x40_0100, 0x40_0000),
        Ok(0x4000_0040)
    );
    assert_eq!(
        patch(elf::R_SPARC_DISP32, 4, 0, 0x40_0000, 0x40_0010),
        Ok(0xffff_fff4)
    );
    let (symbol, place) = (0x40_2000u64, 0x40_0008u64);
    let sethi = patch(elf::R_SPARC_PC22, 4, 0x0300_0000, symbol, place).unwrap();
    let or = patch(elf::R_SPARC_PC10, 8, 0x8210_6000, symbol, place + 4).unwrap();
    assert_eq!(
        ((sethi & 0x3f_ffff) << 10) | (or & 0x3ff),
        (symbol + 4 - place) as u32
    );
    let backward = patch(elf::R_SPARC_PC22, 0, 0x0300_0000, 0x40_0000, 0x40_1000).unwrap();
    assert_eq!(backward & 0x3f_ffff, 0x3f_fffc);
}

#[test]
fn sparc_wdisp30_is_a_code_target_and_rejects_bad_fields() {
    let spec = classify_info(Architecture::Sparc, rela(elf::R_SPARC_WDISP30, 0))
        .unwrap()
        .unwrap();
    assert!(spec.is_call() && spec.targets_code());
    assert_eq!(
        patch(elf::R_SPARC_WDISP30, 0, 0x0100_0000, 0x40_0100, 0x40_0000),
        Err(RelocationFailure::InvalidEncoding)
    );
    assert_eq!(
        patch(elf::R_SPARC_WDISP30, 2, 0x4000_0000, 0x40_0100, 0x40_0000),
        Err(RelocationFailure::Misaligned)
    );
    assert_eq!(
        patch(
            elf::R_SPARC_WDISP30,
            0,
            0x4000_0000,
            0x1_0040_0000,
            0x40_0000
        ),
        Err(RelocationFailure::OutOfRange)
    );
}

#[test]
fn sparc_hi22_lo10_pair_reassembles_the_address() {
    let symbol = 0x2000_2108u64;
    let sethi = patch(elf::R_SPARC_HI22, 4, 0x0300_0000, symbol, 0).unwrap();
    let or = patch(elf::R_SPARC_LO10, 4, 0x8210_6000, symbol, 0).unwrap();
    assert_eq!(sethi, 0x0300_0000 | ((symbol as u32 + 4) >> 10));
    assert_eq!(or, 0x8210_6000 | ((symbol as u32 + 4) & 0x3ff));
    assert_eq!(
        ((sethi & 0x3f_ffff) << 10) | (or & 0x3ff),
        symbol as u32 + 4
    );
}

#[test]
fn sparc_lo10_keeps_the_upper_simm13_bits_like_the_gnu_linker() {
    assert_eq!(
        patch(elf::R_SPARC_LO10, 0, 0xc200_7c00, 0x1234_5678, 0),
        Ok(0xc200_7e78)
    );
    assert_eq!(
        patch(elf::R_SPARC_LO10, -4, 0xc200_6000, 0x1000, 0),
        Ok(0xc200_63fc)
    );
}

#[test]
fn sparc_split_fields_reject_wrong_instructions_and_rel_addends() {
    assert_eq!(
        patch(elf::R_SPARC_HI22, 0, 0x8210_6000, 0x1000, 0),
        Err(RelocationFailure::InvalidEncoding)
    );
    assert_eq!(
        patch(elf::R_SPARC_LO10, 0, 0x0300_0000, 0x1000, 0),
        Err(RelocationFailure::InvalidEncoding)
    );
    assert_eq!(
        patch(elf::R_SPARC_LO10, 0, 0x8210_4001, 0x1000, 0),
        Err(RelocationFailure::InvalidEncoding)
    );
    for r_type in [elf::R_SPARC_HI22, elf::R_SPARC_LO10] {
        let mut info = rela(r_type, 0);
        info.implicit_addend = true;
        let spec = classify_info(Architecture::Sparc, info).unwrap().unwrap();
        let before = if r_type == elf::R_SPARC_HI22 {
            0x0300_0000u32
        } else {
            0x8210_6000
        };
        let mut field = before.to_be_bytes();
        assert_eq!(
            apply_info(spec, info, &mut field, false, 0x1000, 0, None, None),
            Err(RelocationFailure::InvalidEncoding)
        );
        assert_eq!(u32::from_be_bytes(field), before);
    }
}

fn patch64(
    r_type: u32,
    addend: i64,
    insn: u32,
    symbol: u64,
    place: u64,
) -> Result<u32, RelocationFailure> {
    let info = rela(r_type, addend);
    let spec = classify_info(Architecture::Sparc64, info)?.expect("not a no-op");
    let mut field = insn.to_be_bytes();
    apply_info(spec, info, &mut field, false, symbol, place, None, None)?;
    Ok(u32::from_be_bytes(field))
}

#[test]
fn sparc64_medlow_44_bit_address_triple_rebuilds_the_symbol() {
    // `sethi %h44(x),%i0; or %i0,%m44(x),%i0; sllx %i0,12,%i0; ld [%i0+%l44(x)]`
    let x = 0x0123_4567_8abcu64;
    let h = patch64(elf::R_SPARC_H44, 0, 0x3100_0000, x, 0).unwrap();
    let m = patch64(elf::R_SPARC_M44, 0, 0xb016_2000, x, 0).unwrap();
    let l = patch64(elf::R_SPARC_L44, 0, 0xc506_2000, x, 0).unwrap();
    let rebuilt =
        ((u64::from(h & 0x3f_ffff) << 10 | u64::from(m & 0x3ff)) << 12) + u64::from(l & 0xfff);
    assert_eq!(rebuilt, x);
    assert_eq!(h & !0x3f_ffff, 0x3100_0000);
    assert_eq!(m & !0x3ff, 0xb016_2000);
    assert_eq!(l & !0xfff, 0xc506_2000);
}

#[test]
fn sparc64_calls_data_and_hh_hm_lm_forms_apply() {
    assert_eq!(
        patch64(elf::R_SPARC_WDISP30, 0, 0x4000_0000, 0x40_01f4, 0x40_0100),
        Ok(0x4000_003d)
    );
    assert_eq!(
        patch64(
            elf::R_SPARC_WDISP30,
            0,
            0x4000_0000,
            0x1_0000_0100,
            0x1_0000_0000
        ),
        Ok(0x4000_0040)
    );
    let x = 0xfedc_ba98_7654_3210u64;
    let hh = patch64(elf::R_SPARC_HH22, 0, 0x0300_0000, x, 0).unwrap();
    let hm = patch64(elf::R_SPARC_HM10, 0, 0x8210_6000, x, 0).unwrap();
    let lm = patch64(elf::R_SPARC_LM22, 0, 0x0500_0000, x, 0).unwrap();
    let lo = patch64(elf::R_SPARC_LO10, 0, 0x8410_a000, x, 0).unwrap();
    let high = u64::from(hh & 0x3f_ffff) << 10 | u64::from(hm & 0x3ff);
    let low = u64::from(lm & 0x3f_ffff) << 10 | u64::from(lo & 0x3ff);
    assert_eq!(high << 32 | low, x);
    assert!(
        classify_info(Architecture::Sparc64, rela(elf::R_SPARC_NONE, 0))
            .unwrap()
            .is_none()
    );
}

#[test]
fn sparc_v9_branch_displacements_are_range_checked() {
    // `ba` (Bicc), `ba,pt %xcc` (BPcc) and `brz %o0` (BPr), 0x40 bytes ahead.
    assert_eq!(
        patch64(elf::R_SPARC_WDISP22, 0, 0x1080_0000, 0x40_0140, 0x40_0100),
        Ok(0x1080_0010)
    );
    assert_eq!(
        patch64(elf::R_SPARC_WDISP19, 0, 0x1068_0000, 0x40_0140, 0x40_0100),
        Ok(0x1068_0010)
    );
    assert_eq!(
        patch64(elf::R_SPARC_WDISP16, 0, 0x02c2_0000, 0x40_0140, 0x40_0100),
        Ok(0x02c2_0010)
    );
    assert_eq!(
        patch64(
            elf::R_SPARC_WDISP16,
            0,
            0x02c2_0000,
            0x40_0100 - 0x2_0000,
            0x40_0100
        ),
        Ok(0x02c2_0000 | (2 << 20))
    );
    assert_eq!(
        patch64(elf::R_SPARC_WDISP19, 0, 0x1068_0000, 0x60_0000, 0x40_0100),
        Err(RelocationFailure::OutOfRange)
    );
    assert_eq!(
        patch64(elf::R_SPARC_WDISP22, 0, 0x4000_0000, 0x40_0140, 0x40_0100),
        Err(RelocationFailure::InvalidEncoding)
    );
}
