//! Integration tests for `unlace-fuzz`.
//!
//! 1. `known_good_elf_round_trips`: every corpus seed is a real ELF and must
//!    run through the pipeline without a `Panicked` outcome. A refactor that
//!    panics on a valid input fails here at PR time.
//! 2. `random_bytes_dont_panic`: a deterministic batch of pseudo-random inputs
//!    must not escape as `Panicked`. The PRNG is an inline xorshift, so the
//!    batch reproduces byte for byte on every host. `UNLACE_FUZZ_ITERS` raises
//!    the batch size; the nightly fuzz workflow sets it.
//! 3. `crash_corpus_inputs_no_longer_panic`: every committed crash input stays fixed.

use std::path::PathBuf;

use unlace_fuzz::{FuzzResult, fuzz_iteration};

fn crate_dir() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
}

#[test]
fn known_good_elf_round_trips() {
    let dir = crate_dir().join("corpus");
    let entries: Vec<_> = std::fs::read_dir(&dir)
        .expect("corpus directory exists")
        .filter_map(|e| e.ok())
        .filter(|e| e.path().extension().and_then(|s| s.to_str()) == Some("elf"))
        .collect();

    assert!(
        !entries.is_empty(),
        "corpus directory `{}` contained no *.elf seeds",
        dir.display()
    );

    for entry in entries {
        let path = entry.path();
        let bytes = std::fs::read(&path)
            .unwrap_or_else(|e| panic!("failed to read corpus seed {}: {e}", path.display()));

        match fuzz_iteration(&bytes) {
            FuzzResult::Panicked { stage, payload } => panic!(
                "corpus seed `{}` panicked in stage `{stage}`: {payload}\n\
                 A valid binary triggered a panic. Fix the panic, or if the seed is \
                 malformed, move it out of corpus/.",
                path.display()
            ),
            FuzzResult::NotBinary => panic!(
                "corpus seed `{}` was rejected by the magic gate: the file on disk is corrupt",
                path.display()
            ),
            FuzzResult::LoadFailed(_) | FuzzResult::Ok { .. } => {}
        }
    }
}

/// Tiny inline xorshift64*: deterministic and dependency-free. Uniform-ish
/// bytes are enough for a smoke sweep; coverage-guided fuzzing is the runner's job.
struct XorShift64(u64);

impl XorShift64 {
    fn new(seed: u64) -> Self {
        // xorshift cannot leave the zero state.
        Self(if seed == 0 {
            0x9E37_79B9_7F4A_7C15
        } else {
            seed
        })
    }

    fn next_u64(&mut self) -> u64 {
        let mut x = self.0;
        x ^= x << 13;
        x ^= x >> 7;
        x ^= x << 17;
        self.0 = x;
        x.wrapping_mul(0x2545_F491_4F6C_DD1D)
    }

    fn fill(&mut self, buf: &mut [u8]) {
        for chunk in buf.chunks_mut(8) {
            let v = self.next_u64().to_le_bytes();
            chunk.copy_from_slice(&v[..chunk.len()]);
        }
    }
}

/// Iterations for the random sweep: `UNLACE_FUZZ_ITERS` when set to a positive
/// integer, otherwise 1024, which keeps the workspace test budget.
fn random_iterations() -> usize {
    std::env::var("UNLACE_FUZZ_ITERS")
        .ok()
        .and_then(|v| v.trim().parse::<usize>().ok())
        .filter(|&n| n > 0)
        .unwrap_or(1024)
}

#[test]
fn random_bytes_dont_panic() {
    const MAX_LEN: usize = 4096;
    let iterations = random_iterations();

    let mut prng = XorShift64::new(0xDEAD_BEEF_CAFE_F00D);
    let mut buf = vec![0u8; MAX_LEN];

    for i in 0..iterations {
        // Vary the length so short slices (where bounds checks fire) and long
        // ones (where parser state machines run more code) both get covered.
        let len = (prng.next_u64() as usize % MAX_LEN) + 1;
        prng.fill(&mut buf[..len]);

        // Put ELF magic on every 16th input so the loader gets past the gate
        // and parses random headers. Without this the sweep bounces off the gate.
        if i % 16 == 0 && len >= 4 {
            buf[0..4].copy_from_slice(b"\x7fELF");
        }

        if let FuzzResult::Panicked { stage, payload } = fuzz_iteration(&buf[..len]) {
            panic!(
                "random-bytes iteration {i} panicked in stage `{stage}`: {payload}\n\
                 Reproducer: XorShift64 seed 0xDEAD_BEEF_CAFE_F00D, iteration {i}, len {len}; \
                 rerun with RUST_BACKTRACE=1 to recover the input.",
            );
        }
    }
}

#[test]
fn truncated_container_magic_is_not_binary() {
    // A 1-3 byte prefix of the ELF magic is not a container: the gate needs all
    // four bytes, so the loader never sees a short slice.
    for n in 0..4 {
        let prefix = &b"\x7fELF"[..n];
        let result = fuzz_iteration(prefix);
        assert!(
            matches!(result, FuzzResult::NotBinary),
            "{n}-byte ELF-magic prefix should be NotBinary, got {result:?}"
        );
    }
}

/// Regression guard for the crash corpus. A panic-inducing input is committed
/// under `crash-corpus/inputs/` with a sidecar in `reports/`; this test feeds
/// every input back and asserts none still panics. An empty or absent
/// directory passes.
#[test]
fn crash_corpus_inputs_no_longer_panic() {
    let dir = crate_dir().join("crash-corpus").join("inputs");
    let Ok(read_dir) = std::fs::read_dir(&dir) else {
        return;
    };

    for entry in read_dir.filter_map(|e| e.ok()) {
        let path = entry.path();
        if path.extension().and_then(|s| s.to_str()) != Some("bin") {
            continue;
        }
        let Ok(bytes) = std::fs::read(&path) else {
            continue;
        };
        if let FuzzResult::Panicked { stage, payload } = fuzz_iteration(&bytes) {
            panic!(
                "regression: crash-corpus input `{}` panicked again in stage `{stage}`: {payload}",
                path.display()
            );
        }
    }
}
