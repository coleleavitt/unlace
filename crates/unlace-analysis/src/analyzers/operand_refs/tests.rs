use super::*;

#[test]
fn value_filter_matches_ghidra() {
    // < 4096 is "could be a number" — rejected.
    assert!(!looks_like_address(0));
    assert!(!looks_like_address(1024));
    assert!(!looks_like_address(4095));
    // The explicit byte-mask values are rejected even though > 4096.
    assert!(!looks_like_address(0xffff));
    assert!(!looks_like_address(0xff00));
    assert!(!looks_like_address(0xffffffff));
    assert!(!looks_like_address(0xff0000));
    // A plausible .rodata address is accepted.
    assert!(looks_like_address(0x402010));
    assert!(looks_like_address(0x4096));
}

#[test]
fn readonly_partition_classifies_sections() {
    // .rodata: ALLOC, not WRITE, not EXEC -> readonly data.
    let ro = SecRange {
        lo: 0x402000,
        hi: 0x403000,
        elf_flags: SHF_ALLOC,
        kind: SectionKind::ReadOnlyData,
        is_got_or_plt: false,
        is_loader_table: false,
    };
    assert!(ro.is_readonly_data());
    // .data: ALLOC + WRITE -> not readonly.
    let rw = SecRange {
        lo: 0x404000,
        hi: 0x405000,
        elf_flags: SHF_ALLOC | SHF_WRITE,
        kind: SectionKind::Data,
        is_got_or_plt: false,
        is_loader_table: false,
    };
    assert!(!rw.is_readonly_data());
    // .text: ALLOC + EXEC -> not readonly data.
    let code = SecRange {
        lo: 0x401000,
        hi: 0x402000,
        elf_flags: SHF_ALLOC | SHF_EXECINSTR,
        kind: SectionKind::Text,
        is_got_or_plt: false,
        is_loader_table: false,
    };
    assert!(!code.is_readonly_data());
    // .dynsym: ALLOC, not WRITE, not EXEC -- the flags of `.rodata`, but a
    // loader table. In a PIE it covers 0x1000, so a buffer size lands in it.
    let dynsym = SecRange {
        lo: 0x400,
        hi: 0x10d8,
        elf_flags: SHF_ALLOC,
        kind: SectionKind::Metadata,
        is_got_or_plt: false,
        is_loader_table: true,
    };
    assert!(!dynsym.is_readonly_data());
    // .gnu.hash has no SectionKind of its own.
    let gnuhash = SecRange {
        lo: 0x3b0,
        hi: 0x400,
        elf_flags: SHF_ALLOC,
        kind: SectionKind::Elf(0x6fff_fff6),
        is_got_or_plt: false,
        is_loader_table: true,
    };
    assert!(!gnuhash.is_readonly_data());
    // .interp is SHT_PROGBITS with the flags of `.rodata`; its name marks it.
    let interp = SecRange {
        lo: 0x318,
        hi: 0x334,
        elf_flags: SHF_ALLOC,
        kind: SectionKind::ReadOnlyData,
        is_got_or_plt: false,
        is_loader_table: crate::loader::format::elf::is_loader_table(
            ".interp",
            SectionKind::ReadOnlyData,
        ),
    };
    assert!(!interp.is_readonly_data());
    // Non-ELF: the loader-table test lives inside the ELF-flags branch, and a
    // Mach-O/PE range (elf_flags == 0) answers on its SectionKind alone, as it
    // did before that test existed.
    let macho_meta = SecRange {
        lo: 0x1000,
        hi: 0x2000,
        elf_flags: 0,
        kind: SectionKind::Metadata,
        is_got_or_plt: false,
        is_loader_table: false,
    };
    assert!(!macho_meta.is_readonly_data());
    let macho_ro = SecRange {
        lo: 0x2000,
        hi: 0x3000,
        elf_flags: 0,
        kind: SectionKind::ReadOnlyData,
        is_got_or_plt: false,
        is_loader_table: false,
    };
    assert!(macho_ro.is_readonly_data());
}

