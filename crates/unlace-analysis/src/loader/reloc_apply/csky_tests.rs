use super::*;

fn bsr(bytes: [u8; 4], le: bool, symbol: u64, place: u64) -> Result<[u8; 4], RelocationFailure> {
    let info = RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend: 0,
        implicit_addend: false,
        r_type: Some(elf::R_CKCORE_PCREL_IMM26BY2),
    };
    let spec = classify_info(Architecture::Csky, info)?.expect("not a no-op");
    assert!(spec.is_call());
    let mut field = bytes;
    apply_info(spec, info, &mut field, le, symbol, place, None, None)?;
    Ok(field)
}

// Words as GNU ld 2.45 writes them for csky-elf-gcc 15.3 objects.
#[test]
fn bsr32_matches_the_linker_and_is_range_checked() {
    assert_eq!(
        bsr([0x00, 0xe0, 0x00, 0x00], true, 0x1_0568, 0x1_0310),
        Ok([0x00, 0xe0, 0x2c, 0x01])
    );
    assert_eq!(
        bsr([0x00, 0xe0, 0x00, 0x00], true, 0x1_05d0, 0x1_031a),
        Ok([0x00, 0xe0, 0x5b, 0x01])
    );
    assert_eq!(
        bsr([0xe0, 0x00, 0x00, 0x00], false, 0x1_0310, 0x1_0568),
        Ok([0xe3, 0xff, 0xfe, 0xd4])
    );
    assert_eq!(
        bsr([0x00, 0xe0, 0x00, 0x00], true, 0x1_0569, 0x1_0310),
        Err(RelocationFailure::Misaligned)
    );
    assert_eq!(
        bsr([0x00, 0xe0, 0x00, 0x00], true, 0x400_0000, 0),
        Err(RelocationFailure::OutOfRange)
    );
    assert_eq!(
        bsr([0x00, 0xe8, 0x00, 0x00], true, 0x1_0568, 0x1_0310),
        Err(RelocationFailure::InvalidEncoding)
    );
}
