//! (kuna `armhoist`) Pre-structuring hoist of the instructions both arms of a
//! two-way branch share at their head or their tail: the counterpart of the
//! Hex-Rays microcode rules `EXTRACT_IDENTICAL_HEAD_IF_INSNS` and
//! `EXTRACT_EQUAL_IF_TAIL_INSNS` (`notes/ida-hexrays-rules.md`).
//!
//! ```text
//!   if (c) { x = 1; f(x); }        -->   if (c) { x = 1; } else { x = 2; }
//!   else   { x = 2; f(x); }              f(x);
//! ```
//!
//! `dedupitetail` merges equal leaves of the structured tree after structuring;
//! this pass moves the shared ops in the p-code before the CFG is structured, so
//! the structurer, the merge and every rule after it see one copy. It runs in
//! the pre-SSA window (heritage pass 0, the `cleanupcode` window), where an op
//! is the storage it reads and writes and there is no INDIRECT or MULTIEQUAL to
//! patch. Two ops are the same op when their opcode, output storage and every
//! input (storage, or an equal constant) agree. Only an op's position changes,
//! and nothing runs between its old and new position but the branch, so the
//! semantics are the binary's. Spec: `docs/spec/02-lift-and-flow.md` §2.17.

use unlace_base::space::spacetype;
use unlace_num::opcodes::OpCode;

use crate::action::{Action, ActionBase, ActionContext, ActionGroupList, ApplyResult};
use crate::context::{BlockId, OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// Most ops moved out of one end of one branch.
pub const MAX_HOIST_PER_END: usize = 16;

/// A storage location an op reads or writes.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Loc {
    /// Address-space index.
    pub space: i32,
    /// The unique (SLEIGH temporary) space.
    pub temp: bool,
    pub offset: u64,
    pub size: i32,
}

impl Loc {
    /// Do the two locations share a byte?
    pub fn overlaps(&self, other: &Loc) -> bool {
        if self.space != other.space {
            return false;
        }
        let end = |l: &Loc| l.offset.saturating_add(l.size.max(0) as u64);
        self.offset < end(other) && other.offset < end(self)
    }
}

/// One input of an op.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Operand {
    Const { value: u64, size: i32 },
    Storage(Loc),
}

/// What two ops must agree on to be the same op.
#[derive(Clone, PartialEq)]
pub struct OpShape {
    pub code: OpCode,
    pub out: Option<Loc>,
    pub ins: Vec<Operand>,
}

impl OpShape {
    fn touches_temp(&self) -> bool {
        self.out.is_some_and(|l| l.temp)
            || self
                .ins
                .iter()
                .any(|o| matches!(o, Operand::Storage(l) if l.temp))
    }

    /// A call, user op or store: an effect beyond the output storage.
    pub fn has_side_effects(&self) -> bool {
        matches!(
            self.code,
            OpCode::CPUI_CALL | OpCode::CPUI_CALLIND | OpCode::CPUI_CALLOTHER | OpCode::CPUI_STORE
        )
    }
}

/// Opcodes the pass never moves: control flow, SSA markers, and the ops whose
/// meaning is tied to their position or to a constant pool.
pub fn movable_code(code: OpCode) -> bool {
    !matches!(
        code,
        OpCode::CPUI_BRANCH
            | OpCode::CPUI_CBRANCH
            | OpCode::CPUI_BRANCHIND
            | OpCode::CPUI_RETURN
            | OpCode::CPUI_MULTIEQUAL
            | OpCode::CPUI_INDIRECT
            | OpCode::CPUI_NEW
            | OpCode::CPUI_CPOOLREF
            | OpCode::CPUI_SEGMENTOP
    )
}

/// Are `a` and `b` one movable op? A unique temporary must not cross a block.
pub fn same_op(a: &OpShape, b: &OpShape) -> bool {
    movable_code(a.code) && !a.touches_temp() && a == b
}

