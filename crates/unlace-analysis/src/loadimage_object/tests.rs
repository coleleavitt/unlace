use super::*;
use unlace_base::space::{AddrSpaceManager, ConstantSpace, addrspace_flags, spacetype};

/// (unlace `goabi`) A Go-marked image composes the `:golang` compiler field;
/// the same image without the marker keeps the platform model; a Go image
/// on an architecture with no vendored golang cspec keeps its default.
#[test]
fn go_image_composes_the_golang_language_id() {
    use object::write::Object as WObject;
    let build = |arch: object::Architecture, go: bool| -> Vec<u8> {
        let mut obj = WObject::new(object::BinaryFormat::Elf, arch, object::Endianness::Little);
        let text = obj.add_section(vec![], b".text".to_vec(), object::SectionKind::Text);
        obj.append_section_data(text, &[0xc3], 1);
        if go {
            let s = obj.add_section(
                vec![],
                b".go.buildinfo".to_vec(),
                object::SectionKind::ReadOnlyData,
            );
            obj.append_section_data(s, b"\xff Go buildinf:", 1);
        }
        obj.write().expect("write synthetic ELF")
    };
    let fmt = crate::loader::format::elf::ElfFormat;
    let id = |arch: object::Architecture, go: bool, karch: Architecture| -> String {
        let bytes = build(arch, go);
        let file = object::File::parse(bytes.as_slice()).expect("parse");
        String::from_utf8(
            language_id_for(&file, &fmt, &bytes, "synthetic", karch, None).expect("id"),
        )
        .expect("utf8")
    };
    assert_eq!(
        id(object::Architecture::X86_64, true, Architecture::X86_64),
        "x86:LE:64:default:golang"
    );
    assert_eq!(
        id(object::Architecture::X86_64, false, Architecture::X86_64),
        "x86:LE:64:default:gcc"
    );
    assert_eq!(
        id(object::Architecture::Aarch64, true, Architecture::Aarch64),
        "AARCH64:LE:64:v8A:golang"
    );
    // No vendored golang cspec for RISC-V: a Go image keeps the default.
    assert_eq!(
        id(object::Architecture::Riscv64, true, Architecture::Riscv64),
        "RISCV:LE:64:RV64GC:gcc"
    );
}

/// An EM_BPF object resolves to the eBPF language of its byte order.
#[test]
fn bpf_object_composes_the_ebpf_language_id() {
    let fmt = crate::loader::format::elf::ElfFormat;
    for (endian, expected) in [
        (object::Endianness::Little, "eBPF:LE:64:default:default"),
        (object::Endianness::Big, "eBPF:BE:64:default:default"),
    ] {
        let mut obj = object::write::Object::new(
            object::BinaryFormat::Elf,
            object::Architecture::Bpf,
            endian,
        );
        let text = obj.add_section(vec![], b".text".to_vec(), object::SectionKind::Text);
        obj.append_section_data(text, &[0x95, 0, 0, 0, 0, 0, 0, 0], 8);
        let bytes = obj.write().expect("write synthetic ELF");
        let file = object::File::parse(bytes.as_slice()).expect("parse");
        let id =
            language_id_for(&file, &fmt, &bytes, "synthetic", Architecture::Bpf, None).expect("id");
        assert_eq!(String::from_utf8(id).expect("utf8"), expected);
    }
    assert!(
        elf_language_ids()
            .iter()
            .any(|id| id == "eBPF:LE:64:default:default")
    );
}

#[test]
fn executable_ranges_use_sectionless_load_segments_and_rebase() {
    let mut bytes = build_elf64(0x1000, &[0x90, 0xc3], None);
    bytes[40..48].fill(0); // e_shoff
    bytes[58..64].fill(0); // e_shentsize, e_shnum, e_shstrndx
    bytes[104..112].copy_from_slice(&16u64.to_le_bytes()); // p_memsz, including zero-fill
    let mut image = ObjectLoadImage::from_bytes("synthetic", &bytes).unwrap();
    assert!(image.section_snapshot().is_empty());
    assert_eq!(image.executable_ranges(), vec![(0x1000, 16)]);
    image.attach_to_space(Rc::clone(manager().get_default_code_space().unwrap()));
    image.adjust_vma(0x2000);
    assert_eq!(image.executable_ranges(), vec![(0x3000, 16)]);

    bytes[68..72].copy_from_slice(&object::elf::PF_R.to_le_bytes());
    let image = ObjectLoadImage::from_bytes("synthetic", &bytes).unwrap();
    assert!(
        image.executable_ranges().is_empty(),
        "non-executable PT_LOAD was included"
    );

    bytes[68..72].copy_from_slice(&(object::elf::PF_R | object::elf::PF_X).to_le_bytes());
    bytes[64..68].copy_from_slice(&object::elf::PT_NOTE.to_le_bytes());
    let image = ObjectLoadImage::from_bytes("synthetic", &bytes).unwrap();
    assert!(
        image.executable_ranges().is_empty(),
        "non-loadable segment was included"
    );
}

#[test]
fn executable_ranges_prefer_sections_to_broader_segments() {
    let mut bytes = build_elf64(0x1000, &[0x90, 0xc3], None);
    bytes[104..112].copy_from_slice(&16u64.to_le_bytes());
    let image = ObjectLoadImage::from_bytes("synthetic", &bytes).unwrap();
    assert_eq!(image.executable_ranges(), vec![(0x1000, 2)]);
}

/// const(0) + ram(1) processor space (little endian, 8-byte addresses).
pub(super) fn manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        1,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m.set_default_code_space(1).unwrap();
    m
}

#[test]
fn shared_reader_matches_owner_and_blocks_late_overlays() {
    let payload: Vec<u8> = (0..700).map(|i| (i % 251) as u8).collect();
    let object = build_elf64(0x1000, &payload, None);
    let mut owner = ObjectLoadImage::from_bytes("synthetic", &object).unwrap();
    let ram = Rc::clone(manager().get_default_code_space().unwrap());
    owner.attach_to_space(Rc::clone(&ram));

    let shared = owner
        .shared_bytes()
        .expect("object images publish immutable bytes");
    assert!(shared.mapped_covers(0x1000, 0x1000 + payload.len() as u64));
    assert!(!shared.mapped_covers(0x0fff, 0x1001));
    let mut reader = unlace_sleigh::sharedbytes::SharedBytesImage::new("synthetic", shared);
    reader.attach_to_space(Rc::clone(&ram));

    for (off, len) in [(0x1000, 8), (0x1004, 17), (0x11f8, 40), (0x1000, 600)] {
        let addr = Address::new(Rc::clone(&ram), off);
        let mut want = vec![0; len];
        let mut got = vec![0; len];
        owner.load_fill(&mut want, &addr).unwrap();
        reader.load_fill(&mut got, &addr).unwrap();
        assert_eq!(got, want, "shared read differs at {off:#x} for {len} bytes");
    }

    let err = owner
        .overlay_span(0x1000, &[0xcc])
        .expect_err("published bytes must stay immutable");
    assert!(err.contains("shared decode view"));
}

#[test]
fn shared_input_segments_copy_only_when_written() {
    let object: Arc<[u8]> = build_elf64(0x1000, &[0x90, 0xc3], None).into();
    let original = object.to_vec();
    let mut image =
        ObjectLoadImage::from_shared_bytes_with_target("synthetic", Arc::clone(&object), "")
            .unwrap();
    assert!(matches!(
        image.bytes.segments[0].data,
        SegmentData::Shared { .. }
    ));
    let ram = Rc::clone(manager().get_default_code_space().unwrap());
    image.attach_to_space(Rc::clone(&ram));
    image.overlay_span(0x1000, &[0xcc]).unwrap();
    assert!(matches!(
        image.bytes.segments[0].data,
        SegmentData::Owned(_)
    ));
    let mut got = [0];
    image
        .load_fill(&mut got, &Address::new(ram, 0x1000))
        .unwrap();
    assert_eq!(got, [0xcc]);
    assert_eq!(&*object, original, "copy-on-write changed the shared input");
}

#[test]
fn mapped_input_segments_copy_only_when_written() {
    let path =
        std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("tests/fixtures/macho_imports_arm64");
    let original = std::fs::read(&path).unwrap();
    let input = crate::image_bytes::ImageBytes::map_thin_macho(path.to_str().unwrap())
        .unwrap()
        .unwrap();
    assert!(matches!(input, crate::image_bytes::ImageBytes::Mapped(_)));
    let file = parse_object(&input).unwrap();
    let text = file
        .sections()
        .find(|section| section.name() == Ok("__text"))
        .unwrap();
    let address = text.address();
    let byte = text.data().unwrap()[0] ^ 0xff;
    let mut image =
        ObjectLoadImage::from_image_bytes_with_target("mapped", input.clone(), "").unwrap();
    let ram = Rc::clone(manager().get_default_code_space().unwrap());
    image.attach_to_space(Rc::clone(&ram));
    image.overlay_span(address, &[byte]).unwrap();
    let mut got = [0];
    image
        .load_fill(&mut got, &Address::new(ram, address))
        .unwrap();
    assert_eq!(got, [byte]);
    assert_eq!(&*input, original.as_slice());
    assert_eq!(std::fs::read(path).unwrap(), original);
}

