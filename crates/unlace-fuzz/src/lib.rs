//! # `unlace-fuzz`: whole-pipeline fuzz harness
//!
//! Drives the `unlace` embedding API (load, function discovery, decompile to C)
//! from an attacker-controlled byte slice, catches panics, and reports a
//! structured outcome. That API runs the same code paths as `unlace decompile`,
//! so the harness covers the CLI's pipeline without a process per input.
//!
//! The harness deliberately does not depend on `libfuzzer-sys`: it builds on
//! stable without sanitizers or nightly. The binary reads one input from stdin,
//! so AFL, honggfuzz or libFuzzer can drive it as an external target.
//!
//! ## Why panic-catching matters
//!
//! The pipeline does arithmetic on attacker-controlled offsets, indexes symbol
//! and section tables, and recurses through the type solver. A single panic in
//! any stage would kill a batch run. The harness reports the stage that failed
//! so triage can start from a small reproducer.
//!
//! ## Stages
//!
//! 1. Magic gate: ELF, Mach-O (thin and universal) or PE magic. Random bytes
//!    stop here.
//! 2. Load: `Decompiler::from_bytes`, which loads on first use.
//! 3. Function inventory: `Decompiler::functions`.
//! 4. Decompile: up to `MAX_FUNCTIONS_PER_ITER` executable functions, each with
//!    a `PER_FUNCTION_SECONDS` budget.
//!
//! The API turns a panic inside load or decompile into `Error::Panic`. The
//! `stage` in a finding is the harness call that observed it; the engine's own
//! stage names are not part of the public surface.
//!
//! `FuzzResult` is returned rather than `Result`, because a panic is a finding
//! and must stay distinct from the expected error an input gets for being
//! malformed.

use std::any::Any;
use std::panic::{AssertUnwindSafe, catch_unwind};

use unlace::{Decompiler, Error};

/// Most functions one iteration decompiles. Fuzzers prize throughput, so one
/// input with millions of synthetic symbols cannot stall the run.
const MAX_FUNCTIONS_PER_ITER: usize = 16;

/// Per-function decompile budget, in seconds.
const PER_FUNCTION_SECONDS: u64 = 2;

/// Container magics the gate admits: ELF, thin Mach-O (both byte orders, 32
/// and 64 bit), universal Mach-O, and PE.
const CONTAINER_MAGICS: &[&[u8]] = &[
    b"\x7fELF",
    b"\xfe\xed\xfa\xce",
    b"\xfe\xed\xfa\xcf",
    b"\xce\xfa\xed\xfe",
    b"\xcf\xfa\xed\xfe",
    b"\xca\xfe\xba\xbe",
    b"MZ",
];

/// Structured outcome of a single fuzz iteration.
///
/// Each variant is a distinct observable, so a coverage minimizer can keep one
/// representative input per outcome class.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum FuzzResult {
    /// No container magic: the fuzzer fed random bytes. Not a bug; the
    /// fuzzer still records coverage for it.
    NotBinary,
    /// The input has container magic but did not load (malformed, unsupported,
    /// or no SLEIGH specification). Carries the error text for triage.
    LoadFailed(String),
    /// The pipeline ran over the discovered functions. `functions_decompiled`
    /// counts those that produced C; a per-function error is tolerated, as
    /// `unlace decompile` tolerates it.
    Ok { functions_decompiled: usize },
    /// A panic was caught. This is the only "found a bug" outcome.
    Panicked {
        stage: &'static str,
        payload: String,
    },
}

/// Drive one fuzz iteration over `bytes`.
///
/// Every call into the decompiler is wrapped in `catch_unwind`, so this
/// function does not panic on any input. A panic that escapes even that
/// wrapper aborts the process, which the fuzzer also reports.
pub fn fuzz_iteration(bytes: &[u8]) -> FuzzResult {
    if !has_container_magic(bytes) {
        return FuzzResult::NotBinary;
    }
    catch_unwind(AssertUnwindSafe(|| run_pipeline(bytes)))
        .unwrap_or_else(|payload| found("harness", payload_to_string(&*payload)))
}

fn run_pipeline(bytes: &[u8]) -> FuzzResult {
    let mut decompiler = match Decompiler::from_bytes(bytes) {
        Ok(decompiler) => decompiler.with_max_fn_seconds(PER_FUNCTION_SECONDS),
        Err(error) => return FuzzResult::LoadFailed(error.to_string()),
    };

    let inventory = match catch_unwind(AssertUnwindSafe(|| decompiler.functions())) {
        Ok(Ok(functions)) => functions,
        Ok(Err(Error::Panic(payload))) => return found("load", payload),
        Ok(Err(error)) => return FuzzResult::LoadFailed(error.to_string()),
        Err(payload) => return found("functions", payload_to_string(&*payload)),
    };

    let mut decompiled = 0usize;
    for function in inventory
        .iter()
        .filter(|function| function.executable)
        .take(MAX_FUNCTIONS_PER_ITER)
    {
        let address = function.address;
        match catch_unwind(AssertUnwindSafe(|| decompiler.decompile(address))) {
            Ok(Ok(_)) => decompiled += 1,
            // An error here is the pipeline reporting that this function did not
            // decompile: expected on malformed input. Only a panic is a finding.
            Ok(Err(Error::Panic(payload))) => return found("decompile", payload),
            Ok(Err(_)) => {}
            Err(payload) => return found("decompile", payload_to_string(&*payload)),
        }
    }

    FuzzResult::Ok {
        functions_decompiled: decompiled,
    }
}

