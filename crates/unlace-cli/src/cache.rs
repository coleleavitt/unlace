//! Persistent analysis cache keying (Batch 25).
//!
//! `CacheKey` is the stable identifier for a per-function analysis
//! result. It folds together:
//!
//! 1. SHA-256 of the input binary (the loader's authoritative
//!    fingerprint).
//! 2. The function's entry virtual address and size.
//! 3. A `pipeline_revision` counter the workspace bumps whenever the pass
//!    set changes shape — this is the bit that protects a cache hit
//!    from masking an analysis-behaviour change.
//!
//! Callers store cache entries keyed by `CacheKey::digest()`; a cache hit
//! is a function-level fast path that lets `decompile_one_function` skip
//! lifting and pass execution for unchanged inputs.

use std::fmt;
use std::hash::{Hash, Hasher};

/// Workspace pipeline revision number. Bump every time the canonical
/// pass schedule changes shape so old cache entries are invalidated.
///
/// 1 — initial.
pub const PIPELINE_REVISION: u32 = 1;

/// A composite key uniquely identifying one per-function analysis result.
#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub struct CacheKey {
    pub binary_sha256: String,
    pub function_addr: u64,
    pub function_size: u64,
    pub pipeline_revision: u32,
}

impl CacheKey {
    pub fn new(binary_sha256: &str, addr: u64, size: u64) -> Self {
        Self {
            binary_sha256: binary_sha256.to_string(),
            function_addr: addr,
            function_size: size,
            pipeline_revision: PIPELINE_REVISION,
        }
    }

    /// 16-byte hex digest of the key, suitable as a directory name in a
    /// content-addressed cache. The digest collapses
    /// `(sha256, addr, size, revision)` into a single 64-bit hash; same
    /// input always produces the same digest within a process.
    pub fn digest(&self) -> String {
        let mut h = std::collections::hash_map::DefaultHasher::new();
        self.hash(&mut h);
        format!("{:016x}", h.finish())
    }
}

impl fmt::Display for CacheKey {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(
            f,
            "{}@0x{:x}+0x{:x}r{}",
            self.binary_sha256, self.function_addr, self.function_size, self.pipeline_revision
        )
    }
}

/// Content-addressed on-disk cache. Each entry is a single file inside
/// `root/<sha-prefix>/<digest>`. Backing format is opaque bytes — the
/// caller is responsible for choosing the encoding (e.g. bincode of
/// `SsaFunction`).
pub struct DiskCache {
    root: std::path::PathBuf,
}

impl DiskCache {
    /// Construct a `DiskCache` rooted at `root`. The directory does not
    /// need to exist; it's created lazily on first `put`.
    pub fn new(root: impl Into<std::path::PathBuf>) -> Self {
        Self { root: root.into() }
    }

    /// Path where the entry for `key` would live. `<root>/<sha-prefix>/<digest>`
    /// — splitting on a 2-char prefix keeps any single directory from
    /// growing pathologically large.
    pub fn entry_path(&self, key: &CacheKey) -> std::path::PathBuf {
        let digest = key.digest();
        let prefix = if digest.len() >= 2 { &digest[..2] } else { &digest[..] };
        self.root.join(prefix).join(&digest)
    }

    /// Store `body` under `key`. Atomic via tmp-write + rename.
    pub fn put(&self, key: &CacheKey, body: &[u8]) -> std::io::Result<()> {
        let path = self.entry_path(key);
        if let Some(parent) = path.parent() {
            std::fs::create_dir_all(parent)?;
        }
        let tmp = path.with_extension("tmp");
        std::fs::write(&tmp, body)?;
        std::fs::rename(&tmp, &path)?;
        Ok(())
    }

    /// Load the bytes stored under `key`, or `Ok(None)` when the entry
    /// is absent.
    pub fn get(&self, key: &CacheKey) -> std::io::Result<Option<Vec<u8>>> {
        let path = self.entry_path(key);
        match std::fs::read(&path) {
            Ok(b) => Ok(Some(b)),
            Err(e) if e.kind() == std::io::ErrorKind::NotFound => Ok(None),
            Err(e) => Err(e),
        }
    }

