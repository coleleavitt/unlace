//! The `ActionInferTypes` type-propagation engine (C++ `coreaction.cc:5262-5672`).
//!
//! This is the W8 `ActionInferTypes::apply` body lifted out of the stub in
//! `coreaction_render`.  It runs the bounded
//! bidirectional type lattice that the C++ deep decompiler uses to recover
//! Varnode data-types:
//!
//!   1. `buildLocaltypes` — seed every live Varnode's *temporary* data-type from
//!      local op-semantics (`getLocalType` -> `outputTypeLocal`/`inputTypeLocal`,
//!      the W6 typeop inst table).
//!   2. `propagateOneType` / `propagateTypeEdge` — push each seed across the
//!      def-use graph through the per-op-code `propagateType` transform, visiting
//!      each Varnode at most once, trimming where the pushed type is not more
//!      specific (`typeOrder`).
//!   3. `propagateAcrossReturns` — share a single return data-type across multiple
//!      `CPUI_RETURN` inputs.
//!   4. `writeBack` — copy each temporary type onto the permanent Varnode type
//!      (`updateType`), dirtying the owning HighVariable so the inferred type
//!      reaches the printer (the decl) and `ActionOutputPrototype` (the return
//!      type).
//!
//! The 7-pass settle ceiling and the `hasTypeRecoveryStarted` gate stay in the
//! [`coreaction_render::ActionInferTypes`] wrapper; this module is the engine it
//! drives.
//!
//! ## Faithfulness / seams
//!
//! The metatype lattice control flow (COPY, MULTIEQUAL, INDIRECT, every
//! comparison, INT_ADD, and the spacebase pointer construction) plus the 11
//! previously-declining `TypeOp::propagateType` overrides are transcribed:
//! LOAD/STORE (`propagateToPointer`/`propagateFromPointer` — the pointer's `*T`
//! <-> the loaded/stored `T`), PTRADD/PTRSUB (`propagateAddIn2Out` — array/struct
//! member pointer arithmetic via the looping `downChain`), INT_XOR/INT_AND
//! (enum + float sign-manipulation), INT_OR (enum only), PIECE/SUBPIECE
//! (the `resizePointer`/`getSubType`/`findTruncation` composite/truncation arms),
//! SEGMENT (`resizePointer`) and NEW (cpool result).  The remaining seams are the
//! W8 union mid-flow resolution (`needsResolution`/`resolveInFlow`), the
//! type-locked SymbolEntry `getExactPiece` seed, and the
//! `propagateSpacebaseRef`/`applyTypeRecommendations` aliasing passes; those arms
//! conservatively decline (return `None`/no-op), which is faithful — the C++ also
//! returns null along those edges when the supporting surface doesn't apply.

use crate::elemptr::FuncdataElemptrExt;
use crate::funcdata_resolveflow::FuncdataResolveFlowExt;
use crate::funcdata_spacebase::FuncdataSpacebaseExt;
use std::rc::Rc;

use unlace_base::address::{Address, calc_mask};
use unlace_base::space::AddrSpace;
use unlace_base::types::{int4, int8, uintb};
use unlace_num::opcodes::OpCode;

use crate::context::{OpId, VarnodeId};
use crate::dtype::{Datatype, TypeFactory, type_metatype};
use crate::funcdata::Funcdata;
use crate::typeop::type_op_info;

/// Resolve `op->outputTypeLocal()` / `op->inputTypeLocal(slot)` faithfully via the
/// W6 typeop inst table (`getOutputLocal`/`getInputLocal`).  Falls back to a
/// size-correct `TYPE_UNKNOWN` if the factory query fails (the C++ getBase never
/// fails for a valid size).
#[doc(hidden)]
pub fn output_type_local(data: &Funcdata, op: OpId) -> Rc<Datatype> {
    let arch = Rc::clone(data.get_arch());
    let o = data.obank().get(op).expect("output_type_local: stale op");
    let out_size = o
        .get_out()
        .and_then(|v| data.vbank().get(v))
        .map(|v| v.get_size())
        .unwrap_or(1);
    // C++ `TypeOpCallother::getOutputLocal` -> `userOp->getOutputLocal(op)`.  For
    // the internal-string builtin (`InternalStringOp::getOutputLocal`,
    // userop.cc:362) this is the op's own (locked) output type — so a
    // `BUILTIN_STRINGDATA` CALLOTHER reports its char-pointer output token and
    // `ActionSetCasts` inserts no spurious cast around the rendered string literal.
    if o.code() == OpCode::CPUI_CALLOTHER {
        if let Some(ty) = crate::octeoneffects::output_type(data, op) {
            return ty;
        }
        if let Some(ty) = crate::atomics::output_type(data, op) {
            return ty;
        }
        if let Some(ty) = crate::roundingops::output_type(data, op) {
            return ty;
        }
        if let Some(ty) = crate::repstring::output_type(data, op) {
            return ty;
        }
        let in0_off = o
            .get_in(0)
            .and_then(|v| data.vbank().get(v))
            .map(|v| v.get_offset())
            .unwrap_or(0);
        let integer_width = arch
            .x87_integer_userops
            .iter()
            .find_map(|&(id, width)| (u64::from(id) == in0_off).then_some(width));
        if integer_width == Some(out_size) {
            if let Some(Ok(ty)) = arch
                .types()
                .map(|types| types.get_base(out_size, type_metatype::TYPE_INT))
            {
                return ty;
            }
        }
        if in0_off == crate::userop::BUILTIN_STRINGDATA as u64 {
            if let Some(out) = o.get_out().and_then(|v| data.vbank().get(v)) {
                return Rc::clone(out.get_type());
            }
        }
        // (unlace strlenscan) `DatatypeUserOp::getOutputLocal` for the `strlen`
        // builtin: the length is an unsigned integer of the output's width.
        if in0_off == crate::userop::BUILTIN_STRLEN as u64 {
            if let Some(Ok(t)) = arch
                .types()
                .map(|t| t.get_base(out_size, type_metatype::TYPE_UINT))
            {
                return t;
            }
        }
        // (unlace swiftcall) a throwing call's error is an object reference.
        if in0_off == crate::userop::BUILTIN_SWIFT_ERROR as u64 {
            if let Some(Ok(t)) = arch.types().map(|t| {
                t.get_type_void()
                    .and_then(|v| t.get_type_pointer(out_size, v, 1))
            }) {
                return t;
            }
        }
        // (unlace alloca) `void *alloca(size_t)`.
        if in0_off == crate::userop::BUILTIN_ALLOCA as u64 {
            if let Some(tlst) = arch.types() {
                let ws = arch
                    .manage()
                    .get_default_data_space()
                    .map(|s| s.get_word_size())
                    .unwrap_or(1);
                if let Ok(ptr) = tlst
                    .get_type_void()
                    .and_then(|v| tlst.get_type_pointer(out_size, v, ws))
                {
                    return ptr;
                }
            }
        }
        // (unlace vectorabi) a vector user-op's result is an Intel vector type.
        if let Some(t) = vector_userop_type_at(&arch, data, op, in0_off, out_size) {
            return t;
        }
        // (unlace javatry) the try dispatch and the exceptional-edge test are
        // `bool`; the caught exception has its catch clause's class type.
        if in0_off == crate::userop::BUILTIN_JAVA_TRY as u64
            || in0_off == crate::userop::BUILTIN_JAVA_THROWS as u64
        {
            if let Some(Ok(t)) = arch
                .types()
                .map(|t| t.get_base(out_size, type_metatype::TYPE_BOOL))
            {
                return t;
            }
        }
        if in0_off == crate::userop::BUILTIN_JAVA_CAUGHT as u64 {
            let handler = o
                .get_in(1)
                .and_then(|v| data.vbank().get(v))
                .map(|v| v.get_offset());
            let caught = handler.and_then(|h| {
                let table = crate::javatry::CatchTable::new(data)?;
                let model = arch.dex.as_ref()?;
                model
                    .java_type(&table.caught_descriptor(h), arch.types()?)
                    .ok()
            });
            if let Some(t) = caught {
                return t;
            }
        }
        // (unlace `bitidioms`, `helperroles`) `abs`/`labs` return a signed
        // integer, `strcpy` its `char *` destination.
        if in0_off == crate::userop::BUILTIN_ABS as u64
            || in0_off == crate::userop::BUILTIN_LABS as u64
        {
            if let Some(Ok(t)) = arch
                .types()
                .map(|t| t.get_base(out_size, type_metatype::TYPE_INT))
            {
                return t;
            }
        }
        // (unlace `vaarg`) an SSE-class `va_arg` reads a `double`.
        if in0_off == crate::userop::BUILTIN_VAARG as u64
            && out_size == 8
            && o.get_in(2)
                .and_then(|v| data.vbank().get(v))
                .is_some_and(|v| v.is_constant() && v.get_offset() == 1)
        {
            if let Some(Ok(t)) = arch
                .types()
                .map(|t| t.get_base(8, type_metatype::TYPE_FLOAT))
            {
                return t;
            }
        }
        if in0_off == crate::userop::BUILTIN_STRCPY as u64 {
            if let Some(tlst) = arch.types() {
                let ws = data
                    .get_arch()
                    .manage()
                    .get_default_data_space()
                    .map(|s| s.get_word_size())
                    .unwrap_or(1);
                if let Ok(ptr) = tlst
                    .get_type_char(1)
                    .and_then(|c| tlst.get_type_pointer(out_size, c, ws))
                {
                    return ptr;
                }
            }
        }
        // (unlace itaniumeh) the exceptional-edge test is a `bool`, the
        // exception a `void *` and the selector a signed integer.
        if in0_off == crate::userop::BUILTIN_EH_UNWINDING as u64 {
            if let Some(Ok(t)) = arch
                .types()
                .map(|t| t.get_base(out_size, type_metatype::TYPE_BOOL))
            {
                return t;
            }
        }
        if in0_off == crate::userop::BUILTIN_EH_SELECTOR as u64
            && let Some(Ok(t)) = arch
                .types()
                .map(|t| t.get_base(out_size, type_metatype::TYPE_INT))
        {
            return t;
        }
        if in0_off == crate::userop::BUILTIN_EH_EXCEPTION as u64
            && let Some(tlst) = arch.types()
        {
            let ws = data
                .get_arch()
                .manage()
                .get_default_data_space()
                .map(|s| s.get_word_size())
                .unwrap_or(1);
            if let Ok(ptr) = tlst
                .get_type_void()
                .and_then(|v| tlst.get_type_pointer(out_size, v, ws))
            {
                return ptr;
            }
        }
    }
    // C++ `TypeOpCpoolref::getOutputLocal` (typeop.cc:2453): the record's type,
    // or a boolean for an `instanceof` test.
    if o.code() == OpCode::CPUI_CPOOLREF {
        let refs: Vec<u64> = (1..o.num_input())
            .filter_map(|i| {
                o.get_in(i)
                    .and_then(|v| data.vbank().get(v))
                    .map(|v| v.get_offset())
            })
            .collect();
        if let Some(rec) = arch.cpool_record(&refs) {
            if rec.get_tag() == crate::cpool::cpool_tag::INSTANCE_OF {
                if let Some(Ok(ty)) = arch
                    .types()
                    .map(|t| t.get_base(1, type_metatype::TYPE_BOOL))
                {
                    return ty;
                }
            } else if let Some(ty) = rec.get_type() {
                return Rc::clone(ty);
            }
        }
    }
    // C++ `TypeOpCall::getOutputLocal` (typeop.cc:722) / `TypeOpCallind::getOutputLocal`
    // (typeop.cc:778): when the resolved `FuncCallSpecs` has a locked (committed)
    // output prototype, the call output Varnode's suggested type is the callee's
    // (non-VOID) return data-type.  This is what lets a deindirected CALL to a
    // known-proto function (e.g. `int4 *obtainPtr(char *)`) type its return Varnode
    // directly, so `ActionSetCasts` inserts no spurious `(int4 *)` cast.
    if o.code() == OpCode::CPUI_CALL || o.code() == OpCode::CPUI_CALLIND {
        if let Some(ct) = call_output_type_local(data, op, o.code()) {
            return ct;
        }
    }
    let info = type_op_info(o.code());
    match arch.types() {
        Some(tlst) => info
            .get_output_local(tlst, out_size)
            .unwrap_or_else(|_| Rc::new(Datatype::new(out_size, type_metatype::TYPE_UNKNOWN))),
        None => Rc::new(Datatype::new(out_size, type_metatype::TYPE_UNKNOWN)),
    }
}

/// The Intel vector type `vn` has when a vector user-op wrote it.
#[doc(hidden)]
pub fn vector_result_type(data: &Funcdata, vn: crate::context::VarnodeId) -> Option<Rc<Datatype>> {
    let mut vn = vn;
    for _ in 0..8 {
        let v = data.vbank().get(vn)?;
        let def = data.obank().get(v.get_def().filter(|_| v.is_written())?)?;
        match def.code() {
            OpCode::CPUI_COPY => vn = def.get_in(0)?,
            OpCode::CPUI_CALLOTHER => {
                let id = data.vbank().get(def.get_in(0)?)?.get_offset();
                return vector_userop_type_at(
                    data.get_arch(),
                    data,
                    v.get_def()?,
                    id,
                    v.get_size(),
                );
            }
            _ => return None,
        }
    }
    None
}

