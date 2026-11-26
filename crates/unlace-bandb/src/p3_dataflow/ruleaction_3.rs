//! Boolean normalization, phi/INDIRECT collapse, constant folding and reassociation.
//! Port of `decompiler/cpp/ruleaction.cc` lines 2819-4292.
//!
//! Registration retains upstream definition order; the action pool owns rule
//! state. Opcode changes use canonical TypeOp metadata, and unique outputs use
//! the Funcdata factory so high-variable bookkeeping follows the function state.

use smallvec::SmallVec;
use unlace_base::address::calc_mask;
use unlace_base::space::spacetype;
use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::action::{ActionGroupList, Rule, RuleSpec};
use crate::context::{OpId, VarnodeId};
use crate::expression::AddExpression;
use crate::fasthash::FxHashMap;
use crate::funcdata::Funcdata;
use crate::op::pcodeop_flags;

// =============================================================================
// inst-table resolution: OpCode -> TypeOp (canonical typeop.cc table)
// =============================================================================

/// `data.opSetOpcode(op, opc)` with the inst-table resolution folded in: builds
/// the [`TypeOp`] from the canonical table, then routes through the real
/// [`Funcdata::op_set_opcode`].
fn set_opcode(data: &mut Funcdata, op: OpId, opc: OpCode) {
    data.op_set_opcode(op, crate::typeop::seam_type_op_for(opc));
}

// =============================================================================
// Small Funcdata-mediated read helpers (mirror the C++ Varnode/PcodeOp getters)
// =============================================================================

/// `op->getIn(slot)` (panics on a stale op, as the C++ would deref a dangling
/// pointer — an internal invariant).
fn op_in(data: &Funcdata, op: OpId, slot: int4) -> Option<VarnodeId> {
    data.obank().get(op).expect("op_in: stale op").get_in(slot)
}

/// `op->getOut()`.
fn op_out(data: &Funcdata, op: OpId) -> Option<VarnodeId> {
    data.obank().get(op).expect("op_out: stale op").get_out()
}

/// `op->code()`.
fn op_code(data: &Funcdata, op: OpId) -> OpCode {
    data.obank().get(op).expect("op_code: stale op").code()
}

/// `op->numInput()`.
fn op_num_input(data: &Funcdata, op: OpId) -> int4 {
    data.obank()
        .get(op)
        .expect("op_num_input: stale op")
        .num_input()
}

/// `vn->isConstant()`.
fn vn_is_constant(data: &Funcdata, vn: VarnodeId) -> bool {
    data.vbank()
        .get(vn)
        .expect("vn_is_constant: stale vn")
        .is_constant()
}

/// `vn->isWritten()`.
fn vn_is_written(data: &Funcdata, vn: VarnodeId) -> bool {
    data.vbank()
        .get(vn)
        .expect("vn_is_written: stale vn")
        .is_written()
}

/// `vn->isFree()`.
fn vn_is_free(data: &Funcdata, vn: VarnodeId) -> bool {
    data.vbank()
        .get(vn)
        .expect("vn_is_free: stale vn")
        .is_free()
}

/// `vn->getOffset()`.
fn vn_offset(data: &Funcdata, vn: VarnodeId) -> uintb {
    data.vbank()
        .get(vn)
        .expect("vn_offset: stale vn")
        .get_offset()
}

/// `vn->getSize()`.
fn vn_size(data: &Funcdata, vn: VarnodeId) -> int4 {
    data.vbank().get(vn).expect("vn_size: stale vn").get_size()
}

/// `vn->getDef()`.
fn vn_def(data: &Funcdata, vn: VarnodeId) -> Option<OpId> {
    data.vbank().get(vn).expect("vn_def: stale vn").get_def()
}

/// `vn->constantMatch(val)` (C++ `Varnode::constantMatch`, `varnode.cc`):
/// `isConstant() && getOffset()==val`.
fn constant_match(data: &Funcdata, vn: VarnodeId, val: uintb) -> bool {
    data.vbank()
        .get(vn)
        .expect("constant_match: stale vn")
        .constant_match(val)
}

/// `vn->isBooleanValue(useAnnotation)` (C++ `Varnode::isBooleanValue`,
/// `varnode.cc`).  The written case is `def->isCalculatedBool()`; the
/// [`Varnode::is_boolean_value`](crate::varnode::Varnode::is_boolean_value) hook
/// defers that op-graph branch to "the op-aware caller" — these rules ARE that
/// caller, so the written-varnode branch is resolved here through the def op's
/// `isCalculatedBool()`.  The free/annotation cases stay in the varnode method.
fn vn_is_boolean_value(data: &Funcdata, vn: VarnodeId, use_annotation: bool) -> bool {
    if vn_is_written(data, vn) {
        let def = vn_def(data, vn).expect("vn_is_boolean_value: written vn has no def");
        return data
            .obank()
            .get(def)
            .expect("vn_is_boolean_value: stale def op")
            .is_calculated_bool();
    }
    data.vbank()
        .get(vn)
        .expect("vn_is_boolean_value: stale vn")
        .is_boolean_value(use_annotation)
}

/// `vn->getNZMask()`.
fn vn_nzmask(data: &Funcdata, vn: VarnodeId) -> uintb {
    data.vbank()
        .get(vn)
        .expect("vn_nzmask: stale vn")
        .get_nz_mask()
}

/// `vn->isHeritageKnown()`.
fn vn_is_heritage_known(data: &Funcdata, vn: VarnodeId) -> bool {
    data.vbank()
        .get(vn)
        .expect("vn_is_heritage_known: stale vn")
        .is_heritage_known()
}

/// `vn->isMark()`.
fn vn_is_mark(data: &Funcdata, vn: VarnodeId) -> bool {
    data.vbank()
        .get(vn)
        .expect("vn_is_mark: stale vn")
        .is_mark()
}

/// `vn->setMark()`.
fn vn_set_mark(data: &mut Funcdata, vn: VarnodeId) {
    data.vbank_mut()
        .get_mut(vn)
        .expect("vn_set_mark: stale vn")
        .set_mark();
}

/// `vn->clearMark()`.
fn vn_clear_mark(data: &mut Funcdata, vn: VarnodeId) {
    data.vbank_mut()
        .get_mut(vn)
        .expect("vn_clear_mark: stale vn")
        .clear_mark();
}

// =============================================================================
// RuleBooleanDedup (ruleaction.cc:2819)
// =============================================================================

/// `RuleBooleanDedup` — deduplicate a boolean subexpression shared between the
/// two sides of a `BOOL_AND`/`BOOL_OR` (C++ `RuleBooleanDedup`).
#[derive(Clone, Default)]
pub struct RuleBooleanDedup;

impl Rule for RuleBooleanDedup {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_BOOL_AND, OpCode::CPUI_BOOL_OR]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleBooleanDedup))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let vn0 = op_in(data, op, 0).expect("RuleBooleanDedup: null in0");
        if !vn_is_written(data, vn0) {
            return 0;
        }
        let vn1 = op_in(data, op, 1).expect("RuleBooleanDedup: null in1");
        if !vn_is_written(data, vn1) {
            return 0;
        }
        let op0 = vn_def(data, vn0).expect("RuleBooleanDedup: vn0 written but no def");
        let opc0 = op_code(data, op0);
        if opc0 != OpCode::CPUI_BOOL_AND && opc0 != OpCode::CPUI_BOOL_OR {
            return 0;
        }
        let op1 = vn_def(data, vn1).expect("RuleBooleanDedup: vn1 written but no def");
        let opc1 = op_code(data, op1);
        if opc1 != OpCode::CPUI_BOOL_AND && opc1 != OpCode::CPUI_BOOL_OR {
            return 0;
        }
        let ins = [
            op_in(data, op0, 0).expect("RuleBooleanDedup: op0 in0"),
            op_in(data, op0, 1).expect("RuleBooleanDedup: op0 in1"),
            op_in(data, op1, 0).expect("RuleBooleanDedup: op1 in0"),
            op_in(data, op1, 1).expect("RuleBooleanDedup: op1 in1"),
        ];
        if vn_is_free(data, ins[0])
            || vn_is_free(data, ins[1])
            || vn_is_free(data, ins[2])
            || vn_is_free(data, ins[3])
        {
            return 0;
        }
        // `isMatch(left,right,isFlip)` == BooleanMatch::evaluate(left,right,1):
        //   same        => isFlip=false, true
        //   complementary=> isFlip=true,  true
        //   otherwise   => false
        // (C++ RuleBooleanDedup::isMatch, ruleaction.cc:2836-2849, now wired to
        // the fully-ported `expression::BooleanMatch::evaluate`).
        let is_match = |data: &Funcdata, left: VarnodeId, right: VarnodeId| -> Option<bool> {
            let val = crate::expression::BooleanMatch::evaluate(
                left,
                right,
                1,
                data.vbank(),
                data.obank(),
            );
            if val == crate::expression::boolean_match::same {
                Some(false)
            } else if val == crate::expression::boolean_match::complementary {
                Some(true)
            } else {
                None
            }
        };

        let (isflipped, left_a, right_a, left_o, right_o) =
            if let Some(f) = is_match(data, ins[0], ins[2]) {
                (f, ins[0], ins[2], ins[1], ins[3])
            } else if let Some(f) = is_match(data, ins[0], ins[3]) {
                (f, ins[0], ins[3], ins[1], ins[2])
            } else if let Some(f) = is_match(data, ins[1], ins[2]) {
                (f, ins[1], ins[2], ins[0], ins[3])
            } else if let Some(f) = is_match(data, ins[1], ins[3]) {
                (f, ins[1], ins[3], ins[0], ins[2])
            } else {
                return 0;
            };
        let central_opc = op_code(data, op);
        let bc_opc: OpCode;
        let final_opc: OpCode;
        let final_a: VarnodeId;
        if isflipped {
            if central_opc == OpCode::CPUI_BOOL_AND
                && opc0 == OpCode::CPUI_BOOL_AND
                && opc1 == OpCode::CPUI_BOOL_AND
            {
                // (A && B) && (!A && C)  => whole expression is false
                set_opcode(data, op, OpCode::CPUI_COPY);
                data.op_remove_input(op, 1);
                let zero = data.new_constant(1, 0);
                data.op_set_input(op, zero, 0)
                    .expect("RuleBooleanDedup: opSetInput");
                return 1;
            }
            if central_opc == OpCode::CPUI_BOOL_OR
                && opc0 == OpCode::CPUI_BOOL_OR
                && opc1 == OpCode::CPUI_BOOL_OR
            {
                // (A || B) || (!A || C)  => whole expression is true
                set_opcode(data, op, OpCode::CPUI_COPY);
                data.op_remove_input(op, 1);
                let one = data.new_constant(1, 1);
                data.op_set_input(op, one, 0)
                    .expect("RuleBooleanDedup: opSetInput");
                return 1;
            }
            if central_opc == OpCode::CPUI_BOOL_OR && opc0 != opc1 {
                // (A || B) || (!A && C)
                final_a = if opc0 == OpCode::CPUI_BOOL_OR {
                    left_a
                } else {
                    right_a
                };
                final_opc = OpCode::CPUI_BOOL_OR;
                bc_opc = OpCode::CPUI_BOOL_OR;
            } else {
                return 0;
            }
        } else if central_opc == opc0 && central_opc == opc1 {
            // (A && B) && (A && C)    or   (A || B) || (A || C)
            final_a = left_a;
            final_opc = central_opc;
            bc_opc = central_opc;
        } else if opc0 == opc1 && central_opc != opc0 {
            // (A && B) || (A && C)    or   (A || B) && (A || C)
            final_a = left_a;
            final_opc = opc0;
            bc_opc = central_opc;
        } else {
            return 0;
        }
        let opaddr = data
            .obank()
            .get(op)
            .expect("RuleBooleanDedup: stale op")
            .get_addr()
            .clone();
        let bc_op = data.new_op(2, opaddr);
        let tmp = data.new_unique_out_unlaned(1, bc_op).expect("newUniqueOut");
        set_opcode(data, bc_op, bc_opc);
        data.op_set_input(bc_op, left_o, 0)
            .expect("RuleBooleanDedup: opSetInput");
        data.op_set_input(bc_op, right_o, 1)
            .expect("RuleBooleanDedup: opSetInput");
        data.op_insert_before(bc_op, op);
        set_opcode(data, op, final_opc);
        data.op_set_input(op, final_a, 0)
            .expect("RuleBooleanDedup: opSetInput");
        data.op_set_input(op, tmp, 1)
            .expect("RuleBooleanDedup: opSetInput");
        1
    }
}

