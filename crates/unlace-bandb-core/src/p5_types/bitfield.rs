//! Port of `decompiler/cpp/bitfield.cc` / `bitfield.hh` (W6, item w6-s5-bitfield):
//! the bitfield placement/recovery machinery.
//!
//! The bitfield subsystem transforms expressions that read/write individual
//! bit-fields of a packed structure into explicit `INSERT` / `ZPULL` / `SPULL`
//! p-code ops, and back.  Everything in the subsystem is built on top of one
//! self-contained endian-aware value type, [`BitRange`], which the C++ keeps in
//! `address.hh`/`address.cc` (not in `bitfield.cc`).  Because the Rust port
//! routes `BitRange` through this file (see `dtype.rs`'s `TypeBitField` note:
//! "`BitRange` as a standalone type is still W6 elsewhere"), the value type is
//! transcribed here verbatim from `address.cc:630-868`.  It is the load-bearing
//! foundation of the whole subsystem and carries the "bitfield extraction/
//! placement matrix" behavior that the item's tests pin.
//!
//! [`BitFieldNodeState`] (`bitfield.hh:27-42`, `bitfield.cc:21-51`) is the
//! per-Varnode state carrier the two transform passes follow.  Its construction
//! arithmetic over `BitRange` is transcribed faithfully; the live `Varnode *node`
//! / `const TypeBitField *field` pointers become opaque handles (a
//! [`VarnodeId`] and an index/flattened-field carrier) so the pure bit-range
//! computation can be ported and unit-tested without the not-yet-ported pieces
//! of the IR mutation engine.
//!
//! # What is landed here
//!
//! * The endian-aware value type [`BitRange`] (W6) and the per-Varnode state
//!   carrier [`BitFieldNodeState`] (W6).
//! * The type-query layer the transforms read: `TypeStruct::collectBitFields`,
//!   `hasBitFieldsInRange`, `BitFieldTriple`, and the `compareMaxByte`
//!   comparators — ported in `dtype.rs` (W10, this wave) and consumed below.
//! * The base [`BitFieldTransform`] (W10, this wave): the constructor
//!   (`bitfield.cc:96-116`, including the `TypePartialStruct` unwrap) and
//!   [`BitFieldTransform::establish_fields`] (`bitfield.cc:57-91`), the worklist
//!   builder both transform passes call first.
//!
//! # Cross-wave seam (recorded as a loss)
//!
//! The two transform subclasses — `BitFieldInsertTransform` and
//! `BitFieldPullTransform` — and the six `Rule` `applyOp` bodies that drive them
//! still reach into IR-mutation surfaces that are not yet ported:
//!
//! * `Datatype::getPtrInto` on a `TypePointerRel` (the relative-pointer case the
//!   rules use to resolve the bitfield struct from the pointer operand) — only
//!   the non-relative `getPtrInto` is ported.  // STUB(W10)
//! * The `INSERT` / `ZPULL` / `SPULL` `OpBehavior`s/`TypeOp`s and the new-op
//!   creation / back-and-forward graph traversal the transforms emit
//!   (`Funcdata` exposes the op/varnode factory and `op_destroy_recursive`, but
//!   the bitfield emission sequence — `doTrace`/`apply`, `foldLoad`,
//!   `foldPtrsub`, the `INT_EQUAL`-group compare folding — is unported), and the
//!   printc `pushBitfield`/`checkBitFieldMember` rendering of the resulting
//!   field accesses.  // STUB(W10)
//!
//! Each rule below transcribes the guards it *can* evaluate with the ported type
//! surface (`hasBitfields`, `getTypeReadFacing`/`getTypeDefFacing`, the
//! `isWritten`/`code()` and `notPrinted` checks) and then returns `0` ("rule did
//! not apply" — the conservative value the C++ also returns on every early-out)
//! at the precise point where it would hand off to the subclass transform.  The
//! rules expose themselves through [`specs`] in C++ definition order, per the
//! `action.rs` convention, so the W8 `universalAction` builder can place them
//! unchanged once the subclass transforms land.
//!
//! # Update (W10 bitfield-absorb): the two absorb rules are now ported
//!
//! The four materialization rules (`RuleBitFieldStore`/`Out`/`Load`/`In`) drive
//! the landed [`insert`]/[`pull`] transforms.  The two *post*-materialization
//! simplification rules — `RulePullAbsorb` (`bitfield.cc:1767-2208`) and
//! `RuleInsertAbsorb` (`bitfield.cc:2214-2400`) — are ported faithfully in the
//! [`absorb`] submodule: their `applyOp` bodies (below) now delegate to
//! [`absorb::pull_absorb_apply`] / [`absorb::insert_absorb_apply`] instead of
//! returning `0`.  These consolidate a byte container shared by several bitfields
//! into one `INSERT`/`PULL` per field so each renders as a separate
//! `ptr->field = ...` statement (e.g. `ip->field5 = ip->field5 + 1;`).

