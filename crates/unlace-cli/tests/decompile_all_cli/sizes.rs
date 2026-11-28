//! Function extents, instruction budgets and aggregate exit codes.

use super::*;

/// (unlace, `functions-json-size`) The cheap inventory call must carry an extent,
/// so a caller can rank a binary's functions by weight without decompiling it.
///
/// The regression this pins is the *absence*: `functions --json` records used to
/// be `name`/`address`/`address_hex`/`aliases` only, so "decompile the three
/// biggest functions" cost a whole `decompile-all`. Vendored acceptance probe:
/// `tests/cli/functions-json-size.json`.
///
/// `aif_gap_x86_64` is the fixture the need was filed against — stripped, so its
/// extents come from the clip alone and not from any ELF `st_size`.
#[test]
fn functions_json_carries_a_ranking_extent() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/aif_gap_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let (stdout, stderr, ok) = run_unlace(&["functions", &bin, "--json", "--sleighpath", &specs()]);
    if !ok {
        panic!("unlace functions failed: {stderr}");
    }
    let sizes = json_sizes(&stdout);
    let count = json_count(&stdout).expect("the inventory must report a count");
    assert_eq!(
        sizes.len(),
        count,
        "every one of the {count} inventory records must carry `size`:\n{stdout}"
    );
    // The point of the field: it must DISCRIMINATE. An all-zero (or all-equal)
    // column would satisfy "the key exists" while leaving the caller exactly as
    // unable to rank as before — which is how this shipped broken on
    // `decompile-all`, where `size` came from the requested flow bound and so was
    // 0 on every record.
    assert!(
        sizes.iter().any(|&s| s > 0),
        "the inventory extents are all zero, so nothing can be ranked:\n{stdout}"
    );
    assert!(
        sizes
            .iter()
            .collect::<std::collections::BTreeSet<_>>()
            .len()
            > 1,
        "the inventory extents are all equal, so nothing can be ranked:\n{stdout}"
    );
    // The `.plt.got` thunk at 0x1030 is 8 bytes and the big `.text` tail at
    // 0x13c9 is 682: a thunk must not read as heavy as a real function.
    assert!(
        stdout.contains("\"address_hex\": \"0x1030\"") && sizes.contains(&8),
        "the 8-byte `.plt.got` thunk must report its real extent:\n{stdout}"
    );
    assert!(
        sizes.iter().any(|&s| s > 512),
        "the large `.text` function must outrank the thunks:\n{stdout}"
    );
}

/// (unlace, `functions-json-size`) `functions` and `decompile-all` must report the
/// SAME extent for the same entry — one field name, one meaning.
///
/// `decompile-all`'s `size` used to come from `Funcdata::get_size()`, which is
/// the *requested* flow bound (always "unbounded", i.e. 0, on a whole-binary
/// run), so the field was structurally dead on every record. Copying that into
/// the inventory would have satisfied the letter of the need and none of it.
#[test]
fn functions_and_decompile_all_agree_on_size() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/aif_gap_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let (inventory, stderr, ok) = run_unlace(&["functions", &bin, "--json", "--sleighpath", &sp]);
    if !ok {
        panic!("unlace functions failed: {stderr}");
    }
    let (decompiled, stderr, ok) =
        run_unlace(&["decompile-all", &bin, "--json", "--sleighpath", &sp]);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    // Both documents are address-ordered over the same entry set, so the size
    // columns line up positionally. The inventory also lists the `.got` slot of
    // an import no PLT stub fronts, which has a name and no body to decompile.
    let want: Vec<u64> = json_sizes(&inventory)
        .into_iter()
        .filter(|&size| size != 0)
        .collect();
    let got = json_sizes(&decompiled);
    assert_eq!(
        want, got,
        "the inventory and the whole-binary run disagree on function extents"
    );
}

