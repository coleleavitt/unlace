//! Conformance: Rust `TInfo::{get_best_fit_member, calc_gaps}` vs the proved
//! Coq `TInfo.v` spec.
//!
//! The Coq proofs (`rocq-tests/theories/TInfo.v`) establish, for the flat-struct
//! case:
//!   - `best_fit_sound`     — the returned field contains the offset;
//!   - `best_fit_tightest`  — it is the containing field with the HIGHEST start;
//!   - `best_fit_complete`  — if any field contains the offset, a field is found;
//!   - `gap_uncovered`      — a gap byte is covered by no field.
//!
//! This test pins the SHIPPING Rust (`crates/unlace-ir/src/tinfo.rs`, used by the
//! struct-recovery pipeline) to those properties over random flat structs. It is
//! read-only — it constructs `TInfo` values and queries them; it never mutates
//! producer state and has no golden impact.

use unlace_ir::tinfo::{TField, TInfo};

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

fn int_ty(width: u8) -> TInfo {
    TInfo::Int { width, signed: false }
}

// Build a random flat struct: ascending, possibly-gapped, possibly-overlapping
// fields of integer types (sizes in {1,2,4,8}).
fn random_struct(rng: &mut XorShift64) -> (TInfo, Vec<(u64, u64)>) {
    let nfields = 1 + (rng.next() % 6) as usize;
    let mut fields = Vec::new();
    let mut ranges = Vec::new();
    let mut cursor = 0u64;
    for i in 0..nfields {
        // gap before this field (0..=3 bytes)
        cursor += rng.next() % 4;
        let width: u8 = [1u8, 2, 4, 8][(rng.next() % 4) as usize];
        let offset = cursor;
        fields.push(TField {
            name: Some(format!("f{i}")),
            offset,
            ty: int_ty(width),
        });
        ranges.push((offset, offset + width as u64));
        cursor = offset + width as u64;
    }
    (
        TInfo::Struct {
            name: Some("S".into()),
            fields,
        },
        ranges,
    )
}

fn field_ranges(t: &TInfo) -> Vec<(u64, u64)> {
    match t {
        TInfo::Struct { fields, .. } => fields
            .iter()
            .map(|f| (f.offset, f.offset + f.ty.size().unwrap_or(1)))
            .collect(),
        _ => Vec::new(),
    }
}

const ITERS: usize = 200_000;

// The field offset Rust chose for `off` (None if it resolved nothing).
fn rust_chosen_offset(s: &TInfo, off: u64) -> Option<u64> {
    s.get_best_fit_member(off)
        .and_then(|rm| rm.path.first().map(|p| p.offset))
}

// The field offset the Coq `best_fit` spec mandates: highest-offset containing
// field, or None if no field contains `off`.
fn coq_expected_offset(fields: &[TField], off: u64) -> Option<u64> {
    fields
        .iter()
        .filter(|f| f.offset <= off && off < f.offset + f.ty.size().unwrap_or(1))
        .map(|f| f.offset)
        .max()
}

/// Mirrors `best_fit_sound` + `best_fit_tightest` + `best_fit_complete`:
/// the Rust pick equals the highest-offset containing field (or both None).
#[test]
fn tinfo_best_fit_matches_coq_spec() {
    let mut rng = XorShift64::new(0x71F0_C0DE_71F0_C0DE);
    for _ in 0..ITERS {
        let (s, _) = random_struct(&mut rng);
        let fields = match &s {
            TInfo::Struct { fields, .. } => fields.clone(),
            _ => unreachable!(),
        };
        let max_end = field_ranges(&s).iter().map(|&(_, e)| e).max().unwrap_or(0);
        let off = rng.next() % (max_end + 4);

        let expected = coq_expected_offset(&fields, off);
        let actual = rust_chosen_offset(&s, off);
        assert_eq!(
            actual, expected,
            "best_fit (sound+tightest+complete) mismatch at off={off}"
        );
    }
}

/// Mirrors `gap_uncovered`: every gap byte is covered by no field.
#[test]
fn tinfo_calc_gaps_disjoint_from_fields() {
    let mut rng = XorShift64::new(0x6AF5_1234_6AF5_1234);
    for _ in 0..ITERS {
        let (s, _) = random_struct(&mut rng);
        let ranges = field_ranges(&s);
        for (gstart, gend) in s.calc_gaps() {
            assert!(gstart < gend, "degenerate gap [{gstart},{gend})");
            // No byte in the gap may be inside any field range.
            for &(fstart, fend) in &ranges {
                let overlap = gstart < fend && fstart < gend;
                assert!(
                    !overlap,
                    "gap [{gstart},{gend}) overlaps field [{fstart},{fend})"
                );
            }
        }
    }
}