#[test]
fn got_plt_exclusion_is_recognized() {
    // The ElfScalarOperandAnalyzer exclusion: a `.got`/`.plt` section is flagged
    // so a scalar landing there is rejected (those targets are `elf_plt`-named).
    let names_excluded = [".got", ".got.plt", ".plt", ".plt.sec", ".plt.got"];
    for n in names_excluded {
        assert!(
            n.starts_with(".got") || n.starts_with(".plt"),
            "{n} must match the .got/.plt exclusion predicate"
        );
    }
    // .rodata / .data are NOT excluded.
    for n in [".rodata", ".data", ".text", ".bss"] {
        assert!(
            !(n.starts_with(".got") || n.starts_with(".plt")),
            "{n} must not be excluded"
        );
    }
}

#[test]
fn indexed_wide_loads_mark_their_base() {
    type Op = (OpCode, Option<(Operand, u32)>, Vec<Operand>);
    let bases = |ops: Vec<Op>| {
        let mut arrays = IndexedBases::default();
        for (opc, out, ins) in ops {
            arrays.step(opc, out, &ins[..ins.len().min(2)]);
        }
        arrays.bases
    };
    let unique = |off: u64| Operand::Loc(3, off);
    let at = Operand::Const;
    let space = at(0x1234_5678);
    let rax = Operand::Loc(2, 0);
    let rdi = Operand::Loc(2, 0x38);
    // jmp qword ptr [0x4351f0 + RAX*8]
    let table = vec![
        (
            OpCode::CPUI_INT_MULT,
            Some((unique(0x100), 8)),
            vec![rax, at(8)],
        ),
        (
            OpCode::CPUI_INT_ADD,
            Some((unique(0x180), 8)),
            vec![at(0x4351f0), unique(0x100)],
        ),
        (
            OpCode::CPUI_LOAD,
            Some((unique(0x200), 8)),
            vec![space, unique(0x180)],
        ),
        (OpCode::CPUI_BRANCHIND, None, vec![unique(0x200)]),
    ];
    assert_eq!(bases(table), vec![0x4351f0]);
    // movzx eax, word ptr [RDI + RDI*1 + 0x435248]
    let map = vec![
        (
            OpCode::CPUI_INT_MULT,
            Some((unique(0x100), 8)),
            vec![rdi, at(1)],
        ),
        (
            OpCode::CPUI_INT_ADD,
            Some((unique(0x180), 8)),
            vec![rdi, unique(0x100)],
        ),
        (
            OpCode::CPUI_INT_ADD,
            Some((unique(0x200), 8)),
            vec![unique(0x180), at(0x435248)],
        ),
        (
            OpCode::CPUI_LOAD,
            Some((unique(0x280), 2)),
            vec![space, unique(0x200)],
        ),
        (OpCode::CPUI_INT_ZEXT, Some((rax, 4)), vec![unique(0x280)]),
    ];
    assert_eq!(bases(map), vec![0x435248]);
    // movzx eax, byte ptr [RDI + 0x405048]: a byte array may be a string.
    let bytes = vec![
        (
            OpCode::CPUI_INT_ADD,
            Some((unique(0x100), 8)),
            vec![rdi, at(0x405048)],
        ),
        (
            OpCode::CPUI_LOAD,
            Some((unique(0x180), 1)),
            vec![space, unique(0x100)],
        ),
    ];
    assert!(bases(bytes).is_empty());
    // mov rax, qword ptr [0x402000]: no index.
    let absolute = vec![(OpCode::CPUI_LOAD, Some((rax, 8)), vec![space, at(0x402000)])];
    assert!(bases(absolute).is_empty());
    // lea rdi, [RAX + 0x402000]: no load.
    let lea = vec![(
        OpCode::CPUI_INT_ADD,
        Some((rdi, 8)),
        vec![rax, at(0x402000)],
    )];
    assert!(bases(lea).is_empty());
    // A location overwritten before the load no longer carries the base.
    let killed = vec![
        (
            OpCode::CPUI_INT_ADD,
            Some((unique(0x100), 8)),
            vec![rdi, at(0x405048)],
        ),
        (OpCode::CPUI_COPY, Some((unique(0x100), 8)), vec![rax]),
        (
            OpCode::CPUI_LOAD,
            Some((unique(0x180), 8)),
            vec![space, unique(0x100)],
        ),
    ];
    assert!(bases(killed).is_empty());
}

