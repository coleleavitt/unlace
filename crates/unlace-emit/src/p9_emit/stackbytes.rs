//! Emit changed bytes without reading a shared backing's preserved bytes.

use crate::context::{OpId, VarnodeId};
use crate::database::SymbolId;
use crate::dtype::type_metatype;
use crate::funcdata::Funcdata;
use crate::funcdata_facing::FuncdataFacingExt;
use unlace_base::address::Address;
use unlace_num::opcodes::OpCode;

#[derive(Clone, Copy)]
#[doc(hidden)]
pub enum Byte {
    Constant(u8),
    Value {
        source: VarnodeId,
        byte: i32,
        read_op: Option<OpId>,
    },
}

#[doc(hidden)]
pub struct Range {
    pub offset: i32,
    pub bytes: Vec<Byte>,
}

#[doc(hidden)]
pub struct Assignment {
    pub output: VarnodeId,
    pub name: String,
    pub offset: i32,
    pub pointer_size: i32,
    pub ranges: Vec<Range>,
}

#[doc(hidden)]
pub fn assignment(fd: &Funcdata, op: OpId) -> Option<Assignment> {
    macro_rules! reject {
        ($($arg:tt)*) => {{
            return None;
        }};
    }
    if !crate::stackviews::enabled(fd) {
        reject!("stackviews off");
    }
    let Some(operation) = fd.obank().get(op) else {
        reject!("stale op");
    };
    if operation.is_marker() {
        reject!("marker");
    }
    let Some(output) = operation.get_out() else {
        reject!("no output");
    };
    let Some(value) = fd.vbank().get(output) else {
        reject!("missing output varnode");
    };
    let Some(stack) = fd.get_arch().manage().get_stack_space() else {
        reject!("no stack space");
    };
    if value.get_space().get_index() != stack.get_index() {
        reject!("output is not stack space");
    }
    let size = value.get_size();
    if !(1..=8).contains(&size) {
        reject!("output size {size}");
    }
    let Some(scope) = fd.get_scope_local() else {
        reject!("no local scope");
    };
    let Some(info) =
        scope.query_container_for_link_width(value.get_addr(), size, &Address::new_invalid())
    else {
        reject!(
            "no stack container for offset {} size {size}",
            value.get_offset()
        );
    };
    if info.is_name_undefined {
        reject!("unnamed stack container");
    }
    let stackview_container = info
        .sym_type
        .as_ref()
        .is_some_and(|ty| ty.get_name().starts_with("stack_views_"));
    let output_type = fd.vn_type_read_facing(output, op).get_metatype();
    let source_type = operation
        .get_in(0)
        .map(|source| fd.vn_type_read_facing(source, op).get_metatype());
    let pointer_copy = operation.code() == OpCode::CPUI_COPY
        && stackview_container
        && (is_pointer_type(output_type)
            || is_pointer_type(fd.vn_type_def_facing(output).get_metatype())
            || operation.get_in(0).is_some_and(|source| {
                source_type.is_some_and(is_pointer_type) || def_facing_pointer(fd, source)
            }));
    if pointer_copy {
        reject!("pointer-valued stackview COPY stays typed");
    }
    let Some(mut bytes) = expression(fd, output, true, 32, op, info.symbol, None) else {
        reject!("unsupported source expression, output size {size}");
    };
    if stack.is_big_endian() {
        bytes.reverse();
    }
    let preserved = |index: usize, byte: Byte| {
        let Byte::Value { source, byte, .. } = byte else {
            return false;
        };
        let Some(source_value) = fd.vbank().get(source) else {
            return false;
        };
        let displacement = if stack.is_big_endian() {
            source_value.get_size() - 1 - byte
        } else {
            byte
        };
        source_value.get_space().get_index() == stack.get_index()
            && source_value.get_offset().wrapping_add(displacement as u64)
                == value.get_offset().wrapping_add(index as u64)
            && same_backing(fd, source, info.symbol)
    };
    let keep: Vec<_> = bytes
        .iter()
        .enumerate()
        .map(|(index, byte)| preserved(index, *byte))
        .collect();
    let physical_merged_source = bytes.iter().any(|byte| {
        let Byte::Value {
            source, read_op, ..
        } = byte
        else {
            return false;
        };
        shares_backing_high(fd, *source, info.symbol)
            && !same_backing(fd, *source, info.symbol)
            && (safe_load_op(fd, *source, op).is_some()
                || safe_global_source(fd, *source, op, *read_op).is_some())
            && fd.vbank().get(*source).is_some()
            && !is_pointer_type(fd.vn_type_read_facing(*source, op).get_metatype())
            && !def_facing_pointer(fd, *source)
    });
    let stackview_scalar_copy = operation.code() == OpCode::CPUI_COPY
        && stackview_container
        && !pointer_copy
        && (operation.not_printed() || value.is_implied() || physical_merged_source);
    if matches!(size, 1 | 2 | 4 | 8) && !keep.iter().any(|keep| *keep) {
        if !matches!(
            fd.vn_type_def_facing(output).get_metatype(),
            type_metatype::TYPE_ARRAY | type_metatype::TYPE_STRUCT | type_metatype::TYPE_UNION
        ) && !stackview_scalar_copy
        {
            reject!(
                "no preserved bytes and scalar output type {:?}; op={:?}; internal={}; container={}",
                fd.vn_type_def_facing(output).get_metatype(),
                operation.code(),
                operation.not_printed(),
                info.sym_type.as_ref().map_or("<none>", |ty| ty.get_name())
            );
        }
    }
    let mut ranges: Vec<Range> = Vec::new();
    for (index, byte) in bytes.into_iter().enumerate() {
        if keep[index] {
            continue;
        }
        // `keep` already removes each byte that is literally the same stack
        // storage byte. A different byte in the same generated backing still
        // has to be read and copied, even when both Varnodes share one HighVariable.
        if let Byte::Value {
            source, read_op, ..
        } = byte
        {
            let Some(source_value) = fd.vbank().get(source) else {
                reject!("missing source varnode");
            };
            let shares_stackview_high = shares_backing_high(fd, source, info.symbol);
            let safe_load = safe_load_op(fd, source, op).is_some();
            let physical_global = is_default_data_value(fd, source);
            let safe_global = safe_global_source(fd, source, op, read_op).is_some();
            if (source_value.is_implied() || shares_stackview_high || physical_global)
                && !same_backing(fd, source, info.symbol)
                && !safe_load
                && !safe_global
            {
                reject!(
                    "source cannot be safely re-read after stackview merge (implied {}, shared high {}, size {}, readonly {}, volatile {}, def {:?})",
                    source_value.is_implied(),
                    shares_stackview_high,
                    source_value.get_size(),
                    source_value.is_read_only(),
                    source_value.is_volatile(),
                    source_value
                        .get_def()
                        .and_then(|def| fd.obank().get(def))
                        .map(|op| op.code())
                );
            }
            if !matches!(source_value.get_size(), 1 | 2 | 4 | 8) {
                reject!("source size {} unsupported", source_value.get_size());
            }
            let read_type = fd.vn_type_read_facing(source, op).get_metatype();
            if !matches!(
                read_type,
                type_metatype::TYPE_BOOL
                    | type_metatype::TYPE_INT
                    | type_metatype::TYPE_UINT
                    | type_metatype::TYPE_UNKNOWN
            ) {
                reject!("source read type {read_type:?} rejected");
            }
            if def_facing_pointer(fd, source) {
                reject!("pointer source cannot be flattened into raw bytes");
            }
            if !safe_load
                && !safe_global
                && !same_backing(fd, source, info.symbol)
                && !named(fd, source)
            {
                reject!("source has no declared name");
            }
        }
        let index = index as i32;
        if let Some(last) = ranges
            .last_mut()
            .filter(|range| range.offset + range.bytes.len() as i32 == index)
        {
            last.bytes.push(byte);
        } else {
            ranges.push(Range {
                offset: index,
                bytes: vec![byte],
            });
        }
    }
    if ranges.is_empty() {
        reject!("no output ranges after preserved bytes");
    }
    Some(Assignment {
        output,
        name: info.display_name,
        offset: info.sym_off,
        pointer_size: stack.get_addr_size() as i32,
        ranges,
    })
}

