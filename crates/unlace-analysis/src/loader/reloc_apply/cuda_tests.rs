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

#[test]
fn immediates_and_call_targets_take_the_address() {
    // `MOV R4, 0xffffffff` (sm_80) given the low and high words of 0x1234_5678_9abc.
    let mov = u128::from_le_bytes([
        0x02, 0x78, 0x04, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xd6, 0x0f,
        0x00,
    ]);
    for (high, want) in [(false, 0x5678_9abcu32), (true, 0x1234)] {
        let r = if high {
            R_CUDA_ABS32_HI_32
        } else {
            R_CUDA_ABS32_LO_32
        };
        let spec = classify_cuda(info(r, 0)).unwrap().unwrap();
        let mut field = mov.to_le_bytes();
        apply_info(
            spec,
            info(r, 0),
            &mut field[..8],
            true,
            0x1234_5678_9abc,
            0,
            None,
            None,
        )
        .unwrap();
        let got = u128::from_le_bytes(field);
        assert_eq!((got >> 32) as u32, want);
        assert_eq!(
            got & !(0xffff_ffffu128 << 32),
            mov & !(0xffff_ffffu128 << 32)
        );
    }
    // `CALL.ABS.NOINC 0x0` to 0x100: nvdisasm prints field 0x40 as 0x100.
    let call = u128::from_le_bytes([
        0x43, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0xea, 0x0f,
        0x02,
    ]);
    let spec = classify_cuda(info(R_CUDA_ABS47_34, 0)).unwrap().unwrap();
    assert!(spec.is_call() && spec.targets_code());
    let mut field = call.to_le_bytes();
    apply_info(
        spec,
        info(R_CUDA_ABS47_34, 0),
        &mut field,
        true,
        0x100,
        0,
        None,
        None,
    )
    .unwrap();
    let got = u128::from_le_bytes(field);
    assert_eq!((got >> 34) & ((1u128 << 47) - 1), 0x40);
    assert_eq!(
        got & !(((1u128 << 47) - 1) << 34),
        call & !(((1u128 << 47) - 1) << 34)
    );
    assert_eq!(
        apply_info(
            spec,
            info(R_CUDA_ABS47_34, 2),
            &mut field,
            true,
            0x100,
            0,
            None,
            None
        ),
        Err(RelocationFailure::Misaligned)
    );
    assert!(
        classify_cuda(info(R_CUDA_YIELD_OPCODE9_0, 0x118))
            .unwrap()
            .is_none()
    );
    assert!(
        classify_cuda(info(R_CUDA_UNUSED_CLEAR64, 0))
            .unwrap()
            .is_none()
    );
    assert!(classify_cuda(info(0x42, 0)).is_err(), "CONST_FIELD21_38");
}
