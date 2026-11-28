//! (unlace) A fast, fixed hasher for the engine's lookup-only hash maps.
//!
//! The standard `RandomState` hashes every key with SipHash-1-3, which costs a
//! few dozen instructions per lookup: on the per-varnode and per-op maps of a
//! function (deleting a varnode alone does three lookups) that is several
//! percent of a decompile.  [`FxHasher`] is the xor-multiply hash rustc uses
//! for its own tables.  It is not resistant to collision attacks.  These maps
//! are keyed by engine ids and image addresses, values the decompiler makes or
//! reads from the binary, so they need speed, not collision resistance.
//!
//! Only lookup-only maps may use it: their iteration order is fixed instead of
//! random per process, and nothing the decompiler prints may depend on either.

use std::hash::{BuildHasherDefault, Hasher};

const SEED: u64 = 0xf135_7aea_2e62_a9c5;

/// rustc's `FxHasher`: each word is folded in by an xor and a multiply, and
/// the result is rotated once when it is read.
#[derive(Default, Clone, Copy)]
pub struct FxHasher {
    hash: u64,
}

impl FxHasher {
    #[inline]
    fn add(&mut self, word: u64) {
        self.hash = (self.hash ^ word).wrapping_mul(SEED);
    }
}

impl Hasher for FxHasher {
    #[inline]
    fn write(&mut self, bytes: &[u8]) {
        let (chunks, rest) = bytes.as_chunks::<8>();
        for chunk in chunks {
            self.add(u64::from_le_bytes(*chunk));
        }
        if !rest.is_empty() {
            let mut word = [0u8; 8];
            word[..rest.len()].copy_from_slice(rest);
            self.add(u64::from_le_bytes(word));
        }
        self.add(bytes.len() as u64);
    }

    #[inline]
    fn write_u8(&mut self, i: u8) {
        self.add(u64::from(i));
    }

    #[inline]
    fn write_u16(&mut self, i: u16) {
        self.add(u64::from(i));
    }

    #[inline]
    fn write_u32(&mut self, i: u32) {
        self.add(u64::from(i));
    }

    #[inline]
    fn write_u64(&mut self, i: u64) {
        self.add(i);
    }

    #[inline]
    fn write_usize(&mut self, i: usize) {
        self.add(i as u64);
    }

    #[inline]
    fn finish(&self) -> u64 {
        self.hash.rotate_left(26)
    }
}

/// The `BuildHasher` of [`FxHasher`].
pub type FxBuildHasher = BuildHasherDefault<FxHasher>;

/// A lookup-only `HashMap` hashed with [`FxHasher`].
pub type FxHashMap<K, V> = std::collections::HashMap<K, V, FxBuildHasher>;

/// A lookup-only `HashSet` hashed with [`FxHasher`].
pub type FxHashSet<T> = std::collections::HashSet<T, FxBuildHasher>;

#[cfg(test)]
mod tests;
