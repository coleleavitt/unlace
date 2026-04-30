#![allow(non_snake_case)]

//! ARM (AArch64) golden test suite.
//!
//! # Architecture
//!
//! This suite mirrors the x86-64 golden suite with two layers:
//!
//! 1. **Golden corpus integrity** -- the 25 Hex-Rays reference `.c` files in
//!    `tests/golden/arm/` parse as valid C through tree-sitter and self-compare
//!    cleanly via `ast_equiv`. This catches corpus corruption.
//!
//! 2. **Synthetic lifter smoke test** -- feed known AArch64 bytes through the
//!    ARM lifter and verify it produces IR without error. This proves the
//!    lifter is callable on ARM machine code without requiring a full ARM ELF
//!    fixture binary.
//!
//! # Why no golden-vs-actual comparison?
//!
//! The golden `.c` files were produced by Hex-Rays from IDA-loaded ARM binaries
//! that we do not redistribute. Our test validates corpus integrity (self-parse)
//! and lifter callability (synthetic bytes). Full end-to-end golden comparison
//! requires matching ARM ELF fixtures, which are not yet available.
//!
//! # Realistic limitations
//!
//! - No ARM ELF fixtures exist in fixtures/ yet, so no end-to-end decompilation
//!   tests are possible for ARM.
//! - The synthetic lifter test only covers `MOV` and `RET`; broader instruction
//!   coverage is validated by the lifter's own unit tests.
//! - The golden `.c` files use Hex-Rays' dialect (e.g. `__int64`, `__fastcall`,
//!   `_QWORD`). tree-sitter-c parses these because it treats unknown types as
//!   identifiers, but they are not standard C.

use std::path::Path;

fn workspace_root() -> &'static Path {
    static ROOT: std::sync::OnceLock<std::path::PathBuf> = std::sync::OnceLock::new();
    ROOT.get_or_init(|| {
        Path::new(env!("CARGO_MANIFEST_DIR"))
            .parent()
            .and_then(|p| p.parent())
            .expect("failed to find workspace root")
            .to_path_buf()
    })
}

fn golden_dir() -> std::path::PathBuf {
    workspace_root().join("tests/golden/arm")
}

// ---------------------------------------------------------------------------
// Layer 1: Golden corpus integrity (self-parse tests)
//
// Each golden .c file must parse as C and pass ast_equiv self-comparison.
// These validate that the corpus is not corrupted and that tree-sitter-c
// can handle the Hex-Rays output dialect.
// ---------------------------------------------------------------------------

fn golden_self_compare(stem: &str) {
    let golden_path = golden_dir().join(format!("{stem}.c"));
    let source = std::fs::read_to_string(&golden_path)
        .unwrap_or_else(|e| panic!("failed to read {golden_path:?}: {e}"));
    unlace_test_harness::ast_equiv(&source, &source)
        .unwrap_or_else(|e| panic!("{stem}: self-comparison failed: {e}"));
}

// -- trivial (block_count=1): identity/return-constant stubs --

#[test]
fn golden_self_sub_101320() { golden_self_compare("sub_101320"); }
#[test]
fn golden_self_sub_101330() { golden_self_compare("sub_101330"); }
#[test]
fn golden_self_sub_101340() { golden_self_compare("sub_101340"); }
#[test]
fn golden_self_sub_101350() { golden_self_compare("sub_101350"); }
#[test]
fn golden_self_sub_101370() { golden_self_compare("sub_101370"); }
#[test]
fn golden_self_sub_101380() { golden_self_compare("sub_101380"); }
#[test]
fn golden_self_sub_1013A0() { golden_self_compare("sub_1013A0"); }
#[test]
fn golden_self_sub_1013C0() { golden_self_compare("sub_1013C0"); }

// -- simple (block_count 1-4): small functions with locals --

#[test]
fn golden_self_sub_1016B0() { golden_self_compare("sub_1016B0"); }
#[test]
fn golden_self_sub_101750() { golden_self_compare("sub_101750"); }
#[test]
fn golden_self_sub_101770() { golden_self_compare("sub_101770"); }
#[test]
fn golden_self_sub_101790() { golden_self_compare("sub_101790"); }
#[test]
fn golden_self_sub_1017B0() { golden_self_compare("sub_1017B0"); }
#[test]
fn golden_self_sub_1017D0() { golden_self_compare("sub_1017D0"); }
#[test]
fn golden_self_sub_101850() { golden_self_compare("sub_101850"); }
#[test]
fn golden_self_sub_102090() { golden_self_compare("sub_102090"); }

// -- branchy (block_count 2-5): control flow --

#[test]
fn golden_self_sub_101540() { golden_self_compare("sub_101540"); }
#[test]
fn golden_self_sub_1015C0() { golden_self_compare("sub_1015C0"); }
#[test]
fn golden_self_sub_1017F0() { golden_self_compare("sub_1017F0"); }
#[test]
fn golden_self_sub_1018D0() { golden_self_compare("sub_1018D0"); }
#[test]
fn golden_self_sub_102100() { golden_self_compare("sub_102100"); }

// -- complex (block_count >= 7): large functions --

