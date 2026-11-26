//! Fixed-width integer arithmetic, from `decompiler/cpp/multiprecision.{hh,cc}`.
//!
//! Public operations use two little-endian `u64` limbs. Division uses native
//! `u128` arithmetic while preserving the narrow-input path and zero-divisor
//! behavior.

use unlace_base::error::{UnlaceError, UnlaceResult};

/// Multi-precision logical left shift by a constant amount.
///
/// In C++ the `in` and `out` arrays can point to the same storage; the loop
/// orders are written so that aliasing is safe.  The Rust port takes
/// separate borrows (callers needing in-place shift copy first).
/// `num` is the number of 64-bit words in the extended precision integers;
/// `sa` is the number of bits to shift.
fn leftshift(num: i32, in_: &[u64], out: &mut [u64], sa: i32) {
    let mut in_index = num - 1 - sa / 64;
    let sa = sa % 64;
    let mut out_index = num - 1;
    if sa == 0 {
        while in_index >= 0 {
            out[out_index as usize] = in_[in_index as usize];
            out_index -= 1;
            in_index -= 1;
        }
        while out_index >= 0 {
            out[out_index as usize] = 0;
            out_index -= 1;
        }
    } else {
        while in_index > 0 {
            out[out_index as usize] =
                (in_[in_index as usize] << sa) | (in_[in_index as usize - 1] >> (64 - sa));
            out_index -= 1;
            in_index -= 1;
        }
        if in_index == 0 {
            out[out_index as usize] = in_[0] << sa;
            out_index -= 1;
        }
        while out_index >= 0 {
            out[out_index as usize] = 0;
            out_index -= 1;
        }
    }
}

/// 128-bit INT_LEFT operation with constant shift amount.
/// `in_` is the 128-bit value to shift (as 2 64-bit words); `out` is the
/// container for the 128-bit result; `sa` is the number of bits to shift.
pub fn leftshift128(in_: &[u64; 2], out: &mut [u64; 2], sa: i32) {
    leftshift(2, in_, out, sa);
}

fn from_limbs(value: &[u64; 2]) -> u128 {
    u128::from(value[0]) | (u128::from(value[1]) << 64)
}

fn to_limbs(value: u128) -> [u64; 2] {
    [value as u64, (value >> 64) as u64]
}

/// 128-bit INT_LESS operation: true if the first value is less than the
/// second value.
pub fn uless128(in1: &[u64; 2], in2: &[u64; 2]) -> bool {
    from_limbs(in1) < from_limbs(in2)
}

/// 128-bit INT_LESSEQUAL operation: true if the first value is less than or
/// equal to the second value.
pub fn ulessequal128(in1: &[u64; 2], in2: &[u64; 2]) -> bool {
    from_limbs(in1) <= from_limbs(in2)
}

/// 128-bit INT_ADD operation: `out` holds the wrapping sum of `in1` and `in2`.
pub fn add128(in1: &[u64; 2], in2: &[u64; 2], out: &mut [u64; 2]) {
    *out = to_limbs(from_limbs(in1).wrapping_add(from_limbs(in2)));
}

/// 128-bit INT_SUB operation: `out` holds the wrapping difference of `in1` and `in2`.
pub fn subtract128(in1: &[u64; 2], in2: &[u64; 2], out: &mut [u64; 2]) {
    *out = to_limbs(from_limbs(in1).wrapping_sub(from_limbs(in2)));
}

/// Divide two little-endian 128-bit values, writing quotient and remainder.
/// A zero divisor returns an error.
pub fn udiv128(
    numer: &[u64; 2],
    denom: &[u64; 2],
    quotient_res: &mut [u64; 2],
    remainder_res: &mut [u64; 2],
) -> UnlaceResult<()> {
    if *denom == [0, 0] {
        return Err(UnlaceError::lowlevel("divide by 0"));
    }
    if numer[1] == 0 && denom[1] == 0 {
        quotient_res[0] = numer[0] / denom[0];
        quotient_res[1] = 0;
        remainder_res[0] = numer[0] % denom[0];
        remainder_res[1] = 0;
        return Ok(());
    }
    udiv128_wide(numer, denom, quotient_res, remainder_res)
}

/// Keep wide arithmetic out of the narrow-input path.
#[inline(never)]
fn udiv128_wide(
    numer: &[u64; 2],
    denom: &[u64; 2],
    quotient_res: &mut [u64; 2],
    remainder_res: &mut [u64; 2],
) -> UnlaceResult<()> {
    let n = from_limbs(numer);
    let d = from_limbs(denom);
    if n < d {
        *quotient_res = [0, 0];
        *remainder_res = *numer;
        return Ok(());
    }
    let quotient = n / d;
    let remainder = n % d;
    *quotient_res = to_limbs(quotient);
    *remainder_res = to_limbs(remainder);
    Ok(())
}

/// Set a 128-bit value (2 64-bit words) from a 64-bit value.
pub fn set_u128(res: &mut [u64; 2], val: u64) {
    res[0] = val;
    res[1] = 0;
}

#[cfg(test)]
mod tests;
