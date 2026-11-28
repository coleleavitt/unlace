//! IR keys and the printer's cast context.

use super::*;

/// A stable per-op key for the `Atom.op` / `ReversePolish.op` slot (the C++
/// `PcodeOp *`).  The driver only needs a non-null marker here; use the op's
/// slotmap index bits.  (Round-trips through `usize`; only identity matters.)
#[doc(hidden)]
pub fn op_key(op: OpId) -> crate::printlanguage::IrKey {
    use slotmap::Key;
    op.data().as_ffi()
}

/// A stable per-varnode key for the `Atom` varnode slot (the C++ `Varnode *`).
#[doc(hidden)]
pub fn vn_key(vn: VarnodeId) -> crate::printlanguage::IrKey {
    use slotmap::Key;
    vn.data().as_ffi()
}

/// (unlace) Invert [`op_key`]: reconstruct the `OpId` from the arena key an
/// [`Atom`]/[`ReversePolish`] carries and return the op's `get_time()` — the
/// markup `opref` (C++ `EmitMarkup` derefs the `PcodeOp *` for `getTime()`),
/// identical to the `<seqnum uniq>` `PcodeOp::encode` writes into the `<ast>`
/// (op.rs:589; `funcdata_encode.rs`).  `None` when the key is null or the op is
/// no longer live (defensive — the emitted `opref` set stays a subset of the
/// AST's op times).
pub(super) fn resolve_op_ref(
    fd: &Funcdata,
    op_key: Option<crate::printlanguage::IrKey>,
) -> Option<uintb> {
    let key = op_key?;
    let op = OpId::from(slotmap::KeyData::from_ffi(key));
    Some(fd.obank().get(op)?.get_time() as uintb)
}

/// (unlace) Invert [`vn_key`]: reconstruct the `VarnodeId` and return its
/// `get_create_index()` — the markup `varref` (C++ `EmitMarkup` derefs the
/// `Varnode *` for `getCreateIndex()`), identical to the `<addr ref>`
/// `Varnode::encode` writes into the `<ast>` `<varnodes>` (varnode.rs:629;
/// `funcdata_encode.rs`).  `IPTR_IOP` annotation Varnodes are excluded exactly as
/// `encode_tree` filters them out of `<varnodes>` — a `varref` to one would
/// dangle.  `None` when null / not live / iop-space.
pub(super) fn resolve_var_ref(fd: &Funcdata, vn_key: crate::printlanguage::IrKey) -> Option<uintb> {
    let vn = VarnodeId::from(slotmap::KeyData::from_ffi(vn_key));
    let v = fd.vbank().get(vn)?;
    if v.get_space().get_type() == unlace_base::space::spacetype::IPTR_IOP {
        return None;
    }
    Some(v.get_create_index() as uintb)
}

/// C++ `TypeOpFloatInt2Float::absorbZext` (typeop.cc:1874): if the
/// `FLOAT_INT2FLOAT` op's in0 is an implied, written Varnode whose defining op
/// is an `INT_ZEXT`, return that ZEXT op (its source is the real conversion
/// input — the cast's `(floatN)` absorbs the zero-extension).  Otherwise
/// `None`.
pub(super) fn absorb_zext(fd: &Funcdata, op: OpId) -> Option<OpId> {
    let vn0 = fd.obank().get(op).and_then(|o| o.get_in(0))?;
    let v = fd.vbank().get(vn0)?;
    if v.is_written() && v.is_implied() {
        let zext = v.get_def()?;
        if fd.obank().get(zext).map(|o| o.code()) == Some(OpCode::CPUI_INT_ZEXT) {
            return Some(zext);
        }
    }
    None
}

/// How the integer path of `push_vn_explicit_ir` prints one constant.
pub(super) struct IntegerLiteral {
    pub(super) display_fmt: u32,
    pub(super) sign: bool,
    pub(super) force_unsigned: bool,
    pub(super) force_sized: bool,
    pub(super) size_suffix: &'static str,
}