fn found(stage: &'static str, payload: String) -> FuzzResult {
    FuzzResult::Panicked { stage, payload }
}

/// Whether `bytes` starts with one of the container magics the gate admits.
fn has_container_magic(bytes: &[u8]) -> bool {
    CONTAINER_MAGICS
        .iter()
        .any(|magic| bytes.starts_with(magic))
}

/// Minimise a crashing input by trimming trailing bytes until the crash no
/// longer reproduces, then back off to the smallest prefix that still triggers.
///
/// Algorithm (deliberately tiny; full delta-debugging is overkill here):
///
/// 1. Confirm the input still panics. If not, return it unchanged.
/// 2. Binary-search the smallest prefix length `n` in `[1, input.len()]` for
///    which `predicate(&input[..n])` still holds. That is `O(log n)` predicate
///    calls, each of which re-drives the full pipeline.
/// 3. Return the minimal prefix.
///
/// This is prefix minimisation, not delta-debugging: bytes are never removed
/// from the middle. Container headers reference later sections by offset, so
/// trimming from the end is the operation most likely to keep the panic.
pub fn minimise_crash_with<F>(input: &[u8], mut predicate: F) -> Vec<u8>
where
    F: FnMut(&[u8]) -> bool,
{
    if input.is_empty() || !predicate(input) {
        return input.to_vec();
    }
    // Invariant: predicate(&input[..hi]) holds, and predicate(&input[..lo - 1])
    // does not (or lo == 1).
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

/// [`minimise_crash_with`] with [`fuzz_iteration`] as the predicate: a prefix
/// still crashes iff `fuzz_iteration` reports `Panicked`.
pub fn minimise_crash(input: &[u8]) -> Vec<u8> {
    minimise_crash_with(input, |bytes| {
        matches!(fuzz_iteration(bytes), FuzzResult::Panicked { .. })
    })
}

/// Best-effort text of a `catch_unwind` payload. The standard library only
/// guarantees a `&str` or `String` downcast for `panic!`; anything else
/// gets a placeholder.
fn payload_to_string(payload: &(dyn Any + Send)) -> String {
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

    /// Empty input: the magic gate rejects it before anything runs.
    #[test]
    fn empty_input_is_not_binary() {
        assert_eq!(fuzz_iteration(&[]), FuzzResult::NotBinary);
    }

    /// Bytes without a container magic are rejected.
    #[test]
    fn random_garbage_is_not_binary() {
        assert_eq!(fuzz_iteration(&[0xff; 64]), FuzzResult::NotBinary);
    }

    /// A truncated ELF (magic, then nothing) must not panic. It loads as an
    /// error or as an empty program, never as a finding.
    #[test]
    fn truncated_elf_does_not_panic() {
        let mut buf = vec![0u8; 32];
        buf[0..4].copy_from_slice(b"\x7fELF");
        buf[4] = 2; // 64-bit
        buf[5] = 1; // little-endian
        let result = fuzz_iteration(&buf);
        assert!(
            matches!(result, FuzzResult::LoadFailed(_) | FuzzResult::Ok { .. }),
            "truncated ELF produced {result:?}"
        );
    }

    /// The synthetic predicate fires when the input contains the marker
    /// `[0xCA, 0xFE]`. The minimiser must shrink to the smallest prefix that
    /// still contains both bytes.
    #[test]
    fn minimise_crash_with_shrinks_to_marker_prefix() {
        let mut input = vec![0u8; 100];
        input[40] = 0xCA;
        input[41] = 0xFE;
        let predicate = |bytes: &[u8]| bytes.windows(2).any(|w| w == [0xCA, 0xFE]);
        let minimised = minimise_crash_with(&input, predicate);
        assert_eq!(minimised.len(), 42);
        assert_eq!(minimised[40], 0xCA);
        assert_eq!(minimised[41], 0xFE);
    }

    /// A predicate that does not fire on the full input must not shrink it:
    /// otherwise a false alarm would come back as an empty buffer.
    #[test]
    fn minimise_crash_with_returns_input_when_predicate_false() {
        let input = vec![0xAAu8; 32];
        assert_eq!(minimise_crash_with(&input, |_| false), input);
    }

    #[test]
    fn minimise_crash_with_empty_input() {
        assert!(minimise_crash_with(&[], |_| true).is_empty());
    }

    /// When the smallest witness is one byte, the search must end at 1.
    #[test]
    fn minimise_crash_with_single_byte_witness() {
        let input = vec![0xDEu8; 50];
        let minimised = minimise_crash_with(&input, |b| !b.is_empty());
        assert_eq!(minimised.len(), 1);
    }

    /// A non-crashing input comes back unchanged through the real predicate.
    #[test]
    fn minimise_crash_no_op_on_clean_input() {
        let bytes = b"not a binary, will return NotBinary";
        assert_eq!(minimise_crash(bytes).as_slice(), bytes.as_slice());
    }
}
