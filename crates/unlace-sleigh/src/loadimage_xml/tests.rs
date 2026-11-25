use super::*;
use unlace_base::marshal::XmlEncode;
use unlace_base::space::{ConstantSpace, addrspace_flags, spacetype};
use unlace_base::xml::xml_tree;

/// Build a manager with const(0) + one processor space.
fn manager(name: &str, big_end: bool, addr_size: u32, wordsize: u32) -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        name,
        big_end,
        addr_size,
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

fn registry() -> IdRegistry {
    let mut registry = IdRegistry::with_base_ids();
    register_loadimage_xml_ids(&mut registry);
    registry
}

/// Parse a datatest file and pull out its <binaryimage> element.
fn fixture_binaryimage(name: &str) -> Rc<Element> {
    let path = format!(
        "{}/../../tests/datatests/{}",
        env!("CARGO_MANIFEST_DIR"),
        name
    );
    let data = std::fs::read(&path).unwrap();
    let doc = xml_tree(&data).unwrap();
    let root = doc.get_root();
    assert_eq!(root.get_name(), "decompilertest");
    let el = root
        .get_children()
        .iter()
        .find(|c| c.get_name() == "binaryimage")
        .expect("fixture has no <binaryimage>");
    Rc::clone(el)
}

fn open_fixture(name: &str, m: &AddrSpaceManager, registry: &IdRegistry) -> LoadImageXml {
    let el = fixture_binaryimage(name);
    let mut img = LoadImageXml::new(name, el).unwrap();
    img.open(m, registry).unwrap();
    img
}

fn hex(s: &str) -> Vec<u8> {
    assert!(s.len().is_multiple_of(2));
    (0..s.len() / 2)
        .map(|i| u8::from_str_radix(&s[2 * i..2 * i + 2], 16).unwrap())
        .collect()
}

/// retspecial.xml: AARCH64:LE:64, two readonly ram chunks at 0x455c14
/// (48 bytes) and 0x455c50 (28 bytes), two symbols.
#[test]
fn fixture_aarch64_le_exact_reads_and_gap_fill() {
    let m = manager("ram", false, 8, 1);
    let reg = registry();
    let mut img = open_fixture("retspecial.xml", &m, &reg);
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());

    assert_eq!(img.get_arch_type(), b"AARCH64:LE:64:v8A:default".to_vec());

    // Exact bytes at the start of the first chunk
    let got = img
        .load(12, &Address::new(Rc::clone(&ram), 0x455c14))
        .unwrap();
    assert_eq!(got, hex("ff4300d1e10308aae00f00b9"));

    // Read crossing a line boundary inside the chunk
    let got = img
        .load(8, &Address::new(Rc::clone(&ram), 0x455c1c))
        .unwrap();
    assert_eq!(got, hex("e00f00b9400180d2"));

    // Chunk 1 covers [0x455c14,0x455c44); the 12-byte gap to chunk 2 at
    // 0x455c50 is padded with zeroes; read straddling chunk1 tail ->
    // gap -> chunk2 head
    let got = img
        .load(20, &Address::new(Rc::clone(&ram), 0x455c40))
        .unwrap();
    let mut expect = hex("c0035fd6");
    expect.extend(std::iter::repeat_n(0u8, 12));
    expect.extend(hex("fd7bbda9"));
    assert_eq!(got, expect);

    // Chunk 2 ends at 0x455c6c and is followed by exactly 512 pad bytes
    let got = img
        .load(4, &Address::new(Rc::clone(&ram), 0x455c6c + 508))
        .unwrap();
    assert_eq!(got, vec![0, 0, 0, 0]);

    // One byte past the pad: unfilled error with the exact message
    // (sz drops to 4 bytes for an offset below 2^32 in printRaw)
    let err = img
        .load(1, &Address::new(Rc::clone(&ram), 0x455c6c + 512))
        .unwrap_err();
    match &err {
        UnlaceError::DataUnavail { explain } => {
            assert_eq!(explain, "Bytes at 0x00455e6c are not mapped");
        }
        other => panic!("expected DataUnavail, got {other:?}"),
    }

    // A read that *starts* mapped but overruns the pad also fails, with
    // curaddr advanced to the first unmapped byte
    let err = img
        .load(0x300, &Address::new(Rc::clone(&ram), 0x455c50))
        .unwrap_err();
    match &err {
        UnlaceError::DataUnavail { explain } => {
            assert_eq!(explain, "Bytes at 0x00455e6c are not mapped");
        }
        other => panic!("expected DataUnavail, got {other:?}"),
    }

    // A read entirely below the image: emptyhit error at the original
    // address
    let err = img
        .load(4, &Address::new(Rc::clone(&ram), 0x1000))
        .unwrap_err();
    match &err {
        UnlaceError::DataUnavail { explain } => {
            assert_eq!(explain, "Bytes at 0x00001000 are not mapped");
        }
        other => panic!("expected DataUnavail, got {other:?}"),
    }
}

