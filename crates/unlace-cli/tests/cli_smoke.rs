use std::process::{Command, Output};

fn unlace_bin() -> Command {
    let mut cmd = Command::new(env!("CARGO_BIN_EXE_unlace"));
    // A `RUST_LOG` inherited from the test runner would add diagnostics to
    // stderr; tests that want them pass `--log` explicitly.
    cmd.env_remove("RUST_LOG");
    cmd
}

fn fixture(name: &str) -> String {
    let manifest = env!("CARGO_MANIFEST_DIR");
    format!("{manifest}/../../fixtures/{name}")
}

fn cc_available() -> bool {
    Command::new("cc").arg("--version").output().is_ok()
}

fn compile_and_run_c_subset(generated: &str, stem: &str) -> Output {
    let temp = tempfile::tempdir().expect("tempdir");
    let source = temp.path().join(format!("{stem}.c"));
    let binary = temp.path().join(stem);
    std::fs::write(
        &source,
        format!(
            "#include <stdio.h>\n#define __stdcall\n#define __fastcall\n#define __aapcs\n\n{generated}"
        ),
    )
    .expect("write generated C");

    let compile = Command::new("cc")
        .args(["-std=c99", "-Wall", "-Werror"])
        .arg(&source)
        .arg("-o")
        .arg(&binary)
        .output()
        .expect("failed to invoke cc");
    assert!(
        compile.status.success(),
        "cc failed\nstdout:\n{}\nstderr:\n{}\nsource:\n{}",
        String::from_utf8_lossy(&compile.stdout),
        String::from_utf8_lossy(&compile.stderr),
        generated,
    );

    Command::new(&binary)
        .output()
        .expect("failed to run binary")
}

fn assert_no_known_bad_subset_shapes(generated: &str, label: &str) {
    for needle in [
        "*(_QWORD *)(0LL)",
        "*(_DWORD *)(0LL)",
        "Unimplemented",
        "return result;",
    ] {
        assert!(
            !generated.contains(needle),
            "{label} compileable subset must not contain {needle:?}: {generated}"
        );
    }
}

#[test]
fn version_flag() {
    let output = unlace_bin()
        .arg("--version")
        .output()
        .expect("failed to run unlace");
    assert!(output.status.success());
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(stdout.starts_with("unlace "), "got: {stdout}");
}

#[test]
fn decompile_emit_ir() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "ir", "--function", "main"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("func main"),
        "IR should contain func header: {stdout}"
    );
}

#[test]
fn decompile_emit_c() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c", "--function", "main"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stderr = String::from_utf8_lossy(&output.stderr);
    assert!(
        !stderr.contains("phase-monotonicity"),
        "normal CLI runs should not emit scheduler-audit noise by default: {stderr}"
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("main("),
        "C output should contain main: {stdout}"
    );
    assert!(
        stdout.contains("puts(\"Hello\");"),
        "C output should preserve the call site's string argument: {stdout}"
    );
    assert!(
        !stdout.contains("*(_QWORD *)(0LL)") && !stdout.contains("0x1074LL"),
        "C output must not leak synthetic x86 return-address stores: {stdout}"
    );
    assert!(
        stdout.contains("return 0;"),
        "C output should fold the zero written to eax into a direct return: {stdout}"
    );
}

/// Batch 16: with `--log unlace::schedule=info`, the CLI must
/// emit a single line that confirms the schedule passed the
/// exception-aware monotonicity check, naming the registered backedge
/// exceptions instead of the prior ambiguous "intentional in current
/// pipeline" blurb. This proves a representative decompile can explain
/// its scheduler order without ambiguous warnings.
#[test]
fn decompile_with_validate_pipeline_env_emits_explicit_backedge_summary() {
    let output = unlace_bin()
        .args([
            "--log",
            "unlace::schedule=info",
            "decompile",
            "--emit",
            "c",
            "--function",
            "main",
        ])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stderr = String::from_utf8_lossy(&output.stderr);
    // Must produce a phase-monotonicity audit line.
    assert!(
        stderr.contains("phase-monotonicity check"),
        "with unlace::schedule=info the CLI must emit the audit banner: {stderr}"
    );
    // The banner must name how many backedges are explicitly allowed
    // — proving the new exception-aware validator is wired, not the
    // pre-Batch-16 generic "intentional in current pipeline" message.
    assert!(
        stderr.contains("explicitly-allowed backedges")
            || stderr.contains("unexplained out-of-order"),
        "audit banner must use the exception-aware wording: {stderr}"
    );
    // And there must NOT be any unexplained transition in the
    // canonical pipeline — if there is, the schedule has drifted.
    assert!(
        !stderr.contains("unexplained out-of-order"),
        "canonical pipeline contains an unexplained backward transition: {stderr}"
    );
}

