use super::*;
use unlace_base::marshal::{PackedDecode, PackedEncode, XmlDecode, XmlEncode};
use unlace_base::space::{AddrSpaceManager, ConstantSpace, addrspace_flags, spacetype};

/// Build a manager with a constant space (index 0), two 4-byte code
/// spaces "ram" (index 1) and "ram2" (index 2), a little-endian
/// register space "reg" (index 3) and a big-endian register space
/// "breg" (index 4).
fn test_manager() -> AddrSpaceManager {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    for (i, (name, bigend)) in [
        ("ram", false),
        ("ram2", false),
        ("reg", false),
        ("breg", true),
    ]
    .iter()
    .enumerate()
    {
        let spc = AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            name,
            *bigend,
            4,
            1,
            (i + 1) as i32, // cast: small test index
            addrspace_flags::hasphysical,
            1,
            1,
        );
        manager.insert_space(Rc::new(spc)).unwrap();
    }
    manager
}

fn space(manager: &AddrSpaceManager, nm: &str) -> Rc<AddrSpace> {
    Rc::clone(manager.get_space_by_name(nm).unwrap())
}

fn addr(manager: &AddrSpaceManager, nm: &str, off: u64) -> Address {
    Address::new(space(manager, nm), off)
}

fn test_registry() -> unlace_base::marshal::IdRegistry {
    let mut registry = unlace_base::marshal::IdRegistry::with_base_ids();
    register_globalcontext_ids(&mut registry);
    registry
}

/// A database with two one-word variables and one second-word variable,
/// mirroring a typical processor-spec registration.
fn test_db() -> ContextInternal {
    let mut db = ContextInternal::new();
    db.register_variable(b"fldA", 0, 7).unwrap();
    db.register_variable(b"fldB", 8, 15).unwrap();
    db.register_variable(b"flag", 16, 16).unwrap();
    db.register_variable(b"wide", 32, 63).unwrap();
    db
}

fn get(db: &ContextInternal, manager: &AddrSpaceManager, nm: &[u8], off: u64) -> u32 {
    db.get_variable_value(nm, &addr(manager, "ram", off))
        .unwrap()
}

#[test]
fn test_globalcontext_bitrange_pack_unpack() {
    let r = ContextBitRange::new(0, 7);
    assert_eq!((r.get_word(), r.get_shift(), r.get_mask()), (0, 24, 0xff));
    let r2 = ContextBitRange::new(4, 6);
    assert_eq!((r2.get_word(), r2.get_shift(), r2.get_mask()), (0, 25, 0x7));
    let r3 = ContextBitRange::new(32, 47);
    assert_eq!(
        (r3.get_word(), r3.get_shift(), r3.get_mask()),
        (1, 16, 0xffff)
    );
    let bit = ContextBitRange::new(8, 8);
    assert_eq!(
        (bit.get_word(), bit.get_shift(), bit.get_mask()),
        (0, 23, 0x1)
    );
    // full-word value
    let full = ContextBitRange::new(0, 31);
    assert_eq!(
        (full.get_word(), full.get_shift(), full.get_mask()),
        (0, 0, 0xffff_ffff)
    );

    let mut blob = [0u32; 2];
    r.set_value(&mut blob, 0xab);
    r3.set_value(&mut blob, 0x1234);
    bit.set_value(&mut blob, 1);
    assert_eq!(r.get_value(&blob), 0xab);
    assert_eq!(r3.get_value(&blob), 0x1234);
    assert_eq!(bit.get_value(&blob), 1);
    assert_eq!(blob[0], 0xab80_0000);
    assert_eq!(blob[1], 0x1234_0000);
    // overwrite only touches its own bits; oversized values are masked
    r.set_value(&mut blob, 0x1cd);
    assert_eq!(r.get_value(&blob), 0xcd);
    assert_eq!(bit.get_value(&blob), 1);
    assert_eq!(r3.get_value(&blob), 0x1234);
}

#[test]
fn decode_scope_keeps_untouched_context_storage() {
    use crate::contextscope::DecodeContextScope;
    use std::cell::RefCell;
    let manager = test_manager();
    let mut original = test_db();
    for offset in 0..4000 {
        original
            .set_variable(b"fldA", &addr(&manager, "ram", offset * 4), 1)
            .unwrap();
    }
    let database: RefCell<Box<dyn ContextDatabase>> = RefCell::new(Box::new(original));
    let cache = RefCell::new(ContextCache::new());
    let point = addr(&manager, "ram", 0x100);
    let untouched = addr(&manager, "ram", 0x200);
    let storage = database.borrow().get_context(&untouched).as_ptr();
    {
        let _scope = DecodeContextScope::new(&database, &cache);
        assert_eq!(
            database.borrow().get_context(&untouched).as_ptr(),
            storage,
            "opening a decode scope must not copy unrelated context partitions"
        );
        database
            .borrow_mut()
            .set_variable(b"fldA", &point, 2)
            .unwrap();
        assert_eq!(
            database
                .borrow()
                .get_variable_value(b"fldA", &point)
                .unwrap(),
            2
        );
        assert_eq!(
            database
                .borrow()
                .get_variable_value(b"fldA", &untouched)
                .unwrap(),
            1
        );
        assert_eq!(database.borrow().get_context(&untouched).as_ptr(), storage);
    }
    assert_eq!(
        database
            .borrow()
            .get_variable_value(b"fldA", &point)
            .unwrap(),
        1
    );
    assert_eq!(database.borrow().get_context(&untouched).as_ptr(), storage);
}

