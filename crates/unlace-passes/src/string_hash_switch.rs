//! Recognise switch discriminators produced by common string hashes
//! (CRC32/CRC32C, FNV-1/FNV-1a 32/64, djb2, sdbm, Murmur3, Jenkins OAT,
//! Java/Swift string hash) and recover the original string for each case
//! constant.
//!
//! Switch-on-string idioms compile to `switch (hash(s)) { case 0xDEADBEEF: ... }`
//! after constant folding of the hash of each compile-time string literal.
//! This pass pre-computes a `hash → string` table from the binary's `.rodata`
//! string pool; the C printer consults that table when emitting case labels
//! so the reader sees the original string in a comment instead of a bare
//! hex value.
//!
//! ## Pattern recognition
//!
//! Each hash family has a characteristic loop body that the decompiler can
//! recognise in lowered IR.  The `is_<family>_pattern` functions check
//! for the distinctive constants and operations:
//!
//! - **FNV-1/FNV-1a**: multiply by FNV prime `0x0100_0193` /
//!   `0x0100_0000_01b3`, with optional XOR before or after the multiply
//! - **djb2**: multiply by 33 (or shift-left 5 + add), add/XOR byte
//! - **CRC32/CRC32C**: table-lookup via XOR + shift-right 8 + XOR with table
//!   entry, or a hardware-assisted `cpuid/CRC32`-style update loop
//! - **murmur3**: multiply by `0xcc9e_2d51` / `0x1b87_3593`, rotate
//! - **sdbm**: add byte, shift-left 6, shift-left 16, subtract hash
//! - **Jenkins one-at-a-time**: add byte, shift-left 10, shift-right 6,
//!   with final avalanche shifts 3/11/15 often outside the loop
//! - **Java/Swift string hash**: multiply by 31 (or shift-left 5 - hash)
//!   then add the character code unit
//!
//! ## MVP scope
//!
//! Only the static hash-table construction is in tree today.  Wiring the
//! table into `PrintCtx` so case emission consumes it is tracked as a
//! follow-up — see `c_printer.rs` switch emission.

use std::collections::BTreeMap;

use unlace_ir::{IrInsn, IrOp, SpaceId};