/// [`vector_userop_type`] for the user-op call `op`: a NEON op whose lane width is
/// its trailing element-size immediate reads that immediate.
fn vector_userop_type_at(
    arch: &crate::context::ArchHandle,
    data: &Funcdata,
    op: OpId,
    id: u64,
    size: int4,
) -> Option<Rc<Datatype>> {
    let uid = unlace_base::types::uint4::try_from(id).ok()?;
    let at = arch
        .vector_userops
        .binary_search_by_key(&uid, |(i, _)| *i)
        .ok()?;
    let kind = arch.vector_userops[at].1;
    let Some(elem) = crate::neonintrin::variable_elem(kind) else {
        return vector_userop_type(arch, id, size);
    };
    let o = data.obank().get(op)?;
    let last = data.vbank().get(o.get_in(o.num_input() - 1)?)?;
    if !last.is_constant() || last.get_size() != 1 {
        return None;
    }
    let lane = u32::try_from(last.get_offset()).ok()?;
    let name = crate::neonintrin::vector_type_name(size, elem, lane)?;
    arch.types()?
        .get_base_named(size, type_metatype::TYPE_UNKNOWN, &name)
        .ok()
}

/// The Intel vector type of a `size`-byte operand of the vector user-op `id`.
fn vector_userop_type(
    arch: &crate::context::ArchHandle,
    id: u64,
    size: int4,
) -> Option<Rc<Datatype>> {
    let id = unlace_base::types::uint4::try_from(id).ok()?;
    let at = arch
        .vector_userops
        .binary_search_by_key(&id, |(i, _)| *i)
        .ok()?;
    let kind = arch.vector_userops[at].1;
    crate::avxintrin::vector_type(arch.types()?, size, kind)
}

#[doc(hidden)]
pub fn input_type_local(data: &Funcdata, op: OpId, slot: int4) -> Rc<Datatype> {
    input_type_local_with(data, op, slot, true)
}

/// [`input_type_local`] without the (unlace `protoorder`) recovered-callee vote: the
/// type a call argument is REQUIRED to have, which is what a cast is measured
/// against.  A recovered type is a vote about the value, not a declaration the
/// value must be converted to, so it never emits a cast.
#[doc(hidden)]
pub fn declared_input_type_local(data: &Funcdata, op: OpId, slot: int4) -> Rc<Datatype> {
    input_type_local_with(data, op, slot, false)
}

fn input_type_local_with(data: &Funcdata, op: OpId, slot: int4, recovered: bool) -> Rc<Datatype> {
    let arch = Rc::clone(data.get_arch());
    let o = data.obank().get(op).expect("input_type_local: stale op");
    let opcode = o.code();
    let in_size = o
        .get_in(slot)
        .and_then(|v| data.vbank().get(v))
        .map(|v| v.get_size())
        .unwrap_or(1);

    // C++ `TypeOpCall::getInputLocal` (typeop.cc:689) / `TypeOpCallind` (typeop.cc:763):
    // for a slot>0 whose in(0) is an fspec (CALL) / code-pointer (CALLIND) reference
    // with a recovered prototype, the suggested input type is the *callee's* locked
    // parameter type.  This is what flows a typed call argument (e.g. a `mystruct *`)
    // back onto the argument Varnode so the stack-frame member access is recovered.
    if (opcode == OpCode::CPUI_CALL || opcode == OpCode::CPUI_CALLIND) && slot > 0 {
        if let Some(ct) = call_input_type_local(data, op, slot, opcode, recovered) {
            return ct;
        }
    }

    // (unlace vectorabi) a vector user-op's vector operands are Intel vector types.
    if opcode == OpCode::CPUI_CALLOTHER && slot > 0 {
        let id = o
            .get_in(0)
            .and_then(|v| data.vbank().get(v))
            .map(|v| v.get_offset())
            .unwrap_or(0);
        if let Some(t) = vector_userop_type_at(&arch, data, op, id, in_size) {
            return t;
        }
    }

    if opcode == OpCode::CPUI_CALLOTHER {
        if let Some(ty) = crate::octeoneffects::input_type(data, op, slot) {
            return ty;
        }
        if let Some(ty) = crate::atomics::input_type(data, op, slot) {
            return ty;
        }
        if let Some(ty) = crate::roundingops::input_type(data, op, slot) {
            return ty;
        }
        if let Some(ty) = crate::repstring::input_type(data, op, slot) {
            return ty;
        }
    }

    // (unlace strlenscan) `DatatypeUserOp::getInputLocal` for the `strlen` builtin:
    // its one argument is a `char *`.
    if opcode == OpCode::CPUI_CALLOTHER
        && slot == 1
        && o.get_in(0)
            .and_then(|v| data.vbank().get(v))
            .map(|v| v.get_offset())
            == Some(crate::userop::BUILTIN_STRLEN as u64)
    {
        if let Some(tlst) = arch.types() {
            let ws = data
                .get_arch()
                .manage()
                .get_default_data_space()
                .map(|s| s.get_word_size())
                .unwrap_or(1);
            if let Ok(ptr) = tlst
                .get_type_char(1)
                .and_then(|c| tlst.get_type_pointer(in_size, c, ws))
            {
                return ptr;
            }
        }
    }

    // (unlace varargsave) `va_start(__va_list_tag *)`.
    if opcode == OpCode::CPUI_CALLOTHER
        && slot == 1
        && in_size == 8
        && o.get_in(0)
            .and_then(|v| data.vbank().get(v))
            .map(|v| v.get_offset())
            == Some(crate::userop::BUILTIN_VA_START as u64)
    {
        if let Some(tlst) = arch.types() {
            for (name, size) in [("__va_list_tag", 24), ("__va_list", 32)] {
                if let Ok(ptr) = tlst
                    .get_type_struct(name)
                    .and_then(|t| tlst.get_type_pointer(8, t, 1))
                {
                    if ptr.get_ptr_to().is_some_and(|t| t.get_size() == size) {
                        return ptr;
                    }
                }
            }
        }
    }

    // (unlace `bitidioms`, `helperroles`) `abs`/`labs` take a signed integer,
    // `strcpy` two `char *`.
    if opcode == OpCode::CPUI_CALLOTHER && slot >= 1 {
        let id = o
            .get_in(0)
            .and_then(|v| data.vbank().get(v))
            .map(|v| v.get_offset());
        if let Some(tlst) = arch.types() {
            if (id == Some(crate::userop::BUILTIN_ABS as u64)
                || id == Some(crate::userop::BUILTIN_LABS as u64))
                && slot == 1
            {
                if let Ok(t) = tlst.get_base(in_size, type_metatype::TYPE_INT) {
                    return t;
                }
            }
            if id == Some(crate::userop::BUILTIN_STRCPY as u64) && slot <= 2 {
                let ws = data
                    .get_arch()
                    .manage()
                    .get_default_data_space()
                    .map(|s| s.get_word_size())
                    .unwrap_or(1);
                if let Ok(ptr) = tlst
                    .get_type_char(1)
                    .and_then(|c| tlst.get_type_pointer(in_size, c, ws))
                {
                    return ptr;
                }
            }
        }
    }

    // (unlace kernelbug) `__WARN(file,line)`: the file is a `char *`, the line an `int`.
    if opcode == OpCode::CPUI_CALLOTHER
        && slot > 0
        && o.get_in(0)
            .and_then(|v| data.vbank().get(v))
            .map(|v| v.get_offset())
            == Some(crate::userop::BUILTIN_KERNEL_WARN as u64)
    {
        if let Some(tlst) = arch.types() {
            if in_size == 4 {
                if let Ok(t) = tlst.get_base(4, type_metatype::TYPE_INT) {
                    return t;
                }
            }
            let ws = data
                .get_arch()
                .manage()
                .get_default_data_space()
                .map(|s| s.get_word_size())
                .unwrap_or(1);
            if let Ok(ptr) = tlst
                .get_type_char(1)
                .and_then(|c| tlst.get_type_pointer(in_size, c, ws))
            {
                return ptr;
            }
        }
    }

    // C++ `TypeOpCallind::getInputLocal(op, 0)` (typeop.cc:763-768): the first input
    // of a CALLIND is the *function pointer*, so its suggested type is `code *` —
    // `getTypePointer(in0Size, getTypeCode(), spc->getWordSize())`.  This is what
    // types the indirect-call target Varnode `code *v1` (and lets the printer render
    // `(*v1)(...)` rather than treating the funcptr as a plain integer).
    if opcode == OpCode::CPUI_CALLIND && slot == 0 {
        // (unlace `calltargettype`) A target cast at the call is cast to the
        // function-pointer type the call itself states.
        if let Some(ct) = data.unlace_call_target_type(op) {
            return ct;
        }
        if let Some(tlst) = arch.types() {
            let code = tlst
                .get_type_code()
                .unwrap_or_else(|_| Rc::new(Datatype::new(0, type_metatype::TYPE_CODE)));
            let spc = o.get_addr().get_space().cloned();
            let wordsize = spc.as_ref().map(|s| s.get_word_size()).unwrap_or(1);
            if let Ok(ptr) = tlst.get_type_pointer(in_size, code, wordsize) {
                return ptr;
            }
        }
    }

    // (unlace `swiftcall`) A Swift function's two-word result is its pair.
    if opcode == OpCode::CPUI_RETURN && slot >= 1 {
        if let Some(ct) = crate::swiftinfer::pair_return_type(data, op, slot) {
            return ct;
        }
    }

    // C++ `TypeOpReturn::getInputLocal` (typeop.cc:903-921): a RETURN's value input
    // (slot >= 1) suggests the *function's* recovered output data-type, so a
    // struct-by-value return (e.g. `foo` in rax / edx:eax) flows onto the returned
    // Varnode and `RulePieceStructure` can split the forming PIECE tree into per-field
    // writes.  The guard mirrors the C++ exactly: non-VOID output type whose size
    // equals the input Varnode's size; otherwise the generic `getBase(size, UNKNOWN)`
    // default applies (the `bb == null` arm is implicit — a live RETURN op always has
    // a parent).  The `has_store()` precondition is the W4 no-store STUB guard: an
    // unrecovered proto has no output type to consult (typeop.cc:917 `getFuncProto`
    // is always backed by a store in C++; the merged tree may lack one).
    if opcode == OpCode::CPUI_RETURN && slot >= 1 && data.get_func_proto().has_store() {
        if let Some(ct) = data.get_func_proto().get_output_type() {
            if ct.get_metatype() != type_metatype::TYPE_VOID && ct.get_size() == in_size {
                return Rc::clone(ct);
            }
        }
    }

    let info = type_op_info(opcode);
    match arch.types() {
        Some(tlst) => info
            .get_input_local(tlst, slot, in_size)
            .unwrap_or_else(|_| Rc::new(Datatype::new(in_size, type_metatype::TYPE_UNKNOWN))),
        None => Rc::new(Datatype::new(in_size, type_metatype::TYPE_UNKNOWN)),
    }
}

/// The callee-parameter arm of `TypeOpCall::getInputLocal` / `TypeOpCallind::getInputLocal`
/// (typeop.cc:689-721 / 763-810): resolve the `FuncCallSpecs` for the CALL op and,
/// if parameter `slot-1` is type-locked (or a known `this` pointer to a struct),
/// return that parameter's data-type when it fits the argument Varnode.  Otherwise,
/// when `recovered`, the (unlace `protoorder`) vote of a callee decompiled earlier in
/// the run ([`crate::protoorder::call_argument_vote`]).  `None` falls back to
/// the generic `getInputLocal`.
fn call_input_type_local(
    data: &Funcdata,
    op: OpId,
    slot: int4,
    opcode: OpCode,
    recovered: bool,
) -> Option<Rc<Datatype>> {
    // C++: vn = op->getIn(0); for a CALL the prototype lives only when in(0) is an
    // fspec reference (CALLIND always consults the recovered spec).
    if opcode == OpCode::CPUI_CALL {
        let in0 = data.obank().get(op)?.get_in(0)?;
        let is_fspec = data
            .vbank()
            .get(in0)
            .and_then(|v| v.get_addr().get_space())
            .map(|s| s.get_type() == unlace_base::space::spacetype::IPTR_FSPEC)
            .unwrap_or(false);
        if !is_fspec {
            return None;
        }
    }
    // Resolve the FuncCallSpecs for this op (the C++ `getFspecFromConst` pointer
    // cast; this port keys the `qlst` by the spec's CALL op).
    let n = data.num_calls();
    let mut fc = None;
    for i in 0..n {
        if data.get_call_specs(i).get_op() == op {
            fc = Some(data.get_call_specs(i));
            break;
        }
    }
    let fc = fc?;
    // (unlace `com`) A COM request's out-parameter holds the interface its
    // interface-id argument names.
    if let Some(ct) = crate::comtyping::out_param_type(data, op, fc, slot) {
        return Some(ct);
    }
    // param = fc->getParam(slot - 1)
    let proto = fc.proto();
    let arg_size = data
        .obank()
        .get(op)
        .and_then(|o| o.get_in(slot))
        .and_then(|v| data.vbank().get(v))
        .map(|v| v.get_size())?;
    if let Some(param) = proto.get_param(slot - 1) {
        if param.is_type_locked() {
            let ct = param.get_type()?;
            // (ct->metatype != VOID) && (ct->size <= op->getIn(slot)->size)
            if ct.get_metatype() != type_metatype::TYPE_VOID && ct.get_size() <= arg_size {
                // (unlace `libctypes`) A libc aggregate the caller reads past the end
                // of is a larger object that starts with one; the vote (never the
                // cast's required type) falls back to `void *`. See `unlace_libcfit`.
                if recovered && crate::libcfit::overruns(data, op, slot, ct) {
                    return crate::libcfit::width_stable_vote(data, ct);
                }
                return Some(Rc::clone(ct));
            }
            return None;
        } else if param.is_this_pointer() {
            // Known "this" pointer is effectively typelocked: a struct pointer flows.
            let ct = param.get_type()?;
            if ct.get_metatype() == type_metatype::TYPE_PTR
                && ct
                    .get_ptr_to()
                    .map(|p| p.get_metatype() == type_metatype::TYPE_STRUCT)
                    .unwrap_or(false)
            {
                return Some(Rc::clone(ct));
            }
            return None;
        }
    }
    let vararg = if recovered {
        crate::varargfloat::argument_vote(data, fc, op, slot)
    } else {
        crate::varargfloat::argument_requirement(data, fc, op, slot)
    };
    if vararg.is_some() {
        return vararg;
    }
    if !recovered {
        return crate::floatreg::argument_requirement(data, fc, op, slot);
    }
    if proto.is_input_locked() {
        return None;
    }
    crate::protoorder::call_argument_vote(data, op, fc, slot, arg_size)
        .or_else(|| crate::floatreg::argument_vote(data, fc, op, slot))
}

