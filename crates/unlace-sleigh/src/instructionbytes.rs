//! Packed instruction reads with the parser's zero-filled buffer tail.

#[inline]
pub(crate) fn read_bytes<const N: usize>(buf: &[u8; N], offset: usize, size: i32) -> u32 {
    if offset + 4 <= N && (1..=4).contains(&size) {
        let word = u32::from_be_bytes(buf[offset..offset + 4].try_into().unwrap());
        return word >> (8 * (4 - size));
    }
    let mut result = 0u32;
    for i in 0..size {
        result = (result << 8) | u32::from(buf.get(offset + i as usize).copied().unwrap_or(0));
    }
    result
}

#[inline]
pub(crate) fn read_bits<const N: usize>(buf: &[u8; N], offset: usize, bit: i32, size: i32) -> u32 {
    if offset + 4 <= N && bit >= 0 && (1..=32).contains(&size) && bit + size <= 32 {
        let word = u32::from_be_bytes(buf[offset..offset + 4].try_into().unwrap());
        return word
            .wrapping_shl(bit as u32)
            .wrapping_shr((32 - size) as u32);
    }
    let bytesize = (bit + size - 1) / 8 + 1;
    read_bytes(buf, offset, bytesize)
        .wrapping_shl((8 * (4 - bytesize) + bit) as u32)
        .wrapping_shr((32 - size) as u32)
}

#[inline]
pub(crate) fn little_endian(value: i64, size: i32) -> i64 {
    match size {
        1 => i64::from(value as u8),
        2 => i64::from((value as u16).swap_bytes()),
        3 => i64::from((value as u32).swap_bytes() >> 8),
        4 => i64::from((value as u32).swap_bytes()),
        5..=8 => ((value as u64).swap_bytes() >> (8 * (8 - size))) as i64,
        _ => {
            let mut value = value;
            unlace_base::address::byte_swap_inplace(&mut value, size);
            value
        }
    }
}

#[cfg(test)]
mod tests;