/// Build a minimal little-endian ELF64 x86-64 image with one PT_LOAD
/// segment of `seg_bytes` at vma `seg_vma`, and an optional FUNC symbol.
/// Hand-assembled so the test needs no external toolchain.
fn build_elf64(seg_vma: u64, seg_bytes: &[u8], func: Option<(&str, u64)>) -> Vec<u8> {
    // Layout: [Ehdr 64][Phdr 56][segment data][shstrtab][.symtab][.strtab]
    //         [Shdr * n].  Kept deliberately small and explicit.
    let mut buf: Vec<u8> = Vec::new();
    let ehdr_size = 64usize;
    let phdr_size = 56usize;
    let seg_off = (ehdr_size + phdr_size) as u64;

    // --- string tables -------------------------------------------------
    // shstrtab: "\0.shstrtab\0.symtab\0.strtab\0.text\0"
    let mut shstr = vec![0u8];
    let name_off = |s: &mut Vec<u8>, n: &str| {
        let off = s.len() as u32;
        s.extend_from_slice(n.as_bytes());
        s.push(0);
        off
    };
    let off_shstrtab = name_off(&mut shstr, ".shstrtab");
    let off_symtab = name_off(&mut shstr, ".symtab");
    let off_strtab = name_off(&mut shstr, ".strtab");
    let off_text = name_off(&mut shstr, ".text");

    // strtab (symbol names): "\0<func>\0"
    let mut strtab = vec![0u8];
    let func_name_off = match func {
        Some((nm, _)) => {
            let off = strtab.len() as u32;
            strtab.extend_from_slice(nm.as_bytes());
            strtab.push(0);
            off
        }
        None => 0,
    };

    // symtab: [null sym][func sym?]  (Elf64_Sym = 24 bytes)
    let mut symtab: Vec<u8> = vec![0u8; 24];
    if let Some((_, addr)) = func {
        let mut sym = Vec::new();
        sym.extend_from_slice(&func_name_off.to_le_bytes()); // st_name u32
        sym.push(0x02); // st_info: STB_LOCAL<<4 | STT_FUNC(2)
        sym.push(0); // st_other
        sym.extend_from_slice(&1u16.to_le_bytes()); // st_shndx (.text idx=1)
        sym.extend_from_slice(&addr.to_le_bytes()); // st_value u64
        sym.extend_from_slice(&0u64.to_le_bytes()); // st_size u64
        symtab.extend_from_slice(&sym);
    }

    // --- file body offsets --------------------------------------------
    let shstr_off = seg_off + seg_bytes.len() as u64;
    let symtab_off = shstr_off + shstr.len() as u64;
    let strtab_off = symtab_off + symtab.len() as u64;
    let sh_off = strtab_off + strtab.len() as u64;
    // 5 section headers: null, .text, .shstrtab, .symtab, .strtab
    let shnum = 5u16;
    let shstrndx = 2u16;

    // --- Ehdr (Elf64) --------------------------------------------------
    buf.extend_from_slice(&[0x7f, b'E', b'L', b'F']);
    buf.push(2); // EI_CLASS = ELFCLASS64
    buf.push(1); // EI_DATA = ELFDATA2LSB
    buf.push(1); // EI_VERSION
    buf.push(0); // EI_OSABI
    buf.extend_from_slice(&[0u8; 8]); // EI_PAD
    buf.extend_from_slice(&2u16.to_le_bytes()); // e_type = ET_EXEC
    buf.extend_from_slice(&62u16.to_le_bytes()); // e_machine = EM_X86_64
    buf.extend_from_slice(&1u32.to_le_bytes()); // e_version
    buf.extend_from_slice(&seg_vma.to_le_bytes()); // e_entry
    buf.extend_from_slice(&(ehdr_size as u64).to_le_bytes()); // e_phoff
    buf.extend_from_slice(&sh_off.to_le_bytes()); // e_shoff
    buf.extend_from_slice(&0u32.to_le_bytes()); // e_flags
    buf.extend_from_slice(&(ehdr_size as u16).to_le_bytes()); // e_ehsize
    buf.extend_from_slice(&(phdr_size as u16).to_le_bytes()); // e_phentsize
    buf.extend_from_slice(&1u16.to_le_bytes()); // e_phnum
    buf.extend_from_slice(&64u16.to_le_bytes()); // e_shentsize
    buf.extend_from_slice(&shnum.to_le_bytes()); // e_shnum
    buf.extend_from_slice(&shstrndx.to_le_bytes()); // e_shstrndx

    // --- Phdr (one PT_LOAD, R+X) --------------------------------------
    buf.extend_from_slice(&1u32.to_le_bytes()); // p_type = PT_LOAD
    buf.extend_from_slice(&5u32.to_le_bytes()); // p_flags = PF_R|PF_X
    buf.extend_from_slice(&seg_off.to_le_bytes()); // p_offset
    buf.extend_from_slice(&seg_vma.to_le_bytes()); // p_vaddr
    buf.extend_from_slice(&seg_vma.to_le_bytes()); // p_paddr
    buf.extend_from_slice(&(seg_bytes.len() as u64).to_le_bytes()); // p_filesz
    buf.extend_from_slice(&(seg_bytes.len() as u64).to_le_bytes()); // p_memsz
    buf.extend_from_slice(&0x1000u64.to_le_bytes()); // p_align

    // --- bodies --------------------------------------------------------
    debug_assert_eq!(buf.len() as u64, seg_off);
    buf.extend_from_slice(seg_bytes);
    buf.extend_from_slice(&shstr);
    buf.extend_from_slice(&symtab);
    buf.extend_from_slice(&strtab);

    // --- section headers (Elf64_Shdr = 64 bytes each) -----------------
    let push_shdr = |b: &mut Vec<u8>,
                     name: u32,
                     sh_type: u32,
                     sh_flags: u64,
                     addr: u64,
                     offset: u64,
                     size: u64,
                     link: u32,
                     info: u32,
                     entsize: u64| {
        b.extend_from_slice(&name.to_le_bytes());
        b.extend_from_slice(&sh_type.to_le_bytes());
        b.extend_from_slice(&sh_flags.to_le_bytes());
        b.extend_from_slice(&addr.to_le_bytes());
        b.extend_from_slice(&offset.to_le_bytes());
        b.extend_from_slice(&size.to_le_bytes());
        b.extend_from_slice(&link.to_le_bytes());
        b.extend_from_slice(&info.to_le_bytes());
        b.extend_from_slice(&0u64.to_le_bytes()); // sh_addralign
        b.extend_from_slice(&entsize.to_le_bytes());
    };
    debug_assert_eq!(buf.len() as u64, sh_off);
    // 0: null
    push_shdr(&mut buf, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    // 1: .text  (SHT_PROGBITS, ALLOC|EXECINSTR)
    push_shdr(
        &mut buf,
        off_text,
        1,
        0x2 | 0x4,
        seg_vma,
        seg_off,
        seg_bytes.len() as u64,
        0,
        0,
        0,
    );
    // 2: .shstrtab (SHT_STRTAB)
    push_shdr(
        &mut buf,
        off_shstrtab,
        3,
        0,
        0,
        shstr_off,
        shstr.len() as u64,
        0,
        0,
        0,
    );
    // 3: .symtab (SHT_SYMTAB, link=.strtab(4), entsize=24)
    push_shdr(
        &mut buf,
        off_symtab,
        2,
        0,
        0,
        symtab_off,
        symtab.len() as u64,
        4,
        1,
        24,
    );
    // 4: .strtab (SHT_STRTAB)
    push_shdr(
        &mut buf,
        off_strtab,
        3,
        0,
        0,
        strtab_off,
        strtab.len() as u64,
        0,
        0,
        0,
    );

    buf
}

#[test]
fn elf_arch_type_is_x86_64_language_id() {
    let elf = build_elf64(0x401000, &[0x90, 0xc3], None);
    let img = ObjectLoadImage::from_bytes("t.elf", &elf).unwrap();
    assert_eq!(img.get_arch_type(), b"x86:LE:64:default:gcc".to_vec());
    assert_eq!(img.get_file_name(), "t.elf");
}

#[test]
fn elf_load_fill_exact_and_gap_fill() {
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    // A 4-byte code segment at 0x401000.
    let elf = build_elf64(0x401000, &[0x55, 0x48, 0x89, 0xe5], None);
    let mut img = ObjectLoadImage::from_bytes("t.elf", &elf).unwrap();
    img.attach_to_space(Rc::clone(&ram));

    // Exact read of the mapped bytes.
    let got = img
        .load(4, &Address::new(Rc::clone(&ram), 0x401000))
        .unwrap();
    assert_eq!(got, vec![0x55, 0x48, 0x89, 0xe5]);

    // Read straddling the segment tail: mapped bytes, then zero fill.
    let got = img
        .load(8, &Address::new(Rc::clone(&ram), 0x401000))
        .unwrap();
    assert_eq!(got, vec![0x55, 0x48, 0x89, 0xe5, 0, 0, 0, 0]);

    // Initial address entirely unmapped -> DataUnavailError (BFD contract).
    let err = img
        .load(4, &Address::new(Rc::clone(&ram), 0x1000))
        .unwrap_err();
    match &err {
        UnlaceError::DataUnavail { explain } => {
            assert!(explain.starts_with("Unable to load"), "got {explain}");
        }
        other => panic!("expected DataUnavail, got {other:?}"),
    }
}

/// (unlace `--assert bytes`) The overlay is a statement about RAM: every later
/// read serves it, the file on disk is untouched, and an address no segment
/// maps is refused rather than invented.
#[test]
fn an_overlay_replaces_what_every_later_read_returns() {
    use unlace_sleigh::loadimage::LoadImage;
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let elf = build_elf64(0x401000, &[0x55, 0x48, 0x89, 0xe5], None);
    let mut img = ObjectLoadImage::from_bytes("t.elf", &elf).unwrap();
    img.attach_to_space(Rc::clone(&ram));

    // Warm the 512-byte read window first: an overlay that did not drop it
    // would be invisible to exactly the reads most likely to follow one.
    assert_eq!(
        img.load(4, &Address::new(Rc::clone(&ram), 0x401000))
            .unwrap(),
        vec![0x55, 0x48, 0x89, 0xe5]
    );
    img.unlace_overlay_bytes(&Address::new(Rc::clone(&ram), 0x401001), &[0x31, 0xc0])
        .expect("inside the segment");
    assert_eq!(
        img.load(4, &Address::new(Rc::clone(&ram), 0x401000))
            .unwrap(),
        vec![0x55, 0x31, 0xc0, 0xe5]
    );

    // Unmapped, and straddling the end of the only segment: both refused,
    // naming the span, because a half-applied overlay is worse than none.
    for (vma, len) in [(0x1000u64, 1usize), (0x401002, 4)] {
        let err = img
            .unlace_overlay_bytes(&Address::new(Rc::clone(&ram), vma), &vec![0x90; len])
            .unwrap_err();
        match &err {
            UnlaceError::DataUnavail { explain } => {
                assert!(explain.contains("no loaded segment maps"), "got {explain}");
            }
            other => panic!("expected DataUnavail, got {other:?}"),
        }
    }
    // A wrong-space overlay is the loadFill contract, not a panic.
    let other = Rc::clone(m.get_space_by_name("const").unwrap());
    assert!(
        img.unlace_overlay_bytes(&Address::new(other, 0), &[0x90])
            .is_err()
    );
}

/// A writable segment's zero-filled RAM tail is real mapped memory, so an
/// overlay reaching into it materialises the tail rather than refusing: what
/// the running program left there is exactly what a caller is stating.
#[test]
fn an_overlay_may_reach_into_a_zero_filled_tail() {
    use unlace_sleigh::loadimage::LoadImage;
    let mut bytes = build_elf64(0x401000, &[0x55, 0x48, 0x89, 0xe5], None);
    bytes[104..112].copy_from_slice(&64u64.to_le_bytes()); // p_memsz: 4 backed + 60 zero
    bytes[68..72].copy_from_slice(&(object::elf::PF_R | object::elf::PF_W).to_le_bytes());
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut img = ObjectLoadImage::from_bytes("t.elf", &bytes).unwrap();
    img.attach_to_space(Rc::clone(&ram));

    img.unlace_overlay_bytes(&Address::new(Rc::clone(&ram), 0x401020), &[0xde, 0xad])
        .expect("inside the p_memsz tail");
    assert_eq!(
        img.load(4, &Address::new(Rc::clone(&ram), 0x40101f))
            .unwrap(),
        vec![0x00, 0xde, 0xad, 0x00]
    );
    // Past p_memsz is not mapped at all.
    assert!(
        img.unlace_overlay_bytes(&Address::new(Rc::clone(&ram), 0x401040), &[0x90])
            .is_err()
    );
}

#[test]
fn elf_symbols_iterate() {
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let elf = build_elf64(0x401000, &[0x90, 0xc3], Some(("add", 0x401000)));
    let mut img = ObjectLoadImage::from_bytes("t.elf", &elf).unwrap();
    img.attach_to_space(Rc::clone(&ram));

    img.open_symbols();
    let mut rec = LoadImageFunc::default();
    assert!(img.get_next_symbol(&mut rec));
    assert_eq!(rec.name, b"add".to_vec());
    assert_eq!(rec.address, Address::new(Rc::clone(&ram), 0x401000));
    assert!(!img.get_next_symbol(&mut rec));
}

#[test]
fn elf_wrong_space_is_data_unavail() {
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let other = Rc::clone(m.get_space_by_name("const").unwrap());
    let elf = build_elf64(0x401000, &[0x90, 0xc3], None);
    let mut img = ObjectLoadImage::from_bytes("t.elf", &elf).unwrap();
    img.attach_to_space(Rc::clone(&ram));
    let err = img.load(2, &Address::new(other, 0)).unwrap_err();
    assert!(matches!(err, UnlaceError::DataUnavail { .. }));
}

#[test]
fn elf_adjust_vma_shifts_segments_and_symbols() {
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let elf = build_elf64(0x401000, &[0x11, 0x22, 0x33, 0x44], Some(("f", 0x401000)));
    let mut img = ObjectLoadImage::from_bytes("t.elf", &elf).unwrap();
    img.attach_to_space(Rc::clone(&ram));
    img.adjust_vma(0x1000);
    // The bytes now live at 0x402000.
    let got = img
        .load(4, &Address::new(Rc::clone(&ram), 0x402000))
        .unwrap();
    assert_eq!(got, vec![0x11, 0x22, 0x33, 0x44]);
    // And the symbol moved too.
    img.open_symbols();
    let mut rec = LoadImageFunc::default();
    assert!(img.get_next_symbol(&mut rec));
    assert_eq!(rec.address, Address::new(Rc::clone(&ram), 0x402000));
    assert_eq!(
        img.elf_function_provenance().definitions,
        HashSet::from([0x402000])
    );
}

#[test]
fn non_elf_is_rejected() {
    let err = ObjectLoadImage::from_bytes("x", b"not an object file").unwrap_err();
    assert!(matches!(err, UnlaceError::Lowlevel { .. }));
}

/// The one ARM mode table both PE-family loaders read: the container
/// family decides how machine `0x1c2` is named, and nothing else differs.
#[test]
fn the_arm_mode_policy_is_one_table_read_per_container_family() {
    use object::pe::{IMAGE_FILE_MACHINE_AMD64, IMAGE_FILE_MACHINE_ARMNT};
    for uefi_te in [false, true] {
        assert_eq!(
            pe_arm_mode_policy(IMAGE_FILE_MACHINE_ARMNT, uefi_te),
            Some(ArmModePolicy::WholeImageThumb)
        );
        assert_eq!(
            pe_arm_mode_policy(IMAGE_FILE_MACHINE_ARM, uefi_te),
            Some(ArmModePolicy::EntryBit)
        );
        assert_eq!(pe_arm_mode_policy(IMAGE_FILE_MACHINE_AMD64, uefi_te), None);
    }
    assert_eq!(
        pe_arm_mode_policy(IMAGE_FILE_MACHINE_THUMB, false),
        Some(ArmModePolicy::WholeImageThumb),
        "Windows names 0x1c2 THUMB"
    );
    assert_eq!(
        pe_arm_mode_policy(IMAGE_FILE_MACHINE_THUMB, true),
        Some(ArmModePolicy::EntryBit),
        "the UEFI bindings name 0x1c2 ARMTHUMB_MIXED"
    );

    // A PE whose machine word is ARM loads as 32-bit ARM with no whole-image
    // claim, and its odd entry is the walk's seed.
    let path = format!(
        "{}/tests/fixtures/armv4t_thumb_pe.exe",
        env!("CARGO_MANIFEST_DIR")
    );
    let mut bytes = std::fs::read(&path).expect("read synthetic ARM PE fixture");
    let pe = u32::from_le_bytes(bytes[0x3c..0x40].try_into().unwrap()) as usize;
    bytes[pe + 4..pe + 6].copy_from_slice(&IMAGE_FILE_MACHINE_ARM.to_le_bytes());
    let file = object::File::parse(bytes.as_slice()).expect("parse the ARM-machine PE");
    assert_eq!(effective_architecture(&file, &bytes), Architecture::Arm);
    assert_eq!(arm_isa_hint(&file, &bytes), None);
    assert_eq!(arm_entry_thumb_hint(&file, &bytes), Some(0x401000));
    let image =
        ObjectLoadImage::from_bytes("arm-machine.exe", &bytes).expect("loads without a target");
    assert_eq!(image.arch_id(), b"ARM:LE:32:v8:windows");
    assert_eq!(
        image.image_entry(),
        Some(0x401000),
        "the retained entry is a code address"
    );
}

#[test]
fn thumb_machine_pe_maps_with_explicit_language() {
    let path = format!(
        "{}/tests/fixtures/armv4t_thumb_pe.exe",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).expect("read synthetic ARM PE fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse synthetic ARM PE");
    assert_eq!(file.architecture(), Architecture::Unknown);
    assert_eq!(effective_architecture(&file, &bytes), Architecture::Arm);
    assert_eq!(arm_isa_hint(&file, &bytes), Some(true));

    let mut image = ObjectLoadImage::from_bytes_with_target(&path, &bytes, "ARM:LE:32:v4t:default")
        .expect("explicit language must not discard PE mappings");
    assert_eq!(image.get_arch_type(), b"ARM:LE:32:v4t:default");
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    image.attach_to_space(Rc::clone(&ram));
    assert_eq!(
        image.load(4, &Address::new(ram, 0x401000)).unwrap(),
        [0x07, 0x20, 0x70, 0x47]
    );
}

#[test]
fn default_target_preserves_detected_language_and_fallback() {
    let elf = build_elf64(0x1000, &[0xb8, 0x07, 0x00, 0xc3], None);
    let pe = std::fs::read(format!(
        "{}/tests/fixtures/armv4t_thumb_pe.exe",
        env!("CARGO_MANIFEST_DIR")
    ))
    .unwrap();
    for bytes in [&elf, &pe] {
        let automatic = ObjectLoadImage::from_bytes("synthetic", bytes).unwrap();
        for target in ["", "default", " default ", " \t"] {
            for load in [
                ObjectLoadImage::from_bytes_with_target,
                ObjectLoadImage::from_bytes_silent_with_target,
            ] {
                let image = load("synthetic", bytes, target).unwrap();
                assert_eq!(image.arch_id(), automatic.arch_id());
                assert_eq!(image.fallback_arch_id(), automatic.fallback_arch_id());
                assert_eq!(image.section_snapshot(), automatic.section_snapshot());
            }
        }
    }
}

#[test]
fn explicit_decoder_width_preserves_elf_container_mapping() {
    let code = [0xb8, 0x07, 0x00, 0xc3];
    let bytes = build_elf64(0x1000, &code, None);
    let automatic = ObjectLoadImage::from_bytes("synthetic", &bytes).unwrap();
    for target in ["x86:LE:16:Real Mode:default", "x86:LE:32:default:gcc"] {
        let mut image =
            ObjectLoadImage::from_bytes_with_target("synthetic", &bytes, target).unwrap();
        assert_eq!(image.arch_id(), target.as_bytes());
        assert_eq!(image.section_snapshot(), automatic.section_snapshot());
        let ram = Rc::clone(manager().get_default_code_space().unwrap());
        image.attach_to_space(Rc::clone(&ram));
        assert_eq!(
            image
                .load(code.len() as i32, &Address::new(ram, 0x1000))
                .unwrap(),
            code
        );
    }
}

#[test]
fn explicit_target_keeps_pe_mapping_across_an_endian_conflict() {
    let path = format!(
        "{}/tests/fixtures/armv4t_thumb_pe.exe",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).expect("read synthetic ARM PE fixture");
    let automatic = ObjectLoadImage::from_bytes(&path, &bytes).unwrap();
    let mut image = ObjectLoadImage::from_bytes_with_target(&path, &bytes, "ARM:BE:32:v4t:default")
        .expect("an endian-conflicting target is reported, not refused");
    assert_eq!(image.get_arch_type(), b"ARM:BE:32:v4t:default");
    assert_eq!(image.section_snapshot(), automatic.section_snapshot());
    let ram = Rc::clone(manager().get_default_code_space().unwrap());
    image.attach_to_space(Rc::clone(&ram));
    assert_eq!(
        image.load(4, &Address::new(ram, 0x401000)).unwrap(),
        [0x07, 0x20, 0x70, 0x47]
    );
}

#[test]
fn target_endian_note_fires_only_on_a_real_conflict() {
    let path = format!(
        "{}/tests/fixtures/armv4t_thumb_pe.exe",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).expect("read synthetic ARM PE fixture");
    let file = object::File::parse(bytes.as_slice()).unwrap();
    assert!(
        target_endian_note(&file, "ARM:BE:32:v4t:default")
            .is_some_and(|note| note.contains("BE-endian") && note.contains("LE-endian"))
    );
    assert!(target_endian_note(&file, "ARM:LE:32:v4t:default").is_none());
    assert!(target_endian_note(&file, "ARM").is_none());
}

#[test]
fn thumb_coff_typed_parser_preserves_machine_and_mapping() {
    use object::{BinaryFormat, Endianness, SectionKind};
    let mut obj =
        object::write::Object::new(BinaryFormat::Coff, Architecture::Arm, Endianness::Little);
    let text = obj.add_section(Vec::new(), b".text".to_vec(), SectionKind::Text);
    obj.append_section_data(text, &[0x07, 0x20, 0x70, 0x47], 4);
    let mut bytes = obj.write().unwrap();
    bytes[..2].copy_from_slice(&IMAGE_FILE_MACHINE_THUMB.to_le_bytes());
    let file = parse_object(&bytes).unwrap();
    assert_eq!(file.format(), BinaryFormat::Coff);
    assert_eq!(
        container_machine(&file, &bytes),
        Some(IMAGE_FILE_MACHINE_THUMB)
    );
    assert_eq!(effective_architecture(&file, &bytes), Architecture::Arm);
    assert_eq!(arm_isa_hint(&file, &bytes), Some(true));
    let mut image = ObjectLoadImage::from_bytes("thumb.obj", &bytes).unwrap();
    assert!(image.get_arch_type().starts_with(b"ARM:LE:32:"));
    let start = image
        .section_snapshot()
        .iter()
        .find(|(_, _, flags)| flags & section_flags::CODE != 0)
        .unwrap()
        .0;
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    image.attach_to_space(Rc::clone(&ram));
    assert_eq!(
        image.load(4, &Address::new(ram, start)).unwrap(),
        [0x07, 0x20, 0x70, 0x47]
    );
}

#[test]
fn thumb_coff_typed_parser_rejects_truncated_headers_and_sections() {
    assert!(parse_object(&[0xc2, 0x01]).is_err());
    let mut header = [0u8; 20];
    header[..2].copy_from_slice(&IMAGE_FILE_MACHINE_THUMB.to_le_bytes());
    header[2..4].copy_from_slice(&1u16.to_le_bytes());
    assert!(parse_object(&header).is_err());
    assert!(parse_object(b"unrecognized object").is_err());
}

// ---- Real-ELF PLT/GOT import-name resolution (elf_plt) -----------------
//
// These load vendored fixture binaries (tests/fixtures/) and check the
// resolved `addr -> name` function-symbol stream — the exact stream the
// engine feeds the decompiler via `read_loader_symbols_generic`.  The XML
// datatest corpus cannot exercise this (it embeds bytechunks + explicit
// <symbol> defs and never constructs an `ObjectLoadImage`), so the gate lives
// here in the cargo workspace suite.

/// Load a vendored fixture ELF and collect its resolved `addr -> name` map.
fn fixture_funcsyms(name: &str) -> std::collections::HashMap<u64, String> {
    let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), name);
    let bytes = std::fs::read(&path).unwrap_or_else(|e| panic!("read {path}: {e}"));
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut img = ObjectLoadImage::from_bytes(&path, &bytes).unwrap();
    img.attach_to_space(Rc::clone(&ram));
    let mut out = std::collections::HashMap::new();
    img.open_symbols();
    loop {
        let mut rec = LoadImageFunc::default();
        if !img.get_next_symbol(&mut rec) {
            break;
        }
        out.insert(
            rec.address.get_offset(),
            String::from_utf8_lossy(&rec.name).into_owned(),
        );
    }
    out
}

