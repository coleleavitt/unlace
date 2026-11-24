//! Tests moved out of `modelrules` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `modelrules` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::dtype::{
        Datatype, TypeFactory, metatype2typeclass, string2metatype, string2typeclass, type_class,
        type_metatype,
    };
    pub(super) use crate::fspec::{
        AssignActionResponse, ParamActive, ParamEntry, ParamListStandard, ParamListType,
        ParameterPieces, PrototypePieces, parameter_pieces_flags,
    };
    pub(super) use AssignActionResponse::{
        fail as RES_FAIL, hiddenret_ptrparam as RES_HIDDENRET_PTRPARAM,
        hiddenret_specialreg as RES_HIDDENRET_SPECIALREG,
        hiddenret_specialreg_void as RES_HIDDENRET_SPECIALREG_VOID, success as RES_SUCCESS,
    };
    pub(super) use unlace_base::error::{UnlaceError, UnlaceResult};
    pub(super) use unlace_base::marshal::{
        ATTRIB_ALIGN, ATTRIB_INDEX, ATTRIB_NAME, ATTRIB_STACKSPILL, ATTRIB_STORAGE, AttributeId,
        Decoder, ElementId,
    };
    pub(super) use unlace_base::space::{AddrSpace, AddrSpaceManager};
    pub(super) use unlace_base::types::{int4, uint4};
    pub(super) use unlace_num::pcoderaw::VarnodeData;
}
use crate::dtype::{
    Datatype, DatatypeKind, TypeBitField, TypeFactory, TypeField, type_class, type_metatype,
};
use crate::fspec::{
    AssignActionResponse, ParamActive, ParamEntry, ParamListKind, ParamListStandard,
    ParameterPieces, PrototypePieces,
};
use crate::modelrules::*;
use module_scope::*;
use unlace_base::address::Address;
use unlace_base::error::UnlaceResult;
use unlace_base::marshal::{Decoder, IdRegistry, XmlDecode};
use unlace_base::space::{AddrSpace, AddrSpaceManager, spacetype};
use unlace_base::types::int4;

// Tests for the declarative `<modelrule>` machinery (`modelrules.rs`, item
// `w6-s4-modelrules`): PrimitiveExtractor layouts, the DatatypeFilter /
// QualifierFilter predicates, and AssignAction decode + assignment over
// real-shaped `.cspec` constructs.
//
// Address spaces are built directly with `AddrSpace::new` and parameter
// entries with the `ParamEntry::seed` builder seam (the same approach as the
// `fspec` tests).  The XML `<rule>`/`<datatype>`/`<consume>`/... constructs are
// decoded with `XmlDecode` configured by an `IdRegistry` carrying the
// modelrules ids (which the W4 decode wiring would otherwise register).

use std::rc::Rc;

// =========================================================================
// Address-space + entry + datatype builders
// =========================================================================

/// A little-endian "register" space at index 3.
fn reg_space_le() -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        4,
        1,
        3,
        0,
        0,
        0,
    ))
}

/// A little-endian stack (spacebase) space at index 5.
fn stack_space() -> Rc<AddrSpace> {
    Rc::new(AddrSpace::new(
        spacetype::IPTR_SPACEBASE,
        "stack",
        false,
        4,
        1,
        5,
        0,
        0,
        0,
    ))
}

fn addr(spc: &Rc<AddrSpace>, off: u64) -> Address {
    Address::new(Rc::clone(spc), off)
}

/// Build an exclusion register ParamEntry of the given storage class.
fn excl_entry_class(
    grp: int4,
    class: type_class,
    space: &Rc<AddrSpace>,
    base: u64,
    size: int4,
    prev: &[ParamEntry],
    mgr: &AddrSpaceManager,
) -> ParamEntry {
    ParamEntry::seed(
        grp,
        class,
        Rc::clone(space),
        base,
        size,
        1,
        0,
        0,
        true,
        false,
        prev,
        mgr,
    )
    .expect("seed exclusion entry")
}

