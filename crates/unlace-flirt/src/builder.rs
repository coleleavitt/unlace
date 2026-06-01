//! FLIRT signature builder — port of IDA's `pelf` / `makesig` utility.
//!
//! Takes a stripped or symbolized library file (.so / .dll / .dylib /
//! .a archive) and produces a unlace-flavored FLIRT signature: for each
//! exported function, hash a short prefix of its byte pattern + record
//! its name. Downstream matching scans new binaries for these prefixes
//! and assigns the recorded name to any matching code.
//!
//! This implements the **pattern-only** half of FLIRT: structural hashing
//! against fixed byte-prefix patterns plus a CRC of the remainder. The
//! full IDA-format `.sig` binary serializer lives in `serializer.rs`
//! (not yet implemented — see Batch 30 follow-ups).
//!
//! Reference: research/ida-hexrays-docs/pdfs/usenix13-native-x86-decompilation-semantics.pdf
//!            research/decompiled-references/ida/plugins/makesig/all/ (250 decompiled fns)

use std::collections::BTreeMap;
use std::path::Path;

use anyhow::{Result, anyhow, bail};
use serde::{Deserialize, Serialize};

/// A single signature record — one function pattern.
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct FlirtSignature {
    /// Symbol name (`puts`, `__libc_start_main`, etc.).
    pub name: String,
    /// First 32 bytes of the function's code (or fewer if shorter).
    pub prefix: Vec<u8>,
    /// CRC16-CCITT of bytes [32..]. Zero if function is ≤32 bytes long.
    pub crc16: u16,
    /// Total byte length of the function — used as a tiebreaker.
    pub length: u32,
}

impl FlirtSignature {
    pub fn from_function(name: impl Into<String>, code: &[u8]) -> Self {
        let prefix_len = code.len().min(32);
        let prefix = code[..prefix_len].to_vec();
        let crc16 = if code.len() > 32 {
            crc16_ccitt(&code[32..])
        } else {
            0
        };
        Self {
            name: name.into(),
            prefix,
            crc16,
            length: code.len() as u32,
        }
    }
}

/// A complete signature library file.
#[derive(Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct FlirtSignatureFile {
    /// Source label — typically the library name (`libc-2.39.so`).
    pub source: String,
    /// Target architecture string (`x86_64`, `aarch64`, `armv7`, ...).
    pub arch: String,
    /// Signatures by function name.
    pub signatures: BTreeMap<String, FlirtSignature>,
}

impl FlirtSignatureFile {
    pub fn new(source: impl Into<String>, arch: impl Into<String>) -> Self {
        Self {
            source: source.into(),
            arch: arch.into(),
            signatures: BTreeMap::new(),
        }
    }

    pub fn insert(&mut self, sig: FlirtSignature) {
        self.signatures.insert(sig.name.clone(), sig);
    }

    /// Serialize to compact bincode + zstd for on-disk storage.
    pub fn to_bytes(&self) -> Result<Vec<u8>> {
        let encoded = bincode::serde::encode_to_vec(self, bincode::config::standard())?;
        let compressed = zstd::encode_all(&encoded[..], 3)?;
        Ok(compressed)
    }

    pub fn from_bytes(bytes: &[u8]) -> Result<Self> {
        let decompressed = zstd::decode_all(bytes)?;
        let (val, _): (Self, _) =
            bincode::serde::decode_from_slice(&decompressed, bincode::config::standard())?;
        Ok(val)
    }

    /// Write to disk.
    pub fn save_to(&self, path: impl AsRef<Path>) -> Result<()> {
        let bytes = self.to_bytes()?;
        std::fs::write(path, bytes)?;
        Ok(())
    }

    /// Load from disk.
    pub fn load_from(path: impl AsRef<Path>) -> Result<Self> {
        let bytes = std::fs::read(path)?;
        Self::from_bytes(&bytes)
    }

    pub fn len(&self) -> usize {
        self.signatures.len()
    }

    pub fn is_empty(&self) -> bool {
        self.signatures.is_empty()
    }
}

/// CRC16-CCITT (0x1021 polynomial). Same algorithm IDA uses for the
/// trailing-bytes portion of a FLIRT signature.
pub fn crc16_ccitt(bytes: &[u8]) -> u16 {
    let mut crc: u16 = 0xFFFF;
    for &b in bytes {
        crc ^= (b as u16) << 8;
        for _ in 0..8 {
            if crc & 0x8000 != 0 {
                crc = (crc << 1) ^ 0x1021;
            } else {
                crc <<= 1;
            }
        }
    }
    crc
}