/// Pre-computed `hash → string` table covering CRC32 / CRC32C /
/// FNV-1 / FNV-1a (32/64) / djb2 / sdbm / Murmur3 / Jenkins OAT /
/// Java+Swift string hash over every string in the binary's recovered string pool.
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

    /// Build the table by hashing every value in `strings` with every
    /// supported family/variant we know how to recognise.
    pub fn from_strings(strings: &BTreeMap<u64, String>) -> Self {
        let mut hash_table = BTreeMap::new();
        for s in strings.values() {
            let bytes = s.as_bytes();
            hash_table.insert(crc32(bytes) as u64, s.clone());
            hash_table.insert(crc32c(bytes) as u64, s.clone());
            hash_table.insert(fnv1(bytes) as u64, s.clone());
            hash_table.insert(fnv1a32(bytes) as u64, s.clone());
            hash_table.insert(fnv1a(bytes), s.clone());
            hash_table.insert(djb2(bytes) as u64, s.clone());
            hash_table.insert(djb2a(bytes) as u64, s.clone());
            hash_table.insert(sdbm(bytes) as u64, s.clone());
            hash_table.insert(murmur3(bytes, 0) as u64, s.clone());
            hash_table.insert(jenkins_oaat(bytes) as u64, s.clone());
            hash_table.insert(java_string_hash(bytes) as u64, s.clone());
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

// ---------------------------------------------------------------------------
// Hash implementations
// ---------------------------------------------------------------------------

/// CRC32 (IEEE 802.3 / zlib, polynomial 0xEDB88320), table-driven.
pub fn crc32(bytes: &[u8]) -> u32 {
    let mut crc = 0xFFFF_FFFFu32;
    for &b in bytes {
        let idx = ((crc ^ b as u32) & 0xFF) as usize;
        crc = (crc >> 8) ^ CRC32_TABLE[idx];
    }
    !crc
}

/// CRC32C (Castagnoli polynomial 0x82F63B78), table-driven.
pub fn crc32c(bytes: &[u8]) -> u32 {
    let mut crc = 0xFFFF_FFFFu32;
    for &b in bytes {
        let idx = ((crc ^ b as u32) & 0xFF) as usize;
        crc = (crc >> 8) ^ CRC32C_TABLE[idx];
    }
    !crc
}

/// FNV-1 32-bit hash.
pub fn fnv1(bytes: &[u8]) -> u32 {
    let mut h: u32 = 0x811c_9dc5;
    for &b in bytes {
        h = h.wrapping_mul(0x0100_0193);
        h ^= b as u32;
    }
    h
}

/// FNV-1a 32-bit hash.
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

/// djb2a variant (`h = h * 33 ^ c`).
pub fn djb2a(bytes: &[u8]) -> u32 {
    let mut h: u32 = 5381;
    for &b in bytes {
        h = h.wrapping_mul(33) ^ b as u32;
    }
    h
}

/// sdbm hash: `hash = c + (hash << 6) + (hash << 16) - hash`.
///
/// Equivalent to `hash * 65599 + c`.
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

/// MurmurHash3 (32-bit finalised), single-block variant for short keys.
///
/// This implements the body + finalisation mix of MurmurHash3_x86_32.
/// The `seed` parameter is typically 0 in compiler-generated code, but
/// we accept an arbitrary value because some runtimes use a non-zero seed.
pub fn murmur3(bytes: &[u8], seed: u32) -> u32 {
    const C1: u32 = 0xcc9e_2d51;
    const C2: u32 = 0x1b87_3593;

    let len = bytes.len();
    let mut h: u32 = seed;

    // Process full 4-byte blocks.
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

    // Tail bytes.
    let tail = &bytes[nblocks * 4..];
    let mut k1: u32 = 0;
    match tail.len() {
        3 => {
            k1 ^= (tail[2] as u32) << 16;
            k1 ^= (tail[1] as u32) << 8;
            k1 ^= tail[0] as u32;
            k1 = k1.wrapping_mul(C1);
            k1 = k1.rotate_left(15);
            k1 = k1.wrapping_mul(C2);
            h ^= k1;
        }
        2 => {
            k1 ^= (tail[1] as u32) << 8;
            k1 ^= tail[0] as u32;
            k1 = k1.wrapping_mul(C1);
            k1 = k1.rotate_left(15);
            k1 = k1.wrapping_mul(C2);
            h ^= k1;
        }
        1 => {
            k1 ^= tail[0] as u32;
            k1 = k1.wrapping_mul(C1);
            k1 = k1.rotate_left(15);
            k1 = k1.wrapping_mul(C2);
            h ^= k1;
        }
        _ => {}
    }

    // Finalisation mix.
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

/// Java / Swift `String.hashCode()` style polynomial rolling hash.
///
/// This treats the input as raw bytes/code units and evaluates `h = 31*h + c`.
pub fn java_string_hash(bytes: &[u8]) -> u32 {
    let mut h = 0u32;
    for &b in bytes {
        h = h.wrapping_mul(31).wrapping_add(b as u32);
    }
    h
}

// ---------------------------------------------------------------------------
// Loop-body pattern recognition
// ---------------------------------------------------------------------------

/// Recognised hash family.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HashFamily {
    Fnv1,
    Fnv1a,
    Djb2,
    Crc32,
    Crc32c,
    Murmur3,
    Sdbm,
    JenkinsOaat,
    JavaString,
}

/// Identify which hash family (if any) a loop body belongs to.
///
/// Scans `loop_body` for characteristic constants and opcode sequences.
/// Returns `None` if no known family matches.
pub fn identify_hash_pattern(loop_body: &[IrInsn]) -> Option<HashFamily> {
    if is_fnv1_pattern(loop_body) {
        Some(HashFamily::Fnv1)
    } else if is_fnv1a_pattern(loop_body) {
        Some(HashFamily::Fnv1a)
    } else if is_djb2_pattern(loop_body) {
        Some(HashFamily::Djb2)
    } else if is_crc32c_pattern(loop_body) {
        Some(HashFamily::Crc32c)
    } else if is_crc32_pattern(loop_body) {
        Some(HashFamily::Crc32)
    } else if is_murmur3_pattern(loop_body) {
        Some(HashFamily::Murmur3)
    } else if is_sdbm_pattern(loop_body) {
        Some(HashFamily::Sdbm)
    } else if is_jenkins_oaat_pattern(loop_body) {
        Some(HashFamily::JenkinsOaat)
    } else if is_java_string_pattern(loop_body) {
        Some(HashFamily::JavaString)
    } else {
        None
    }
}

/// Check whether `loop_body` matches the FNV-1a pattern.
///
/// FNV-1a characteristic: XOR with byte followed by multiply with the
/// FNV prime `0x0100_0000_01b3` (64-bit) or `0x0100_0193` (32-bit).
pub fn is_fnv1a_pattern(loop_body: &[IrInsn]) -> bool {
    let has_xor = loop_body.iter().any(|insn| insn.op == IrOp::IntXor);
    let has_fnv_mult = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntMult
            && insn.inputs.iter().any(|v| {
                v.space == SpaceId::Const
                    && (v.offset == 0x0000_0100_0000_01b3 || v.offset == 0x0100_0193)
            })
    });
    has_xor && has_fnv_mult
}

