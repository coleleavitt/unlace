use super::*;

fn info(r_type: u32, addend: i64) -> RelocationInfo {
    RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend,
        implicit_addend: false,
        r_type: Some(r_type),
    }
}

fn avr(
    r_type: u32,
    addend: i64,
    bytes: &[u8],
    symbol: u64,
    place: u64,
) -> Result<Vec<u8>, RelocationFailure> {
    let info = info(r_type, addend);
    let spec = classify_info(Architecture::Avr, info)?.expect("not a no-op");
    let mut field = bytes.to_vec();
    assert_eq!(field.len(), spec.width());
    apply_info(spec, info, &mut field, true, symbol, place, None, None)?;
    Ok(field)
}

// Words as ld.lld writes them for clang -mmcu=atmega2560/atmega328p and zig avr objects.
#[test]
fn avr_branches_ldi_bytes_and_calls_match_the_linker() {
    assert_eq!(
        avr(R_AVR_13_PCREL, 0, &[0xff, 0xdf], 0, 0x1d4),
        Ok(vec![0x15, 0xdf])
    );
    assert_eq!(
        avr(9, 0, &[0x00, 0x50], 0x2234, 0x12e),
        Ok(vec![0x0c, 0x5c])
    );
    assert_eq!(
        avr(10, 0, &[0x10, 0x40], 0x2234, 0x130),
        Ok(vec![0x1d, 0x4d])
    );
    assert_eq!(
        avr(R_AVR_LO8_LDI, 1, &[0x80, 0xe0], 0x1204, 0x198),
        Ok(vec![0x85, 0xe0])
    );
    assert_eq!(
        avr(7, 1, &[0x90, 0xe0], 0x1204, 0x19a),
        Ok(vec![0x92, 0xe1])
    );
    assert_eq!(avr(13, 0, &[0x90, 0xe0], 0x2468, 0), Ok(vec![0x92, 0xe1]));
    assert_eq!(
        avr(R_AVR_CALL, 0, &[0x0e, 0x94, 0, 0], 0x1234, 0x106),
        Ok(vec![0x0e, 0x94, 0x1a, 0x09])
    );
    assert_eq!(
        avr(R_AVR_CALL, 0, &[0x0e, 0x94, 0, 0], 0x3_4568, 0x106),
        Ok(vec![0x0f, 0x94, 0xb4, 0xa2])
    );
    assert_eq!(
        avr(R_AVR_7_PCREL, 0, &[0x01, 0xf0], 0x120, 0x100),
        Ok(vec![0x79, 0xf0])
    );
    assert_eq!(
        avr(R_AVR_16_PM, 0, &[0, 0], 0x1234, 0),
        Ok(vec![0x1a, 0x09])
    );
    assert_eq!(
        avr(R_AVR_13_PCREL, 0, &[0x00, 0xe0], 0x120, 0x100),
        Err(RelocationFailure::InvalidEncoding)
    );
    // `sbci r29, hi8(-(x))` and `cpi`; an `add` (0x0c00) is not an immediate form.
    assert_eq!(avr(10, 0, &[0x10, 0x40], 0x2234, 0), Ok(vec![0x1d, 0x4d]));
    assert_eq!(
        avr(R_AVR_LO8_LDI, 0, &[0x80, 0x30], 0x1234, 0),
        Ok(vec![0x84, 0x33])
    );
    assert_eq!(
        avr(R_AVR_LO8_LDI, 0, &[0x00, 0x0c], 0x1234, 0),
        Err(RelocationFailure::InvalidEncoding)
    );
    assert_eq!(
        avr(R_AVR_7_PCREL, 0, &[0x01, 0xf0], 0x400, 0x100),
        Err(RelocationFailure::OutOfRange)
    );
}

#[test]
fn amdgpu_literal_halves_and_data_words() {
    let apply = |r_type, addend, symbol, place| {
        let spec = classify_amdgpu(info(r_type, addend)).unwrap().unwrap();
        let mut field = vec![0; spec.width()];
        apply_info(
            spec,
            info(r_type, addend),
            &mut field,
            true,
            symbol,
            place,
            None,
            None,
        )
        .unwrap();
        field
    };
    // `s_add_u32 s6, s6, lit` / `s_addc_u32 s7, s7, lit` of a call 0x100 back.
    assert_eq!(
        apply(R_AMDGPU_REL32_LO, 4, 0x40_0000, 0x40_00fc),
        (-0xf8i32).to_le_bytes()
    );
    assert_eq!(
        apply(R_AMDGPU_REL32_HI, 12, 0x40_0000, 0x40_0104),
        (-1i32).to_le_bytes()
    );
    assert_eq!(
        apply(R_AMDGPU_ABS32_HI, 0, 0x1_2345_6789, 0),
        1u32.to_le_bytes()
    );
    assert_eq!(apply(R_AMDGPU_ABS64, 8, 0x1000, 0), 0x1008u64.to_le_bytes());
    assert!(classify_amdgpu(info(0, 0)).unwrap().is_none());
    assert!(classify_amdgpu(info(7, 0)).is_err(), "GOTPCREL");
}