#[test]
fn computed_indexes_mark_a_table() {
    type TestInsn = (OpCode, Option<(Operand, u32)>, Vec<Operand>);
    let tables = |insns: Vec<Vec<TestInsn>>| {
        let mut uses = TableUses::default();
        for insn in insns {
            let steps: Vec<Step> = insn
                .into_iter()
                .map(|(opc, out, ins)| {
                    let mut two = [Operand::Const(0); 2];
                    for (slot, v) in two.iter_mut().zip(&ins) {
                        *slot = *v;
                    }
                    (opc, out, two, ins.len().min(2))
                })
                .collect();
            uses.instruction(Some(&steps));
        }
        uses.bases
    };
    let unique = |off: u64| Operand::Loc(3, off);
    let at = Operand::Const;
    let space = at(0x1234_5678);
    let (rax, rcx, rdi) = (
        Operand::Loc(2, 0),
        Operand::Loc(2, 8),
        Operand::Loc(2, 0x38),
    );
    let lea = |reg, addr| vec![(OpCode::CPUI_COPY, Some((reg, 8)), vec![at(addr)])];
    // lea rcx,[rip+table]; mov eax,[rcx+rax*4]
    let load = vec![
        (
            OpCode::CPUI_INT_MULT,
            Some((unique(0x100), 8)),
            vec![rax, at(4)],
        ),
        (
            OpCode::CPUI_INT_ADD,
            Some((unique(0x180), 8)),
            vec![rcx, unique(0x100)],
        ),
        (
            OpCode::CPUI_LOAD,
            Some((rax, 4)),
            vec![space, unique(0x180)],
        ),
    ];
    assert_eq!(tables(vec![lea(rcx, 0x20a0), load.clone()]), [0x20a0]);
    // lea rdx,[rip+table]; mov edx,[rcx+rdx*1]: the address as the index.
    let scaled = vec![
        (
            OpCode::CPUI_INT_MULT,
            Some((unique(0x100), 8)),
            vec![rcx, at(1)],
        ),
        (
            OpCode::CPUI_INT_ADD,
            Some((unique(0x180), 8)),
            vec![rax, unique(0x100)],
        ),
        (
            OpCode::CPUI_LOAD,
            Some((rax, 4)),
            vec![space, unique(0x180)],
        ),
    ];
    assert_eq!(tables(vec![lea(rcx, 0x3b7a8), scaled]), [0x3b7a8]);
    // lea rdi,[rip+rows]; add rdi,rax: a row of a table, passed on.
    let add = vec![(OpCode::CPUI_INT_ADD, Some((rdi, 8)), vec![rdi, rax])];
    assert_eq!(tables(vec![lea(rdi, 0x2060), add.clone()]), [0x2060]);
    // lea rdi,[rax+0x402100] in one instruction.
    assert_eq!(
        tables(vec![vec![(
            OpCode::CPUI_INT_ADD,
            Some((rdi, 8)),
            vec![rax, at(0x402100)]
        )]]),
        [0x402100]
    );
    // lea rdi,[rip+lit]; add rdi,4; call: a literal and its tail.
    let tail = vec![(OpCode::CPUI_INT_ADD, Some((rdi, 8)), vec![rdi, at(4)])];
    let call = vec![(OpCode::CPUI_CALL, None, vec![at(0x1130)])];
    assert!(tables(vec![lea(rdi, 0x20bc), tail, call.clone()]).is_empty());
    // A call or a conditional branch keeps the address; a jump, an
    // overwrite or a window of instructions forgets it.
    let cbranch = vec![(OpCode::CPUI_CBRANCH, None, vec![at(0x1200), unique(0x500)])];
    assert_eq!(
        tables(vec![lea(rcx, 0x20a0), call.clone(), cbranch, load.clone()]),
        [0x20a0]
    );
    let jump = vec![(OpCode::CPUI_BRANCH, None, vec![at(0x1130)])];
    assert!(tables(vec![lea(rdi, 0x20bc), jump, add.clone()]).is_empty());
    let other = vec![(OpCode::CPUI_COPY, Some((rcx, 8)), vec![rax])];
    assert!(tables(vec![lea(rcx, 0x20a0), other, load.clone()]).is_empty());
    let nop = vec![(OpCode::CPUI_COPY, Some((unique(0x400), 8)), vec![rax])];
    let within = |gap: usize| {
        let mut insns = vec![lea(rcx, 0x20a0)];
        insns.extend(std::iter::repeat_n(nop.clone(), gap));
        insns.push(load.clone());
        !tables(insns).is_empty()
    };
    assert!(within(usize::from(TABLE_WINDOW) - 2));
    assert!(!within(usize::from(TABLE_WINDOW) - 1));
}