/// Build a GENERAL exclusion register ParamEntry.
fn excl_entry(
    grp: int4,
    space: &Rc<AddrSpace>,
    base: u64,
    size: int4,
    prev: &[ParamEntry],
    mgr: &AddrSpaceManager,
) -> ParamEntry {
    excl_entry_class(
        grp,
        type_class::TYPECLASS_GENERAL,
        space,
        base,
        size,
        prev,
        mgr,
    )
}

/// Build a stack resource ParamEntry with the given alignment.
fn stack_entry(
    grp: int4,
    space: &Rc<AddrSpace>,
    base: u64,
    size: int4,
    align: int4,
    prev: &[ParamEntry],
    mgr: &AddrSpaceManager,
) -> ParamEntry {
    ParamEntry::seed(
        grp,
        type_class::TYPECLASS_GENERAL,
        Rc::clone(space),
        base,
        size,
        1,
        align,
        0,
        true,
        false,
        prev,
        mgr,
    )
    .expect("seed stack entry")
}

fn dt_int(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new_with_align(
        size,
        size,
        type_metatype::TYPE_INT,
    ))
}

fn dt_float(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new_with_align(
        size,
        size,
        type_metatype::TYPE_FLOAT,
    ))
}

fn dt_unknown(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new_with_align(
        size,
        size,
        type_metatype::TYPE_UNKNOWN,
    ))
}

/// Build a struct Datatype from `(offset, field_type)` components.
fn dt_struct(size: int4, align: int4, fields: &[(int4, Rc<Datatype>)]) -> Rc<Datatype> {
    let mut d = Datatype::new_with_align(size, align, type_metatype::TYPE_STRUCT);
    let field: Vec<TypeField> = fields
        .iter()
        .enumerate()
        .map(|(i, (off, ft))| TypeField::new(i as int4, *off, format!("f{i}"), Rc::clone(ft)))
        .collect();
    d.kind = DatatypeKind::Struct {
        field,
        bitfield: Vec::new(),
    };
    Rc::new(d)
}

/// Build an array Datatype.
fn dt_array(elem: Rc<Datatype>, nels: int4) -> Rc<Datatype> {
    let elsize = elem.get_align_size();
    let mut d = Datatype::new_with_align(
        elsize * nels,
        elem.get_alignment(),
        type_metatype::TYPE_ARRAY,
    );
    d.kind = DatatypeKind::Array {
        arrayof: elem,
        arraysize: nels,
    };
    Rc::new(d)
}

/// Build a union Datatype from field types (all at offset 0).
fn dt_union(size: int4, align: int4, fields: &[Rc<Datatype>]) -> Rc<Datatype> {
    let mut d = Datatype::new_with_align(size, align, type_metatype::TYPE_UNION);
    let field: Vec<TypeField> = fields
        .iter()
        .enumerate()
        .map(|(i, ft)| TypeField::new(i as int4, 0, format!("f{i}"), Rc::clone(ft)))
        .collect();
    d.kind = DatatypeKind::Union { field };
    Rc::new(d)
}

fn proto_empty() -> PrototypePieces {
    PrototypePieces::default()
}

// =========================================================================
// AssignAction assignment (built directly, single-register paths)
// =========================================================================

/// Build a single-GENERAL-register input model: one 4-byte register at group 0.
fn single_reg_model(mgr: &AddrSpaceManager, reg: &Rc<AddrSpace>) -> ParamListStandard {
    let mut m = ParamListStandard::new(ParamListKind::Standard);
    m.push_entry(excl_entry(0, reg, 0x10, 4, &[], mgr));
    m.finish_decode();
    m
}

/// Build a model with one 4-byte register (group 0) and a stack resource
/// (group 1) so goto_stack / fall-through can find a stack entry.
fn reg_and_stack_model(
    mgr: &AddrSpaceManager,
    reg: &Rc<AddrSpace>,
    stk: &Rc<AddrSpace>,
) -> ParamListStandard {
    let mut m = ParamListStandard::new(ParamListKind::Standard);
    m.push_entry(excl_entry(0, reg, 0x10, 4, &[], mgr));
    let e1 = stack_entry(1, stk, 0x0, 0x40, 4, m.get_entry(), mgr);
    m.push_entry(e1);
    m.finish_decode();
    m
}

// =========================================================================
// Decode (XML <rule> and component elements)
// =========================================================================

