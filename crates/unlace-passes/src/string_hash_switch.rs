//! Recognise switch discriminators produced by common string hashes
//! (CRC32, FNV-1a 64, djb2) and recover the original string for each
//! case constant.
//!
//! Switch-on-string idioms compile to `switch (hash(s)) { case 0xDEADBEEF: ... }`
//! after constant folding of the hash of each compile-time string literal.
//! This pass pre-computes a `hash → string` table from the binary's `.rodata`
//! string pool; the C printer consults that table when emitting case labels
//! so the reader sees the original string in a comment instead of a bare
//! hex value.
//!
//! ## MVP scope
//!
//! Only the static hash-table construction is in tree today.  Wiring the
//! table into `PrintCtx` so case emission consumes it is tracked as a
//! follow-up — see `c_printer.rs` switch emission.

use std::collections::BTreeMap;

/// Pre-computed `hash → string` table covering CRC32 / FNV-1a-64 / djb2 over
/// every string in the binary's recovered string pool.
///
/// Hash collisions across distinct strings are possible but rare; on
/// collision the *last* insertion wins, which is acceptable for an
/// annotation-only feature.
#[derive(Debug, Default, Clone)]
pub struct StringHashSwitchPass {
    hash_table: BTreeMap<u64, String>,
}

impl StringHashSwitchPass {
    pub fn new() -> Self {
        Self::default()
    }

    /// Build the table by hashing every value in `strings` with each of the
    /// three supported algorithms.
    pub fn from_strings(strings: &BTreeMap<u64, String>) -> Self {
        let mut hash_table = BTreeMap::new();
        for s in strings.values() {
            let bytes = s.as_bytes();
            hash_table.insert(crc32(bytes) as u64, s.clone());
            hash_table.insert(fnv1a(bytes), s.clone());
            hash_table.insert(djb2(bytes) as u64, s.clone());
        }
        Self { hash_table }
    }

    pub fn lookup(&self, hash: u64) -> Option<&str> {
        self.hash_table.get(&hash).map(String::as_str)
    }

    pub fn table(&self) -> &BTreeMap<u64, String> {
        &self.hash_table
    }

    /// Alias of [`Self::table`] used by the C printer pipeline wiring.
    pub fn hash_table(&self) -> &BTreeMap<u64, String> {
        &self.hash_table
    }

    pub fn is_empty(&self) -> bool {
        self.hash_table.is_empty()
    }

    pub fn len(&self) -> usize {
        self.hash_table.len()
    }
}

/// CRC32 (IEEE 802.3 / zlib, polynomial 0xEDB88320), table-driven.
pub fn crc32(bytes: &[u8]) -> u32 {
    let mut crc = 0xFFFF_FFFFu32;
    for &b in bytes {
        let idx = ((crc ^ b as u32) & 0xFF) as usize;
        crc = (crc >> 8) ^ CRC32_TABLE[idx];
    }
    !crc
}

/// FNV-1a 64-bit hash.
pub fn fnv1a(bytes: &[u8]) -> u64 {
    let mut h: u64 = 0xcbf2_9ce4_8422_2325;
    for &b in bytes {
        h ^= b as u64;
        h = h.wrapping_mul(0x0000_0100_0000_01b3);
    }
    h
}

/// Daniel J. Bernstein's djb2 hash (`h = h * 33 + c`, seed 5381).
pub fn djb2(bytes: &[u8]) -> u32 {
    let mut h: u32 = 5381;
    for &b in bytes {
        h = h.wrapping_mul(33).wrapping_add(b as u32);
    }
    h
}

const CRC32_TABLE: [u32; 256] = {
    let mut table = [0u32; 256];
    let mut i = 0;
    while i < 256 {
        let mut c = i as u32;
        let mut k = 0;
        while k < 8 {
            c = if c & 1 != 0 {
                0xEDB8_8320 ^ (c >> 1)
            } else {
                c >> 1
            };
            k += 1;
        }
        table[i] = c;
        i += 1;
    }
    table
};

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn crc32_known_value() {
        assert_eq!(crc32(b"hello"), 0x3610_A686);
        assert_eq!(crc32(b""), 0);
        assert_eq!(crc32(b"123456789"), 0xCBF4_3926);
    }

    #[test]
    fn fnv1a_known_value() {
        assert_eq!(fnv1a(b"hello"), 0xa430_d846_80aa_bd0b);
        assert_eq!(fnv1a(b""), 0xcbf2_9ce4_8422_2325);
    }

    #[test]
    fn djb2_known_value() {
        assert_eq!(djb2(b"hello"), 0x0f92_3099);
    }

    #[test]
    fn from_strings_builds_hash_table() {
        let mut strings = BTreeMap::new();
        strings.insert(0x1000, "hello".to_string());
        strings.insert(0x1100, "world".to_string());

        let pass = StringHashSwitchPass::from_strings(&strings);

        // Each of the three hash variants for each string should be present.
        for s in ["hello", "world"] {
            let bytes = s.as_bytes();
            assert_eq!(pass.lookup(crc32(bytes) as u64), Some(s));
            assert_eq!(pass.lookup(fnv1a(bytes)), Some(s));
            assert_eq!(pass.lookup(djb2(bytes) as u64), Some(s));
        }
        // Two strings × three hashes → at most six entries; collisions
        // across hash families for these inputs are not expected.
        assert!(pass.len() >= 4);
    }
}
