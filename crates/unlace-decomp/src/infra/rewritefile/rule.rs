//! The generic rule a checked rewrite runs as.
//!
//! [`RewriteRule::apply_op`] is offered every op of the pattern's root
//! opcode. It matches the pattern against the op and what its inputs are
//! written by, checks the sizes the file could not, and then turns the op
//! into the replacement: new ops for the inner nodes go in front of it, and
//! the op itself takes the replacement's root opcode and inputs, or becomes a
//! `COPY` when the replacement is a capture or a constant. An op the pattern
//! matched below the root is removed when nothing reads it any more.

use std::fmt;
use std::rc::Rc;

use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use super::sizes::{Build, BuildNode, Match, MatchNode, Program, Shape, Size, float_operands};
use crate::action::{ActionGroupList, Rule};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::ruleaction_1::RuleEarlyRemoval;

/// One rule of a rewrite rule file.
#[derive(Clone)]
pub struct RewriteRule {
    name: String,
    group: String,
    program: Rc<Program>,
}

impl fmt::Debug for RewriteRule {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.debug_struct("RewriteRule")
            .field("name", &self.name)
            .field("group", &self.group)
            .finish_non_exhaustive()
    }
}

impl RewriteRule {
    pub(super) fn new(name: String, group: String, program: Program) -> Self {
        Self {
            name,
            group,
            program: Rc::new(program),
        }
    }

    /// The rule's name in the file, which is its name in the rule pool.
    pub fn name(&self) -> &str {
        &self.name
    }

    /// The group the rule is added behind and belongs to.
    pub fn group(&self) -> &str {
        &self.group
    }
}

/// What a match found: the Varnode at each pattern node, and the Varnode
/// each capture holds.
#[derive(Clone)]
struct Found {
    nodes: Vec<VarnodeId>,
    captures: Vec<Option<VarnodeId>>,
}

impl Found {
    /// The size of `node` for this match. A pattern node this is asked for
    /// has its Varnode, and a size taken from another node names an earlier
    /// one.
    fn size(&self, program: &Program, node: usize, data: &Funcdata) -> Option<i32> {
        match program.sizes[node] {
            Size::Fixed(size) => Some(size),
            Size::Of(other) => data.vbank().get(self.nodes[other]).map(|v| v.get_size()),
        }
    }
}

/// Match every `(pattern node, Varnode)` pair of `goals`, last first. An op
/// node adds its inputs as goals; a commutative op is tried with its two
/// inputs in either order, and `found` is put back before the second try.
fn solve(
    program: &Program,
    mut goals: Vec<(&MatchNode, VarnodeId)>,
    data: &Funcdata,
    found: &mut Found,
) -> bool {
    let Some((node, vn)) = goals.pop() else {
        return true;
    };
    let Some(varnode) = data.vbank().get(vn) else {
        return false;
    };
    found.nodes[node.node] = vn;
    let size = varnode.get_size();
    if found.size(program, node.node, data) != Some(size) {
        return false;
    }
    let (code, inputs) = match &node.kind {
        Match::Capture { slot } => {
            let same = match found.captures[*slot] {
                None => {
                    found.captures[*slot] = Some(vn);
                    true
                }
                Some(held) => held == vn || same_constant(data, held, vn),
            };
            return same && solve(program, goals, data, found);
        }
        Match::Const(value) => {
            let equal = varnode.is_constant() && value.bits(size) == Some(varnode.get_offset());
            return equal && solve(program, goals, data, found);
        }
        Match::Masked { value, mask } => {
            let equal = varnode.is_constant() && size <= 8 && varnode.get_offset() & mask == *value;
            return equal && solve(program, goals, data, found);
        }
        Match::Op { code, inputs } => (*code, inputs),
    };
    let Some(op) = varnode
        .get_def()
        .filter(|_| varnode.is_written())
        .and_then(|def| data.obank().get(def))
    else {
        return false;
    };
    if op.code() != code || op.num_input() as usize != inputs.len() {
        return false;
    }
    let orders: &[[usize; 2]] = if inputs.len() == 2 && op.is_commutative() {
        &[[0, 1], [1, 0]]
    } else {
        &[[0, 1]]
    };
    for order in orders {
        let mut next = goals.clone();
        for (input, &slot) in inputs.iter().zip(order).rev() {
            let Some(operand) = op.get_in(slot as int4) else {
                return false;
            };
            next.push((input, operand));
        }
        let before = found.clone();
        if solve(program, next, data, found) {
            return true;
        }
        *found = before;
    }
    false
}

/// Whether `a` and `b` are constants of one size and value. Each read of a
/// constant has its own Varnode, so two reads of one constant are not the
/// same Varnode.
fn same_constant(data: &Funcdata, a: VarnodeId, b: VarnodeId) -> bool {
    let constant = |vn| {
        data.vbank()
            .get(vn)
            .filter(|v| v.is_constant())
            .map(|v| (v.get_size(), v.get_offset()))
    };
    constant(a).is_some() && constant(a) == constant(b)
}

/// A replacement node with its size worked out for one match.
struct Sized<'a> {
    node: &'a BuildNode,
    size: i32,
    inputs: Vec<Sized<'a>>,
}

impl RewriteRule {
    /// Match the pattern at `op`.
    fn find(&self, op: OpId, data: &Funcdata) -> Option<Found> {
        let program = &*self.program;
        let out = data.obank().get(op)?.get_out()?;
        let mut found = Found {
            nodes: vec![out; program.replacement.node],
            captures: vec![None; program.captures],
        };
        solve(program, vec![(&program.pattern, out)], data, &mut found).then_some(found)
    }

