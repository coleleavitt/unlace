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
