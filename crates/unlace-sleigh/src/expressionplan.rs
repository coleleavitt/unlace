//! Prepared runtime expression evaluation, retaining the original tree for
//! encoding, inspection, compiler rewrites and replacement-value evaluation.

use unlace_base::error::UnlaceResult;
use unlace_base::types::Wrap;

use crate::slghpatexpress::{
    OperandValue, PatternExpression, PatternExpressionContext, PatternValue, TokenField,
};

const STACK_CAPACITY: usize = 8;

#[derive(Debug, Clone, Copy)]
enum BinaryOp {
    Add,
    Sub,
    Mul,
    Shl,
    Shr,
    And,
    Or,
    Xor,
    Div,
}

impl BinaryOp {
    #[inline]
    fn apply(self, left: i64, right: i64) -> i64 {
        match self {
            Self::Add => left.wadd(right),
            Self::Sub => left.wsub(right),
            Self::Mul => left.wmul(right),
            Self::Shl => left.wshl(right as u32),
            Self::Shr => left.wshr(right as u32),
            Self::And => left & right,
            Self::Or => left | right,
            Self::Xor => left ^ right,
            Self::Div => left.wdiv(right),
        }
    }
}

#[derive(Debug, Clone)]
enum Step {
    Constant(i64),
    Leaf(PatternValue),
    Operand(OperandValue),
    Token(TokenField),
    Immediate(BinaryOp, i64),
    LeftImmediate(BinaryOp, i64),
    BinaryLeaf(BinaryOp, PatternValue),
    BinaryOperand(BinaryOp, OperandValue),
    BinaryToken(BinaryOp, TokenField),
    DifferenceBitLeaf(PatternValue, u32),
    DifferenceBitOperand(OperandValue, u32),
    DifferenceBitToken(TokenField, u32),
    DifferenceBitImmediate(i64, u32),
    DifferenceBitLeftImmediate(i64, u32),
    DifferenceBitStack(u32),
    Save,
    BinaryStack(BinaryOp),
    Negate,
    Not,
}

#[derive(Debug, Clone)]
pub(crate) struct ExpressionPlan {
    steps: Box<[Step]>,
    stack_depth: usize,
    root: std::mem::Discriminant<PatternExpression>,
}

impl ExpressionPlan {
    pub(crate) fn new(expression: &PatternExpression) -> Option<Self> {
        if matches!(expression, PatternExpression::Value(_)) {
            return None;
        }
        let mut steps = Vec::new();
        let mut stack_depth = 0;
        compile(expression, &mut steps, 0, &mut stack_depth);
        (stack_depth <= STACK_CAPACITY).then(|| Self {
            steps: fuse_bit_tests(steps).into_boxed_slice(),
            stack_depth,
            root: std::mem::discriminant(expression),
        })
    }

    pub(crate) fn applies_to(&self, expression: &PatternExpression) -> bool {
        self.root == std::mem::discriminant(expression)
    }

    pub(crate) fn get_value(
        &self,
        walker: &(impl PatternExpressionContext + ?Sized),
    ) -> UnlaceResult<i64> {
        if self.stack_depth == 0 {
            return self.execute(walker, &mut []);
        }
        let mut stack = [0; STACK_CAPACITY];
        self.execute(walker, &mut stack)
    }

    fn execute(
        &self,
        walker: &(impl PatternExpressionContext + ?Sized),
        stack: &mut [i64],
    ) -> UnlaceResult<i64> {
        let mut value = 0;
        let mut depth = 0;
        for step in &self.steps {
            match step {
                Step::Constant(constant) => value = *constant,
                Step::Leaf(leaf) => value = leaf.get_value(walker)?,
                Step::Operand(operand) => value = operand.get_value(walker)?,
                Step::Token(token) => value = token.get_value(walker)?,
                Step::Immediate(op, right) => value = op.apply(value, *right),
                Step::LeftImmediate(op, left) => value = op.apply(*left, value),
                Step::BinaryLeaf(op, right) => value = op.apply(value, right.get_value(walker)?),
                Step::BinaryOperand(op, right) => value = op.apply(value, right.get_value(walker)?),
                Step::BinaryToken(op, right) => value = op.apply(value, right.get_value(walker)?),
                Step::DifferenceBitLeaf(right, shift) => {
                    value = value.wsub(right.get_value(walker)?).wshr(*shift) & 1;
                }
                Step::DifferenceBitOperand(right, shift) => {
                    value = value.wsub(right.get_value(walker)?).wshr(*shift) & 1;
                }
                Step::DifferenceBitToken(right, shift) => {
                    value = value.wsub(right.get_value(walker)?).wshr(*shift) & 1;
                }
                Step::DifferenceBitImmediate(right, shift) => {
                    value = value.wsub(*right).wshr(*shift) & 1;
                }
                Step::DifferenceBitLeftImmediate(left, shift) => {
                    value = left.wsub(value).wshr(*shift) & 1;
                }
                Step::DifferenceBitStack(shift) => {
                    depth -= 1;
                    value = stack[depth].wsub(value).wshr(*shift) & 1;
                }
                Step::Save => {
                    stack[depth] = value;
                    depth += 1;
                }
                Step::BinaryStack(op) => {
                    depth -= 1;
                    value = op.apply(stack[depth], value);
                }
                Step::Negate => value = value.wneg(),
                Step::Not => value = !value,
            }
        }
        Ok(value)
    }
}

