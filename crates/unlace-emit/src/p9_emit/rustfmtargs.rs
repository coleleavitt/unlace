//! Primitive Display arguments in the verified Rust 1.93 template layout.

use std::collections::BTreeMap;
use std::rc::Rc;

use super::rustfmtflags::{Formatter, Options, Trait};
use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::varnode::varnode_flags;
use unlace_base::address::Address;
use unlace_num::opcodes::OpCode;

const MAX_BYTES: usize = 4096;
const MAX_ARGS: usize = 16;

pub enum Argument {
    Primitive {
        pointer: VarnodeId,
        primitive: &'static str,
    },
    String {
        data: VarnodeId,
        length: VarnodeId,
        pointer_bridge: bool,
    },
}

pub struct Plan {
    pub name: &'static str,
    pub literal: String,
    pub arguments: Vec<Argument>,
}

#[doc(hidden)]
pub enum Writer {
    String {
        value: VarnodeId,
        pointer_bridge: bool,
    },
    Io(super::rustfmtio::Writer),
}

#[derive(Clone, Copy)]
#[doc(hidden)]
pub enum MacroKind {
    Print(bool),
    Format,
    Panic,
    Write,
}

/// Full demangled identities, before display-name normalization. Conflicting
/// aliases invalidate an address even when one alias names a supported trait.
pub fn formatter_symbols(
    symbols: impl IntoIterator<Item = (u64, Option<String>)>,
) -> BTreeMap<u64, &'static str> {
    super::rustfmtflags::formatter_symbols(symbols)
        .into_iter()
        .filter_map(|(address, formatter)| {
            (formatter.kind == Trait::Display).then_some((address, formatter.primitive))
        })
        .collect()
}

#[doc(hidden)]
pub fn recover(fd: &Funcdata, arch: &Architecture, id: OpId) -> Option<Plan> {
    if !arch
        .unlace_options
        .get::<crate::rustfmt::RustFmtMode>()
        .recovers()
        || arch.source_lang() != crate::sourcelang::SourceLang::Rust
        || !matches!(arch.rustc_stable_version, Some((1, 93, 0 | 1)))
    {
        return None;
    }
    let call = fd.obank().get(id)?;
    if call.code() != OpCode::CPUI_CALL || call.num_input() != 3 || call.get_out().is_some() {
        return None;
    }
    let stderr = super::rustfmtliteral::print_sink(fd, id)?;
    recover_at(fd, arch, id, 1, 2, MacroKind::Print(stderr))
}

#[doc(hidden)]
pub fn recover_at(
    fd: &Funcdata,
    arch: &Architecture,
    id: OpId,
    template_slot: i32,
    array_slot: i32,
    kind: MacroKind,
) -> Option<Plan> {
    if fd.obank().get(id)?.get_out().is_some() {
        return None;
    }
    recover_inputs_at(fd, arch, id, template_slot, array_slot, kind)
}

/// Decode formatting inputs after the consumer validates its result ABI.
#[doc(hidden)]
pub fn recover_inputs_at(
    fd: &Funcdata,
    arch: &Architecture,
    id: OpId,
    template_slot: i32,
    array_slot: i32,
    kind: MacroKind,
) -> Option<Plan> {
    if !arch
        .unlace_options
        .get::<crate::rustfmt::RustFmtMode>()
        .recovers()
        || arch.source_lang() != crate::sourcelang::SourceLang::Rust
        || !matches!(arch.rustc_stable_version, Some((1, 93, 0 | 1)))
        || (arch.rust_display_formatters.is_empty()
            && arch
                .unlace_tables
                .get::<crate::rustfmtflags::IntegerFormatters>()
                .is_empty()
            && arch.rust_str_display_formatters.is_empty())
    {
        return None;
    }
    let call = fd.obank().get(id)?;
    if call.code() != OpCode::CPUI_CALL {
        return None;
    }
    let space = fd.get_arch().manage().get_default_data_space()?;
    if space.get_addr_size() != 8 || space.is_big_endian() {
        return None;
    }
    let template = constant_word(fd, call.get_in(template_slot)?)?;
    if template == 0 {
        return None;
    }
    let array = stack_offset(fd, call.get_in(array_slot)?)?;
    if array % 8 != 0 {
        return None;
    }
    let mut position = 0usize;
    let decoded = decode_template(true, |size| {
        let end = position.checked_add(size)?;
        if end > MAX_BYTES {
            return None;
        }
        let start = template.checked_add(position as u64)?;
        template.checked_add(end as u64)?;
        for offset in 0..size {
            let address = Address::new(Rc::clone(space), start + offset as u64);
            let flags = fd.get_arch().query_global_range_properties(&address);
            if flags & varnode_flags::readonly == 0 || flags & varnode_flags::volatil != 0 {
                return None;
            }
        }
        let mut bytes = vec![0; size];
        fd.get_arch()
            .loader_fill(&mut bytes, &Address::new(Rc::clone(space), start))
            .ok()?;
        position = end;
        Some(bytes)
    })?;
    let (arguments, formatters) = primitive_arguments(fd, arch, id, array, decoded.count)?;
    let (name, literal) = decoded.render(kind, &formatters)?;
    Some(Plan {
        name,
        literal,
        arguments,
    })
}