fn same_backing(fd: &Funcdata, value: VarnodeId, symbol: SymbolId) -> bool {
    let Some(value) = fd.vbank().get(value) else {
        return false;
    };
    let Some(stack) = fd.get_arch().manage().get_stack_space() else {
        return false;
    };
    // HighVariable identity alone is not storage identity: a global or register
    // Varnode can be coalesced with the stackview backing after a merge.
    value.get_space().get_index() == stack.get_index()
        && value
            .get_high()
            .and_then(|high| fd.high_bank().get(high))
            .is_some_and(|high| high.unlace_link_symbol() == Some(symbol))
}

fn shares_backing_high(fd: &Funcdata, value: VarnodeId, symbol: SymbolId) -> bool {
    fd.vbank()
        .get(value)
        .and_then(|value| value.get_high())
        .and_then(|high| fd.high_bank().get(high))
        .is_some_and(|high| high.unlace_link_symbol() == Some(symbol))
}

fn is_default_data_value(fd: &Funcdata, value: VarnodeId) -> bool {
    let Some(value) = fd.vbank().get(value) else {
        return false;
    };
    fd.get_arch()
        .manage()
        .get_default_data_space()
        .is_some_and(|space| value.get_space().get_index() == space.get_index())
}

#[doc(hidden)]
pub fn safe_global_source(
    fd: &Funcdata,
    value: VarnodeId,
    use_op: OpId,
    read_op: Option<OpId>,
) -> Option<VarnodeId> {
    let global = fd.vbank().get(value)?;
    if !is_default_data_value(fd, value) || global.is_volatile() {
        return None;
    }
    // An implicit RAM Varnode is read where the COPY consuming it executes.
    // The projection records that COPY so replacing the merged high name with
    // the physical global cannot move a mutable read across a write or call.
    let read_op = read_op.unwrap_or(use_op);
    if read_op != use_op && !global.is_read_only() && !reemit_read_is_safe(fd, read_op, use_op) {
        return None;
    }
    Some(value)
}

