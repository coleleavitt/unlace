//! (unlace `pairlocal`) A 64-bit local held in a 32-bit register pair.
//!
//! On a 32-bit target a `long long` local lives in two registers
//! (`edx:eax`), so heritage gives each half its own MULTIEQUAL where control
//! flow joins. The 64-bit use that follows then reads `PIECE(hi, lo)` of two
//! 32-bit variables and prints as `CONCAT44(v13, v12)`, with each half assigned
//! separately on every path (`v13 = v12 >> 0x1f`, `v13 = 0; v12 = 0;`).
//!
//! [`RulePairPhi`] matches `PIECE(hi, lo)` where `hi` and `lo` are the outputs of
//! two MULTIEQUALs of one block. It builds the 64-bit value each incoming edge
//! carries from that edge's two inputs:
//!
//! - two constants: the 64-bit constant;
//! - `hi = lo s>> 31`: `SEXT(lo)`; `hi = 0`: `ZEXT(lo)`;
//! - `SUBPIECE(w, 4)` and `SUBPIECE(w, 0)` of one 8-byte `w`: `w`;
//! - the two phis' own outputs (a loop that keeps the pair): the new phi.
//!
//! When every edge has one, a 64-bit MULTIEQUAL of them is placed at the head
//! of the block (an extension is computed at the end of its predecessor) and
//! the PIECE becomes a COPY of it. Each edge's value equals the pair's, so the
//! rewrite is exact; the half phis stay for any other reader and go dead
//! otherwise.

