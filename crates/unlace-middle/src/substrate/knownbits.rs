//! (unlace #1276, from the archived Rocq `KnownBits.v`) The known-bits value domain: an abstract
//! value is a pair of masks, `zero` (bits known to be 0) and `one` (bits known to be 1). The
//! non-zero mask (`nzm`, `calc_nz_mask`) is the `!zero` half of this domain; this module adds the
//! known-one half and the bitwise transfers. `and`, `or` and `xor` are exact per bit, so each
//! result is the best abstraction of the operation (every forced bit is recorded). Nothing reads
//! this domain yet; the transfers are proved sound and optimal by the tests below, so a later
//! pass can use them behind an option.

use unlace_base::address::calc_mask;

/// An abstract value of `size` bytes: `zero` has a bit set where the value is known 0, `one`
/// where it is known 1. The two masks never overlap; a bit in neither is unknown.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct KnownBits {
    pub zero: u64,
    pub one: u64,
}

impl KnownBits {
    /// Every bit unknown (the top of the domain).
    pub fn unknown() -> Self {
        KnownBits { zero: 0, one: 0 }
    }

    /// The exact value `v` truncated to `size` bytes.
    pub fn constant(v: u64, size: i32) -> Self {
        let m = calc_mask(size);
        KnownBits {
            zero: !v & m,
            one: v & m,
        }
    }

    /// Possibly-one bits: the `nzm` view of this value.
    pub fn nz_mask(&self, size: i32) -> u64 {
        !self.zero & calc_mask(size)
    }

    /// True when every bit is known, and so `value` is the single concrete value.
    pub fn is_constant(&self, size: i32) -> bool {
        (self.zero | self.one) & calc_mask(size) == calc_mask(size)
    }

    /// Whether the concrete value `v` is a member of this abstract value.
    pub fn contains(&self, v: u64) -> bool {
        v & self.zero == 0 && v & self.one == self.one
    }

    /// `a & b`: a result bit is known 0 when either input's bit is known 0, known 1 when both are.
    pub fn and(self, other: KnownBits) -> KnownBits {
        KnownBits {
            zero: self.zero | other.zero,
            one: self.one & other.one,
        }
    }

    /// `a | b`: a result bit is known 1 when either input's bit is known 1, known 0 when both are.
    pub fn or(self, other: KnownBits) -> KnownBits {
        KnownBits {
            zero: self.zero & other.zero,
            one: self.one | other.one,
        }
    }

    /// `a ^ b`: a result bit is known only when both input bits are known.
    pub fn xor(self, other: KnownBits) -> KnownBits {
        KnownBits {
            zero: (self.zero & other.zero) | (self.one & other.one),
            one: (self.zero & other.one) | (self.one & other.zero),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::KnownBits;

    /// Decode a base-3 code over `width` bits: digit 0 = known 0, 1 = known 1, 2 = unknown.
    fn decode(mut code: u64, width: u32) -> KnownBits {
        let mut k = KnownBits::unknown();
        for i in 0..width {
            match code % 3 {
                0 => k.zero |= 1 << i,
                1 => k.one |= 1 << i,
                _ => {}
            }
            code /= 3;
        }
        k
    }

    fn members(k: KnownBits, width: u32) -> Vec<u64> {
        (0..1u64 << width).filter(|&v| k.contains(v)).collect()
    }

    /// Every abstract pair over 4 bits (81 each): the result of each op must be exactly the set of
    /// bits that every concrete pair agrees on. That is soundness (no reachable bit is missed) and
    /// optimality (no forced bit is dropped) at once, because each bit is independent.
    #[test]
    fn bitwise_transfers_are_sound_and_optimal() {
        const W: u32 = 4;
        let ops: [(
            &str,
            fn(KnownBits, KnownBits) -> KnownBits,
            fn(u64, u64) -> u64,
        ); 3] = [
            ("and", KnownBits::and, |x, y| x & y),
            ("or", KnownBits::or, |x, y| x | y),
            ("xor", KnownBits::xor, |x, y| x ^ y),
        ];
        for (name, abs, conc) in ops {
            for ca in 0..81u64 {
                for cb in 0..81u64 {
                    let (a, b) = (decode(ca, W), decode(cb, W));
                    let (ma, mb) = (members(a, W), members(b, W));
                    let got = abs(a, b);
                    let mut any_one = 0u64;
                    let mut any_zero = 0u64;
                    for &x in &ma {
                        for &y in &mb {
                            let r = conc(x, y);
                            any_one |= r;
                            any_zero |= !r;
                        }
                    }
                    let mask = (1u64 << W) - 1;
                    let all_one = mask & !any_zero; // bits 1 in every pair
                    let all_zero = mask & !any_one; // bits 0 in every pair
                    assert_eq!(got.one, all_one, "{name} one-mask a={a:?} b={b:?}");
                    assert_eq!(got.zero, all_zero, "{name} zero-mask a={a:?} b={b:?}");
                }
            }
        }
    }

    #[test]
    fn constants_and_nz_mask() {
        let k = KnownBits::constant(0x1_00FF, 2);
        assert_eq!(k.one, 0x00FF);
        assert_eq!(k.zero, 0xFF00);
        assert!(k.is_constant(2));
        assert_eq!(k.nz_mask(2), 0x00FF);
        assert_eq!(KnownBits::unknown().nz_mask(1), 0xFF);
        assert!(!KnownBits::unknown().is_constant(1));
    }

    /// Randomised check at full 64-bit width: each abstract value is built around a concrete
    /// member, so the result must still contain the concrete op result.
    #[test]
    fn random_64bit_soundness() {
        let mut s: u64 = 0x9E37_79B9_7F4A_7C15;
        let mut next = move || {
            s ^= s << 13;
            s ^= s >> 7;
            s ^= s << 17;
            s
        };
        for _ in 0..10_000 {
            let (x, y) = (next(), next());
            let (km, kn) = (next(), next());
            let a = KnownBits {
                zero: !x & km,
                one: x & km,
            };
            let b = KnownBits {
                zero: !y & kn,
                one: y & kn,
            };
            assert!(a.contains(x) && b.contains(y));
            assert!(a.and(b).contains(x & y));
            assert!(a.or(b).contains(x | y));
            assert!(a.xor(b).contains(x ^ y));
        }
    }
}
