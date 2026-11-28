//! Fold a negated ordered comparison only when its NaN guards exclude unordered inputs.

use unlace_base::address::Address;
use unlace_num::opcodes::OpCode;

use crate::context::{OpId, VarnodeId};
use crate::expression::functional_equality;
use crate::funcdata::Funcdata;
use crate::op::pcodeop_addlflags::unlace_exactfloat;

fn copied_value(data: &Funcdata, mut vn: VarnodeId) -> VarnodeId {
    for _ in 0..6 {
        let Some(op) = data
            .vbank()
            .get(vn)
            .and_then(|v| v.get_def())
            .and_then(|id| data.obank().get(id))
        else {
            break;
        };
        if op.code() != OpCode::CPUI_COPY {
            break;
        }
        let Some(input) = op.get_in(0) else { break };
        if data.vbank().get(vn).unwrap().get_size() != data.vbank().get(input).unwrap().get_size() {
            break;
        }
        vn = input;
    }
    vn
}

fn instruction_load(data: &Funcdata, vn: VarnodeId) -> Option<(OpId, VarnodeId, VarnodeId)> {
    let id = data.vbank().get(vn)?.get_def()?;
    let op = data.obank().get(id)?;
    (op.code() == OpCode::CPUI_LOAD).then(|| (id, op.get_in(0).unwrap(), op.get_in(1).unwrap()))
}

fn reading_instruction(data: &Funcdata, vn: VarnodeId) -> Option<Address> {
    let mut readers = data.vbank().get(vn)?.descend_iter();
    let addr = data.obank().get(readers.next()?)?.get_addr().clone();
    readers
        .all(|id| *data.obank().get(id).unwrap().get_addr() == addr)
        .then_some(addr)
}

/// Two reads of one location by one instruction, with no store, call or write of it between them:
/// a pair of LOADs through one pointer, or two unheritaged reads of one memory varnode.
fn same_instruction_read(data: &Funcdata, x: VarnodeId, y: VarnodeId) -> bool {
    let (vx, vy) = (data.vbank().get(x).unwrap(), data.vbank().get(y).unwrap());
    if vx.get_size() != vy.get_size() {
        return false;
    }
    let addr = match (instruction_load(data, x), instruction_load(data, y)) {
        (Some((op1, space1, ptr1)), Some((op2, space2, ptr2))) => {
            let addr = data.obank().get(op1).unwrap().get_addr().clone();
            if addr != *data.obank().get(op2).unwrap().get_addr()
                || !functional_equality(space1, space2, data.vbank(), data.obank())
                || !functional_equality(ptr1, ptr2, data.vbank(), data.obank())
            {
                return false;
            }
            addr
        }
        (None, None)
            if vx.is_free()
                && vy.is_free()
                && !vx.is_constant()
                && vx.get_addr() == vy.get_addr() =>
        {
            match (reading_instruction(data, x), reading_instruction(data, y)) {
                (Some(ax), Some(ay)) if ax == ay => ax,
                _ => return false,
            }
        }
        _ => return false,
    };
    data.obank().iter_at(&addr).all(|(_, id)| {
        let op = data.obank().get(id).unwrap();
        op.is_dead()
            || !(op.is_call()
                || matches!(op.code(), OpCode::CPUI_STORE | OpCode::CPUI_CALLOTHER)
                || op
                    .get_out()
                    .is_some_and(|out| data.vbank().get(out).unwrap().intersects(vx)))
    })
}

fn or_leaves(data: &Funcdata, vn: VarnodeId, depth: usize, leaves: &mut Vec<VarnodeId>) -> bool {
    if depth == 0 || leaves.len() == 8 {
        return false;
    }
    if data
        .vbank()
        .get(vn)
        .is_some_and(|v| v.is_constant() && v.get_offset() == 0)
    {
        return true;
    }
    let Some(op) = data
        .vbank()
        .get(vn)
        .and_then(|v| v.get_def())
        .and_then(|id| data.obank().get(id))
    else {
        leaves.push(vn);
        return true;
    };
    if op.code() == OpCode::CPUI_COPY {
        return op
            .get_in(0)
            .is_some_and(|input| or_leaves(data, input, depth - 1, leaves));
    }
    if matches!(op.code(), OpCode::CPUI_BOOL_OR | OpCode::CPUI_INT_OR) {
        return (0..2).all(|slot| {
            op.get_in(slot)
                .is_some_and(|input| or_leaves(data, input, depth - 1, leaves))
        });
    }
    leaves.push(vn);
    true
}