/// Check whether `loop_body` matches the FNV-1 pattern.
///
/// FNV-1 multiplies by the FNV prime and then XORs in the current byte.
pub fn is_fnv1_pattern(loop_body: &[IrInsn]) -> bool {
    let mut mult_idx = None;
    let mut xor_idx = None;
    for (idx, insn) in loop_body.iter().enumerate() {
        if mult_idx.is_none()
            && insn.op == IrOp::IntMult
            && insn.inputs.iter().any(|v| {
                v.space == SpaceId::Const
                    && (v.offset == 0x0000_0100_0000_01b3 || v.offset == 0x0100_0193)
            })
        {
            mult_idx = Some(idx);
        }
        if xor_idx.is_none() && insn.op == IrOp::IntXor {
            xor_idx = Some(idx);
        }
    }
    matches!((mult_idx, xor_idx), (Some(m), Some(x)) if m < x)
}

/// Check whether `loop_body` matches the djb2 pattern.
///
/// djb2 characteristic: multiply by 33 (or equivalent shift-left 5 + add)
/// followed by add of the current byte.  The seed constant 5381 may appear
/// outside the loop as an initialiser. We also accept the xor-based djb2a
/// variant used by some language runtimes.
pub fn is_djb2_pattern(loop_body: &[IrInsn]) -> bool {
    // Option A: direct multiply by 33.
    let has_mult_33 = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntMult
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 33)
    });
    if has_mult_33 {
        let has_mix = loop_body
            .iter()
            .any(|insn| matches!(insn.op, IrOp::IntAdd | IrOp::IntXor));
        return has_mix;
    }

    // Option B: shift-left by 5 + add (equivalent to *33 via `(h << 5) + h`).
    let has_shl5 = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntLeft
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 5)
    });
    if has_shl5 {
        let add_or_sub_count = loop_body
            .iter()
            .filter(|insn| matches!(insn.op, IrOp::IntAdd | IrOp::IntSub | IrOp::IntXor))
            .count();
        return add_or_sub_count >= 2;
    }

    false
}

/// Check whether `loop_body` matches the CRC32 table-lookup pattern.
///
/// CRC32 characteristic: XOR with byte, AND 0xFF (mask low byte for index),
/// shift-right 8, then XOR with a table-loaded value (Load instruction).
pub fn is_crc32_pattern(loop_body: &[IrInsn]) -> bool {
    let has_xor = loop_body.iter().any(|insn| insn.op == IrOp::IntXor);
    let has_shr8 = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntRight
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 8)
    });
    let has_and_ff = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntAnd
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 0xFF)
    });
    let has_load = loop_body.iter().any(|insn| insn.op == IrOp::Load);

    has_xor && has_shr8 && has_and_ff && has_load
}

/// Check whether `loop_body` matches the CRC32C pattern.
///
/// Software CRC32C looks the same as CRC32 in lowered IR except for the table
/// contents; a hardware-assisted lowering often appears as a `Callother`/`
/// Callind` around a single CRC update. We conservatively accept either shape.
pub fn is_crc32c_pattern(loop_body: &[IrInsn]) -> bool {
    if is_crc32_pattern(loop_body) {
        return true;
    }
    loop_body
        .iter()
        .any(|insn| matches!(insn.op, IrOp::Callother | IrOp::Callind))
        && loop_body.iter().any(|insn| insn.op == IrOp::IntXor)
}

/// Check whether `loop_body` matches the murmur3 pattern.
///
/// Murmur3 characteristic: multiply by `0xcc9e_2d51` and/or `0x1b87_3593`,
/// rotate (or shift+or combination), plus multiply by 5.
pub fn is_murmur3_pattern(loop_body: &[IrInsn]) -> bool {
    let has_c1 = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntMult
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 0xcc9e_2d51)
    });
    let has_c2 = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntMult
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 0x1b87_3593)
    });
    has_c1 || has_c2
}

/// Check whether `loop_body` matches the sdbm pattern.
///
/// sdbm characteristic: `hash = c + (hash << 6) + (hash << 16) - hash`.
/// We look for shift-left by 6 AND shift-left by 16 in the same loop,
/// combined with at least one subtract and one add.
pub fn is_sdbm_pattern(loop_body: &[IrInsn]) -> bool {
    let has_shl6 = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntLeft
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 6)
    });
    let has_shl16 = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntLeft
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 16)
    });
    let has_sub = loop_body.iter().any(|insn| insn.op == IrOp::IntSub);
    let has_add = loop_body.iter().any(|insn| insn.op == IrOp::IntAdd);

    has_shl6 && has_shl16 && has_sub && has_add
}