/// `tbl` in `ptrslot_gcc_O1_x86_64` starts with `26 42 40 00 ..`, a run the
/// recognizer accepts, but it is the entry for 0x404226; a scalar that names
/// it plants nothing.
#[test]
fn a_pointer_table_target_is_not_planted() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/ptrslot_gcc_O1_x86_64"
    );
    let bytes = std::fs::read(path).expect("read ptrslot fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse ptrslot");
    assert_eq!(bytes_at(&file, 0x405020).and_then(string_len), Some(4));
    let out = emit_facts(
        &file,
        &[ScalarRef {
            from: 0x404280,
            to: 0x405020,
        }],
    );
    assert!(out.strings.is_empty() && out.readonly.is_empty());
}

/// The run at `addr` is planted unless something says it is an array: the
/// next element of a character-code array nothing points at.
fn heads_wide_array(bytes: &[u8], addr: u64, pointed_at: &[u64]) -> bool {
    wide_element_neighbour(bytes, addr).is_some_and(|n| !pointed_at.contains(&n))
}

#[test]
fn wide_element_arrays_are_not_one_character_strings() {
    let ints = b"A\0\0\0B\0\0\0C\0\0\0D\0\0\0";
    assert_eq!(wide_element_neighbour(ints, 0x402010), Some(0x402014));
    assert!(heads_wide_array(ints, 0x402010, &[0x402010]));
    assert!(!heads_wide_array(ints, 0x402010, &[0x402010, 0x402014]));
    assert_eq!(wide_element_neighbour(ints, 0x402012), None);
    assert_eq!(
        wide_element_neighbour(b"h\0\0\0e\0\0\0l\0\0\0", 0x2004),
        Some(0x2008)
    );
    assert_eq!(wide_element_neighbour(b"h\0\0\0\0\0\0\0", 0x2000), None);
    assert_eq!(wide_element_neighbour(b"h\0\0\0%s\n\0", 0x2000), None);
    assert_eq!(wide_element_neighbour(b"hi\0\0j\0\0\0", 0x2000), None);
    assert_eq!(wide_element_neighbour(b"h\0i\0\0\0", 0x2000), Some(0x2002));
    assert_eq!(wide_element_neighbour(b"h\0i\0j\0", 0x2000), Some(0x2002));
    assert_eq!(wide_element_neighbour(b"h\0i\0\0\0", 0x2001), None);
    assert_eq!(wide_element_neighbour(b"r\0w\0ab\0", 0x2000), None);
    assert_eq!(wide_element_neighbour(b"r\0w\0", 0x2000), None);
    assert!(!heads_wide_array(b"r\0w\0a\0", 0x2000, &[0x2002]));
}

/// The builds of `widecodes.c`: `codes` (`int {65, 66, 67, 68}`), `halves`
/// (`short {104, 105, 106, 0}`), `mixed` (`int {65, 1000}`), `L"hellow"`, and
/// the literals "x" and "y", laid out beside "w" and "a", which only the
/// pointer table `modes` reaches (gcc: `78 00 79 00 77 00 61 00`, clang:
/// `78 00 77 00 61 00`). Only the literals are planted, and `mixed` where no
/// symbol says what it is.
#[test]
fn character_code_arrays_are_not_planted() {
    let gcc = [0x402060, 0x402050, 0x402048, 0x402010, 0x402004, 0x402006];
    let clang = [0x2010, 0x2020, 0x2028, 0x203c, 0x2030, 0x2039];
    for (fixture, targets, want) in [
        (
            "widecodes_gcc_O1_x86_64",
            gcc,
            vec![(0x402004, 2), (0x402006, 2)],
        ),
        (
            "widecodes_gcc_O1_stripped_x86_64",
            gcc,
            vec![(0x402048, 2), (0x402004, 2), (0x402006, 2)],
        ),
        (
            "widecodes_clang_O2_x86_64",
            clang,
            vec![(0x2030, 2), (0x2039, 2)],
        ),
        (
            "widecodes_clang_O2_stripped_x86_64",
            clang,
            vec![(0x2028, 2), (0x2030, 2), (0x2039, 2)],
        ),
    ] {
        let path = format!("{}/tests/fixtures/{fixture}", env!("CARGO_MANIFEST_DIR"));
        let bytes = std::fs::read(path).expect("read widecodes fixture");
        let file = object::File::parse(bytes.as_slice()).expect("parse widecodes");
        let refs: Vec<ScalarRef> = targets
            .into_iter()
            .map(|to| ScalarRef { from: 0x401106, to })
            .collect();
        let out = emit_facts(&file, &refs);
        let planted: Vec<(u64, u32)> = out.strings.iter().map(|f| (f.addr, f.len)).collect();
        assert_eq!(planted, want, "{fixture}");
    }
}

