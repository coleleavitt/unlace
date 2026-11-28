//! P-code construct templates and builder dispatch, from
//! `decompiler/cpp/semantics.{hh,cc}`.
//!
//! [`ConstTpl`] resolves constants, handle references and instruction-address
//! placeholders through [`SymbolWalker`]. Address-space constants store manager
//! indices instead of process pointers. A null space encodes as zero.
//! `fix_space` distinguishes a nullable result from a resolution error.
//!
//! [`VarnodeTpl`], [`OpTpl`], [`HandleTpl`] and [`ConstructTpl`] own their child
//! values and encode or decode the compiled `.sla` representation. Their mutable
//! accessors also support compiler construction and size propagation.
//!
//! [`PcodeBuilder`] dispatches template operations. Implementors provide label
//! state and their own walker; the runtime implementation lives in
//! [`crate::sleigh`].

use std::rc::Rc;

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::marshal::{Decoder, Encoder};
use unlace_base::space::{AddrSpace, spacetype};
use unlace_base::types::Wrap;
use unlace_num::opcodes::{OpCode, OpcodeDecoder, OpcodeEncoder};

use crate::context::FixedHandle;
use crate::slghsymbol::SymbolWalker;

/// SLA IDs used by the template system.
pub use crate::slaformat::ids as sla;

// We remap these opcodes for internal use during pcode generation
// (semantics.hh `#define`s).

/// C++ `BUILD` (remapped `CPUI_MULTIEQUAL`)
pub const BUILD: OpCode = OpCode::CPUI_MULTIEQUAL;
/// C++ `DELAY_SLOT` (remapped `CPUI_INDIRECT`)
pub const DELAY_SLOT: OpCode = OpCode::CPUI_INDIRECT;
/// C++ `CROSSBUILD` (remapped `CPUI_PTRSUB`)
pub const CROSSBUILD: OpCode = OpCode::CPUI_PTRSUB;
/// C++ `MACROBUILD` (remapped `CPUI_CAST`)
pub const MACROBUILD: OpCode = OpCode::CPUI_CAST;
/// C++ `LABELBUILD` (remapped `CPUI_PTRADD`)
pub const LABELBUILD: OpCode = OpCode::CPUI_PTRADD;

/// C++ `ConstTpl::const_type` (discriminants match the C++ enum values;
/// the derived order is the C++ `type < op2.type` integer order).
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq, PartialOrd, Ord)]
pub enum ConstType {
    /// C++ `real`: an actual constant
    #[default]
    Real = 0,
    /// C++ `handle`: reference into the fixed-handle array
    Handle = 1,
    /// C++ `j_start`
    JStart = 2,
    /// C++ `j_next`
    JNext = 3,
    /// C++ `j_next2`
    JNext2 = 4,
    /// C++ `j_curspace`
    JCurspace = 5,
    /// C++ `j_curspace_size`
    JCurspaceSize = 6,
    /// C++ `spaceid`
    Spaceid = 7,
    /// C++ `j_relative`
    JRelative = 8,
    /// C++ `j_flowref`
    JFlowref = 9,
    /// C++ `j_flowref_size`
    JFlowrefSize = 10,
    /// C++ `j_flowdest`
    JFlowdest = 11,
    /// C++ `j_flowdest_size`
    JFlowdestSize = 12,
}

/// C++ `ConstTpl::v_field`: which part of a handle to use as the constant
/// (discriminants match the C++ enum values).
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq, PartialOrd, Ord)]
pub enum VField {
    /// C++ `v_space`
    #[default]
    VSpace = 0,
    /// C++ `v_offset`
    VOffset = 1,
    /// C++ `v_size`
    VSize = 2,
    /// C++ `v_offset_plus`
    VOffsetPlus = 3,
}

/// C++ `(uintb)(uintp)spc`: encode a space "pointer" as a `u64`.  The port
/// stores the space's manager index (unlace-num `pcoderaw.rs` convention,
/// `VarnodeData::get_space_from_const`).
fn space_to_const(spc: &Rc<AddrSpace>) -> u64 {
    spc.get_index() as u64 // cast: manager indices are small and non-negative
}

/// [`space_to_const`] over a nullable pointer (C++ null casts to 0).
fn opt_space_to_const(spc: &Option<Rc<AddrSpace>>) -> u64 {
    spc.as_ref().map_or(0, space_to_const)
}

/// C++ raw-pointer equality over nullable space pointers (null == null).
fn opt_space_ptr_eq(a: &Option<Rc<AddrSpace>>, b: &Option<Rc<AddrSpace>>) -> bool {
    match (a, b) {
        (Some(a), Some(b)) => Rc::ptr_eq(a, b),
        (None, None) => true,
        _ => false,
    }
}

// ---------------------------------------------------------------------------
// ConstTpl
// ---------------------------------------------------------------------------

/// C++ `ConstTpl`: a constant value template, instantiated at
/// instruction-decode time against a `ParserWalker`.
#[derive(Debug, Clone, Default)]
pub struct ConstTpl {
    /// C++ `type`
    type_: ConstType,
    /// C++ union arm `value.spaceid` (meaningful when `type_ == Spaceid`)
    value_spaceid: Option<Rc<AddrSpace>>,
    /// C++ union arm `value.handle_index` (meaningful when `type_ == Handle`)
    value_handle_index: i32,
    /// C++ `value_real`
    value_real: u64,
    /// C++ `select`: which part of the handle to use as the constant
    select: VField,
}

impl ConstTpl {
    /// C++ `ConstTpl(void)`: a real constant 0.
    pub fn new() -> ConstTpl {
        ConstTpl::default()
    }

    /// C++ `ConstTpl(const_type tp)`: constructor for relative jump
    /// constants and uniques.  (C++ leaves the other fields uninitialized;
    /// the port zeroes them.)
    pub fn new_type(tp: ConstType) -> ConstTpl {
        ConstTpl {
            type_: tp,
            ..ConstTpl::default()
        }
    }

    /// C++ `ConstTpl(const_type tp,uintb val)`: constructor for real
    /// constants.
    pub fn new_real(tp: ConstType, val: u64) -> ConstTpl {
        ConstTpl {
            type_: tp,
            value_spaceid: None,
            value_handle_index: 0,
            value_real: val,
            select: VField::VSpace,
        }
    }

    /// C++ `ConstTpl(const_type tp,int4 ht,v_field vf)`: constructor for a
    /// handle constant.  (The C++ signature takes a `const_type` parameter
    /// but unconditionally assigns `type = handle`; the parameter is
    /// dropped.)
    pub fn new_handle(ht: i32, vf: VField) -> ConstTpl {
        ConstTpl {
            type_: ConstType::Handle,
            value_spaceid: None,
            value_handle_index: ht,
            value_real: 0,
            select: vf,
        }
    }

    /// C++ `ConstTpl(const_type tp,int4 ht,v_field vf,uintb plus)` (same
    /// dropped-parameter note as [`ConstTpl::new_handle`]).
    pub fn new_handle_plus(ht: i32, vf: VField, plus: u64) -> ConstTpl {
        ConstTpl {
            type_: ConstType::Handle,
            value_spaceid: None,
            value_handle_index: ht,
            value_real: plus,
            select: vf,
        }
    }

