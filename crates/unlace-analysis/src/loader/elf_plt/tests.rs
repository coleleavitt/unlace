//! Synthetic per-architecture decoder tests.  Each builds a `.plt`-shaped
//! byte buffer (a dummy PLT0 header + one real import veneer whose bytes were
//! emitted by `clang --target=<arch> -c`), inserts the expected GOT slot —
//! computed *independently* from the assembled operands — into the name map,
//! and asserts the decoder recovers the planted name at the veneer's entry
//! address.  The x86 paths are covered end-to-end by the real-binary fixtures
//! in `loadimage_object`'s tests.
use super::*;

#[test]
fn aarch64_plt_decode() {
    // clang bytes: `adrp x16,0x3000; ldr x17,[x16,#0xff8]; add x16,x16,#0xff8; br x17`.
    let mut data: Vec<u8> = vec![0u8; 32]; // dummy PLT0 header
    data.extend_from_slice(&0xf0000010u32.to_le_bytes()); // adrp x16, +0x3000
    data.extend_from_slice(&0xf947fe11u32.to_le_bytes()); // ldr  x17,[x16,#0xff8]
    data.extend_from_slice(&0x913fe210u32.to_le_bytes()); // add  x16,x16,#0xff8
    data.extend_from_slice(&0xd61f0220u32.to_le_bytes()); // br   x17

    let vma = 0x10000u64;
    let adrp_addr = vma + 32;
    // got = (adrp_addr & !0xFFF) + page(0x3000) + ldr_off(0xff8)
    let expected_got = (adrp_addr & !0xFFF) + 0x3000 + 0xff8;
    assert_eq!(expected_got, 0x13ff8);

    let mut map: HashMap<u64, Vec<u8>> = HashMap::new();
    map.insert(expected_got, b"read".to_vec());
    let mut out: Vec<PltSym> = Vec::new();
    let mut named: HashSet<u64> = HashSet::new();
    decode_aarch64(vma, &data, &map, &mut out, &mut named);

    assert_eq!(out.len(), 1);
    assert_eq!(out[0].addr, adrp_addr);
    assert_eq!(out[0].name, b"read".to_vec());
}

#[test]
fn arm_plt_decode() {
    // clang bytes: `add ip,pc,#0x600000; add ip,ip,#0x3000; ldr pc,[ip,#0xff8]!`.
    let veneer: [u8; 12] = [
        0x06, 0xc6, 0x8f, 0xe2, // add ip, pc, #0x600000
        0x03, 0xca, 0x8c, 0xe2, // add ip, ip, #0x3000
        0xf8, 0xff, 0xbc, 0xe5, // ldr pc, [ip, #0xff8]!
    ];
    let mut data = vec![0u8; 20]; // dummy PLT0 header
    data.extend_from_slice(&veneer);

    let vma = 0x10000u64;
    let entry = vma + 20;
    let (a, b, c): (u64, u64, u64) = (0x600000, 0x3000, 0xff8);
    let expected_got = (entry + 8) + a + b + c; // pipeline +8

    let mut map: HashMap<u64, Vec<u8>> = HashMap::new();
    map.insert(expected_got, b"read".to_vec());
    let mut out: Vec<PltSym> = Vec::new();
    let mut named: HashSet<u64> = HashSet::new();
    decode_arm(vma, &data, &map, &mut out, &mut named);

    assert_eq!(out.len(), 1);
    assert_eq!(out[0].addr, entry);
    assert_eq!(out[0].name, b"read".to_vec());
}

