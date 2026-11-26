use super::*;

fn patch(r_type: u32, addend: i64, insn: u32, symbol: u64) -> Result<u32, RelocationFailure> {
    let info = RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend,
        implicit_addend: false,
        r_type: Some(r_type),
    };
    let spec = classify_lanai(info)?.expect("not a no-op");
    let mut field = insn.to_be_bytes();
    apply_info(spec, info, &mut field, false, symbol, 0, None, None)?;
    Ok(u32::from_be_bytes(field))
}

#[test]
fn branches_halves_and_21_bit_addresses_are_absolute() {
    // `bt .L0+0x18` with .text at 0x400000.
    assert_eq!(
        patch(R_LANAI_25, 0x18, 0xe000_0000, 0x40_0000),
        Ok(0xe040_0018)
    );
    assert_eq!(
        patch(R_LANAI_25, 2, 0xe000_0000, 0x40_0000),
        Err(RelocationFailure::Misaligned)
    );
    assert_eq!(
        patch(R_LANAI_25, 0, 0xe000_0000, 0x200_0000),
        Err(RelocationFailure::OutOfRange)
    );
    assert_eq!(
        patch(R_LANAI_25, 0, 0x0000_0000, 0x40_0000),
        Err(RelocationFailure::InvalidEncoding)
    );
    // `mov hi(g_table), %r9`; `or %r9, lo(g_table), %r9`.
    assert_eq!(
        patch(R_LANAI_HI16, 0, 0x0481_0000, 0x40_0710),
        Ok(0x0481_0040)
    );
    assert_eq!(
        patch(R_LANAI_LO16, 0, 0x5524_0000, 0x40_0710),
        Ok(0x5524_0710)
    );
    assert_eq!(patch(R_LANAI_21, 4, 0xf480_0000, 0x1_2340), Ok(0xf484_2344));
    assert_eq!(patch(R_LANAI_32, 8, 0, 0x40_0700), Ok(0x40_0708));
    assert!(
        classify_lanai(RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend: 0,
            implicit_addend: false,
            r_type: Some(0),
        })
        .unwrap()
        .is_none()
    );
}
