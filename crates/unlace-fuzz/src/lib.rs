//! # `unlace-fuzz` — whole-pipeline fuzz harness (t467)
//!
//! Drives the full unlace pipeline (`load → lift → SSA → passes →
//! c_printer`) from an attacker-controlled byte slice, catches panics,
//! and reports a structured outcome. Designed to be plugged into AFL /
//! honggfuzz / libFuzzer as a `cargo run --bin unlace-fuzz` target — we
//! deliberately do *not* depend on `libfuzzer-sys` so the harness builds
//! on stable without sanitizers or nightly toolchains. Internally the
//! shape mirrors `cargo-fuzz` (`fuzz_target!`-style single-byte-slice
//! entrypoint) so it can be lifted into either runner with a thin
//! wrapper later.
//!
//! ## Why panic-catching matters
//!
//! The decompiler pipeline contains arithmetic on attacker-controlled
//! offsets, slice indexing through symbol tables, and recursion through
//! the type solver. A single panic in any stage would kill a real
//! batch run; the harness catches `std::panic::catch_unwind` and
//! surfaces the stage that failed so triage can attach to a small
//! reproducer.
//!
//! ## What "full pipeline" means here
//!
//! 1. **Load** — try `ElfLoader`. The harness is ELF-only by design: the
//!    other loaders (Mach-O / PE) have separate fuzz harnesses planned;
//!    funneling everything through one entrypoint would muddle coverage
//!    accounting.
//! 2. **Function discovery** — `pipeline::discover_functions`.
//! 3. **Lift → SSA → passes → c_printer** — per function, via
//!    `pipeline::decompile_function`, capped at a small function count
//!    so a pathological 10k-function input doesn't dominate the fuzzer's
//!    per-iteration budget.
//!
//! The harness returns [`FuzzResult`] rather than `Result<…, E>` because
//! a panic *is* a successful fuzz finding — we want to keep that
//! distinct from an expected `Err` returned by the loader on malformed
//! input.

use std::panic::{AssertUnwindSafe, catch_unwind};
use std::time::Duration;

use unlace_cli::args::EmitFormat;
use unlace_cli::pipeline::{self, PipelineConfig};
use unlace_lift::get_lifter;
use unlace_loader::{ElfLoader, Loader};

/// Maximum number of functions the harness will decompile per iteration.
///
/// Fuzzers prize *throughput* — covering one new edge per million inputs
/// matters more than fully decompiling any single binary. Capping the
/// per-iteration work keeps tail latency bounded so a maliciously crafted
/// ELF with millions of synthetic symbols can't stall the corpus.
const MAX_FUNCTIONS_PER_ITER: usize = 16;

/// Per-function decompilation timeout. Same rationale as
/// [`MAX_FUNCTIONS_PER_ITER`]: bound worst-case time so the fuzzer keeps
/// moving.
const PER_FUNCTION_TIMEOUT: Duration = Duration::from_secs(2);

/// Structured outcome of a single fuzz iteration.
///
/// Each variant corresponds to a distinct *interesting* observable: the
/// fuzzer's coverage minimizer can key on these to keep one
/// representative input per outcome class without needing to diff
/// arbitrary string output.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum FuzzResult {
    /// Input was not a valid ELF (loader rejected magic / parse). This is
    /// the common case for random inputs and is **not** a bug — the
    /// fuzzer should still record coverage but not flag it.
    NotElf,
    /// Loader accepted the input but parsing returned a structured error
    /// before any lifting happened. Carries the stringified error for
    /// triage.
    LoadFailed(String),
    /// The whole pipeline ran to completion across all discovered
    /// functions. `functions_decompiled` counts how many produced C
    /// output without panicking; pipeline-level `Err` returns from
    /// individual functions are tolerated (the real CLI also tolerates
    /// them, emitting a `/* decompilation failed */` comment).
    Ok { functions_decompiled: usize },
    /// **A panic was caught.** This is the only "found a bug" outcome.
    /// `stage` names the pipeline stage that was running when the panic
    /// fired so triage knows where to start. The payload string is the
    /// best-effort downcast of the panic value.
    Panicked {
        stage: &'static str,
        payload: String,
    },
}

