use super::*;

fn ram_space(ind: i32) -> AddrSpace {
    AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        ind,
        fl::hasphysical,
        1,
        1,
    )
}

#[test]
fn test_space_calc_scale_mask() {
    let spc = ram_space(3);
    assert_eq!(spc.get_highest(), u64::MAX);
    assert_eq!(spc.get_pointer_lower_bound(), 0x1000);
    assert_eq!(spc.get_pointer_upper_bound(), u64::MAX.wrapping_sub(0x1000));
    let small = AddrSpace::new(spacetype::IPTR_PROCESSOR, "io", false, 2, 1, 4, 0, 0, 0);
    assert_eq!(small.get_highest(), 0xffff);
    assert_eq!(small.get_pointer_lower_bound(), 0x100);
    assert_eq!(small.get_pointer_upper_bound(), 0xffff - 0x100);
    // wordsize scaling: highest = mask * wordsize + (wordsize-1)
    let word = AddrSpace::new(spacetype::IPTR_PROCESSOR, "word", false, 2, 2, 5, 0, 0, 0);
    assert_eq!(word.get_highest(), 0xffffu64 * 2 + 1);
}

#[test]
fn test_space_wrap_offset() {
    let small = AddrSpace::new(spacetype::IPTR_PROCESSOR, "io", false, 2, 1, 4, 0, 0, 0);
    assert_eq!(small.wrap_offset(0x10000), 0);
    assert_eq!(small.wrap_offset(0x1ffff), 0xffff);
    assert_eq!(small.wrap_offset(0xffff), 0xffff);
    // negative-as-unsigned offsets wrap through the signed remainder
    assert_eq!(small.wrap_offset(1u64.wrapping_neg()), 0xffff);
}

#[test]
fn test_space_manager_insert_and_shortcuts() {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager.insert_space(Rc::new(OtherSpace::new(1))).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(2, 0, false)))
        .unwrap();
    manager.insert_space(Rc::new(ram_space(3))).unwrap();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "register",
            false,
            4,
            1,
            4,
            0,
            0,
            0,
        )))
        .unwrap();
    manager.insert_space(Rc::new(FspecSpace::new(5))).unwrap();
    manager.insert_space(Rc::new(IopSpace::new(6))).unwrap();
    manager
        .insert_space(Rc::new(JoinSpace::new(7, false)))
        .unwrap();
    manager.set_default_code_space(3).unwrap();

    assert_eq!(manager.num_spaces(), 8);
    assert_eq!(manager.get_default_size(), 8);
    // Shortcut assignment: '#' const, 'o' OTHER, 'u' unique, 'r' ram,
    // '%' register, 'f' fspec, 'i' iop, 'j' join
    assert_eq!(manager.get_space(0).unwrap().get_shortcut(), '#');
    assert_eq!(manager.get_space(1).unwrap().get_shortcut(), 'o');
    assert_eq!(manager.get_space(2).unwrap().get_shortcut(), 'u');
    assert_eq!(manager.get_space(3).unwrap().get_shortcut(), 'r');
    assert_eq!(manager.get_space(4).unwrap().get_shortcut(), '%');
    assert_eq!(manager.get_space(5).unwrap().get_shortcut(), 'f');
    assert_eq!(manager.get_space(6).unwrap().get_shortcut(), 'i');
    assert_eq!(manager.get_space(7).unwrap().get_shortcut(), 'j');
    assert!(Rc::ptr_eq(
        manager.get_space_by_shortcut(b'r').unwrap(),
        manager.get_space(3).unwrap()
    ));
    assert!(Rc::ptr_eq(
        manager.get_space_by_name("OTHER").unwrap(),
        manager.get_space(1).unwrap()
    ));
    // Special-space quick references
    assert!(manager.get_constant_space().is_some());
    assert!(manager.get_unique_space().is_some());
    assert!(manager.get_fspec_space().is_some());
    assert!(manager.get_iop_space().is_some());
    assert!(manager.get_join_space().is_some());
    assert!(manager.get_stack_space().is_none());
}