#[test]
fn fixture_aarch64_le_symbols_and_readonly() {
    let m = manager("ram", false, 8, 1);
    let reg = registry();
    let img = open_fixture("retspecial.xml", &m, &reg);
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());

    // get_next_symbol before open_symbols: C++ UB (uninitialized
    // iterator); the port reports end-of-symbols
    let mut rec = LoadImageFunc::default();
    assert!(!img.get_next_symbol(&mut rec));

    img.open_symbols();
    assert!(img.get_next_symbol(&mut rec));
    assert_eq!(rec.address, Address::new(Rc::clone(&ram), 0x455c14));
    assert_eq!(rec.name, b"returnbig".to_vec());
    assert!(img.get_next_symbol(&mut rec));
    assert_eq!(rec.address, Address::new(Rc::clone(&ram), 0x455c50));
    assert_eq!(rec.name, b"read_returnbig".to_vec());
    assert!(!img.get_next_symbol(&mut rec));
    img.close_symbols();

    // Both fixture chunks are readonly="true"; the inserted pad chunks
    // are not in readonlyset, so exactly the original extents come back
    let mut list = RangeList::new();
    img.get_readonly(&mut list);
    let ranges: Vec<(u64, u64)> = list.iter().map(|r| (r.get_first(), r.get_last())).collect();
    assert_eq!(ranges, vec![(0x455c14, 0x455c43), (0x455c50, 0x455c6b)]);
}

/// bitfields2.xml: MIPS:BE:32, 16 readonly chunks; the first is 64
/// bytes at 0x100000 with a 192-byte gap to 0x100100.
#[test]
fn fixture_mips_be_exact_reads_and_gap_fill() {
    let m = manager("ram", true, 4, 1);
    let reg = registry();
    let mut img = open_fixture("bitfields2.xml", &m, &reg);
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());

    assert_eq!(img.get_arch_type(), b"MIPS:BE:32:default:default".to_vec());

    let got = img
        .load(16, &Address::new(Rc::clone(&ram), 0x100000))
        .unwrap();
    assert_eq!(got, hex("0005110028a3000a3442000400431025"));

    // Tail of chunk 1, the zero-filled gap, and the head of chunk 2
    let got = img
        .load(16 + 192 + 4, &Address::new(Rc::clone(&ram), 0x100030))
        .unwrap();
    let mut expect = hex("3442006403e00008a482000800000000");
    expect.extend(std::iter::repeat_n(0u8, 192));
    expect.extend(hex("24020001"));
    assert_eq!(got, expect);

    // Unfilled error in a 4-byte space prints 8 hex digits
    let err = img
        .load(1, &Address::new(Rc::clone(&ram), 0x10))
        .unwrap_err();
    match &err {
        UnlaceError::DataUnavail { explain } => {
            assert_eq!(explain, "Bytes at 0x00000010 are not mapped");
        }
        other => panic!("expected DataUnavail, got {other:?}"),
    }
}

