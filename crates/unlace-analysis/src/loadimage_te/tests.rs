use super::synthetic::{CODE_FILE_OFFSET as SYNTHETIC_HEADER_SIZE, CODE_RVA, TeImage};
use super::*;
use object::pe::{
    IMAGE_FILE_MACHINE_AMD64, IMAGE_FILE_MACHINE_ARM64, IMAGE_FILE_MACHINE_ARMNT,
    IMAGE_FILE_MACHINE_I386,
};
use unlace_base::space::{AddrSpaceManager, ConstantSpace, addrspace_flags, spacetype};

fn synthetic_thumb_te() -> Vec<u8> {
    TeImage::thumb(&[0x07, 0x20, 0x70, 0x47]).build()
}

fn manager() -> AddrSpaceManager {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "ram",
            false,
            4,
            1,
            1,
            addrspace_flags::hasphysical,
            1,
            1,
        )))
        .unwrap();
    manager.set_default_code_space(1).unwrap();
    manager
}

#[test]
fn retained_header_is_mapped_at_its_stripped_load_address() {
    let mut bytes = synthetic_thumb_te();
    bytes[8..12].copy_from_slice(&0x201u32.to_le_bytes());
    bytes[12..16].copy_from_slice(&0x200u32.to_le_bytes());
    bytes[52..56].copy_from_slice(&0x200u32.to_le_bytes());
    bytes[60..64].copy_from_slice(&0x200u32.to_le_bytes());
    bytes[80..84].copy_from_slice(&[0x07, 0x20, 0x70, 0x47]);
    let expected_header = bytes[..80].to_vec();

    let mut image = TeLoadImage::from_bytes("aligned.te", &bytes).unwrap();
    let manager = manager();
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    image.attach_to_space(Rc::clone(&ram));

    let header_vma = 0x0040_0000 + 0x01d8 - TE_HEADER_SIZE as u64;
    let mut header = vec![0u8; expected_header.len()];
    image
        .load_fill(&mut header, &Address::new(Rc::clone(&ram), header_vma))
        .unwrap();
    assert_eq!(header, expected_header);
    assert!(image.get_segments().contains(&(
        header_vma,
        80,
        section_flags::DATA | section_flags::READONLY,
    )));

    let mut boundary = [0u8; 8];
    image
        .load_fill(&mut boundary, &Address::new(ram, header_vma + 76))
        .unwrap();
    assert_eq!(boundary, [0x20, 0, 0, 0x60, 0x07, 0x20, 0x70, 0x47]);
}

/// The ordinary PE layout: SectionAlignment 0x1000, FileAlignment 0x200.
/// The retained header is 0x50 file bytes mapped over 0xe50 of address
/// space, so deriving its FILE length from the `BaseOfCode` RVA delta
/// refuses the image outright.
#[test]
fn a_file_aligned_image_maps_its_header_with_a_zero_tail() {
    let bytes = TeImage::thumb(&[0x07, 0x20, 0x70, 0x47])
        .raw_pointer(0x200)
        .build();
    assert_eq!(
        bytes.len(),
        0x50 + 4,
        "the file holds only its real header plus the code"
    );

    let mut image = TeLoadImage::from_bytes("file-aligned.te", &bytes).unwrap();
    let manager = manager();
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    image.attach_to_space(Rc::clone(&ram));

    let header_vma = 0x0040_0000 + 0x01d8 - TE_HEADER_SIZE as u64;
    assert_eq!(
        image.get_segments(),
        vec![
            (
                header_vma,
                0xe50,
                section_flags::DATA | section_flags::READONLY
            ),
            (0x401000, 4, section_flags::CODE | section_flags::READONLY),
        ]
    );

    // The retained bytes, then the alignment slack the file does not hold.
    let mut retained = [0u8; 4];
    image
        .load_fill(&mut retained, &Address::new(Rc::clone(&ram), header_vma))
        .unwrap();
    assert_eq!(retained, [b'V', b'Z', 0xc2, 0x01]);
    let mut slack = [0xffu8; 4];
    image
        .load_fill(
            &mut slack,
            &Address::new(Rc::clone(&ram), header_vma + 0x50),
        )
        .unwrap();
    assert_eq!(slack, [0; 4], "the unbacked header tail reads as zero");

    let mut code = [0u8; 4];
    image
        .load_fill(&mut code, &Address::new(ram, 0x401000))
        .unwrap();
    assert_eq!(code, [0x07, 0x20, 0x70, 0x47]);
    assert_eq!(
        image.file_backed_segments(),
        vec![
            (
                header_vma,
                0x50,
                section_flags::DATA | section_flags::READONLY
            ),
            (0x401000, 4, section_flags::CODE | section_flags::READONLY),
        ]
    );
}