impl IntegerLiteral {
    /// (unlace `castwiden`) Print the literal with the size suffix of an 8-byte
    /// integer, `UL` when `unsigned`: `-4UL` is the unsigned value of the bits
    /// `-4` spells, as `(unsigned long)-4` is.
    pub(super) fn suffix_as_long(&mut self, arch: &Architecture, unsigned: bool) {
        let ll = arch.types().get_size_of_long() == arch.types().get_size_of_int();
        self.force_sized = true;
        self.size_suffix = match (unsigned, ll) {
            (false, false) => "L",
            (false, true) => "LL",
            (true, false) => "UL",
            (true, true) => "ULL",
        };
        if unsigned {
            self.force_unsigned = false;
        }
    }
}

/// C++ `castStrategy = data.getArch()->print->getCastStrategy()` (the
/// `CastStrategyC` the C printer holds).  Rebuilt here from the bound type
/// factory each time it is needed (the strategy is stateless apart from the
/// factory + `promoteSize = tlst->getSizeOfInt()`, so the rebuild is exact).
pub(super) fn cast_strategy_for(arch: &Architecture) -> Option<CastStrategyC> {
    let tlst = arch.types_rc() as std::rc::Rc<dyn crate::dtype::TypeFactory>;
    let c = arch
        .unlace_options
        .get::<crate::coreoptions::CallTargetType>()
        .0
        && arch.unlace_options.get::<crate::coreoptions::CTypes>().0
        && arch.print().out_lang() == crate::lang::OutLang::C;
    let java = arch.print().out_lang() == crate::lang::OutLang::Java;
    Some(
        CastStrategyC::new(tlst)
            .with_record_identity(c)
            .with_java(java),
    )
}

pub(super) struct PointerView<'a> {
    pub(super) pc: &'a PrintC,
    pub(super) fd: &'a Funcdata,
}

impl crate::pointerargs::PrintedPointers for PointerView<'_> {
    fn spell(&self, ty: &std::rc::Rc<crate::dtype::Datatype>) -> String {
        let (front, back) = declarator_parts(ty, self.pc.rt_ctx.clone());
        front + &back
    }

    fn address(&self, high: crate::context::HighVariableId) -> Option<(String, String)> {
        use crate::dtype::type_metatype::{TYPE_ARRAY, TYPE_STRUCT, TYPE_UNION};
        let h = self.fd.high_bank().get(high)?;
        if h.unlace_symbol_type()
            .is_some_and(|t| matches!(t.get_metatype(), TYPE_ARRAY | TYPE_STRUCT | TYPE_UNION))
        {
            return None;
        }
        let (name, offset, _) = self.pc.emitted_high_symbol(self.fd, high)?;
        if offset > 0 {
            return None;
        }
        self.pc.pointer_decls.address(&name).map(|ty| (name, ty))
    }
}

/// (unlace `castimplied`) The printer's answers to what
/// [`crate::castimplied`] asks about how an op prints.
pub(super) struct ImpliedView<'a> {
    pub(super) pc: &'a PrintC,
    pub(super) fd: &'a Funcdata,
    pub(super) arch: &'a Architecture,
    pub(super) strat: CastStrategyC,
}

