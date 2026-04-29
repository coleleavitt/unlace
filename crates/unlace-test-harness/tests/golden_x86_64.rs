#![allow(non_snake_case)]

use std::path::Path;

const GOLDEN_DIR: &str = "tests/golden/x86_64";

#[test]
fn test_identical_match() {
    let a = "int foo() { return 42; }";
    let b = "int bar() { return 42; }";
    assert!(unlace_test_harness::ast_equiv(a, b).is_ok());
}

#[test]
fn test_structural_divergence() {
    let a = "int foo() { if (x) return 1; }";
    let b = "int foo() { while (x) return 1; }";
    let result = unlace_test_harness::ast_equiv(a, b);
    assert!(result.is_err());
    let err = result.unwrap_err();
    assert!(
        err.to_string().contains("if_statement") || err.to_string().contains("while_statement"),
        "expected if_statement or while_statement in error, got: {}",
        err,
    );
}

#[test]
#[ignore]
fn golden_func() {
    let golden_path = Path::new(GOLDEN_DIR).join("func.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("func: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_100140() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_100140.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_100140: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101030() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101030.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101030: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1018E0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1018E0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1018E0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1018F0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1018F0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1018F0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101900() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101900.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101900: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101910() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101910.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101910: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101930() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101930.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101930: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101940() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101940.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101940: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101960() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101960.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101960: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101980() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101980.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101980: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1019A0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1019A0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1019A0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1019F0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1019F0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1019F0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101A20() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101A20.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101A20: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101A30() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101A30.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101A30: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101A40() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101A40.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101A40: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101A50() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101A50.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101A50: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101A60() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101A60.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101A60: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101A70() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101A70.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101A70: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101AA0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101AA0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101AA0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101AB0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101AB0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101AB0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101B00() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101B00.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101B00: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101B80() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101B80.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101B80: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101C10() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101C10.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101C10: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101C30() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101C30.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101C30: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101C50() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101C50.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101C50: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101C60() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101C60.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101C60: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101C70() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101C70.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101C70: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101CA0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101CA0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101CA0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101D10() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101D10.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101D10: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101D30() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101D30.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101D30: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101D50() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101D50.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101D50: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101D70() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101D70.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101D70: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101D90() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101D90.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101D90: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101DB0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101DB0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101DB0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101E10() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101E10.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101E10: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101E90() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101E90.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101E90: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_101F10() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_101F10.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_101F10: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102000() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102000.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102000: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102130() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102130.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102130: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102260() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102260.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102260: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102500() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102500.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102500: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102650() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102650.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102650: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1026C0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1026C0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1026C0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102810() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102810.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102810: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102850() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102850.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102850: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1028D0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1028D0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1028D0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102950() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102950.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102950: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1029D0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1029D0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1029D0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102B40() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102B40.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102B40: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102BB0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102BB0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102BB0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102D00() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102D00.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102D00: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_102EE0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_102EE0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_102EE0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1030B0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1030B0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1030B0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1031F0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1031F0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1031F0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103540() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103540.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103540: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103560() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103560.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103560: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103B50() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103B50.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103B50: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103BC0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103BC0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103BC0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103C40() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103C40.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103C40: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103C70() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103C70.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103C70: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103CE0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103CE0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103CE0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103D60() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103D60.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103D60: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103D80() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103D80.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103D80: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103DA0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103DA0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103DA0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103E50() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103E50.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103E50: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103EF0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103EF0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103EF0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_103FB0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_103FB0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_103FB0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_104080() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_104080.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_104080: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1041A0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1041A0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1041A0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_104440() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_104440.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_104440: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1045E0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1045E0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1045E0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1048A0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1048A0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1048A0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_104DF0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_104DF0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_104DF0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_104E10() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_104E10.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_104E10: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_104E40() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_104E40.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_104E40: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_105060() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_105060.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_105060: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_105140() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_105140.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_105140: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_105300() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_105300.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_105300: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_105380() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_105380.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_105380: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1053D0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1053D0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1053D0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_105590() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_105590.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_105590: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1056B0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1056B0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1056B0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_106670() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_106670.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_106670: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_106780() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_106780.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_106780: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_106AE0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_106AE0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_106AE0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_106C60() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_106C60.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_106C60: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_106CC0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_106CC0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_106CC0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_106D30() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_106D30.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_106D30: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_106EE0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_106EE0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_106EE0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_106F70() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_106F70.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_106F70: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_107060() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_107060.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_107060: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1070F0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1070F0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1070F0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1071B0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1071B0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1071B0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_107270() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_107270.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_107270: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1073D0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1073D0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1073D0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_107730() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_107730.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_107730: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_107BC0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_107BC0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_107BC0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10A810() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10A810.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10A810: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10AB80() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10AB80.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10AB80: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10AC40() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10AC40.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10AC40: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10AD00() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10AD00.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10AD00: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10AE60() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10AE60.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10AE60: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10AFA0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10AFA0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10AFA0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10B360() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10B360.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10B360: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10B410() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10B410.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10B410: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10B640() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10B640.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10B640: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10B720() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10B720.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10B720: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10B9C0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10B9C0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10B9C0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10BCE0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10BCE0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10BCE0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10BF10() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10BF10.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10BF10: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10CA80() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10CA80.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10CA80: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10EC70() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10EC70.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10EC70: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10EE00() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10EE00.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10EE00: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_10FFB0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_10FFB0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_10FFB0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_110340() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_110340.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_110340: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1107E0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1107E0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1107E0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_1108E0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_1108E0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_1108E0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_110970() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_110970.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_110970: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_110EB0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_110EB0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_110EB0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_110F20() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_110F20.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_110F20: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_110FD0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_110FD0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_110FD0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_111030() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_111030.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_111030: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_111110() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_111110.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_111110: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_111130() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_111130.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_111130: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_113680() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_113680.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_113680: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_118F20() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_118F20.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_118F20: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_119460() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_119460.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_119460: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B400() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B400.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B400: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B410() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B410.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B410: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B420() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B420.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B420: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B430() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B430.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B430: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B530() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B530.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B530: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B570() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B570.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B570: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B5D0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B5D0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B5D0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B600() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B600.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B600: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B620() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B620.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B620: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B650() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B650.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B650: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B670() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B670.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B670: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B6F0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B6F0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B6F0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B8F0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B8F0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B8F0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B900() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B900.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B900: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B920() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B920.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B920: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B980() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B980.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B980: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B9A0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B9A0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B9A0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11B9C0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11B9C0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11B9C0: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11CA10() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11CA10.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11CA10: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11CA60() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11CA60.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11CA60: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11CB40() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11CB40.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11CB40: self-comparison failed: {e}"));
}

#[test]
#[ignore]
fn golden_sub_11D4A0() {
    let golden_path = Path::new(GOLDEN_DIR).join("sub_11D4A0.c");
    let expected = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&expected, &expected)
        .unwrap_or_else(|e| panic!("sub_11D4A0: self-comparison failed: {e}"));
}
