//! Tests moved out of `remote_provider` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::context::GlobalEntry;
use crate::context::GlobalQuery;
use crate::dtype::Datatype;
use crate::dtype::TypeFactory;
use crate::dtype::TypeFactoryImpl;
use crate::dtype::type_metatype;
use crate::fspec::ProtoModel;
use crate::fspec::PrototypePieces;
use crate::funcdata_encode::ATTRIB_VOLATILE;
use crate::remote_provider::*;
use crate::varnode::varnode_flags;
use std::cell::RefCell;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::address::ELEM_RANGELIST;
use unlace_base::address::Range;
use unlace_base::address::RangeList;
use unlace_base::error::UnlaceError;
use unlace_base::error::UnlaceResult;
use unlace_base::marshal::ATTRIB_CONTENT;
use unlace_base::marshal::ATTRIB_ID;
use unlace_base::marshal::ATTRIB_INDEX;
use unlace_base::marshal::ATTRIB_MODEL;
use unlace_base::marshal::ATTRIB_NAME;
use unlace_base::marshal::ATTRIB_NAMELOCK;
use unlace_base::marshal::ATTRIB_READONLY;
use unlace_base::marshal::ATTRIB_SIZE;
use unlace_base::marshal::ATTRIB_TYPELOCK;
use unlace_base::marshal::ATTRIB_VAL;
use unlace_base::marshal::AttributeId;
use unlace_base::marshal::Decoder;
use unlace_base::marshal::ELEM_SYMBOL;
use unlace_base::marshal::ELEM_VOID;
use unlace_base::marshal::ElementId;
use unlace_base::marshal::Encoder;
use unlace_base::marshal::IdRegistry;
use unlace_base::marshal::PackedDecode;
use unlace_base::marshal::PackedEncode;
use unlace_base::marshal::XmlDecode;
use unlace_base::partmap::PartMap;
use unlace_base::space::AddrSpace;
use unlace_base::space::AddrSpaceManager;
use unlace_base::space::addrspace_flags;
use unlace_base::space::spacetype;
use unlace_base::types::int4;
use unlace_base::types::uint4;

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

/// A REAL Java-side getMappedSymbols function answer, captured from stock
/// Ghidra 12.1.2 via DecompInterface.enableDebug on `fmt`'s `main`
/// (integrations/ghidra/live-smoke rig; the `<xml_savefile>` records the
/// actual DecompileCallback encode).  Trimmed verbatim except for the added
/// `<doc id="0x0">` wrapper (the savefile stores answers unwrapped).  This is
/// the ground-truth shape check for the decoder: hex-form attribute values,
/// integer-form extrapop, register-storage entries with first-use rangelists,
/// inline nested pointer types with builtin 0xC… ids.
const CAPTURED_MAIN_MAPSYM: &str = r#"<doc id="0x0"><mapsym>
  <function id="0x18b" name="main" size="1">
    <addr space="ram" offset="0x101900"/>
    <localdb lock="false" main="stack">
      <scope name="main">
        <parent id="0x0"/>
        <rangelist/>
        <symbollist>
          <mapsym>
            <symbol id="0x1e0" name="argc" typelock="true" namelock="true" merge="false" cat="0" index="0x0">
              <type name="int" id="0xc000000000000095" metatype="int" size="4"/>
            </symbol>
            <addr space="register" offset="0x38" size="4"/>
            <rangelist>
              <range space="ram" first="0x1018ff" last="0x1018ff"/>
            </rangelist>
          </mapsym>
          <mapsym>
            <symbol id="0x1e1" name="argv" typelock="true" namelock="true" merge="false" cat="0" index="0x1">
              <type name="" metatype="ptr" size="8">
                <type name="" metatype="ptr" size="8">
                  <type name="char" id="0xc00000000000007b" metatype="int" size="1" char="true"/>
                </type>
              </type>
            </symbol>
            <addr space="register" offset="0x30" size="8"/>
            <rangelist>
              <range space="ram" first="0x1018ff" last="0x1018ff"/>
            </rangelist>
          </mapsym>
        </symbollist>
      </scope>
    </localdb>
    <prototype extrapop="8" model="__stdcall" modellock="true">
      <returnsym typelock="true">
        <addr space="register" offset="0x0" size="4"/>
        <type name="int" id="0xc000000000000095" metatype="int" size="4"/>
      </returnsym>
    </prototype>
  </function>
  <addr space="ram" offset="0x101900" size="1"/>
  <rangelist/>