/// The locked-output arm of `TypeOpCall::getOutputLocal` (typeop.cc:722-738) /
/// `TypeOpCallind::getOutputLocal` (typeop.cc:778-791): resolve the `FuncCallSpecs`
/// for the CALL/CALLIND op and, if its output prototype is locked (committed) and
/// non-VOID, return that return data-type.  `None` falls back to the generic
/// size-only `getOutputLocal`.
fn call_output_type_local(data: &Funcdata, op: OpId, opcode: OpCode) -> Option<Rc<Datatype>> {
    // (unlace `sitetypelock`) A per-call-site locked output IS this call's stated
    // result type: report it here so the cast plane sees no mismatch with the
    // output Varnode the lock pinned (same size guard as the apply).
    if let Some(o) = data.obank().get(op) {
        if let Some(ct) = data.get_override().find_output_typelock(o.get_addr()) {
            let out_size = o
                .get_out()
                .and_then(|v| data.vbank().get(v))
                .map(|v| v.get_size());
            if out_size == Some(ct.get_size()) {
                return Some(Rc::clone(ct));
            }
        }
    }
    // C++ `TypeOpCall`: the prototype lives only when in(0) is an fspec reference;
    // a CALL whose in(0) is not an fspec falls through to the default.
    if opcode == OpCode::CPUI_CALL {
        let in0 = data.obank().get(op)?.get_in(0)?;
        let is_fspec = data
            .vbank()
            .get(in0)
            .and_then(|v| v.get_addr().get_space())
            .map(|s| s.get_type() == unlace_base::space::spacetype::IPTR_FSPEC)
            .unwrap_or(false);
        if !is_fspec {
            return None;
        }
    }
    // Resolve the FuncCallSpecs for this op (C++ `getFspecFromConst` for CALL /
    // `getCallSpecs` for CALLIND; this port keys `qlst` by the spec's CALL op).
    let n = data.num_calls();
    let mut fc = None;
    for i in 0..n {
        if data.get_call_specs(i).get_op() == op {
            fc = Some(data.get_call_specs(i));
            break;
        }
    }
    let fc = fc?;
    // (unlace `objcrettype`) A message send's result is its receiver's class
    // before it is the stub's `id`.
    if let Some(ct) = crate::objcrettype::instancetype(data, op, fc) {
        return Some(ct);
    }
    // (unlace `xnutables`) A typed allocation returns its view's struct.
    if let Some(ct) = crate::kalloctype::allocated_type(data, op, fc) {
        return Some(ct);
    }
    let proto = fc.proto();
    if !proto.is_output_locked() {
        let size = data
            .obank()
            .get(op)?
            .get_out()
            .and_then(|v| data.vbank().get(v))
            .map(|v| v.get_size())?;
        return crate::passthrough::tail_return_type(data, op, size)
            .or_else(|| crate::slotargs::declared_result_type(data, op, fc, size))
            .or_else(|| crate::callrettype::stated_return_type(data, op, fc))
            .or_else(|| crate::swiftinfer::pair_output_type(data, op))
            .or_else(|| crate::narrowret::stated_type(data, op, fc, size))
            .or_else(|| crate::floatreg::jump_result_type(data, op, size));
    }
    let ct = proto.get_output_type()?;
    if ct.get_metatype() == type_metatype::TYPE_VOID {
        return None;
    }
    Some(Rc::clone(ct))
}

/// C++ `Varnode::getLocalType(bool &blockup)` (varnode.cc:919).  Determine an
/// initial Datatype from the defining op's output and the reading ops' input
/// requirements, picking the most-specific (`typeOrder`).  Returns the local type
/// and whether up-propagation should be blocked (`def->stopsTypePropagation()`).
fn get_local_type(data: &Funcdata, vn: VarnodeId) -> (Rc<Datatype>, bool) {
    let v = data.vbank().get(vn).expect("get_local_type: stale vn");
    if v.is_type_lock() {
        return (Rc::clone(v.get_type()), false);
    }
    let mut ct: Option<Rc<Datatype>> = None;
    let mut blockup = false;
    let weighted = data
        .get_arch()
        .unlace_options
        .get::<crate::lvarvote::LvarVote>()
        .0;
    let mut votes: Vec<Rc<Datatype>> = Vec::new();
    if let Some(def) = v.get_def() {
        ct = Some(output_type_local(data, def));
        if weighted {
            votes.extend(ct.clone());
        }
        let stops = data
            .obank()
            .get(def)
            .map(|o| o.stops_type_propagation())
            .unwrap_or(false);
        if stops {
            blockup = true;
            return (ct.unwrap(), blockup);
        }
    }
    // for each reading op: newct = op->inputTypeLocal(slot); pick the more specific.
    let descend: Vec<OpId> = v.descend_iter().collect();
    for op in descend {
        let slot = data.obank().get(op).map(|o| o.get_slot(vn)).unwrap_or(0);
        let newct = input_type_local(data, op, slot);
        if weighted {
            votes.push(Rc::clone(&newct));
        }
        ct = Some(match ct {
            None => newct,
            Some(cur) => {
                if 0 > newct.type_order(&cur).unwrap_or(0) {
                    newct
                } else {
                    cur
                }
            }
        });
    }
    if weighted {
        if let Some(best) = crate::lvarvote::weighted_pick(&votes) {
            ct = Some(best);
        }
    }
    // C++ throws on a null local type; a live Varnode always has a def or a
    // descendant, but guard with a size-correct UNKNOWN to avoid a panic.
    let ct =
        ct.unwrap_or_else(|| Rc::new(Datatype::new(v.get_size(), type_metatype::TYPE_UNKNOWN)));
    (ct, blockup)
}

/// C++ `ActionInferTypes::buildLocaltypes` (coreaction.cc:5262): seed each live
/// Varnode's temp type from local info.  (The type-locked SymbolEntry piece path
/// is a W4 surface — absent symbols fall through to the plain `getLocalType`.)
fn build_localtypes(data: &mut Funcdata) {
    let order: Vec<VarnodeId> = data.vbank().iter_loc().collect();
    let mut elem_cache = crate::elemptr::Cache::default();
    crate::armfloatreturn::unlock_unspelled(data);
    let float_bits = crate::floatbits::Plan::of(data);
    if float_bits.types_a_return() {
        data.unlace_note_float_bits_return();
    }
    if data
        .get_arch()
        .unlace_options
        .get::<crate::elemptr::ElemPtr>()
        .0
    {
        data.unlace_elemptr_begin_pass();
    }
    for vn in order {
        let (vn_addr, vn_size, vn_type_lock);
        {
            let v = match data.vbank().get(vn) {
                Some(v) => v,
                None => continue,
            };
            if v.is_annotation() {
                continue;
            }
            if !v.is_written() && v.has_no_descend() {
                continue;
            }
            vn_addr = v.get_addr().clone();
            vn_size = v.get_size();
            vn_type_lock = v.is_type_lock();
        }
        let vn_usepoint = data.vn_use_point(vn);
        // C++ buildLocaltypes type-locked-symbol seed (coreaction.cc:5275-5281):
        // The seed is consulted only when the Varnode is itself not type-locked
        // (a type-locked Varnode already carries its own definitive type via the
        // getLocalType `isTypeLock` fast-path).
        let seed = if !vn_type_lock {
            data.get_scope_local().and_then(|lm| {
                data.get_arch()
                    .types()
                    .and_then(|t| lm.build_localtype_seed_at(&vn_addr, vn_size, &vn_usepoint, t))
            })
        } else {
            None
        };
        let from_seed = seed.is_some();
        let (ct, needs_block) = match seed {
            // getExactPiece resolved a non-UNKNOWN piece: adopt it (no up-block;
            // the C++ seed arm leaves `needsBlock` false).
            Some(ct) => (ct, false),
            // No type-locked cover, or the piece floated: fall back to getLocalType.
            None => get_local_type(data, vn),
        };
        // (unlace `calleevote`) The type every caller passes for this input, where
        // the fold says no more than "a pointer-width value".  See `unlace_calleevote`.
        let ct = if from_seed {
            ct
        } else {
            crate::calleevote::input_vote(data, vn, &ct).unwrap_or(ct)
        };
        // (unlace `elfmain`) An executable's own `main` gives the runtime arguments
        // its body reads their runtime types, unlocked. See `unlace_elfmaindecl`.
        let ct = if from_seed {
            ct
        } else {
            crate::elfmaindecl::input_type(data, vn).unwrap_or(ct)
        };
        // (unlace `swiftcall`) A hinted input takes its hinted type, unlocked.
        let ct = if from_seed {
            ct
        } else {
            crate::inputhints::input_type(data, vn).unwrap_or(ct)
        };
        // (unlace `regnarrow`) A narrowed register value nothing else types is unsigned.
        let ct = if from_seed {
            ct
        } else {
            crate::regnarrow::unsigned_vote(data, vn, &ct).unwrap_or(ct)
        };
        // (unlace `narrowargs callers`) A parameter its callers narrow takes their extension's type.
        let ct = if from_seed {
            ct
        } else {
            crate::callerargs::input_vote(data, vn, &ct).unwrap_or(ct)
        };
        // (unlace `valuewitness`) The word before Swift type metadata, read at
        // a table offset, is the value witness table. See `unlace_valuewitness`.
        let ct = if from_seed {
            ct
        } else {
            crate::valuewitness::output_vote(data, vn).unwrap_or(ct)
        };
        // (unlace `ptrfromuse`) A function input whose only memory role is to be a
        // LOAD/STORE base has no pointer candidate in the fold above, because
        // `TypeOpIntAdd` votes `int<N>` for it and refuses to carry the pointer
        // back from the `p + k` result.  Add that candidate as one more vote --
        // folded by `type_order`, never as a replacement, so a callee-derived
        // `FILE *` keeps its place.  See `unlace_ptrfromuse`.
        let ct = {
            let mode = data
                .get_arch()
                .unlace_options
                .get::<crate::ptrfromuse::PtrFromUseMode>();
            // A vote that is ALREADY a pointer came from real evidence (a callee's
            // locked prototype, DWARF, an offset-0 dereference), and it names a
            // pointee this rule cannot know.  Use evidence adds nothing there, and
            // `type_order` would prefer `undefined1 *` to the `void *` that `free`'s
            // own prototype supplies -- so the rule only speaks where the parameter
            // has no pointer type at all.
            if ct.get_metatype() == type_metatype::TYPE_PTR {
                ct
            } else {
                match crate::ptrfromuse::pointer_from_use(data, vn, mode) {
                    Some(cand) if crate::ptrfromuse::folds_over(&cand, &ct) => cand,
                    _ => ct,
                }
            }
        };
        // (unlace `ptrfromlocal`) The same use evidence for a pointer-width value a call returns
        // or a load reads, over an unknown or integer vote.  See `unlace_ptrfromuse`.
        let ct = if from_seed
            || !matches!(
                ct.get_metatype(),
                type_metatype::TYPE_UNKNOWN | type_metatype::TYPE_INT | type_metatype::TYPE_UINT
            )
            || !data
                .get_arch()
                .unlace_options
                .get::<crate::ptrfromuse::PtrFromLocal>()
                .0
        {
            ct
        } else {
            match crate::ptrfromuse::pointer_from_local_use(data, vn) {
                Some(cand) if crate::ptrfromuse::folds_over(&cand, &ct) => cand,
                _ => ct,
            }
        };
        // (unlace `charptr`) A pointer the program only ever uses on characters is a
        // `char *`.  The evidence -- a callee's DECLARED `char *` parameter, a
        // byte-only dereference, a string constant -- is collected by an explicit
        // walk rather than left to `propagateTypeEdge`, which will not carry a
        // pointer back over the hops an `-O0` spill puts between the parameter and
        // the call.  Folded by `type_order`, and allowed to refine only a pointer
        // vote that points at nothing (`void *`, `undefined1 *`).  See `unlace_charptr`.
        let ct = {
            let on = data
                .get_arch()
                .unlace_options
                .get::<crate::charptr::CharPtr>()
                .0;
            if from_seed {
                ct
            } else {
                match crate::charptr::char_pointer_from_evidence(data, vn, &ct, on) {
                    Some(cand)
                        if ct.get_metatype() == type_metatype::TYPE_PTR
                            || crate::charptr::folds_over(&cand, &ct) =>
                    {
                        cand
                    }
                    _ => ct,
                }
            }
        };
        // (unlace `elemptr`) A pointer-width value whose every access is an element
        // of one width through an index the program computes is a pointer to that
        // element.  Replaces only an integer vote or a pointer at nothing; never a
        // seeded, locked or named type.  See `unlace_elemptr`.
        let ct = if from_seed {
            ct
        } else {
            crate::elemptr::element_pointer(data, vn, &ct, &mut elem_cache).unwrap_or(ct)
        };
        // (unlace `boolbyte`) A byte whose every read is a truth test has no `bool`
        // candidate in the fold above: `TYPE_BOOL` is only ever an op's OUTPUT type,
        // and `TypeOpEqual::getInputLocal` votes `getBase(1, TYPE_INT)` -- the ASCII
        // `char` -- for the value being compared.  Add that candidate as one more
        // vote, folded by `type_order` (`SUB_BOOL` 10 beats `SUB_INT_CHAR` 19 and
        // `SUB_UINT_PLAIN` 16) so a locked callee parameter type still wins.  See
        // `unlace_boolbyte`.
        let ct = if data
            .get_arch()
            .unlace_options
            .get::<crate::boolbyte::BoolByte>()
            .0
            && vn_size == 1
            && !from_seed
        {
            match crate::boolbyte::truth_value_type(data, vn, &ct) {
                Some(cand) => cand,
                None => ct,
            }
        } else {
            ct
        };
        let ct = if from_seed {
            ct
        } else {
            crate::floatreg::float_register_vote(data, vn, &ct)
                .or_else(|| crate::floatreg::float_input_vote(data, vn, &ct))
                .or_else(|| float_bits.vote(data, vn, &ct))
                .unwrap_or(ct)
        };
        let ct = if from_seed {
            ct
        } else {
            crate::zextreturn::unsigned_return_vote(data, vn, &ct).unwrap_or(ct)
        };
        let v = data
            .vbank_mut()
            .get_mut(vn)
            .expect("build_localtypes: stale vn");
        if needs_block {
            v.set_stop_up_propagation();
        }
        v.set_temp_type(ct);
    }
    // (unlace `elemptr`) A candidate an earlier pass typed is now the index of
    // another base: the IR that pass built around it stays, so start over
    // without it.
    if data.unlace_elemptr_take_disputed() {
        data.set_restart_pending(true);
    }
}