/// (unlace, `zero-function-sizes-make`) `getSegments` reports the program
/// headers with their permissions translated into section flags — the only
/// mapping story a sectionless image has left.
#[test]
fn segments_carry_the_load_permissions_of_a_sectionless_image() {
    use unlace_sleigh::loadimage::LoadImage;
    let path = format!(
        "{}/tests/fixtures/noshdr_x86_64",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).expect("fixture");
    let img = ObjectLoadImage::from_bytes(&path, &bytes).expect("load sectionless PIE");
    assert!(
        img.section_snapshot().is_empty(),
        "e_shoff is zero — no section table"
    );
    assert_eq!(
        img.get_segments(),
        vec![
            (0x0, 0xe8, section_flags::DATA | section_flags::READONLY),
            (0x100, 0x16, section_flags::CODE | section_flags::READONLY),
            (0x120, 0x10, section_flags::DATA),
        ],
        "PF_X is the CODE bit, PF_W clears READONLY, and the order is ascending vma"
    );
}

/// A linked image with a section table still reports both, independently:
/// the segments are a second, coarser view, not a replacement.
#[test]
fn a_sectioned_image_reports_segments_as_well() {
    use unlace_sleigh::loadimage::LoadImage;
    let path = format!("{}/tests/fixtures/fauxware", env!("CARGO_MANIFEST_DIR"));
    let bytes = std::fs::read(&path).expect("fixture");
    let img = ObjectLoadImage::from_bytes(&path, &bytes).expect("load fauxware");
    let segments = img.get_segments();
    assert!(!img.section_snapshot().is_empty(), "fauxware has sections");
    assert!(
        segments
            .iter()
            .any(|&(_, _, flags)| flags & section_flags::CODE != 0),
        "one PT_LOAD is executable; got {segments:?}"
    );
    assert!(
        segments.iter().all(|&(vma, size, _)| size > 0 && vma > 0),
        "zero-size records are dropped; got {segments:?}"
    );
}

