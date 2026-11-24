//! (unlace `stringhashswitch`) Hash tables for switches on a string hash.
//!
//! A switch on a string compiles to `switch (hash(s)) { case 0xDEADBEEF: ... }`:
//! the compiler folds the hash of each literal, so the case constants print as
//! bare hex. This module holds the hash functions such switches use (CRC32 and
//! CRC32C, FNV-1 and FNV-1a in 32 and 64 bits, djb2 and djb2a, sdbm, Murmur3,
//! Jenkins one-at-a-time, and the Java and Swift `String.hashCode` polynomial)
//! and builds a `hash -> string` table over a binary's string pool, so a case
//! label can name the string it stands for.
//!
//! The table is an annotation. It is not consulted by any printer yet, and no
//! discriminator loop is matched yet: recognising the hash loop in lowered
//! p-code is the next step. Hash collisions are possible; on a collision the
//! last string inserted wins.

use std::collections::BTreeMap;

/// `hash -> string` table over every string of a pool, for every hash family
/// in this module. Built once per binary, read when a case label is printed.
#[derive(Debug, Default, Clone)]
pub struct StringHashTable {
    table: BTreeMap<u64, String>,
}

impl StringHashTable {
    pub fn new() -> Self {
        Self::default()
    }

    /// Hash every string of `strings` with every family in this module.
    pub fn from_strings(strings: &BTreeMap<u64, String>) -> Self {
        let mut table = BTreeMap::new();
        for s in strings.values() {
            let bytes = s.as_bytes();
            let hashes = [
                crc32(bytes) as u64,
                crc32c(bytes) as u64,
                fnv1(bytes) as u64,
                fnv1a32(bytes) as u64,
                fnv1a(bytes),
                djb2(bytes) as u64,
                djb2a(bytes) as u64,
                sdbm(bytes) as u64,
                murmur3(bytes, 0) as u64,
                jenkins_oaat(bytes) as u64,
                java_string_hash(bytes) as u64,
            ];
            for h in hashes {
                table.insert(h, s.clone());
            }
        }
        Self { table }
    }

    /// The string whose hash is `hash`, if one of the pool's strings has it.
    pub fn lookup(&self, hash: u64) -> Option<&str> {
        self.table.get(&hash).map(String::as_str)
    }

    pub fn table(&self) -> &BTreeMap<u64, String> {
        &self.table
    }

    pub fn is_empty(&self) -> bool {
        self.table.is_empty()
    }

    pub fn len(&self) -> usize {
        self.table.len()
    }
}

/// CRC32 (IEEE 802.3 / zlib, polynomial 0xEDB88320), table-driven.
pub fn crc32(bytes: &[u8]) -> u32 {
    crc_table_driven(bytes, &CRC32_TABLE)
}

/// CRC32C (Castagnoli polynomial 0x82F63B78), table-driven.
pub fn crc32c(bytes: &[u8]) -> u32 {
    crc_table_driven(bytes, &CRC32C_TABLE)
}

fn crc_table_driven(bytes: &[u8], table: &[u32; 256]) -> u32 {
    let mut crc = 0xFFFF_FFFFu32;
    for &b in bytes {
        let idx = ((crc ^ b as u32) & 0xFF) as usize;
        crc = (crc >> 8) ^ table[idx];
    }
    !crc
}

/// FNV-1 32-bit hash: multiply, then xor in the byte.
pub fn fnv1(bytes: &[u8]) -> u32 {
    let mut h: u32 = 0x811c_9dc5;
    for &b in bytes {
        h = h.wrapping_mul(0x0100_0193);
        h ^= b as u32;
    }
    h
}

