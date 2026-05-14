//! Pre-built FLIRT signature databases for common runtime libraries.
//!
//! Ships bundled signature sets for glibc, musl, MSVCRT, Go runtime, and Rust
//! libcore so that `unlace` can identify library functions out of the box without
//! requiring external `.sig` files.

use std::sync::LazyLock;

use unlace_ir::ArchId;

use crate::FlirtPattern;

// ---------------------------------------------------------------------------
// Public types
// ---------------------------------------------------------------------------

/// A bundled collection of FLIRT signatures for a specific library/arch/version.
#[derive(Debug, Clone)]
pub struct BundledSigSet {
    /// Library name (e.g. "glibc", "musl", "msvcrt").
    pub library: String,
    /// Target architecture these patterns are valid for.
    pub arch: ArchId,
    /// Library version string (e.g. "2.31", "1.2.3", "generic").
    pub version: String,
    /// The actual FLIRT signature patterns.
    pub patterns: Vec<FlirtSignature>,
}

/// A single signature entry in a bundled set.
///
/// Wraps [`FlirtPattern`] with additional metadata about the source library.
#[derive(Debug, Clone)]
pub struct FlirtSignature {
    /// The underlying FLIRT pattern (bytes, mask, name, CRC, etc.).
    pub pattern: FlirtPattern,
    /// Optional category hint (e.g. "allocator", "string", "crt_init").
    pub category: Option<&'static str>,
}

// ---------------------------------------------------------------------------
// Builder
// ---------------------------------------------------------------------------

/// Builder for constructing [`BundledSigSet`] instances from known function prologues.
#[derive(Debug)]
pub struct BundledSigSetBuilder {
    library: String,
    arch: ArchId,
    version: String,
    signatures: Vec<FlirtSignature>,
}

impl BundledSigSetBuilder {
    /// Create a new builder for the given library/arch/version.
    pub fn new(library: impl Into<String>, arch: ArchId, version: impl Into<String>) -> Self {
        Self {
            library: library.into(),
            arch,
            version: version.into(),
            signatures: Vec::new(),
        }
    }

    /// Add a signature from raw prologue bytes with a full exact-match mask.
    pub fn add_exact(
        mut self,
        name: impl Into<String>,
        bytes: &[u8],
        category: Option<&'static str>,
    ) -> Self {
        let mask = vec![0xFF; bytes.len()];
        self.signatures.push(FlirtSignature {
            pattern: FlirtPattern {
                bytes: bytes.to_vec(),
                mask,
                name: name.into(),
                length: 0,
                crc16: 0,
                crc_offset: 0,
                crc_length: 0,
                exact_length: 0,
                prologue_len: 0,
            },
            category,
        });
        self
    }

    /// Add a signature with an explicit mask (0xFF = must match, 0x00 = wildcard).
    pub fn add_masked(
        mut self,
        name: impl Into<String>,
        bytes: &[u8],
        mask: &[u8],
        category: Option<&'static str>,
    ) -> Self {
        assert_eq!(bytes.len(), mask.len(), "bytes/mask length mismatch");
        self.signatures.push(FlirtSignature {
            pattern: FlirtPattern {
                bytes: bytes.to_vec(),
                mask: mask.to_vec(),
                name: name.into(),
                length: 0,
                crc16: 0,
                crc_offset: 0,
                crc_length: 0,
                exact_length: 0,
                prologue_len: 0,
            },
            category,
        });
        self
    }

    /// Finalize into a [`BundledSigSet`].
    pub fn build(self) -> BundledSigSet {
        BundledSigSet {
            library: self.library,
            arch: self.arch,
            version: self.version,
            patterns: self.signatures,
        }
    }
}

// ---------------------------------------------------------------------------
// Signature data: glibc x86-64
// ---------------------------------------------------------------------------

