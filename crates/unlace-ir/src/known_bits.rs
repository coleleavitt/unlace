//! KnownBits and ConstantRange — bit-level and range-level value tracking.
//!
//! Models the known-zero and known-one bits for each SSA value, following
//! LLVM's `KnownBits.h` and `ValueTracking.cpp`. Also provides a simple
//! `ConstantRange` for interval arithmetic.
//!
//! This is a *query-only* analysis: it does not mutate the IR. Passes like
//! condition simplification and cast elimination read these facts to make
//! decisions.

/// Tracks which bits of a value are known to be zero, known to be one,
/// or unknown. Width is stored to avoid relying on caller discipline.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct KnownBits {
    /// Bits known to be zero (set bit = "known zero at that position").
    pub zero: u64,
    /// Bits known to be one (set bit = "known one at that position").
    pub one: u64,
    /// Bit-width of the tracked value (1..=64).
    pub width: u8,
}

impl KnownBits {
    /// Create a fully-unknown value of the given width.
    pub fn unknown(width: u8) -> Self {
        Self {
            zero: 0,
            one: 0,
            width,
        }
    }

    /// Create a fully-known constant.
    pub fn from_constant(value: u64, width: u8) -> Self {
        let mask = Self::width_mask(width);
        let val = value & mask;
        Self {
            zero: (!val) & mask,
            one: val & mask,
            width,
        }
    }

    /// A mask with `width` low bits set.
    pub fn width_mask(width: u8) -> u64 {
        if width >= 64 {
            u64::MAX
        } else {
            (1u64 << width) - 1
        }
    }

    /// Whether there is a conflict (a bit is both zero and one).
    pub fn has_conflict(&self) -> bool {
        (self.zero & self.one) != 0
    }

    /// Whether the value is fully known (all bits determined).
    pub fn is_constant(&self) -> bool {
        let mask = Self::width_mask(self.width);
        (self.zero | self.one) == mask
    }

    /// Get the constant value if fully known.
    pub fn constant_value(&self) -> Option<u64> {
        if self.is_constant() {
            Some(self.one)
        } else {
            None
        }
    }

    /// Whether the value is provably zero.
    pub fn is_zero(&self) -> bool {
        let mask = Self::width_mask(self.width);
        self.zero == mask
    }

    /// Count the minimum number of leading zeros.
    pub fn count_min_leading_zeros(&self) -> u32 {
        if self.width == 0 {
            return 0;
        }
        let mask = Self::width_mask(self.width);
        let unknown_or_zero = (self.zero | !(self.one)) & mask;
        // Leading zeros in the effective width.
        let shift = 64 - self.width as u32;
        (unknown_or_zero << shift)
            .leading_ones()
            .min(self.zero.reverse_bits().leading_ones())
            .min(self.width as u32)
    }

    /// Number of bits where the value is unknown.
    pub fn count_unknown(&self) -> u32 {
        let mask = Self::width_mask(self.width);
        let known = (self.zero | self.one) & mask;
        self.width as u32 - known.count_ones()
    }

    // ------------------------------------------------------------------
    // Arithmetic transfer functions (LLVM KnownBits.h equivalents)
    // ------------------------------------------------------------------

    /// Bitwise AND.
    pub fn and(&self, rhs: &Self) -> Self {
        debug_assert_eq!(self.width, rhs.width);
        // If either input has a known-zero bit, output is zero.
        // Output is one only if both inputs are known-one.
        Self {
            zero: self.zero | rhs.zero,
            one: self.one & rhs.one,
            width: self.width,
        }
    }

    /// Bitwise OR.
    pub fn or(&self, rhs: &Self) -> Self {
        debug_assert_eq!(self.width, rhs.width);
        Self {
            zero: self.zero & rhs.zero,
            one: self.one | rhs.one,
            width: self.width,
        }
    }

