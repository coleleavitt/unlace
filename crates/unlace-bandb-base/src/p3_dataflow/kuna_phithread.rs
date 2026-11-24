//! Jump threading through a join that branches on a merged constant (option
//! `phithread`).
//!
//! A shared arm that only sets a register (`flag = 1`) flows into a join that
//! immediately tests it, so the join's MULTIEQUAL collects unrelated constants
//! into one variable and the test prints as a branch on that variable. Hex-Rays
//! duplicates such an arm once per predecessor before allocating variables
//! (`BREAK_PHI_ARM_MERGES`, hexx64 `sub_1915E0`) and lets constant
//! propagation resolve the join's branch per path. [`ActionPhiThread`] does both
//! on the SSA graph:
//!
//! - **thread**: a join block J ending in a CBRANCH whose condition is computed
//!   only from J's MULTIEQUALs and constants, with every value J defines read
//!   only inside J and none of them carried around a loop back into J's own
//!   MULTIEQUALs (a moved edge would skip the step such a value takes, as for
//!   the counter of `n = 5; do { if (--n == 0) break; .. }`).
//!   For an in edge whose MULTIEQUAL inputs make the condition a known
//!   constant ([`decided_target`]), the edge is moved past J to the
//!   successor the branch would take; that successor's MULTIEQUALs gain the
//!   value they read along the J edge, and J's lose the edge's input. J keeps at
//!   least one in edge.
//! - **split**: a small arm A (only MULTIEQUALs, COPYs and a BRANCH) with several
//!   predecessors and J as its only successor, where the value A passes into J's
//!   MULTIEQUAL comes from a MULTIEQUAL in A with a constant input, is split along
//!   each such edge with `Funcdata::node_split_through`, so the clone passes a
//!   constant that the thread step can then use.
//! - **ranges**: when the inputs on an edge are not constants, a join whose
//!   condition compares one value against a constant is still decided along an
//!   in edge when the value's range there lies inside one outcome. The range
//!   comes from a conditional branch on the same value that ends the
//!   predecessor or a single-predecessor chain above it (at most
//!   [`MAX_RANGE_DEPTH`] blocks), so `if (x == 3) { .. } if (x > 0)` sends the
//!   first arm straight to the second's true branch. This is Hex-Rays'
//!   `BACKPROP_CC` (hexx64 `sub_18F960`), jump threading on value ranges.

use std::collections::BTreeMap;

