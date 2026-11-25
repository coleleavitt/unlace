use super::*;

#[test]
fn pass_identity() {
    let p = RttiPass;
    assert_eq!(p.id(), "rtti");
    assert_eq!(p.phase(), Phase::P1);
}

/// A recovered virtual method is named after the FUNCTION in the slot, never after
/// the vftable data object that points at it: an inventory that labels an executable
/// range `<Class>::vftable_<i>` claims a routine is a vtable, and under multiple
/// inheritance a class really does own several vftables, so the indexed `vftable_`
/// form is ambiguous rather than merely ugly.
#[test]
fn virtual_method_is_named_after_the_function_not_the_table() {
    assert_eq!(vfunc_name("Box", 0), "Box::vfunc_0");
    assert_eq!(
        vfunc_name("std::basic_stringbuf", 11),
        "std::basic_stringbuf::vfunc_11"
    );
    for slot in [0usize, 1, 11] {
        let n = vfunc_name("std::bad_alloc", slot);
        assert!(
            !n.contains("vftable"),
            "a virtual-method function name must not spell the vftable data object: {n}"
        );
    }
}

/// Thousands of classes in an image padded to megabytes recover in one scan
/// per byte-search: a scan per class would take minutes here.
#[test]
fn many_classes_recover_in_one_scan_per_search() {
    const CLASSES: u64 = 3000;
    let ib = 0x1_4000_0000u64;
    let rk = RefKind::new(true, ib, End::Little);
    let (text_base, rdata_base, data_base) = (ib + 0x1000, ib + 0x10_0000, ib + 0x20_0000);
    let put_u32 = |v: &mut [u8], off: u64, x: u64| {
        v[off as usize..off as usize + 4].copy_from_slice(&(x as u32).to_le_bytes())
    };
    let put_u64 = |v: &mut [u8], off: u64, x: u64| {
        v[off as usize..off as usize + 8].copy_from_slice(&x.to_le_bytes())
    };
    let name = |i: u64| {
        let letter = |n: u64| (b'a' + (n % 26) as u8) as char;
        format!("Klass{}{}{}", letter(i / 676), letter(i / 26), letter(i))
    };
    let mut rdata = vec![0u8; (CLASSES * 0x60) as usize];
    let mut data = vec![0u8; (CLASSES * 0x30) as usize];
    for i in 0..CLASSES {
        let (blk, td) = (i * 0x60, data_base + i * 0x30);
        put_u32(&mut rdata, blk, 1);
        put_u32(&mut rdata, blk + 12, td - ib);
        put_u32(&mut rdata, blk + 16, rdata_base + blk + 0x18 - ib);
        put_u32(&mut rdata, blk + 0x18 + 8, 1);
        put_u32(&mut rdata, blk + 0x18 + 12, rdata_base + blk + 0x28 - ib);
        put_u32(&mut rdata, blk + 0x28, rdata_base + blk + 0x30 - ib);
        put_u32(&mut rdata, blk + 0x30, td - ib);
        put_u64(&mut rdata, blk + 0x48, rdata_base + blk);
        put_u64(&mut rdata, blk + 0x50, text_base + i * 16);
        put_u64(&mut data, i * 0x30, ib + 0x2000);
        let mangled = format!(".?AV{}@@", name(i));
        let at = (i * 0x30 + 16) as usize;
        data[at..at + mangled.len()].copy_from_slice(mangled.as_bytes());
    }
    let code = vec![0u8; (CLASSES * 16) as usize];
    let padding = vec![0u8; 32 << 20];
    let img = ImageBytes::from_spans(vec![
        (text_base, &code),
        (rdata_base, &rdata),
        (data_base, &data),
        (ib + 0x100_0000, &padding),
    ]);
    let text = TextRanges::for_test(vec![(text_base, text_base + CLASSES * 16)]);

    let started = std::time::Instant::now();
    let descriptors = find_type_descriptors(&img, &rk);
    assert_eq!(
        pick_common_type_info_vftable(&descriptors),
        Some(ib + 0x2000)
    );
    let tds: Vec<&TypeDescriptor> = descriptors.iter().collect();
    let mut out = AnalysisOutput::default();
    emit_classes(&img, &rk, &text, &tds, &mut out);
    let elapsed = started.elapsed();

    for i in [0, 1, CLASSES / 2, CLASSES - 1] {
        let class = name(i);
        let at = |n: &str| out.symbols.iter().find(|s| s.name == n).map(|s| s.addr);
        assert_eq!(
            at(&format!("{class}::vftable")),
            Some(rdata_base + i * 0x60 + 0x50)
        );
        assert_eq!(at(&format!("{class}::vfunc_0")), Some(text_base + i * 16));
    }
    let vftables = out
        .symbols
        .iter()
        .filter(|s| s.name.ends_with("::vftable"))
        .count();
    assert_eq!(vftables, CLASSES as usize);
    assert!(
        elapsed < std::time::Duration::from_secs(30),
        "{CLASSES} classes took {elapsed:?}"
    );
}

/// A method a derived class inherits sits in both classes' vftables and is
/// named once, for the base; an override keeps the derived class's name, and
/// a function unrelated classes share keeps every holder's name.
#[test]
fn shared_slot_is_named_for_the_defining_base() {
    let mut named = SlotNames::default();
    for (addr, class, slot) in [
        (0x10, "std::bad_alloc", 1),
        (0x20, "std::bad_alloc", 0),
        (0x10, "std::exception", 1),
        (0x30, "std::exception", 0),
        (0x40, "A", 0),
        (0x40, "B", 0),
    ] {
        named.slots.push((addr, class.to_string(), slot));
    }
    for (class, bases) in [
        ("std::bad_alloc", &["std::bad_alloc", "std::exception"][..]),
        ("std::exception", &["std::exception"][..]),
    ] {
        named.bases.insert(
            class.to_string(),
            bases.iter().map(|b| b.to_string()).collect(),
        );
    }
    let mut out = AnalysisOutput::default();
    named.emit(&mut out);
    let names: Vec<(u64, &str)> = out
        .symbols
        .iter()
        .map(|s| (s.addr, s.name.as_str()))
        .collect();
    assert_eq!(
        names,
        [
            (0x10, "std::exception::vfunc_1"),
            (0x20, "std::bad_alloc::vfunc_0"),
            (0x30, "std::exception::vfunc_0"),
            (0x40, "A::vfunc_0"),
            (0x40, "B::vfunc_0"),
        ]
    );
}

#[test]
fn common_type_info_needs_agreement() {
    // A single descriptor pointing at a vftable is not enough; two are.
    let one = vec![TypeDescriptor {
        addr: 0x1000,
        p_vftable: 0x2000,
        mangled_name: ".?AVA@@".into(),
    }];
    assert_eq!(pick_common_type_info_vftable(&one), None);
    let two = vec![
        TypeDescriptor {
            addr: 0x1000,
            p_vftable: 0x2000,
            mangled_name: ".?AVA@@".into(),
        },
        TypeDescriptor {
            addr: 0x1100,
            p_vftable: 0x2000,
            mangled_name: ".?AVB@@".into(),
        },
    ];
    assert_eq!(pick_common_type_info_vftable(&two), Some(0x2000));
    // A null pVFTable never wins.
    let nulls = vec![
        TypeDescriptor {
            addr: 1,
            p_vftable: 0,
            mangled_name: ".?AVA@@".into(),
        },
        TypeDescriptor {
            addr: 2,
            p_vftable: 0,
            mangled_name: ".?AVB@@".into(),
        },
    ];
    assert_eq!(pick_common_type_info_vftable(&nulls), None);
}