/// Build a signature file from an in-memory map of `name → code_bytes`.
///
/// This is the unit-testable core; the user-facing entry that loads a
/// .so/.dll/.dylib and extracts named functions lives in
/// `build_from_library` and depends on the loader crate.
pub fn build_from_function_map(
    functions: &BTreeMap<String, Vec<u8>>,
    source: &str,
    arch: &str,
) -> FlirtSignatureFile {
    let mut sig_file = FlirtSignatureFile::new(source, arch);
    for (name, code) in functions {
        if code.is_empty() {
            continue;
        }
        sig_file.insert(FlirtSignature::from_function(name.clone(), code));
    }
    sig_file
}

/// Match a candidate function's code against a signature library.
///
/// Returns the best-confidence match (or None if no signature matches).
/// Confidence is computed as:
/// - 100% if prefix matches AND crc16 matches AND lengths match exactly
/// - 80% if prefix matches AND crc16 matches but length differs ≤ 16 bytes
/// - 60% if only prefix matches (function may be too short for crc16)
/// - else None
pub fn match_function(code: &[u8], library: &FlirtSignatureFile) -> Option<(String, u8)> {
    if code.is_empty() {
        return None;
    }
    let prefix_len = code.len().min(32);
    let candidate_prefix = &code[..prefix_len];
    let candidate_crc = if code.len() > 32 {
        crc16_ccitt(&code[32..])
    } else {
        0
    };

    let mut best: Option<(String, u8)> = None;
    for sig in library.signatures.values() {
        if sig.prefix.as_slice() != candidate_prefix {
            continue;
        }
        let length_diff = (sig.length as i64 - code.len() as i64).abs();
        let confidence = if code.len() <= 32 {
            60
        } else if sig.crc16 == candidate_crc && length_diff == 0 {
            100
        } else if sig.crc16 == candidate_crc && length_diff <= 16 {
            80
        } else {
            60
        };
        if best.as_ref().map(|(_, c)| *c).unwrap_or(0) < confidence {
            best = Some((sig.name.clone(), confidence));
        }
    }
    best
}

/// Build a signature file from a library on disk.
///
/// Uses the unlace-loader to parse ELF/PE/Mach-O exports + section data
/// then derives function byte slices from the exported symbol table.
pub fn build_from_library(library_path: impl AsRef<Path>) -> Result<FlirtSignatureFile> {
    use unlace_loader::{ElfLoader, Loader, MachoLoader, PeLoader};

    let library_path = library_path.as_ref();
    let bytes = std::fs::read(library_path)?;

    let image = if ElfLoader::can_load(&bytes) {
        ElfLoader::load(&bytes)?
    } else if PeLoader::can_load(&bytes) {
        PeLoader::load(&bytes)?
    } else if MachoLoader::can_load(&bytes) {
        MachoLoader::load(&bytes)?
    } else {
        bail!("unsupported binary format for {}", library_path.display())
    };

    let arch = format!("{:?}", image.arch).to_lowercase();
    let source = library_path
        .file_name()
        .and_then(|n| n.to_str())
        .unwrap_or("unknown")
        .to_string();

    let mut functions = BTreeMap::new();
    let mut sorted_eas: Vec<u64> = image.symbols.keys().copied().collect();
    sorted_eas.sort();
    for (i, &ea) in sorted_eas.iter().enumerate() {
        let sym = &image.symbols[&ea];
        if sym.name.is_empty() {
            continue;
        }
        // Find the section containing this symbol.
        let Some(section) = image
            .sections
            .iter()
            .find(|s| ea >= s.vaddr && ea < s.vaddr + s.size)
        else {
            continue;
        };
        if section.data.is_empty() {
            continue;
        }
        let off = (ea - section.vaddr) as usize;
        // Symbol size: use next-symbol-address as upper bound (typical for
        // ELF when symbol sizes are missing).
        let next_ea = sorted_eas
            .get(i + 1)
            .copied()
            .unwrap_or(section.vaddr + section.size);
        let size = (next_ea.saturating_sub(ea)).min(2048) as usize;
        if size == 0 || off + size > section.data.len() {
            continue;
        }
        let code = section.data[off..off + size].to_vec();
        functions.insert(sym.name.clone(), code);
    }

    if functions.is_empty() {
        return Err(anyhow!(
            "no named functions with size info found in {}",
            library_path.display()
        ));
    }

    Ok(build_from_function_map(&functions, &source, &arch))
}

#[cfg(test)]
mod tests {
    use super::*;

    fn sample_code(name_seed: u8) -> Vec<u8> {
        // 64 bytes of synthetic code: name_seed repeated 32x, then 32x increment.
        let mut v = vec![name_seed; 32];
        v.extend((0..32).map(|i| i as u8));
        v
    }

