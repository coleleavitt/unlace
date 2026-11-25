use super::*;

/// A provider with no formats registered (all float ops fall back).
struct NoFormats;
impl FloatFormatProvider for NoFormats {
    fn get_float_format(&self, _size: i32) -> Option<&FloatFormat> {
        None
    }
}

fn table() -> Vec<Option<Rc<dyn OpBehavior>>> {
    let mut inst: Vec<Option<Rc<dyn OpBehavior>>> = Vec::new();
    let trans: Rc<dyn FloatFormatProvider> = Rc::new(NoFormats);
    register_instructions(&mut inst, &trans);
    inst
}

#[test]
fn test_opbehavior_registration_shape() {
    let inst = table();
    assert_eq!(inst.len(), OpCode::CPUI_MAX as usize);
    // Unregistered slots: 0 (no op) and 45 (unused enum slot).
    for (i, slot) in inst.iter().enumerate() {
        match slot {
            Some(beh) => {
                assert_eq!(
                    beh.get_opcode() as usize,
                    i,
                    "behavior registered at wrong slot"
                );
            }
            None => assert!(i == 0 || i == 45, "missing behavior for opcode {i}"),
        }
    }
    // C++ flag spot-checks: LOAD special, COPY unary, INT_ADD binary,
    // PTRADD registered as the plain (non-special, binary) base class.
    let load = inst[OpCode::CPUI_LOAD as usize].as_ref().unwrap();
    assert!(load.is_special() && !load.is_unary());
    let copy = inst[OpCode::CPUI_COPY as usize].as_ref().unwrap();
    assert!(!copy.is_special() && copy.is_unary());
    let add = inst[OpCode::CPUI_INT_ADD as usize].as_ref().unwrap();
    assert!(!add.is_special() && !add.is_unary());
    let ptradd = inst[OpCode::CPUI_PTRADD as usize].as_ref().unwrap();
    assert!(!ptradd.is_special() && !ptradd.is_unary());
    assert!(ptradd.evaluate_binary(8, 8, 1, 2).is_err());
}

#[test]
fn test_opbehavior_ub2_sdiv_srem_error_not_panic() {
    // UB-2: INT64_MIN / -1 (and % -1) SIGFPE in C++; here they must
    // return Err and must not panic or wrap.
    let sdiv = OpBehaviorIntSdiv;
    let srem = OpBehaviorIntSrem;
    for sizeout in [8, 1] {
        assert!(matches!(
            sdiv.evaluate_binary(sizeout, 8, 0x8000000000000000, 0xffffffffffffffff),
            Err(UnlaceError::Evaluation { .. })
        ));
        assert!(matches!(
            srem.evaluate_binary(sizeout, 8, 0x8000000000000000, 0xffffffffffffffff),
            Err(UnlaceError::Evaluation { .. })
        ));
    }
    // The same bit pattern at a smaller size is an ordinary division:
    // sizein 4 sign-extends 0x80000000 to INT32_MIN and -1 stays -1,
    // INT32_MIN / -1 == 0x80000000 in 64-bit arithmetic.
    assert_eq!(
        sdiv.evaluate_binary(4, 4, 0x80000000, 0xffffffff).unwrap(),
        0x80000000
    );
    // Divide by zero is the EvaluationError path, not a panic.
    assert!(matches!(
        sdiv.evaluate_binary(8, 8, 1, 0),
        Err(UnlaceError::Evaluation { explain }) if explain == "Divide by 0"
    ));
    assert!(matches!(
        srem.evaluate_binary(8, 8, 1, 0),
        Err(UnlaceError::Evaluation { explain }) if explain == "Remainder by 0"
    ));
}

#[test]
fn test_opbehavior_base_throw_messages() {
    let beh = OpBehaviorDefault::new(OpCode::CPUI_SPULL, false);
    // UB-1: in C++ this very error path reads past the name table for
    // SPULL; here it formats the canonical name.
    match beh.evaluate_binary(8, 8, 1, 2) {
        Err(UnlaceError::Lowlevel { explain }) => {
            assert_eq!(explain, "Binary emulation unimplemented for SPULL");
        }
        other => panic!("expected Lowlevel error, got {other:?}"),
    }
    match beh.evaluate_unary(8, 8, 1) {
        Err(UnlaceError::Lowlevel { explain }) => {
            assert_eq!(explain, "Unary emulation unimplemented for SPULL");
        }
        other => panic!("expected Lowlevel error, got {other:?}"),
    }
    match beh.evaluate_ternary(8, 8, 1, 2, 3) {
        Err(UnlaceError::Lowlevel { explain }) => {
            assert_eq!(explain, "Ternary emulation unimplemented for SPULL");
        }
        other => panic!("expected Lowlevel error, got {other:?}"),
    }
    match beh.recover_input_binary(0, 8, 1, 8, 2) {
        Err(UnlaceError::Lowlevel { explain }) => {
            assert_eq!(
                explain,
                "Cannot recover input parameter without loss of information"
            );
        }
        other => panic!("expected Lowlevel error, got {other:?}"),
    }
}