#[test]
fn ppc64_plt_decode() {
    // Real bytes from a `powerpc64le-linux-gnu-gcc -O0` ELFv2 stub (the
    // `puts@plt` call stub at 0x680 of fixtures/plt_ppc64le):
    //   std   r2,24(r1)        f8 41 00 18
    //   addis r12,r2,-1        3d 82 ff ff
    //   ld    r12,32752(r12)   e9 8c 7f f0
    //   mtctr r12              7d 89 03 a6
    //   bctr                   4e 80 04 20
    // File is little-endian (ELFv2 LE), so each word is stored byte-reversed.
    let mut stub: Vec<u8> = Vec::new();
    for w in [
        0xf8410018u32,
        0x3d82ffff,
        0xe98c7ff0,
        0x7d8903a6,
        0x4e800420,
    ] {
        stub.extend_from_slice(&w.to_le_bytes());
    }
    let mut data = vec![0u8; 16]; // a little leading `.text` padding
    data.extend_from_slice(&stub);

    let vma = 0x620u64; // `.text` base from the real fixture
    let stub_addr = vma + 16;
    // TOC base = .got(0x1ff00) + 0x8000 = 0x27f00; slot = TOC + (-1<<16) + 32752.
    let toc_base = 0x27f00u64;
    let expected_slot = toc_base.wrapping_add(((-1i64) << 16) as u64) + 32752;
    assert_eq!(expected_slot, 0x1fef0); // matches the R_PPC64_JMP_SLOT offset

    let mut map: HashMap<u64, Vec<u8>> = HashMap::new();
    map.insert(expected_slot, b"puts".to_vec());
    let mut out: Vec<PltSym> = Vec::new();
    let mut named: HashSet<u64> = HashSet::new();
    decode_ppc64_stubs(
        vma, &data, /*little*/ true, toc_base, &map, &mut out, &mut named,
    );

    assert_eq!(out.len(), 1);
    assert_eq!(out[0].addr, stub_addr);
    assert_eq!(out[0].name, b"puts".to_vec());

    // Big-endian word layout decodes identically (the stub shape is shared by
    // ELFv2 BE); a positive @ha exercises the other sign of the page offset.
    let mut data_be = vec![0u8; 0];
    for w in [
        0xf8410018u32,
        0x3d820002,
        0xe98c0010,
        0x7d8903a6,
        0x4e800420,
    ] {
        data_be.extend_from_slice(&w.to_be_bytes());
    }
    let toc_be = 0x40000u64;
    let expected_be = toc_be + (2u64 << 16) + 0x10;
    let mut map_be: HashMap<u64, Vec<u8>> = HashMap::new();
    map_be.insert(expected_be, b"printf".to_vec());
    let mut out_be: Vec<PltSym> = Vec::new();
    let mut named_be: HashSet<u64> = HashSet::new();
    decode_ppc64_stubs(
        0x1000,
        &data_be,
        /*little*/ false,
        toc_be,
        &map_be,
        &mut out_be,
        &mut named_be,
    );
    assert_eq!(out_be.len(), 1);
    assert_eq!(out_be[0].addr, 0x1000);
    assert_eq!(out_be[0].name, b"printf".to_vec());
}

#[test]
fn riscv_plt_decode() {
    let vma = 0x10000u64;

    // Case A: positive lo12 — `auipc t3,0x3; ld t3,16(t3); jalr t1,t3; nop`.
    let mut data = vec![0u8; 32];
    data.extend_from_slice(&0x00003e17u32.to_le_bytes()); // auipc t3, 0x3
    data.extend_from_slice(&0x010e3e03u32.to_le_bytes()); // ld t3, 16(t3)
    data.extend_from_slice(&0x000e0367u32.to_le_bytes()); // jalr t1, t3
    data.extend_from_slice(&0x0001u16.to_le_bytes()); // c.nop
    let auipc_addr = vma + 32;
    let expected_got = auipc_addr + (0x3u64 << 12) + 0x10;

    let mut map: HashMap<u64, Vec<u8>> = HashMap::new();
    map.insert(expected_got, b"read".to_vec());
    let mut out: Vec<PltSym> = Vec::new();
    let mut named: HashSet<u64> = HashSet::new();
    decode_riscv(vma, &data, &map, &mut out, &mut named);
    assert_eq!(out.len(), 1);
    assert_eq!(out[0].addr, auipc_addr);
    assert_eq!(out[0].name, b"read".to_vec());

    // Case B: negative lo12 — `ld t3,-16(t3)` exercises sign extension.
    let mut data2 = vec![0u8; 32];
    data2.extend_from_slice(&0x00003e17u32.to_le_bytes()); // auipc t3, 0x3
    data2.extend_from_slice(&0xff0e3e03u32.to_le_bytes()); // ld t3, -16(t3)
    data2.extend_from_slice(&0x000e0367u32.to_le_bytes()); // jalr t1, t3
    data2.extend_from_slice(&0x0001u16.to_le_bytes()); // c.nop
    let expected_got2 = auipc_addr + (0x3u64 << 12) - 0x10;

    let mut map2: HashMap<u64, Vec<u8>> = HashMap::new();
    map2.insert(expected_got2, b"write".to_vec());
    let mut out2: Vec<PltSym> = Vec::new();
    let mut named2: HashSet<u64> = HashSet::new();
    decode_riscv(vma, &data2, &map2, &mut out2, &mut named2);
    assert_eq!(out2.len(), 1);
    assert_eq!(out2[0].addr, auipc_addr);
    assert_eq!(out2[0].name, b"write".to_vec());
}