/// `modes` holds "w", "a" and "ab": in gcc's non-PIE build as plain
/// pointers in `.rodata`, in clang's PIE as relocated slots of
/// `.data.rel.ro`. The first character of `L"hellow"` is held by no slot.
#[test]
fn pointers_the_image_holds() {
    for (fixture, held, not_held) in [
        (
            "widecodes_gcc_O1_stripped_x86_64",
            [0x402008, 0x40200a, 0x40200c],
            0x402010,
        ),
        (
            "widecodes_clang_O2_stripped_x86_64",
            [0x2032, 0x2034, 0x2036],
            0x203c,
        ),
    ] {
        let path = format!("{}/tests/fixtures/{fixture}", env!("CARGO_MANIFEST_DIR"));
        let bytes = std::fs::read(path).expect("read widecodes fixture");
        let file = object::File::parse(bytes.as_slice()).expect("parse widecodes");
        let mut wanted = held.to_vec();
        wanted.push(not_held);
        let mut found = held_pointers(&file, &wanted, true);
        found.sort_unstable();
        assert_eq!(found, held, "{fixture}");
    }
}

fn fixture_bytes(name: &str) -> Vec<u8> {
    let path = format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR"));
    std::fs::read(path).expect("read fixture")
}

/// clang's lookup table for `name` in `widecodes_switch.c` holds "a" to "f"
/// (0x2004..0x200c) as offsets from its start at 0x2010 (`f4 ff ff ff` is
/// "a"); "e" (0x200e), the default case's own `lea`, is not in it. No slot
/// holds "b", but the table does, so `usea`'s "a" keeps its literal though
/// "b" opens the `61 00 62 00 63 00` run beside it.
#[test]
fn a_relative_lookup_table_holds_its_strings() {
    let bytes = fixture_bytes("widecodes_switch_clang_O2_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse widecodes_switch");
    assert!(held_pointers(&file, &[0x2006], true).is_empty());
    assert_eq!(
        relative_string_table(&file, 0x2010, true),
        [0x2004, 0x2006, 0x2008, 0x200a, 0x200c]
    );
    assert!(relative_string_table(&file, 0x2004, true).is_empty());
    let refs: Vec<ScalarRef> = [0x2010, 0x2004, 0x200e]
        .into_iter()
        .map(|to| ScalarRef { from: 0x1148, to })
        .collect();
    let planted: Vec<(u64, u32)> = emit_facts(&file, &refs)
        .strings
        .iter()
        .map(|f| (f.addr, f.len))
        .collect();
    assert_eq!(planted, [(0x2004, 2), (0x200e, 2)]);
}

/// What is not a relative table: wide strings and code tables
/// (`widecodes.c`), a struct whose leading ints 8 and 12 would point at
/// "h" and "e" of its `L"hellow"` (`widecodes_rec.c`), and the end of a real
/// table (`widecodes_overread_*.c`, seven entries at 0x2014), past which
/// `L"Pest"`'s 'P' would read as an offset onto `L"word"[1]`. A wide run
/// never consults a table, so none of them keeps a one-character literal.
#[test]
fn character_codes_are_not_read_as_a_relative_table() {
    let codes = fixture_bytes("widecodes_gcc_O1_stripped_x86_64");
    let codes = object::File::parse(codes.as_slice()).expect("parse widecodes");
    for not_a_table in [0x402010, 0x402048, 0x402050, 0x402060] {
        assert!(
            relative_string_table(&codes, not_a_table, true).is_empty(),
            "{not_a_table:#x}"
        );
    }
    let rec = fixture_bytes("widecodes_rec_gcc_O2_x86_64");
    let rec = object::File::parse(rec.as_slice()).expect("parse widecodes_rec");
    assert!(relative_string_table(&rec, 0x2020, true).is_empty());
    let refs = [0x2020, 0x2028].map(|to| ScalarRef { from: 0x1164, to });
    assert!(emit_facts(&rec, &refs).strings.is_empty());
    let over = fixture_bytes("widecodes_overread_clang_O2_stripped_x86_64");
    let over = object::File::parse(over.as_slice()).expect("parse widecodes_overread");
    let entries: Vec<u64> = (0..7).map(|k| 0x2004 + 2 * k).collect();
    assert_eq!(relative_string_table(&over, 0x2014, true), entries);
    let refs = [0x2014, 0x2012, 0x2030, 0x2050, 0x2060].map(|to| ScalarRef { from: 0x1148, to });
    let planted: Vec<(u64, u32)> = emit_facts(&over, &refs)
        .strings
        .iter()
        .map(|f| (f.addr, f.len))
        .collect();
    assert_eq!(planted, [(0x2012, 2)]);
}