#[test]
fn test_opbehavior_recover_paths() {
    // INT_ADD: out = in1 + in2 -> recover the other input.
    assert_eq!(
        OpBehaviorIntAdd
            .recover_input_binary(0, 4, 5, 4, 3)
            .unwrap(),
        2
    );
    // wrap: out 0, in 1 -> 0xffffffff at size 4
    assert_eq!(
        OpBehaviorIntAdd
            .recover_input_binary(0, 4, 0, 4, 1)
            .unwrap(),
        0xffffffff
    );
    // INT_SUB: slot 0 -> in + out; slot 1 -> in - out.
    assert_eq!(
        OpBehaviorIntSub
            .recover_input_binary(0, 4, 2, 4, 3)
            .unwrap(),
        5
    );
    assert_eq!(
        OpBehaviorIntSub
            .recover_input_binary(1, 4, 2, 4, 7)
            .unwrap(),
        5
    );
    // COPY / ZEXT pass through; ZEXT rejects out-of-range outputs.
    assert_eq!(
        OpBehaviorCopy.recover_input_unary(4, 0x1234, 4).unwrap(),
        0x1234
    );
    assert_eq!(
        OpBehaviorIntZext.recover_input_unary(4, 0xff, 1).unwrap(),
        0xff
    );
    assert!(matches!(
        OpBehaviorIntZext.recover_input_unary(4, 0x100, 1),
        Err(UnlaceError::Evaluation { .. })
    ));
    // SEXT: negative path recovers the truncated input, positive path
    // rejects values with bits above sizein.
    assert_eq!(
        OpBehaviorIntSext.recover_input_unary(2, 0xffff, 1).unwrap(),
        0xff
    );
    assert_eq!(
        OpBehaviorIntSext.recover_input_unary(2, 0x007f, 1).unwrap(),
        0x7f
    );
    assert!(OpBehaviorIntSext.recover_input_unary(2, 0x0100, 1).is_err());
    assert!(OpBehaviorIntSext.recover_input_unary(2, 0x8000, 1).is_err());
    // INT_2COMP / INT_NEGATE involutions.
    assert_eq!(
        OpBehaviorInt2Comp.recover_input_unary(1, 0xff, 1).unwrap(),
        1
    );
    assert_eq!(
        OpBehaviorIntNegate.recover_input_unary(1, 0xfe, 1).unwrap(),
        1
    );
}

#[test]
fn test_opbehavior_shift_recover_edges() {
    // INT_LEFT recover: slot != 0 and oversized shifts take the base
    // throw; in-range shifts validate the recovered bits.
    assert!(matches!(
        OpBehaviorIntLeft.recover_input_binary(1, 4, 8, 4, 1),
        Err(UnlaceError::Lowlevel { .. })
    ));
    assert!(matches!(
        OpBehaviorIntLeft.recover_input_binary(0, 4, 8, 4, 32),
        Err(UnlaceError::Lowlevel { .. })
    ));
    assert_eq!(
        OpBehaviorIntLeft
            .recover_input_binary(0, 4, 8, 4, 3)
            .unwrap(),
        1
    );
    assert!(matches!(
        OpBehaviorIntLeft.recover_input_binary(0, 4, 9, 4, 3),
        Err(UnlaceError::Evaluation { .. })
    ));
    // INT_RIGHT recover.
    assert_eq!(
        OpBehaviorIntRight
            .recover_input_binary(0, 4, 1, 4, 3)
            .unwrap(),
        8
    );
    assert!(matches!(
        OpBehaviorIntRight.recover_input_binary(0, 4, 0x20000000, 4, 3),
        Err(UnlaceError::Evaluation { .. })
    ));
    // INT_SRIGHT recover: sign bits must replicate across sa+1 places.
    // out 0xc0 at size 1, sa 1: top two bits set -> input 0x80 << 1.
    assert_eq!(
        OpBehaviorIntSright
            .recover_input_binary(0, 1, 0xc0, 1, 1)
            .unwrap(),
        0x180
    );
    assert!(matches!(
        OpBehaviorIntSright.recover_input_binary(0, 1, 0x40, 1, 1),
        Err(UnlaceError::Evaluation { .. })
    ));
}

#[test]
fn test_opbehavior_ptradd_ternary() {
    // The (unregistered upstream) OpBehaviorPtradd class itself.
    assert_eq!(
        OpBehaviorPtradd.evaluate_ternary(4, 4, 0x10, 3, 4).unwrap(),
        0x1c
    );
    assert_eq!(
        OpBehaviorPtradd
            .evaluate_ternary(2, 2, 0xffff, 1, 1)
            .unwrap(),
        0 // wraps then masks to sizeout
    );
    assert_eq!(
        OpBehaviorPtrsub.evaluate_binary(2, 2, 0xffff, 2).unwrap(),
        1
    );
}