impl crate::castimplied::PrintedForms for ImpliedView<'_> {
    fn spell(&self, ty: &std::rc::Rc<crate::dtype::Datatype>) -> String {
        let (front, back) = declarator_parts(ty, self.pc.rt_ctx.clone());
        front + &back
    }

    fn extension_is_cast(&self, op: OpId) -> bool {
        let Some((out, inn)) = self.pc.sext_zext_facing_types(self.fd, op) else {
            return false;
        };
        match self.fd.obank().get(op).map(|o| o.code()) {
            Some(OpCode::CPUI_INT_SEXT) => self.strat.is_sext_cast(&out, &inn),
            Some(OpCode::CPUI_INT_ZEXT) => self.strat.is_zext_cast(&out, &inn),
            _ => false,
        }
    }

    fn extension_hidden(&self, op: OpId, read_op: Option<OpId>) -> bool {
        self.pc.options.hide_exts
            && self
                .pc
                .is_extension_cast_implied(self.fd, &self.strat, op, read_op)
    }

    fn sign_dropped(&self, op: OpId) -> bool {
        self.pc.sign_plan.drop_cast(self.fd, op)
    }

    fn truncation_is_cast(&self, op: OpId) -> bool {
        !self
            .fd
            .obank()
            .get(op)
            .is_some_and(|o| o.does_special_printing())
            && self.pc.subpiece_cast_form(self.fd, self.arch, op).is_some()
    }

    fn high_name(&self, high: crate::context::HighVariableId) -> Option<String> {
        self.pc.emitted_high_name(self.fd, high)
    }

    fn planned_decl_type(
        &self,
        high: crate::context::HighVariableId,
    ) -> Option<std::rc::Rc<crate::dtype::Datatype>> {
        self.pc.sign_plan.decl_type(high).cloned()
    }

    fn is_statement(&self, op: OpId) -> bool {
        self.pc.stmt_op == Some(op)
    }

    fn literal_token(&self, vn: VarnodeId, op: OpId) -> Option<String> {
        self.pc.integer_constant_token(self.fd, self.arch, vn, op)
    }

    fn long_size(&self) -> i32 {
        self.arch.types().get_size_of_long()
    }

    fn integer_token(&self, vn: VarnodeId, op: OpId, suffix: Option<bool>) -> Option<String> {
        use crate::dtype::type_metatype::{TYPE_INT, TYPE_UINT, TYPE_UNKNOWN};
        let v = self.fd.vbank().get(vn)?;
        if !v.is_constant() || v.is_annotation() {
            return None;
        }
        let ct = self.fd.vn_type_read_facing(vn, op);
        if ct.is_enum_type()
            || ct.is_char_print()
            || !matches!(ct.get_metatype(), TYPE_INT | TYPE_UINT | TYPE_UNKNOWN)
        {
            return None;
        }
        let mut lit = self.pc.integer_literal(self.fd, self.arch, vn, &ct);
        self.pc.signed_decimal(
            self.fd,
            self.arch,
            op,
            v.get_offset(),
            v.get_size(),
            &mut lit,
        );
        if let Some(unsigned) = suffix {
            lit.suffix_as_long(self.arch, unsigned);
        }
        Some(self.pc.integer_token(
            v.get_offset(),
            v.get_size(),
            lit.display_fmt,
            lit.sign,
            lit.force_unsigned,
            lit.force_sized,
            lit.size_suffix,
        ))
    }

    fn global_declared_type(&self, addr: u64) -> Option<std::rc::Rc<crate::dtype::Datatype>> {
        self.pc.globalref.declared_type(addr)
    }
}

/// An immutable [`CastContext`] over `&Funcdata` for the print-time
/// `isExtensionCastImplied` query (C++ the `Varnode *`/`PcodeOp *` the const
/// `CastStrategyC::isExtensionCastImplied` dereferences).
///
/// `isExtensionCastImplied` makes only read-only IR queries, so unlike the
/// cast-insertion-phase [`crate::coreaction_casts::FuncdataCastContext`] (which
/// needs `&mut Funcdata` for the lazy HighVariable recompute and the constant
/// print-flag mutators) this bridge borrows `&Funcdata` and never mutates.  It
/// interns `VarnodeId`/`OpId` behind the opaque [`VnRef`]/[`OpRef`] handles via a
/// `RefCell<Vec<_>>` (index == handle), exactly as `FuncdataCastContext` does, so
/// the handles reproduce C++ pointer identity without a HashMap (clippy-banned).
///
/// Read-facing types resolve through the bare-Varnode accessor (the W10 print
/// convention; by print-time the merged HighVariable type is pinned onto the
/// Varnode). // STUB(W8 union findResolve)
pub(super) struct PrintCastContext<'a> {
    fd: &'a Funcdata,
    vn_intern: std::cell::RefCell<Vec<VarnodeId>>,
    op_intern: std::cell::RefCell<Vec<OpId>>,
}

