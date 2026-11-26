use super::*;

fn dlls(name_offs: &[u32]) -> Vec<ImportDll> {
    name_offs
        .iter()
        .map(|&name_off| ImportDll {
            name_off,
            iat: 0,
            thunks: Vec::new(),
        })
        .collect()
}

fn offsets(dlls: &[ImportDll]) -> BTreeSet<u32> {
    dlls.iter().map(|d| d.name_off).collect()
}

/// The regression: a 32-bit MSVC crackme importing seven DLLs across
/// thirteen descriptors (KERNEL32 four times, three others twice). Its
/// loader table holds one descriptor per distinct DLL, so the two lists are
/// 7 and 13 long and a position-by-position walk could never agree -- the
/// unpack failed with "cannot find the loader import table".
#[test]
fn a_dll_imported_by_several_descriptors_still_matches_its_loader_table() {
    let base = 0x73a0c;
    let table: Vec<u32> = [224, 237, 250, 263, 273, 286, 297]
        .iter()
        .map(|o| base + o)
        .collect();
    let repeated = dlls(&[
        224, 224, 224, 224, 237, 237, 250, 263, 273, 273, 286, 286, 297,
    ]);
    assert!(table_names_dlls(&table, base, &offsets(&repeated)));
}

#[test]
fn one_descriptor_per_dll_still_matches() {
    let base = 0x1000;
    let table: Vec<u32> = [16, 32, 48].iter().map(|o| base + o).collect();
    assert!(table_names_dlls(
        &table,
        base,
        &offsets(&dlls(&[16, 32, 48]))
    ));
}

/// Set equality both ways: a table naming a DLL the trailer never asks for
/// is the wrong table, and so is one missing a DLL the trailer wants.
#[test]
fn a_table_whose_names_differ_is_rejected() {
    let base = 0x1000;
    let table: Vec<u32> = [16, 32, 48].iter().map(|o| base + o).collect();
    assert!(!table_names_dlls(&table, base, &offsets(&dlls(&[16, 32]))));
    assert!(!table_names_dlls(
        &table,
        base,
        &offsets(&dlls(&[16, 32, 48, 64]))
    ));
    assert!(!table_names_dlls(&[], base, &offsets(&dlls(&[16]))));
}

/// A minimal PE header at `skip` inside a block, laid out the way UPX stores
/// it in the trailer: one section, sixteen data directories, `flags` as the
/// COFF characteristics and `reloc` in entry 5.
fn block_with_header(skip: usize, flags: u16, reloc: (u32, u32), width: Width) -> Vec<u8> {
    let opt_size = width.dirs_at() + 128;
    let mut b = vec![0u8; skip + 24 + opt_size + SECTION_HEADER_SIZE + 16];
    b[skip..skip + 4].copy_from_slice(b"PE\0\0");
    b[skip + 6..skip + 8].copy_from_slice(&1u16.to_le_bytes());
    b[skip + 20..skip + 22].copy_from_slice(&(opt_size as u16).to_le_bytes());
    b[skip + 22..skip + 24].copy_from_slice(&flags.to_le_bytes());
    let opt = skip + 24;
    let magic: u16 = if width == Width::Pe32 { 0x10b } else { 0x20b };
    b[opt..opt + 2].copy_from_slice(&magic.to_le_bytes());
    let base = 0x1_4000_0000u64;
    if width == Width::Pe32 {
        b[opt + 28..opt + 32].copy_from_slice(&0x40_0000u32.to_le_bytes());
    } else {
        b[opt + 24..opt + 32].copy_from_slice(&base.to_le_bytes());
    }
    let dirs = opt + width.dirs_at();
    b[dirs - 4..dirs].copy_from_slice(&16u32.to_le_bytes());
    let d = dirs + 8 * DIR_BASERELOC;
    b[d..d + 4].copy_from_slice(&reloc.0.to_le_bytes());
    b[d + 4..d + 8].copy_from_slice(&reloc.1.to_le_bytes());
    // One section covering the first 0x4000 bytes of the image.
    let t = opt + opt_size;
    b[t + 8..t + 12].copy_from_slice(&0x4000u32.to_le_bytes());
    b[t + 12..t + 16].copy_from_slice(&0x1000u32.to_le_bytes());
    b[t + 16..t + 20].copy_from_slice(&0x4000u32.to_le_bytes());
    b
}