fn same_value(data: &Funcdata, x: VarnodeId, y: VarnodeId) -> bool {
    let (x, y) = (copied_value(data, x), copied_value(data, y));
    functional_equality(x, y, data.vbank(), data.obank()) || same_instruction_read(data, x, y)
}

/// The inputs of the NaN tests an OR tree of them is made of, when every leaf is one.
fn nan_guards(data: &Funcdata, vn: VarnodeId) -> Option<Vec<VarnodeId>> {
    let mut leaves = Vec::new();
    if !or_leaves(data, vn, 6, &mut leaves) || leaves.is_empty() {
        return None;
    }
    leaves
        .iter()
        .map(|&leaf| {
            let op = data
                .vbank()
                .get(leaf)?
                .get_def()
                .and_then(|id| data.obank().get(id))?;
            if op.code() == OpCode::CPUI_FLOAT_NAN {
                op.get_in(0)
            } else {
                None
            }
        })
        .collect()
}

/// `input` is NaN-tested by one of `guards`, or is a constant that is not a NaN.
fn operand_guarded(data: &Funcdata, guards: &[VarnodeId], input: VarnodeId) -> bool {
    guards.iter().any(|&g| same_value(data, g, input))
        || data
            .vbank()
            .get(copied_value(data, input))
            .is_some_and(|v| {
                v.is_constant()
                    && v.get_size() <= 8
                    && data
                        .get_arch()
                        .get_float_format(v.get_size())
                        .is_some_and(|fmt| fmt.op_nan(v.get_offset()) == 0)
            })
}

/// `cmp == unordered` and `cmp != unordered`, where `cmp` is an ordered comparison of `a` and `b`
/// and `unordered` the OR of their NaN tests: AArch64's `N == V` (`ge`, `gt`) and `N != V`
/// (`lt`, `le`) after an FCMP. An ordered comparison is false on a NaN, so the two never hold
/// together: `!=` is `cmp || unordered` and `==` is the exact complement of that, `b <= a` for
/// `a < b`. Rewritten here, before `nanignore` would drop the NaN tests and leave `!(a < b)`.
fn fold_exclusive_guard(data: &mut Funcdata, op: OpId) -> bool {
    let Some(o) = data.obank().get(op) else {
        return false;
    };
    let code = o.code();
    if !matches!(
        code,
        OpCode::CPUI_INT_EQUAL
            | OpCode::CPUI_INT_NOTEQUAL
            | OpCode::CPUI_BOOL_XOR
            | OpCode::CPUI_INT_XOR
    ) {
        return false;
    }
    let (Some(i0), Some(i1)) = (o.get_in(0), o.get_in(1)) else {
        return false;
    };
    let bytes = |vn: VarnodeId| data.vbank().get(vn).map(|v| v.get_size());
    if bytes(i0) != Some(1) || bytes(i1) != Some(1) {
        return false;
    }
    for (cmp, guard) in [(i0, i1), (i1, i0)] {
        let Some(def) = data
            .vbank()
            .get(cmp)
            .and_then(|v| v.get_def())
            .and_then(|id| data.obank().get(id))
        else {
            continue;
        };
        let ordered = def.code();
        if !matches!(
            ordered,
            OpCode::CPUI_FLOAT_LESS | OpCode::CPUI_FLOAT_LESSEQUAL
        ) {
            continue;
        }
        let (Some(a), Some(b)) = (def.get_in(0), def.get_in(1)) else {
            continue;
        };
        let Some(guards) = nan_guards(data, guard) else {
            continue;
        };
        if guards
            .iter()
            .any(|&g| !same_value(data, g, a) && !same_value(data, g, b))
            || !operand_guarded(data, &guards, a)
            || !operand_guarded(data, &guards, b)
        {
            continue;
        }
        if code != OpCode::CPUI_INT_EQUAL {
            data.op_set_opcode(op, crate::typeop::seam_type_op_for(OpCode::CPUI_BOOL_OR));
            return true;
        }
        if reads_memory(data, a) || reads_memory(data, b) {
            return false;
        }
        let complement = if ordered == OpCode::CPUI_FLOAT_LESS {
            OpCode::CPUI_FLOAT_LESSEQUAL
        } else {
            OpCode::CPUI_FLOAT_LESS
        };
        data.op_set_opcode(op, crate::typeop::seam_type_op_for(complement));
        data.op_set_all_input(op, &[b, a])
            .expect("exclusive guard complement inputs");
        mark_exact(data, op);
        return true;
    }
    false
}