use crate::funcdata_facing::FuncdataFacingExt;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule, RuleSpec};
use crate::context::VarnodeId;
use crate::dtype::{BitFieldTriple, Datatype, type_metatype};
use crate::funcdata::Funcdata;

/// `func->getArch()->getDefaultDataSpace()->isBigEndian()` — the endianness the
/// `BitFieldTransform` base records.  All bitfield rule bodies read it the same
/// way.
fn bitfield_big_endian(data: &Funcdata) -> bool {
    data.get_arch()
        .manage()
        .get_default_data_space()
        .map(|s| s.is_big_endian())
        .unwrap_or(false)
}

/// The integer type a LOAD or STORE moves when its pointer reaches exactly the
/// whole bytes of one bitfield: the field's type at that width, as if the field
/// were a plain member. `None` when the access is anything else.
#[doc(hidden)]
pub fn whole_byte_field_value(
    tlst: &dyn crate::dtype::TypeFactory,
    pointer: &Datatype,
    size: int4,
) -> Option<Rc<Datatype>> {
    let (mut dt, mut off) = if pointer.is_pointer_rel() {
        (pointer.get_rel_parent()?, pointer.get_byte_offset()? as i64)
    } else {
        (pointer.get_ptr_to()?, 0)
    };
    for _ in 0..32 {
        if off < 0 || off + size as i64 > dt.get_size() as i64 {
            return None;
        }
        if let crate::dtype::DatatypeKind::Struct { bitfield, .. } = &dt.kind {
            for field in bitfield {
                let mut bits = field.bits();
                bits.minimize_container();
                if bits.byte_offset as i64 == off
                    && bits.byte_size == size
                    && bits.num_bits == 8 * size
                {
                    return tlst.resize_integer(Rc::clone(&field.field_type), size).ok();
                }
            }
        }
        let (Some(sub), next) = dt.get_sub_type(off).ok()? else {
            return None;
        };
        dt = sub;
        off = next;
    }
    None
}

// =============================================================================
// BitRange (address.hh:256-285, address.cc:630-868)
// =============================================================================

pub use crate::dtype::BitRange;

/// A reference to the bit-field being followed by a [`BitFieldNodeState`].
///
/// In C++ this is `const TypeBitField *field` — null for a "hole" record.  The
/// transforms read three data off the live field pointer: its underlying
/// data-type (`field->type`, used as the `InsertRecord`/`PullRecord` `dt` and to
/// test `getMetatype() == TYPE_INT`) and its formal bit width
/// (`field->bits.numBits`).  The [`FieldRef::Field`] variant carries an owned
/// [`TypeBitField`] clone (cheap — its body is an `Rc<Datatype>`), exactly the
/// projection the transforms consume, so the C++ `const TypeBitField *` pointer
/// is replaced without holding an aliased reference.
#[derive(Debug, Clone)]
pub enum FieldRef {
    /// A hole record (C++ `field == (const TypeBitField *)0`).
    Hole,
    /// A real bit-field — the owned `TypeBitField` the C++ `field` pointed at.
    Field(crate::dtype::TypeBitField),
}

impl FieldRef {
    /// `true` for a hole record (C++ `field == (const TypeBitField *)0`).
    pub fn is_hole(&self) -> bool {
        matches!(self, FieldRef::Hole)
    }
}

