//! (unlace `strcmpfold`) A compare against a short constant string that a compiler
//! inlined prints as the library call.
//!
//! gcc and clang at `-O2` turn `strncmp(buf, "SH ", 3) == 0`, `strcmp(buf, "OK") == 0`
//! and `memcmp(buf, "PING", 4) == 0` into loads of the buffer compared with immediates
//! when only equality is asked and the buffer is known to hold the bytes (gcc's
//! `tree-ssa-strlen.cc` makes them `__builtin_memcmp_eq` over `min(n, strlen + 1)`
//! bytes; LLVM's `SimplifyLibCalls` makes them `memcmp`/`bcmp` over the same count).
//! gcc compares the widest pieces first, each with a branch to one fail label, and on
//! x86 lets the last piece overlap the one before (`compare_by_pieces`); LLVM's
//! `ExpandMemCmp` xors each load with its constant and ors the results into one test
//! against zero, which the rules print as a `||` of `!=` (or a `&&` of `==` on
//! AArch64's `ccmp`). The C showed `(*(unsigned short *)v2 == 0x4853) && (v2[2] == ' ')`.
//!
//! [`test_pieces`] walks a boolean through implied `BOOL_AND`/`BOOL_OR`/`BOOL_NEGATE`,
//! the compares under them and an `INT_OR` reduction of `INT_XOR`/`INT_SUB` terms
//! against zero, down to reads (narrowed by `SUBPIECE`, widened by `INT_ZEXT`) of a
//! named variable or of a `LOAD` through a pointer plus a constant, and lists the bytes
//! each read must hold. [`fold`] accepts them only as one inlined string compare: every
//! read is of one array of bytes (`char`, a one-byte integer or `undefined1`; each
//! read's high may carry either) or through one pointer to bytes, together they cover
//! one run of bytes with no gap, overlapping reads agree, at least one read is wider than
//! a byte, and every byte is printable except a last NUL. A run ending in its only NUL
//! is `strcmp` of the bytes before it; any other run is `strncmp` of its length.

use std::rc::Rc;

use crate::context::{HighVariableId, OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;
use crate::op::PcodeOp;
use unlace_num::opcodes::OpCode;

/// What a read of a named variable prints as: the variable's name, the byte offset of
/// the read inside it and the variable's type.
pub type Object = (String, i32, Rc<Datatype>);

/// What identifies a pointer's value: its variable, or the Varnode when it has none.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum PointerKey {
    High(HighVariableId),
    Varnode(VarnodeId),
}

/// What the bytes a read tests belong to.
#[derive(Clone, Debug)]
pub enum Base {
    /// A named variable, by its printed name and type.
    Variable { name: String, ty: Rc<Datatype> },
    /// Memory through the pointer `root`, read by the op `reader`.
    Pointer {
        root: VarnodeId,
        reader: OpId,
        key: PointerKey,
    },
}

impl Base {
    fn same(&self, other: &Base) -> bool {
        match (self, other) {
            (Base::Variable { name, ty }, Base::Variable { name: n, ty: t }) => {
                name == n && ty.get_size() == t.get_size()
            }
            (Base::Pointer { key, .. }, Base::Pointer { key: k, .. }) => key == k,
            _ => false,
        }
    }
}

/// The bytes one read must hold: `bytes` at offset `at` of `base`.
#[derive(Clone, Debug)]
pub struct Piece {
    pub base: Base,
    pub at: u32,
    pub bytes: Vec<u8>,
    /// The read itself, for markup.
    pub vn: VarnodeId,
}

/// The library function a folded compare prints as.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Callee {
    /// `strcmp(base, "text")`: the bytes ended in their only NUL.
    Strcmp,
    /// `strncmp(base, "text", n)`.
    Strncmp,
}

impl Callee {
    pub fn name(self) -> &'static str {
        match self {
            Callee::Strcmp => "strcmp",
            Callee::Strncmp => "strncmp",
        }
    }
}

