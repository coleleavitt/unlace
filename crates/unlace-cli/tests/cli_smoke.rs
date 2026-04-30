use std::process::Command;

fn unlace_bin() -> Command {
    let mut cmd = Command::new(env!("CARGO_BIN_EXE_unlace"));
    cmd.env_remove("RUST_LOG");
    cmd
}

fn fixture(name: &str) -> String {
    let manifest = env!("CARGO_MANIFEST_DIR");
    format!("{manifest}/../../fixtures/{name}")
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
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(stdout.contains("func main"), "IR should contain func header: {stdout}");
}

#[test]
fn decompile_emit_c() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c", "--function", "main"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(stdout.contains("main("), "C output should contain main: {stdout}");
}

#[test]
fn decompile_emit_cfg_dot() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "cfg-dot", "--function", "main"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(stdout.contains("digraph CFG"), "DOT output should contain digraph: {stdout}");
}

#[test]
fn decompile_function_by_hex_addr() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "ir", "--function", "0x1060"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(stdout.contains("func main"), "should resolve hex addr to main: {stdout}");
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
    assert!(stderr.contains("mismatch"), "should report mismatch: {stderr}");
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
        .args(["decompile", "--emit", "ir", "--function", "main", "--output", tmpfile])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));

    let content = std::fs::read_to_string(tmpfile).expect("should have written output file");
    assert!(content.contains("func main"), "file should contain IR: {content}");
    let _ = std::fs::remove_file(tmpfile);
}

#[test]
fn stripped_binary_discovers_functions_via_prologue_scan() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c"])
        .arg(fixture("stripped.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));
    let stdout = String::from_utf8_lossy(&output.stdout);
    let func_count = stdout.matches("sub_").count();
    assert!(func_count >= 2, "prologue scan should find multiple functions, found {func_count}");
}

#[test]
fn timeout_zero_emits_failure_comments() {
    let output = unlace_bin()
        .args(["decompile", "--emit", "c", "--timeout", "0", "--function", "main"])
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
        .args(["decompile", "--emit", "c", "--timeout", "5", "--function", "main"])
        .arg(fixture("hello_world.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(stdout.contains("main("), "should decompile within 5s timeout: {stdout}");
}

#[test]
fn all_fixtures_exit_zero() {
    for name in ["hello_world", "branches", "loops", "calls", "empty", "stripped", "medium"] {
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
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));
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
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(!stdout.is_empty(), "loops.elf should produce output");
    assert!(stdout.contains("main("), "should contain main: {stdout}");
}

#[test]
fn batch_merged_output() {
    let output = unlace_bin()
        .args(["batch", "--jobs", "2"])
        .arg(fixture("medium.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));
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
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));

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
    assert!(output.status.success(), "stderr: {}", String::from_utf8_lossy(&output.stderr));
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(!stdout.is_empty(), "single-threaded batch should produce output");
}

#[test]
fn batch_error_resilience() {
    let output = unlace_bin()
        .args(["batch", "--jobs", "1", "--timeout", "0"])
        .arg(fixture("medium.elf"))
        .output()
        .expect("failed to run unlace");
    assert!(output.status.success(), "batch should exit 0 even with failed functions");
    let stdout = String::from_utf8_lossy(&output.stdout);
    assert!(
        stdout.contains("/* FAILED:") || stdout.contains("// ═"),
        "should contain either failure comments or separators: {stdout}"
    );
}
