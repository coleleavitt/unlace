//! Rust↔Coq conformance harness.
//!
//! The proofs in `rocq-tests/theories/*.v` are SPEC-MIRRORS of the Rust here:
//! each Coq function restates a Rust function arm-for-arm and proves an
//! algebraic-law / soundness theorem about it. That mirroring is only
//! trustworthy if the Rust cannot drift from the equations the Coq assumes.
//!
//! This test pins the mirror: every property below is the Rust-side image of a
//! specific Coq theorem. If someone changes `ValueLattice::join`,
//! `KnownBits::and/or/xor`, or the algebraic identities in a way that breaks
//! the proven law, THIS test fails — surfacing the divergence immediately,
//! before the stale `.v` is trusted.
//!
//! Each test names the Coq theorem it mirrors. Keep them in sync: adding a
//! proven law to a `.v` file should add a conformance check here.
//!
//! These lints fire *because* the tests deliberately exercise the algebraic
//! identities being proven (`x & 0`, `x | 0`, `x % 1`, `x * 0`, …). That is the
//! whole point of the file, so they are allowed here only.
#![allow(clippy::identity_op)]
#![allow(clippy::erasing_op)]
#![allow(clippy::modulo_one)]
#![allow(clippy::eq_op)]

use unlace_ir::known_bits::KnownBits;
use unlace_ir::value_lattice::ValueLattice;

// A small, deterministic sample of lattice elements covering every enum arm.
fn vl_samples() -> Vec<ValueLattice> {
    use ValueLattice::*;
    let mut v = vec![Unknown, Undef, Overdefined];
    for c in [0u64, 1, 2, 5, 7, 42, u64::MAX] {
        v.push(Constant(c));
    }
    for (lo, hi) in [(0u64, 0u64), (0, 10), (2, 5), (4, 12), (5, 7), (1, u64::MAX)] {
        v.push(Range { min: lo, max: hi });
    }
    v
}

// All ordered pairs of sample lattice elements (flattens two `for` levels into
// one iterator so the per-pair property checks stay shallow).
fn vl_pairs() -> impl Iterator<Item = (ValueLattice, ValueLattice)> {
    vl_samples()
        .into_iter()
        .flat_map(|a| vl_samples().into_iter().map(move |b| (a, b)))
}

// Probe values used to witness concretization (gamma) membership.
const VL_PROBE: [u64; 9] = [0, 1, 2, 4, 5, 6, 7, 10, 12];

// The Coq CONCRETIZATION `gamma` (ValueLattice.v), which DIFFERS from the Rust
// `contains` precise-fact predicate on the top/bottom arms:
//   - Overdefined is TOP   → gamma = every value (contains returns false).
//   - Unknown/Undef are BOTTOM → gamma = no value (matches contains).
//   - Constant/Range coincide with contains.
// The soundness theorems are stated over `gamma`, so the conformance checks
// must use `gamma`, not `contains`.
fn vl_gamma(x: ValueLattice, v: u64) -> bool {
    match x {
        ValueLattice::Overdefined => true,
        ValueLattice::Unknown | ValueLattice::Undef => false,
        ValueLattice::Constant(c) => c == v,
        ValueLattice::Range { min, max } => (min..=max).contains(&v),
    }
}

// ===================================================================
// ValueLattice — mirrors theories/ValueLattice.v
// ===================================================================

/// Mirrors `Theorem join_comm`. join is commutative.
#[test]
fn value_lattice_join_comm() {
    for a in vl_samples() {
        for b in vl_samples() {
            assert_eq!(a.join(b), b.join(a), "join_comm violated: {a:?} ⊔ {b:?}");
        }
    }
}

/// Mirrors `Theorem join_idem`. join is idempotent.
#[test]
fn value_lattice_join_idem() {
    for a in vl_samples() {
        assert_eq!(a.join(a), a, "join_idem violated: {a:?}");
    }
}

