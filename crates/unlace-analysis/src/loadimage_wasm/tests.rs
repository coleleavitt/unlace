use super::*;
use crate::loader::format::wasm::synthetic::{I32, ModuleBuilder, i32_const, indexed};
use unlace_base::space::{addrspace_flags, spacetype};

fn loaded(builder: &ModuleBuilder) -> (WasmLoadImage, Rc<AddrSpace>) {
    let image = WasmImage::parse(&builder.build()).unwrap();
    let flags = addrspace_flags::hasphysical;
    let ram = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        4,
        1,
        1,
        flags,
        1,
        1,
    ));
    let mut loader = WasmLoadImage::new("module.wasm", image);
    loader.attach_to_space(Rc::clone(&ram));
    (loader, ram)
}

fn read(
    loader: &mut WasmLoadImage,
    ram: &Rc<AddrSpace>,
    addr: u64,
    len: usize,
) -> UnlaceResult<Vec<u8>> {
    let mut bytes = vec![0xaa; len];
    loader.load_fill(&mut bytes, &Address::new(Rc::clone(ram), addr))?;
    Ok(bytes)
}

fn module() -> ModuleBuilder {
    let mut builder = ModuleBuilder::default();
    builder
        .import("ext", &[I32], &[])
        .function(
            "first",
            &[],
            &[],
            &[],
            &[i32_const(1), indexed(0x10, 0)].concat(),
        )
        .function("second", &[], &[I32], &[], &indexed(0x23, 1))
        .memory(1)
        .global("__stack_pointer", I32, true, 0x1_0000)
        .global("limit", I32, false, 64)
        .table(&[2, 0], false)
        .data(8, b"abcdef")
        .data(10, b"XY");
    builder
}

#[test]
fn each_index_space_has_its_place_in_the_flat_image() {
    let (loader, _) = loaded(&module());
    let image = loader.image();
    let addrs: Vec<(u64, Option<&str>, bool)> = image
        .functions
        .iter()
        .map(|f| (f.addr, f.name.as_deref(), f.imported))
        .collect();
    assert_eq!(
        addrs,
        vec![
            (IMPORT_BASE, Some("ext"), true),
            (CODE_BASE, Some("first"), false),
            (CODE_BASE + 4 * 16, Some("second"), false),
        ]
    );
    assert_eq!(
        loader.get_segments(),
        vec![
            (0, 0x1_0000, section_flags::DATA),
            (
                CODE_BASE,
                7 * 16,
                section_flags::CODE | section_flags::READONLY
            ),
            (GLOBAL_BASE, 2 * 16, section_flags::DATA),
            (
                TABLE_BASE,
                12,
                section_flags::DATA | section_flags::READONLY
            ),
        ]
    );
    assert_eq!(
        image.globals,
        vec![
            (GLOBAL_BASE, "__stack_pointer".to_string(), 4),
            (GLOBAL_BASE + 16, "limit".to_string(), 4)
        ]
    );
    assert_eq!(image.tables, vec![(TABLE_BASE, "table0".to_string(), 12)]);
}

#[test]
fn reads_see_placed_bytes_zero_fill_and_nothing_outside_a_region() {
    let (mut loader, ram) = loaded(&module());
    assert_eq!(read(&mut loader, &ram, 6, 10).unwrap(), b"\0\0abXYef\0\0");
    assert_eq!(
        read(&mut loader, &ram, 0xfffe, 4).unwrap(),
        [0, 0, 0, 0],
        "a read may run off a region's end"
    );
    assert!(read(&mut loader, &ram, 0x1_0000, 4).is_err());
    assert!(
        read(&mut loader, &ram, IMPORT_BASE, 4).is_err(),
        "an import has no bytes"
    );
    // The call record of `first` holds the import's address.
    assert_eq!(
        read(&mut loader, &ram, CODE_BASE + 2 * 16 + 8, 4).unwrap(),
        (IMPORT_BASE as u32).to_le_bytes()
    );
    // Slot 0 is null; slots 1 and 2 hold `second` and the import.
    let second = (CODE_BASE as u32 + 4 * 16).to_le_bytes();
    let table = [[0; 4], second, (IMPORT_BASE as u32).to_le_bytes()].concat();
    assert_eq!(read(&mut loader, &ram, TABLE_BASE, 12).unwrap(), table);
    assert_eq!(
        read(&mut loader, &ram, GLOBAL_BASE, 20).unwrap()[..20],
        [[0, 0, 1, 0].as_slice(), &[0; 12], &[64, 0, 0, 0]].concat()
    );
}

#[test]
fn only_what_nothing_can_write_is_read_only() {
    let readonly = |builder: &ModuleBuilder| {
        let (loader, _) = loaded(builder);
        let mut list = RangeList::new();
        loader.get_readonly(&mut list);
        list.iter()
            .map(|range| (range.get_first(), range.get_last()))
            .collect::<Vec<_>>()
    };
    let code = (CODE_BASE, CODE_BASE + 7 * 16 - 1);
    let limit = (GLOBAL_BASE + 16, GLOBAL_BASE + 31);
    let table = (TABLE_BASE, TABLE_BASE + 11);
    assert_eq!(readonly(&module()), vec![code, limit, table]);
    let mut exported = module();
    exported.table(&[2, 0], true);
    assert_eq!(readonly(&exported), vec![code, limit]);
    let mut refused = module();
    refused.function("simd", &[], &[], &[], &[0xfd, 0x0c]);
    assert_eq!(
        readonly(&refused),
        vec![(CODE_BASE, CODE_BASE + 8 * 16 - 1), limit]
    );
}

#[test]
fn named_functions_are_the_symbol_stream_and_a_refused_body_is_reported() {
    let mut builder = module();
    builder.function("simd", &[], &[], &[], &[0xfd, 0x0c]);
    let (loader, _) = loaded(&builder);
    let mut names = Vec::new();
    loader.open_symbols();
    let mut record = LoadImageFunc::default();
    while loader.get_next_symbol(&mut record) {
        names.push((
            record.address.get_offset(),
            String::from_utf8(record.name.clone()).unwrap(),
        ));
    }
    assert_eq!(
        names,
        vec![
            (IMPORT_BASE, "ext".to_string()),
            (CODE_BASE, "first".to_string()),
            (CODE_BASE + 4 * 16, "second".to_string()),
            (CODE_BASE + 7 * 16, "simd".to_string()),
        ]
    );
    assert_eq!(
        loader.image().refused,
        vec![(3, "uses instruction 0xfd".to_string())]
    );
}

#[test]
fn a_memory_the_layout_cannot_hold_is_an_error() {
    let mut builder = ModuleBuilder::default();
    builder.memory(0x8001);
    assert!(
        WasmImage::parse(&builder.build())
            .unwrap_err()
            .contains("does not fit below the code")
    );
}

#[test]
fn a_segment_outside_its_memory_is_counted_not_placed() {
    let mut builder = ModuleBuilder::default();
    builder.memory(1).data(0xfffe, b"abcd");
    assert_eq!(
        WasmImage::parse(&builder.build())
            .unwrap()
            .unplaced_segments,
        1
    );
}
