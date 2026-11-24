//! (unlace `containerof`) Print a pointer stepped back from a struct member to the start of
//! its struct as `container_of(p, S, m)` (Linux) or `CONTAINING_RECORD(p, S, m)` (Windows).
//!
//! A CAST to `S *` whose operand is `p` minus a constant `K` (a `PTRADD` with a negative
//! index, an `INT_ADD` of a negative constant, an `INT_SUB` or a negative `PTRSUB`) is the
//! container idiom when `S` has a member at byte offset `K`. When `p` points to a struct,
//! that member must have `p`'s pointee type, found through nested structs as a `a.b` path.

use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use crate::funcdata_facing::FuncdataFacingExt;
use crate::printc::{PrintC, declarator_parts, op_key, tokens};
use crate::printlanguage::{Atom, SyntaxHighlight, TagType};
use unlace_num::opcodes::OpCode;

/// How `option containerof` spells the idiom.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum ContainerOf {
    /// Leave the pointer arithmetic and the cast.
    #[default]
    Off,
    /// `CONTAINING_RECORD` on a Windows image, `container_of` elsewhere.
    On,
    /// Always `container_of`.
    Linux,
    /// Always `CONTAINING_RECORD`.
    Windows,
}

impl ContainerOf {
    pub fn as_str(self) -> &'static str {
        match self {
            ContainerOf::Off => "off",
            ContainerOf::On => "on",
            ContainerOf::Linux => "container_of",
            ContainerOf::Windows => "containing_record",
        }
    }

    /// The macro name, given whether the image is a Windows one; `None` when off.
    pub fn spelling(self, windows: bool) -> Option<&'static str> {
        match self {
            ContainerOf::Off => None,
            ContainerOf::Linux => Some("container_of"),
            ContainerOf::Windows => Some("CONTAINING_RECORD"),
            ContainerOf::On if windows => Some("CONTAINING_RECORD"),
            ContainerOf::On => Some("container_of"),
        }
    }
}

impl crate::optionset::UnlaceOption for ContainerOf {
    const NAME: &'static str = "containerof";
    crate::unlace_option_id!();

    fn unset() -> Self {
        ContainerOf::Off
    }

    fn shipped() -> Self {
        ContainerOf::Off
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let mode = match value {
            "off" => ContainerOf::Off,
            "on" => ContainerOf::On,
            "container_of" => ContainerOf::Linux,
            "containing_record" => ContainerOf::Windows,
            other => {
                return Err(unlace_base::error::UnlaceError::parse(format!(
                    "Unknown containerof value: {other} (expected on|container_of|containing_record|off)"
                )));
            }
        };
        Ok((mode, format!("Container idiom set to {}", mode.as_str())))
    }
}

/// A recognized container idiom: `base` (read by `reader`) is a pointer to `member` of
/// `record`.
#[derive(Debug)]
pub struct Plan {
    pub base: VarnodeId,
    pub reader: OpId,
    pub record: std::rc::Rc<Datatype>,
    pub member: String,
}

fn signed(value: u64, size: i32) -> i64 {
    let shift = 64 - (size.clamp(1, 8) as u32) * 8;
    ((value << shift) as i64) >> shift
}

fn constant(fd: &Funcdata, vn: VarnodeId) -> Option<(u64, i32)> {
    let node = fd.vbank().get(vn)?;
    node.is_constant()
        .then(|| (node.get_offset(), node.get_size()))
}

/// One implied step `p + d` defining `vn`: `p`, the op reading it, and `d`.
fn step(fd: &Funcdata, vn: VarnodeId) -> Option<(VarnodeId, OpId, i64)> {
    let node = fd.vbank().get(vn)?;
    if !node.is_implied() || node.is_constant() {
        return None;
    }
    let id = node.get_def()?;
    let op = fd.obank().get(id)?;
    let at = |i| op.get_in(i);
    let (base, delta) = match op.code() {
        OpCode::CPUI_PTRADD if op.num_input() == 3 => {
            let (index, width) = constant(fd, at(1)?)?;
            let (elem, _) = constant(fd, at(2)?)?;
            (
                at(0)?,
                signed(index, width).checked_mul(i64::try_from(elem).ok()?)?,
            )
        }
        OpCode::CPUI_PTRSUB if op.num_input() == 2 => {
            let (off, size) = constant(fd, at(1)?)?;
            (at(0)?, signed(off, size))
        }
        OpCode::CPUI_INT_ADD if op.num_input() == 2 => {
            if let Some((c, size)) = constant(fd, at(1)?) {
                (at(0)?, signed(c, size))
            } else {
                let (c, size) = constant(fd, at(0)?)?;
                (at(1)?, signed(c, size))
            }
        }
        OpCode::CPUI_INT_SUB if op.num_input() == 2 => {
            let (c, size) = constant(fd, at(1)?)?;
            (at(0)?, signed(c, size).checked_neg()?)
        }
        OpCode::CPUI_CAST | OpCode::CPUI_COPY if op.num_input() == 1 => (at(0)?, 0),
        _ => return None,
    };
    if fd.vbank().get(base)?.is_constant() {
        return None;
    }
    Some((base, id, delta))
}