/// (DIV-120) A function past the instruction budget reports the body unlace DID
/// decode, not nothing.  `--option maxinstruction 5` puts `fauxware`'s `main` in
/// the state the 1.8M-instruction obfuscated checker of
/// `docs/re-needs/checker-exceeds-instruction-ceiling.md` is in by default: the
/// decompiling surfaces clear `error_toomanyinstructions`, so the overrun
/// truncates the flow under a warning header that names the knob instead of
/// failing the function with `code: null`.  Naming the option explicitly still
/// restores the upstream hard failure — that is the second pass.
#[test]
fn instruction_budget_overrun_truncates_instead_of_failing() {
    let bin = fauxware();
    let sp = specs();
    let budget = [
        "decompile-all",
        &bin,
        "--functions",
        "main",
        "--json",
        "--sleighpath",
        &sp,
        "--option",
        "maxinstruction",
        "5",
    ];
    let (truncated, stderr, ok) = run_unlace(&budget);
    if !ok {
        panic!("unlace decompile-all failed: {stderr}");
    }
    assert!(
        truncated.contains("Exceeded the 5 instruction budget"),
        "the truncated body must carry the budget warning header:\n{truncated}"
    );
    assert!(
        truncated.contains("--option maxinstruction N"),
        "the warning must name the knob that raises the budget:\n{truncated}"
    );
    assert!(
        !truncated.contains("Flow exceeded maximum allowable instructions"),
        "the overrun must not be reported as a failure:\n{truncated}"
    );

    // Same run, upstream's policy named back on: the function fails outright and
    // carries no code, which is what every CLI decompile used to do.
    let mut fatal = budget.to_vec();
    fatal.extend_from_slice(&["--option", "errortoomanyinstructions", "on"]);
    let (failed, stderr, ok) = run_unlace(&fatal);
    assert!(!ok, "an all-failed batch must exit nonzero: {failed}");
    assert!(
        failed.contains("Flow exceeded maximum allowable instructions")
            && failed.contains("\"code\": null")
            && failed.contains("\"error\": \"decompilation produced zero function bodies"),
        "`--option errortoomanyinstructions on` must restore the hard failure:\n{failed}"
    );
    assert!(
        stderr.contains("decompilation produced zero function bodies")
            && stderr.contains("per-function error record"),
        "the run-level failure was not reported on stderr: {stderr}"
    );
}

/// A selected set with no body is a failed RUN, after its complete per-function
/// records have been emitted. One usable body keeps the batch recoverable even
/// when another function failed.
#[test]
fn aggregate_exit_distinguishes_all_failed_from_partial_success() {
    let bin = fauxware();
    let sp = specs();
    let fatal = [
        "--option",
        "maxinstruction",
        "5",
        "--option",
        "errortoomanyinstructions",
        "on",
        "--sleighpath",
        &sp,
    ];

    let mut text_args = vec!["decompile-all", &bin, "--functions", "main"];
    text_args.extend_from_slice(&fatal);
    let (stdout, stderr, ok) = run_unlace(&text_args);
    assert!(!ok, "an all-failed text batch exited zero");
    assert!(
        stdout.contains("// Function: main @ 0x40071d")
            && stdout.contains("Flow exceeded maximum allowable instructions"),
        "the failed function record was not preserved: {stdout}"
    );
    assert!(
        stderr.contains("zero function bodies"),
        "no run-level diagnostic: {stderr}"
    );

    let mut mixed_args = vec![
        "decompile-all",
        &bin,
        "--functions",
        "main,__libc_csu_fini",
        "--json",
    ];
    mixed_args.extend_from_slice(&fatal);
    let (stdout, stderr, ok) = run_unlace(&mixed_args);
    assert!(
        ok,
        "a partial-success batch must remain recoverable: {stderr}"
    );
    assert!(
        stdout.contains("\"error\": null"),
        "partial run gained a top-level error: {stdout}"
    );
    assert!(
        stdout.contains("Flow exceeded maximum allowable instructions")
            && stdout.contains("void __libc_csu_fini(void)"),
        "the mixed control needs one error and one body: {stdout}"
    );
}

/// Fast discovery must not depend on the Listing carrying disassembly text.
///
/// `--mode fast` builds the Listing for `fast_funcdisc` alone, and that walk
/// captures no assembly text — nothing left in the mode reads it except AIF's
/// prologue fingerprint, which re-decodes the two instructions it needs. Drop that
/// fallback and the fingerprint histogram comes back empty, which silently takes
/// every pointer-validated function with it: on `aif_gap_x86_64` the target
/// reachable only through a function-pointer table (`0x13ae`) simply stops being
/// enumerated.
#[test]
fn fast_discovery_finds_the_pointer_only_target() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/aif_gap_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let args = [
        "functions",
        &bin,
        "--json",
        "--sleighpath",
        &sp,
        "--mode",
        "fast",
    ];
    let (stdout, stderr, ok) = run_unlace(&args);
    if !ok {
        panic!("unlace functions failed: {stderr}");
    }
    let fast = json_addresses(&stdout);
    assert!(
        fast.contains(&0x13ae),
        "`--mode fast` must enumerate the pointer-only function 0x13ae: {fast:x?}"
    );

    // The control: with the fast walk off, nothing finds it.
    let mut off = args.to_vec();
    off.extend_from_slice(&["--option", "fast_funcdisc", "off"]);
    let (stdout, stderr, ok) = run_unlace(&off);
    assert!(ok, "unlace functions failed: {stderr}");
    assert!(
        !json_addresses(&stdout).contains(&0x13ae),
        "0x13ae must come from the fast walk alone:\n{stdout}"
    );
}