/// C++ `ActionInferTypes::writeBack` (coreaction.cc:5297): copy each temp type to
/// the permanent type via `updateType`, dirtying the owning high.  Returns whether
/// any Varnode's data-type changed.
fn write_back(data: &mut Funcdata) -> bool {
    let mut change = false;
    let order: Vec<VarnodeId> = data.vbank().iter_loc().collect();
    for vn in order {
        let ct = {
            let v = match data.vbank().get(vn) {
                Some(v) => v,
                None => continue,
            };
            if v.is_annotation() {
                continue;
            }
            if !v.is_written() && v.has_no_descend() {
                continue;
            }
            match v.get_temp_type() {
                Some(ct) => Rc::clone(ct),
                None => continue,
            }
        };
        let high = data.vbank().get(vn).and_then(|v| v.get_high());
        let changed = data
            .vbank_mut()
            .get_mut(vn)
            .map(|v| v.update_type(ct))
            .unwrap_or(false);
        if changed {
            // C++ `Varnode::updateType` calls `high->typeDirty()`; the merged-tree
            // setter cannot reach the high bank, so dirty it here.
            if let Some(h) = high {
                if let Some(hh) = data.high_bank_mut().get_mut(h) {
                    hh.type_dirty();
                }
            }
            change = true;
        }
    }
    change
}

/// The "incoming" Varnode of a propagation edge: `inslot==-1` => op output, else
/// the op's input at `inslot`.
fn edge_in_vn(data: &Funcdata, op: OpId, inslot: int4) -> Option<VarnodeId> {
    let o = data.obank().get(op)?;
    if inslot == -1 {
        o.get_out()
    } else {
        o.get_in(inslot)
    }
}

/// C++ `ActionInferTypes::propagateTypeEdge` (coreaction.cc:5328): try to push the
/// incoming Varnode's temp type across one PcodeOp edge onto the outgoing Varnode.
/// Returns whether the outgoing temp type was updated *and* the outgoing Varnode is
/// not yet marked (the propagateOneType DFS guard).
fn propagate_type_edge(data: &mut Funcdata, op: OpId, inslot: int4, outslot: int4) -> bool {
    if inslot == outslot {
        return false; // don't backtrack
    }
    let invn = match edge_in_vn(data, op, inslot) {
        Some(v) => v,
        None => return false,
    };
    let mut alttype = match data
        .vbank()
        .get(invn)
        .and_then(|v| v.get_temp_type().cloned())
    {
        Some(t) => t,
        None => return false,
    };
    let backing_store =
        crate::stackwordtypes::backing_store(data, op, inslot, outslot, invn, &alttype);
    // (C++ coreaction.cc:5335-5341)  Always give the incoming union/relative-pointer
    // a chance to resolve so the field choice is cached for later facing lookups,
    // but only adopt the resolved type for the propagation when `op` is not a MULTIEQUAL
    // marker (a marker keeps the unresolved union flowing through both edges).
    if alttype.needs_resolution() {
        let res_type = match data.resolve_in_flow(&alttype, op, inslot) {
            Ok(t) => t,
            Err(_) => Rc::clone(&alttype),
        };
        let is_marker = data.obank().get(op).map(|o| o.is_marker()).unwrap_or(false);
        if !is_marker {
            alttype = res_type;
        }
    }
    if backing_store {
        alttype = crate::stackwordtypes::stored_word(data, invn, alttype);
    }

    // Resolve the outgoing Varnode.
    let outvn = if outslot < 0 {
        match data.obank().get(op).and_then(|o| o.get_out()) {
            Some(v) => v,
            None => return false,
        }
    } else {
        match data.obank().get(op).and_then(|o| o.get_in(outslot)) {
            Some(v) => v,
            None => return false,
        }
    };

    {
        let ov = match data.vbank().get(outvn) {
            Some(v) => v,
            None => return false,
        };
        if outslot >= 0 && ov.is_annotation() {
            return false;
        }
        if ov.is_type_lock() {
            return false; // Can't propagate through typelock
        }
        if ov.stops_up_propagation() && outslot >= 0 {
            return false; // Propagation is blocked
        }
        // alttype BOOL: only propagate if output can take only boolean values.
        if alttype.get_metatype() == type_metatype::TYPE_BOOL && ov.get_nz_mask() > 1 {
            return false;
        }
    }

    let newtype = match propagate_type(data, alttype, op, invn, outvn, inslot, outslot) {
        Some(t) => t,
        None => return false,
    };
    // (unlace `ptrdepthcap`) Refuse a candidate that keeps deepening an already
    // unsatisfiable pointer equation -- see `unlace_ptrdepth`.
    let newtype = if data
        .get_arch()
        .unlace_options
        .get::<crate::coreaction_infertypes::Ptrdepthcap>()
        .0
    {
        match data
            .get_arch()
            .types()
            .and_then(|tlst| crate::ptrdepth::cap_pointer_depth(tlst, &newtype))
        {
            Some(capped) => capped,
            None => newtype,
        }
    } else {
        newtype
    };

    let cur = match data
        .vbank()
        .get(outvn)
        .and_then(|v| v.get_temp_type().cloned())
    {
        Some(t) => t,
        None => return false,
    };
    crate::charbyte::note_edge(data, op, inslot, outslot, invn, outvn, &newtype, &cur); // (unlace `charbyte`)
    // (unlace `elemptr`) A value stored through a pointer `elemptr` typed keeps
    // its own sign; see `elemptr::keeps_stored_sign`.
    if crate::elemptr::keeps_stored_sign(data, op, inslot, outslot, &newtype, &cur) {
        return false;
    }
    // (unlace `elfmain`) A runtime argument of an executable's own `main` keeps its
    // runtime type, without the type lock that would make it a realistic input
    // to the next call. See `unlace_elfmaindecl`.
    if crate::elfmaindecl::took_runtime_type(data, outvn, &cur) {
        return false;
    }
    if crate::inputhints::took_hint_type(data, outvn, &cur) {
        return false;
    }
    if 0 > newtype.type_order(&cur).unwrap_or(0) {
        // (unlace `libctypes`) A libc aggregate pointer is not carried onto a Varnode
        // the function reads past that aggregate's end. See `unlace_libcfit`.
        if crate::libcfit::refuses(data, outvn, &newtype) {
            return false;
        }
        let is_mark = data.vbank().get(outvn).map(|v| v.is_mark()).unwrap_or(true);
        if let Some(v) = data.vbank_mut().get_mut(outvn) {
            v.set_temp_type(newtype);
        }
        return !is_mark;
    }
    false
}

/// Build a spacebase code-pointer type `getTypePointer(altSize, getBase(1,UNKNOWN),
/// defaultDataSpace.wordSize)` — the shared `invn->isSpacebase()` arm of COPY /
/// MULTIEQUAL / INDIRECT / compare propagation.
fn spacebase_pointer(data: &Funcdata, alt_size: int4) -> Option<Rc<Datatype>> {
    let arch = Rc::clone(data.get_arch());
    let tlst = arch.types()?;
    let spc = Rc::clone(arch.manage().get_default_data_space()?);
    let base = tlst.get_base(1, type_metatype::TYPE_UNKNOWN).ok()?;
    tlst.get_type_pointer(alt_size, base, spc.get_word_size())
        .ok()
}

/// C++ `getSpaceFromConst(op->getIn(0))`: the LOAD/STORE/SEGMENT space operand is
/// a constant whose offset is the address-space manager index (LOSS-015 model).
fn space_from_const(data: &Funcdata, op: OpId, slot: int4) -> Option<Rc<AddrSpace>> {
    let cvn = data.obank().get(op)?.get_in(slot)?;
    let idx = data.vbank().get(cvn)?.get_offset();
    let manage = data.get_arch().manage();
    if idx >= manage.num_spaces() as u64 {
        return None;
    }
    // cast: `idx` is a space index < num_spaces() (guarded above); `as i32` matches
    // C++ `getSpace(int4)` taking the constant Varnode offset as a small index.
    manage.get_space(idx as i32).cloned()
}

/// C++ `TypeOp::propagateToPointer` (typeop.cc:187): propagate a dereferenced
/// data-type up to its pointer data-type through a LOAD/STORE (depth at most 1).
fn propagate_to_pointer(
    tlst: &dyn TypeFactory,
    dt: Rc<Datatype>,
    sz: int4,
    wordsz: int4,
) -> Option<Rc<Datatype>> {
    let meta = dt.get_metatype();
    let dt = if meta == type_metatype::TYPE_PTR {
        // Make sure that at least we return a pointer to something the size of -pt-
        tlst.get_base(dt.get_size(), type_metatype::TYPE_UNKNOWN)
            .ok()?
    } else if meta == type_metatype::TYPE_PARTIALSTRUCT {
        dt.get_component_for_ptr()?
    } else {
        dt
    };
    tlst.get_type_pointer(sz, dt, wordsz as u32).ok()
}

/// C++ `TypeOp::propagateFromPointer` (typeop.cc:207): propagate a pointer
/// data-type down to its element data-type through a LOAD/STORE.
fn propagate_from_pointer(
    tlst: &dyn TypeFactory,
    dt: Rc<Datatype>,
    sz: int4,
) -> Option<Rc<Datatype>> {
    if dt.get_metatype() != type_metatype::TYPE_PTR {
        return None;
    }
    let ptrto = dt.get_ptr_to()?;
    if ptrto.is_variable_length() {
        return None;
    }
    if ptrto.get_size() == sz {
        return Some(crate::typequal::unqualified_value(ptrto));
    }
    // Size mismatch: only propagate (partial) enumerations.
    if dt.is_pointer_rel() {
        let parent = dt.get_rel_parent()?;
        let byte_off = dt.get_byte_offset()?;
        let res = tlst.get_exact_piece(parent, byte_off, sz).ok()?;
        if let Some(res) = res {
            if res.is_enum_type() {
                return Some(res);
            }
        }
    } else if ptrto.is_enum_type() && !ptrto.has_stripped() {
        return tlst.get_type_partial_enum(ptrto, 0, sz).ok();
    }
    None
}

