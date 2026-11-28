//! Free helpers for declarations and data symbols.

use super::*;

/// (unlace `fatstr`) The text of a NUL-free `char[N]` data symbol starting at
/// `addr`: a length-bounded `(ptr, len)` literal, which runs straight into the
/// next one, so reading to a NUL would glue them (and a NUL-terminated read
/// that reaches one ends there).
pub(super) fn bounded_char_array(
    arch: &Architecture,
    addr: &Address,
    char_type: &crate::dtype::Datatype,
) -> Option<String> {
    if char_type.get_size() != 1 {
        return None;
    }
    let global = arch.symboltab.get_global_scope()?;
    let eref = arch
        .symboltab
        .find_addr(global, addr, &Address::new_invalid())?;
    let sym = arch.symboltab.entry(global, eref).symbol;
    let ct = arch.symboltab.symbol(sym).dtype.clone()?;
    if ct.get_metatype() != crate::dtype::type_metatype::TYPE_ARRAY
        || !ct.get_array_base()?.is_char_print()
    {
        return None;
    }
    let mut buf = vec![0u8; usize::try_from(ct.get_size()).ok()?];
    arch.translate()
        .loader_rc()
        .borrow_mut()
        .load_fill(&mut buf, addr)
        .ok()?;
    if buf.contains(&0) {
        return None;
    }
    String::from_utf8(buf).ok()
}

/// The import a `LOAD` reads through when its pointer is a loader-marked
/// external-reference slot. The slot holds the import's address, so `*slot` is
/// the import itself. Resolved like `ActionDeindirect` resolves a call through
/// the same slot: `query_function` on the externref persist address. A pointer
/// held in a named local resolves only while another statement still reads that
/// local, so naming the import never leaves the local's assignment dead.
pub(super) fn import_slot_name(fd: &Funcdata, mut vn: VarnodeId) -> Option<String> {
    let mut named = None;
    while let Some(v) = fd.vbank().get(vn).filter(|v| v.is_written()) {
        if named.is_none() && !v.is_implied() {
            named = Some(vn);
        }
        let o = fd.obank().get(v.get_def()?)?;
        if o.code() != OpCode::CPUI_COPY {
            break;
        }
        vn = o.get_in(0)?;
    }
    let v = fd.vbank().get(vn)?;
    if !(v.is_persist() && v.is_external_ref()) {
        return None;
    }
    if named.is_some_and(|local| local != vn && !read_beyond_loads(fd, local, 4)) {
        return None;
    }
    fd.get_arch()
        .query_function(v.get_addr())
        .map(|(name, _, _)| name)
}

/// The import whose address `op` reads when `vn` is the slot of a data import
/// itself, not a pointer through it: the loader fills the slot with the import's
/// address, so a read of the whole value it was loaded with, before or after a
/// call, is `&import`. On a Windows PE a function import's `externref` IAT slot
/// read as a value (MSVC caching `[__imp_GetLastError]` in a register or frame
/// slot before a loop) is the same `&import`; a call through the slot never
/// reaches here, and a Mach-O function slot keeps its name (a weak import's
/// test reads it). An operator C does not apply to a pointer (a mask, a
/// shift, a multiply) keeps the slot name.
pub(super) fn import_slot_address(
    fd: &Funcdata,
    arch: &Architecture,
    vn: VarnodeId,
    op: OpId,
) -> Option<String> {
    let v = fd.vbank().get(vn)?;
    let slot = v.get_addr();
    let space = slot.get_space()?;
    let reader = fd.obank().get(op)?;
    let data_slot = arch
        .data_import_slots
        .contains(&(space.get_index(), slot.get_offset()));
    let pe_code_slot = arch.image_windows_user && v.is_external_ref();
    if !(v.is_persist() && (data_slot || pe_code_slot))
        || v.get_size() as u32 != space.get_addr_size()
        || reader.get_out() == Some(vn)
        || integer_only_operator(reader.code())
        || !crate::objcrettype::holds_loaded_value(fd, vn, 8)
    {
        return None;
    }
    fd.get_arch()
        .query_function(v.get_addr())
        .map(|(name, _, _)| name)
}

/// An operator whose C spelling rejects a pointer operand.
pub(super) fn integer_only_operator(code: OpCode) -> bool {
    matches!(
        code,
        OpCode::CPUI_INT_AND
            | OpCode::CPUI_INT_OR
            | OpCode::CPUI_INT_XOR
            | OpCode::CPUI_INT_NEGATE
            | OpCode::CPUI_INT_2COMP
            | OpCode::CPUI_INT_LEFT
            | OpCode::CPUI_INT_RIGHT
            | OpCode::CPUI_INT_SRIGHT
            | OpCode::CPUI_INT_MULT
            | OpCode::CPUI_INT_DIV
            | OpCode::CPUI_INT_SDIV
            | OpCode::CPUI_INT_REM
            | OpCode::CPUI_INT_SREM
    )
}