</mapsym></doc>"#;

/// The capture's parameters carry `register` storage, so its manager needs the
/// space the plain [`manager`] omits.
fn manager_with_registers() -> Rc<AddrSpaceManager> {
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
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        4,
        1,
        2,
        addrspace_flags::hasphysical,
        0,
        0,
    )))
    .unwrap();
    Rc::new(m)
}

fn decode_captured_main(
    m: &Rc<AddrSpaceManager>,
    types: &TypeFactoryImpl,
) -> Box<RemoteSymbolRecord> {
    let mut registry = IdRegistry::with_base_ids();
    register_remote_provider_ids(&mut registry);
    crate::dtype::register_type_wire_ids(&mut registry);
    registry.register_element(&crate::funcdata_encode::ELEM_FUNCTION);
    registry.register_element(&crate::prettyprint::ids::ELEM_TYPE);
    registry.register_attribute(&crate::jumptable::ATTRIB_LABEL);

    let store = unlace_base::xml::xml_tree(CAPTURED_MAIN_MAPSYM.as_bytes()).unwrap();
    let root = store.get_root().clone();
    let mut dec = XmlDecode::new_with_root(m, &registry, &root, 0);
    match decode_mapped_answer(&mut dec, types).unwrap() {
        RemoteMapAnswer::Symbol(rec) => rec,
        _ => panic!("expected a symbol"),
    }
}

/// A canned [`RemoteProviderFetch`]: per-query response maps keyed by offset,
/// plus call counters (the negative-caching asserts).
#[derive(Default)]
struct MockFetch {
    mapped: std::collections::BTreeMap<u64, Vec<u8>>,
    external: std::collections::BTreeMap<u64, Vec<u8>>,
    tracked: std::collections::BTreeMap<u64, Vec<u8>>,
    /// Offsets whose getMappedSymbols FAILS (a wire/JavaError).
    fail_mapped: std::collections::BTreeSet<u64>,
    calls: std::cell::RefCell<std::collections::BTreeMap<&'static str, usize>>,
}

impl MockFetch {
    fn bump(&self, what: &'static str) {
        *self.calls.borrow_mut().entry(what).or_insert(0) += 1;
    }
    fn serve(
        map: &std::collections::BTreeMap<u64, Vec<u8>>,
        off: u64,
        decoder: &mut dyn Decoder,
    ) -> UnlaceResult<bool> {
        match map.get(&off) {
            Some(doc) => {
                decoder.ingest_stream(doc)?;
                Ok(true)
            }
            None => Ok(false),
        }
    }
}

impl RemoteProviderFetch for MockFetch {
    fn fetch_mapped_symbols(
        &self,
        addr: &Address,
        decoder: &mut dyn Decoder,
    ) -> UnlaceResult<bool> {
        self.bump("mapped");
        if self.fail_mapped.contains(&addr.get_offset()) {
            return Err(unlace_base::error::UnlaceError::lowlevel(
                "mock wire failure",
            ));
        }
        Self::serve(&self.mapped, addr.get_offset(), decoder)
    }
    fn fetch_namespace_path(&self, _id: u64, _decoder: &mut dyn Decoder) -> UnlaceResult<bool> {
        self.bump("namespace");
        Ok(false)
    }
    fn fetch_external_ref(&self, addr: &Address, decoder: &mut dyn Decoder) -> UnlaceResult<bool> {
        self.bump("external");
        Self::serve(&self.external, addr.get_offset(), decoder)
    }
    fn fetch_tracked_registers(
        &self,
        addr: &Address,
        decoder: &mut dyn Decoder,
    ) -> UnlaceResult<bool> {
        self.bump("tracked");
        Self::serve(&self.tracked, addr.get_offset(), decoder)
    }
    fn fetch_comments(
        &self,
        _fad: &Address,
        _flags: u32,
        _decoder: &mut dyn Decoder,
    ) -> UnlaceResult<bool> {
        Ok(false)
    }
}