/// Reading from inside a mapping's unbacked tail is ordinary — every
/// zero-filled tail has one — so it must produce zeros. Slicing the
/// initialized bytes at an offset past their end aborts the process, and
/// only the exact `offset == len` boundary is legal, so a test that probes
/// the boundary alone misses it by one byte.
#[test]
fn a_read_starting_inside_an_unbacked_tail_reads_zeros() {
    let bytes = TeImage::thumb(&[0x07, 0x20, 0x70, 0x47])
        .raw_pointer(0x200)
        .build();
    let mut image = TeLoadImage::from_bytes("file-aligned.te", &bytes).unwrap();
    let manager = manager();
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    image.attach_to_space(Rc::clone(&ram));
    let header_vma = 0x0040_0000 + 0x01d8 - TE_HEADER_SIZE as u64;

    for offset in [0x50, 0x51, 0x52, 0xe00] {
        let mut slack = [0xffu8; 4];
        image
            .load_fill(
                &mut slack,
                &Address::new(Rc::clone(&ram), header_vma + offset),
            )
            .unwrap_or_else(|error| panic!("header slack at {offset:#x}: {}", error.explain()));
        assert_eq!(
            slack, [0; 4],
            "the header's unbacked slack reads as zero at {offset:#x}"
        );
    }

    // The same shape one section over: a `.text` whose VirtualSize runs
    // past its raw bytes.
    let mut tail = synthetic_thumb_te();
    tail[48..52].copy_from_slice(&8u32.to_le_bytes());
    let mut image = TeLoadImage::from_bytes("zero-tail.te", &tail).unwrap();
    image.attach_to_space(Rc::clone(&ram));
    let mut read = [0xffu8; 2];
    image
        .load_fill(&mut read, &Address::new(ram, 0x401005))
        .expect("the virtual tail is mapped memory");
    assert_eq!(read, [0, 0]);
}

/// The entry's low bit is Thumb state for the language that decodes the
/// image, which an explicit target may make something other than the
/// machine word's; the console folds by the resolved language, so the
/// loader must too, or the synthetic entry it installs can never be found.
#[test]
fn the_entry_bit_is_read_by_the_decoding_language() {
    let ia32 = TeImage::thumb(&[0xb8, 0x07, 0x00, 0x00, 0x00, 0xc3])
        .machine(IMAGE_FILE_MACHINE_I386)
        .build();
    assert_eq!(
        TeLoadImage::from_bytes("ia32.te", &ia32).unwrap().entry(),
        0x401001
    );
    let as_arm =
        TeLoadImage::from_bytes_with_target("ia32.te", &ia32, "ARM:LE:32:v8:default").unwrap();
    assert_eq!(
        as_arm.entry(),
        0x401000,
        "an ARM decode folds the bit whatever the machine"
    );
    assert!(
        !as_arm.entry_thumb_hint(),
        "IA-32 carries no ARM mode policy"
    );

    let arm = synthetic_thumb_te();
    assert_eq!(
        TeLoadImage::from_bytes("arm.te", &arm).unwrap().entry(),
        0x401000
    );
    let as_x86 =
        TeLoadImage::from_bytes_with_target("arm.te", &arm, "x86:LE:32:default:gcc").unwrap();
    assert_eq!(
        as_x86.entry(),
        0x401001,
        "an x86 decode keeps every entry bit"
    );
    assert!(!as_x86.entry_thumb_hint());
    assert!(!as_x86.whole_image_thumb());
}