/// May `x` move from the head of both arms to just before the CBRANCH that
/// reads `cond`? A pure op must not write the condition; an op with side
/// effects may move only when nothing it can touch holds the condition.
pub fn head_hoist_allowed(x: &OpShape, cond: &Operand) -> bool {
    match cond {
        Operand::Const { .. } => true,
        Operand::Storage(c) => {
            if x.has_side_effects() {
                c.temp
            } else {
                !x.out.is_some_and(|o| o.overlaps(c))
            }
        }
    }
}

fn operand_of(data: &Funcdata, vn: VarnodeId) -> Option<Operand> {
    let v = data.vbank().get(vn)?;
    if v.is_annotation() {
        return None;
    }
    if v.is_constant() {
        return Some(Operand::Const {
            value: v.get_offset(),
            size: v.get_size(),
        });
    }
    let space = v.get_space();
    Some(Operand::Storage(Loc {
        space: space.get_index(),
        temp: space.get_type() == spacetype::IPTR_INTERNAL,
        offset: v.get_offset(),
        size: v.get_size(),
    }))
}

fn shape_of(data: &Funcdata, op: OpId) -> Option<OpShape> {
    let o = data.obank().get(op)?;
    let out = match o.get_out() {
        Some(v) => match operand_of(data, v)? {
            Operand::Storage(l) => Some(l),
            Operand::Const { .. } => return None,
        },
        None => None,
    };
    let mut ins = Vec::with_capacity(o.num_input().max(0) as usize);
    for i in 0..o.num_input() {
        ins.push(operand_of(data, o.get_in(i)?)?);
    }
    Some(OpShape {
        code: o.code(),
        out,
        ins,
    })
}

/// An op whose output nothing reads (always so before heritage).
fn unread(data: &Funcdata, op: OpId) -> bool {
    let Some(o) = data.obank().get(op) else {
        return false;
    };
    match o.get_out() {
        Some(v) => data.vbank().get(v).is_some_and(|v| v.has_no_descend()),
        None => true,
    }
}

fn first_body_op(data: &Funcdata, bl: BlockId) -> Option<OpId> {
    let op = data.bb_op_head(bl)?;
    (!data.obank().get(op)?.is_flow_break()).then_some(op)
}

/// The last op before the block's closing BRANCH, or its last op when it
/// falls through.
fn last_body_op(data: &Funcdata, bl: BlockId) -> Option<OpId> {
    let tail = data.bb_op_tail(bl)?;
    let o = data.obank().get(tail)?;
    if !o.is_flow_break() {
        return Some(tail);
    }
    if o.code() != OpCode::CPUI_BRANCH {
        return None;
    }
    let prev = o.basic_neighbours().0?;
    (!data.obank().get(prev)?.is_flow_break()).then_some(prev)
}

/// A CBRANCH block whose two arms are entered only from it, and the block both
/// arms fall into when they rejoin at once.
struct Branch {
    cbranch: OpId,
    arms: [BlockId; 2],
    join: Option<BlockId>,
}

fn branches(data: &Funcdata) -> Vec<Branch> {
    let graph = data.bblocks_ref();
    let mut out = Vec::new();
    for i in 0..data.bblocks_get_size() {
        let b = data.bblocks_get_block(i);
        let blk = graph.block(b);
        if blk.size_out() != 2 {
            continue;
        }
        let Some(cbranch) = data.bb_op_tail(b) else {
            continue;
        };
        if data.obank().get(cbranch).map(|o| o.code()) != Some(OpCode::CPUI_CBRANCH) {
            continue;
        }
        let (t, f) = (blk.get_out(0), blk.get_out(1));
        if t == f || t == b || f == b {
            continue;
        }
        if graph.block(t).size_in() != 1 || graph.block(f).size_in() != 1 {
            continue;
        }
        let join = (graph.block(t).size_out() == 1 && graph.block(f).size_out() == 1)
            .then(|| graph.block(t).get_out(0))
            .filter(|&j| {
                j == graph.block(f).get_out(0)
                    && j != b
                    && j != t
                    && j != f
                    && graph.block(j).size_in() == 2
            });
        out.push(Branch {
            cbranch,
            arms: [t, f],
            join,
        });
    }
    out
}