/// (unlace, `pe-header-entry-mapped`) The PE header page reaches the map: an
/// entry declared inside it has readable bytes. This fixture declares one,
/// so the region is read-only CODE — the image itself named those bytes
/// (`whole-binary-decompilation-treats`). The header page of an image that
/// declares no such entry stays DATA, which is
/// `the_header_page_never_overlaps_a_section` below.
#[test]
fn a_pe_maps_its_header_page_read_only() {
    use unlace_sleigh::loadimage::LoadImage;
    let path = format!(
        "{}/tests/fixtures/pe_headerentry_i386.exe",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).expect("fixture");
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut img = ObjectLoadImage::from_bytes(&path, &bytes).expect("load the PE");
    img.attach_to_space(Rc::clone(&ram));

    let header = (
        0x40_0000u64,
        0x200u64,
        section_flags::CODE | section_flags::READONLY,
    );
    assert!(
        img.get_segments().contains(&header),
        "SizeOfHeaders bytes are mapped at ImageBase; got {:?}",
        img.get_segments()
    );
    assert!(
        img.section_snapshot().contains(&header),
        "and are published to the section walk, so the address resolves as mapped"
    );

    // The declared entry sits at RVA 0x154, one byte past the section table.
    let mut code = [0u8; 3];
    img.load_fill(&mut code, &Address::new(Rc::clone(&ram), 0x40_0154))
        .expect("entry is mapped");
    assert_eq!(code, [0x55, 0x89, 0xe5], "push ebp; mov ebp,esp");
}