// =============================================================================
// RuleBooleanNegate (ruleaction.cc:2956)
// =============================================================================

/// `RuleBooleanNegate` — `V == false => !V`, `V == true => V` (C++
/// `RuleBooleanNegate`).
#[derive(Clone, Default)]
pub struct RuleBooleanNegate;

impl Rule for RuleBooleanNegate {
    fn get_op_list(&self) -> Vec<OpCode> {
        // { CPUI_INT_NOTEQUAL, CPUI_INT_EQUAL }
        vec![OpCode::CPUI_INT_NOTEQUAL, OpCode::CPUI_INT_EQUAL]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleBooleanNegate))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let opc = op_code(data, op);
        let constvn = op_in(data, op, 1).expect("RuleBooleanNegate: null in1");
        let subbool = op_in(data, op, 0).expect("RuleBooleanNegate: null in0");
        if !vn_is_constant(data, constvn) {
            return 0;
        }
        let val = vn_offset(data, constvn);
        if (val != 0) && (val != 1) {
            return 0;
        }
        let mut negate = opc == OpCode::CPUI_INT_NOTEQUAL;
        if val == 0 {
            negate = !negate;
        }

        if !vn_is_boolean_value(data, subbool, data.is_type_recovery_on()) {
            return 0;
        }

        data.op_remove_input(op, 1); // Remove second parameter
        data.op_set_input(op, subbool, 0)
            .expect("RuleBooleanNegate: opSetInput"); // Keep original boolean parameter
        if negate {
            set_opcode(data, op, OpCode::CPUI_BOOL_NEGATE);
        } else {
            set_opcode(data, op, OpCode::CPUI_COPY);
        }
        1
    }
}

// =============================================================================
// RuleBoolZext (ruleaction.cc:3000)
// =============================================================================

/// `RuleBoolZext` — simplify boolean expressions of the form `zext(V) * -1`
/// (C++ `RuleBoolZext`).
#[derive(Clone, Default)]
pub struct RuleBoolZext;

impl Rule for RuleBoolZext {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_ZEXT]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleBoolZext))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let bool_vn1 = op_in(data, op, 0).expect("RuleBoolZext: null in0");
        if !vn_is_boolean_value(data, bool_vn1, data.is_type_recovery_on()) {
            return 0;
        }

        let out0 = op_out(data, op).expect("RuleBoolZext: ZEXT has no output");
        let multop1 = match data.lone_descend(out0) {
            Some(o) => o,
            None => return 0,
        };
        if op_code(data, multop1) != OpCode::CPUI_INT_MULT {
            return 0;
        }
        let m1in1 = op_in(data, multop1, 1).expect("RuleBoolZext: multop1 in1");
        if !vn_is_constant(data, m1in1) {
            return 0;
        }
        let mut coeff = vn_offset(data, m1in1);
        if coeff != calc_mask(vn_size(data, m1in1)) {
            return 0;
        }
        let m1out = op_out(data, multop1).expect("RuleBoolZext: multop1 has no output");
        let size = vn_size(data, m1out);

        // If we reached here, we are Multiplying extended boolean by -1
        let actionop = match data.lone_descend(m1out) {
            Some(o) => o,
            None => return 0,
        };
        match op_code(data, actionop) {
            OpCode::CPUI_INT_ADD => {
                let aoin1 = op_in(data, actionop, 1).expect("RuleBoolZext: actionop in1");
                if !vn_is_constant(data, aoin1) {
                    return 0;
                }
                if vn_offset(data, aoin1) == 1 {
                    let opaddr = data
                        .obank()
                        .get(op)
                        .expect("RuleBoolZext: stale op")
                        .get_addr()
                        .clone();
                    let newop = data.new_op(1, opaddr);
                    set_opcode(data, newop, OpCode::CPUI_BOOL_NEGATE); // Negate the boolean
                    let vn = data.new_unique_out_unlaned(1, newop).expect("newUniqueOut");
                    data.op_set_input(newop, bool_vn1, 0)
                        .expect("RuleBoolZext: opSetInput");
                    data.op_insert_before(newop, op);
                    data.op_set_input(op, vn, 0)
                        .expect("RuleBoolZext: opSetInput");
                    data.op_remove_input(actionop, 1); // eliminate the INT_ADD operator
                    set_opcode(data, actionop, OpCode::CPUI_COPY);
                    let opout = op_out(data, op).expect("RuleBoolZext: op out");
                    data.op_set_input(actionop, opout, 0)
                        .expect("RuleBoolZext: opSetInput"); // propagate past the INT_MULT operator
                    return 1;
                }
                0
            }
            OpCode::CPUI_INT_EQUAL | OpCode::CPUI_INT_NOTEQUAL => {
                let aoin1 = op_in(data, actionop, 1).expect("RuleBoolZext: actionop in1");
                let mut val = if vn_is_constant(data, aoin1) {
                    vn_offset(data, aoin1)
                } else {
                    return 0;
                };

                // Change comparison of extended boolean to 0 or -1
                // to comparison of unextended boolean to 0 or 1
                if val == coeff {
                    val = 1;
                } else if val != 0 {
                    return 0; // Not comparing with 0 or -1
                }

                data.op_set_input(actionop, bool_vn1, 0)
                    .expect("RuleBoolZext: opSetInput");
                let newc = data.new_constant(1, val);
                data.op_set_input(actionop, newc, 1)
                    .expect("RuleBoolZext: opSetInput");
                1
            }
            OpCode::CPUI_INT_AND | OpCode::CPUI_INT_OR | OpCode::CPUI_INT_XOR => {
                let opc = match op_code(data, actionop) {
                    OpCode::CPUI_INT_AND => OpCode::CPUI_BOOL_AND,
                    OpCode::CPUI_INT_OR => OpCode::CPUI_BOOL_OR,
                    OpCode::CPUI_INT_XOR => OpCode::CPUI_BOOL_XOR,
                    _ => unreachable!(),
                };

                // Apparently doing logical ops with extended boolean
                // Check that the other side is also an extended boolean
                let ao0 = op_in(data, actionop, 0).expect("RuleBoolZext: actionop in0");
                let ao1 = op_in(data, actionop, 1).expect("RuleBoolZext: actionop in1");
                let multop2 = if Some(multop1) == vn_def(data, ao0) {
                    vn_def(data, ao1)
                } else {
                    vn_def(data, ao0)
                };
                let multop2 = match multop2 {
                    Some(o) => o,
                    None => return 0,
                };
                if op_code(data, multop2) != OpCode::CPUI_INT_MULT {
                    return 0;
                }
                let m2in1 = op_in(data, multop2, 1).expect("RuleBoolZext: multop2 in1");
                if !vn_is_constant(data, m2in1) {
                    return 0;
                }
                coeff = vn_offset(data, m2in1);
                if coeff != calc_mask(size) {
                    return 0;
                }
                let m2in0 = op_in(data, multop2, 0).expect("RuleBoolZext: multop2 in0");
                let zextop2 = match vn_def(data, m2in0) {
                    Some(o) => o,
                    None => return 0,
                };
                if op_code(data, zextop2) != OpCode::CPUI_INT_ZEXT {
                    return 0;
                }
                let bool_vn2 = op_in(data, zextop2, 0).expect("RuleBoolZext: zextop2 in0");
                if !vn_is_boolean_value(data, bool_vn2, data.is_type_recovery_on()) {
                    return 0;
                }

                // Do the boolean calculation on unextended boolean values
                // and then extend the result
                let aoaddr = data
                    .obank()
                    .get(actionop)
                    .expect("RuleBoolZext: stale actionop")
                    .get_addr()
                    .clone();
                let newop = data.new_op(2, aoaddr.clone());
                let newres = data.new_unique_out_unlaned(1, newop).expect("newUniqueOut");
                set_opcode(data, newop, opc);
                data.op_set_input(newop, bool_vn1, 0)
                    .expect("RuleBoolZext: opSetInput");
                data.op_set_input(newop, bool_vn2, 1)
                    .expect("RuleBoolZext: opSetInput");
                data.op_insert_before(newop, actionop);

                let newzext = data.new_op(1, aoaddr);
                let newzout = data
                    .new_unique_out_unlaned(size, newzext)
                    .expect("newUniqueOut");
                set_opcode(data, newzext, OpCode::CPUI_INT_ZEXT);
                data.op_set_input(newzext, newres, 0)
                    .expect("RuleBoolZext: opSetInput");
                data.op_insert_before(newzext, actionop);

                set_opcode(data, actionop, OpCode::CPUI_INT_MULT);
                data.op_set_input(actionop, newzout, 0)
                    .expect("RuleBoolZext: opSetInput");
                let coeffc = data.new_constant(size, coeff);
                data.op_set_input(actionop, coeffc, 1)
                    .expect("RuleBoolZext: opSetInput");
                1
            }
            _ => 0,
        }
    }
}

// =============================================================================
// RuleLogic2Bool (ruleaction.cc:3125)
// =============================================================================

/// `RuleLogic2Bool` — `V & W => V && W`, `V | W => V || W` when both inputs are
/// booleans (C++ `RuleLogic2Bool`).
#[derive(Clone, Default)]
pub struct RuleLogic2Bool;

impl Rule for RuleLogic2Bool {
    fn get_op_list(&self) -> Vec<OpCode> {
        // { CPUI_INT_AND, CPUI_INT_OR, CPUI_INT_XOR }
        vec![
            OpCode::CPUI_INT_AND,
            OpCode::CPUI_INT_OR,
            OpCode::CPUI_INT_XOR,
        ]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleLogic2Bool))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let bool_vn = op_in(data, op, 0).expect("RuleLogic2Bool: null in0");
        if !vn_is_boolean_value(data, bool_vn, data.is_type_recovery_on()) {
            return 0;
        }
        let in1 = op_in(data, op, 1).expect("RuleLogic2Bool: null in1");
        if vn_is_constant(data, in1) {
            if vn_offset(data, in1) > 1u64 {
                // If one side is a constant 0 or 1, this is boolean
                return 0;
            }
        } else if !vn_is_boolean_value(data, in1, data.is_type_recovery_on()) {
            return 0;
        }
        match op_code(data, op) {
            OpCode::CPUI_INT_AND => set_opcode(data, op, OpCode::CPUI_BOOL_AND),
            OpCode::CPUI_INT_OR => set_opcode(data, op, OpCode::CPUI_BOOL_OR),
            OpCode::CPUI_INT_XOR => set_opcode(data, op, OpCode::CPUI_BOOL_XOR),
            _ => return 0,
        }
        1
    }
}

// =============================================================================
// RuleIndirectCollapse (ruleaction.cc:3168)
// =============================================================================

/// `RuleIndirectCollapse` — remove a `CPUI_INDIRECT` if its blocking PcodeOp is
/// dead (C++ `RuleIndirectCollapse`).
#[derive(Clone, Default)]
pub struct RuleIndirectCollapse;