#[test]
fn decode_scope_restores_nested_ranges_boundaries_and_cache_on_unwind() {
    use crate::contextscope::DecodeContextScope;
    use std::cell::RefCell;
    use std::panic::{AssertUnwindSafe, catch_unwind};
    let manager = test_manager();
    let mut original = test_db();
    for (name, offset, value) in [
        (b"fldA", 0x100, 2),
        (b"fldB", 0x180, 7),
        (b"fldA", 0x200, 3),
    ] {
        original
            .set_variable(name, &addr(&manager, "ram", offset), value)
            .unwrap();
    }
    let database: RefCell<Box<dyn ContextDatabase>> = RefCell::new(Box::new(original));
    let cache = RefCell::new(ContextCache::new());
    let point = addr(&manager, "ram", 0x140);
    let snapshot = || {
        let db = database.borrow();
        let manager = &manager;
        ["ram", "ram2"]
            .into_iter()
            .flat_map(|space| (0..0x240).map(move |offset| addr(manager, space, offset)))
            .map(|at| {
                let (value, first, last) = db.get_context_bounds(&at);
                (value.to_vec(), first, last)
            })
            .collect::<Vec<_>>()
    };
    let before = snapshot();
    cache.borrow_mut().allow_set(false);
    cache.borrow_mut().set_write_mask(1, 0x1234);
    cache
        .borrow_mut()
        .set_read_override(0, 0xff000000, 0x09000000);
    let mut values = [0; 2];
    cache
        .borrow_mut()
        .get_context(&**database.borrow(), &point, &mut values);
    let before_cache = values;
    let result = catch_unwind(AssertUnwindSafe(|| {
        let scope = DecodeContextScope::new(&database, &cache);
        scope.protect_variable(b"fldA").unwrap();
        cache.borrow_mut().allow_set(true);
        cache
            .borrow_mut()
            .set_context(&mut **database.borrow_mut(), &point, 0, 0xff000000, 0);
        assert_eq!(
            snapshot(),
            before,
            "protected writes must not create a split"
        );
        database
            .borrow_mut()
            .set_variable_region(b"fldA", &point, &addr(&manager, "ram", 0x220), 4)
            .unwrap();
        let parent = snapshot();
        {
            let _nested = DecodeContextScope::new(&database, &cache);
            database
                .borrow_mut()
                .set_variable(b"wide", &point, 42)
                .unwrap();
            database
                .borrow_mut()
                .set_variable(b"fldB", &addr(&manager, "ram2", 0x80), 8)
                .unwrap();
            cache.borrow_mut().set_write_mask(1, 0);
            cache.borrow_mut().set_read_override(0, 0, 0);
        }
        assert_eq!(snapshot(), parent);
        assert_eq!(cache.borrow_mut().set_write_mask(1, u32::MAX), 0x1234);
        panic!("abort speculative decode");
    }));
    assert!(result.is_err());
    assert_eq!(snapshot(), before);
    cache
        .borrow_mut()
        .get_context(&**database.borrow(), &point, &mut values);
    assert_eq!(values, before_cache);
    assert_eq!(cache.borrow_mut().set_write_mask(1, u32::MAX), 0x1234);
    cache
        .borrow_mut()
        .set_context(&mut **database.borrow_mut(), &point, 0, 0xff000000, 0);
    assert_eq!(snapshot(), before, "restore allow_set(false)");
    cache.borrow_mut().allow_set(true);
    cache.borrow_mut().set_context(
        &mut **database.borrow_mut(),
        &point,
        0,
        0xff000000,
        0x05000000,
    );
    assert_eq!(
        database
            .borrow()
            .get_variable_value(b"fldA", &addr(&manager, "ram", 0x180))
            .unwrap(),
        5
    );
    assert_eq!(
        database
            .borrow()
            .get_variable_value(b"fldA", &addr(&manager, "ram", 0x200))
            .unwrap(),
        3,
        "rollback must restore explicit-set masks, not just values"
    );
}