#[doc(hidden)]
pub fn primitive_arguments(
    fd: &Funcdata,
    arch: &Architecture,
    id: OpId,
    array: i64,
    count: usize,
) -> Option<(Vec<Argument>, Vec<Formatter>)> {
    if count > MAX_ARGS || array % 8 != 0 {
        return None;
    }
    let cells = stack_cells(fd, id, array, count * 2)?;
    let mut arguments = Vec::with_capacity(count);
    let mut formatters = Vec::with_capacity(count);
    for index in 0..count {
        let pointer = cells[index * 2];
        let address = constant_word(fd, cells[index * 2 + 1])?;
        let Some(formatter) = arch
            .unlace_tables
            .get::<crate::rustfmtflags::IntegerFormatters>()
            .get(&address)
            .copied()
        else {
            arguments.push(super::rustfmtstr::recover(fd, arch, id, address, pointer)?);
            formatters.push(Formatter {
                primitive: "&str",
                kind: Trait::Display,
            });
            continue;
        };
        let primitive = formatter.primitive;
        let offset = stack_offset(fd, pointer)?;
        let size = match primitive {
            "u8" | "i8" => 1,
            "u16" | "i16" => 2,
            "u32" | "i32" => 4,
            "u64" | "i64" => 8,
            _ => return None,
        };
        if offset % size != 0 {
            return None;
        }
        arguments.push(Argument::Primitive { pointer, primitive });
        formatters.push(formatter);
    }
    Some((arguments, formatters))
}

#[doc(hidden)]
pub fn stack_cells(fd: &Funcdata, call: OpId, base: i64, words: usize) -> Option<Vec<VarnodeId>> {
    let stack = fd.get_arch().manage().get_stack_space()?;
    let mut cells = vec![None; words];
    let end = base.checked_add((words * 8) as i64)?;
    for id in fd.obank().iter_alive() {
        let op = fd.obank().get(id)?;
        if op.code() != OpCode::CPUI_INDIRECT || op.is_indirect_creation() {
            continue;
        }
        let Some(effect) = op.get_in(1).and_then(|v| fd.vbank().get(v)) else {
            continue;
        };
        if OpId::from(slotmap::KeyData::from_ffi(effect.get_offset())) != call {
            continue;
        }
        let output = fd.vbank().get(op.get_out()?)?;
        if output.get_space().get_index() != stack.get_index() {
            continue;
        }
        let start = output.get_offset() as i64;
        let stop = start.checked_add(output.get_size() as i64)?;
        if start >= end || stop <= base {
            continue;
        }
        if start < base || stop > end || output.get_size() != 8 || (start - base) % 8 != 0 {
            return None;
        }
        let cell = &mut cells[((start - base) / 8) as usize];
        if cell.replace(op.get_in(0)?).is_some() {
            return None;
        }
    }
    cells.into_iter().collect()
}

#[doc(hidden)]
pub fn constant_word(fd: &Funcdata, mut id: VarnodeId) -> Option<u64> {
    for _ in 0..8 {
        let value = fd.vbank().get(id)?;
        if value.get_size() != 8 {
            return None;
        }
        if value.is_constant() {
            return Some(value.get_offset());
        }
        let op = fd.obank().get(value.get_def()?)?;
        match op.code() {
            OpCode::CPUI_COPY | OpCode::CPUI_CAST => id = op.get_in(0)?,
            OpCode::CPUI_PTRSUB => {
                let base = fd.vbank().get(op.get_in(0)?)?;
                if !base.is_constant() || base.get_offset() != 0 {
                    return None;
                }
                id = op.get_in(1)?;
            }
            _ => return None,
        }
    }
    None
}

#[doc(hidden)]
pub fn stack_offset(fd: &Funcdata, mut id: VarnodeId) -> Option<i64> {
    let base = fd
        .get_arch()
        .manage()
        .get_stack_space()?
        .get_spacebase(0)
        .ok()?;
    let mut offset = 0i64;
    for _ in 0..8 {
        let value = fd.vbank().get(id)?;
        if value.get_size() != 8 || offset.unsigned_abs() > 1024 * 1024 {
            return None;
        }
        let Some(def) = value.get_def() else {
            return (value.is_input()
                && value.get_space().get_index() == base.space.as_ref()?.get_index()
                && value.get_offset() == base.offset
                && value.get_size() as u32 == base.size)
                .then_some(offset);
        };
        let op = fd.obank().get(def)?;
        match op.code() {
            OpCode::CPUI_COPY | OpCode::CPUI_CAST => id = op.get_in(0)?,
            OpCode::CPUI_PTRSUB | OpCode::CPUI_INT_ADD | OpCode::CPUI_INT_SUB => {
                let literal = fd.vbank().get(op.get_in(1)?)?;
                if !literal.is_constant() || literal.get_size() != 8 {
                    return None;
                }
                let delta = literal.get_offset() as i64;
                offset = if op.code() == OpCode::CPUI_INT_SUB {
                    offset.checked_sub(delta)?
                } else {
                    offset.checked_add(delta)?
                };
                id = op.get_in(0)?;
            }
            _ => return None,
        }
    }
    None
}