    /// C++ `ConstTpl(AddrSpace *sid)`.
    pub fn new_space(sid: Rc<AddrSpace>) -> ConstTpl {
        ConstTpl {
            type_: ConstType::Spaceid,
            value_spaceid: Some(sid),
            value_handle_index: 0,
            value_real: 0,
            select: VField::VSpace,
        }
    }

    /// C++ `isConstSpace`.
    pub fn is_const_space(&self) -> bool {
        if self.type_ == ConstType::Spaceid {
            return self.get_space().get_type() == spacetype::IPTR_CONSTANT;
        }
        false
    }

    /// C++ `isUniqueSpace`.
    pub fn is_unique_space(&self) -> bool {
        if self.type_ == ConstType::Spaceid {
            return self.get_space().get_type() == spacetype::IPTR_INTERNAL;
        }
        false
    }

    /// C++ `getReal`.
    pub fn get_real(&self) -> u64 {
        self.value_real
    }

    /// C++ `getSpace` (the union spaceid arm; C++ reads it unchecked, so a
    /// non-spaceid `ConstTpl` is an internal invariant violation here).
    pub fn get_space(&self) -> Rc<AddrSpace> {
        Rc::clone(
            self.value_spaceid
                .as_ref()
                .expect("ConstTpl::get_space on a ConstTpl without a space"),
        )
    }

    /// C++ `getHandleIndex`.
    pub fn get_handle_index(&self) -> i32 {
        self.value_handle_index
    }

    /// C++ `getType`.
    pub fn get_type(&self) -> ConstType {
        self.type_
    }

    /// C++ `getSelect`.
    pub fn get_select(&self) -> VField {
        self.select
    }

    /// C++ `isZero`.
    pub fn is_zero(&self) -> bool {
        self.type_ == ConstType::Real && self.value_real == 0
    }

    /// C++ `operator<`.  Where C++ ordered the `spaceid` case by raw heap
    /// pointer (nondeterministic), the port orders by manager index, with a
    /// null pointer ordering before every space.
    pub fn less_than(&self, op2: &ConstTpl) -> bool {
        if self.type_ != op2.type_ {
            return self.type_ < op2.type_;
        }
        match self.type_ {
            ConstType::Real => self.value_real < op2.value_real,
            ConstType::Handle => {
                if self.value_handle_index != op2.value_handle_index {
                    return self.value_handle_index < op2.value_handle_index;
                }
                if self.select != op2.select {
                    return self.select < op2.select;
                }
                false
            }
            ConstType::Spaceid => {
                // C++ `value.spaceid < op2.value.spaceid` (pointer order);
                // deterministic substitute: manager-index order, None first.
                let i1 = self.value_spaceid.as_ref().map(|s| s.get_index());
                let i2 = op2.value_spaceid.as_ref().map(|s| s.get_index());
                i1 < i2
            }
            _ => false, // Nothing additional to compare
        }
    }

    /// C++ `fix(const ParserWalker &)`: get the value of the ConstTpl in
    /// context.  NOTE: if the property is dynamic this returns the property
    /// of the temporary storage.
    pub fn fix(&self, walker: &(impl SymbolWalker + ?Sized)) -> UnlaceResult<u64> {
        match self.type_ {
            // Fill in starting address placeholder with real address
            ConstType::JStart => Ok(walker.get_addr().get_offset()),
            // Fill in next address placeholder with real address
            ConstType::JNext => Ok(walker.get_naddr().get_offset()),
            // Fill in next2 address placeholder with real address
            ConstType::JNext2 => Ok(walker.get_n2addr()?.get_offset()),
            ConstType::JFlowref => Ok(walker.get_ref_addr()?.get_offset()),
            ConstType::JFlowrefSize => {
                // cast: Address::getAddrSize is int4, non-negative
                Ok(walker.get_ref_addr()?.get_addr_size() as u64)
            }
            ConstType::JFlowdest => Ok(walker.get_dest_addr()?.get_offset()),
            ConstType::JFlowdestSize => {
                // cast: Address::getAddrSize is int4, non-negative
                Ok(walker.get_dest_addr()?.get_addr_size() as u64)
            }
            ConstType::JCurspaceSize => Ok(u64::from(walker.get_cur_space().get_addr_size())),
            ConstType::JCurspace => Ok(space_to_const(&walker.get_cur_space())),
            ConstType::Handle => {
                let hand = walker.borrow_fixed_handle(self.value_handle_index)?;
                match self.select {
                    VField::VSpace => {
                        if hand.offset_space.is_none() {
                            Ok(opt_space_to_const(&hand.space))
                        } else {
                            Ok(opt_space_to_const(&hand.temp_space))
                        }
                    }
                    VField::VOffset => {
                        if hand.offset_space.is_none() {
                            Ok(hand.offset_offset)
                        } else {
                            Ok(hand.temp_offset)
                        }
                    }
                    VField::VSize => Ok(u64::from(hand.size)),
                    VField::VOffsetPlus => {
                        let const_space = walker.get_const_space();
                        let is_const =
                            matches!(&hand.space, Some(s) if Rc::ptr_eq(s, &const_space));
                        if !is_const {
                            // If we are not a constant:
                            // adjust offset by truncation amount
                            if hand.offset_space.is_none() {
                                Ok(hand.offset_offset.wadd(self.value_real & 0xffff))
                            } else {
                                Ok(hand.temp_offset.wadd(self.value_real & 0xffff))
                            }
                        } else {
                            // If we are a constant, we want to return a
                            // shifted value
                            let val = if hand.offset_space.is_none() {
                                hand.offset_offset
                            } else {
                                hand.temp_offset
                            };
                            // cast: shift count `8*(value_real>>16)`; C++
                            // `>>=` is UB for counts >= 64, wshr wraps
                            Ok(val.wshr(8u64.wmul(self.value_real >> 16) as u32))
                        }
                    }
                }
            }
            ConstType::JRelative | ConstType::Real => Ok(self.value_real),
            ConstType::Spaceid => Ok(opt_space_to_const(&self.value_spaceid)),
        }
    }

    /// C++ `fixSpace`: get the value of the ConstTpl in context when we
    /// know it is a space.  `Option` mirrors the nullable C++ result
    /// pointer; `Err` mirrors the C++ `LowlevelError`.
    pub fn fix_space(
        &self,
        walker: &(impl SymbolWalker + ?Sized),
    ) -> UnlaceResult<Option<Rc<AddrSpace>>> {
        match self.type_ {
            ConstType::JCurspace => return Ok(Some(walker.get_cur_space())),
            ConstType::Handle => {
                let hand = walker.borrow_fixed_handle(self.value_handle_index)?;
                if self.select == VField::VSpace {
                    return Ok(crate::handleview::resolved_space(hand));
                }
                // other selects fall through to the throw
            }
            ConstType::Spaceid => return Ok(self.value_spaceid.clone()),
            ConstType::JFlowref => return Ok(walker.get_ref_addr()?.get_space().cloned()),
            _ => {}
        }
        Err(UnlaceError::lowlevel(
            "ConstTpl is not a spaceid as expected",
        ))
    }

