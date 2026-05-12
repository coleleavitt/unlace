//! Default FLIRT signature table.
//!
//! Patterns reflect typical x86-64 Linux glibc 2.31+ / libstdc++ builds with
//! `-fcf-protection=full` (so most prologues start with `endbr64`,
//! `f3 0f 1e fa`). For variants that lack endbr64 we register a second
//! entry with a different prefix where it matters; the leading bytes for
//! these functions on Ubuntu / Debian are public knowledge documented in
//! glibc source. Wildcards (`0x00` mask bytes) cover positions where the
//! compiler emits relocations or PC-relative immediates that drift between
//! builds.

use super::{FlirtDb, FlirtSignature};
use unlace_ir::ArchId;

/// `endbr64; xor %eax,%eax; ret` style stub — matches a number of trivial
/// glibc no-op-on-x86-64 functions and is too generic on its own, so it's
/// not registered standalone. Used as a building block when composing
/// patterns below.
const ENDBR64: [u8; 4] = [0xF3, 0x0F, 0x1E, 0xFA];

fn pat_for_arch(arch: ArchId, name: &str, pattern: Vec<u8>, mask: Vec<u8>) -> FlirtSignature {
    FlirtSignature::for_arch(arch, name, pattern, mask)
}

fn pat(name: &str, pattern: Vec<u8>, mask: Vec<u8>) -> FlirtSignature {
    pat_for_arch(ArchId::X86_64, name, pattern, mask)
}

/// Helper: build a pattern + a mask of all-0xFF (no wildcards).
fn exact(name: &str, bytes: &[u8]) -> FlirtSignature {
    pat(name, bytes.to_vec(), vec![0xFF; bytes.len()])
}

/// Helper: pattern with wildcards at the given positions.
fn with_wildcards(name: &str, bytes: &[u8], wildcard_positions: &[usize]) -> FlirtSignature {
    let mut mask = vec![0xFF; bytes.len()];
    for &pos in wildcard_positions {
        if pos < mask.len() {
            mask[pos] = 0x00;
        }
    }
    pat(name, bytes.to_vec(), mask)
}

/// Compose `endbr64` + tail bytes into a single pattern.
fn endbr_then(name: &str, tail: &[u8]) -> FlirtSignature {
    let mut bytes = ENDBR64.to_vec();
    bytes.extend_from_slice(tail);
    exact(name, &bytes)
}

fn exact_for_arch(arch: ArchId, name: &str, bytes: &[u8]) -> FlirtSignature {
    pat_for_arch(arch, name, bytes.to_vec(), vec![0xFF; bytes.len()])
}

fn with_wildcards_for_arch(
    arch: ArchId,
    name: &str,
    bytes: &[u8],
    wildcard_positions: &[usize],
) -> FlirtSignature {
    let mut mask = vec![0xFF; bytes.len()];
    for &pos in wildcard_positions {
        if pos < mask.len() {
            mask[pos] = 0x00;
        }
    }
    pat_for_arch(arch, name, bytes.to_vec(), mask)
}