#[test]
fn ir_dump_maturity_dump_emits_representative_phase_snapshots() {
    let snapshot_dir = tempfile::tempdir().expect("tempdir");
    let config_path = snapshot_dir.path().join("unlace.toml");
    let dump_dir = snapshot_dir.path().join("maturity");
    std::fs::write(
        &config_path,
        format!(
            "[passes.diagnostics]\nmaturity_dump = {:?}\n",
            dump_dir.display().to_string()
        ),
    )
    .expect("write config");
    let output = unlace_bin()
        .arg("--config")
        .arg(&config_path)
        .args(["ir-dump", "--function", "main"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace ir-dump");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("func main"),
        "ir-dump should dump main: {stdout}"
    );

    let mut snapshot_names: Vec<String> = std::fs::read_dir(&dump_dir)
        .expect("read maturity snapshot dir")
        .map(|entry| {
            entry
                .expect("read maturity snapshot entry")
                .file_name()
                .into_string()
                .expect("snapshot file name should be utf8")
        })
        .collect();
    snapshot_names.sort();

    for stage in [
        "M_ZERO",
        "M_GENERATED",
        "M_PREOPTIMIZED",
        "M_LOCOPT",
        "M_CALLS",
        "M_GLBOPT",
        "M_LVARS",
        "M_FINAL",
    ] {
        assert!(
            snapshot_names.iter().any(|name| name.contains(stage)),
            "missing {stage} maturity snapshot: {snapshot_names:#?}"
        );
    }
    assert!(
        snapshot_names.iter().all(|name| !name.contains("iter2")),
        "hello_world.elf:main should converge before a third outer maturity iteration: {snapshot_names:#?}"
    );

    let final_snapshot = dump_dir.join("main-M_FINAL-iter0.txt");
    let final_ir = std::fs::read_to_string(&final_snapshot)
        .unwrap_or_else(|err| panic!("read {}: {err}", final_snapshot.display()));
    assert!(
        final_ir.contains("func main"),
        "final maturity snapshot should contain main IR: {final_ir}"
    );
}

#[test]
fn decompiled_hello_world_compileable_subset_runs() {
    if !cc_available() {
        eprintln!("skipping compileable-subset check: cc is not available");
        return;
    }

    let output = unlace_bin()
        .args(["decompile", "--emit", "c", "--function", "main"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );

    let generated = String::from_utf8(output.stdout).expect("C output should be utf8");
    assert!(
        generated.contains("puts(\"Hello\"); return 0;"),
        "compileable subset currently expects the recovered hello-world shape: {generated}"
    );
    assert_no_known_bad_subset_shapes(&generated, "hello_world.elf:main");

    let run = compile_and_run_c_subset(&generated, "hello_decompiled");
    assert!(
        run.status.success(),
        "compiled decompile exited with {:?}\nstderr:\n{}",
        run.status.code(),
        String::from_utf8_lossy(&run.stderr),
    );
    assert_eq!(String::from_utf8_lossy(&run.stdout), "Hello\n");
}

#[test]
fn decompiled_constant_main_compileable_subset_runs() {
    if !cc_available() {
        eprintln!("skipping compileable-subset check: cc is not available");
        return;
    }

    for (fixture_name, expected_return) in [
        ("branches.elf", 6),
        ("loops.elf", 0x87),
        ("calls.elf", 0x64),
    ] {
        let output = unlace_bin()
            .args(["decompile", "--emit", "c", "--function", "main"])
            .arg(fixture(fixture_name))
            .output()
            .unwrap_or_else(|e| panic!("failed to run unlace on {fixture_name}: {e}"));
        assert!(
            output.status.success(),
            "{fixture_name} stderr: {}",
            String::from_utf8_lossy(&output.stderr)
        );

        let generated = String::from_utf8(output.stdout).expect("C output should be utf8");
        assert!(
            generated.contains(&format!("return {expected_return:#x};"))
                || generated.contains(&format!("return {expected_return};")),
            "compileable subset currently expects a direct constant return for {fixture_name}: {generated}"
        );
        assert_no_known_bad_subset_shapes(&generated, &format!("{fixture_name}:main"));

        let stem = fixture_name.trim_end_matches(".elf").replace('-', "_");
        let run = compile_and_run_c_subset(&generated, &format!("{stem}_decompiled"));
        assert_eq!(
            run.status.code(),
            Some(expected_return),
            "compiled {fixture_name} main should return {expected_return}\nstdout:\n{}\nstderr:\n{}",
            String::from_utf8_lossy(&run.stdout),
            String::from_utf8_lossy(&run.stderr),
        );
        assert!(
            run.stdout.is_empty(),
            "{fixture_name} main should not print anything: {}",
            String::from_utf8_lossy(&run.stdout),
        );
    }
}

#[test]
fn batch14_rebaseline_cli_fixture_evidence() {
    let fixtures = [
        ("hello_world.elf", "main"),
        ("medium.elf", "main"),
        ("debug_calls.elf", "compute"),
        ("cpp_vtable.elf", "main"),
        ("arm64_features.elf", "_start"),
    ];

    for (binary, function) in fixtures {
        let quality = unlace_bin()
            .args(["quality", "--format", "json"])
            .arg(fixture(binary))
            .output()
            .unwrap_or_else(|e| panic!("failed to run quality on {binary}: {e}"));
        assert!(
            quality.status.success(),
            "{binary} quality failed: {}",
            String::from_utf8_lossy(&quality.stderr)
        );
        let quality_stdout = String::from_utf8_lossy(&quality.stdout);
        assert!(
            quality_stdout.contains("\"functions_ok\""),
            "{binary} quality JSON should include function counts: {quality_stdout}"
        );

        let decompile = unlace_bin()
            .args(["decompile", "--emit", "c", "--function", function])
            .arg(fixture(binary))
            .output()
            .unwrap_or_else(|e| panic!("failed to decompile {binary}:{function}: {e}"));
        assert!(
            decompile.status.success(),
            "{binary}:{function} decompile failed: {}",
            String::from_utf8_lossy(&decompile.stderr)
        );
        let decompile_stdout = String::from_utf8_lossy(&decompile.stdout);
        assert!(
            decompile_stdout.contains(function),
            "{binary}:{function} output should include the requested function: {decompile_stdout}"
        );
    }
}

/// BATCH15 semantic gate: `cpp_vtable.elf:main` is the C++/vtable fixture
/// family anchor. Source is `printf("%d\n", use_base(&d))` where `d` is a
/// `Derived` instance whose `value()` returns 42. After inlining +
/// devirtualization the binary literally calls `__printf_chk("%d\n", 42)`.
///
/// Final-C must therefore preserve:
/// - the call to a `printf` family function;
/// - the constant `0x2a` (= 42) as a literal argument (devirtualization
///   evidence — if vtable dispatch leaked through we'd see a function
///   pointer call instead);
/// - a clean `return 0;` (no `result` placeholder, no synthetic stack
///   stores).
///
/// We do *not* compile-and-run this subset because the `0x2004LL` literal
/// references the binary's `.rodata` format string — recreating it in a
/// host C subset would mean papering over the missing string-literal
/// recovery, which the handoff forbids. The check is shape-only.
#[test]
fn decompiled_cpp_vtable_main_devirtualized_constant() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c", "--function", "main"])
        .arg(fixture("cpp_vtable.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("printf("),
        "cpp_vtable:main should preserve the printf call site: {stdout}"
    );
    assert!(
        stdout.contains("0x2a"),
        "cpp_vtable:main should preserve the devirtualized 42 constant: {stdout}"
    );
    assert!(
        stdout.contains("return 0;"),
        "cpp_vtable:main should fold to a direct `return 0;`: {stdout}"
    );
    assert_no_known_bad_subset_shapes(&stdout, "cpp_vtable.elf:main");
}

/// BATCH15 semantic gate: `debug_structs.elf:main` is the struct fixture
/// family anchor. Source is
/// `struct Rect r = {{0,0},{10,20}}; printf("%d\n", area(&r));` where
/// `area` returns `r->size.x * r->size.y` = `10*20` = `200`. After
/// constant folding the binary calls `__printf_chk("%d\n", 200)`.
///
/// Final-C must preserve:
/// - the printf call site;
/// - the constant `0xc8` (= 200) as a literal argument (struct field
///   access + multiplication folded successfully);
/// - a clean `return 0;`.
///
/// Same caveat as cpp_vtable: we don't compile-and-run because the
/// format-string literal lives in the binary's .rodata.
#[test]
fn decompiled_debug_structs_main_constant_folded_area() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c", "--function", "main"])
        .arg(fixture("debug_structs.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("printf("),
        "debug_structs:main should preserve the printf call site: {stdout}"
    );
    assert!(
        stdout.contains("0xc8"),
        "debug_structs:main should preserve the constant-folded area (200 == 0xc8): {stdout}"
    );
    assert!(
        stdout.contains("return 0;"),
        "debug_structs:main should fold to a direct `return 0;`: {stdout}"
    );
    assert_no_known_bad_subset_shapes(&stdout, "debug_structs.elf:main");
}

/// BATCH15 semantic gate: `cpp_exceptions.elf:main` is the C++ exception
/// fixture family anchor. Source is `int main() { return safe_call(-1); }`.
/// `safe_call` is the function with the actual `try/catch` block, but for
/// `main` itself we just need to see the call site survive.
///
/// Negative checks (the handoff's listed "bad shapes"):
/// - no `Unimplemented` token leak (EH lowering used to leave these);
/// - no stale `return result;` placeholder;
/// - no null-address store artefacts (`*(_QWORD *)(0LL)`).
///
/// Positive shape check: the body must actually contain the `safe_call`
/// callsite, not just declare the function or recurse into noise.
#[test]
fn decompiled_cpp_exceptions_main_calls_safe_call() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c", "--function", "main"])
        .arg(fixture("cpp_exceptions.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("safe_call("),
        "cpp_exceptions:main should preserve the safe_call() call site: {stdout}"
    );
    assert_no_known_bad_subset_shapes(&stdout, "cpp_exceptions.elf:main");
}

/// BATCH15 semantic gate: `switch_table.elf:dispatch` is the switch /
/// jump-table fixture family anchor. Source is an 8-case `switch` plus
/// a `default`. The current pipeline does NOT yet structure this back
/// into a `switch` statement — it falls out as a poorly-recovered if/else
/// chain — so this gate is a *negative* one: even with weak structuring,
/// the output must remain free of known-bad shapes.
///
/// When switch recovery improves and this function starts emitting an
/// actual `switch (x)` block, tighten this test to a positive check.
#[test]
fn decompiled_switch_table_dispatch_no_bad_shapes() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c", "--function", "dispatch"])
        .arg(fixture("switch_table.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("dispatch("),
        "switch_table:dispatch should at least emit the function signature: {stdout}"
    );
    assert_no_known_bad_subset_shapes(&stdout, "switch_table.elf:dispatch");
}

/// BATCH15 semantic gate: `arm64_features.elf:_start` is the ARM64 /
/// non-x86 fixture family anchor. The hand-written source calls three
/// test helpers in order: `mul_test()`, `csel_test()`, `bitfield_test()`,
/// then returns. The lifter must therefore produce final-C that contains
/// all three callsites in some order, with no bad shapes.
#[test]
fn decompiled_arm64_start_calls_all_three_helpers() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c", "--function", "_start"])
        .arg(fixture("arm64_features.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    for callee in ["mul_test(", "csel_test(", "bitfield_test("] {
        assert!(
            stdout.contains(callee),
            "arm64_features:_start should call {callee} (got: {stdout})"
        );
    }
    assert_no_known_bad_subset_shapes(&stdout, "arm64_features.elf:_start");
}

#[test]
fn decompile_emit_cfg_dot() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "cfg-dot", "--function", "main"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("digraph CFG"),
        "DOT output should contain digraph: {stdout}"
    );
}

#[test]
fn decompile_function_by_hex_addr() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "ir", "--function", "0x1060"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("func main"),
        "should resolve hex addr to main: {stdout}"
    );
}

#[test]
fn decompile_nonexistent_function_errors() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "ir", "--function", "no_such_fn"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(!output.status.success());
}

#[test]
fn decompile_arch_mismatch_errors() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "ir", "--arch", "arm"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(!output.status.success());
    let stderr = String::from_utf8_lossy(&output.stderr);
    assert!(
        stderr.contains("mismatch"),
        "should report mismatch: {stderr}"
    );
}

#[test]
fn decompile_invalid_file_errors() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "ir"])
        .arg("/dev/null")
        .output()
        .expect("failed to run unlace");
    assert!(!output.status.success());
}

