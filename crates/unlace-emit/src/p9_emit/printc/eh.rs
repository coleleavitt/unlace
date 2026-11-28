//! Exception-handling (landing pad / try) emission.

use super::*;

impl PrintC {
    /// (unlace `itaniumeh`) The landing pad a structured block starts at: the
    /// address of the first op of its front leaf, when the image's call-site
    /// table lists it as a pad.
    pub(super) fn eh_pad_start(&self, fd: &Funcdata, blk: BlockId) -> Option<u64> {
        let table = crate::itaniumeh::eh_table(fd.get_arch())?;
        let leaf = fd.sblocks_ref().get_front_leaf(blk)?;
        let bb = fd.sblocks_ref().block(leaf).get_copy()?;
        let mut cur = fd.bb_op_head(bb);
        while let Some(op) = cur {
            let o = fd.obank().get(op)?;
            if !o.is_marker() {
                let at = o.get_addr().get_offset();
                return table.is_pad(at).then_some(at);
            }
            cur = fd.bb_op_next(op);
        }
        None
    }

    /// (unlace `itaniumeh`) The landing pad an exceptional-edge `if` branches to.
    pub(super) fn eh_if_target(&self, fd: &Funcdata, blk: BlockId) -> Option<u64> {
        let cond = fd.sblocks_ref().block(blk).get_block(0);
        let leaf = fd.sblocks_ref().get_exit_leaf(cond)?;
        let bb = fd.sblocks_ref().block(leaf).get_copy()?;
        let br = fd.bb_op_tail(bb)?;
        let dest = fd.obank().get(br)?.get_in(0)?;
        Some(fd.vbank().get(dest)?.get_offset())
    }

    /// (unlace `itaniumeh`) The landing pad of an exceptional-edge `if`, by the
    /// call-site record of the call the edge follows, and the arm the edge
    /// enters, with the other arm. This names the pad where its own block is
    /// gone: a pad that only sets the exception registers and jumps on to a
    /// handler it shares with another pad folds into that handler, so the arm
    /// starts at the shared code, not at the pad.
    pub(super) fn eh_if_arms(
        &self,
        fd: &Funcdata,
        blk: BlockId,
    ) -> Option<(u64, BlockId, Option<BlockId>)> {
        let table = crate::itaniumeh::eh_table(fd.get_arch())?;
        let sb = fd.sblocks_ref();
        let ifb = sb.block(blk);
        let cond = ifb.get_block(0);
        let leaf = sb.get_exit_leaf(cond)?;
        let bb = sb.block(leaf).get_copy()?;
        let br = fd.bb_op_tail(bb)?;
        let o = fd.obank().get(br)?;
        let pad = table.site_at(o.get_addr().get_offset())?.pad;
        if pad == 0 {
            return None;
        }
        let mut negated = false;
        let mut vn = o.get_in(1);
        for _ in 0..3 {
            let def = vn
                .and_then(|v| fd.vbank().get(v))
                .and_then(|v| v.get_def())
                .and_then(|d| fd.obank().get(d))?;
            match def.code() {
                OpCode::CPUI_BOOL_NEGATE => negated = !negated,
                OpCode::CPUI_COPY => {}
                _ => break,
            }
            vn = def.get_in(0);
        }
        let basic = fd.bblocks_ref().block(bb);
        if basic.size_out() != 2 {
            return None;
        }
        let target = if negated {
            basic.get_false_out()
        } else {
            basic.get_true_out()
        };
        let enters = |arm: BlockId| {
            sb.get_front_leaf(arm).and_then(|l| sb.block(l).get_copy()) == Some(target)
        };
        let tru = ifb.get_block(1);
        let other = (ifb.get_size() == 3).then(|| ifb.get_block(2));
        if enters(tru) {
            return Some((pad, tru, other));
        }
        let other = other.filter(|&o| enters(o))?;
        Some((pad, other, Some(tru)))
    }