/// C++ `TypeOp::floatSignManipulation` (typeop.cc:154): return CPUI_FLOAT_NEG if
/// the op flips the sign bit, CPUI_FLOAT_ABS if it zeroes it out, else CPUI_MAX.
fn float_sign_manipulation(data: &Funcdata, op: OpId) -> OpCode {
    let o = match data.obank().get(op) {
        Some(o) => o,
        None => return OpCode::CPUI_MAX,
    };
    let opc = o.code();
    let cvn = match o.get_in(1) {
        Some(v) => v,
        None => return OpCode::CPUI_MAX,
    };
    let (is_const, off, size) = match data.vbank().get(cvn) {
        Some(v) => (v.is_constant(), v.get_offset(), v.get_size()),
        None => return OpCode::CPUI_MAX,
    };
    if !is_const {
        return OpCode::CPUI_MAX;
    }
    if opc == OpCode::CPUI_INT_AND {
        let val = calc_mask(size) >> 1;
        if val == off {
            return OpCode::CPUI_FLOAT_ABS;
        }
    } else if opc == OpCode::CPUI_INT_XOR {
        let mask = calc_mask(size);
        let val = mask ^ (mask >> 1);
        if val == off {
            return OpCode::CPUI_FLOAT_NEG;
        }
    }
    OpCode::CPUI_MAX
}

/// The `nearPointerSize`/`farPointerSize` the PIECE/SUBPIECE constructors compute
/// (`farPointerSize = getSizeOfAltPointer(); if (farPointerSize != 0) nearPointerSize
/// = getSizeOfPointer()`).
fn piece_pointer_sizes(data: &Funcdata) -> (int4, int4) {
    let arch = Rc::clone(data.get_arch());
    let tlst = match arch.types() {
        Some(t) => t,
        None => return (0, 0),
    };
    let far = tlst.get_size_of_alt_pointer();
    let near = if far != 0 {
        tlst.get_size_of_pointer()
    } else {
        0
    };
    (near, far)
}

/// Public wrapper around [`propagate_type`] (the per-op-code
/// `TypeOp::propagateType` dispatch) for in-crate callers that need to propagate a
/// type along a single edge — notably `AddTreeState::assignPropagatedType`
/// (`op->getOpcode()->propagateType(inType, op, vn, out, 0, -1)`).
// (unlace) verifier test seam: widened `pub(crate)` -> `pub` so the
// `verify_w10_charptr_signedness` adversarial integration test can drive the
// `INT_SLESS`/`INT_SLESSEQUAL` signedness gate directly.  No behaviour change.
#[allow(clippy::too_many_arguments)]
pub fn propagate_type_pub(
    data: &mut Funcdata,
    alttype: Rc<Datatype>,
    op: OpId,
    invn: VarnodeId,
    outvn: VarnodeId,
    inslot: int4,
    outslot: int4,
) -> Option<Rc<Datatype>> {
    propagate_type(data, alttype, op, invn, outvn, inslot, outslot)
}

/// C++ per-op-code `TypeOp::propagateType` dispatch (typeop.cc).  Returns the
/// outgoing data-type, or `None` (no propagation).
fn propagate_type(
    data: &mut Funcdata,
    alttype: Rc<Datatype>,
    op: OpId,
    invn: VarnodeId,
    outvn: VarnodeId,
    inslot: int4,
    outslot: int4,
) -> Option<Rc<Datatype>> {
    let code = data.obank().get(op)?.code();
    let invn_is_spacebase = data
        .vbank()
        .get(invn)
        .map(|v| v.is_spacebase())
        .unwrap_or(false);
    match code {
        // TypeOpCopy / TypeOpMulti / TypeOpIndirect: input <-> output, spacebase
        // produces a code pointer (typeop.cc:412, 1953, 2007).
        OpCode::CPUI_COPY | OpCode::CPUI_MULTIEQUAL => {
            if inslot != -1 && outslot != -1 {
                return None; // Must propagate input <-> output
            }
            if invn_is_spacebase {
                spacebase_pointer(data, alttype.get_size())
            } else {
                Some(crate::typequal::unqualified_value(alttype))
            }
        }
        OpCode::CPUI_INDIRECT => {
            let is_creation = data
                .obank()
                .get(op)
                .map(|o| o.is_indirect_creation())
                .unwrap_or(false);
            if is_creation {
                return None;
            }
            if inslot == 1 || outslot == 1 {
                return None;
            }
            if inslot != -1 && outslot != -1 {
                return None;
            }
            if invn_is_spacebase {
                spacebase_pointer(data, alttype.get_size())
            } else {
                Some(crate::typequal::unqualified_value(alttype))
            }
        }
        // TypeOpEqual / TypeOpNotEqual / TypeOpIntLess / TypeOpIntLessEqual all
        // dispatch to `propagateAcrossCompare` (typeop.cc:947, 1011, 1087, 1111).
        // This is the generic comparison arm: identity propagation between the two
        // inputs, with the spacebase / mid-struct-relptr special-cases.
        OpCode::CPUI_INT_EQUAL
        | OpCode::CPUI_INT_NOTEQUAL
        | OpCode::CPUI_INT_LESS
        | OpCode::CPUI_INT_LESSEQUAL => {
            propagate_across_compare(data, alttype, invn_is_spacebase, outvn, inslot, outslot)
        }
        // TypeOpIntSless / TypeOpIntSlessEqual override `propagateType` with a
        // STRICTER arm (typeop.cc:1035-1041, 1061-1067): the propagation is across
        // the two inputs (in/out both != -1), and it ONLY propagates a *signed*
        // (TYPE_INT) data-type — "Only propagate signed things".  A `char`
        // (TYPE_INT, size 1) read by a signed compare therefore flows to the other
        // operand, while a `uint1`/pointer does not.  There is NO spacebase /
        // mid-struct-relptr handling on this arm (the C++ override does not call
        // propagateAcrossCompare).
        OpCode::CPUI_INT_SLESS | OpCode::CPUI_INT_SLESSEQUAL => {
            if inslot == -1 || outslot == -1 {
                return None; // Must propagate input <-> input
            }
            if alttype.get_metatype() != type_metatype::TYPE_INT {
                return None; // Only propagate signed things
            }
            Some(alttype)
        }
        // TypeOpIntAdd: pointer add / constant-folded int (typeop.cc:1183).
        OpCode::CPUI_INT_ADD => propagate_int_add(data, alttype, op, outvn, inslot, outslot),
        // TypeOpLoad / TypeOpStore: propagate the pointed-to type through the
        // pointer's `*T` <-> the loaded/stored `T` (typeop.cc:488, 559).
        OpCode::CPUI_LOAD => propagate_load_store(
            data,
            alttype,
            op,
            invn_is_spacebase,
            outvn,
            inslot,
            outslot,
            true,
        ),
        OpCode::CPUI_STORE => propagate_load_store(
            data,
            alttype,
            op,
            invn_is_spacebase,
            outvn,
            inslot,
            outslot,
            false,
        ),
        // TypeOpIntXor / TypeOpIntAnd: propagate enums + float sign-manipulation
        // (typeop.cc:1424, 1457).
        OpCode::CPUI_INT_XOR | OpCode::CPUI_INT_AND => {
            if !alttype.is_enum_type() {
                if alttype.get_metatype() != type_metatype::TYPE_FLOAT {
                    return None;
                }
                if float_sign_manipulation(data, op) == OpCode::CPUI_MAX {
                    return None;
                }
            }
            if invn_is_spacebase {
                spacebase_pointer(data, alttype.get_size())
            } else {
                Some(alttype)
            }
        }
        // TypeOpIntOr: only propagate enums (typeop.cc:1490).
        OpCode::CPUI_INT_OR => {
            if !alttype.is_enum_type() {
                return None;
            }
            if invn_is_spacebase {
                spacebase_pointer(data, alttype.get_size())
            } else {
                Some(alttype)
            }
        }
        // TypeOpPiece / TypeOpSubpiece: composite/truncation arms (typeop.cc:2076,
        // 2163).
        OpCode::CPUI_PIECE => propagate_piece(data, alttype, op, invn, outvn, inslot, outslot),
        OpCode::CPUI_SUBPIECE => {
            propagate_subpiece(data, alttype, op, invn, outvn, inslot, outslot)
        }
        // TypeOpPtradd / TypeOpPtrsub: array/struct member pointer arithmetic
        // (typeop.cc:2270, 2368).
        OpCode::CPUI_PTRADD => {
            if inslot == 2 || outslot == 2 {
                return None; // Don't propagate along this edge
            }
            if inslot != -1 && outslot != -1 {
                return None; // Must propagate input <-> output
            }
            if alttype.get_metatype() != type_metatype::TYPE_PTR {
                return None;
            }
            if inslot == -1 {
                None // Don't propagate pointer types this direction
            } else {
                propagate_add_in2_out(data, alttype, op, inslot)
            }
        }
        OpCode::CPUI_PTRSUB => {
            if inslot != -1 && outslot != -1 {
                return None; // Must propagate input <-> output
            }
            if alttype.get_metatype() != type_metatype::TYPE_PTR {
                return None;
            }
            if inslot == -1 {
                None // Don't propagate pointer types this direction
            } else {
                propagate_add_in2_out(data, alttype, op, inslot)
            }
        }
        // TypeOpSegment: propagate slot2 <-> output, resized (typeop.cc:2433).
        OpCode::CPUI_SEGMENTOP => {
            if inslot == 0 || inslot == 1 || outslot == 0 || outslot == 1 {
                return None;
            }
            if invn_is_spacebase {
                return None;
            }
            if alttype.get_metatype() != type_metatype::TYPE_PTR {
                return None;
            }
            let out_size = data.vbank().get(outvn).map(|v| v.get_size())?;
            let arch = Rc::clone(data.get_arch());
            arch.types()?.resize_pointer(alttype, out_size).ok()
        }
        // TypeOpNew: propagate the cpool result as result of the new operator
        // (typeop.cc:2503).
        OpCode::CPUI_NEW => {
            if inslot != 0 || outslot != -1 {
                return None;
            }
            let vn0 = data.obank().get(op)?.get_in(0)?;
            let v0 = data.vbank().get(vn0)?;
            if !v0.is_written() {
                return None;
            }
            let def = v0.get_def()?;
            let def_code = data.obank().get(def)?.code();
            if def_code != OpCode::CPUI_CPOOLREF {
                return None;
            }
            Some(alttype)
        }
        _ => None, // default TypeOp::propagateType: don't propagate
    }
}

/// C++ `TypeOpLoad::propagateType` / `TypeOpStore::propagateType` (typeop.cc:488,
/// 559).  `is_load` selects the LOAD-specific slot conventions.
#[allow(clippy::too_many_arguments)]
fn propagate_load_store(
    data: &Funcdata,
    alttype: Rc<Datatype>,
    op: OpId,
    invn_is_spacebase: bool,
    outvn: VarnodeId,
    inslot: int4,
    outslot: int4,
    is_load: bool,
) -> Option<Rc<Datatype>> {
    if inslot == 0 || outslot == 0 {
        return None; // Don't propagate along this edge
    }
    if invn_is_spacebase {
        return None;
    }
    let out_size = data.vbank().get(outvn).map(|v| v.get_size())?;
    let arch = Rc::clone(data.get_arch());
    let tlst = arch.types()?;
    // LOAD: propagating output to input (value -> ptr) is inslot == -1.
    // STORE: propagating value (slot 2) to ptr is inslot == 2.
    let to_pointer = if is_load { inslot == -1 } else { inslot == 2 };
    if to_pointer {
        // (unlace) A float VALUE may become the pointer's pointee only when the
        // base's whole access map is that one width.  Otherwise the object is a
        // record/union with several views (a u32 at one offset, a pointer at
        // another), and promoting it to `double *` changes the element stride
        // and turns every other access into a bit-cast.
        if alttype.get_metatype() == type_metatype::TYPE_FLOAT
            && !float_pointee_admits(data, op, alttype.get_size())
        {
            return None;
        }
        let spc = space_from_const(data, op, 0)?;
        // (unlace `vtabletypes`) A `C_vtbl *` value's pointer is a `C *`.
        if let Some(class) =
            crate::vtblbase::class_pointer(data, tlst, &alttype, out_size, spc.get_word_size())
        {
            return Some(class);
        }
        propagate_to_pointer(tlst, alttype, out_size, spc.get_word_size() as int4)
    } else {
        // (unlace) `code` is size 1 only so that `code *` arithmetic steps one
        // byte; adopting it as the dereferenced VALUE type declares a scalar
        // with no width.  The test lives here rather than inside the ported
        // `propagate_from_pointer`, whose C++ body (typeop.cc:207) has no such
        // case.
        if let Some(ptrto) = alttype.get_ptr_to() {
            if crate::codescalar::blocks_value_type(&ptrto) {
                return None;
            }
        }
        let value = match propagate_from_pointer(tlst, Rc::clone(&alttype), out_size) {
            Some(value) if value.get_metatype() != type_metatype::TYPE_UNKNOWN => value,
            value => crate::bitfield::whole_byte_field_value(tlst, &alttype, out_size).or(value)?,
        };
        // (unlace `structsynth nest`) A record's pointer to itself names its shell.
        Some(crate::structsynth::resolve_self_pointer(tlst, &value).unwrap_or(value))
    }
}

