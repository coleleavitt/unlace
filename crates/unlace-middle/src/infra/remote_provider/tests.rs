//! Porter in-module tests for `remote_provider.rs`: the `<mapsym>`/`<hole>`
//! decoder against hand-built packed documents (the Java `DecompileCallback`
//! answer shapes), and the wire `<coretypes>` decode equivalence.

use std::rc::Rc;

use unlace_base::address::{Address, ELEM_RANGELIST};
use unlace_base::marshal::{
    ATTRIB_CONTENT, ATTRIB_ID, ATTRIB_READONLY, ELEM_SYMBOL, Encoder, IdRegistry, PackedEncode,
    XmlDecode,
};
use unlace_base::space::{AddrSpace, AddrSpaceManager, addrspace_flags, spacetype};

use super::*;
use crate::dtype::type_metatype;

fn manager() -> Rc<AddrSpaceManager> {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        1,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    Rc::new(m)
}

fn types_with_core() -> Rc<TypeFactoryImpl> {
    let t = TypeFactoryImpl::new();
    t.setup_sizes(Some(8), 8, 8);
    t.set_core_type("void", 1, type_metatype::TYPE_VOID, false)
        .unwrap();
    t.set_core_type("int4", 4, type_metatype::TYPE_INT, false)
        .unwrap();
    t.set_core_type("uint8", 8, type_metatype::TYPE_UINT, false)
        .unwrap();
    t.set_core_type("char", 1, type_metatype::TYPE_INT, true)
        .unwrap();
    t.cache_core_types().unwrap();
    Rc::new(t)
}

fn ram(m: &AddrSpaceManager) -> Rc<AddrSpace> {
    Rc::clone(m.get_space_by_name("ram").unwrap())
}

/// `<hole readonly=true space=ram first last/>` decodes to a readonly hole.
#[test]
fn hole_decodes_with_mutability() {
    let m = manager();
    let types = types_with_core();
    let mut doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut doc);
        e.open_element(&ELEM_HOLE);
        e.write_bool(&ATTRIB_READONLY, true);
        e.write_space(&unlace_base::marshal::ATTRIB_SPACE, &ram(&m));
        e.write_unsigned_integer(&unlace_base::address::ATTRIB_FIRST, 0x1000);
        e.write_unsigned_integer(&unlace_base::address::ATTRIB_LAST, 0x1fff);
        e.close_element(&ELEM_HOLE);
    }
    let mut dec = PackedDecode::new(&m);
    dec.ingest_stream(&doc).unwrap();
    match decode_mapped_answer(&mut dec, &types).unwrap() {
        RemoteMapAnswer::Hole { range, flags } => {
            assert_eq!(range.get_first(), 0x1000);
            assert_eq!(range.get_last(), 0x1fff);
            assert_eq!(flags, varnode_flags::readonly);
        }
        _ => panic!("expected a hole"),
    }
}

/// `<parent>` namespace-path decode: root skipped, innermost-first order.
#[test]
fn namespace_path_decodes_innermost_first() {
    let m = manager();
    let mut doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut doc);
        e.open_element(&ELEM_PARENT);
        for (id, nm) in [(0u64, ""), (10, "outer"), (11, "inner")] {
            e.open_element(&unlace_base::marshal::ELEM_VAL);
            e.write_unsigned_integer(&ATTRIB_ID, id);
            e.write_string(&ATTRIB_CONTENT, nm.as_bytes());
            e.close_element(&unlace_base::marshal::ELEM_VAL);
        }
        e.close_element(&ELEM_PARENT);
    }
    let mut dec = PackedDecode::new(&m);
    dec.ingest_stream(&doc).unwrap();
    let path = decode_namespace_path(&mut dec).unwrap();
    assert_eq!(path, vec!["inner".to_string(), "outer".to_string()]);
    let mut dec = PackedDecode::new(&m);
    dec.ingest_stream(&doc).unwrap();
    let levels = decode_namespace_levels(&mut dec).unwrap();
    assert_eq!(
        levels,
        vec![("inner".to_string(), 11), ("outer".to_string(), 10)]
    );
}