    /// (unlace `itaniumeh`) The `try` form of the blocks `list` of `blk`: the first
    /// exceptional-edge `if` (no else) whose normal path never falls through and whose landing
    /// pad starts the rest of the list, its pad, and whether the `catch` stays open to the end
    /// of the body. It does on the function's top-level spine (only lists above, or ifs this
    /// list is the condition of: the pad's own selector tests), where the rest of the body is
    /// reached through the pad alone.
    pub(super) fn eh_list_try_match(
        &self,
        fd: &Funcdata,
        blk: BlockId,
        list: &[BlockId],
    ) -> Option<crate::ctree::ListTry> {
        if self.lang().kw_open_curly != "{" {
            return None;
        }
        let n = list.len();
        let k = (0..n.saturating_sub(1)).find(|&k| {
            self.is_eh_if(fd, list[k])
                && fd.sblocks_ref().block(list[k]).get_size() == 2
                && fd
                    .sblocks_ref()
                    .block(fd.sblocks_ref().block(list[k]).get_block(1))
                    .size_out()
                    == 0
                && self.eh_pad_start(fd, list[k + 1]).is_some()
        })?;
        let pad = self.eh_pad_start(fd, list[k + 1])?;
        let mut spine = true;
        let mut at = blk;
        while let Some(p) = fd.sblocks_ref().block(at).get_parent() {
            let ty = fd.sblocks_ref().block(p).get_type();
            let as_condition =
                ty == crate::block::BlockType::If && fd.sblocks_ref().block(p).get_block(0) == at;
            if !as_condition
                && !matches!(
                    ty,
                    crate::block::BlockType::Ls | crate::block::BlockType::Graph
                )
            {
                spine = false;
                break;
            }
            at = p;
        }
        Some(crate::ctree::ListTry {
            at: k,
            pad,
            keep_open: spine,
        })
    }

    /// (unlace `itaniumeh`) The `try` form of the `if` `blk` on an exceptional edge: its
    /// condition block, the arm that runs inside the `try` (printed after the `catch` it
    /// would read as code the handler falls into), the landing pad and the arm the edge
    /// enters. The arm that starts at a pad is the handler; else the pad of the call the edge
    /// follows names it (`eh_if_arms`).
    pub(super) fn eh_try_match(
        &self,
        fd: &Funcdata,
        blk: BlockId,
    ) -> Option<(BlockId, Option<BlockId>, u64, BlockId)> {
        let block = fd.sblocks_ref().block(blk);
        if self.lang().kw_open_curly != "{" || block.get_size() < 2 || !self.is_eh_if(fd, blk) {
            return None;
        }
        let cond = block.get_block(0);
        let tru = block.get_block(1);
        let other = (block.get_size() == 3).then(|| block.get_block(2));
        if let Some(pad) = self.eh_pad_start(fd, tru) {
            return Some((cond, other, pad, tru));
        }
        if let Some((other, pad)) = other.and_then(|o| Some((o, self.eh_pad_start(fd, o)?))) {
            return Some((cond, Some(tru), pad, other));
        }
        let (pad, handler, normal) = self.eh_if_arms(fd, blk)?;
        Some((cond, normal, pad, handler))
    }

    /// (unlace `itaniumeh`) Is `blk` an `if` whose condition is an
    /// `eh_unwinding()` exceptional edge?
    pub(super) fn is_eh_if(&self, fd: &Funcdata, blk: BlockId) -> bool {
        use crate::block::BlockType;
        if fd.sblocks_ref().block(blk).get_type() != BlockType::If {
            return false;
        }
        let cond = fd.sblocks_ref().block(blk).get_block(0);
        let Some(leaf) = fd.sblocks_ref().get_exit_leaf(cond) else {
            return false;
        };
        let Some(bb) = fd.sblocks_ref().block(leaf).get_copy() else {
            return false;
        };
        let Some(br) = fd.bb_op_tail(bb) else {
            return false;
        };
        let Some(o) = fd.obank().get(br) else {
            return false;
        };
        if o.code() != OpCode::CPUI_CBRANCH {
            return false;
        }
        let mut vn = o.get_in(1);
        for _ in 0..3 {
            let Some(def) = vn
                .and_then(|v| fd.vbank().get(v))
                .and_then(|v| v.get_def())
                .and_then(|d| fd.obank().get(d))
            else {
                return false;
            };
            match def.code() {
                OpCode::CPUI_BOOL_NEGATE | OpCode::CPUI_COPY => vn = def.get_in(0),
                OpCode::CPUI_CALLOTHER => {
                    return def
                        .get_in(0)
                        .and_then(|v| fd.vbank().get(v))
                        .is_some_and(|v| {
                            v.is_constant()
                                && v.get_offset() == crate::userop::BUILTIN_EH_UNWINDING as u64
                        });
                }
                _ => return false,
            }
        }
        false
    }

