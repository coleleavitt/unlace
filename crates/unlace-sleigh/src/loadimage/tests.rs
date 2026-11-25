use super::*;
use unlace_base::space::{AddrSpaceManager, ConstantSpace, addrspace_flags, spacetype};

/// const(0) + ram(1), little endian, 4-byte addresses.
fn manager(wordsize: u32) -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        4,
        wordsize,
        1,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m.set_default_code_space(1).unwrap();
    m
}

/// Write a 16-byte raw file 00 01 02 ... 0f and return its path.
fn write_raw_file(name: &str) -> std::path::PathBuf {
    let mut path = std::env::temp_dir();
    path.push(format!(
        "unlace_rawloadimage_{}_{}",
        std::process::id(),
        name
    ));
    let bytes: Vec<u8> = (0u8..16).collect();
    std::fs::write(&path, bytes).unwrap();
    path
}

#[test]
fn raw_load_image_exact_reads_and_zero_fill() {
    let m = manager(1);
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let path = write_raw_file("basic");
    let mut img = RawLoadImage::new(path.to_str().unwrap());
    img.attach_to_space(Rc::clone(&ram));
    img.open().unwrap();
    assert_eq!(img.get_arch_type(), b"unknown".to_vec());
    assert_eq!(img.get_file_name(), path.to_str().unwrap());
    assert_eq!(img.file_size(), 16);
    assert_eq!(img.vma(), 0);
    img.open_section_info();
    let mut section = LoadImageSection::default();
    assert!(!img.get_next_section(&mut section));
    assert_eq!(section.address.get_offset(), 0);
    assert_eq!(section.size, 16);
    assert_eq!(section.flags, section_flags::CODE);

    // vma defaults to 0: address == file offset
    let mut buf = [0xaau8; 4];
    img.load_fill(&mut buf, &Address::new(Rc::clone(&ram), 0))
        .unwrap();
    assert_eq!(buf, [0, 1, 2, 3]);
    img.load_fill(&mut buf, &Address::new(Rc::clone(&ram), 12))
        .unwrap();
    assert_eq!(buf, [12, 13, 14, 15]);

    // Read straddling EOF: bytes from the file, then zero fill
    let mut buf = [0xaau8; 8];
    img.load_fill(&mut buf, &Address::new(Rc::clone(&ram), 12))
        .unwrap();
    assert_eq!(buf, [12, 13, 14, 15, 0, 0, 0, 0]);

    // load() convenience wrapper
    let loaded = img.load(3, &Address::new(Rc::clone(&ram), 5)).unwrap();
    assert_eq!(loaded, vec![5, 6, 7]);

    std::fs::remove_file(&path).unwrap();
}

#[test]
fn raw_load_image_from_bytes_reads_like_the_file() {
    let m = manager(1);
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut img = RawLoadImage::from_bytes("module", (0u8..16).collect());
    img.attach_to_space(Rc::clone(&ram));
    img.adjust_vma(0x10000);
    assert!(img.open().is_err(), "an in-memory image is already open");
    assert_eq!(img.file_size(), 16);
    let mut buf = [0xaau8; 8];
    img.load_fill(&mut buf, &Address::new(Rc::clone(&ram), 0x1000c))
        .unwrap();
    assert_eq!(buf, [12, 13, 14, 15, 0, 0, 0, 0]);
    let mut buf = [0xaau8; 2];
    assert!(
        img.load_fill(&mut buf, &Address::new(Rc::clone(&ram), 0xfffe))
            .is_err()
    );
}