fn relocs(
    flags: u16,
    packed_flags: u16,
    reloc: (u32, u32),
) -> (Result<(), UpxError>, PeHeader, Vec<u8>) {
    let skip = 0x100;
    let mut b = block_with_header(skip, flags, reloc, Width::Pe32);
    let mut oh = PeHeader::parse(&b, skip, Layout::Trailer).unwrap();
    let mut trailer = oh.table_at + SECTION_HEADER_SIZE;
    let r = rebuild_relocs(&mut b, &mut oh, packed_flags, 0x1000, false, &mut trailer);
    (r, oh, b)
}

/// The witness shape: an EXE whose relocations UPX stripped. The stored
/// header still names the directory and only the packed header carries the
/// flag; UPX's own unpacker zeroes the entry rather than rebuilding, so the
/// recovered header has to come out the way `upx -d` writes it.
#[test]
fn stripped_relocations_are_zeroed_not_refused() {
    let (r, oh, b) = relocs(0, IMAGE_FILE_RELOCS_STRIPPED, (0x3b000, 0x5cc));
    r.expect("a stripped image unpacks");
    assert_eq!(oh.dir(DIR_BASERELOC), (0, 0));
    assert_ne!(oh.flags & IMAGE_FILE_RELOCS_STRIPPED, 0);
    let written = PeHeader::parse(&b, 0x100, Layout::Trailer).unwrap();
    assert_eq!(written.dir(DIR_BASERELOC), (0, 0));
    assert_ne!(written.flags & IMAGE_FILE_RELOCS_STRIPPED, 0);
}

/// Relocations the packer kept are rebased to zero, byte-swapped in place
/// and recorded as a delta stream. Rebuilding them restores both pointers
/// and lays the positions out one block per page, the way `upx -d` does --
/// for PE32+ that is `DIR64` entries over eight-byte pointers.
#[test]
fn kept_pe32plus_relocations_are_rebuilt() {
    let rvamin = 0x1000u32;
    let base = 0x1_4000_0000u64;
    let skip = 0x3000;
    let mut b = block_with_header(skip, 0, (0x2800, 0x40), Width::Pe32Plus);
    let targets = [(0x10usize, base + 0x1234), (0x1008usize, base + 0x3ff0)];
    for (at, target) in targets {
        let zero_based = target - base - u64::from(rvamin);
        b[at..at + 8].copy_from_slice(&zero_based.to_be_bytes());
    }
    // Positions 0x10 then 0x1008: one short delta, one three-byte one.
    let crelocs = 0x2000;
    b[crelocs..crelocs + 5].copy_from_slice(&[0x14, 0xf0, 0xf8, 0x0f, 0x00]);
    let mut oh = PeHeader::parse(&b, skip, Layout::Trailer).unwrap();
    let record = oh.table_at + SECTION_HEADER_SIZE;
    b[record..record + 4].copy_from_slice(&(crelocs as u32).to_le_bytes());
    b[record + 4] = 0;
    let mut trailer = record;
    rebuild_relocs(&mut b, &mut oh, 0, rvamin, true, &mut trailer)
        .expect("kept relocations rebuild");
    assert_eq!(
        trailer,
        record + 5,
        "the relocation record is five trailer bytes"
    );
    for (at, target) in targets {
        assert_eq!(
            u64::from_le_bytes(b[at..at + 8].try_into().unwrap()),
            target
        );
    }
    let table = &b[0x1800..0x1818];
    assert_eq!(
        table,
        &[
            0x00, 0x10, 0, 0, 12, 0, 0, 0, 0x10, 0xa0, 0, 0, //
            0x00, 0x20, 0, 0, 12, 0, 0, 0, 0x08, 0xa0, 0, 0,
        ]
    );
    assert_eq!(oh.dir(DIR_BASERELOC), (0x2800, 24));
    let written = PeHeader::parse(&b, skip, Layout::Trailer).unwrap();
    assert_eq!(written.dir(DIR_BASERELOC), (0x2800, 24));
}