use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::action::{Action, ActionBase, ActionContext, ActionGroupList, ApplyResult};
use crate::context::{BlockId, OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::rangeutil::CircleRange;

/// Most edge moves and splits per function.
pub const MAX_EDITS: int4 = 32;
/// Largest arm (in p-code ops) the split step duplicates.
pub const MAX_ARM_OPS: usize = 8;
/// Most predecessors an arm may have for the split step.
pub const MAX_ARM_PREDS: int4 = 8;
/// Largest join (in p-code ops) the thread step looks through.
pub const MAX_JOIN_OPS: usize = 16;
/// Most blocks the range step walks up from a predecessor.
pub const MAX_RANGE_DEPTH: usize = 4;

/// The ops of a join block the thread step can look through.
struct Join {
    phis: Vec<OpId>,
    body: Vec<OpId>,
    cbranch: OpId,
}

fn op_code(data: &Funcdata, op: OpId) -> Option<OpCode> {
    data.obank().get(op).map(|o| o.code())
}

fn evaluable(code: OpCode) -> bool {
    matches!(
        code,
        OpCode::CPUI_COPY
            | OpCode::CPUI_INT_EQUAL
            | OpCode::CPUI_INT_NOTEQUAL
            | OpCode::CPUI_INT_LESS
            | OpCode::CPUI_INT_LESSEQUAL
            | OpCode::CPUI_INT_SLESS
            | OpCode::CPUI_INT_SLESSEQUAL
            | OpCode::CPUI_BOOL_NEGATE
            | OpCode::CPUI_BOOL_AND
            | OpCode::CPUI_BOOL_OR
            | OpCode::CPUI_BOOL_XOR
            | OpCode::CPUI_INT_AND
            | OpCode::CPUI_INT_OR
            | OpCode::CPUI_INT_XOR
            | OpCode::CPUI_INT_ADD
            | OpCode::CPUI_INT_SUB
            | OpCode::CPUI_INT_ZEXT
            | OpCode::CPUI_INT_SEXT
    )
}

/// Is `j` a join the thread step can look through?
fn join_shape(data: &Funcdata, j: BlockId) -> Option<Join> {
    let blk = data.bblocks_ref().block(j);
    if blk.size_in() < 2 || blk.size_out() != 2 || blk.get_out(0) == blk.get_out(1) {
        return None;
    }
    let ops = data.bb_ops(j);
    if ops.len() > MAX_JOIN_OPS {
        return None;
    }
    let (&cbranch, rest) = ops.split_last()?;
    let cb = data.obank().get(cbranch)?;
    if cb.code() != OpCode::CPUI_CBRANCH || cb.num_input() < 2 {
        return None;
    }
    let mut phis = Vec::new();
    let mut body = Vec::new();
    for &op in rest {
        let o = data.obank().get(op)?;
        match o.code() {
            OpCode::CPUI_MULTIEQUAL if body.is_empty() => phis.push(op),
            code if evaluable(code) => body.push(op),
            _ => return None,
        }
        let out = o.get_out()?;
        let v = data.vbank().get(out)?;
        if v.is_persist() || v.is_addr_tied() {
            return None;
        }
        let inside = v
            .descend_iter()
            .all(|r| data.obank().get(r).and_then(|r| r.get_parent()) == Some(j));
        if !inside {
            return None;
        }
    }
    let loop_carried = phis.iter().any(|&phi| {
        data.obank().get(phi).is_some_and(|o| {
            (0..o.num_input()).any(|i| {
                o.get_in(i)
                    .and_then(|v| data.vbank().get(v))
                    .and_then(|v| v.get_def())
                    .and_then(|d| data.obank().get(d))
                    .and_then(|d| d.get_parent())
                    == Some(j)
            })
        })
    });
    if loop_carried {
        return None;
    }
    Some(Join {
        phis,
        body,
        cbranch,
    })
}

/// The constant `vn` holds, looking through at most four COPYs.
fn const_of(data: &Funcdata, mut vn: VarnodeId) -> Option<uintb> {
    for _ in 0..4 {
        let v = data.vbank().get(vn)?;
        if v.is_constant() {
            return Some(v.get_offset());
        }
        let def = v.get_def()?;
        let d = data.obank().get(def)?;
        if d.code() != OpCode::CPUI_COPY {
            return None;
        }
        vn = d.get_in(0)?;
    }
    None
}

fn mask(size: int4) -> uintb {
    if size >= 8 || size <= 0 {
        uintb::MAX
    } else {
        (1u64 << (8 * size as u32)) - 1
    }
}

fn signed(val: uintb, size: int4) -> i64 {
    if size >= 8 || size <= 0 {
        return val as i64;
    }
    let bits = 8 * size as u32;
    ((val << (64 - bits)) as i64) >> (64 - bits)
}

fn value(data: &Funcdata, env: &BTreeMap<VarnodeId, uintb>, vn: VarnodeId) -> Option<uintb> {
    let v = data.vbank().get(vn)?;
    if v.is_constant() {
        return Some(v.get_offset() & mask(v.get_size()));
    }
    env.get(&vn).copied()
}

/// The value `op` computes from `env`, or `None`.
fn eval(data: &Funcdata, env: &BTreeMap<VarnodeId, uintb>, op: OpId) -> Option<uintb> {
    let o = data.obank().get(op)?;
    let out = data.vbank().get(o.get_out()?)?;
    let osize = out.get_size();
    let a_vn = o.get_in(0)?;
    let a = value(data, env, a_vn)?;
    let asize = data.vbank().get(a_vn)?.get_size();
    let b = || -> Option<uintb> { value(data, env, o.get_in(1)?) };
    let r = match o.code() {
        OpCode::CPUI_COPY | OpCode::CPUI_INT_ZEXT => a,
        OpCode::CPUI_INT_SEXT => signed(a, asize) as uintb,
        OpCode::CPUI_BOOL_NEGATE => (a == 0) as uintb,
        OpCode::CPUI_INT_EQUAL => (a == b()?) as uintb,
        OpCode::CPUI_INT_NOTEQUAL => (a != b()?) as uintb,
        OpCode::CPUI_INT_LESS => (a < b()?) as uintb,
        OpCode::CPUI_INT_LESSEQUAL => (a <= b()?) as uintb,
        OpCode::CPUI_INT_SLESS => (signed(a, asize) < signed(b()?, asize)) as uintb,
        OpCode::CPUI_INT_SLESSEQUAL => (signed(a, asize) <= signed(b()?, asize)) as uintb,
        OpCode::CPUI_BOOL_AND => ((a != 0) && (b()? != 0)) as uintb,
        OpCode::CPUI_BOOL_OR => ((a != 0) || (b()? != 0)) as uintb,
        OpCode::CPUI_BOOL_XOR => ((a != 0) != (b()? != 0)) as uintb,
        OpCode::CPUI_INT_AND => a & b()?,
        OpCode::CPUI_INT_OR => a | b()?,
        OpCode::CPUI_INT_XOR => a ^ b()?,
        OpCode::CPUI_INT_ADD => a.wrapping_add(b()?),
        OpCode::CPUI_INT_SUB => a.wrapping_sub(b()?),
        _ => return None,
    };
    Some(r & mask(osize))
}

/// The out-edge index of `join`'s CBRANCH taken when control enters along in
/// edge `slot`, when the MULTIEQUAL inputs on that edge decide it.
pub fn decided_target(data: &Funcdata, j: BlockId, slot: int4) -> Option<int4> {
    let join = join_shape(data, j)?;
    decided_by(data, j, &join, slot, false)
}

fn decided_by(data: &Funcdata, j: BlockId, join: &Join, slot: int4, ranges: bool) -> Option<int4> {
    decided_by_constants(data, join, slot).or_else(|| {
        ranges
            .then(|| decided_by_range(data, j, join, slot))
            .flatten()
    })
}

fn decided_by_constants(data: &Funcdata, join: &Join, slot: int4) -> Option<int4> {
    let mut env: BTreeMap<VarnodeId, uintb> = BTreeMap::new();
    for &phi in &join.phis {
        let o = data.obank().get(phi)?;
        let Some(c) = o.get_in(slot).and_then(|v| const_of(data, v)) else {
            continue;
        };
        let out = o.get_out()?;
        let size = data.vbank().get(out)?.get_size();
        env.insert(out, c & mask(size));
    }
    if env.is_empty() {
        return None;
    }
    for &op in &join.body {
        if let Some(v) = eval(data, &env, op) {
            env.insert(data.obank().get(op)?.get_out()?, v);
        }
    }
    let cb = data.obank().get(join.cbranch)?;
    let cond = value(data, &env, cb.get_in(1)?)?;
    Some(if (cond != 0) != cb.is_boolean_flip() {
        1
    } else {
        0
    })
}

/// The values of the non-constant operand of the comparison `cond` reduces to
/// (through BOOL_NEGATEs) for which `cond` is `value`.
fn range_of(data: &Funcdata, cond: VarnodeId, value: bool) -> Option<(VarnodeId, CircleRange)> {
    let mut vn = cond;
    let mut value = value;
    for _ in 0..4 {
        let def = data.vbank().get(vn)?.get_def()?;
        let o = data.obank().get(def)?;
        if o.code() != OpCode::CPUI_BOOL_NEGATE {
            break;
        }
        value = !value;
        vn = o.get_in(0)?;
    }
    let def = data.vbank().get(vn)?.get_def()?;
    let o = data.obank().get(def)?;
    if !matches!(
        o.code(),
        OpCode::CPUI_INT_EQUAL
            | OpCode::CPUI_INT_NOTEQUAL
            | OpCode::CPUI_INT_LESS
            | OpCode::CPUI_INT_LESSEQUAL
            | OpCode::CPUI_INT_SLESS
            | OpCode::CPUI_INT_SLESSEQUAL
    ) {
        return None;
    }
    let (a, b) = (o.get_in(0)?, o.get_in(1)?);
    let (x, k, slot) = match (const_of(data, a), const_of(data, b)) {
        (None, Some(k)) => (a, k, 0),
        (Some(k), None) => (b, k, 1),
        _ => return None,
    };
    let size = data.vbank().get(x)?.get_size();
    let mut range = CircleRange::new_bool(value);
    range
        .pull_back_binary(o.code(), k & mask(size), slot, size, 1)
        .then_some((x, range))
}

/// `vn` with the COPYs that define it looked through.
fn copy_root(data: &Funcdata, mut vn: VarnodeId) -> VarnodeId {
    for _ in 0..4 {
        let Some(def) = data.vbank().get(vn).and_then(|v| v.get_def()) else {
            break;
        };
        match data.obank().get(def) {
            Some(o) if o.code() == OpCode::CPUI_COPY => match o.get_in(0) {
                Some(next) => vn = next,
                None => break,
            },
            _ => break,
        }
    }
    vn
}

/// The value `x`, read in join `j`, has when control enters along in edge
/// `slot`: the MULTIEQUAL input for a value `j` merges, `x` itself for a
/// value defined above `j`.
fn value_on_edge(data: &Funcdata, j: BlockId, mut x: VarnodeId, slot: int4) -> Option<VarnodeId> {
    for _ in 0..4 {
        let Some(def) = data.vbank().get(x)?.get_def() else {
            return Some(x);
        };
        let o = data.obank().get(def)?;
        if o.get_parent() != Some(j) {
            return Some(x);
        }
        match o.code() {
            OpCode::CPUI_MULTIEQUAL => return o.get_in(slot),
            OpCode::CPUI_COPY => x = o.get_in(0)?,
            _ => return None,
        }
    }
    None
}

/// The range `vn` is known to lie in on the edge from `p` into `j`, from a
/// conditional branch on it that ends `p` or a single-predecessor chain above
/// `p`.
fn edge_range(data: &Funcdata, p: BlockId, j: BlockId, vn: VarnodeId) -> Option<CircleRange> {
    let root = copy_root(data, vn);
    let size = data.vbank().get(vn)?.get_size();
    let (mut b, mut child) = (p, j);
    for _ in 0..MAX_RANGE_DEPTH {
        let blk = data.bblocks_ref().block(b);
        let outs: Vec<BlockId> = (0..blk.size_out()).map(|i| blk.get_out(i)).collect();
        let tail = data.bb_op_tail(b).and_then(|op| data.obank().get(op));
        if let Some(cb) = tail.filter(|o| o.code() == OpCode::CPUI_CBRANCH)
            && outs.len() == 2
            && outs[0] != outs[1]
            && let Some(idx) = outs.iter().position(|&o| o == child)
            && let Some((x, range)) = cb
                .get_in(1)
                .and_then(|c| range_of(data, c, (idx == 1) != cb.is_boolean_flip()))
            && data.vbank().get(x).map(|v| v.get_size()) == Some(size)
            && copy_root(data, x) == root
            && !range.is_empty()
        {
            return Some(range);
        }
        if blk.size_in() != 1 {
            return None;
        }
        child = b;
        b = blk.get_in(0);
        if b == j || b == p {
            return None;
        }
    }
    None
}

/// The out-edge index of `join`'s CBRANCH taken along in edge `slot` when the
/// branch compares a value against a constant and that value's range on the
/// edge ([`edge_range`]) lies inside one outcome.
fn decided_by_range(data: &Funcdata, j: BlockId, join: &Join, slot: int4) -> Option<int4> {
    let cb = data.obank().get(join.cbranch)?;
    let cond = cb.get_in(1)?;
    let (x, taken) = range_of(data, cond, true)?;
    let (_, not_taken) = range_of(data, cond, false)?;
    let vn = value_on_edge(data, j, x, slot)?;
    if data.vbank().get(vn)?.is_constant() {
        return None;
    }
    let p = data.bblocks_ref().block(j).get_in(slot);
    let range = edge_range(data, p, j, vn)?;
    let cond_true = if taken.contains(&range) {
        true
    } else if not_taken.contains(&range) {
        false
    } else {
        return None;
    };
    Some(if cond_true != cb.is_boolean_flip() {
        1
    } else {
        0
    })
}

/// Move one decided in edge of `j` past it; `true` when an edge moved.
fn thread_one(
    data: &mut Funcdata,
    j: BlockId,
    ranges: bool,
) -> unlace_base::error::KunaResult<bool> {
    let Some(join) = join_shape(data, j) else {
        return Ok(false);
    };
    let nin = data.bblocks_ref().block(j).size_in();
    for slot in 0..nin {
        let blk = data.bblocks_ref().block(j);
        let p = blk.get_in(slot);
        if p == j {
            continue;
        }
        let Some(taken) = decided_by(data, j, &join, slot, ranges) else {
            continue;
        };
        let t = data.bblocks_ref().block(j).get_out(taken);
        if t == j || t == p {
            continue;
        }
        let switch = data
            .bb_op_tail(p)
            .and_then(|op| op_code(data, op))
            .is_some_and(|c| c == OpCode::CPUI_BRANCHIND);
        if switch {
            continue;
        }
        let pblk = data.bblocks_ref().block(p);
        let outs: Vec<BlockId> = (0..pblk.size_out()).map(|i| pblk.get_out(i)).collect();
        if outs.contains(&t) || outs.iter().filter(|&&o| o == j).count() != 1 {
            continue;
        }
        let jslot_in_t = data.bblocks_ref().block(t).get_in_index(j);
        if jslot_in_t < 0 {
            continue;
        }
        let t_phis: Vec<(OpId, VarnodeId)> = data
            .bb_ops(t)
            .into_iter()
            .filter(|&op| op_code(data, op) == Some(OpCode::CPUI_MULTIEQUAL))
            .filter_map(|op| {
                let v = data.obank().get(op)?.get_in(jslot_in_t)?;
                Some((op, v))
            })
            .collect();
        data.switch_edge(p, j, t);
        for &phi in &join.phis {
            data.op_remove_input(phi, slot);
            data.op_zero_multi(phi)?;
        }
        let newslot = data.bblocks_ref().block(t).size_in() - 1;
        for (phi, v) in t_phis {
            data.op_insert_input(phi, v, newslot)?;
        }
        return Ok(true);
    }
    Ok(false)
}

/// Split arm `a` along one in edge whose MULTIEQUAL input decides its join;
/// `true` when a split happened.
fn split_one(data: &mut Funcdata, a: BlockId) -> unlace_base::error::KunaResult<bool> {
    let blk = data.bblocks_ref().block(a);
    let nin = blk.size_in();
    if blk.size_out() != 1 || !(2..=MAX_ARM_PREDS).contains(&nin) {
        return Ok(false);
    }
    let j = blk.get_out(0);
    if j == a {
        return Ok(false);
    }
    let ops = data.bb_ops(a);
    if ops.len() > MAX_ARM_OPS {
        return Ok(false);
    }
    for &op in &ops {
        match op_code(data, op) {
            Some(OpCode::CPUI_MULTIEQUAL | OpCode::CPUI_COPY | OpCode::CPUI_BRANCH) => {}
            _ => return Ok(false),
        }
    }
    let Some(join) = join_shape(data, j) else {
        return Ok(false);
    };
    let jslot = data.bblocks_ref().block(j).get_in_index(a);
    if jslot < 0 {
        return Ok(false);
    }
    let mut arm_phis: Vec<OpId> = Vec::new();
    for &phi in &join.phis {
        let Some(mut vn) = data.obank().get(phi).and_then(|o| o.get_in(jslot)) else {
            continue;
        };
        for _ in 0..4 {
            let Some(def) = data.vbank().get(vn).and_then(|v| v.get_def()) else {
                break;
            };
            if !ops.contains(&def) {
                break;
            }
            match op_code(data, def) {
                Some(OpCode::CPUI_MULTIEQUAL) => {
                    arm_phis.push(def);
                    break;
                }
                Some(OpCode::CPUI_COPY) => match data.obank().get(def).and_then(|o| o.get_in(0)) {
                    Some(next) => vn = next,
                    None => break,
                },
                _ => break,
            }
        }
    }
    for edge in (0..nin).rev() {
        let constant = arm_phis.iter().any(|&phi| {
            data.obank()
                .get(phi)
                .and_then(|o| o.get_in(edge))
                .and_then(|v| const_of(data, v))
                .is_some()
        });
        if constant && data.node_split_through(a, edge, false).is_ok() {
            return Ok(true);
        }
    }
    Ok(false)
}

/// Thread joins that branch on a merged constant, splitting the arms that feed
/// them (option `phithread`).
pub struct ActionPhiThread {
    base: ActionBase,
}

impl ActionPhiThread {
    /// Construct in group `g`.
    pub fn boxed(g: impl Into<String>) -> Box<dyn Action> {
        Box::new(ActionPhiThread {
            base: ActionBase::new(0, "phithread", g),
        })
    }
}

impl Action for ActionPhiThread {
    fn base(&self) -> &ActionBase {
        &self.base
    }
    fn base_mut(&mut self) -> &mut ActionBase {
        &mut self.base
    }
    fn clone_filtered(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Action>> {
        if !grouplist.contains(self.get_group()) {
            return None;
        }
        Some(Box::new(ActionPhiThread {
            base: self.base.clone(),
        }))
    }
    fn apply(&mut self, data: &mut Funcdata, _ctx: &mut ActionContext) -> ApplyResult {
        let opt = data.get_arch().kuna_options.get::<PhiThread>();
        if !opt.on {
            return 0;
        }
        let mut count: int4 = 0;
        'outer: while count < MAX_EDITS {
            let root = data.bblocks_root_pub();
            let blocks: Vec<BlockId> = data.bblocks_ref().block(root).get_list().to_vec();
            for &b in &blocks {
                if matches!(thread_one(data, b, opt.ranges), Ok(true)) {
                    count += 1;
                    continue 'outer;
                }
            }
            for &b in &blocks {
                if matches!(split_one(data, b), Ok(true)) {
                    count += 1;
                    continue 'outer;
                }
            }
            break;
        }
        self.base_mut().count += count;
        0
    }
}

/// (kuna) Parse `option phithread on|off|ranges`.
pub struct OptionPhiThread;

impl OptionPhiThread {
    /// The option name.
    pub const NAME: &'static str = "phithread";

    /// Parse and validate the value: `(on, ranges)`.
    pub fn apply(&self, p1: &str) -> unlace_base::error::KunaResult<(bool, bool, String)> {
        if p1 == "ranges" {
            return Ok((
                true,
                true,
                "Jump threading through merged constants and value ranges turned on".to_string(),
            ));
        }
        let on = crate::options::on_or_off(p1)?;
        let state = if on { "on" } else { "off" };
        Ok((
            on,
            false,
            format!("Jump threading through merged constants turned {state}"),
        ))
    }
}

/// (kuna) Run [`ActionPhiThread`] (option `phithread`, default off); `ranges`
/// also threads on value ranges.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct PhiThread {
    pub on: bool,
    pub ranges: bool,
}