impl<'a> PrintCastContext<'a> {
    pub(super) fn new(fd: &'a Funcdata) -> PrintCastContext<'a> {
        PrintCastContext {
            fd,
            vn_intern: std::cell::RefCell::new(Vec::new()),
            op_intern: std::cell::RefCell::new(Vec::new()),
        }
    }

    pub(super) fn vn_ref(&self, vn: VarnodeId) -> VnRef {
        let mut tab = self.vn_intern.borrow_mut();
        if let Some(i) = tab.iter().position(|&k| k == vn) {
            return VnRef(i);
        }
        tab.push(vn);
        VnRef(tab.len() - 1)
    }

    pub(super) fn op_ref(&self, op: OpId) -> OpRef {
        let mut tab = self.op_intern.borrow_mut();
        if let Some(i) = tab.iter().position(|&k| k == op) {
            return OpRef(i);
        }
        tab.push(op);
        OpRef(tab.len() - 1)
    }

    pub(super) fn vn_key(&self, vn: VnRef) -> VarnodeId {
        self.vn_intern.borrow()[vn.0]
    }

    pub(super) fn op_key(&self, op: OpRef) -> OpId {
        self.op_intern.borrow()[op.0]
    }
}

impl CastContext for PrintCastContext<'_> {
    fn op_code(&self, op: OpRef) -> OpCode {
        let op = self.op_key(op);
        self.fd
            .obank()
            .get(op)
            .expect("print cast ctx: stale op")
            .code()
    }

    fn op_num_input(&self, op: OpRef) -> int4 {
        let op = self.op_key(op);
        self.fd
            .obank()
            .get(op)
            .expect("print cast ctx: stale op")
            .num_input()
    }

    fn op_in(&self, op: OpRef, slot: int4) -> VnRef {
        let opk = self.op_key(op);
        let vn = self
            .fd
            .obank()
            .get(opk)
            .expect("print cast ctx: stale op")
            .get_in(slot)
            .expect("print cast ctx: missing input slot");
        self.vn_ref(vn)
    }

    fn op_out(&self, op: OpRef) -> Option<VnRef> {
        let opk = self.op_key(op);
        let out = self
            .fd
            .obank()
            .get(opk)
            .expect("print cast ctx: stale op")
            .get_out();
        out.map(|vn| self.vn_ref(vn))
    }

    fn op_slot(&self, op: OpRef, vn: VnRef) -> int4 {
        let opk = self.op_key(op);
        let vnk = self.vn_key(vn);
        self.fd
            .obank()
            .get(opk)
            .expect("print cast ctx: stale op")
            .get_slot(vnk)
    }

    fn vn_is_constant(&self, vn: VnRef) -> bool {
        let vn = self.vn_key(vn);
        self.fd
            .vbank()
            .get(vn)
            .expect("print cast ctx: stale vn")
            .is_constant()
    }

    fn vn_is_explicit(&self, vn: VnRef) -> bool {
        let vn = self.vn_key(vn);
        self.fd
            .vbank()
            .get(vn)
            .expect("print cast ctx: stale vn")
            .is_explicit()
    }

    fn vn_is_written(&self, vn: VnRef) -> bool {
        let vn = self.vn_key(vn);
        self.fd
            .vbank()
            .get(vn)
            .expect("print cast ctx: stale vn")
            .is_written()
    }