/// A data-symbol answer: `<doc id=0><mapsym><symbol …><typeref int4/></symbol>
/// <addr size=4/><rangelist/></mapsym></doc>`.
#[test]
fn data_symbol_mapsym_decodes() {
    let m = manager();
    let types = types_with_core();
    let int4 = crate::dtype::TypeFactory::find_by_name(&*types, "int4")
        .unwrap()
        .unwrap();
    let mut doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut doc);
        e.open_element(&crate::prettyprint::ids::ELEM_TYPE); // any wrapper id (upstream <doc>)
        e.write_unsigned_integer(&ATTRIB_ID, 0);
        e.open_element(&ELEM_MAPSYM);
        e.open_element(&ELEM_SYMBOL);
        e.write_unsigned_integer(&ATTRIB_ID, 0x1234);
        e.write_string(&ATTRIB_NAME, b"my_global");
        e.write_bool(&ATTRIB_TYPELOCK, true);
        e.write_bool(&ATTRIB_NAMELOCK, true);
        e.write_bool(&ATTRIB_READONLY, true);
        e.write_signed_integer(&ATTRIB_CAT, -1);
        e.open_element(&crate::dtype::ELEM_TYPEREF);
        e.write_string(&ATTRIB_NAME, b"int4");
        e.write_unsigned_integer(&ATTRIB_ID, int4.get_id());
        e.close_element(&crate::dtype::ELEM_TYPEREF);
        e.close_element(&ELEM_SYMBOL);
        Address::new(ram(&m), 0x2000)
            .encode_sized(&mut e, 4)
            .unwrap();
        e.open_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_MAPSYM);
        e.close_element(&crate::prettyprint::ids::ELEM_TYPE);
    }
    let mut dec = PackedDecode::new(&m);
    dec.ingest_stream(&doc).unwrap();
    let rec = match decode_mapped_answer(&mut dec, &types).unwrap() {
        RemoteMapAnswer::Symbol(rec) => rec,
        _ => panic!("expected a symbol"),
    };
    assert_eq!(rec.name, "my_global");
    assert_eq!(rec.symbol_id, 0x1234);
    assert_eq!(
        rec.flags,
        varnode_flags::typelock | varnode_flags::namelock | varnode_flags::readonly
    );
    assert!(Rc::ptr_eq(rec.dtype.as_ref().unwrap(), &int4));
    assert_eq!(rec.entries.len(), 1);
    assert_eq!(rec.entries[0].addr.get_offset(), 0x2000);
    assert_eq!(rec.entries[0].size, 4);
    assert!(rec.entries[0].uselimit.empty());
    assert!(rec.func.is_none());
}