/// The clamp in practice: the header page stops where the first section
/// starts, so nothing it publishes can shadow real content.
#[test]
fn the_header_page_never_overlaps_a_section() {
    let path = format!(
        "{}/tests/fixtures/pe_imports.exe",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).expect("fixture");
    let img = ObjectLoadImage::from_bytes(&path, &bytes).expect("load the PE");
    let sections = img.section_snapshot();
    let &(hvma, hsize, hflags) = sections
        .iter()
        .min_by_key(|&&(vma, _, _)| vma)
        .expect("a PE has sections");
    assert_eq!(
        hflags,
        section_flags::DATA | section_flags::READONLY,
        "the header page sorts first"
    );
    for &(vma, size, _) in &sections {
        if vma == hvma {
            continue;
        }
        assert!(
            vma >= hvma + hsize,
            "section 0x{vma:x}+0x{size:x} overlaps the header page"
        );
    }
}

#[test]
fn adjusting_a_weak_import_moves_its_slots_and_all_function_addresses() {
    let path = std::path::PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .join("tests/fixtures/mips-weak-imports/identity-64-be-mixed.o");
    let mut image = ObjectLoadImage::open(path.to_str().unwrap()).unwrap();
    let slots = image.import_slot_ranges().to_vec();
    let aliases = image.function_address_aliases().to_vec();
    assert_eq!(slots.len(), 1);
    assert_eq!(aliases.len(), 1);
    image.attach_to_space(Rc::clone(manager().get_default_code_space().unwrap()));
    image.adjust_vma(0x2000);
    assert_eq!(
        image.import_slot_ranges(),
        slots
            .iter()
            .map(|&(lo, hi)| (lo + 0x2000, hi + 0x2000))
            .collect::<Vec<_>>()
    );
    assert_eq!(
        image.function_address_aliases(),
        aliases
            .iter()
            .map(|&(a, c)| (a + 0x2000, c + 0x2000))
            .collect::<Vec<_>>()
    );
}

/// A MIPS object's foldable GOT pieces exclude its import slots, which
/// may sit at either end or in the middle.
#[test]
fn got_ranges_leave_out_import_slots() {
    assert_eq!(outside((0x100, 0x120), &[]), [(0x100, 0x11f)]);
    assert_eq!(
        outside((0x100, 0x120), &[(0x108, 0x10c)]),
        [(0x100, 0x107), (0x10c, 0x11f)]
    );
    assert_eq!(
        outside((0x100, 0x120), &[(0x11c, 0x120), (0x100, 0x104)]),
        [(0x104, 0x11b)]
    );
    assert_eq!(
        outside((0x100, 0x108), &[(0x100, 0x104), (0x104, 0x108)]),
        []
    );
    assert_eq!(outside((0x100, 0x108), &[(0x200, 0x208)]), [(0x100, 0x107)]);
}

/// PE import slots retain their loader identity independently of section
/// permissions. The side table, not CODE versus DATA, is what body
/// selection can rely on while keeping the slot's function symbol.
#[test]
fn pe_import_slots_are_reported_in_code_and_data_sections() {
    for (fixture, slot, name, executable) in [
        ("pe_imports.exe", 0x1_4000_d1ecu64, "GetLastError", false),
        ("pe_iatincode_i386.exe", 0x40_1000u64, "VirtualAlloc", true),
    ] {
        let path = format!("{}/tests/fixtures/{fixture}", env!("CARGO_MANIFEST_DIR"));
        let bytes = std::fs::read(&path).expect("fixture");
        let img = ObjectLoadImage::from_bytes(&path, &bytes).expect("load the PE");
        assert!(
            img.import_slot_ranges()
                .iter()
                .any(|&(lo, hi)| slot >= lo && slot < hi),
            "{fixture}: missing import slot at {slot:#x}"
        );
        assert!(
            img.func_symbols()
                .iter()
                .any(|(addr, found)| *addr == slot && found == name),
            "{fixture}: the slot FunctionSymbol must remain installed"
        );
        let section_is_code = img
            .section_snapshot()
            .iter()
            .find(|&&(start, size, _)| slot >= start && slot - start < size)
            .is_some_and(|&(_, _, flags)| flags & section_flags::CODE != 0);
        assert_eq!(
            section_is_code, executable,
            "{fixture}: wrong section control"
        );
    }
}

/// (unlace, `pe-zero-filled-data`) A PE section that declares more RAM than
/// the file backs maps its whole `VirtualSize`: the file extent reads back
/// its own bytes, the tail past `SizeOfRawData` reads back zeroes, and the
/// first byte past `VirtualSize` is still unmapped.
#[test]
fn a_pe_maps_the_zero_filled_tail_of_a_section() {
    use unlace_sleigh::loadimage::LoadImage;
    let path = format!(
        "{}/tests/fixtures/pe_bsstail_x86_64.exe",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).expect("fixture");
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut img = ObjectLoadImage::from_bytes(&path, &bytes).expect("load the PE");
    img.attach_to_space(Rc::clone(&ram));

    // .data: RVA 0x2000, VirtualSize 0x7a8, SizeOfRawData 0x200. The bound
    // is probed first, on a cold image: `loadFill` reads a 512-byte window
    // at a time and zero-pads the end of one, so a later read inside a
    // window that started in .data is answered from the buffer.
    let at = |vma: u64| Address::new(Rc::clone(&ram), vma);
    let mut past = [0u8; 1];
    let err = img.load_fill(&mut past, &at(0x1_4000_27a8)).unwrap_err();
    assert!(
        matches!(err, UnlaceError::DataUnavail { .. }),
        "VirtualSize is still the bound; got {err:?}"
    );

    let mut buf = [0u8; 8];
    img.load_fill(&mut buf, &at(0x1_4000_21f8))
        .expect("the file extent is mapped");
    assert_eq!(buf, [0xaa; 8], "the last eight bytes SizeOfRawData backs");

    let mut tail = [0xffu8; 64];
    img.load_fill(&mut tail, &at(0x1_4000_2740))
        .expect("the virtual tail is mapped");
    assert_eq!(
        tail, [0u8; 64],
        "past SizeOfRawData the tail reads as zeroes"
    );
}

/// The same for an ELF `.bss`: `p_memsz` past `p_filesz` is mapped memory,
/// not a hole, so a read there answers zeroes instead of DataUnavail — and
/// the tail of an *executable* segment stays a hole, because there its
/// file-time zeroes are not what runs.
#[test]
fn an_elf_bss_tail_reads_as_zeroes() {
    use unlace_sleigh::loadimage::LoadImage;
    let mut bytes = build_elf64(0x401000, &[0x55, 0x48, 0x89, 0xe5], None);
    bytes[104..112].copy_from_slice(&64u64.to_le_bytes()); // p_memsz, 4 backed + 60 zero
    bytes[68..72].copy_from_slice(&(object::elf::PF_R | object::elf::PF_W).to_le_bytes());
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut img = ObjectLoadImage::from_bytes("t.elf", &bytes).expect("load the ELF");
    img.attach_to_space(Rc::clone(&ram));

    // Cold, so the 512-byte read window cannot answer it (see the PE case).
    let err = img
        .load(4, &Address::new(Rc::clone(&ram), 0x401040))
        .unwrap_err();
    assert!(
        matches!(err, UnlaceError::DataUnavail { .. }),
        "p_memsz bounds it: {err:?}"
    );
    let got = img
        .load(8, &Address::new(Rc::clone(&ram), 0x401000))
        .expect("mapped");
    assert_eq!(got, vec![0x55, 0x48, 0x89, 0xe5, 0, 0, 0, 0]);
    let got = img
        .load(4, &Address::new(Rc::clone(&ram), 0x401030))
        .expect("bss tail");
    assert_eq!(got, vec![0, 0, 0, 0], "wholly inside the .bss tail");

    bytes[68..72].copy_from_slice(&(object::elf::PF_R | object::elf::PF_X).to_le_bytes());
    let mut img = ObjectLoadImage::from_bytes("t.elf", &bytes).expect("load the ELF");
    img.attach_to_space(Rc::clone(&ram));
    let err = img
        .load(4, &Address::new(Rc::clone(&ram), 0x401030))
        .unwrap_err();
    assert!(
        matches!(err, UnlaceError::DataUnavail { .. }),
        "an executable segment's tail is not materialised as code; got {err:?}"
    );
}