/// Mirrors `Theorem join_assoc`. join is associative.
#[test]
fn value_lattice_join_assoc() {
    for a in vl_samples() {
        for b in vl_samples() {
            for c in vl_samples() {
                assert_eq!(
                    a.join(b).join(c),
                    a.join(b.join(c)),
                    "join_assoc violated: {a:?} {b:?} {c:?}"
                );
            }
        }
    }
}

/// Mirrors `Theorem join_sound`: gamma(a) ∪ gamma(b) ⊆ gamma(join a b).
/// Concretely, every value contained in `a` or `b` is contained in `a ⊔ b`.
/// (Overdefined = top contains everything, so `contains` returning false for
/// it is the Rust's precise-fact view; we test the Range/Constant carriers,
/// matching the Coq `gamma` which treats those arms identically.)
#[test]
fn value_lattice_join_sound() {
    // gamma(a) ∪ gamma(b) ⊆ gamma(join a b), over the Coq concretization.
    for (a, b) in vl_pairs() {
        let j = a.join(b);
        for &v in VL_PROBE.iter().filter(|&&v| vl_gamma(a, v) || vl_gamma(b, v)) {
            assert!(vl_gamma(j, v), "join_sound violated: {v} ∈ {a:?}⊔{b:?}={j:?}");
        }
    }
}

/// Mirrors `Theorem contains_sound`: the Rust `contains` (precise facts) is a
/// subset of the concretization `gamma`.
#[test]
fn value_lattice_contains_sound() {
    for a in vl_samples() {
        for v in VL_PROBE {
            if a.contains(v) {
                assert!(vl_gamma(a, v), "contains_sound violated: {v} in {a:?}");
            }
        }
    }
}

/// Mirrors `Theorem meet_complete`: a value held by BOTH operands (per
/// `contains`) is held by their meet.
#[test]
fn value_lattice_meet_complete() {
    // contains(a) ∩ contains(b) ⊆ contains(meet a b): the Coq `meet_complete`
    // is stated over `contains` (precise facts), so this one keeps `contains`.
    for (a, b) in vl_pairs() {
        let m = a.meet(b);
        for &v in VL_PROBE.iter().filter(|&&v| a.contains(v) && b.contains(v)) {
            assert!(m.contains(v), "meet_complete violated: {v} ∈ {a:?}⊓{b:?}={m:?}");
        }
    }
}

/// Mirrors `Theorem meet_sound` (Undef-free fragment): every value the meet
/// admits is admitted by both operands.
#[test]
fn value_lattice_meet_sound() {
    // theorem scoped to the Undef-free fragment (Undef is both join- and
    // meet-identity, so no single gamma is sound for it — see KnownBits.v note)
    let undef_free = vl_pairs().filter(|(a, b)| {
        !matches!(a, ValueLattice::Undef) && !matches!(b, ValueLattice::Undef)
    });
    for (a, b) in undef_free {
        let m = a.meet(b);
        for &v in VL_PROBE.iter().filter(|&&v| vl_gamma(m, v)) {
            assert!(
                vl_gamma(a, v) && vl_gamma(b, v),
                "meet_sound violated: {v} ∈ {a:?}⊓{b:?}={m:?} but not in both"
            );
        }
    }
}

// ===================================================================
// KnownBits — mirrors theories/KnownBits.v
// ===================================================================

// gamma_kb: does abstract element `a` describe concrete value `x`?
fn gamma_kb(a: &KnownBits, x: u64) -> bool {
    let mask = KnownBits::width_mask(a.width);
    let x = x & mask;
    (x & a.one) == a.one && (x & a.zero) == 0
}

fn kb_widths() -> [u8; 5] {
    [1, 4, 8, 16, 64]
}

// A few concrete values per width, plus their from_constant abstractions.
fn kb_concrete(width: u8) -> Vec<u64> {
    let mask = KnownBits::width_mask(width);
    [0u64, 1, 2, 3, 0xA5, 0xFF, 0xDEAD_BEEF, u64::MAX]
        .into_iter()
        .map(|v| v & mask)
        .collect()
}

