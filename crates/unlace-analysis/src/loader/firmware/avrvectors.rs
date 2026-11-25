//! AVR interrupt vector tables. An AVR image starts with its vector table at word 0: one
//! `jmp k` (two words) per vector on devices with more than 8 KiB of flash, or one `rjmp k`
//! (one word) per vector below that. The vectors end at the first word that is neither form.
//! Their targets are the reset handler and the interrupt handlers, the entries a raw AVR image
//! needs to be decompiled from.

/// At most this many vectors are read (the largest AVR tables are about 130).
const MAX_VECTORS: usize = 256;

/// The distinct vector targets of `bytes`, an AVR flash image starting at word 0, as word
/// addresses in table order. Empty when word 0 is neither a `jmp` nor an `rjmp`.
pub fn probe(bytes: &[u8]) -> Vec<u64> {
    let word = |i: usize| -> Option<u16> {
        let b = bytes.get(2 * i..2 * i + 2)?;
        Some(u16::from_le_bytes([b[0], b[1]]))
    };
    let words = (bytes.len() / 2) as u64;
    let mut out: Vec<u64> = Vec::new();
    let mut push = |target: u64| {
        if target < words && !out.contains(&target) {
            out.push(target);
        }
    };
    let Some(first) = word(0) else {
        return Vec::new();
    };
    if is_jmp(first) {
        for v in 0..MAX_VECTORS {
            let (Some(hi), Some(lo)) = (word(2 * v), word(2 * v + 1)) else {
                break;
            };
            if !is_jmp(hi) {
                break;
            }
            let hi = u64::from(hi);
            let k = ((((hi >> 3) & 0x3e) | (hi & 1)) << 16) | u64::from(lo);
            push(k);
        }
    } else if is_rjmp(first) {
        for v in 0..MAX_VECTORS {
            let Some(w) = word(v) else {
                break;
            };
            if !is_rjmp(w) {
                break;
            }
            let k = i64::from(((w & 0x0fff) as i16) << 4 >> 4);
            let target = (v as i64 + 1 + k).rem_euclid(words.max(1) as i64);
            push(target as u64);
        }
    }
    out
}

fn is_jmp(w: u16) -> bool {
    w & 0xfe0e == 0x940c
}

fn is_rjmp(w: u16) -> bool {
    w & 0xf000 == 0xc000
}

#[cfg(test)]
mod tests;