fn push_x86_64_signatures(entries: &mut Vec<FlirtSignature>) {
    // ── glibc string / memory ────────────────────────────────────────────
    // memcpy comes *first* because its pattern is a strict superset of the
    // strcpy/memmove leading bytes — registration order picks the
    // most-specific match when prefixes collide and we don't need the full
    // CRC-tail dance.
    // memcpy: endbr64; mov %rdi,%rax; mov %rdx,%rcx; rep movsb; ret
    entries.push(with_wildcards(
        "memcpy",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x89, 0xF8, 0x48, 0x89, 0xD1, 0xF3, 0xA4, 0xC3,
        ],
        &[],
    ));
    // strcpy: endbr64; mov %rdi,%rax; mov %rsi,%rcx (loads source) — diverges
    // from memcpy at byte 7+.
    entries.push(with_wildcards(
        "strcpy",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x89, 0xF8, 0x48, 0x89, 0xF1],
        &[],
    ));
    // strlen: endbr64; pxor %xmm0,%xmm0; mov %rdi,%rax  (sse2 baseline)
    entries.push(endbr_then(
        "strlen",
        &[0x66, 0x0F, 0xEF, 0xC0, 0x48, 0x89, 0xF8],
    ));
    // strcmp: endbr64; mov %rdi,%rax; sub %rdi,%rsi
    entries.push(endbr_then("strcmp", &[0x48, 0x89, 0xF8, 0x48, 0x29, 0xFE]));
    // strncmp: endbr64; test %rdx,%rdx; je ...
    entries.push(endbr_then("strncmp", &[0x48, 0x85, 0xD2, 0x74]));
    // memmove: endbr64; mov %rdi,%rax; cmp %rsi,%rdi
    entries.push(endbr_then("memmove", &[0x48, 0x89, 0xF8, 0x48, 0x39, 0xF7]));
    // memset: endbr64; movzbl %sil,%eax; mov %rdx,%rcx; rep stosb
    entries.push(with_wildcards(
        "memset",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x40, 0x0F, 0xB6, 0xC6, 0x48, 0x89, 0xD1, 0xF3, 0xAA, 0xC3,
        ],
        &[],
    ));
    // memcmp
    entries.push(endbr_then("memcmp", &[0x48, 0x85, 0xD2, 0x74]));
    // strncpy
    entries.push(endbr_then("strncpy", &[0x48, 0x85, 0xD2]));
    // strcat
    entries.push(endbr_then("strcat", &[0x48, 0x89, 0xF8, 0x80]));

    // ── glibc heap ───────────────────────────────────────────────────────
    // malloc, free, realloc, calloc — wildcard the inner address operands
    // because they're PC-relative to the GOT.
    entries.push(with_wildcards(
        "malloc",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x85, 0xC0,
        ],
        &[7, 8, 9, 10],
    ));
    entries.push(with_wildcards(
        "free",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x85, 0xFF, 0x74, 0x00, 0x48, 0x8B, 0x05,
        ],
        &[8],
    ));
    entries.push(with_wildcards(
        "realloc",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x85, 0xFF, 0x74, 0x00, 0x48, 0x85, 0xF6,
        ],
        &[8],
    ));
    entries.push(with_wildcards(
        "calloc",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x85, 0xFF, 0x74, 0x00, 0x48, 0x85, 0xF6,
        ],
        &[8],
    ));

    // ── glibc stdio ──────────────────────────────────────────────────────
    entries.push(with_wildcards(
        "printf",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x00, 0x48, 0x89, 0xF2,
        ],
        &[7],
    ));
    entries.push(with_wildcards(
        "fprintf",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x00, 0x48, 0x89, 0xD1,
        ],
        &[7],
    ));
    entries.push(with_wildcards(
        "sprintf",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x00, 0x48, 0x89, 0xCA,
        ],
        &[7],
    ));
    entries.push(with_wildcards(
        "snprintf",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x00, 0x48, 0x89, 0xC8,
        ],
        &[7],
    ));
    entries.push(with_wildcards(
        "fopen",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x00,
        ],
        &[11],
    ));
    entries.push(endbr_then("fclose", &[0x48, 0x83, 0xEC, 0x18]));
    entries.push(endbr_then("fread", &[0x48, 0x89, 0xCA]));
    entries.push(endbr_then("fwrite", &[0x48, 0x89, 0xCA]));
    entries.push(endbr_then("fputs", &[0x48, 0x89, 0xFA]));
    entries.push(endbr_then("fgets", &[0x48, 0x85, 0xF6]));
    entries.push(endbr_then("puts", &[0x48, 0x83, 0xEC, 0x18]));

    // ── glibc fd I/O ─────────────────────────────────────────────────────
    // syscall stubs: endbr64; mov $NR,%eax; syscall; cmp; jae; ret
    entries.push(with_wildcards(
        "open",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0xB8, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x05,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "close",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0xB8, 0x03, 0x00, 0x00, 0x00, 0x0F, 0x05,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "read",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x05,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "write",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0xB8, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x05,
        ],
        &[],
    ));

    // ── glibc misc ───────────────────────────────────────────────────────
    entries.push(with_wildcards(
        "getenv",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00,
        ],
        &[7, 8, 9, 10],
    ));
    entries.push(with_wildcards(
        "exit",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xFD, 0x48, 0x83, 0xEC,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "abort",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x53, 0x48, 0x83, 0xEC, 0x10],
        &[],
    ));
    entries.push(with_wildcards(
        "atoi",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x18],
        &[],
    ));
    entries.push(with_wildcards(
        "qsort",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x57, 0x4D, 0x89, 0xCF],
        &[],
    ));

    // ── pthread ──────────────────────────────────────────────────────────
    entries.push(with_wildcards(
        "pthread_create",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x57, 0x41, 0x56, 0x41, 0x55],
        &[],
    ));
    entries.push(endbr_then("pthread_mutex_lock", &[0x55, 0x48, 0x89, 0xFD]));
    entries.push(endbr_then(
        "pthread_mutex_unlock",
        &[0x55, 0x48, 0x89, 0xFD],
    ));
    entries.push(endbr_then("pthread_join", &[0x41, 0x55, 0x49]));
    entries.push(endbr_then("pthread_self", &[0x64, 0x48, 0x8B, 0x04, 0x25]));

    // ── C++ ABI ──────────────────────────────────────────────────────────
    entries.push(with_wildcards(
        "__cxa_throw",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x55, 0x49, 0x89, 0xD5, 0x41, 0x54,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "__cxa_begin_catch",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x54, 0x55, 0x53, 0x48, 0x89, 0xFB,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "__cxa_end_catch",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x55, 0x41, 0x54, 0x55, 0x48],
        &[],
    ));
    entries.push(with_wildcards(
        "__cxa_allocate_exception",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x54, 0x55, 0x48, 0x89, 0xFD],
        &[],
    ));
    entries.push(with_wildcards(
        "__cxa_atexit",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x18],
        &[],
    ));
    entries.push(with_wildcards(
        "__cxa_pure_virtual",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x08],
        &[],
    ));

    // ── libstdc++ operator new / delete (Itanium mangled names) ──────────
    entries.push(with_wildcards(
        "operator new",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x55, 0x41, 0x54, 0x55, 0x48, 0x89, 0xFD,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "operator new[]",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x55, 0x41, 0x54, 0x55, 0x48, 0x89, 0xFD,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "operator delete",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x85, 0xFF, 0x74],
        &[],
    ));
    entries.push(with_wildcards(
        "operator delete[]",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x85, 0xFF, 0x74],
        &[],
    ));

    // ── libstdc++ std streams / strings ──────────────────────────────────
    entries.push(with_wildcards(
        "std::cout",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5],
        &[],
    ));
    entries.push(with_wildcards(
        "std::cerr",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5],
        &[],
    ));
    entries.push(with_wildcards(
        "std::endl",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5],
        &[],
    ));
    entries.push(with_wildcards(
        "std::string::string",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x54, 0x55, 0x48, 0x89, 0xFD],
        &[],
    ));
    entries.push(with_wildcards(
        "std::string::~string",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5, 0x48],
        &[],
    ));
    entries.push(with_wildcards(
        "std::string::append",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x55, 0x49, 0x89, 0xF5],
        &[],
    ));
    entries.push(with_wildcards(
        "std::vector::push_back",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x55, 0x41, 0x54, 0x49, 0x89, 0xFC,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "std::ostream::operator<<",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5, 0x48, 0x83],
        &[],
    ));
    entries.push(with_wildcards(
        "std::istream::operator>>",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48, 0x89, 0xE5, 0x48, 0x83],
        &[],
    ));
    entries.push(with_wildcards(
        "std::terminate",
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x08],
        &[],
    ));
}

