//! Integration tests for `unlace-fuzz`.
//!
//! Two complementary tests cover the harness's contract:
//!
//! 1. [`known_good_elf_round_trips`] — every corpus seed is a real ELF
//!    and must run through the full pipeline without producing a
//!    `Panicked` outcome. This is the regression guard: if a future
//!    refactor introduces a panic on a *valid* input, this test fires
//!    immediately at PR time rather than waiting for a fuzzer to find
//!    it.
//!
//! 2. [`random_bytes_dont_panic`] — drives the harness with a large
//!    batch of deterministically generated pseudo-random inputs and
//!    asserts that none escape as `Panicked`. The PRNG is a tiny inline
//!    xorshift so the test is reproducible byte-for-byte across hosts
//!    without pulling in `rand`. If any iteration *does* panic, the
//!    failure message includes the seed so the input can be
//!    regenerated for triage.

use std::path::PathBuf;

use unlace_fuzz::{FuzzResult, fuzz_iteration};

fn corpus_dir() -> PathBuf {
    let mut p = PathBuf::from(env!("CARGO_MANIFEST_DIR"));
    p.push("corpus");
    p
}

#[test]
fn known_good_elf_round_trips() {
    let dir = corpus_dir();
    let entries: Vec<_> = std::fs::read_dir(&dir)
        .expect("corpus directory exists")
        .filter_map(|e| e.ok())
        .filter(|e| {
            e.path()
                .extension()
                .and_then(|s| s.to_str())
                .map(|s| s == "elf")
                .unwrap_or(false)
        })
        .collect();

    assert!(
        !entries.is_empty(),
        "corpus directory `{}` contained no *.elf seeds; the harness needs at \
         least one round-trip target to be meaningful",
        dir.display()
    );

    for entry in entries {
        let path = entry.path();
        let bytes = std::fs::read(&path)
            .unwrap_or_else(|e| panic!("failed to read corpus seed {}: {e}", path.display()));

        let result = fuzz_iteration(&bytes);

        // The only forbidden outcome is `Panicked`. `Ok` is the happy
        // path; `LoadFailed` is acceptable for seeds we deliberately
        // keep around as edge cases (e.g. a fixture whose ELF
        // structure parses cleanly but whose arch isn't yet wired);
        // `NotElf` would mean the corpus is corrupted on disk.
        match &result {
            FuzzResult::Panicked { stage, payload } => panic!(
                "corpus seed `{}` panicked in stage `{stage}`: {payload}\n\
                 This means a *valid* ELF triggered a panic in the pipeline. \
                 Either fix the panic or, if the seed itself is malformed, \
                 move it to a `crashes/` subdirectory.",
                path.display()
            ),
            FuzzResult::NotElf => panic!(
                "corpus seed `{}` was rejected as not-ELF — the file on disk \
                 is corrupt or wasn't a real ELF when it was committed",
                path.display()
            ),
            FuzzResult::LoadFailed(_) | FuzzResult::Ok { .. } => {
                // Accepted outcomes.
            }
        }
    }
}

/// Tiny inline xorshift64* — deterministic, reproducible, no deps.
///
/// We don't need cryptographic quality here; the goal is uniform-ish
/// byte distribution so the harness sees a wide variety of byte
/// patterns. A real fuzzer would do this with coverage feedback, but
/// for a smoke test 1024 iterations of xorshift catch the obvious
/// regressions (unwraps on empty slices, off-by-one in header parsing,
/// integer overflow in size arithmetic, …).
struct XorShift64(u64);

impl XorShift64 {
    fn new(seed: u64) -> Self {
        // xorshift can't start from zero; replace with an arbitrary
        // nonzero constant if the caller passed 0.
        Self(if seed == 0 { 0x9E3779B97F4A7C15 } else { seed })
    }

    fn next_u64(&mut self) -> u64 {
        let mut x = self.0;
        x ^= x << 13;
        x ^= x >> 7;
        x ^= x << 17;
        self.0 = x;
        x.wrapping_mul(0x2545F4914F6CDD1D)
    }

    fn fill(&mut self, buf: &mut [u8]) {
        let mut i = 0;
        while i + 8 <= buf.len() {
            let v = self.next_u64().to_le_bytes();
            buf[i..i + 8].copy_from_slice(&v);
            i += 8;
        }
        if i < buf.len() {
            let v = self.next_u64().to_le_bytes();
            let rem = buf.len() - i;
            buf[i..].copy_from_slice(&v[..rem]);
        }
    }
}