fn build_glibc_x86_64() -> BundledSigSet {
    BundledSigSetBuilder::new("glibc", ArchId::X86_64, "2.31+")
        // __libc_start_main: endbr64; push r15
        .add_exact(
            "__libc_start_main",
            &[0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x57, 0x41, 0x56, 0x41, 0x55, 0x41, 0x54, 0x55, 0x53, 0x48, 0x89],
            Some("crt_init"),
        )
        // malloc: endbr64; push rbp; mov rbp, rsp; push r15
        .add_exact(
            "malloc",
            &[0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5, 0x41, 0x57, 0x41, 0x56, 0x41, 0x55, 0x41, 0x54],
            Some("allocator"),
        )
        // free: endbr64; push rbp; mov rbp, rsp; push r14
        .add_exact(
            "free",
            &[0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5, 0x41, 0x56, 0x41, 0x55, 0x41, 0x54, 0x53, 0x48, 0x89, 0xFB],
            Some("allocator"),
        )
        // printf: endbr64; sub rsp, 0xD8
        .add_masked(
            "printf",
            &[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x81, 0xEC, 0xD8, 0x00, 0x00, 0x00, 0x48, 0x89, 0x74, 0x24, 0x28],
            &[0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF],
            Some("stdio"),
        )
        // memcpy: endbr64; mov rax, rdi (rep-movsb variant)
        .add_exact(
            "memcpy",
            &[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x89, 0xF8, 0x48, 0x89, 0xD1, 0x48, 0x89, 0xF2, 0x48, 0x89, 0xFE],
            Some("string"),
        )
        // strlen: endbr64; mov rcx, rdi
        .add_exact(
            "strlen",
            &[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x89, 0xF9, 0x48, 0x83, 0xE1, 0x3F, 0x48, 0x83, 0xF9, 0x30, 0x77],
            Some("string"),
        )
        // puts: endbr64; push r14
        .add_exact(
            "puts",
            &[0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x56, 0x55, 0x53, 0x48, 0x89, 0xFB, 0x48, 0x83, 0xEC, 0x10, 0x64],
            Some("stdio"),
        )
        // exit: endbr64; lea rdi
        .add_exact(
            "exit",
            &[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x8D, 0x3D, 0x00, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x00],
            Some("crt_init"),
        )
        .build()
}

// ---------------------------------------------------------------------------
// Signature data: musl x86-64
// ---------------------------------------------------------------------------

fn build_musl_x86_64() -> BundledSigSet {
    BundledSigSetBuilder::new("musl", ArchId::X86_64, "1.2+")
        // __libc_start_main: push rbp; mov rbp, rsp; push r15; push r14
        .add_exact(
            "__libc_start_main",
            &[0x55, 0x48, 0x89, 0xE5, 0x41, 0x57, 0x41, 0x56, 0x41, 0x55, 0x41, 0x54, 0x53, 0x48, 0x83, 0xEC],
            Some("crt_init"),
        )
        // malloc: push rbp; mov rbp, rsp; push rbx; sub rsp
        .add_exact(
            "malloc",
            &[0x55, 0x48, 0x89, 0xE5, 0x53, 0x48, 0x83, 0xEC, 0x18, 0x48, 0x89, 0xFB, 0x48, 0x83, 0xFB, 0x00],
            Some("allocator"),
        )
        // free: push rbp; mov rbp, rsp; push r15; push r14; push rbx
        .add_exact(
            "free",
            &[0x55, 0x48, 0x89, 0xE5, 0x41, 0x57, 0x41, 0x56, 0x53, 0x48, 0x83, 0xEC, 0x08, 0x48, 0x85, 0xFF],
            Some("allocator"),
        )
        // printf: sub rsp, 0xD8; mov [rsp+0x28], rsi
        .add_exact(
            "printf",
            &[0x48, 0x81, 0xEC, 0xD8, 0x00, 0x00, 0x00, 0x48, 0x89, 0x74, 0x24, 0x28, 0x48, 0x89, 0x54, 0x24],
            Some("stdio"),
        )
        // memcpy: mov rax, rdi; mov rcx, rdx; rep movsb
        .add_exact(
            "memcpy",
            &[0x48, 0x89, 0xF8, 0x48, 0x89, 0xD1, 0xF3, 0xA4, 0xC3, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90],
            Some("string"),
        )
        // strlen: mov rcx, -1; xor eax, eax; repnz scasb
        .add_exact(
            "strlen",
            &[0x48, 0xC7, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0x31, 0xC0, 0xF2, 0xAE, 0x48, 0xF7, 0xD1, 0x48, 0xFF],
            Some("string"),
        )
        .build()
}