#[test]
fn decompile_output_to_file() {
    let dir = tempfile::tempdir().expect("tempdir");
    let tmpfile = dir.path().join("output.ir");
    let output = unlace_bin()
        .args([
            "decompile",
            "--emit",
            "ir",
            "--function",
            "main",
            "--output",
        ])
        .arg(&tmpfile)
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );

    let content = std::fs::read_to_string(&tmpfile).expect("should have written output file");
    assert!(
        content.contains("func main"),
        "file should contain IR: {content}"
    );
}

#[test]
fn decompile_capture_dir_writes_timestamped_snapshot() {
    let capture_root = tempfile::tempdir().expect("tempdir");
    let output = unlace_bin()
        .args([
            "decompile",
            "--emit",
            "c",
            "--function",
            "main",
            "--capture-dir",
        ])
        .arg(capture_root.path())
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );

    let mut entries = std::fs::read_dir(capture_root.path())
        .expect("read capture root")
        .map(|entry| entry.expect("capture entry").path())
        .collect::<Vec<_>>();
    entries.sort();
    assert_eq!(entries.len(), 1, "expected one capture run directory");

    let run_dir = &entries[0];
    let dirname = run_dir
        .file_name()
        .and_then(|name| name.to_str())
        .expect("capture directory name");
    let (timestamp, rest) = dirname
        .split_once("-hello_world-main-")
        .expect("capture dir should include timestamp, binary, function, and uuid");
    assert!(
        timestamp.chars().all(|ch| ch.is_ascii_digit()),
        "capture timestamp should be numeric: {dirname}"
    );
    assert_eq!(
        rest.len(),
        36,
        "capture suffix should be UUID-shaped: {dirname}"
    );

    let captured_output = std::fs::read(run_dir.join("output.c")).expect("capture output");
    assert_eq!(
        captured_output, output.stdout,
        "capture should match normal stdout byte-for-byte"
    );

    let manifest: serde_json::Value = serde_json::from_slice(
        &std::fs::read(run_dir.join("manifest.json")).expect("capture manifest"),
    )
    .expect("manifest json");
    assert_eq!(manifest["schema"], "unlace-decompile-capture-v1");
    assert_eq!(manifest["emit"], "C");
    assert_eq!(manifest["function_filter"], "main");
    assert_eq!(manifest["captured_output_file"], "output.c");
    assert_eq!(
        manifest["captured_output_bytes"].as_u64(),
        Some(output.stdout.len() as u64)
    );
}