/// Does a printed op other than a `LOAD` through `vn` (directly or through
/// inline COPYs) read `vn`?
pub(super) fn read_beyond_loads(fd: &Funcdata, vn: VarnodeId, depth: u32) -> bool {
    fd.vbank().get(vn).is_some_and(|v| {
        v.descend_iter().any(|d| {
            fd.obank().get(d).is_some_and(|o| {
                if o.not_printed() || (o.code() == OpCode::CPUI_LOAD && o.get_in(1) == Some(vn)) {
                    return false;
                }
                let inline_copy = o.code() == OpCode::CPUI_COPY
                    && o.get_out()
                        .and_then(|out| fd.vbank().get(out))
                        .is_some_and(|out| out.is_implied());
                !inline_copy
                    || depth == 0
                    || o.get_out()
                        .is_some_and(|out| read_beyond_loads(fd, out, depth - 1))
            })
        })
    })
}

/// A same-width scalar a byte-copy helper can copy into or out of without conversion.
pub(super) fn storage_copy_scalar(ty: &crate::dtype::Datatype, size: int4) -> bool {
    ty.get_size() == size
        && matches!(
            ty.get_metatype(),
            type_metatype::TYPE_FLOAT
                | type_metatype::TYPE_INT
                | type_metatype::TYPE_UINT
                | type_metatype::TYPE_UNKNOWN
                | type_metatype::TYPE_PTR
        )
}

/// Identifiers a generated local suffix must not capture.
pub(super) fn declaration_occupied_names(
    fd: &Funcdata,
    names: impl IntoIterator<Item = String>,
) -> Vec<String> {
    let mut names: Vec<String> = names.into_iter().collect();
    let name_style = fd.get_arch().unlace_name_style();
    names.extend((0..fd.num_calls()).filter_map(|index| {
        let call = fd.get_call_specs(index);
        if !call.get_name().is_empty() {
            Some(call.get_name().to_string())
        } else if !call.get_entry_address().is_invalid() {
            Some(call.fspec_printed_name(name_style))
        } else {
            // An unnamed CALLIND has no identifier to capture and its synthetic
            // call-spec address is deliberately invalid.
            None
        }
    }));
    names
}

/// Head op of an sblocks-arena basic block (when the structured node itself is
/// a Basic, not a Copy referencing bblocks).
pub(super) fn sblocks_basic_head(fd: &Funcdata, bb: BlockId) -> Option<OpId> {
    use crate::block::BlockKind;
    match fd.sblocks_ref().block(bb).kind() {
        BlockKind::Basic(b) => b.op_head,
        _ => None,
    }
}