// ---------------------------------------------------------------------------
// Signature data: MSVCRT x86-64
// ---------------------------------------------------------------------------

fn build_msvcrt_x86_64() -> BundledSigSet {
    BundledSigSetBuilder::new("msvcrt", ArchId::X86_64, "14.0+")
        // mainCRTStartup: sub rsp, 0x28; call __security_init_cookie
        .add_exact(
            "mainCRTStartup",
            &[0x48, 0x83, 0xEC, 0x28, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x83, 0xC4, 0x28, 0xE9, 0x00, 0x00],
            Some("crt_init"),
        )
        // _malloc: jmp to ucrt malloc (import thunk pattern)
        .add_masked(
            "_malloc",
            &[0x48, 0x83, 0xEC, 0x28, 0x48, 0x85, 0xC9, 0x74, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x83],
            &[0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF],
            Some("allocator"),
        )
        // _free: sub rsp, 0x28; test rcx, rcx; je short
        .add_masked(
            "_free",
            &[0x48, 0x83, 0xEC, 0x28, 0x48, 0x85, 0xC9, 0x74, 0x00, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x90, 0x48],
            &[0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF],
            Some("allocator"),
        )
        // __security_init_cookie: sub rsp, 0x28; mov rax, gs:[0x60]
        .add_exact(
            "__security_init_cookie",
            &[0x48, 0x83, 0xEC, 0x28, 0x65, 0x48, 0x8B, 0x04, 0x25, 0x60, 0x00, 0x00, 0x00, 0x48, 0x8B, 0x48],
            Some("crt_init"),
        )
        // __security_check_cookie: cmp rcx, qword ptr [__security_cookie]
        .add_masked(
            "__security_check_cookie",
            &[0x48, 0x3B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x75, 0x00, 0xC3, 0x48, 0x83, 0xEC, 0x28, 0xE8, 0x00],
            &[0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00],
            Some("crt_init"),
        )
        // _initterm: push rbx; sub rsp, 0x20; mov rbx, rcx
        .add_exact(
            "_initterm",
            &[0x53, 0x48, 0x83, 0xEC, 0x20, 0x48, 0x89, 0xCB, 0x48, 0x39, 0xD3, 0x73, 0x00, 0x0F, 0x1F, 0x00],
            Some("crt_init"),
        )
        .build()
}

// ---------------------------------------------------------------------------
// Signature data: Go runtime x86-64
// ---------------------------------------------------------------------------

fn build_go_runtime_x86_64() -> BundledSigSet {
    BundledSigSetBuilder::new("go_runtime", ArchId::X86_64, "1.20+")
        // runtime.mstart: mov [rsp+8], rbp; lea rbp, [rsp+8]
        .add_exact(
            "runtime.mstart",
            &[0x48, 0x89, 0x6C, 0x24, 0x08, 0x48, 0x8D, 0x6C, 0x24, 0x08, 0x48, 0x83, 0xEC, 0x30, 0x65, 0x48],
            Some("scheduler"),
        )
        // runtime.newproc: mov [rsp+8], rbp; lea rbp, [rsp+8]; sub rsp
        .add_exact(
            "runtime.newproc",
            &[0x48, 0x89, 0x6C, 0x24, 0x10, 0x48, 0x8D, 0x6C, 0x24, 0x10, 0x48, 0x83, 0xEC, 0x48, 0x65, 0x48],
            Some("scheduler"),
        )
        // runtime.schedule: mov [rsp+8], rbp; lea rbp, [rsp+8]; sub rsp, 0x68
        .add_exact(
            "runtime.schedule",
            &[0x48, 0x89, 0x6C, 0x24, 0x08, 0x48, 0x8D, 0x6C, 0x24, 0x08, 0x48, 0x81, 0xEC, 0x68, 0x00, 0x00],
            Some("scheduler"),
        )
        // runtime.goexit: xor eax, eax; mov [rsp], rax; call runtime.goexit1
        .add_exact(
            "runtime.goexit",
            &[0x31, 0xC0, 0x48, 0x89, 0x04, 0x24, 0xE8, 0x00, 0x00, 0x00, 0x00, 0xEB, 0xFE, 0xCC, 0xCC, 0xCC],
            Some("scheduler"),
        )
        // runtime.mallocgc: mov [rsp+8], rbp; lea rbp, [rsp+8]
        .add_exact(
            "runtime.mallocgc",
            &[0x48, 0x89, 0x6C, 0x24, 0x08, 0x48, 0x8D, 0x6C, 0x24, 0x08, 0x48, 0x81, 0xEC, 0x98, 0x00, 0x00],
            Some("allocator"),
        )
        .build()
}

