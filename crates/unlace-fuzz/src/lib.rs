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

/// A minimised crashing input, ready to commit under `crash-corpus/`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CrashFixture {
    /// `crash_<fnv1a64 hex>.bin`: the content hash names the input.
    pub file_name: String,
    /// The minimal reproducing input.
    pub bytes: Vec<u8>,
    /// The JSON sidecar for `reports/`: size, stage and panic payload of the minimal input.
    pub sidecar: String,
}

/// Turn a crashing input into a committable regression fixture.
///
/// Returns `None` when `input` does not panic. Otherwise the input is minimised
/// with [`minimise_crash`] and the report is taken from the minimal input, so the
/// stage and payload describe the bytes that were written.
pub fn crash_fixture(input: &[u8]) -> Option<CrashFixture> {
    if !matches!(fuzz_iteration(input), FuzzResult::Panicked { .. }) {
        return None;
    }
    let bytes = minimise_crash(input);
    let FuzzResult::Panicked { stage, payload } = fuzz_iteration(&bytes) else {
        return None;
    };
    let sidecar = format!(
        "{{\n  \"size\": {},\n  \"origin\": \"unlace-fuzz --minimise\",\n  \"stage\": {},\n  \"payload\": {}\n}}\n",
        bytes.len(),
        json_string(stage),
        json_string(&payload),
    );
    let file_name = format!("crash_{:016x}.bin", fnv1a64(&bytes));
    Some(CrashFixture {
        file_name,
        bytes,
        sidecar,
    })
}

/// FNV-1a, 64 bit: the content hash that names a crash-corpus file. It needs no
/// dependency, and collisions among a handful of committed crashes do not matter.
pub fn fnv1a64(bytes: &[u8]) -> u64 {
    bytes.iter().fold(0xcbf2_9ce4_8422_2325u64, |hash, &byte| {
        (hash ^ u64::from(byte)).wrapping_mul(0x0000_0100_0000_01b3)
    })
}

/// `text` as a JSON string literal, escaped by hand so the harness stays
/// dependency-free.
fn json_string(text: &str) -> String {
    let mut out = String::with_capacity(text.len() + 2);
    out.push('"');
    for c in text.chars() {
        match c {
            '"' => out.push_str("\\\""),
            '\\' => out.push_str("\\\\"),
            '\n' => out.push_str("\\n"),
            '\r' => out.push_str("\\r"),
            '\t' => out.push_str("\\t"),
            c if c < ' ' => out.push_str(&format!("\\u{:04x}", u32::from(c))),
            c => out.push(c),
        }
    }
    out.push('"');
    out
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
mod tests;
