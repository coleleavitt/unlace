//! Conformance: the shipping stack-frame fusion decision
//! (`unlace-passes::stack_frame_recovery::stack_slot_folds_into`, the exact
//! predicate the ascending fusion sweep applies) vs the proved Coq
//! `StackFrame.v` spec.
//!
//! `StackFrame.v` models the sweep and proves that under ascending offsets the
//! NEGATION of the fold predicate guarantees the new slot begins at/after the
//! previous slot's end (`keep_guard_disjoint`), so the swept slots are pairwise
//! byte-disjoint (`sweep_from_empty_disjoint`). This test pins the production
//! decision to that spec two ways:
//!   1. the Rust predicate equals the Coq `folds_into` on random inputs;
//!   2. running the Coq `sweep` with the Rust predicate over random ascending,
//!      positive-width observations yields pairwise-DISJOINT slots — the
//!      frame-separation guarantee, exercised on the real decision function.
//!
//! Read-only: pure function calls; no producer state mutated, no golden impact.

use unlace_passes::stack_frame_recovery::stack_slot_folds_into;

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

// Coq `folds_into off poff psz := (off - poff <? psz) && (poff <? off)`.
fn coq_folds_into(off: i64, poff: i64, psz: i64) -> bool {
    (off - poff < psz) && (poff < off)
}

#[test]
fn fold_predicate_matches_coq() {
    let mut rng = XorShift64::new(0x57AC_F4A3_57AC_F4A3);
    for _ in 0..500_000 {
        let poff = (rng.next() % 4096) as i64 - 2048;
        let off = (rng.next() % 4096) as i64 - 2048;
        let psz = 1 + (rng.next() % 32) as i64;
        assert_eq!(
            stack_slot_folds_into(off, poff, psz),
            coq_folds_into(off, poff, psz),
            "stack_slot_folds_into diverged from StackFrame.v folds_into: off={off} poff={poff} psz={psz}"
        );
    }
}

// The Coq `sweep` with `step` (head-accumulator in descending order), driven by
// the *real* Rust predicate. Slots are (offset, size).
fn sweep(obs: &[(i64, i64)]) -> Vec<(i64, i64)> {
    let mut kept: Vec<(i64, i64)> = Vec::new(); // head = most recent (highest offset)
    for &(off, w) in obs {
        match kept.first_mut() {
            Some(&mut (poff, ref mut psz)) if stack_slot_folds_into(off, poff, *psz) => {
                *psz = (*psz).max(w); // fold: widen the head
            }
            _ => kept.insert(0, (off, w)), // keep: new head
        }
    }
    kept
}

/// The proven `sweep_from_empty_disjoint`: sweeping ascending, positive-width
/// observations yields pairwise byte-disjoint slots. Verified on the real
/// decision function over random ascending observation streams.
#[test]
fn sweep_yields_disjoint_slots_like_coq() {
    let mut rng = XorShift64::new(0x51AC_D157_0124_5678);
    for _ in 0..200_000 {
        // build a strictly-ascending, positive-width observation list
        let n = (rng.next() % 8) as usize;
        let mut obs = Vec::new();
        let mut cur = (rng.next() % 64) as i64 - 32;
        for _ in 0..n {
            cur += 1 + (rng.next() % 12) as i64; // strictly ascending
            let w = 1 + (rng.next() % 16) as i64; // positive width
            obs.push((cur, w));
        }

        let slots = sweep(&obs);
        // slots are in descending offset order; assert adjacent disjointness
        // (a + sza <= b for [(b,_),(a,sza)]) ⇒ global byte-disjointness.
        for w in slots.windows(2) {
            let (b, _szb) = w[0];
            let (a, sza) = w[1];
            assert!(
                a + sza <= b,
                "StackFrame.v disjointness violated: slot ({a},{sza}) overlaps ({b},_) obs={obs:?}"
            );
        }
        // also: every kept slot offset is distinct (a partition, not a multiset)
        for w in slots.windows(2) {
            assert!(
                w[1].0 < w[0].0,
                "slots must be strictly descending in offset"
            );
        }
    }
}
