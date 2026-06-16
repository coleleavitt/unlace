//! Conformance: the shipping calling-convention classifier
//! (`unlace-passes::calling_convention::classify_calling_convention`, a pure
//! accessor over `score_convention`) vs the proved Coq `CallingConv.v` spec.
//!
//! `CallingConv.v` models CC recovery as a separating-witness decision procedure
//! over the ALIASED x86/AArch64 register-offset space and proves the soundness
//! of that decision (no-false-SysV, AArch64-guard excludes x86, determinism).
//! This test pins the production classifier to the EXACT same decision by
//! re-deriving the verdict from the Coq arms in Rust and asserting agreement
//! over random read-offset sets — including the aliasing hazard offsets
//! (RDI=56=X7, RSI=48=X6, RCX=8=X1, RAX=0=X0).
//!
//! Read-only: it calls the pure classifier and compares; no producer state is
//! mutated and there is no golden impact.

use std::collections::BTreeSet;

use unlace_ir::ssa::CallingConvention;
use unlace_passes::calling_convention::classify_calling_convention;

struct XorShift64(u64);
impl XorShift64 {
    fn new(seed: u64) -> Self {
        XorShift64(seed | 1)
    }
    fn next(&mut self) -> u64 {
        let mut x = self.0;
        x ^= x << 13;
        x ^= x >> 7;
        x ^= x << 17;
        self.0 = x;
        x
    }
}

const RAX: u64 = 0;
const RCX: u64 = 8;
const RDX: u64 = 16;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;

const SYSV_ARGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_ARGS: &[u64] = &[RCX, RDX, R8, R9];
const SYSV_ONLY: &[u64] = &[RDI, RSI];
const X64_COMMON: &[u64] = &[RCX, RDX, R8, R9];
const AARCH64_ARGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

fn has_any(reads: &BTreeSet<u64>, s: &[u64]) -> bool {
    reads.iter().any(|x| s.contains(x))
}
fn count_in(reads: &BTreeSet<u64>, s: &[u64]) -> usize {
    reads.iter().filter(|x| s.contains(x)).count()
}

/// The Coq `CallingConv.v::score_convention`, transcribed arm-for-arm. The
/// conformance claim is that the shipping Rust agrees with THIS.
fn coq_score(reads: &BTreeSet<u64>) -> CallingConvention {
    if reads.is_empty() {
        return CallingConvention::Unknown;
    }
    let has_rax = reads.contains(&RAX);
    let has_sysv_o = has_any(reads, SYSV_ONLY);
    let has_x64_com = has_any(reads, X64_COMMON);
    let aa_hits = count_in(reads, AARCH64_ARGS);

    if has_rax && !has_sysv_o && !has_x64_com && aa_hits >= 1 {
        return CallingConvention::AArch64;
    }
    if has_sysv_o {
        return CallingConvention::SystemV;
    }
    if count_in(reads, MSX64_ARGS) >= 1 && !has_sysv_o {
        return CallingConvention::MicrosoftX64;
    }
    if count_in(reads, SYSV_ARGS) >= 1 {
        return CallingConvention::SystemV;
    }
    if aa_hits >= 2 {
        return CallingConvention::AArch64;
    }
    CallingConvention::Unknown
}

#[test]
fn classify_matches_coq_score_convention() {
    // Offsets spanning the aliasing hazard zone + non-arg offsets + AArch64 X2-X7.
    let pool: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56, 64, 72, 96, 200];
    let mut rng = XorShift64::new(0xCA11_C0FE_1234_5678);
    for _ in 0..500_000 {
        let mut reads = BTreeSet::new();
        let k = (rng.next() % 6) as usize;
        for _ in 0..k {
            reads.insert(pool[(rng.next() % pool.len() as u64) as usize]);
        }
        let rust = classify_calling_convention(&reads);
        let coq = coq_score(&reads);
        assert_eq!(rust, coq, "classifier diverged from CallingConv.v on reads={reads:?}");
    }
}

/// Exhaustive check over all subsets of the 8 hazard/arg offsets — every
/// possible read-set in the aliasing zone agrees with the Coq decision. This is
/// the strong "no divergence anywhere in the discriminating space" guarantee.
#[test]
fn classify_matches_coq_on_all_hazard_subsets() {
    let offs: &[u64] = &[RAX, RCX, RDX, RSI, RDI, R8, R9, 24]; // 24 = AArch64 X3
    for mask in 0u32..(1 << offs.len()) {
        let mut reads = BTreeSet::new();
        for (i, &o) in offs.iter().enumerate() {
            if mask & (1 << i) != 0 {
                reads.insert(o);
            }
        }
        assert_eq!(
            classify_calling_convention(&reads),
            coq_score(&reads),
            "classifier diverged from CallingConv.v on subset mask={mask:#x} reads={reads:?}"
        );
    }
}

/// The three witness landmarks proved in CallingConv.v
/// (`rdi_only_is_sysv`, `rcx_only_is_msx64`, `rax_only_is_aarch64`).
#[test]
fn witness_landmarks_match_coq() {
    let sysv: BTreeSet<u64> = [RDI].into_iter().collect();
    assert_eq!(classify_calling_convention(&sysv), CallingConvention::SystemV);

    let msx64: BTreeSet<u64> = [RCX].into_iter().collect();
    assert_eq!(classify_calling_convention(&msx64), CallingConvention::MicrosoftX64);

    let aarch64: BTreeSet<u64> = [RAX].into_iter().collect();
    assert_eq!(classify_calling_convention(&aarch64), CallingConvention::AArch64);

    assert_eq!(
        classify_calling_convention(&BTreeSet::new()),
        CallingConvention::Unknown
    );
}