#[test]
fn stripped_binary_discovers_functions_via_prologue_scan() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c"])
        .arg(fixture("stripped.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    let func_count = stdout.matches("sub_").count();
    assert!(
        func_count >= 2,
        "prologue scan should find multiple functions, found {func_count}"
    );
}

#[test]
fn timeout_zero_emits_failure_comments() {
    let output = unlace_bin()
        .args([
            "decompile",
            "--emit",
            "c",
            "--timeout",
            "0",
            "--function",
            "main",
        ])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(output.status.success(), "exit 0 even when functions fail");
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("/* decompilation failed"),
        "should contain failure comment: {stdout}"
    );
}

#[test]
fn timeout_flag_accepts_custom_value() {
    let output = unlace_bin()
        .args([
            "decompile",
            "--emit",
            "c",
            "--timeout",
            "5",
            "--function",
            "main",
        ])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("main("),
        "should decompile within 5s timeout: {stdout}"
    );
}

#[test]
fn all_fixtures_exit_zero() {
    for name in [
        "hello_world",
        "branches",
        "loops",
        "calls",
        "empty",
        "stripped",
        "medium",
    ] {
        let output = unlace_bin()
            .args(["decompile", "--emit", "c"])
            .arg(fixture(&format!("{name}.elf")))
            .output()
            .unwrap_or_else(|e| panic!("failed to run unlace on {name}: {e}"));
        assert!(
            output.status.success(),
            "{name}.elf failed: {}",
            String::from_utf8_lossy(&output.stderr)
        );
    }
}