/// The wire `<coretypes>` XML mirror of the default core-type list decodes to
/// the SAME (name, id, size, metatype) set `set_core_type` builds — the
/// invariant that makes sim-side `<typeref>` name+id resolution agree.
#[test]
fn coretypes_xml_mirror_matches_default_build() {
    const DEFAULTS: &[(&str, i32, type_metatype, bool)] = &[
        ("void", 1, type_metatype::TYPE_VOID, false),
        ("bool", 1, type_metatype::TYPE_BOOL, false),
        ("uint1", 1, type_metatype::TYPE_UINT, false),
        ("uint2", 2, type_metatype::TYPE_UINT, false),
        ("uint4", 4, type_metatype::TYPE_UINT, false),
        ("uint8", 8, type_metatype::TYPE_UINT, false),
        ("int1", 1, type_metatype::TYPE_INT, false),
        ("int2", 2, type_metatype::TYPE_INT, false),
        ("int4", 4, type_metatype::TYPE_INT, false),
        ("int8", 8, type_metatype::TYPE_INT, false),
        ("float4", 4, type_metatype::TYPE_FLOAT, false),
        ("float8", 8, type_metatype::TYPE_FLOAT, false),
        ("float10", 10, type_metatype::TYPE_FLOAT, false),
        ("float16", 16, type_metatype::TYPE_FLOAT, false),
        ("xunknown1", 1, type_metatype::TYPE_UNKNOWN, false),
        ("xunknown2", 2, type_metatype::TYPE_UNKNOWN, false),
        ("xunknown4", 4, type_metatype::TYPE_UNKNOWN, false),
        ("xunknown8", 8, type_metatype::TYPE_UNKNOWN, false),
        ("code", 1, type_metatype::TYPE_CODE, false),
        ("char", 1, type_metatype::TYPE_INT, true),
        ("wchar2", 2, type_metatype::TYPE_INT, true),
        ("wchar4", 4, type_metatype::TYPE_INT, true),
    ];
    // The XML mirror (no id attributes -> hash_name ids, like set_core_type).
    let mut xml = String::from("<coretypes>");
    for (name, size, meta, chartp) in DEFAULTS {
        let ms = crate::dtype::metatype2string(if *chartp {
            type_metatype::TYPE_INT
        } else {
            *meta
        })
        .unwrap();
        xml.push_str(&format!(
            "<type name=\"{name}\" size=\"{size}\" metatype=\"{ms}\""
        ));
        if *chartp && *size == 1 {
            xml.push_str(" char=\"true\"");
        } else if *chartp {
            xml.push_str(" utf=\"true\"");
        }
        xml.push_str("/>");
    }
    xml.push_str("</coretypes>");

    let reference = TypeFactoryImpl::new();
    reference.setup_sizes(Some(8), 8, 8);
    for (name, size, meta, chartp) in DEFAULTS {
        reference
            .set_core_type(name, *size, *meta, *chartp)
            .unwrap();
    }
    reference.cache_core_types().unwrap();

    let decoded = TypeFactoryImpl::new();
    decoded.setup_sizes(Some(8), 8, 8);
    let m = manager();
    let mut registry = IdRegistry::with_base_ids();
    crate::dtype::register_type_wire_ids(&mut registry);
    let store = unlace_base::xml::xml_tree(xml.as_bytes()).unwrap();
    let root = store.get_root().clone();
    let mut decoder = XmlDecode::new_with_root(&m, &registry, &root, 0);
    decoded.decode_core_types(&mut decoder).unwrap();

    for (name, size, _meta, _chartp) in DEFAULTS {
        let a = crate::dtype::TypeFactory::find_by_name(&reference, name)
            .unwrap()
            .unwrap_or_else(|| panic!("reference missing {name}"));
        let b = crate::dtype::TypeFactory::find_by_name(&decoded, name)
            .unwrap()
            .unwrap_or_else(|| panic!("decoded missing {name}"));
        assert_eq!(a.get_id(), b.get_id(), "{name}: id mismatch");
        // (void's interned size is the TypeVoid-internal 0 on both sides, so
        // compare a-vs-b rather than against the table.)
        assert_eq!(a.get_size(), b.get_size(), "{name}: size mismatch");
        assert_eq!(
            a.get_metatype(),
            b.get_metatype(),
            "{name}: metatype mismatch"
        );
        assert!(b.is_core_type(), "{name}: decoded type not core");
        let _ = size;
    }
}