/// A function answer with `<localdb>` cat-0 params and a `<prototype>`:
/// the noreturn flag, the sorted locked params, and `to_pieces`.
#[test]
fn function_mapsym_decodes_prototype_and_params() {
    let m = manager();
    let types = types_with_core();
    let int4 = crate::dtype::TypeFactory::find_by_name(&*types, "int4")
        .unwrap()
        .unwrap();
    let mut doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut doc);
        e.open_element(&crate::prettyprint::ids::ELEM_TYPE); // the <doc> wrapper
        e.write_unsigned_integer(&ATTRIB_ID, 0);
        e.open_element(&ELEM_MAPSYM);
        e.open_element(&crate::funcdata_encode::ELEM_FUNCTION);
        e.write_unsigned_integer(&ATTRIB_ID, 0x77);
        e.write_string(&ATTRIB_NAME, b"my_exit");
        e.write_signed_integer(&ATTRIB_SIZE, 1);
        e.write_bool(&ATTRIB_NORETURN, true);
        Address::new(ram(&m), 0x3000).encode(&mut e).unwrap();
        // <localdb lock=false main=ram><scope><parent id=0/><rangelist/>
        //   <symbollist> params (index 1 encoded FIRST — the decoder sorts)
        e.open_element(&ELEM_LOCALDB);
        e.write_bool(&ATTRIB_LOCK, false);
        e.write_space(&ATTRIB_MAIN, &ram(&m));
        e.open_element(&ELEM_SCOPE);
        e.write_string(&ATTRIB_NAME, b"my_exit");
        e.open_element(&ELEM_PARENT);
        e.write_unsigned_integer(&ATTRIB_ID, 0);
        e.close_element(&ELEM_PARENT);
        e.open_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_RANGELIST);
        e.open_element(&ELEM_SYMBOLLIST);
        for (idx, pname) in [(1u64, "second"), (0u64, "first")] {
            e.open_element(&ELEM_MAPSYM);
            e.open_element(&ELEM_SYMBOL);
            e.write_string(&ATTRIB_NAME, pname.as_bytes());
            e.write_bool(&ATTRIB_TYPELOCK, true);
            e.write_bool(&ATTRIB_NAMELOCK, true);
            e.write_signed_integer(&ATTRIB_CAT, 0);
            e.write_unsigned_integer(&ATTRIB_INDEX, idx);
            if idx == 0 {
                e.write_bool(&unlace_base::marshal::ATTRIB_HIDDENRETPARM, true);
            }
            e.open_element(&crate::dtype::ELEM_TYPEREF);
            e.write_string(&ATTRIB_NAME, b"int4");
            e.write_unsigned_integer(&ATTRIB_ID, int4.get_id());
            e.close_element(&crate::dtype::ELEM_TYPEREF);
            e.close_element(&ELEM_SYMBOL);
            e.open_element(&ELEM_HASH);
            e.write_unsigned_integer(&unlace_base::marshal::ATTRIB_VAL, 1);
            e.close_element(&ELEM_HASH);
            e.open_element(&ELEM_RANGELIST);
            e.close_element(&ELEM_RANGELIST);
            e.close_element(&ELEM_MAPSYM);
        }
        e.close_element(&ELEM_SYMBOLLIST);
        e.close_element(&ELEM_SCOPE);
        e.close_element(&ELEM_LOCALDB);
        // <prototype extrapop="unknown" model="default"><returnsym><addr/><void/>
        e.open_element(&ELEM_PROTOTYPE);
        e.write_string(&ATTRIB_EXTRAPOP, b"unknown");
        e.write_string(&ATTRIB_MODEL, b"default");
        e.write_bool(&ATTRIB_CUSTOM, true);
        e.open_element(&ELEM_RETURNSYM);
        e.write_bool(&ATTRIB_TYPELOCK, true);
        Address::new(ram(&m), 0x88).encode_sized(&mut e, 1).unwrap();
        e.open_element(&ELEM_VOID);
        e.close_element(&ELEM_VOID);
        e.close_element(&ELEM_RETURNSYM);
        e.close_element(&ELEM_PROTOTYPE);
        e.close_element(&crate::funcdata_encode::ELEM_FUNCTION);
        // The mapping SymbolEntry.
        Address::new(ram(&m), 0x3000)
            .encode_sized(&mut e, 1)
            .unwrap();
        e.open_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_MAPSYM);
        e.close_element(&crate::prettyprint::ids::ELEM_TYPE);
    }
    let mut dec = PackedDecode::new(&m);
    dec.ingest_stream(&doc).unwrap();
    let rec = match decode_mapped_answer(&mut dec, &types).unwrap() {
        RemoteMapAnswer::Symbol(rec) => rec,
        _ => panic!("expected a symbol"),
    };
    let func = rec.func.as_ref().expect("function record");
    assert_eq!(func.name, "my_exit");
    assert!(func.no_return);
    assert_eq!(func.entry.get_offset(), 0x3000);
    let proto = func.proto.as_ref().expect("prototype decoded");
    assert_eq!(proto.model, "default");
    assert_eq!(proto.extrapop, None); // the "unknown" string form
    assert!(proto.custom);
    assert_eq!(proto.out_storage.get_offset(), 0x88);
    assert!(proto.out_lock);
    assert!(proto.out_type.as_ref().unwrap().get_metatype() == type_metatype::TYPE_VOID);
    assert!(proto.is_input_locked());
    // Sorted by slot index despite reversed wire order.
    assert_eq!(proto.params.len(), 2);
    assert_eq!(proto.params[0].name, "first");
    assert!(proto.params[0].hidden);
    assert_eq!(proto.params[1].name, "second");
    assert!(!proto.params[1].hidden);
    let pieces = proto.to_pieces(&func.name);
    let output = pieces
        .output_storage
        .as_ref()
        .expect("custom return storage");
    assert_eq!(output.addr.get_offset(), 0x88);
    assert_ne!(
        output.flags & crate::fspec::parameter_pieces_flags::CUSTOM_STORAGE,
        0
    );
    assert_eq!(pieces.name, "my_exit");
    assert_eq!(pieces.intypes.len(), 1);
    assert_eq!(pieces.innames, vec!["second".to_string()]);
    assert_eq!(pieces.first_var_arg_slot, -1);
}

