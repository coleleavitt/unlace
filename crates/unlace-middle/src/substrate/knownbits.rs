//! (unlace #1276, from the archived Rocq `KnownBits.v`) The known-bits value domain: an abstract
//! value is a pair of masks, `zero` (bits known to be 0) and `one` (bits known to be 1). The
//! non-zero mask (`nzm`, `calc_nz_mask`) is the `!zero` half of this domain; this module adds the
//! known-one half and the transfers. `and`, `or` and `xor` are exact per bit, so each result is
//! the best abstraction of the operation. `shl` by a constant is exact too. `add` and `sub` are
//! sound but not optimal: they keep only the low bits that both inputs know. Nothing reads this
//! domain yet; the tests below check these transfers, so a later pass can use them behind an
//! option.

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

    /// `a << k` for a constant `k`: the vacated low bits are known 0 and the rest shift up.
    pub fn shl(self, k: u32) -> KnownBits {
        if k >= 64 {
            return KnownBits {
                zero: u64::MAX,
                one: 0,
            };
        }
        KnownBits {
            zero: (self.zero << k) | ((1u64 << k) - 1),
            one: self.one << k,
        }
    }

    /// `a + b` and `a - b` over `size` bytes. Only the low bits both inputs know are exact,
    /// the carry out of an unknown bit is not tracked, so the result is sound but not optimal.
    pub fn add(self, other: KnownBits, size: i32) -> KnownBits {
        self.low_known_combine(other, size, u64::wrapping_add)
    }

    pub fn sub(self, other: KnownBits, size: i32) -> KnownBits {
        self.low_known_combine(other, size, u64::wrapping_sub)
    }

    fn low_known_combine(self, other: KnownBits, size: i32, op: fn(u64, u64) -> u64) -> KnownBits {
        let both = (self.zero | self.one) & (other.zero | other.one);
        let k = both.trailing_ones().min(8 * size as u32);
        if k == 0 {
            return KnownBits::unknown();
        }
        let low = if k >= 64 { u64::MAX } else { (1u64 << k) - 1 };
        let sum = op(self.one, other.one) & low;
        KnownBits {
            zero: !sum & low,
            one: sum,
        }
    }
}

#[cfg(test)]
mod tests;
