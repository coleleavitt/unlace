use super::*;
use std::sync::atomic::{AtomicU64, Ordering};

static TEMP_ID: AtomicU64 = AtomicU64::new(0);

/// `parse_args` reads the file's size to resolve the `auto` mode, so the
/// triage parse needs a real path — the bytes are never looked at.
fn sparse_binary() -> std::path::PathBuf {
    let id = TEMP_ID.fetch_add(1, Ordering::Relaxed);
    let path = std::env::temp_dir().join(format!("unlace-triage-{}-{id}.bin", std::process::id()));
    std::fs::File::create(&path)
        .expect("create triage fixture")
        .set_len(1024)
        .expect("size triage fixture");
    path
}

fn parse(cmd: &str, extra: &[&str]) -> Result<(Args, Filters), String> {
    let path = sparse_binary();
    let mut argv = vec![path.to_string_lossy().into_owned()];
    argv.extend(extra.iter().map(|s| (*s).to_string()));
    let parsed = parse_args_with_filters(&argv, cmd);
    std::fs::remove_file(path).expect("remove triage fixture");
    parsed
}

/// `Args`/`Filters` are not `Debug`, so a rejected parse is unwrapped here.
fn err(parsed: Result<(Args, Filters), String>) -> String {
    match parsed {
        Ok(_) => panic!("expected the parse to be rejected"),
        Err(e) => e,
    }
}

#[test]
fn sort_keys_are_the_three_documented_ones() {
    assert_eq!(SortKey::parse("addr").unwrap(), SortKey::Addr);
    assert_eq!(SortKey::parse("ADDRESS").unwrap(), SortKey::Addr);
    assert_eq!(SortKey::parse(" size ").unwrap(), SortKey::Size);
    assert_eq!(SortKey::parse("name").unwrap(), SortKey::Name);
    assert!(SortKey::parse("entropy").is_err());
    assert_eq!(SortKey::default(), SortKey::Addr);
}

#[test]
fn rust_signature_application_keeps_discovery_independent_of_selection() {
    let common = [
        "--mode",
        "reliable",
        "--apply-rust-signatures",
        "trusted.json",
    ];
    let (inventory, _) = parse("functions", &common).unwrap();
    let flags: Vec<_> = common.into_iter().chain(["--addr", "0x1000"]).collect();
    let (addressed, _) = parse("decompile", &flags).unwrap();
    assert_eq!(inventory.options, addressed.options);
    assert_eq!(
        addressed.apply_rust_signatures.as_deref(),
        Some("trusted.json")
    );
    for extra in [
        vec!["--jobs", "2"],
        vec!["--jobs", "auto"],
        vec!["--apply-rust-signatures", "second.json"],
        vec![
            "--summary",
            "--json",
            "--rust-signature-manifest",
            "report.json",
        ],
        vec!["--assert", "bytes 0x1000 90"],
    ] {
        let flags: Vec<_> = common.into_iter().chain(extra).collect();
        assert!(parse("functions", &flags).is_err(), "{flags:?}");
    }
    for command in ["decompile-all", "decompile-project", "decompile-graph"] {
        assert!(parse(command, &common).is_err(), "{command}");
    }
}

#[test]
fn rust_signature_manifest_requires_the_unmodified_json_summary_surface() {
    let valid = [
        "--summary",
        "--json",
        "--rust-signature-manifest",
        "manifest.json",
    ];
    let (_, filters) = parse("functions", &valid).unwrap();
    assert_eq!(
        filters.rust_signature_manifest.as_deref(),
        Some("manifest.json")
    );
    for cmd in [
        "decompile-all",
        "decompile-project",
        "decompile-graph",
        "decompile",
    ] {
        assert!(parse(cmd, &valid).is_err(), "{cmd}");
    }
    for flags in [
        vec!["--rust-signature-manifest", "manifest.json"],
        vec!["--summary", "--rust-signature-manifest", "manifest.json"],
        vec!["--json", "--rust-signature-manifest", "manifest.json"],
    ] {
        assert!(err(parse("functions", &flags)).contains("requires functions --summary --json"));
    }
    for extra in [
        vec!["--rust-signature-manifest", "second.json"],
        vec!["--raw-image"],
        vec!["--slice", "x86_64"],
        vec!["--target", "x86:LE:64:default"],
        vec!["--isa", "arm"],
        vec!["--define-function", "0x1000=probe"],
        vec!["--option", "dyldimage", "probe"],
    ] {
        let flags: Vec<_> = valid.iter().copied().chain(extra).collect();
        assert!(parse("functions", &flags).is_err(), "{flags:?}");
    }
}