/// boolless.xml: 8051:BE:16, a 10-byte chunk at 0xa000 in the 2-byte
/// "CODE" space whose content mixes line lengths ("e5" alone on the
/// first line) — exercising the whitespace-between-pairs scan.
#[test]
fn fixture_8051_be_small_space() {
    let m = manager("CODE", true, 2, 1);
    let reg = registry();
    let mut img = open_fixture("boolless.xml", &m, &reg);
    let code = Rc::clone(m.get_space_by_name("CODE").unwrap());

    assert_eq!(img.get_arch_type(), b"8051:BE:16:default:default".to_vec());

    let got = img
        .load(10, &Address::new(Rc::clone(&code), 0xa000))
        .unwrap();
    assert_eq!(got, hex("e552b40b005002740122"));

    // 512 bytes of pad fit in the 16-bit space; past them: error with
    // the 2-byte-space (4 hex digit) rendering
    let got = img
        .load(2, &Address::new(Rc::clone(&code), 0xa00a + 510))
        .unwrap();
    assert_eq!(got, vec![0, 0]);
    let err = img
        .load(1, &Address::new(Rc::clone(&code), 0xa00a + 512))
        .unwrap_err();
    match &err {
        UnlaceError::DataUnavail { explain } => {
            assert_eq!(explain, "Bytes at 0xa20a are not mapped");
        }
        other => panic!("expected DataUnavail, got {other:?}"),
    }

    let mut rec = LoadImageFunc::default();
    img.open_symbols();
    assert!(img.get_next_symbol(&mut rec));
    assert_eq!(rec.address, Address::new(Rc::clone(&code), 0xa000));
    assert_eq!(rec.name, b"boolless".to_vec());
    assert!(!img.get_next_symbol(&mut rec));
}

/// x86:LE:64 fixture with several symbols on one chunk.
#[test]
fn fixture_x86_le_symbols() {
    let m = manager("ram", false, 8, 1);
    let reg = registry();
    let img = open_fixture("condconst.xml", &m, &reg);
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());

    let mut rec = LoadImageFunc::default();
    img.open_symbols();
    let mut syms: Vec<(u64, Vec<u8>)> = Vec::new();
    while img.get_next_symbol(&mut rec) {
        assert!(Rc::ptr_eq(rec.address.get_space().unwrap(), &ram));
        syms.push((rec.address.get_offset(), rec.name.clone()));
    }
    assert_eq!(
        syms,
        vec![
            (0x1006fa, b"condconst1".to_vec()),
            (0x10076a, b"condconst_copy".to_vec()),
            (0x1007a4, b"condconst_conn".to_vec()),
        ]
    );
}

fn image_from_str(xml: &str, m: &AddrSpaceManager, registry: &IdRegistry) -> LoadImageXml {
    let doc = xml_tree(xml.as_bytes()).unwrap();
    let mut img = LoadImageXml::new("inline", Rc::clone(doc.get_root())).unwrap();
    img.open(m, registry).unwrap();
    img
}

/// pad(): a chunk fully covered by its predecessor is erased, and the
/// surviving chunk supplies the bytes for its address range.
#[test]
fn pad_erases_redundant_chunk() {
    let m = manager("ram", false, 4, 1);
    let reg = registry();
    let mut img = image_from_str(
        "<binaryimage arch=\"test\">\n\
             <bytechunk space=\"ram\" offset=\"0x100\">\n\
             0102030405060708090a0b0c0d0e0f10\n\
             </bytechunk>\n\
             <bytechunk space=\"ram\" offset=\"0x108\">\n\
             eeee\n\
             </bytechunk>\n\
             </binaryimage>",
        &m,
        &reg,
    );
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    // The contained chunk at 0x108 was erased: bytes come from the big
    // chunk, not the "eeee" payload
    let got = img.load(4, &Address::new(Rc::clone(&ram), 0x108)).unwrap();
    assert_eq!(got, hex("090a0b0c"));
}