#[test]
fn speculative_context_preserves_write_boundaries_and_restores_nested_changes() {
    use crate::contextscope::ContextScope;
    use std::cell::RefCell;
    let manager = test_manager();
    let mut original = test_db();
    original.set_variable_default(b"fldA", 1).unwrap();
    original
        .set_variable(b"fldA", &addr(&manager, "ram", 0x100), 2)
        .unwrap();
    original
        .set_variable(b"fldA", &addr(&manager, "ram", 0x200), 3)
        .unwrap();
    let database: RefCell<Box<dyn ContextDatabase>> = RefCell::new(Box::new(original));
    let cache = RefCell::new(ContextCache::new());
    let point = addr(&manager, "ram", 0x180);
    let boundary = addr(&manager, "ram", 0x200);
    let var = database.borrow().get_variable(b"fldA").unwrap();
    let mask = var.get_mask() << var.get_shift();
    cache.borrow_mut().set_write_mask(1, 0x1234);
    {
        let scope = ContextScope::new(&database, &cache);
        database
            .borrow_mut()
            .set_variable(b"fldA", &point, 4)
            .unwrap();
        assert_eq!(
            database
                .borrow()
                .get_variable_value(b"fldA", &boundary)
                .unwrap(),
            3
        );
        scope.protect_variable(b"fldA").unwrap();
        cache
            .borrow_mut()
            .set_context(&mut **database.borrow_mut(), &point, 0, mask, 0);
        assert_eq!(
            database
                .borrow()
                .get_variable_value(b"fldA", &point)
                .unwrap(),
            4
        );
        {
            let nested = ContextScope::new(&database, &cache);
            database
                .borrow_mut()
                .set_variable(b"fldB", &point, 7)
                .unwrap();
            nested.commit();
        }
        assert_eq!(
            database
                .borrow()
                .get_variable_value(b"fldB", &point)
                .unwrap(),
            7
        );
        {
            let probe = scope.probe_original();
            assert_eq!(
                database
                    .borrow()
                    .get_variable_value(b"fldA", &point)
                    .unwrap(),
                2
            );
            assert_eq!(
                database
                    .borrow()
                    .get_variable_value(b"fldB", &point)
                    .unwrap(),
                0
            );
            database
                .borrow_mut()
                .set_variable(b"fldB", &point, 9)
                .unwrap();
            cache.borrow_mut().set_write_mask(1, 0);
            drop(probe);
        }
        assert_eq!(
            database
                .borrow()
                .get_variable_value(b"fldA", &point)
                .unwrap(),
            4
        );
        assert_eq!(
            database
                .borrow()
                .get_variable_value(b"fldB", &point)
                .unwrap(),
            7
        );
        assert_eq!(cache.borrow_mut().set_write_mask(1, 0), 0x1234);
    }
    assert_eq!(
        database
            .borrow()
            .get_variable_value(b"fldA", &point)
            .unwrap(),
        2
    );
    assert_eq!(
        database
            .borrow()
            .get_variable_value(b"fldB", &point)
            .unwrap(),
        0
    );
    assert_eq!(cache.borrow_mut().set_write_mask(1, u32::MAX), 0x1234);
    cache.borrow_mut().set_context(
        &mut **database.borrow_mut(),
        &point,
        0,
        mask,
        5 << var.get_shift(),
    );
    assert_eq!(
        database
            .borrow()
            .get_variable_value(b"fldA", &point)
            .unwrap(),
        5
    );
    assert_eq!(
        database
            .borrow()
            .get_variable_value(b"fldA", &boundary)
            .unwrap(),
        3
    );
    let scope = ContextScope::new(&database, &cache);
    database
        .borrow_mut()
        .set_variable(b"fldA", &point, 6)
        .unwrap();
    scope.commit();
    assert_eq!(
        database
            .borrow()
            .get_variable_value(b"fldA", &point)
            .unwrap(),
        6
    );
}

#[test]
fn test_globalcontext_register_and_defaults() {
    let manager = test_manager();
    let mut db = test_db();
    assert_eq!(db.get_context_size(), 2);
    // default values are served everywhere before any set
    db.set_variable_default(b"fldA", 0xab).unwrap();
    db.set_variable_default(b"wide", 0xdead_beef).unwrap();
    assert_eq!(db.get_default_value_by_name(b"fldA").unwrap(), 0xab);
    assert_eq!(db.get_default_value_by_name(b"wide").unwrap(), 0xdead_beef);
    assert_eq!(get(&db, &manager, b"fldA", 0x0), 0xab);
    assert_eq!(get(&db, &manager, b"wide", 0xffff_ffff), 0xdead_beef);
    // unknown variable -> C++ LowlevelError
    let err = db
        .get_variable_value(b"nope", &addr(&manager, "ram", 0))
        .unwrap_err();
    assert_eq!(err.to_string(), "Non-existent context variable: nope");
    // a variable crossing a word boundary is rejected
    let err = db.register_variable(b"bad", 30, 33).unwrap_err();
    assert_eq!(err.to_string(), "Context variable does not fit in one word");
    // once the database has split points, registration is frozen
    db.set_variable(b"fldA", &addr(&manager, "ram", 0x100), 1)
        .unwrap();
    let err = db.register_variable(b"late", 17, 18).unwrap_err();
    assert_eq!(
        err.to_string(),
        "Cannot register new context variables after database is initialized"
    );
}