    fn vn_size(&self, vn: VnRef) -> int4 {
        let vn = self.vn_key(vn);
        self.fd
            .vbank()
            .get(vn)
            .expect("print cast ctx: stale vn")
            .get_size()
    }

    fn vn_offset(&self, vn: VnRef) -> uintb {
        let vn = self.vn_key(vn);
        self.fd
            .vbank()
            .get(vn)
            .expect("print cast ctx: stale vn")
            .get_offset()
    }

    fn vn_def(&self, vn: VnRef) -> Option<OpRef> {
        let vn = self.vn_key(vn);
        let def = self
            .fd
            .vbank()
            .get(vn)
            .expect("print cast ctx: stale vn")
            .get_def();
        def.map(|op| self.op_ref(op))
    }

    fn vn_lone_descend(&self, vn: VnRef) -> Option<OpRef> {
        let vnk = self.vn_key(vn);
        self.fd.lone_descend(vnk).map(|op| self.op_ref(op))
    }

    fn vn_high_type(&self, vn: VnRef) -> std::rc::Rc<crate::dtype::Datatype> {
        let vnk = self.vn_key(vn);
        // Bare-Varnode type (the W10 print convention; high type pinned by
        // print-time). // STUB(W8 union findResolve)
        self.fd
            .vbank()
            .get(vnk)
            .expect("print cast ctx: stale vn")
            .get_type()
            .clone()
    }

    fn vn_high_type_read_facing(
        &self,
        vn: VnRef,
        op: OpRef,
    ) -> std::rc::Rc<crate::dtype::Datatype> {
        let vnk = self.vn_key(vn);
        let opk = self.op_key(op);
        self.fd.vn_type_read_facing(vnk, opk)
    }

    fn op_inherits_sign(&self, op: OpRef) -> bool {
        crate::typeop::type_op_info(self.op_code(op)).inherits_sign()
    }

    fn op_inherits_sign_first_param_only(&self, op: OpRef) -> bool {
        crate::typeop::type_op_info(self.op_code(op)).inherits_sign_first_param_only()
    }

    fn op_is_shift_op(&self, op: OpRef) -> bool {
        crate::typeop::type_op_info(self.op_code(op)).is_shift_op()
    }

    fn op_is_bool_output(&self, op: OpRef) -> bool {
        let opk = self.op_key(op);
        self.fd
            .obank()
            .get(opk)
            .expect("print cast ctx: stale op")
            .is_bool_output()
    }

    fn op_is_call(&self, op: OpRef) -> bool {
        let opk = self.op_key(op);
        self.fd
            .obank()
            .get(opk)
            .expect("print cast ctx: stale op")
            .is_call()
    }

    fn vn_set_unsigned_print(&mut self, _vn: VnRef) {
        // Only reached by `mark_explicit_unsigned`/`mark_explicit_long_size`, which
        // the print-time `isExtensionCastImplied` query never calls.  The immutable
        // print path holds no `&mut Funcdata`, so this is unreachable here.
        unreachable!(
            "PrintCastContext is read-only: vn_set_unsigned_print not used by isExtensionCastImplied"
        );
    }

    fn vn_set_long_print(&mut self, _vn: VnRef) {
        unreachable!(
            "PrintCastContext is read-only: vn_set_long_print not used by isExtensionCastImplied"
        );
    }
}

