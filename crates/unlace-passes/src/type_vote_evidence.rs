//! Evidence edges between SSA varnodes and the types their uses imply.
//!
//! This is the SSA counterpart of the Hex-Rays constraint visitor
//! (`sub_2AA180`) and its edge set (`sub_2A8310` / `sub_2A77F0`): every
//! instruction emits edges, identical edges merge, and a merged edge carries
//! the summed weight of every occurrence.

use std::collections::BTreeMap;

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{IrOp, SpaceId};

/// Number of votes one piece of evidence casts.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, PartialOrd, Ord)]
pub struct Weight(pub u32);

impl std::ops::AddAssign for Weight {
    fn add_assign(&mut self, rhs: Self) {
        self.0 = self.0.saturating_add(rhs.0);
    }
}

/// How far one edge is trusted. Its [`Trust::weight`] is the vote count the
/// edge casts each time an instruction emits it.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub enum Trust {
    /// Two compared operands: `x < y` suggests one type but proves none.
    Comparison,
    /// The value moves unchanged through a copy, phi or same-width cast.
    Flow,
    /// The opcode itself fixes the type (`FLOAT_ADD`, a `LOAD` address, ...).
    Opcode,
    /// The other side of a flow edge has a declared type (debug info or
    /// signature). Applied when the edge is evaluated, not when it is emitted.
    Declared,
}

impl Trust {
    pub const fn weight(self) -> Weight {
        Weight(match self {
            Trust::Comparison | Trust::Flow => 1,
            Trust::Opcode => 2,
            Trust::Declared => 4,
        })
    }
}

/// One deduplicated relation. A two-varnode edge stores its varnodes in
/// ascending order so `a ~ b` and `b ~ a` merge.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub enum Edge {
    /// The varnode holds this type.
    Is(SsaVarnode, PrimitiveType),
    /// The two varnodes hold the same type.
    Same(SsaVarnode, SsaVarnode),
    /// The two varnodes are compared with each other. Votes from this edge
    /// are weak: a comparison suggests a type but proves none.
    Compared(SsaVarnode, SsaVarnode),
}

/// Signedness of an integer use, voted separately from the type itself.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Sign {
    Signed,
    Unsigned,
}

/// Facts about one varnode that are not a type of their own.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub struct Hints {
    pub signed: Weight,
    pub unsigned: Weight,
    /// Used as a multiplier, shift count, mask or index: never a pointer.
    pub not_pointer: bool,
}

/// All edges and hints of one function.
#[derive(Debug, Default)]
pub struct EdgeSet {
    pub edges: BTreeMap<Edge, Weight>,
    pub hints: BTreeMap<SsaVarnode, Hints>,
}

impl EdgeSet {
    fn is(&mut self, sv: SsaVarnode, ty: PrimitiveType, trust: Trust) {
        *self.edges.entry(Edge::Is(sv, ty)).or_default() += trust.weight();
    }

    fn same(&mut self, a: SsaVarnode, b: SsaVarnode, trust: Trust) {
        if a == b {
            return;
        }
        let (a, b) = if a < b { (a, b) } else { (b, a) };
        let edge = match trust {
            Trust::Comparison => Edge::Compared(a, b),
            Trust::Flow | Trust::Opcode | Trust::Declared => Edge::Same(a, b),
        };
        *self.edges.entry(edge).or_default() += trust.weight();
    }

    fn sign(&mut self, sv: SsaVarnode, sign: Sign) {
        let hints = self.hints.entry(sv).or_default();
        match sign {
            Sign::Signed => hints.signed += Trust::Opcode.weight(),
            Sign::Unsigned => hints.unsigned += Trust::Opcode.weight(),
        }
    }

    fn not_pointer(&mut self, sv: SsaVarnode) {
        self.hints.entry(sv).or_default().not_pointer = true;
    }

    /// Emit the edges of every instruction and phi in `func`.
    pub fn collect(func: &SsaFunction) -> Self {
        let mut set = EdgeSet::default();
        for (&bid, block) in &func.function.blocks {
            for (idx, insn) in block.insns.iter().enumerate() {
                let slot = |slot| func.var_map.get(&(bid, idx, slot)).copied();
                let output = slot(VarnodeSlot::Output);
                let inputs: Vec<Option<SsaVarnode>> = (0..insn.inputs.len())
                    .map(|i| {
                        slot(VarnodeSlot::Input(i)).filter(|sv| sv.base.space != SpaceId::Const)
                    })
                    .collect();
                set.collect_insn(insn.op, output, &inputs);
            }
        }
        for phis in func.phi_map.values() {
            for phi in phis {
                for &(_, input) in &phi.inputs {
                    set.same(phi.output, input, Trust::Flow);
                }
            }
        }
        set
    }

