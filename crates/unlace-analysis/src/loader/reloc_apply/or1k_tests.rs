use super::*;

fn patch(r_type: u32, insn: u32, symbol: u64, place: u64) -> Result<u32, RelocationFailure> {
    let info = RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend: 0,
        implicit_addend: false,
        r_type: Some(r_type),
    };
    let spec = classify_or1k(info)?.expect("not a no-op");
    let mut field = insn.to_be_bytes();
    apply_info(spec, info, &mut field, false, symbol, place, None, None)?;
    Ok(u32::from_be_bytes(field))
}

// Words as GNU ld 2.45 writes them for or1k-elf-gcc 15.3 objects.
#[test]
fn calls_halves_and_store_split_match_the_linker() {
    assert_eq!(
        patch(R_OR1K_INSN_REL_26, 0x0400_0000, 0x1_06a4, 0x1_0430),
        Ok(0x0400_009d)
    );
    assert_eq!(
        patch(R_OR1K_PLT26, 0x0400_0000, 0x1_06e4, 0x1_0448),
        Ok(0x0400_00a7)
    );
    assert_eq!(
        patch(R_OR1K_AHI16, 0x1a20_0000, 0x1_0a0c, 0x1_0444),
        Ok(0x1a20_0001)
    );
    assert_eq!(
        patch(R_OR1K_LO_16_IN_INSN, 0x9c71_0000, 0x1_0a0c, 0x1_0448),
        Ok(0x9c71_0a0c)
    );
    assert_eq!(
        patch(R_OR1K_SLO16, 0xd411_9800, 0x1_2a58, 0x1_0898),
        Ok(0xd4b1_9a58)
    );
    assert_eq!(
        patch(R_OR1K_AHI16, 0x1a20_0000, 0x1_8000, 0),
        Ok(0x1a20_0002)
    );
    assert_eq!(
        patch(R_OR1K_HI_16_IN_INSN, 0x1a20_0000, 0x1_8000, 0),
        Ok(0x1a20_0001)
    );
    assert_eq!(
        patch(R_OR1K_INSN_REL_26, 0x0400_0000, 0x1_0432, 0x1_0430),
        Err(RelocationFailure::Misaligned)
    );
    assert_eq!(
        patch(R_OR1K_INSN_REL_26, 0x0400_0000, 0x900_0000, 0),
        Err(RelocationFailure::OutOfRange)
    );
    assert!(
        classify_or1k(RelocationInfo {
            kind: RelocationKind::Unknown,
            encoding: RelocationEncoding::Unknown,
            size: 0,
            addend: 0,
            implicit_addend: false,
            r_type: Some(14),
        })
        .is_err(),
        "GOT16"
    );
}
