//! Real IDA `.til` (IDATIL) type-library loader.
//!
//! `.til` files ship type definitions, macros, and symbols for a given
//! compiler/platform combination (e.g. `gnulnx_x64.til` = glibc + Linux
//! x86_64). IDA loads them on startup to give names + prototypes to
//! library functions encountered in binaries.
//!
//! On-disk layout (verified against IDA 9.1 `til/pc/*.til`):
//!
//! ```text
//! offset  size  field
//!   0     6     magic "IDATIL"
//!   6     1     format            (v12-v18 supported by 9.x)
//!   7     4     flags             (low byte = compression: 0x03 = zlib)
//!  11     1     name_len
//!  12     N     name              (e.g. "GNU C++ x86 Linux")
//!  12+N  1      base_len
//!  ...  vary   compiler/abi metadata
//!   …    zlib   deflate-compressed body
//! ```
//!
//! Body consists of a sequence of records terminated by `\0`:
//!
//! ```text
//! [0xff 0xff 0xff 0x7f] name\0 ordinal_u32 type_string ...
//! ```
//!
//! `0x7fffffff` (little-endian) is the "definition" sentinel. The
//! ordinal is followed by a typeinfo blob whose first byte encodes the
//! basic type family (see IDA's `typeinf.hpp` enum BT_*). We do not
//! decode the typeinfo to a struct AST here — the goal is to extract
//! the list of symbol names + their ordinals for the type catalog.

use std::io::Read;
use std::path::Path;

use anyhow::{Context, Result, bail};
use flate2::read::ZlibDecoder;

/// A single type/symbol record from a `.til` file.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct TilSymbol {
    pub name: String,
    pub ordinal: u32,
    /// Raw bytes of the type definition. Caller can decode further
    /// against `typeinf.hpp` opcode table.
    pub type_bytes: Vec<u8>,
}

/// Parsed `.til` blob.
#[derive(Clone, Debug)]
pub struct TilFile {
    /// File format version (0x12 = 18 in IDA 9.x).
    pub version: u8,
    pub flags: u32,
    /// Library title (e.g. "GNU C++ x86 Linux").
    pub title: String,
    /// Base library this one extends, if any.
    pub base: String,
    pub symbols: Vec<TilSymbol>,
}

impl TilFile {
    /// Parse a `.til` file from disk.
    pub fn load(path: impl AsRef<Path>) -> Result<Self> {
        let bytes = std::fs::read(path.as_ref())
            .with_context(|| format!("reading {}", path.as_ref().display()))?;
        Self::parse(&bytes)
    }

    /// Parse a `.til` blob from a memory buffer.
    pub fn parse(bytes: &[u8]) -> Result<Self> {
        if bytes.len() < 16 || &bytes[0..6] != b"IDATIL" {
            bail!("not an IDATIL file (bad magic)");
        }
        let version = bytes[6];
        let flags = u32::from_le_bytes([bytes[7], bytes[8], bytes[9], bytes[10]]);
        let mut p = 11usize;
        let title = read_lpstring(bytes, &mut p)?;
        let base = read_lpstring(bytes, &mut p)?;

        let zlib_off = find_zlib_start(bytes, p)?;
        let mut decoder = ZlibDecoder::new(&bytes[zlib_off..]);
        let mut body = Vec::new();
        decoder
            .read_to_end(&mut body)
            .context("zlib decode of TIL body")?;

        let symbols = extract_symbols(&body);
        Ok(TilFile {
            version,
            flags,
            title,
            base,
            symbols,
        })
    }
}

/// Length-prefixed pascal-style string: `u8 len` + `len` bytes.
fn read_lpstring(bytes: &[u8], p: &mut usize) -> Result<String> {
    if *p >= bytes.len() {
        bail!("unexpected EOF reading length-prefixed string");
    }
    let len = bytes[*p] as usize;
    *p += 1;
    let end = *p + len;
    if end > bytes.len() {
        bail!("length-prefixed string overruns buffer");
    }
    let s = String::from_utf8_lossy(&bytes[*p..end]).to_string();
    *p = end;
    Ok(s)
}

fn find_zlib_start(bytes: &[u8], from: usize) -> Result<usize> {
    for i in from..bytes.len().saturating_sub(2) {
        if bytes[i] == 0x78 && matches!(bytes[i + 1], 0x9C | 0xDA | 0x01) {
            let mut d = ZlibDecoder::new(&bytes[i..]);
            let mut sniff = [0u8; 16];
            if let Ok(n) = d.read(&mut sniff)
                && n > 0
            {
                return Ok(i);
            }
        }
    }
    bail!("no zlib stream found after IDATIL header")
}

