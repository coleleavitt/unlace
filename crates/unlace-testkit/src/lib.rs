//! Shared helpers for integration tests: one place that knows where the repository,
//! the vendored specs and the committed fixtures live.

use std::path::PathBuf;

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