    /// Bitwise XOR.
    pub fn xor(&self, rhs: &Self) -> Self {
        debug_assert_eq!(self.width, rhs.width);
        let mask = Self::width_mask(self.width);
        // Known if both positions are known.
        let both_known = (self.zero | self.one) & (rhs.zero | rhs.one) & mask;
        let result_one = ((self.one & rhs.zero) | (self.zero & rhs.one)) & both_known;
        let result_zero = ((self.one & rhs.one) | (self.zero & rhs.zero)) & both_known;
        Self {
            zero: result_zero,
            one: result_one,
            width: self.width,
        }
    }

    /// Logical left shift by a known constant amount.
    pub fn shl(&self, amount: u32) -> Self {
        if amount >= self.width as u32 {
            return Self::from_constant(0, self.width);
        }
        let mask = Self::width_mask(self.width);
        Self {
            zero: ((self.zero << amount) | ((1u64 << amount) - 1)) & mask,
            one: (self.one << amount) & mask,
            width: self.width,
        }
    }

    /// Logical right shift by a known constant amount.
    pub fn lshr(&self, amount: u32) -> Self {
        if amount >= self.width as u32 {
            return Self::from_constant(0, self.width);
        }
        let mask = Self::width_mask(self.width);
        // High bits become known-zero after logical right shift.
        let high_zeros = if self.width as u32 - amount < 64 {
            mask & !((1u64 << (self.width as u32 - amount)) - 1)
        } else {
            0
        };
        Self {
            zero: ((self.zero >> amount) | high_zeros) & mask,
            one: (self.one >> amount) & mask,
            width: self.width,
        }
    }

    /// Arithmetic right shift by a known constant amount.
    pub fn ashr(&self, amount: u32) -> Self {
        if amount >= self.width as u32 {
            // All bits are copies of the sign bit.
            let sign_bit = 1u64 << (self.width as u32 - 1);
            if self.one & sign_bit != 0 {
                return Self::from_constant(Self::width_mask(self.width), self.width);
            } else if self.zero & sign_bit != 0 {
                return Self::from_constant(0, self.width);
            } else {
                return Self::unknown(self.width);
            }
        }
        let mask = Self::width_mask(self.width);
        let sign_bit = 1u64 << (self.width as u32 - 1);
        let high_mask = if self.width as u32 - amount < 64 {
            mask & !((1u64 << (self.width as u32 - amount)) - 1)
        } else {
            0
        };

        let (high_zero, high_one) = if self.zero & sign_bit != 0 {
            (high_mask, 0u64)
        } else if self.one & sign_bit != 0 {
            (0u64, high_mask)
        } else {
            (0u64, 0u64)
        };

        Self {
            zero: ((self.zero >> amount) | high_zero) & mask,
            one: ((self.one >> amount) | high_one) & mask,
            width: self.width,
        }
    }

    /// Zero-extend to a wider width.
    pub fn zext(&self, new_width: u8) -> Self {
        debug_assert!(new_width >= self.width);
        let old_mask = Self::width_mask(self.width);
        let new_mask = Self::width_mask(new_width);
        // New high bits are known zero.
        let high_bits = new_mask & !old_mask;
        Self {
            zero: (self.zero & old_mask) | high_bits,
            one: self.one & old_mask,
            width: new_width,
        }
    }

    /// Sign-extend to a wider width.
    pub fn sext(&self, new_width: u8) -> Self {
        debug_assert!(new_width >= self.width);
        let old_mask = Self::width_mask(self.width);
        let new_mask = Self::width_mask(new_width);
        let sign_bit = 1u64 << (self.width as u32 - 1);
        let high_bits = new_mask & !old_mask;

        let (high_zero, high_one) = if self.zero & sign_bit != 0 {
            (high_bits, 0u64)
        } else if self.one & sign_bit != 0 {
            (0u64, high_bits)
        } else {
            (0u64, 0u64)
        };

        Self {
            zero: (self.zero & old_mask) | high_zero,
            one: (self.one & old_mask) | high_one,
            width: new_width,
        }
    }

