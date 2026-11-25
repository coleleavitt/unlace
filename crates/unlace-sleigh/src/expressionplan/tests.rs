use super::*;
use crate::slghpatexpress::{BinaryExpression, ConstantValue, OperandValue, UnaryExpression};
use std::cell::RefCell;
use unlace_base::address::Address;
use unlace_base::error::{UnlaceError, UnlaceResult};

struct Walker {
    values: [i64; 4],
    fail: Option<i32>,
    reads: RefCell<Vec<(i32, u32, u32)>>,
}

impl PatternExpressionContext for Walker {
    fn get_instruction_bytes(&self, _: i32, _: i32) -> UnlaceResult<u32> {
        Err(UnlaceError::bad_data("instruction read"))
    }
    fn get_context_bytes(&self, _: i32, _: i32) -> UnlaceResult<u32> {
        unreachable!()
    }
    fn get_addr(&self) -> Address {
        Address::default()
    }
    fn get_naddr(&self) -> Address {
        Address::default()
    }
    fn get_n2addr(&self) -> UnlaceResult<Address> {
        Err(UnlaceError::sleigh("next2"))
    }
    fn operand_value(&self, index: i32, table: u32, ct: u32) -> UnlaceResult<i64> {
        self.reads.borrow_mut().push((index, table, ct));
        if self.fail == Some(index) {
            return Err(UnlaceError::sleigh("operand failure"));
        }
        Ok(self.values[index as usize])
    }
}

fn literal(value: i64) -> PatternExpression {
    PatternExpression::Value(PatternValue::ConstantValue(ConstantValue::new(value)))
}

fn operand(index: i32) -> PatternExpression {
    PatternExpression::Value(PatternValue::OperandValue(OperandValue::new(index, 7, 3)))
}

fn compare(expression: &PatternExpression) {
    let Some(plan) = ExpressionPlan::new(expression) else {
        return;
    };
    for values in [
        [i64::MIN, -1, 64, i64::MAX],
        [0, 1, -65, 7],
        [19, -13, 129, -1024],
    ] {
        for fail in [None, Some(0), Some(1), Some(2), Some(3)] {
            let walker = Walker {
                values,
                fail,
                reads: RefCell::new(Vec::new()),
            };
            let expected = expression.get_value(&walker).map_err(|e| e.to_string());
            let reads = walker.reads.take();
            let actual = plan.get_value(&walker).map_err(|e| e.to_string());
            assert_eq!(actual, expected, "{expression:?}");
            assert_eq!(
                *walker.reads.borrow(),
                reads,
                "evaluation order: {expression:?}"
            );
        }
    }
}

fn generated(seed: &mut u64, depth: usize) -> PatternExpression {
    *seed = seed.wrapping_mul(6364136223846793005).wrapping_add(1);
    let value = (*seed >> 32) as usize;
    if depth == 0 || value % 5 == 0 {
        return if value & 1 == 0 {
            literal(*seed as i64)
        } else {
            operand((value % 4) as i32)
        };
    }
    if value % 11 == 0 {
        return PatternExpression::Not(UnaryExpression::new(generated(seed, depth - 1)));
    }
    let children = BinaryExpression::new(generated(seed, depth - 1), generated(seed, depth - 1));
    match value % 8 {
        0 => PatternExpression::Plus(children),
        1 => PatternExpression::Sub(children),
        2 => PatternExpression::Mult(children),
        3 => PatternExpression::LeftShift(children),
        4 => PatternExpression::RightShift(children),
        5 => PatternExpression::And(children),
        6 => PatternExpression::Or(children),
        _ => PatternExpression::Xor(children),
    }
}

#[test]
fn prepared_expressions_preserve_values_failures_and_read_order() {
    let mut seed = 0x5e16_2026;
    for _ in 0..400 {
        compare(&generated(&mut seed, 5));
    }
    compare(&PatternExpression::Div(BinaryExpression::new(
        operand(0),
        literal(-1),
    )));
    compare(&PatternExpression::Minus(UnaryExpression::new(operand(0))));
    compare(&PatternExpression::Plus(BinaryExpression::new(
        operand(0),
        PatternExpression::Value(PatternValue::Next2InstructionValue(
            crate::slghpatexpress::Next2InstructionValue,
        )),
    )));
}