    /// C++ `fillinSpace`: fill in the space portion of a FixedHandle, based
    /// on this ConstTpl.
    pub fn fillin_space(
        &self,
        hand: &mut FixedHandle,
        walker: &(impl SymbolWalker + ?Sized),
    ) -> UnlaceResult<()> {
        match self.type_ {
            ConstType::JCurspace => {
                hand.space = Some(walker.get_cur_space());
                return Ok(());
            }
            ConstType::Handle => {
                let otherhand = walker.borrow_fixed_handle(self.value_handle_index)?;
                if self.select == VField::VSpace {
                    hand.space = crate::handleview::export_space(otherhand);
                    return Ok(());
                }
                // other selects fall through to the throw
            }
            ConstType::Spaceid => {
                hand.space = self.value_spaceid.clone();
                return Ok(());
            }
            _ => {}
        }
        Err(UnlaceError::lowlevel(
            "ConstTpl is not a spaceid as expected",
        ))
    }

    /// C++ `fillinOffset`: fill in the offset portion of a FixedHandle,
    /// based on this ConstTpl.  If the offset value is dynamic, indicate
    /// this in the handle; we don't just fill in the temporary variable
    /// offset.  We assume hand.space is already filled in.
    pub fn fillin_offset(
        &self,
        hand: &mut FixedHandle,
        walker: &(impl SymbolWalker + ?Sized),
    ) -> UnlaceResult<()> {
        if self.type_ == ConstType::Handle {
            let otherhand = walker.borrow_fixed_handle(self.value_handle_index)?;
            crate::handleview::export_offset(otherhand, hand);
        } else {
            hand.offset_space = None;
            let fixed = self.fix(walker)?;
            let space = hand.space.as_ref().expect(
                "FixedHandle.space must be filled in before fillinOffset (C++ dereferences unconditionally)",
            );
            hand.offset_offset = space.wrap_offset(fixed);
        }
        Ok(())
    }

    /// C++ `transfer`: replace old handles with new handles.
    pub fn transfer(&mut self, params: &[HandleTpl]) -> UnlaceResult<()> {
        if self.type_ != ConstType::Handle {
            return Ok(());
        }
        // cast: C++ indexes vector<HandleTpl *> with int4
        let newhandle = &params[self.value_handle_index as usize];

        match self.select {
            VField::VSpace => {
                *self = newhandle.get_space().clone();
            }
            VField::VOffset => {
                *self = newhandle.get_ptr_offset().clone();
            }
            VField::VOffsetPlus => {
                let tmp = self.value_real;
                *self = newhandle.get_ptr_offset().clone();
                if self.type_ == ConstType::Real {
                    self.value_real = self.value_real.wadd(tmp & 0xffff);
                } else if self.type_ == ConstType::Handle && self.select == VField::VOffset {
                    self.select = VField::VOffsetPlus;
                    self.value_real = tmp;
                } else {
                    return Err(UnlaceError::lowlevel(
                        "Cannot truncate macro input in this way",
                    ));
                }
            }
            VField::VSize => {
                *self = newhandle.get_size().clone();
            }
        }
        Ok(())
    }

    /// C++ `changeHandleIndex`.
    pub fn change_handle_index(&mut self, handmap: &[i32]) {
        if self.type_ == ConstType::Handle {
            // cast: C++ indexes vector<int4> with int4
            self.value_handle_index = handmap[self.value_handle_index as usize];
        }
    }

    /// C++ `encode`.
    pub fn encode(&self, encoder: &mut dyn Encoder) {
        match self.type_ {
            ConstType::Real => {
                encoder.open_element(&sla::ELEM_CONST_REAL);
                encoder.write_unsigned_integer(&sla::ATTRIB_VAL, self.value_real);
                encoder.close_element(&sla::ELEM_CONST_REAL);
            }
            ConstType::Handle => {
                encoder.open_element(&sla::ELEM_CONST_HANDLE);
                encoder.write_signed_integer(&sla::ATTRIB_VAL, i64::from(self.value_handle_index));
                encoder.write_signed_integer(&sla::ATTRIB_S, self.select as i64);
                if self.select == VField::VOffsetPlus {
                    encoder.write_unsigned_integer(&sla::ATTRIB_PLUS, self.value_real);
                }
                encoder.close_element(&sla::ELEM_CONST_HANDLE);
            }
            ConstType::JStart => {
                encoder.open_element(&sla::ELEM_CONST_START);
                encoder.close_element(&sla::ELEM_CONST_START);
            }
            ConstType::JNext => {
                encoder.open_element(&sla::ELEM_CONST_NEXT);
                encoder.close_element(&sla::ELEM_CONST_NEXT);
            }
            ConstType::JNext2 => {
                encoder.open_element(&sla::ELEM_CONST_NEXT2);
                encoder.close_element(&sla::ELEM_CONST_NEXT2);
            }
            ConstType::JCurspace => {
                encoder.open_element(&sla::ELEM_CONST_CURSPACE);
                encoder.close_element(&sla::ELEM_CONST_CURSPACE);
            }
            ConstType::JCurspaceSize => {
                encoder.open_element(&sla::ELEM_CONST_CURSPACE_SIZE);
                encoder.close_element(&sla::ELEM_CONST_CURSPACE_SIZE);
            }
            ConstType::Spaceid => {
                encoder.open_element(&sla::ELEM_CONST_SPACEID);
                encoder.write_space(&sla::ATTRIB_SPACE, &self.get_space());
                encoder.close_element(&sla::ELEM_CONST_SPACEID);
            }
            ConstType::JRelative => {
                encoder.open_element(&sla::ELEM_CONST_RELATIVE);
                encoder.write_unsigned_integer(&sla::ATTRIB_VAL, self.value_real);
                encoder.close_element(&sla::ELEM_CONST_RELATIVE);
            }
            ConstType::JFlowref => {
                encoder.open_element(&sla::ELEM_CONST_FLOWREF);
                encoder.close_element(&sla::ELEM_CONST_FLOWREF);
            }
            ConstType::JFlowrefSize => {
                encoder.open_element(&sla::ELEM_CONST_FLOWREF_SIZE);
                encoder.close_element(&sla::ELEM_CONST_FLOWREF_SIZE);
            }
            ConstType::JFlowdest => {
                encoder.open_element(&sla::ELEM_CONST_FLOWDEST);
                encoder.close_element(&sla::ELEM_CONST_FLOWDEST);
            }
            ConstType::JFlowdestSize => {
                encoder.open_element(&sla::ELEM_CONST_FLOWDEST_SIZE);
                encoder.close_element(&sla::ELEM_CONST_FLOWDEST_SIZE);
            }
        }
    }