impl crate::kuna_optionset::KunaOption for PhiThread {
    const NAME: &'static str = "phithread";
    crate::kuna_option_id!();

    fn unset() -> Self {
        PhiThread {
            on: false,
            ranges: false,
        }
    }

    fn shipped() -> Self {
        Self::unset()
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (on, ranges, msg) = OptionPhiThread.apply(value)?;
        Ok((PhiThread { on, ranges }, msg))
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::kuna_optionset::KunaOption;

    #[test]
    fn option_parses_and_ships_off() {
        let off = PhiThread {
            on: false,
            ranges: false,
        };
        assert_eq!(PhiThread::shipped(), off);
        assert_eq!(
            PhiThread::parse("on").unwrap().0,
            PhiThread {
                on: true,
                ranges: false
            }
        );
        assert_eq!(
            PhiThread::parse("ranges").unwrap().0,
            PhiThread {
                on: true,
                ranges: true
            }
        );
        assert!(PhiThread::parse("x").is_err());
    }

    #[test]
    fn sign_and_mask_helpers() {
        assert_eq!(mask(1), 0xff);
        assert_eq!(mask(8), uintb::MAX);
        assert_eq!(signed(0xff, 1), -1);
        assert_eq!(signed(0x7f, 1), 127);
        assert_eq!(signed(0xffff_ffff, 4), -1);
    }
}