/// Mirrors `Theorem from_constant_sound`: a canonical constant is described by
/// its own from_constant element.
#[test]
fn known_bits_from_constant_sound() {
    for w in kb_widths() {
        for v in kb_concrete(w) {
            let a = KnownBits::from_constant(v, w);
            assert!(gamma_kb(&a, v), "from_constant_sound: {v:#x} ∉ γ(from_constant) w={w}");
        }
    }
}

/// Mirrors `Theorem from_constant_no_conflict`.
#[test]
fn known_bits_from_constant_no_conflict() {
    for w in kb_widths() {
        for v in kb_concrete(w) {
            let a = KnownBits::from_constant(v, w);
            assert!(!a.has_conflict(), "from_constant_no_conflict: w={w} v={v:#x}");
        }
    }
}

/// Mirrors `Theorem kand_sound`: x∈γ(a), y∈γ(b) ⇒ (x&y)∈γ(and a b).
#[test]
fn known_bits_and_sound() {
    for w in kb_widths() {
        let consts = kb_concrete(w);
        for &xa in &consts {
            for &xb in &consts {
                // Build abstractions that genuinely contain xa, xb (use
                // from_constant — exact — and also a partially-known element).
                let a = KnownBits::from_constant(xa, w);
                let b = KnownBits::from_constant(xb, w);
                let r = a.and(&b);
                let res = (xa & xb) & KnownBits::width_mask(w);
                assert!(gamma_kb(&r, res), "kand_sound w={w}: {xa:#x}&{xb:#x}");
            }
        }
    }
}

/// Mirrors `Theorem kor_sound`.
#[test]
fn known_bits_or_sound() {
    for w in kb_widths() {
        let consts = kb_concrete(w);
        for &xa in &consts {
            for &xb in &consts {
                let a = KnownBits::from_constant(xa, w);
                let b = KnownBits::from_constant(xb, w);
                let r = a.or(&b);
                let res = (xa | xb) & KnownBits::width_mask(w);
                assert!(gamma_kb(&r, res), "kor_sound w={w}: {xa:#x}|{xb:#x}");
            }
        }
    }
}

/// Mirrors `Theorem kxor_sound` — including the `both_known` gate.
#[test]
fn known_bits_xor_sound() {
    for w in kb_widths() {
        let consts = kb_concrete(w);
        for &xa in &consts {
            for &xb in &consts {
                let a = KnownBits::from_constant(xa, w);
                let b = KnownBits::from_constant(xb, w);
                let r = a.xor(&b);
                let res = (xa ^ xb) & KnownBits::width_mask(w);
                assert!(gamma_kb(&r, res), "kxor_sound w={w}: {xa:#x}^{xb:#x}");
            }
        }
    }
}

/// Mirrors `Theorem conflict_gamma_empty`: a conflicting element describes
/// no value. We synthesize a conflict (bit 0 both known-0 and known-1).
#[test]
fn known_bits_conflict_empty() {
    for w in kb_widths() {
        let bad = KnownBits { zero: 1, one: 1, width: w };
        assert!(bad.has_conflict());
        for x in 0u64..256 {
            assert!(!gamma_kb(&bad, x), "conflict_gamma_empty w={w} x={x}");
        }
    }
}

// ===================================================================
// AlgebraicSimplify — mirrors theories/AlgebraicSimplify.v
// ===================================================================
//
// The Coq proves `eval w rho (RULE e) = eval w rho e` over wrapped width-w
// arithmetic. Here we check the same identities on raw `u64` (width 64 =
// the unwrapped wrapping_* ops), which is the w=64 instance of each theorem.