/// The exact complement of a guarded root: `lhs code rhs`.
struct Complement {
    code: OpCode,
    lhs: VarnodeId,
    rhs: VarnodeId,
    leaf: OpId,
}

fn guarded_complement(data: &Funcdata, root: VarnodeId) -> Option<Complement> {
    if !data
        .vbank()
        .get(root)
        .and_then(|v| v.get_def())
        .and_then(|id| data.obank().get(id))
        .is_some_and(|op| {
            matches!(
                op.code(),
                OpCode::CPUI_COPY | OpCode::CPUI_BOOL_OR | OpCode::CPUI_INT_OR
            )
        })
    {
        return None;
    }
    let mut leaves = Vec::new();
    if !or_leaves(data, root, 6, &mut leaves) || leaves.len() < 2 {
        return None;
    }
    let mut guards = Vec::new();
    let mut comparison = None;
    let mut equality = None;
    for vn in leaves {
        let id = data.vbank().get(vn).and_then(|v| v.get_def())?;
        let op = data.obank().get(id)?;
        match op.code() {
            OpCode::CPUI_FLOAT_NAN => guards.push(op.get_in(0).unwrap()),
            OpCode::CPUI_FLOAT_LESS | OpCode::CPUI_FLOAT_LESSEQUAL if comparison.is_none() => {
                comparison = Some((op.code(), op.get_in(0).unwrap(), op.get_in(1).unwrap(), id));
            }
            OpCode::CPUI_FLOAT_EQUAL if equality.is_none() => {
                equality = Some((op.get_in(0).unwrap(), op.get_in(1).unwrap()));
            }
            _ => return None,
        }
    }
    let (mut code, a, b, leaf) = comparison?;
    let same = |x, y| {
        let (x, y) = (copied_value(data, x), copied_value(data, y));
        functional_equality(x, y, data.vbank(), data.obank()) || same_instruction_read(data, x, y)
    };
    if let Some((x, y)) = equality {
        if code != OpCode::CPUI_FLOAT_LESS
            || !(same(a, x) && same(b, y) || same(a, y) && same(b, x))
        {
            return None;
        }
        code = OpCode::CPUI_FLOAT_LESSEQUAL;
    }
    if guards.is_empty() || guards.iter().any(|&g| !same(g, a) && !same(g, b)) {
        return None;
    }
    for input in [a, b] {
        let guarded = guards.iter().any(|&g| same(g, input));
        let non_nan_constant = data
            .vbank()
            .get(copied_value(data, input))
            .is_some_and(|v| {
                v.is_constant()
                    && v.get_size() <= 8
                    && data
                        .get_arch()
                        .get_float_format(v.get_size())
                        .is_some_and(|fmt| fmt.op_nan(v.get_offset()) == 0)
            });
        if !guarded && !non_nan_constant {
            return None;
        }
    }
    let code = if code == OpCode::CPUI_FLOAT_LESS {
        OpCode::CPUI_FLOAT_LESSEQUAL
    } else {
        OpCode::CPUI_FLOAT_LESS
    };
    Some(Complement {
        code,
        lhs: b,
        rhs: a,
        leaf,
    })
}

/// A comparison this module issued: it already decides the unordered case, so `RuleIgnoreNan`
/// must not drop a separate NaN test against it.
#[doc(hidden)]
pub fn is_exact(data: &Funcdata, op: OpId) -> bool {
    data.obank()
        .get(op)
        .is_some_and(|op| op.get_addlflags() & unlace_exactfloat != 0)
}