fn push_x86_signatures(entries: &mut Vec<FlirtSignature>) {
    // i386 glibc-style cdecl stubs/prologues.
    entries.push(exact_for_arch(
        ArchId::X86,
        "memcpy",
        &[0x55, 0x89, 0xE5, 0x57, 0x56, 0x8B, 0x7D, 0x08],
    ));
    entries.push(exact_for_arch(
        ArchId::X86,
        "memset",
        &[0x55, 0x89, 0xE5, 0x57, 0x8B, 0x7D, 0x08, 0x8B],
    ));
    entries.push(exact_for_arch(
        ArchId::X86,
        "strlen",
        &[0x55, 0x89, 0xE5, 0x8B, 0x4D, 0x08, 0x31, 0xC0],
    ));
    entries.push(exact_for_arch(
        ArchId::X86,
        "strcmp",
        &[0x55, 0x89, 0xE5, 0x8B, 0x55, 0x08, 0x8B, 0x4D, 0x0C],
    ));
    entries.push(exact_for_arch(
        ArchId::X86,
        "malloc",
        &[0x55, 0x89, 0xE5, 0x83, 0xEC, 0x18, 0x8B, 0x45, 0x08],
    ));
    entries.push(exact_for_arch(
        ArchId::X86,
        "free",
        &[0x55, 0x89, 0xE5, 0x83, 0xEC, 0x08, 0x8B, 0x45, 0x08],
    ));
}