    /// C++ `decode`.
    pub fn decode(&mut self, decoder: &mut dyn Decoder) -> UnlaceResult<()> {
        let el = decoder.open_element()?;
        if el == sla::ELEM_CONST_REAL {
            self.type_ = ConstType::Real;
            self.value_real = decoder.read_unsigned_integer_id(&sla::ATTRIB_VAL)?;
        } else if el == sla::ELEM_CONST_HANDLE {
            self.type_ = ConstType::Handle;
            // cast: C++ implicit intb -> int4
            self.value_handle_index = decoder.read_signed_integer_id(&sla::ATTRIB_VAL)? as i32;
            // cast: C++ `uint4 selectInt = readSignedInteger(...)` (intb ->
            // uint4 wrap; a negative value becomes huge and is rejected)
            let select_int = decoder.read_signed_integer_id(&sla::ATTRIB_S)? as u32;
            self.select = match select_int {
                0 => VField::VSpace,
                1 => VField::VOffset,
                2 => VField::VSize,
                3 => VField::VOffsetPlus,
                _ => return Err(UnlaceError::decoder("Bad handle selector encoding")),
            };
            if self.select == VField::VOffsetPlus {
                self.value_real = decoder.read_unsigned_integer_id(&sla::ATTRIB_PLUS)?;
            }
        } else if el == sla::ELEM_CONST_START {
            self.type_ = ConstType::JStart;
        } else if el == sla::ELEM_CONST_NEXT {
            self.type_ = ConstType::JNext;
        } else if el == sla::ELEM_CONST_NEXT2 {
            self.type_ = ConstType::JNext2;
        } else if el == sla::ELEM_CONST_CURSPACE {
            self.type_ = ConstType::JCurspace;
        } else if el == sla::ELEM_CONST_CURSPACE_SIZE {
            self.type_ = ConstType::JCurspaceSize;
        } else if el == sla::ELEM_CONST_SPACEID {
            self.type_ = ConstType::Spaceid;
            self.value_spaceid = Some(decoder.read_space_id(&sla::ATTRIB_SPACE)?);
        } else if el == sla::ELEM_CONST_RELATIVE {
            self.type_ = ConstType::JRelative;
            self.value_real = decoder.read_unsigned_integer_id(&sla::ATTRIB_VAL)?;
        } else if el == sla::ELEM_CONST_FLOWREF {
            self.type_ = ConstType::JFlowref;
        } else if el == sla::ELEM_CONST_FLOWREF_SIZE {
            self.type_ = ConstType::JFlowrefSize;
        } else if el == sla::ELEM_CONST_FLOWDEST {
            self.type_ = ConstType::JFlowdest;
        } else if el == sla::ELEM_CONST_FLOWDEST_SIZE {
            self.type_ = ConstType::JFlowdestSize;
        } else {
            // C++ throws LowlevelError (not DecoderError) here
            return Err(UnlaceError::lowlevel("Bad constant type"));
        }
        decoder.close_element(el)
    }
}

impl PartialEq for ConstTpl {
    /// C++ `operator==` (the `spaceid` case is raw pointer equality).
    fn eq(&self, op2: &ConstTpl) -> bool {
        if self.type_ != op2.type_ {
            return false;
        }
        match self.type_ {
            ConstType::Real => self.value_real == op2.value_real,
            ConstType::Handle => {
                if self.value_handle_index != op2.value_handle_index {
                    return false;
                }
                if self.select != op2.select {
                    return false;
                }
                true
            }
            ConstType::Spaceid => opt_space_ptr_eq(&self.value_spaceid, &op2.value_spaceid),
            _ => true, // Nothing additional to compare
        }
    }
}
impl Eq for ConstTpl {}

// ---------------------------------------------------------------------------
// VarnodeTpl
// ---------------------------------------------------------------------------

/// C++ `VarnodeTpl`: a varnode template (space/offset/size ConstTpl
/// triple).
#[derive(Debug, Clone, Default)]
pub struct VarnodeTpl {
    space: ConstTpl,
    offset: ConstTpl,
    size: ConstTpl,
    unnamed_flag: bool,
}

impl VarnodeTpl {
    /// C++ `VarnodeTpl(int4 hand,bool zerosize)`: varnode built from a
    /// handle; if zerosize is true, set the size constant to zero.
    pub fn new_from_handle(hand: i32, zerosize: bool) -> VarnodeTpl {
        let mut res = VarnodeTpl {
            space: ConstTpl::new_handle(hand, VField::VSpace),
            offset: ConstTpl::new_handle(hand, VField::VOffset),
            size: ConstTpl::new_handle(hand, VField::VSize),
            unnamed_flag: false,
        };
        if zerosize {
            res.size = ConstTpl::new_real(ConstType::Real, 0);
        }
        res
    }

    /// C++ `VarnodeTpl(const ConstTpl &sp,const ConstTpl &off,const
    /// ConstTpl &sz)`.
    pub fn new(sp: ConstTpl, off: ConstTpl, sz: ConstTpl) -> VarnodeTpl {
        VarnodeTpl {
            space: sp,
            offset: off,
            size: sz,
            unnamed_flag: false,
        }
    }

    /// C++ `getSpace`.
    pub fn get_space(&self) -> &ConstTpl {
        &self.space
    }

    /// C++ `getOffset`.
    pub fn get_offset(&self) -> &ConstTpl {
        &self.offset
    }

    /// C++ `getSize`.
    pub fn get_size(&self) -> &ConstTpl {
        &self.size
    }

    /// C++ `isDynamic`.
    pub fn is_dynamic(&self, walker: &(impl SymbolWalker + ?Sized)) -> UnlaceResult<bool> {
        if self.offset.get_type() != ConstType::Handle {
            return Ok(false);
        }
        // Technically we should probably check all three
        // ConstTpls for dynamic handles, but in all cases
        // if there is any dynamic piece then the offset is
        let hand = walker.borrow_fixed_handle(self.offset.get_handle_index())?;
        Ok(hand.offset_space.is_some())
    }

    /// C++ `transfer`: a positive return indicates truncation of a local
    /// temp or a zero-size object; -1 otherwise.
    pub fn transfer(&mut self, params: &[HandleTpl]) -> UnlaceResult<i32> {
        let mut does_offset_plus = false;
        let mut handle_index: i32 = 0;
        let mut plus: i32 = 0;
        if self.offset.get_type() == ConstType::Handle
            && self.offset.get_select() == VField::VOffsetPlus
        {
            handle_index = self.offset.get_handle_index();
            plus = self.offset.get_real() as i32; // cast: C++ explicit (int4)
            does_offset_plus = true;
        }
        self.space.transfer(params)?;
        self.offset.transfer(params)?;
        self.size.transfer(params)?;
        if does_offset_plus {
            if self.is_local_temp() {
                return Ok(plus); // A positive number indicates truncation of a local temp
            }
            // cast: C++ indexes vector<HandleTpl *> with int4
            if params[handle_index as usize].get_size().is_zero() {
                return Ok(plus); //    or a zerosize object
            }
        }
        Ok(-1)
    }

    /// C++ `isZeroSize`.
    pub fn is_zero_size(&self) -> bool {
        self.size.is_zero()
    }