/// Section flags come from the rule the PE loader applies to the same
/// characteristics, so identical section tables read alike whichever
/// container carries them — including an uninitialized section the
/// linker gave a nonzero raw size.
#[test]
fn section_flags_follow_the_pe_rule() {
    let mut bytes = TeImage::thumb(&[0x07, 0x20, 0x70, 0x47]).build();
    // `.text` becomes a writable uninitialized-data section that still
    // carries raw bytes.
    bytes[76..80].copy_from_slice(&0xc000_0080u32.to_le_bytes());
    bytes[8..12].copy_from_slice(&0x1000u32.to_le_bytes());
    let error = TeLoadImage::from_bytes("bss.te", &bytes).unwrap_err();
    assert!(
        error.explain().contains("entry point"),
        "{}",
        error.explain()
    );

    let mut bytes = TeImage::thumb(&[0x07, 0x20, 0x70, 0x47]).build();
    bytes[4] = 2;
    // Keep `.text` at the front; add a second, writable `.bss` record at
    // RVA 0x2000 whose four raw bytes follow the code in the file.
    let table = 40 + 40;
    bytes.resize(bytes.len() + 4, 0);
    let mut record = vec![0u8; 40];
    record[..4].copy_from_slice(b".bss");
    record[8..12].copy_from_slice(&4u32.to_le_bytes());
    record[12..16].copy_from_slice(&0x2000u32.to_le_bytes());
    record[16..20].copy_from_slice(&4u32.to_le_bytes());
    record[20..24].copy_from_slice(&0x1004u32.to_le_bytes());
    record[36..40].copy_from_slice(&0xc000_0080u32.to_le_bytes());
    bytes[table..table + 40].copy_from_slice(&record);
    let image = TeLoadImage::from_bytes("bss.te", &bytes).unwrap();
    let bss = image.get_segments()[2];
    assert_eq!(bss.0, 0x402000);
    assert_eq!(
        bss.2,
        section_flags::NOLOAD,
        "the PE rule marks an uninitialized section NOLOAD regardless of its raw size, and no DATA"
    );
    assert_eq!(image.section_metadata()[1].kind, "UninitializedData");

    // A discardable `.reloc` is `Other` on the PE path, so it is here too,
    // and `Other` carries no DATA bit.
    let mut bytes = TeImage::thumb(&[0x07, 0x20, 0x70, 0x47]).build();
    bytes.resize(bytes.len() + 4, 0);
    bytes[4] = 2;
    let mut record = vec![0u8; 40];
    record[..6].copy_from_slice(b".reloc");
    record[8..12].copy_from_slice(&4u32.to_le_bytes());
    record[12..16].copy_from_slice(&0x2000u32.to_le_bytes());
    record[16..20].copy_from_slice(&4u32.to_le_bytes());
    record[20..24].copy_from_slice(&0x1004u32.to_le_bytes());
    record[36..40].copy_from_slice(&0x4200_0040u32.to_le_bytes());
    bytes[80..120].copy_from_slice(&record);
    let image = TeLoadImage::from_bytes("reloc.te", &bytes).unwrap();
    assert_eq!(image.get_segments()[2].2, section_flags::READONLY);
    assert_eq!(image.section_metadata()[1].kind, "Other");
}

/// The checked-in stage fixture is byte-for-byte what the crate's own
/// builder produces, so its Python generator and this module cannot drift.
#[test]
fn the_stage_fixture_is_the_builders_output() {
    let checked_in = std::fs::read(concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/te_entrythumbflow_arm.te"
    ))
    .expect("the stage fixture is vendored");
    let built = TeImage::arm(&[0x07, 0x20, 0x70, 0x47, 0x1e, 0xff, 0x2f, 0xe1])
        .entry_rva(CODE_RVA | 1)
        .build();
    assert_eq!(checked_in, built);
}

