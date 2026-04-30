#![allow(non_snake_case)]

//! x86-64 golden test suite.
//!
//! # Architecture
//!
//! This suite has two layers:
//!
//! 1. **Golden corpus integrity** — the 150 Hex-Rays reference `.c` files in
//!    `tests/golden/x86_64/` parse as valid C through tree-sitter and self-compare
//!    cleanly via `ast_equiv`. This catches corpus corruption.
//!
//! 2. **End-to-end fixture decompilation** — invoke `unlace decompile --emit c`
//!    on each fixture ELF (hello_world, branches, loops, calls, medium, stripped,
//!    empty) and verify the output parses as syntactically valid C.
//!
//! # Why no golden-vs-actual comparison?
//!
//! The golden `.c` files were produced by Hex-Rays from IDA-loaded binaries that
//! we do not redistribute. Our fixtures are *different* binaries compiled from
//! different source. There is no function-address correspondence, so AST
//! comparison between golden corpus and unlace output is meaningless.
//!
//! When we ship matching ELF fixtures for the golden corpus, each golden test
//! should invoke unlace on that binary and compare via `ast_equiv`.

use std::path::Path;
use std::process::Command;

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
    workspace_root().join("tests/golden/x86_64")
}

fn unlace_bin() -> String {
    let target_dir = std::env::var("CARGO_TARGET_DIR")
        .map(std::path::PathBuf::from)
        .unwrap_or_else(|_| workspace_root().join("target"));
    let bin_path = target_dir.join("debug").join("unlace");

    assert!(
        bin_path.exists(),
        "unlace binary not found at {bin_path:?}. Run `cargo build -p unlace-cli` first."
    );
    bin_path.to_string_lossy().to_string()
}

fn fixture(name: &str) -> String {
    workspace_root()
        .join("fixtures")
        .join(name)
        .to_string_lossy()
        .to_string()
}

fn decompile_fixture(fixture_name: &str) -> String {
    let output = Command::new(unlace_bin())
        .args(["decompile", "--emit", "c"])
        .arg(fixture(&format!("{fixture_name}.elf")))
        .env_remove("RUST_LOG")
        .output()
        .unwrap_or_else(|e| panic!("failed to run unlace on {fixture_name}: {e}"));

    assert!(
        output.status.success(),
        "unlace failed on {fixture_name}.elf: {}",
        String::from_utf8_lossy(&output.stderr)
    );

    String::from_utf8(output.stdout)
        .unwrap_or_else(|e| panic!("non-UTF8 output from {fixture_name}: {e}"))
}

fn decompile_fixture_function(fixture_name: &str, func: &str) -> String {
    let output = Command::new(unlace_bin())
        .args(["decompile", "--emit", "c", "--function", func])
        .arg(fixture(&format!("{fixture_name}.elf")))
        .env_remove("RUST_LOG")
        .output()
        .unwrap_or_else(|e| panic!("failed to run unlace on {fixture_name}/{func}: {e}"));

    assert!(
        output.status.success(),
        "unlace failed on {fixture_name}.elf --function {func}: {}",
        String::from_utf8_lossy(&output.stderr)
    );

    String::from_utf8(output.stdout)
        .unwrap_or_else(|e| panic!("non-UTF8 output from {fixture_name}/{func}: {e}"))
}