    /// Truncate to a narrower width.
    pub fn trunc(&self, new_width: u8) -> Self {
        debug_assert!(new_width <= self.width);
        let mask = Self::width_mask(new_width);
        Self {
            zero: self.zero & mask,
            one: self.one & mask,
            width: new_width,
        }
    }

    /// Add: conservative — propagates carry-bit knowledge.
    /// This is a simplified version (not full ripple-carry).
    pub fn add(&self, rhs: &Self) -> Self {
        debug_assert_eq!(self.width, rhs.width);
        let mask = Self::width_mask(self.width);

        // If both are constant, result is constant.
        if self.is_constant() && rhs.is_constant() {
            let sum = self.one.wrapping_add(rhs.one) & mask;
            return Self::from_constant(sum, self.width);
        }

        // Conservative: low bits that are both known-zero stay zero until
        // a carry propagates through them. Count trailing known-zeros on both.
        let trailing_zeros_a = (self.zero & !self.one)
            .trailing_ones()
            .min(self.width as u32);
        let trailing_zeros_b = (rhs.zero & !rhs.one).trailing_ones().min(self.width as u32);
        let common_trailing = trailing_zeros_a.min(trailing_zeros_b);

        let known_zero_low = if common_trailing > 0 {
            (1u64 << common_trailing) - 1
        } else {
            0
        };

        Self {
            zero: known_zero_low & mask,
            one: 0,
            width: self.width,
        }
    }

    /// Subtract: conservative.
    pub fn sub(&self, rhs: &Self) -> Self {
        debug_assert_eq!(self.width, rhs.width);
        let mask = Self::width_mask(self.width);

        if self.is_constant() && rhs.is_constant() {
            let diff = self.one.wrapping_sub(rhs.one) & mask;
            return Self::from_constant(diff, self.width);
        }

        Self::unknown(self.width)
    }

    /// Multiply: conservative — only handles constant cases well.
    pub fn mul(&self, rhs: &Self) -> Self {
        debug_assert_eq!(self.width, rhs.width);
        let mask = Self::width_mask(self.width);

        if self.is_constant() && rhs.is_constant() {
            let prod = self.one.wrapping_mul(rhs.one) & mask;
            return Self::from_constant(prod, self.width);
        }

        // Trailing zeros of the product >= sum of trailing zeros of operands.
        let tz_a = (self.zero & !self.one)
            .trailing_ones()
            .min(self.width as u32);
        let tz_b = (rhs.zero & !rhs.one).trailing_ones().min(self.width as u32);
        let tz_sum = (tz_a + tz_b).min(self.width as u32);

        let known_zero_low = if tz_sum == 0 {
            0
        } else if tz_sum >= 64 {
            mask
        } else {
            ((1u64 << tz_sum) - 1) & mask
        };

        Self {
            zero: known_zero_low,
            one: 0,
            width: self.width,
        }
    }
}

// ===========================================================================
// ConstantRange
// ===========================================================================

/// A range of possible values for a width-limited integer.
///
/// Half-open interval `[lo, hi)` wrapping around at the width boundary.
/// When `lo == hi`, the range is either full (all values) or empty.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ConstantRange {
    pub lo: u64,
    pub hi: u64,
    pub width: u8,
    /// If true, interpret `lo`/`hi` as signed (two's complement).
    pub is_signed: bool,
}

impl ConstantRange {
    /// Full range (any value of this width is possible).
    pub fn full(width: u8) -> Self {
        Self {
            lo: 0,
            hi: 0,
            width,
            is_signed: false,
        }
    }

    /// Empty range (no values possible — contradiction).
    pub fn empty(width: u8) -> Self {
        // We use a sentinel: lo=1, hi=0, which is impossible as a normal wrap.
        Self {
            lo: 1,
            hi: 0,
            width,
            is_signed: false,
        }
    }