/// A PE32 image's `HIGHLOW` relocations take the same path, and the 16-bit
/// `LOW`/`HIGH` lists UPX appends after the stream come back as their own
/// entry types.
#[test]
fn kept_pe32_relocations_and_their_16_bit_lists_are_rebuilt() {
    let rvamin = 0x1000u32;
    let skip = 0x3000;
    let mut b = block_with_header(skip, 0, (0x2800, 0x40), Width::Pe32);
    b[0x20..0x24].copy_from_slice(&0x0000_0abcu32.to_be_bytes());
    let crelocs = 0x2000;
    // One HIGHLOW at 0x20, then a LOW list (0x40) and a HIGH list (0x44).
    let mut stream = vec![0x24, 0x00];
    for v in [0x40u32, 0, 0x44, 0] {
        stream.extend_from_slice(&v.to_le_bytes());
    }
    b[crelocs..crelocs + stream.len()].copy_from_slice(&stream);
    let mut oh = PeHeader::parse(&b, skip, Layout::Trailer).unwrap();
    let record = oh.table_at + SECTION_HEADER_SIZE;
    b[record..record + 4].copy_from_slice(&(crelocs as u32).to_le_bytes());
    b[record + 4] = 6;
    let mut trailer = record;
    rebuild_relocs(&mut b, &mut oh, 0, rvamin, true, &mut trailer)
        .expect("kept relocations rebuild");
    assert_eq!(
        u32::from_le_bytes(b[0x20..0x24].try_into().unwrap()),
        0x40_0000 + 0x1000 + 0xabc
    );
    let entries: Vec<u16> = (0..3)
        .map(|i| u16::from_le_bytes([b[0x1808 + 2 * i], b[0x1809 + 2 * i]]))
        .collect();
    assert_eq!(entries, [0x3020, 0x2040, 0x1044]);
    assert_eq!(oh.dir(DIR_BASERELOC).1, 16);
}

#[test]
fn an_image_without_relocations_needs_nothing() {
    let (r, oh, _) = relocs(0, 0, (0, 0));
    r.unwrap();
    assert_eq!(oh.flags, 0);
}

/// The three optional records are 8, 5 and 2 bytes, and no two sets of them
/// sum alike: every trailer length names exactly one set, and the lengths
/// no set reaches are refused.
#[test]
fn the_trailer_length_alone_names_its_records() {
    let mut seen = BTreeSet::new();
    for len in 0..=20 {
        if let Some(r) = trailer_records(len) {
            assert_eq!(
                8 * usize::from(r.imports)
                    + 5 * usize::from(r.relocs)
                    + 2 * usize::from(r.resources),
                len
            );
            assert!(
                seen.insert((r.imports, r.relocs, r.resources)),
                "two lengths for one set"
            );
        }
    }
    assert_eq!(seen.len(), 8);
    assert!(
        trailer_records(1).is_none()
            && trailer_records(3).is_none()
            && trailer_records(16).is_none()
    );
    let r = trailer_records(10).unwrap();
    assert!(r.imports && !r.relocs && r.resources);
}

/// The trailer's import list: a name, a 2-byte ordinal, and a `KERNEL32`
/// ordinal recorded as the offset of the packer's own loader thunk -- which
/// must not be read as the ordinal itself.
#[test]
fn the_import_block_distinguishes_loader_slots_from_ordinals() {
    let mut b = Vec::new();
    b.extend_from_slice(&0x30u32.to_le_bytes());
    b.extend_from_slice(&0x2000u32.to_le_bytes());
    b.extend_from_slice(b"\x01Sleep\x00");
    b.extend_from_slice(&[0xff, 0x07, 0x00]);
    b.extend_from_slice(&[0xfe, 0x40, 0x00, 0x00, 0x00]);
    b.push(0);
    b.extend_from_slice(&0u32.to_le_bytes());
    let dlls = parse_import_block(&b, 0, 0x1000).unwrap();
    assert_eq!(dlls.len(), 1);
    assert_eq!((dlls[0].name_off, dlls[0].iat), (0x30, 0x3000));
    assert!(matches!(&dlls[0].thunks[0], Thunk::Name(n) if n == b"Sleep"));
    assert!(matches!(dlls[0].thunks[1], Thunk::Ordinal(7)));
    assert!(matches!(dlls[0].thunks[2], Thunk::LoaderSlot(0x40)));
}