/// The host's typelocked parameters must reach [`RemoteFunctionFacts::param_storage`]
/// carrying the **`ParameterPieces`** lock bits.  `varnode_flags::typelock|namelock`
/// (0x300) shares no bit with `parameter_pieces_flags::TYPELOCK|NAMELOCK` (0x18), and
/// `Funcdata::apply_mapped_params` re-`set_param`s every slot wholesale AFTER
/// `apply_locked_prototype_with_model`, so unlocked pieces here CLOBBER the lock the
/// prototype channel just set: `FuncProto::is_input_locked` reads slot 0's typelock,
/// so the whole signature reads unlocked and the host's declared types and names are
/// re-derived instead of applied.
#[test]
fn captured_java_locked_params_materialize_with_pieces_locks() {
    let m = manager_with_registers();
    let types = types_with_core();
    let scope = scope_over(&m, Rc::clone(&types), MockFetch::default());
    scope.materialize(*decode_captured_main(&m, &types));

    let facts = scope
        .function_at(&Address::new(ram(&m), 0x101900))
        .expect("the captured function");
    let locks = crate::fspec::parameter_pieces_flags::TYPELOCK
        | crate::fspec::parameter_pieces_flags::NAMELOCK;
    let want = [(0, "argc", 0x38u64), (1, "argv", 0x30)];
    assert_eq!(
        facts.param_storage.len(),
        want.len(),
        "both host params carried storage"
    );
    for ((slot, name, piece), (wslot, wname, woff)) in facts.param_storage.iter().zip(&want) {
        assert_eq!(slot, wslot, "{wname}: compacted slot basis");
        assert_eq!(name, wname);
        assert_eq!(
            piece.addr.get_offset(),
            *woff,
            "{wname}: host storage verbatim"
        );
        assert_eq!(
            piece.flags & locks,
            locks,
            "{wname}: locks must be parameter_pieces_flags bits, got {:#x}",
            piece.flags
        );
    }
}

fn scope_over(
    m: &Rc<AddrSpaceManager>,
    types: Rc<TypeFactoryImpl>,
    fetch: MockFetch,
) -> RemoteScope {
    let mut owned = unlace_base::address::RangeList::default();
    owned.insert_range(ram(m), 0, u64::MAX >> 8);
    let base = GlobalQuery::new(Vec::new(), owned, PartMap::default());
    RemoteScope::new(
        Rc::new(fetch),
        Rc::clone(m),
        types,
        std::collections::BTreeMap::new(),
        None,
        base,
    )
}

