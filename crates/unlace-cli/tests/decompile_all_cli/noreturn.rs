//! No-return propagation, error isolation and opt-in source-line comments.

use super::*;

/// decbench F1 (DIV-15), the two-pass gate at the exact benchmark surface:
///
/// - **reliable fallback** (`listing` injected on ⇒ the default-on `noreturn_propagate`
///   fixpoint fires): `compute`'s single `call my_die` is concluded no-return —
///   the no-return terminator appears and the post-call dead fall-through is
///   gone (the "collapsed" form);
/// - **`--option listing off`** (the explicit opt-out = the pre-F1 behavior):
///   `my_die` is treated as returning, the dead fall-through survives, and the
///   output is the inflated form (on real stripped binaries this is the
///   swallow-the-next-function shape, e.g. coreutils `xalloc_die`,
///   118 LOC / 2 gotos for a 4-instruction body).
#[test]
fn decompile_all_listing_default_collapses_noreturn_wrapper() {
    let bin = noreturn_fixture();
    let sleigh = specs();
    let base = [
        "decompile-all",
        bin.as_str(),
        "--functions",
        "compute",
        "--json",
        "--sleighpath",
        sleigh.as_str(),
        "--mode",
        "reliable",
    ];

    // Pass 1: reliable has no listing override, so the driver fallback fires.
    let (on_out, stderr, ok) = run_unlace(&base);
    if !ok {
        panic!("unlace decompile-all (default) failed: {stderr}");
    }
    let on_code = code_field(&on_out).to_string();
    assert!(
        on_code.contains("// no-return"),
        "default decompile-all must mark the my_die() wrapper call no-return \
         (the Listing default is not reaching noreturn_propagate):\n{on_code}"
    );

    // Pass 2: the opt-out — `--option listing off` restores the old behavior.
    let mut off_args = base.to_vec();
    off_args.extend_from_slice(&["--option", "listing", "off"]);
    let (off_out, stderr, ok) = run_unlace(&off_args);
    assert!(
        ok,
        "unlace decompile-all --option listing off failed: {stderr}"
    );
    let off_code = code_field(&off_out).to_string();
    assert!(
        !off_code.contains("// no-return"),
        "listing-off output must NOT mark my_die() no-return (the opt-out must \
         restore the pre-F1 rendering):\n{off_code}"
    );
    assert_ne!(
        on_code, off_code,
        "the Listing default must change compute's decompilation"
    );
    assert!(
        on_code.len() < off_code.len(),
        "the no-return collapse must SHRINK the function (dead fall-through \
         eliminated):\n--- default ({} bytes) ---\n{on_code}\n--- listing off ({} bytes) ---\n{off_code}",
        on_code.len(),
        off_code.len()
    );

    // An EXPLICIT `--option listing on` must be byte-identical to the default
    // (the injection only fills the unset case; it never double-applies).
    let mut expl_args = base.to_vec();
    expl_args.extend_from_slice(&["--option", "listing", "on"]);
    let (expl_out, stderr, ok) = run_unlace(&expl_args);
    assert!(
        ok,
        "unlace decompile-all --option listing on failed: {stderr}"
    );
    assert_eq!(
        code_field(&expl_out),
        on_code,
        "explicit `--option listing on` must match the injected default"
    );
}

#[test]
fn functions_lists_main() {
    let bin = fauxware();
    let (stdout, stderr, ok) = run_unlace(&["functions", &bin, "--json", "--sleighpath", &specs()]);
    if !ok {
        panic!("unlace functions failed: {stderr}");
    }
    assert!(
        stdout.contains("\"name\": \"main\""),
        "enumeration missing `main`:\n{stdout}"
    );
    assert!(
        stdout.contains("\"address\""),
        "enumeration missing addresses:\n{stdout}"
    );
}

/// (unlace, Ghidra-gap) The `error(nonzero,…)` boundary-overrun fix. `err_fatal`
/// (0x4011c0) ends in `call error(2,…)` — glibc `error()` with a nonzero status
/// never returns — so the decompile-all seam must prune its fall-through (a
/// `CALL_RETURN` flow override) exactly as Ghidra does ("Subroutine does not
/// return"). Without the prune the flow-follower walks past the call into the
/// following function `compute` (0x4011f0) and absorbs it, inflating the CFG —
/// the single biggest cause of unlace losing to Ghidra proper on the benchmark
/// (~50% of the ghidra-beats-unlace GED cases were this boundary overrun).
///
/// The test isolates exactly the fix: `--option noreturn_known off` (no error
/// recognizer ⇒ no prune ⇒ err_fatal absorbs `compute`) must yield a LARGER
/// function byte-extent than the default (`noreturn_known on`, the prune fires).
#[test]
fn decompile_all_error_nonzero_does_not_absorb_next_function() {
    let bin = noreturn_error_fixture();
    let sp = specs();
    let code = |extra: &[&str]| -> String {
        let mut a: Vec<&str> = vec![
            "decompile-all",
            &bin,
            "--addr",
            "0x4011c0",
            "--json",
            "--sleighpath",
            &sp,
        ];
        a.extend_from_slice(extra);
        let (stdout, stderr, ok) = run_unlace(&a);
        assert!(ok, "decompile-all failed: {stderr}");
        stdout
    };
    // OFF: err_fatal's flow walks past `call error(2)` into the following functions.
    // `funcboundflow` (default-on, DIV-67) is a SECOND, name-independent bound that
    // stops the same overrun at `compute`'s entry, so it must also be off to expose
    // the pre-fix overrun this test isolates.
    let off = code(&[
        "--option",
        "noreturn_known",
        "off",
        "--option",
        "funcboundflow",
        "off",
        "--option",
        "fdeflowbound",
        "off",
    ]);
    // ON (default): the CALL_RETURN prune stops err_fatal at the no-return call.
    let on = code(&[]);
    // `err_warn` belongs to `compute_warn` — a DIFFERENT function two hops after
    // err_fatal. It can only appear in err_fatal's decompilation if the flow-follower
    // overran `call error(2)` and absorbed the following functions. OFF must show the
    // overrun; ON (the prune) must not.
    assert!(
        off.contains("err_warn"),
        "with noreturn_known off, err_fatal should overrun and absorb the following \
         functions (the pre-fix behaviour):\n{off}"
    );
    assert!(
        !on.contains("err_warn"),
        "noreturn_known must prune the `call error(2)` fall-through so err_fatal does \
         NOT absorb `compute`/`compute_warn`:\n{on}"
    );
}

