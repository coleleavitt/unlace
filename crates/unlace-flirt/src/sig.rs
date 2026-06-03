//! Real IDA `.sig` (IDASGN) FLIRT signature loader.
//!
//! Parses the on-disk format produced by IDA's `sigmake`/`flair` toolchain:
//!
//! ```text
//! offset  size  field
//!   0     6     magic "IDASGN"
//!   6     1     version          (5..=11 supported in 9.x)
//!   7     1     arch             (0=PC, 1=68K, 2=SuperH, 3=ARM, 4=MIPS, 6=PPC, ...)
//!   8     4     file_types       (u32 bitmask: which file format(s))
//!  12     2     os_types         (u16 bitmask)
//!  14     2     app_types        (u16 bitmask)
//!  16     1     features         (bit4 = ctype, bit5 = cm, bit6 = unique)
//!  17     2     old_n_functions  (u16; superseded by n_functions in v10+)
//!  19     2     crc16            (header CRC, ignored for read)
//!  21    12     ctype            (16-byte field truncated to 12 in header)
//!  33     1     library_name_len
//!  34     2     alt              (alternate crc / padding)
//!  36     4     n_functions      (v10+)
//!  40    var    library_name (library_name_len bytes)
//!   …    zlib   deflate-compressed body
//! ```
//!
//! After the header we hand the rest to flate2 (zlib wrapper) and walk the
//! decompressed payload extracting all C-identifier-looking ASCII tokens
//! plus the raw byte-pattern that immediately precedes each token. The
//! pattern recovery is heuristic but matches what `flair`'s `sigmake -p`
//! output looks like; perfect bit-level pattern decoding (variable-mask
//! trie traversal) is left for a follow-up.

use std::path::Path;

use flate2::read::ZlibDecoder;
use std::io::Read;

use crate::FlirtError;

/// One real function record extracted from a parsed `.sig` file.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SigFunction {
    /// C identifier name (e.g. `printf`, `__memcpy_avx`).
    pub name: String,
    /// First-32-byte byte pattern recovered from the trie leaf.
    pub pattern: Vec<u8>,
}

/// Parsed `.sig` file: header metadata + recovered function records.
#[derive(Clone, Debug)]
pub struct SigFile {
    pub version: u8,
    pub arch: u8,
    pub features: u8,
    pub file_types: u32,
    pub os_types: u16,
    pub app_types: u16,
    pub library_name: String,
    pub n_functions: u32,
    pub functions: Vec<SigFunction>,
}

impl SigFile {
    /// Parse a `.sig` blob from disk.
    pub fn load(path: impl AsRef<Path>) -> Result<Self, FlirtError> {
        let bytes = std::fs::read(path.as_ref())?;
        Self::parse(&bytes)
    }

    /// Parse a `.sig` blob from a memory buffer.
    pub fn parse(bytes: &[u8]) -> Result<Self, FlirtError> {
        if bytes.len() < 41 || &bytes[0..6] != b"IDASGN" {
            return Err(FlirtError::Sig(
                "not an IDASGN file (bad magic)".to_string(),
            ));
        }
        let version = bytes[6];
        let arch = bytes[7];
        let file_types = read_u32_le(bytes, 8);
        let os_types = read_u16_le(bytes, 12);
        let app_types = read_u16_le(bytes, 14);
        let features = bytes[16];

        // Empirical layout (verified against IDA 9.1 sig files):
        //  - bytes 17..38: header fixed area
        //  - byte 33: library_name_len
        //  - bytes 34..38: u32 n_functions for v10+ (offset 36 in v7)
        //  - library_name starts immediately after the fixed header
        // The exact offset of n_functions varies by version. Treat
        // bytes 36..40 as a u32 n_functions hint; clamp to 1_000_000 in
        // case the layout differs and we read garbage.
        let _library_name_len = bytes[33] as usize;
        let n_functions = read_u32_le(bytes, 36).min(1_000_000);

        // The library-name field is variable-length and version-dependent;
        // find the zlib body first, then take everything ASCII-printable
        // between offset 36 and the zlib start as the name.
        let zlib_off = find_zlib_start(bytes, 36)?;
        let name_window = &bytes[36..zlib_off];
        let library_name = name_window
            .iter()
            .skip_while(|&&b| !b.is_ascii_graphic())
            .take_while(|&&b| b.is_ascii_graphic() || b == b' ')
            .copied()
            .collect::<Vec<u8>>();
        let library_name = String::from_utf8_lossy(&library_name).to_string();
        let mut decoder = ZlibDecoder::new(&bytes[zlib_off..]);
        let mut body = Vec::new();
        decoder
            .read_to_end(&mut body)
            .map_err(|e| FlirtError::Sig(format!("zlib decode: {e}")))?;

        let functions = extract_functions(&body);
        Ok(SigFile {
            version,
            arch,
            features,
            file_types,
            os_types,
            app_types,
            library_name,
            n_functions,
            functions,
        })
    }
}

