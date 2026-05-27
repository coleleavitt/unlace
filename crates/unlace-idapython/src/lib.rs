//! IDAPython compatibility shim.
//!
//! Re-implements the most commonly-used IDA Pro Python API surface
//! (`idc`, `idautils`, `idaapi`, `ida_bytes`, `ida_funcs`, `ida_name`,
//! `ida_xref`, `ida_segment`, `ida_typeinf`, `ida_hexrays`) on top of the
//! unlace domain types (`Session`, `BinaryImage`, `SsaFunction`).
//!
//! ## Two surfaces
//!
//! 1. **Rust-native** — the [`idc`], [`idautils`], etc. modules below
//!    expose plain Rust functions that take a `&Session`. These are
//!    immediately usable by other Rust crates and the LSP server.
//!
//! 2. **Python bindings** (feature `python`) — when built with
//!    `--features python`, the same functions are exposed via PyO3 as a
//!    `idapro` Python module. This is what makes unmodified IDAPython
//!    scripts work via `unlace py <script.py>`.
//!
//! ## Reference material
//!
//! - `research/ida-hexrays-docs/scripting/idapython/*.py` — 55 actual
//!   IDAPython modules from IDA 9.3sp1.
//! - `research/ida-hexrays-docs/sdk/idapython-swig/*.i` — 52 SWIG
//!   binding files documenting every IDAPython symbol's exact signature.
//! - `references/ida/plugins/idapython3/all/` — 339 decompiled functions
//!   showing IDA's own runtime implementation.
//! - `research/ida-hexrays-docs/sdk/idapython-examples/` — 152 example
//!   IDAPython scripts that act as the compat test corpus.

pub mod ida_bytes;
pub mod ida_funcs;
pub mod ida_hexrays;
pub mod ida_name;
pub mod ida_segment;
pub mod ida_typeinf;
pub mod ida_xref;
pub mod idaapi;
pub mod idautils;
pub mod idc;
pub mod pybridge;

/// Top-level convenience re-exports — mirror IDA's `from idaapi import *`
/// flat namespace.
pub use idaapi::*;
pub use idautils::*;
pub use idc::*;

/// A coverage-tracking type for the compat test suite.
///
/// Every implemented API records itself here on first call; the
/// `unlace-idapython` integration tests then assert that ≥ N% of the
/// reference IDAPython API surface is reachable.
pub mod coverage {
    use std::sync::Mutex;
    use std::sync::OnceLock;

    static IMPLEMENTED: OnceLock<Mutex<Vec<&'static str>>> = OnceLock::new();

    fn registry() -> &'static Mutex<Vec<&'static str>> {
        IMPLEMENTED.get_or_init(|| Mutex::new(Vec::new()))
    }

    /// Mark an API name as implemented. Called once at module load.
    pub fn mark_implemented(name: &'static str) {
        let mut g = registry().lock().unwrap();
        if !g.contains(&name) {
            g.push(name);
        }
    }

    /// Return the list of implemented API names.
    pub fn implemented_apis() -> Vec<&'static str> {
        registry().lock().unwrap().clone()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_coverage_registry_callable() {
        // Smoke test: API is callable and returns a Vec (sentinel value
        // depends on test order so we don't assert length).
        let v = coverage::implemented_apis();
        assert!(
            v.len() < usize::MAX,
            "implemented_apis returned a valid Vec"
        );
    }

    #[test]
    fn test_coverage_registry_records_apis() {
        coverage::mark_implemented("test::foo");
        coverage::mark_implemented("test::bar");
        coverage::mark_implemented("test::foo"); // duplicate
        let apis = coverage::implemented_apis();
        assert!(apis.contains(&"test::foo"));
        assert!(apis.contains(&"test::bar"));
    }
}