/// Does every `LOAD`/`STORE` through this base's constant offsets use exactly
/// `value_size` bytes?
///
/// The object plane is owned by the access map, not by one value's type.  A
/// base read at several widths is a record (or a union member) and keeps its
/// storage type; the float access then prints as its own cast
/// (`*(double *)a0`) instead of re-typing the whole object and forcing every
/// other access through a bit-cast.  A dynamic access is admitted only when its
/// `PTRADD` scale proves the element width is `value_size`: that is a float
/// array, not a mixed-width object.  An unknown stride refuses.
///
/// The evidence walk starts at the base, not at the function's op bank, so its
/// answer does not depend on how many unrelated ops the function holds.
fn float_pointee_admits(data: &Funcdata, op: OpId, value_size: int4) -> bool {
    let Some(pointer) = data.obank().get(op).and_then(|o| o.get_in(1)) else {
        return false;
    };
    let Some((base, _dynamic, _stride)) = crate::structsynth::peel_base_stride(data, pointer)
    else {
        return false;
    };
    crate::structsynth::every_access_through(data, base, value_size)
}

/// C++ `TypeOpPiece::propagateType` (typeop.cc:2076).
fn propagate_piece(
    data: &Funcdata,
    alttype: Rc<Datatype>,
    op: OpId,
    invn: VarnodeId,
    outvn: VarnodeId,
    inslot: int4,
    outslot: int4,
) -> Option<Rc<Datatype>> {
    let (near_ptr, far_ptr) = piece_pointer_sizes(data);
    let in_size = data.vbank().get(invn).map(|v| v.get_size())?;
    let out_size = data.vbank().get(outvn).map(|v| v.get_size())?;
    if near_ptr != 0 && alttype.get_metatype() == type_metatype::TYPE_PTR {
        let arch = Rc::clone(data.get_arch());
        if inslot == 1 && outslot == -1 {
            if in_size == near_ptr && out_size == far_ptr {
                return arch.types()?.resize_pointer(alttype, far_ptr).ok();
            }
        } else if inslot == -1 && outslot == 1 && in_size == far_ptr && out_size == near_ptr {
            return arch.types()?.resize_pointer(alttype, near_ptr).ok();
        }
        return None;
    }
    if inslot != -1 {
        return None;
    }
    let mut byte_off = compute_byte_offset_for_composite_piece(data, op, outslot)? as int8;
    let mut cur = Some(alttype);
    while let Some(ct) = cur.clone() {
        if byte_off == 0 && ct.get_size() == out_size {
            break;
        }
        let (sub, newoff) = ct.get_sub_type(byte_off).ok()?;
        byte_off = newoff;
        cur = sub;
    }
    cur
}

/// C++ `TypeOpPiece::computeByteOffsetForComposite` (typeop.cc:2106).
fn compute_byte_offset_for_composite_piece(data: &Funcdata, op: OpId, slot: int4) -> Option<int4> {
    let o = data.obank().get(op)?;
    let in0 = o.get_in(0)?;
    let in1 = o.get_in(1)?;
    let big_endian = data
        .vbank()
        .get(in0)
        .map(|v| v.get_space().is_big_endian())
        .unwrap_or(false);
    let in0_size = data.vbank().get(in0).map(|v| v.get_size())?;
    let in1_size = data.vbank().get(in1).map(|v| v.get_size())?;
    let byte_off = if big_endian {
        if slot == 0 { 0 } else { in0_size }
    } else if slot == 0 {
        in1_size
    } else {
        0
    };
    Some(byte_off)
}

/// C++ `TypeOpSubpiece::propagateType` (typeop.cc:2163).
fn propagate_subpiece(
    data: &Funcdata,
    alttype: Rc<Datatype>,
    op: OpId,
    invn: VarnodeId,
    outvn: VarnodeId,
    inslot: int4,
    outslot: int4,
) -> Option<Rc<Datatype>> {
    let (near_ptr, far_ptr) = piece_pointer_sizes(data);
    let in_size = data.vbank().get(invn).map(|v| v.get_size())?;
    let out_size = data.vbank().get(outvn).map(|v| v.get_size())?;
    if near_ptr != 0
        && alttype.get_metatype() == type_metatype::TYPE_PTR
        && inslot == -1
        && outslot == 0
    {
        // Try to propagate UP, producing a far pointer input from a near pointer
        // output of the SUBPIECE.  The DOWN case is handled by getSubType below.
        let in1_off = data
            .obank()
            .get(op)
            .and_then(|o| o.get_in(1))
            .and_then(|v| data.vbank().get(v))
            .map(|v| v.get_offset())
            .unwrap_or(0);
        if in1_off != 0 {
            return None;
        }
        if in_size == near_ptr && out_size == far_ptr {
            let arch = Rc::clone(data.get_arch());
            return arch.types()?.resize_pointer(alttype, far_ptr).ok();
        }
        return None;
    }
    if inslot != 0 || outslot != -1 {
        return None; // Propagation must be from in0 to out
    }
    let mut byte_off = compute_byte_offset_for_composite_subpiece(data, op)? as int8;
    // UNION/PARTIALUNION resolveTruncation is the W8 union mid-flow surface; the
    // common (non-union) path falls through to the getSubType walk below.
    let mut cur = Some(alttype);
    while let Some(ct) = cur.clone() {
        if byte_off == 0 && ct.get_size() == out_size {
            break;
        }
        let (sub, newoff) = ct.get_sub_type(byte_off).ok()?;
        byte_off = newoff;
        cur = sub;
    }
    cur
}

/// C++ `TypeOpSubpiece::computeByteOffsetForComposite` (typeop.cc:2197).
fn compute_byte_offset_for_composite_subpiece(data: &Funcdata, op: OpId) -> Option<int4> {
    let o = data.obank().get(op)?;
    let out = o.get_out()?;
    let in0 = o.get_in(0)?;
    let in1 = o.get_in(1)?;
    let out_size = data.vbank().get(out).map(|v| v.get_size())?;
    let lsb = data
        .vbank()
        .get(in1)
        .map(|v| v.get_offset() as int4)
        .unwrap_or(0);
    let in0_size = data.vbank().get(in0).map(|v| v.get_size())?;
    let big_endian = data
        .vbank()
        .get(in0)
        .map(|v| v.get_space().is_big_endian())
        .unwrap_or(false);
    let byte_off = if big_endian {
        in0_size - out_size - lsb
    } else {
        lsb
    };
    Some(byte_off)
}

/// C++ `TypeOpEqual::propagateAcrossCompare` (typeop.cc:965).
fn propagate_across_compare(
    data: &Funcdata,
    alttype: Rc<Datatype>,
    invn_is_spacebase: bool,
    outvn: VarnodeId,
    inslot: int4,
    outslot: int4,
) -> Option<Rc<Datatype>> {
    if inslot == -1 || outslot == -1 {
        return None;
    }
    if invn_is_spacebase {
        return spacebase_pointer(data, alttype.get_size());
    }
    // isPointerRel struct mid-pointer: if we know the pointer is in the middle of
    // a structure, don't propagate the relptr across the comparison (the two sides
    // are likely different types, and the other side can type from the structure
    // pointer); hand back a bare pointer instead.  The non-relptr / non-struct path
    // is the identity propagation.
    let outvn_const = data
        .vbank()
        .get(outvn)
        .map(|v| v.is_constant())
        .unwrap_or(false);
    if alttype.is_pointer_rel() && !outvn_const {
        let parent_is_struct = alttype
            .get_rel_parent()
            .map(|p| p.get_metatype() == type_metatype::TYPE_STRUCT)
            .unwrap_or(false);
        let byte_off = alttype.get_byte_offset().unwrap_or(-1);
        if parent_is_struct && byte_off >= 0 {
            let arch = Rc::clone(data.get_arch());
            let tlst = arch.types()?;
            let base = tlst.get_base(1, type_metatype::TYPE_UNKNOWN).ok()?;
            let ws = alttype.get_word_size().unwrap_or(1);
            return tlst.get_type_pointer(alttype.get_size(), base, ws).ok();
        }
    }
    Some(alttype)
}

/// C++ `TypeOpIntAdd::propagateType` + `propagateAddIn2Out` (typeop.cc:1183/1217).
/// The non-pointer int/uint constant-fold arm is transcribed; the pointer
/// `downChain` walk routes through the existing `Datatype::down_chain` machinery.
fn propagate_int_add(
    data: &Funcdata,
    alttype: Rc<Datatype>,
    op: OpId,
    outvn: VarnodeId,
    inslot: int4,
    outslot: int4,
) -> Option<Rc<Datatype>> {
    let invn_meta = alttype.get_metatype();
    if invn_meta != type_metatype::TYPE_PTR {
        if invn_meta != type_metatype::TYPE_INT && invn_meta != type_metatype::TYPE_UINT {
            return None;
        }
        let in1_const = data
            .obank()
            .get(op)
            .and_then(|o| o.get_in(1))
            .and_then(|v| data.vbank().get(v))
            .map(|v| v.is_constant())
            .unwrap_or(false);
        if outslot != 1 || !in1_const {
            return None;
        }
    } else if inslot != -1 && outslot != -1 {
        return None; // Must propagate input <-> output for pointers
    }
    let outvn_const = data
        .vbank()
        .get(outvn)
        .map(|v| v.is_constant())
        .unwrap_or(false);
    if outvn_const && alttype.get_metatype() != type_metatype::TYPE_PTR {
        Some(alttype)
    } else if inslot == -1 {
        None // Don't propagate pointer types output -> input
    } else if crate::valuewitness::outside_header(data, op, inslot, &alttype) {
        None
    } else {
        propagate_add_in2_out(data, alttype, op, inslot)
    }
}

/// C++ `TypeOpIntAdd::propagateAddPointer` (typeop.cc:1270): classify the
/// data-type edge as a pointer propagating through an "add a constant" op.
/// Returns `(command, off)`:
///   - 0: "add a constant" adding zero (PTRSUB or PTRADD)
///   - 1: "add a constant", `off` passed back
///   - 2: pointer does not propagate through
///   - 3: input data-type propagates through untransformed
fn propagate_add_pointer(data: &Funcdata, op: OpId, slot: int4, sz: int4) -> (int4, uintb) {
    let o = match data.obank().get(op) {
        Some(o) => o,
        None => return (2, 0),
    };
    let code = o.code();
    if code == OpCode::CPUI_PTRADD {
        if slot != 0 {
            return (2, 0);
        }
        let (const_off, const_size, is_const) = o
            .get_in(1)
            .and_then(|v| data.vbank().get(v))
            .map(|v| (v.get_offset(), v.get_size(), v.is_constant()))
            .unwrap_or((0, 0, false));
        let mult = o
            .get_in(2)
            .and_then(|v| data.vbank().get(v))
            .map(|v| v.get_offset())
            .unwrap_or(0);
        if is_const {
            let off = (const_off.wrapping_mul(mult)) & calc_mask(const_size);
            return if off == 0 { (0, 0) } else { (1, off) };
        }
        // cast: C++ `(mult % sz)` promotes int4 `sz` to the uintb of `mult`; `sz as uintb`
        // is that same int4->uintb promotion (sz is the non-negative align size).
        if sz != 0 && (mult % sz as uintb) != 0 {
            return (2, 0);
        }
        return (3, 0);
    }
    if code == OpCode::CPUI_PTRSUB {
        if slot != 0 {
            return (2, 0);
        }
        let off = o
            .get_in(1)
            .and_then(|v| data.vbank().get(v))
            .map(|v| v.get_offset())
            .unwrap_or(0);
        return if off == 0 { (0, 0) } else { (1, off) };
    }
    if code == OpCode::CPUI_INT_ADD {
        let othervn = match o.get_in(1 - slot) {
            Some(v) => v,
            None => return (2, 0),
        };
        let (is_const, off, ov_written, ov_temp_is_ptr) = {
            let v = match data.vbank().get(othervn) {
                Some(v) => v,
                None => return (2, 0),
            };
            let temp_is_ptr = v
                .get_temp_type()
                .map(|t| t.get_metatype() == type_metatype::TYPE_PTR)
                .unwrap_or(false);
            (v.is_constant(), v.get_offset(), v.is_written(), temp_is_ptr)
        };
        if !is_const {
            // Check if othervn is an offset (othervn = MULT(x, const)).
            if ov_written {
                let multop = data.vbank().get(othervn).and_then(|v| v.get_def());
                if let Some(multop) = multop {
                    let mcode = data.obank().get(multop).map(|o| o.code());
                    if mcode == Some(OpCode::CPUI_INT_MULT) {
                        let (mult, mult_size, mult_const) = data
                            .obank()
                            .get(multop)
                            .and_then(|o| o.get_in(1))
                            .and_then(|v| data.vbank().get(v))
                            .map(|v| (v.get_offset(), v.get_size(), v.is_constant()))
                            .unwrap_or((0, 0, false));
                        if mult_const {
                            if mult == calc_mask(mult_size) {
                                // Multiplying by -1: assume a pointer difference.
                                return (2, 0);
                            }
                            // cast: int4->uintb promotion of `sz` in C++ `(mult % sz)`.
                            if sz != 0 && (mult % sz as uintb) != 0 {
                                return (2, 0);
                            }
                        }
                        return (3, 0);
                    }
                }
            }
            if sz == 1 {
                return (3, 0);
            }
            return (2, 0);
        }
        if ov_temp_is_ptr {
            // othervn marked as ptr.
            return (2, 0);
        }
        return if off == 0 { (0, 0) } else { (1, off) };
    }
    (2, 0)
}

