//! Every `unlace-lift-*` crate must be reachable from the `unlace-lift` facade.
//!
//! A lifter crate with no reverse dependency is dead weight: it builds, it
//! drifts, and nothing ever runs it. Wire new lifters into
//! `crates/unlace-lift/Cargo.toml` or, if one is deliberately standalone, add it
//! to `STANDALONE` below with the reason.

use std::collections::BTreeSet;
use std::fs;
use std::path::PathBuf;

/// Lifter crates intentionally not behind the facade, with the reason.
const STANDALONE: &[(&str, &str)] = &[(
    "unlace-lift-lua",
    "Lua bytecode lifter exposes its own ir_lift API and does not implement \
     the `Lifter` trait; the Lua arch is FixtureOnly in unlace_ir::arch_support",
)];

fn crates_dir() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .parent()
        .expect("crates/ directory")
        .to_path_buf()
}

#[test]
fn every_lifter_crate_is_reachable_from_the_facade() {
    let facade_manifest =
        fs::read_to_string(PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("Cargo.toml"))
            .expect("read unlace-lift Cargo.toml");

    let lifter_crates: BTreeSet<String> = fs::read_dir(crates_dir())
        .expect("read crates/")
        .filter_map(Result::ok)
        .filter_map(|entry| entry.file_name().into_string().ok())
        .filter(|name| name.starts_with("unlace-lift-"))
        .collect();

    let standalone: BTreeSet<&str> = STANDALONE.iter().map(|(name, _)| *name).collect();

    let orphans: Vec<&String> = lifter_crates
        .iter()
        .filter(|name| !standalone.contains(name.as_str()))
        .filter(|name| !facade_manifest.contains(&format!("{name} = ")))
        .collect();

    assert!(
        orphans.is_empty(),
        "lifter crates not wired into unlace-lift (add a dependency, delete them, or list in STANDALONE): {orphans:?}"
    );

    let stale: Vec<&&str> = standalone
        .iter()
        .filter(|name| !lifter_crates.contains(**name))
        .collect();
    assert!(
        stale.is_empty(),
        "STANDALONE lists crates that no longer exist: {stale:?}"
    );
}
