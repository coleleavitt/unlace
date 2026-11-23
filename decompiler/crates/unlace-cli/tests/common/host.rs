//! Host gates for tests that build their input with a cross toolchain backend
//! (a clang or llvm-mc target, a linker emulation) that not every machine has.
//!
//! A gate runs a small probe that exercises exactly the backend the test needs.
//! Off CI a failed probe skips the test with a note on stderr; with `CI` set (as
//! GitHub Actions sets it) the same failure panics, so a runner that loses a
//! backend fails instead of skipping.

use std::process::Command;

/// Does `command`, a probe of `what`, succeed on this host?
pub fn has(what: &str, command: &mut Command) -> bool {
    let reason = match command.output() {
        Ok(output) if output.status.success() => return true,
        Ok(output) => String::from_utf8_lossy(&output.stderr).trim().to_owned(),
        Err(error) => error.to_string(),
    };
    assert!(
        std::env::var_os("CI").is_none(),
        "CI must provide {what}: {command:?}: {reason}"
    );
    eprintln!("skipped: this host lacks {what} ({reason})");
    false
}

/// Can the C compiler `cc` compile for `triple`?
pub fn cc_targets(cc: &str, triple: &str) -> bool {
    has(
        &format!("{cc} --target={triple}"),
        Command::new(cc).args([
            &format!("--target={triple}"),
            "-c",
            "-x",
            "c",
            "/dev/null",
            "-o",
            "/dev/null",
        ]),
    )
}

/// Can `llvm-mc` (the binary `mc`) assemble for `triple`?
pub fn mc_targets(mc: &str, triple: &str) -> bool {
    has(
        &format!("{mc} -triple={triple}"),
        Command::new(mc).args([
            &format!("-triple={triple}"),
            "-filetype=obj",
            "/dev/null",
            "-o",
            "/dev/null",
        ]),
    )
}