/// Description of the bit-fields covered by a Varnode (C++ `BitFieldNodeState`,
/// bitfield.hh:27-42).
///
/// The live `Varnode *node` becomes a [`VarnodeId`] handle and `const
/// TypeBitField *field` becomes a [`FieldRef`]; everything else is the same
/// geometry the transforms manipulate.
#[derive(Debug, Clone)]
pub struct BitFieldNodeState {
    /// Bits being used from this Varnode (C++ `bitsUsed`).
    pub bits_used: BitRange,
    /// Bits from the bit-field being followed (C++ `bitsField`).
    pub bits_field: BitRange,
    /// Varnode holding bitfields (C++ `node`).
    pub node: VarnodeId,
    /// Bit-field being followed (C++ `field`).
    pub field: FieldRef,
    /// Original position of least significant bit (C++ `origLeastSigBit`).
    pub orig_least_sig_bit: int4,
    /// Bitfield has been sign-extended into node (C++ `isSignExtended`).
    pub is_sign_extended: bool,
}

impl BitFieldNodeState {
    /// Constructor to follow a field (C++ `BitFieldNodeState(const BitRange&,
    /// Varnode*,const TypeBitField*)`, bitfield.cc:21-28).
    ///
    /// The C++ initializer is
    /// `bitsField(fld->bits,used.byteOffset,used.byteSize)` — the field's range
    /// copied into the Varnode's byte container — and
    /// `isSignExtended = (field->type->getMetatype() == TYPE_INT) &&
    /// bitsField.isMostSignificant()`.  `field_bits` is `fld->bits`; `field_is_int`
    /// is `fld->type->getMetatype() == TYPE_INT`.
    pub fn follow_field(
        used: &BitRange,
        vn: VarnodeId,
        fld: &crate::dtype::TypeBitField,
    ) -> BitFieldNodeState {
        let field_bits = fld.bits();
        let field_is_int = fld.field_type.get_metatype() == type_metatype::TYPE_INT;
        let bits_field = BitRange::in_container(&field_bits, used.byte_offset, used.byte_size);
        let orig_least_sig_bit = bits_field.least_sig_bit;
        let is_sign_extended = field_is_int && bits_field.is_most_significant();
        BitFieldNodeState {
            bits_used: *used,
            bits_field,
            node: vn,
            field: FieldRef::Field(fld.clone()),
            orig_least_sig_bit,
            is_sign_extended,
        }
    }

    /// Constructor for a hole (C++ `BitFieldNodeState(const BitRange&,Varnode*,
    /// int4,int4)`, bitfield.cc:30-37).
    ///
    /// The C++ initializer is
    /// `bitsField(used.byteOffset,used.byteSize,leastSig,numBits,used.isBigEndian)`;
    /// `field` is null and `isSignExtended` is `false`.
    pub fn hole(
        used: &BitRange,
        vn: VarnodeId,
        least_sig: int4,
        num_bits: int4,
    ) -> BitFieldNodeState {
        let bits_field = BitRange::new(
            used.byte_offset,
            used.byte_size,
            least_sig,
            num_bits,
            used.is_big_endian,
        );
        let orig_least_sig_bit = bits_field.least_sig_bit;
        BitFieldNodeState {
            bits_used: *used,
            bits_field,
            node: vn,
            field: FieldRef::Hole,
            orig_least_sig_bit,
            is_sign_extended: false,
        }
    }

    /// Copy another state, but replace `bitsField` (C++ copy constructor
    /// `BitFieldNodeState(const BitFieldNodeState&,const BitRange&,Varnode*,bool)`,
    /// bitfield.cc:44-51).  `field`/`origLeastSigBit` are copied; `bitsField`,
    /// `node`, and `isSignExtended` are replaced.
    pub fn with_new_field(
        copy: &BitFieldNodeState,
        new_field: &BitRange,
        vn: VarnodeId,
        sgn_ext: bool,
    ) -> BitFieldNodeState {
        BitFieldNodeState {
            bits_used: copy.bits_used,
            bits_field: *new_field,
            node: vn,
            field: copy.field.clone(),
            orig_least_sig_bit: copy.orig_least_sig_bit,
            is_sign_extended: sgn_ext,
        }
    }

    /// The underlying bit-field, or `None` for a hole record (C++ `field`, null
    /// for a hole).
    pub fn field(&self) -> Option<&crate::dtype::TypeBitField> {
        match &self.field {
            FieldRef::Field(f) => Some(f),
            FieldRef::Hole => None,
        }
    }