/// (unlace) A read past the end of a mapped segment is answered only from
/// inside the staging window, so restoring the window a read found brings
/// back the answer it gave, and restoring an empty one brings back the
/// failure of a cold read.
#[test]
fn restoring_the_read_window_restores_what_a_read_answers() {
    use unlace_sleigh::loadimage::LoadImage;
    let mut bytes = build_elf64(0x401000, &[0x55, 0x48, 0x89, 0xe5], None);
    bytes[68..72].copy_from_slice(&(object::elf::PF_R | object::elf::PF_X).to_le_bytes());
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut img = ObjectLoadImage::from_bytes("t.elf", &bytes).expect("load the ELF");
    img.attach_to_space(Rc::clone(&ram));
    let past = Address::new(Rc::clone(&ram), 0x401040);
    let cold = img.read_window().expect("a windowed image");
    assert!(
        img.load(4, &past).is_err(),
        "a cold read past the segment fails"
    );
    img.load(4, &Address::new(Rc::clone(&ram), 0x401000))
        .expect("mapped");
    let warm = img.read_window().expect("a windowed image");
    assert_eq!(warm, 0x401000);
    assert_eq!(
        img.load(4, &past).expect("inside the window"),
        vec![0, 0, 0, 0]
    );
    img.restore_read_window(cold);
    assert!(img.load(4, &past).is_err(), "the empty window is back");
    img.restore_read_window(warm);
    assert_eq!(
        img.load(4, &past).expect("the window is back"),
        vec![0, 0, 0, 0]
    );
}

/// (unlace) A read longer than the 512-byte staging buffer is served straight
/// into the caller's slice.  Upstream copies its answer back with
/// `memcpy(ptr,buffer,size)` and over-reads the buffer for any such
/// request; the same copy spelled as a Rust slice panicked ("range end
/// index 667 out of range for slice of length 512"), which took a whole
/// `decompile-project` export down at the first global whose declared
/// datatype was bigger than the buffer.
#[test]
fn a_read_larger_than_the_staging_buffer_is_served_whole() {
    use unlace_sleigh::loadimage::LoadImage;
    let payload: Vec<u8> = (0..1024u32).map(|i| (i % 251) as u8).collect();
    let bytes = build_elf64(0x401000, &payload, None);
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut img = ObjectLoadImage::from_bytes("t.elf", &bytes).expect("load the ELF");
    img.attach_to_space(Rc::clone(&ram));
    let at = |o: u64| Address::new(Rc::clone(&ram), o);

    // The size out of the crash report, then the buffer seam either side of
    // it, then spans that start and end off the buffer's own boundaries.
    for (off, len) in [
        (0usize, 667usize),
        (0, 512),
        (0, 513),
        (3, 1021),
        (500, 524),
    ] {
        let got = img
            .load(len as i32, &at(0x401000 + off as u64))
            .expect("mapped");
        assert_eq!(got, payload[off..off + len], "{len} bytes at +{off}");
    }

    // A big read is not cached, so it must leave the window a neighbouring
    // small read is being served from exactly as it found it.
    let warm = img.load(8, &at(0x401000)).expect("mapped");
    img.load(667, &at(0x401100)).expect("mapped");
    assert_eq!(
        img.load(8, &at(0x401000)).expect("mapped"),
        warm,
        "window poisoned"
    );
}

/// A big read gets the same answers at the edges of mapped memory that the
/// buffered path gives: run off the end and the tail reads as zeroes, start
/// where nothing is mapped and it is `DataUnavail` — not a panic.
#[test]
fn a_big_read_off_the_end_zero_fills_and_an_unmapped_one_raises() {
    use unlace_sleigh::loadimage::LoadImage;
    let payload: Vec<u8> = (0..600u32).map(|i| (i % 251) as u8).collect();
    let bytes = build_elf64(0x401000, &payload, None);
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut img = ObjectLoadImage::from_bytes("t.elf", &bytes).expect("load the ELF");
    img.attach_to_space(Rc::clone(&ram));
    let at = |o: u64| Address::new(Rc::clone(&ram), o);

    let got = img
        .load(700, &at(0x401000))
        .expect("the first byte is mapped");
    assert_eq!(
        got[..600],
        payload[..],
        "the mapped bytes come back verbatim"
    );
    assert!(
        got[600..].iter().all(|&b| b == 0),
        "the unmapped tail reads as zeroes"
    );

    let err = img.load(667, &at(0x900000)).unwrap_err();
    assert!(
        matches!(err, UnlaceError::DataUnavail { .. }),
        "unmapped start: {err:?}"
    );
    let err = img.load(667, &at(0x401000 - 8)).unwrap_err();
    assert!(
        matches!(err, UnlaceError::DataUnavail { .. }),
        "starts below the map: {err:?}"
    );
}

/// A zero-filled tail is trimmed at the next segment, and only the tail is:
/// segments stacked at one vma (a COFF object read through the linked path)
/// keep every byte the file backs.
#[test]
fn a_virtual_tail_stops_at_the_next_segment() {
    let mut segs = vec![
        Segment {
            vma: 0x1000,
            data: vec![1, 2, 3, 4].into(),
            memsz: 0x4000,
        },
        Segment {
            vma: 0x2000,
            data: vec![9].into(),
            memsz: 0x10,
        },
    ];
    clamp_virtual_tails(&mut segs);
    assert_eq!(
        segs[0].mapped_size(),
        0x1000,
        "trimmed to where the next segment starts"
    );
    assert_eq!(
        segs[1].mapped_size(),
        0x10,
        "the last segment keeps its whole tail"
    );

    let mut stacked = vec![
        Segment::file_backed(0, vec![1, 2, 3, 4]),
        Segment::file_backed(0, vec![5, 6]),
    ];
    clamp_virtual_tails(&mut stacked);
    assert_eq!(
        stacked[0].mapped_size(),
        4,
        "a file extent is never trimmed away"
    );
}

#[test]
fn fauxware_plt_imports_resolve_to_named_functions() {
    let syms = fixture_funcsyms("fauxware");
    // PLT stubs → imported libc names at their stub entry addresses (classic
    // non-PIE x86-64, no CET: stub start == the `FF 25` jmp).
    for (addr, want) in [
        (0x400510u64, "puts"),
        (0x400520, "printf"),
        (0x400530, "read"),
        (0x400540, "__libc_start_main"),
        (0x400550, "strcmp"),
        (0x400560, "open"),
        (0x400570, "exit"),
    ] {
        assert_eq!(
            syms.get(&addr).map(String::as_str),
            Some(want),
            "PLT import at {addr:#x}"
        );
    }
    // The pre-existing `.symtab` defined-function path still works.
    for (addr, want) in [
        (0x400664u64, "authenticate"),
        (0x4006ed, "accepted"),
        (0x4006fd, "rejected"),
        (0x40071d, "main"),
    ] {
        assert_eq!(
            syms.get(&addr).map(String::as_str),
            Some(want),
            "defined fn at {addr:#x}"
        );
    }
    // No symbol at address 0 (the old UND-import-at-0x0 bug) and no
    // `@VERSION` suffix leaks through.
    assert!(
        !syms.contains_key(&0),
        "no function should be registered at 0x0"
    );
    assert!(
        syms.values().all(|n| !n.contains('@')),
        "no @VERSION in names"
    );
}

/// (unlace `dynrelocs`) A real PIE: the three `R_X86_64_RELATIVE` slots are
/// filled in with `B + A`, the five `GLOB_DAT` / nine `JUMP_SLOT` entries all
/// name *undefined* imports and must be left alone, and only the two RELATIVE
/// slots that `PT_GNU_RELRO` (`0x3d78 + 0x288`) covers are reported constant —
/// `0x4008` sits in writable `.data` past the RELRO end and must not be.
#[test]
fn pie_dynamic_relocations_are_applied_and_relro_slots_are_constant() {
    use unlace_sleigh::loadimage::LoadImage;
    let path = format!(
        "{}/tests/fixtures/cet_pie_x86_64",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).expect("fixture");
    let mut img = ObjectLoadImage::from_bytes(&path, &bytes).expect("load PIE");
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    img.attach_to_space(Rc::clone(&ram));

    let read_u64 = |img: &mut ObjectLoadImage, vma: u64| -> u64 {
        let mut buf = [0u8; 8];
        img.load_fill(&mut buf, &Address::new(Rc::clone(&ram), vma))
            .expect("mapped");
        u64::from_le_bytes(buf)
    };
    assert_eq!(
        read_u64(&mut img, 0x3d78),
        0x1240,
        ".init_array RELATIVE slot"
    );
    assert_eq!(
        read_u64(&mut img, 0x3d80),
        0x1200,
        ".fini_array RELATIVE slot"
    );
    assert_eq!(read_u64(&mut img, 0x4008), 0x4008, ".data RELATIVE slot");
    // The undefined GLOB_DAT / JUMP_SLOT imports keep the linker's bytes.
    assert_eq!(
        read_u64(&mut img, 0x3fd8),
        0,
        "__libc_start_main GLOB_DAT untouched"
    );

    assert_eq!(
        img.dynreloc_const_ranges(),
        &[(0x3d78u64, 0x3d7fu64), (0x3d80, 0x3d87)],
        "only the RELRO-covered slots are constant"
    );
}