/// The core change-point semantics: a set paints from its address up to
/// the next point where the SAME variable was explicitly set, flowing
/// across split points belonging to OTHER variables.
#[test]
fn test_globalcontext_region_layering_across_boundaries() {
    let manager = test_manager();
    let mut db = test_db();
    // A set at 0x100 paints from 0x100 to the end of the space
    db.set_variable(b"fldA", &addr(&manager, "ram", 0x100), 5)
        .unwrap();
    assert_eq!(get(&db, &manager, b"fldA", 0xff), 0);
    assert_eq!(get(&db, &manager, b"fldA", 0x100), 5);
    assert_eq!(get(&db, &manager, b"fldA", 0x5000), 5);
    // B set at 0x200: A keeps its painted value across the new split
    db.set_variable(b"fldB", &addr(&manager, "ram", 0x200), 7)
        .unwrap();
    assert_eq!(get(&db, &manager, b"fldB", 0x200), 7);
    assert_eq!(get(&db, &manager, b"fldB", 0x1ff), 0);
    assert_eq!(get(&db, &manager, b"fldA", 0x200), 5);
    // A set at 0x50 stops painting at 0x100 (A's mask is set there)
    db.set_variable(b"fldA", &addr(&manager, "ram", 0x50), 9)
        .unwrap();
    assert_eq!(get(&db, &manager, b"fldA", 0x4f), 0);
    assert_eq!(get(&db, &manager, b"fldA", 0x50), 9);
    assert_eq!(get(&db, &manager, b"fldA", 0xff), 9);
    assert_eq!(get(&db, &manager, b"fldA", 0x100), 5);
    // B set at 0x50 flows THROUGH the 0x100 boundary (only A was set
    // there) and stops at 0x200 where B was set
    db.set_variable(b"fldB", &addr(&manager, "ram", 0x50), 3)
        .unwrap();
    assert_eq!(get(&db, &manager, b"fldB", 0x50), 3);
    assert_eq!(get(&db, &manager, b"fldB", 0x100), 3);
    assert_eq!(get(&db, &manager, b"fldB", 0x1ff), 3);
    assert_eq!(get(&db, &manager, b"fldB", 0x200), 7);
    // ... and A was not disturbed by any B operation
    assert_eq!(get(&db, &manager, b"fldA", 0x80), 9);
    assert_eq!(get(&db, &manager, b"fldA", 0x150), 5);
}

/// setVariableRegion paints exactly [begad, endad); the split forced at
/// endad copies values but NOT the explicitly-set mask (FreeArray
/// operator=), so a later change-point set flows through endad.
#[test]
fn test_globalcontext_set_variable_region() {
    let manager = test_manager();
    let mut db = test_db();
    db.set_variable_region(
        b"fldA",
        &addr(&manager, "ram", 0x1000),
        &addr(&manager, "ram", 0x2000),
        4,
    )
    .unwrap();
    assert_eq!(get(&db, &manager, b"fldA", 0xfff), 0);
    assert_eq!(get(&db, &manager, b"fldA", 0x1000), 4);
    assert_eq!(get(&db, &manager, b"fldA", 0x1fff), 4);
    assert_eq!(get(&db, &manager, b"fldA", 0x2000), 0);
    // a set below the region stops at its first boundary (mask set at
    // 0x1000)
    db.set_variable(b"fldA", &addr(&manager, "ram", 0x500), 2)
        .unwrap();
    assert_eq!(get(&db, &manager, b"fldA", 0x500), 2);
    assert_eq!(get(&db, &manager, b"fldA", 0xfff), 2);
    assert_eq!(get(&db, &manager, b"fldA", 0x1000), 4);
    // a set inside the region paints through the region's end split
    // (0x2000 has no explicitly-set mask) out to the end of the space
    db.set_variable(b"fldA", &addr(&manager, "ram", 0x1800), 6)
        .unwrap();
    assert_eq!(get(&db, &manager, b"fldA", 0x17ff), 4);
    assert_eq!(get(&db, &manager, b"fldA", 0x1800), 6);
    assert_eq!(get(&db, &manager, b"fldA", 0x2000), 6);
    assert_eq!(get(&db, &manager, b"fldA", 0x9999), 6);
    // an invalid second address paints from the first address through
    // every remaining split point (C++ biter = database.end())
    db.set_variable_region(
        b"fldB",
        &addr(&manager, "ram", 0x1900),
        &Address::default(),
        1,
    )
    .unwrap();
    assert_eq!(get(&db, &manager, b"fldB", 0x18ff), 0);
    assert_eq!(get(&db, &manager, b"fldB", 0x1900), 1);
    assert_eq!(get(&db, &manager, b"fldB", 0x2000), 1);
    assert_eq!(get(&db, &manager, b"fldB", 0x9999), 1);
}