    /// Can the current Varnode be treated as the isolated bitfield (C++
    /// `isFieldAligned`, bitfield.hh:39).
    pub fn is_field_aligned(&self) -> bool {
        self.bits_field.least_sig_bit == 0 && self.bits_field.num_bits == self.bits_used.num_bits
    }

    /// Return `true` if the signedness of the field matches the extension used to
    /// extract it (C++ `doesSignExtensionMatch`, bitfield.hh:41).  In C++ this is
    /// `isSignExtended == (field->type->getMetatype() == TYPE_INT)`; the
    /// metatype-`TYPE_INT` datum is carried in [`FieldRef::Field::is_int`].  A
    /// hole record has no field; the C++ never calls this on a hole, so it
    /// returns `false` defensively.
    pub fn does_sign_extension_match(&self) -> bool {
        match &self.field {
            FieldRef::Field(f) => {
                self.is_sign_extended == (f.field_type.get_metatype() == type_metatype::TYPE_INT)
            }
            FieldRef::Hole => false,
        }
    }
}

// =============================================================================
// BitFieldTransform (base) (bitfield.hh:44-60, bitfield.cc:53-116)
// =============================================================================

/// Base class for transforming bitfield expressions (C++ `BitFieldTransform`,
/// bitfield.hh:47-60).
///
/// For both insertion and extraction, this establishes the bitfields that need
/// to be traced.  The W6 port already carries the value type ([`BitRange`]) and
/// the per-Varnode state carrier ([`BitFieldNodeState`]); this struct ports the
/// base constructor and [`establish_fields`](Self::establish_fields) — the
/// worklist builder that the two transform passes share.  The live `Funcdata
/// *func` becomes a deferred reference: the constructor only reads
/// `func->getArch()->getDefaultDataSpace()->isBigEndian()` to set `isBigEndian`,
/// so the port takes that `bool` directly (the caller — a `Rule::applyOp` body
/// holding the `Funcdata` — passes it in), keeping the worklist arithmetic pure
/// and unit-testable.
///
/// The `BitFieldInsertTransform`/`BitFieldPullTransform` subclasses and the
/// IR-mutation `apply()` bodies remain a recorded seam (see the module docs); a
/// faithful `establish_fields` is the prerequisite both subclasses call first.
pub struct BitFieldTransform {
    /// Structure owning the bitfields (C++ `parentStruct`).  `None` when the
    /// root data-type is neither a struct nor a partial-struct wrapping one — the
    /// C++ leaves `parentStruct` null in that case and `establishFields` is never
    /// reached.
    pub parent_struct: Option<Rc<Datatype>>,
    /// Byte offset into parent structure (C++ `initialOffset`).
    pub initial_offset: int4,
    /// Size of Varnode containing bitfields (C++ `containerSize`).
    pub container_size: int4,
    /// Endianness associated with bitfields (C++ `isBigEndian`).
    pub is_big_endian: bool,
    /// Fields that are being followed (C++ `workList`).
    pub work_list: Vec<BitFieldNodeState>,
}

impl BitFieldTransform {
    /// Constructor setting up basic info about a bitfield data-type (C++
    /// `BitFieldTransform::BitFieldTransform`, bitfield.cc:96-116).
    ///
    /// `dt` is the bitfield data-type and `off` is any initial byte offset into
    /// it for the root Varnode.  `big_endian` is
    /// `func->getArch()->getDefaultDataSpace()->isBigEndian()` (read off the
    /// architecture by the caller).  When `dt` is a `TYPE_PARTIALSTRUCT`, the
    /// parent struct is unwrapped and the partial's offset folds into
    /// `initialOffset`.
    pub fn new(dt: &Rc<Datatype>, off: int4, big_endian: bool) -> BitFieldTransform {
        let mut parent_struct: Option<Rc<Datatype>> = None;
        let mut initial_offset: int4 = -1;
        let meta = dt.get_metatype();
        if meta == type_metatype::TYPE_STRUCT {
            parent_struct = Some(Rc::clone(dt));
            initial_offset = off;
        } else if meta == type_metatype::TYPE_PARTIALSTRUCT {
            // (`getParent` returns the `container`, which is `get_partial_base` for a
            // partial-struct; `getOffset` is `get_partial_offset`.)
            if let (Some(parent), Some(part_off)) = (dt.get_partial_base(), dt.get_partial_offset())
                && parent.get_metatype() == type_metatype::TYPE_STRUCT {
                    initial_offset = off + part_off;
                    parent_struct = Some(parent);
                }
        }
        BitFieldTransform {
            parent_struct,
            initial_offset,
            container_size: -1,
            is_big_endian: big_endian,
            work_list: Vec::new(),
        }
    }

