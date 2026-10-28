//! Batch 23-25: malformed-input safety harness for every binary-format
//! loader on the public crate surface.
//!
//! This test file is intentionally an *integration* contract: it exercises
//! the same public entry points a downstream CLI would call, with inputs
//! designed to defeat optimistic parsers (empty, magic-only, truncated
//! mid-field, oversized length fields). The Loader trait contract is:
//!
//! * `can_load` either rejects the input (so `load` is never called) or
//!   accepts it and `load` returns a structured `LoadError`.
//! * No parser may panic on attacker-controlled bytes.
//!
//! For format-specific parsers that expose their own entry points (Intel
//! HEX, STM32 DFU, ESP32, IMG4, Android boot, Java class, .pyc, dyld
//! shared-cache, chained fixups, .NET CLR, etc.) we drive each entry
//! under `catch_unwind` and assert that the result is either `Err(...)`
//! or `None` — never `Ok(_)` masquerading as a valid parse and never a
//! panic.

use std::panic::catch_unwind;

#[cfg(feature = "format-android")]
use unlace_loader::{AndroidBootError, parse_android_boot};
use unlace_loader::{
    ElfLoader, Loader, MachoLoader, PeLoader, WasmLoader, is_dyld_shared_cache,
    parse_chained_fixups,
};
#[cfg(feature = "format-esp32")]
use unlace_loader::{Esp32Error, parse_esp32_image};
#[cfg(feature = "unwired")]
use unlace_loader::{
    Img4Error, IntelHexError, SRecordError, Stm32DfuError, is_img4, load_intel_hex, load_s_record,
    parse_img4, parse_stm32_bin, parse_stm32_dfu,
};
#[cfg(feature = "format-java")]
use unlace_loader::{JavaError, parse_class};
#[cfg(feature = "format-python")]
use unlace_loader::{PycError, parse_pyc, parse_pyc_header};
#[cfg(feature = "format-dotnet")]
use unlace_loader::{detect_clr, parse_clr_header, parse_cor20_header};

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

/// Drive an arbitrary parser closure under `catch_unwind`; assert it
/// neither panicked nor returned an unexpectedly successful value.
fn safe_call<R: std::fmt::Debug>(
    name: &str,
    f: impl FnOnce() -> R + std::panic::UnwindSafe,
    is_success: impl FnOnce(&R) -> bool,
) {
    let result = catch_unwind(f);
    let value = result.unwrap_or_else(|_| panic!("{name}: parser panicked on malformed input"));
    assert!(
        !is_success(&value),
        "{name}: parser accepted malformed input: {value:?}",
    );
}

// ---------------------------------------------------------------------------
// Container loaders (ELF / Mach-O / PE / Wasm) via the Loader trait.
// ---------------------------------------------------------------------------

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

#[test]
fn wasm_loader_handles_malformed_inputs_without_panic() {
    let empty: Vec<u8> = Vec::new();
    safe_load::<WasmLoader>("wasm-empty", &empty);

    // Magic alone, no version.
    safe_load::<WasmLoader>("wasm-magic-only", b"\x00asm");

    // Magic + version, truncated section header.
    let mut t = b"\x00asm\x01\x00\x00\x00".to_vec();
    t.push(0xff); // bogus section id
    safe_load::<WasmLoader>("wasm-bogus-section", &t);
}

// ---------------------------------------------------------------------------
// Firmware / container formats.
// ---------------------------------------------------------------------------

#[cfg(feature = "unwired")]
#[test]
fn intel_hex_rejects_malformed_streams_with_structured_diagnostics() {
    // Empty stream → no EOF record.
    match load_intel_hex("") {
        Err(IntelHexError::NoEof) => {}
        other => panic!("empty intel hex should be NoEof, got {other:?}"),
    }

    // Missing ':' start code on a non-empty line.
    match load_intel_hex("hello\n") {
        Err(IntelHexError::MissingStartCode { line: 1 }) => {}
        other => panic!("missing start code expected, got {other:?}"),
    }

    // Bad checksum.
    match load_intel_hex(":01000000FFFE\n:00000001FF\n") {
        Err(IntelHexError::BadChecksum { line: 1, .. }) => {}
        other => panic!("bad checksum expected, got {other:?}"),
    }

    // Odd hex length payload — too short to even pass `RecordTooShort`,
    // so we only assert *some* structured error rather than a specific
    // variant. Either is a valid diagnostic.
    match load_intel_hex(":0100000F\n") {
        Err(IntelHexError::OddLength { line: 1 })
        | Err(IntelHexError::RecordTooShort { line: 1, .. }) => {}
        other => panic!("odd length or short record expected, got {other:?}"),
    }
}