/// Drive one fuzz iteration over `bytes`.
///
/// This is the function a `fuzz_target!` macro would wrap. It MUST NOT
/// panic; every internal call site is wrapped in `catch_unwind`. If a
/// panic *does* escape (e.g. from `catch_unwind` itself on a foreign
/// exception), that is a separate class of bug and will manifest as a
/// process abort — exactly what we want the fuzzer to surface.
pub fn fuzz_iteration(bytes: &[u8]) -> FuzzResult {
    // -- Stage 1: ELF magic gate ------------------------------------
    //
    // We could call `ElfLoader::load` directly and let it reject
    // non-ELF input, but the magic check is essentially free and lets
    // us distinguish "fuzzer fed us random bytes" (overwhelming
    // majority) from "fuzzer fed us a corrupted ELF" (the interesting
    // class). This split shows up in coverage reports as a much
    // clearer signal.
    if !ElfLoader::can_load(bytes) {
        return FuzzResult::NotElf;
    }

    // -- Stage 2: load ----------------------------------------------
    let load_outcome = catch_unwind(AssertUnwindSafe(|| ElfLoader::load(bytes)));
    let image = match load_outcome {
        Ok(Ok(img)) => img,
        Ok(Err(e)) => return FuzzResult::LoadFailed(format!("{e}")),
        Err(payload) => {
            return FuzzResult::Panicked {
                stage: "load",
                payload: panic_payload_to_string(&payload),
            };
        }
    };

    // -- Stage 3: function discovery --------------------------------
    let discover_outcome = catch_unwind(AssertUnwindSafe(|| {
        pipeline::discover_functions(&image, None)
    }));
    let functions = match discover_outcome {
        Ok(Ok(funcs)) => funcs,
        Ok(Err(e)) => {
            // Discovery returned a structured error — not a panic, so
            // we report it as a "load-like" failure for symmetry. From
            // the fuzzer's perspective the binary is unusable; keep
            // moving.
            return FuzzResult::LoadFailed(format!("discover: {e}"));
        }
        Err(payload) => {
            return FuzzResult::Panicked {
                stage: "discover",
                payload: panic_payload_to_string(&payload),
            };
        }
    };

    // -- Stage 4: per-function decompile ----------------------------
    //
    // We only attempt architectures that the CLI gates on (mirrors
    // `run_decompile` in `main.rs`); other arches would `bail!` before
    // any lifting happens and that's not the fuzz target.
    if !is_decompilable_arch(image.arch) {
        return FuzzResult::Ok {
            functions_decompiled: 0,
        };
    }

    let lifter = match catch_unwind(AssertUnwindSafe(|| get_lifter(image.arch))) {
        Ok(l) => l,
        Err(payload) => {
            return FuzzResult::Panicked {
                stage: "get_lifter",
                payload: panic_payload_to_string(&payload),
            };
        }
    };

    let config = PipelineConfig {
        timeout: PER_FUNCTION_TIMEOUT,
        print_config: None,
        annotations: None,
    };

    let mut decompiled = 0usize;
    for entry in functions.iter().take(MAX_FUNCTIONS_PER_ITER) {
        let outcome = catch_unwind(AssertUnwindSafe(|| {
            pipeline::decompile_function(
                &image,
                lifter.as_ref(),
                entry,
                EmitFormat::C,
                &config,
                None,
            )
        }));
        match outcome {
            // An `Err(_)` here is the pipeline reporting that *this*
            // function failed to decompile — that's expected and
            // tolerated. The fuzzer is hunting for `Err(panic)` only.
            Ok(Ok(_text)) => decompiled += 1,
            Ok(Err(_e)) => { /* expected on malformed input */ }
            Err(payload) => {
                return FuzzResult::Panicked {
                    stage: "decompile_function",
                    payload: panic_payload_to_string(&payload),
                };
            }
        }
    }

    FuzzResult::Ok {
        functions_decompiled: decompiled,
    }
}