/// C++ `TypeOpIntAdd::propagateAddIn2Out` (typeop.cc:1217): propagate a pointer
/// data-type through an ADD/PTRADD/PTRSUB from an input to its output via the
/// `propagateAddPointer` command analysis + the looping `downChain` walk
/// (preserving any containing TYPE_STRUCT/TYPE_ARRAY as a relative pointer).
fn propagate_add_in2_out(
    data: &Funcdata,
    alttype: Rc<Datatype>,
    op: OpId,
    inslot: int4,
) -> Option<Rc<Datatype>> {
    let arch = Rc::clone(data.get_arch());
    let tlst = arch.types_impl()?;
    let ptr_to = alttype.get_ptr_to()?;
    let align = ptr_to.get_align_size();
    let (command, offset) = propagate_add_pointer(data, op, inslot, align);
    if command == 2 {
        return None; // Doesn't look like a good pointer add
    }
    let mut pointer: Option<Rc<Datatype>> = Some(Rc::clone(&alttype));
    let mut parent: Option<Rc<Datatype>> = None;
    let mut parent_off: int8 = 0;
    if command != 3 {
        let word_size = alttype.get_word_size().unwrap_or(1);
        // cast: `offset` is uintb (u64); C++ `addressToByteInt(uintb,...)` takes the
        // value reinterpreted as int8 — `offset as i64` is that same bit-reinterpret.
        let mut type_offset = AddrSpace::address_to_byte_int(offset as i64, word_size);
        let op_code = data.obank().get(op)?.code();
        let allow_wrap = op_code != OpCode::CPUI_PTRSUB;
        // C++ do { pointer = pointer->downChain(typeOffset,...); if (0) break; }
        while let Some(cur) = pointer.clone() {
            // C++ `TypePointer::downChain` (type.cc:1224-1257) dispatches the
            // pointed-to `getSubType(off,&off)` to `TypeSpacebase::getSubType`,
            // which reaches the symbol scope to resolve the local/global Symbol at
            // `off` (type.cc:1248).  The generic `Datatype::down_chain` cannot reach
            // that scope, so a `PTRSUB(spacebase,-0xN)` would otherwise propagate as
            // a bare 8-byte pointer (int8) and force a spurious cast to the mapped
            // local's type.  Reproduce the spacebase arm here (scope-aware), exactly
            // as `get_output_token_ptrsub` does for the cast plane, so the PTRSUB
            // output is typed as a pointer to the mapped local during inference.
            let cur_is_spacebase = cur
                .get_ptr_to()
                .map(|p| p.get_metatype() == type_metatype::TYPE_SPACEBASE)
                .unwrap_or(false);
            if cur_is_spacebase {
                let sbptrto = cur.get_ptr_to()?;
                let cur_size = cur.get_size();
                let cur_ws = cur.get_word_size().unwrap_or(1);
                match data.spacebase_get_sub_type(&sbptrto, type_offset) {
                    Some((subtype, residual)) => {
                        type_offset = residual;
                        // The spacebase is never an array/struct container itself, so
                        // `par`/`parOff` stay unset; `!isArray -> getTypePointerStripArray`.
                        pointer = tlst
                            .get_type_pointer_strip_array(cur_size, subtype, cur_ws)
                            .ok();
                    }
                    _ => {
                        pointer = None;
                    }
                }
                if pointer.is_none() || type_offset == 0 {
                    break;
                }
                continue;
            }
            let (next, new_off, par, par_off) =
                tlst.down_chain(&cur, type_offset, allow_wrap).ok()?;
            type_offset = new_off;
            // C++ downChain writes its `par`/`parOff` reference params ONLY on the
            // STRUCT/ARRAY arm (type.cc:1247-1250) and never resets them otherwise,
            // so across iterations the LAST struct/array container seen is retained.
            // Mirror that: only overwrite when the descent actually produced a
            // container (par.is_some()); a scalar/enum tail must NOT clear an
            // outer struct/array container set by an earlier iteration.
            if par.is_some() {
                parent = par;
                parent_off = par_off;
            }
            pointer = next;
            // C++: break out of the do-while once pointer is null or typeOffset == 0.
            if pointer.is_none() || type_offset == 0 {
                break;
            }
        }
    }
    if let Some(par) = parent {
        // Innermost containing object is a TYPE_STRUCT/TYPE_ARRAY: preserve it.
        let pt = match &pointer {
            None => tlst.get_base(1, type_metatype::TYPE_UNKNOWN).ok()?,
            Some(p) => p.get_ptr_to()?,
        };
        // cast: C++ `getTypePointerRel(parent, pt, parentOff)` takes an int4 offset;
        // `parentOff` is int8 there — this narrows int8->int4 exactly as the C++ call.
        let parent_off_i4: int4 = parent_off as int4;
        pointer = tlst.get_type_pointer_rel(par, pt, parent_off_i4).ok();
    }
    let pointer = match pointer {
        None => {
            if command == 0 {
                return Some(alttype);
            }
            return None;
        }
        Some(p) => p,
    };
    // If the input is a spacebase pointer-to-spacebase, demote to plain pointer.
    let in_is_spacebase = data
        .obank()
        .get(op)
        .and_then(|o| o.get_in(inslot))
        .and_then(|v| data.vbank().get(v))
        .map(|v| v.is_spacebase())
        .unwrap_or(false);
    if in_is_spacebase {
        let pt_meta = pointer.get_ptr_to().map(|p| p.get_metatype());
        if pt_meta == Some(type_metatype::TYPE_SPACEBASE) {
            let base = tlst.get_base(1, type_metatype::TYPE_UNKNOWN).ok()?;
            let ws = pointer.get_word_size().unwrap_or(1);
            return tlst.get_type_pointer(pointer.get_size(), base, ws).ok();
        }
    }
    Some(pointer)
}

/// C++ `ActionInferTypes::propagateOneType` (coreaction.cc:5428): DFS push a
/// Varnode's temp type as far as possible.  Mirrors the `PropagationState` stack
/// walk (descendants then the def), visiting each Varnode at most once via the
/// mark bit.
fn propagate_one_type(data: &mut Funcdata, root: VarnodeId) {
    // PropagationState: (vn, descend index, op, slot, inslot).
    struct PState {
        vn: VarnodeId,
        descend: Vec<OpId>,
        d_idx: usize,
        op: Option<OpId>,
        slot: int4,
        inslot: int4,
    }

    // C++ PropagationState::PropagationState(Varnode *v) (coreaction.cc:5371): if
    // the Varnode has descendants start at the first; else start at the def with
    // inslot=-1.
    fn make_state(data: &Funcdata, vn: VarnodeId) -> PState {
        let descend: Vec<OpId> = data
            .vbank()
            .get(vn)
            .map(|v| v.descend_iter().collect())
            .unwrap_or_default();
        let mut st = PState {
            vn,
            descend,
            d_idx: 0,
            op: None,
            slot: 0,
            inslot: -1,
        };
        if !st.descend.is_empty() {
            let op = st.descend[0];
            st.d_idx = 1;
            st.op = Some(op);
            let has_out = data
                .obank()
                .get(op)
                .map(|o| o.get_out().is_some())
                .unwrap_or(false);
            st.slot = if has_out { -1 } else { 0 };
            st.inslot = data.obank().get(op).map(|o| o.get_slot(vn)).unwrap_or(0);
        } else {
            st.op = data.vbank().get(vn).and_then(|v| v.get_def());
            st.inslot = -1;
            st.slot = 0;
        }
        st
    }

    // PropagationState::valid() <=> op != null.
    fn valid(st: &PState) -> bool {
        st.op.is_some()
    }

    // PropagationState::step() (coreaction.cc:5395) — verbatim.
    fn step(st: &mut PState, data: &Funcdata) {
        st.slot += 1;
        let numin = st
            .op
            .and_then(|o| data.obank().get(o))
            .map(|o| o.num_input())
            .unwrap_or(0);
        if st.slot < numin {
            return;
        }
        if st.d_idx < st.descend.len() {
            let op = st.descend[st.d_idx];
            st.d_idx += 1;
            st.op = Some(op);
            let has_out = data
                .obank()
                .get(op)
                .map(|o| o.get_out().is_some())
                .unwrap_or(false);
            st.slot = if has_out { -1 } else { 0 };
            st.inslot = data.obank().get(op).map(|o| o.get_slot(st.vn)).unwrap_or(0);
            return;
        }
        // Descendants exhausted: if we just processed the def (inslot==-1) stop;
        // otherwise (we just processed a descendant) move to the def.
        if st.inslot == -1 {
            st.op = None;
        } else {
            st.op = data.vbank().get(st.vn).and_then(|v| v.get_def());
        }
        st.inslot = -1;
        st.slot = 0;
    }

    let mut stack: Vec<PState> = Vec::new();
    stack.push(make_state(data, root));
    if let Some(v) = data.vbank_mut().get_mut(root) {
        v.set_mark();
    }

    while let Some(top) = stack.last_mut() {
        if !valid(top) {
            let vn = top.vn;
            if let Some(v) = data.vbank_mut().get_mut(vn) {
                v.clear_mark();
            }
            stack.pop();
            continue;
        }
        let op = top.op.unwrap();
        let inslot = top.inslot;
        let slot = top.slot;
        if inslot >= 0 && slot >= 0 && joins_only_output(data, op, inslot) {
            top.slot = data.obank().get(op).map_or(0, |o| o.num_input()) - 1;
            step(stack.last_mut().unwrap(), data);
            continue;
        }
        if propagate_type_edge(data, op, inslot, slot) {
            let newvn = if slot == -1 {
                data.obank().get(op).and_then(|o| o.get_out())
            } else {
                data.obank().get(op).and_then(|o| o.get_in(slot))
            };
            // step before push_back.
            step(stack.last_mut().unwrap(), data);
            if let Some(newvn) = newvn {
                stack.push(make_state(data, newvn));
                if let Some(v) = data.vbank_mut().get_mut(newvn) {
                    v.set_mark();
                }
            }
        } else {
            step(stack.last_mut().unwrap(), data);
        }
    }
}

/// Does `op` propagate its input `inslot` only to its output? A `MULTIEQUAL` or
/// `INDIRECT` declines every input-to-input edge in `propagate_type`, and the
/// edge does nothing before that when the input's type needs no resolution
/// (resolving it records the choice, so such an edge is still taken).
fn joins_only_output(data: &Funcdata, op: OpId, inslot: int4) -> bool {
    let Some(o) = data.obank().get(op) else {
        return false;
    };
    matches!(o.code(), OpCode::CPUI_MULTIEQUAL | OpCode::CPUI_INDIRECT)
        && o.get_in(inslot)
            .and_then(|vn| data.vbank().get(vn))
            .and_then(|v| v.get_temp_type())
            .is_some_and(|t| !t.needs_resolution())
}

