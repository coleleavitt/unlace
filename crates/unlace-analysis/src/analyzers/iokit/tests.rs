use super::*;

/// Accuracy against the symbols of a real kernelcache entry, recovering as if
/// the image were stripped (manual run: `UNLACE_KC=<kernelcache>
/// UNLACE_KC_ENTRY=<id> cargo test ... -- --ignored --nocapture`).
#[test]
#[ignore]
fn real_kernelcache_entry() {
    let path = unlace_base::env::var("UNLACE_KC").unwrap();
    let entry = unlace_base::env::var("UNLACE_KC_ENTRY").unwrap_or_else(|_| "auto".into());
    let choice = unlace_decomp::kernelcache::KernelcacheChoice::parse(&entry).unwrap();
    let bytes = crate::loader::kernelcache::peel(std::fs::read(path).unwrap(), &choice)
        .unwrap()
        .bytes;
    let file = object::File::parse(&*bytes).unwrap();
    let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &bytes));
    let truth = symbol_names(&file);
    let t = std::time::Instant::now();
    let rec = recover_with(&file, &img, HashMap::new());
    let elapsed = t.elapsed();
    let sym = |a: u64| truth.get(&a).cloned();
    let metas_ok = rec
        .classes
        .iter()
        .filter(|c| sym(c.meta).as_deref() == Some(&format!("{}::gMetaClass", c.name)))
        .count();
    let metas_named = rec.classes.iter().filter(|c| sym(c.meta).is_some()).count();
    let vt = rec.classes.iter().filter(|c| c.vtable.is_some()).count();
    let vt_sym = rec
        .classes
        .iter()
        .filter_map(|c| c.vtable.as_ref().map(|(s, _)| s - 16))
        .filter(|a| sym(*a).is_some())
        .count();
    let names = rec.function_names();
    let (mut exact, mut placeholder, mut wrong, mut unknown) = (0, 0, 0, 0);
    let mut bad = Vec::new();
    for (addr, name) in &names {
        match sym(*addr) {
            Some(s) if s == *name => exact += 1,
            Some(s)
                if name.contains("::vfn_")
                    && s.starts_with(name.split("::vfn_").next().unwrap()) =>
            {
                placeholder += 1
            }
            Some(s) => {
                wrong += 1;
                if bad.len() < 12 {
                    bad.push(format!("{addr:#x} {name} vs {s}"));
                }
            }
            None => unknown += 1,
        }
    }
    eprintln!(
        "{entry}: classes {} (gMetaClass agrees {metas_ok}/{metas_named}); vtables {vt} ({vt_sym} at a symbol); \
         metaclass vtables {}; function names {} = exact {exact} + class-right placeholder {placeholder} + wrong {wrong} + no symbol {unknown}; {elapsed:?}",
        rec.classes.len(),
        rec.meta_vtables.len(),
        names.len()
    );
    for b in bad {
        eprintln!("  {b}");
    }
    if let Ok(probe) = unlace_base::env::var("UNLACE_KC_PROBE") {
        let probe = u64::from_str_radix(probe.trim_start_matches("0x"), 16).unwrap();
        let live = recover(&file, &img);
        eprintln!(
            "probe {probe:#x}: stripped {:?} live {:?} sym {:?}",
            names.get(&probe),
            live.function_names().get(&probe),
            sym(probe)
        );
    }
}

fn fixture() -> Vec<u8> {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/kernelcache/iokit_kext.macho"
    );
    std::fs::read(path).unwrap()
}

const B: u64 = 0xffff_fff0_07a0_0000;

#[test]
fn recovers_classes_vtables_and_method_names() {
    let bytes = fixture();
    let file = object::File::parse(&*bytes).unwrap();
    let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &bytes));
    let rec = recover(&file, &img);
    assert_eq!(rec.ctor, Some(B + 0x4000));
    let summary: Vec<(&str, u64, Option<u64>, u64, bool)> = rec
        .classes
        .iter()
        .map(|c| {
            (
                c.name.as_str(),
                c.meta,
                c.super_meta,
                c.size,
                c.vtable.is_some(),
            )
        })
        .collect();
    assert_eq!(
        summary,
        [
            ("Base", B + 0x6000, None, 0x20, true),
            ("Derived", B + 0x6040, Some(B + 0x6000), 0x30, true)
        ]
    );
    assert_eq!(rec.meta_vtables.len(), 2);
    let names = rec.function_names();
    let name_at = |off: u64| names.get(&(B + off)).map(String::as_str);
    assert_eq!(name_at(0x4000), Some("OSMetaClass::OSMetaClass"));
    assert_eq!(name_at(0x4090), Some("Base::getMetaClass"));
    let by_name: std::collections::BTreeSet<&str> = names.values().map(String::as_str).collect();
    for want in [
        "Derived::m2",
        "Derived::vfn_0x28",
        "Derived::~Derived",
        "Base::~Base",
        "Derived::MetaClass::alloc",
        "Base::MetaClass::~MetaClass",
    ] {
        assert!(by_name.contains(want), "{want} missing from {by_name:?}");
    }
    assert!(
        !by_name.iter().any(|n| n.starts_with("Base::m")),
        "symbol-named Base methods are not renamed"
    );
}