impl Rule for RuleIndirectCollapse {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INDIRECT]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleIndirectCollapse))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let in1 = op_in(data, op, 1).expect("RuleIndirectCollapse: null in1");
        if data
            .vbank()
            .get(in1)
            .expect("RuleIndirectCollapse: stale in1")
            .get_space()
            .get_type()
            != spacetype::IPTR_IOP
        {
            return 0;
        }
        let indop = match op_from_iop_const(data, in1) {
            Some(o) => o,
            None => return 0,
        };

        // Is the indirect effect gone?
        let indop_dead = data.obank().get(indop).map(|o| o.is_dead()).unwrap_or(true);
        if !indop_dead {
            if op_code(data, indop) == OpCode::CPUI_COPY {
                // STORE resolved to a COPY
                let vn1 = op_out(data, indop).expect("RuleIndirectCollapse: indop COPY out");
                let vn2 = op_out(data, op).expect("RuleIndirectCollapse: op out");
                let res = {
                    let v1 = data
                        .vbank()
                        .get(vn1)
                        .expect("RuleIndirectCollapse: stale vn1");
                    let v2 = data
                        .vbank()
                        .get(vn2)
                        .expect("RuleIndirectCollapse: stale vn2");
                    v1.characterize_overlap(v2)
                };
                if res > 0 {
                    // Copy has an effect of some sort
                    if res == 2 {
                        // vn1 and vn2 are the same storage -> Convert INDIRECT to COPY
                        data.op_uninsert(op);
                        data.op_set_input(op, vn1, 0)
                            .expect("RuleIndirectCollapse: opSetInput");
                        data.op_remove_input(op, 1);
                        set_opcode(data, op, OpCode::CPUI_COPY);
                        data.op_insert_after(op, indop);
                        return 1;
                    }
                    let contains0 = {
                        let v1 = data
                            .vbank()
                            .get(vn1)
                            .expect("RuleIndirectCollapse: stale vn1");
                        let v2 = data
                            .vbank()
                            .get(vn2)
                            .expect("RuleIndirectCollapse: stale vn2");
                        v1.contains(v2) == 0
                    };
                    if contains0 {
                        // Convert INDIRECT to a SUBPIECE
                        let trunc = {
                            let v1 = data
                                .vbank()
                                .get(vn1)
                                .expect("RuleIndirectCollapse: stale vn1");
                            let v2 = data
                                .vbank()
                                .get(vn2)
                                .expect("RuleIndirectCollapse: stale vn2");
                            if v1.get_space().is_big_endian() {
                                (v1.get_offset().wrapping_add(v1.get_size() as uintb)).wrapping_sub(
                                    v2.get_offset().wrapping_add(v2.get_size() as uintb),
                                )
                            } else {
                                v2.get_offset().wrapping_sub(v1.get_offset())
                            }
                        };
                        data.op_uninsert(op);
                        data.op_set_input(op, vn1, 0)
                            .expect("RuleIndirectCollapse: opSetInput");
                        let tc = data.new_constant(4, trunc);
                        data.op_set_input(op, tc, 1)
                            .expect("RuleIndirectCollapse: opSetInput");
                        set_opcode(data, op, OpCode::CPUI_SUBPIECE);
                        data.op_insert_after(op, indop);
                        return 1;
                    }
                    // STUB(W4): data.warning("Ignoring partial resolution of indirect", indop->getAddr())
                    // The comment database is the W4 console boundary; the message is
                    // dropped here.  The C++ then returns 0 (partial overlap).
                    return 0; // Partial overlap, not sure what to do
                }
            } else if data
                .vbank()
                .get(op_out(data, op).expect("RuleIndirectCollapse: op out"))
                .expect("RuleIndirectCollapse: stale op out")
                .has_no_local_alias()
            {
                let o = data
                    .obank()
                    .get(op)
                    .expect("RuleIndirectCollapse: stale op");
                if o.is_indirect_creation() || o.no_indirect_collapse() {
                    return 0;
                }
                let output = data
                    .vbank()
                    .get(op_out(data, op).expect("indirect output"))
                    .expect("live indirect output");
                if crate::octeoneffects::keeps_unaliased_guard(
                    data,
                    indop,
                    output.get_addr(),
                    output.get_size(),
                ) {
                    return 0;
                }
                if data.get_call_specs_index(indop).is_some_and(|index| {
                    crate::calleeprotostack::declared_pointer_reaches(
                        data,
                        data.get_call_specs(index),
                        output.get_addr(),
                        output.get_size(),
                    )
                }) {
                    return 0;
                }
            } else if data
                .obank()
                .get(indop)
                .expect("RuleIndirectCollapse: stale indop")
                .uses_spacebase_ptr()
            {
                if op_code(data, indop) == OpCode::CPUI_STORE {
                    // STUB(W4): const LoadGuard *guard = data.getStoreGuard(indop);
                    // getStoreGuard / LoadGuard are the heritage/W4 store-guard
                    // subsystem (not ported).  The C++ keeps the INDIRECT (returns
                    // 0) when the STORE is guarded for op's address OR when there
                    // is no guard yet; with the hook unported the conservative
                    // outcome is identical (keep the INDIRECT).  Recorded as a loss.
                    return 0;
                }
            } else {
                return 0;
            }
        }

        let out = op_out(data, op).expect("RuleIndirectCollapse: op out");
        let in0 = op_in(data, op, 0).expect("RuleIndirectCollapse: op in0");
        if data.obank().get(op).is_some_and(|o| {
            o.get_addlflags() & crate::op::pcodeop_addlflags::unlace_persist_stale != 0
        }) {
            crate::persistcalls::restart_full(data);
        } else if data.obank().get(op).is_some_and(|o| {
            o.get_addlflags() & crate::op::pcodeop_addlflags::unlace_persist_guard != 0
        }) {
            let (addr, size) = {
                let v = data
                    .vbank()
                    .get(out)
                    .expect("RuleIndirectCollapse: stale op out");
                (v.get_addr().clone(), v.get_size())
            };
            if !crate::persistcalls::guarded(data, op, &addr, size) {
                crate::persistcalls::restart_full(data);
            }
        }
        if crate::heritage::unlace_jt_trace() {
            let v = data.vbank().get(out);
            eprintln!(
                "jt-trace indirect-collapse jt={} at={:?} space={:?} off={:?} size={:?} nolocalalias={:?} indop_dead={}",
                data.is_jumptable_recovery_on(),
                data.obank().get(op).map(|o| o.get_addr().get_offset()),
                v.map(|v| v.get_space().get_name().to_string()),
                v.map(|v| v.get_offset()),
                v.map(|v| v.get_size()),
                v.map(|v| v.has_no_local_alias()),
                indop_dead
            );
        }
        data.total_replace(out, in0)
            .expect("RuleIndirectCollapse: totalReplace");
        data.op_destroy(op); // Get rid of the INDIRECT
        1
    }
}

/// `PcodeOp::getOpFromConst(vn->getAddr())` for an iop-space annotation Varnode:
/// decode the offset back to the [`OpId`] it encodes (the inverse of
/// `funcdata_varnode::op_iop_encode`, which packs the slotmap key's FFI form).
///
/// STUB(W3-varnode): `funcdata_op.rs` documents the encode side as established by
/// `newVarnodeIop`; this is the matching decode.  Returns `None` if the decoded
/// key is stale (the op was destroyed).
fn op_from_iop_const(data: &Funcdata, vn: VarnodeId) -> Option<OpId> {
    use slotmap::KeyData;
    let off = vn_offset(data, vn);
    let key = OpId::from(KeyData::from_ffi(off));
    if data.obank().get(key).is_some() {
        Some(key)
    } else {
        // The C++ getOpFromConst always yields a live pointer (the INDIRECT and
        // its source share lifetimes); a stale key means the source already went
        // away, which the dead-path branch below treats as "effect is gone".
        None
    }
}

// =============================================================================
// RuleMultiCollapse (ruleaction.cc:3245)
// =============================================================================

/// `RuleMultiCollapse` — collapse a `MULTIEQUAL` whose inputs all trace to the
/// same value (C++ `RuleMultiCollapse`).
///
/// A failed walk keeps its witness: the input slots from the op down to the
/// non-matching branch it stopped at. While every link of that path is still a
/// `MULTIEQUAL` input the walk would expand and its last input is still a branch
/// that matches nothing, the walk would reach that branch again (it is still in
/// the walk's reach, and an earlier stop is a failure too), so the rule answers
/// "no change" without walking a web it walked before. Both that answer and the
/// heritage test's are "no change", so the witness is tried first.
#[derive(Clone, Default)]
pub struct RuleMultiCollapse {
    witness: FxHashMap<OpId, SmallVec<[(OpId, int4); 4]>>,
}

/// How many witnesses' room [`RuleMultiCollapse`] keeps across a reset.
const WITNESSES_KEPT: usize = 1024;

/// How [`RuleMultiCollapse`]'s walk treats one branch `vn` when its defining
/// branch is `def`: skipped (seen), matching, expanded (the `MULTIEQUAL`
/// writing it), or a branch that ends the walk in failure.
enum MultiBranch {
    Skip,
    Match,
    Expand(OpId),
    Mismatch,
}

fn multi_branch(
    data: &Funcdata,
    vn: VarnodeId,
    out: VarnodeId,
    def: VarnodeId,
    nofunc: bool,
) -> MultiBranch {
    if vn == out || vn_is_mark(data, vn) {
        return MultiBranch::Skip;
    }
    if vn == def {
        return MultiBranch::Match;
    }
    if !nofunc
        && !crate::indexaliasguard::keeps_forced_join(data, out, def, vn)
        && crate::expression::functional_equality(def, vn, data.vbank(), data.obank())
    {
        return MultiBranch::Match;
    }
    match vn_def(data, vn) {
        Some(d) if vn_is_written(data, vn) && op_code(data, d) == OpCode::CPUI_MULTIEQUAL => {
            MultiBranch::Expand(d)
        }
        _ => MultiBranch::Mismatch,
    }
}

impl RuleMultiCollapse {
    /// Test-only: is a failed walk of `op` recorded?
    #[doc(hidden)]
    pub fn has_witness(&self, op: OpId) -> bool {
        self.witness.contains_key(&op)
    }

    /// Does `op`'s recorded witness still end the walk in failure?
    fn fails_again(
        &self,
        op: OpId,
        data: &Funcdata,
        out: VarnodeId,
        def: VarnodeId,
        nofunc: bool,
    ) -> bool {
        let Some(path) = self.witness.get(&op) else {
            return false;
        };
        if path.first().map(|&(o, _)| o) != Some(op) {
            return false;
        }
        for (i, &(from, slot)) in path.iter().enumerate() {
            if data
                .obank()
                .get(from)
                .is_none_or(|o| o.code() != OpCode::CPUI_MULTIEQUAL)
                || slot >= op_num_input(data, from)
            {
                return false;
            }
            let Some(vn) = op_in(data, from, slot) else {
                return false;
            };
            match (multi_branch(data, vn, out, def, nofunc), path.get(i + 1)) {
                (MultiBranch::Expand(next), Some(&(want, _))) if next == want => {}
                (MultiBranch::Mismatch, None) => return true,
                _ => return false,
            }
        }
        false
    }
}

