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
mod tests;