/// One inlined string compare: `callee(base + at, "text"[, len])`.
#[derive(Clone, Debug)]
pub struct Fold {
    pub callee: Callee,
    pub base: Base,
    pub at: u32,
    /// The constant's characters, without the NUL `strcmp` ends at.
    pub text: Vec<u8>,
    /// The number of bytes compared.
    pub len: u32,
    /// The read at the start of the run, for markup.
    pub vn: VarnodeId,
}

fn printable(byte: u8) -> bool {
    matches!(byte, 0x20..=0x7e | b'\t' | b'\n' | b'\r')
}

fn byte(ty: &Datatype) -> bool {
    use type_metatype::{TYPE_INT, TYPE_UINT, TYPE_UNKNOWN};
    ty.get_size() == 1
        && !ty.is_enum_type()
        && matches!(ty.get_metatype(), TYPE_INT | TYPE_UINT | TYPE_UNKNOWN)
}

fn byte_array(ty: &Datatype) -> bool {
    ty.get_metatype() == type_metatype::TYPE_ARRAY && ty.get_array_base().is_some_and(|e| byte(&e))
}

/// A pointer whose target is bytes (or unknown), or an integer used as one.
fn byte_pointer(ty: &Datatype) -> bool {
    use type_metatype::{TYPE_INT, TYPE_PTR, TYPE_UINT, TYPE_UNKNOWN, TYPE_VOID};
    match ty.get_metatype() {
        TYPE_PTR => ty
            .get_ptr_to()
            .is_some_and(|to| byte(&to) || byte_array(&to) || to.get_metatype() == TYPE_VOID),
        TYPE_INT | TYPE_UINT | TYPE_UNKNOWN => !ty.is_enum_type(),
        _ => false,
    }
}

/// The string compare `pieces` make together, if they are one (see the module comment).
pub fn fold(pieces: &[Piece]) -> Option<Fold> {
    let first = pieces.first()?;
    let size = match &first.base {
        Base::Variable { ty, .. } if byte_array(ty) => Some(u32::try_from(ty.get_size()).ok()?),
        Base::Variable { .. } => return None,
        Base::Pointer { .. } => None,
    };
    let start = pieces.iter().map(|p| p.at).min()?;
    let end = pieces.iter().map(|p| p.at + p.bytes.len() as u32).max()?;
    if size.is_some_and(|size| end > size)
        || end - start < 2
        || pieces.iter().all(|p| p.bytes.len() < 2)
    {
        return None;
    }
    let mut run: Vec<Option<u8>> = vec![None; (end - start) as usize];
    for piece in pieces {
        if !piece.base.same(&first.base) {
            return None;
        }
        for (i, &byte) in piece.bytes.iter().enumerate() {
            let slot = &mut run[(piece.at - start) as usize + i];
            if slot.is_some_and(|held| held != byte) {
                return None;
            }
            *slot = Some(byte);
        }
    }
    let run: Vec<u8> = run.into_iter().collect::<Option<_>>()?;
    let (callee, text) = match run.split_last() {
        Some((0, text)) => (Callee::Strcmp, text),
        _ => (Callee::Strncmp, &run[..]),
    };
    if text.is_empty() || !text.iter().all(|&b| printable(b)) {
        return None;
    }
    let vn = pieces
        .iter()
        .find(|p| p.at == start)
        .map_or(first.vn, |p| p.vn);
    Some(Fold {
        callee,
        base: first.base.clone(),
        at: start,
        text: text.to_vec(),
        len: end - start,
        vn,
    })
}

fn implied_def(fd: &Funcdata, vn: VarnodeId) -> Option<(OpId, &PcodeOp)> {
    let v = fd.vbank().get(vn)?;
    if !v.is_implied() {
        return None;
    }
    let def = v.get_def()?;
    Some((def, fd.obank().get(def)?))
}

