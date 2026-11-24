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

/// Decode the vendored REAL Java answer (XML form; the packed wire form
/// differs only in the marshaling layer behind `dyn Decoder`).
#[test]
fn captured_java_function_mapsym_decodes() {
    let m = manager_with_registers();
    let types = types_with_core();
    let rec = decode_captured_main(&m, &types);
    assert_eq!(rec.symbol_id, 0x18b);
    let func = rec.func.as_ref().expect("function record");
    assert_eq!(func.name, "main");
    assert_eq!(func.entry.get_offset(), 0x101900);
    assert!(!func.no_return);
    let proto = func.proto.as_ref().expect("prototype");
    assert_eq!(proto.model, "__stdcall");
    assert_eq!(proto.extrapop, Some(8)); // the integer form
    assert!(proto.out_lock);
    // The capture's builtin "int" carries Java's 0xC… id, interned as its own
    // instance beside any locally-hashed "int" — compare by shape, not identity.
    let out = proto.out_type.as_ref().unwrap();
    assert_eq!(out.get_name(), "int");
    assert_eq!(out.get_size(), 4);
    assert_eq!(out.get_metatype(), type_metatype::TYPE_INT);
    assert_eq!(out.get_id(), 0xc000000000000095);
    assert!(proto.is_input_locked());
    assert_eq!(proto.params.len(), 2);
    assert_eq!(proto.params[0].name, "argc");
    let argc_ty = proto.params[0].dtype.as_ref().unwrap();
    assert!(
        Rc::ptr_eq(argc_ty, out),
        "both int refs intern to one instance"
    );
    assert_eq!(proto.params[1].name, "argv");
    let argv_ty = proto.params[1].dtype.as_ref().unwrap();
    assert_eq!(argv_ty.get_metatype(), type_metatype::TYPE_PTR);
    // The mapping entry (the outer <addr size=1> at the function entry).
    assert_eq!(rec.entries.len(), 1);
    assert_eq!(rec.entries[0].addr.get_offset(), 0x101900);
}
