use super::*;

fn slot0(
    bytes: [u8; 3],
    symbol: u64,
    addend: i64,
    place: u64,
) -> Result<[u8; 3], RelocationFailure> {
    let info = RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend,
        implicit_addend: false,
        r_type: Some(elf::R_XTENSA_SLOT0_OP),
    };
    let spec = classify_info(Architecture::Xtensa, info)?.expect("not a no-op");
    assert_eq!(spec.width(), 3);
    let mut field = bytes;
    apply_info(spec, info, &mut field, true, symbol, place, None, None)?;
    Ok(field)
}

// Words as GNU ld 2.45 (--no-relax) writes them for xtensa-elf-gcc 15.3
// (XCHAL_HAVE_BE 0, windowed ABI, -mtext-section-literals) objects.
#[test]
fn every_operand_form_matches_the_linker() {
    // l32r a10, literal
    assert_eq!(
        slot0([0xa1, 0, 0], 0x1_0000, 0, 0x1_0018),
        Ok([0xa1, 0xfa, 0xff])
    );
    // call8 to an extern slot
    assert_eq!(slot0([0x25, 0, 0], 0, 0, 0x1_0035), Ok([0xa5, 0xfc, 0xef]));
    // j, beqi (BRI8), loop, bnez (BRI12), blt (RRI8), beqz.n
    assert_eq!(
        slot0([0x46, 0, 0], 0x1_0000, 196, 0x1_009f),
        Ok([0x46, 0x08, 0x00])
    );
    assert_eq!(
        slot0([0xa6, 0x12, 0], 0x1_0000, 156, 0x1_0081),
        Ok([0xa6, 0x12, 0x17])
    );
    assert_eq!(
        slot0([0x76, 0x88, 0], 0x1_0000, 153, 0x1_008d),
        Ok([0x76, 0x88, 0x08])
    );
    assert_eq!(
        slot0([0x56, 0x08, 0], 0x1_0000, 574, 0x1_0250),
        Ok([0x56, 0xa8, 0xfe])
    );
    assert_eq!(
        slot0([0x87, 0x29, 0], 0x1_0000, 206, 0x1_00bb),
        Ok([0x87, 0x29, 0x0f])
    );
    assert_eq!(
        slot0([0x8c, 0x08, 0xee], 0x1_0000, 136, 0x1_007d),
        Ok([0x8c, 0x78, 0xee])
    );
}

#[test]
fn a_data_word_adds_the_addend_left_in_place() {
    // A jump-table row `.text + 0` whose word holds the case offset 0x51, with
    // .text at 0x10010: GNU ld writes 0x10061.
    let info = RelocationInfo {
        kind: RelocationKind::Absolute,
        encoding: RelocationEncoding::Generic,
        size: 32,
        addend: 0,
        implicit_addend: false,
        r_type: Some(elf::R_XTENSA_32),
    };
    let spec = classify_info(Architecture::Xtensa, info).unwrap().unwrap();
    assert_eq!(spec.width(), 4);
    let mut field = 0x51u32.to_le_bytes();
    apply_info(spec, info, &mut field, true, 0x1_0010, 0x1_0090, None, None).unwrap();
    assert_eq!(field, 0x1_0061u32.to_le_bytes());
    let mut literal = [0; 4];
    let info = RelocationInfo { addend: 8, ..info };
    apply_info(spec, info, &mut literal, true, 0x2_0000, 0, None, None).unwrap();
    assert_eq!(literal, 0x2_0008u32.to_le_bytes());
}

#[test]
fn literals_behind_and_out_of_range_targets_are_refused() {
    assert_eq!(
        slot0([0xa1, 0, 0], 0x1_0040, 0, 0x1_0018),
        Err(RelocationFailure::OutOfRange)
    );
    assert_eq!(
        slot0([0xa1, 0, 0], 0x1_0002, 0, 0x1_0018),
        Err(RelocationFailure::Misaligned)
    );
    assert_eq!(
        slot0([0x87, 0x29, 0], 0x1_0200, 0, 0x1_0000),
        Err(RelocationFailure::OutOfRange)
    );
    assert_eq!(
        slot0([0x36, 0x41, 0], 0x1_0200, 0, 0x1_0000),
        Err(RelocationFailure::InvalidEncoding)
    );
}