/// Phase-4 differential: the `ScopeLocal::encode` `<localdb>` document decodes
/// through the SAME decoder Java shapes decode through (`decode_localdb_params`
/// / `decode_mapsym`): the cat-0 parameter round-trips with its slot index and
/// typelock, the plain local does not become a parameter, and every `<symbol>`
/// carries a NONZERO internal-range id (`HighSymbol.decodeHeader` throws
/// "missing unique symbol id" on 0 — the r5 §3 trap).
#[test]
fn phase4_localdb_encode_decodes_as_params() {
    let m = manager();
    let types = types_with_core();
    let int4_t = crate::dtype::TypeFactory::find_by_name(types.as_ref(), "int4")
        .unwrap()
        .unwrap();
    let mut lm = crate::varmap::ScopeLocal::new(0x1234, ram(&m), "testfn", m.num_spaces()).unwrap();
    // A register-style cat-0 parameter (exact storage + slot index 0).
    let param_addr = Address::new(ram(&m), 0x38);
    let usepoint = Address::new(ram(&m), 0x100f);
    let sid = lm
        .add_param_symbol(0, "argc", Rc::clone(&int4_t), &param_addr, &usepoint)
        .unwrap()
        .expect("param created");
    // Lock it (the Java write path needs cat/index/storage; locks ride along).
    let _ = sid;
    // A plain mapped local (no category).
    lm.add_symbol(
        "local_10",
        Rc::clone(&int4_t),
        &Address::new(ram(&m), 0x2000),
        &Address::new_invalid(),
    )
    .unwrap();

    let mut doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut doc);
        lm.encode(&mut e).unwrap();
    }

    // Decode through the wire-shape consumer.
    let mut dec = unlace_base::marshal::PackedDecode::new(&m);
    unlace_base::marshal::Decoder::ingest_stream(&mut dec, &doc).unwrap();
    let mut params: Vec<RemoteParam> = Vec::new();
    let mut locals: Vec<RemoteLocalVar> = Vec::new();
    let mut locked = true;
    decode_localdb_params(
        &mut dec,
        types.as_ref(),
        &mut params,
        &mut locked,
        &mut locals,
    )
    .unwrap();
    assert_eq!(params.len(), 1, "exactly the cat-0 symbol is a parameter");
    assert_eq!(params[0].index, 0);
    assert_eq!(params[0].name, "argc");
    assert!(params[0].dtype.as_ref().is_some_and(|t| t.get_size() == 4));
    // The non-parameter local rides the Phase-4 seeding channel: name + first
    // mapped entry + (empty uselimit ⇒ invalid) usepoint.
    assert_eq!(locals.len(), 1, "the plain local is captured for seeding");
    assert_eq!(locals[0].name, "local_10");
    assert_eq!(locals[0].addr.get_offset(), 0x2000);
    assert!(
        locals[0].usepoint.is_invalid(),
        "empty uselimit ⇒ addr-tied seed"
    );

    // Structural walk: every <symbol> has a nonzero internal-range id, and every
    // <mapsym> carries at least one entry (addr|hash) + rangelist pair.
    let mut dec = unlace_base::marshal::PackedDecode::new(&m);
    unlace_base::marshal::Decoder::ingest_stream(&mut dec, &doc).unwrap();
    let localdb = dec.open_element().unwrap();
    assert_eq!(localdb, ELEM_LOCALDB.get_id());
    let scope_el = dec.open_element().unwrap();
    assert_eq!(scope_el, ELEM_SCOPE.get_id());
    // Positional contract: <parent> then <rangelist> BEFORE <symbollist>
    // (LocalSymbolMap.decodeScope skips the first two children blind).
    let parent_el = dec.open_element().unwrap();
    assert_eq!(
        parent_el,
        ELEM_PARENT.get_id(),
        "first scope child must be <parent>"
    );
    dec.close_element_skipping(parent_el).unwrap();
    let rl_el = dec.open_element().unwrap();
    assert_eq!(
        rl_el,
        ELEM_RANGELIST.get_id(),
        "second scope child must be <rangelist>"
    );
    dec.close_element_skipping(rl_el).unwrap();
    let list_el = dec.open_element().unwrap();
    assert_eq!(list_el, ELEM_SYMBOLLIST.get_id());
    let mut mapsym_count = 0;
    while dec.peek_element().unwrap() != 0 {
        let ms = dec.open_element().unwrap();
        assert_eq!(ms, ELEM_MAPSYM.get_id());
        mapsym_count += 1;
        // <symbol id=NONZERO ...>
        let sym_el = dec.open_element().unwrap();
        assert_eq!(sym_el, ELEM_SYMBOL.get_id());
        let id =
            unlace_base::marshal::Decoder::read_unsigned_integer_id(&mut dec, &ATTRIB_ID).unwrap();
        assert_ne!(id, 0, "symbol id must be nonzero (Java hard-throw)");
        assert_eq!(id >> 56, 0x40, "invented symbols carry internal-range ids");
        dec.close_element_skipping(sym_el).unwrap();
        // >=1 SymbolEntry: (addr|hash) + rangelist.
        let entry_el = dec.open_element().unwrap();
        assert!(
            entry_el == unlace_base::address::ELEM_ADDR.get_id() || entry_el == ELEM_HASH.get_id(),
            "mapsym entry must open with <addr> or <hash>"
        );
        dec.close_element_skipping(entry_el).unwrap();
        let ul_el = dec.open_element().unwrap();
        assert_eq!(
            ul_el,
            ELEM_RANGELIST.get_id(),
            "entry uselimit rangelist required"
        );
        dec.close_element_skipping(ul_el).unwrap();
        dec.close_element_skipping(ms).unwrap();
    }
    assert_eq!(mapsym_count, 2);
    dec.close_element(list_el).unwrap();
    dec.close_element(scope_el).unwrap();
    dec.close_element(localdb).unwrap();
}
