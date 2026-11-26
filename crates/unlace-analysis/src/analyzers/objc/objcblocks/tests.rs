use super::*;
use unlace_decomp::dtype::TypeFactoryImpl;

/// `-[Runner maker:]` at 0x1000: `adrp x9, got; ldr x9, [x9, #0x10]` (the
/// `_NSConcreteStackBlock` slot at 0x8010), `str x9, [sp, #8]`, then the
/// invoke and descriptor materialized and stored as a pair at `[sp, #24]`,
/// a double capture at `[sp, #40]`, an int at `[sp, #48]`, and a `__block`
/// cell at `[sp, #64]` (`isa = 0, forwarding = &cell, flags|size, value`)
/// whose address is captured at `[sp, #56]`.
#[test]
fn stack_block_stores_name_the_invoke_captures_and_cell() {
    let words: [u32; 18] = [
        0x9000_0009, // adrp x9, page (imm 0: the page of pc, 0x1000)
        0xF940_0929, // ldr x9, [x9, #0x10]
        0xF900_07E9, // str x9, [sp, #8]
        0x9000_0009, // adrp x9, page
        0x9100_8129, // add x9, x9, #0x20
        0x9000_000A, // adrp x10, page
        0x9101_014A, // add x10, x10, #0x40
        0xA901_ABE9, // stp x9, x10, [sp, #24]
        0xFD00_17E0, // str d0, [sp, #40]
        0xB900_33E8, // str w8, [sp, #48]
        0x9101_03E8, // add x8, sp, #64
        0xA904_23FF, // stp xzr, x8, [sp, #64]
        0xD2C0_0409, // movz x9, #0x20, lsl #32  (size 32, flags 0)
        0xF900_2BE9, // str x9, [sp, #80]
        0xF900_2FFF, // str xzr, [sp, #88]
        0xF900_1FE8, // str x8, [sp, #56]
        0xD65F_03C0, // ret
        0xD503_201F, // nop
    ];
    let bytes: Vec<u8> = words.iter().flat_map(|w| w.to_le_bytes()).collect();
    let (sites, cells) = stack_block_sites(&|_| None, &[(0x1000, &bytes)], &[0x1010]);
    assert_eq!(sites.len(), 1);
    let s = &sites[0];
    assert_eq!(
        (s.pc, s.frame, s.invoke, s.descriptor, s.last_ret),
        (0x1008, 8, 0x1020, Some(0x1040), 0)
    );
    let caps: Vec<(u64, u8, bool, Option<Held>)> = s
        .captures
        .iter()
        .map(|c| (c.off - s.frame, c.width, c.float, c.held))
        .collect();
    assert_eq!(caps[0], (32, 8, true, None), "the double at +32");
    assert_eq!(caps[1], (40, 4, false, None), "the int at +40");
    assert_eq!(
        caps[2],
        (48, 8, false, Some(Held::Stack(64))),
        "the cell's address at +48"
    );
    assert_eq!(
        cells,
        vec![ByrefCell {
            frame: 64,
            depth: 0,
            flags: 0,
            size: 32,
            value: Some(Store {
                off: 88,
                width: 8,
                float: false,
                held: Some(Held::Imm(0))
            })
        }]
    );
    assert!(
        stack_block_sites(&|_| None, &[(0x1000, &bytes)], &[0x9999])
            .0
            .is_empty(),
        "another slot is not the isa"
    );
}

#[test]
fn signature_names_the_block_first() {
    let f = TypeFactoryImpl::new();
    f.set_default_alignment_map();
    f.set_max_basetype_size(8);
    f.setup_sizes(Some(8), 8, 4);
    let _ = f.cache_core_types();
    let tctx = TypeCtx::new(&f, 8, 1);
    let layout = block_layout(&tctx).unwrap();
    assert_eq!(layout.get_size(), 32);
    let p = invoke_prototype("block_invoke_1", "q16@?0q8", &tctx, &layout).unwrap();
    assert_eq!(p.innames, ["block", "arg1"]);
    assert_eq!(
        p.intypes[0].get_ptr_to().unwrap().get_name(),
        "Block_layout"
    );
    assert!(
        invoke_prototype("b", "v16@0:8", &tctx, &layout).is_none(),
        "a method signature is not a block's"
    );
}
