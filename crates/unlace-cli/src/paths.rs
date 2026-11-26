//! Locate the engine programs and the compiled SLEIGH tree — the Rust port of
//! `unlace/paths.py`.
//!
//! `unlace` is the whole toolchain: its hidden `decomp_dbg` and `slacomp`
//! subcommands run the decompiler console and the SLEIGH compiler, so `unlace
//! decompile` and `unlace specs` re-enter the running binary rather than look for
//! siblings. A release build also carries the SLEIGH tree inside itself
//! ([`crate::embedded_specs`]), which makes the one file a complete install.
//!
//! A build without the embedded tree finds one in either of two layouts:
//!
//! * **a repo checkout** — `unlace` is built to
//!   `<root>/target/[<triple>/]<profile>/unlace`, so the repo root is the
//!   directory holding that `target` and the workspace's `crates/`, and `specs/`
//!   sits under it (or, when the target dir lives outside the checkout, the
//!   checkout the binary was built from, if it still exists);
//! * **an extracted directory** — a `specs/` tree beside or inside the directory
//!   holding `unlace`. There is no repo root there, so nothing may be derived from
//!   one: popping three parents off it lands on a path that exists nowhere.
//!
//! The environment overrides (`UNLACE_ROOT`, `UNLACE_SPECS`, `UNLACE_DECOMP_DBG`,
//! `UNLACE_SLACOMP` — all documented in `docs/cli.md`) win over all of this.

use std::env;
use std::path::{Path, PathBuf};
use std::process::Command;

/// A non-empty environment variable read as a path (`OsString`, so a Windows
/// path that is not valid UTF-8 still resolves).
fn env_path(var: &str) -> Option<PathBuf> {
    unlace_base::env::var_os(var)
        .filter(|v| !v.is_empty())
        .map(PathBuf::from)
}

/// The directory the running `unlace` binary lives in (its built-binary siblings).
fn exe_dir() -> Option<PathBuf> {
    let exe = env::current_exe().ok()?;
    exe.parent().map(|p| p.to_path_buf())
}

/// The repo root when `dir` really is an in-tree build directory.
///
/// In-tree the binary sits at `<root>/target/[<triple>/]<profile>/unlace`,
/// so the marker is a `target` directory whose parent holds the workspace's
/// `crates/unlace-cli/Cargo.toml`; the walk
/// covers the cross-compiled (`--target <triple>`) and `deps/` forms too.  Any
/// other directory — an extracted release archive, `/usr/local/bin` — has no repo
/// root, and this returns `None` rather than inventing one.
fn in_tree_root(dir: &Path) -> Option<PathBuf> {
    let mut cur = Some(dir);
    while let Some(d) = cur {
        let is_target = d.file_name().is_some_and(|n| n == "target");
        if is_target
            && let Some(root) = d.parent()
            && root
                .join("crates")
                .join("unlace-cli")
                .join("Cargo.toml")
                .is_file()
        {
            return Some(root.to_path_buf());
        }
        cur = d.parent();
    }
    None
}

/// The checkout this binary was built from, when it still is one: a build whose
/// target dir lives outside the checkout (`CARGO_TARGET_DIR`, a `target` symlink
/// that `current_exe` resolves) has no in-tree path back to it.
fn build_root() -> Option<PathBuf> {
    let root = Path::new(env!("CARGO_MANIFEST_DIR")).join("../..");
    root.join("crates")
        .join("unlace-cli")
        .join("Cargo.toml")
        .is_file()
        .then(|| root.canonicalize().unwrap_or(root))
}

/// A directory holding a SLEIGH tree (`Ghidra/Processors/...`).
fn is_spec_tree(dir: &Path) -> bool {
    dir.join("Ghidra").join("Processors").is_dir()
}

/// Where `specs_dir()` looks when neither `UNLACE_SPECS` nor `UNLACE_ROOT` pins it:
/// the checkout's `specs/` (the one holding the binary, else the one it was built
/// from), then the two places a release archive's separately
/// downloaded `specs/` tree lands (inside the extracted directory, or beside it),
/// then the current directory's.
fn specs_search_dirs() -> Vec<PathBuf> {
    let mut dirs: Vec<PathBuf> = Vec::new();
    let mut push = |d: PathBuf| {
        if !dirs.contains(&d) {
            dirs.push(d);
        }
    };
    if let Some(dir) = exe_dir() {
        if let Some(root) = in_tree_root(&dir) {
            push(root.join("specs"));
        }
        if let Some(root) = build_root() {
            push(root.join("specs"));
        }
        push(dir.join("specs"));
        if let Some(parent) = dir.parent() {
            push(parent.join("specs"));
        }
    }
    if let Ok(cwd) = env::current_dir() {
        push(cwd.join("specs"));
    }
    if dirs.is_empty() {
        dirs.push(PathBuf::from("specs"));
    }
    dirs
}

/// The first candidate that actually holds a SLEIGH tree.
fn first_spec_tree(dirs: &[PathBuf]) -> Option<PathBuf> {
    dirs.iter().find(|d| is_spec_tree(d)).cloned()
}

/// Root passed as `-sleighpath` / `SLEIGHHOME` (contains `Ghidra/Processors/...`).
///
/// `UNLACE_SPECS` and `UNLACE_ROOT` pin it outright; then the tree built into this
/// binary, unpacked; otherwise the first [`specs_search_dirs`] entry that holds a
/// tree wins, falling back to the first candidate so the caller still has
/// something to name.
pub fn specs_dir() -> PathBuf {
    if let Some(specs) = env_path("UNLACE_SPECS") {
        return specs;
    }
    specs_dir_unpinned()
}