/// (GH #1333) A chained-fixup Mach-O maps its pointer slots as the pointers
/// dyld writes, not the chain words on disk: both rebases resolve and the
/// import slot reads zero, in `ld64.lld`'s layout and in Apple `ld64`'s.
#[test]
fn macho_chained_fixups_are_applied_to_the_image() {
    for name in ["macho_ptrslots_arm64", "macho_ptrslots_offset_arm64"] {
        let path = format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR"));
        let bytes = std::fs::read(&path).unwrap_or_else(|e| panic!("read {path}: {e}"));
        let m = manager();
        let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
        let mut img = ObjectLoadImage::from_bytes(&path, &bytes).unwrap();
        img.attach_to_space(Rc::clone(&ram));
        let words = img
            .load(24, &Address::new(Rc::clone(&ram), 0x100004000))
            .unwrap();
        let read = |i: usize| u64::from_le_bytes(words[i * 8..i * 8 + 8].try_into().unwrap());
        assert_eq!(
            (read(0), read(1), read(2)),
            (0x100000440, 0x1000003c8, 0),
            "{name}"
        );
    }
}

#[test]
fn cet_plt_sec_imports_resolve_at_call_targets() {
    // PIE + CET: calls target `.plt.sec` (`endbr64; FF 25`).  The stub entry
    // (the call target) is the endbr64, so names must land there, not at the
    // `FF 25` four bytes in.
    let syms = fixture_funcsyms("cet_pie_x86_64");
    assert_eq!(syms.get(&0x10d0).map(String::as_str), Some("free"));
    assert_eq!(syms.get(&0x10e0).map(String::as_str), Some("fread"));
    assert!(syms.values().any(|n| n == "fclose"), "fclose import");
    assert!(syms.values().any(|n| n == "memcmp"), "memcmp import");
    assert!(!syms.contains_key(&0));
    assert!(syms.values().all(|n| !n.contains('@')));
}

#[test]
fn stripped_dynamic_plt_imports_resolve_without_symtab() {
    // No `.symtab`: PLT resolution must work off `.dynsym`/`.rela.plt` alone.
    let syms = fixture_funcsyms("stripped_dynamic_x86_64");
    for want in ["free", "fread", "fclose", "memcmp", "fprintf", "malloc"] {
        assert!(syms.values().any(|n| n == want), "missing import {want}");
    }
    assert!(!syms.contains_key(&0));
}

#[test]
fn mips_stub_imports_resolve_to_named_functions() {
    // MIPS o32 (`plt_mips32`, big-endian, `-O0`): no `.plt`/`R_MIPS_JUMP_SLOT`.
    // The import stub→name correspondence comes from the dynamic-symbol GOT
    // layout (`DT_MIPS_LOCAL_GOTNO`/`DT_MIPS_GOTSYM`); `resolve_mips_imports`
    // names each import's `.MIPS.stubs` stub address (= the dynsym `st_value`).
    let syms = fixture_funcsyms("plt_mips32");
    // The linker label at the section start is an alias of the first import.
    for (addr, want) in [
        (0x400800u64, "puts"),
        (0x4007f0, "printf"),
        (0x4007e0, "__libc_start_main"),
    ] {
        assert_eq!(
            syms.get(&addr).map(String::as_str),
            Some(want),
            "MIPS import at {addr:#x}"
        );
    }
    // The defined `.symtab`/`.dynsym` `main` still resolves.
    assert_eq!(syms.get(&0x400700u64).map(String::as_str), Some("main"));
    // No symbol at 0x0 and no `@VERSION` leakage.
    assert!(
        !syms.contains_key(&0),
        "no function should be registered at 0x0"
    );
    assert!(
        syms.values().all(|n| !n.contains('@')),
        "no @VERSION in names"
    );
}

#[test]
fn mips_got_const_ranges_cover_external_slots() {
    // The GOT external slots that hold the stub addresses must be reported as
    // constant ranges (so the engine folds the `lw $t9, off($gp)` indirect
    // load).  Layout: PLTGOT=0x411020, LOCAL_GOTNO=6, GOTSYM=5, ptr=4 →
    // got_index(i)=6+(i-5); puts(dynidx7)→slot 0x411040, printf(dynidx8)→0x411044.
    let path = format!("{}/tests/fixtures/plt_mips32", env!("CARGO_MANIFEST_DIR"));
    let bytes = std::fs::read(&path).unwrap();
    let file = object::File::parse(&*bytes).unwrap();
    let ranges = crate::loader::elf_plt::mips_got_const_ranges(&file);
    // Each range is a single 4-byte pointer slot.
    assert!(
        ranges.iter().all(|&(a, b)| b == a + 3),
        "4-byte slot ranges: {ranges:?}"
    );
    let starts: std::collections::HashSet<u64> = ranges.iter().map(|&(a, _)| a).collect();
    assert!(
        starts.contains(&0x411040),
        "puts GOT slot 0x411040 in {ranges:?}"
    );
    assert!(
        starts.contains(&0x411044),
        "printf GOT slot 0x411044 in {ranges:?}"
    );
    assert!(
        !starts.contains(&0x41103c),
        "__gmon_start__ has no stub: {ranges:?}"
    );
}

#[test]
fn et_rel_ptx_fix_output_parameters_loads_and_rebases() {
    // (unlace) The ET_REL relocatable-object path on the real testcase binary
    // (angr `test_decompiling_ptx_fix_output_parameters`). Before this
    // feature, `ptx.o` (a `.o` with no PT_LOAD segments) mapped zero bytes
    // and every function failed with "Unable to load N bytes". Now the
    // SHF_ALLOC sections are laid out above RELOC_BASE (0x400000) and the
    // symbols rebased.
    let syms = fixture_funcsyms("ptx.o");
    // `fix_output_parameters` is a LOCAL FUNC at .text+0x660; .text is the
    // first SHF_ALLOC section -> RELOC_BASE, so it rebases to 0x400660
    // (matching angr's CLE default layout).
    assert_eq!(
        syms.get(&0x400660).map(String::as_str),
        Some("fix_output_parameters"),
        "fix_output_parameters must rebase to 0x400660"
    );
    // Undefined externals referenced by the `.rela.text` calls are bound to
    // synthetic call targets and named, so calls render by name.
    for want in ["strlen", "dcgettext", "error"] {
        assert!(syms.values().any(|n| n == want), "missing extern {want}");
    }
    // The bytes at `fix_output_parameters` actually load now (the original
    // bug was the DataUnavailError out of `load_fill`).
    let path = format!("{}/tests/fixtures/ptx.o", env!("CARGO_MANIFEST_DIR"));
    let bytes = std::fs::read(&path).unwrap();
    let m = manager();
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut img = ObjectLoadImage::from_bytes(&path, &bytes).unwrap();
    img.attach_to_space(Rc::clone(&ram));
    let got = img.load(4, &Address::new(Rc::clone(&ram), 0x400660));
    assert!(
        got.is_ok(),
        "fix_output_parameters bytes must load: {got:?}"
    );
}

/// (GH #1339) A Mach-O export outside every code section names data: the
/// `__DATA,__data` globals of `macho_datasyms_arm64` are data symbols and
/// lookup names, not function entries, and neither is the Mach header
/// symbol at the image base. `_audit_global` extends to `_audit_message`
/// eight bytes on, which runs to the end of `__data`.
#[test]
fn macho_data_exports_are_not_function_entries() {
    let syms = fixture_funcsyms("macho_datasyms_arm64");
    let mut entries: Vec<(u64, &str)> = syms
        .iter()
        .map(|(addr, name)| (*addr, name.as_str()))
        .collect();
    entries.sort_unstable();
    assert_eq!(
        entries,
        vec![(0x1000003c8, "_audit_read"), (0x1000003d4, "_main")]
    );

    let path = format!(
        "{}/tests/fixtures/macho_datasyms_arm64",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).unwrap_or_else(|e| panic!("read {path}: {e}"));
    let img = ObjectLoadImage::from_bytes(&path, &bytes).unwrap();
    let data = img.data_symbols();
    for want in [
        (0x100004000u64, "_audit_global", 8),
        (0x100004008, "_audit_message", 8),
    ] {
        assert!(
            data.contains(&(want.0, want.1.to_string(), want.2)),
            "{want:?} must be a data symbol of that extent: {data:?}"
        );
    }
    for (addr, name) in [
        (0x100004000u64, "audit_global"),
        (0x100004000, "_audit_global"),
        (0x100004008, "audit_message"),
        (0x100004008, "_audit_message"),
        (0x100000000, "__mh_execute_header"),
    ] {
        assert!(
            img.data_exports().contains(&(addr, name.to_string())),
            "{name} @ {addr:#x} must be a data lookup name: {:?}",
            img.data_exports()
        );
    }
}