    /// (unlace `itaniumeh`) `catch (A | B)`: the pad's catch types in handler
    /// order, `...` for a catch-all or an unnamed type; cleanup and exception
    /// specifications are not handlers. `catch (...)` when nothing is caught.
    pub(super) fn eh_catch_header(fd: &Funcdata, pad: u64) -> String {
        use crate::itaniumeh::EhClause;
        let Some(table) = crate::itaniumeh::eh_table(fd.get_arch()) else {
            return "catch (...)".into();
        };
        let mut types: Vec<&str> = Vec::new();
        for c in table
            .all_sites()
            .filter(|s| s.pad == pad)
            .flat_map(|s| s.clauses.iter())
        {
            let t = match c {
                EhClause::Catch {
                    type_name: Some(t), ..
                } => t.as_str(),
                EhClause::Catch { .. } | EhClause::CatchAll { .. } => "...",
                EhClause::Cleanup | EhClause::Filter { .. } => continue,
            };
            if !types.contains(&t) {
                types.push(t);
            }
        }
        if types.is_empty() {
            return "catch (...)".into();
        }
        // (unlace `msvceh`) An x64 SEH `__try` record names its own handler
        // header, `__except (<filter>)`.
        if let [only] = types.as_slice()
            && only.starts_with("__except")
        {
            return (*only).to_string();
        }
        format!("catch ({})", types.join(" | "))
    }

    /// (unlace `itaniumeh`) Emit `try { <cond statements> } catch (..) { <pad> }`.
    pub(super) fn emit_eh_try(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        cond: BlockId,
        normal: Option<BlockId>,
        pad: u64,
        handler: &[BlockId],
        keep_open: bool,
    ) {
        self.emit.tag_line();
        self.emit.print("try", SyntaxHighlight::KeywordColor);
        let id = self.emit.open_brace_indent(
            self.lang().kw_open_curly,
            to_emit_brace(self.options.brace_ifelse),
        );
        self.context.push_mod();
        self.context.set_mod(modifiers::NO_BRANCH);
        let b = self.emit.begin_block(0);
        self.emit_block(fd, arch, cond);
        self.emit.end_block(b);
        self.context.pop_mod();
        if let Some(normal) = normal {
            let outer = self.eh_open_pad.replace(pad);
            let b = self.emit.begin_block(0);
            self.emit_block(fd, arch, normal);
            self.emit.end_block(b);
            self.eh_open_pad = outer;
        }
        self.emit.close_brace_indent(self.lang().kw_close_curly, id);
        self.emit.spaces(1, 0);
        let header = Self::eh_catch_header(fd, pad);
        self.emit.print(&header, SyntaxHighlight::KeywordColor);
        let id = self.emit.open_brace_indent(
            self.lang().kw_open_curly,
            to_emit_brace(self.options.brace_ifelse),
        );
        for &h in handler {
            let b = self.emit.begin_block(0);
            self.emit_block(fd, arch, h);
            self.emit.end_block(b);
        }
        if keep_open {
            self.eh_open_catch.push(id);
        } else {
            self.emit.close_brace_indent(self.lang().kw_close_curly, id);
        }
    }
}