impl Rule for RuleMultiCollapse {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_MULTIEQUAL]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleMultiCollapse::default()))
    }

    /// A function's witnesses mean nothing to the next one, and the rule lives
    /// as long as the program: the table is cut back to [`WITNESSES_KEPT`] so
    /// the largest function's does not stay allocated for the rest of a batch.
    fn reset(&mut self, _data: &mut Funcdata) {
        self.witness.clear();
        self.witness.shrink_to(WITNESSES_KEPT);
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        // Verbatim port of C++ `RuleMultiCollapse::applyOp` (ruleaction.cc:3253).
        // Collapses a MULTIEQUAL whose inputs are all absolutely or functionally
        // equal (the latter via cseFindInBlock).  This is the keystone for
        // spill/reload folding: two per-branch `COPY(reg)` inputs of a phi are
        // functionally equal and get CSE'd into one copy, emptying the COPY
        // blocks so the CFG can structure into `&&`/`||`.

        let numinput = op_num_input(data, op);
        let mut func_eq = false; // Start assuming absolute equality of branches
        let mut nofunc = false; // Functional equalities are initially allowed
        let mut defcopyr: Option<VarnodeId> = None;

        // Find base branch to match (first input not written by a MULTIEQUAL).
        for i in 0..numinput {
            let copyr = op_in(data, op, i).expect("RuleMultiCollapse: null input");
            let is_multi = vn_is_written(data, copyr)
                && op_code(data, vn_def(data, copyr).expect("written vn has def"))
                    == OpCode::CPUI_MULTIEQUAL;
            if !is_multi {
                defcopyr = Some(copyr);
                break;
            }
        }

        let outvn = op_out(data, op).expect("RuleMultiCollapse: MULTIEQUAL has no output");
        let first = match defcopyr {
            Some(def) => Some((def, false)),
            None => (0..numinput)
                .filter_map(|i| op_in(data, op, i))
                .find(|&vn| vn != outvn && !vn_is_mark(data, vn))
                .map(|vn| (vn, true)),
        };
        if first.is_some_and(|(def, nofunc)| self.fails_again(op, data, outvn, def, nofunc)) {
            return 0;
        }
        for i in 0..numinput {
            let vi = op_in(data, op, i).expect("RuleMultiCollapse: null input");
            if !vn_is_heritage_known(data, vi) {
                return 0; // Everything must be heritaged before collapse
            }
        }

        let mut success = true;
        vn_set_mark(data, outvn);
        let mut skiplist: SmallVec<[VarnodeId; 8]> = SmallVec::new();
        skiplist.push(outvn);

        // C++ `matchlist` as (op, next slot, input count, parent run, parent
        // slot) runs: nothing writes an input during the walk, so a slot read
        // when reached is the value upstream copied.
        let mut matchlist: SmallVec<[(OpId, int4, int4, usize, int4); 8]> = SmallVec::new();
        if numinput > 0 {
            matchlist.push((op, 0, numinput, 0, 0));
        }
        let mut j = 0usize;
        let mut stop: Option<(usize, int4)> = None;

        while j < matchlist.len() {
            let run = j;
            let (from, slot, end, _, _) = matchlist[j];
            if slot + 1 == end {
                j += 1;
            } else {
                matchlist[j].1 = slot + 1;
            }
            let copyr = op_in(data, from, slot).expect("RuleMultiCollapse: null input");
            if vn_is_mark(data, copyr) {
                continue; // A varnode we have seen before (loop construct) — skip
            }
            let Some(def) = defcopyr else {
                // This is now the defining branch; all others must match.
                // MULTIEQUAL and unwritten branches cannot match by functional equal.
                defcopyr = Some(copyr);
                nofunc = match vn_def(data, copyr) {
                    Some(d) if vn_is_written(data, copyr) => {
                        op_code(data, d) == OpCode::CPUI_MULTIEQUAL
                    }
                    _ => true,
                };
                continue;
            };
            match multi_branch(data, copyr, outvn, def, nofunc) {
                MultiBranch::Skip => {}
                MultiBranch::Match => func_eq |= copyr != def,
                MultiBranch::Expand(newop) => {
                    // A non-matching MULTIEQUAL branch gets one last chance: its
                    // inputs join the list of things to match.
                    skiplist.push(copyr);
                    vn_set_mark(data, copyr);
                    let newin = op_num_input(data, newop);
                    if newin > 0 {
                        matchlist.push((newop, 0, newin, run, slot));
                    }
                }
                MultiBranch::Mismatch => {
                    success = false;
                    stop = Some((run, slot));
                    break;
                }
            }
        }

        if success {
            let defcopyr = defcopyr.expect("RuleMultiCollapse: success implies a defining branch");
            // C++ iterates `skiplist` (fixed at this point — the collapse body never
            // pushes to it). These copied IDs do not borrow or alias `data`.
            for copyr in skiplist.iter().copied() {
                vn_clear_mark(data, copyr);
                let cur_op = vn_def(data, copyr).expect("skiplist varnode must be written");
                if func_eq {
                    // We have only functional equality.
                    let parent = data
                        .obank()
                        .get(cur_op)
                        .expect("stale op")
                        .get_parent()
                        .expect("op parent");
                    let earliest = data.block_earliest_use(parent, copyr);
                    let newop = vn_def(data, defcopyr).expect("defcopyr must be written");
                    // Has newop already been copied in this block?
                    let mut substitute: Option<OpId> = None;
                    let newin = op_num_input(data, newop);
                    for i in 0..newin {
                        let invn = op_in(data, newop, i).expect("newop null input");
                        if !vn_is_constant(data, invn) {
                            substitute = data.cse_find_in_block(newop, invn, parent, earliest);
                            break;
                        }
                    }
                    if let Some(substitute) = substitute {
                        // Already copied: use the copy's output as substitute.
                        let subout = op_out(data, substitute).expect("substitute has no output");
                        data.total_replace(copyr, subout)
                            .expect("RuleMultiCollapse: totalReplace");
                        data.op_destroy(cur_op);
                    } else {
                        // Otherwise, rewrite cur_op into a copy of newop.
                        let needsreinsert = op_code(data, cur_op) == OpCode::CPUI_MULTIEQUAL;
                        let mut parms: SmallVec<[VarnodeId; 8]> =
                            SmallVec::with_capacity(newin as usize);
                        for i in 0..newin {
                            parms.push(op_in(data, newop, i).expect("newop null input"));
                        }
                        data.op_set_all_input(cur_op, &parms)
                            .expect("RuleMultiCollapse: opSetAllInput");
                        set_opcode(data, cur_op, op_code(data, newop));
                        if needsreinsert {
                            // If the op is no longer a MULTIEQUAL, re-insert it after
                            // any other MULTIEQUAL at the block head.
                            let bl = data
                                .obank()
                                .get(cur_op)
                                .expect("stale op")
                                .get_parent()
                                .expect("op parent");
                            data.op_uninsert(cur_op);
                            data.op_insert_begin(cur_op, bl);
                        }
                    }
                } else {
                    // We have absolute equality: replace all refs to copyr with
                    // defcopyr and destroy the MULTIEQUAL.
                    data.total_replace(copyr, defcopyr)
                        .expect("RuleMultiCollapse: totalReplace");
                    data.op_destroy(cur_op);
                }
            }
            return 1;
        }

        // Failure: clear out any marks we put down.
        for v in skiplist.iter().copied() {
            vn_clear_mark(data, v);
        }
        if let Some((mut run, slot)) = stop {
            let mut path: SmallVec<[(OpId, int4); 4]> = SmallVec::new();
            path.push((matchlist[run].0, slot));
            while run != 0 {
                let (_, _, _, parent, parent_slot) = matchlist[run];
                path.push((matchlist[parent].0, parent_slot));
                run = parent;
            }
            path.reverse();
            self.witness.insert(op, path);
        }
        0
    }
}

// =============================================================================
// RuleSborrow (ruleaction.cc:3364)
// =============================================================================

/// `RuleSborrow` — simplify signed comparisons using `INT_SBORROW` (C++
/// `RuleSborrow`).
#[derive(Clone, Default)]
pub struct RuleSborrow;

impl Rule for RuleSborrow {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_SBORROW]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleSborrow))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        // (svn/avn are dereferenced only in the descend loop below, so read them
        // after the trivial-case early-out — the C++ never touches getOut() on
        // the trivial path either.)
        let bvn = op_in(data, op, 1).expect("RuleSborrow: null in1");
        // Check for trivial case: sborrow(V,0) => false
        if vn_is_constant(data, bvn) && vn_offset(data, bvn) == 0 {
            set_opcode(data, op, OpCode::CPUI_COPY);
            let z = data.new_constant(1, 0);
            data.op_set_input(op, z, 0)
                .expect("RuleSborrow: opSetInput");
            data.op_remove_input(op, 1);
            return 1;
        }
        let svn = op_out(data, op).expect("RuleSborrow: null out");
        let avn = op_in(data, op, 0).expect("RuleSborrow: null in0");
        let descend: Vec<OpId> = data
            .vbank()
            .get(svn)
            .map(|v| v.descend_iter().collect())
            .unwrap_or_default();
        for compop in descend {
            let compc = op_code(data, compop);
            if compc != OpCode::CPUI_INT_EQUAL && compc != OpCode::CPUI_INT_NOTEQUAL {
                continue;
            }
            let comp_in0 = op_in(data, compop, 0).expect("RuleSborrow: null compop in0");
            let cvn = if comp_in0 == svn {
                op_in(data, compop, 1).expect("RuleSborrow: null compop in1")
            } else {
                comp_in0
            };
            if !vn_is_written(data, cvn) {
                continue;
            }
            let signop = vn_def(data, cvn).expect("RuleSborrow: written cvn has no def");
            if op_code(data, signop) != OpCode::CPUI_INT_SLESS {
                continue;
            }
            let sign_in0 = op_in(data, signop, 0).expect("RuleSborrow: null signop in0");
            let sign_in1 = op_in(data, signop, 1).expect("RuleSborrow: null signop in1");
            let zside: int4 = if !constant_match(data, sign_in0, 0) {
                if !constant_match(data, sign_in1, 0) {
                    continue;
                }
                1
            } else {
                0
            };
            let xvn = op_in(data, signop, 1 - zside).expect("RuleSborrow: null signop xvn");
            if !vn_is_written(data, xvn) {
                continue;
            }
            let mut expr1 = AddExpression::new();
            expr1.gather_two_terms_subtract(avn, bvn, data.vbank(), data.obank());
            let mut expr2 = AddExpression::new();
            expr2.gather_two_terms_root(xvn, data.vbank(), data.obank());
            if !expr1.is_equivalent(&expr2, data.vbank(), data.obank()) {
                continue;
            }
            if compc == OpCode::CPUI_INT_NOTEQUAL {
                // Replace all this with simple less than
                set_opcode(data, compop, OpCode::CPUI_INT_SLESS);
                data.op_set_input(compop, avn, 1 - zside)
                    .expect("RuleSborrow: opSetInput");
                data.op_set_input(compop, bvn, zside)
                    .expect("RuleSborrow: opSetInput");
            } else {
                set_opcode(data, compop, OpCode::CPUI_INT_SLESSEQUAL);
                data.op_set_input(compop, avn, zside)
                    .expect("RuleSborrow: opSetInput");
                data.op_set_input(compop, bvn, 1 - zside)
                    .expect("RuleSborrow: opSetInput");
            }
            return 1;
        }
        0
    }
}

// =============================================================================
// RuleScarry (ruleaction.cc:3433)
// =============================================================================

/// `RuleScarry` — simplify signed comparisons using `INT_SCARRY` (C++
/// `RuleScarry`).
#[derive(Clone, Default)]
pub struct RuleScarry;

impl Rule for RuleScarry {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_SCARRY]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleScarry))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        // (svn is dereferenced only in the descend loop below, so read it after
        // the trivial-case early-out — the C++ never touches getOut() there.)
        let mut avn = op_in(data, op, 0).expect("RuleScarry: null in0");
        let mut bvn = op_in(data, op, 1).expect("RuleScarry: null in1");

        // Check for trivial case: scarry(V,0) => false (either operand zero)
        if (vn_is_constant(data, bvn) && vn_offset(data, bvn) == 0)
            || (vn_is_constant(data, avn) && vn_offset(data, avn) == 0)
        {
            set_opcode(data, op, OpCode::CPUI_COPY);
            let z = data.new_constant(1, 0);
            data.op_set_input(op, z, 0).expect("RuleScarry: opSetInput");
            data.op_remove_input(op, 1);
            return 1;
        }
        let svn = op_out(data, op).expect("RuleScarry: null out");
        // One side must be constant.
        if !vn_is_constant(data, bvn) {
            if !vn_is_constant(data, avn) {
                return 0;
            }
            // Swap so bvn is the constant.
            avn = bvn;
            bvn = op_in(data, op, 0).expect("RuleScarry: null in0");
            let mask = calc_mask(vn_size(data, bvn));
            let val = mask ^ (mask >> 1);
            if val == vn_offset(data, bvn) {
                return 0; // Rule does not work if bvn is the integer minimum
            }
        }
        let descend: Vec<OpId> = data
            .vbank()
            .get(svn)
            .map(|v| v.descend_iter().collect())
            .unwrap_or_default();
        for compop in descend {
            let compc = op_code(data, compop);
            if compc != OpCode::CPUI_INT_EQUAL && compc != OpCode::CPUI_INT_NOTEQUAL {
                continue;
            }
            let comp_in0 = op_in(data, compop, 0).expect("RuleScarry: null compop in0");
            let cvn = if comp_in0 == svn {
                op_in(data, compop, 1).expect("RuleScarry: null compop in1")
            } else {
                comp_in0
            };
            if !vn_is_written(data, cvn) {
                continue;
            }
            let signop = vn_def(data, cvn).expect("RuleScarry: written cvn has no def");
            if op_code(data, signop) != OpCode::CPUI_INT_SLESS {
                continue;
            }
            let sign_in0 = op_in(data, signop, 0).expect("RuleScarry: null signop in0");
            let sign_in1 = op_in(data, signop, 1).expect("RuleScarry: null signop in1");
            let zside: int4 = if !constant_match(data, sign_in0, 0) {
                if !constant_match(data, sign_in1, 0) {
                    continue;
                }
                1
            } else {
                0
            };
            let xvn = op_in(data, signop, 1 - zside).expect("RuleScarry: null signop xvn");
            if !vn_is_written(data, xvn) {
                continue;
            }
            let mut expr1 = AddExpression::new();
            expr1.gather_two_terms_add(avn, bvn, data.vbank(), data.obank());
            let mut expr2 = AddExpression::new();
            expr2.gather_two_terms_root(xvn, data.vbank(), data.obank());
            if !expr1.is_equivalent(&expr2, data.vbank(), data.obank()) {
                continue;
            }
            let bsize = vn_size(data, bvn);
            let newval = (0u64.wrapping_sub(vn_offset(data, bvn))) & calc_mask(bsize);
            let new_const = data.new_constant(bsize, newval);

            if compc == OpCode::CPUI_INT_NOTEQUAL {
                set_opcode(data, compop, OpCode::CPUI_INT_SLESS);
                data.op_set_input(compop, avn, 1 - zside)
                    .expect("RuleScarry: opSetInput");
                data.op_set_input(compop, new_const, zside)
                    .expect("RuleScarry: opSetInput");
            } else {
                set_opcode(data, compop, OpCode::CPUI_INT_SLESSEQUAL);
                data.op_set_input(compop, avn, zside)
                    .expect("RuleScarry: opSetInput");
                data.op_set_input(compop, new_const, 1 - zside)
                    .expect("RuleScarry: opSetInput");
            }
            return 1;
        }
        0
    }
}