/// A packed `<doc><mapsym><externrefsymbol …>` answer at the pointer, whose
/// getExternalRef resolves to a function carrying BOTH a raw name and a
/// display label: the two-step resolution runs, the facts split name/label
/// (the HighFunction name-echo contract), and the pointer symbol survives.
#[test]
fn extern_ref_resolves_and_splits_name_from_label() {
    let m = manager();
    let types = types_with_core();
    // Pointer symbol at ram:0x5000 -> resolve address ram:0x7000 (the
    // refaddr <addr> is a CHILD of <externrefsymbol>, as upstream encodes).
    let mut ptr_doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut ptr_doc);
        e.open_element(&crate::prettyprint::ids::ELEM_TYPE);
        e.write_unsigned_integer(&ATTRIB_ID, 0);
        e.open_element(&ELEM_MAPSYM);
        e.open_element(&ELEM_EXTERNREFSYMBOL);
        e.write_string(&ATTRIB_NAME, b"imp_templated");
        Address::new(ram(&m), 0x7000).encode(&mut e).unwrap();
        e.close_element(&ELEM_EXTERNREFSYMBOL);
        Address::new(ram(&m), 0x5000)
            .encode_sized(&mut e, 8)
            .unwrap();
        e.open_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_MAPSYM);
        e.close_element(&crate::prettyprint::ids::ELEM_TYPE);
    }
    // The resolved function: raw name != label (the TemplateSimplifier case).
    let mut fn_doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut fn_doc);
        e.open_element(&crate::prettyprint::ids::ELEM_TYPE);
        e.write_unsigned_integer(&ATTRIB_ID, 0);
        e.open_element(&ELEM_MAPSYM);
        e.open_element(&crate::funcdata_encode::ELEM_FUNCTION);
        e.write_unsigned_integer(&ATTRIB_ID, 0x99);
        e.write_string(&ATTRIB_NAME, b"foo<int,long>");
        e.write_string(&crate::jumptable::ATTRIB_LABEL, b"foo");
        e.write_signed_integer(&ATTRIB_SIZE, 1);
        e.write_bool(&ATTRIB_NORETURN, true);
        Address::new(ram(&m), 0x7000).encode(&mut e).unwrap();
        e.close_element(&crate::funcdata_encode::ELEM_FUNCTION);
        Address::new(ram(&m), 0x7000)
            .encode_sized(&mut e, 1)
            .unwrap();
        e.open_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_MAPSYM);
        e.close_element(&crate::prettyprint::ids::ELEM_TYPE);
    }
    let mut fetch = MockFetch::default();
    fetch.mapped.insert(0x5000, ptr_doc);
    fetch.external.insert(0x5000, fn_doc);
    let scope = scope_over(&m, types, fetch);

    let probe = Address::new(ram(&m), 0x5000);
    scope.ensure_queried(&probe);
    // The two-step resolution materialized the FUNCTION at its own entry.
    let facts = scope
        .function_at(&Address::new(ram(&m), 0x7000))
        .expect("external function resolved");
    assert_eq!(facts.name, "foo<int,long>", "raw name is the Java identity");
    assert_eq!(facts.display_name, "foo", "label is only the display form");
    assert!(facts.no_return);
    // The pointer's own symbol landed too (pointer-to-code typed).
    let snap = scope.snapshot();
    let (nm, _, ty) = snap
        .name_for_varnode(&probe, 8, &Address::new_invalid())
        .expect("pointer symbol materialized");
    assert_eq!(nm, "imp_templated");
    assert_eq!(
        ty.expect("pointer type").get_metatype(),
        type_metatype::TYPE_PTR
    );
}

