use super::*;

fn image(data: &[u8], work: u64) -> MachoImage<'_> {
    MachoImage {
        spans: vec![(0x1000, 0x1000 + data.len() as u64, data)],
        endian: Endianness::Little,
        ptr_size: 8,
        fixups: ChainedFixups::default(),
        binds: HashMap::new(),
        outside: None,
        selector_base: None,
        method_symbols: HashMap::new(),
        work: Cell::new(work),
    }
}

/// A string is read only as far as the budget left pays for: one that
/// fits is read and charged its bytes, one longer than what is left is
/// refused and spends the rest.
#[test]
fn read_cstr_scans_no_further_than_the_budget() {
    let mut data = vec![b'a'; 1 << 16];
    data[3] = 0;
    let last = data.len() - 1;
    data[last] = 0;
    let img = image(&data, 100);
    assert_eq!(img.read_cstr(0x1000).as_deref(), Some("aaa"));
    assert_eq!(img.work.get(), 96);
    assert_eq!(img.read_cstr(0x1004), None);
    assert_eq!(img.work.get(), 0);
    let img = image(&data, 1 << 20);
    assert_eq!(img.read_cstr(0x1004).map(|s| s.len()), Some((1 << 16) - 5));
}

/// A symbol names the method under the category the source gave it; the
/// metadata may name another. Only the same kind, class and selector match.
#[test]
fn method_symbol_matches_class_and_selector_under_any_category() {
    let mut img = image(&[0; 8], 0);
    img.method_symbols
        .insert(0x1000, "-[NSObject(NSKeyValueCoding) valueForKey:]");
    img.method_symbols.insert(0x1004, "+[Greeter make]");
    assert_eq!(
        img.method_symbol(0x1000, '-', "NSObject", "valueForKey:"),
        Some("-[NSObject(NSKeyValueCoding) valueForKey:]")
    );
    assert_eq!(
        img.method_symbol(0x1004, '+', "Greeter", "make"),
        Some("+[Greeter make]")
    );
    assert_eq!(
        img.method_symbol(0x1000, '+', "NSObject", "valueForKey:"),
        None
    );
    assert_eq!(
        img.method_symbol(0x1000, '-', "NSObj", "valueForKey:"),
        None
    );
    assert_eq!(img.method_symbol(0x1000, '-', "NSObject", "Key:"), None);
    assert_eq!(
        img.method_symbol(0x1008, '-', "NSObject", "valueForKey:"),
        None
    );
}

/// Bytes outside the image come from the cache and are charged to the
/// walk budget; a string there is found in the window that holds its end.
#[test]
fn reads_outside_the_image_go_through_the_cache_and_the_budget() {
    let mut far = vec![b's'; 200];
    far[3] = 0;
    far.push(0);
    far.extend([0x88, 0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11]);
    let outside = move |va: u64, n: usize| {
        let at = usize::try_from(va.checked_sub(0x9000)?).ok()?;
        far.get(at..).map(|b| b[..n.min(b.len())].to_vec())
    };
    let img = image(&[0; 8], 5000).with_cache(Rc::new(outside), Some(0x9000));
    assert!(img.in_cache());
    assert_eq!(img.read_cstr(0x9000).as_deref(), Some("sss"));
    assert_eq!(img.read_cstr(0x9004).map(|s| s.len()), Some(196));
    assert_eq!(img.read_ptr(0x9000 + 201), Some(0x1122_3344_5566_7788));
    assert_eq!(
        img.read_ptr(0x9000 + 205),
        None,
        "a short read is no pointer"
    );
    assert_eq!(img.read_cstr(0x8000), None);
    let spent = image(&[0; 8], 10).with_cache(Rc::new(|_, n| Some(vec![0; n])), None);
    assert_eq!(spent.read_u32(0x9000), Some(0));
    assert_eq!(spent.read_ptr(0x9000), None, "the budget is spent");
}