    /// Single-value range.
    pub fn exact(value: u64, width: u8) -> Self {
        let mask = KnownBits::width_mask(width);
        let v = value & mask;
        let hi = v.wrapping_add(1) & mask;
        Self {
            lo: v,
            hi,
            width,
            is_signed: false,
        }
    }

    /// Unsigned range [lo, hi) (non-wrapping).
    pub fn unsigned(lo: u64, hi: u64, width: u8) -> Self {
        let mask = KnownBits::width_mask(width);
        Self {
            lo: lo & mask,
            hi: hi & mask,
            width,
            is_signed: false,
        }
    }

    fn mask(&self) -> u64 {
        KnownBits::width_mask(self.width)
    }

    /// Whether this range is the full set.
    pub fn is_full(&self) -> bool {
        self.lo == self.hi && self.lo == 0
    }

    /// Whether this range is empty.
    pub fn is_empty(&self) -> bool {
        self.lo == 1 && self.hi == 0
    }

    /// Whether this range wraps around the unsigned max.
    pub fn is_wrapping(&self) -> bool {
        !self.is_full() && !self.is_empty() && self.lo > self.hi
    }

    /// Whether a single value is contained.
    pub fn contains(&self, value: u64) -> bool {
        if self.is_full() {
            return true;
        }
        if self.is_empty() {
            return false;
        }
        let v = value & self.mask();
        if self.lo <= self.hi {
            v >= self.lo && v < self.hi
        } else {
            v >= self.lo || v < self.hi
        }
    }

    /// Whether this is a single-element range.
    pub fn is_single_element(&self) -> bool {
        !self.is_full() && !self.is_empty() && self.lo.wrapping_add(1) & self.mask() == self.hi
    }

    /// Intersect two ranges (keep only common values).
    pub fn intersect(&self, other: &Self) -> Self {
        debug_assert_eq!(self.width, other.width);
        if self.is_full() {
            return other.clone();
        }
        if other.is_full() {
            return self.clone();
        }
        if self.is_empty() || other.is_empty() {
            return Self::empty(self.width);
        }
        // Simple non-wrapping case.
        if !self.is_wrapping() && !other.is_wrapping() {
            let lo = self.lo.max(other.lo);
            let hi = self.hi.min(other.hi);
            if lo >= hi {
                return Self::empty(self.width);
            }
            return Self::unsigned(lo, hi, self.width);
        }
        // Fall back to full for complex wrap cases.
        Self::full(self.width)
    }

    /// Union two ranges (any value in either).
    pub fn union(&self, other: &Self) -> Self {
        debug_assert_eq!(self.width, other.width);
        if self.is_full() || other.is_full() {
            return Self::full(self.width);
        }
        if self.is_empty() {
            return other.clone();
        }
        if other.is_empty() {
            return self.clone();
        }
        // Simple non-wrapping case.
        if !self.is_wrapping() && !other.is_wrapping() {
            let lo = self.lo.min(other.lo);
            let hi = self.hi.max(other.hi);
            return Self::unsigned(lo, hi, self.width);
        }
        // Conservative: return full.
        Self::full(self.width)
    }