#[cfg(feature = "unwired")]
#[test]
fn s_record_rejects_malformed_streams_with_structured_diagnostics() {
    match load_s_record("not srec\n") {
        Err(SRecordError::MissingStartCode { line: 1 }) => {}
        other => panic!("missing S start code expected, got {other:?}"),
    }

    // S1 line: byte count mismatch / checksum failure. Accept either
    // structured diagnostic — both are valid rejections of the input.
    match load_s_record("S1040000420000\n") {
        Err(SRecordError::BadChecksum { line: 1, .. })
        | Err(SRecordError::LengthMismatch { line: 1, .. }) => {}
        other => panic!("structured S-record error expected, got {other:?}"),
    }
}

#[cfg(feature = "unwired")]
#[test]
fn stm32_parsers_handle_malformed_inputs() {
    // STM32 plain BIN: parse_stm32_bin returns Option<_> for a heuristic check.
    safe_call("stm32-bin-empty", || parse_stm32_bin(&[]), Option::is_some);

    // STM32 DFU needs at least a 27-byte suffix to validate.
    match parse_stm32_dfu(&[]) {
        Err(Stm32DfuError::Truncated(_)) => {}
        other => panic!("stm32 dfu truncated expected, got {other:?}"),
    }

    // 32 zero bytes — passes length check but prefix/suffix magic is wrong.
    let zeros = vec![0u8; 32];
    match parse_stm32_dfu(&zeros) {
        Err(Stm32DfuError::BadPrefix) | Err(Stm32DfuError::BadSuffix) => {}
        other => panic!("stm32 dfu bad prefix/suffix expected, got {other:?}"),
    }
}

#[cfg(feature = "format-esp32")]
#[test]
fn esp32_image_parser_handles_malformed_inputs() {
    // Empty.
    match parse_esp32_image(&[]) {
        Err(Esp32Error::TruncatedHeader(_)) | Err(Esp32Error::InvalidMagic(_)) => {}
        other => panic!("esp32 empty should error, got {other:?}"),
    }

    // Wrong magic.
    match parse_esp32_image(&[0u8; 24]) {
        Err(Esp32Error::InvalidMagic(_)) | Err(Esp32Error::TruncatedHeader(_)) => {}
        other => panic!("esp32 bad magic expected, got {other:?}"),
    }

    // Magic but no segments and tiny buffer.
    let mut h = vec![0u8; 24];
    h[0] = 0xE9; // ESP32 image magic
    h[1] = 0xff; // 255 segments
    safe_call(
        "esp32-oversize-segments",
        || parse_esp32_image(&h),
        Result::is_ok,
    );
}

#[cfg(feature = "unwired")]
#[test]
fn img4_parsers_handle_malformed_inputs() {
    assert!(!is_img4(&[]));
    assert!(!is_img4(b"\x00\x00\x00\x00"));

    match parse_img4(&[]) {
        Err(Img4Error::Truncated(_))
        | Err(Img4Error::BadLength(_))
        | Err(Img4Error::UnexpectedTag { .. })
        | Err(Img4Error::BadMagic) => {}
        other => panic!("img4 empty should error, got {other:?}"),
    }

    // Random bytes that look ASN.1-ish but aren't IMG4.
    let bogus = b"\x30\x05\x16\x03foo".to_vec();
    safe_call("img4-bogus-asn1", || parse_img4(&bogus), Result::is_ok);
}

#[cfg(feature = "format-android")]
#[test]
fn android_boot_parser_handles_malformed_inputs() {
    match parse_android_boot(&[]) {
        Err(AndroidBootError::InvalidMagic) | Err(AndroidBootError::TooSmall(_)) => {}
        other => panic!("android boot empty should error, got {other:?}"),
    }

    // Wrong magic.
    let wrong = vec![0u8; 4096];
    match parse_android_boot(&wrong) {
        Err(AndroidBootError::InvalidMagic) | Err(AndroidBootError::TooSmall(_)) => {}
        other => panic!("android boot wrong magic should error, got {other:?}"),
    }

    // Correct ANDROID! magic but truncated body.
    let mut hdr = vec![0u8; 32];
    hdr[..8].copy_from_slice(b"ANDROID!");
    safe_call(
        "android-boot-truncated-after-magic",
        || parse_android_boot(&hdr),
        Result::is_ok,
    );
}

