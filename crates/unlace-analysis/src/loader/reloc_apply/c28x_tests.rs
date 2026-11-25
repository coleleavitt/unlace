use super::*;

fn info(r_type: u32) -> RelocationInfo {
    RelocationInfo {
        kind: RelocationKind::Unknown,
        encoding: RelocationEncoding::Unknown,
        size: 0,
        addend: 0,
        implicit_addend: true,
        r_type: Some(r_type),
    }
}

#[test]
fn calls_and_immediates_take_the_word_address() {
    // `LCR #0` (cl2000, adc.obj ADC_setVREF) to a function at byte 0x400000.
    let spec = classify_c28x(info(R_C28X_ABS22_CALL)).unwrap().unwrap();
    assert!(spec.is_call());
    let mut field = [0x40, 0x76, 0x00, 0x00];
    apply_info(
        spec,
        info(R_C28X_ABS22_CALL),
        &mut field,
        true,
        0x40_0000,
        0,
        None,
        None,
    )
    .unwrap();
    assert_eq!(field, [0x60, 0x76, 0x00, 0x00]); // 0x200000 >> 16 = 0x20 in bits 5..0
    // `MOVL XAR4, #0` with an in-place addend of 3 words, to byte 0x40_0010.
    let spec = classify_c28x(info(R_C28X_ABS22)).unwrap().unwrap();
    let mut field = [0x40, 0x8f, 0x03, 0x00];
    apply_info(
        spec,
        info(R_C28X_ABS22),
        &mut field,
        true,
        0x40_0010,
        0,
        None,
        None,
    )
    .unwrap();
    assert_eq!(field, [0x60, 0x8f, 0x0b, 0x00]);
    assert_eq!(
        apply_info(
            spec,
            info(R_C28X_ABS22),
            &mut [0x40, 0x8f, 0, 0],
            true,
            0x40_0001,
            0,
            None,
            None
        ),
        Err(RelocationFailure::Misaligned)
    );
    // A data word.
    let spec = classify_c28x(info(R_C28X_ABS32)).unwrap().unwrap();
    let mut field = [0u8; 4];
    apply_info(
        spec,
        info(R_C28X_ABS32),
        &mut field,
        true,
        0x40_0020,
        0,
        None,
        None,
    )
    .unwrap();
    assert_eq!(u32::from_le_bytes(field), 0x20_0010);
    assert!(classify_c28x(info(0)).unwrap().is_none());
    assert!(classify_c28x(info(9)).is_err(), "PCREL16");
}