/// The raw word/mask interface used by SLEIGH context commits.
#[test]
fn test_globalcontext_raw_context_set() {
    let manager = test_manager();
    let mut db = test_db();
    let var = db.get_variable(b"fldB").unwrap();
    let num = var.get_word();
    let mask = var.get_mask() << var.get_shift();
    // (already shifted) value 0x42 in fldB's field
    db.set_context_change_point(
        &addr(&manager, "ram", 0x100),
        num,
        mask,
        0x42 << var.get_shift(),
    );
    assert_eq!(get(&db, &manager, b"fldB", 0x100), 0x42);
    assert_eq!(get(&db, &manager, b"fldB", 0xff), 0);
    db.set_context_region(
        &addr(&manager, "ram", 0x40),
        &addr(&manager, "ram", 0x80),
        num,
        mask,
        0x7 << var.get_shift(),
    );
    assert_eq!(get(&db, &manager, b"fldB", 0x40), 0x7);
    assert_eq!(get(&db, &manager, b"fldB", 0x7f), 0x7);
    assert_eq!(get(&db, &manager, b"fldB", 0x80), 0);
    assert_eq!(get(&db, &manager, b"fldB", 0x100), 0x42);
}

#[test]
fn test_globalcontext_get_context_bounds() {
    let manager = test_manager();
    let mut db = test_db();
    let ram_highest = space(&manager, "ram").get_highest();
    // empty database: whole space
    let (_, first, last) = db.get_context_bounds(&addr(&manager, "ram", 0x500));
    assert_eq!((first, last), (0, ram_highest));
    db.set_variable(b"fldA", &addr(&manager, "ram", 0x100), 5)
        .unwrap();
    // below the split: no lower bound in this space
    let (blob, first, last) = db.get_context_bounds(&addr(&manager, "ram", 0x80));
    assert_eq!((first, last), (0, 0xff));
    assert_eq!(db.get_variable(b"fldA").unwrap().get_value(blob), 0);
    // at/after the split: bounded below by the split, unbounded above
    let (blob, first, last) = db.get_context_bounds(&addr(&manager, "ram", 0x100));
    assert_eq!((first, last), (0x100, ram_highest));
    assert_eq!(db.get_variable(b"fldA").unwrap().get_value(blob), 5);
    // a neighboring space: the ram split sorts before every ram2
    // address but belongs to another space, so first collapses to 0
    let ram2_highest = space(&manager, "ram2").get_highest();
    let (_, first, last) = db.get_context_bounds(&addr(&manager, "ram2", 0x500));
    assert_eq!((first, last), (0, ram2_highest));
}

#[test]
fn test_globalcontext_cache_flow_boundary_invalidation() {
    let manager = test_manager();
    let mut db = test_db();
    let var = db.get_variable(b"fldA").unwrap();
    let (num, mask) = (var.get_word(), var.get_mask() << var.get_shift());
    // a pre-existing explicit set at 0x200
    db.set_variable(b"fldA", &addr(&manager, "ram", 0x200), 7)
        .unwrap();

    let mut cache = ContextCache::new();
    let mut buf = [0u32; 2];
    cache.get_context(&db, &addr(&manager, "ram", 0x100), &mut buf);
    assert_eq!(var.get_value(&buf), 0); // default below 0x200
    cache.get_context(&db, &addr(&manager, "ram", 0x300), &mut buf);
    assert_eq!(var.get_value(&buf), 7);

    // a set within the cached range invalidates the cache, and the
    // paint stops at the 0x200 flow boundary
    cache.get_context(&db, &addr(&manager, "ram", 0x100), &mut buf);
    cache.set_context(
        &mut db,
        &addr(&manager, "ram", 0x180),
        num,
        mask,
        5 << var.get_shift(),
    );
    cache.get_context(&db, &addr(&manager, "ram", 0x190), &mut buf);
    assert_eq!(var.get_value(&buf), 5);
    cache.get_context(&db, &addr(&manager, "ram", 0x17f), &mut buf);
    assert_eq!(var.get_value(&buf), 0);
    cache.get_context(&db, &addr(&manager, "ram", 0x210), &mut buf);
    assert_eq!(var.get_value(&buf), 7);

    // a paint from BELOW the cached range that reaches into it is still
    // observed (the cache serves fresh blob values; C++ reads through
    // its cached pointer the same way)
    cache.get_context(&db, &addr(&manager, "ram", 0x300), &mut buf); // cache [0x200,highest]
    cache.set_context(
        &mut db,
        &addr(&manager, "ram", 0x1c0),
        num,
        mask,
        3 << var.get_shift(),
    );
    // paint [0x1c0,0x200) only -- 0x200 has fldA's mask set
    cache.get_context(&db, &addr(&manager, "ram", 0x300), &mut buf);
    assert_eq!(var.get_value(&buf), 7);
    cache.get_context(&db, &addr(&manager, "ram", 0x1f0), &mut buf);
    assert_eq!(var.get_value(&buf), 3);

    // allow_set(false) drops sets entirely
    cache.allow_set(false);
    cache.set_context(
        &mut db,
        &addr(&manager, "ram", 0x300),
        num,
        mask,
        1 << var.get_shift(),
    );
    cache.get_context(&db, &addr(&manager, "ram", 0x300), &mut buf);
    assert_eq!(var.get_value(&buf), 7);
    cache.allow_set(true);

    // region flavor with its three invalidation tests
    cache.set_context_region(
        &mut db,
        &addr(&manager, "ram", 0x400),
        &addr(&manager, "ram", 0x500),
        num,
        mask,
        9 << var.get_shift(),
    );
    cache.get_context(&db, &addr(&manager, "ram", 0x450), &mut buf);
    assert_eq!(var.get_value(&buf), 9);
    cache.get_context(&db, &addr(&manager, "ram", 0x500), &mut buf);
    assert_eq!(var.get_value(&buf), 7);
}