#[test]
fn test_space_manager_insert_errors() {
    let mut manager = AddrSpaceManager::new();
    // const space with wrong index
    let mut bad = ConstantSpace::new();
    bad.index = 5;
    let err = manager.insert_space(Rc::new(bad)).unwrap_err();
    assert_eq!(err.explain(), "const space must be assigned index 0");
    // duplicate id
    manager.insert_space(Rc::new(ram_space(3))).unwrap();
    let err = manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "ram2",
            false,
            8,
            1,
            3,
            0,
            0,
            0,
        )))
        .unwrap_err();
    assert_eq!(err.explain(), "Space ram2 was assigned id duplicating: ram");
    // duplicate name
    let err = manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "ram",
            false,
            8,
            1,
            9,
            0,
            0,
            0,
        )))
        .unwrap_err();
    assert_eq!(err.explain(), "Space ram was initialized more than once");
}

#[test]
fn test_space_print_raw_padding() {
    let spc = ram_space(3);
    let mut s = String::new();
    spc.print_raw(&mut s, 0x1234).unwrap();
    assert_eq!(s, "0x00001234"); // 8-byte space shrinks to 4 for small offsets
    let mut s = String::new();
    spc.print_raw(&mut s, 0x123456789).unwrap();
    assert_eq!(s, "0x000123456789"); // 6-byte form
    let mut s = String::new();
    spc.print_raw(&mut s, 0x1234567890abcdef).unwrap();
    assert_eq!(s, "0x1234567890abcdef");
    let constant = ConstantSpace::new();
    let mut s = String::new();
    constant.print_raw(&mut s, 0x42).unwrap();
    assert_eq!(s, "0x42");
}

#[test]
fn test_space_varnode_storage_compare() {
    let manager = {
        let mut m = AddrSpaceManager::new();
        m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
        m.insert_space(Rc::new(ram_space(3))).unwrap();
        m
    };
    let r = Rc::clone(manager.get_space(3).unwrap());
    let c = Rc::clone(manager.get_constant_space().unwrap());
    let vn = |s: &Rc<AddrSpace>, off: u64, size: u32| VarnodeStorage {
        space: Some(Rc::clone(s)),
        offset: off,
        size,
    };
    // Equality requires identical space/offset/size
    assert_eq!(vn(&r, 0x10, 4), vn(&r, 0x10, 4));
    assert_ne!(vn(&r, 0x10, 4), vn(&r, 0x10, 8));
    assert_ne!(vn(&r, 0x10, 4), vn(&c, 0x10, 4));
    // Ordering: space index, then offset, then BIG sizes first
    assert!(vn(&c, 0x10, 4) < vn(&r, 0x0, 4));
    assert!(vn(&r, 0x10, 4) < vn(&r, 0x11, 4));
    assert!(vn(&r, 0x10, 8) < vn(&r, 0x10, 4));
    // little-endian contiguity: `this` is the most significant piece
    assert!(vn(&r, 0x104, 4).is_contiguous(&vn(&r, 0x100, 4)));
    assert!(!vn(&r, 0x100, 4).is_contiguous(&vn(&r, 0x104, 4)));
    assert!(!vn(&r, 0x104, 4).is_contiguous(&vn(&c, 0x100, 4)));
}

#[test]
fn test_space_join_record_ord() {
    let manager = {
        let mut m = AddrSpaceManager::new();
        m.insert_space(Rc::new(ram_space(3))).unwrap();
        m
    };
    let r = Rc::clone(manager.get_space(3).unwrap());
    let vn = |off: u64, size: u32| VarnodeStorage {
        space: Some(Rc::clone(&r)),
        offset: off,
        size,
    };
    let rec = |pieces: Vec<VarnodeStorage>, usize_: u32| JoinRecord {
        pieces,
        unified: VarnodeStorage {
            space: None,
            offset: 0,
            size: usize_,
        },
    };
    // unified size compares first (floats: same piece, different size)
    assert!(rec(vec![vn(0, 8)], 4) < rec(vec![vn(0, 8)], 8));
    // lexicographic piece order
    assert!(rec(vec![vn(0, 4), vn(8, 4)], 8) < rec(vec![vn(0, 4), vn(12, 4)], 8));
    // prefix: fewer pieces sorts Less, same pieces Equal
    assert!(rec(vec![vn(0, 4)], 8) < rec(vec![vn(0, 4), vn(8, 4)], 8));
    assert!(rec(vec![vn(0, 4), vn(8, 4)], 8) > rec(vec![vn(0, 4)], 8));
    assert_eq!(
        rec(vec![vn(0, 4), vn(8, 4)], 8),
        rec(vec![vn(0, 4), vn(8, 4)], 8)
    );
}