/// [`specs_dir`] with `specs` in place of `UNLACE_SPECS` when it is `Some`; an
/// empty path pins nothing, as an empty `UNLACE_SPECS` does.
pub fn specs_dir_with(specs: Option<&Path>) -> PathBuf {
    match specs {
        None => specs_dir(),
        Some(specs) if !specs.as_os_str().is_empty() => specs.to_path_buf(),
        Some(_) => specs_dir_unpinned(),
    }
}

/// [`specs_dir`] after `UNLACE_SPECS`.
fn specs_dir_unpinned() -> PathBuf {
    if let Some(root) = env_path("UNLACE_ROOT") {
        return root.join("specs");
    }
    if let Some(Ok(dir)) = crate::embedded_specs::tree() {
        return dir.clone();
    }
    let dirs = specs_search_dirs();
    first_spec_tree(&dirs).unwrap_or_else(|| dirs[0].clone())
}

/// The resolved SLEIGH root, or a diagnostic naming every directory probed.
pub fn require_specs_dir() -> Result<PathBuf, String> {
    let dir = specs_dir();
    if is_spec_tree(&dir) {
        return Ok(dir);
    }
    for var in ["UNLACE_SPECS", "UNLACE_ROOT"] {
        if env_path(var).is_some() {
            return Err(format!(
                "no SLEIGH specs at {} ({var}) -- it holds no Ghidra/Processors tree",
                dir.display()
            ));
        }
    }
    let unpack = match crate::embedded_specs::tree() {
        Some(Err(e)) => format!(" (the SLEIGH tree built into unlace could not be unpacked: {e})"),
        _ => String::new(),
    };
    Err(format!(
        "no SLEIGH specs found in {}{unpack} -- {}",
        joined(&specs_search_dirs()),
        SPECS_HINT
    ))
}

/// How to point unlace at a SLEIGH tree, for the failures that surface after the
/// directory itself resolved.
pub const SPECS_HINT: &str = "set UNLACE_SPECS to a specs/ directory (a checkout's specs/, whose .sla \
     images compile into the .sla cache on first use, or the unlace-v<ver>-specs release archive)";

/// A comma-separated rendering of a probe list, for a diagnostic.
fn joined(dirs: &[PathBuf]) -> String {
    dirs.iter()
        .map(|d| d.display().to_string())
        .collect::<Vec<_>>()
        .join(", ")
}

/// `env_var` itself when it is set, i.e. when it, not a probe, chose the binary.
pub fn pinned_by(env_var: &'static str) -> Option<&'static str> {
    env_path(env_var).map(|_| env_var)
}

/// A program `unlace` runs: a separate binary, or this `unlace` re-entered through
/// one of its hidden subcommands.
pub struct Program {
    pub path: PathBuf,
    pub subcommand: Option<&'static str>,
}

impl Program {
    /// A `Command` for the program, the subcommand already in its arguments.
    pub fn command(&self) -> Command {
        let mut cmd = Command::new(&self.path);
        if let Some(sub) = self.subcommand {
            cmd.arg(sub);
        }
        cmd
    }
}

/// The hidden subcommand that makes `unlace` the decompiler console.
pub const DECOMP_DBG_SUBCOMMAND: &str = "decomp_dbg";

/// The hidden subcommand that makes `unlace` the SLEIGH compiler.
pub const SLACOMP_SUBCOMMAND: &str = "slacomp";

/// `env_var`'s binary when it is set, otherwise this `unlace` running `subcommand`.
fn builtin(env_var: &str, subcommand: &'static str) -> Result<Program, String> {
    builtin_at(env_path(env_var), env_var, subcommand)
}

/// `pinned` (named `env_var` in a diagnostic) when it is set, otherwise this
/// `unlace` running `subcommand`.
fn builtin_at(
    pinned: Option<PathBuf>,
    env_var: &str,
    subcommand: &'static str,
) -> Result<Program, String> {
    if let Some(path) = pinned {
        if !path.exists() {
            return Err(format!(
                "{subcommand} not found at {} ({env_var})",
                path.display()
            ));
        }
        return Ok(Program {
            path,
            subcommand: None,
        });
    }
    let path = env::current_exe().map_err(|e| format!("cannot locate the unlace binary: {e}"))?;
    Ok(Program {
        path,
        subcommand: Some(subcommand),
    })
}

/// The decompiler console `unlace decompile` and `unlace catalog` drive.
pub fn decomp_dbg() -> Result<Program, String> {
    builtin("UNLACE_DECOMP_DBG", DECOMP_DBG_SUBCOMMAND)
}

/// [`decomp_dbg`] with `path` in place of `UNLACE_DECOMP_DBG` when it is `Some`;
/// an empty path pins nothing, as an empty `UNLACE_DECOMP_DBG` does.
pub fn decomp_dbg_with(path: Option<&Path>) -> Result<Program, String> {
    match path {
        None => decomp_dbg(),
        Some(path) => builtin_at(
            Some(path.to_path_buf()).filter(|p| !p.as_os_str().is_empty()),
            "UNLACE_DECOMP_DBG",
            DECOMP_DBG_SUBCOMMAND,
        ),
    }
}

/// The SLEIGH compiler `unlace specs` runs.
pub fn slacomp() -> Result<Program, String> {
    builtin("UNLACE_SLACOMP", SLACOMP_SUBCOMMAND)
}

#[cfg(test)]
mod tests;