/// A one-section PE32 whose section (at RVA 0x1000) holds `body`.
fn tiny_pe(body: &[u8]) -> Vec<u8> {
    let mut b = vec![0u8; 0x200];
    b[..2].copy_from_slice(b"MZ");
    b[0x3c..0x40].copy_from_slice(&0x40u32.to_le_bytes());
    let pe = 0x40;
    b[pe..pe + 4].copy_from_slice(b"PE\0\0");
    b[pe + 6..pe + 8].copy_from_slice(&1u16.to_le_bytes());
    b[pe + 20..pe + 22].copy_from_slice(&224u16.to_le_bytes());
    let opt = pe + 24;
    b[opt..opt + 2].copy_from_slice(&0x10bu16.to_le_bytes());
    b[opt + 92..opt + 96].copy_from_slice(&16u32.to_le_bytes());
    let t = opt + 224;
    let size = body.len() as u32;
    b[t + 8..t + 12].copy_from_slice(&size.to_le_bytes());
    b[t + 12..t + 16].copy_from_slice(&0x1000u32.to_le_bytes());
    b[t + 16..t + 20].copy_from_slice(&size.to_le_bytes());
    b[t + 20..t + 24].copy_from_slice(&0x200u32.to_le_bytes());
    b.extend_from_slice(body);
    b
}

/// The packer's loader table carries its own `KERNEL32.DLL` descriptor even
/// when the original imports nothing from it -- a 32-bit image importing only
/// `arr.dll` failed with "cannot find the loader import table". One such
/// extra is allowed; any other DLL the trailer does not ask for is not.
#[test]
fn the_loader_table_may_carry_the_stubs_own_kernel32() {
    let table = |extra: &[u8]| {
        let mut body = vec![0u8; 0x100];
        body[12..16].copy_from_slice(&0x1080u32.to_le_bytes());
        body[32..36].copy_from_slice(&0x1090u32.to_le_bytes());
        body[0x80..0x88].copy_from_slice(b"arr.dll\0");
        body[0x90..0x90 + extra.len()].copy_from_slice(extra);
        tiny_pe(&body)
    };
    let wanted = vec![ImportDll {
        name_off: 0x80,
        iat: 0,
        thunks: Vec::new(),
    }];
    let bytes = table(b"KERNEL32.DLL\0");
    let img = Image::new(&bytes).unwrap();
    assert_eq!(loader_import_table(&img, &wanted).unwrap(), 0x1000);
    let bytes = table(b"USER32.dll\0");
    let img = Image::new(&bytes).unwrap();
    assert!(loader_import_table(&img, &wanted).is_err());
}