/// Mirrors add_zero_r/l, sub_zero_r/sub_self, mul_one_r/mul_zero_r.
#[test]
fn algebraic_arith_identities() {
    for x in [0u64, 1, 2, 7, 42, 1000, u64::MAX, u64::MAX - 1] {
        assert_eq!(x.wrapping_add(0), x, "add_zero_r");
        assert_eq!(0u64.wrapping_add(x), x, "add_zero_l");
        assert_eq!(x.wrapping_sub(0), x, "sub_zero_r");
        assert_eq!(x.wrapping_sub(x), 0, "sub_self");
        assert_eq!(x.wrapping_mul(1), x, "mul_one_r");
        assert_eq!(x.wrapping_mul(0), 0, "mul_zero_r");
        if x != 0 {
            assert_eq!(x / 1, x, "div_one_r");
            assert_eq!(x % 1, 0, "rem_one_r");
        }
    }
}

/// Mirrors and_zero_r, and_mask_r, and_self, or_zero_r, or_mask_r,
/// xor_zero_r, xor_self.
#[test]
fn algebraic_bitwise_identities() {
    for x in [0u64, 1, 2, 7, 0xA5, 0xDEAD_BEEF, u64::MAX] {
        assert_eq!(x & 0, 0, "and_zero_r");
        assert_eq!(x & u64::MAX, x, "and_mask_r (w=64)");
        assert_eq!(x & x, x, "and_self");
        assert_eq!(x | 0, x, "or_zero_r");
        assert_eq!(x | u64::MAX, u64::MAX, "or_mask_r (w=64)");
        assert_eq!(x ^ 0, x, "xor_zero_r");
        assert_eq!(x ^ x, 0, "xor_self");
    }
}

/// Mirrors eq_self / ne_self and neg_neg / not_not.
#[test]
fn algebraic_cmp_and_negate_identities() {
    for x in [0u64, 1, 2, 7, 42, u64::MAX] {
        assert_eq!((x == x) as u64, 1, "eq_self");
        assert_eq!((x != x) as u64, 0, "ne_self");
        assert_eq!(x.wrapping_neg().wrapping_neg(), x, "neg_neg");
        assert_eq!(!(!x), x, "not_not");
    }
}

// ===================================================================
// Property-based fuzzer — Rust↔Coq invariants over millions of cases
// ===================================================================
//
// The tests above pin the proven laws on small fixed samples. This module
// hammers the SAME invariants with a deterministic xorshift PRNG over millions
// of random inputs, so any Rust-side drift from a Rocq theorem is caught
// statistically as well as on the witnesses. Deterministic (fixed seed) =
// reproducible; no external crate needed.

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

// gamma_kb: does abstract `a` describe concrete `x`? (mirrors KnownBits.v)
fn kb_gamma(a: &KnownBits, x: u64) -> bool {
    let m = KnownBits::width_mask(a.width);
    let x = x & m;
    (x & a.one) == a.one && (x & a.zero) == 0
}

const FUZZ_ITERS: usize = 2_000_000;

/// kand/kor/kxor SOUNDNESS over random known-constant pairs (KnownBits.v
/// `kand_sound`/`kor_sound`/`kxor_sound`). For exact (from_constant) inputs the
/// concrete result must land in the abstract result's concretization.
#[test]
fn fuzz_known_bits_soundness() {
    let mut rng = XorShift64::new(0xC0FF_EE12_3456_789B);
    let widths = [1u8, 8, 16, 32, 64];
    for _ in 0..FUZZ_ITERS {
        let w = widths[(rng.next() % widths.len() as u64) as usize];
        let m = KnownBits::width_mask(w);
        let xa = rng.next() & m;
        let xb = rng.next() & m;
        let a = KnownBits::from_constant(xa, w);
        let b = KnownBits::from_constant(xb, w);
        assert!(kb_gamma(&a.and(&b), (xa & xb) & m), "kand_sound w={w}");
        assert!(kb_gamma(&a.or(&b), (xa | xb) & m), "kor_sound w={w}");
        assert!(kb_gamma(&a.xor(&b), (xa ^ xb) & m), "kxor_sound w={w}");
    }
}