    /// Build the worklist for each bitfield overlapped by a given Varnode (C++
    /// `BitFieldTransform::establishFields`, bitfield.cc:57-91).
    ///
    /// A [`BitFieldNodeState`] is constructed for each bitfield the Varnode
    /// overlaps; holes between bitfields also get a record when `follow_holes`.
    /// `vn` is the opaque Varnode handle and `vn_size` is `vn->getSize()` (the
    /// C++ reads only the size off the Varnode here).  `parent_struct` must be a
    /// `TYPE_STRUCT` (guaranteed by the constructor's gating) for the
    /// `collectBitFields` call to produce records; otherwise the worklist is
    /// empty.
    pub fn establish_fields(&mut self, vn: VarnodeId, vn_size: int4, follow_holes: bool) {
        let vn_bit_size = vn_size * 8;
        let bitrange = BitRange::new(
            self.initial_offset,
            vn_size,
            0,
            vn_bit_size,
            self.is_big_endian,
        );
        let mut overlap: Vec<BitFieldTriple> = Vec::new();
        if let Some(parent) = &self.parent_struct {
            parent.collect_bit_fields(0, &mut overlap, self.initial_offset, vn_size);
        }
        overlap.sort_by(|a, b| {
            // BitFieldTriple::compare is a strict-weak "less than"; map to Ordering.
            if BitFieldTriple::compare(a, b) {
                std::cmp::Ordering::Less
            } else if BitFieldTriple::compare(b, a) {
                std::cmp::Ordering::Greater
            } else {
                std::cmp::Ordering::Equal
            }
        });
        let mut pos: int4 = 0;
        for triple in &overlap {
            // Iterate from least significant to most.
            let field_bits = triple.bitfield.bits();
            let mut field_pos = bitrange.translate_lsb(&field_bits);
            let mut field_end = field_pos + field_bits.num_bits;
            if field_pos > vn_bit_size {
                field_pos = vn_bit_size;
            }
            if field_end > vn_bit_size {
                field_end = vn_bit_size;
            }
            if field_pos > pos {
                // We have a hole.
                if follow_holes {
                    self.work_list.push(BitFieldNodeState::hole(
                        &bitrange,
                        vn,
                        pos,
                        field_pos - pos,
                    ));
                }
                pos = field_pos;
            }
            let code = bitrange.overlap_test(&field_bits);
            if code == 0 || code == 3 {
                // Field is properly contained in vn.
                self.work_list.push(BitFieldNodeState::follow_field(
                    &bitrange,
                    vn,
                    &triple.bitfield,
                ));
            } else if follow_holes {
                self.work_list
                    .push(BitFieldNodeState::hole(&bitrange, vn, pos, field_end - pos));
            }
            pos = field_end;
        }
        if pos < vn_bit_size && follow_holes {
            // Final hole.
            self.work_list.push(BitFieldNodeState::hole(
                &bitrange,
                vn,
                pos,
                vn_bit_size - pos,
            ));
        }
    }
}

// =============================================================================
// allowedFinalWrites (bitfield.cc:118-125)
// =============================================================================