#[test]
fn branches_fixture_has_output() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c"])
        .arg(fixture("branches.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(!stdout.is_empty(), "branches.elf should produce output");
    assert!(stdout.contains("main("), "should contain main: {stdout}");
}

#[test]
fn loops_fixture_has_output() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c"])
        .arg(fixture("loops.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(!stdout.is_empty(), "loops.elf should produce output");
    assert!(stdout.contains("main("), "should contain main: {stdout}");
}

#[test]
fn loops_sum_for_avoids_placeholder_condition_loop() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c", "--function", "sum_for"])
        .arg(fixture("loops.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        !stdout.contains("while (cond)"),
        "sum_for should not emit placeholder while condition: {stdout}"
    );
    assert!(
        !stdout.contains("if (cond)"),
        "sum_for should not emit placeholder if condition: {stdout}"
    );
    assert!(
        !stdout.contains("cond = 1"),
        "sum_for should not fold the loop condition to a constant temp: {stdout}"
    );
    assert!(
        !stdout.contains("while (v6 != 2)"),
        "sum_for should not collapse the loop guard to the stride constant: {stdout}"
    );
    assert!(
        !stdout.contains("while (v13 != 0)"),
        "sum_for should not print the loop-carried comparison as a stale temp-vs-zero guard: {stdout}"
    );
    assert!(
        stdout.contains("for (int i = 0; i < a1; i++)")
            || stdout.contains("while (a1 !=")
            || stdout.contains("while (v6 !="),
        "sum_for should preserve a bound-based counted loop: {stdout}"
    );
    assert!(
        !stdout.contains("int result;"),
        "sum_for should not declare an unused post-loop result temp: {stdout}"
    );
    assert!(
        !stdout.contains("return result;"),
        "sum_for should not return an unassigned result temp: {stdout}"
    );
    assert!(
        !stdout.contains("_BOOL cond") && !stdout.contains("cond ="),
        "sum_for should not emit dead synthetic condition temporaries: {stdout}"
    );
    assert!(
        !stdout.contains("int v34;") && !stdout.contains("v34 ="),
        "sum_for should not emit dead return-register copies: {stdout}"
    );
    assert!(
        !stdout.contains("v20"),
        "sum_for should not emit unused initialized one-shot temps: {stdout}"
    );
    assert!(
        !stdout.contains("\n    return;\n}"),
        "sum_for should not end a non-void helper with a bare return: {stdout}"
    );
    assert!(
        !stdout.contains("if (v6 == v13) {\n        } else {"),
        "sum_for should invert empty-then loop guard shells: {stdout}"
    );
}

#[test]
fn batch_merged_output() {
    let output = unlace_bin()
        .args(["batch", "--jobs", "2"])
        .arg(fixture("medium.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    let separator_count = stdout.matches("// ═").count();
    assert!(
        separator_count >= 2,
        "batch merged output should have multiple separators, found {separator_count}:\n{stdout}"
    );
}

#[test]
fn batch_output_dir() {
    let tmp = tempfile::tempdir().unwrap();
    let output = unlace_bin()
        .args(["batch", "--jobs", "2", "--output-dir"])
        .arg(tmp.path())
        .arg(fixture("medium.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );

    let c_files: Vec<_> = std::fs::read_dir(tmp.path())
        .unwrap()
        .filter_map(|e| e.ok())
        .filter(|e| e.path().extension().is_some_and(|ext| ext == "c"))
        .collect();
    assert!(
        c_files.len() >= 2,
        "output-dir should contain .c files, found {}",
        c_files.len()
    );
}

#[test]
fn batch_jobs_single_thread() {
    let output = unlace_bin()
        .args(["batch", "--jobs", "1"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        !stdout.is_empty(),
        "single-threaded batch should produce output"
    );
}

#[test]
fn dump_all_alias_defaults_to_all_dir_and_progress() {
    let tmp = tempfile::tempdir().unwrap();
    let output = unlace_bin()
        .current_dir(tmp.path())
        .args(["dump-all", "--jobs", "1", "--scope", "^main$"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );

    let outdir = tmp.path().join("all");
    assert!(
        outdir.exists(),
        "dump-all should default output directory to ./all"
    );
    let c_files: Vec<_> = std::fs::read_dir(&outdir)
        .unwrap()
        .filter_map(|e| e.ok())
        .filter(|e| e.path().extension().is_some_and(|ext| ext == "c"))
        .collect();
    assert!(
        !c_files.is_empty(),
        "dump-all should emit at least one per-function .c file"
    );
}

#[test]
fn batch_error_resilience() {
    let output = unlace_bin()
        .args(["batch", "--jobs", "1", "--timeout", "0"])
        .arg(fixture("medium.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "batch should exit 0 even with failed functions"
    );
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("/* FAILED:") || stdout.contains("// ═"),
        "should contain either failure comments or separators: {stdout}"
    );
}