#[test]
fn dyld_shared_cache_detector_rejects_non_cache_inputs() {
    assert!(!is_dyld_shared_cache(&[]));
    assert!(!is_dyld_shared_cache(b"dyld_v"));
    assert!(!is_dyld_shared_cache(b"\x7fELF\x02\x01\x01\x00"));

    // Magic only with no header: parser must say None / no panic.
    let magic_only = b"dyld_v1   x86_64".to_vec();
    let result = catch_unwind(|| unlace_loader::DyldCache::parse(&magic_only).is_some());
    let parsed = result.expect("dyld parse panicked");
    assert!(
        !parsed,
        "dyld shared cache parser accepted truncated magic-only buffer",
    );
}

#[test]
fn chained_fixups_parser_handles_malformed_inputs() {
    safe_call(
        "chained-fixups-empty",
        || parse_chained_fixups(&[]),
        Option::is_some,
    );

    // Mostly-zero header → must return None, not parse a phantom image.
    let zeros = vec![0u8; 64];
    safe_call(
        "chained-fixups-zeros",
        || parse_chained_fixups(&zeros),
        Option::is_some,
    );
}

// ---------------------------------------------------------------------------
// Managed / VM bytecode formats.
// ---------------------------------------------------------------------------

#[cfg(feature = "format-java")]
#[test]
fn java_class_parser_handles_malformed_inputs() {
    match parse_class(&[]) {
        Err(JavaError::Truncated { .. }) | Err(JavaError::BadMagic(_)) => {}
        other => panic!("java empty should error, got {other:?}"),
    }

    // Magic alone, nothing else.
    match parse_class(&[0xca, 0xfe, 0xba, 0xbe]) {
        Err(JavaError::Truncated { .. }) | Err(JavaError::BadMagic(_)) => {}
        other => panic!("java magic-only should error, got {other:?}"),
    }

    // Magic + bogus version + huge constant pool count.
    let mut buf = vec![0xca, 0xfe, 0xba, 0xbe, 0, 0, 0, 0];
    // cp_count = 0xffff
    buf.extend_from_slice(&[0xff, 0xff]);
    safe_call("java-oversize-cp", || parse_class(&buf), Result::is_ok);
}

#[cfg(feature = "format-python")]
#[test]
fn python_pyc_parser_handles_malformed_inputs() {
    match parse_pyc(&[]) {
        Err(PycError::Truncated(_)) | Err(PycError::UnknownMagic(_)) => {}
        other => panic!("pyc empty should error, got {other:?}"),
    }

    // 16 bytes — Truncated check passes but magic-terminator/unknown will trip.
    let mut bogus = vec![0u8; 16];
    bogus[0..4].copy_from_slice(&[0xff, 0xff, 0x0d, 0x0a]);
    match parse_pyc(&bogus) {
        Err(PycError::UnknownMagic(_))
        | Err(PycError::BadMagicTerminator(_))
        | Err(PycError::Truncated(_)) => {}
        other => panic!("pyc unknown magic expected, got {other:?}"),
    }

    // Header-only inspection variant must return None for truncated input.
    assert!(parse_pyc_header(&[]).is_none());
}

#[cfg(feature = "format-lua")]
#[test]
fn lua_bytecode_detector_handles_malformed_inputs() {
    assert!(unlace_loader::detect_lua(&[]).is_none());
    assert!(unlace_loader::detect_lua(b"\x1bLua").is_none());

    // chunk header peek on tiny inputs must return None, not panic.
    safe_call(
        "lua-chunk-empty",
        || unlace_loader::parse_chunk_header(&[]),
        Option::is_some,
    );

    // Full bytecode parser on garbage must return None.
    safe_call(
        "lua-bytecode-garbage",
        || unlace_loader::parse_lua_bytecode(b"\x1bLua\x53\x00\x19\x93\x0d\x0a\x1a\x0a"),
        Option::is_some,
    );
}

#[cfg(feature = "format-dotnet")]
#[test]
fn clr_dotnet_parsers_handle_malformed_inputs() {
    // detect_clr is a windowed scan: false on empty + on PE-like noise.
    assert!(!detect_clr(&[]));
    assert!(!detect_clr(&[0u8; 256]));

    // Cor20 header at offset 0 of an empty buffer.
    assert!(parse_cor20_header(&[]).is_none());

    // CLR metadata header with offset past end.
    assert!(parse_clr_header(&[0u8; 8], 64).is_none());

    // Correct BSJB magic but version-length runs off the end.
    let mut buf = vec![0u8; 16];
    buf[0..4].copy_from_slice(&unlace_loader::CLR_MAGIC.to_le_bytes());
    buf[12..16].copy_from_slice(&u32::MAX.to_le_bytes());
    assert!(parse_clr_header(&buf, 0).is_none());
}