#[test]
fn inert_on_a_non_xnu_image() {
    let mut bytes = fixture();
    bytes[12] = 2;
    let file = object::File::parse(&*bytes).unwrap();
    assert!(!is_xnu_image(&file, &bytes));
}

#[test]
fn names_kalloc_views_and_dispatch_tables() {
    let bytes = fixture();
    let file = object::File::parse(&*bytes).unwrap();
    let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &bytes));
    let rec = recover(&file, &img);
    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    types.cache_core_types().unwrap();
    let mut out = AnalysisOutput::default();
    tables::kalloc_views(&file, &img, &rec, &mut out);
    tables::dispatch_tables(&file, &img, &rec, &types, &mut out);
    let data: Vec<(u64, &str, u32)> = out
        .data_objects
        .iter()
        .map(|d| (d.addr, d.name.as_str(), d.size))
        .collect();
    assert_eq!(
        data,
        [
            (B + 0x5200, "kalloc_type_view_Derived", 0x40),
            (B + 0x52a0, "kalloc_type_var_view_Packet", 0x50)
        ]
    );
    let names: Vec<&str> = out.fid_names.iter().map(|f| f.name.as_str()).collect();
    assert_eq!(
        names,
        [
            "Derived::externalMethod_0",
            "Derived::externalMethod_1",
            "Derived::externalMethod_2",
            "Derived::externalMethod_3"
        ]
    );

    let (view, recipe) = &out.kalloc_types[0];
    assert_eq!(*view, B + 0x5200);
    assert!(
        unlace_decomp::dtype::TypeFactory::find_by_name(&types, "Derived")
            .unwrap()
            .is_none(),
        "no struct is interned before a call needs it"
    );
    let derived = unlace_decomp::kalloctype::view_struct(&types, recipe).unwrap();
    assert_eq!((derived.get_name(), derived.get_size()), ("Derived", 0x30));
    let (view, packet) = &out.kalloc_types[1];
    assert_eq!(
        (
            *view,
            packet.name.as_str(),
            packet.size,
            packet.signature.as_str(),
            packet.pointers
        ),
        (B + 0x52a0, "Packet", 0x10, "12", false)
    );
    use unlace_decomp::dtype::type_metatype::{TYPE_PTR, TYPE_UNKNOWN};
    let fields: Vec<(String, i32, unlace_decomp::dtype::type_metatype)> = (0..6)
        .map(|i| derived.get_field(i).unwrap())
        .map(|f| (f.name.clone(), f.offset, f.field_type.get_metatype()))
        .collect();
    let field = |n: &str, o: i32, t| (n.to_string(), o, t);
    assert_eq!(
        fields,
        [
            field("vtable", 0, TYPE_PTR),
            field("field_0x8", 8, TYPE_UNKNOWN),
            field("field_0x10", 0x10, TYPE_PTR),
            field("field_0x18", 0x18, TYPE_PTR),
            field("field_0x20", 0x20, TYPE_PTR),
            field("field_0x28", 0x28, TYPE_UNKNOWN),
        ]
    );
    assert!(derived.get_field(6).is_none());
    let table = &out.typed_data[0];
    assert_eq!(
        (table.addr, table.name.as_str(), table.type_.get_size()),
        (B + 0x5240, "Derived_sMethods", 0x60)
    );
    let record = table.type_.get_array_base().unwrap();
    assert_eq!(
        (record.get_name(), record.get_size()),
        ("IOExternalMethodDispatch", 0x18)
    );
    assert_eq!(
        record.get_field(4).map(|f| f.name.as_str()),
        Some("checkStructureOutputSize")
    );
    assert!(record.get_field(5).is_none());
}