/// In `widecodes_tail.c` gcc ends the merged string block with "A" at
/// 0x402004 and starts `int t[3] = {66, 67, 68}` at 0x402008, so the bytes
/// read `41 00 00 00 42 00 00 00`. The symbol at the would-be second element
/// says it is an object of its own.
#[test]
fn an_object_at_the_neighbour_is_not_the_second_element() {
    let bytes = fixture_bytes("widecodes_tail_gcc_O2_x86_64");
    let file = object::File::parse(bytes.as_slice()).expect("parse widecodes_tail");
    let refs = [ScalarRef {
        from: 0x401126,
        to: 0x402004,
    }];
    let planted: Vec<(u64, u32)> = emit_facts(&file, &refs)
        .strings
        .iter()
        .map(|f| (f.addr, f.len))
        .collect();
    assert_eq!(planted, [(0x402004, 2)]);
}

#[test]
fn an_object_declared_at_the_run_bounds_it() {
    let objects = DataObjects::from_spans(vec![
        (0x3000, 3),
        (0x1000, 0x10),
        (0x2000, 0x100),
        (0x2010, 3),
        (0x4000, 2),
        (0x4000, 0x10),
    ]);
    assert!(objects.contradicts(0x1000, 2));
    assert!(!objects.contradicts(0x1004, 2));
    assert!(!objects.contradicts(0x1010, 2));
    assert!(!objects.contradicts(0x0fff, 1));
    assert!(!objects.contradicts(0x3000, 3));
    assert!(objects.contradicts(0x3000, 2));
    assert!(!objects.contradicts(0x2010, 3));
    assert!(!objects.contradicts(0x2050, 2));
    assert!(objects.contradicts(0x4000, 2));
    assert!(!DataObjects::from_spans(Vec::new()).contradicts(0x1000, 2));
    assert!(objects.starts_at(0x2010) && objects.starts_at(0x4000));
    assert!(!objects.starts_at(0x1004) && !objects.starts_at(0x0fff));
}

#[test]
fn readonly_string_recognizer() {
    // The printable / NUL recognizer (the per-section walk is covered by the
    // e2e fixture gate; here we exercise the byte predicate).
    assert!(is_printable_string_byte(b'h'));
    assert!(is_printable_string_byte(b' '));
    assert!(is_printable_string_byte(b'\t'));
    assert!(!is_printable_string_byte(0));
    assert!(!is_printable_string_byte(0x01));
    assert!(!is_printable_string_byte(0x80));
}

#[test]
fn scan_over_fauxware_finds_only_readonly_targets() {
    // Real x86-64 ELF: the section partition must classify .rodata vs .text/.data
    // distinctly. Building a live Translate needs the SLEIGH specs (not loaded in
    // the unlace-analysis unit tests), so this asserts the pure partition half over
    // the real fixture; the decode+render path is proven by the console e2e gate
    // `verify_operand_refs.rs`.
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let secs = section_ranges(&file);
    // fauxware has a .rodata (readonly) and a .data (writable) — the partition
    // must classify them distinctly.
    assert!(
        secs.iter().any(|s| s.is_readonly_data()),
        "fauxware must have at least one readonly-data section"
    );
    // The "Username: " literal @ 0x400915 lands in a readonly section.
    assert!(
        secs.iter()
            .any(|s| s.contains(0x400915) && s.is_readonly_data()),
        "0x400915 (\"Username: \") must be in a readonly-data section"
    );
    // A .text address must NOT classify as readonly data.
    assert!(
        !secs
            .iter()
            .any(|s| s.contains(0x400720) && s.is_readonly_data() && !s.is_got_or_plt),
        "a .text address must not be a readonly-data target"
    );
}
