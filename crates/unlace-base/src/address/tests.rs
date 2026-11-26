use super::*;
use crate::space::ConstantSpace;

fn ram() -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        3,
        crate::space::addrspace_flags::hasphysical,
        1,
        1,
    ))
}

fn small_space(name: &str, index: i32) -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        name,
        false,
        2,
        1,
        index,
        0,
        0,
        0,
    ))
}

/// `sort_key` must order exactly as [`Address::cmp`] does: every consumer
/// that stores the triple in place of the Address (the Varnode location
/// and definition tree keys) depends on the two being interchangeable.
#[test]
fn sort_key_orders_identically_to_cmp() {
    let mut addrs = vec![
        Address::new_extreme(mach_extreme::m_minimal),
        Address::new_extreme(mach_extreme::m_maximal),
        Address::default(),
    ];
    for spc in [
        ram(),
        Rc::new(ConstantSpace::new()),
        small_space("a", 1),
        small_space("b", 7),
    ] {
        for off in [0u64, 1, 0x1000, 0xffff_ffff, u64::MAX] {
            addrs.push(Address::new(Rc::clone(&spc), off));
        }
    }
    // A second Rc for the same space index: the pointer differs but the
    // order must not (the comparator falls through to the offset).
    addrs.push(Address::new(ram(), 0x1000));
    let mut pairs = 0;
    for a in &addrs {
        for b in &addrs {
            assert_eq!(
                a.cmp(b),
                a.sort_key().cmp(&b.sort_key()),
                "sort_key disagreed with cmp on {a:?} vs {b:?}"
            );
            pairs += 1;
        }
    }
    assert_eq!(pairs, addrs.len() * addrs.len());
}

#[test]
fn test_address_compare_and_extremes() {
    let ram = ram();
    let constant = Rc::new(ConstantSpace::new());
    let a = Address::new(Rc::clone(&ram), 0x1000);
    let b = Address::new(Rc::clone(&ram), 0x1001);
    let c = Address::new(Rc::clone(&constant), 0x5000);
    assert!(a < b);
    assert!(a <= b);
    assert!(a == a.clone());
    assert!(a != b);
    // const space (index 0) sorts before ram (index 3) regardless of offset
    assert!(c < a);
    // extremes
    let min = Address::new_extreme(mach_extreme::m_minimal);
    let max = Address::new_extreme(mach_extreme::m_maximal);
    assert!(min < a && min < c && min < max);
    assert!(a < max && c < max);
    assert!(min == Address::new_extreme(mach_extreme::m_minimal));
    // invalid address detection
    assert!(Address::new_invalid().is_invalid());
    assert!(!a.is_invalid());
}

#[test]
fn test_address_arithmetic_wraps() {
    let small = small_space("io", 4);
    let a = Address::new(Rc::clone(&small), 0xfffe);
    let b = &a + 3;
    assert_eq!(b.get_offset(), 0x1); // wraps at the space boundary
    let c = &b - 2;
    assert_eq!(c.get_offset(), 0xffff);
}

#[test]
fn test_address_overlap_and_containment() {
    let ram = ram();
    let a = Address::new(Rc::clone(&ram), 0x100);
    let b = Address::new(Rc::clone(&ram), 0x104);
    assert_eq!(b.overlap(0, &a, 8), 4);
    assert_eq!(b.overlap(0, &a, 4), -1);
    let constant = Rc::new(ConstantSpace::new());
    let k = Address::new(Rc::clone(&constant), 4);
    assert_eq!(k.overlap(0, &k, 8), -1); // constants never overlap
    assert!(b.contained_by(4, &a, 8));
    assert!(!b.contained_by(8, &a, 8));
    // justified containment (little endian: offset from the left)
    assert_eq!(a.justified_contain(8, &b, 4, false), 4);
    assert_eq!(a.justified_contain(4, &b, 8, false), -1);
    // contiguous: this(hi) at 0x104, lo at 0x100 with losz 4 (little endian)
    assert!(b.is_contiguous(4, &a, 4));
    assert!(!a.is_contiguous(4, &b, 4));
}

