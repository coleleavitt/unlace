use super::*;

// A tiny synthetic x64 image mirroring the validated msvc_rtti_x64.exe layout:
//   image_base 0x140000000
//   type_info vftable @ 0x140002000
//   TD(Box)   @ 0x140003010 : [pVFTable=0x140002000][spare][".?AUBox@@"@+16]
//   COL(Box)  @ 0x140002020 : sig=1, pTD->0x140003010, pCHD->0x140002038
//   CHD       @ 0x140002038 : numBase=2, pBaseArray->0x140002048
//   BaseArr   @ 0x140002048 : [->RTTI1@0x140002060][->RTTI1@0x140002080]
//   RTTI1(Box)@ 0x140002060 : pTD->0x140003010
fn x64_img() -> (Vec<u8>, Vec<u8>, RefKind) {
    let ib = 0x1_4000_0000u64;
    let rk = RefKind::new(true, ib, End::Little);
    // .rdata @ 0x140002000 (0x100 bytes)
    let mut rdata = vec![0u8; 0x100];
    let put_u32 =
        |v: &mut [u8], off: usize, x: u32| v[off..off + 4].copy_from_slice(&x.to_le_bytes());
    let put_u64 =
        |v: &mut [u8], off: usize, x: u64| v[off..off + 8].copy_from_slice(&x.to_le_bytes());
    // type_info vftable cell @0x2000 (just zero).
    // COL @ 0x2020: sig=1, off=0, cd=0, pTD=ibo(0x3010), pCHD=ibo(0x2038)
    put_u32(&mut rdata, 0x20, 1);
    put_u32(&mut rdata, 0x2c, 0x3010); // pTD disp @ COL+12
    put_u32(&mut rdata, 0x30, 0x2038); // pCHD disp @ COL+16
    // CHD @ 0x2038: sig=0, attr=0, numBase=2 @+8, pBaseArray=ibo(0x2048) @+12
    put_u32(&mut rdata, 0x40, 2);
    put_u32(&mut rdata, 0x44, 0x2048);
    // BaseArray @ 0x2048: [ibo(0x2060)][ibo(0x2080)]
    put_u32(&mut rdata, 0x48, 0x2060);
    put_u32(&mut rdata, 0x4c, 0x2080);
    // RTTI1(Box) @ 0x2060: pTD=ibo(0x3010)
    put_u32(&mut rdata, 0x60, 0x3010);
    // RTTI1(Shape) @ 0x2080: pTD=ibo(0x3030)
    put_u32(&mut rdata, 0x80, 0x3030);
    // .data @ 0x140003000
    let mut data = vec![0u8; 0x60];
    // TD(Box) @ 0x3010: pVFTable=0x140002000 @+0, name @+16 = ".?AUBox@@"
    put_u64(&mut data, 0x10, ib + 0x2000);
    data[0x20..0x20 + 10].copy_from_slice(b".?AUBox@@\0");
    // TD(Shape) @ 0x3030: pVFTable=0x140002000, name ".?AVShape@@"
    put_u64(&mut data, 0x30, ib + 0x2000);
    data[0x40..0x40 + 12].copy_from_slice(b".?AVShape@@\0");
    (rdata, data, rk)
}

#[test]
fn x64_chain_decodes() {
    let (rdata, data, rk) = x64_img();
    let img = ImageBytes::from_spans(vec![(0x1_4000_2000, &rdata), (0x1_4000_3000, &data)]);
    let col = CompleteObjectLocator::read(&img, &rk, 0x1_4000_2020).unwrap();
    assert_eq!(col.signature, 1);
    assert_eq!(col.p_type_descriptor, 0x1_4000_3010);
    assert_eq!(col.p_class_hierarchy, 0x1_4000_2038);
    let td = TypeDescriptor::read(&img, &rk, col.p_type_descriptor).unwrap();
    assert_eq!(td.mangled_name, ".?AUBox@@");
    assert_eq!(td.p_vftable, 0x1_4000_2000);
    let chd = ClassHierarchyDescriptor::read(&img, &rk, col.p_class_hierarchy).unwrap();
    assert_eq!(chd.num_base_classes, 2);
    let bases = read_base_class_array(&img, &rk, chd.p_base_class_array, chd.num_base_classes);
    assert_eq!(bases, vec![0x1_4000_2060, 0x1_4000_2080]);
    let r1 = BaseClassDescriptor::read(&img, &rk, bases[0]).unwrap();
    let base_td = TypeDescriptor::read(&img, &rk, r1.p_type_descriptor).unwrap();
    assert_eq!(base_td.mangled_name, ".?AUBox@@");
    let r2 = BaseClassDescriptor::read(&img, &rk, bases[1]).unwrap();
    let base_td2 = TypeDescriptor::read(&img, &rk, r2.p_type_descriptor).unwrap();
    assert_eq!(base_td2.mangled_name, ".?AVShape@@");
}

#[test]
fn scan_refs_groups_every_reference_by_target_in_image_order() {
    let (rdata, data, rk) = x64_img();
    let img = ImageBytes::from_spans(vec![(0x1_4000_2000, &rdata), (0x1_4000_3000, &data)]);
    let targets: FxHashSet<u64> = [0x1_4000_3010, 0x1_4000_3030, 0x1_4000_9000]
        .into_iter()
        .collect();
    let hits = img.scan_refs(&rk, &targets);
    assert_eq!(
        hits.get(&0x1_4000_3010),
        Some(&vec![0x1_4000_202c, 0x1_4000_2060])
    );
    assert_eq!(hits.get(&0x1_4000_3030), Some(&vec![0x1_4000_2080]));
    assert!(!hits.contains_key(&0x1_4000_9000));
    assert!(img.scan_refs(&rk, &Default::default()).is_empty());
}

#[test]
fn find_ptrs_locates_type_descriptors() {
    let (rdata, data, rk) = x64_img();
    let img = ImageBytes::from_spans(vec![(0x1_4000_2000, &rdata), (0x1_4000_3000, &data)]);
    // Both TDs hold the common type_info vftable VA in their pVFTable field.
    let hits = img.find_ptrs(&rk, 0x1_4000_2000);
    // The TD pVFTable slots are at 0x3010 and 0x3030.
    assert!(hits.contains(&0x1_4000_3010));
    assert!(hits.contains(&0x1_4000_3030));
}