fn constant(fd: &Funcdata, vn: VarnodeId) -> Option<u64> {
    fd.vbank()
        .get(vn)
        .filter(|v| v.is_constant())
        .map(|v| v.get_offset())
}

/// The pointer a `LOAD` reads through and the constant offset from it: the address is
/// walked through implied `CAST`, `COPY`, constant `PTRADD`/`PTRSUB` and `INT_ADD` of a
/// constant to a pointer to bytes.
fn load_base(fd: &Funcdata, load: (OpId, &PcodeOp)) -> Option<(Base, u32)> {
    let (mut reader, op) = load;
    let mut addr = op.get_in(1)?;
    let mut offset: u64 = 0;
    while let Some((id, def)) = implied_def(fd, addr) {
        let (next, step) = match def.code() {
            OpCode::CPUI_CAST | OpCode::CPUI_COPY => (def.get_in(0)?, 0),
            OpCode::CPUI_PTRADD => {
                let count = constant(fd, def.get_in(1)?)?;
                (
                    def.get_in(0)?,
                    count.wrapping_mul(constant(fd, def.get_in(2)?)?),
                )
            }
            OpCode::CPUI_PTRSUB => (def.get_in(0)?, constant(fd, def.get_in(1)?)?),
            OpCode::CPUI_INT_ADD => {
                match (constant(fd, def.get_in(0)?), constant(fd, def.get_in(1)?)) {
                    (None, Some(c)) => (def.get_in(0)?, c),
                    (Some(c), None) => (def.get_in(1)?, c),
                    _ => break,
                }
            }
            _ => break,
        };
        offset = offset.wrapping_add(step);
        reader = id;
        addr = next;
    }
    let root = fd.vbank().get(addr)?;
    if root.is_constant() || !byte_pointer(root.get_type()) {
        return None;
    }
    let key = if root.is_implied() {
        PointerKey::Varnode(addr)
    } else {
        PointerKey::High(root.get_high()?)
    };
    let base = Base::Pointer {
        root: addr,
        reader,
        key,
    };
    Some((base, u32::try_from(offset).ok()?))
}

/// Push the read `vn` must hold to equal `value`: the bytes of `vn`'s significance
/// `window` (offset and size; all of it when `None`) in memory order.
fn push_read(
    fd: &Funcdata,
    vn: VarnodeId,
    value: u64,
    window: Option<(u32, u32)>,
    object: &dyn Fn(VarnodeId) -> Option<Object>,
    out: &mut Vec<Piece>,
) -> Option<()> {
    let v = fd.vbank().get(vn)?;
    let size = u32::try_from(v.get_size()).ok()?;
    let (low, width) = window.unwrap_or((0, size));
    if width == 0 || width > 8 || low + width > size || (width < 8 && value >> (8 * width) != 0) {
        return None;
    }
    let (base, offset) = match implied_def(fd, vn) {
        Some((_, def)) if def.code() == OpCode::CPUI_INT_ZEXT && window.is_none() => {
            return push_read(fd, def.get_in(0)?, value, None, object, out);
        }
        Some((_, def)) if def.code() == OpCode::CPUI_SUBPIECE && window.is_none() => {
            let shift = u32::try_from(constant(fd, def.get_in(1)?)?).ok()?;
            return push_read(fd, def.get_in(0)?, value, Some((shift, size)), object, out);
        }
        Some(load) if load.1.code() == OpCode::CPUI_LOAD => load_base(fd, load)?,
        Some(_) => return None,
        None => {
            let (name, offset, ty) = object(vn)?;
            (
                Base::Variable { name, ty },
                u32::try_from(offset.max(0)).ok()?,
            )
        }
    };
    let big = v.get_space().is_big_endian();
    let at = offset + if big { size - low - width } else { low };
    let bytes = (0..width)
        .map(|i| {
            let shift = if big { width - 1 - i } else { i };
            (value >> (8 * shift)) as u8
        })
        .collect();
    out.push(Piece {
        base,
        at,
        bytes,
        vn,
    });
    Some(())
}