/// The pair `(x, y)` when they are one op and `y` can be destroyed.
fn matched(data: &Funcdata, x: OpId, y: OpId) -> Option<OpShape> {
    let sx = shape_of(data, x)?;
    let sy = shape_of(data, y)?;
    (same_op(&sx, &sy) && unread(data, x) && unread(data, y)).then_some(sx)
}

fn drop_duplicate(data: &mut Funcdata, y: OpId) {
    data.delete_call_specs(y);
    data.op_destroy(y);
}

fn hoist_head(data: &mut Funcdata, br: &Branch) -> i32 {
    let Some(cond) = data
        .obank()
        .get(br.cbranch)
        .and_then(|o| o.get_in(1))
        .and_then(|v| operand_of(data, v))
    else {
        return 0;
    };
    let mut n = 0;
    for _ in 0..MAX_HOIST_PER_END {
        let (Some(x), Some(y)) = (
            first_body_op(data, br.arms[0]),
            first_body_op(data, br.arms[1]),
        ) else {
            break;
        };
        let Some(shape) = matched(data, x, y) else {
            break;
        };
        if !head_hoist_allowed(&shape, &cond) {
            break;
        }
        data.op_uninsert(x);
        data.op_insert_before(x, br.cbranch);
        drop_duplicate(data, y);
        n += 1;
    }
    n
}

fn hoist_tail(data: &mut Funcdata, br: &Branch, join: BlockId) -> i32 {
    let mut n = 0;
    let mut anchor: Option<OpId> = None;
    for _ in 0..MAX_HOIST_PER_END {
        let (Some(x), Some(y)) = (
            last_body_op(data, br.arms[0]),
            last_body_op(data, br.arms[1]),
        ) else {
            break;
        };
        if matched(data, x, y).is_none() {
            break;
        }
        data.op_uninsert(x);
        match anchor {
            None => data.op_insert_begin(x, join),
            Some(a) => data.op_insert_before(x, a),
        }
        anchor = Some(x);
        drop_duplicate(data, y);
        n += 1;
    }
    n
}

/// Hoist every shared arm head and tail; returns how many ops moved.
pub fn armhoist_apply(data: &mut Funcdata) -> i32 {
    let mut n = 0;
    for br in branches(data) {
        n += hoist_head(data, &br);
        if let Some(join) = br.join {
            n += hoist_tail(data, &br, join);
        }
    }
    n
}

/// (kuna) `ActionArmHoist` — move the ops both arms of a branch share out of
/// the arms before structuring (option `armhoist`, default off).
pub struct ActionArmHoist {
    base: ActionBase,
}

impl ActionArmHoist {
    pub fn boxed(g: impl Into<String>) -> Box<dyn Action> {
        Box::new(ActionArmHoist {
            base: ActionBase::new(0, "armhoist", g),
        })
    }
}

impl Action for ActionArmHoist {
    fn base(&self) -> &ActionBase {
        &self.base
    }
    fn base_mut(&mut self) -> &mut ActionBase {
        &mut self.base
    }
    fn clone_filtered(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Action>> {
        grouplist.contains(self.get_group()).then(|| {
            Box::new(ActionArmHoist {
                base: self.base.clone(),
            }) as Box<dyn Action>
        })
    }
    fn apply(&mut self, data: &mut Funcdata, _ctx: &mut ActionContext) -> ApplyResult {
        if !data.get_arch().kuna_options.get::<ArmHoist>().0 {
            return 0;
        }
        if data.is_settled(crate::kuna_maturity::Fact::Ssa) {
            return 0;
        }
        self.base.count += armhoist_apply(data);
        0
    }
}

crate::kuna_flag!(
    /// (kuna) Hoist the ops both arms of a branch share out of the arms before
    /// structuring (option `armhoist`).
    ArmHoist,
    "armhoist",
    "pre-structuring arm head/tail hoist",
    unset: false,
    shipped: false
);

#[cfg(test)]
#[path = "kuna_armhoist/tests.rs"]
mod tests;