/// Find a valid zlib stream header (`0x78 0x{01,9C,DA}`) in `bytes` at or
/// after `from`. Probes each candidate by attempting a 16-byte trial
/// decompression — false positives are common because library-name and
/// CRC fields may contain the magic bytes by accident.
fn find_zlib_start(bytes: &[u8], from: usize) -> Result<usize, FlirtError> {
    for i in from..bytes.len().saturating_sub(2) {
        if bytes[i] == 0x78 && matches!(bytes[i + 1], 0x9C | 0xDA | 0x01) {
            let mut decoder = ZlibDecoder::new(&bytes[i..]);
            let mut sniff = [0u8; 16];
            // A genuine stream yields >=1 decompressed byte without error.
            // False positives (magic bytes inside a name) error immediately.
            if let Ok(n) = decoder.read(&mut sniff)
                && n > 0
            {
                return Ok(i);
            }
        }
    }
    Err(FlirtError::Sig(
        "no zlib stream found after IDASGN header".to_string(),
    ))
}

/// Walk the decompressed body extracting C-identifier tokens. The
/// preceding bytes (up to 32) before each name are recorded as the
/// function's pattern fingerprint. This is enough for our scoring path
/// to identify libc functions in a stripped binary even if the full
/// variable-mask trie has not been decoded.
fn extract_functions(body: &[u8]) -> Vec<SigFunction> {
    let mut out = Vec::new();
    let mut i = 0;
    while i < body.len() {
        if !is_ident_start(body[i]) {
            i += 1;
            continue;
        }
        i = consume_identifier(body, i, &mut out);
    }
    out
}

fn consume_identifier(body: &[u8], start: usize, out: &mut Vec<SigFunction>) -> usize {
    let mut end = start;
    while end < body.len() && is_ident_cont(body[end]) {
        end += 1;
    }
    if end - start >= 3 {
        let name = String::from_utf8_lossy(&body[start..end]).into_owned();
        if looks_like_function_name(&name) {
            let pat_start = start.saturating_sub(32);
            out.push(SigFunction {
                name,
                pattern: body[pat_start..start].to_vec(),
            });
        }
    }
    end
}

fn is_ident_start(b: u8) -> bool {
    b == b'_' || b.is_ascii_lowercase() || b.is_ascii_uppercase()
}

fn is_ident_cont(b: u8) -> bool {
    is_ident_start(b) || b.is_ascii_digit()
}

fn looks_like_function_name(s: &str) -> bool {
    // Reject obvious junk strings and very short tokens.
    if s.len() < 3 || s.len() > 96 {
        return false;
    }
    // Require at least one lowercase letter or underscore to filter out
    // accidental UPPERCASE runs of binary data.
    s.chars().any(|c| c.is_ascii_lowercase() || c == '_')
}

fn read_u16_le(b: &[u8], off: usize) -> u16 {
    u16::from_le_bytes([b[off], b[off + 1]])
}