/// Build an IdRegistry carrying the modelrules ids needed by the decoders.
fn modelrules_registry() -> IdRegistry {
    let mut r = IdRegistry::with_base_ids();
    r.register_element(&ELEM_DATATYPE);
    r.register_element(&ELEM_CONSUME);
    r.register_element(&ELEM_CONSUME_EXTRA);
    r.register_element(&ELEM_CONVERT_TO_PTR);
    r.register_element(&ELEM_GOTO_STACK);
    r.register_element(&ELEM_JOIN);
    r.register_element(&ELEM_DATATYPE_AT);
    r.register_element(&ELEM_POSITION);
    r.register_element(&ELEM_VARARGS);
    r.register_element(&ELEM_HIDDEN_RETURN);
    r.register_element(&ELEM_JOIN_PER_PRIMITIVE);
    r.register_element(&ELEM_JOIN_DUAL_CLASS);
    r.register_element(&ELEM_EXTRA_STACK);
    r.register_element(&ELEM_CONSUME_REMAINING);
    r.register_element(&ELEM_RULE);
    r.register_attribute(&ATTRIB_SIZES);
    r.register_attribute(&ATTRIB_MAX_PRIMITIVES);
    r.register_attribute(&ATTRIB_REVERSESIGNIF);
    r.register_attribute(&ATTRIB_MATCHSIZE);
    r.register_attribute(&ATTRIB_AFTER_BYTES);
    r.register_attribute(&ATTRIB_AFTER_STORAGE);
    r.register_attribute(&ATTRIB_FILL_ALTERNATE);
    r.register_attribute(&ATTRIB_MAXSIZE);
    r.register_attribute(&ATTRIB_MINSIZE);
    r.register_attribute(&ATTRIB_STRATEGY);
    r.register_attribute(&ATTRIB_VOIDLOCK);
    r.register_attribute(&ATTRIB_REVERSEJUSTIFY);
    r.register_attribute(&ATTRIB_FIRST);
    r.register_attribute(&ATTRIB_LAST);
    r.register_attribute(&ATTRIB_A);
    r.register_attribute(&ATTRIB_B);
    r
}

/// Decode a `<rule>` blob against the given resource.
fn decode_rule(
    xml: &str,
    resource: &ParamListStandard,
    mgr: &AddrSpaceManager,
) -> UnlaceResult<ModelRule> {
    let registry = modelrules_registry();
    let mut decoder = XmlDecode::new(mgr, &registry);
    decoder.ingest_stream(xml.as_bytes())?;
    ModelRule::decode(&mut decoder, resource)
}

// =========================================================================
// Test TypeFactory stubs
// =========================================================================

/// Panics on any reach; the actions that don't touch the type factory use this.
struct PanicFactory;

/// Returns a 4-byte pointer for `get_type_pointer`; everything else panics.
struct PointerFactory;