/// Tail op of an sblocks-arena basic block.
/// (unlace `voidtailreturn`) The function's own trailing bare `return;`, when it is
/// safe to elide.
///
/// unlace (faithfully to Ghidra) always prints the final RETURN, so a void function
/// ends `... }\n  return;\n}`.  The C source it was compiled from has no `return`
/// there at all -- it falls off the end -- and pyjoern's CFG for the source
/// therefore has no node for it, while unlace's printed statement re-materialises
/// one: +1 node, +1..2 edges, and an `is_exitpoint` role flip that alone breaks
/// GED's isomorphism test.  It is also simply redundant C.
///
/// Returns the `OpId` to skip, or `None` when ANY of the four conditions fails:
///
/// 1. **The function returns void.**  A `return <value>;` is never redundant, and
///    a non-void function that falls off the end is a different (invalid) program.
/// 2. **The op is the tail of the LAST structured leaf**, reached by descending
///    only the containers that do not themselves print a construct (`Graph`, `Ls`).
///    Descending an `If`/`WhileDo`/`Switch` arm would elide a return that is
///    nested inside a printed construct, which is not the trailing statement.
/// 3. **That leaf is not an unstructured (goto) target.**  bash `rl_echo_signal_char`
///    prints `label_115e79:` immediately above its trailing `return;`; eliding the
///    statement would leave a label with no statement after it -- invalid C.
/// 4. **Exactly one structured leaf has that op as its tail.**  `returndup` and
///    `taildup` clone a shared epilogue by giving several structured leaves the
///    SAME RETURN `OpId`; suppressing by id would then also delete genuine
///    mid-body early returns.  Requiring a unique owner makes the elision
///    positional, not identity-based.
pub(super) fn elidable_void_tail_return(fd: &Funcdata) -> Option<OpId> {
    use crate::block::BlockType;
    use crate::dtype::type_metatype;

    // (1) void return type.
    let out = fd.get_func_proto().get_output_type()?;
    if out.get_metatype() != type_metatype::TYPE_VOID {
        return None;
    }

    // (2) the last structured leaf, descending only non-printing containers.
    let mut cur = fd.sblocks_ref().root?;
    while let BlockType::Graph | BlockType::Ls = fd.sblocks_ref().block(cur).get_type() {
        let list = fd.sblocks_ref().block(cur).get_list();
        cur = *list.last()?;
    }
    if !matches!(
        fd.sblocks_ref().block(cur).get_type(),
        BlockType::Basic | BlockType::Copy
    ) {
        return None;
    }
    // (3) not a goto target: a label would be left dangling.
    if fd.sblocks_ref().block(cur).is_unstructured_target() {
        return None;
    }
    let tail = structured_leaf_tail(fd, cur)?;
    let op = fd.obank().get(tail)?;
    if op.code() != OpCode::CPUI_RETURN || op.num_input() > 1 || op.not_printed() {
        return None;
    }
    // (unlace decodehalt) A decode-failure halt is a `RETURN` with one input, so it
    // matches the shape above -- but it is not the source's trailing fall-off, it
    // is the marker for flow unlace could not follow, and eliding it deletes the
    // only statement that says so.  Only the halt causes the rendering names are
    // kept; a `noreturn` halt keeps whatever `voidtailreturn` already did with it.
    if crate::decodehalt::halt_call_name(op.get_halt_type()).is_some() {
        return None;
    }

    // (4) exactly one structured leaf owns that op (returndup/taildup aliasing),
    // and (5) the function prints at least one OTHER statement.  A body whose only
    // statement is the return would come back completely empty -- not the source
    // shape this is chasing, and it leaves the ghidra markup document with no op to
    // cross-link to the `<ast>` (`unlace-ghidra` decompile_at_e2e pins exactly that:
    // "a bare `return;` still tags its statement/op").
    let mut owners = 0usize;
    let mut other_printed = false;
    let mut stack = vec![fd.sblocks_ref().root?];
    while let Some(b) = stack.pop() {
        let blk = fd.sblocks_ref().block(b);
        if matches!(blk.get_type(), BlockType::Basic | BlockType::Copy) {
            if structured_leaf_tail(fd, b) == Some(tail) {
                owners += 1;
                if owners > 1 {
                    return None;
                }
            }
            let mut cur = match blk.get_copy() {
                Some(u) => fd.bb_op_head(u),
                None => sblocks_basic_head(fd, b),
            };
            while let Some(inst) = cur {
                cur = fd.bb_op_next(inst);
                if inst == tail {
                    continue;
                }
                let Some(o) = fd.obank().get(inst) else {
                    continue;
                };
                if o.not_printed() || o.code() == OpCode::CPUI_BRANCH {
                    continue;
                }
                if let Some(out) = o.get_out()
                    && fd.vbank().get(out).map(|v| v.is_implied()).unwrap_or(false)
                {
                    continue;
                }
                other_printed = true;
            }
        }
        stack.extend(blk.get_list().iter().copied());
    }
    if owners != 1 || !other_printed {
        return None;
    }
    Some(tail)
}

/// (unlace `voidtailreturn`) The last printed op of a structured LEAF, resolving a
/// `BlockCopy` mirror through to the bblocks basic block it stands for.
///
/// `emit_block_copy` emits its ops via `emit_basic_block_ops(.., under, true)`,
/// so a leaf's printed tail lives on the underlying bblocks block whenever the
/// sblocks node is a mirror -- which is the normal shape for the trailing block
/// of a structured function.  `sblocks_basic_tail` only knows the direct
/// `BlockKind::Basic` case and returns `None` for the mirror.
pub(super) fn structured_leaf_tail(fd: &Funcdata, bb: BlockId) -> Option<OpId> {
    if let Some(under) = fd.sblocks_ref().block(bb).get_copy() {
        return fd.bb_op_tail(under);
    }
    sblocks_basic_tail(fd, bb)
}

pub(super) fn sblocks_basic_tail(fd: &Funcdata, bb: BlockId) -> Option<OpId> {
    use crate::block::BlockKind;
    match fd.sblocks_ref().block(bb).kind() {
        BlockKind::Basic(b) => b.op_tail,
        _ => None,
    }
}

/// The `getIndex()` to feed `commsorter.setupBlockList` for an sblocks basic
/// node.  When the node is a `BlockCopy` mirror, use the underlying bblocks
/// block's index (the comment placement was keyed by the live basic block);
/// otherwise the node's own index.
pub(super) fn sblocks_basic_block_index(fd: &Funcdata, bb: BlockId) -> int4 {
    if let Some(under) = fd.sblocks_ref().block(bb).get_copy() {
        fd.bblocks_ref().block(under).get_index()
    } else {
        fd.sblocks_ref().block(bb).get_index()
    }
}