    /// C++ `operator<`.
    pub fn less_than(&self, op2: &VarnodeTpl) -> bool {
        if self.space != op2.space {
            return self.space.less_than(&op2.space);
        }
        if self.offset != op2.offset {
            return self.offset.less_than(&op2.offset);
        }
        if self.size != op2.size {
            return self.size.less_than(&op2.size);
        }
        false
    }

    /// C++ `setOffset(uintb constVal)`.
    pub fn set_offset(&mut self, const_val: u64) {
        self.offset = ConstTpl::new_real(ConstType::Real, const_val);
    }

    /// C++ `setRelative(uintb constVal)`.
    pub fn set_relative(&mut self, const_val: u64) {
        self.offset = ConstTpl::new_real(ConstType::JRelative, const_val);
    }

    /// C++ `setSize`.
    pub fn set_size(&mut self, sz: ConstTpl) {
        self.size = sz;
    }

    /// C++ `isUnnamed`.
    pub fn is_unnamed(&self) -> bool {
        self.unnamed_flag
    }

    /// C++ `setUnnamed`.
    pub fn set_unnamed(&mut self, val: bool) {
        self.unnamed_flag = val;
    }

    /// C++ `isLocalTemp`.
    pub fn is_local_temp(&self) -> bool {
        if self.space.get_type() != ConstType::Spaceid {
            return false;
        }
        if self.space.get_space().get_type() != spacetype::IPTR_INTERNAL {
            return false;
        }
        true
    }

    /// C++ `isRelative`.
    pub fn is_relative(&self) -> bool {
        self.offset.get_type() == ConstType::JRelative
    }

    /// C++ `changeHandleIndex`.
    pub fn change_handle_index(&mut self, handmap: &[i32]) {
        self.space.change_handle_index(handmap);
        self.offset.change_handle_index(handmap);
        self.size.change_handle_index(handmap);
    }

    /// C++ `adjustTruncation`: we know `this->offset` is an offset_plus,
    /// check that the truncation is in bounds (given `sz`), adjust plus for
    /// endianness if necessary; return true if truncation is in bounds.
    pub fn adjust_truncation(&mut self, sz: i32, isbigendian: bool) -> bool {
        if self.size.get_type() != ConstType::Real {
            return false;
        }
        let numbytes = self.size.get_real() as i32; // cast: C++ explicit (int4)
        let byteoffset = self.offset.get_real() as i32; // cast: C++ explicit (int4)
        if numbytes + byteoffset > sz {
            return false;
        }

        // Encode the original truncation amount with the plus value
        // (cast: C++ implicit int4 -> uintb sign extension)
        let mut val = i64::from(byteoffset) as u64;
        val = val.wshl(16);
        if isbigendian {
            // cast: C++ explicit (uintb) of a non-negative int4 expression
            val |= i64::from(sz - (numbytes + byteoffset)) as u64;
        } else {
            // cast: C++ explicit (uintb) of a non-negative int4
            val |= i64::from(byteoffset) as u64;
        }

        self.offset =
            ConstTpl::new_handle_plus(self.offset.get_handle_index(), VField::VOffsetPlus, val);
        true
    }

    /// C++ `encode`.
    pub fn encode(&self, encoder: &mut dyn Encoder) {
        encoder.open_element(&sla::ELEM_VARNODE_TPL);
        self.space.encode(encoder);
        self.offset.encode(encoder);
        self.size.encode(encoder);
        encoder.close_element(&sla::ELEM_VARNODE_TPL);
    }

    /// C++ `decode`.
    pub fn decode(&mut self, decoder: &mut dyn Decoder) -> UnlaceResult<()> {
        let el = decoder.open_element_id(&sla::ELEM_VARNODE_TPL)?;
        self.space.decode(decoder)?;
        self.offset.decode(decoder)?;
        self.size.decode(decoder)?;
        decoder.close_element(el)
    }
}

impl PartialEq for VarnodeTpl {
    /// C++ `operator==` (compares space/offset/size; `unnamed_flag` is not
    /// part of equality).
    fn eq(&self, op2: &VarnodeTpl) -> bool {
        self.space == op2.space && self.offset == op2.offset && self.size == op2.size
    }
}
impl Eq for VarnodeTpl {}

// ---------------------------------------------------------------------------
// HandleTpl
// ---------------------------------------------------------------------------

/// C++ `HandleTpl`: template for a FixedHandle (what a constructor
/// exports).
#[derive(Debug, Clone, Default)]
pub struct HandleTpl {
    space: ConstTpl,
    size: ConstTpl,
    ptrspace: ConstTpl,
    ptroffset: ConstTpl,
    ptrsize: ConstTpl,
    temp_space: ConstTpl,
    temp_offset: ConstTpl,
}

impl HandleTpl {
    /// C++ `HandleTpl(void)`.
    pub fn new() -> HandleTpl {
        HandleTpl::default()
    }

    /// C++ `HandleTpl(const VarnodeTpl *vn)`: build handle which indicates
    /// the given varnode.
    pub fn new_from_varnode(vn: &VarnodeTpl) -> HandleTpl {
        HandleTpl {
            space: vn.get_space().clone(),
            size: vn.get_size().clone(),
            ptrspace: ConstTpl::new_real(ConstType::Real, 0),
            ptroffset: vn.get_offset().clone(),
            ..HandleTpl::default()
        }
    }

    /// C++ `HandleTpl(const ConstTpl &spc,const ConstTpl &sz,const
    /// VarnodeTpl *vn,AddrSpace *t_space,uintb t_offset)`: build handle to
    /// the thing being pointed at by `vn`.
    pub fn new_ptr(
        spc: &ConstTpl,
        sz: &ConstTpl,
        vn: &VarnodeTpl,
        t_space: Rc<AddrSpace>,
        t_offset: u64,
    ) -> HandleTpl {
        HandleTpl {
            space: spc.clone(),
            size: sz.clone(),
            ptrspace: vn.get_space().clone(),
            ptroffset: vn.get_offset().clone(),
            ptrsize: vn.get_size().clone(),
            temp_space: ConstTpl::new_space(t_space),
            temp_offset: ConstTpl::new_real(ConstType::Real, t_offset),
        }
    }

    /// C++ `getSpace`.
    pub fn get_space(&self) -> &ConstTpl {
        &self.space
    }

    /// C++ `getPtrSpace`.
    pub fn get_ptr_space(&self) -> &ConstTpl {
        &self.ptrspace
    }

    /// C++ `getPtrOffset`.
    pub fn get_ptr_offset(&self) -> &ConstTpl {
        &self.ptroffset
    }

    /// C++ `getPtrSize`.
    pub fn get_ptr_size(&self) -> &ConstTpl {
        &self.ptrsize
    }

    /// C++ `getSize`.
    pub fn get_size(&self) -> &ConstTpl {
        &self.size
    }

    /// C++ `getTempSpace`.
    pub fn get_temp_space(&self) -> &ConstTpl {
        &self.temp_space
    }

    /// C++ `getTempOffset`.
    pub fn get_temp_offset(&self) -> &ConstTpl {
        &self.temp_offset
    }

    /// C++ `setSize`.
    pub fn set_size(&mut self, sz: ConstTpl) {
        self.size = sz;
    }