/// pad(): the 512-byte pad is clamped by both the next chunk and the
/// end of the address space.
#[test]
fn pad_clamps_to_next_chunk_and_space_end() {
    let m = manager("ram", false, 2, 1);
    let reg = registry();
    let mut img = image_from_str(
        "<binaryimage arch=\"test\">\n\
             <bytechunk space=\"ram\" offset=\"0x10\">\n\
             aabb\n\
             </bytechunk>\n\
             <bytechunk space=\"ram\" offset=\"0x18\">\n\
             ccdd\n\
             </bytechunk>\n\
             <bytechunk space=\"ram\" offset=\"0xfff0\">\n\
             0011223344556677\n\
             </bytechunk>\n\
             </binaryimage>",
        &m,
        &reg,
    );
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());

    // Gap [0x12,0x18) is fully padded: a straddling read succeeds
    let got = img.load(10, &Address::new(Rc::clone(&ram), 0x10)).unwrap();
    assert_eq!(got, hex("aabb000000000000ccdd"));

    // Last chunk [0xfff0,0xfff8) pads only to the space end (8 bytes:
    // room = 0xffff - 0xfff8 + 1), so 0xffff reads 0 and the wrap
    // around to 0x0000 is unmapped
    let got = img.load(1, &Address::new(Rc::clone(&ram), 0xffff)).unwrap();
    assert_eq!(got, vec![0]);
    let err = img
        .load(1, &Address::new(Rc::clone(&ram), 0x0))
        .unwrap_err();
    assert!(matches!(err, UnlaceError::DataUnavail { .. }));
}

/// Constructor and open() error contracts.
#[test]
fn constructor_and_open_errors() {
    let m = manager("ram", false, 4, 1);
    let reg = registry();

    // Root element is not <binaryimage>
    let doc = xml_tree(b"<other arch=\"x\"/>").unwrap();
    let err = LoadImageXml::new("file.xml", Rc::clone(doc.get_root())).unwrap_err();
    match &err {
        UnlaceError::Lowlevel { explain } => {
            assert_eq!(explain, "Missing binaryimage tag in file.xml");
        }
        other => panic!("expected Lowlevel, got {other:?}"),
    }

    // Missing arch attribute: DecoderError from getAttributeValue
    let doc = xml_tree(b"<binaryimage/>").unwrap();
    let err = LoadImageXml::new("file.xml", Rc::clone(doc.get_root())).unwrap_err();
    match &err {
        UnlaceError::Decoder { explain } => assert_eq!(explain, "Unknown attribute: arch"),
        other => panic!("expected Decoder, got {other:?}"),
    }

    // Unknown child tag inside <binaryimage>
    let doc = xml_tree(b"<binaryimage arch=\"x\"><foo/></binaryimage>").unwrap();
    let mut img = LoadImageXml::new("file.xml", Rc::clone(doc.get_root())).unwrap();
    let err = img.open(&m, &reg).unwrap_err();
    match &err {
        UnlaceError::Lowlevel { explain } => assert_eq!(explain, "Unknown LoadImageXml tag"),
        other => panic!("expected Lowlevel, got {other:?}"),
    }
}