/// `Export::build`'s compact layout, rebuilt at the original address: the
/// header's tables are repointed, the names and the DLL name re-laid out,
/// an ordinal-only export kept, and a forwarder's string moved with it.
#[test]
fn a_moved_export_directory_is_rebuilt_at_its_original_address() {
    let base = 0x9000u32;
    let mut d = vec![0u8; 40];
    let put = |d: &mut Vec<u8>, at: usize, v: u32| d[at..at + 4].copy_from_slice(&v.to_le_bytes());
    put(&mut d, 16, 1);
    put(&mut d, 20, 3);
    put(&mut d, 24, 2);
    // functions, name pointers, ordinals, DLL name, names, forwarder
    let funcs = d.len();
    d.resize(funcs + 12, 0);
    let names = d.len();
    d.resize(names + 8, 0);
    let ords = d.len();
    d.extend_from_slice(&[0, 0, 2, 0]);
    let ename = d.len();
    d.extend_from_slice(b"lib.dll\0");
    let n0 = d.len();
    d.extend_from_slice(b"alpha\0");
    let n1 = d.len();
    d.extend_from_slice(b"fwd\0");
    let fw = d.len();
    d.extend_from_slice(b"K32.Sleep\0");
    put(&mut d, 12, base + ename as u32);
    put(&mut d, 28, base + funcs as u32);
    put(&mut d, 32, base + names as u32);
    put(&mut d, 36, base + ords as u32);
    put(&mut d, funcs, 0x1100);
    put(&mut d, funcs + 4, 0x1200);
    put(&mut d, funcs + 8, base + fw as u32);
    put(&mut d, names, base + n0 as u32);
    put(&mut d, names + 4, base + n1 as u32);

    let newbase = 0x3000u32;
    let out = rebuild_export_dir(&d, base, newbase, 0x1000).unwrap();
    let rd = |at: usize| u32::from_le_bytes(out[at..at + 4].try_into().unwrap());
    let at = |rva: u32| (rva - newbase) as usize;
    let cstr = |rva: u32| {
        let o = at(rva);
        let n = out[o..].iter().position(|&c| c == 0).unwrap();
        String::from_utf8_lossy(&out[o..o + n]).into_owned()
    };
    assert_eq!(out.len() % 4, 0);
    assert_eq!(
        (rd(28), rd(32), rd(36)),
        (newbase + 40, newbase + 52, newbase + 60)
    );
    assert_eq!(cstr(rd(12)), "lib.dll");
    assert_eq!(
        (rd(40), rd(44)),
        (0x1100, 0x1200),
        "code addresses are not moved"
    );
    assert_eq!(
        cstr(rd(48)),
        "K32.Sleep",
        "the forwarder string moves with the table"
    );
    assert_eq!(
        (cstr(rd(52)), cstr(rd(56))),
        ("alpha".to_owned(), "fwd".to_owned())
    );
    assert_eq!(&out[60..64], &[0, 0, 2, 0]);
}

/// Every name pointer of a packed export directory may name the same long
/// string; the rebuild stops once its layout outgrows the room it has
/// instead of copying the string once per pointer.
#[test]
fn export_names_that_share_one_long_string_are_bounded_by_the_image() {
    let base = 0x9000u32;
    let n = 4000usize;
    let mut d = vec![0u8; 40 + 4 * n];
    let text = d.len() as u32;
    d.extend_from_slice(&[b'A'; 8000]);
    d.push(0);
    d[12..16].copy_from_slice(&(base + text).to_le_bytes());
    d[24..28].copy_from_slice(&(n as u32).to_le_bytes());
    for f in [28, 32, 36] {
        d[f..f + 4].copy_from_slice(&(base + 40).to_le_bytes());
    }
    for i in 0..n {
        d[40 + 4 * i..44 + 4 * i].copy_from_slice(&(base + text).to_le_bytes());
    }
    let err = rebuild_export_dir(&d, base, 0x3000, 0x10000).expect_err("32 MB of names");
    assert!(format!("{err}").contains("outgrows"), "{err}");
}

/// Five directories of a few hundred entries that all name the next one
/// would be walked hundreds-to-the-fourth times; a shared subdirectory is
/// refused the first time it is reached again.
#[test]
fn a_resource_tree_that_shares_a_subdirectory_is_refused() {
    let (n, levels) = (300usize, 5usize);
    let dsz = 16 + 8 * n;
    let mut tree = vec![0u8; dsz * levels];
    for k in 0..levels - 1 {
        let o = k * dsz;
        tree[o + 14..o + 16].copy_from_slice(&(n as u16).to_le_bytes());
        for i in 0..n {
            let e = o + 16 + 8 * i;
            tree[e..e + 4].copy_from_slice(&(i as u32 + 1).to_le_bytes());
            let child = 0x8000_0000 | ((k + 1) * dsz) as u32;
            tree[e + 4..e + 8].copy_from_slice(&child.to_le_bytes());
        }
    }
    let err = walk_resource_dir(&tree, 0, 0, 0, &mut ResourceWalk::default())
        .expect_err("a shared subdirectory");
    assert!(format!("{err}").contains("subdirectory twice"), "{err}");
}