use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule};
use crate::context::{BlockId, OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// The 64-bit value one incoming edge carries.
#[derive(Clone, Copy)]
enum Whole {
    Const(uintb),
    Sext(VarnodeId),
    Zext(VarnodeId),
    Vn(VarnodeId),
    Own,
}

/// Is the decline trace on (`UNLACE_PAIRLOCAL_TRACE=1`)?
fn trace() -> bool {
    unlace_base::env::var("UNLACE_PAIRLOCAL_TRACE").is_ok_and(|v| v != "0" && !v.is_empty())
}

fn def(data: &Funcdata, vn: VarnodeId) -> Option<OpId> {
    data.vbank()
        .get(vn)
        .filter(|v| v.is_written())
        .and_then(|v| v.get_def())
}

fn constant(data: &Funcdata, vn: VarnodeId) -> Option<uintb> {
    data.vbank()
        .get(vn)
        .filter(|v| v.is_constant())
        .map(|v| v.get_offset())
}

fn subpiece(data: &Funcdata, vn: VarnodeId) -> Option<(VarnodeId, uintb)> {
    let o = data.obank().get(def(data, vn)?)?;
    if o.code() != OpCode::CPUI_SUBPIECE {
        return None;
    }
    let w = o.get_in(0)?;
    (data.vbank().get(w)?.get_size() == 8).then_some((w, constant(data, o.get_in(1)?)?))
}

/// `vn` with the COPYs that define it skipped.
fn through_copy(data: &Funcdata, mut vn: VarnodeId) -> VarnodeId {
    for _ in 0..8 {
        let Some(o) = def(data, vn).and_then(|d| data.obank().get(d)) else {
            break;
        };
        if o.code() != OpCode::CPUI_COPY {
            break;
        }
        let Some(next) = o.get_in(0) else {
            break;
        };
        vn = next;
    }
    vn
}

/// The value of the edge with inputs `hi` and `lo`, the phi inputs (live at
/// the end of the edge's predecessor); the COPYs heritage leaves above them are
/// looked through.
fn whole(
    data: &Funcdata,
    hi: VarnodeId,
    lo: VarnodeId,
    own: (VarnodeId, VarnodeId),
) -> Option<Whole> {
    if (hi, lo) == own {
        return Some(Whole::Own);
    }
    let (rh, rl) = (through_copy(data, hi), through_copy(data, lo));
    let same_lo = |v: Option<VarnodeId>| v.is_some_and(|v| through_copy(data, v) == rl);
    match (constant(data, rh), constant(data, rl)) {
        (Some(h), Some(l)) => return Some(Whole::Const((h << 32) | (l & 0xffff_ffff))),
        (Some(0), None) => return Some(Whole::Zext(lo)),
        (Some(_), None) | (None, Some(_)) => return None,
        (None, None) => {}
    }
    if let Some(o) = def(data, rh).and_then(|d| data.obank().get(d))
        && o.code() == OpCode::CPUI_INT_SRIGHT
            && same_lo(o.get_in(0))
            && o.get_in(1).and_then(|c| constant(data, c)) == Some(31)
        {
            return Some(Whole::Sext(lo));
        }
    // x86 `cdq` lifts as `EDX = SUBPIECE(SEXT(EAX), 4)`.
    if let Some((w, 4)) = subpiece(data, rh)
        && let Some(o) = def(data, w).and_then(|d| data.obank().get(d))
            && same_lo(o.get_in(0)) {
                match o.code() {
                    OpCode::CPUI_INT_SEXT => return Some(Whole::Sext(lo)),
                    OpCode::CPUI_INT_ZEXT => return Some(Whole::Zext(lo)),
                    _ => {}
                }
            }
    match (subpiece(data, rh), subpiece(data, rl)) {
        (Some((wh, 4)), Some((wl, 0))) if wh == wl => Some(Whole::Vn(wh)),
        _ => None,
    }
}

/// The two half phis of `op` when it is `PIECE(hi, lo)` of 4-byte MULTIEQUAL outputs
/// of one block with one input per incoming edge.
fn half_phis(data: &Funcdata, op: OpId) -> Option<(OpId, OpId, BlockId)> {
    let o = data.obank().get(op)?;
    let (hi, lo) = (o.get_in(0)?, o.get_in(1)?);
    let size = |v: VarnodeId| data.vbank().get(v).map(|v| v.get_size());
    if size(hi)? != 4 || size(lo)? != 4 || size(o.get_out()?)? != 8 {
        return None;
    }
    let (hp, lp) = (def(data, hi)?, def(data, lo)?);
    let (ho, lo_op) = (data.obank().get(hp)?, data.obank().get(lp)?);
    if ho.code() != OpCode::CPUI_MULTIEQUAL || lo_op.code() != OpCode::CPUI_MULTIEQUAL {
        return None;
    }
    let bl = ho.get_parent()?;
    let n = ho.num_input();
    if lo_op.get_parent()? != bl
        || lo_op.num_input() != n
        || data.bblocks_ref().block(bl).size_in() != n
    {
        return None;
    }
    Some((hp, lp, bl))
}

/// (unlace `pairlocal`) `RulePairPhi`.
pub struct RulePairPhi {
    group: String,
}

impl RulePairPhi {
    pub fn new(g: impl Into<String>) -> RulePairPhi {
        RulePairPhi { group: g.into() }
    }
}

impl Rule for RulePairPhi {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_PIECE]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist.contains(&self.group).then(|| {
            Box::new(RulePairPhi {
                group: self.group.clone(),
            }) as Box<dyn Rule>
        })
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if !data.get_arch().unlace_options.get::<PairLocal>().0 {
            return 0;
        }
        let Some((hp, lp, bl)) = half_phis(data, op) else {
            if trace() {
                let o = data.obank().get(op);
                let code = |v: Option<VarnodeId>| {
                    v.and_then(|v| def(data, v))
                        .and_then(|d| data.obank().get(d))
                        .map(|o| o.code())
                };
                eprintln!(
                    "pairlocal: PIECE at {:?}: halves not same-block phis (hi {:?}, lo {:?})",
                    o.map(|o| o.get_addr().get_offset()),
                    code(o.and_then(|o| o.get_in(0))),
                    code(o.and_then(|o| o.get_in(1)))
                );
            }
            return 0;
        };
        let (Some(hout), Some(lout)) = (
            data.obank().get(hp).and_then(|o| o.get_out()),
            data.obank().get(lp).and_then(|o| o.get_out()),
        ) else {
            return 0;
        };
        let n = data.obank().get(hp).map_or(0, |o| o.num_input());
        let mut wholes = Vec::with_capacity(n as usize);
        for i in 0..n {
            let (Some(h), Some(l)) = (
                data.obank().get(hp).and_then(|o| o.get_in(i)),
                data.obank().get(lp).and_then(|o| o.get_in(i)),
            ) else {
                return 0;
            };
            let Some(w) = whole(data, h, l, (hout, lout)) else {
                if trace() {
                    let code = |v: VarnodeId| {
                        def(data, through_copy(data, v))
                            .and_then(|d| data.obank().get(d))
                            .map(|o| o.code())
                    };
                    eprintln!(
                        "pairlocal: edge {i}: no whole for hi {:?} {:?} lo {:?} {:?}",
                        code(h),
                        constant(data, h),
                        code(l),
                        constant(data, l)
                    );
                }
                return 0;
            };
            wholes.push(w);
        }
        if wholes.iter().all(|w| matches!(w, Whole::Own)) {
            return 0;
        }
        let Some(addr) = data.obank().get(hp).map(|o| o.get_addr().clone()) else {
            return 0;
        };
        let phi = data.new_op(n, addr.clone());
        data.op_set_opcode_code(phi, OpCode::CPUI_MULTIEQUAL);
        let Ok(out) = data.new_unique_out(8, phi) else {
            return 0;
        };
        for (i, w) in wholes.into_iter().enumerate() {
            let vn = match w {
                Whole::Const(c) => data.new_constant(8, c),
                Whole::Vn(v) => v,
                Whole::Own => out,
                Whole::Sext(v) | Whole::Zext(v) => {
                    let pred = data.bblocks_ref().block(bl).get_in(i as int4);
                    let ext = data.new_op(1, addr.clone());
                    data.op_set_opcode_code(
                        ext,
                        if matches!(w, Whole::Sext(_)) {
                            OpCode::CPUI_INT_SEXT
                        } else {
                            OpCode::CPUI_INT_ZEXT
                        },
                    );
                    let Ok(e) = data.new_unique_out(8, ext) else {
                        return 0;
                    };
                    if data.op_set_input(ext, v, 0).is_err() {
                        return 0;
                    }
                    data.op_insert_end(ext, pred);
                    e
                }
            };
            if data.op_set_input(phi, vn, i as int4).is_err() {
                return 0;
            }
        }
        data.op_insert_begin(phi, bl);
        data.op_set_opcode_code(op, OpCode::CPUI_COPY);
        if data.op_set_all_input(op, &[out]).is_err() {
            return 0;
        }
        1
    }
}

crate::unlace_flag!(
    /// (unlace `pairlocal`) Join a 64-bit local's two register halves at their phis.
    PairLocal,
    "pairlocal",
    "Register-pair local joining",
    unset: false,
    shipped: false
);