/// List of opcodes allowed for `finalWriteOp` (C++
/// `BitFieldInsertTransform::allowedFinalWrites`, bitfield.cc:118-125).  "Must be
/// sorted" per the header comment; transcribed in source order (which is the
/// numeric order of the `OpCode` enum here).  [`RuleBitFieldOut::get_op_list`]
/// folds this list into its op whitelist.
#[doc(hidden)]
pub const ALLOWED_FINAL_WRITES: &[OpCode] = &[
    OpCode::CPUI_COPY,
    OpCode::CPUI_INT_EQUAL,
    OpCode::CPUI_INT_NOTEQUAL,
    OpCode::CPUI_INT_SLESS,
    OpCode::CPUI_INT_SLESSEQUAL,
    OpCode::CPUI_INT_LESS,
    OpCode::CPUI_INT_LESSEQUAL,
    OpCode::CPUI_INT_ZEXT,
    OpCode::CPUI_INT_SEXT,
    OpCode::CPUI_INT_ADD,
    OpCode::CPUI_INT_CARRY,
    OpCode::CPUI_INT_SCARRY,
    OpCode::CPUI_INT_XOR,
    OpCode::CPUI_INT_AND,
    OpCode::CPUI_INT_OR,
    OpCode::CPUI_INT_LEFT,
    OpCode::CPUI_INT_RIGHT,
    OpCode::CPUI_INT_SRIGHT,
    OpCode::CPUI_INT_MULT,
    OpCode::CPUI_BOOL_NEGATE,
    OpCode::CPUI_BOOL_XOR,
    OpCode::CPUI_BOOL_AND,
    OpCode::CPUI_BOOL_OR,
    OpCode::CPUI_FLOAT_EQUAL,
    OpCode::CPUI_FLOAT_NOTEQUAL,
    OpCode::CPUI_FLOAT_LESS,
    OpCode::CPUI_FLOAT_LESSEQUAL,
    OpCode::CPUI_FLOAT_NAN,
    OpCode::CPUI_SUBPIECE,
];

// =============================================================================
// Rules (bitfield.hh:180-265, bitfield.cc:1671-2400)
// =============================================================================

/// Collapse bitfield insertion ending in a `CPUI_STORE` (C++ `RuleBitFieldStore`,
/// bitfield.hh:181-190, bitfield.cc:1671-1692).
pub struct RuleBitFieldStore;

impl Rule for RuleBitFieldStore {
    fn get_op_list(&self) -> Vec<OpCode> {
        // C++ getOpList (bitfield.cc:1671-1675): just CPUI_STORE.
        vec![OpCode::CPUI_STORE]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // Group membership lives in the engine-owned RuleState; see ruleaction_3
        // module docs.  The clone is unconditional here.
        Some(Box::new(RuleBitFieldStore))
    }

    fn apply_op(&mut self, op: crate::context::OpId, data: &mut Funcdata) -> int4 {
        // C++ applyOp (bitfield.cc:1677-1692):
        let in1 = match data.obank().get(op).and_then(|o| o.get_in(1)) {
            Some(v) => v,
            None => return 0,
        };
        let ptr = data.vn_type_read_facing(in1, op);
        let (dt, off) = match ptr.get_ptr_into() {
            Ok(Some((dt, off))) => (dt, off),
            _ => return 0,
        };
        if !dt.has_bitfields() {
            return 0;
        }
        let vn = match data.obank().get(op).and_then(|o| o.get_in(2)) {
            Some(v) => v,
            None => return 0,
        };
        if data
            .vbank()
            .get(vn)
            .map(|v| v.is_written())
            .unwrap_or(false)
        {
            let def = data.vbank().get(vn).unwrap().get_def().unwrap();
            if data.obank().get(def).map(|o| o.code()) == Some(OpCode::CPUI_INSERT) {
                return 0;
            }
        }
        let big_endian = bitfield_big_endian(data);
        let mut transform =
            match insert::BitFieldInsertTransform::new(data, op, &dt, off, big_endian) {
                Some(t) => t,
                None => return 0,
            };
        if !transform.do_trace(data) {
            return 0;
        }
        transform.apply(data);
        1
    }
}

/// Collapse bitfield insertion ending in a write to a mapped Varnode (C++
/// `RuleBitFieldOut`, bitfield.hh:193-202, bitfield.cc:1694-1712).
pub struct RuleBitFieldOut;

impl Rule for RuleBitFieldOut {
    fn get_op_list(&self) -> Vec<OpCode> {
        // C++ getOpList (bitfield.cc:1694-1699): allowedFinalWrites followed by
        // CPUI_INDIRECT (insertion order preserved).
        let mut oplist: Vec<OpCode> = ALLOWED_FINAL_WRITES.to_vec();
        oplist.push(OpCode::CPUI_INDIRECT);
        oplist
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        Some(Box::new(RuleBitFieldOut))
    }