/// A section mapped at the top of the address space must not wrap the
/// loader-table scan back to address zero, and a section whose raw data
/// lies past the end of the file names nothing.
#[test]
fn a_hostile_packed_section_table_cannot_wrap_or_overrun_the_scan() {
    let wanted = vec![ImportDll {
        name_off: 0x80,
        iat: 0,
        thunks: Vec::new(),
    }];
    let mut bytes = tiny_pe(&[0x11u8; 0x40]);
    let t = 0x40 + 24 + 224;
    bytes[t + 12..t + 16].copy_from_slice(&0xffff_fff0u32.to_le_bytes());
    bytes[t + 16..t + 20].copy_from_slice(&0xfu32.to_le_bytes());
    let img = Image::new(&bytes).unwrap();
    assert!(loader_import_table(&img, &wanted).is_err());

    let mut bytes = tiny_pe(&[0x11u8; 0x40]);
    bytes[t + 20..t + 24].copy_from_slice(&0x10_0000u32.to_le_bytes());
    let img = Image::new(&bytes).unwrap();
    assert!(img.cstr_at_rva(0x1000).is_err());
    assert!(loader_import_table(&img, &wanted).is_err());
}

/// A huge `FileAlignment` in the recovered header used to pad the overlay
/// out to gigabytes before the length check refused the file; the layout
/// is now sized, and refused, before anything is allocated.
#[test]
fn a_huge_file_alignment_is_refused_before_it_is_allocated() {
    let p = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("tests/fixtures/upx_packed_pe_x86_64.exe");
    let mut bytes = std::fs::read(p).unwrap();
    let info = super::super::detect(&bytes).expect("fixture is UPX-packed");
    let data = info.pack_header_offset + super::super::PACK_HEADER_SIZE;
    let obuf = super::super::elf::method_codec(info.method)
        .unwrap()
        .decompress(
            &bytes[data..data + info.c_len as usize],
            info.u_len as usize,
        )
        .unwrap();
    bytes.extend_from_slice(b"overlay!");
    let img = Image::new(&bytes).unwrap();
    let skip = le32(&obuf, obuf.len() - 4).unwrap() as usize;
    let mut oh = PeHeader::parse(&obuf, skip, Layout::Trailer).unwrap();
    let rvamin = oh.sections[0].vaddr;
    let tail = &bytes[bytes.len() - 8..];
    let sane = assemble(&img, &obuf, &oh, rvamin, skip, tail, 3072 + 8).unwrap();
    assert_eq!(&sane[3072..], b"overlay!");
    oh.file_align = 0xf000_0000;
    let err = assemble(&img, &obuf, &oh, rvamin, skip, tail, 3072 + 8)
        .expect_err("a 4 GB alignment is not credible");
    assert!(
        format!("{err}").contains("rebuilt 4026531848 bytes"),
        "{err}"
    );
}

/// The overlay is cut out of the packed file's tail by the original's
/// length. UPX 3.9x's spilled second copy of the stub relocations (and its
/// zero padding) comes off the front; bytes appended after packing -- a
/// signature, a payload -- come off the end instead of shifting the overlay.
#[test]
fn the_overlay_is_cut_from_whichever_end_holds_something_else() {
    let relocs = [0, 0x10, 1, 0, 12, 0, 0, 0, 0x60, 0x39, 0, 0];
    let mut front = vec![0x60, 0x39, 0, 0];
    front.resize(512, 0);
    assert!(is_stub_reloc_spill(&front, &relocs));
    assert!(!is_stub_reloc_spill(b"COFF symbols", &relocs));
    assert!(!is_stub_reloc_spill(&[0x39, 0x60, 0, 0], &relocs));

    let overlay = b"COFF symbols and strings";
    let later = b"certificate appended later";
    let (end, len) = (0x1000, 0x1000 + overlay.len());
    let spilled = [&front[..], overlay].concat();
    assert_eq!(overlay_of(&spilled, end, len, 512), overlay);
    let both = [&front[..], overlay, later].concat();
    assert_eq!(overlay_of(&both, end, len, 512), overlay);
    let appended = [&overlay[..], later].concat();
    assert_eq!(overlay_of(&appended, end, len, 0), overlay);
    assert_eq!(overlay_of(overlay, end, len, 0), overlay);
    assert_eq!(overlay_of(overlay, end, len + 100, 0), overlay);
    assert_eq!(overlay_of(&appended, end, end, 0), b"");
}

