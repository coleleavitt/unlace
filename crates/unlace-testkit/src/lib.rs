//! Shared helpers for integration tests: one place that knows where the repository,
//! the vendored specs and the committed fixtures live.

use std::path::PathBuf;
use std::process::Command;

/// The captured result of one binary invocation.
pub struct Run {
    pub stdout: String,
    pub stderr: String,
    pub code: Option<i32>,
}

impl Run {
    pub fn success(&self) -> bool {
        self.code == Some(0)
    }

    /// The exit code, or -1 when the process was killed by a signal.
    pub fn code_or_signal(&self) -> i32 {
        self.code.unwrap_or(-1)
    }

    /// `(stdout, stderr, exit code)` with -1 for a signal death.
    pub fn into_triple(self) -> (String, String, i32) {
        let code = self.code_or_signal();
        (self.stdout, self.stderr, code)
    }
}

/// Run `bin` (a test passes `env!("CARGO_BIN_EXE_unlace")`) with `args` and extra environment.
pub fn run_bin_env(bin: &str, args: &[&str], env: &[(&str, &str)]) -> Run {
    let mut cmd = Command::new(bin);
    cmd.args(args);
    for (key, value) in env {
        cmd.env(key, value);
    }
    let out = cmd.output().expect("failed to spawn the binary under test");
    Run {
        stdout: String::from_utf8_lossy(&out.stdout).into_owned(),
        stderr: String::from_utf8_lossy(&out.stderr).into_owned(),
        code: out.status.code(),
    }
}

/// [`run_bin_env`] with no extra environment.
pub fn run_bin(bin: &str, args: &[&str]) -> Run {
    run_bin_env(bin, args, &[])
}

/// The repository root, resolved from this crate's location so it is independent of
/// the calling crate and of the test's working directory.
pub fn repo_root() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .expect("the repository root")
}

/// The vendored SLEIGH sources, `specs/` under the repository root.
pub fn specs_dir() -> PathBuf {
    repo_root().join("specs")
}

/// A committed analysis fixture by file name, `crates/unlace-analysis/tests/fixtures/<name>`.
pub fn fixture_path(name: &str) -> PathBuf {
    repo_root()
        .join("crates/unlace-analysis/tests/fixtures")
        .join(name)
}

/// Skip the calling test because the host lacks something it needs. Off CI this prints a note;
/// with `CI` set it panics, so a runner that loses a tool fails instead of passing silently.
pub fn skip(reason: &str) {
    assert!(
        std::env::var_os("CI").is_none(),
        "CI must not skip a test: {reason}"
    );
    eprintln!("skipped: {reason}");
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn repo_root_holds_the_workspace_manifest() {
        assert!(repo_root().join("Cargo.toml").is_file());
    }

    #[test]
    fn specs_dir_exists() {
        assert!(specs_dir().is_dir());
    }
}
