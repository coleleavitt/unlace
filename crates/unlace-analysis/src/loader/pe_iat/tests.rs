//! Synthetic decoder/ordinal tests mirroring `elf_plt.rs`'s per-arch tests.
//! The IAT *walk* itself is covered end-to-end by the real-PE console gate
//! (`verify_pe_imports`); here we unit-test the two pieces of arithmetic that
//! are awkward to reach through a linked binary: the `FF 25` thunk decode
//! (both widths) and the ordinal-name synthesis.
use super::*;
use std::collections::HashMap;

/// x64 `FF 25 <disp32>` (`jmp [rip+disp]`) resolves to `rip+disp` where
/// `rip` is the byte after the 6-byte instruction; the thunk entry is named.
#[test]
fn ff25_x64_thunk_decode() {
    // A puts veneer like MinGW's `0x140007240: ff 25 f6 60 00 00`
    // (`jmp [rip+0x60f6]` # 0x14000d33c).
    let vma = 0x140007240u64;
    let disp: i32 = 0x60f6;
    let mut data = vec![0xFFu8, 0x25];
    data.extend_from_slice(&disp.to_le_bytes());
    data.extend_from_slice(&[0x90, 0x90]); // trailing nops

    // slot = (vma + 6) + 0x60f6
    let slot = vma + 6 + disp as u64;
    assert_eq!(slot, 0x14000d33c);

    let mut map: HashMap<u64, Vec<u8>> = HashMap::new();
    map.insert(slot, b"puts".to_vec());
    let mut out: Vec<ImportSym> = Vec::new();
    decode_ff25(vma, &data, /*is_64*/ true, &map, &mut out, None);

    assert_eq!(out.len(), 1);
    assert_eq!(out[0].addr, vma); // the thunk entry (the call target)
    assert_eq!(out[0].name, b"puts".to_vec());
}

/// x86 `FF 25 <abs32>` (`jmp [abs32]`) resolves to the absolute `disp32` IAT
/// slot (no RIP-relative offset).
#[test]
fn ff25_x86_thunk_decode() {
    let vma = 0x401050u64;
    let slot: u32 = 0x40a004;
    let mut data = vec![0xFFu8, 0x25];
    data.extend_from_slice(&slot.to_le_bytes());

    let mut map: HashMap<u64, Vec<u8>> = HashMap::new();
    map.insert(slot as u64, b"printf".to_vec());
    let mut out: Vec<ImportSym> = Vec::new();
    decode_ff25(vma, &data, /*is_64*/ false, &map, &mut out, None);

    assert_eq!(out.len(), 1);
    assert_eq!(out[0].addr, vma);
    assert_eq!(out[0].name, b"printf".to_vec());
}

/// A `FF 25` whose target slot is NOT a known import is left alone (no
/// spurious name) — the same self-correcting cross-check the ELF decoder uses.
#[test]
fn ff25_unknown_slot_is_ignored() {
    let vma = 0x140007240u64;
    let mut data = vec![0xFFu8, 0x25];
    data.extend_from_slice(&0x10i32.to_le_bytes());
    let map: HashMap<u64, Vec<u8>> = HashMap::new(); // empty: nothing known
    let mut out: Vec<ImportSym> = Vec::new();
    decode_ff25(vma, &data, true, &map, &mut out, None);
    assert!(out.is_empty());
}

fn rel32(op: &[u8], at: u64, target: u64) -> Vec<u8> {
    let mut b = op.to_vec();
    let end = at + op.len() as u64 + 4;
    b.extend_from_slice(&(target.wrapping_sub(end) as i32).to_le_bytes());
    b
}

fn thunk_addrs(code: &[(u64, &[u8])], is_64: bool, map: &HashMap<u64, Vec<u8>>) -> Vec<u64> {
    let mut out: Vec<ImportSym> = Vec::new();
    decode_thunks(code, code, &[], is_64, map, &mut out);
    out.iter().map(|s| s.addr).collect()
}

/// A REX.W tail jump `48 FF 25` (`lea rcx,[list]; jmp [slot]`) next to a bare
/// linker thunk through the same slot: only the bare thunk is named.
#[test]
fn rex_tail_jump_is_not_a_thunk() {
    let vma = 0x140001000u64;
    let slot = 0x140002050u64;
    let mut data = vec![0x48u8, 0x8D, 0x0D, 0, 0, 0, 0];
    let tail = data.len() + 1;
    data.push(0x48);
    data.extend(rel32(&[0xFF, 0x25], vma + tail as u64, slot));
    data.extend_from_slice(&[0xCC, 0xCC]);
    let thunk = data.len();
    data.extend(rel32(&[0xFF, 0x25], vma + thunk as u64, slot));
    let map = HashMap::from([(slot, b"InitializeSListHead".to_vec())]);

    let code = [(vma, &data[..])];
    assert_eq!(thunk_addrs(&code, true, &map), vec![vma + thunk as u64]);
}