#[doc(hidden)]
pub fn safe_load_op(fd: &Funcdata, value: VarnodeId, use_op: OpId) -> Option<OpId> {
    let mut current = value;
    for _ in 0..=32 {
        let current_value = fd.vbank().get(current)?;
        let def = current_value.get_def()?;
        let operation = fd.obank().get(def)?;
        match operation.code() {
            OpCode::CPUI_LOAD => {
                if current_value.is_volatile() {
                    return None;
                }
                if current_value.is_read_only() || reemit_read_is_safe(fd, def, use_op) {
                    return Some(def);
                }
                return None;
            }
            OpCode::CPUI_COPY | OpCode::CPUI_CAST => {
                let input = operation.get_in(0)?;
                if fd.vbank().get(input)?.get_size() != current_value.get_size() {
                    return None;
                }
                current = input;
            }
            // These change the byte projection. `expression` can expand them
            // into byte leaves when it owns the wrapper; never unwrap them here
            // and emit the whole LOAD for the wrapper Varnode.
            OpCode::CPUI_SUBPIECE | OpCode::CPUI_INT_ZEXT => return None,
            _ => return None,
        }
    }
    None
}

fn reemit_read_is_safe(fd: &Funcdata, read_op: OpId, use_op: OpId) -> bool {
    let (Some(read_operation), Some(use_operation)) =
        (fd.obank().get(read_op), fd.obank().get(use_op))
    else {
        return false;
    };
    let (Some(block), Some(use_block)) = (read_operation.get_parent(), use_operation.get_parent())
    else {
        return false;
    };
    if block != use_block {
        return false;
    }
    let mut next = fd.bb_op_next(read_op);
    let mut steps = 0;
    while let Some(op) = next {
        if op == use_op {
            return true;
        }
        let Some(operation) = fd.obank().get(op) else {
            return false;
        };
        let writes_physical_storage = operation
            .get_out()
            .and_then(|out| fd.vbank().get(out))
            .is_some_and(|out| out.is_persist() || out.is_stack_store());
        if operation.is_call()
            || writes_physical_storage
            || matches!(
                operation.code(),
                OpCode::CPUI_STORE | OpCode::CPUI_INDIRECT | OpCode::CPUI_CALLOTHER
            )
        {
            return false;
        }
        steps += 1;
        if steps > 4096 {
            return false;
        }
        next = fd.bb_op_next(op);
    }
    false
}