/// Java's real import-slot shape: the `<externrefsymbol>` is mapped with ONE
/// byte of storage and resolves to the slot itself, where getExternalRef
/// serves the function with a two-byte mapping.  The slot still covers a
/// whole-pointer read and carries `externref` (what ActionDeindirect keys
/// on), and the function, declared without a prototype, is typed as code.
#[test]
fn extern_ref_slot_covers_a_pointer_read() {
    let m = manager();
    let types = types_with_core();
    let slot = Address::new(ram(&m), 0x5000);
    let mut ptr_doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut ptr_doc);
        e.open_element(&crate::prettyprint::ids::ELEM_TYPE);
        e.write_unsigned_integer(&ATTRIB_ID, 0);
        e.open_element(&ELEM_MAPSYM);
        e.open_element(&ELEM_EXTERNREFSYMBOL);
        e.write_string(&ATTRIB_NAME, b"CreateThread_exref");
        slot.encode(&mut e).unwrap();
        e.close_element(&ELEM_EXTERNREFSYMBOL);
        slot.encode_sized(&mut e, 1).unwrap();
        e.open_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_MAPSYM);
        e.close_element(&crate::prettyprint::ids::ELEM_TYPE);
    }
    let mut fn_doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut fn_doc);
        e.open_element(&crate::prettyprint::ids::ELEM_TYPE);
        e.write_unsigned_integer(&ATTRIB_ID, 0);
        e.open_element(&ELEM_MAPSYM);
        e.open_element(&crate::funcdata_encode::ELEM_FUNCTION);
        e.write_unsigned_integer(&ATTRIB_ID, 0x99);
        e.write_string(&ATTRIB_NAME, b"CreateThread");
        e.write_signed_integer(&ATTRIB_SIZE, 2);
        slot.encode(&mut e).unwrap();
        e.close_element(&crate::funcdata_encode::ELEM_FUNCTION);
        slot.encode_sized(&mut e, 2).unwrap();
        e.open_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_RANGELIST);
        e.close_element(&ELEM_MAPSYM);
        e.close_element(&crate::prettyprint::ids::ELEM_TYPE);
    }
    let mut fetch = MockFetch::default();
    fetch.mapped.insert(0x5000, ptr_doc);
    fetch.external.insert(0x5000, fn_doc);
    let scope = scope_over(&m, types, fetch);

    let snap = scope.query_snapshot(&slot);
    let invalid = Address::new_invalid();
    assert_ne!(
        snap.query_properties(&slot, 8, &invalid) & varnode_flags::externref,
        0,
        "an 8-byte read of the slot is an external reference"
    );
    let (nm, _, _) = snap
        .name_for_varnode(&slot, 8, &invalid)
        .expect("the slot symbol covers the whole pointer");
    assert_eq!(nm, "CreateThread_exref");
    let facts = scope
        .function_at(&slot)
        .expect("external function resolved");
    assert_eq!(facts.name, "CreateThread");
    let (ty, _) = snap
        .sized_type_geometry(&slot, 1, &invalid)
        .expect("the function symbol is typed");
    assert_eq!(ty.get_metatype(), type_metatype::TYPE_CODE);
}