/// `VZ` is two ASCII letters an unrelated file can open with; claiming the
/// format on the signature alone misdiagnoses every such input.
#[test]
fn the_format_probe_reads_more_than_the_signature() {
    let valid = synthetic_thumb_te();
    assert!(is_te_image(&valid));
    assert!(is_te_image(&valid[..TE_PROBE_LEN]));
    assert!(
        !is_te_image(&valid[..TE_PROBE_LEN - 1]),
        "a short prefix claims nothing"
    );

    assert!(!is_te_image(b"VZ this is prose, not a container"));
    // A TE for a machine unlace has no binding for is still a TE: the probe
    // claims it so the loader's own message names the machine.
    let mut unsupported_machine = valid.clone();
    unsupported_machine[2..4].copy_from_slice(&0x0ebcu16.to_le_bytes());
    assert!(is_te_image(&unsupported_machine));
    let error = TeLoadImage::from_bytes("ebc.te", &unsupported_machine).unwrap_err();
    assert!(
        error.explain().contains("unsupported machine value 0x0ebc"),
        "{}",
        error.explain()
    );
    let mut not_efi = valid.clone();
    not_efi[5] = 2;
    assert!(
        !is_te_image(&not_efi),
        "a Windows GUI subsystem is not a TE"
    );
    let mut no_stripped_header = valid;
    no_stripped_header[6..8].copy_from_slice(&40u16.to_le_bytes());
    assert!(!is_te_image(&no_stripped_header));
}

#[test]
fn rejects_section_raw_data_inside_the_retained_header() {
    // Adjusted file offset 0x40, inside the 0x50-byte TE header + section
    // table. A section starting exactly AT the table end is legal.
    let mut bytes = synthetic_thumb_te();
    bytes[60..64].copy_from_slice(&0x1f0u32.to_le_bytes());
    let error = TeLoadImage::from_bytes("raw-overlap.te", &bytes).unwrap_err();
    assert!(
        error.explain().contains("overlaps the retained TE headers"),
        "{}",
        error.explain()
    );
}

#[test]
fn rejects_an_unbacked_retained_header() {
    let bytes = synthetic_thumb_te();
    let error = TeLoadImage::from_bytes("unbacked-header.te", &bytes[..SYNTHETIC_HEADER_SIZE - 1])
        .unwrap_err();
    assert!(
        error
            .explain()
            .contains("retained header range extends past end of file"),
        "{}",
        error.explain()
    );
}

#[test]
fn te_defaults_to_uefi_abis_and_honors_explicit_windows_models() {
    for (machine, default, windows) in [
        (
            IMAGE_FILE_MACHINE_ARM64,
            "AARCH64:LE:64:v8A:default",
            "AARCH64:LE:64:v8A:windows",
        ),
        (
            IMAGE_FILE_MACHINE_I386,
            "x86:LE:32:default:gcc",
            "x86:LE:32:default:windows",
        ),
        (
            IMAGE_FILE_MACHINE_ARMNT,
            "ARM:LE:32:v8:default",
            "ARM:LE:32:v8:windows",
        ),
    ] {
        let bytes = TeImage::thumb(&[0x07, 0x20, 0x70, 0x47])
            .machine(machine)
            .entry_rva(CODE_RVA)
            .build();
        let automatic = TeLoadImage::from_bytes("abi.te", &bytes).unwrap();
        assert_eq!(
            automatic.get_arch_type(),
            default.as_bytes(),
            "machine {machine:#x}"
        );
        assert_eq!(automatic.fallback_arch_id(), None, "machine {machine:#x}");
        let explicit = TeLoadImage::from_bytes_with_target("abi.te", &bytes, windows).unwrap();
        assert_eq!(
            explicit.get_arch_type(),
            windows.as_bytes(),
            "machine {machine:#x}"
        );
    }
}

#[test]
fn ignores_zero_extent_section_records() {
    let mut bytes = synthetic_thumb_te();
    bytes[4] = 2;
    let image = TeLoadImage::from_bytes("synthetic.te", &bytes).unwrap();
    assert_eq!(image.get_segments().len(), 2);
    assert_eq!(image.entry(), 0x401000);
}