// =============================================================================
// RuleTrivialShift (ruleaction.cc:3515)
// =============================================================================

/// `RuleTrivialShift` — `V << 0 => V`, `V << #64 => 0` (C++ `RuleTrivialShift`).
#[derive(Clone, Default)]
pub struct RuleTrivialShift;

impl Rule for RuleTrivialShift {
    fn get_op_list(&self) -> Vec<OpCode> {
        // { CPUI_INT_LEFT, CPUI_INT_RIGHT, CPUI_INT_SRIGHT }
        vec![
            OpCode::CPUI_INT_LEFT,
            OpCode::CPUI_INT_RIGHT,
            OpCode::CPUI_INT_SRIGHT,
        ]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleTrivialShift))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let constvn = op_in(data, op, 1).expect("RuleTrivialShift: null in1");
        if !vn_is_constant(data, constvn) {
            return 0; // Must shift by a constant
        }
        let val = vn_offset(data, constvn);
        if val != 0 {
            let in0 = op_in(data, op, 0).expect("RuleTrivialShift: null in0");
            if val < (8 * vn_size(data, in0)) as uintb {
                return 0;
            }
            if op_code(data, op) == OpCode::CPUI_INT_SRIGHT {
                return 0; // Cant predict signbit
            }
            let replace = data.new_constant(vn_size(data, in0), 0);
            data.op_set_input(op, replace, 0)
                .expect("RuleTrivialShift: opSetInput");
        }
        data.op_remove_input(op, 1);
        set_opcode(data, op, OpCode::CPUI_COPY);
        1
    }
}

// =============================================================================
// RuleSignShift (ruleaction.cc:3543)
// =============================================================================

/// `RuleSignShift` — normalize sign-bit extraction `V >> 0x1f => (V s>> 0x1f) *
/// -1` when it feeds arithmetic/comparison (C++ `RuleSignShift`).
#[derive(Clone, Default)]
pub struct RuleSignShift;

impl Rule for RuleSignShift {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_RIGHT]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleSignShift))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let const_vn = op_in(data, op, 1).expect("RuleSignShift: null in1");
        if !vn_is_constant(data, const_vn) {
            return 0;
        }
        let val = vn_offset(data, const_vn);
        let in_vn = op_in(data, op, 0).expect("RuleSignShift: null in0");
        if val != (8 * vn_size(data, in_vn) - 1) as uintb {
            return 0;
        }
        if vn_is_free(data, in_vn) {
            return 0;
        }

        let mut do_conversion = false;
        let out_vn = op_out(data, op).expect("RuleSignShift: op out");
        // while iterating descendants: a re-entrant-safe snapshot (the C++ holds a
        // live const_iterator it pre-increments; we snapshot the descend list).
        for arith_op in data.descend_snapshot(out_vn) {
            match op_code(data, arith_op) {
                OpCode::CPUI_INT_EQUAL | OpCode::CPUI_INT_NOTEQUAL => {
                    let a1 = op_in(data, arith_op, 1).expect("RuleSignShift: arithOp in1");
                    if vn_is_constant(data, a1) {
                        do_conversion = true;
                    }
                }
                OpCode::CPUI_INT_ADD | OpCode::CPUI_INT_MULT => {
                    do_conversion = true;
                }
                _ => {}
            }
            if do_conversion {
                break;
            }
        }
        if !do_conversion {
            return 0;
        }
        let opaddr = data
            .obank()
            .get(op)
            .expect("RuleSignShift: stale op")
            .get_addr()
            .clone();
        let shift_op = data.new_op(2, opaddr);
        set_opcode(data, shift_op, OpCode::CPUI_INT_SRIGHT);
        let unique_vn = data
            .new_unique_out_unlaned(vn_size(data, in_vn), shift_op)
            .expect("newUniqueOut");
        data.op_set_input(op, unique_vn, 0)
            .expect("RuleSignShift: opSetInput");
        let mask = data.new_constant(vn_size(data, in_vn), calc_mask(vn_size(data, in_vn)));
        data.op_set_input(op, mask, 1)
            .expect("RuleSignShift: opSetInput");
        set_opcode(data, op, OpCode::CPUI_INT_MULT);
        data.op_set_input(shift_op, in_vn, 0)
            .expect("RuleSignShift: opSetInput");
        data.op_set_input(shift_op, const_vn, 1)
            .expect("RuleSignShift: opSetInput");
        data.op_insert_before(shift_op, op);
        1
    }
}

// =============================================================================
// RuleTestSign (ruleaction.cc:3601)
// =============================================================================

/// `RuleTestSign` — convert a sign-bit test to a signed comparison `(V s>> 0x1f)
/// != 0 => V s< 0` (C++ `RuleTestSign`).
#[derive(Clone, Default)]
pub struct RuleTestSign;

impl RuleTestSign {
    /// `RuleTestSign::findComparisons` (ruleaction.cc:3615): trace `vn` to the
    /// `INT_EQUAL`/`INT_NOTEQUAL` ops that compare it to a constant.
    fn find_comparisons(data: &Funcdata, vn: VarnodeId, res: &mut Vec<OpId>) {
        for cmpop in data.descend_snapshot(vn) {
            let opc = op_code(data, cmpop);
            if opc == OpCode::CPUI_INT_EQUAL || opc == OpCode::CPUI_INT_NOTEQUAL {
                let c1 = op_in(data, cmpop, 1).expect("RuleTestSign: cmp in1");
                if vn_is_constant(data, c1) {
                    res.push(cmpop);
                }
            }
        }
    }
}

impl Rule for RuleTestSign {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_SRIGHT]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleTestSign))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let const_vn = op_in(data, op, 1).expect("RuleTestSign: null in1");
        if !vn_is_constant(data, const_vn) {
            return 0;
        }
        let val = vn_offset(data, const_vn);
        let in_vn = op_in(data, op, 0).expect("RuleTestSign: null in0");
        if val != (8 * vn_size(data, in_vn) - 1) as uintb {
            return 0;
        }
        let out_vn = op_out(data, op).expect("RuleTestSign: op out");

        if vn_is_free(data, in_vn) {
            return 0;
        }
        let mut compare_ops: Vec<OpId> = Vec::new();
        Self::find_comparisons(data, out_vn, &mut compare_ops);
        let mut result_code = 0;
        for compare_op in compare_ops {
            let comp_vn = op_in(data, compare_op, 0).expect("RuleTestSign: comp in0");
            let comp_size = vn_size(data, comp_vn);

            let offset = vn_offset(
                data,
                op_in(data, compare_op, 1).expect("RuleTestSign: comp in1"),
            );
            let mut sgn: int4 = if offset == 0 {
                1
            } else if offset == calc_mask(comp_size) {
                -1
            } else {
                continue;
            };
            if op_code(data, compare_op) == OpCode::CPUI_INT_NOTEQUAL {
                sgn = -sgn; // Complement the domain
            }

            let zero_vn = data.new_constant(vn_size(data, in_vn), 0);
            if sgn == 1 {
                data.op_set_input(compare_op, in_vn, 1)
                    .expect("RuleTestSign: opSetInput");
                data.op_set_input(compare_op, zero_vn, 0)
                    .expect("RuleTestSign: opSetInput");
                set_opcode(data, compare_op, OpCode::CPUI_INT_SLESSEQUAL);
            } else {
                data.op_set_input(compare_op, in_vn, 0)
                    .expect("RuleTestSign: opSetInput");
                data.op_set_input(compare_op, zero_vn, 1)
                    .expect("RuleTestSign: opSetInput");
                set_opcode(data, compare_op, OpCode::CPUI_INT_SLESS);
            }
            result_code = 1;
        }
        result_code
    }
}

// =============================================================================
// RuleIdentityEl (ruleaction.cc:3678)
// =============================================================================

/// `RuleIdentityEl` — collapse operations using their identity element `V + 0 =>
/// V`, `V * 1 => V`, etc. (C++ `RuleIdentityEl`).
#[derive(Clone, Default)]
pub struct RuleIdentityEl;

impl Rule for RuleIdentityEl {
    fn get_op_list(&self) -> Vec<OpCode> {
        // { CPUI_INT_ADD, CPUI_INT_XOR, CPUI_INT_OR, CPUI_BOOL_XOR, CPUI_BOOL_OR, CPUI_INT_MULT }
        vec![
            OpCode::CPUI_INT_ADD,
            OpCode::CPUI_INT_XOR,
            OpCode::CPUI_INT_OR,
            OpCode::CPUI_BOOL_XOR,
            OpCode::CPUI_BOOL_OR,
            OpCode::CPUI_INT_MULT,
        ]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleIdentityEl))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let constvn = op_in(data, op, 1).expect("RuleIdentityEl: null in1");
        if !vn_is_constant(data, constvn) {
            return 0;
        }
        let val = vn_offset(data, constvn);
        if (val == 0) && (op_code(data, op) != OpCode::CPUI_INT_MULT) {
            set_opcode(data, op, OpCode::CPUI_COPY);
            data.op_remove_input(op, 1); // Remove identity from operation
            return 1;
        }
        if op_code(data, op) != OpCode::CPUI_INT_MULT {
            return 0;
        }
        if val == 1 {
            set_opcode(data, op, OpCode::CPUI_COPY);
            data.op_remove_input(op, 1);
            return 1;
        }
        if val == 0 {
            // Multiply by zero
            set_opcode(data, op, OpCode::CPUI_COPY);
            data.op_remove_input(op, 0);
            return 1;
        }
        0
    }
}

// =============================================================================
// RuleShift2Mult (ruleaction.cc:3723)
// =============================================================================

/// `RuleShift2Mult` — `V << 2 => V * 4` when the result feeds arithmetic (C++
/// `RuleShift2Mult`).
#[derive(Clone, Default)]
pub struct RuleShift2Mult;

impl Rule for RuleShift2Mult {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_LEFT]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleShift2Mult))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let mut flag = 0;
        let vn = op_out(data, op).expect("RuleShift2Mult: op out");
        let constvn = op_in(data, op, 1).expect("RuleShift2Mult: null in1");
        if !vn_is_constant(data, constvn) {
            return 0; // Shift amount must be a constant
        }
        let val = vn_offset(data, constvn) as int4;
        if val >= 32 {
            // FIXME: arbitrary -- this big is probably not an arithmetic multiply
            return 0;
        }
        let in0 = op_in(data, op, 0).expect("RuleShift2Mult: null in0");
        let mut arithop = vn_def(data, in0);
        // C++: the loop probes arithop then steps desc.
        let descend = data.descend_snapshot(vn);
        let mut desc_idx = 0;
        loop {
            if let Some(ao) = arithop {
                let opc = op_code(data, ao);
                if opc == OpCode::CPUI_INT_ADD
                    || opc == OpCode::CPUI_INT_SUB
                    || opc == OpCode::CPUI_INT_MULT
                {
                    flag = 1;
                    break;
                }
            }
            if desc_idx == descend.len() {
                break;
            }
            arithop = Some(descend[desc_idx]);
            desc_idx += 1;
        }

        if flag == 0 {
            return 0;
        }
        let newconst = data.new_constant(vn_size(data, vn), 1u64 << val);
        data.op_set_input(op, newconst, 1)
            .expect("RuleShift2Mult: opSetInput");
        set_opcode(data, op, OpCode::CPUI_INT_MULT);
        1
    }
}

// =============================================================================
// RuleShiftPiece (ruleaction.cc:3772)
// =============================================================================

/// `RuleShiftPiece` — convert "shift and add" to `PIECE`:
/// `(zext(V) << 16) + zext(W) => concat(V,W)` (C++ `RuleShiftPiece`).
#[derive(Clone, Default)]
pub struct RuleShiftPiece;

