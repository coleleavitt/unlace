use std::process::{Command, Output};

fn unlace_bin() -> Command {
    let mut cmd = Command::new(env!("CARGO_BIN_EXE_unlace"));
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
    let tmpfile = "/tmp/unlace_test_output.ir";
    let output = unlace_bin()
        .args([
            "decompile",
            "--emit",
            "ir",
            "--function",
            "main",
            "--output",
            tmpfile,
        ])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(
        output.status.success(),
        "stderr: {}",
        String::from_utf8_lossy(&output.stderr)
    );

    let content = std::fs::read_to_string(tmpfile).expect("should have written output file");
    assert!(
        content.contains("func main"),
        "file should contain IR: {content}"
    );
    let _ = std::fs::remove_file(tmpfile);
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
        stdout.contains("while (v6 !="),
        "sum_for should preserve a comparison against the input bound: {stdout}"
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