    /// C++ `setPtrSize`.
    pub fn set_ptr_size(&mut self, sz: ConstTpl) {
        self.ptrsize = sz;
    }

    /// C++ `setPtrOffset(uintb val)`.
    pub fn set_ptr_offset(&mut self, val: u64) {
        self.ptroffset = ConstTpl::new_real(ConstType::Real, val);
    }

    /// C++ `setTempOffset(uintb val)`.
    pub fn set_temp_offset(&mut self, val: u64) {
        self.temp_offset = ConstTpl::new_real(ConstType::Real, val);
    }

    /// C++ `fix`: resolve this template into `hand` against the walker.
    pub fn fix(
        &self,
        hand: &mut FixedHandle,
        walker: &(impl SymbolWalker + ?Sized),
    ) -> UnlaceResult<()> {
        if self.ptrspace.get_type() == ConstType::Real {
            // The export is unstarred, but this doesn't mean the varnode
            // being exported isn't dynamic
            self.space.fillin_space(hand, walker)?;
            hand.size = self.size.fix(walker)? as u32; // cast: C++ implicit uintb -> uint4
            self.ptroffset.fillin_offset(hand, walker)?;
        } else {
            hand.space = self.space.fix_space(walker)?;
            hand.size = self.size.fix(walker)? as u32; // cast: C++ implicit uintb -> uint4
            hand.offset_offset = self.ptroffset.fix(walker)?;
            hand.offset_space = self.ptrspace.fix_space(walker)?;
            let offset_space_type = hand
                .offset_space
                .as_ref()
                .expect(
                    "HandleTpl::fix: ptrspace resolved to null (C++ dereferences unconditionally)",
                )
                .get_type();
            if offset_space_type == spacetype::IPTR_CONSTANT {
                // Handle could have been dynamic but wasn't
                hand.offset_space = None;
                let space = hand.space.as_ref().expect(
                    "HandleTpl::fix: space resolved to null (C++ dereferences unconditionally)",
                );
                hand.offset_offset =
                    AddrSpace::address_to_byte(hand.offset_offset, space.get_word_size());
                hand.offset_offset = space.wrap_offset(hand.offset_offset);
            } else {
                hand.offset_size = self.ptrsize.fix(walker)? as u32; // cast: C++ implicit uintb -> uint4
                hand.temp_space = self.temp_space.fix_space(walker)?;
                hand.temp_offset = self.temp_offset.fix(walker)?;
            }
        }
        Ok(())
    }

    /// C++ `changeHandleIndex`.
    pub fn change_handle_index(&mut self, handmap: &[i32]) {
        self.space.change_handle_index(handmap);
        self.size.change_handle_index(handmap);
        self.ptrspace.change_handle_index(handmap);
        self.ptroffset.change_handle_index(handmap);
        self.ptrsize.change_handle_index(handmap);
        self.temp_space.change_handle_index(handmap);
        self.temp_offset.change_handle_index(handmap);
    }

    /// C++ `encode`.
    pub fn encode(&self, encoder: &mut dyn Encoder) {
        encoder.open_element(&sla::ELEM_HANDLE_TPL);
        self.space.encode(encoder);
        self.size.encode(encoder);
        self.ptrspace.encode(encoder);
        self.ptroffset.encode(encoder);
        self.ptrsize.encode(encoder);
        self.temp_space.encode(encoder);
        self.temp_offset.encode(encoder);
        encoder.close_element(&sla::ELEM_HANDLE_TPL);
    }

    /// C++ `decode`.
    pub fn decode(&mut self, decoder: &mut dyn Decoder) -> UnlaceResult<()> {
        let el = decoder.open_element_id(&sla::ELEM_HANDLE_TPL)?;
        self.space.decode(decoder)?;
        self.size.decode(decoder)?;
        self.ptrspace.decode(decoder)?;
        self.ptroffset.decode(decoder)?;
        self.ptrsize.decode(decoder)?;
        self.temp_space.decode(decoder)?;
        self.temp_offset.decode(decoder)?;
        decoder.close_element(el)
    }
}

// ---------------------------------------------------------------------------
// OpTpl
// ---------------------------------------------------------------------------

/// C++ `OpTpl`: a p-code op template.
#[derive(Debug, Clone)]
pub struct OpTpl {
    output: Option<VarnodeTpl>,
    opc: OpCode,
    input: Vec<VarnodeTpl>,
}

impl OpTpl {
    /// C++ `OpTpl(OpCode oc)`.
    pub fn new(oc: OpCode) -> OpTpl {
        OpTpl {
            output: None,
            opc: oc,
            input: Vec::new(),
        }
    }

    /// C++ `OpTpl(void)` (decode shell; C++ leaves `opc` uninitialized
    /// until `decode` runs, the port uses `CPUI_COPY` as the placeholder).
    pub fn new_for_decode() -> OpTpl {
        OpTpl::new(OpCode::CPUI_COPY)
    }

    /// C++ `getOut` (nullable).
    pub fn get_out(&self) -> Option<&VarnodeTpl> {
        self.output.as_ref()
    }

    /// Mutable access to the output (port-added; C++ mutates through the
    /// `VarnodeTpl *` returned by `getOut`).
    pub fn get_out_mut(&mut self) -> Option<&mut VarnodeTpl> {
        self.output.as_mut()
    }

    /// C++ `numInput`.
    pub fn num_input(&self) -> i32 {
        self.input.len() as i32 // cast: C++ returns vector::size() as int4
    }

    /// C++ `getIn(int4 i)`.
    pub fn get_in(&self, i: i32) -> &VarnodeTpl {
        &self.input[i as usize] // cast: C++ int4 vector index
    }

    /// Mutable access to an input (port-added; C++ mutates through the
    /// `VarnodeTpl *` returned by `getIn`).
    pub fn get_in_mut(&mut self, i: i32) -> &mut VarnodeTpl {
        &mut self.input[i as usize] // cast: C++ int4 vector index
    }

    /// C++ `getOpcode`.
    pub fn get_opcode(&self) -> OpCode {
        self.opc
    }

    /// C++ `isZeroSize`: return true if any input or output has zero size.
    pub fn is_zero_size(&self) -> bool {
        if let Some(output) = &self.output
            && output.is_zero_size() {
                return true;
            }
        for vn in &self.input {
            if vn.is_zero_size() {
                return true;
            }
        }
        false
    }

    /// C++ `setOpcode`.
    pub fn set_opcode(&mut self, o: OpCode) {
        self.opc = o;
    }

    /// C++ `setOutput` (takes ownership; callers free any previous output
    /// via `clearOutput` in C++, here it is simply replaced).
    pub fn set_output(&mut self, vt: VarnodeTpl) {
        self.output = Some(vt);
    }

    /// C++ `clearOutput`.
    pub fn clear_output(&mut self) {
        self.output = None;
    }

    /// C++ `addInput`.
    pub fn add_input(&mut self, vt: VarnodeTpl) {
        self.input.push(vt);
    }