#[test]
fn random_bytes_dont_panic() {
    // 1024 iterations × up to 4 KiB inputs ≈ 4 MiB of fuzzing work;
    // empirically completes well under a second in debug builds, so it
    // stays inside the workspace `cargo test` budget without needing a
    // `#[ignore]` gate.
    const ITERATIONS: usize = 1024;
    const MAX_LEN: usize = 4096;

    let mut prng = XorShift64::new(0xDEAD_BEEF_CAFE_F00D);
    let mut buf = vec![0u8; MAX_LEN];

    for i in 0..ITERATIONS {
        // Vary the input length deterministically so we exercise both
        // short slices (where bounds checks tend to fire) and longer
        // ones (where parser state machines run more code).
        let len = (prng.next_u64() as usize % MAX_LEN) + 1;
        prng.fill(&mut buf[..len]);

        // Sprinkle real ELF magic into ~1/16 of iterations so the
        // loader actually advances past the magic gate and we exercise
        // header parsing on random tails. Without this nudge the
        // fuzzer almost always bounces off `NotElf` and never reaches
        // the interesting code.
        if i % 16 == 0 && len >= 4 {
            buf[0..4].copy_from_slice(&[0x7f, b'E', b'L', b'F']);
        }

        let result = fuzz_iteration(&buf[..len]);

        if let FuzzResult::Panicked { stage, payload } = &result {
            panic!(
                "random-bytes iteration {i} panicked in stage `{stage}`: {payload}\n\
                 Reproducer: XorShift64 seed 0xDEAD_BEEF_CAFE_F00D, iteration {i}, len {len}.\n\
                 Re-run this test under `RUST_BACKTRACE=1` to recover the offending input.",
            );
        }
    }
}

#[test]
fn empty_input_is_not_elf() {
    // Trivial but valuable: confirms the harness's magic gate fires
    // before any allocation, so an attacker who feeds an empty stream
    // into the fuzzer doesn't get to drive any later stage.
    assert_eq!(fuzz_iteration(&[]), FuzzResult::NotElf);
}

#[test]
fn truncated_elf_magic_does_not_panic() {
    // 1-3 magic bytes should still be classified as NotElf (the gate
    // requires all four bytes). A bug here would let `ElfLoader::load`
    // run on a too-short slice and likely panic in `object`'s header
    // parser.
    for n in 0..4 {
        let prefix = &[0x7fu8, b'E', b'L', b'F'][..n];
        let result = fuzz_iteration(prefix);
        assert!(
            matches!(result, FuzzResult::NotElf),
            "{}-byte ELF-magic prefix should be NotElf, got {result:?}",
            n,
        );
    }
}

/// Regression guard for the persistent crash corpus. The xtask fuzz
/// runner promotes every panic-inducing input into
/// `crates/unlace-fuzz/crash-corpus/inputs/` (a `CrashCorpusDb` on
/// disk). This test re-feeds every such input through `fuzz_iteration`
/// and asserts that **none** of them still produce `FuzzResult::Panicked`
/// — i.e. the historical bug has been fixed and stays fixed.
///
/// Skipped silently if the corpus directory is empty (or absent), so a
/// fresh checkout doesn't fail; once the first crash is committed, the
/// directory exists and the test asserts on it.
#[test]
fn crash_corpus_inputs_no_longer_panic() {
    let mut dir = PathBuf::from(env!("CARGO_MANIFEST_DIR"));
    dir.push("crash-corpus");
    dir.push("inputs");

    if !dir.exists() {
        // Fresh checkout — no crashes recorded yet.
        return;
    }

    let entries: Vec<_> = match std::fs::read_dir(&dir) {
        Ok(rd) => rd.filter_map(|e| e.ok()).collect(),
        Err(_) => return,
    };
    let bins: Vec<_> = entries
        .into_iter()
        .filter(|e| {
            e.path()
                .extension()
                .and_then(|s| s.to_str())
                .map(|s| s == "bin")
                .unwrap_or(false)
        })
        .collect();

    for entry in bins {
        let path = entry.path();
        let bytes = match std::fs::read(&path) {
            Ok(b) => b,
            Err(_) => continue,
        };
        let result = fuzz_iteration(&bytes);
        if let FuzzResult::Panicked { stage, payload } = &result {
            panic!(
                "regression: crash-corpus input `{}` panicked again in stage `{stage}`: {payload}\n\
                 This input was historically fixed; reverting that fix would mask the regression. \
                 Mark the entry as TriageStatus::New in the corpus index if the panic is a new \
                 manifestation, otherwise restore the fix.",
                path.display()
            );
        }
    }
}
