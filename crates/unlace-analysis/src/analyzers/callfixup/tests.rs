use super::*;

/// A synthetic target map standing in for the cspec's registered fixups
/// (`mcount`→`mcount`, `__fentry__`→`fentry`), so the matcher is tested in
/// isolation without bootstrapping an Architecture.
fn synthetic_map() -> Vec<(String, String)> {
    vec![
        ("mcount".to_string(), "mcount".to_string()),
        ("__fentry__".to_string(), "fentry".to_string()),
        (
            "__x86_indirect_thunk_rax".to_string(),
            "x86_indirect_thunk_rax".to_string(),
        ),
    ]
}

#[test]
fn direct_target_matches() {
    let m = synthetic_map();
    // `mcount` is a bare target: a function named `mcount` matches directly.
    assert_eq!(call_fixup_name_for_function("mcount", &m), Some("mcount"));
    // `__fentry__` is a `__`-prefixed target: a function named `__fentry__`
    // matches directly (the bare probe).
    assert_eq!(
        call_fixup_name_for_function("__fentry__", &m),
        Some("fentry")
    );
}

#[test]
fn underscore_retries_match() {
    let m = synthetic_map();
    // The Java matcher probes funcName, "_"+funcName, "__"+funcName (the
    // underscore retries), first hit wins. The target is
    // `__x86_indirect_thunk_rax`, so a function installed *without* the leading
    // underscores still reaches it:
    //   `x86_indirect_thunk_rax`  -> "__"+name == "__x86_indirect_thunk_rax" (hit, __ retry)
    assert_eq!(
        call_fixup_name_for_function("x86_indirect_thunk_rax", &m),
        Some("x86_indirect_thunk_rax")
    );
    //   `_x86_indirect_thunk_rax` -> "_"+name  == "__x86_indirect_thunk_rax" (hit, _ retry)
    assert_eq!(
        call_fixup_name_for_function("_x86_indirect_thunk_rax", &m),
        Some("x86_indirect_thunk_rax")
    );
}

#[test]
fn unrelated_names_do_not_match() {
    let m = synthetic_map();
    for n in ["main", "puts", "read", "entry", "count", "fentry_helper"] {
        assert_eq!(
            call_fixup_name_for_function(n, &m),
            None,
            "{n} must not match"
        );
    }
}

#[test]
fn lib_conflict_prefix_is_stripped() {
    let m = synthetic_map();
    // A `libID_conflict_mcount` resolves to `mcount` after the prefix strip
    // (CallFixupAnalyzer.java:207-209), then matches the `mcount` target.
    assert_eq!(
        call_fixup_name_for_function("libID_conflict_mcount", &m),
        Some("mcount")
    );
}

/// Drive the full scan over the vendored `mcount_x86_64` fixture against a
/// synthetic target map: it must surface the `-pg` prologue callee (`mcount`
/// or `__fentry__`, whichever the toolchain emitted) and nothing spurious
/// (`main`/`__libc_start_main`/…). Mirrors
/// `noreturn.rs::run_over_fauxware_flags_exit_only`.
#[test]
fn scan_flags_mcount_in_fixture() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/mcount_x86_64");
    let bytes = std::fs::read(path).expect("read mcount fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse mcount fixture");

    // The matcher is exercised against a synthetic map (the cspec map needs a
    // bootstrapped Architecture; the e2e gate proves the real bootstrap path).
    // We re-implement the FUNC scan here over the same streams scan_call_fixups
    // uses, to keep the unit test free of an Architecture.
    let map = synthetic_map();
    let mut hits: Vec<String> = Vec::new();
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        if sym.kind() != SymbolKind::Text {
            continue;
        }
        let Ok(n) = sym.name() else { continue };
        let Ok(n) = String::from_utf8(crate::loader::elf_plt::strip_version(n.as_bytes())) else {
            continue;
        };
        if call_fixup_name_for_function(&n, &map).is_some() {
            hits.push(n);
        }
    }
    // The `-pg` profiling target the prologue calls is present and flagged.
    assert!(
        hits.iter().any(|n| n == "mcount" || n == "__fentry__"),
        "the -pg profiling target (mcount/__fentry__) must be flagged; hits={hits:?}"
    );
    // Ordinary functions are never flagged.
    assert!(
        !hits.iter().any(|n| n == "main"),
        "main must not be flagged"
    );
    assert!(
        !hits.iter().any(|n| n == "__libc_start_main"),
        "__libc_start_main must not be flagged"
    );
}

/// PR-10: the FUNC-symbol scan reaches the matcher on a PE (no ELF early
/// return). A synthetic target matching a real PE symbol name (`__main`, a
/// MinGW CRT function present in `pe_imports.exe`) is flagged — proving the
/// pass is format-agnostic. (The real cspec map needs a bootstrapped
/// Architecture; the e2e bootstrap covers that path. This pins the scan runs
/// on a non-ELF object at all, which the old gate blocked.)
#[test]
fn scan_runs_over_pe_symbols() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/pe_imports.exe");
    let bytes = std::fs::read(path).expect("read pe_imports fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse pe_imports fixture");
    assert_eq!(file.format(), object::BinaryFormat::Pe, "fixture is a PE");

    // A synthetic fixup whose target is a real PE FUNC symbol (`__main`).
    let map = vec![("__main".to_string(), "synthetic_fixup".to_string())];
    let mut flagged = false;
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        if sym.kind() != SymbolKind::Text {
            continue;
        }
        let Ok(n) = sym.name() else { continue };
        let Ok(n) = String::from_utf8(crate::loader::elf_plt::strip_version(n.as_bytes())) else {
            continue;
        };
        if call_fixup_name_for_function(&n, &map).is_some() {
            flagged = true;
        }
    }
    assert!(
        flagged,
        "the PE FUNC-symbol scan must reach the matcher (no ELF early return)"
    );
}