    fn collect_insn(
        &mut self,
        op: IrOp,
        output: Option<SsaVarnode>,
        inputs: &[Option<SsaVarnode>],
    ) {
        let input = |i: usize| inputs.get(i).copied().flatten();
        let operands = || inputs.iter().copied().flatten();
        let int = |sv: SsaVarnode| PrimitiveType::Int(sv.base.size);
        match op {
            // `x + y` / `x - y` is pointer arithmetic or integer arithmetic;
            // neither side's type follows from the other (Hex-Rays relation 3).
            IrOp::IntAdd | IrOp::IntSub => {}

            IrOp::IntMult
            | IrOp::IntNegate
            | IrOp::Int2comp
            | IrOp::IntAnd
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntLeft
            | IrOp::IntRight
            | IrOp::IntSright
            | IrOp::IntDiv
            | IrOp::IntRem
            | IrOp::IntSdiv
            | IrOp::IntSrem => {
                let sign = match op {
                    IrOp::IntDiv | IrOp::IntRem | IrOp::IntRight => Some(Sign::Unsigned),
                    IrOp::IntSdiv | IrOp::IntSrem | IrOp::IntSright => Some(Sign::Signed),
                    _ => None,
                };
                for sv in operands().chain(output) {
                    self.is(sv, int(sv), Trust::Opcode);
                    self.not_pointer(sv);
                    if let Some(sign) = sign {
                        self.sign(sv, sign);
                    }
                }
            }

            IrOp::IntZext | IrOp::IntSext => {
                let sign = if op == IrOp::IntZext {
                    Sign::Unsigned
                } else {
                    Sign::Signed
                };
                for sv in input(0).into_iter().chain(output) {
                    self.is(sv, int(sv), Trust::Opcode);
                    self.sign(sv, sign);
                }
            }

            IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntLess
            | IrOp::IntLessequal
            | IrOp::IntSless
            | IrOp::IntSlessequal => {
                if let Some(out) = output {
                    self.is(out, PrimitiveType::Bool, Trust::Opcode);
                }
                if let (Some(x), Some(y)) = (input(0), input(1)) {
                    self.same(x, y, Trust::Comparison);
                }
                let sign = match op {
                    IrOp::IntLess | IrOp::IntLessequal => Some(Sign::Unsigned),
                    IrOp::IntSless | IrOp::IntSlessequal => Some(Sign::Signed),
                    _ => None,
                };
                if let Some(sign) = sign {
                    for sv in operands() {
                        self.sign(sv, sign);
                    }
                }
            }

            IrOp::IntCarry | IrOp::IntScarry | IrOp::IntSborrow => {
                if let Some(out) = output {
                    self.is(out, PrimitiveType::Bool, Trust::Opcode);
                }
                for sv in operands() {
                    self.is(sv, int(sv), Trust::Opcode);
                }
            }

            IrOp::BoolNegate | IrOp::BoolAnd | IrOp::BoolOr | IrOp::BoolXor => {
                for sv in operands().chain(output) {
                    self.is(sv, PrimitiveType::Bool, Trust::Opcode);
                }
            }

            IrOp::FloatAdd
            | IrOp::FloatSub
            | IrOp::FloatMult
            | IrOp::FloatDiv
            | IrOp::FloatNeg
            | IrOp::FloatAbs
            | IrOp::FloatSqrt
            | IrOp::FloatCeil
            | IrOp::FloatFloor
            | IrOp::FloatRound
            | IrOp::FloatTrunc
            | IrOp::FloatFloat2float => {
                for sv in operands().chain(output) {
                    self.is(sv, float_for(sv), Trust::Opcode);
                }
            }

            IrOp::FloatEqual
            | IrOp::FloatNotequal
            | IrOp::FloatLess
            | IrOp::FloatLessequal
            | IrOp::FloatNan => {
                if let Some(out) = output {
                    self.is(out, PrimitiveType::Bool, Trust::Opcode);
                }
                for sv in operands() {
                    self.is(sv, float_for(sv), Trust::Opcode);
                }
            }

            IrOp::FloatInt2float => {
                if let Some(sv) = input(0) {
                    self.is(sv, int(sv), Trust::Opcode);
                    self.sign(sv, Sign::Signed);
                }
                if let Some(out) = output {
                    self.is(out, float_for(out), Trust::Opcode);
                }
            }

            IrOp::FloatFloat2int => {
                if let Some(sv) = input(0) {
                    self.is(sv, float_for(sv), Trust::Opcode);
                }
                if let Some(out) = output {
                    self.is(out, int(out), Trust::Opcode);
                    self.sign(out, Sign::Signed);
                }
            }

            IrOp::Load | IrOp::Store => {
                if let Some(addr) = input(1) {
                    self.is(addr, PrimitiveType::Ptr, Trust::Opcode);
                }
            }

            IrOp::Cbranch => {
                if let Some(cond) = input(1) {
                    self.is(cond, PrimitiveType::Bool, Trust::Opcode);
                }
            }

            IrOp::Call | IrOp::Callind => {
                if let Some(target) = input(0) {
                    self.is(target, PrimitiveType::Ptr, Trust::Opcode);
                }
            }

            IrOp::Ptradd | IrOp::Ptrsub => {
                for sv in input(0).into_iter().chain(output) {
                    self.is(sv, PrimitiveType::Ptr, Trust::Opcode);
                }
                if let Some(index) = input(1) {
                    self.is(index, int(index), Trust::Opcode);
                    self.not_pointer(index);
                }
            }

            IrOp::Copy => {
                if let (Some(x), Some(y)) = (input(0), output) {
                    self.same(x, y, Trust::Flow);
                }
            }

            IrOp::Cast => {
                if let (Some(x), Some(y)) = (input(0), output)
                    && x.base.size == y.base.size
                {
                    self.same(x, y, Trust::Flow);
                }
            }

            _ => {}
        }
    }
}

fn float_for(sv: SsaVarnode) -> PrimitiveType {
    if sv.base.size == 4 {
        PrimitiveType::Float
    } else {
        PrimitiveType::Double
    }
}