impl Rule for RuleShiftPiece {
    fn get_op_list(&self) -> Vec<OpCode> {
        // push_back INT_OR, INT_XOR, INT_ADD (in this order)
        vec![
            OpCode::CPUI_INT_OR,
            OpCode::CPUI_INT_XOR,
            OpCode::CPUI_INT_ADD,
        ]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleShiftPiece))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let mut vn1 = op_in(data, op, 0).expect("RuleShiftPiece: null in0");
        if !vn_is_written(data, vn1) {
            return 0;
        }
        let mut vn2 = op_in(data, op, 1).expect("RuleShiftPiece: null in1");
        if !vn_is_written(data, vn2) {
            return 0;
        }
        let mut shiftop = vn_def(data, vn1).expect("RuleShiftPiece: vn1 def");
        let mut zextloop = vn_def(data, vn2).expect("RuleShiftPiece: vn2 def");
        if op_code(data, shiftop) != OpCode::CPUI_INT_LEFT {
            if op_code(data, zextloop) != OpCode::CPUI_INT_LEFT {
                return 0;
            }
            std::mem::swap(&mut zextloop, &mut shiftop);
        }
        let shin1 = op_in(data, shiftop, 1).expect("RuleShiftPiece: shiftop in1");
        if !vn_is_constant(data, shin1) {
            return 0;
        }
        vn1 = op_in(data, shiftop, 0).expect("RuleShiftPiece: shiftop in0");
        if !vn_is_written(data, vn1) {
            return 0;
        }
        let zexthiop = vn_def(data, vn1).expect("RuleShiftPiece: vn1 def");
        if op_code(data, zexthiop) != OpCode::CPUI_INT_ZEXT
            && op_code(data, zexthiop) != OpCode::CPUI_INT_SEXT
        {
            return 0;
        }
        vn1 = op_in(data, zexthiop, 0).expect("RuleShiftPiece: zexthiop in0");
        if vn_is_constant(data, vn1) {
            if (vn_size(data, vn1) as usize) < std::mem::size_of::<uintb>() {
                return 0; // Normally we let ZEXT of a constant collapse naturally
            }
            // But if the ZEXTed constant is too big, this won't happen
        } else if vn_is_free(data, vn1) {
            return 0;
        }
        let sa = vn_offset(data, shin1) as int4;
        let concatsize = sa + 8 * vn_size(data, vn1);
        let op_out_size = vn_size(data, op_out(data, op).expect("RuleShiftPiece: op out"));
        if op_out_size * 8 < concatsize {
            return 0;
        }
        if op_code(data, zextloop) != OpCode::CPUI_INT_ZEXT {
            // Special case triggered by CDQ: IDIV (interacts with RuleSubZext)
            if !vn_is_written(data, vn1) {
                return 0;
            }
            let r_shift_op = vn_def(data, vn1).expect("RuleShiftPiece: vn1 def");
            if op_code(data, r_shift_op) != OpCode::CPUI_INT_SRIGHT {
                return 0;
            }
            let rsh1 = op_in(data, r_shift_op, 1).expect("RuleShiftPiece: rShiftOp in1");
            if !vn_is_constant(data, rsh1) {
                return 0;
            }
            vn2 = op_in(data, r_shift_op, 0).expect("RuleShiftPiece: rShiftOp in0");
            if !vn_is_written(data, vn2) {
                return 0;
            }
            let subop = vn_def(data, vn2).expect("RuleShiftPiece: vn2 def");
            if op_code(data, subop) != OpCode::CPUI_SUBPIECE {
                return 0; // SUBPIECE connects high and low parts
            }
            if vn_offset(
                data,
                op_in(data, subop, 1).expect("RuleShiftPiece: subop in1"),
            ) != 0
            {
                return 0; // (must be low part)
            }
            let big_vn = op_out(data, zextloop).expect("RuleShiftPiece: zextloop out");
            if op_in(data, subop, 0) != Some(big_vn) {
                return 0; // Verify we have link thru SUBPIECE with low part
            }
            let rsa = vn_offset(data, rsh1) as int4;
            if rsa != vn_size(data, vn2) * 8 - 1 {
                return 0; // Arithmetic shift must copy sign-bit thru whole high part
            }
            if (vn_nzmask(data, big_vn) >> sa) != 0 {
                return 0; // The original most significant bytes must be zero
            }
            if sa != 8 * vn_size(data, vn2) {
                return 0;
            }
            set_opcode(data, op, OpCode::CPUI_INT_SEXT); // Original op is sign extension of low part
            data.op_set_input(op, vn2, 0)
                .expect("RuleShiftPiece: opSetInput");
            data.op_remove_input(op, 1);
            return 1;
        }
        vn2 = op_in(data, zextloop, 0).expect("RuleShiftPiece: zextloop in0");
        if vn_is_free(data, vn2) {
            return 0;
        }
        if sa != 8 * vn_size(data, vn2) {
            return 0;
        }
        if concatsize == op_out_size * 8 {
            set_opcode(data, op, OpCode::CPUI_PIECE);
            data.op_set_input(op, vn1, 0)
                .expect("RuleShiftPiece: opSetInput");
            data.op_set_input(op, vn2, 1)
                .expect("RuleShiftPiece: opSetInput");
        } else {
            let opaddr = data
                .obank()
                .get(op)
                .expect("RuleShiftPiece: stale op")
                .get_addr()
                .clone();
            let newop = data.new_op(2, opaddr);
            data.new_unique_out_unlaned(concatsize / 8, newop)
                .expect("newUniqueOut");
            set_opcode(data, newop, OpCode::CPUI_PIECE);
            data.op_set_input(newop, vn1, 0)
                .expect("RuleShiftPiece: opSetInput");
            data.op_set_input(newop, vn2, 1)
                .expect("RuleShiftPiece: opSetInput");
            data.op_insert_before(newop, op);
            let zext_code = op_code(data, zexthiop);
            set_opcode(data, op, zext_code);
            data.op_remove_input(op, 1);
            let newout = op_out(data, newop).expect("RuleShiftPiece: newop out");
            data.op_set_input(op, newout, 0)
                .expect("RuleShiftPiece: opSetInput");
        }
        1
    }
}

// =============================================================================
// RuleCollapseConstants (ruleaction.cc:3871)
// =============================================================================

/// `RuleCollapseConstants` — collapse a constant expression to a `COPY` of the
/// computed constant (C++ `RuleCollapseConstants`).
#[derive(Clone, Default)]
pub struct RuleCollapseConstants;

impl Rule for RuleCollapseConstants {
    // applies to all opcodes (no getOpList override)

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleCollapseConstants))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let collapsible = {
            let o = data
                .obank()
                .get(op)
                .expect("RuleCollapseConstants: stale op");
            crate::op::is_collapsible(o, data.vbank())
        };
        if !collapsible {
            return 0;
        }
        if op_code(data, op) == OpCode::CPUI_INT_ADD
            && crate::globalarrayanchor::preserve_array_base(data, op)
        {
            return 0;
        }
        //   op->collapse() drives the OpBehavior emulation (executeSimple) on the
        //   op's constant inputs; getArch()->getConstant wraps the result in a
        //   constant-space Address.  On any evaluation error the C++ catches the
        //   LowlevelError and `opMarkNoCollapse`s the op (latching the failure).
        let (collapsed, marked_input) = match dc_collapse(op, data) {
            Some(v) => v,
            None => {
                // opMarkNoCollapse(op): don't know how / don't want to collapse.
                data.op_mark_no_collapse(op);
                return 0;
            }
        };
        let out_size = data
            .vbank()
            .get(data.obank().get(op).unwrap().get_out().unwrap())
            .unwrap()
            .get_size();
        let newval = data.get_arch().get_constant(collapsed);
        let vn = data.new_varnode(out_size, &newval, None);
        // collapseConstantSymbol(vn): when a constant input carried a bound
        // (dynamic) SymbolEntry, propagate the markup onto the new collapsed
        // constant (C++ `PcodeOp::collapseConstantSymbol`, op.cc:528).  This is
        // load-bearing for an equate that lands on a constant which is then
        // size-folded (e.g. the convert `L'a'` force_char equate, mapped onto a
        // size-8 char constant that the CALL-arg sizing truncates to size-4):
        // without the propagation the late `findVarnode` cannot re-locate the
        // re-sized constant and the forced display format is dropped.
        if marked_input {
            collapse_constant_symbol(op, vn, data);
        }
        let n = data
            .obank()
            .get(op)
            .expect("RuleCollapseConstants: stale op")
            .num_input();
        let mut i = n - 1;
        while i > 0 {
            data.op_remove_input(op, i);
            i -= 1;
        }
        data.op_set_input(op, vn, 0)
            .expect("RuleCollapseConstants: opSetInput");
        data.op_set_opcode(op, crate::typeop::type_op_for(OpCode::CPUI_COPY));
        1
    }
}

/// C++ `PcodeOp::collapse(bool &markedInput)` (op.cc:473): assuming every input
/// is constant, evaluate the op to its constant result via the engine's
/// [`OpBehavior`](unlace_num::opbehavior::OpBehavior) table.  Returns
/// `Some((value, markedInput))` on success, `None` if the op cannot be
/// constant-folded (the C++ throws `LowlevelError` -> caught -> opMarkNoCollapse).
///
/// `markedInput` mirrors the C++ "one of the inputs carries symbol info"
/// pass-back: it is set when a constant input has a bound (dynamic) SymbolEntry
/// (`vn->getSymbolEntry() != 0`), so [`RuleCollapseConstants`] knows to propagate
/// the markup onto the collapsed constant.
fn dc_collapse(op: OpId, data: &Funcdata) -> Option<(u64, bool)> {
    let (eval_type, opc, num_input, in0, in1, out_size) = {
        let o = data.obank().get(op).expect("collapse: stale op");
        let out = o.get_out().expect("collapse: collapsible op has no output");
        let out_size = data
            .vbank()
            .get(out)
            .expect("collapse: stale out")
            .get_size();
        let n = o.num_input();
        // get_in panics on an out-of-range slot, so guard slot 1 by num_input
        // (the C++ `getIn(1)` is only reached in the `binary` arm).
        let in1 = if n > 1 { o.get_in(1) } else { None };
        (o.get_eval_type(), o.code(), n, o.get_in(0), in1, out_size)
    };
    let _ = num_input;
    let behave = data.get_arch().op_behavior(opc)?;
    let in0 = in0?;
    let (in0_size, in0_off) = {
        let v = data.vbank().get(in0).expect("collapse: stale in0");
        (v.get_size(), v.get_offset())
    };
    let mut marked_input = data
        .vbank()
        .get(in0)
        .and_then(|v| v.unlace_symbol_entry())
        .is_some();
    if (eval_type & pcodeop_flags::unary) != 0 {
        match behave.evaluate_unary(out_size, in0_size, in0_off) {
            Ok(v) => Some((v, marked_input)),
            Err(_) => None, // LowlevelError -> opMarkNoCollapse
        }
    } else if (eval_type & pcodeop_flags::binary) != 0 {
        let in1 = in1?;
        // C++: checked only on the binary path.
        if data
            .vbank()
            .get(in1)
            .and_then(|v| v.unlace_symbol_entry())
            .is_some()
        {
            marked_input = true;
        }
        let in1_off = data
            .vbank()
            .get(in1)
            .expect("collapse: stale in1")
            .get_offset();
        match behave.evaluate_binary(out_size, in0_size, in0_off, in1_off) {
            Ok(v) => Some((v, marked_input)),
            Err(_) => None,
        }
    } else {
        // default: throw LowlevelError("Invalid constant collapse")
        None
    }
}