fn put(b: &mut [u8], at: usize, v: u32) {
    b[at..at + 4].copy_from_slice(&v.to_le_bytes());
}

/// Where [`tiny_pe`] writes its one section header and its data directories.
const TINY_SECTION: usize = 0x40 + 24 + 224;
const TINY_DIRS: usize = 0x40 + 24 + 96;

/// Replay the resource rebuild of a packed image whose one section, at
/// `packed_rva`, is the resource directory `tree`, into a recovered image
/// whose `.rsrc` starts at 0x1000.
fn rebuild_tree(tree: &[u8], packed_rva: u32) -> Result<(), UpxError> {
    rebuild_tree_into(tree, packed_rva, &mut vec![0u8; 0x20000])
}

/// [`rebuild_tree`] into a recovered image `obuf` that starts at 0x1000.
fn rebuild_tree_into(tree: &[u8], packed_rva: u32, obuf: &mut [u8]) -> Result<(), UpxError> {
    let mut bytes = tiny_pe(tree);
    put(&mut bytes, TINY_SECTION + 12, packed_rva);
    put(&mut bytes, TINY_DIRS + 8 * DIR_RESOURCE, packed_rva);
    put(
        &mut bytes,
        TINY_DIRS + 8 * DIR_RESOURCE + 4,
        tree.len() as u32,
    );
    let img = Image::new(&bytes).unwrap();
    let mut dirs = vec![(0, 0); 16];
    dirs[DIR_RESOURCE] = (0x1000, tree.len() as u32);
    let rsrc = Section {
        vsize: 0x10000,
        vaddr: 0x1000,
        rawsize: 0x10000,
        rawptr: 0x400,
    };
    let oh = PeHeader {
        at: 0,
        width: Width::Pe32,
        opt_size: 224,
        hdr_len: 24 + 224,
        flags: 0,
        code_size: 0,
        code_base: 0x1000,
        image_base: 0x40_0000,
        file_align: 0x200,
        sections: vec![rsrc],
        dirs,
        table_at: 24 + 224,
    };
    let mut trailer = obuf.len() - 2;
    rebuild_resources(&img, obuf, &oh, 0x1000, true, &mut trailer)
}

/// A root directory with one entry naming the data entry at 24, which
/// holds `data_rva` and a zero size; `len` pads the tree.
fn one_leaf_tree(data_rva: u32, len: usize) -> Vec<u8> {
    let mut tree = vec![0u8; len];
    tree[14..16].copy_from_slice(&1u16.to_le_bytes());
    put(&mut tree, 16, 3);
    put(&mut tree, 20, 24);
    put(&mut tree, 24, data_rva);
    tree
}

/// A data entry whose last eight bytes lie past the packed directory's
/// copy used to be sliced out of it anyway.
#[test]
fn a_resource_data_entry_past_its_packed_copy_is_refused() {
    let err = rebuild_tree(&one_leaf_tree(0, 32), 0x1000).expect_err("a truncated entry");
    assert!(
        format!("{err}").contains("runs past its packed copy"),
        "{err}"
    );
    rebuild_tree(&one_leaf_tree(0, 40), 0x1000).expect("the whole entry is there");
}

/// The packed copy keeps a named entry's string behind the data entries,
/// and the packer leaves the original's strings where its linker put them,
/// so the string and its four-byte padding are written back along with
/// the entry that points at them -- or the entry names whatever the
/// original had there.
#[test]
fn a_resource_name_comes_back_with_the_entry_that_points_at_it() {
    let mut tree = one_leaf_tree(0, 48);
    tree[12..16].copy_from_slice(&[1, 0, 0, 0]);
    put(&mut tree, 16, 0x8000_0000 | 40);
    tree[40..46].copy_from_slice(&[2, 0, b'I', 0, b'D', 0]);
    let mut obuf = vec![0u8; 0x20000];
    obuf[40..48].copy_from_slice(b"original");
    rebuild_tree_into(&tree, 0x1000, &mut obuf).expect("a named leaf");
    assert_eq!(&obuf[..48], &tree[..]);
}