#[test]
fn golden_self_func() { golden_self_compare("func"); }
#[test]
fn golden_self_sub_100A70() { golden_self_compare("sub_100A70"); }
#[test]
fn golden_self_sub_101950() { golden_self_compare("sub_101950"); }
#[test]
fn golden_self_sub_101A40() { golden_self_compare("sub_101A40"); }

// ---------------------------------------------------------------------------
// Bulk golden corpus scan -- single test that iterates all 25 files.
// ---------------------------------------------------------------------------

#[test]
fn golden_corpus_all_arm_files_parse() {
    let dir = golden_dir();
    assert!(dir.is_dir(), "golden directory does not exist: {dir:?}");

    let mut total = 0;
    let mut passed = 0;
    let mut failures = Vec::new();

    for entry in std::fs::read_dir(dir).expect("failed to read golden dir") {
        let entry = entry.expect("failed to read dir entry");
        let path = entry.path();
        if path.extension().and_then(|e| e.to_str()) != Some("c") {
            continue;
        }

        total += 1;
        let stem = path.file_stem().unwrap().to_string_lossy().to_string();
        let source = std::fs::read_to_string(&path)
            .unwrap_or_else(|e| panic!("failed to read {path:?}: {e}"));

        match unlace_test_harness::ast_equiv(&source, &source) {
            Ok(()) => passed += 1,
            Err(e) => failures.push(format!("{stem}: {e}")),
        }
    }

    // Print summary for evidence gathering
    eprintln!("ARM golden corpus self-parse: {passed}/{total} passed");
    if !failures.is_empty() {
        eprintln!("Failures:");
        for f in &failures {
            eprintln!("  {f}");
        }
    }

    // All golden files must self-parse -- corpus integrity check.
    assert!(
        failures.is_empty(),
        "{} of {total} ARM golden files failed self-parse: {:?}",
        failures.len(),
        failures,
    );
}

// ---------------------------------------------------------------------------
// Layer 2: Synthetic ARM lifter smoke test
//
// Feed known AArch64 instruction bytes through the ARM lifter to verify
// the lifter is callable and produces IR without panicking.
// No ARM ELF fixture is required.
// ---------------------------------------------------------------------------

#[test]
fn arm_lifter_smoke_mov_x0_42() {
    use unlace_ir::Lifter;

    let lifter = unlace_lift_arm::ArmLifter::new();

    // `mov x0, #42` encoded as AArch64 little-endian: 0xD2800540
    // Bytes: [0x40, 0x05, 0x80, 0xD2]
    let mov_bytes: [u8; 4] = [0x40, 0x05, 0x80, 0xD2];
    let result = lifter.lift_insn(&mov_bytes, 0x1000);
    assert!(
        result.is_ok(),
        "ARM lifter failed on `mov x0, #42`: {:?}",
        result.unwrap_err()
    );
    let lifted = result.unwrap();
    assert_eq!(lifted.len, 4, "AArch64 instructions are always 4 bytes");
    assert!(
        !lifted.ir_ops.is_empty(),
        "mov x0, #42 should produce at least one IR op"
    );
}

#[test]
fn arm_lifter_smoke_ret() {
    use unlace_ir::Lifter;

    let lifter = unlace_lift_arm::ArmLifter::new();

    // `ret` encoded as AArch64 little-endian: 0xD65F03C0
    // Bytes: [0xC0, 0x03, 0x5F, 0xD6]
    let ret_bytes: [u8; 4] = [0xC0, 0x03, 0x5F, 0xD6];
    let result = lifter.lift_insn(&ret_bytes, 0x1004);
    assert!(
        result.is_ok(),
        "ARM lifter failed on `ret`: {:?}",
        result.unwrap_err()
    );
    let lifted = result.unwrap();
    assert_eq!(lifted.len, 4);
    assert!(
        !lifted.ir_ops.is_empty(),
        "ret should produce at least one IR op"
    );
}

#[test]
fn arm_lifter_smoke_sequence() {
    use unlace_ir::Lifter;

    let lifter = unlace_lift_arm::ArmLifter::new();

    // Two-instruction sequence: `mov x0, #42` then `ret`
    let code: [u8; 8] = [
        0x40, 0x05, 0x80, 0xD2, // mov x0, #42
        0xC0, 0x03, 0x5F, 0xD6, // ret
    ];

    // Lift first instruction
    let r1 = lifter.lift_insn(&code[0..4], 0x1000);
    assert!(r1.is_ok(), "first insn failed: {:?}", r1.unwrap_err());
    assert_eq!(r1.unwrap().len, 4);

    // Lift second instruction
    let r2 = lifter.lift_insn(&code[4..8], 0x1004);
    assert!(r2.is_ok(), "second insn failed: {:?}", r2.unwrap_err());
    assert_eq!(r2.unwrap().len, 4);
}

// ---------------------------------------------------------------------------
// Layer 3: Harness validation (ARM-specific)
// ---------------------------------------------------------------------------

#[test]
fn harness_arm_golden_file_is_valid_c() {
    // Verify one trivial ARM golden file parses as C
    let source = "__int64 __fastcall sub_101320(__int64 a1)\n{\n  return a1;\n}\n";
    assert!(
        unlace_test_harness::ast_equiv(source, source).is_ok(),
        "trivial ARM golden content should self-parse"
    );
}