fn fuse_bit_tests(steps: Vec<Step>) -> Vec<Step> {
    let mut result = Vec::with_capacity(steps.len());
    for step in steps {
        if matches!(&step, Step::Immediate(BinaryOp::And, 1)) && result.len() >= 2 {
            if let Some(Step::Immediate(BinaryOp::Shr, shift)) = result.last() {
                let shift = *shift as u32;
                if matches!(
                    &result[result.len() - 2],
                    Step::BinaryLeaf(BinaryOp::Sub, _)
                        | Step::BinaryOperand(BinaryOp::Sub, _)
                        | Step::BinaryToken(BinaryOp::Sub, _)
                        | Step::Immediate(BinaryOp::Sub, _)
                        | Step::LeftImmediate(BinaryOp::Sub, _)
                        | Step::BinaryStack(BinaryOp::Sub)
                ) {
                    result.pop();
                    let difference = result.pop().unwrap();
                    result.push(match difference {
                        Step::BinaryLeaf(_, right) => Step::DifferenceBitLeaf(right, shift),
                        Step::BinaryOperand(_, right) => Step::DifferenceBitOperand(right, shift),
                        Step::BinaryToken(_, right) => Step::DifferenceBitToken(right, shift),
                        Step::Immediate(_, right) => Step::DifferenceBitImmediate(right, shift),
                        Step::LeftImmediate(_, left) => {
                            Step::DifferenceBitLeftImmediate(left, shift)
                        }
                        Step::BinaryStack(_) => Step::DifferenceBitStack(shift),
                        _ => unreachable!(),
                    });
                    continue;
                }
            }
        }
        result.push(step);
    }
    result
}

fn binary(
    expression: &PatternExpression,
) -> Option<(BinaryOp, &PatternExpression, &PatternExpression)> {
    let (op, children) = match expression {
        PatternExpression::Plus(b) => (BinaryOp::Add, b),
        PatternExpression::Sub(b) => (BinaryOp::Sub, b),
        PatternExpression::Mult(b) => (BinaryOp::Mul, b),
        PatternExpression::LeftShift(b) => (BinaryOp::Shl, b),
        PatternExpression::RightShift(b) => (BinaryOp::Shr, b),
        PatternExpression::And(b) => (BinaryOp::And, b),
        PatternExpression::Or(b) => (BinaryOp::Or, b),
        PatternExpression::Xor(b) => (BinaryOp::Xor, b),
        PatternExpression::Div(b) => (BinaryOp::Div, b),
        _ => return None,
    };
    Some((op, children.get_left(), children.get_right()))
}

fn constant(expression: &PatternExpression) -> Option<i64> {
    match expression {
        PatternExpression::Value(PatternValue::ConstantValue(value)) => Some(value.get_value()),
        PatternExpression::Minus(child) => Some(constant(child.get_unary())?.wneg()),
        PatternExpression::Not(child) => Some(!constant(child.get_unary())?),
        _ => {
            let (op, left, right) = binary(expression)?;
            let left = constant(left)?;
            let right = constant(right)?;
            if matches!(op, BinaryOp::Div) && right == 0 {
                return None;
            }
            Some(op.apply(left, right))
        }
    }
}

fn compile(
    expression: &PatternExpression,
    steps: &mut Vec<Step>,
    depth: usize,
    maximum: &mut usize,
) {
    if let Some(value) = constant(expression) {
        steps.push(Step::Constant(value));
        return;
    }
    match expression {
        PatternExpression::Value(value) => steps.push(match value {
            PatternValue::OperandValue(value) => Step::Operand(value.clone()),
            PatternValue::TokenField(value) => Step::Token(value.clone()),
            _ => Step::Leaf(value.clone()),
        }),
        PatternExpression::Minus(child) => {
            compile(child.get_unary(), steps, depth, maximum);
            steps.push(Step::Negate);
        }
        PatternExpression::Not(child) => {
            compile(child.get_unary(), steps, depth, maximum);
            steps.push(Step::Not);
        }
        _ => {
            let (op, left, right) = binary(expression).expect("binary expression");
            if !matches!(right, PatternExpression::Value(_)) {
                if let Some(value) = constant(left) {
                    compile(right, steps, depth, maximum);
                    steps.push(Step::LeftImmediate(op, value));
                    return;
                }
            }
            compile(left, steps, depth, maximum);
            if let Some(value) = constant(right) {
                steps.push(Step::Immediate(op, value));
            } else if let PatternExpression::Value(value) = right {
                steps.push(match value {
                    PatternValue::OperandValue(value) => Step::BinaryOperand(op, value.clone()),
                    PatternValue::TokenField(value) => Step::BinaryToken(op, value.clone()),
                    _ => Step::BinaryLeaf(op, value.clone()),
                });
            } else {
                steps.push(Step::Save);
                *maximum = (*maximum).max(depth + 1);
                compile(right, steps, depth + 1, maximum);
                steps.push(Step::BinaryStack(op));
            }
        }
    }
}

#[cfg(test)]
mod tests;