/// A moved leaf's back-pointer sits four bytes before its data, so a leaf
/// at address 1 has none -- it used to underflow the address instead.
#[test]
fn a_moved_resource_below_address_four_has_no_back_pointer() {
    let err = rebuild_tree(&one_leaf_tree(1, 40), 0).expect_err("no back-pointer");
    assert!(format!("{err}").contains("no back-pointer"), "{err}");
}

/// A section whose raw data lies past the end of the file maps no bytes,
/// so a DLL name it claims to hold is an error, not a slice past the end.
#[test]
fn a_section_past_the_end_of_the_file_holds_no_import_name() {
    let mut bytes = tiny_pe(&[0x11; 0x40]);
    put(&mut bytes, TINY_SECTION + 20, 0x10_0000);
    let img = Image::new(&bytes).unwrap();
    let err = img.cstr_at_rva(0x1000).expect_err("nothing is there");
    assert!(format!("{err}").contains("outside the image"), "{err}");
}

/// A section mapped at the top of the address space must not wrap the
/// loader-table scan back to address zero (endless in release) or
/// overflow its end address.
#[test]
fn a_section_at_the_top_of_the_address_space_does_not_wrap_the_loader_scan() {
    for rawsize in [0xf, 0x40] {
        let mut bytes = tiny_pe(&[0x11; 0x40]);
        put(&mut bytes, TINY_SECTION + 12, 0xffff_fff0);
        put(&mut bytes, TINY_SECTION + 16, rawsize);
        let img = Image::new(&bytes).unwrap();
        let err = loader_import_table(&img, &dlls(&[0x80])).expect_err("no loader table");
        assert!(format!("{err}").contains("cannot find"), "{err}");
    }
}

/// More distinct DLLs than a candidate table is followed for is this
/// build's limit, not damage: UPX packs up to 4096 import descriptors, and
/// older releases any number.
#[test]
fn more_dlls_than_the_scan_follows_is_unsupported() {
    let img_bytes = tiny_pe(&[0; 0x40]);
    let img = Image::new(&img_bytes).unwrap();
    let wanted: Vec<u32> = (0..=MAX_LOADER_DLLS as u32)
        .map(|k| 0x40 + 20 * k)
        .collect();
    let err = loader_import_table(&img, &dlls(&wanted)).expect_err("too many DLLs");
    assert!(matches!(err, UpxError::Unsupported(_)), "{err}");
}

/// A section whose every word names a wanted DLL relative to the candidate
/// four bytes before it would make each candidate a full table walk; the
/// scan's reads are bounded by the file instead.
#[test]
fn a_region_of_matching_descriptors_exhausts_the_scan_not_the_clock() {
    let mut body = vec![0u8; 0x10000];
    for q in (0..body.len()).step_by(4) {
        put(&mut body, q, 0x1000 + q as u32 - 12 + 0x40);
    }
    let img_bytes = tiny_pe(&body);
    let img = Image::new(&img_bytes).unwrap();
    let wanted: Vec<u32> = (0..MAX_LOADER_DLLS as u32).map(|k| 0x40 + 20 * k).collect();
    let err = loader_import_table(&img, &dlls(&wanted)).expect_err("no table, many walks");
    assert!(
        format!("{err}").contains("too many candidate loader tables"),
        "{err}"
    );
}

/// An eight-byte directory is the empty block "some tricky dlls use", which
/// UPX writes back in place of the zeros it packed.
#[test]
fn an_empty_relocation_block_is_written_back() {
    let (r, _, b) = relocs(0, 0, (0x1010, 8));
    r.unwrap();
    assert_eq!(&b[0x10..0x18], &[0, 0, 0, 0, 8, 0, 0, 0]);
}
