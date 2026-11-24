//! (kuna `javasync`) Printing a `try` whose catch-all is a `synchronized`
//! block's monitor release or a `finally` clause.
//!
//! `p2_lift/kuna_javasync.rs` reads the idiom of each catch-all handler from
//! the DEX code. A `try` whose one clause is a monitor release prints as
//! `synchronized (x) { }`. The `monitorEnter(x)` it stands for ends the list
//! element before the `try`, which prints first, so a list about to print
//! marks those `try`s and leaves their `monitorEnter` out beforehand; one that
//! then prints as a plain `try` prints its `monitorEnter` just before it. A
//! `try` whose last clause is a `finally` handler prints that clause as
//! `finally { }`. The statements the idiom stands for (the monitor operations,
//! or the copies of the `finally` code on the normal paths and the rethrow) are
//! left out.

use unlace_num::opcodes::OpCode;

use super::{Architecture, Funcdata, OpId, PrintC};
use crate::block::BlockType;
use crate::context::BlockId;
use crate::kuna_javasync::JavaIdiom;
use crate::prettyprint::{Emit, SyntaxHighlight};

/// How a `try` statement prints under `javasync`.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) enum TryForm {
    /// `synchronized (x) { }`: `enter` is the `monitorEnter(x)` op.
    Synchronized { handler: u64, enter: OpId },
    /// The clause catching `handler` prints as `finally { }`.
    Finally { handler: u64 },
}

impl TryForm {
    fn handler(self) -> u64 {
        match self {
            TryForm::Synchronized { handler, .. } | TryForm::Finally { handler } => handler,
        }
    }
}

/// The ops of the basic blocks under the structured block `blk`.
fn leaf_ops(fd: &Funcdata, blk: BlockId) -> Vec<OpId> {
    let sb = fd.sblocks_ref();
    let mut out = Vec::new();
    let mut stack = vec![blk];
    while let Some(b) = stack.pop() {
        if sb.block(b).get_type() == BlockType::Copy {
            if let Some(bb) = sb.block(b).get_copy() {
                out.extend(fd.bb_ops(bb));
            }
        } else {
            stack.extend_from_slice(sb.block(b).get_list());
        }
    }
    out
}

impl PrintC {
    /// Before the flattened statement list `list` prints: each `try` in it
    /// that can print as `synchronized`, whose `monitorEnter` the element
    /// just before it holds, is marked and that `monitorEnter` left out.
    pub(super) fn java_prepare_synchronized(&mut self, fd: &Funcdata, list: &[BlockId]) {
        if self.java_idioms.is_empty() {
            return;
        }
        for j in 1..list.len() {
            let Some(shape) = self.java_try_shape(fd, list[j], &list[j + 1..]) else {
                continue;
            };
            let handlers = shape.handlers();
            let &[handler] = handlers.as_slice() else {
                continue;
            };
            if self.java_sync_enters.contains_key(&handler) {
                continue;
            }
            let Some(JavaIdiom::Synchronized { enter, .. }) = self.java_idioms.get(&handler) else {
                continue;
            };
            let enter = *enter;
            let op = leaf_ops(fd, list[j - 1]).into_iter().rev().find(|&op| {
                fd.obank().get(op).is_some_and(|o| {
                    o.code() == OpCode::CPUI_CALLOTHER
                        && o.num_input() == 2
                        && o.get_addr().get_offset() == enter
                })
            });
            if let Some(op) = op {
                self.java_hidden.insert(op);
                self.java_sync_enters.insert(handler, op);
            }
        }
    }

    /// The form of the `try` whose clauses catch `handlers`, in order.
    /// `last_is_code` says the last clause is code of its own (not an empty
    /// catch or a jump), `loose` that the protected part holds statements past
    /// the ranges. `None` is a plain `try`.
    pub(super) fn java_try_form(
        &self,
        handlers: &[u64],
        last_is_code: bool,
        loose: bool,
    ) -> Option<TryForm> {
        let &handler = handlers.last()?;
        match self.java_idioms.get(&handler)? {
            JavaIdiom::Synchronized { .. } => {
                if handlers.len() != 1 || loose {
                    return None;
                }
                let enter = *self.java_sync_enters.get(&handler)?;
                Some(TryForm::Synchronized { handler, enter })
            }
            JavaIdiom::Finally { .. } => last_is_code.then_some(TryForm::Finally { handler }),
        }
    }

    /// A `try` marked `synchronized` that prints as a plain `try` after all:
    /// its `monitorEnter` prints here, just before it.
    pub(super) fn java_restore_monitor_enter(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        handlers: &[u64],
    ) {
        for handler in handlers {
            if let Some(op) = self.java_sync_enters.remove(handler) {
                self.java_hidden.remove(&op);
                self.emit.tag_line();
                self.emit_statement(fd, arch, op);
            }
        }
    }

    /// Leave out every statement of the function that `form`'s idiom stands
    /// for.
    pub(super) fn java_hide_form(&mut self, fd: &Funcdata, form: TryForm) {
        let Some(idiom) = self.java_idioms.get(&form.handler()).cloned() else {
            return;
        };
        for i in 0..fd.bblocks_get_size() {
            for op in fd.bb_ops(fd.bblocks_get_block(i)) {
                let hidden = fd
                    .obank()
                    .get(op)
                    .is_some_and(|o| idiom.hides(o.get_addr().get_offset()));
                if hidden {
                    self.java_hidden.insert(op);
                }
            }
        }
    }

    /// `synchronized (x)`, `x` the operand of the `monitorEnter` op `enter`.
    pub(super) fn emit_java_synchronized_head(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
        enter: OpId,
    ) {
        self.emit
            .print("synchronized", SyntaxHighlight::KeywordColor);
        self.emit.spaces(1, 0);
        let id = self.emit.open_paren(crate::printlanguage::OPEN_PAREN, 0);
        if let Some(vn) = fd.obank().get(enter).and_then(|o| o.get_in(1)) {
            self.push_vn_ir(fd, arch, vn, enter);
        }
        self.emit.close_paren(crate::printlanguage::CLOSE_PAREN, id);
    }
}
