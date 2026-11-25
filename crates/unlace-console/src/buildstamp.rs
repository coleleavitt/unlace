//! The build handshake between `unlace` and the engine binaries it spawns.
//!
//! `unlace decompile` and `unlace catalog` run `decomp_dbg`; a parent can also spawn
//! `decomp_test_dbg`. Either can come from a different build than the `unlace`
//! that spawned it -- `UNLACE_DECOMP_DBG` pointing at another install, or a sibling
//! left behind when only `unlace` was rebuilt -- and nothing in the render says so.
//!
//! The parent exports the matching [`identity`] as [`PARENT_ENV`]. The child compares it
//! with its own at startup ([`answer_parent`]) and, only when they differ, writes
//! one [`REPLY`] line carrying its own identity to stderr. The parent strips that
//! line from the stderr it captured and names both builds in one warning
//! ([`take_reply`]). Matching builds exchange nothing but the variable; a child
//! that predates the handshake ignores it and so cannot warn. Stdout is never
//! written: it carries the console transcript and the datatest grammar.
//!
//! The variable name and the reply prefix are read by builds that differ by
//! definition, so neither may change.
//!
//! An identity is the version `unlace --version` prints plus a fingerprint of the
//! selected child's production source graph (`build.rs`). `decomp_dbg` uses the
//! engine graph; `decomp_test_dbg` adds `unlace-harness` to that graph.

use std::path::Path;
use std::sync::OnceLock;
use std::sync::atomic::{AtomicBool, Ordering};

/// The environment variable the parent sets to its own [`identity`].
pub const PARENT_ENV: &str = "UNLACE_PARENT_BUILD";

/// The stderr line prefix a mismatched child answers with.
pub const REPLY: &str = "unlace-build-mismatch: ";

#[derive(Clone, Copy, Debug, Eq, PartialEq)]
pub enum ChildKind {
    Engine,
    Harness,
}

/// The release `MAJOR.MINOR` baked by release CI, else the workspace Cargo version.
pub const VERSION: &str = match option_env!("UNLACE_VERSION") {
    Some(v) => v,
    None => env!("CARGO_PKG_VERSION"),
};

/// This build's identity: `<version> (source <fingerprint>)`.
pub fn identity(kind: ChildKind) -> &'static str {
    static ENGINE: OnceLock<String> = OnceLock::new();
    static HARNESS: OnceLock<String> = OnceLock::new();
    match kind {
        ChildKind::Engine => ENGINE.get_or_init(|| {
            format!(
                "{VERSION} (source {})",
                env!("UNLACE_ENGINE_SOURCE_FINGERPRINT")
            )
        }),
        ChildKind::Harness => HARNESS.get_or_init(|| {
            format!(
                "{VERSION} (source {})",
                env!("UNLACE_HARNESS_SOURCE_FINGERPRINT")
            )
        }),
    }
}

/// The child half: answer a parent whose identity differs from ours.
pub fn answer_parent(kind: ChildKind) {
    let ours = identity(kind);
    if let Some(parent) = unlace_base::env::var_os(PARENT_ENV) {
        if parent != ours {
            eprintln!("{REPLY}{ours}");
        }
    }
}

/// Remove every reply line from a child's stderr, returning the remaining text
/// and the identity the child answered with, if it answered.
pub fn take_reply(stderr: &str) -> (String, Option<String>) {
    if !stderr.contains(REPLY) {
        return (stderr.to_string(), None);
    }
    let mut rest = String::with_capacity(stderr.len());
    let mut theirs = None;
    for line in stderr.split_inclusive('\n') {
        match line.strip_prefix(REPLY) {
            Some(id) => theirs = Some(id.trim_end_matches(['\r', '\n']).to_string()),
            None => rest.push_str(line),
        }
    }
    (rest, theirs)
}

/// The warning for a child that answered `theirs`. `pinned_by` names the flag or
/// variable that chose the child, when one did.
pub fn mismatch_warning(
    kind: ChildKind,
    child_name: &str,
    child: &Path,
    theirs: &str,
    pinned_by: Option<&str>,
) -> String {
    let unlace = std::env::current_exe()
        .map(|p| p.display().to_string())
        .unwrap_or_else(|_| "unlace".to_string());
    let width = child_name.len().max("unlace".len()) + 1;
    let pinned = pinned_by
        .map(|p| format!(", chosen by {p}"))
        .unwrap_or_default();
    format!(
        "warning: {child_name} is a different build from this unlace\n\
         \x20 {:<width$} {} {unlace}\n\
         \x20 {:<width$} {theirs} {}{pinned}\n",
        "unlace:",
        identity(kind),
        format!("{child_name}:"),
        child.display(),
    )
}

/// The parent half, after the child exited: strip its reply from `stderr` and,
/// the first time in this process that a child answered, print the warning.
pub fn report(
    kind: ChildKind,
    stderr: String,
    child_name: &str,
    child: &Path,
    pinned_by: Option<&str>,
) -> String {
    static WARNED: AtomicBool = AtomicBool::new(false);
    let (rest, theirs) = take_reply(&stderr);
    if let Some(theirs) = theirs {
        if !WARNED.swap(true, Ordering::Relaxed) {
            eprint!(
                "{}",
                mismatch_warning(kind, child_name, child, &theirs, pinned_by)
            );
        }
    }
    rest
}

#[cfg(test)]
mod tests;