/// Check whether `loop_body` matches Jenkins' one-at-a-time pattern.
pub fn is_jenkins_oaat_pattern(loop_body: &[IrInsn]) -> bool {
    let has_shl10 = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntLeft
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 10)
    });
    let has_shr6 = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntRight
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 6)
    });
    let has_add = loop_body.iter().any(|insn| insn.op == IrOp::IntAdd);
    let has_xor = loop_body.iter().any(|insn| insn.op == IrOp::IntXor);
    has_shl10 && has_shr6 && has_add && has_xor
}

/// Check whether `loop_body` matches Java/Swift string hashing.
pub fn is_java_string_pattern(loop_body: &[IrInsn]) -> bool {
    let has_mult_31 = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntMult
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 31)
    });
    if has_mult_31 && loop_body.iter().any(|insn| insn.op == IrOp::IntAdd) {
        return true;
    }

    let has_shl5 = loop_body.iter().any(|insn| {
        insn.op == IrOp::IntLeft
            && insn
                .inputs
                .iter()
                .any(|v| v.space == SpaceId::Const && v.offset == 5)
    });
    let has_sub = loop_body.iter().any(|insn| insn.op == IrOp::IntSub);
    let has_add = loop_body.iter().any(|insn| insn.op == IrOp::IntAdd);
    has_shl5 && has_sub && has_add
}

// ---------------------------------------------------------------------------
// CRC32 lookup table
// ---------------------------------------------------------------------------

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