#[test]
fn test_seqnum_ordering() {
    let ram = ram();
    let a = Address::new(Rc::clone(&ram), 0x100);
    let b = Address::new(Rc::clone(&ram), 0x200);
    let s1 = SeqNum::new(a.clone(), 5);
    let s2 = SeqNum::new(a.clone(), 9);
    let s3 = SeqNum::new(b.clone(), 1);
    assert!(s1 < s2); // same pc: uniq breaks the tie
    assert!(s2 < s3); // pc dominates uniq
    // C++ operator== compares uniq only
    let s4 = SeqNum::new(b, 5);
    assert!(s1 == s4);
    assert!(s1 != s2);
    assert_eq!(s1.get_time(), 5);
}

#[test]
fn test_range_list_insert_merge() {
    let ram = ram();
    let mut list = RangeList::new();
    list.insert_range(Rc::clone(&ram), 0x100, 0x1ff);
    list.insert_range(Rc::clone(&ram), 0x300, 0x3ff);
    assert_eq!(list.num_ranges(), 2);
    // overlapping insert merges
    list.insert_range(Rc::clone(&ram), 0x180, 0x310);
    assert_eq!(list.num_ranges(), 1);
    let r = list.get_first_range().unwrap();
    assert_eq!(r.get_first(), 0x100);
    assert_eq!(r.get_last(), 0x3ff);
    // adjacent (non-overlapping) ranges do NOT merge: 0x400 starts
    // after 0x3ff but upper_bound walking only merges actual overlap
    list.insert_range(Rc::clone(&ram), 0x500, 0x5ff);
    assert_eq!(list.num_ranges(), 2);
}

#[test]
fn test_range_list_remove_splits() {
    let ram = ram();
    let mut list = RangeList::new();
    list.insert_range(Rc::clone(&ram), 0x100, 0x1ff);
    list.remove_range(Rc::clone(&ram), 0x140, 0x14f);
    assert_eq!(list.num_ranges(), 2);
    let mut s = String::new();
    list.print_bounds(&mut s);
    assert_eq!(s, "ram: 100-13f\nram: 150-1ff\n");
    // removing everything empties the container
    list.remove_range(Rc::clone(&ram), 0, u64::MAX);
    assert!(list.empty());
    let mut s = String::new();
    list.print_bounds(&mut s);
    assert_eq!(s, "all\n");
}

#[test]
fn test_range_list_queries() {
    let ram = ram();
    let other = small_space("io", 4);
    let mut list = RangeList::new();
    list.insert_range(Rc::clone(&ram), 0x100, 0x1ff);
    list.insert_range(Rc::clone(&ram), 0x200, 0x2ff);
    list.insert_range(Rc::clone(&other), 0x10, 0x1f);
    let addr = Address::new(Rc::clone(&ram), 0x180);
    assert!(list.in_range(&addr, 0x10));
    assert!(list.in_range(&addr, 0x80));
    assert!(!list.in_range(&addr, 0x81 + 0x100)); // would need into 0x300
    // longest_fit chains contiguous ranges (0x100-0x1ff then 0x200-0x2ff)
    assert_eq!(list.longest_fit(&addr, 0x1000), 0x180);
    assert!(list.get_range(&ram, 0x250).is_some());
    assert!(list.get_range(&ram, 0x300).is_none());
    assert!(list.get_range(&other, 0x15).is_some());
    assert_eq!(list.num_ranges(), 3);
    // first/last respect space index order (io has higher index)
    assert!(Rc::ptr_eq(
        list.get_first_range().unwrap().get_space(),
        &ram
    ));
    assert!(Rc::ptr_eq(
        list.get_last_range().unwrap().get_space(),
        &other
    ));
}

#[test]
fn test_range_get_last_signed_range() {
    let small = small_space("io", 4);
    let mut list = RangeList::new();
    // a "negative" range (high bit set) and a "positive" one
    list.insert_range(Rc::clone(&small), 0x8000, 0x80ff);
    list.insert_range(Rc::clone(&small), 0x100, 0x1ff);
    // positive ranges win: last range with first <= 0x7fff
    let r = list.get_last_signed_range(&small).unwrap();
    assert_eq!(r.get_first(), 0x100);
    // only negative ranges: fall back to biggest negative
    let mut list = RangeList::new();
    list.insert_range(Rc::clone(&small), 0x8000, 0x80ff);
    let r = list.get_last_signed_range(&small).unwrap();
    assert_eq!(r.get_first(), 0x8000);
}