/// (GH #1349) A dylib whose `nlist` keeps one of three exports: the trie
/// names the unnamed entry, and its second name at the named entry is an
/// alias.
#[test]
fn macho_trie_names_fill_a_partial_symbol_table() {
    let path = format!(
        "{}/tests/fixtures/macho_trie_partial_arm64",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).unwrap_or_else(|e| panic!("read {path}: {e}"));
    let img = ObjectLoadImage::from_bytes(&path, &bytes).unwrap();
    let mut primary = img.func_symbols();
    primary.sort_unstable();
    assert_eq!(
        primary,
        vec![
            (0x240, "_audit_export_a".into()),
            (0x248, "_audit_caller".into())
        ]
    );
    assert_eq!(
        img.func_symbol_aliases(),
        vec![(0x240, "_audit_export_b".to_string())]
    );
}

/// (GH #1349) A dylib stripped of every `nlist` entry still exports its
/// names through the export trie: its two functions are entries under the
/// symbol-table spelling, in either trie layout, and its data export is a
/// data symbol and a lookup name, as in the unstripped dylib.
#[test]
fn macho_trie_names_survive_a_stripped_symbol_table() {
    for fixture in ["macho_trie_exports_arm64", "macho_trie_exports_info_arm64"] {
        let mut entries: Vec<(u64, String)> = fixture_funcsyms(fixture).into_iter().collect();
        entries.sort_unstable();
        assert_eq!(
            entries,
            vec![
                (0x328, "_audit_exported_function".into()),
                (0x340, "_audit_caller".into())
            ],
            "{fixture}"
        );
        let path = format!("{}/tests/fixtures/{}", env!("CARGO_MANIFEST_DIR"), fixture);
        let bytes = std::fs::read(&path).unwrap_or_else(|e| panic!("read {path}: {e}"));
        let img = ObjectLoadImage::from_bytes(&path, &bytes).unwrap();
        assert_eq!(
            img.data_symbols(),
            vec![(0x4000, "_audit_exported_data".to_string(), 4)],
            "{fixture}"
        );
        for name in ["audit_exported_data", "_audit_exported_data"] {
            assert!(
                img.data_exports().contains(&(0x4000, name.to_string())),
                "{fixture}: {name} must be a data lookup name: {:?}",
                img.data_exports()
            );
        }
    }
}

#[test]
fn faillog_data_symbols_carry_the_copy_reloc_externs() {
    // (GH-184) The stripped shadow `faillog` (identical bytes to
    // `tests/bug-repro/faillog`, md5 3bab801d856c5fdb175fecf069c2b4f5) defines
    // exactly four `STT_OBJECT` entries in `.dynsym` — the copy-relocated
    // (`R_X86_64_COPY`) libc externs. Before the data half of the symbol
    // walks was read, all four rendered `dat_<addr>`
    // (`__fprintf_chk(dat_61a0,...)` where every other decompiler prints
    // `stderr`). The `st_size` is load-bearing: an 8-byte load's
    // `queryContainer(addr, 8)` misses a size-1 install.
    let path = format!(
        "{}/tests/fixtures/datasyms_faillog_x86_64",
        env!("CARGO_MANIFEST_DIR")
    );
    let bytes = std::fs::read(&path).unwrap_or_else(|e| panic!("read {path}: {e}"));
    let img = ObjectLoadImage::from_bytes(&path, &bytes).unwrap();
    let syms = img.data_symbols();
    let by_addr: std::collections::HashMap<u64, (String, u64)> =
        syms.iter().map(|(a, n, s)| (*a, (n.clone(), *s))).collect();
    for (addr, name, size) in [
        (0x6160u64, "stdout", 8u64),
        (0x61a0, "stderr", 8),
        (0x6168, "optind", 4),
        (0x6180, "optarg", 8),
    ] {
        assert_eq!(
            by_addr.get(&addr),
            Some(&(name.to_string(), size)),
            "expected {name} @ {addr:#x} size {size}; got {syms:?}"
        );
    }
    // Exactly the four defined OBJECT entries — no zero-size linker markers
    // (`__bss_start`, `_edata`, `_end` are sizeless and must be dropped), no
    // UND import placeholders, no `@VERSION` leakage (`stderr@GLIBC_2.2.5`
    // strips to `stderr`).
    assert_eq!(
        syms.len(),
        4,
        "exactly the four copy-reloc externs: {syms:?}"
    );
    assert!(
        syms.iter().all(|(_, n, _)| !n.contains('@')),
        "no @VERSION in names"
    );
    assert!(syms.iter().all(|(_, _, s)| *s > 0), "no zero-size entries");
}

#[test]
fn cpp_mangled_symbol_is_demangled_name_only() {
    // The unlace `GnuDemanglerAnalyzer` analog (`demangle`): a defined C++
    // method `_ZN3foo3Bar3bazEi` must surface in the funcsym stream as the
    // demangled NAME-ONLY form `foo::Bar::baz` — not the raw mangled symbol,
    // and not the full c++filt signature `foo::Bar::baz(int)` (the trailing
    // `(int)` would corrupt unlace's `::` scope splitter).
    let syms = fixture_funcsyms("cpp_mangled_x86_64");
    assert!(
        syms.values().any(|n| n == "foo::Bar::baz"),
        "demangled name-only `foo::Bar::baz` expected; got {syms:?}"
    );
    // The raw mangled symbol must NOT survive into the stream...
    assert!(
        !syms.values().any(|n| n.starts_with("_ZN3foo3Bar3baz")),
        "raw mangled symbol must be demangled"
    );
    // ...and no signature tail leaked through the name-only reduction.
    assert!(
        !syms.values().any(|n| n.contains('(') || n.contains('<')),
        "no signature / template leakage in funcsym names"
    );
    // `main` is a plain C-ABI name: not mangled, passes through unchanged.
    assert!(syms.values().any(|n| n == "main"), "main passes through");
}

#[test]
fn msvc_mangled_coff_symbols_are_demangled_name_only() {
    // Multi-format loader PR-9: the loader's `demangle_funcsym_name` now feeds
    // the MSVC arm, so a `?`-prefixed `cl.exe` symbol from a COFF object
    // surfaces in the funcsym stream as the demangled NAME-ONLY form — not the
    // raw `?foo@Bar@@QEAAHH@Z`, and not the full `Bar::foo(int)` signature.
    // (`msvc_mangled.obj`: clang `-target x86_64-pc-windows-msvc`; cl.exe is
    // unavailable on Linux but the windows-msvc target emits real MSVC
    // mangling — see tests/fixtures/msvc_mangled.cpp.)
    let syms = fixture_funcsyms("msvc_mangled.obj");
    assert!(
        syms.values().any(|n| n == "Bar::foo"),
        "demangled name-only `Bar::foo` (from ?foo@Bar@@QEAAHH@Z) expected; got {syms:?}"
    );
    assert!(
        syms.values().any(|n| n == "ns::g"),
        "demangled name-only `ns::g` (from ?g@ns@@YAHHH@Z) expected; got {syms:?}"
    );
    assert!(
        syms.values().any(|n| n == "freefunc"),
        "demangled name-only `freefunc` (from ?freefunc@@YAHH@Z) expected; got {syms:?}"
    );
    // No raw `?`-mangled symbol survives, and no signature/template tail leaks
    // through the name-only reduction (it would corrupt the `::` scope splitter).
    assert!(
        !syms.values().any(|n| n.starts_with('?')),
        "raw MSVC-mangled symbol must be demangled, not passed through: {syms:?}"
    );
    assert!(
        !syms.values().any(|n| n.contains('(') || n.contains('@')),
        "no signature / raw-`@` leakage in funcsym names: {syms:?}"
    );
}

/// §2.2 fallback composition: a PE id (`...:windows`) pairs with the
/// default-model fallback (`...:gcc`/`...:default`), and a Mach-O x86-64 id
/// (`...:gcc`, already the arch default) pairs with `None` (primary == the
/// default, so no fallback is needed).
#[test]
fn format_language_ids_pair_with_default_model_fallback() {
    let pe = pe_language_ids();
    // x86-64 PE: primary windows, fallback gcc.
    let x64 = pe
        .iter()
        .find(|(p, _)| p == "x86:LE:64:default:windows")
        .expect("PE x86-64 windows id present");
    assert_eq!(
        x64.1.as_deref(),
        Some("x86:LE:64:default:gcc"),
        "PE windows must fall back to the gcc default model"
    );

    let macho = macho_language_ids();
    // x86-64 Mach-O: primary gcc IS the default → no fallback.
    let mx64 = macho
        .iter()
        .find(|(p, _)| p == "x86:LE:64:default:gcc")
        .expect("Mach-O x86-64 gcc id present");
    assert_eq!(
        mx64.1, None,
        "Mach-O x86-64 gcc is already the default model — no fallback"
    );
}