/// Resolve the pointer type shared by address emission and frame discovery.
pub(super) fn ptrsub_pointer_type(
    fd: &Funcdata,
    vn: VarnodeId,
    op: OpId,
) -> Option<std::rc::Rc<crate::dtype::Datatype>> {
    fd.vbank().get(vn)?;
    let ptype = fd.vn_type_read_facing(vn, op);
    Some(if ptrsub_resolves(&ptype) {
        ptype
    } else {
        high_pointer_type(fd, vn)
            .filter(|t| ptrsub_resolves(t))
            .unwrap_or(ptype)
    })
}

/// Can `opPtrsub` name a member through a pointer of this type?
pub(super) fn ptrsub_resolves(ptype: &crate::dtype::Datatype) -> bool {
    use crate::dtype::type_metatype;
    ptype.get_metatype() == type_metatype::TYPE_PTR
        && (ptype.is_formal_pointer_rel()
            || ptype.get_ptr_to().is_some_and(|ct| {
                matches!(
                    ct.get_metatype(),
                    type_metatype::TYPE_STRUCT
                        | type_metatype::TYPE_UNION
                        | type_metatype::TYPE_ARRAY
                        | type_metatype::TYPE_SPACEBASE
                )
            }))
}

/// The pointer type of the variable `vn` belongs to, which C++ `opPtrsub` reads
/// (`getHighTypeReadFacing`): a PTRSUB is inserted against the merged
/// variable's type, and one member of the variable may still carry a
/// narrower pointer (`unsigned int *` for a global also assigned a
/// `struct_N *`), which cannot name the member.
pub(super) fn high_pointer_type(
    fd: &Funcdata,
    vn: VarnodeId,
) -> Option<std::rc::Rc<crate::dtype::Datatype>> {
    let high = fd.vbank().get(vn)?.get_high()?;
    if let Some(t) = fd
        .high_bank()
        .get(high)
        .and_then(|h| h.unlace_symbol_type())
    {
        return Some(std::rc::Rc::clone(t));
    }
    let rep = crate::declhightype::type_representative(fd, high)?;
    fd.vbank()
        .get(rep)
        .map(|v| std::rc::Rc::clone(v.get_type()))
}

/// (unlace) The declarator a Symbol-keyed collapse imposes on the surviving
/// declaration: the final type text, its post-name declarator suffix, the
/// `(base-type, count)` array adornment (`None` for a scalar), and the datatype
/// they spell.  Same shape as `rendered_local_decl`'s returns less the comment.
pub(super) type DeclTypeOverride = (
    String,
    String,
    Option<(String, int4)>,
    Option<std::rc::Rc<crate::dtype::Datatype>>,
);

/// (unlace) The declaration *representative* Varnode of a local high: the addr-tied
/// (mapped, in-scope) storage member - the C++ symbol's `getFirstWholeMap()`
/// storage - else instance 0.  Shared by the type-name/comment path and the
/// array-declarator fallback (GH-9184) so both anchor on the same Varnode.
pub(super) fn decl_rep_varnode(
    fd: &Funcdata,
    high: crate::context::HighVariableId,
) -> Option<crate::context::VarnodeId> {
    let h = fd.high_bank().get(high)?;
    (0..h.num_instances())
        .map(|i| h.get_instance(i))
        .find(|&vn| {
            fd.vbank()
                .get(vn)
                .map(|v| v.is_addr_tied())
                .unwrap_or(false)
        })
        .or_else(|| (0..h.num_instances()).map(|i| h.get_instance(i)).next())
}

/// (unlace) If `ct` is a `TYPE_ARRAY`, the `(base_type_name, count)` pair that
/// declares it `<base> name [count]` (C++ `emitVarDecl`'s array branch, where the
/// declared type is the *element* type and the count adorns the identifier).  The
/// base name is the element's [`type_name_for_decl`] halves, resolved with the
/// realtypes context - so an anonymous `undefined1 [N]` array (e.g. a 32-byte
/// oversize-unknown YMM FMA accumulator, GH-9184) declares its element type, not
/// the whole-array `undefined<N>` scalar.
pub(super) fn array_decl_parts(
    ct: &std::rc::Rc<crate::dtype::Datatype>,
    rt: RealTypeCtx,
) -> Option<((String, String), int4)> {
    if ct.get_metatype() != crate::dtype::type_metatype::TYPE_ARRAY {
        return None;
    }
    let base = ct.get_array_base()?;
    let elsize = base.get_size().max(1);
    let count = ct.get_size() / elsize;
    Some((type_name_for_decl(&base, rt.clone()), count))
}