/// A genuine thunk right after a function ending in `jmp qword ptr [rax+0x48]`
/// (`48 FF 60 48`) is preceded by a REX-valued byte. It keeps its name while a
/// call, a jump or a RIP-relative `lea` anywhere in the code targets it; only a
/// thunk nothing references is dropped.
#[test]
fn called_thunk_after_a_rex_valued_byte_keeps_its_name() {
    let vma = 0x140001000u64;
    let slot = 0x140003000u64;
    let thunk = vma + 4;
    let mut text = vec![0x48u8, 0xFF, 0x60, 0x48];
    text.extend(rel32(&[0xFF, 0x25], thunk, slot));
    let map = HashMap::from([(slot, b"ExitProcess".to_vec())]);
    let caller_at = 0x140005000u64;

    for op in [&[0xE8u8][..], &[0xE9], &[0x0F, 0x85], &[0x48, 0x8D, 0x0D]] {
        let caller = rel32(op, caller_at, thunk);
        let code = [(vma, &text[..]), (caller_at, &caller[..])];
        assert_eq!(
            thunk_addrs(&code, true, &map),
            vec![thunk],
            "referenced by {op:x?}"
        );
    }
    let unrelated = rel32(&[0xE8], caller_at, thunk + 1);
    let code = [(vma, &text[..]), (caller_at, &unrelated[..])];
    assert!(thunk_addrs(&code, true, &map).is_empty());
}

/// PE32 never rejects: `40`-`4F` are `inc`/`dec` in 32-bit code.
#[test]
fn x86_thunk_after_inc_dec_byte_is_kept() {
    let vma = 0x401000u64;
    let slot = 0x403000u64;
    let mut data = vec![0x48u8, 0xFF, 0x25];
    data.extend_from_slice(&(slot as u32).to_le_bytes());
    let map = HashMap::from([(slot, b"printf".to_vec())]);
    assert_eq!(thunk_addrs(&[(vma, &data[..])], false, &map), vec![vma + 1]);
}

/// Ordinal-name synthesis drops the DLL extension: `ws2_32.dll` + 115 →
/// `ws2_32_Ordinal_115`.
#[test]
fn ordinal_name_synthesis() {
    assert_eq!(
        synth_ordinal_name(b"ws2_32.dll", 115),
        b"ws2_32_Ordinal_115".to_vec()
    );
    assert_eq!(
        synth_ordinal_name(b"KERNEL32.dll", 7),
        b"KERNEL32_Ordinal_7".to_vec()
    );
    // No extension: the whole string is the stem.
    assert_eq!(synth_ordinal_name(b"mylib", 3), b"mylib_Ordinal_3".to_vec());
}

/// A delay-loaded import names its delay IAT slot, which the import
/// binding then treats like a regular IAT slot, and the image's load thunk
/// the slot holds until the first call (`__imp_load_<name>`).
#[test]
fn delay_load_imports_name_slots_and_load_thunks() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/pe_guardcf_x86_64.exe"
    );
    let bytes = std::fs::read(path).expect("read fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse PE");
    let syms: Vec<(u64, String)> = resolve_pe_imports(&file, &bytes)
        .into_iter()
        .map(|s| (s.addr, String::from_utf8(s.name).unwrap()))
        .collect();
    for (addr, name) in [
        (0x140003020, "dl_add"),
        (0x140003028, "dl_mul"),
        (0x140001156, "__imp_load_dl_add"),
        (0x140001162, "__imp_load_dl_mul"),
    ] {
        assert!(
            syms.contains(&(addr, name.to_string())),
            "{name}@{addr:#x} missing from {syms:#x?}"
        );
    }
    let slots = resolve_pe_import_slots(&bytes);
    for slot in [0x140003020, 0x140003028] {
        assert!(
            slots.contains(&(slot, slot + 8)),
            "{slot:#x} missing from {slots:#x?}"
        );
    }
}

#[test]
fn c_runtime_names_come_from_crt_dlls_only() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/calleepopframe_pe_i386.exe"
    );
    let bytes = std::fs::read(path).expect("read fixture");
    assert_eq!(c_runtime_import_names(&bytes), vec!["memset".to_string()]);
    let crt = [
        "msvcrt.dll",
        "msvcr120.dll",
        "ucrtbase.dll",
        "api-ms-win-crt-string-l1-1-0.dll",
        "vcruntime140.dll",
        "crtdll.dll",
    ];
    for dll in crt {
        assert!(is_c_runtime_dll(dll.as_bytes()), "{dll}");
    }
    for dll in [
        "ws2_32.dll",
        "advapi32.dll",
        "kernel32.dll",
        "msvcp140.dll",
        "ntdll.dll",
    ] {
        assert!(!is_c_runtime_dll(dll.as_bytes()), "{dll}");
    }
}