#[test]
fn i386_pie_plt_decode() {
    // Real `i386/nl` PIE stub shape: a PLT0 header (`push 0x4(%ebx);
    // jmp *0x8(%ebx)`) then 16-byte entries headed by `jmp *disp(%ebx)`
    // (`FF A3 <disp32>`).  GOT base = `_GLOBAL_OFFSET_TABLE_` = 0x9edc;
    // `_exit@plt` `jmp *0x14(%ebx)` → slot 0x9edc + 0x14 = 0x9ef0 (the
    // R_386_JUMP_SLOT r_offset for `_exit`, verified on the fixture).
    let base = 0x9edcu64;
    let vma = 0xe10u64;
    // PLT0: push 0x4(%ebx) = FF B3 04000000 ; jmp *0x8(%ebx) = FF A3 08000000.
    let mut data: Vec<u8> = vec![
        0xFF, 0xB3, 0x04, 0x00, 0x00, 0x00, 0xFF, 0xA3, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00,
    ];
    // entry @ vma+0x30 (0xe40): `jmp *0x14(%ebx)` then push/jmp padding.
    let entry_off = 0x30usize;
    data.resize(entry_off, 0x00);
    data.extend_from_slice(&[0xFF, 0xA3, 0x14, 0x00, 0x00, 0x00]); // jmp *0x14(%ebx)
    data.extend_from_slice(&[0x68, 0x10, 0x00, 0x00, 0x00]); // push $0x10
    data.extend_from_slice(&[0xE9, 0xc0, 0xff, 0xff, 0xff]); // jmp .plt

    let entry = vma + entry_off as u64; // 0xe40
    let slot = base + 0x14; // 0x9ef0

    let mut map: HashMap<u64, Vec<u8>> = HashMap::new();
    map.insert(slot, b"_exit".to_vec());
    // The PLT0 resolver slot (base+8 = 0x9ee4) is NOT a symbol-bearing reloc,
    // so it must fall out of the map (self-correcting cross-check).

    // With the GOT base (option on): the stub at its entry is named `_exit`.
    let mut out: Vec<PltSym> = Vec::new();
    let mut named: HashSet<u64> = HashSet::new();
    decode_i386(vma, &data, Some(base), &map, &mut out, &mut named);
    assert_eq!(out.len(), 1, "exactly the symbol-bearing PIE stub is named");
    assert_eq!(out[0].addr, entry);
    assert_eq!(out[0].name, b"_exit".to_vec());

    // Option OFF (i386_got_base = None): the `FF A3` form is skipped entirely
    // (byte-identical to the pre-fix behavior — no PIE stub is named).
    let mut out_off: Vec<PltSym> = Vec::new();
    let mut named_off: HashSet<u64> = HashSet::new();
    decode_i386(vma, &data, None, &map, &mut out_off, &mut named_off);
    assert!(out_off.is_empty(), "FF A3 skipped when GOT base is absent");

    // The non-PIC `FF 25 <abs32>` arm is unaffected by the new param: an
    // absolute stub still resolves with either `i386_got_base` value.
    let abs_slot = 0x404000u64;
    let mut abs = abs_slot.to_le_bytes()[..4].to_vec();
    let mut data25 = vec![0xFF, 0x25];
    data25.append(&mut abs);
    let mut map25: HashMap<u64, Vec<u8>> = HashMap::new();
    map25.insert(abs_slot, b"puts".to_vec());
    let mut out25: Vec<PltSym> = Vec::new();
    let mut named25: HashSet<u64> = HashSet::new();
    decode_i386(0x500, &data25, None, &map25, &mut out25, &mut named25);
    assert_eq!(out25.len(), 1);
    assert_eq!(out25[0].name, b"puts".to_vec());
}

#[test]
fn x86_64_ifunc_stub_naming() {
    // A CET `.plt.sec` IFUNC stub: `endbr64` (F3 0F 1E FA) then a `bnd jmp
    // *disp(%rip)` (F2 FF 25 <disp32>).  vma = 0x1000, so the FF 25 insn is at
    // 0x1004, rip = 0x100a, and disp is chosen so the GOT slot = 0x2000.
    let vma = 0x1000u64;
    let got = 0x2000u64;
    // Layout: endbr64 (4) + `bnd` prefix F2 (1), so the `FF 25` is at offset 5;
    // rip = vma + 5 + 6.  Pick disp so the GOT slot = 0x2000.
    let disp = (got as i64 - (vma as i64 + 5 + 6)) as i32;
    let mut data: Vec<u8> = vec![0xF3, 0x0F, 0x1E, 0xFA, 0xF2, 0xFF, 0x25];
    data.extend_from_slice(&disp.to_le_bytes());

    // The GOT slot is an IRELATIVE ifunc slot resolving via 0x15c80; it carries
    // no symbol, so the symbol-keyed `named` map does not contain it.
    let mut ifunc: HashMap<u64, u64> = HashMap::new();
    ifunc.insert(got, 0x15c80);
    let named: HashMap<u64, Vec<u8>> = HashMap::new();

    let mut out: Vec<PltSym> = Vec::new();
    let mut named_got: HashSet<u64> = HashSet::new();
    decode_x86_64_ifunc_stubs(vma, &data, &ifunc, &named, &mut out, &mut named_got);
    assert_eq!(out.len(), 1, "the ifunc stub is named");
    // The recorded address backs up over the `endbr64` to the stub entry.
    assert_eq!(out[0].addr, vma);
    assert_eq!(out[0].name, b"ifunc_15c80".to_vec());

    // A GOT slot the symbol-keyed pass already named is NOT re-named as ifunc.
    let mut named2: HashMap<u64, Vec<u8>> = HashMap::new();
    named2.insert(got, b"already".to_vec());
    let mut out2: Vec<PltSym> = Vec::new();
    let mut named_got2: HashSet<u64> = HashSet::new();
    decode_x86_64_ifunc_stubs(vma, &data, &ifunc, &named2, &mut out2, &mut named_got2);
    assert!(out2.is_empty(), "an already-named slot is skipped");

    // A non-ifunc slot (not in the ifunc map) yields nothing.
    let empty: HashMap<u64, u64> = HashMap::new();
    let mut out3: Vec<PltSym> = Vec::new();
    let mut named_got3: HashSet<u64> = HashSet::new();
    decode_x86_64_ifunc_stubs(vma, &data, &empty, &named, &mut out3, &mut named_got3);
    assert!(out3.is_empty(), "no ifunc slot ⇒ no stub named");
}

