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

pub mod corpus;
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
    Panicked { stage: &'static str, payload: String },
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
    let discover_outcome =
        catch_unwind(AssertUnwindSafe(|| pipeline::discover_functions(&image, None)));
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