/// A function the host tagged with a call-fixup carries `<inject>` in its
/// `<prototype>`; the name resolves to the registered payload id, and an
/// unknown name leaves the function uninjected.
#[test]
fn prototype_inject_resolves_to_the_call_fixup_payload() {
    let m = manager();
    let types = types_with_core();
    let fn_doc = |entry: u64, name: &[u8], fixup: &[u8]| {
        let mut doc = Vec::new();
        {
            let mut e = PackedEncode::new(&mut doc);
            e.open_element(&crate::prettyprint::ids::ELEM_TYPE);
            e.write_unsigned_integer(&ATTRIB_ID, 0);
            e.open_element(&ELEM_MAPSYM);
            e.open_element(&crate::funcdata_encode::ELEM_FUNCTION);
            e.write_string(&ATTRIB_NAME, name);
            e.write_signed_integer(&ATTRIB_SIZE, 1);
            Address::new(ram(&m), entry).encode(&mut e).unwrap();
            e.open_element(&ELEM_PROTOTYPE);
            e.write_string(&ATTRIB_MODEL, b"default");
            e.write_bool(&ATTRIB_VOIDLOCK, true);
            e.open_element(&ELEM_RETURNSYM);
            e.write_bool(&ATTRIB_TYPELOCK, true);
            e.open_element(&unlace_base::address::ELEM_ADDR);
            e.close_element(&unlace_base::address::ELEM_ADDR);
            e.open_element(&ELEM_VOID);
            e.close_element(&ELEM_VOID);
            e.close_element(&ELEM_RETURNSYM);
            e.open_element(&crate::pcodeinject::ELEM_INJECT);
            e.write_string(&ATTRIB_CONTENT, fixup);
            e.close_element(&crate::pcodeinject::ELEM_INJECT);
            e.close_element(&ELEM_PROTOTYPE);
            e.close_element(&crate::funcdata_encode::ELEM_FUNCTION);
            Address::new(ram(&m), entry)
                .encode_sized(&mut e, 1)
                .unwrap();
            e.open_element(&ELEM_RANGELIST);
            e.close_element(&ELEM_RANGELIST);
            e.close_element(&ELEM_MAPSYM);
            e.close_element(&crate::prettyprint::ids::ELEM_TYPE);
        }
        doc
    };
    let mut fetch = MockFetch::default();
    fetch
        .mapped
        .insert(0x4000, fn_doc(0x4000, b"__chkstk", b"alloca_probe"));
    fetch
        .mapped
        .insert(0x4100, fn_doc(0x4100, b"helper", b"no_such_fixup"));
    let mut scope = scope_over(&m, types, fetch);
    scope.set_call_fixups([("alloca_probe".to_string(), 3)].into_iter().collect());

    let probe = scope
        .function_at(&Address::new(ram(&m), 0x4000))
        .expect("function");
    assert_eq!(probe.inject_id, 3);
    let other = scope
        .function_at(&Address::new(ram(&m), 0x4100))
        .expect("function");
    assert_eq!(other.inject_id, -1);
}

/// getTrackedRegisters answers cache per address until `clear()` (one wire
/// ask per flush epoch), and decode failures negative-cache with ONE warning.
#[test]
fn tracked_caches_and_failures_negative_cache() {
    let m = manager();
    let types = types_with_core();
    // A tracked answer for ram:0x1000: one register value.
    let reg_loc = unlace_num::pcoderaw::VarnodeData {
        space: Some(ram(&m)),
        offset: 0x30,
        size: 8,
    };
    let mut tr_doc = Vec::new();
    {
        let mut e = PackedEncode::new(&mut tr_doc);
        let set = vec![unlace_sleigh::globalcontext::TrackedContext {
            loc: reg_loc.clone(),
            val: 0x1234,
        }];
        unlace_sleigh::globalcontext::encode_tracked(&mut e, &Address::new(ram(&m), 0x1000), &set)
            .unwrap();
    }
    let mut fetch = MockFetch::default();
    fetch.tracked.insert(0x1000, tr_doc);
    fetch.fail_mapped.insert(0x4444);
    let scope = scope_over(&m, types, fetch);

    let at = Address::new(ram(&m), 0x1000);
    let set = scope.tracked_at(&at).expect("tracked set");
    assert_eq!(set.len(), 1);
    assert_eq!(set[0].val, 0x1234);
    let set2 = scope.tracked_at(&at).expect("tracked set cached");
    assert_eq!(set2.len(), 1);

    // A FAILING getMappedSymbols address: asked once, negative-cached, one
    // drained warning; clear() re-opens both caches.
    let bad = Address::new(ram(&m), 0x4444);
    scope.ensure_queried(&bad);
    scope.ensure_queried(&bad);
    let warnings = scope.drain_warnings();
    assert_eq!(warnings.len(), 1, "{warnings:?}");
    assert!(warnings[0].starts_with("Warning:"));
    assert!(scope.drain_warnings().is_empty());
    scope.clear();
    scope.ensure_queried(&bad);
    let _ = scope.tracked_at(&at);
    // counts: mapped fired twice total (once per epoch), tracked twice.
    // (Read back through the fetch — the scope owns it, so assert indirectly:
    // a second same-epoch ensure_queried did NOT re-fire, proven by the single
    // warning above; the post-clear re-fire is proven by a fresh warning.)
    let warnings = scope.drain_warnings();
    assert_eq!(warnings.len(), 1, "post-clear re-query fired again");
}
