//! Conformance: the shipping jump-table entry-count inference
//! (`unlace-struct::switch_recovery::infer_num_entries_from_xrefs`) vs the proved
//! Coq `JumpTable.v` slot-address arithmetic.
//!
//! `JumpTable.v` proves the slot model `slot(i) = base + i*entry_size` is
//! injective, byte-disjoint, and index-invertible, and that the next-symbol cap
//! `(next - base) / entry_size` is the EXACT count of whole slots that fit below
//! `next` (fit-iff-bound: `slot_index_inversion`, `next_cap_sound`,
//! `next_cap_complete`). This test pins the production inference to that spec by
//! recomputing both caps from the Coq arithmetic and asserting the Rust agrees,
//! over random tables/xrefs.
//!
//! Read-only: it calls the pure public function and compares; no producer state
//! is mutated and there is no golden impact.

use unlace_struct::switch_recovery::infer_num_entries_from_xrefs;

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

// Coq next_cap: number of whole slots in [base, next)  ==  (next-base)/entry_size.
fn coq_next_cap(base: u64, next: u64, entry_size: u32) -> Option<u32> {
    next.checked_sub(base)
        .map(|delta| (delta / entry_size as u64) as u32)
}

// Coq xref_cap: max aligned slot index + 1 (slot_index_inversion: idx =
// (x-base)/entry_size for x with (x-base) % entry_size == 0).
fn coq_xref_cap(base: u64, xrefs: &[u64], entry_size: u32) -> Option<u32> {
    let mut max_slot: Option<u32> = None;
    for &x in xrefs {
        let Some(delta) = x.checked_sub(base) else { continue };
        if delta % entry_size as u64 != 0 {
            continue; // nonaligned_not_slot: rejected, exactly as JumpTable.v
        }
        let idx = (delta / entry_size as u64) as u32;
        max_slot = Some(max_slot.map_or(idx, |m| m.max(idx)));
    }
    max_slot.map(|m| m.saturating_add(1))
}

fn coq_combined(
    base: u64,
    next: Option<u64>,
    xrefs: &[u64],
    entry_size: u32,
) -> Option<u32> {
    if entry_size == 0 {
        return None;
    }
    let nc = next.and_then(|n| coq_next_cap(base, n, entry_size));
    let xc = coq_xref_cap(base, xrefs, entry_size);
    match (nc, xc) {
        (Some(a), Some(b)) => Some(a.min(b)),
        (Some(a), None) => Some(a),
        (None, Some(b)) => Some(b),
        (None, None) => None,
    }
}

#[test]
fn infer_num_entries_matches_coq_slot_arithmetic() {
    let mut rng = XorShift64::new(0x5117_7AB1_EC0D_E001u64);
    for _ in 0..500_000 {
        let entry_size: u32 = [1u32, 2, 4, 8][(rng.next() % 4) as usize];
        let base = (rng.next() % 0x1_0000) * 8;
        // some aligned, some deliberately misaligned xrefs
        let nx = (rng.next() % 5) as usize;
        let mut xrefs = Vec::new();
        for _ in 0..nx {
            let aligned = rng.next().is_multiple_of(2);
            let off = if aligned {
                (rng.next() % 64) * entry_size as u64
            } else {
                (rng.next() % 256) | 1 // likely misaligned for entry_size>1
            };
            xrefs.push(base + off);
        }
        let next = if rng.next().is_multiple_of(3) {
            None
        } else {
            Some(base + (rng.next() % 512))
        };

        let rust = infer_num_entries_from_xrefs(base, next, &xrefs, entry_size);
        let coq = coq_combined(base, next, &xrefs, entry_size);
        assert_eq!(
            rust, coq,
            "infer_num_entries diverged from JumpTable.v: base={base} next={next:?} \
             xrefs={xrefs:?} es={entry_size}"
        );
    }
}

/// Direct check of the JumpTable.v `slot_index_inversion`: a real aligned slot
/// address round-trips to its index, and the Rust inference accepts it (count
/// >= idx+1 when only that xref is present).
#[test]
fn aligned_slot_roundtrips_like_coq() {
    let mut rng = XorShift64::new(0xA11A_5107_1235_0001u64);
    for _ in 0..200_000 {
        let entry_size: u32 = [1u32, 2, 4, 8][(rng.next() % 4) as usize];
        let base = (rng.next() % 0x1000) * 8;
        let idx = (rng.next() % 64) as u32;
        let slot = base + idx as u64 * entry_size as u64;

        // JumpTable.v slot_index_inversion: (slot-base)/es = idx, remainder 0.
        assert_eq!((slot - base) / entry_size as u64, idx as u64);
        assert_eq!((slot - base) % entry_size as u64, 0);

        // The shipping inference, given just this xref and no next-symbol cap,
        // must report at least idx+1 entries (xref_cap = max idx + 1).
        let count = infer_num_entries_from_xrefs(base, None, &[slot], entry_size)
            .expect("a single aligned xref yields a cap");
        assert_eq!(count, idx + 1, "xref_cap must be idx+1 per JumpTable.v");
    }
}