#[test]
fn reads_driverkit_class_records() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/kernelcache/dext_osclassinfo.macho"
    );
    let bytes = std::fs::read(path).unwrap();
    let file = object::File::parse(&*bytes).unwrap();
    let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &bytes));
    let b = 0x1_0000_0000u64;
    assert_eq!(
        osclassinfo::classes(&file, &img),
        [osclassinfo::DextClass {
            name: "MyDriver".into(),
            super_name: "IOService".into(),
            load_info: b + 0x4000,
            description: b + 0x2000,
            description_size: 0x138,
            meta_pointer: b + 0x8000,
            instance_size: 0x40,
            new: b + 0x1000,
        }]
    );
}

/// `__got` slot names and kalloc views on a real kernelcache (manual run:
/// `UNLACE_KC=<kernelcache> UNLACE_KC_ENTRY=<id> cargo test ... -- --ignored --nocapture`).
#[test]
#[ignore]
fn real_kernelcache_tables() {
    let path = unlace_base::env::var("UNLACE_KC").unwrap();
    let entry = unlace_base::env::var("UNLACE_KC_ENTRY").unwrap_or_else(|_| "auto".into());
    let choice = unlace_decomp::kernelcache::KernelcacheChoice::parse(&entry).unwrap();
    let bytes = crate::loader::kernelcache::peel(std::fs::read(path).unwrap(), &choice)
        .unwrap()
        .bytes;
    let file = object::File::parse(&*bytes).unwrap();
    let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &bytes));
    let rec = recover(&file, &img);
    let mut out = AnalysisOutput::default();
    tables::pointer_slots(&file, &bytes, &img, &rec, &mut out);
    let got: usize = object::read::Object::sections(&file)
        .filter(|s| {
            matches!(
                object::read::ObjectSection::name(s),
                Ok("__got" | "__auth_got" | "__auth_ptr")
            )
        })
        .map(|s| object::read::ObjectSection::size(&s) as usize / 8)
        .sum();
    let known = rec.known_names();
    let mut sample = Vec::new();
    for s in object::read::Object::sections(&file).filter(|s| {
        matches!(
            object::read::ObjectSection::name(s),
            Ok("__got" | "__auth_got" | "__auth_ptr")
        )
    }) {
        let a = object::read::ObjectSection::address(&s);
        for k in 0..object::read::ObjectSection::size(&s) / 8 {
            if sample.len() < 6 {
                let t = img.read_ptr(a + 8 * k);
                sample.push(format!(
                    "{:#x}->{:x?} known {} ",
                    a + 8 * k,
                    t,
                    t.is_some_and(|t| known.contains_key(&t))
                ));
            }
        }
    }
    eprintln!(
        "sample {sample:?}; known {} names; imports named {}",
        known.len(),
        crate::loader::macho_stubs::resolve_macho_import_slots(&file, &bytes).len()
    );
    eprintln!(
        "{entry}: {} of {got} pointer slots named, e.g. {:?}",
        out.data_objects.len(),
        out.data_objects
            .iter()
            .take(4)
            .map(|d| d.name.clone())
            .collect::<Vec<_>>()
    );
}

/// (kuna `iokitclasses on`) `iokitcxx_kext.macho`: Derived's vtable is typed with
/// slots named from the inherited method names, sized to its registration,
/// and every vtable member and the constructor take their class's `this`.
#[test]
fn cxx_facts_type_the_classes_and_their_members() {
    const C: u64 = 0xffff_fff0_07b0_0000;
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/kernelcache/iokitcxx_kext.macho"
    );
    let bytes = std::fs::read(path).unwrap();
    let file = object::File::parse(&*bytes).unwrap();
    let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &bytes));
    let rec = recover(&file, &img);
    let facts = rec.cxx_facts(&rec.known_names());
    let derived = facts
        .vtables
        .classes
        .iter()
        .find(|c| c.class == "Derived")
        .unwrap();
    let names: Vec<&str> = derived.slots.iter().map(|s| s.name.as_str()).collect();
    assert_eq!(
        names,
        [
            "dtor",
            "deleting_dtor",
            "getMetaClass",
            "release",
            "m2",
            "twice"
        ]
    );
    assert_eq!(derived.size, 0x30);
    assert_eq!(derived.slots[4].targets, vec![C + 0x4190]);
    let base = facts
        .vtables
        .classes
        .iter()
        .find(|c| c.class == "Base")
        .unwrap();
    assert_eq!(
        base.slots[4].targets,
        vec![C + 0x4110, C + 0x4190],
        "own first, then the override"
    );
    let this: HashMap<u64, &str> = facts
        .this_types
        .iter()
        .map(|(f, c)| (*f, c.as_str()))
        .collect();
    assert_eq!(this.get(&(C + 0x4190)), Some(&"Derived"), "the override");
    assert_eq!(
        this.get(&(C + 0x4100)),
        Some(&"Base"),
        "the inherited method"
    );
    assert_eq!(
        this.get(&(C + 0x41a0)),
        Some(&"Derived"),
        "the named constructor"
    );
    assert_eq!(
        this.get(&(C + 0x41c0)),
        Some(&"Base"),
        "a method both vtables hold"
    );
    assert_eq!(this.get(&(C + 0x4200)), None, "a free function");
    assert_eq!(
        facts.vtable_points,
        vec![
            (C + 0x5110, "Base".to_string()),
            (C + 0x5150, "Derived".to_string())
        ]
    );
    assert_eq!(
        facts.allocs,
        vec![
            (C + 0x4140, "Base".to_string()),
            (C + 0x4170, "Derived".to_string())
        ]
    );
}