fn push_aarch64_signatures(entries: &mut Vec<FlirtSignature>) {
    // AArch64 little-endian encodings for common libc/libstdc++ entry shapes.
    entries.push(exact_for_arch(
        ArchId::AArch64,
        "memcpy",
        &[
            0xE0, 0x03, 0x01, 0xAA, 0xE3, 0x03, 0x02, 0xAA, 0x64, 0x00, 0x40, 0xF9,
        ],
    ));
    entries.push(exact_for_arch(
        ArchId::AArch64,
        "memset",
        &[
            0xE3, 0x03, 0x00, 0xAA, 0xE0, 0x03, 0x02, 0xAA, 0xE2, 0x03, 0x01, 0x2A,
        ],
    ));
    entries.push(exact_for_arch(
        ArchId::AArch64,
        "strlen",
        &[
            0xE1, 0x03, 0x00, 0xAA, 0x20, 0x00, 0x40, 0x39, 0x1F, 0x00, 0x00, 0x71,
        ],
    ));
    entries.push(exact_for_arch(
        ArchId::AArch64,
        "strcmp",
        &[
            0x22, 0x00, 0x40, 0x39, 0x03, 0x00, 0x40, 0x39, 0x5F, 0x00, 0x03, 0x6B,
        ],
    ));
    entries.push(with_wildcards_for_arch(
        ArchId::AArch64,
        "malloc",
        &[
            0xF0, 0x00, 0x00, 0x90, 0x10, 0x02, 0x40, 0xF9, 0x00, 0x02, 0x1F, 0xD6,
        ],
        &[1, 2],
    ));
    entries.push(exact_for_arch(
        ArchId::AArch64,
        "free",
        &[
            0xE0, 0x00, 0x00, 0xB4, 0xFD, 0x7B, 0xBF, 0xA9, 0xFD, 0x03, 0x00, 0x91,
        ],
    ));
    entries.push(exact_for_arch(
        ArchId::AArch64,
        "__cxa_throw",
        &[
            0xFD, 0x7B, 0xBD, 0xA9, 0xF5, 0x0B, 0x00, 0xF9, 0xF4, 0x4F, 0x01, 0xA9,
        ],
    ));
    entries.push(exact_for_arch(
        ArchId::AArch64,
        "operator new",
        &[
            0xFD, 0x7B, 0xBE, 0xA9, 0xF4, 0x4F, 0x01, 0xA9, 0xF3, 0x53, 0x02, 0xA9,
        ],
    ));
}