#[test]
fn subtraction_bit_tests_preserve_wrapping_shifts_and_failures() {
    let operands = [
        operand(1),
        literal(31),
        PatternExpression::Plus(BinaryExpression::new(operand(1), literal(5))),
        PatternExpression::Value(PatternValue::TokenField(TokenField::new(
            1, false, false, 0, 7,
        ))),
        PatternExpression::Value(PatternValue::Next2InstructionValue(
            crate::slghpatexpress::Next2InstructionValue,
        )),
    ];
    for left in [operand(0), literal(63)] {
        for right in &operands {
            for shift in [0, 6, 7, 63, 64, -1, 129] {
                let difference =
                    PatternExpression::Sub(BinaryExpression::new(left.clone(), right.clone()));
                let shifted = PatternExpression::RightShift(BinaryExpression::new(
                    difference,
                    literal(shift),
                ));
                compare(&PatternExpression::And(BinaryExpression::new(
                    shifted,
                    literal(1),
                )));
            }
        }
    }
}

#[test]
fn preparation_preserves_constant_division_failures_until_evaluation() {
    let expression = PatternExpression::Div(BinaryExpression::new(literal(1), literal(0)));
    let plan = ExpressionPlan::new(&expression).unwrap();
    let walker = Walker {
        values: [0; 4],
        fail: None,
        reads: RefCell::new(Vec::new()),
    };
    assert!(
        std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| plan.get_value(&walker))).is_err()
    );
}

#[test]
fn expression_mutation_invalidates_prepared_operand_references() {
    let walker = Walker {
        values: [3, 17, 23, 42],
        fail: None,
        reads: RefCell::new(Vec::new()),
    };
    let mut expression = PatternExpression::Plus(BinaryExpression::new(operand(0), literal(2)));
    expression.prepare_runtime();
    assert_eq!(expression.get_value(&walker).unwrap(), 5);
    expression.remap_operand_index(&[1]);
    assert_eq!(expression.get_value(&walker).unwrap(), 19);
    expression.prepare_runtime();
    assert_eq!(expression.get_value(&walker).unwrap(), 19);
    expression.remap_table_id(&|_| 11);
    assert_eq!(expression.get_value(&walker).unwrap(), 19);
    assert_eq!(walker.reads.borrow().last(), Some(&(1, 11, 3)));
    expression.prepare_runtime();
    let PatternExpression::Plus(children) = &mut expression else {
        unreachable!()
    };
    *children.get_right_mut() = literal(5);
    assert_eq!(expression.get_value(&walker).unwrap(), 22);
}

#[test]
fn changing_the_outer_operator_declines_a_plan_for_the_old_operator() {
    let walker = Walker {
        values: [3, 17, 23, 42],
        fail: None,
        reads: RefCell::new(Vec::new()),
    };
    let mut expression = PatternExpression::Plus(BinaryExpression::new(operand(0), literal(2)));
    expression.prepare_runtime();
    assert_eq!(expression.get_value(&walker).unwrap(), 5);
    let PatternExpression::Plus(children) = expression else {
        unreachable!()
    };
    let subtract = PatternExpression::Sub(children);
    assert_eq!(subtract.get_value(&walker).unwrap(), 1);
    let mut expression = PatternExpression::Minus(UnaryExpression::new(operand(0)));
    expression.prepare_runtime();
    assert_eq!(expression.get_value(&walker).unwrap(), -3);
    let PatternExpression::Minus(child) = expression else {
        unreachable!()
    };
    assert_eq!(
        PatternExpression::Not(child).get_value(&walker).unwrap(),
        !3
    );
}

#[test]
fn large_right_subtrees_retain_tree_evaluation() {
    let walker = Walker {
        values: [3, 17, 23, 42],
        fail: None,
        reads: RefCell::new(Vec::new()),
    };
    let mut expression = operand(3);
    for _ in 0..16 {
        expression = PatternExpression::Plus(BinaryExpression::new(operand(0), expression));
    }
    assert!(ExpressionPlan::new(&expression).is_none());
    expression.prepare_runtime();
    assert_eq!(expression.get_value(&walker).unwrap(), 90);
    assert_eq!(walker.reads.borrow().len(), 17);
}

#[test]
fn a_shared_lazy_plan_reads_each_callers_operand_values() {
    use std::sync::{Arc, Barrier};
    let mut expression = PatternExpression::Sub(BinaryExpression::new(
        operand(0),
        PatternExpression::Plus(BinaryExpression::new(operand(1), literal(2))),
    ));
    expression.prepare_runtime();
    let expression = Arc::new(expression);
    let barrier = Arc::new(Barrier::new(8));
    let threads: Vec<_> = (0..8i64)
        .map(|value| {
            let expression = Arc::clone(&expression);
            let barrier = Arc::clone(&barrier);
            std::thread::spawn(move || {
                let walker = Walker {
                    values: [7 * value, value, 0, 0],
                    fail: None,
                    reads: RefCell::new(Vec::new()),
                };
                barrier.wait();
                assert_eq!(expression.get_value(&walker).unwrap(), 6 * value - 2);
            })
        })
        .collect();
    for thread in threads {
        thread.join().unwrap();
    }
}