#[test]
fn zero_padding_joins_keep_target_byte_order_and_every_slice() {
    for big_endian in [false, true] {
        for padding_slot in 0..3 {
            let mut manager = AddrSpaceManager::new();
            let constant = Rc::new(ConstantSpace::new());
            let ram = Rc::new(AddrSpace::new(
                spacetype::IPTR_PROCESSOR,
                "ram",
                big_endian,
                8,
                1,
                1,
                0,
                0,
                0,
            ));
            manager.insert_space(constant.clone()).unwrap();
            manager.insert_space(ram.clone()).unwrap();
            manager
                .insert_space(Rc::new(JoinSpace::new(2, big_endian)))
                .unwrap();
            let mut pieces = vec![
                VarnodeStorage {
                    space: Some(ram.clone()),
                    offset: 0x40,
                    size: 4,
                },
                VarnodeStorage {
                    space: Some(ram.clone()),
                    offset: 0x80,
                    size: 8,
                },
            ];
            pieces.insert(
                padding_slot,
                VarnodeStorage {
                    space: Some(constant.clone()),
                    offset: 0,
                    size: 4,
                },
            );
            let expected: Vec<_> = pieces
                .iter()
                .flat_map(|piece| {
                    let space = piece.space.clone().unwrap();
                    (0..piece.size).map(move |offset| {
                        Address::new(
                            space.clone(),
                            if space.get_type() == spacetype::IPTR_CONSTANT {
                                0
                            } else {
                                piece.offset + u64::from(offset)
                            },
                        )
                    })
                })
                .collect();
            if !big_endian {
                pieces.reverse();
            }
            let join = manager.find_add_join(&pieces, 0).unwrap();
            let unified = join.get_unified();
            for start in 0..16usize {
                for size in 1..=16 - start {
                    let mut address = Address::new(
                        unified.space.clone().unwrap(),
                        unified.offset + start as u64,
                    );
                    address.renormalize(size as i32, &manager).unwrap();
                    let slice = if address.is_join() {
                        let record = manager.find_join(address.get_offset()).unwrap();
                        assert_eq!(record.get_unified().size, size as u32);
                        (0..size)
                            .map(|offset| {
                                record.get_equivalent_address(
                                    address.get_offset() + offset as u64,
                                    &mut 0,
                                )
                            })
                            .collect::<Vec<_>>()
                    } else {
                        (0..size)
                            .map(|offset| {
                                if address.is_constant() {
                                    address.clone()
                                } else {
                                    &address + offset as i64
                                }
                            })
                            .collect()
                    };
                    assert_eq!(
                        slice,
                        expected[start..start + size],
                        "endian={big_endian} padding={padding_slot} start={start} size={size}"
                    );
                }
            }
        }
    }
}

#[test]
fn test_space_istream_hex() {
    // num_get hex semantics for parseAddressSimple
    assert_eq!(cxx_istream_hex_u64(b"1000"), 0x1000);
    assert_eq!(cxx_istream_hex_u64(b"  0xfF"), 0xff);
    assert_eq!(cxx_istream_hex_u64(b"10zz"), 0x10); // stops at non-digit
    assert_eq!(cxx_istream_hex_u64(b""), 0); // failed extraction stores 0
    assert_eq!(cxx_istream_hex_u64(b"zz"), 0);
    // overflow saturates at ULLONG_MAX
    assert_eq!(cxx_istream_hex_u64(b"1ffffffffffffffff"), u64::MAX);
    // '-' negates modularly
    assert_eq!(cxx_istream_hex_u64(b"-1"), u64::MAX);
}

#[test]
fn test_space_read_offsets() {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ram_space(3))).unwrap();
    manager.set_default_code_space(3).unwrap();
    let spc = Rc::clone(manager.get_space(3).unwrap());
    let mut size: i32 = 0;
    let off = spc.read("0x1000", &mut size, &manager).unwrap();
    assert_eq!(off, 0x1000);
    assert_eq!(size, 8); // "natural" size of the default space
    let off = spc.read("0x1000:2", &mut size, &manager).unwrap();
    assert_eq!(off, 0x1000);
    assert_eq!(size, 2);
    let off = spc.read("0x1000:2+4", &mut size, &manager).unwrap();
    assert_eq!(off, 0x1004);
    assert_eq!(size, 2);
    let off = spc.read("0x1000+8", &mut size, &manager).unwrap();
    assert_eq!(off, 0x1008);
    assert_eq!(size, 8);
}