fn assert_parses_as_c(source: &str, label: &str) {
    let result = unlace_test_harness::ast_equiv(source, source);
    assert!(
        result.is_ok(),
        "{label}: output does not self-compare as valid C AST: {}",
        result.unwrap_err()
    );
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
fn golden_self_sub_1018E0() { golden_self_compare("sub_1018E0"); }
#[test]
fn golden_self_sub_1018F0() { golden_self_compare("sub_1018F0"); }
#[test]
fn golden_self_sub_101900() { golden_self_compare("sub_101900"); }
#[test]
fn golden_self_sub_101910() { golden_self_compare("sub_101910"); }
#[test]
fn golden_self_sub_101930() { golden_self_compare("sub_101930"); }
#[test]
fn golden_self_sub_101940() { golden_self_compare("sub_101940"); }
#[test]
fn golden_self_sub_101960() { golden_self_compare("sub_101960"); }
#[test]
fn golden_self_sub_101980() { golden_self_compare("sub_101980"); }
#[test]
fn golden_self_sub_1019A0() { golden_self_compare("sub_1019A0"); }
#[test]
fn golden_self_sub_1019F0() { golden_self_compare("sub_1019F0"); }
#[test]
fn golden_self_sub_101A20() { golden_self_compare("sub_101A20"); }
#[test]
fn golden_self_sub_101A30() { golden_self_compare("sub_101A30"); }
#[test]
fn golden_self_sub_101A40() { golden_self_compare("sub_101A40"); }
#[test]
fn golden_self_sub_101A50() { golden_self_compare("sub_101A50"); }
#[test]
fn golden_self_sub_101A60() { golden_self_compare("sub_101A60"); }
#[test]
fn golden_self_sub_101A70() { golden_self_compare("sub_101A70"); }
#[test]
fn golden_self_sub_101AA0() { golden_self_compare("sub_101AA0"); }
#[test]
fn golden_self_sub_101AB0() { golden_self_compare("sub_101AB0"); }
#[test]
fn golden_self_sub_101C10() { golden_self_compare("sub_101C10"); }
#[test]
fn golden_self_sub_101C30() { golden_self_compare("sub_101C30"); }
#[test]
fn golden_self_sub_101C50() { golden_self_compare("sub_101C50"); }
#[test]
fn golden_self_sub_101C60() { golden_self_compare("sub_101C60"); }
#[test]
fn golden_self_sub_101CA0() { golden_self_compare("sub_101CA0"); }
#[test]
fn golden_self_sub_103540() { golden_self_compare("sub_103540"); }
#[test]
fn golden_self_sub_103D60() { golden_self_compare("sub_103D60"); }
#[test]
fn golden_self_sub_103D80() { golden_self_compare("sub_103D80"); }
#[test]
fn golden_self_sub_103E50() { golden_self_compare("sub_103E50"); }
#[test]
fn golden_self_sub_106C60() { golden_self_compare("sub_106C60"); }
#[test]
fn golden_self_sub_107BC0() { golden_self_compare("sub_107BC0"); }
#[test]
fn golden_self_sub_1107E0() { golden_self_compare("sub_1107E0"); }
#[test]
fn golden_self_sub_110970() { golden_self_compare("sub_110970"); }
#[test]
fn golden_self_sub_111030() { golden_self_compare("sub_111030"); }
#[test]
fn golden_self_sub_119460() { golden_self_compare("sub_119460"); }
#[test]
fn golden_self_sub_11B400() { golden_self_compare("sub_11B400"); }
#[test]
fn golden_self_sub_11B410() { golden_self_compare("sub_11B410"); }
#[test]
fn golden_self_sub_11B420() { golden_self_compare("sub_11B420"); }
#[test]
fn golden_self_sub_11B430() { golden_self_compare("sub_11B430"); }
#[test]
fn golden_self_sub_11B5D0() { golden_self_compare("sub_11B5D0"); }
#[test]
fn golden_self_sub_11B600() { golden_self_compare("sub_11B600"); }
#[test]
fn golden_self_sub_11B650() { golden_self_compare("sub_11B650"); }
#[test]
fn golden_self_sub_11B8F0() { golden_self_compare("sub_11B8F0"); }
#[test]
fn golden_self_sub_11CA10() { golden_self_compare("sub_11CA10"); }
#[test]
fn golden_self_sub_11CA60() { golden_self_compare("sub_11CA60"); }
#[test]
fn golden_self_sub_11CB40() { golden_self_compare("sub_11CB40"); }
#[test]
fn golden_self_sub_11D4A0() { golden_self_compare("sub_11D4A0"); }

// -- simple (block_count 1-4): small functions with locals --

#[test]
fn golden_self_sub_101C70() { golden_self_compare("sub_101C70"); }
#[test]
fn golden_self_sub_101D10() { golden_self_compare("sub_101D10"); }
#[test]
fn golden_self_sub_101D30() { golden_self_compare("sub_101D30"); }
#[test]
fn golden_self_sub_101D50() { golden_self_compare("sub_101D50"); }
#[test]
fn golden_self_sub_101D70() { golden_self_compare("sub_101D70"); }
#[test]
fn golden_self_sub_101D90() { golden_self_compare("sub_101D90"); }
#[test]
fn golden_self_sub_101E10() { golden_self_compare("sub_101E10"); }
#[test]
fn golden_self_sub_102650() { golden_self_compare("sub_102650"); }
#[test]
fn golden_self_sub_102810() { golden_self_compare("sub_102810"); }
#[test]
fn golden_self_sub_102850() { golden_self_compare("sub_102850"); }
#[test]
fn golden_self_sub_103B50() { golden_self_compare("sub_103B50"); }
#[test]
fn golden_self_sub_103BC0() { golden_self_compare("sub_103BC0"); }
#[test]
fn golden_self_sub_103C40() { golden_self_compare("sub_103C40"); }
#[test]
fn golden_self_sub_103C70() { golden_self_compare("sub_103C70"); }
#[test]
fn golden_self_sub_103CE0() { golden_self_compare("sub_103CE0"); }
#[test]
fn golden_self_sub_103EF0() { golden_self_compare("sub_103EF0"); }
#[test]
fn golden_self_sub_103FB0() { golden_self_compare("sub_103FB0"); }
#[test]
fn golden_self_sub_104DF0() { golden_self_compare("sub_104DF0"); }
#[test]
fn golden_self_sub_104E10() { golden_self_compare("sub_104E10"); }
#[test]
fn golden_self_sub_105300() { golden_self_compare("sub_105300"); }
#[test]
fn golden_self_sub_105380() { golden_self_compare("sub_105380"); }
#[test]
fn golden_self_sub_106EE0() { golden_self_compare("sub_106EE0"); }
#[test]
fn golden_self_sub_106F70() { golden_self_compare("sub_106F70"); }
#[test]
fn golden_self_sub_107060() { golden_self_compare("sub_107060"); }
#[test]
fn golden_self_sub_10A810() { golden_self_compare("sub_10A810"); }
#[test]
fn golden_self_sub_10BCE0() { golden_self_compare("sub_10BCE0"); }
#[test]
fn golden_self_sub_10CA80() { golden_self_compare("sub_10CA80"); }
#[test]
fn golden_self_sub_10EC70() { golden_self_compare("sub_10EC70"); }
#[test]
fn golden_self_sub_10EE00() { golden_self_compare("sub_10EE00"); }
#[test]
fn golden_self_sub_110F20() { golden_self_compare("sub_110F20"); }
#[test]
fn golden_self_sub_110FD0() { golden_self_compare("sub_110FD0"); }
#[test]
fn golden_self_sub_111110() { golden_self_compare("sub_111110"); }
#[test]
fn golden_self_sub_111130() { golden_self_compare("sub_111130"); }
#[test]
fn golden_self_sub_113680() { golden_self_compare("sub_113680"); }
#[test]
fn golden_self_sub_118F20() { golden_self_compare("sub_118F20"); }
#[test]
fn golden_self_sub_11B530() { golden_self_compare("sub_11B530"); }
#[test]
fn golden_self_sub_11B570() { golden_self_compare("sub_11B570"); }
#[test]
fn golden_self_sub_11B620() { golden_self_compare("sub_11B620"); }
#[test]
fn golden_self_sub_11B670() { golden_self_compare("sub_11B670"); }
#[test]
fn golden_self_sub_11B6F0() { golden_self_compare("sub_11B6F0"); }
#[test]
fn golden_self_sub_11B900() { golden_self_compare("sub_11B900"); }
#[test]
fn golden_self_sub_11B920() { golden_self_compare("sub_11B920"); }
#[test]
fn golden_self_sub_11B980() { golden_self_compare("sub_11B980"); }
#[test]
fn golden_self_sub_11B9A0() { golden_self_compare("sub_11B9A0"); }
#[test]
fn golden_self_sub_11B9C0() { golden_self_compare("sub_11B9C0"); }

// -- branchy (block_count 3-12): control flow --

#[test]
fn golden_self_sub_101B00() { golden_self_compare("sub_101B00"); }
#[test]
fn golden_self_sub_101B80() { golden_self_compare("sub_101B80"); }
#[test]
fn golden_self_sub_101DB0() { golden_self_compare("sub_101DB0"); }
#[test]
fn golden_self_sub_101E90() { golden_self_compare("sub_101E90"); }
#[test]
fn golden_self_sub_1026C0() { golden_self_compare("sub_1026C0"); }
#[test]
fn golden_self_sub_1028D0() { golden_self_compare("sub_1028D0"); }
#[test]
fn golden_self_sub_102950() { golden_self_compare("sub_102950"); }
#[test]
fn golden_self_sub_1029D0() { golden_self_compare("sub_1029D0"); }
#[test]
fn golden_self_sub_104080() { golden_self_compare("sub_104080"); }
#[test]
fn golden_self_sub_106CC0() { golden_self_compare("sub_106CC0"); }
#[test]
fn golden_self_sub_1070F0() { golden_self_compare("sub_1070F0"); }
#[test]
fn golden_self_sub_1071B0() { golden_self_compare("sub_1071B0"); }
#[test]
fn golden_self_sub_107270() { golden_self_compare("sub_107270"); }
#[test]
fn golden_self_sub_1073D0() { golden_self_compare("sub_1073D0"); }
#[test]
fn golden_self_sub_107730() { golden_self_compare("sub_107730"); }
#[test]
fn golden_self_sub_10AB80() { golden_self_compare("sub_10AB80"); }
#[test]
fn golden_self_sub_10AC40() { golden_self_compare("sub_10AC40"); }
#[test]
fn golden_self_sub_10AD00() { golden_self_compare("sub_10AD00"); }
#[test]
fn golden_self_sub_10AE60() { golden_self_compare("sub_10AE60"); }
#[test]
fn golden_self_sub_10AFA0() { golden_self_compare("sub_10AFA0"); }
#[test]
fn golden_self_sub_10B360() { golden_self_compare("sub_10B360"); }
#[test]
fn golden_self_sub_10B410() { golden_self_compare("sub_10B410"); }
#[test]
fn golden_self_sub_10B640() { golden_self_compare("sub_10B640"); }
#[test]
fn golden_self_sub_10B720() { golden_self_compare("sub_10B720"); }
#[test]
fn golden_self_sub_10B9C0() { golden_self_compare("sub_10B9C0"); }
#[test]
fn golden_self_sub_10BF10() { golden_self_compare("sub_10BF10"); }
#[test]
fn golden_self_sub_10FFB0() { golden_self_compare("sub_10FFB0"); }
#[test]
fn golden_self_sub_110340() { golden_self_compare("sub_110340"); }
#[test]
fn golden_self_sub_1108E0() { golden_self_compare("sub_1108E0"); }
#[test]
fn golden_self_sub_110EB0() { golden_self_compare("sub_110EB0"); }

// -- complex (block_count >= 5): large functions --

#[test]
fn golden_self_func() { golden_self_compare("func"); }
#[test]
fn golden_self_sub_100140() { golden_self_compare("sub_100140"); }
#[test]
fn golden_self_sub_101030() { golden_self_compare("sub_101030"); }
#[test]
fn golden_self_sub_101F10() { golden_self_compare("sub_101F10"); }
#[test]
fn golden_self_sub_102000() { golden_self_compare("sub_102000"); }
#[test]
fn golden_self_sub_102130() { golden_self_compare("sub_102130"); }
#[test]
fn golden_self_sub_102260() { golden_self_compare("sub_102260"); }
#[test]
fn golden_self_sub_102500() { golden_self_compare("sub_102500"); }
#[test]
fn golden_self_sub_102B40() { golden_self_compare("sub_102B40"); }
#[test]
fn golden_self_sub_102BB0() { golden_self_compare("sub_102BB0"); }
#[test]
fn golden_self_sub_102D00() { golden_self_compare("sub_102D00"); }
#[test]
fn golden_self_sub_102EE0() { golden_self_compare("sub_102EE0"); }
#[test]
fn golden_self_sub_1030B0() { golden_self_compare("sub_1030B0"); }
#[test]
fn golden_self_sub_1031F0() { golden_self_compare("sub_1031F0"); }
#[test]
fn golden_self_sub_103560() { golden_self_compare("sub_103560"); }
#[test]
fn golden_self_sub_103DA0() { golden_self_compare("sub_103DA0"); }
#[test]
fn golden_self_sub_1041A0() { golden_self_compare("sub_1041A0"); }
#[test]
fn golden_self_sub_104440() { golden_self_compare("sub_104440"); }
#[test]
fn golden_self_sub_1045E0() { golden_self_compare("sub_1045E0"); }
#[test]
fn golden_self_sub_1048A0() { golden_self_compare("sub_1048A0"); }
#[test]
fn golden_self_sub_104E40() { golden_self_compare("sub_104E40"); }
#[test]
fn golden_self_sub_105060() { golden_self_compare("sub_105060"); }
#[test]
fn golden_self_sub_105140() { golden_self_compare("sub_105140"); }
#[test]
fn golden_self_sub_1053D0() { golden_self_compare("sub_1053D0"); }
#[test]
fn golden_self_sub_105590() { golden_self_compare("sub_105590"); }
#[test]
fn golden_self_sub_1056B0() { golden_self_compare("sub_1056B0"); }
#[test]
fn golden_self_sub_106670() { golden_self_compare("sub_106670"); }
#[test]
fn golden_self_sub_106780() { golden_self_compare("sub_106780"); }
#[test]
fn golden_self_sub_106AE0() { golden_self_compare("sub_106AE0"); }
#[test]
fn golden_self_sub_106D30() { golden_self_compare("sub_106D30"); }

// ---------------------------------------------------------------------------
// Layer 2: End-to-end fixture decompilation
//
// These tests actually invoke the `unlace` binary on real ELF fixtures and
// verify the output parses as valid C. This is the *real* golden test:
// proving the pipeline produces parseable output end-to-end.
// ---------------------------------------------------------------------------

#[test]
fn e2e_hello_world_parses_as_c() {
    let c_output = decompile_fixture_function("hello_world", "main");
    assert!(!c_output.is_empty(), "hello_world produced empty output");
    assert!(c_output.contains("main("), "expected main function in output");
    assert_parses_as_c(&c_output, "hello_world/main");
}

#[test]
fn e2e_branches_parses_as_c() {
    let c_output = decompile_fixture_function("branches", "main");
    assert!(!c_output.is_empty(), "branches produced empty output");
    assert_parses_as_c(&c_output, "branches/main");
}

#[test]
fn e2e_loops_parses_as_c() {
    let c_output = decompile_fixture_function("loops", "main");
    assert!(!c_output.is_empty(), "loops produced empty output");
    assert_parses_as_c(&c_output, "loops/main");
}

#[test]
fn e2e_calls_parses_as_c() {
    let c_output = decompile_fixture_function("calls", "main");
    assert!(!c_output.is_empty(), "calls produced empty output");
    assert_parses_as_c(&c_output, "calls/main");
}

#[test]
fn e2e_empty_parses_as_c() {
    let c_output = decompile_fixture_function("empty", "main");
    assert!(!c_output.is_empty(), "empty produced empty output");
    assert_parses_as_c(&c_output, "empty/main");
}

#[test]
fn e2e_medium_all_functions_parse_as_c() {
    let c_output = decompile_fixture("medium");
    assert!(!c_output.is_empty(), "medium produced empty output");
    // medium.elf has multiple functions; each should parse
    assert_parses_as_c(&c_output, "medium/all");
}

#[test]
fn e2e_stripped_all_functions_parse_as_c() {
    let c_output = decompile_fixture("stripped");
    assert!(!c_output.is_empty(), "stripped produced empty output");
    // stripped uses prologue scan; output should still parse
    assert_parses_as_c(&c_output, "stripped/all");
}

// ---------------------------------------------------------------------------
// Layer 3: Harness validation (ast_equiv correctness)
// ---------------------------------------------------------------------------

#[test]
fn harness_identical_match() {
    let a = "int foo() { return 42; }";
    let b = "int bar() { return 42; }";
    assert!(unlace_test_harness::ast_equiv(a, b).is_ok());
}

#[test]
fn harness_structural_divergence() {
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

// ---------------------------------------------------------------------------
// Bulk golden corpus scan — single test that iterates all 150 files.
// Faster than 150 individual test fns for CI, and easier to maintain.
// ---------------------------------------------------------------------------

#[test]
fn golden_corpus_all_files_parse() {
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
    eprintln!("Golden corpus self-parse: {passed}/{total} passed");
    if !failures.is_empty() {
        eprintln!("Failures:");
        for f in &failures {
            eprintln!("  {f}");
        }
    }

    // All golden files must self-parse — this is not a "pass rate" test,
    // it's corpus integrity. Any failure means the file is corrupted or
    // tree-sitter-c can't handle the Hex-Rays dialect.
    assert!(
        failures.is_empty(),
        "{} of {total} golden files failed self-parse: {:?}",
        failures.len(),
        failures,
    );
}