/// Push the reads of an `INT_OR` reduction that is zero exactly when each read holds its
/// constant: `(a ^ c) | (b - d) | zext(e) | f`.
fn push_reduction(
    fd: &Funcdata,
    vn: VarnodeId,
    object: &dyn Fn(VarnodeId) -> Option<Object>,
    out: &mut Vec<Piece>,
) -> Option<()> {
    let Some((_, def)) = implied_def(fd, vn) else {
        return push_read(fd, vn, 0, None, object, out);
    };
    match def.code() {
        OpCode::CPUI_INT_OR => {
            push_reduction(fd, def.get_in(0)?, object, out)?;
            push_reduction(fd, def.get_in(1)?, object, out)
        }
        OpCode::CPUI_INT_ZEXT => push_reduction(fd, def.get_in(0)?, object, out),
        OpCode::CPUI_INT_XOR | OpCode::CPUI_INT_SUB => {
            let (a, b) = (def.get_in(0)?, def.get_in(1)?);
            match (constant(fd, a), constant(fd, b)) {
                (None, Some(c)) => push_read(fd, a, c, None, object, out),
                (Some(c), None) if def.code() == OpCode::CPUI_INT_XOR => {
                    push_read(fd, b, c, None, object, out)
                }
                _ => None,
            }
        }
        _ => push_read(fd, vn, 0, None, object, out),
    }
}

/// Push the reads `op` tests, when `op`'s boolean is true exactly when every read holds
/// its bytes (`equal`), or exactly when one does not (`!equal`).
pub fn test_pieces(
    fd: &Funcdata,
    op: &PcodeOp,
    equal: bool,
    object: &dyn Fn(VarnodeId) -> Option<Object>,
    out: &mut Vec<Piece>,
) -> Option<()> {
    let both = |out: &mut Vec<Piece>| -> Option<()> {
        test_vn(fd, op.get_in(0)?, equal, object, out)?;
        test_vn(fd, op.get_in(1)?, equal, object, out)
    };
    match op.code() {
        OpCode::CPUI_INT_EQUAL | OpCode::CPUI_INT_NOTEQUAL => {
            if (op.code() == OpCode::CPUI_INT_EQUAL) != equal {
                return None;
            }
            let (a, b) = (op.get_in(0)?, op.get_in(1)?);
            let (term, value) = match (constant(fd, a), constant(fd, b)) {
                (None, Some(c)) => (a, c),
                (Some(c), None) => (b, c),
                _ => return None,
            };
            let reduction = implied_def(fd, term).is_some_and(|(_, d)| {
                matches!(
                    d.code(),
                    OpCode::CPUI_INT_OR | OpCode::CPUI_INT_XOR | OpCode::CPUI_INT_SUB
                )
            });
            if value == 0 && reduction {
                push_reduction(fd, term, object, out)
            } else {
                push_read(fd, term, value, None, object, out)
            }
        }
        OpCode::CPUI_BOOL_AND if equal => both(out),
        OpCode::CPUI_BOOL_OR if !equal => both(out),
        OpCode::CPUI_BOOL_NEGATE => test_vn(fd, op.get_in(0)?, !equal, object, out),
        _ => None,
    }
}

/// [`test_pieces`] of the implied op defining `vn`.
pub fn test_vn(
    fd: &Funcdata,
    vn: VarnodeId,
    equal: bool,
    object: &dyn Fn(VarnodeId) -> Option<Object>,
    out: &mut Vec<Piece>,
) -> Option<()> {
    test_pieces(fd, implied_def(fd, vn)?.1, equal, object, out)
}

crate::unlace_flag!(
    /// (unlace `strcmpfold`) Print an inlined compare against a constant string as
    /// `strncmp`/`strcmp`.
    StrcmpFold,
    "strcmpfold",
    "inlined string compares as strncmp/strcmp",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod tests;