    /// C++ `setInput(VarnodeTpl *vt,int4 slot)` (the old varnode is freed
    /// by `ConstructTpl::setInput` in C++; here it is simply replaced).
    pub fn set_input(&mut self, vt: VarnodeTpl, slot: i32) {
        self.input[slot as usize] = vt; // cast: C++ int4 vector index
    }

    /// C++ `removeInput(int4 index)` (the C++ shift-down loop + pop_back is
    /// `Vec::remove`).
    pub fn remove_input(&mut self, index: i32) {
        self.input.remove(index as usize); // cast: C++ int4 vector index
    }

    /// C++ `changeHandleIndex`.
    pub fn change_handle_index(&mut self, handmap: &[i32]) {
        if let Some(output) = &mut self.output {
            output.change_handle_index(handmap);
        }
        for vn in &mut self.input {
            vn.change_handle_index(handmap);
        }
    }

    /// C++ `encode`.
    pub fn encode(&self, encoder: &mut dyn OpcodeEncoder) {
        encoder.open_element(&sla::ELEM_OP_TPL);
        encoder.write_opcode(&sla::ATTRIB_CODE, self.opc);
        match &self.output {
            None => {
                encoder.open_element(&sla::ELEM_NULL);
                encoder.close_element(&sla::ELEM_NULL);
            }
            Some(output) => output.encode(encoder),
        }
        for vn in &self.input {
            vn.encode(encoder);
        }
        encoder.close_element(&sla::ELEM_OP_TPL);
    }

    /// C++ `decode`.
    pub fn decode(&mut self, decoder: &mut dyn OpcodeDecoder) -> UnlaceResult<()> {
        let el = decoder.open_element_id(&sla::ELEM_OP_TPL)?;
        self.opc = decoder.read_opcode_id(&sla::ATTRIB_CODE)?;
        let subel = decoder.peek_element()?;
        if subel == sla::ELEM_NULL {
            decoder.open_element()?;
            decoder.close_element(subel)?;
            self.output = None;
        } else {
            let mut output = VarnodeTpl::default();
            output.decode(decoder)?;
            self.output = Some(output);
        }
        while decoder.peek_element()? != 0 {
            let mut vn = VarnodeTpl::default();
            vn.decode(decoder)?;
            self.input.push(vn);
        }
        decoder.close_element(el)
    }
}

// ---------------------------------------------------------------------------
// ConstructTpl
// ---------------------------------------------------------------------------

/// C++ `ConstructTpl`: the full p-code template of one constructor section.
#[derive(Debug, Clone, Default)]
pub struct ConstructTpl {
    /// C++ `delayslot` (uint4)
    delayslot: u32,
    /// C++ `numlabels`: number of label templates (uint4)
    numlabels: u32,
    /// C++ `vec` (owned op templates)
    vec: Vec<OpTpl>,
    /// C++ `result` (nullable owned handle template)
    result: Option<HandleTpl>,
}

impl ConstructTpl {
    /// C++ `ConstructTpl(void)`.
    pub fn new() -> ConstructTpl {
        ConstructTpl::default()
    }

    /// C++ `delaySlot`.
    pub fn delay_slot(&self) -> u32 {
        self.delayslot
    }

    /// C++ `numLabels`.
    pub fn num_labels(&self) -> u32 {
        self.numlabels
    }

    /// C++ `getOpvec`.
    pub fn get_opvec(&self) -> &[OpTpl] {
        &self.vec
    }

    /// Mutable op access (port-added; C++ mutates ops through the
    /// `vector<OpTpl *>` pointees, e.g. pcodecompile.cc size propagation).
    pub fn get_opvec_mut(&mut self) -> &mut Vec<OpTpl> {
        &mut self.vec
    }

    /// C++ `getResult` (nullable).
    pub fn get_result(&self) -> Option<&HandleTpl> {
        self.result.as_ref()
    }

    /// C++ `addOp`: returns false on a duplicate delay-slot op.
    pub fn add_op(&mut self, ot: OpTpl) -> bool {
        if ot.get_opcode() == DELAY_SLOT {
            if self.delayslot != 0 {
                return false; // Cannot have multiple delay slots
            }
            // cast: C++ implicit uintb -> uint4
            self.delayslot = ot.get_in(0).get_offset().get_real() as u32;
        } else if ot.get_opcode() == LABELBUILD {
            self.numlabels = self.numlabels.wadd(1); // Count labels
        }
        self.vec.push(ot);
        true
    }

    /// C++ `addOpList`.
    pub fn add_op_list(&mut self, oplist: Vec<OpTpl>) -> bool {
        for ot in oplist {
            if !self.add_op(ot) {
                return false;
            }
        }
        true
    }

    /// C++ `setResult`.
    pub fn set_result(&mut self, t: Option<HandleTpl>) {
        self.result = t;
    }

    /// Mutable result access (C++ mutates `result` through its pointer in
    /// `forceExportSize`).
    pub fn get_result_mut(&mut self) -> Option<&mut HandleTpl> {
        self.result.as_mut()
    }

    /// C++ `setNumLabels`.
    pub fn set_num_labels(&mut self, num: u32) {
        self.numlabels = num;
    }

    /// C++ `setOpvec`: replace the op-template vector wholesale (used by
    /// `expandMacros` after building the macro-expanded list).
    pub fn set_opvec(&mut self, opvec: Vec<OpTpl>) {
        self.vec = opvec;
    }

    /// C++ `fillinBuild`: make sure there is a build statement for all
    /// subtable params.  Return 0 upon success, 1 if there is a duplicate
    /// BUILD, 2 if there is a build for a non-subtable.
    pub fn fillin_build(&mut self, check: &mut [i32], const_space: &Rc<AddrSpace>) -> i32 {
        for op in &self.vec {
            if op.get_opcode() == BUILD {
                // cast: C++ implicit uintb -> int4, then vector index
                let index = op.get_in(0).get_offset().get_real() as i32;
                if check[index as usize] != 0 {
                    // Duplicate BUILD statement or non-subtable
                    return check[index as usize];
                }
                check[index as usize] = 1; // Mark to avoid future duplicate build
            }
        }
        for (i, chk) in check.iter().enumerate() {
            if *chk == 0 {
                // Didn't see a BUILD statement
                let mut op = OpTpl::new(BUILD);
                let indvn = VarnodeTpl::new(
                    ConstTpl::new_space(Rc::clone(const_space)),
                    // cast: C++ int4 loop index -> uintb (non-negative)
                    ConstTpl::new_real(ConstType::Real, i as u64),
                    ConstTpl::new_real(ConstType::Real, 4),
                );
                op.add_input(indvn);
                self.vec.insert(0, op);
            }
        }
        0
    }

    /// C++ `buildOnly`.
    pub fn build_only(&self) -> bool {
        for op in &self.vec {
            if op.get_opcode() != BUILD {
                return false;
            }
        }
        true
    }