#[test]
fn context_write_mask_preserves_other_fields_and_restores_writes() {
    let manager = test_manager();
    let start = addr(&manager, "ram", 0x100);
    let end = addr(&manager, "ram", 0x200);
    for bounded in [false, true] {
        let mut db = test_db();
        db.set_variable_default(b"fldA", 0x12).unwrap();
        let field = db.get_variable(b"fldA").unwrap();
        let mask = field.get_mask() << field.get_shift();
        let mut cache = ContextCache::new();
        let previous = cache.set_write_mask(0, !mask);
        for value in [u32::MAX, 0] {
            if bounded {
                cache.set_context_region(&mut db, &start, &end, 0, u32::MAX, value);
            } else {
                cache.set_context(&mut db, &start, 0, u32::MAX, value);
            }
            assert_eq!(get(&db, &manager, b"fldA", 0x100), 0x12);
            assert_eq!(get(&db, &manager, b"fldB", 0x100), value & 0xff);
        }
        cache.set_context(&mut db, &start, 1, u32::MAX, 0xcafe);
        assert_eq!(get(&db, &manager, b"wide", 0x100), 0xcafe);
        cache.set_write_mask(0, previous);
        cache.allow_set(false);
        cache.set_context(&mut db, &start, 0, mask, 0);
        assert_eq!(get(&db, &manager, b"fldA", 0x100), 0x12);
        cache.allow_set(true);
        cache.set_context(&mut db, &start, 0, mask, 0);
        assert_eq!(get(&db, &manager, b"fldA", 0x100), 0);
    }
}

#[test]
fn test_globalcontext_tracked_value_trimming() {
    let manager = test_manager();
    let mut db = test_db();
    let point = addr(&manager, "ram", 0x1000);
    {
        let tset = db.get_tracked_default();
        tset.push(TrackedContext {
            loc: VarnodeData {
                space: Some(space(&manager, "reg")),
                offset: 0,
                size: 8,
            },
            val: 0x1122_3344_5566_7788,
        });
        tset.push(TrackedContext {
            loc: VarnodeData {
                space: Some(space(&manager, "breg")),
                offset: 0x10,
                size: 8,
            },
            val: 0x1122_3344_5566_7788,
        });
    }
    // exact match
    let mem = VarnodeData {
        space: Some(space(&manager, "reg")),
        offset: 0,
        size: 8,
    };
    assert_eq!(db.get_tracked_value(&mem, &point), 0x1122_3344_5566_7788);
    // little endian: sub-register at +4 takes the high bytes
    let mem = VarnodeData {
        space: Some(space(&manager, "reg")),
        offset: 4,
        size: 4,
    };
    assert_eq!(db.get_tracked_value(&mem, &point), 0x1122_3344);
    // little endian: sub-register at +0 takes the low bytes
    let mem = VarnodeData {
        space: Some(space(&manager, "reg")),
        offset: 0,
        size: 4,
    };
    assert_eq!(db.get_tracked_value(&mem, &point), 0x5566_7788);
    // big endian, single byte reads: last byte is unshifted, first byte
    // is shifted down by the full distance to the tracked end
    let mem = VarnodeData {
        space: Some(space(&manager, "breg")),
        offset: 0x17,
        size: 1,
    };
    assert_eq!(db.get_tracked_value(&mem, &point), 0x88);
    let mem = VarnodeData {
        space: Some(space(&manager, "breg")),
        offset: 0x10,
        size: 1,
    };
    assert_eq!(db.get_tracked_value(&mem, &point), 0x11);
    // big endian, multi-byte sub-register: the C++ shift is
    // `8*(tendoff - mem.offset)` (NOT `tendoff - endoff`), which
    // over-shifts unless the read is one byte or the whole register —
    // transcribed as-is, the C++ is the spec
    let mem = VarnodeData {
        space: Some(space(&manager, "breg")),
        offset: 0x10,
        size: 4,
    };
    assert_eq!(db.get_tracked_value(&mem, &point), 0x11);
    // big endian exact match is returned untrimmed
    let mem = VarnodeData {
        space: Some(space(&manager, "breg")),
        offset: 0x10,
        size: 8,
    };
    assert_eq!(db.get_tracked_value(&mem, &point), 0x1122_3344_5566_7788);
    // not contained / not tracked -> 0
    let mem = VarnodeData {
        space: Some(space(&manager, "reg")),
        offset: 6,
        size: 4,
    };
    assert_eq!(db.get_tracked_value(&mem, &point), 0);
    let mem = VarnodeData {
        space: Some(space(&manager, "ram")),
        offset: 0,
        size: 4,
    };
    assert_eq!(db.get_tracked_value(&mem, &point), 0);
}