/// (unlace, Ghidra-gap) The SINGLE-function `unlace decompile` path must also prune the
/// `error(nonzero)` fall-through — not just `decompile-all`. It now builds the Listing by
/// default (like decompile-all) and `IfcDecompile` applies the CALL_RETURN overrides, so
/// `err_fatal` @ 0x4011c0 does not overrun into the following `compute`/`compute_warn`.
/// `--option noreturn_known off` disables the recognizer ⇒ the overrun returns (control).
#[test]
fn unlace_decompile_single_error_nonzero_does_not_absorb_next_function() {
    let bin = noreturn_error_fixture();
    let sp = specs();
    let code = |extra: &[&str]| -> String {
        let mut a: Vec<&str> = vec!["decompile", &bin, "0x4011c0", "--addr", "--sleighpath", &sp];
        a.extend_from_slice(extra);
        let (stdout, stderr, ok) = run_unlace(&a);
        assert!(ok, "unlace decompile failed: {stderr}");
        stdout
    };
    // `err_warn` belongs to `compute_warn`, a DIFFERENT function — it appears in err_fatal's
    // output ONLY if the flow overran past `call error(2)`.  `funcboundflow` (default-on,
    // DIV-67) is a second, name-independent bound at `compute`'s entry, so it too must be
    // off to expose the pre-fix overrun.
    let off = code(&[
        "--option",
        "noreturn_known",
        "off",
        "--option",
        "funcboundflow",
        "off",
        "--option",
        "fdeflowbound",
        "off",
    ]);
    let on = code(&[]);
    assert!(
        off.contains("err_warn"),
        "noreturn_known off: single-function err_fatal should overrun (pre-fix):\n{off}"
    );
    assert!(
        !on.contains("err_warn"),
        "the single-function `unlace decompile` path must prune the error(2) fall-through:\n{on}"
    );
}

/// `dwarf_lines` must stay a per-run opt-in even under `--mode aggressive`.
///
/// `auto` (the file-frontend default since DIV-40) resolves to `aggressive`
/// below 500 KiB, so while `aggressive` carried `dwarf_lines on` every small
/// `-g` binary rendered its whole body interleaved with `/* src.c:NNN */`
/// comments by default. `cet_pie_x86_64` (20 KiB, DWARF, resolves to
/// `aggressive`) is the repro: annotated only when the option is named.
#[test]
fn dwarf_source_line_comments_stay_opt_in_under_every_mode() {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures/cet_pie_x86_64")
        .to_str()
        .unwrap()
        .to_string();
    let sp = specs();
    let code = |extra: &[&str]| -> String {
        let mut a: Vec<&str> = vec![
            "decompile",
            &bin,
            "elaborate_debug_symbol",
            "--sleighpath",
            &sp,
        ];
        a.extend_from_slice(extra);
        let (stdout, stderr, ok) = run_unlace(&a);
        if !ok {
            panic!("unlace decompile failed for {extra:?}: {stderr}");
        }
        stdout
    };

    let default = code(&[]);
    assert!(
        default.contains("elaborate_debug_symbol"),
        "expected the function body, got:\n{default}"
    );
    assert!(
        !default.contains("/* debug_symbol.c:"),
        "the default (auto -> aggressive here) must NOT annotate source lines:\n{default}"
    );

    let aggressive = code(&["--mode", "aggressive"]);
    assert!(
        !aggressive.contains("/* debug_symbol.c:"),
        "--mode aggressive must NOT annotate source lines:\n{aggressive}"
    );

    // Named explicitly, the pass still works — and outranks the mode.
    let opted_in = code(&["--option", "dwarf_lines", "on"]);
    assert!(
        opted_in.contains("/* debug_symbol.c:124 */"),
        "`--option dwarf_lines on` must still annotate source lines:\n{opted_in}"
    );
}
