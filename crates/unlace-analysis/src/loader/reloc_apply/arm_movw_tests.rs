use super::*;

fn patch(
    r_type: u32,
    bytes: [u8; 4],
    le: bool,
    symbol: u64,
    place: u64,
    thumb: Option<bool>,
) -> Result<[u8; 4], RelocationFailure> {
    let info = RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend: 0,
        implicit_addend: true,
        r_type: Some(r_type),
    };
    let spec = classify_info(Architecture::Arm, info)?.expect("not a no-op");
    let mut field = bytes;
    apply_info(spec, info, &mut field, le, symbol, place, thumb, None)?;
    Ok(field)
}

// Words as ld.lld writes them for the sweep's zig thumb, arm and armeb objects.
#[test]
fn movw_movt_pairs_match_the_linker() {
    let g = 0x2_0348;
    assert_eq!(
        patch(47, [0x40, 0xf2, 0x00, 0x01], true, g, 0x1_002a, None),
        Ok([0x40, 0xf2, 0x48, 0x31])
    );
    assert_eq!(
        patch(48, [0xc0, 0xf2, 0x00, 0x01], true, g, 0x1_002e, None),
        Ok([0xc0, 0xf2, 0x02, 0x01])
    );
    let h = 0x2_049c;
    assert_eq!(
        patch(43, [0x00, 0x00, 0x00, 0x93], true, h, 0x1_0044, None),
        Ok([0x9c, 0x04, 0x00, 0x93])
    );
    assert_eq!(
        patch(44, [0x00, 0x00, 0x40, 0x93], true, h, 0x1_0048, None),
        Ok([0x02, 0x00, 0x40, 0x93])
    );
    assert_eq!(
        patch(43, [0x93, 0x00, 0x00, 0x00], false, h, 0x1_0044, None),
        Ok([0x93, 0x00, 0x04, 0x9c])
    );
    assert_eq!(
        patch(44, [0x93, 0x40, 0x00, 0x00], false, h, 0x1_0048, None),
        Ok([0x93, 0x40, 0x00, 0x02])
    );
}

#[test]
fn movw_takes_the_thumb_bit_the_rel_addend_and_the_pc() {
    // `movw r0, #:lower16:f+4` against a Thumb function: (S + A) | 1.
    assert_eq!(
        patch(
            43,
            0xe300_0004u32.to_le_bytes(),
            true,
            0x1_2340,
            0,
            Some(true)
        ),
        Ok(0xe302_0345u32.to_le_bytes())
    );
    // `movt` keeps the high half of S + A, carry included, and ignores T.
    assert_eq!(
        patch(
            44,
            0xe340_0fffu32.to_le_bytes(),
            true,
            0x1_f001,
            0,
            Some(true)
        ),
        Ok(0xe340_0002u32.to_le_bytes())
    );
    // MOVW_PREL_NC: (S + A) - P.
    assert_eq!(
        patch(
            45,
            0xe300_0000u32.to_le_bytes(),
            true,
            0x1_2340,
            0x1_0000,
            None
        ),
        Ok(0xe302_0340u32.to_le_bytes())
    );
    assert_eq!(
        patch(47, 0xe300_0000u32.to_le_bytes(), true, 0x1_2340, 0, None),
        Err(RelocationFailure::InvalidEncoding)
    );
}