    fn apply_op(&mut self, op: crate::context::OpId, data: &mut Funcdata) -> int4 {
        // C++ applyOp (bitfield.cc:1701-1712):
        let outvn = match data.obank().get(op).and_then(|o| o.get_out()) {
            Some(v) => v,
            None => return 0,
        };
        let Some((dt, off)) = bitfield_container(data, outvn) else {
            return 0;
        };
        let big_endian = bitfield_big_endian(data);
        let mut transform =
            match insert::BitFieldInsertTransform::new(data, op, &dt, off, big_endian) {
                Some(t) => t,
                None => return 0,
            };
        if !transform.do_trace(data) {
            return 0;
        }
        transform.apply(data);
        1
    }
}

/// The bitfield-bearing type a written varnode belongs to, and its offset in it.
/// A struct split at its constant fields (`SplitDatatype`) reaches the rule as a
/// piece typed as its bytes, so the stack symbol that contains the piece names
/// the bitfields; otherwise the varnode's own type.
pub(crate) fn bitfield_container(data: &Funcdata, vn: VarnodeId) -> Option<(Rc<Datatype>, int4)> {
    let v = data.vbank().get(vn)?;
    let containing = data.get_scope_local().and_then(|sl| {
        sl.query_container_for_link_matching(
            v.get_addr(),
            v.get_size(),
            &Address::new_invalid(),
            |sym| sym.dtype.as_ref().is_some_and(|t| t.has_bitfields()),
        )
    });
    if let Some(info) = containing
        && let (Some(ty), true) = (info.sym_type, info.sym_off >= 0) {
            return Some((ty, info.sym_off));
        }
    let own = data.vn_type_def_facing(vn);
    own.has_bitfields().then_some((own, 0))
}

/// Collapse bitfield pulls starting with a `CPUI_LOAD` (C++ `RuleBitFieldLoad`,
/// bitfield.hh:205-214, bitfield.cc:1714-1734).
pub struct RuleBitFieldLoad;

impl Rule for RuleBitFieldLoad {
    fn get_op_list(&self) -> Vec<OpCode> {
        // C++ getOpList (bitfield.cc:1714-1718): just CPUI_LOAD.
        vec![OpCode::CPUI_LOAD]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        Some(Box::new(RuleBitFieldLoad))
    }

    fn apply_op(&mut self, op: crate::context::OpId, data: &mut Funcdata) -> int4 {
        // C++ applyOp (bitfield.cc:1720-1734):
        let in1 = match data.obank().get(op).and_then(|o| o.get_in(1)) {
            Some(v) => v,
            None => return 0,
        };
        let ptr = data.vn_type_read_facing(in1, op);
        let (dt, off) = match ptr.get_ptr_into() {
            Ok(Some((dt, off))) => (dt, off),
            _ => return 0,
        };
        if !dt.has_bitfields() {
            return 0;
        }
        if data
            .obank()
            .get(op)
            .map(|o| o.not_printed())
            .unwrap_or(true)
        {
            return 0; // LOAD visited before
        }
        let out = match data.obank().get(op).and_then(|o| o.get_out()) {
            Some(v) => v,
            None => return 0,
        };
        let big_endian = bitfield_big_endian(data);
        let mut transform = match pull::BitFieldPullTransform::new(data, out, &dt, off, big_endian)
        {
            Some(t) => t,
            None => return 0,
        };
        if !transform.do_trace(data) {
            return 0;
        }
        transform.apply(data);
        1
    }
}

/// Collapse bitfield pulls starting with mapped Varnodes (C++ `RuleBitFieldIn`,
/// bitfield.hh:217-226, bitfield.cc:1736-1759).
pub struct RuleBitFieldIn;