    /// C++ `changeHandleIndex`.
    pub fn change_handle_index(&mut self, handmap: &[i32]) {
        for op in &mut self.vec {
            if op.get_opcode() == BUILD {
                // cast: C++ implicit uintb -> int4, then vector index
                let mut index = op.get_in(0).get_offset().get_real() as i32;
                index = handmap[index as usize];
                // cast: C++ implicit int4 -> uintb sign extension
                op.get_in_mut(0).set_offset(i64::from(index) as u64);
            } else {
                op.change_handle_index(handmap);
            }
        }
        if let Some(result) = &mut self.result {
            result.change_handle_index(handmap);
        }
    }

    /// C++ `setInput`: set the VarnodeTpl input for a particular op (for
    /// use with optimization routines).
    pub fn set_input(&mut self, vn: VarnodeTpl, index: i32, slot: i32) {
        // cast: C++ int4 vector index; the old varnode is dropped (C++ delete)
        self.vec[index as usize].set_input(vn, slot);
    }

    /// C++ `setOutput`: set the VarnodeTpl output for a particular op (for
    /// use with optimization routines).
    pub fn set_output(&mut self, vn: VarnodeTpl, index: i32) {
        // cast: C++ int4 vector index; the old varnode is dropped (C++ delete)
        self.vec[index as usize].set_output(vn);
    }

    /// C++ `deleteOps`: delete a particular set of ops (C++ nulls the slots
    /// then compacts preserving order).
    pub fn delete_ops(&mut self, indices: &[i32]) {
        let mut removed = vec![false; self.vec.len()];
        for &i in indices {
            removed[i as usize] = true; // cast: C++ int4 vector index
        }
        let mut poscur: usize = 0;
        for (i, rem) in removed.iter().enumerate() {
            if !*rem {
                self.vec.swap(poscur, i);
                poscur += 1;
            }
        }
        self.vec.truncate(poscur);
    }

    /// C++ `encode(Encoder &,int4 sectionid)`.
    pub fn encode(&self, encoder: &mut dyn OpcodeEncoder, sectionid: i32) {
        encoder.open_element(&sla::ELEM_CONSTRUCT_TPL);
        if sectionid >= 0 {
            encoder.write_signed_integer(&sla::ATTRIB_SECTION, i64::from(sectionid));
        }
        if self.delayslot != 0 {
            encoder.write_signed_integer(&sla::ATTRIB_DELAY, i64::from(self.delayslot));
        }
        if self.numlabels != 0 {
            encoder.write_signed_integer(&sla::ATTRIB_LABELS, i64::from(self.numlabels));
        }
        match &self.result {
            Some(result) => result.encode(encoder),
            None => {
                encoder.open_element(&sla::ELEM_NULL);
                encoder.close_element(&sla::ELEM_NULL);
            }
        }
        for op in &self.vec {
            op.encode(encoder);
        }
        encoder.close_element(&sla::ELEM_CONSTRUCT_TPL);
    }

    /// C++ `decode`: returns the section id (-1 for the main section).
    pub fn decode(&mut self, decoder: &mut dyn OpcodeDecoder) -> UnlaceResult<i32> {
        let el = decoder.open_element_id(&sla::ELEM_CONSTRUCT_TPL)?;
        let mut sectionid: i32 = -1;
        let mut attrib = decoder.get_next_attribute_id()?;
        while attrib != 0 {
            if attrib == sla::ATTRIB_DELAY {
                // cast: C++ implicit intb -> uint4
                self.delayslot = decoder.read_signed_integer()? as u32;
            } else if attrib == sla::ATTRIB_LABELS {
                // cast: C++ implicit intb -> uint4
                self.numlabels = decoder.read_signed_integer()? as u32;
            } else if attrib == sla::ATTRIB_SECTION {
                // cast: C++ implicit intb -> int4
                sectionid = decoder.read_signed_integer()? as i32;
            }
            attrib = decoder.get_next_attribute_id()?;
        }
        let subel = decoder.peek_element()?;
        if subel == sla::ELEM_NULL {
            decoder.open_element()?;
            decoder.close_element(subel)?;
            self.result = None;
        } else {
            let mut result = HandleTpl::default();
            result.decode(decoder)?;
            self.result = Some(result);
        }
        while decoder.peek_element()? != 0 {
            let mut op = OpTpl::new_for_decode();
            op.decode(decoder)?;
            self.vec.push(op);
        }
        decoder.close_element(el)?;
        Ok(sectionid)
    }
}

// ---------------------------------------------------------------------------
// PcodeBuilder
// ---------------------------------------------------------------------------

/// SLEIGH template dispatch, implemented by the runtime builder in
/// [`crate::sleigh`] and the macro builder in `unlace-slacomp`. Implementors own
/// their walker and label state, initialize both label counters to the starting
/// count, and provide the operation handlers used by [`PcodeBuilder::build`].
pub trait PcodeBuilder {
    /// C++ `getLabelBase`.
    fn get_label_base(&self) -> u32;
    /// Setter for the C++ private `labelbase` field (used by `build`).
    fn set_label_base(&mut self, val: u32);
    /// Accessor for the C++ private `labelcount` field (used by `build`).
    fn get_label_count(&self) -> u32;
    /// Setter for the C++ private `labelcount` field (used by `build`).
    fn set_label_count(&mut self, val: u32);

    /// C++ pure virtual `dump`.
    fn dump(&mut self, op: &OpTpl) -> UnlaceResult<()>;
    /// C++ pure virtual `appendBuild`.
    fn append_build(&mut self, bld: &OpTpl, secnum: i32) -> UnlaceResult<()>;
    /// C++ pure virtual `delaySlot`.
    fn delay_slot(&mut self, op: &OpTpl) -> UnlaceResult<()>;
    /// C++ pure virtual `setLabel`.
    fn set_label(&mut self, op: &OpTpl) -> UnlaceResult<()>;
    /// C++ pure virtual `appendCrossBuild`.
    fn append_cross_build(&mut self, bld: &OpTpl, secnum: i32) -> UnlaceResult<()>;

    /// C++ `PcodeBuilder::build` (semantics.cc): `None` mirrors the C++
    /// null `ConstructTpl *` and produces `UnimplError("",0)`.
    fn build(&mut self, construct: Option<&ConstructTpl>, secnum: i32) -> UnlaceResult<()> {
        let construct = match construct {
            // Pcode is not implemented for this constructor
            None => return Err(UnlaceError::unimpl("", 0)),
            Some(c) => c,
        };

        let oldbase = self.get_label_base(); // Recursively store old labelbase
        self.set_label_base(self.get_label_count()); // Set the newbase
        // Add labels from this template
        self.set_label_count(self.get_label_count().wadd(construct.num_labels()));

        for op in construct.get_opvec() {
            match op.get_opcode() {
                // BUILD
                OpCode::CPUI_MULTIEQUAL => self.append_build(op, secnum)?,
                // DELAY_SLOT
                OpCode::CPUI_INDIRECT => self.delay_slot(op)?,
                // LABELBUILD
                OpCode::CPUI_PTRADD => self.set_label(op)?,
                // CROSSBUILD
                OpCode::CPUI_PTRSUB => self.append_cross_build(op, secnum)?,
                _ => self.dump(op)?,
            }
        }
        self.set_label_base(oldbase); // Restore old labelbase
        Ok(())
    }
}

#[cfg(test)]
mod tests;