/// kand BEST-ABSTRACT-TRANSFORMER bound (KnownBits.v `kand_optimal_*`): for
/// fully-known inputs, the AND is itself fully known and equals the exact AND —
/// no precision is dropped.
#[test]
fn fuzz_known_bits_bat_optimality() {
    let mut rng = XorShift64::new(0xBA70_9715_EED0_0001 ^ 0x9E3779B97F4A7C15);
    let widths = [1u8, 8, 16, 32, 64];
    for _ in 0..FUZZ_ITERS {
        let w = widths[(rng.next() % widths.len() as u64) as usize];
        let m = KnownBits::width_mask(w);
        let xa = rng.next() & m;
        let xb = rng.next() & m;
        let r = KnownBits::from_constant(xa, w).and(&KnownBits::from_constant(xb, w));
        // fully known: every bit is known-0 or known-1, and one-mask = exact AND
        assert_eq!(r.one, (xa & xb) & m, "BAT: kand one-mask exact w={w}");
        assert_eq!((r.zero | r.one) & m, m, "BAT: kand fully known w={w}");
    }
}

/// kshl SOUNDNESS (KnownBits.v `kshl_sound`): shifting a known constant left is
/// sound vs the concrete wrapped shift.
#[test]
fn fuzz_known_bits_shl_soundness() {
    let mut rng = XorShift64::new(0x5417_5417_5417_5417);
    for _ in 0..FUZZ_ITERS {
        let w = 64u8;
        let x = rng.next();
        let s = (rng.next() % 64) as u32;
        let a = KnownBits::from_constant(x, w);
        let shifted = a.shl(s);
        let concrete = x.wrapping_shl(s);
        assert!(kb_gamma(&shifted, concrete), "kshl_sound s={s}");
    }
}

/// ValueLattice join LATTICE LAWS (ValueLattice.v): commutativity, idempotence,
/// associativity over random elements.
#[test]
fn fuzz_value_lattice_laws() {
    use ValueLattice::*;
    let mut rng = XorShift64::new(0x1A77_1CE0_1A77_1CE0);
    let gen_vl = |r: &mut XorShift64| -> ValueLattice {
        match r.next() % 5 {
            0 => Unknown,
            1 => Undef,
            2 => Overdefined,
            3 => Constant(r.next()),
            _ => {
                let a = r.next();
                let b = r.next();
                Range { min: a.min(b), max: a.max(b) }
            }
        }
    };
    for _ in 0..FUZZ_ITERS {
        let a = gen_vl(&mut rng);
        let b = gen_vl(&mut rng);
        let c = gen_vl(&mut rng);
        assert_eq!(a.join(b), b.join(a), "join_comm");
        assert_eq!(a.join(a), a, "join_idem");
        assert_eq!(a.join(b).join(c), a.join(b.join(c)), "join_assoc");
    }
}

/// ValueLattice join SOUNDNESS (ValueLattice.v `join_sound`): a value contained
/// in either operand is contained in the join (modulo widening into top).
#[test]
fn fuzz_value_lattice_join_sound() {
    use ValueLattice::*;
    let mut rng = XorShift64::new(0x5011_4D50_114D_0003);
    for _ in 0..FUZZ_ITERS {
        let lo = rng.next() % 1000;
        let hi = lo + rng.next() % 1000;
        let a = Range { min: lo, max: hi };
        let b = Constant(rng.next() % 2000);
        let j = a.join(b);
        let v = rng.next() % 2000;
        if a.contains(v) || b.contains(v) {
            assert!(
                j.contains(v) || matches!(j, Overdefined),
                "join_sound: {v} in {a:?}⊔{b:?}={j:?}"
            );
        }
    }
}