#[test]
fn test_globalcontext_create_set_ranges() {
    let manager = test_manager();
    let mut db = test_db();
    {
        let tset = db.create_set(&addr(&manager, "ram", 0x100), &addr(&manager, "ram", 0x200));
        tset.push(TrackedContext {
            loc: VarnodeData {
                space: Some(space(&manager, "reg")),
                offset: 0,
                size: 4,
            },
            val: 0x55,
        });
    }
    let mem = VarnodeData {
        space: Some(space(&manager, "reg")),
        offset: 0,
        size: 4,
    };
    assert_eq!(
        db.get_tracked_value(&mem, &addr(&manager, "ram", 0x150)),
        0x55
    );
    // before the range and at/after its open end: the (empty) copies
    assert_eq!(db.get_tracked_value(&mem, &addr(&manager, "ram", 0xff)), 0);
    assert_eq!(db.get_tracked_value(&mem, &addr(&manager, "ram", 0x200)), 0);
    assert!(db.get_tracked_set(&addr(&manager, "ram", 0x150)).len() == 1);
    assert!(db.get_tracked_set(&addr(&manager, "ram", 0x200)).is_empty());
}

#[test]
fn test_globalcontext_trackedcontext_roundtrip() {
    let manager = test_manager();
    let registry = test_registry();
    let tcont = TrackedContext {
        loc: VarnodeData {
            space: Some(space(&manager, "reg")),
            offset: 0x8,
            size: 4,
        },
        val: 0x1234_5678,
    };
    // XML
    let mut stream: Vec<u8> = Vec::new();
    {
        let mut encoder = XmlEncode::new(&mut stream);
        tcont.encode(&mut encoder).unwrap();
    }
    let mut decoder = XmlDecode::new(&manager, &registry);
    decoder.ingest_stream(&stream).unwrap();
    let mut back = TrackedContext::default();
    back.decode(&mut decoder).unwrap();
    assert_eq!(back, tcont);
    // Packed
    let mut stream: Vec<u8> = Vec::new();
    {
        let mut encoder = PackedEncode::new(&mut stream);
        tcont.encode(&mut encoder).unwrap();
    }
    let mut decoder = PackedDecode::new(&manager);
    decoder.ingest_stream(&stream).unwrap();
    let mut back = TrackedContext::default();
    back.decode(&mut decoder).unwrap();
    assert_eq!(back, tcont);
}

