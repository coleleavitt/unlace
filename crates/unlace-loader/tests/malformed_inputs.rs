//! Batch 23-25: malformed-input safety harness for every binary-format
//! loader on the public crate surface (`ElfLoader`, `MachoLoader`,
//! `PeLoader`).
//!
//! Each loader gets fed a collection of pathological inputs:
//!
//! * Empty buffer.
//! * Magic bytes followed by nothing.
//! * Magic bytes plus header truncated mid-field.
//! * Magic plus oversized section/segment counts.
//!
//! The contract is the same as the fuzz harness: no panic, ever. Either
//! the `can_load` gate rejects the input (in which case `load` is never
//! called), or `load` returns a structured `LoadError`. A panic propagates
//! out of `catch_unwind` and fails the test.

use std::panic::catch_unwind;

use unlace_loader::{ElfLoader, Loader, MachoLoader, PeLoader};

/// Drive `load` under `catch_unwind`, asserting no panic. Returns `true`
/// when `can_load` accepted the input (so `load` was called).
fn safe_load<L: Loader>(name: &str, data: &[u8]) -> bool {
    if !L::can_load(data) {
        return false;
    }
    let result = catch_unwind(|| L::load(data));
    assert!(result.is_ok(), "{name}: load panicked on malformed input");
    true
}

#[test]
fn elf_loader_handles_malformed_inputs_without_panic() {
    let empty: Vec<u8> = Vec::new();
    safe_load::<ElfLoader>("elf-empty", &empty);

    // Magic alone, no e_ident continuation.
    safe_load::<ElfLoader>("elf-magic-only", b"\x7fELF");

    // Truncated 64-bit ELF header.
    let mut t = vec![0u8; 16];
    t[0..4].copy_from_slice(b"\x7fELF");
    t[4] = 2; // ELFCLASS64
    t[5] = 1; // ELFDATA2LSB
    t[6] = 1; // EV_CURRENT
    safe_load::<ElfLoader>("elf-truncated-header", &t);

    // Header claims many sections in a tiny buffer.
    let mut big = vec![0u8; 64];
    big[0..4].copy_from_slice(b"\x7fELF");
    big[4] = 2;
    big[5] = 1;
    big[6] = 1;
    // e_shnum at offset 0x3c (LE 16-bit) = 0xffff
    big[0x3c] = 0xff;
    big[0x3d] = 0xff;
    safe_load::<ElfLoader>("elf-oversize-shnum", &big);
}

#[test]
fn macho_loader_handles_malformed_inputs_without_panic() {
    let empty: Vec<u8> = Vec::new();
    safe_load::<MachoLoader>("macho-empty", &empty);

    // 64-bit Mach-O magic (LE) plus nothing.
    safe_load::<MachoLoader>("macho-magic-only", &[0xcf, 0xfa, 0xed, 0xfe]);

    // Magic + truncated header.
    let mut t = vec![0u8; 16];
    t[0..4].copy_from_slice(&[0xcf, 0xfa, 0xed, 0xfe]);
    safe_load::<MachoLoader>("macho-truncated", &t);

    // Magic + crazy ncmds in a small buffer.
    let mut huge = vec![0u8; 32];
    huge[0..4].copy_from_slice(&[0xcf, 0xfa, 0xed, 0xfe]);
    // ncmds at offset 16 (LE u32) = 0xffff_ffff
    huge[16..20].copy_from_slice(&u32::MAX.to_le_bytes());
    safe_load::<MachoLoader>("macho-oversize-ncmds", &huge);
}

#[test]
fn pe_loader_handles_malformed_inputs_without_panic() {
    let empty: Vec<u8> = Vec::new();
    safe_load::<PeLoader>("pe-empty", &empty);

    // MZ magic, garbage after.
    let mz = b"MZ\x90\x00\x03\x00\x00\x00\x04\x00\x00\x00\xff\xff\x00\x00".to_vec();
    safe_load::<PeLoader>("pe-mz-no-pe", &mz);

    // MZ + PE signature but truncated optional header.
    let mut t = vec![0u8; 0x100];
    t[0] = b'M';
    t[1] = b'Z';
    // e_lfanew at 0x3c (LE u32) → 0x40, where PE header should live.
    t[0x3c] = 0x40;
    t[0x40] = b'P';
    t[0x41] = b'E';
    safe_load::<PeLoader>("pe-truncated-optional-header", &t);
}