#[test]
fn classifies_driverkit_rpc_symbols() {
    use dextrpc::{RpcSymbol, classify};
    assert_eq!(
        classify("_ZN12AppleUSBFTDI9_DispatchEPS_5IORPC"),
        Some(RpcSymbol::StaticDispatch("AppleUSBFTDI"))
    );
    assert_eq!(
        classify("_ZN21AppleUSBFTDIMetaClass8DispatchE5IORPC"),
        Some(RpcSymbol::Dispatch("AppleUSBFTDIMetaClass"))
    );
    assert_eq!(
        classify("_ZN12IOUserSerial20HwProgramUART_InvokeE5IORPCP15OSMetaClassBasePFiS2_jhhhE"),
        Some(RpcSymbol::Invoke(3))
    );
    assert_eq!(
        classify(
            "_ZN21IOTimerDispatchSource20TimerOccurred_InvokeE5IORPCP15OSMetaClassBasePFvS2_P8OSActionyEPK11OSMetaClass"
        ),
        Some(RpcSymbol::Invoke(4))
    );
    assert_eq!(
        classify("_ZN12AppleUSBFTDI10Start_ImplEP9IOService"),
        Some(RpcSymbol::Member("AppleUSBFTDI"))
    );
    assert_eq!(
        classify("_ZN12AppleUSBFTDI4initEv"),
        Some(RpcSymbol::Member("AppleUSBFTDI"))
    );
    assert_eq!(
        classify("_ZN12AppleUserECM9Stop_ImplEP9IOService_block_invoke"),
        None
    );
    assert_eq!(classify("_ZN15IODispatchQueue6CreateEPKcyyPPS_"), None);
    assert_eq!(classify("_ZThn24_N12AppleUSBFTDI4initEv"), None);
    assert_eq!(classify("_ZN99Short"), None);
}

#[test]
fn reads_driverkit_method_tables() {
    use dextrpc::{RpcMethod, rpc_methods};
    fn put(d: &mut [u8], at: usize, v: u32) {
        d[at..at + 4].copy_from_slice(&v.to_le_bytes());
    }
    let mut d = vec![0u8; 0x180];
    for (at, v) in [
        (0xc4, 0x20),
        (0xc8, 0x138),
        (0xcc, 0),
        (0xd0, 0x158),
        (0xd4, 1),
        (0xd8, 0x158),
        (0xdc, 10),
        (0xe0, 0x159),
        (0xe4, 1),
        (0xe8, 0x169),
    ] {
        put(&mut d, at, v);
    }
    d[0x138..0x140].copy_from_slice(&0x1111u64.to_le_bytes());
    d[0x140..0x148].copy_from_slice(&0x2222u64.to_le_bytes());
    d[0x150..0x158].copy_from_slice(&1u64.to_le_bytes());
    d[0x159..0x162].copy_from_slice(b"\x03Foo\x04_Bar");
    assert_eq!(
        rpc_methods(&d),
        [
            RpcMethod {
                name: "Foo".into(),
                msgid: 0x1111
            },
            RpcMethod {
                name: "_Bar".into(),
                msgid: 0x2222
            },
        ]
    );
    put(&mut d, 0xc4, 0x30);
    assert!(rpc_methods(&d).is_empty());
}