fn push_arm_signatures(entries: &mut Vec<FlirtSignature>) {
    // ARM/Thumb common prologue-oriented library fingerprints.
    entries.push(exact_for_arch(
        ArchId::Arm,
        "memcpy",
        &[0x2D, 0xE9, 0xF0, 0x41, 0x04, 0x46, 0x0D, 0x46],
    ));
    entries.push(exact_for_arch(
        ArchId::Arm,
        "memset",
        &[0x2D, 0xE9, 0xF0, 0x41, 0x04, 0x46, 0x0E, 0x46],
    ));
    entries.push(exact_for_arch(
        ArchId::Arm,
        "strlen",
        &[0x10, 0xB5, 0x03, 0x46, 0x00, 0x20, 0x1A, 0x78],
    ));
    entries.push(exact_for_arch(
        ArchId::Arm,
        "strcmp",
        &[0x10, 0xB5, 0x03, 0x78, 0x0A, 0x78, 0x9A, 0x42],
    ));
    entries.push(exact_for_arch(
        ArchId::Arm,
        "malloc",
        &[0x2D, 0xE9, 0xF0, 0x4F, 0x04, 0x46, 0x90, 0xB0],
    ));
}

fn push_riscv64_signatures(entries: &mut Vec<FlirtSignature>) {
    // RISC-V64 little-endian glibc-style function starts.
    entries.push(exact_for_arch(
        ArchId::RiscV64,
        "memcpy",
        &[
            0x13, 0x07, 0x05, 0x00, 0x33, 0x06, 0xA0, 0x00, 0x63, 0x0A, 0x06, 0x00,
        ],
    ));
    entries.push(exact_for_arch(
        ArchId::RiscV64,
        "memset",
        &[
            0x93, 0x07, 0x05, 0x00, 0x13, 0x07, 0x06, 0x00, 0x63, 0x08, 0x06, 0x00,
        ],
    ));
    entries.push(exact_for_arch(
        ArchId::RiscV64,
        "strlen",
        &[
            0x83, 0x47, 0x05, 0x00, 0x13, 0x05, 0x05, 0x00, 0x63, 0x84, 0x07, 0x00,
        ],
    ));
    entries.push(exact_for_arch(
        ArchId::RiscV64,
        "strcmp",
        &[
            0x83, 0x47, 0x05, 0x00, 0x03, 0x47, 0x06, 0x00, 0x63, 0x88, 0xE7, 0x00,
        ],
    ));
    entries.push(with_wildcards_for_arch(
        ArchId::RiscV64,
        "malloc",
        &[
            0x17, 0x05, 0x00, 0x00, 0x03, 0x35, 0x05, 0x00, 0x67, 0x00, 0x05, 0x00,
        ],
        &[1, 2, 3, 6, 7],
    ));
}

fn push_mips_signatures(entries: &mut Vec<FlirtSignature>, arch: ArchId) {
    // Big-endian MIPS/MIPS64 ABI prologue and delay-slot shapes.
    entries.push(exact_for_arch(
        arch,
        "memcpy",
        &[
            0x27, 0xBD, 0xFF, 0xE0, 0xAF, 0xBF, 0x00, 0x1C, 0x00, 0xA0, 0x10, 0x25,
        ],
    ));
    entries.push(exact_for_arch(
        arch,
        "memset",
        &[
            0x27, 0xBD, 0xFF, 0xE0, 0xAF, 0xBF, 0x00, 0x1C, 0x30, 0xA5, 0x00, 0xFF,
        ],
    ));
    entries.push(exact_for_arch(
        arch,
        "strlen",
        &[
            0x80, 0x82, 0x00, 0x00, 0x10, 0x40, 0x00, 0x06, 0x00, 0x00, 0x18, 0x25,
        ],
    ));
    entries.push(exact_for_arch(
        arch,
        "strcmp",
        &[
            0x80, 0x82, 0x00, 0x00, 0x80, 0xC3, 0x00, 0x00, 0x14, 0x43, 0x00, 0x05,
        ],
    ));
    entries.push(exact_for_arch(
        arch,
        "malloc",
        &[
            0x3C, 0x1C, 0x00, 0x00, 0x27, 0x9C, 0x00, 0x00, 0x8F, 0x99, 0x00, 0x00,
        ],
    ));
}