/// The pointer `p` at the bottom of a chain of implied steps defining `vn`, the op
/// reading it, and the chain's byte offset.
fn stepped(fd: &Funcdata, vn: VarnodeId) -> Option<(VarnodeId, OpId, i64)> {
    let (mut base, mut reader, mut total) = step(fd, vn)?;
    for _ in 0..8 {
        let Some((next, op, delta)) = step(fd, base) else {
            break;
        };
        total = total.checked_add(delta)?;
        base = next;
        reader = op;
    }
    Some((base, reader, total))
}

fn is_record(ty: &Datatype) -> bool {
    ty.get_metatype() == type_metatype::TYPE_STRUCT
        && !ty.get_name().is_empty()
        && !ty.is_incomplete()
}

/// The member path of `record` that starts `k` bytes in, with `want` (the type `p`
/// points to) when that is a record of its own.
fn member_path(record: &Datatype, k: i64, want: &Datatype, depth: u32) -> Option<String> {
    if depth > 8 {
        return None;
    }
    let mut i = 0;
    while let Some(field) = record.get_field(i) {
        i += 1;
        let off = i64::from(field.offset);
        let size = i64::from(field.field_type.get_size().max(1));
        if k < off || k >= off + size {
            continue;
        }
        let ft = &field.field_type;
        if off == k {
            if !is_record(want) {
                return Some(field.name.clone());
            }
            if ft.get_name() == want.get_name() && ft.get_size() == want.get_size() {
                return Some(field.name.clone());
            }
        }
        if is_record(ft) {
            let inner = member_path(ft, k - off, want, depth + 1)?;
            return Some(format!("{}.{inner}", field.name));
        }
        return None;
    }
    None
}

/// The container idiom at the CAST `op`, if it is one.
pub fn plan(fd: &Funcdata, arch: &Architecture, op: OpId) -> Option<Plan> {
    let cast = fd.obank().get(op)?;
    if cast.code() != OpCode::CPUI_CAST {
        return None;
    }
    let out = cast.get_out()?;
    let target = fd.vn_type_def_facing(out);
    let pointer = arch.types().get_size_of_pointer();
    if target.get_metatype() != type_metatype::TYPE_PTR
        || target.is_formal_pointer_rel()
        || target.get_size() != pointer
    {
        return None;
    }
    let record = target.get_ptr_to()?;
    if !is_record(&record) {
        return None;
    }
    let (base, reader, delta) = stepped(fd, cast.get_in(0)?)?;
    if delta >= 0 || -delta >= i64::from(record.get_size()) {
        return None;
    }
    if fd.vbank().get(base)?.get_size() != pointer {
        return None;
    }
    let base_type = fd.vn_type_read_facing(base, reader);
    if !matches!(
        base_type.get_metatype(),
        type_metatype::TYPE_PTR | type_metatype::TYPE_PTRREL
    ) || base_type.is_formal_pointer_rel()
    {
        return None;
    }
    let want = base_type.get_ptr_to()?;
    let member = member_path(&record, -delta, &want, 0)?;
    Some(Plan {
        base,
        reader,
        record,
        member,
    })
}

impl PrintC {
    /// Push `container_of(p, S, m)` for the CAST `op` when `option containerof` is on
    /// and the CAST is the container idiom.
    pub fn push_container_of(&mut self, fd: &Funcdata, arch: &Architecture, op: OpId) -> bool {
        if self.out_lang != crate::lang::OutLang::C {
            return false;
        }
        let ctx = fd.get_arch();
        let windows = ctx.windows_cspec || ctx.image_windows_user;
        let Some(name) = arch.unlace_options.get::<ContainerOf>().spelling(windows) else {
            return false;
        };
        let Some(plan) = plan(fd, arch, op) else {
            return false;
        };
        let (front, back) = declarator_parts(&plan.record, self.rt_ctx.clone());
        self.push_op(&tokens::FUNCTION_CALL, Some(op_key(op)));
        self.push_atom(&Atom::with_op(
            name.to_string(),
            TagType::OpToken,
            SyntaxHighlight::funcname_color,
            op_key(op),
        ));
        self.push_op(&tokens::COMMA, Some(op_key(op)));
        self.push_op(&tokens::COMMA, Some(op_key(op)));
        self.push_vn_ir(fd, arch, plan.base, plan.reader);
        self.push_atom(&Atom::syntax(
            format!("{}{}", front.trim_end(), back),
            TagType::TypeToken,
            SyntaxHighlight::type_color,
        ));
        self.push_atom(&Atom::syntax(
            plan.member,
            TagType::Syntax,
            SyntaxHighlight::no_color,
        ));
        true
    }
}