/// C++ `ActionInferTypes::propagateRef` (coreaction.cc:5464): given a likely
/// pointer Varnode `vn` and a known alias `addr` of what it points at, try to
/// propagate `vn`'s pointee data-type onto the Varnodes that live at `addr`.
///
/// This is the pass that turns a typed stack-pointer (e.g. `mystruct *` from a
/// call argument) into a typed stack *local* (`mystruct v1`): the pointee type
/// is laid over every Varnode in the stack-frame slice the pointer addresses.
fn propagate_ref(data: &mut Funcdata, vn: VarnodeId, addr: &Address) {
    // ct = vn->getTempType(); must be a pointer to a concrete (non-spacebase,
    // non-unknown) type.
    let ct = match data
        .vbank()
        .get(vn)
        .and_then(|v| v.get_temp_type().cloned())
    {
        Some(t) => t,
        None => return,
    };
    if ct.get_metatype() != type_metatype::TYPE_PTR {
        return;
    }
    let ct = match ct.get_ptr_to() {
        Some(p) => p,
        None => return,
    };
    let ctmeta = ct.get_metatype();
    if ctmeta == type_metatype::TYPE_SPACEBASE || ctmeta == type_metatype::TYPE_UNKNOWN {
        return; // Don't bother propagating this
    }
    let arch = Rc::clone(data.get_arch());
    let typegrp = match arch.types() {
        Some(t) => t,
        None => return,
    };

    let off = addr.get_offset();
    let ct_size = ct.get_size();
    // endaddr = addr + ct->getSize();  if it wrapped, run to end of the space.
    // cast: `Address + i64` advances the offset; a data-type byte size (int4) fits i64.
    let endaddr = addr + ct_size as i64;

    // Snapshot the membership window so the &mut propagate_one_type below does not
    // alias the iteration borrow (the C++ holds a live VarnodeLocSet iterator; the
    // set is not mutated structurally inside the loop — only Varnode temptypes
    // change — so the snapshot is equivalent).
    let curvns: Vec<VarnodeId> = data.vbank().iter_loc_addr_range(addr, &endaddr).collect();

    let mut lastoff: uintb = 0;
    let mut lastsize: int4 = ct_size;
    let mut lastct: Option<Rc<Datatype>> = Some(Rc::clone(&ct));
    for curvn in curvns {
        let (is_annot, written, no_descend, typelock, has_symentry, curoff_abs, cursize) =
            match data.vbank().get(curvn) {
                Some(v) => (
                    v.is_annotation(),
                    v.is_written(),
                    v.has_no_descend(),
                    v.is_type_lock(),
                    v.unlace_symbol_entry().is_some(),
                    v.get_offset(),
                    v.get_size(),
                ),
                None => continue,
            };
        if is_annot {
            continue;
        }
        if !written && no_descend {
            continue;
        }
        if typelock {
            continue;
        }
        // C++ `if (curvn->getSymbolEntry() != 0) continue;` (coreaction.cc:5490):
        // skip Varnodes already bound to a Symbol's SymbolEntry.  unlace's
        // `unlace_symbol_entry` is the faithful `mapentry` proxy (set by
        // `setSymbolEntry`/`syncVarnodesWithSymbol` when a Varnode is bound to a
        // stack Symbol) — NOT the `isMapped()` flag (a distinct bit set far earlier
        // at heritage time on every stack-frame Varnode).  Using `isMapped()` here
        // over-skipped EVERY stack Varnode, killing the spacebase type seed (the W4
        // proxy LOSS); `getSymbolEntry()` is the correct, more permissive gate.
        if has_symentry {
            continue;
        }
        let curoff = curoff_abs.wrapping_sub(off);
        if curoff.wrapping_add(cursize as uintb) > ct_size as uintb {
            continue;
        }
        if cursize != lastsize || curoff != lastoff {
            lastoff = curoff;
            lastsize = cursize;
            // getExactPiece(ct, curoff, cursize).
            // cast: `curoff` (uintb) is the byte offset within `ct`, bounded by the
            // guard above (`curoff + cursize <= ct->getSize()`), so it fits int4.
            lastct = typegrp
                .get_exact_piece(Rc::clone(&ct), curoff as int4, cursize)
                .ok()
                .flatten();
        }
        let lct = match &lastct {
            Some(c) => Rc::clone(c),
            None => continue,
        };
        // A negative typeOrder here means the new type is more
        // specific; adopt it and re-propagate.
        let cur_temp = match data
            .vbank()
            .get(curvn)
            .and_then(|v| v.get_temp_type().cloned())
        {
            Some(t) => t,
            None => continue,
        };
        if 0 > lct.type_order(&cur_temp).unwrap_or(0) {
            if let Some(v) = data.vbank_mut().get_mut(curvn) {
                v.set_temp_type(Rc::clone(&lct));
            }
            propagate_one_type(data, curvn);
        }
    }
}

/// C++ `ActionInferTypes::propagateSpacebaseRef` (coreaction.cc:5521): look for
/// ADD/PTRSUB/PTRADD/COPY off the spacebase (stack-pointer) input whose output
/// has a known pointer type, and propagate that type into the stack frame at the
/// corresponding offset (via [`propagate_ref`]).
fn propagate_spacebase_ref(data: &mut Funcdata, spcvn: VarnodeId) {
    // spctype = spcvn->getType() (the absolute type, NOT temptype); must be
    // pointer-to-spacebase.
    let spctype = match data.vbank().get(spcvn).map(|v| Rc::clone(v.get_type())) {
        Some(t) => t,
        None => return,
    };
    if spctype.get_metatype() != type_metatype::TYPE_PTR {
        return;
    }
    let sbtype = match spctype.get_ptr_to() {
        Some(p) => p,
        None => return,
    };
    if sbtype.get_metatype() != type_metatype::TYPE_SPACEBASE {
        return;
    }
    let arch = Rc::clone(data.get_arch());
    let manager = arch.manage();

    // Snapshot the descendant ops (the C++ holds a live beginDescend iterator;
    // propagate_ref does not add/remove descendants of spcvn).
    let descend: Vec<OpId> = match data.vbank().get(spcvn) {
        Some(v) => v.descend_iter().collect(),
        None => return,
    };
    for op in descend {
        let (code, op_addr) = match data.obank().get(op) {
            Some(o) => (o.code(), o.get_addr().clone()),
            None => continue,
        };
        match code {
            OpCode::CPUI_COPY => {
                // vn = op->getIn(0); addr = sbtype->getAddress(0, vn->getSize(), op->getAddr())
                let in0 = data.obank().get(op).and_then(|o| o.get_in(0));
                let sz = in0
                    .and_then(|v| data.vbank().get(v).map(|x| x.get_size()))
                    .unwrap_or(0);
                if let (Some(addr), Some(outvn)) = (
                    sbtype.spacebase_get_address(0, sz, &op_addr, manager),
                    data.obank().get(op).and_then(|o| o.get_out()),
                ) {
                    propagate_ref(data, outvn, &addr);
                }
            }
            OpCode::CPUI_INT_ADD | OpCode::CPUI_PTRSUB => {
                // vn = op->getIn(1); if constant: addr = sbtype->getAddress(vn->offset, vn->size, op->getAddr())
                let in1 = data.obank().get(op).and_then(|o| o.get_in(1));
                let (is_const, voff, vsz) = match in1.and_then(|v| data.vbank().get(v)) {
                    Some(v) => (v.is_constant(), v.get_offset(), v.get_size()),
                    None => continue,
                };
                if is_const {
                    if let (Some(addr), Some(outvn)) = (
                        sbtype.spacebase_get_address(voff, vsz, &op_addr, manager),
                        data.obank().get(op).and_then(|o| o.get_out()),
                    ) {
                        propagate_ref(data, outvn, &addr);
                    }
                }
            }
            OpCode::CPUI_PTRADD => {
                // vn = op->getIn(1); if constant: off = vn->offset * op->getIn(2)->offset
                let in1 = data.obank().get(op).and_then(|o| o.get_in(1));
                let (is_const, voff, vsz) = match in1.and_then(|v| data.vbank().get(v)) {
                    Some(v) => (v.is_constant(), v.get_offset(), v.get_size()),
                    None => continue,
                };
                if is_const {
                    let in2off = data
                        .obank()
                        .get(op)
                        .and_then(|o| o.get_in(2))
                        .and_then(|v| data.vbank().get(v).map(|x| x.get_offset()))
                        .unwrap_or(0);
                    let off = voff.wrapping_mul(in2off);
                    if let (Some(addr), Some(outvn)) = (
                        sbtype.spacebase_get_address(off, vsz, &op_addr, manager),
                        data.obank().get(op).and_then(|o| o.get_out()),
                    ) {
                        propagate_ref(data, outvn, &addr);
                    }
                }
            }
            _ => {}
        }
    }
}

/// C++ `ActionInferTypes::canonicalReturnOp` (coreaction.cc:5567).
fn canonical_return_op(data: &Funcdata) -> Option<OpId> {
    let mut res: Option<OpId> = None;
    let mut bestdt: Option<Rc<Datatype>> = None;
    for retop in data.obank().iter_code(OpCode::CPUI_RETURN) {
        let o = data.obank().get(retop)?;
        if o.is_dead() || o.get_halt_type() != 0 {
            continue;
        }
        if o.num_input() > 1 {
            let vn = match o.get_in(1) {
                Some(v) => v,
                None => continue,
            };
            let ct = data
                .vbank()
                .get(vn)
                .and_then(|v| v.get_temp_type().cloned());
            let ct = match ct {
                Some(t) => t,
                None => continue,
            };
            match &bestdt {
                None => {
                    res = Some(retop);
                    bestdt = Some(ct);
                }
                Some(best) => {
                    if ct.type_order(best).unwrap_or(0) < 0 {
                        res = Some(retop);
                        bestdt = Some(ct);
                    }
                }
            }
        }
    }
    res
}

/// C++ `ActionInferTypes::propagateAcrossReturns` (coreaction.cc:5598): share a
/// single return data-type across multiple CPUI_RETURN inputs.
fn propagate_across_returns(data: &mut Funcdata) {
    if data.get_func_proto().is_output_locked() {
        return;
    }
    let canon = match canonical_return_op(data) {
        Some(op) => op,
        None => return,
    };
    let base_vn = match data.obank().get(canon).and_then(|o| o.get_in(1)) {
        Some(v) => v,
        None => return,
    };
    let (ct, base_size) = {
        let v = match data.vbank().get(base_vn) {
            Some(v) => v,
            None => return,
        };
        let ct = match v.get_temp_type() {
            Some(t) => Rc::clone(t),
            None => return,
        };
        (ct, v.get_size())
    };
    let is_bool = ct.get_metatype() == type_metatype::TYPE_BOOL;

    let retops: Vec<OpId> = data.obank().iter_code(OpCode::CPUI_RETURN).collect();
    for retop in retops {
        if retop == canon {
            continue;
        }
        let o = match data.obank().get(retop) {
            Some(o) => o,
            None => continue,
        };
        if o.is_dead() || o.get_halt_type() != 0 || o.num_input() <= 1 {
            continue;
        }
        let vn = match o.get_in(1) {
            Some(v) => v,
            None => continue,
        };
        {
            let v = match data.vbank().get(vn) {
                Some(v) => v,
                None => continue,
            };
            if v.get_size() != base_size {
                continue;
            }
            if is_bool && v.get_nz_mask() > 1 {
                continue;
            }
            if v.get_temp_type()
                .map(|t| Rc::ptr_eq(t, &ct))
                .unwrap_or(false)
            {
                continue;
            }
        }
        if let Some(v) = data.vbank_mut().get_mut(vn) {
            v.set_temp_type(Rc::clone(&ct));
        }
        propagate_one_type(data, vn);
    }
}

/// C++ `ActionInferTypes::apply` body (coreaction.cc:5630), minus the localcount
/// ceiling / `hasTypeRecoveryStarted` gate (kept in the wrapper).  Returns whether
/// `writeBack` reported a data-type change (used by the wrapper to bump
/// `localcount`).
pub fn run_infer_types(data: &mut Funcdata) -> bool {
    // data.getScopeLocal()->applyTypeRecommendations(): lock any pending stack
    // input-Varnode type recommendations (the `this`-pointer collection is the
    // merged tree's only source; a no-op on a recommendation-free function).
    data.apply_type_recommendations();
    crate::stablenames::lock_retyped(data);
    crate::charbyte::begin(data);
    build_localtypes(data);
    propagate_all(data);
    // (unlace `charbyte`) re-seed the bytes a `char *` reached and propagate again.
    if let Some(bytes) = crate::charbyte::take_noted() {
        let upstream = crate::charbyte::snapshot(data);
        build_localtypes(data);
        crate::charbyte::seed_char(data, &bytes);
        propagate_all(data);
        crate::charbyte::keep_or_restore(data, upstream);
    }
    write_back(data)
}

/// The propagation half of C++ `ActionInferTypes::apply` (coreaction.cc:5640-5667):
/// every live Varnode's temp type flows along its edges, then across returns and
/// into the stack frame.
fn propagate_all(data: &mut Funcdata) {
    let order: Vec<VarnodeId> = data.vbank().iter_loc().collect();
    for vn in order {
        {
            let v = match data.vbank().get(vn) {
                Some(v) => v,
                None => continue,
            };
            if v.is_annotation() {
                continue;
            }
            if !v.is_written() && v.has_no_descend() {
                continue;
            }
        }
        propagate_one_type(data, vn);
    }
    propagate_across_returns(data);
    // C++ coreaction.cc:5663-5666 —
    // Flow the recovered pointer type (e.g. a `mystruct *` call argument) from the
    // spacebase-relative ADD/PTRSUB/PTRADD outputs into the stack-frame slice they
    // address, so a stack struct/array carries its member type.
    let spcid = data
        .get_scope_local()
        .map(|sl| std::rc::Rc::clone(sl.get_space_id()));
    if let Some(spcid) = spcid {
        if let Some(spcvn) = data.find_spacebase_input(&spcid) {
            propagate_spacebase_ref(data, spcvn);
        }
    }
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.coreaction_infertypes_propagate_type_pub = Some(propagate_type_pub);
}

crate::unlace_flag!(
    /// (unlace `ptrdepthcap`) Cap the pointer nesting `ActionInferTypes` will adopt.
    ///
    /// A small-string-optimized C++ object writes the unsatisfiable equation
    /// `T == ptr(T)` into the type lattice (`p = &obj` on one MULTIEQUAL edge,
    /// `p = obj.ptr` -- a LOAD from the same address -- on the other), so the
    /// propagation adds one pointer level per pass until the seven-pass ceiling
    /// and declares the object `unsigned long long *****`.  When set, every
    /// candidate type is put through `ptrdepth::cap_pointer_depth`, which is
    /// upstream `TypeFactory::getTypePointerNoDepth`'s rule (`type.cc:1509`)
    /// applied at the propagation funnel rather than only at LOAD/STORE.
    Ptrdepthcap,
    "ptrdepthcap",
    "inferred pointer-nesting cap",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod propagate_type_tests;