    /// Convert to KnownBits — extract what bit-positions are forced by this range.
    pub fn to_known_bits(&self) -> KnownBits {
        if self.is_single_element() {
            return KnownBits::from_constant(self.lo, self.width);
        }
        if self.is_empty() || self.is_full() {
            return KnownBits::unknown(self.width);
        }
        // Non-wrapping: bits above the highest differing bit between lo and hi-1
        // are the same in both, so they are known.
        if !self.is_wrapping() {
            let hi_inclusive = (self.hi.wrapping_sub(1)) & self.mask();
            let xor = self.lo ^ hi_inclusive;
            if xor == 0 {
                return KnownBits::from_constant(self.lo, self.width);
            }
            let highest_diff = 63 - xor.leading_zeros();
            // Only bits *strictly above* the highest differing bit are common.
            let common_mask = if highest_diff + 1 >= self.width as u32 {
                0
            } else {
                self.mask() & !((1u64 << (highest_diff + 1)) - 1)
            };
            // In the common region, lo and hi_inclusive agree, so lo's bits are the truth.
            return KnownBits {
                zero: (!self.lo) & common_mask,
                one: self.lo & common_mask,
                width: self.width,
            };
        }
        KnownBits::unknown(self.width)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    // ------------------------------------------------------------------
    // KnownBits tests
    // ------------------------------------------------------------------

    #[test]
    fn test_known_bits_constant() {
        let kb = KnownBits::from_constant(0xAB, 8);
        assert!(kb.is_constant());
        assert_eq!(kb.constant_value(), Some(0xAB));
        assert!(!kb.has_conflict());
    }

    #[test]
    fn test_known_bits_unknown() {
        let kb = KnownBits::unknown(32);
        assert!(!kb.is_constant());
        assert_eq!(kb.constant_value(), None);
        assert_eq!(kb.count_unknown(), 32);
    }

    #[test]
    fn test_known_bits_and() {
        // 0b1010 & 0b11?? -> zero bits: from a we know bit1=0,bit3=0; from b nothing forced zero in those.
        let a = KnownBits::from_constant(0b1010, 4);
        let b = KnownBits {
            zero: 0b0000,
            one: 0b1100,
            width: 4,
        };
        let r = a.and(&b);
        // a: zero=0101, one=1010; b: zero=0000, one=1100
        // AND: zero = 0101 | 0000 = 0101; one = 1010 & 1100 = 1000
        assert_eq!(r.zero, 0b0101);
        assert_eq!(r.one, 0b1000);
    }

    #[test]
    fn test_known_bits_or() {
        let a = KnownBits::from_constant(0b1010, 4);
        let b = KnownBits::from_constant(0b0101, 4);
        let r = a.or(&b);
        assert_eq!(r.constant_value(), Some(0b1111));
    }

    #[test]
    fn test_known_bits_xor() {
        let a = KnownBits::from_constant(0xFF, 8);
        let b = KnownBits::from_constant(0x0F, 8);
        let r = a.xor(&b);
        assert_eq!(r.constant_value(), Some(0xF0));
    }

    #[test]
    fn test_known_bits_shl() {
        let a = KnownBits::from_constant(0b0011, 4);
        let r = a.shl(2);
        assert_eq!(r.constant_value(), Some(0b1100));
    }

    #[test]
    fn test_known_bits_lshr() {
        let a = KnownBits::from_constant(0b1100, 4);
        let r = a.lshr(2);
        assert_eq!(r.constant_value(), Some(0b0011));
    }

    #[test]
    fn test_known_bits_ashr_negative() {
        // -4 in 8 bits = 0xFC; ashr by 1 = 0xFE = -2.
        let a = KnownBits::from_constant(0xFC, 8);
        let r = a.ashr(1);
        assert_eq!(r.constant_value(), Some(0xFE));
    }

    #[test]
    fn test_known_bits_zext() {
        let a = KnownBits::from_constant(0x0F, 4);
        let r = a.zext(8);
        assert_eq!(r.width, 8);
        assert_eq!(r.constant_value(), Some(0x0F));
        // High bits known zero.
        assert_eq!(r.zero & 0xF0, 0xF0);
    }

    #[test]
    fn test_known_bits_sext_negative() {
        // 0b1100 in 4 bits = -4; sext to 8 = 0xFC.
        let a = KnownBits::from_constant(0b1100, 4);
        let r = a.sext(8);
        assert_eq!(r.constant_value(), Some(0xFC));
    }

    #[test]
    fn test_known_bits_sext_positive() {
        let a = KnownBits::from_constant(0b0110, 4);
        let r = a.sext(8);
        assert_eq!(r.constant_value(), Some(0x06));
    }

    #[test]
    fn test_known_bits_trunc() {
        let a = KnownBits::from_constant(0xABCD, 16);
        let r = a.trunc(8);
        assert_eq!(r.width, 8);
        assert_eq!(r.constant_value(), Some(0xCD));
    }

    #[test]
    fn test_known_bits_add_constants() {
        let a = KnownBits::from_constant(10, 8);
        let b = KnownBits::from_constant(20, 8);
        let r = a.add(&b);
        assert_eq!(r.constant_value(), Some(30));
    }

    #[test]
    fn test_known_bits_mul_constants() {
        let a = KnownBits::from_constant(7, 8);
        let b = KnownBits::from_constant(3, 8);
        let r = a.mul(&b);
        assert_eq!(r.constant_value(), Some(21));
    }

    #[test]
    fn test_known_bits_mul_tz_sum_width64_does_not_overflow() {
        // Both operands are known-even in every bit position, so trailing-zero
        // lower bound saturates at width=64. This used to panic on `1u64 << 64`.
        let a = KnownBits {
            zero: u64::MAX,
            one: 0,
            width: 64,
        };
        let b = KnownBits {
            zero: u64::MAX,
            one: 0,
            width: 64,
        };

        let r = a.mul(&b);
        assert_eq!(r.width, 64);
        assert_eq!(r.zero, u64::MAX);
        assert_eq!(r.one, 0);
    }

    #[test]
    fn test_known_bits_and_mask_pattern() {
        // x & 0xFF: whatever x is, we know bits 8..63 are zero.
        let x = KnownBits::unknown(32);
        let mask = KnownBits::from_constant(0xFF, 32);
        let r = x.and(&mask);
        // Bits 8..31 are known zero (from the mask's zero bits).
        assert_eq!(r.zero & 0xFFFFFF00, 0xFFFFFF00);
        // Low byte is still unknown (both zero and one fields are 0 there from x).
        assert_eq!(r.one & 0xFF, 0);
    }

    // ------------------------------------------------------------------
    // ConstantRange tests
    // ------------------------------------------------------------------

    #[test]
    fn test_range_exact() {
        let r = ConstantRange::exact(42, 8);
        assert!(r.contains(42));
        assert!(!r.contains(43));
        assert!(r.is_single_element());
    }

    #[test]
    fn test_range_full() {
        let r = ConstantRange::full(8);
        assert!(r.is_full());
        assert!(r.contains(0));
        assert!(r.contains(255));
    }

    #[test]
    fn test_range_intersect() {
        let a = ConstantRange::unsigned(10, 50, 8);
        let b = ConstantRange::unsigned(30, 80, 8);
        let r = a.intersect(&b);
        assert_eq!(r.lo, 30);
        assert_eq!(r.hi, 50);
        assert!(r.contains(35));
        assert!(!r.contains(55));
    }

    #[test]
    fn test_range_intersect_empty() {
        let a = ConstantRange::unsigned(10, 20, 8);
        let b = ConstantRange::unsigned(30, 40, 8);
        let r = a.intersect(&b);
        assert!(r.is_empty());
    }

    #[test]
    fn test_range_to_known_bits() {
        // Range [0x80, 0xC0) in 8 bits: all values are 10xx_xxxx.
        // bit 7 is always 1, bit 6 is always 0 (0xC0 not included).
        let r = ConstantRange::unsigned(0x80, 0xC0, 8);
        let kb = r.to_known_bits();
        assert!((kb.one & 0x80) != 0); // bit 7 known-one
        assert!((kb.zero & 0x40) != 0); // bit 6 known-zero (all values < 0xC0)
        // bits 0-5 are unknown
        assert_eq!(kb.one & 0x3F, 0);
        assert_eq!(kb.zero & 0x3F, 0);
    }

    #[test]
    fn test_range_single_to_known_bits() {
        let r = ConstantRange::exact(0xAB, 8);
        let kb = r.to_known_bits();
        assert_eq!(kb.constant_value(), Some(0xAB));
    }
}