#[doc(hidden)]
pub fn render_pieces(
    literals: Vec<String>,
    arguments: Vec<Argument>,
    formatters: Vec<Formatter>,
    stderr: bool,
) -> Option<Plan> {
    let count = arguments.len();
    if formatters.len() != count || !(count..=count + 1).contains(&literals.len()) {
        return None;
    }
    let mut pieces = Vec::new();
    for (index, text) in literals.into_iter().enumerate() {
        pieces.push(Piece::Literal(text));
        if index < count {
            pieces.push(Piece::Argument(index, Options::default()));
        }
    }
    let decoded = Template {
        pieces,
        count,
        indexed: false,
    };
    let (name, literal) = decoded.render(MacroKind::Print(stderr), &formatters)?;
    Some(Plan {
        name,
        literal,
        arguments,
    })
}

#[derive(Debug, PartialEq)]
enum Piece {
    Literal(String),
    Argument(usize, Options),
}

#[derive(Debug, PartialEq)]
struct Template {
    pieces: Vec<Piece>,
    count: usize,
    indexed: bool,
}

fn decode_template(
    flags: bool,
    mut take: impl FnMut(usize) -> Option<Vec<u8>>,
) -> Option<Template> {
    let mut pieces = Vec::new();
    let mut next = 0usize;
    let mut count = 0;
    let mut used = 0u32;
    let mut indexed = false;
    for _ in 0..128 {
        let head = *take(1)?.first()?;
        match head {
            0 => {
                if count == 0 || used != (1 << count) - 1 {
                    return None;
                }
                return Some(Template {
                    pieces,
                    count,
                    indexed,
                });
            }
            1..=0x80 => {
                let len = if head == 0x80 {
                    u16::from_le_bytes(take(2)?.try_into().ok()?) as usize
                } else {
                    head as usize
                };
                if len == 0 || len > MAX_BYTES {
                    return None;
                }
                pieces.push(Piece::Literal(String::from_utf8(take(len)?).ok()?));
            }
            0xc0..=0xff => {
                let options = if flags {
                    Options::decode(head, &mut take)?
                } else if matches!(head, 0xc0 | 0xc8) {
                    Options::default()
                } else {
                    return None;
                };
                if head & 8 != 0 {
                    next = u16::from_le_bytes(take(2)?.try_into().ok()?) as usize;
                    indexed = true;
                }
                if next >= MAX_ARGS {
                    return None;
                }
                pieces.push(Piece::Argument(next, options));
                used |= 1 << next;
                next += 1;
                count = count.max(next);
            }
            _ => return None,
        }
    }
    None
}

impl Template {
    fn render(
        mut self,
        kind: MacroKind,
        formatters: &[Formatter],
    ) -> Option<(&'static str, String)> {
        let newline = match self.pieces.last_mut() {
            Some(Piece::Literal(text))
                if matches!(kind, MacroKind::Print(_) | MacroKind::Write)
                    && text.ends_with('\n') =>
            {
                text.pop();
                true
            }
            _ => false,
        };
        let name = match (kind, newline) {
            (MacroKind::Print(false), false) => "print!",
            (MacroKind::Print(false), true) => "println!",
            (MacroKind::Print(true), false) => "eprint!",
            (MacroKind::Print(true), true) => "eprintln!",
            (MacroKind::Format, _) => "format!",
            (MacroKind::Panic, _) => "panic!",
            (MacroKind::Write, false) => "write!",
            (MacroKind::Write, true) => "writeln!",
        };
        let mut literal = String::from("\"");
        for piece in self.pieces {
            match piece {
                Piece::Literal(text) => {
                    for ch in text.chars() {
                        match ch {
                            '{' => literal.push_str("{{"),
                            '}' => literal.push_str("}}"),
                            ch => literal.extend(ch.escape_debug()),
                        }
                    }
                }
                Piece::Argument(index, options) => {
                    literal.push('{');
                    if self.indexed {
                        literal.push_str(&index.to_string());
                    }
                    let spec = options.render(formatters.get(index)?.kind)?;
                    if !spec.is_empty() {
                        literal.push(':');
                        literal.push_str(&spec);
                    }
                    literal.push('}');
                }
            }
        }
        literal.push('"');
        Some((name, literal))
    }
}

#[cfg(test)]
mod tests;
