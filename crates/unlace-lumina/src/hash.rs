//! The Lumina function key: an MD5 over the function's position-independent bytes.
//!
//! IDA's `calc_func_metadata` (libida 9.5 `0x875160`, per chunk `sub_873660`) walks every chunk of a
//! function in address order. For each code item it asks the processor module's `ev_calcrel` hook
//! (event `0x52`) for the item's relocation mask, the bits that hold an address (call and branch
//! displacements, absolute addresses, PC-relative data references), and appends `byte & !mask` to one
//! buffer and the mask to another; an item the hook does not cover goes in unmasked. The key is
//! `MD5Update(normalized); MD5Update(mask)`. Which bits a mask covers is the producer's choice, so a key
//! matches IDA's only where both masked the same operands; two unlace runs over the same code always
//! agree.

use md5::{Digest, Md5};

/// Accumulates a function's instructions and their masks in address order.
#[derive(Debug, Clone, Default)]
pub struct CalcrelBuilder {
    bytes: Vec<u8>,
    mask: Vec<u8>,
}

impl CalcrelBuilder {
    pub fn new() -> Self {
        Self::default()
    }

    /// Append one instruction; a mask shorter than `bytes` is padded with zero (no relocation).
    pub fn push(&mut self, bytes: &[u8], mask: &[u8]) {
        self.bytes.extend_from_slice(bytes);
        self.mask
            .extend((0..bytes.len()).map(|i| mask.get(i).copied().unwrap_or(0)));
    }

    pub fn len(&self) -> usize {
        self.bytes.len()
    }

    pub fn is_empty(&self) -> bool {
        self.bytes.is_empty()
    }

    /// The bytes with every masked bit cleared.
    pub fn normalized(&self) -> Vec<u8> {
        self.bytes
            .iter()
            .zip(&self.mask)
            .map(|(b, m)| b & !m)
            .collect()
    }

    pub fn mask(&self) -> &[u8] {
        &self.mask
    }

    /// `MD5(normalized ‖ mask)`.
    pub fn finish(&self) -> [u8; 16] {
        let mut h = Md5::new();
        h.update(self.normalized());
        h.update(&self.mask);
        let digest = h.finalize();
        let mut out = [0u8; 16];
        out.copy_from_slice(digest.as_slice());
        out
    }
}

/// MD5 of `data`: the `input_md5` a push reports for the input file.
pub fn md5(data: &[u8]) -> [u8; 16] {
    let digest = Md5::digest(data);
    let mut out = [0u8; 16];
    out.copy_from_slice(digest.as_slice());
    out
}

/// Lowercase hex.
pub fn hex(bytes: &[u8]) -> String {
    const DIGITS: &[u8; 16] = b"0123456789abcdef";
    let mut s = String::with_capacity(bytes.len() * 2);
    for &b in bytes {
        s.push(DIGITS[usize::from(b >> 4)] as char);
        s.push(DIGITS[usize::from(b & 0xF)] as char);
    }
    s
}

/// Parse hex (an optional `0x` prefix, even length).
pub fn parse_hex(s: &str) -> Option<Vec<u8>> {
    let s = s.strip_prefix("0x").unwrap_or(s);
    if s.len() % 2 != 0 {
        return None;
    }
    (0..s.len())
        .step_by(2)
        .map(|i| u8::from_str_radix(s.get(i..i + 2)?, 16).ok())
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn md5_known_vector() {
        assert_eq!(hex(&md5(b"abc")), "900150983cd24fb0d6963f7d28e17f72");
    }

    #[test]
    fn masked_bits_do_not_change_the_key() {
        // push ebp; mov ebp,esp; call rel32; mov eax,[abs32]; pop ebp; ret
        let build = |call: [u8; 4], abs: [u8; 4]| {
            let mut b = CalcrelBuilder::new();
            b.push(&[0x55], &[]);
            b.push(&[0x89, 0xE5], &[0, 0]);
            b.push(
                &[0xE8, call[0], call[1], call[2], call[3]],
                &[0, 0xFF, 0xFF, 0xFF, 0xFF],
            );
            b.push(
                &[0xA1, abs[0], abs[1], abs[2], abs[3]],
                &[0, 0xFF, 0xFF, 0xFF, 0xFF],
            );
            b.push(&[0x5D, 0xC3], &[]);
            b
        };
        let a = build([0x73, 0x56, 0x34, 0x12], [0, 0x10, 0x40, 0]);
        let b = build([0x11, 0x22, 0x33, 0x44], [0, 0x20, 0x40, 0]);
        assert_eq!(
            a.normalized(),
            vec![
                0x55, 0x89, 0xE5, 0xE8, 0, 0, 0, 0, 0xA1, 0, 0, 0, 0, 0x5D, 0xC3
            ]
        );
        assert_eq!(a.finish(), b.finish());
        let mut c = a.clone();
        c.push(&[0x90], &[]);
        assert_ne!(a.finish(), c.finish());
    }

    #[test]
    fn the_mask_is_part_of_the_key() {
        let mut a = CalcrelBuilder::new();
        a.push(&[0xE8, 0, 0, 0, 0], &[0, 0, 0, 0, 0]);
        let mut b = CalcrelBuilder::new();
        b.push(&[0xE8, 0, 0, 0, 0], &[0, 0xFF, 0xFF, 0xFF, 0xFF]);
        assert_eq!(a.normalized(), b.normalized());
        assert_ne!(a.finish(), b.finish());
    }

    #[test]
    fn hex_roundtrips() {
        let bytes = [0x00, 0x7F, 0xAB, 0xFF];
        assert_eq!(parse_hex(&hex(&bytes)).unwrap(), bytes);
        assert_eq!(parse_hex("0x0a0B").unwrap(), vec![0x0A, 0x0B]);
        assert!(parse_hex("abc").is_none());
        assert!(parse_hex("zz").is_none());
    }
}