#[test]
fn parses_stripped_offsets_and_loads_original_vma() {
    let mut image = TeLoadImage::from_bytes("synthetic.te", &synthetic_thumb_te()).unwrap();
    assert_eq!(image.get_arch_type(), b"ARM:LE:32:v8:default");
    assert_eq!(image.fallback_arch_id(), None);
    assert_eq!(image.entry(), 0x401000);
    assert_eq!(
        image.get_segments(),
        vec![
            (
                0x4001b0,
                0xe50,
                section_flags::DATA | section_flags::READONLY,
            ),
            (0x401000, 4, section_flags::CODE | section_flags::READONLY),
        ]
    );
    assert_eq!(image.file_backed_segments(), image.get_segments());
    let code_offset = synthetic_thumb_te()
        .windows(4)
        .position(|w| w == [0x07, 0x20, 0x70, 0x47])
        .map(|at| at as u64);
    assert_eq!(
        image.section_metadata(),
        vec![ObjectSectionMetadata {
            name: ".text".to_string(),
            vma: 0x401000,
            size: 4,
            kind: "Text".to_string(),
            file_offset: code_offset,
            file_size: code_offset.map(|_| 4),
            flags: section_flags::CODE | section_flags::READONLY,
        }]
    );
    assert!(!image.whole_image_thumb());

    let mut armnt = synthetic_thumb_te();
    armnt[2..4].copy_from_slice(&IMAGE_FILE_MACHINE_ARMNT.to_le_bytes());
    let armnt = TeLoadImage::from_bytes("armnt.te", &armnt).unwrap();
    assert_eq!(armnt.get_arch_type(), b"ARM:LE:32:v8:default");
    assert!(armnt.whole_image_thumb());

    let manager = manager();
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    image.attach_to_space(Rc::clone(&ram));
    let mut loaded = [0u8; 4];
    image
        .load_fill(&mut loaded, &Address::new(ram, 0x401000))
        .unwrap();
    assert_eq!(loaded, [0x07, 0x20, 0x70, 0x47]);
}

#[test]
fn publishes_every_te_mapping_as_a_segment() {
    let mut image = TeLoadImage::from_bytes("synthetic.te", &synthetic_thumb_te()).unwrap();
    let manager = manager();
    image.attach_to_space(Rc::clone(manager.get_space_by_name("ram").unwrap()));
    let mut walked = Vec::new();
    let mut record = LoadImageSection::default();
    image.open_section_info();
    loop {
        let more = image.get_next_section(&mut record);
        walked.push((record.address.get_offset(), record.size, record.flags));
        if !more {
            break;
        }
    }
    assert_eq!(image.get_segments(), walked);
}

/// The machine table is the object loader's own composer: a TE and a PE
/// carrying the same machine select the same SLEIGH variant, and every id
/// the table can produce is enumerated for the cross-crate resolve gate.
#[test]
fn machine_table_composes_the_shared_language_ids() {
    let mut arm = synthetic_thumb_te();
    arm[2..4].copy_from_slice(&IMAGE_FILE_MACHINE_ARM.to_le_bytes());
    arm[8..12].copy_from_slice(&0x1000u32.to_le_bytes());
    let arm = TeLoadImage::from_bytes("arm.te", &arm).unwrap();
    assert_eq!(arm.get_arch_type(), b"ARM:LE:32:v8:default");
    assert_eq!(arm.fallback_arch_id(), None);
    assert!(!arm.whole_image_thumb());
    assert!(!arm.entry_thumb_hint());

    let mut x64 = synthetic_thumb_te();
    x64[2..4].copy_from_slice(&IMAGE_FILE_MACHINE_AMD64.to_le_bytes());
    x64[8..12].copy_from_slice(&0x1000u32.to_le_bytes());
    let x64 = TeLoadImage::from_bytes("x64.te", &x64).unwrap();
    assert_eq!(x64.get_arch_type(), b"x86:LE:64:default:windows");
    assert_eq!(
        x64.fallback_arch_id(),
        Some(b"x86:LE:64:default:gcc".as_slice())
    );

    let ids = te_language_ids();
    assert_eq!(ids.len(), PE_MACHINES.len());
    assert!(
        ids.iter()
            .any(|(primary, fallback)| primary == "x86:LE:64:default:windows"
                && fallback.as_deref() == Some("x86:LE:64:default:gcc"))
    );
    assert!(
        ids.iter()
            .filter(|(primary, _)| primary == "ARM:LE:32:v8:default")
            .count()
            == 3
    );
    assert!(machine_info(0x0166).is_none(), "MIPS is not a UEFI binding");
}