impl Rule for RuleBitFieldIn {
    fn get_op_list(&self) -> Vec<OpCode> {
        // C++ getOpList (bitfield.cc:1736-1746): the explicit 17-entry list, in
        // exactly that order.
        vec![
            OpCode::CPUI_COPY,
            OpCode::CPUI_INT_EQUAL,
            OpCode::CPUI_INT_NOTEQUAL,
            OpCode::CPUI_INT_SLESS,
            OpCode::CPUI_INT_SLESSEQUAL,
            OpCode::CPUI_INT_LESS,
            OpCode::CPUI_INT_LESSEQUAL,
            OpCode::CPUI_INT_ZEXT,
            OpCode::CPUI_INT_SEXT,
            OpCode::CPUI_INT_ADD,
            OpCode::CPUI_INT_NEGATE,
            OpCode::CPUI_INT_AND,
            OpCode::CPUI_INT_LEFT,
            OpCode::CPUI_INT_RIGHT,
            OpCode::CPUI_INT_SRIGHT,
            OpCode::CPUI_INT_MULT,
            OpCode::CPUI_SUBPIECE,
        ]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        Some(Box::new(RuleBitFieldIn))
    }

    fn apply_op(&mut self, op: crate::context::OpId, data: &mut Funcdata) -> int4 {
        // C++ applyOp (bitfield.cc:1748-1759):
        let invn = match data.obank().get(op).and_then(|o| o.get_in(0)) {
            Some(v) => v,
            None => return 0,
        };
        // (unlace) A constant already is the value of the bits it fills.
        if data.vbank().get(invn).is_none_or(|v| v.is_constant()) {
            return 0;
        }
        let dt = data.vn_type_read_facing(invn, op);
        if !dt.has_bitfields() {
            return 0;
        }
        let big_endian = bitfield_big_endian(data);
        let mut transform = match pull::BitFieldPullTransform::new(data, invn, &dt, 0, big_endian) {
            Some(t) => t,
            None => return 0,
        };
        if !transform.do_trace(data) {
            return 0;
        }
        transform.apply(data);
        1
    }
}

/// Simplify expressions explicitly using `ZPULL` and `SPULL` p-code ops (C++
/// `RulePullAbsorb`, bitfield.hh:229-248, bitfield.cc:2161-2212).
pub struct RulePullAbsorb;

impl Rule for RulePullAbsorb {
    fn get_op_list(&self) -> Vec<OpCode> {
        // C++ getOpList (bitfield.cc:2161-2166): CPUI_ZPULL, CPUI_SPULL.
        vec![OpCode::CPUI_ZPULL, OpCode::CPUI_SPULL]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        Some(Box::new(RulePullAbsorb))
    }

    fn apply_op(&mut self, op: crate::context::OpId, data: &mut Funcdata) -> int4 {
        // C++ applyOp (bitfield.cc:2168-2208): walks the descendants of the
        // ZPULL/SPULL output and dispatches into the absorb* helpers, all of
        // which emit/destroy ops.  Ported in `absorb::pull_absorb_apply`.
        absorb::pull_absorb_apply(op, data)
    }
}

/// Simplify expressions explicitly using the `INSERT` p-code op (C++
/// `RuleInsertAbsorb`, bitfield.hh:251-265, bitfield.cc:2357-2400).
pub struct RuleInsertAbsorb;

impl Rule for RuleInsertAbsorb {
    fn get_op_list(&self) -> Vec<OpCode> {
        // C++ getOpList (bitfield.cc:2357-2361): just CPUI_INSERT.
        vec![OpCode::CPUI_INSERT]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        Some(Box::new(RuleInsertAbsorb))
    }

    fn apply_op(&mut self, op: crate::context::OpId, data: &mut Funcdata) -> int4 {
        // C++ applyOp (bitfield.cc:2363-2400): switches on the def opcode of the
        // INSERT value input and dispatches into the absorb* helpers.  Ported in
        // `absorb::insert_absorb_apply`.
        absorb::insert_absorb_apply(op, data)
    }
}

/// Expose the bitfield rules in C++ definition order (`bitfield.hh` declaration
/// order: `bitfield_store`, `bitfield_out`, `bitfield_load`, `bitfield_in`,
/// `pull_absorb`, `insert_absorb`), per the `action.rs` `specs()` convention.
/// All six carry group `0` in C++; the W8 `universalAction` builder assigns the
/// real stage group when it places them.
pub fn specs() -> Vec<RuleSpec> {
    vec![
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleBitFieldStore),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleBitFieldOut),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleBitFieldLoad),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleBitFieldIn),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RulePullAbsorb),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleInsertAbsorb),
        },
    ]
}

pub mod absorb;
pub mod expression;
pub mod insert;
pub mod pull;

#[cfg(test)]
mod tests;
