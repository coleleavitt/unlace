//! The source fingerprints behind the `unlace` <-> engine-binary build handshake
//! (`src/buildstamp.rs`).
//!
//! The engine fingerprint covers `unlace-console` and its production workspace
//! dependency graph. The harness fingerprint starts at `unlace-harness`, whose
//! `decomp_test_dbg` binary adds the datatest runner above that engine graph.
//! Both include the workspace manifest and lockfile, and both hash contents
//! rather than mtimes or git state so debug and release builds of one source
//! tree agree.

use std::env;
use std::path::PathBuf;

#[path = "src/buildstamp_fingerprint.rs"]
mod fingerprint;

fn main() {
    dynamic_linking_rpath();
    let manifest = PathBuf::from(env::var_os("CARGO_MANIFEST_DIR").unwrap_or_default());
    let workspace = manifest
        .parent()
        .and_then(|p| p.parent())
        .expect("unlace-console must live under <workspace>/crates");
    let engine = fingerprint::calculate(workspace, "unlace-console")
        .expect("failed to fingerprint the decomp_dbg source graph");
    let harness = fingerprint::calculate(workspace, "unlace-harness")
        .expect("failed to fingerprint the decomp_test_dbg source graph");
    for path in engine.watched.union(&harness.watched) {
        println!("cargo:rerun-if-changed={}", path.display());
    }
    println!(
        "cargo:rustc-env=UNLACE_ENGINE_SOURCE_FINGERPRINT={:016x}",
        engine.value
    );
    println!(
        "cargo:rustc-env=UNLACE_HARNESS_SOURCE_FINGERPRINT={:016x}",
        harness.value
    );
}

/// With the dev-only `dynamic_linking` feature, give this package's binaries an rpath to the
/// engine dylib (`target/<profile>/deps`) and the toolchain's `libstd`, so they run outside
/// `cargo run` (crates/unlace-decomp-dylib).
fn dynamic_linking_rpath() {
    if env::var_os("CARGO_FEATURE_DYNAMIC_LINKING").is_none()
        || env::var("CARGO_CFG_TARGET_OS").as_deref() != Ok("linux")
    {
        return;
    }
    println!("cargo:rustc-link-arg-bins=-Wl,-rpath,$ORIGIN/deps");
    let rustc = env::var_os("RUSTC").unwrap_or_else(|| "rustc".into());
    if let Ok(out) = std::process::Command::new(rustc)
        .args(["--print", "sysroot"])
        .output()
        && out.status.success()
    {
        let sysroot = String::from_utf8_lossy(&out.stdout).trim().to_owned();
        println!("cargo:rustc-link-arg-bins=-Wl,-rpath,{sysroot}/lib");
    }
}
