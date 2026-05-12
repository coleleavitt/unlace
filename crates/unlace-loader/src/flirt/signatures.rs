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

use super::{FlirtDb, FlirtRef, FlirtSignature};

/// `endbr64; xor %eax,%eax; ret` style stub — matches a number of trivial
/// glibc no-op-on-x86-64 functions and is too generic on its own, so it's
/// not registered standalone. Used as a building block when composing
/// patterns below.
const ENDBR64: [u8; 4] = [0xF3, 0x0F, 0x1E, 0xFA];

fn pat(name: &str, pattern: Vec<u8>, mask: Vec<u8>) -> FlirtSignature {
    let min_len = pattern.len();
    FlirtSignature {
        name: name.to_string(),
        pattern,
        mask,
        min_len,
        max_len: None,
        crc16_at: None,
        refs: Vec::new(),
    }
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

/// Build the shipped signature database. Cheap (~50 small heap allocs) and
/// idempotent; callers that care can cache the result.
pub fn default_db() -> FlirtDb {
    let mut entries: Vec<FlirtSignature> = Vec::new();

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
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x89, 0xF8, 0x48, 0x89, 0xF1,
        ],
        &[],
    ));
    // strlen: endbr64; pxor %xmm0,%xmm0; mov %rdi,%rax  (sse2 baseline)
    entries.push(endbr_then(
        "strlen",
        &[0x66, 0x0F, 0xEF, 0xC0, 0x48, 0x89, 0xF8],
    ));
    // strcmp: endbr64; mov %rdi,%rax; sub %rdi,%rsi
    entries.push(endbr_then(
        "strcmp",
        &[0x48, 0x89, 0xF8, 0x48, 0x29, 0xFE],
    ));
    // strncmp: endbr64; test %rdx,%rdx; je ...
    entries.push(endbr_then(
        "strncmp",
        &[0x48, 0x85, 0xD2, 0x74],
    ));
    // memmove: endbr64; mov %rdi,%rax; cmp %rsi,%rdi
    entries.push(endbr_then(
        "memmove",
        &[0x48, 0x89, 0xF8, 0x48, 0x39, 0xF7],
    ));
    // memset: endbr64; movzbl %sil,%eax; mov %rdx,%rcx; rep stosb
    entries.push(with_wildcards(
        "memset",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x40, 0x0F, 0xB6, 0xC6, 0x48, 0x89, 0xD1, 0xF3, 0xAA, 0xC3,
        ],
        &[],
    ));
    // memcmp
    entries.push(endbr_then(
        "memcmp",
        &[0x48, 0x85, 0xD2, 0x74],
    ));
    // strncpy
    entries.push(endbr_then(
        "strncpy",
        &[0x48, 0x85, 0xD2],
    ));
    // strcat
    entries.push(endbr_then(
        "strcat",
        &[0x48, 0x89, 0xF8, 0x80],
    ));

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
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x53, 0x48, 0x83, 0xEC, 0x10,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "atoi",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x18,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "qsort",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x57, 0x4D, 0x89, 0xCF,
        ],
        &[],
    ));

    // ── pthread ──────────────────────────────────────────────────────────
    entries.push(with_wildcards(
        "pthread_create",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x57, 0x41, 0x56, 0x41, 0x55,
        ],
        &[],
    ));
    entries.push(endbr_then("pthread_mutex_lock", &[0x55, 0x48, 0x89, 0xFD]));
    entries.push(endbr_then("pthread_mutex_unlock", &[0x55, 0x48, 0x89, 0xFD]));
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
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x55, 0x41, 0x54, 0x55, 0x48,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "__cxa_allocate_exception",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x54, 0x55, 0x48, 0x89, 0xFD,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "__cxa_atexit",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x18,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "__cxa_pure_virtual",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x83, 0xEC, 0x08,
        ],
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
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x85, 0xFF, 0x74,
        ],
        &[],
    ));
    entries.push(with_wildcards(
        "operator delete[]",
        &[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x85, 0xFF, 0x74,
        ],
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
        &[0xF3, 0x0F, 0x1E, 0xFA, 0x41, 0x55, 0x41, 0x54, 0x49, 0x89, 0xFC],
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

    // t272 — reference-name list resolution. These deliberately share the
    // same wildcarded prologue and are distinguished only by the outbound
    // callee already resolved elsewhere in the binary.
    entries.push(FlirtSignature {
        name: "__memcpy_chk".into(),
        pattern: vec![0x55, 0x48, 0x89, 0xE5, 0xE8],
        mask: vec![0xFF, 0xFF, 0xFF, 0xFF, 0xFF],
        min_len: 9,
        max_len: None,
        crc16_at: None,
        refs: vec![FlirtRef {
            offset: 4,
            name: "memcpy".into(),
        }],
    });
    entries.push(FlirtSignature {
        name: "__strcpy_chk".into(),
        pattern: vec![0x55, 0x48, 0x89, 0xE5, 0xE8],
        mask: vec![0xFF, 0xFF, 0xFF, 0xFF, 0xFF],
        min_len: 9,
        max_len: None,
        crc16_at: None,
        refs: vec![FlirtRef {
            offset: 4,
            name: "strcpy".into(),
        }],
    });

    FlirtDb::from_entries(entries)
}