#[test]
fn raw_load_image_from_segments_maps_only_its_runs() {
    let m = manager(1);
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let ro = section_flags::DATA | section_flags::READONLY;
    let runs = vec![
        (0x4000_0000, vec![5, 6, 7, 8], section_flags::CODE),
        (0x3000_0000, vec![1, 2], ro),
        (0x3800_0000, vec![], 0),
    ];
    let (mut img, base) = RawLoadImage::from_segments("image", runs).unwrap();
    assert_eq!(base, 0x3000_0000);
    img.attach_to_space(Rc::clone(&ram));
    img.adjust_vma(base as i64);
    let mut buf = [0xaau8; 4];
    img.load_fill(&mut buf, &Address::new(Rc::clone(&ram), 0x3000_0001))
        .unwrap();
    assert_eq!(buf, [2, 0, 0, 0], "past a run reads as zero");
    img.load_fill(&mut buf, &Address::new(Rc::clone(&ram), 0x4000_0000))
        .unwrap();
    assert_eq!(buf, [5, 6, 7, 8]);
    for unmapped in [0x2fff_ffff, 0x3000_0002, 0x3800_0000, 0x4000_0004] {
        assert!(
            img.load_fill(&mut buf, &Address::new(Rc::clone(&ram), unmapped))
                .is_err(),
            "{unmapped:#x}"
        );
    }

    let mut record = LoadImageSection::default();
    img.open_section_info();
    assert!(img.get_next_section(&mut record));
    assert_eq!(
        (record.address.get_offset(), record.size, record.flags),
        (0x3000_0000, 2, ro)
    );
    assert!(!img.get_next_section(&mut record));
    assert_eq!(
        (record.address.get_offset(), record.size, record.flags),
        (0x4000_0000, 4, section_flags::CODE)
    );
    assert!(!img.get_next_section(&mut record));

    let mut readonly = RangeList::new();
    img.get_readonly(&mut readonly);
    assert_eq!(readonly.num_ranges(), 1);

    let overlap = vec![(0x1000, vec![0; 8], 0), (0x1004, vec![0; 8], 0)];
    assert!(RawLoadImage::from_segments("image", overlap).is_none());
    assert!(RawLoadImage::from_segments("image", vec![(u64::MAX, vec![0; 2], 0)]).is_none());
    assert!(RawLoadImage::from_segments("image", Vec::new()).is_none());
}

#[test]
fn raw_load_image_unfilled_error_contract() {
    let m = manager(1);
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let path = write_raw_file("err");
    let mut img = RawLoadImage::new(path.to_str().unwrap());
    img.attach_to_space(Rc::clone(&ram));
    img.open().unwrap();

    // Initial address entirely past EOF: DataUnavailError with the
    // exact C++ message (shortcut 'r' for "ram", 4-byte space printRaw)
    let mut buf = [0u8; 4];
    let err = img
        .load_fill(&mut buf, &Address::new(Rc::clone(&ram), 0x20))
        .unwrap_err();
    match &err {
        UnlaceError::DataUnavail { explain } => {
            assert_eq!(explain, "Unable to load 4 bytes at r0x00000020");
        }
        other => panic!("expected DataUnavail, got {other:?}"),
    }

    // double open is a LowlevelError
    let err = img.open().unwrap_err();
    match &err {
        UnlaceError::Lowlevel { explain } => assert_eq!(explain, "loadimage is already open"),
        other => panic!("expected Lowlevel, got {other:?}"),
    }

    std::fs::remove_file(&path).unwrap();
}

#[test]
fn raw_load_image_open_failure_and_vma() {
    let m = manager(1);
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let mut img = RawLoadImage::new("/nonexistent/unlace_raw_image");
    let err = img.open().unwrap_err();
    match &err {
        UnlaceError::Lowlevel { explain } => {
            assert_eq!(
                explain,
                "Unable to open raw image file: /nonexistent/unlace_raw_image"
            );
        }
        other => panic!("expected Lowlevel, got {other:?}"),
    }

    // adjustVma shifts every queried address: with vma = 0x100, file
    // byte 0 lives at address 0x100
    let path = write_raw_file("vma");
    let mut img = RawLoadImage::new(path.to_str().unwrap());
    img.attach_to_space(Rc::clone(&ram));
    img.open().unwrap();
    img.adjust_vma(0x100);
    let mut buf = [0u8; 2];
    img.load_fill(&mut buf, &Address::new(Rc::clone(&ram), 0x100))
        .unwrap();
    assert_eq!(buf, [0, 1]);
    // Address below the vma wraps negative in the uintb subtraction and
    // lands past filesize with offset==0: unfilled error
    let err = img
        .load_fill(&mut buf, &Address::new(Rc::clone(&ram), 0x80))
        .unwrap_err();
    assert!(matches!(err, UnlaceError::DataUnavail { .. }));

    std::fs::remove_file(&path).unwrap();
}

#[test]
fn raw_load_image_adjust_vma_scales_by_wordsize() {
    // addressToByte(adjust, wordsize): wordsize-2 spaces scale the
    // adjustment from addressable words to bytes
    let m = manager(2);
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    let path = write_raw_file("ws2");
    let mut img = RawLoadImage::new(path.to_str().unwrap());
    img.attach_to_space(Rc::clone(&ram));
    img.open().unwrap();
    img.adjust_vma(0x10); // 0x10 words -> 0x20 bytes
    let mut buf = [0u8; 2];
    img.load_fill(&mut buf, &Address::new(Rc::clone(&ram), 0x20))
        .unwrap();
    assert_eq!(buf, [0, 1]);

    std::fs::remove_file(&path).unwrap();
}