fn push_ppc_signatures(entries: &mut Vec<FlirtSignature>, arch: ArchId) {
    // PowerPC/PPC64 big-endian common ABI function prologues.
    entries.push(exact_for_arch(
        arch,
        "memcpy",
        &[
            0x7C, 0x69, 0x1B, 0x78, 0x7C, 0x8A, 0x23, 0x78, 0x7C, 0xAB, 0x2B, 0x78,
        ],
    ));
    entries.push(exact_for_arch(
        arch,
        "memset",
        &[
            0x7C, 0x69, 0x1B, 0x78, 0x54, 0x84, 0x06, 0x3E, 0x7C, 0xAA, 0x2B, 0x78,
        ],
    ));
    entries.push(exact_for_arch(
        arch,
        "strlen",
        &[
            0x88, 0x83, 0x00, 0x00, 0x38, 0x63, 0x00, 0x01, 0x2C, 0x04, 0x00, 0x00,
        ],
    ));
    entries.push(exact_for_arch(
        arch,
        "strcmp",
        &[
            0x88, 0xA3, 0x00, 0x00, 0x88, 0xC4, 0x00, 0x00, 0x7C, 0x05, 0x30, 0x00,
        ],
    ));
    entries.push(exact_for_arch(
        arch,
        "malloc",
        &[
            0x94, 0x21, 0xFF, 0xE0, 0x7C, 0x08, 0x02, 0xA6, 0xF8, 0x01, 0x00, 0x28,
        ],
    ));
}

/// Build a FLIRT database for one architecture.
pub fn default_db_for_arch(arch: ArchId) -> FlirtDb {
    FlirtDb::from_entries(signatures_for_arch(arch))
}

/// Return the shipped signatures for `arch`.
pub fn signatures_for_arch(arch: ArchId) -> Vec<FlirtSignature> {
    let mut entries = Vec::new();
    match arch {
        ArchId::X86_64 => push_x86_64_signatures(&mut entries),
        ArchId::X86 => push_x86_signatures(&mut entries),
        ArchId::AArch64 => push_aarch64_signatures(&mut entries),
        ArchId::Arm => push_arm_signatures(&mut entries),
        ArchId::RiscV64 => push_riscv64_signatures(&mut entries),
        ArchId::Mips64 => push_mips_signatures(&mut entries, ArchId::Mips64),
        ArchId::Mips => push_mips_signatures(&mut entries, ArchId::Mips),
        ArchId::Ppc64 => push_ppc_signatures(&mut entries, ArchId::Ppc64),
        ArchId::Ppc => push_ppc_signatures(&mut entries, ArchId::Ppc),
        _ => {}
    }
    entries
}

/// Build the shipped multi-architecture signature database. Cheap (~100 small
/// heap allocs) and idempotent; callers that care can cache the result.
pub fn default_db() -> FlirtDb {
    let mut entries = Vec::new();
    push_x86_64_signatures(&mut entries);
    push_x86_signatures(&mut entries);
    push_aarch64_signatures(&mut entries);
    push_arm_signatures(&mut entries);
    push_riscv64_signatures(&mut entries);
    push_mips_signatures(&mut entries, ArchId::Mips64);
    push_mips_signatures(&mut entries, ArchId::Mips);
    push_ppc_signatures(&mut entries, ArchId::Ppc64);
    push_ppc_signatures(&mut entries, ArchId::Ppc);
    FlirtDb::from_entries(entries)
}
