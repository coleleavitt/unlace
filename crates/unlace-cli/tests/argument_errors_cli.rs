use std::process::Command;

fn rejects_missing_value(prefix: &[&str], flag: &str) {
    let output = Command::new(env!("CARGO_BIN_EXE_unlace"))
        .args(prefix)
        .arg(flag)
        .env(
            "UNLACE_DECOMP_DBG",
            "/nonexistent/kuna-missing-argument-engine",
        )
        .output()
        .expect("run kuna");
    let stderr = String::from_utf8(output.stderr).expect("UTF-8 diagnostic");
    assert_eq!(output.status.code(), Some(2), "{prefix:?} {flag}: {stderr}");
    assert!(
        output.stdout.is_empty(),
        "{prefix:?} {flag} produced output"
    );
    assert_eq!(
        stderr,
        format!("error: {flag} requires a value\n"),
        "{prefix:?}"
    );
}

#[test]
fn catalog_stops_at_a_missing_flag_value() {
    for flag in [
        "--option",
        "--tier",
        "--engine",
        "--decomp-dbg",
        "--sleighpath",
    ] {
        rejects_missing_value(&["catalog"], flag);
    }
}

#[test]
fn decompile_reports_the_argument_error_before_resolving_the_request() {
    for json in [false, true] {
        let mut prefix = vec![
            "decompile",
            "/nonexistent/kuna-missing-argument-input",
            "main",
        ];
        if json {
            prefix.push("--json");
        }
        for flag in [
            "--base",
            "--slice",
            "--isa",
            "--target",
            "--language",
            "--mode",
            "--kassert",
            "--define-function",
            "--assert",
            "--decomp-dbg",
            "--engine",
            "--sleighpath",
            "--timeout",
        ] {
            rejects_missing_value(&prefix, flag);
        }
    }
}

#[test]
fn skill_installer_stops_at_a_missing_flag_value() {
    for flag in ["--agent", "--dir"] {
        rejects_missing_value(&["install-skill", "--print"], flag);
    }
}

#[test]
fn help_remains_a_successful_command() {
    for command in ["catalog", "decompile", "install-skill"] {
        let output = Command::new(env!("CARGO_BIN_EXE_unlace"))
            .args([command, "--help"])
            .output()
            .expect("run kuna");
        assert!(output.status.success(), "{command} --help failed");
        assert!(String::from_utf8_lossy(&output.stderr).starts_with("usage:"));
    }
}