#[test]
fn sparc_plt_decode() {
    // Real `plt_sparc64` bytes: a 4-slot (0x80-byte) reserved PLT0 header,
    // then 32-byte import veneers each headed by `sethi %hi(...),%g1` (BE
    // 0x03xxxxxx) + `b,a %xcc,<resolver>`.  On SPARC the JMP_SLOT relocation
    // offset IS the entry address, so the name map is keyed on the entry vma.
    let vma = 0x202100u64;
    let entry = |i: usize| vma + 0x80 + (i as u64) * 32;
    let veneer = |hi: u32, ba: u32| -> [u8; 32] {
        let mut e = [0u8; 32];
        e[0..4].copy_from_slice(&hi.to_be_bytes()); // sethi %hi(...),%g1
        e[4..8].copy_from_slice(&ba.to_be_bytes()); // b,a %xcc,<resolver>
        // remaining 6 words are `nop` (0x01000000); zeros are fine for decode.
        e
    };

    let mut data = vec![0u8; 0x80]; // reserved PLT0 header (4 slots)
    data.extend_from_slice(&veneer(0x03000080, 0x306fffe7)); // __libc_start_main@plt
    data.extend_from_slice(&veneer(0x030000a0, 0x306fffdf)); // printf@plt
    data.extend_from_slice(&veneer(0x030000c0, 0x306fffd7)); // puts@plt

    // Only printf/puts are symbol-bearing relocations; __libc_start_main is
    // present too but here we name just the two libc imports the e2e asserts.
    let mut map: HashMap<u64, Vec<u8>> = HashMap::new();
    map.insert(entry(1), b"printf".to_vec());
    map.insert(entry(2), b"puts".to_vec());

    let mut out: Vec<PltSym> = Vec::new();
    let mut named: HashSet<u64> = HashSet::new();
    decode_sparc(vma, &data, 32, &map, &mut out, &mut named);

    // The PLT0 header and the unmapped entry(0) fall out; printf+puts named
    // at their own entry addresses (stub == reloc offset).
    assert_eq!(out.len(), 2);
    let mut got: Vec<(u64, Vec<u8>)> = out.iter().map(|p| (p.addr, p.name.clone())).collect();
    got.sort();
    assert_eq!(
        got,
        vec![(entry(1), b"printf".to_vec()), (entry(2), b"puts".to_vec())]
    );
}

#[test]
fn sparc32_plt_decode_ignores_window_phase() {
    // A sectionless PT_LOAD window starts with its segment, 164 bytes before
    // `.plt` here, so the 12-byte entries do not sit at multiples of 12.
    let (vma, plt) = (0x2ff60u64, 0x30004u64);
    let mut data = vec![0u8; (plt - vma) as usize + 48];
    for (i, hi) in [0x03000030u32, 0x0300003c].into_iter().enumerate() {
        data.extend_from_slice(&hi.to_be_bytes());
        data.extend_from_slice(&(0x30bffff3 - 3 * i as u32).to_be_bytes());
        data.extend_from_slice(&0x01000000u32.to_be_bytes());
    }
    let map: HashMap<u64, Vec<u8>> =
        [(plt + 48, b"puts".to_vec()), (plt + 60, b"printf".to_vec())].into();
    let mut out: Vec<PltSym> = Vec::new();
    decode_sparc(vma, &data, 12, &map, &mut out, &mut HashSet::new());
    let got: Vec<(u64, Vec<u8>)> = out.iter().map(|p| (p.addr, p.name.clone())).collect();
    assert_eq!(
        got,
        vec![(plt + 48, b"puts".to_vec()), (plt + 60, b"printf".to_vec())]
    );
}