#[test]
fn test_bitrange_semantics() {
    // little endian byte range
    let mut br = BitRange::from_bytes(0, 4, false);
    assert_eq!(br.num_bits, 32);
    assert_eq!(br.get_mask(), 0xffffffff);
    assert!(br.is_byte_range());
    assert!(br.is_most_significant());
    br.intersect_mask(0x00ffff00);
    assert_eq!(br.least_sig_bit, 8);
    assert_eq!(br.num_bits, 16);
    assert!(br.is_byte_range());
    br.minimize_container();
    assert_eq!(br.byte_offset, 1);
    assert_eq!(br.byte_size, 2);
    assert_eq!(br.least_sig_bit, 0);
    // overlap testing
    let a = BitRange::with_bits(0, 4, 0, 16, false);
    let b = BitRange::with_bits(0, 4, 16, 16, false);
    assert_eq!(a.overlap_test(&b), -1);
    assert_eq!(b.overlap_test(&a), 1);
    assert_eq!(a.overlap_test(&a), 0);
    let c = BitRange::with_bits(0, 4, 4, 8, false);
    assert_eq!(c.overlap_test(&a), 2);
    assert_eq!(a.overlap_test(&c), 3);
}

#[test]
fn test_address_helper_functions() {
    assert_eq!(calc_mask(1), 0xff);
    assert_eq!(calc_mask(4), 0xffffffff);
    assert_eq!(calc_mask(8), u64::MAX);
    assert_eq!(calc_mask(100), u64::MAX);
    assert_eq!(calc_mask(-1), u64::MAX); // (uint4)-1 clamps to 8
    assert_eq!(calc_int_max(4), 0x7fffffff);
    assert_eq!(calc_int_min(4), 0x80000000);
    assert!(signbit_negative(0x80, 1));
    assert!(!signbit_negative(0x7f, 1));
    assert_eq!(uintb_negate(0x0f, 1), 0xf0);
    assert_eq!(sign_extend(0x80, 7) as u64, 0xffffffffffffff80);
    assert_eq!(sign_extend(0x40, 7), 0x40);
    assert_eq!(zero_extend(-1, 15), 0xffff);
    assert_eq!(sign_extend_sized(0x80, 1, 4), 0xffffff80);
    assert_eq!(sign_extend_sized(0x7f, 1, 4), 0x7f);
    assert_eq!(sign_extend_sized(0xdeadbeef, 4, 8), 0xffffffffdeadbeef);
    assert_eq!(extend_signbit(0x8, 4, 2), 0xfff8);
    assert_eq!(byte_swap(0x12345678, 4), 0x78563412);
    let mut v: i64 = 0x1234;
    byte_swap_inplace(&mut v, 2);
    assert_eq!(v, 0x3412);
    assert_eq!(leastsigbit_set(0), -1);
    assert_eq!(leastsigbit_set(0x80), 7);
    assert_eq!(leastsigbit_set(1u64 << 63), 63);
    assert_eq!(mostsigbit_set(0), -1);
    assert_eq!(mostsigbit_set(1), 0);
    assert_eq!(mostsigbit_set(u64::MAX), 63);
    assert_eq!(popcount(0), 0);
    assert_eq!(popcount(u64::MAX), 64);
    assert_eq!(popcount(0xdeadbeef), 24);
    assert_eq!(count_leading_zeros(0), 64);
    assert_eq!(count_leading_zeros(1), 63);
    assert_eq!(count_leading_zeros(u64::MAX), 0);
    assert_eq!(coveringmask(0x1001), 0x1fff);
    assert_eq!(coveringmask(0), 0);
    assert_eq!(bit_transitions(0x0ff0, 2), 2);
    assert_eq!(bit_transitions(0, 8), 0);
    assert_eq!(pcode_right(0x100, 4), 0x10);
    assert_eq!(pcode_right(0x100, 64), 0);
    assert_eq!(pcode_right(0x100, -1), 0); // negative sa converts huge
    assert_eq!(pcode_left(0x10, 4), 0x100);
    assert_eq!(pcode_left(0x10, 65), 0);
    assert_eq!(minimalmask(0), 0xff);
    assert_eq!(minimalmask(0x100), 0xffff);
    assert_eq!(minimalmask(0x10000), 0xffffffff);
    assert_eq!(minimalmask(0x100000000), u64::MAX);
}