/// encode() round-trips through the XML encoder: a re-decoded image
/// returns the same bytes, symbols, arch and readonly ranges.
#[test]
fn encode_round_trip() {
    let m = manager("ram", false, 4, 1);
    let reg = registry();
    let mut img = image_from_str(
        "<binaryimage arch=\"test:arch\">\n\
             <bytechunk space=\"ram\" offset=\"0x100\" readonly=\"true\">\n\
             000102030405060708090a0b0c0d0e0f10111213\n\
             1415\n\
             </bytechunk>\n\
             <symbol space=\"ram\" offset=\"0x100\" name=\"main\"/>\n\
             <symbol space=\"ram\" offset=\"0x110\" name=\"helper\"/>\n\
             </binaryimage>",
        &m,
        &reg,
    );
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());

    let mut out: Vec<u8> = Vec::new();
    {
        let mut encoder = XmlEncode::new(&mut out);
        img.encode(&mut encoder).unwrap();
    }
    let doc = xml_tree(&out).unwrap();
    let mut img2 = LoadImageXml::new("roundtrip", Rc::clone(doc.get_root())).unwrap();
    img2.open(&m, &reg).unwrap();

    assert_eq!(img2.get_arch_type(), b"test:arch".to_vec());
    let a = img.load(22, &Address::new(Rc::clone(&ram), 0x100)).unwrap();
    let b = img2
        .load(22, &Address::new(Rc::clone(&ram), 0x100))
        .unwrap();
    assert_eq!(a, b);
    assert_eq!(b, hex("000102030405060708090a0b0c0d0e0f101112131415"));

    let mut rec = LoadImageFunc::default();
    img2.open_symbols();
    assert!(img2.get_next_symbol(&mut rec));
    assert_eq!(
        (rec.address.get_offset(), rec.name.clone()),
        (0x100, b"main".to_vec())
    );
    assert!(img2.get_next_symbol(&mut rec));
    assert_eq!(
        (rec.address.get_offset(), rec.name.clone()),
        (0x110, b"helper".to_vec())
    );
    assert!(!img2.get_next_symbol(&mut rec));

    // readonly survives the round trip on the original chunk extent
    let mut list = RangeList::new();
    img2.get_readonly(&mut list);
    let ranges: Vec<(u64, u64)> = list.iter().map(|r| (r.get_first(), r.get_last())).collect();
    assert_eq!(ranges, vec![(0x100, 0x115)]);
}

/// adjustVma rebuilds the chunk/symbol maps (scaled by wordsize) but —
/// as in C++ — leaves readonlyset keyed by the old addresses.
#[test]
fn adjust_vma_moves_chunks_and_symbols_but_not_readonlyset() {
    let m = manager("ram", false, 4, 1);
    let reg = registry();
    let mut img = image_from_str(
        "<binaryimage arch=\"test\">\n\
             <bytechunk space=\"ram\" offset=\"0x100\" readonly=\"true\">\n\
             a1b2c3d4\n\
             </bytechunk>\n\
             <symbol space=\"ram\" offset=\"0x102\" name=\"sym\"/>\n\
             </binaryimage>",
        &m,
        &reg,
    );
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());

    img.adjust_vma(0x10);
    let got = img.load(4, &Address::new(Rc::clone(&ram), 0x110)).unwrap();
    assert_eq!(got, hex("a1b2c3d4"));
    let err = img
        .load(4, &Address::new(Rc::clone(&ram), 0x100))
        .unwrap_err();
    assert!(matches!(err, UnlaceError::DataUnavail { .. }));

    let mut rec = LoadImageFunc::default();
    img.open_symbols();
    assert!(img.get_next_symbol(&mut rec));
    assert_eq!(rec.address.get_offset(), 0x112);

    // readonlyset still holds 0x100, which no longer matches any chunk:
    // getReadonly reports nothing (faithful C++ quirk)
    let mut list = RangeList::new();
    img.get_readonly(&mut list);
    assert_eq!(list.num_ranges(), 0);
}

/// clear() empties archtype/chunks/symbols (and deliberately does not
/// touch readonlyset, as in C++).
#[test]
fn clear_empties_caches() {
    let m = manager("ram", false, 4, 1);
    let reg = registry();
    let mut img = image_from_str(
        "<binaryimage arch=\"test\">\n\
             <bytechunk space=\"ram\" offset=\"0x100\" readonly=\"true\">\n\
             aa\n\
             </bytechunk>\n\
             </binaryimage>",
        &m,
        &reg,
    );
    let ram = Rc::clone(m.get_space_by_name("ram").unwrap());
    img.clear();
    assert_eq!(img.get_arch_type(), Vec::<u8>::new());
    let err = img
        .load(1, &Address::new(Rc::clone(&ram), 0x100))
        .unwrap_err();
    assert!(matches!(err, UnlaceError::DataUnavail { .. }));
    let mut rec = LoadImageFunc::default();
    img.open_symbols();
    assert!(!img.get_next_symbol(&mut rec));
}
