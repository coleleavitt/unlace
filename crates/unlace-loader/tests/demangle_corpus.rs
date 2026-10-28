//! Demangling corpus round-trip test (ROADMAP Phase B.6.1).
//!
//! Proves that real mangled symbol names run through the loader's *public*
//! demangling entry points and resolve to readable identifiers. Each case is
//! a `(mangled, expected_substring)` pair; the demangled output must contain
//! the expected substring.
//!
//! Scope note on C++: the full Itanium grammar demangler
//! (`unlace_passes::itanium_demangle::demangle_itanium`) lives in the
//! `unlace-passes` crate, which depends on `unlace-loader` — so the loader
//! cannot call it without a dependency cycle. The C++ name-decoding surface
//! actually reachable from this crate is the RTTI name decorator
//! [`unlace_loader::msvc_rtti::demangle_rtti_name`], which strips MSVC RTTI
//! decoration (`.?AV…@@`) down to the class identifier. That is what the C++
//! rows below exercise. (The loader's deeper Itanium typeinfo parser
//! `rtti::parse_itanium_name` is private and not part of the public API.)

#[cfg(feature = "unwired")]
use unlace_loader::demangle_rust::try_demangle_rust;
use unlace_loader::demangle_swift::try_demangle_swift;
use unlace_loader::msvc_rtti::demangle_rtti_name;

/// `(mangled, expected_substring)` rows for the `rustc-demangle`-backed
/// Rust demangler. Covers both v0 (`_R…`) and legacy hashed (`_ZN…17h…E`).
#[cfg(feature = "unwired")]
const RUST_CASES: &[(&str, &str)] = &[
    // v0 scheme (RFC 2603): `hash::foo`.
    ("_RNvCs2bWZRtgL14g_4hash3foo", "hash"),
    ("_RNvCs2bWZRtgL14g_4hash3foo", "foo"),
    // legacy hashed scheme (RFC 0689): `core::fmt::Write::write_fmt`.
    (
        "_ZN4core3fmt5Write9write_fmt17h0123456789abcdefE",
        "write_fmt",
    ),
    ("_ZN4core3fmt5Write9write_fmt17h0123456789abcdefE", "core"),
];

/// `(mangled, expected_substring)` rows for the in-house Swift identifier
/// decoder. Covers the Swift 5+ stable-ABI `$s` prefix and the legacy
/// `_T0` (Swift 4) prefix.
const SWIFT_CASES: &[(&str, &str)] = &[
    // Swift 5+ stable ABI: `main.sayHi`.
    ("$s4main6sayHiyyF", "main"),
    ("$s4main6sayHiyyF", "sayHi"),
    // Legacy Swift 4 `_T0` prefix.
    ("_T04main6sayHiyyF", "main"),
    ("_T04main6sayHiyyF", "sayHi"),
];

/// `(decorated, expected_substring)` rows for the MSVC RTTI name decorator
/// — the C++ name-decoding surface reachable from this crate.
const CPP_RTTI_CASES: &[(&str, &str)] = &[
    (".?AVMyClass@@", "MyClass"),
    ("?AUBar@@", "Bar"),
    (".?AVNamespaced@@", "Namespaced"),
];

#[cfg(feature = "unwired")]
#[test]
fn rust_corpus_round_trips() {
    for (mangled, expected) in RUST_CASES {
        let out = try_demangle_rust(mangled)
            .unwrap_or_else(|| panic!("rust demangler returned None for {mangled}"));
        assert!(
            out.contains(expected),
            "rust: {mangled} => {out:?}, expected to contain {expected:?}",
        );
    }
}

#[test]
fn swift_corpus_round_trips() {
    for (mangled, expected) in SWIFT_CASES {
        let out = try_demangle_swift(mangled)
            .unwrap_or_else(|| panic!("swift demangler returned None for {mangled}"));
        assert!(
            out.contains(expected),
            "swift: {mangled} => {out:?}, expected to contain {expected:?}",
        );
    }
}

#[test]
fn cpp_rtti_corpus_round_trips() {
    for (mangled, expected) in CPP_RTTI_CASES {
        let out = demangle_rtti_name(mangled);
        assert!(
            out.contains(expected),
            "cpp-rtti: {mangled} => {out:?}, expected to contain {expected:?}",
        );
    }
}

/// Sanity guard: the demanglers must reject names that belong to another
/// language's scheme, so corpus rows can't accidentally pass via the wrong
/// demangler.
#[cfg(feature = "unwired")]
#[test]
fn demanglers_reject_foreign_schemes() {
    // A Swift symbol is not Rust, and vice-versa.
    assert!(try_demangle_rust("$s4main6sayHiyyF").is_none());
    assert!(try_demangle_swift("_RNvCs2bWZRtgL14g_4hash3foo").is_none());
    // Plain Itanium C++ without a Rust hash suffix is not claimed by Rust.
    assert!(try_demangle_rust("_ZN3foo3barEv").is_none());
}
