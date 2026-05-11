//! Persistent on-disk SSA cache (t456).
//!
//! Avoids re-running the (expensive) SSA construction + analysis pipeline
//! when the same binary is decompiled repeatedly. Entries are keyed by a
//! caller-supplied `binary_hash` (e.g. blake3 of the input file) plus the
//! function entry address, so a single cache directory can hold every
//! function of every binary the user has touched.
//!
//! ## On-disk layout
//!
//! ```text
//! <cache_dir>/<binary_hash:016x>/<func_addr:016x>.bin
//! ```
//!
//! Each `.bin` file is a bincode-encoded [`SsaFunction`].
//!
//! Reads are best-effort: any I/O or decode failure returns `None` rather
//! than propagating an error, so a corrupt cache entry degrades gracefully
//! to a cache miss instead of crashing the pipeline.

use std::fs;
use std::path::PathBuf;

use unlace_ir::ssa::SsaFunction;

/// Persistent on-disk cache for [`SsaFunction`] values.
pub struct SsaCache {
    cache_dir: PathBuf,
}

impl SsaCache {
    /// Create a cache rooted at `cache_dir`. The directory is created
    /// lazily on the first successful `put`; `new` itself performs no I/O.
    pub fn new(cache_dir: PathBuf) -> Self {
        Self { cache_dir }
    }

    /// Compute the on-disk path for an entry.
    fn entry_path(&self, binary_hash: u64, func_addr: u64) -> PathBuf {
        self.cache_dir
            .join(format!("{:016x}", binary_hash))
            .join(format!("{:016x}.bin", func_addr))
    }

    /// Look up a cached `SsaFunction`. Returns `None` on miss, I/O error,
    /// or decode failure (treating a corrupt cache as a miss).
    pub fn get(&self, binary_hash: u64, func_addr: u64) -> Option<SsaFunction> {
        let path = self.entry_path(binary_hash, func_addr);
        let bytes = fs::read(&path).ok()?;
        let config = bincode::config::standard();
        let (func, _len) =
            bincode::serde::decode_from_slice::<SsaFunction, _>(&bytes, config).ok()?;
        Some(func)
    }

    /// Store `func` under `(binary_hash, func_addr)`. Failures (e.g. the
    /// destination directory cannot be created, the encode fails, or the
    /// write fails) are silently swallowed — the cache is an optimisation,
    /// not a source of correctness.
    pub fn put(&self, binary_hash: u64, func_addr: u64, func: &SsaFunction) {
        let path = self.entry_path(binary_hash, func_addr);
        let Some(parent) = path.parent() else {
            return;
        };
        if fs::create_dir_all(parent).is_err() {
            return;
        }
        let config = bincode::config::standard();
        let Ok(bytes) = bincode::serde::encode_to_vec(func, config) else {
            return;
        };
        let _ = fs::write(&path, bytes);
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::path::PathBuf;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function};

    /// Build a minimal `SsaFunction` for round-trip testing. The function
    /// has a single empty entry block; that's enough to exercise the
    /// bincode round-trip without depending on a real lifter.
    fn sample_func(addr: u64) -> SsaFunction {
        let entry = BlockId(0);
        let mut func = Function::new(format!("fn_{addr:x}"), entry, addr);
        func.insert_block(BasicBlock::new(entry));
        build_ssa(func)
    }

    /// Create a temporary directory unique to this test run.
    ///
    /// We avoid pulling in `tempfile` as a new dev-dependency by using the
    /// standard `std::env::temp_dir()` + a nanosecond timestamp. Sufficient
    /// for the four tests below; not reused beyond this module.
    fn fresh_cache_dir(tag: &str) -> PathBuf {
        use std::sync::atomic::{AtomicU64, Ordering};
        static COUNTER: AtomicU64 = AtomicU64::new(0);
        let n = COUNTER.fetch_add(1, Ordering::Relaxed);
        let pid = std::process::id();
        let dir = std::env::temp_dir().join(format!("unlace-ssa-cache-{tag}-{pid}-{n}"));
        // Don't pre-create: `new()` is supposed to not perform I/O, and
        // `put` lazily creates the directory.
        dir
    }

    #[test]
    fn empty_cache_returns_none() {
        let dir = fresh_cache_dir("empty");
        let cache = SsaCache::new(dir.clone());
        assert!(cache.get(0xdead_beef, 0x1000).is_none());
        // Cleanup if anything was created (shouldn't be).
        let _ = fs::remove_dir_all(&dir);
    }

    #[test]
    fn put_then_get_roundtrips() {
        let dir = fresh_cache_dir("roundtrip");
        let cache = SsaCache::new(dir.clone());
        let func = sample_func(0x4000);

        cache.put(0xaa11_bb22_cc33_dd44, 0x4000, &func);
        let got = cache.get(0xaa11_bb22_cc33_dd44, 0x4000);

        assert!(got.is_some(), "put-then-get should hit");
        let got = got.unwrap();
        assert_eq!(got.function.addr, func.function.addr);
        assert_eq!(got.function.entry, func.function.entry);
        assert_eq!(got.function.blocks.len(), func.function.blocks.len());

        // Different key still misses.
        assert!(cache.get(0xaa11_bb22_cc33_dd44, 0x4001).is_none());
        assert!(cache.get(0x0, 0x4000).is_none());

        let _ = fs::remove_dir_all(&dir);
    }

    #[test]
    fn cache_survives_drop() {
        let dir = fresh_cache_dir("survive");
        let func = sample_func(0x8000);

        {
            let cache = SsaCache::new(dir.clone());
            cache.put(0x1234_5678_9abc_def0, 0x8000, &func);
            // cache drops here
        }

        let cache2 = SsaCache::new(dir.clone());
        let got = cache2.get(0x1234_5678_9abc_def0, 0x8000);
        assert!(got.is_some(), "entry should survive cache drop");
        assert_eq!(got.unwrap().function.addr, 0x8000);

        let _ = fs::remove_dir_all(&dir);
    }

    #[test]
    fn invalid_path_returns_none() {
        // A path that cannot exist as a directory: under /proc/self/exe,
        // which is a file (and on systems where /proc doesn't exist, the
        // path itself simply won't resolve). Either way, `read` will fail
        // and `get` must return None — never panic.
        let bogus = PathBuf::from("/proc/self/exe/definitely-not-a-dir");
        let cache = SsaCache::new(bogus);
        assert!(cache.get(0, 0).is_none());
        assert!(cache.get(0xffff_ffff_ffff_ffff, 0xdead).is_none());
    }
}