fn expression(
    fd: &Funcdata,
    id: VarnodeId,
    top: bool,
    depth: u8,
    use_op: OpId,
    backing_symbol: SymbolId,
    read_op: Option<OpId>,
) -> Option<Vec<Byte>> {
    let depth = depth.checked_sub(1)?;
    let value = fd.vbank().get(id)?;
    let size = value.get_size();
    if !(1..=8).contains(&size) {
        return None;
    }
    if value.is_constant() {
        let read_type = fd.vn_type_read_facing(id, use_op).get_metatype();
        if is_pointer_type(read_type) || def_facing_pointer(fd, id) {
            return None;
        }
        return Some(
            (0..size)
                .map(|byte| Byte::Constant((value.get_offset() >> (byte * 8)) as u8))
                .collect(),
        );
    }
    let merged_source =
        shares_backing_high(fd, id, backing_symbol) && !same_backing(fd, id, backing_symbol);
    let has_projectable_def = value
        .get_def()
        .and_then(|def| fd.obank().get(def))
        .is_some_and(|op| {
            matches!(
                op.code(),
                OpCode::CPUI_COPY
                    | OpCode::CPUI_CAST
                    | OpCode::CPUI_PIECE
                    | OpCode::CPUI_SUBPIECE
                    | OpCode::CPUI_INT_ZEXT
                    | OpCode::CPUI_INT_LEFT
                    | OpCode::CPUI_INT_RIGHT
                    | OpCode::CPUI_LOAD
            )
        });
    if top || value.is_implied() || merged_source || has_projectable_def {
        let Some(def) = value.get_def() else {
            if merged_source && is_default_data_value(fd, id) {
                return Some(
                    (0..size)
                        .map(|byte| Byte::Value {
                            source: id,
                            byte,
                            read_op: read_op.or(Some(use_op)),
                        })
                        .collect(),
                );
            }
            return None;
        };
        let op = fd.obank().get(def)?;
        let input = op.get_in(0)?;
        let literal = |slot| {
            let value = fd.vbank().get(op.get_in(slot)?)?;
            value.is_constant().then_some(value.get_offset())
        };
        match op.code() {
            OpCode::CPUI_COPY | OpCode::CPUI_CAST => {
                if fd.vbank().get(input)?.get_size() == size {
                    let next_read = if is_default_data_value(fd, input) {
                        Some(def)
                    } else {
                        read_op
                    };
                    return expression(fd, input, false, depth, use_op, backing_symbol, next_read);
                }
            }
            OpCode::CPUI_PIECE => {
                let low_input = op.get_in(1)?;
                let low_read = if is_default_data_value(fd, low_input) {
                    Some(def)
                } else {
                    read_op
                };
                let high_read = if is_default_data_value(fd, input) {
                    Some(def)
                } else {
                    read_op
                };
                let mut low = expression(
                    fd,
                    low_input,
                    false,
                    depth,
                    use_op,
                    backing_symbol,
                    low_read,
                )?;
                low.extend(expression(
                    fd,
                    input,
                    false,
                    depth,
                    use_op,
                    backing_symbol,
                    high_read,
                )?);
                return (low.len() == size as usize).then_some(low);
            }
            OpCode::CPUI_SUBPIECE => {
                let offset: usize = literal(1)?.try_into().ok()?;
                let next_read = if is_default_data_value(fd, input) {
                    Some(def)
                } else {
                    read_op
                };
                let bytes = expression(fd, input, false, depth, use_op, backing_symbol, next_read)?;
                return bytes
                    .get(offset..offset.checked_add(size as usize)?)
                    .map(|bytes| bytes.to_vec());
            }
            OpCode::CPUI_INT_ZEXT => {
                let next_read = if is_default_data_value(fd, input) {
                    Some(def)
                } else {
                    read_op
                };
                let mut bytes =
                    expression(fd, input, false, depth, use_op, backing_symbol, next_read)?;
                if bytes.len() > size as usize {
                    return None;
                }
                bytes.resize(size as usize, Byte::Constant(0));
                return Some(bytes);
            }
            OpCode::CPUI_INT_LEFT | OpCode::CPUI_INT_RIGHT => {
                let shift = literal(1)?;
                if shift % 8 != 0 {
                    return None;
                }
                let next_read = if is_default_data_value(fd, input) {
                    Some(def)
                } else {
                    read_op
                };
                let bytes = expression(fd, input, false, depth, use_op, backing_symbol, next_read)?;
                if bytes.len() != size as usize {
                    return None;
                }
                let shift: usize = (shift / 8).try_into().ok()?;
                return Some(
                    (0..size as usize)
                        .map(|byte| {
                            let source = if op.code() == OpCode::CPUI_INT_LEFT {
                                byte.checked_sub(shift)
                            } else {
                                byte.checked_add(shift)
                            };
                            source
                                .and_then(|index| bytes.get(index).copied())
                                .unwrap_or(Byte::Constant(0))
                        })
                        .collect(),
                );
            }
            OpCode::CPUI_LOAD if safe_load_op(fd, id, use_op).is_some() => {
                return Some(
                    (0..size)
                        .map(|byte| Byte::Value {
                            source: id,
                            byte,
                            read_op: None,
                        })
                        .collect(),
                );
            }
            _ => (),
        }
        return None;
    }
    Some(
        (0..size)
            .map(|byte| Byte::Value {
                source: id,
                byte,
                read_op: if is_default_data_value(fd, id) {
                    read_op.or(Some(use_op))
                } else {
                    read_op
                },
            })
            .collect(),
    )
}

/// A byte source printed by name must be a declared variable, not bare storage.
fn named(fd: &Funcdata, value: VarnodeId) -> bool {
    fd.vbank()
        .get(value)
        .and_then(|vn| vn.get_high())
        .and_then(|high| fd.high_bank().get(high))
        .is_some_and(|high| high.unlace_name().is_some() || high.unlace_link_symbol().is_some())
}

/// Only a written Varnode has a def-facing type; an input or constant has its own.
fn def_facing_pointer(fd: &Funcdata, value: VarnodeId) -> bool {
    fd.vbank().get(value).is_some_and(|vn| {
        is_pointer_type(if vn.is_written() {
            fd.vn_type_def_facing(value).get_metatype()
        } else {
            vn.get_type().get_metatype()
        })
    })
}

fn is_pointer_type(meta: type_metatype) -> bool {
    matches!(
        meta,
        type_metatype::TYPE_PTR | type_metatype::TYPE_PTRREL | type_metatype::TYPE_CODE
    )
}

#[cfg(test)]
mod tests;