fn mark_exact(data: &mut Funcdata, op: OpId) {
    if let Some(op) = data.obank_mut().get_mut(op) {
        op.set_additional_flag(unlace_exactfloat);
    }
}

fn reads_memory(data: &Funcdata, vn: VarnodeId) -> bool {
    data.vbank()
        .get(vn)
        .is_some_and(|v| v.is_free() && !v.is_constant())
}

/// A second reader of an unheritaged memory read needs its own varnode.
fn operand_copy(data: &mut Funcdata, vn: VarnodeId) -> VarnodeId {
    if !reads_memory(data, vn) {
        return vn;
    }
    let v = data.vbank().get(vn).unwrap();
    let (size, addr) = (v.get_size(), v.get_addr().clone());
    data.new_varnode(size, &addr, None)
}

/// The complement, issued right after the guarded comparison so a memory operand is read
/// by the same instruction.
fn complement_at_leaf(data: &mut Funcdata, c: &Complement) -> VarnodeId {
    let addr = data.obank().get(c.leaf).unwrap().get_addr().clone();
    let op = data.new_op(2, addr);
    data.op_set_opcode(op, crate::typeop::seam_type_op_for(c.code));
    let result = data
        .new_unique_out(1, op)
        .expect("guarded complement output");
    let inputs = [operand_copy(data, c.lhs), operand_copy(data, c.rhs)];
    data.op_set_all_input(op, &inputs)
        .expect("guarded complement inputs");
    data.op_insert_after(op, c.leaf);
    mark_exact(data, op);
    result
}

fn combines(code: OpCode) -> bool {
    matches!(
        code,
        OpCode::CPUI_COPY
            | OpCode::CPUI_BOOL_OR
            | OpCode::CPUI_BOOL_AND
            | OpCode::CPUI_BOOL_XOR
            | OpCode::CPUI_INT_OR
            | OpCode::CPUI_INT_AND
            | OpCode::CPUI_INT_XOR
    )
}

/// `zext(flag) << n`: the flag becomes one bit of a status word that later folds back into a
/// boolean expression with the word's other bits.
fn packs_bits(data: &Funcdata, op: &crate::op::PcodeOp) -> bool {
    op.code() == OpCode::CPUI_INT_ZEXT
        && op.get_out().is_some_and(|out| {
            data.vbank()
                .get(out)
                .unwrap()
                .descend_iter()
                .any(|id| data.obank().get(id).unwrap().code() == OpCode::CPUI_INT_LEFT)
        })
}

/// Every live reader consumes the value itself rather than combining it with other booleans,
/// whose remaining NaN guards `nanignore` may still strip.
fn consumed_directly(data: &Funcdata, vn: VarnodeId) -> bool {
    let mut live = false;
    for reader in data.vbank().get(vn).unwrap().descend_iter() {
        let op = data.obank().get(reader).unwrap();
        if op.get_out().is_some_and(|out| {
            data.vbank()
                .get(out)
                .unwrap()
                .descend_iter()
                .next()
                .is_none()
        }) {
            continue;
        }
        if combines(op.code()) || packs_bits(data, op) {
            return false;
        }
        live = true;
    }
    live
}

/// `!(NAN(a) || NAN(b) || a <= b)` is exactly `b < a`, including NaNs.
#[doc(hidden)]
pub fn fold_guarded_negate(data: &mut Funcdata, negate: OpId) -> bool {
    let Some(op) = data.obank().get(negate) else {
        return false;
    };
    if op.code() != OpCode::CPUI_BOOL_NEGATE {
        return false;
    }
    let Some(root) = op.get_in(0) else {
        return false;
    };
    let Some(c) = guarded_complement(data, root) else {
        return false;
    };
    if reads_memory(data, c.lhs) || reads_memory(data, c.rhs) {
        let result = complement_at_leaf(data, &c);
        data.op_set_opcode(negate, crate::typeop::seam_type_op_for(OpCode::CPUI_COPY));
        data.op_set_all_input(negate, &[result])
            .expect("guarded float complement copy");
        return true;
    }
    data.op_set_opcode(negate, crate::typeop::seam_type_op_for(c.code));
    data.op_set_all_input(negate, &[c.lhs, c.rhs])
        .expect("guarded float complement inputs");
    mark_exact(data, negate);
    true
}