/// C++ `PcodeOp::collapseConstantSymbol` (op.cc:528): the op just collapsed its
/// constant inputs (one carrying symbol content); figure out whether the symbol
/// should propagate to the new output constant `new_const`.
///
/// Selects the marked input (`copyVn`) by opcode exactly as the C++, then calls
/// the [`copy_symbol_if_valid`] equate-close check.  Opcodes not listed in the
/// C++ switch leave the new constant unmarked.
fn collapse_constant_symbol(op: OpId, new_const: VarnodeId, data: &mut Funcdata) {
    let (code, in0, in1) = {
        let o = data
            .obank()
            .get(op)
            .expect("collapseConstantSymbol: stale op");
        (
            o.code(),
            o.get_in(0),
            if o.num_input() > 1 { o.get_in(1) } else { None },
        )
    };
    let has_sym = |v: Option<VarnodeId>| -> bool {
        v.and_then(|x| data.vbank().get(x))
            .and_then(|x| x.unlace_symbol_entry())
            .is_some()
    };
    let copy_vn: Option<VarnodeId> = match code {
        OpCode::CPUI_SUBPIECE => {
            // Must be truncating the high bytes: getIn(1)->getOffset() == 0.
            let off1 = in1
                .and_then(|v| data.vbank().get(v))
                .map(|v| v.get_offset())
                .unwrap_or(1);
            if off1 != 0 {
                return; // truncating low bytes -- do not propagate
            }
            in0
        }
        OpCode::CPUI_COPY
        | OpCode::CPUI_INT_ZEXT
        | OpCode::CPUI_INT_NEGATE
        | OpCode::CPUI_INT_2COMP
        | OpCode::CPUI_INT_LEFT
        | OpCode::CPUI_INT_RIGHT
        | OpCode::CPUI_INT_SRIGHT => in0, // marked varnode must be first input
        OpCode::CPUI_INT_ADD
        | OpCode::CPUI_INT_MULT
        | OpCode::CPUI_INT_AND
        | OpCode::CPUI_INT_OR
        | OpCode::CPUI_INT_XOR => {
            if has_sym(in0) {
                in0
            } else {
                in1
            }
        }
        OpCode::CPUI_PIECE => {
            // Only a zero high half keeps the low half's value, so its equate carries over.
            let hi = in0
                .and_then(|v| data.vbank().get(v))
                .map(|v| v.get_offset())
                .unwrap_or(1);
            if hi != 0 {
                return;
            }
            in1
        }
        _ => return, // default: not a symbol-propagating collapse
    };
    let copy_vn = match copy_vn {
        Some(v) if has_sym(Some(v)) => v,
        _ => return,
    };
    data.copy_symbol_if_valid(new_const, copy_vn);
}

// =============================================================================
// RuleTransformCpool (ruleaction.cc:3903)
// =============================================================================

/// `RuleTransformCpool` — resolve a `CPOOLREF` against the constant pool (C++
/// `RuleTransformCpool`).
#[derive(Clone, Default)]
pub struct RuleTransformCpool;

impl Rule for RuleTransformCpool {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_CPOOLREF]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleTransformCpool))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if data
            .obank()
            .get(op)
            .expect("RuleTransformCpool: stale op")
            .is_cpool_transformed()
        {
            return 0;
        }
        data.obank_mut()
            .get_mut(op)
            .expect("RuleTransformCpool: stale op")
            .set_additional_flag(crate::op::pcodeop_addlflags::is_cpool_transformed);
        let refs: Vec<uintb> = (1..op_num_input(data, op))
            .filter_map(|i| op_in(data, op, i))
            .map(|vn| {
                data.vbank()
                    .get(vn)
                    .expect("RuleTransformCpool: stale vn")
                    .get_offset()
            })
            .collect();
        let Some(rec) = data.get_arch().cpool_record(&refs) else {
            return 1;
        };
        if rec.get_tag() == crate::cpool::cpool_tag::INSTANCE_OF {
            data.op_mark_calculated_bool(op);
        } else if rec.get_tag() == crate::cpool::cpool_tag::PRIMITIVE {
            let out = data
                .obank()
                .get(op)
                .and_then(|o| o.get_out())
                .expect("RuleTransformCpool: no output");
            let sz = data
                .vbank()
                .get(out)
                .expect("RuleTransformCpool: stale out")
                .get_size();
            let cvn = data.new_constant(sz, rec.get_value() & calc_mask(sz));
            if let Some(ty) = rec.get_type() {
                data.vbank_mut()
                    .get_mut(cvn)
                    .expect("RuleTransformCpool: stale constant")
                    .update_type_locked(std::rc::Rc::clone(ty), true, true);
            }
            while op_num_input(data, op) > 1 {
                data.op_remove_input(op, op_num_input(data, op) - 1);
            }
            data.op_set_opcode_code(op, OpCode::CPUI_COPY);
            data.op_set_input(op, cvn, 0)
                .expect("RuleTransformCpool: opSetInput");
            return 1;
        }
        let tag = data.new_constant(4, uintb::from(rec.get_tag()));
        let slot = op_num_input(data, op);
        data.op_insert_input(op, tag, slot)
            .expect("RuleTransformCpool: opInsertInput");
        1
    }
}

// =============================================================================
// RulePropagateCopy (ruleaction.cc:3943)
// =============================================================================

/// `RulePropagateCopy` — propagate a `COPY`'s input to all readers of its output
/// (C++ `RulePropagateCopy`).
#[derive(Clone, Default)]
pub struct RulePropagateCopy;

impl Rule for RulePropagateCopy {
    // applies to all opcodes (no getOpList override)

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RulePropagateCopy))
    }

    fn replaces_inputs_only(&self) -> bool {
        true
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let (return_copy, machine_read) = {
            let operation = data.obank().get(op).expect("RulePropagateCopy: stale op");
            (
                operation.is_return_copy(),
                operation.get_addlflags() & crate::op::pcodeop_addlflags::unlace_stack_read != 0,
            )
        };
        if machine_read {
            crate::stackreadscope::record_current_read(data, op);
        }
        if return_copy {
            return 0;
        }
        let n = op_num_input(data, op);
        for i in 0..n {
            let vn = op_in(data, op, i).expect("RulePropagateCopy: null input");
            if !vn_is_written(data, vn) {
                continue; // Varnode must be written to
            }
            let copyop = vn_def(data, vn).expect("RulePropagateCopy: written vn no def");
            if op_code(data, copyop) != OpCode::CPUI_COPY {
                continue; // not a propagating instruction
            }
            let invn = op_in(data, copyop, 0).expect("RulePropagateCopy: copyop in0");
            if !vn_is_heritage_known(data, invn) {
                continue; // Don't propagate free's away from their first use
            }
            // Preserve explicit pointer declarations across integer storage so
            // address recovery also sees dynamically computed pointers.
            if data.vbank().get(vn).is_some_and(|value| {
                value.is_type_lock()
                    && value.get_type().get_metatype() == crate::dtype::type_metatype::TYPE_PTR
                    && data.get_scope_local().is_some_and(|scope| {
                        scope.has_isolated_symbols()
                            && scope
                                .query_container_for_link(value.get_addr(), &data.vn_use_point(vn))
                                .is_some_and(|entry| entry.is_isolated)
                    })
            }) {
                continue;
            }
            if crate::stablenames::is_retyped_definition(data, vn) {
                continue;
            }
            // (unlace) a store of a value used as an address into a global keeps
            // its COPY; see [`crate::pointeestorekeep`].
            if crate::pointeestorekeep::declines(data, op, vn, invn) {
                continue;
            }
            if invn == vn {
                // throw LowlevelError("Self-defined varnode") -- internal invariant.
                panic!("RulePropagateCopy: Self-defined varnode");
            }
            if crate::globalcallstore::declines(data, op, vn, invn) {
                continue;
            }
            if crate::globalorderkeep::declines(data, op, vn, invn) {
                continue;
            }
            // (unlace) a store of a sign-sensitively read value into a global
            // keeps its COPY; see [`crate::globalstorekeep`].
            if crate::globalstorekeep::declines(data, op, vn, invn) {
                continue;
            }
            let is_marker = data
                .obank()
                .get(op)
                .expect("RulePropagateCopy: stale op")
                .is_marker();
            if is_marker && crate::globalfieldstore::keeps_store(data, vn, invn) {
                continue;
            }
            if !is_marker
                && (crate::indexaliasguard::keeps_store_before_load(data, op, vn)
                    || crate::indexaliasguard::keeps_forced_self_copy(data, op, vn))
            {
                continue;
            }
            if is_marker
                && (crate::localstackviews::publication(data, vn)
                    || crate::localstackviews::native_store(data, vn))
            {
                continue;
            }
            if is_marker {
                if vn_is_constant(data, invn) {
                    continue; // Don't propagate constants into markers
                }
                if data
                    .vbank()
                    .get(vn)
                    .expect("RulePropagateCopy: stale vn")
                    .is_addr_force()
                {
                    continue; // Don't propagate if we are keeping the COPY anyway
                }
                if crate::indexaliasguard::keeps_store_guard_input(data, op, vn) {
                    continue;
                }
                // STUB(W3-varnode): the addrtied merge-safety guard reads
                // invn->isAddrTied(), op->getOut()->isAddrTied(), and the two
                // addresses.  isAddrTied is available; the address comparison is a
                // straight Address::!=.  We transcribe it faithfully.
                let invn_addrtied = data
                    .vbank()
                    .get(invn)
                    .expect("RulePropagateCopy: stale invn")
                    .is_addr_tied();
                let out = op_out(data, op).expect("RulePropagateCopy: marker out");
                let out_addrtied = data
                    .vbank()
                    .get(out)
                    .expect("RulePropagateCopy: stale out")
                    .is_addr_tied();
                if invn_addrtied && out_addrtied {
                    let out_addr = data
                        .vbank()
                        .get(out)
                        .expect("RulePropagateCopy: stale out")
                        .get_addr()
                        .clone();
                    let invn_addr = data
                        .vbank()
                        .get(invn)
                        .expect("RulePropagateCopy: stale invn")
                        .get_addr()
                        .clone();
                    if out_addr != invn_addr {
                        continue; // We must not allow merging of different addrtieds
                    }
                }
                // (unlace) The address-tied store brake widens the addrforce refusal
                // just above: decline when this marker is the LAST reader of an
                // address-tied COPY output, which would otherwise strand the frame
                // store for dead-code elimination.  See
                // [`crate::tiedstorekeep`].
                if crate::tiedstorekeep::declines(data, op, vn, invn) {
                    continue;
                }
                // (unlace) The loop-counter store brake refuses the same
                // propagation for a self-updating address-tied phi, which is how
                // a frame-slot loop counter's write-back is deleted.  See
                // [`crate::loopcounterstore`].
                if crate::loopcounterstore::declines(data, op, vn, invn) {
                    continue;
                }
                if crate::indexaliasguard::keeps_store_before_load(data, op, vn) {
                    continue;
                }
                if op_code(data, op) == OpCode::CPUI_MULTIEQUAL {
                    let op_parent = data
                        .obank()
                        .get(op)
                        .expect("RulePropagateCopy: stale op")
                        .get_parent();
                    let copy_parent = data
                        .obank()
                        .get(copyop)
                        .expect("RulePropagateCopy: stale copyop")
                        .get_parent();
                    if let (Some(op_parent), Some(copy_parent)) = (op_parent, copy_parent) {
                        let in_blk = data.bblocks_ref().block(op_parent).get_in(i);
                        if copy_parent == in_blk {
                            data.op_set_copy_immed(op, i);
                        }
                    }
                }
            }
            crate::stackreadscope::record_propagated_read(data, copyop, invn);
            data.unlace_inherit_storage(invn, vn);
            data.note_wave_input_change(op, vn, invn);
            data.op_set_input(op, invn, i)
                .expect("RulePropagateCopy: opSetInput"); // propagate just a single copy
            return 1;
        }
        0
    }
}

// =============================================================================
// Rule2Comp2Mult (ruleaction.cc:3981)
// =============================================================================

/// `Rule2Comp2Mult` — eliminate `INT_2COMP`: `-V => V * -1` (C++
/// `Rule2Comp2Mult`).
#[derive(Clone, Default)]
pub struct Rule2Comp2Mult;

impl Rule for Rule2Comp2Mult {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_2COMP]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(Rule2Comp2Mult))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        set_opcode(data, op, OpCode::CPUI_INT_MULT);
        let size = vn_size(data, op_in(data, op, 0).expect("Rule2Comp2Mult: null in0"));
        let negone = data.new_constant(size, calc_mask(size));
        data.op_insert_input(op, negone, 1)
            .expect("Rule2Comp2Mult: opInsertInput");
        1
    }
}

// =============================================================================
// RuleCarryElim (ruleaction.cc:3999)
// =============================================================================

/// `RuleCarryElim` — transform `INT_CARRY` with a constant: `carry(V,c) => -c <=
/// V` (C++ `RuleCarryElim`).
#[derive(Clone, Default)]
pub struct RuleCarryElim;