macro_rules! impl_type_factory {
    ($name:ident, $ptr_body:item) => {
        #[allow(unused_variables)]
        impl TypeFactory for $name {
            fn get_size_of_int(&self) -> int4 { panic!("type factory reached") }
            fn get_size_of_long(&self) -> int4 { panic!("type factory reached") }
            fn get_size_of_char(&self) -> int4 { panic!("type factory reached") }
            fn get_size_of_wchar(&self) -> int4 { panic!("type factory reached") }
            fn get_size_of_pointer(&self) -> int4 { panic!("type factory reached") }
            fn get_size_of_alt_pointer(&self) -> int4 { panic!("type factory reached") }
            fn get_alignment(&self, size: u32) -> UnlaceResult<int4> { panic!("type factory reached") }
            fn get_primitive_align_size(&self, size: u32) -> UnlaceResult<int4> { panic!("type factory reached") }
            fn get_type_void(&self) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_base_no_char(&self, s: int4, m: type_metatype) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_base(&self, s: int4, m: type_metatype) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_base_named(&self, s: int4, m: type_metatype, n: &str) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_char(&self, s: int4) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_code(&self) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_pointer_strip_array(&self, s: int4, pt: Rc<Datatype>, ws: u32) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            $ptr_body
            fn get_type_pointer_named(&self, s: int4, pt: Rc<Datatype>, ws: u32, n: &str) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn resize_pointer(&self, ptr: Rc<Datatype>, new_size: int4) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_pointer_rel(&self, parent_ptr: Rc<Datatype>, ptr_to: Rc<Datatype>, off: int4) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_pointer_rel_full(&self, sz: int4, parent: Rc<Datatype>, ptr_to: Rc<Datatype>, ws: int4, off: int4, nm: &str) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_pointer_with_space(&self, ptr_to: Rc<Datatype>, spc: Rc<AddrSpace>, nm: &str) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_array(&self, as_: int4, ao: Rc<Datatype>) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_struct(&self, n: &str) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_partial_struct(&self, contain: Rc<Datatype>, off: int4, sz: int4) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_union(&self, n: &str) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_partial_union(&self, contain: Rc<Datatype>, off: int4, sz: int4) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_partial_enum(&self, contain: Rc<Datatype>, off: int4, sz: int4) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_enum(&self, n: &str) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_type_spacebase(&self, id: Rc<AddrSpace>, addr: &Address) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn resize_integer(&self, ct: Rc<Datatype>, new_size: int4) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
            fn get_exact_piece(&self, ct: Rc<Datatype>, offset: int4, size: int4) -> UnlaceResult<Option<Rc<Datatype>>> { panic!("type factory reached") }
            fn find_by_name(&self, n: &str) -> UnlaceResult<Option<Rc<Datatype>>> { panic!("type factory reached") }
            fn concretize(&self, ct: Rc<Datatype>) -> UnlaceResult<Rc<Datatype>> { panic!("type factory reached") }
        }
    };
}

impl_type_factory!(
    PanicFactory,
    fn get_type_pointer(&self, s: int4, pt: Rc<Datatype>, ws: u32) -> UnlaceResult<Rc<Datatype>> {
        panic!("type factory reached")
    }
);

impl_type_factory!(
    PointerFactory,
    fn get_type_pointer(&self, s: int4, pt: Rc<Datatype>, ws: u32) -> UnlaceResult<Rc<Datatype>> {
        let mut d = Datatype::new_with_align(s, s, type_metatype::TYPE_PTR);
        d.kind = DatatypeKind::Pointer {
            ptrto: pt,
            spaceid: None,
            truncate: None,
            wordsize: ws,
        };
        Ok(Rc::new(d))
    }
);

#[test]
fn consume_as_assigns_general_register() {
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let model = single_reg_model(&mgr, &reg);
    let action = AssignAction::ConsumeAs {
        resource_type: type_class::TYPECLASS_GENERAL,
    };
    let mut status = vec![0i32; 2];
    let mut res = ParameterPieces::default();
    let dt = dt_int(4);
    let r = action
        .assign_address(
            &dt,
            &proto_empty(),
            0,
            &PanicFactory,
            &mut status,
            &mut res,
            &model,
            &mgr,
        )
        .unwrap();
    assert_eq!(r, AssignActionResponse::success);
    assert_eq!(res.addr.get_offset(), 0x10);
    assert_eq!(status[0], -1); // register consumed
}

#[test]
fn goto_stack_assigns_stack_slot() {
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let stk = stack_space();
    let model = reg_and_stack_model(&mgr, &reg, &stk);
    let mut action = AssignAction::GotoStack { stack_entry: None };
    action.initialize(&model).unwrap();
    let mut status = vec![0i32; 2];
    let mut res = ParameterPieces::default();
    let dt = dt_int(4);
    let r = action
        .assign_address(
            &dt,
            &proto_empty(),
            0,
            &PanicFactory,
            &mut status,
            &mut res,
            &model,
            &mgr,
        )
        .unwrap();
    assert_eq!(r, AssignActionResponse::success);
    // Stack slot at offset 0 (group 1 consumed one slot).
    assert!(
        res.addr
            .get_space()
            .map(|s| Rc::ptr_eq(s, &stk))
            .unwrap_or(false)
    );
    assert_eq!(res.addr.get_offset(), 0x0);
    assert_eq!(status[1], 1); // one stack slot consumed
}