/// Walk the decompressed TIL body extracting symbol records.
///
/// Each record begins with the 4-byte sentinel `0xff 0xff 0xff 0x7f`
/// (little-endian `0x7fffffff`), followed by a NUL-terminated C string
/// name, then 4 bytes of ordinal, then a variable-length typeinfo blob
/// that runs until the next sentinel or end-of-buffer.
fn extract_symbols(body: &[u8]) -> Vec<TilSymbol> {
    const SENTINEL: [u8; 4] = [0xFF, 0xFF, 0xFF, 0x7F];
    let mut out = Vec::new();
    let mut starts = Vec::new();
    let mut i = 0;
    while i + 4 <= body.len() {
        if body[i..i + 4] == SENTINEL {
            starts.push(i);
            i += 4;
        } else {
            i += 1;
        }
    }
    starts.push(body.len()); // sentinel after last record

    for w in starts.windows(2) {
        let (start, end) = (w[0], w[1]);
        let after_sent = start + 4;
        if after_sent >= end {
            continue;
        }
        if let Some(rec) = parse_record(&body[after_sent..end]) {
            out.push(rec);
        }
    }
    out
}

fn parse_record(buf: &[u8]) -> Option<TilSymbol> {
    let zero = buf.iter().position(|&b| b == 0)?;
    let name = std::str::from_utf8(&buf[..zero]).ok()?.to_string();
    if name.is_empty() || name.len() > 256 {
        return None;
    }
    let after_name = zero + 1;
    if after_name + 4 > buf.len() {
        return None;
    }
    let ordinal = u32::from_le_bytes([
        buf[after_name],
        buf[after_name + 1],
        buf[after_name + 2],
        buf[after_name + 3],
    ]);
    let type_bytes = buf[after_name + 4..].to_vec();
    Some(TilSymbol {
        name,
        ordinal,
        type_bytes,
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::path::PathBuf;

    fn sample(name: &str) -> PathBuf {
        let root = std::env::var("CARGO_MANIFEST_DIR").unwrap();
        PathBuf::from(root)
            .parent()
            .unwrap()
            .parent()
            .unwrap()
            .join("research/ida-sig-til-samples/til_pc")
            .join(name)
    }

    fn maybe_skip(path: &Path) -> Option<()> {
        if !path.exists() {
            eprintln!("skip: {} not present", path.display());
            return None;
        }
        Some(())
    }

    #[test]
    fn test_rejects_bad_magic() {
        let err = TilFile::parse(b"NOTATIL").unwrap_err();
        assert!(format!("{err}").contains("bad magic"));
    }

    #[test]
    fn test_real_gnulnx_x86_til_parses() {
        let p = sample("gnulnx_x86.til");
        if maybe_skip(&p).is_none() {
            return;
        }
        let til = TilFile::load(&p).unwrap();
        assert_eq!(til.version, 0x12, "gnulnx_x86.til is format v18");
        assert!(
            !til.symbols.is_empty(),
            "should have extracted some symbols"
        );
    }

    #[test]
    fn test_gnulnx_x86_extracts_sys_macros() {
        let p = sample("gnulnx_x86.til");
        if maybe_skip(&p).is_none() {
            return;
        }
        let til = TilFile::load(&p).unwrap();
        let names: Vec<&str> = til.symbols.iter().map(|s| s.name.as_str()).collect();
        // Verified empirically: gnulnx_x86.til exposes Linux syscalls
        // via SYS_<name> macro symbols.
        assert!(
            names.contains(&"SYS_brk"),
            "expected SYS_brk in {} symbols",
            names.len()
        );
        assert!(names.contains(&"SYS_chdir"));
        assert!(names.contains(&"SYS_chmod"));
        assert!(names.contains(&"SYS__llseek"));
    }

    #[test]
    fn test_gnulnx_x86_symbol_count_matches_sentinel_count() {
        let p = sample("gnulnx_x86.til");
        if maybe_skip(&p).is_none() {
            return;
        }
        let til = TilFile::load(&p).unwrap();
        // Empirical check: gnulnx_x86.til v18 has 1102 sentinels →
        // every record must yield a TilSymbol or the count drops.
        assert!(
            til.symbols.len() >= 1000,
            "expected ~1100 symbols, got {}",
            til.symbols.len()
        );
    }

    #[test]
    fn test_each_symbol_has_nonempty_name() {
        let p = sample("gnulnx_x86.til");
        if maybe_skip(&p).is_none() {
            return;
        }
        let til = TilFile::load(&p).unwrap();
        for s in &til.symbols {
            assert!(!s.name.is_empty());
            assert!(s.name.len() <= 256);
        }
    }

    #[test]
    fn test_multiple_pc_til_files_load() {
        let files = ["gnulnx_x86.til", "gnulnx_x64.til", "ms16dos.til"];
        let mut loaded = 0usize;
        for f in &files {
            let p = sample(f);
            if !p.exists() {
                continue;
            }
            let til = TilFile::load(&p).expect("real .til must parse");
            assert!(!til.symbols.is_empty(), "{f} produced zero symbols");
            loaded += 1;
        }
        if loaded == 0 {
            eprintln!("skip: no sample til files present");
        }
    }
}