const CRC32C_TABLE: [u32; 256] = {
    let mut table = [0u32; 256];
    let mut i = 0;
    while i < 256 {
        let mut c = i as u32;
        let mut k = 0;
        while k < 8 {
            c = if c & 1 != 0 {
                0x82F6_3B78 ^ (c >> 1)
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
    fn fnv_known_values() {
        assert_eq!(fnv1(b"hello"), 0xb6fa_7167);
        assert_eq!(fnv1a32(b"hello"), 0x4f9f_2cab);
        assert_eq!(fnv1a(b"hello"), 0xa430_d846_80aa_bd0b);
        assert_eq!(fnv1a(b""), 0xcbf2_9ce4_8422_2325);
    }

    #[test]
    fn djb2_known_value() {
        assert_eq!(djb2(b"hello"), 0x0f92_3099);
        assert_eq!(djb2a(b"hello"), 0x0a9c_ede7);
    }

    #[test]
    fn sdbm_known_value() {
        let h = sdbm(b"hello");
        assert_ne!(h, 0, "sdbm should not be zero for non-empty input");
        assert_eq!(h, sdbm(b"hello"));
    }

    #[test]
    fn crc32c_known_value() {
        assert_eq!(crc32c(b"hello"), 0x9a71_bb4c);
        assert_eq!(crc32c(b"123456789"), 0xe306_9283);
    }

    #[test]
    fn murmur3_known_value() {
        assert_eq!(murmur3(b"hello", 0), 0x248b_fa47);
        assert_eq!(murmur3(b"", 0), 0);
    }

    #[test]
    fn extra_hash_family_known_values() {
        assert_eq!(jenkins_oaat(b"hello"), 0xc8fd_181b);
        assert_eq!(java_string_hash(b"hello"), 99_162_322);
    }

    #[test]
    fn from_strings_builds_hash_table() {
        let mut strings = BTreeMap::new();
        strings.insert(0x1000, "hello".to_string());
        strings.insert(0x1100, "world".to_string());

        let pass = StringHashSwitchPass::from_strings(&strings);

        for s in ["hello", "world"] {
            let bytes = s.as_bytes();
            assert_eq!(pass.lookup(crc32(bytes) as u64), Some(s));
            assert_eq!(pass.lookup(crc32c(bytes) as u64), Some(s));
            assert_eq!(pass.lookup(fnv1(bytes) as u64), Some(s));
            assert_eq!(pass.lookup(fnv1a32(bytes) as u64), Some(s));
            assert_eq!(pass.lookup(fnv1a(bytes)), Some(s));
            assert_eq!(pass.lookup(djb2(bytes) as u64), Some(s));
            assert_eq!(pass.lookup(djb2a(bytes) as u64), Some(s));
            assert_eq!(pass.lookup(sdbm(bytes) as u64), Some(s));
            assert_eq!(pass.lookup(murmur3(bytes, 0) as u64), Some(s));
            assert_eq!(pass.lookup(jenkins_oaat(bytes) as u64), Some(s));
            assert_eq!(pass.lookup(java_string_hash(bytes) as u64), Some(s));
        }
        assert!(pass.len() >= 12);
    }

    // -- Pattern recognition tests --

    use smallvec::smallvec;
    use unlace_ir::Varnode;

    fn make_insn(op: IrOp, const_val: u64) -> IrInsn {
        IrInsn::with_output(
            op,
            Varnode::reg(0, 8),
            smallvec![Varnode::reg(8, 8), Varnode::constant(const_val, 8)],
            0x1000,
        )
    }

    fn make_insn_no_const(op: IrOp) -> IrInsn {
        IrInsn::with_output(
            op,
            Varnode::reg(0, 8),
            smallvec![Varnode::reg(8, 8), Varnode::reg(16, 8)],
            0x1000,
        )
    }

    /// djb2 pattern: IntMult by 33 + IntAdd recognised.
    #[test]
    fn test_djb2_pattern_recognised() {
        let loop_body = vec![make_insn(IrOp::IntMult, 33), make_insn(IrOp::IntAdd, 0)];
        assert!(is_djb2_pattern(&loop_body));
        assert_eq!(identify_hash_pattern(&loop_body), Some(HashFamily::Djb2));
    }

    #[test]
    fn test_fnv1_pattern_recognised() {
        let loop_body = vec![
            make_insn(IrOp::IntMult, 0x0100_0193),
            make_insn_no_const(IrOp::IntXor),
        ];
        assert!(is_fnv1_pattern(&loop_body));
        assert_eq!(identify_hash_pattern(&loop_body), Some(HashFamily::Fnv1));
    }

    #[test]
    fn test_crc32c_pattern_recognised_via_intrinsic_shape() {
        let loop_body = vec![
            make_insn_no_const(IrOp::IntXor),
            make_insn_no_const(IrOp::Callother),
        ];
        assert!(is_crc32c_pattern(&loop_body));
        assert_eq!(identify_hash_pattern(&loop_body), Some(HashFamily::Crc32c));
    }

    #[test]
    fn test_jenkins_pattern_recognised() {
        let loop_body = vec![
            make_insn(IrOp::IntLeft, 10),
            make_insn(IrOp::IntRight, 6),
            make_insn_no_const(IrOp::IntAdd),
            make_insn_no_const(IrOp::IntXor),
        ];
        assert!(is_jenkins_oaat_pattern(&loop_body));
        assert_eq!(
            identify_hash_pattern(&loop_body),
            Some(HashFamily::JenkinsOaat)
        );
    }

    #[test]
    fn test_java_string_pattern_recognised() {
        let loop_body = vec![
            make_insn(IrOp::IntMult, 31),
            make_insn_no_const(IrOp::IntAdd),
        ];
        assert!(is_java_string_pattern(&loop_body));
        assert_eq!(
            identify_hash_pattern(&loop_body),
            Some(HashFamily::JavaString)
        );
    }

    /// sdbm pattern: IntLeft by 6, IntLeft by 16, IntSub, IntAdd recognised.
    #[test]
    fn test_sdbm_pattern_recognised() {
        let loop_body = vec![
            make_insn(IrOp::IntLeft, 6),
            make_insn(IrOp::IntLeft, 16),
            make_insn_no_const(IrOp::IntSub),
            make_insn_no_const(IrOp::IntAdd),
        ];
        assert!(is_sdbm_pattern(&loop_body));
        assert_eq!(identify_hash_pattern(&loop_body), Some(HashFamily::Sdbm));
    }

    /// Random arithmetic should NOT be falsely matched.
    #[test]
    fn test_random_arithmetic_not_matched() {
        let loop_body = vec![
            make_insn(IrOp::IntMult, 7),
            make_insn(IrOp::IntAdd, 42),
            make_insn(IrOp::IntLeft, 3),
            make_insn(IrOp::IntRight, 4),
        ];
        assert!(!is_fnv1a_pattern(&loop_body));
        assert!(!is_fnv1_pattern(&loop_body));
        assert!(!is_djb2_pattern(&loop_body));
        assert!(!is_crc32_pattern(&loop_body));
        assert!(!is_crc32c_pattern(&loop_body));
        assert!(!is_murmur3_pattern(&loop_body));
        assert!(!is_sdbm_pattern(&loop_body));
        assert!(!is_jenkins_oaat_pattern(&loop_body));
        assert!(!is_java_string_pattern(&loop_body));
        assert_eq!(identify_hash_pattern(&loop_body), None);
    }
}