#[test]
fn convert_to_pointer_recurses_and_marks_indirect() {
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let model = single_reg_model(&mgr, &reg);
    // space=Some(reg) so we don't need a default data space in the manager.
    let action = AssignAction::ConvertToPointer {
        space: Some(Rc::clone(&reg)),
    };
    let mut status = vec![0i32; 2];
    let mut res = ParameterPieces::default();
    let dt = dt_struct(64, 4, &[(0, dt_int(4))]); // big aggregate passed by pointer
    let factory = PointerFactory;
    let r = action
        .assign_address(
            &dt,
            &proto_empty(),
            0,
            &factory,
            &mut status,
            &mut res,
            &model,
            &mgr,
        )
        .unwrap();
    assert_eq!(r, AssignActionResponse::success);
    // The pointer (4 bytes) was assigned to the register.
    assert_eq!(res.addr.get_offset(), 0x10);
    assert_eq!(res.flags, parameter_pieces_flags::INDIRECTSTORAGE);
}

#[test]
fn decode_rule_consume_general() {
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let model = single_reg_model(&mgr, &reg);
    let rule = decode_rule(
        r#"<rule><datatype name="float"/><consume storage="general"/></rule>"#,
        &model,
        &mgr,
    )
    .expect("decode rule");
    // The rule's filter accepts a float and rejects an int.
    let mut status = vec![0i32; 2];
    let mut res = ParameterPieces::default();
    let r = rule
        .assign_address(
            &dt_int(4),
            &proto_empty(),
            0,
            &PanicFactory,
            &mut status,
            &mut res,
            &model,
            &mgr,
        )
        .unwrap();
    assert_eq!(r, AssignActionResponse::fail); // datatype filter (float) rejects int
    let mut status2 = vec![0i32; 2];
    let mut res2 = ParameterPieces::default();
    let r2 = rule
        .assign_address(
            &dt_float(4),
            &proto_empty(),
            0,
            &PanicFactory,
            &mut status2,
            &mut res2,
            &model,
            &mgr,
        )
        .unwrap();
    assert_eq!(r2, AssignActionResponse::success);
    assert_eq!(res2.addr.get_offset(), 0x10);
}

#[test]
fn decode_rule_goto_stack() {
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let stk = stack_space();
    let model = reg_and_stack_model(&mgr, &reg, &stk);
    let rule = decode_rule(
        r#"<rule><datatype name="any"/><goto_stack/></rule>"#,
        &model,
        &mgr,
    )
    .expect("decode rule");
    let mut status = vec![0i32; 2];
    let mut res = ParameterPieces::default();
    let r = rule
        .assign_address(
            &dt_int(4),
            &proto_empty(),
            0,
            &PanicFactory,
            &mut status,
            &mut res,
            &model,
            &mgr,
        )
        .unwrap();
    assert_eq!(r, AssignActionResponse::success);
    assert!(
        res.addr
            .get_space()
            .map(|s| Rc::ptr_eq(s, &stk))
            .unwrap_or(false)
    );
}