/// Full database round trip <context_points> via both codecs.
#[test]
fn test_globalcontext_database_roundtrip() {
    let manager = test_manager();
    let registry = test_registry();
    let mut db = test_db();
    // nothing recorded -> nothing encoded (C++ early return)
    let mut empty: Vec<u8> = Vec::new();
    {
        let mut encoder = XmlEncode::new(&mut empty);
        db.encode(&mut encoder).unwrap();
    }
    assert!(empty.is_empty());

    db.set_variable(b"fldA", &addr(&manager, "ram", 0x100), 5)
        .unwrap();
    db.set_variable(b"fldB", &addr(&manager, "ram", 0x200), 7)
        .unwrap();
    db.set_variable(b"wide", &addr(&manager, "ram", 0x100), 0xcafe)
        .unwrap();
    {
        let tset = db.create_set(&addr(&manager, "ram", 0x300), &addr(&manager, "ram", 0x400));
        tset.push(TrackedContext {
            loc: VarnodeData {
                space: Some(space(&manager, "reg")),
                offset: 0,
                size: 4,
            },
            val: 0x99,
        });
    }

    for codec in ["xml", "packed"] {
        let mut stream: Vec<u8> = Vec::new();
        if codec == "xml" {
            let mut encoder = XmlEncode::new(&mut stream);
            db.encode(&mut encoder).unwrap();
        } else {
            let mut encoder = PackedEncode::new(&mut stream);
            db.encode(&mut encoder).unwrap();
        }
        // decode into a freshly-registered database
        let mut back = test_db();
        if codec == "xml" {
            let mut decoder = XmlDecode::new(&manager, &registry);
            decoder.ingest_stream(&stream).unwrap();
            back.decode(&mut decoder).unwrap();
        } else {
            let mut decoder = PackedDecode::new(&manager);
            decoder.ingest_stream(&stream).unwrap();
            back.decode(&mut decoder).unwrap();
        }
        assert_eq!(get(&back, &manager, b"fldA", 0xff), 0, "{codec}");
        assert_eq!(get(&back, &manager, b"fldA", 0x100), 5, "{codec}");
        assert_eq!(get(&back, &manager, b"fldA", 0x250), 5, "{codec}");
        assert_eq!(get(&back, &manager, b"fldB", 0x1ff), 0, "{codec}");
        assert_eq!(get(&back, &manager, b"fldB", 0x200), 7, "{codec}");
        assert_eq!(get(&back, &manager, b"wide", 0x100), 0xcafe, "{codec}");
        let mem = VarnodeData {
            space: Some(space(&manager, "reg")),
            offset: 0,
            size: 4,
        };
        assert_eq!(
            back.get_tracked_value(&mem, &addr(&manager, "ram", 0x350)),
            0x99,
            "{codec}"
        );
        assert_eq!(
            back.get_tracked_value(&mem, &addr(&manager, "ram", 0x2ff)),
            0,
            "{codec}"
        );
    }
}

/// decodeFromSpec: the <context_data> element from a processor spec.
#[test]
fn test_globalcontext_decode_from_spec() {
    let manager = test_manager();
    let registry = test_registry();
    let mut db = test_db();
    let mut decoder = XmlDecode::new(&manager, &registry);
    decoder
        .ingest_stream(
            b"<context_data>\
                  <context_set space=\"ram\" first=\"0x100\" last=\"0x1ff\">\
                    <set name=\"fldA\" val=\"3\"/>\
                    <set name=\"flag\" val=\"1\"/>\
                  </context_set>\
                  <tracked_set space=\"ram\" first=\"0x100\" last=\"0x1ff\">\
                    <set space=\"reg\" offset=\"0x0\" size=\"4\" val=\"0x55\"/>\
                  </tracked_set>\
                </context_data>",
        )
        .unwrap();
    db.decode_from_spec(&mut decoder).unwrap();
    assert_eq!(get(&db, &manager, b"fldA", 0x100), 3);
    assert_eq!(get(&db, &manager, b"fldA", 0x1ff), 3);
    assert_eq!(get(&db, &manager, b"fldA", 0x200), 0);
    assert_eq!(get(&db, &manager, b"fldA", 0xff), 0);
    assert_eq!(get(&db, &manager, b"flag", 0x180), 1);
    let mem = VarnodeData {
        space: Some(space(&manager, "reg")),
        offset: 0,
        size: 4,
    };
    assert_eq!(
        db.get_tracked_value(&mem, &addr(&manager, "ram", 0x150)),
        0x55
    );
    assert_eq!(db.get_tracked_value(&mem, &addr(&manager, "ram", 0x250)), 0);

    // an unexpected child is a hard error, as in C++
    let mut db2 = test_db();
    let mut decoder = XmlDecode::new(&manager, &registry);
    decoder
            .ingest_stream(
                b"<context_data><context_pointset space=\"ram\" first=\"0\" last=\"1\"/></context_data>",
            )
            .unwrap();
    let err = db2.decode_from_spec(&mut decoder).unwrap_err();
    assert_eq!(err.to_string(), "Bad <context_data> tag");
}

/// The attribute-less <context_pointset> form restores the DEFAULT
/// blob (zeroing it per <set> child, as the C++ does).
#[test]
fn test_globalcontext_decode_default_pointset() {
    let manager = test_manager();
    let registry = test_registry();
    let mut db = test_db();
    db.set_variable_default(b"fldB", 0x11).unwrap();
    let mut decoder = XmlDecode::new(&manager, &registry);
    decoder
        .ingest_stream(
            b"<context_points><context_pointset>\
                  <set name=\"fldA\" val=\"2\"/>\
                </context_pointset></context_points>",
        )
        .unwrap();
    db.decode(&mut decoder).unwrap();
    // default blob was zeroed wholesale, then fldA painted
    assert_eq!(db.get_default_value_by_name(b"fldA").unwrap(), 2);
    assert_eq!(db.get_default_value_by_name(b"fldB").unwrap(), 0);
    assert_eq!(get(&db, &manager, b"fldA", 0x1234), 2);
}
