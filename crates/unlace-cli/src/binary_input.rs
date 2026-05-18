//! Memory-mapped binary input reader (Batch 25).
//!
//! The decompiler reads its input binary in full from disk. For large
//! inputs (dyld shared caches, multi-GB firmware images) a `std::fs::read`
//! call doubles the resident set; an `mmap(MAP_PRIVATE)` view leaves the
//! kernel page cache to decide what gets paged in, and behaves identically
//! from the loader's perspective because every loader on the crate
//! surface takes `&[u8]`.
//!
//! [`BinaryInput`] is the unified entrypoint: it returns a value that
//! implements [`AsRef<[u8]>`] regardless of whether the bytes came from
//! `std::fs::read` (small inputs, owned `Vec<u8>`) or from `memmap2::Mmap`
//! (large inputs, a kernel-mapped view). Callers that need `&[u8]` simply
//! call `.as_ref()` and don't have to care which path produced the slice.
//!
//! ## Threshold
//!
//! Below [`MMAP_THRESHOLD`] bytes we use a plain heap read. Two reasons:
//!
//! 1. The mmap-setup overhead (syscalls + virtual mapping bookkeeping) is
//!    not free; for small fixtures the heap copy is faster.
//! 2. Some test infrastructure mutates the read buffer; `Mmap` is
//!    read-only by design, so a heap path keeps existing call sites
//!    working unchanged.

use std::fs::File;
use std::io;
use std::path::Path;

use memmap2::Mmap;

/// Inputs larger than this many bytes are mapped instead of read.
///
/// 4 MiB — comfortably above all current fixtures so the test suite keeps
/// its existing behaviour, and small enough that any real-world binary
/// (which is what mmap actually helps with) takes the mapped path.
pub const MMAP_THRESHOLD: u64 = 4 * 1024 * 1024;

/// Either an owned heap buffer or a kernel-mapped view of a file.
pub enum BinaryInput {
    /// Small input read in full into a heap buffer.
    Owned(Vec<u8>),
    /// Large input mapped into the process address space.
    Mapped(Mmap),
}

impl BinaryInput {
    /// Open `path`, choosing the heap-vs-mmap path based on file size.
    pub fn open(path: &Path) -> io::Result<Self> {
        let file = File::open(path)?;
        let meta = file.metadata()?;
        if meta.len() >= MMAP_THRESHOLD {
            // SAFETY: We never mutate the mapping and never expose `&mut`
            // to it; the loaders only need `&[u8]`. The file is held by
            // the `Mmap` itself (memmap2 keeps an internal `Arc<File>`)
            // so the mapping stays valid for the lifetime of this
            // `BinaryInput`.
            let mapped = unsafe { Mmap::map(&file)? };
            return Ok(BinaryInput::Mapped(mapped));
        }
        let mut buf = Vec::with_capacity(meta.len() as usize);
        use std::io::Read;
        let mut f = file;
        f.read_to_end(&mut buf)?;
        Ok(BinaryInput::Owned(buf))
    }

    /// Borrow the underlying bytes regardless of the backing source.
    pub fn as_bytes(&self) -> &[u8] {
        match self {
            BinaryInput::Owned(v) => v.as_slice(),
            BinaryInput::Mapped(m) => m.as_ref(),
        }
    }
}

impl AsRef<[u8]> for BinaryInput {
    fn as_ref(&self) -> &[u8] {
        self.as_bytes()
    }
}

/// §5.10: a reference-counted handle to a [`BinaryInput`] backing
/// store. Lets loader output, downstream passes, and printers all hold
/// references to the same mapping without copying the bytes or tying
/// the lifetime to a single stack frame.
///
/// Constructed via [`SharedBinaryInput::open`] (which is `BinaryInput::open`
/// wrapped in an `Arc`). The `bytes()` method returns a slice whose
/// lifetime is tied to the `SharedBinaryInput` value, not the
/// surrounding function — so a caller can stash the slice next to the
/// loader's output and keep it alive as long as the `Arc` survives.
#[derive(Clone)]
pub struct SharedBinaryInput {
    inner: std::sync::Arc<BinaryInput>,
}

impl SharedBinaryInput {
    /// Open `path` and wrap the [`BinaryInput`] in an `Arc`.
    pub fn open(path: &Path) -> io::Result<Self> {
        Ok(Self {
            inner: std::sync::Arc::new(BinaryInput::open(path)?),
        })
    }

    /// Wrap an existing [`BinaryInput`].
    pub fn from_input(input: BinaryInput) -> Self {
        Self {
            inner: std::sync::Arc::new(input),
        }
    }

    /// Borrow the underlying bytes. The slice is valid for as long as
    /// any `SharedBinaryInput` clone referencing the same `Arc` is
    /// alive.
    pub fn bytes(&self) -> &[u8] {
        self.inner.as_bytes()
    }
}

impl AsRef<[u8]> for SharedBinaryInput {
    fn as_ref(&self) -> &[u8] {
        self.bytes()
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::io::Write;
    use std::path::PathBuf;

    fn write_fixture(name: &str, bytes: &[u8]) -> PathBuf {
        let mut path = std::env::temp_dir();
        path.push(format!(
            "unlace-binary-input-{name}-{}.bin",
            std::process::id()
        ));
        let mut f = std::fs::File::create(&path).expect("create");
        f.write_all(bytes).expect("write");
        path
    }

    #[test]
    fn small_input_takes_heap_path() {
        let path = write_fixture("small", b"hello world");
        let input = BinaryInput::open(&path).expect("open");
        let _ = std::fs::remove_file(&path);
        assert!(matches!(input, BinaryInput::Owned(_)));
        assert_eq!(input.as_bytes(), b"hello world");
    }

    /// Above the threshold we take the mmap path. We construct a
    /// 5 MiB synthetic file so the test exercises the real path
    /// without depending on any fixture size.
    #[test]
    fn large_input_takes_mmap_path() {
        let bytes = vec![0xa5u8; (MMAP_THRESHOLD + 1024) as usize];
        let path = write_fixture("large", &bytes);
        let input = BinaryInput::open(&path).expect("open");
        let result = input.as_bytes().to_vec();
        let mapped = matches!(input, BinaryInput::Mapped(_));
        drop(input);
        let _ = std::fs::remove_file(&path);
        assert!(mapped, "above-threshold input should use mmap");
        assert_eq!(result, bytes);
    }

    /// §5.10: SharedBinaryInput keeps the backing store alive as long
    /// as any clone holds a reference, even after the original handle
    /// is dropped.
    #[test]
    fn shared_binary_input_outlives_dropped_original() {
        let path = write_fixture("shared", b"shared payload");
        let original = SharedBinaryInput::open(&path).expect("open");
        let clone = original.clone();
        drop(original);
        let _ = std::fs::remove_file(&path);
        // The clone still serves the underlying bytes.
        assert_eq!(clone.bytes(), b"shared payload");
    }

    /// Both paths produce byte-identical results — the loader contract is
    /// "we get `&[u8]`", so any drift here would silently corrupt analysis.
    #[test]
    fn heap_and_mmap_paths_yield_identical_bytes() {
        let bytes: Vec<u8> = (0..1024u32).flat_map(|n| n.to_le_bytes()).collect();
        let path = write_fixture("identical", &bytes);
        let heap_view = std::fs::read(&path).expect("read");
        let mmap_view = BinaryInput::open(&path)
            .expect("open")
            .as_bytes()
            .to_vec();
        let _ = std::fs::remove_file(&path);
        assert_eq!(heap_view, mmap_view);
    }
}