#[test]
fn register_ids_drives_production_rule_decode() {
    // The architecture cspec loader builds its decode registry as
    // `IdRegistry::with_base_ids()` + `modelrules::register_ids(..)`; verify that
    // production registration (NOT the test-only `modelrules_registry`) carries
    // every id `ModelRule::decode` consults, by decoding a `<rule>` through it.
    use unlace_base::marshal::{Decoder, IdRegistry, XmlDecode};
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let stk = stack_space();
    let model = reg_and_stack_model(&mgr, &reg, &stk);
    let mut registry = IdRegistry::with_base_ids();
    crate::modelrules::register_ids(&mut registry);
    let mut decoder = XmlDecode::new(&mgr, &registry);
    decoder
        .ingest_stream(br#"<rule><datatype name="any"/><goto_stack/></rule>"#)
        .expect("ingest");
    let rule = ModelRule::decode(&mut decoder, &model).expect("decode via register_ids");
    // The decoded goto_stack rule routes any type to the stack resource (its
    // canAffectFillinOutput is true), proving the `<rule>`/`<goto_stack>`/
    // `<datatype>` element ids and the action all resolved through register_ids.
    assert!(rule.can_affect_fillin_output());
    let mut status = vec![0i32; 2];
    let mut res = ParameterPieces::default();
    let r = rule
        .assign_address(
            &dt_int(4),
            &proto_empty(),
            0,
            &PanicFactory,
            &mut status,
            &mut res,
            &model,
            &mgr,
        )
        .unwrap();
    assert_eq!(r, AssignActionResponse::success);
    assert!(
        res.addr
            .get_space()
            .map(|s| Rc::ptr_eq(s, &stk))
            .unwrap_or(false)
    );
}

#[test]
fn decode_rule_with_position_qualifier() {
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let model = single_reg_model(&mgr, &reg);
    let rule = decode_rule(
        r#"<rule><datatype name="any"/><position index="0"/><consume storage="general"/></rule>"#,
        &model,
        &mgr,
    )
    .expect("decode rule");
    // Qualifier passes at pos 0, fails elsewhere.
    let mut status = vec![0i32; 2];
    let mut res = ParameterPieces::default();
    assert_eq!(
        rule.assign_address(
            &dt_int(4),
            &proto_empty(),
            0,
            &PanicFactory,
            &mut status,
            &mut res,
            &model,
            &mgr
        )
        .unwrap(),
        AssignActionResponse::success
    );
    let mut status2 = vec![0i32; 2];
    let mut res2 = ParameterPieces::default();
    assert_eq!(
        rule.assign_address(
            &dt_int(4),
            &proto_empty(),
            1,
            &PanicFactory,
            &mut status2,
            &mut res2,
            &model,
            &mgr
        )
        .unwrap(),
        AssignActionResponse::fail
    );
}

#[test]
fn decode_rule_size_restricted_filter() {
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    let model = single_reg_model(&mgr, &reg);
    let rule = decode_rule(
        r#"<rule><datatype name="any" minsize="4" maxsize="4"/><consume storage="general"/></rule>"#,
        &model,
        &mgr,
    )
    .expect("decode rule");
    // 4-byte type passes the size filter; an 8-byte one is rejected by the filter.
    let mut s1 = vec![0i32; 2];
    let mut r1 = ParameterPieces::default();
    assert_eq!(
        rule.assign_address(
            &dt_int(4),
            &proto_empty(),
            0,
            &PanicFactory,
            &mut s1,
            &mut r1,
            &model,
            &mgr
        )
        .unwrap(),
        AssignActionResponse::success
    );
    let mut s2 = vec![0i32; 2];
    let mut r2 = ParameterPieces::default();
    assert_eq!(
        rule.assign_address(
            &dt_int(8),
            &proto_empty(),
            0,
            &PanicFactory,
            &mut s2,
            &mut r2,
            &model,
            &mgr
        )
        .unwrap(),
        AssignActionResponse::fail
    );
}

#[test]
fn decode_rule_consume_extra_sideeffect() {
    // A rule with a consume_as action plus a consume_extra side-effect.
    let mgr = AddrSpaceManager::new();
    let reg = reg_space_le();
    // Two general registers so the side-effect has something to consume.
    let mut model = ParamListStandard::new(ParamListKind::Standard);
    model.push_entry(excl_entry(0, &reg, 0x10, 4, &[], &mgr));
    let e1 = excl_entry(1, &reg, 0x20, 4, model.get_entry(), &mgr);
    model.push_entry(e1);
    model.finish_decode();
    let rule = decode_rule(
        r#"<rule><datatype name="any"/><consume storage="general"/><consume_extra storage="general" matchsize="false"/></rule>"#,
        &model,
        &mgr,
    )
    .expect("decode rule");
    let mut status = vec![0i32; 2];
    let mut res = ParameterPieces::default();
    let r = rule
        .assign_address(
            &dt_int(4),
            &proto_empty(),
            0,
            &PanicFactory,
            &mut status,
            &mut res,
            &model,
            &mgr,
        )
        .unwrap();
    assert_eq!(r, AssignActionResponse::success);
    // The consume took group 0; the side-effect consumed group 1.
    assert_eq!(status[0], -1);
    assert_eq!(status[1], -1);
}