// ---------------------------------------------------------------------------
// Signature data: Rust libcore/liballoc x86-64
// ---------------------------------------------------------------------------

fn build_rust_core_x86_64() -> BundledSigSet {
    BundledSigSetBuilder::new("rust_core", ArchId::X86_64, "1.70+")
        // core::panicking::panic: push rbp; mov rbp, rsp; sub rsp; lea rdi, [rip+...]
        .add_exact(
            "core::panicking::panic",
            &[0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x30, 0x48, 0x8D, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x48],
            Some("panic"),
        )
        // core::panicking::panic_fmt: push rbp; mov rbp, rsp; sub rsp, 0x40
        .add_exact(
            "core::panicking::panic_fmt",
            &[0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x40, 0x48, 0x89, 0x7D, 0xD0, 0x48, 0x89, 0x75, 0xD8],
            Some("panic"),
        )
        // alloc::alloc::__rust_alloc: mov rax, qword ptr [rip+__rust_alloc_impl]
        .add_masked(
            "alloc::alloc::__rust_alloc",
            &[0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC],
            &[0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF],
            Some("allocator"),
        )
        // alloc::alloc::__rust_dealloc: mov rax, qword ptr [rip+__rust_dealloc_impl]
        .add_masked(
            "alloc::alloc::__rust_dealloc",
            &[0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC],
            &[0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF],
            Some("allocator"),
        )
        // core::fmt::write: push rbp; mov rbp, rsp; push r15; push r14; push r13; push r12
        .add_exact(
            "core::fmt::write",
            &[0x55, 0x48, 0x89, 0xE5, 0x41, 0x57, 0x41, 0x56, 0x41, 0x55, 0x41, 0x54, 0x53, 0x48, 0x81, 0xEC],
            Some("fmt"),
        )
        // std::rt::lang_start: push rbp; mov rbp, rsp; sub rsp
        .add_exact(
            "std::rt::lang_start",
            &[0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x20, 0x48, 0x89, 0x7D, 0xE8, 0x48, 0x89, 0x75, 0xF0],
            Some("crt_init"),
        )
        .build()
}

// ---------------------------------------------------------------------------
// Static storage & lookup
// ---------------------------------------------------------------------------

/// All bundled signature sets, lazily initialized.
static BUNDLED_SIGS: LazyLock<Vec<BundledSigSet>> = LazyLock::new(|| {
    vec![
        build_glibc_x86_64(),
        build_musl_x86_64(),
        build_msvcrt_x86_64(),
        build_go_runtime_x86_64(),
        build_rust_core_x86_64(),
    ]
});

/// Retrieve all bundled signature sets matching the given architecture.
///
/// Returns references to static data — no allocation beyond the returned `Vec`.
pub fn get_bundled_sigs(arch: ArchId) -> Vec<&'static BundledSigSet> {
    BUNDLED_SIGS
        .iter()
        .filter(|set| set.arch == arch)
        .collect()
}

/// Retrieve all bundled signature sets (all architectures).
pub fn all_bundled_sigs() -> &'static [BundledSigSet] {
    &BUNDLED_SIGS
}

/// Convert a [`BundledSigSet`] into a [`crate::FlirtDb`] for matching.
impl From<&BundledSigSet> for crate::FlirtDb {
    fn from(set: &BundledSigSet) -> Self {
        let patterns = set.patterns.iter().map(|s| s.pattern.clone()).collect();
        crate::FlirtDb { patterns }
    }
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn bundled_sigs_load_x86_64() {
        let sigs = get_bundled_sigs(ArchId::X86_64);
        assert!(sigs.len() >= 5, "expected at least 5 sig sets for x86_64, got {}", sigs.len());
    }