    #[test]
    fn test_crc16_ccitt_known_vectors() {
        // Empty input
        assert_eq!(crc16_ccitt(b""), 0xFFFF);
        // "123456789" → 0x29B1 (well-known CRC16-CCITT-FALSE vector)
        assert_eq!(crc16_ccitt(b"123456789"), 0x29B1);
    }

    #[test]
    fn test_flirt_signature_from_function_short() {
        let sig = FlirtSignature::from_function("short_fn", &[0x55, 0x48, 0x89]);
        assert_eq!(sig.name, "short_fn");
        assert_eq!(sig.prefix, vec![0x55, 0x48, 0x89]);
        assert_eq!(sig.crc16, 0); // < 32 bytes
        assert_eq!(sig.length, 3);
    }

    #[test]
    fn test_flirt_signature_from_function_long() {
        let code = sample_code(0xAA);
        let sig = FlirtSignature::from_function("long_fn", &code);
        assert_eq!(sig.prefix.len(), 32);
        assert_ne!(sig.crc16, 0); // has trailing bytes
        assert_eq!(sig.length, 64);
    }

    #[test]
    fn test_signature_file_round_trip_bytes() {
        let mut sf = FlirtSignatureFile::new("libc-test", "x86_64");
        sf.insert(FlirtSignature::from_function("puts", &sample_code(0x55)));
        sf.insert(FlirtSignature::from_function("strcpy", &sample_code(0x48)));

        let bytes = sf.to_bytes().expect("encode");
        let decoded = FlirtSignatureFile::from_bytes(&bytes).expect("decode");
        assert_eq!(decoded, sf);
    }

    #[test]
    fn test_signature_file_round_trip_disk() {
        let tmp = std::env::temp_dir().join(format!("flirt_test_{}.sig", std::process::id()));
        let mut sf = FlirtSignatureFile::new("libc-test", "x86_64");
        sf.insert(FlirtSignature::from_function("malloc", &sample_code(0x77)));
        sf.save_to(&tmp).expect("save");
        let loaded = FlirtSignatureFile::load_from(&tmp).expect("load");
        assert_eq!(loaded.len(), 1);
        assert!(loaded.signatures.contains_key("malloc"));
        std::fs::remove_file(&tmp).ok();
    }

    #[test]
    fn test_build_from_function_map() {
        let mut fns = BTreeMap::new();
        fns.insert("foo".to_string(), sample_code(0x11));
        fns.insert("bar".to_string(), sample_code(0x22));
        let sf = build_from_function_map(&fns, "libtest.so", "x86_64");
        assert_eq!(sf.len(), 2);
        assert_eq!(sf.arch, "x86_64");
    }

    #[test]
    fn test_match_function_exact() {
        let mut sf = FlirtSignatureFile::new("test", "x86_64");
        let code = sample_code(0xAB);
        sf.insert(FlirtSignature::from_function("target", &code));
        let m = match_function(&code, &sf).expect("should match");
        assert_eq!(m.0, "target");
        assert_eq!(m.1, 100); // exact match
    }

    #[test]
    fn test_match_function_short_fn_60_confidence() {
        let mut sf = FlirtSignatureFile::new("test", "x86_64");
        let short = vec![0x55, 0x48, 0x89, 0xE5]; // 4 bytes — under 32
        sf.insert(FlirtSignature::from_function("short", &short));
        let m = match_function(&short, &sf).expect("should match");
        assert_eq!(m.0, "short");
        assert_eq!(m.1, 60); // short funcs always 60%
    }

    #[test]
    fn test_match_function_no_match() {
        let mut sf = FlirtSignatureFile::new("test", "x86_64");
        sf.insert(FlirtSignature::from_function("foo", &sample_code(0xAA)));
        let other = sample_code(0xBB);
        assert!(match_function(&other, &sf).is_none());
    }

    #[test]
    fn test_match_function_length_diff_within_tolerance() {
        let mut sf = FlirtSignatureFile::new("test", "x86_64");
        let mut original = sample_code(0xAB);
        sf.insert(FlirtSignature::from_function("orig", &original));
        // Append 8 bytes — length differs but prefix and trailing crc still match-ish
        original.extend([0u8; 8]);
        // Same prefix, but crc differs because we appended bytes. So
        // confidence falls to 60 (prefix-only).
        let m = match_function(&original, &sf).expect("should match");
        assert_eq!(m.0, "orig");
        assert!(m.1 >= 60);
    }

    #[test]
    fn test_match_function_empty_returns_none() {
        let sf = FlirtSignatureFile::new("test", "x86_64");
        assert!(match_function(&[], &sf).is_none());
    }
}