/// FNV-1a 32-bit hash: xor in the byte, then multiply.
pub fn fnv1a32(bytes: &[u8]) -> u32 {
    let mut h: u32 = 0x811c_9dc5;
    for &b in bytes {
        h ^= b as u32;
        h = h.wrapping_mul(0x0100_0193);
    }
    h
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

/// djb2a: the xor variant of djb2 (`h = h * 33 ^ c`).
pub fn djb2a(bytes: &[u8]) -> u32 {
    let mut h: u32 = 5381;
    for &b in bytes {
        h = h.wrapping_mul(33) ^ b as u32;
    }
    h
}

/// sdbm hash: `hash = c + (hash << 6) + (hash << 16) - hash`, that is
/// `hash * 65599 + c`.
pub fn sdbm(bytes: &[u8]) -> u32 {
    let mut h: u32 = 0;
    for &b in bytes {
        h = (b as u32)
            .wrapping_add(h << 6)
            .wrapping_add(h << 16)
            .wrapping_sub(h);
    }
    h
}

/// MurmurHash3 x86 32-bit: the body and the finalisation mix, for short keys.
pub fn murmur3(bytes: &[u8], seed: u32) -> u32 {
    const C1: u32 = 0xcc9e_2d51;
    const C2: u32 = 0x1b87_3593;

    let len = bytes.len();
    let mut h: u32 = seed;

    let nblocks = len / 4;
    for i in 0..nblocks {
        let offset = i * 4;
        let k = u32::from_le_bytes([
            bytes[offset],
            bytes[offset + 1],
            bytes[offset + 2],
            bytes[offset + 3],
        ]);
        let mut k = k.wrapping_mul(C1);
        k = k.rotate_left(15);
        k = k.wrapping_mul(C2);
        h ^= k;
        h = h.rotate_left(13);
        h = h.wrapping_mul(5).wrapping_add(0xe654_6b64);
    }

    let tail = &bytes[nblocks * 4..];
    if !tail.is_empty() {
        let mut k1: u32 = 0;
        if tail.len() >= 3 {
            k1 ^= (tail[2] as u32) << 16;
        }
        if tail.len() >= 2 {
            k1 ^= (tail[1] as u32) << 8;
        }
        k1 ^= tail[0] as u32;
        k1 = k1.wrapping_mul(C1);
        k1 = k1.rotate_left(15);
        k1 = k1.wrapping_mul(C2);
        h ^= k1;
    }

    h ^= len as u32;
    h ^= h >> 16;
    h = h.wrapping_mul(0x85eb_ca6b);
    h ^= h >> 13;
    h = h.wrapping_mul(0xc2b2_ae35);
    h ^= h >> 16;
    h
}

/// Jenkins' one-at-a-time hash.
pub fn jenkins_oaat(bytes: &[u8]) -> u32 {
    let mut h = 0u32;
    for &b in bytes {
        h = h.wrapping_add(b as u32);
        h = h.wrapping_add(h << 10);
        h ^= h >> 6;
    }
    h = h.wrapping_add(h << 3);
    h ^= h >> 11;
    h = h.wrapping_add(h << 15);
    h
}

/// Java and Swift `String.hashCode` style rolling hash over the bytes:
/// `h = 31 * h + c`.
pub fn java_string_hash(bytes: &[u8]) -> u32 {
    let mut h = 0u32;
    for &b in bytes {
        h = h.wrapping_mul(31).wrapping_add(b as u32);
    }
    h
}

const CRC32_TABLE: [u32; 256] = crc_table(0xEDB8_8320);
const CRC32C_TABLE: [u32; 256] = crc_table(0x82F6_3B78);

const fn crc_table(poly: u32) -> [u32; 256] {
    let mut table = [0u32; 256];
    let mut i = 0;
    while i < 256 {
        let mut c = i as u32;
        let mut k = 0;
        while k < 8 {
            c = if c & 1 != 0 { poly ^ (c >> 1) } else { c >> 1 };
            k += 1;
        }
        table[i] = c;
        i += 1;
    }
    table
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn crc32_known_values() {
        assert_eq!(crc32(b"hello"), 0x3610_A686);
        assert_eq!(crc32(b""), 0);
        assert_eq!(crc32(b"123456789"), 0xCBF4_3926);
    }

    #[test]
    fn crc32c_known_values() {
        assert_eq!(crc32c(b"hello"), 0x9a71_bb4c);
        assert_eq!(crc32c(b"123456789"), 0xe306_9283);
    }

    #[test]
    fn fnv_known_values() {
        assert_eq!(fnv1(b"hello"), 0xb6fa_7167);
        assert_eq!(fnv1a32(b"hello"), 0x4f9f_2cab);
        assert_eq!(fnv1a(b"hello"), 0xa430_d846_80aa_bd0b);
        assert_eq!(fnv1a(b""), 0xcbf2_9ce4_8422_2325);
    }

    #[test]
    fn djb2_known_values() {
        assert_eq!(djb2(b"hello"), 0x0f92_3099);
        assert_eq!(djb2a(b"hello"), 0x0a9c_ede7);
    }

    #[test]
    fn murmur3_jenkins_java_known_values() {
        assert_eq!(murmur3(b"hello", 0), 0x248b_fa47);
        assert_eq!(murmur3(b"", 0), 0);
        assert_eq!(jenkins_oaat(b"hello"), 0xc8fd_181b);
        assert_eq!(java_string_hash(b"hello"), 99_162_322);
    }

    #[test]
    fn sdbm_is_hash_times_65599_plus_byte() {
        assert_eq!(sdbm(b""), 0);
        assert_eq!(sdbm(b"a"), u32::from(b'a'));
        assert_eq!(
            sdbm(b"ab"),
            u32::from(b'a')
                .wrapping_mul(65599)
                .wrapping_add(u32::from(b'b'))
        );
    }

    #[test]
    fn table_maps_every_family_hash_back_to_its_string() {
        let mut strings = BTreeMap::new();
        strings.insert(0x1000, "hello".to_string());
        strings.insert(0x1100, "world".to_string());

        let t = StringHashTable::from_strings(&strings);
        for s in ["hello", "world"] {
            let bytes = s.as_bytes();
            for h in [
                crc32(bytes) as u64,
                crc32c(bytes) as u64,
                fnv1(bytes) as u64,
                fnv1a32(bytes) as u64,
                fnv1a(bytes),
                djb2(bytes) as u64,
                djb2a(bytes) as u64,
                sdbm(bytes) as u64,
                murmur3(bytes, 0) as u64,
                jenkins_oaat(bytes) as u64,
                java_string_hash(bytes) as u64,
            ] {
                assert_eq!(t.lookup(h), Some(s));
            }
        }
        assert_eq!(t.len(), t.table().len());
        assert!(t.len() >= 22);
        assert!(!t.is_empty());
        assert!(StringHashTable::new().is_empty());
        assert_eq!(StringHashTable::new().lookup(0), None);
    }
}