/// C++ `op->getOpcode()->getOperatorName(op)` for the op-codes rendered through
/// `PrintC::opFunc` (printc.cc:449).  Most opcodes return the bare static name
/// ([`opcode_print_name`]), but several `TypeOp*` overrides append the operand
/// sizes to disambiguate the functional form: ZEXT/SEXT/SUBPIECE append
/// `in0.size`+`out.size` (typeop.cc:1124/1150/2129), CONCAT appends
/// `in0.size`+`in1.size` (typeop.cc:2050), and CARRY/SCARRY/SBORROW append
/// `in0.size` (typeop.cc:1342/1358/1374).  Matches the raw-printer's
/// `operator_name` (funcdata_printraw.rs).
pub(super) fn func_operator_name(fd: &Funcdata, op: OpId, opc: OpCode) -> String {
    use OpCode::*;
    let base = opcode_print_name(opc);
    let in_size = |i: int4| -> Option<int4> {
        fd.obank()
            .get(op)
            .and_then(|o| o.get_in(i))
            .and_then(|v| fd.vbank().get(v))
            .map(|vn| vn.get_size())
    };
    let out_size = || -> Option<int4> {
        fd.obank()
            .get(op)
            .and_then(|o| o.get_out())
            .and_then(|v| fd.vbank().get(v))
            .map(|vn| vn.get_size())
    };
    match opc {
        CPUI_INT_ZEXT | CPUI_INT_SEXT | CPUI_SUBPIECE => match (in_size(0), out_size()) {
            (Some(a), Some(b)) => format!("{base}{a}{b}"),
            _ => base,
        },
        CPUI_PIECE => match (in_size(0), in_size(1)) {
            (Some(a), Some(b)) => format!("{base}{a}{b}"),
            _ => base,
        },
        CPUI_INT_CARRY | CPUI_INT_SCARRY | CPUI_INT_SBORROW => match in_size(0) {
            Some(a) => format!("{base}{a}"),
            None => base,
        },
        _ => base,
    }
}

/// The functional print name for an opcode (C++ the `TypeOp::getOperatorName`
/// uppercase form used by `opFunc`).  Faithful for the common functional ops;
/// falls back to the raw opcode name otherwise.
pub(super) fn opcode_print_name(opc: OpCode) -> String {
    use OpCode::*;
    match opc {
        CPUI_INT_ZEXT => "ZEXT".to_string(),
        CPUI_INT_SEXT => "SEXT".to_string(),
        CPUI_PIECE => "CONCAT".to_string(),
        CPUI_SUBPIECE => "SUB".to_string(),
        CPUI_INT_CARRY => "CARRY".to_string(),
        CPUI_INT_SCARRY => "SCARRY".to_string(),
        CPUI_INT_SBORROW => "SBORROW".to_string(),
        CPUI_POPCOUNT => "POPCOUNT".to_string(),
        CPUI_LZCOUNT => "LZCOUNT".to_string(),
        CPUI_FLOAT_NAN => "NAN".to_string(),
        CPUI_FLOAT_ABS => "ABS".to_string(),
        CPUI_FLOAT_SQRT => "SQRT".to_string(),
        other => format!("{other:?}").trim_start_matches("CPUI_").to_string(),
    }
}

/// Convert a [`crate::printlanguage::SyntaxHighlight`] (the [`Atom`] field, the
/// forward placeholder) to the [`prettyprint`](crate::prettyprint) enum the
/// [`Emit`] driver consumes.  Both carry the same 11 discriminants in the same
/// order (printlanguage.hh / prettyprint.hh "must match ClangToken").
pub(super) fn to_emit_hl(hl: crate::printlanguage::SyntaxHighlight) -> SyntaxHighlight {
    use crate::printlanguage::SyntaxHighlight as Pl;
    match hl {
        Pl::keyword_color => SyntaxHighlight::KeywordColor,
        Pl::comment_color => SyntaxHighlight::CommentColor,
        Pl::type_color => SyntaxHighlight::TypeColor,
        Pl::funcname_color => SyntaxHighlight::FuncnameColor,
        Pl::var_color => SyntaxHighlight::VarColor,
        Pl::const_color => SyntaxHighlight::ConstColor,
        Pl::param_color => SyntaxHighlight::ParamColor,
        Pl::global_color => SyntaxHighlight::GlobalColor,
        Pl::no_color => SyntaxHighlight::NoColor,
        Pl::error_color => SyntaxHighlight::ErrorColor,
        Pl::special_color => SyntaxHighlight::SpecialColor,
    }
}