#[test]
fn an_overlay_replaces_a_complete_mapped_span_atomically() {
    let mut image = TeLoadImage::from_bytes("synthetic.te", &synthetic_thumb_te()).unwrap();
    let manager = manager();
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    image.attach_to_space(Rc::clone(&ram));

    image
        .unlace_overlay_bytes(&Address::new(Rc::clone(&ram), 0x401000), &[0x2a, 0x20])
        .expect("the code section maps both bytes");
    let mut loaded = [0u8; 4];
    image
        .load_fill(&mut loaded, &Address::new(Rc::clone(&ram), 0x401000))
        .unwrap();
    assert_eq!(loaded, [0x2a, 0x20, 0x70, 0x47]);

    let error = image
        .unlace_overlay_bytes(&Address::new(Rc::clone(&ram), 0x401002), &[0x90; 4])
        .unwrap_err();
    assert!(error.explain().contains("no loaded segment maps"));
    image
        .load_fill(&mut loaded, &Address::new(ram, 0x401000))
        .unwrap();
    assert_eq!(
        loaded,
        [0x2a, 0x20, 0x70, 0x47],
        "a rejected partial overlay must change nothing"
    );

    let other = Rc::clone(manager.get_space_by_name("const").unwrap());
    assert!(
        image
            .unlace_overlay_bytes(&Address::new(other, 0x401000), &[0x90])
            .is_err()
    );
}

#[test]
fn an_overlay_materializes_a_mapped_virtual_tail() {
    let mut bytes = synthetic_thumb_te();
    bytes[48..52].copy_from_slice(&8u32.to_le_bytes());
    let mut image = TeLoadImage::from_bytes("zero-tail.te", &bytes).unwrap();
    let manager = manager();
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    image.attach_to_space(Rc::clone(&ram));

    image
        .unlace_overlay_bytes(&Address::new(Rc::clone(&ram), 0x401006), &[0xde, 0xad])
        .expect("the virtual tail is mapped memory");
    let mut loaded = [0xffu8; 4];
    image
        .load_fill(&mut loaded, &Address::new(ram, 0x401004))
        .unwrap();
    assert_eq!(loaded, [0, 0, 0xde, 0xad]);
}

#[test]
fn virtual_size_excludes_raw_file_alignment_padding() {
    let mut bytes = synthetic_thumb_te();
    bytes.resize(SYNTHETIC_HEADER_SIZE + 16, 0xa5);
    bytes[56..60].copy_from_slice(&16u32.to_le_bytes());

    let mut image = TeLoadImage::from_bytes("padded.te", &bytes).unwrap();
    assert_eq!(
        image.get_segments(),
        vec![
            (
                0x4001b0,
                0xe50,
                section_flags::DATA | section_flags::READONLY,
            ),
            (0x401000, 4, section_flags::CODE | section_flags::READONLY),
        ]
    );
    let manager = manager();
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    image.attach_to_space(Rc::clone(&ram));
    let mut byte = [0u8; 1];
    assert!(
        image
            .load_fill(&mut byte, &Address::new(Rc::clone(&ram), 0x401003))
            .is_ok()
    );
    assert!(
        image
            .load_fill(&mut byte, &Address::new(ram, 0x401004))
            .is_err()
    );

    let mut entry_in_padding = bytes.clone();
    entry_in_padding[8..12].copy_from_slice(&0x1005u32.to_le_bytes());
    let error = TeLoadImage::from_bytes("entry-padding.te", &entry_in_padding).unwrap_err();
    assert!(
        error.explain().contains("entry point"),
        "{}",
        error.explain()
    );

    let mut directory_in_padding = bytes;
    directory_in_padding[24..28].copy_from_slice(&0x1004u32.to_le_bytes());
    directory_in_padding[28..32].copy_from_slice(&1u32.to_le_bytes());
    let error = TeLoadImage::from_bytes("directory-padding.te", &directory_in_padding).unwrap_err();
    assert!(
        error.explain().contains("outside the mapped sections"),
        "{}",
        error.explain()
    );
}