    /// Give every node of the replacement its size for this match. `None`
    /// when a size the file left open does not fit its op, or when a capture
    /// cannot be read in a new place.
    fn sized<'a>(&self, node: &'a BuildNode, found: &Found, data: &Funcdata) -> Option<Sized<'a>> {
        let size = found.size(&self.program, node.node, data)?;
        let inputs = match &node.kind {
            Build::Capture { slot } => {
                // Outside SSA form the storage can be written between the
                // read the pattern saw and the one the replacement makes.
                let held = data.vbank().get(found.captures[*slot]?)?;
                if !held.is_heritage_known() {
                    return None;
                }
                Vec::new()
            }
            Build::Const(value) => {
                value.bits(size)?;
                Vec::new()
            }
            Build::Op {
                code,
                shape,
                inputs,
            } => {
                let inputs = inputs
                    .iter()
                    .map(|input| self.sized(input, found, data))
                    .collect::<Option<Vec<_>>>()?;
                let fits = match shape {
                    Shape::Extend => inputs[0].size < size,
                    Shape::Piece => inputs[0].size.checked_add(inputs[1].size) == Some(size),
                    Shape::Subpiece => {
                        let Build::Const(offset) = inputs[1].node.kind else {
                            return None;
                        };
                        size < inputs[0].size && offset.magnitude <= (inputs[0].size - size) as u64
                    }
                    _ => true,
                };
                let has_format = |size| data.get_arch().get_float_format(size).is_some();
                let (float_inputs, float_output) = float_operands(*code);
                if !fits
                    || (float_output && !has_format(size))
                    || (float_inputs && !inputs.iter().all(|input| has_format(input.size)))
                {
                    return None;
                }
                inputs
            }
        };
        Some(Sized { node, size, inputs })
    }

    /// The Varnode for one replacement node, built in front of `root`.
    fn build(
        &self,
        sized: &Sized<'_>,
        root: OpId,
        found: &Found,
        data: &mut Funcdata,
    ) -> VarnodeId {
        match &sized.node.kind {
            Build::Capture { slot } => {
                let held = found.captures[*slot].expect("a capture the pattern bound");
                let constant = data
                    .vbank()
                    .get(held)
                    .filter(|v| v.is_constant())
                    .map(|v| v.get_offset());
                match constant {
                    Some(value) => {
                        let copy = data.new_constant(sized.size, value);
                        data.copy_symbol(copy, held);
                        copy
                    }
                    None => held,
                }
            }
            Build::Const(value) => {
                let bits = value.bits(sized.size).expect("checked by sized");
                data.new_constant(sized.size, bits)
            }
            Build::Op { code, .. } => {
                let inputs: Vec<VarnodeId> = sized
                    .inputs
                    .iter()
                    .map(|input| self.build(input, root, found, data))
                    .collect();
                let address = data
                    .obank()
                    .get(root)
                    .expect("the op the rule fired on")
                    .get_addr()
                    .clone();
                let op = data.new_op(inputs.len() as int4, address);
                data.op_set_opcode_code(op, *code);
                let out = data
                    .new_unique_out(sized.size, op)
                    .expect("a new op takes an output");
                for (slot, input) in inputs.into_iter().enumerate() {
                    data.op_set_input(op, input, slot as int4)
                        .expect("a new op takes its inputs");
                }
                data.op_insert_before(op, root);
                out
            }
        }
    }
}

impl Rule for RewriteRule {
    fn get_op_list(&self) -> Vec<OpCode> {
        match &self.program.pattern.kind {
            Match::Op { code, .. } => vec![*code],
            _ => Vec::new(),
        }
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        grouplist
            .contains(&self.group)
            .then(|| Box::new(self.clone()) as Box<dyn Rule>)
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let Some(found) = self.find(op, data) else {
            return 0;
        };
        let Some(sized) = self.sized(&self.program.replacement, &found, data) else {
            return 0;
        };
        let (code, inputs) = match &sized.node.kind {
            Build::Op { code, .. } => (
                *code,
                sized
                    .inputs
                    .iter()
                    .map(|input| self.build(input, op, &found, data))
                    .collect(),
            ),
            Build::Capture { .. } | Build::Const(_) => (
                OpCode::CPUI_COPY,
                vec![self.build(&sized, op, &found, data)],
            ),
        };
        data.op_set_opcode_code(op, code);
        data.op_set_all_input(op, &inputs)
            .expect("the op takes its new inputs");
        if let Match::Op { inputs, .. } = &self.program.pattern.kind {
            for input in inputs {
                sweep(input, &found, data);
            }
        }
        1
    }
}

/// Remove the op the pattern matched at `node` when nothing reads it any
/// more, then the ops below it in the pattern, as dead-code removal would.
/// That pass is part of the main loop, so nothing else removes them behind a
/// rule of the `cleanup` pool.
fn sweep(node: &MatchNode, found: &Found, data: &mut Funcdata) {
    let Match::Op { inputs, .. } = &node.kind else {
        return;
    };
    let written_by = data
        .vbank()
        .get(found.nodes[node.node])
        .and_then(|varnode| varnode.get_def());
    let Some(op) = written_by.filter(|op| RuleEarlyRemoval::removable(*op, data)) else {
        return;
    };
    data.op_destroy(op);
    for input in inputs {
        sweep(input, found, data);
    }
}