/// Mirror of the arch gate inside `unlace-cli`'s `run_decompile`. Kept
/// inline rather than re-exported because the CLI's check is buried in
/// `main.rs` (not the library surface) and duplicating six lines is
/// preferable to a refactor that would inflate the diff.
fn is_decompilable_arch(arch: unlace_ir::ArchId) -> bool {
    use unlace_ir::ArchId::*;
    matches!(
        arch,
        X86_64 | X86 | AArch64 | Mips64 | RiscV64 | V850 | Arc | Ppc | Ppc64
    )
}

/// Minimise a crashing input by trimming trailing bytes until the
/// crash no longer reproduces, then back off to the smallest prefix
/// that still triggers it.
///
/// Algorithm (deliberately tiny — full delta-debugging is overkill for
/// the fuzz harness's purposes):
///
/// 1. Confirm the input still panics. If not, return it unchanged
///    (callers shouldn't have invoked us, but we're defensive).
/// 2. Binary-search the smallest prefix length `n ∈ [1, input.len()]`
///    such that `predicate(&input[..n])` still reports a panic. Each
///    probe halves the search window, so we run `O(log n)` predicate
///    calls — important because each call re-drives the full pipeline
///    and is expensive.
/// 3. Return the minimal prefix.
///
/// This is *prefix* minimisation, not full delta-debugging: we don't
/// try to remove bytes from the middle. The ELF format is
/// header-driven (header offsets reference later sections), so trimming
/// from the end is the operation most likely to preserve the panic
/// while shrinking the witness. A future revision could layer
/// delta-debugging on top, but the marginal triage benefit is small
/// versus the implementation cost.
pub fn minimise_crash_with<F>(input: &[u8], mut predicate: F) -> Vec<u8>
where
    F: FnMut(&[u8]) -> bool,
{
    if input.is_empty() || !predicate(input) {
        return input.to_vec();
    }
    // Binary search for smallest `n` in [1, input.len()] where
    // predicate(&input[..n]) is still true.
    //
    // Invariant: predicate(&input[..hi]) == true, predicate(&input[..lo-1]) == false (or lo == 1).
    let mut lo: usize = 1;
    let mut hi: usize = input.len();
    while lo < hi {
        let mid = lo + (hi - lo) / 2;
        if predicate(&input[..mid]) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    input[..lo].to_vec()
}

/// Convenience wrapper around [`minimise_crash_with`] that uses
/// [`fuzz_iteration`] as the predicate — i.e. the prefix "still
/// triggers a crash" iff `fuzz_iteration` returns
/// [`FuzzResult::Panicked`].
///
/// Tools driving the harness (the `xtask fuzz` runner, manual triage)
/// can call this directly when they observe a panic outcome to obtain a
/// shorter reproducer suitable for filing.
pub fn minimise_crash(input: &[u8]) -> Vec<u8> {
    minimise_crash_with(input, |bytes| {
        matches!(fuzz_iteration(bytes), FuzzResult::Panicked { .. })
    })
}

/// Best-effort stringification of a `catch_unwind` panic payload.
///
/// `Box<dyn Any + Send>` is opaque — the standard library only
/// guarantees a `&str` or `String` downcast for panics raised via
/// `panic!(..)`. Foreign panics (e.g. from FFI) fall through to a
/// placeholder.
fn panic_payload_to_string(payload: &Box<dyn std::any::Any + Send>) -> String {
    if let Some(s) = payload.downcast_ref::<&'static str>() {
        (*s).to_string()
    } else if let Some(s) = payload.downcast_ref::<String>() {
        s.clone()
    } else {
        "<non-string panic payload>".to_string()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Empty input: ELF magic gate must reject without panicking.
    #[test]
    fn empty_input_returns_not_elf() {
        assert_eq!(fuzz_iteration(&[]), FuzzResult::NotElf);
    }

    /// Random bytes that don't begin with `\x7fELF` are rejected.
    #[test]
    fn random_garbage_returns_not_elf() {
        assert_eq!(
            fuzz_iteration(&[0xff; 64]),
            FuzzResult::NotElf
        );
    }

    /// Synthetic panicking predicate: the input "crashes" iff it
    /// contains the marker byte sequence `[0xCA, 0xFE]`. The minimiser
    /// must shrink an arbitrary prefix containing this marker down to
    /// the smallest prefix that still includes both marker bytes.
    ///
    /// We deliberately don't drive the real pipeline here — building a
    /// panic-triggering ELF would be brittle and slow. The minimiser's
    /// logic is independent of *what* the predicate detects.
    #[test]
    fn minimise_crash_with_shrinks_to_marker_prefix() {
        // 100 bytes of padding, marker at [40, 41], more padding.
        let mut input = vec![0u8; 100];
        input[40] = 0xCA;
        input[41] = 0xFE;
        let predicate = |bytes: &[u8]| {
            bytes.windows(2).any(|w| w == [0xCA, 0xFE])
        };
        let minimised = minimise_crash_with(&input, predicate);
        // Smallest prefix that still contains the marker is
        // `input[..42]` (indices 0..=41 inclusive).
        assert_eq!(minimised.len(), 42);
        assert_eq!(minimised[40], 0xCA);
        assert_eq!(minimised[41], 0xFE);
    }

    /// If the predicate doesn't fire on the full input, the minimiser
    /// must not silently shrink — that would be a footgun where a
    /// caller passes a "false alarm" and gets back an empty buffer.
    #[test]
    fn minimise_crash_with_returns_input_when_predicate_false() {
        let input = vec![0xAAu8; 32];
        let minimised = minimise_crash_with(&input, |_| false);
        assert_eq!(minimised, input);
    }

    /// Empty input is a no-op.
    #[test]
    fn minimise_crash_with_empty_input() {
        let minimised = minimise_crash_with(&[], |_| true);
        assert!(minimised.is_empty());
    }

    /// When the smallest-triggering prefix is exactly length 1, the
    /// binary search must terminate at `lo == hi == 1` rather than
    /// looping or off-by-one'ing.
    #[test]
    fn minimise_crash_with_single_byte_witness() {
        let input = vec![0xDEu8; 50];
        // Predicate: any non-empty input "crashes". Smallest is len 1.
        let minimised = minimise_crash_with(&input, |b| !b.is_empty());
        assert_eq!(minimised.len(), 1);
    }

    /// End-to-end check on the real pipeline: feeding a non-panicking
    /// input to `minimise_crash` must return it unchanged (defensive
    /// path — the caller should know the input panics before calling,
    /// but we don't want to corrupt non-witnesses).
    #[test]
    fn minimise_crash_no_op_on_clean_input() {
        let bytes = b"not an ELF, will return NotElf";
        let minimised = minimise_crash(bytes);
        assert_eq!(minimised.as_slice(), bytes.as_slice());
    }

    /// A truncated ELF that has the magic but no valid header must
    /// either return [`FuzzResult::LoadFailed`] or `Ok { functions_decompiled: 0 }`
    /// — both are acceptable, the test is that it does not panic.
    #[test]
    fn truncated_elf_does_not_panic() {
        let mut buf = vec![0u8; 32];
        buf[0..4].copy_from_slice(b"\x7fELF");
        buf[4] = 2; // 64-bit
        buf[5] = 1; // little-endian
        let r = fuzz_iteration(&buf);
        assert!(
            matches!(
                r,
                FuzzResult::LoadFailed(_) | FuzzResult::Ok { .. } | FuzzResult::NotElf
            ),
            "unexpected truncated-ELF outcome: {r:?}",
        );
    }
}