#[test]
fn virtual_tail_is_zero_filled_and_zero_virtual_size_uses_raw_extent() {
    let mut bytes = synthetic_thumb_te();
    bytes[48..52].copy_from_slice(&8u32.to_le_bytes());
    let mut image = TeLoadImage::from_bytes("zero-tail.te", &bytes).unwrap();
    assert_eq!(
        image.get_segments()[1],
        (0x401000, 8, section_flags::CODE | section_flags::READONLY)
    );
    assert_eq!(
        image.file_backed_segments()[1],
        (0x401000, 4, section_flags::CODE | section_flags::READONLY)
    );
    let manager = manager();
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    image.attach_to_space(Rc::clone(&ram));
    let mut loaded = [0xffu8; 8];
    image
        .load_fill(&mut loaded, &Address::new(ram, 0x401000))
        .unwrap();
    assert_eq!(loaded, [0x07, 0x20, 0x70, 0x47, 0, 0, 0, 0]);

    let mut zero_virtual = synthetic_thumb_te();
    zero_virtual[48..52].fill(0);
    let image = TeLoadImage::from_bytes("zero-virtual.te", &zero_virtual).unwrap();
    assert_eq!(image.get_segments()[1].1, 4);

    let mut unbacked_entry = synthetic_thumb_te();
    unbacked_entry[48..52].copy_from_slice(&8u32.to_le_bytes());
    unbacked_entry[8..12].copy_from_slice(&0x1005u32.to_le_bytes());
    let error = TeLoadImage::from_bytes("unbacked-entry.te", &unbacked_entry).unwrap_err();
    assert!(
        error.explain().contains("not backed by file data"),
        "{}",
        error.explain()
    );
}

#[test]
fn rejects_malformed_header_section_and_entry_ranges() {
    let valid = synthetic_thumb_te();
    let cases: &[(usize, &[u8], &str)] = &[
        (5, &[0], "subsystem"),
        (6, &40u16.to_le_bytes(), "StrippedSize"),
        (
            12,
            &500u32.to_le_bytes(),
            "does not contain the section table",
        ),
        (12, &0x100u32.to_le_bytes(), "BaseOfCode"),
        (60, &0x100u32.to_le_bytes(), "file offset underflows"),
        (56, &0x1000u32.to_le_bytes(), "past end of file"),
        (8, &0x2001u32.to_le_bytes(), "entry point"),
        (24, &0x1000u32.to_le_bytes(), "zero RVA"),
    ];
    for &(offset, replacement, expected) in cases {
        let mut bytes = valid.clone();
        bytes[offset..offset + replacement.len()].copy_from_slice(replacement);
        if offset == 24 {
            bytes[24..28].fill(0);
            bytes[28..32].copy_from_slice(&4u32.to_le_bytes());
        }
        let error = TeLoadImage::from_bytes("bad.te", &bytes).unwrap_err();
        assert!(
            error.explain().contains(expected),
            "expected {expected:?}, got {}",
            error.explain()
        );
    }

    let mut overlap = valid.clone();
    overlap[52..56].copy_from_slice(&0x0fffu32.to_le_bytes());
    let error = TeLoadImage::from_bytes("overlap.te", &overlap).unwrap_err();
    assert!(
        error.explain().contains("overlaps the retained TE headers"),
        "{}",
        error.explain()
    );

    assert!(TeLoadImage::from_bytes("short.te", &valid[..39]).is_err());
}

#[test]
fn explicit_target_must_match_container_width_and_endian() {
    let bytes = synthetic_thumb_te();
    let automatic = TeLoadImage::from_bytes_with_target("synthetic.te", &bytes, "default").unwrap();
    assert_eq!(automatic.get_arch_type(), b"ARM:LE:32:v8:default");
    let endian =
        TeLoadImage::from_bytes_with_target("synthetic.te", &bytes, "ARM:BE:32:v4t:default")
            .unwrap_err();
    assert!(endian.explain().contains("BE-endian"));
    let mixed_endian = TeLoadImage::from_bytes_with_target(
        "synthetic.te",
        &bytes,
        "ARM:LEBE:32:v8LEInstruction:default",
    )
    .unwrap_err();
    assert!(mixed_endian.explain().contains("LEBE-endian"));
    let width =
        TeLoadImage::from_bytes_with_target("synthetic.te", &bytes, "AARCH64:LE:64:v8A:default")
            .unwrap_err();
    assert!(width.explain().contains("64-bit"));
    let narrow = TeLoadImage::from_bytes_with_target("synthetic.te", &bytes, "avr8:LE:16:default")
        .unwrap_err();
    assert!(narrow.explain().contains("16-bit"));
}