/// An unnarrowed run must keep every pre-existing behaviour, so `narrows()`
/// is what gates the whole feature and has to be false by default.
#[test]
fn a_bare_run_narrows_nothing() {
    let (_, filters) = parse("functions", &[]).unwrap();
    assert!(!filters.narrows());
    assert!(!filters.summary);
    for flag in [
        vec!["--filter", "main"],
        vec!["--min-size", "1"],
        vec!["--max-size", "1"],
        vec!["--reachable-from", "main"],
        vec!["--limit", "1"],
        vec!["--sort", "size"],
    ] {
        let (_, filters) = parse("functions", &flag).unwrap();
        assert!(filters.narrows(), "{flag:?}");
    }
}

#[test]
fn the_triage_flags_parse_on_both_whole_binary_surfaces() {
    for cmd in ["functions", "decompile-all"] {
        let (_, filters) = parse(
            cmd,
            &[
                "--filter",
                "^auth",
                "--min-size",
                "16",
                "--max-size",
                "256",
                "--reachable-from",
                "0x1000",
                "--sort",
                "size",
                "--limit",
                "4",
                "--summary",
            ],
        )
        .unwrap_or_else(|e| panic!("{cmd}: {e}"));
        assert!(
            filters.name.as_ref().unwrap().is_match("authenticate"),
            "{cmd}"
        );
        assert!(!filters.name.as_ref().unwrap().is_match("deauth"), "{cmd}");
        assert_eq!(filters.min_size, Some(16), "{cmd}");
        assert_eq!(filters.max_size, Some(256), "{cmd}");
        assert_eq!(filters.reachable_from.as_deref(), Some("0x1000"), "{cmd}");
        assert_eq!(filters.sort, SortKey::Size, "{cmd}");
        assert_eq!(filters.limit, Some(4), "{cmd}");
        assert!(filters.summary, "{cmd}");
        assert_eq!(filters.largest_wanted(), 4, "{cmd}");
    }
}

/// `decompile-project` does not act on a narrowing, so it must reject one
/// rather than silently discard it.
#[test]
fn decompile_project_rejects_the_triage_flags() {
    let e = err(parse("decompile-project", &["--filter", "main"]));
    assert!(e.contains("unknown option --filter"), "{e}");
    assert!(parse("decompile-project", &["--summary"]).is_err());
}

#[test]
fn bad_triage_values_are_rejected_at_parse_time() {
    assert!(parse("functions", &["--filter", "("]).is_err());
    assert!(parse("functions", &["--limit", "-1"]).is_err());
    assert!(parse("functions", &["--min-size", "big"]).is_err());
    let e = err(parse("functions", &["--min-size", "10", "--max-size", "9"]));
    assert!(e.contains("greater than --max-size"), "{e}");
    assert!(parse("functions", &["--min-size", "9", "--max-size", "9"]).is_ok());
}

/// The histogram has to partition the whole size domain: a function that
/// falls in no bucket would silently vanish from the summary.
#[test]
fn the_size_buckets_partition_every_extent() {
    for size in [
        0u64,
        1,
        15,
        16,
        63,
        64,
        255,
        256,
        1023,
        1024,
        4095,
        4096,
        u64::MAX,
    ] {
        let hits = SIZE_BUCKETS
            .iter()
            .filter(|(_, lo, hi)| size >= *lo && size <= *hi)
            .count();
        assert_eq!(hits, 1, "size {size} lands in {hits} buckets");
    }
    assert_eq!(DEFAULT_SUMMARY_LARGEST, 10);
}