    /// Remove the entry for `key`, if any. Returns `Ok(true)` when an
    /// entry was actually deleted.
    pub fn delete(&self, key: &CacheKey) -> std::io::Result<bool> {
        let path = self.entry_path(key);
        match std::fs::remove_file(&path) {
            Ok(()) => Ok(true),
            Err(e) if e.kind() == std::io::ErrorKind::NotFound => Ok(false),
            Err(e) => Err(e),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn digest_stable_across_calls() {
        let k = CacheKey::new("ff", 0x401000, 32);
        let a = k.digest();
        let b = k.digest();
        assert_eq!(a, b);
    }

    #[test]
    fn digest_changes_with_addr_or_size() {
        let a = CacheKey::new("ff", 0x401000, 32).digest();
        let b = CacheKey::new("ff", 0x401004, 32).digest();
        let c = CacheKey::new("ff", 0x401000, 64).digest();
        assert_ne!(a, b);
        assert_ne!(a, c);
    }

    #[test]
    fn digest_changes_with_revision_change() {
        // Manually construct keys with different pipeline_revisions.
        let mut a = CacheKey::new("ff", 0x401000, 32);
        let mut b = CacheKey::new("ff", 0x401000, 32);
        a.pipeline_revision = 1;
        b.pipeline_revision = 2;
        assert_ne!(a.digest(), b.digest());
    }

    /// Two keys with the same logical content compare equal and share a
    /// digest, even when constructed via different paths.
    #[test]
    fn equality_implies_same_digest() {
        let a = CacheKey {
            binary_sha256: "deadbeef".into(),
            function_addr: 0x500,
            function_size: 16,
            pipeline_revision: 1,
        };
        let b = CacheKey::new("deadbeef", 0x500, 16);
        assert_eq!(a, b);
        assert_eq!(a.digest(), b.digest());
    }

    /// `DiskCache::put` / `get` round-trip an opaque blob and put it at a
    /// prefix-sharded path.
    #[test]
    fn disk_cache_round_trip() {
        let dir = std::env::temp_dir().join(format!(
            "unlace_disk_cache_{}",
            std::process::id()
        ));
        let _ = std::fs::remove_dir_all(&dir);

        let cache = DiskCache::new(&dir);
        let key = CacheKey::new("aabbccdd", 0x1000, 32);
        assert!(cache.get(&key).unwrap().is_none(), "fresh dir is empty");

        let body = b"hello cache".to_vec();
        cache.put(&key, &body).expect("put");

        // Path lives under <root>/<digest-prefix>/<digest>.
        let path = cache.entry_path(&key);
        assert!(path.exists(), "entry file must exist after put");
        let prefix = path.parent().unwrap().file_name().unwrap().to_string_lossy();
        assert_eq!(prefix.len(), 2, "prefix shard must be 2 chars: {prefix}");

        let got = cache.get(&key).expect("get").expect("hit");
        assert_eq!(got, body);

        assert!(cache.delete(&key).expect("delete"), "delete reports hit");
        assert!(cache.get(&key).unwrap().is_none(), "post-delete miss");

        let _ = std::fs::remove_dir_all(&dir);
    }

    /// Cache miss on a key that's never been written is `Ok(None)`, not
    /// an error.
    #[test]
    fn disk_cache_miss_is_ok_none() {
        let dir = std::env::temp_dir().join(format!(
            "unlace_disk_cache_miss_{}",
            std::process::id()
        ));
        let _ = std::fs::remove_dir_all(&dir);
        let cache = DiskCache::new(&dir);
        let key = CacheKey::new("missing", 0x1, 1);
        assert!(cache.get(&key).expect("get").is_none());
    }

    /// `sha256_hex` produces the canonical SHA-256 hex digest, suitable
    /// for `CacheKey::binary_sha256`.
    #[test]
    fn sha256_hex_matches_canonical_empty() {
        // SHA-256 of empty input.
        let h = sha256_hex(&[]);
        assert_eq!(
            h,
            "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855"
        );
    }

    /// `default_cache_root` lives under `$XDG_CACHE_HOME` (or
    /// `$HOME/.cache`) when both are set. We can't mutate process env
    /// safely; just assert the returned path contains "unlace".
    #[test]
    fn default_cache_root_contains_unlace() {
        let p = default_cache_root();
        let s = p.to_string_lossy();
        assert!(s.contains("unlace"), "expected 'unlace' in path: {s}");
    }
}

/// Compute the SHA-256 hex digest of `bytes`. Used by callers that need
/// to populate `CacheKey::binary_sha256`.
pub fn sha256_hex(bytes: &[u8]) -> String {
    use sha2::{Digest, Sha256};
    let mut hasher = Sha256::new();
    hasher.update(bytes);
    let out = hasher.finalize();
    let mut hex = String::with_capacity(out.len() * 2);
    for b in out.iter() {
        hex.push_str(&format!("{b:02x}"));
    }
    hex
}

/// Default on-disk cache root: `$XDG_CACHE_HOME/unlace/` when set,
/// otherwise `$HOME/.cache/unlace/`, falling back to `/tmp/unlace/`.
pub fn default_cache_root() -> std::path::PathBuf {
    if let Some(xdg) = std::env::var_os("XDG_CACHE_HOME") {
        return std::path::PathBuf::from(xdg).join("unlace");
    }
    if let Some(home) = std::env::var_os("HOME") {
        return std::path::PathBuf::from(home).join(".cache").join("unlace");
    }
    std::path::PathBuf::from("/tmp/unlace")
}