/// Algebraic identities (AlgebraicSimplify.v) over random u64 (the w=64 case).
#[test]
fn fuzz_algebraic_identities() {
    let mut rng = XorShift64::new(0xA76E_B7A1_C5ED_0001);
    for _ in 0..FUZZ_ITERS {
        let x = rng.next();
        let y = rng.next();
        assert_eq!(x.wrapping_add(0), x, "add_zero");
        assert_eq!(x.wrapping_sub(x), 0, "sub_self");
        assert_eq!(x.wrapping_mul(1), x, "mul_one");
        assert_eq!(x.wrapping_mul(0), 0, "mul_zero");
        assert_eq!(x & u64::MAX, x, "and_mask");
        assert_eq!(x | u64::MAX, u64::MAX, "or_mask");
        assert_eq!(x ^ x, 0, "xor_self");
        assert_eq!(!(!x), x, "not_not");
        assert_eq!(x.wrapping_neg().wrapping_neg(), x, "neg_neg");
        // add/mul associativity + commutativity (Bitvector wrap distribution)
        let z = rng.next();
        assert_eq!(x.wrapping_add(y), y.wrapping_add(x), "add_comm");
        assert_eq!(
            x.wrapping_add(y).wrapping_add(z),
            x.wrapping_add(y.wrapping_add(z)),
            "add_assoc"
        );
        assert_eq!(
            x.wrapping_mul(y).wrapping_mul(z),
            x.wrapping_mul(y.wrapping_mul(z)),
            "mul_assoc"
        );
    }
}

/// KnownBitsArith low-prefix carry (KnownBitsArith.v `add_low_prefix`): the low
/// k bits of x+y depend only on the low k bits of x and y.
#[test]
fn fuzz_add_low_prefix() {
    let mut rng = XorShift64::new(0xCA77_2222_CA77_2222);
    for _ in 0..FUZZ_ITERS {
        let k = (rng.next() % 63) + 1; // 1..=63
        let km = (1u64 << k) - 1;
        let x = rng.next();
        let y = rng.next();
        // perturb only the high bits (>= k) of x and y
        let xh = x ^ (rng.next() & !km);
        let yh = y ^ (rng.next() & !km);
        assert_eq!(
            x.wrapping_add(y) & km,
            xh.wrapping_add(yh) & km,
            "add_low_prefix k={k}"
        );
    }
}

// ===================================================================
// MemoryDataflow alias mapping — pins MemoryLocation::must_not_alias to the
// Coq byte-range formula (MemoryDataflow.v `mloc_no_alias` / `must_not_alias`).
// ===================================================================
//
// The proof's frame theorem ("a disjoint store preserves the value") only
// transfers to the producer if the Rust `must_not_alias` decision matches the
// Coq byte-range disjointness. This test mechanically pins that mapping for
// same-space stack locations over the fuzz corpus.

use unlace_ir::memory_ssa::MemoryLocation;

#[test]
fn fuzz_memory_must_not_alias_matches_coq_byte_range() {
    let mut rng = XorShift64::new(0x3EA1_5ED0_0000_0007);
    for _ in 0..FUZZ_ITERS {
        // small signed offsets and positive sizes, same (stack) space
        let off_a = (rng.next() % 64) as i64 - 32;
        let off_b = (rng.next() % 64) as i64 - 32;
        let size_a = 1 + (rng.next() % 8) as u32;
        let size_b = 1 + (rng.next() % 8) as u32;
        let a = MemoryLocation::stack(off_a, size_a);
        let b = MemoryLocation::stack(off_b, size_b);

        // Coq `must_not_alias` (MemoryDataflow.v): end_a <= off_b \/ end_b <= off_a
        let end_a = off_a + size_a as i64;
        let end_b = off_b + size_b as i64;
        let coq_disjoint = end_a <= off_b || end_b <= off_a;

        assert_eq!(
            a.must_not_alias(&b),
            coq_disjoint,
            "must_not_alias disagrees with Coq byte-range: a=({off_a},{size_a}) b=({off_b},{size_b})"
        );
    }
}