fn fold_guarded_branch(data: &mut Funcdata, branch: OpId) -> bool {
    let op = data.obank().get(branch).unwrap();
    let Some(root) = op.get_in(1) else {
        return false;
    };
    let Some(c) = guarded_complement(data, root) else {
        return false;
    };
    let result = if reads_memory(data, c.lhs) || reads_memory(data, c.rhs) {
        complement_at_leaf(data, &c)
    } else {
        let addr = data.obank().get(branch).unwrap().get_addr().clone();
        let comparison = data.new_op(2, addr);
        data.op_set_opcode(comparison, crate::typeop::seam_type_op_for(c.code));
        let result = data
            .new_unique_out(1, comparison)
            .expect("guarded branch output");
        data.op_set_all_input(comparison, &[c.lhs, c.rhs])
            .expect("guarded branch inputs");
        data.op_insert_before(comparison, branch);
        mark_exact(data, comparison);
        result
    };
    data.op_set_input(branch, result, 1)
        .expect("guarded branch condition");
    data.op_flip_condition(branch);
    true
}

/// `NAN(a) || NAN(b) || a <= b` is exactly `!(b < a)`: rewrite the root in place when its
/// readers consume it directly.
fn fold_guarded_root(data: &mut Funcdata, root: VarnodeId) -> bool {
    if !consumed_directly(data, root) {
        return false;
    }
    let Some(def) = data.vbank().get(root).and_then(|v| v.get_def()) else {
        return false;
    };
    let Some(c) = guarded_complement(data, root) else {
        return false;
    };
    let result = complement_at_leaf(data, &c);
    data.op_set_opcode(
        def,
        crate::typeop::seam_type_op_for(OpCode::CPUI_BOOL_NEGATE),
    );
    data.op_set_all_input(def, &[result])
        .expect("guarded root negation");
    true
}

/// Preserve the exact guarded complement before `nanignore` discards its guards.
///
/// Roots are visited outermost first, so `CF || ZF` folds before the `CF` it reads.
#[doc(hidden)]
pub fn fold_nan_consumers(data: &mut Funcdata, nan: OpId) -> bool {
    let Some(out) = data.obank().get(nan).and_then(|op| op.get_out()) else {
        return false;
    };
    let mut roots: Vec<(VarnodeId, usize)> = Vec::new();
    let mut pending = vec![(out, 0)];
    for _ in 0..32 {
        let Some((vn, depth)) = pending.pop() else {
            break;
        };
        if depth == 6 {
            continue;
        }
        for reader in data.vbank().get(vn).unwrap().descend_iter().take(32) {
            let op = data.obank().get(reader).unwrap();
            if !matches!(
                op.code(),
                OpCode::CPUI_COPY | OpCode::CPUI_BOOL_OR | OpCode::CPUI_INT_OR
            ) {
                continue;
            }
            let Some(next) = op.get_out() else { continue };
            match roots.iter_mut().find(|(seen, _)| *seen == next) {
                Some((_, seen)) if *seen > depth => continue,
                Some((_, seen)) => *seen = depth + 1,
                None => roots.push((next, depth + 1)),
            }
            pending.push((next, depth + 1));
        }
    }
    roots.sort_by_key(|x| std::cmp::Reverse(x.1));
    let mut changed = false;
    let sources: Vec<VarnodeId> = std::iter::once(out)
        .chain(roots.iter().map(|(r, _)| *r))
        .collect();
    for vn in sources {
        for reader in data.descend_snapshot(vn) {
            changed |= fold_exclusive_guard(data, reader);
        }
    }
    for (root, _) in roots {
        if guarded_complement(data, root).is_none() {
            continue;
        }
        for reader in data.descend_snapshot(root) {
            match data.obank().get(reader).unwrap().code() {
                OpCode::CPUI_BOOL_NEGATE => changed |= fold_guarded_negate(data, reader),
                OpCode::CPUI_CBRANCH => changed |= fold_guarded_branch(data, reader),
                _ => {}
            }
        }
        changed |= fold_guarded_root(data, root);
    }
    changed
}