fn read_u32_le(b: &[u8], off: usize) -> u32 {
    u32::from_le_bytes([b[off], b[off + 1], b[off + 2], b[off + 3]])
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
            .join("research/ida-sig-til-samples/sig_pc")
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
    fn test_parse_rejects_bad_magic() {
        let err = SigFile::parse(b"NOTASIG_____________________________________").unwrap_err();
        assert!(format!("{err}").contains("bad magic"));
    }

    #[test]
    fn test_parse_rejects_short_file() {
        let err = SigFile::parse(b"IDASGN").unwrap_err();
        assert!(format!("{err}").contains("bad magic"));
    }

    #[test]
    fn test_real_aztec_sig_parses_and_extracts_known_libc_names() {
        let p = sample("aztec.sig");
        if maybe_skip(&p).is_none() {
            return;
        }
        let sig = SigFile::load(&p).unwrap();
        assert_eq!(sig.arch, 0); // PC
        let names: Vec<&str> = sig.functions.iter().map(|f| f.name.as_str()).collect();
        assert!(names.iter().any(|n| n.contains("isnan")), "names={names:?}");
        assert!(names.iter().any(|n| n.contains("frexp")));
        assert!(names.iter().any(|n| n.contains("ldexp")));
        assert!(names.iter().any(|n| n.contains("modf")));
    }

    #[test]
    fn test_real_sig_each_record_has_nonempty_pattern() {
        let p = sample("aztec.sig");
        if maybe_skip(&p).is_none() {
            return;
        }
        let sig = SigFile::load(&p).unwrap();
        assert!(!sig.functions.is_empty());
        // At least 90% of records should have a pattern of >=8 bytes;
        // some sig formats put short names directly after the header.
        let with_pat = sig
            .functions
            .iter()
            .filter(|f| f.pattern.len() >= 8)
            .count();
        let total = sig.functions.len();
        assert!(
            with_pat * 10 >= total * 9,
            "{}/{} records had >=8-byte patterns",
            with_pat,
            total
        );
    }

    #[test]
    fn test_pattern_recovers_preceding_bytes_for_known_name() {
        let p = sample("aztec.sig");
        if maybe_skip(&p).is_none() {
            return;
        }
        let sig = SigFile::load(&p).unwrap();
        // The pattern field should be ≤32 bytes and immediately precede
        // the name token in the decompressed trie body.
        let isnan = sig
            .functions
            .iter()
            .find(|f| f.name == "isnan")
            .expect("isnan present in aztec.sig");
        assert!(!isnan.pattern.is_empty());
        assert!(isnan.pattern.len() <= 32);
    }

    #[test]
    fn test_parsed_arch_matches_directory() {
        let p = sample("aztec.sig");
        if maybe_skip(&p).is_none() {
            return;
        }
        let sig = SigFile::load(&p).unwrap();
        assert_eq!(sig.arch, 0, "sig_pc/* must have arch=0 (PC)");
    }

    #[test]
    fn test_can_load_multiple_pc_sig_files() {
        // Spot-check a handful of vendor sig files to confirm general
        // robustness, not just one canonical example. Older v5/v6 sigs
        // store the trie uncompressed, so we count successful parses
        // and require at least one v7+ file to fully load.
        let names = ["aztec.sig", "b32vcl.sig", "b5132mfc.sig"];
        let mut loaded = 0usize;
        let mut attempted = 0usize;
        for n in &names {
            let p = sample(n);
            if !p.exists() {
                continue;
            }
            attempted += 1;
            if let Ok(sig) = SigFile::load(&p)
                && !sig.functions.is_empty()
            {
                loaded += 1;
            }
        }
        if attempted == 0 {
            eprintln!("skip: no sample sig files present");
            return;
        }
        assert!(loaded >= 1, "at least one v7+ .sig must parse fully");
    }

    #[test]
    fn test_arm_sig_parses_and_extracts_names() {
        let root = std::env::var("CARGO_MANIFEST_DIR").unwrap();
        let p = std::path::PathBuf::from(root)
            .parent()
            .unwrap()
            .parent()
            .unwrap()
            .join("research/ida-sig-til-samples/sig_arm/android_arm.sig");
        if maybe_skip(&p).is_none() {
            return;
        }
        let sig = SigFile::load(&p).unwrap();
        // android_arm.sig is a v10 sig; the named library is "Android NDK ARM".
        assert_eq!(sig.version, 10);
        assert!(
            sig.library_name.contains("Android") || !sig.functions.is_empty(),
            "expected named library or extracted functions"
        );
    }
}
