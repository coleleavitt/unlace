//! Dev-only dynamic-link facade: `unlace-decomp` (with every decompiler crate under it) and
//! `unlace-analysis`, built as one Rust `dylib`.
//!
//! A front-end built with its `dynamic_linking` feature names this crate with
//! `extern crate unlace_decomp_dylib;`. rustc then takes every crate this dylib contains from
//! the `.so` instead of linking it statically into each binary and test target, so an edit
//! links the engine once and each binary only links its own code against it. It does not make
//! the engine itself compile faster. Both crates are re-exported here because
//! `unlace-analysis` depends on `unlace-decomp` and the front-ends depend on both: one dylib
//! must hold both, or the engine would be linked twice.
//!
//! The binaries then need `libstd-*.so` and this `.so` at run time: `cargo run`/`cargo test`
//! set the library path, and the `unlace`, `decomp_dbg` and `decomp_test_dbg` build scripts
//! add an rpath (`$ORIGIN/deps` and the toolchain's `lib`); see `docs/dev-setup.md`.

pub use unlace_analysis;
pub use unlace_decomp;
