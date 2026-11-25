use super::*;

/// Every real-shaped name is returned BORROWED: the bound costs the ordinary
/// load nothing.
#[test]
fn real_names_are_untouched_and_unallocated() {
    for n in [
        "main",
        "std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()",
        "core::str::traits::core::ops::range::RangeFrom::get",
        "llvm::orc::shared::detail::serializeViaSPSToWrapperFunctionResult",
        "outer::anonymous_namespace::Widget::emit",
        "a::::b",
        "::absolute",
    ] {
        assert!(
            matches!(bound_scope_path(n, "::"), Cow::Borrowed(_)),
            "{n} must borrow"
        );
    }
}

/// The count bound folds, and the fold is stable, idempotent, and
/// distinctness-preserving.
#[test]
fn deep_paths_fold_to_the_cap() {
    let at8 = |n: &str| bound_scope_path_capped(n, "::", 8).into_owned();
    let deep = format!("{}z", "a::".repeat(1000));
    let out = at8(&deep);
    assert_ne!(out, deep);
    let comps: Vec<&str> = out.split("::").collect();
    assert_eq!(comps.len(), 9, "8 scope components + the base name: {out}");
    assert_eq!(comps[8], "z", "the base name is verbatim");
    assert!(
        comps[7].starts_with("a__x"),
        "the fold keeps a readable lead: {}",
        comps[7]
    );

    // Deterministic across calls, and idempotent (the read path re-bounds
    // a name the listing already renders folded).
    assert_eq!(at8(&deep), out);
    assert!(matches!(
        bound_scope_path_capped(&out, "::", 8),
        Cow::Borrowed(_)
    ));
    assert_eq!(at8(&out), out);

    // Distinct originals stay distinct.
    let other = format!("{}z", "a::".repeat(1001));
    assert_ne!(at8(&other), out);

    // Two base names under the same deep path share the folded SCOPE.
    let sib = format!("{}y", "a::".repeat(1000));
    let sib_out = at8(&sib);
    assert_eq!(
        sib_out.rsplit_once("::").unwrap().0,
        out.rsplit_once("::").unwrap().0,
        "the fold hashes the scope range, never the base name"
    );
}

/// An over-long scope component folds; an over-long BASE name does not.
#[test]
fn component_length_folds_but_the_base_name_is_never_rewritten() {
    let long = "q".repeat(4000);
    let name = format!("ns::{long}::base");
    let out = bound_scope_path(&name, "::");
    let comps: Vec<&str> = out.split("::").collect();
    assert_eq!(comps[0], "ns");
    assert_eq!(comps[1].len(), MAX_COMPONENT_LEN);
    assert!(comps[1].starts_with("qqq") && comps[1].contains(SUFFIX_TAG));
    assert_eq!(comps[2], "base");

    // A 4,000-byte BASE name (the real 928-byte D-language symbol shape,
    // exaggerated) is left exactly alone -- it nests no Scope.
    let basename_only = format!("ns::{long}");
    assert!(matches!(
        bound_scope_path(&basename_only, "::"),
        Cow::Borrowed(_)
    ));
}

/// The total-scope-path bound folds from the head and converges.
#[test]
fn total_scope_path_is_bounded() {
    // 60 components x 200 bytes = 12,120 bytes of scope path: under both
    // the count cap and the per-component cap, over the total.
    let name = format!("{}base", format!("{}::", "w".repeat(200)).repeat(60));
    let out = bound_scope_path_capped(&name, "::", 128);
    let (path, base) = out.rsplit_once("::").unwrap();
    assert_eq!(base, "base");
    assert!(
        path.len() + 2 <= MAX_SCOPE_PATH_LEN,
        "scope path {} > {MAX_SCOPE_PATH_LEN}",
        path.len()
    );
    for c in path.split("::") {
        assert!(c.len() <= MAX_COMPONENT_LEN);
    }
    assert!(
        matches!(bound_scope_path_capped(&out, "::", 128), Cow::Borrowed(_)),
        "idempotent"
    );
}

/// A folded component can never re-split, re-nest, or reach emitted C as
/// punctuation.
#[test]
fn folded_components_are_identifier_safe() {
    let name = "a(b)::c d::e:f::g::h::base";
    let out = bound_scope_path_capped(name, "::", 2);
    let comps: Vec<&str> = out.split("::").collect();
    assert_eq!(comps.len(), 3, "2 scope components + base: {out}");
    for c in &comps[..2] {
        assert!(
            c.bytes().all(|b| b.is_ascii_alphanumeric()
                || b == b'_'
                || b == b'('
                || b == b')'
                || b == b' '),
            "{c}"
        );
    }
    // The SYNTHETIC one is strictly identifier-safe.
    assert!(
        comps[1]
            .bytes()
            .all(|b| b.is_ascii_alphanumeric() || b == b'_'),
        "{}",
        comps[1]
    );
}

/// FNV-1a 64 against its published vectors -- the spelling of a folded name
/// is part of unlace's output contract, so the hash is pinned, not inherited.
#[test]
fn fnv1a64_matches_the_published_vectors() {
    assert_eq!(fnv1a64(b""), 0xcbf2_9ce4_8422_2325);
    assert_eq!(fnv1a64(b"a"), 0xaf63_dc4c_8601_ec8c);
    assert_eq!(fnv1a64(b"foobar"), 0x8594_4171_f739_67e8);
}

/// Non-ASCII bytes never cause a slice panic: the length fold lands on a
/// char boundary and the sanitizer works per byte.
#[test]
fn multibyte_names_do_not_panic() {
    let comp = "\u{4e16}\u{754c}".repeat(200); // 1,200 bytes, 3 per char
    let name = format!("{comp}::{comp}::{comp}::{comp}::{comp}::base");
    let out = bound_scope_path_capped(&name, "::", 4);
    assert!(out.ends_with("::base"));
    assert!(matches!(
        bound_scope_path_capped(&out, "::", 4),
        Cow::Borrowed(_)
    ));
}