impl Rule for RuleCarryElim {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_CARRY]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleCarryElim))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let vn2 = op_in(data, op, 1).expect("RuleCarryElim: null in1");
        if !vn_is_constant(data, vn2) {
            return 0;
        }
        let vn1 = op_in(data, op, 0).expect("RuleCarryElim: null in0");
        if vn_is_free(data, vn1) {
            return 0;
        }
        let mut off = vn_offset(data, vn2);
        if off == 0 {
            // Trivial case
            data.op_remove_input(op, 1); // Go down to 1 input
            let z = data.new_constant(1, 0);
            data.op_set_input(op, z, 0)
                .expect("RuleCarryElim: opSetInput"); // boolean "false" as input to COPY
            set_opcode(data, op, OpCode::CPUI_COPY);
            return 1;
        }
        // twos-complement
        off = off.wrapping_neg() & calc_mask(vn_size(data, vn2));

        set_opcode(data, op, OpCode::CPUI_INT_LESSEQUAL);
        data.op_set_input(op, vn1, 1)
            .expect("RuleCarryElim: opSetInput"); // Move other input to second position
        let newc = data.new_constant(vn_size(data, vn1), off);
        data.op_set_input(op, newc, 0)
            .expect("RuleCarryElim: opSetInput"); // new constant in first position
        1
    }
}

// =============================================================================
// RuleSub2Add (ruleaction.cc:4034)
// =============================================================================

/// `RuleSub2Add` — eliminate `INT_SUB`: `V - W => V + W * -1` (C++
/// `RuleSub2Add`).
#[derive(Clone, Default)]
pub struct RuleSub2Add;

impl Rule for RuleSub2Add {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_SUB]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleSub2Add))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let vn = op_in(data, op, 1).expect("RuleSub2Add: null in1"); // Parameter being subtracted
        let opaddr = data
            .obank()
            .get(op)
            .expect("RuleSub2Add: stale op")
            .get_addr()
            .clone();
        let newop = data.new_op(2, opaddr);
        set_opcode(data, newop, OpCode::CPUI_INT_MULT);
        let newvn = data
            .new_unique_out_unlaned(vn_size(data, vn), newop)
            .expect("newUniqueOut");
        data.op_set_input(op, newvn, 1)
            .expect("RuleSub2Add: opSetInput"); // Replace vn's reference first
        data.op_set_input(newop, vn, 0)
            .expect("RuleSub2Add: opSetInput");
        let negone = data.new_constant(vn_size(data, vn), calc_mask(vn_size(data, vn)));
        data.op_set_input(newop, negone, 1)
            .expect("RuleSub2Add: opSetInput");
        set_opcode(data, op, OpCode::CPUI_INT_ADD);
        data.op_insert_before(newop, op);
        1
    }
}

// =============================================================================
// RuleXorCollapse (ruleaction.cc:4060)
// =============================================================================

/// `RuleXorCollapse` — eliminate `INT_XOR` in comparisons: `(V ^ W) == 0 => V ==
/// W`, `(V ^ c) == d => V == (c^d)` (C++ `RuleXorCollapse`).
#[derive(Clone, Default)]
pub struct RuleXorCollapse;

impl Rule for RuleXorCollapse {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_EQUAL, OpCode::CPUI_INT_NOTEQUAL]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleXorCollapse))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let in1 = op_in(data, op, 1).expect("RuleXorCollapse: null in1");
        if !vn_is_constant(data, in1) {
            return 0;
        }
        let in0 = op_in(data, op, 0).expect("RuleXorCollapse: null in0");
        let xorop = match vn_def(data, in0) {
            Some(o) => o,
            None => return 0,
        };
        if op_code(data, xorop) != OpCode::CPUI_INT_XOR {
            return 0;
        }
        if data.lone_descend(in0).is_none() {
            return 0;
        }
        let coeff1 = vn_offset(data, in1);
        let xorvn = op_in(data, xorop, 1).expect("RuleXorCollapse: xorop in1");
        let xor0 = op_in(data, xorop, 0).expect("RuleXorCollapse: xorop in0");
        if vn_is_free(data, xor0) {
            return 0; // This will be propagated
        }
        if !vn_is_constant(data, xorvn) {
            if coeff1 != 0 {
                return 0;
            }
            if vn_is_free(data, xorvn) {
                return 0;
            }
            data.op_set_input(op, xorvn, 1)
                .expect("RuleXorCollapse: opSetInput"); // Move term to other side
            data.op_set_input(op, xor0, 0)
                .expect("RuleXorCollapse: opSetInput");
            return 1;
        }
        let coeff2 = vn_offset(data, xorvn);
        if coeff2 == 0 {
            return 0;
        }
        let constvn = data.new_constant(vn_size(data, in1), coeff1 ^ coeff2);
        // STUB(W6): constvn->copySymbolIfValid(xorvn) -- the symbol-entry copy is
        // the W6 TypeFactory/symbol surface; the constant value (coeff1^coeff2) is
        // ported, the symbol annotation is skipped.  Recorded as a loss.
        data.op_set_input(op, constvn, 1)
            .expect("RuleXorCollapse: opSetInput");
        data.op_set_input(op, xor0, 0)
            .expect("RuleXorCollapse: opSetInput");
        1
    }
}

// =============================================================================
// RuleAddMultCollapse (ruleaction.cc:4101)
// =============================================================================

/// `RuleAddMultCollapse` — collapse nested constants in an additive/
/// multiplicative expression `((V + c) + d) => V + (c+d)` (C++
/// `RuleAddMultCollapse`).
#[derive(Clone, Default)]
pub struct RuleAddMultCollapse;

impl Rule for RuleAddMultCollapse {
    fn get_op_list(&self) -> Vec<OpCode> {
        // { CPUI_INT_ADD, CPUI_INT_MULT }
        vec![OpCode::CPUI_INT_ADD, OpCode::CPUI_INT_MULT]
    }

    fn clone_rule(&self, _grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        // C++ `clone`: returns null iff the rule's group is not in `grouplist`.
        // The rule's group lives in the engine-owned `RuleState` (not in this
        // zero-sized marker), and the pool only holds rules whose group W8
        // enabled, so the clone is unconditional here.  See module docs.
        Some(Box::new(RuleAddMultCollapse))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let opc = op_code(data, op);
        // Constant is in c[0], other is in sub
        let c0 = op_in(data, op, 1).expect("RuleAddMultCollapse: null in1");
        if !vn_is_constant(data, c0) {
            return 0; // Neither input is a constant
        }
        let sub = op_in(data, op, 0).expect("RuleAddMultCollapse: null in0");
        // Find other constant one level down
        if !vn_is_written(data, sub) {
            return 0;
        }
        let subop = vn_def(data, sub).expect("RuleAddMultCollapse: sub def");
        if op_code(data, subop) != opc {
            return 0; // Must be same exact operation
        }
        if opc == OpCode::CPUI_INT_ADD && crate::globalarrayanchor::preserve_array_base(data, op) {
            return 0;
        }
        let mut c1 = op_in(data, subop, 1).expect("RuleAddMultCollapse: subop in1");
        if !vn_is_constant(data, c1) {
            // a = ((stackbase + c[1]) + othervn) + c[0] => (stackbase + c0 + c1) + othervn
            if opc != OpCode::CPUI_INT_ADD {
                return 0;
            }
            for i in 0..2 {
                let othervn = op_in(data, subop, i).expect("RuleAddMultCollapse: subop in");
                if vn_is_constant(data, othervn) {
                    continue;
                }
                if vn_is_free(data, othervn) {
                    continue;
                }
                let sub2 = op_in(data, subop, 1 - i).expect("RuleAddMultCollapse: subop in 1-i");
                if !vn_is_written(data, sub2) {
                    continue;
                }
                let baseop = vn_def(data, sub2).expect("RuleAddMultCollapse: sub2 def");
                if op_code(data, baseop) != OpCode::CPUI_INT_ADD {
                    continue;
                }
                c1 = op_in(data, baseop, 1).expect("RuleAddMultCollapse: baseop in1");
                if !vn_is_constant(data, c1) {
                    continue;
                }
                let basevn = op_in(data, baseop, 0).expect("RuleAddMultCollapse: baseop in0");
                // Only apply if we are adding to a base pointer (input spacebase)
                if !data
                    .vbank()
                    .get(basevn)
                    .expect("RuleAddMultCollapse: stale basevn")
                    .is_spacebase()
                {
                    continue;
                }
                if !data
                    .vbank()
                    .get(basevn)
                    .expect("RuleAddMultCollapse: stale basevn")
                    .is_input()
                {
                    continue; // because this adds a new add operation
                }

                let c0sz = vn_size(data, c0);
                let val = eval_binary(opc, c0sz, vn_offset(data, c0), vn_offset(data, c1));
                let newvn = data.new_constant(c0sz, val);
                // STUB(W6): copySymbolIfValid(c0 or c1) -- symbol-entry copy skipped.
                let opaddr = data
                    .obank()
                    .get(op)
                    .expect("RuleAddMultCollapse: stale op")
                    .get_addr()
                    .clone();
                let newop = data.new_op(2, opaddr);
                set_opcode(data, newop, OpCode::CPUI_INT_ADD);
                let newout = data
                    .new_unique_out_unlaned(c0sz, newop)
                    .expect("newUniqueOut");
                data.op_set_input(newop, basevn, 0)
                    .expect("RuleAddMultCollapse: opSetInput");
                data.op_set_input(newop, newvn, 1)
                    .expect("RuleAddMultCollapse: opSetInput");
                data.op_insert_before(newop, op);
                data.op_set_input(op, newout, 0)
                    .expect("RuleAddMultCollapse: opSetInput");
                data.op_set_input(op, othervn, 1)
                    .expect("RuleAddMultCollapse: opSetInput");
                return 1;
            }
            return 0;
        }
        let sub2 = op_in(data, subop, 0).expect("RuleAddMultCollapse: subop in0");
        if vn_is_free(data, sub2) {
            return 0;
        }

        let c0sz = vn_size(data, c0);
        let val = eval_binary(opc, c0sz, vn_offset(data, c0), vn_offset(data, c1));
        let newvn = data.new_constant(c0sz, val);
        // STUB(W6): copySymbolIfValid(c0 or c1) -- symbol-entry copy skipped.
        data.op_set_input(op, newvn, 1)
            .expect("RuleAddMultCollapse: opSetInput"); // Replace c0 with c0(+|*)c1
        data.op_set_input(op, sub2, 0)
            .expect("RuleAddMultCollapse: opSetInput"); // Replace sub with sub2
        1
    }
}

/// `op->getOpcode()->evaluateBinary(sizeout,sizein,in1,in2)` for the two opcodes
/// RuleAddMultCollapse folds constants for (`INT_ADD`, `INT_MULT`).
///
/// STUB(W6): the real path dispatches through the op's `OpBehavior`.  For these
/// two pure-arithmetic opcodes the behavior is fully determined by the opcode, so
/// the unlace_num `OpBehavior` for that opcode is invoked directly (faithful, no
/// invented behavior — `OpBehaviorIntAdd`/`OpBehaviorIntMult` are the same
/// behaviors `glb->inst[opc]` would carry).
fn eval_binary(opc: OpCode, size: int4, in1: uintb, in2: uintb) -> uintb {
    use unlace_num::opbehavior::{OpBehavior, OpBehaviorIntAdd, OpBehaviorIntMult};
    match opc {
        OpCode::CPUI_INT_ADD => OpBehaviorIntAdd
            .evaluate_binary(size, size, in1, in2)
            .expect("eval_binary: INT_ADD"),
        OpCode::CPUI_INT_MULT => OpBehaviorIntMult
            .evaluate_binary(size, size, in1, in2)
            .expect("eval_binary: INT_MULT"),
        other => panic!("RuleAddMultCollapse::eval_binary: unexpected opcode {other:?}"),
    }
}

// =============================================================================
// Registration (C++ definition order — W8 assembles universalAction from this)
// =============================================================================

/// The [`RuleSpec`] rows for this batch, in C++ definition order.
///
/// `group` is left empty here: the W8 assembly assigns the real stage group when
/// it places each rule into a pool (the C++ constructs every rule as
/// `RuleXxx(group)` with the group supplied by `universalAction`).  The `ctor`
/// builds a fresh zero-sized rule marker.
pub fn specs() -> Vec<RuleSpec> {
    vec![
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleBooleanDedup),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleBooleanNegate),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleBoolZext),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleLogic2Bool),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleIndirectCollapse),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleMultiCollapse::default()),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleSborrow),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleScarry),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleTrivialShift),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleSignShift),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleTestSign),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleIdentityEl),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleShift2Mult),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleShiftPiece),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleCollapseConstants),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleTransformCpool),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RulePropagateCopy),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(Rule2Comp2Mult),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleCarryElim),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleSub2Add),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleXorCollapse),
        },
        RuleSpec {
            group: "",
            ctor: || Box::new(RuleAddMultCollapse),
        },
    ]
}

#[cfg(test)]
mod tests;