#[test]
fn test_address_encode_decode_roundtrip() {
    use crate::marshal::{IdRegistry, PackedDecode, PackedEncode, XmlDecode, XmlEncode};
    use crate::space::AddrSpaceManager;
    let mut manager = AddrSpaceManager::new();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "ram",
            false,
            8,
            1,
            3,
            crate::space::addrspace_flags::hasphysical,
            1,
            1,
        )))
        .unwrap();
    let ram = Rc::clone(manager.get_space(3).unwrap());
    let addr = Address::new(Rc::clone(&ram), 0x401000);

    // packed
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        addr.encode_sized(&mut enc, 4).unwrap();
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let (rt, size) = Address::decode_sized(&mut dec).unwrap();
    assert!(rt == addr);
    assert_eq!(size, 4);

    // xml
    let registry = IdRegistry::with_base_ids();
    let mut buf = Vec::new();
    {
        let mut enc = XmlEncode::new(&mut buf);
        addr.encode(&mut enc).unwrap();
    }
    let mut dec = XmlDecode::new(&manager, &registry);
    dec.ingest_stream(&buf).unwrap();
    let rt = Address::decode(&mut dec).unwrap();
    assert!(rt == addr);
}

#[test]
fn test_rangelist_encode_decode_roundtrip() {
    use crate::marshal::{PackedDecode, PackedEncode};
    use crate::space::AddrSpaceManager;
    let mut manager = AddrSpaceManager::new();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "ram",
            false,
            8,
            1,
            3,
            0,
            1,
            1,
        )))
        .unwrap();
    let ram = Rc::clone(manager.get_space(3).unwrap());
    let mut list = RangeList::new();
    list.insert_range(Rc::clone(&ram), 0x100, 0x1ff);
    list.insert_range(Rc::clone(&ram), 0x400, 0x4ff);
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        list.encode(&mut enc);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let mut rt = RangeList::new();
    rt.decode(&mut dec).unwrap();
    assert_eq!(rt.num_ranges(), 2);
    let mut s1 = String::new();
    let mut s2 = String::new();
    list.print_bounds(&mut s1);
    rt.print_bounds(&mut s2);
    assert_eq!(s1, s2);
}

#[test]
fn test_range_last_addr_open() {
    use crate::space::AddrSpaceManager;
    let mut manager = AddrSpaceManager::new();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "ram",
            false,
            2,
            1,
            0,
            0,
            0,
            0,
        )))
        .unwrap();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "io",
            false,
            2,
            1,
            1,
            0,
            0,
            0,
        )))
        .unwrap();
    let ram = Rc::clone(manager.get_space(0).unwrap());
    let io = Rc::clone(manager.get_space(1).unwrap());
    // interior range: last+1 within the same space
    let r = Range::new(Rc::clone(&ram), 0x10, 0x1f);
    let open = r.get_last_addr_open(&manager);
    assert!(Rc::ptr_eq(open.get_space().unwrap(), &ram));
    assert_eq!(open.get_offset(), 0x20);
    // range ending at the space top: rolls into the next space at 0
    let r = Range::new(Rc::clone(&ram), 0x10, 0xffff);
    let open = r.get_last_addr_open(&manager);
    assert!(Rc::ptr_eq(open.get_space().unwrap(), &io));
    assert_eq!(open.get_offset(), 0);
    // last space ending at top: the ~0 sentinel space with offset 0
    let r = Range::new(Rc::clone(&io), 0x10, 0xffff);
    let open = r.get_last_addr_open(&manager);
    assert!(matches!(open.base_ptr(), AddrSpacePtr::Max));
    assert_eq!(open.get_offset(), 0);
    // it still sorts after every real address
    assert!(Address::new(Rc::clone(&io), 0xffff) < open);
}

#[test]
fn calc_int_min_clamps_to_the_word_size() {
    assert_eq!(calc_int_min(1), 0x80);
    assert_eq!(calc_int_min(9), 1 << 63);
    assert_eq!(calc_int_min(0), 0);
}

#[test]
fn extending_from_a_negative_bit_gives_zero() {
    assert_eq!(sign_extend(5, -1), 0);
    assert_eq!(zero_extend(5, -1), 0);
}
