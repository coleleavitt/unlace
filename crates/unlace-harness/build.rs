//! Build script: only the dev-only `dynamic_linking` rpath (crates/unlace-decomp-dylib).

use std::env;

fn main() {
    println!("cargo:rerun-if-changed=build.rs");
    dynamic_linking_rpath();
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