    #[test]
    fn bundled_sigs_empty_for_unknown_arch() {
        let sigs = get_bundled_sigs(ArchId::Avr);
        assert!(sigs.is_empty(), "expected no bundled sigs for AVR");
    }

    #[test]
    fn glibc_sig_set_has_expected_functions() {
        let sigs = get_bundled_sigs(ArchId::X86_64);
        let glibc = sigs.iter().find(|s| s.library == "glibc").expect("glibc set missing");
        let names: Vec<&str> = glibc.patterns.iter().map(|p| p.pattern.name.as_str()).collect();
        assert!(names.contains(&"malloc"), "missing malloc in glibc set");
        assert!(names.contains(&"free"), "missing free in glibc set");
        assert!(names.contains(&"__libc_start_main"), "missing __libc_start_main");
        assert!(names.contains(&"printf"), "missing printf");
        assert!(names.contains(&"memcpy"), "missing memcpy");
        assert!(names.contains(&"strlen"), "missing strlen");
    }

    #[test]
    fn go_runtime_sigs_present() {
        let sigs = get_bundled_sigs(ArchId::X86_64);
        let go = sigs.iter().find(|s| s.library == "go_runtime").expect("go_runtime set missing");
        let names: Vec<&str> = go.patterns.iter().map(|p| p.pattern.name.as_str()).collect();
        assert!(names.contains(&"runtime.mstart"));
        assert!(names.contains(&"runtime.newproc"));
        assert!(names.contains(&"runtime.schedule"));
    }

    #[test]
    fn rust_core_sigs_present() {
        let sigs = get_bundled_sigs(ArchId::X86_64);
        let rust = sigs.iter().find(|s| s.library == "rust_core").expect("rust_core set missing");
        let names: Vec<&str> = rust.patterns.iter().map(|p| p.pattern.name.as_str()).collect();
        assert!(names.contains(&"core::panicking::panic"));
        assert!(names.contains(&"alloc::alloc::__rust_alloc"));
    }

    #[test]
    fn convert_to_flirt_db() {
        let sigs = get_bundled_sigs(ArchId::X86_64);
        let glibc = sigs.iter().find(|s| s.library == "glibc").unwrap();
        let db: crate::FlirtDb = (*glibc).into();
        assert_eq!(db.patterns.len(), glibc.patterns.len());
    }

    #[test]
    fn builder_creates_valid_patterns() {
        let set = BundledSigSetBuilder::new("test_lib", ArchId::X86_64, "1.0")
            .add_exact("func_a", &[0x55, 0x48, 0x89, 0xE5], Some("test"))
            .add_masked(
                "func_b",
                &[0x48, 0x83, 0xEC, 0x00],
                &[0xFF, 0xFF, 0xFF, 0x00],
                None,
            )
            .build();

        assert_eq!(set.library, "test_lib");
        assert_eq!(set.arch, ArchId::X86_64);
        assert_eq!(set.patterns.len(), 2);
        assert_eq!(set.patterns[0].pattern.mask, vec![0xFF, 0xFF, 0xFF, 0xFF]);
        assert_eq!(set.patterns[1].pattern.mask, vec![0xFF, 0xFF, 0xFF, 0x00]);
    }

    #[test]
    fn all_bundled_returns_all() {
        let all = all_bundled_sigs();
        assert!(all.len() >= 5);
    }

    #[test]
    fn pattern_byte_lengths_consistent() {
        for set in all_bundled_sigs() {
            for sig in &set.patterns {
                assert_eq!(
                    sig.pattern.bytes.len(),
                    sig.pattern.mask.len(),
                    "bytes/mask mismatch in {}/{}",
                    set.library,
                    sig.pattern.name
                );
                assert!(
                    sig.pattern.bytes.len() >= 4,
                    "pattern too short in {}/{}",
                    set.library,
                    sig.pattern.name
                );
            }
        }
    }
}
