//! What a rewrite rule may say, checked when the file is read: which opcodes
//! it uses, how many inputs each takes, and that the sizes of both sides fit
//! together. The result is the [`Program`] the rule runs.
//!
//! Every node of the two expressions has a size in bytes, known or not. The
//! opcode of an op relates the sizes of its inputs and its output
//! ([`Shape`]), every use of a capture is the same Varnode and so the same
//! size, and the replacement is as wide as the matched op's output. Sizes
//! that must be equal are merged; a rule is refused when two different known
//! sizes meet, when an extension or truncation cannot change the size, or
//! when a node of the replacement has no size at all. What is still unknown
//! then is the size of something the pattern matched, which the rule reads
//! from the function when it fires.

use std::collections::BTreeMap;

use unlace_num::opcodes::{OpCode, get_opname};

use super::pattern::{Expr, Kind, Number};
use crate::typeop::type_op_info;

/// How the sizes of an op's inputs and output relate.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) enum Shape {
    /// One input, as wide as the output.
    Unary,
    /// Two inputs, both as wide as the output.
    Binary,
    /// The first input is as wide as the output; the shift amount is any size.
    Shift,
    /// Two inputs of one size; the output is one byte.
    Compare,
    /// One one-byte input and a one-byte output.
    BoolUnary,
    /// Two one-byte inputs and a one-byte output.
    BoolBinary,
    /// One input, narrower than the output.
    Extend,
    /// One input; the output is one byte.
    Flag,
    /// One input; the output size is not related to it.
    Convert,
    /// The output is the first input (high) joined to the second (low).
    Piece,
    /// The output is a narrower part of the first input, starting at the
    /// byte the second, a constant, gives.
    Subpiece,
}

impl Shape {
    /// The shape of `code`, or `None` for an opcode a rule cannot use: one
    /// that reads or writes memory, changes control flow, calls, joins
    /// control-flow paths or carries a data type.
    pub(super) fn of(code: OpCode) -> Option<Shape> {
        use OpCode::*;
        Some(match code {
            CPUI_INT_NEGATE | CPUI_INT_2COMP | CPUI_FLOAT_NEG | CPUI_FLOAT_ABS
            | CPUI_FLOAT_SQRT | CPUI_FLOAT_CEIL | CPUI_FLOAT_FLOOR | CPUI_FLOAT_ROUND => {
                Shape::Unary
            }
            CPUI_INT_ADD | CPUI_INT_SUB | CPUI_INT_XOR | CPUI_INT_AND | CPUI_INT_OR
            | CPUI_INT_MULT | CPUI_INT_DIV | CPUI_INT_SDIV | CPUI_INT_REM | CPUI_INT_SREM
            | CPUI_FLOAT_ADD | CPUI_FLOAT_SUB | CPUI_FLOAT_MULT | CPUI_FLOAT_DIV => Shape::Binary,
            CPUI_INT_LEFT | CPUI_INT_RIGHT | CPUI_INT_SRIGHT => Shape::Shift,
            CPUI_INT_EQUAL | CPUI_INT_NOTEQUAL | CPUI_INT_SLESS | CPUI_INT_SLESSEQUAL
            | CPUI_INT_LESS | CPUI_INT_LESSEQUAL | CPUI_INT_CARRY | CPUI_INT_SCARRY
            | CPUI_INT_SBORROW | CPUI_FLOAT_EQUAL | CPUI_FLOAT_NOTEQUAL | CPUI_FLOAT_LESS
            | CPUI_FLOAT_LESSEQUAL => Shape::Compare,
            CPUI_BOOL_NEGATE => Shape::BoolUnary,
            CPUI_BOOL_XOR | CPUI_BOOL_AND | CPUI_BOOL_OR => Shape::BoolBinary,
            CPUI_INT_ZEXT | CPUI_INT_SEXT => Shape::Extend,
            CPUI_FLOAT_NAN => Shape::Flag,
            CPUI_POPCOUNT
            | CPUI_LZCOUNT
            | CPUI_FLOAT_INT2FLOAT
            | CPUI_FLOAT_FLOAT2FLOAT
            | CPUI_FLOAT_TRUNC => Shape::Convert,
            CPUI_PIECE => Shape::Piece,
            CPUI_SUBPIECE => Shape::Subpiece,
            _ => return None,
        })
    }

    /// How many inputs an op of this shape takes.
    pub(super) fn inputs(self) -> usize {
        match self {
            Shape::Unary | Shape::BoolUnary | Shape::Extend | Shape::Flag | Shape::Convert => 1,
            Shape::Binary
            | Shape::Shift
            | Shape::Compare
            | Shape::BoolBinary
            | Shape::Piece
            | Shape::Subpiece => 2,
        }
    }
}

/// Whether the inputs and the output of `code` hold floating-point values,
/// which exist only at the sizes the processor has a format for.
pub(super) fn float_operands(code: OpCode) -> (bool, bool) {
    use OpCode::*;
    match code {
        CPUI_FLOAT_ADD
        | CPUI_FLOAT_SUB
        | CPUI_FLOAT_MULT
        | CPUI_FLOAT_DIV
        | CPUI_FLOAT_NEG
        | CPUI_FLOAT_ABS
        | CPUI_FLOAT_SQRT
        | CPUI_FLOAT_CEIL
        | CPUI_FLOAT_FLOOR
        | CPUI_FLOAT_ROUND
        | CPUI_FLOAT_FLOAT2FLOAT => (true, true),
        CPUI_FLOAT_EQUAL | CPUI_FLOAT_NOTEQUAL | CPUI_FLOAT_LESS | CPUI_FLOAT_LESSEQUAL
        | CPUI_FLOAT_NAN | CPUI_FLOAT_TRUNC => (true, false),
        CPUI_FLOAT_INT2FLOAT => (false, true),
        _ => (false, false),
    }
}

/// The size of a constant nothing else sizes: a shift amount or a truncation
/// offset, which the engine's own rules make four bytes wide.
const LOOSE_CONSTANT_SIZE: i32 = 4;

const SUBPIECE_OFFSET: &str = "the second input of SUBPIECE is a constant, the byte it starts at";

/// One node of the pattern: what the Varnode there must be.
pub(super) struct MatchNode {
    /// The node's number: where its Varnode and its [`Size`] are kept.
    pub(super) node: usize,
    pub(super) kind: Match,
}

pub(super) enum Match {
    /// Any Varnode; every node of one slot is the same Varnode.
    Capture {
        slot: usize,
    },
    Const(Number),
    Masked {
        value: u64,
        mask: u64,
    },
    /// A Varnode written by an op of this opcode, whose inputs match.
    Op {
        code: OpCode,
        inputs: Vec<MatchNode>,
    },
}

/// One node of the replacement: the Varnode to put there.
pub(super) struct BuildNode {
    pub(super) node: usize,
    pub(super) kind: Build,
}

pub(super) enum Build {
    /// The Varnode a capture holds.
    Capture { slot: usize },
    /// A new constant.
    Const(Number),
    /// The output of a new op over the built inputs.
    Op {
        code: OpCode,
        shape: Shape,
        inputs: Vec<BuildNode>,
    },
}

/// The size of a node.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) enum Size {
    Fixed(i32),
    /// The size of the Varnode the pattern finds at this pattern node. A
    /// pattern node that names itself is free to have any size.
    Of(usize),
}

/// A checked rule, ready to run. Nodes are numbered pattern first, each
/// expression parent before inputs, so node 0 is the matched op's output.
pub(super) struct Program {
    pub(super) pattern: MatchNode,
    pub(super) replacement: BuildNode,
    /// The size of every node, by number.
    pub(super) sizes: Vec<Size>,
    pub(super) captures: usize,
}

/// Which expression of the rule a problem is in.
#[derive(Clone, Copy, PartialEq, Eq)]
pub(super) enum Side {
    Match,
    Replace,
}

/// Why a rule is refused.
pub(super) struct Problem {
    pub(super) side: Side,
    pub(super) message: String,
}

/// Check `pattern` and `replacement` (with the text each was parsed from) and
/// lower them to a [`Program`].
pub(super) fn compile(
    pattern: (&str, &Expr),
    replacement: (&str, &Expr),
) -> Result<Program, Problem> {
    let mut checker = Checker::default();
    if !matches!(pattern.1.kind, Kind::Op(..)) {
        return Err(Problem {
            side: Side::Match,
            message: "the pattern must be an op, the one the rule fires on".to_string(),
        });
    }
    let matched = checker.pattern(pattern.0, pattern.1)?;
    let built = checker.replacement(replacement.0, replacement.1)?;
    checker
        .settle()
        .map_err(|broken| checker.mismatch(broken))?;
    // Each side is sound on its own here; what fails from now on is the
    // replacement standing where the matched op's output stood.
    let output = |detail: String| Problem {
        side: Side::Replace,
        message: format!("the replacement is not as wide as the matched op's output: {detail}"),
    };
    checker
        .join(built.node, matched.node)
        .map_err(|(mine, theirs)| {
            output(format!(
                "it is {}, the output is {}",
                bytes(mine),
                bytes(theirs)
            ))
        })?;
    checker
        .settle()
        .map_err(|(node, detail)| output(checker.quote(node, detail)))?;
    if let Some(node) = checker.refires(&matched, &built) {
        let message = "the pattern matches this part of its own replacement, so the rule \
                       would fire forever";
        return Err(checker.problem(node, message.to_string()));
    }
    Ok(Program {
        sizes: checker.sizes(built.node)?,
        captures: checker.captures.len(),
        pattern: matched,
        replacement: built,
    })
}

fn bytes(size: i32) -> String {
    if size == 1 {
        "1 byte".to_string()
    } else {
        format!("{size} bytes")
    }
}

/// What the checker knows about one node of either expression.
struct Node {
    side: Side,
    text: String,
    /// The node this one's size class is merged into.
    parent: usize,
    /// The known size of the class, on its root.
    size: Option<i32>,
}

/// A size relation that merging cannot express, checked once all sizes that
/// can be known are known.
enum Relation {
    /// `narrow` is smaller than `wide`.
    Narrower {
        narrow: usize,
        wide: usize,
        op: usize,
    },
    /// `whole` is `high` and `low` together.
    Joined {
        whole: usize,
        high: usize,
        low: usize,
        op: usize,
    },
    /// `part` and the `skip` bytes below it lie inside `whole`.
    Within {
        part: usize,
        skip: u64,
        whole: usize,
        op: usize,
    },
    /// The constant at `node` has at most 8 bytes, and `value` fits them.
    Constant { node: usize, value: Option<Number> },
}

#[derive(Default)]
struct Checker {
    nodes: Vec<Node>,
    /// Capture name to its slot and the pattern node that binds it.
    captures: BTreeMap<String, (usize, usize)>,
    relations: Vec<Relation>,
    /// Replacement constants that take [`LOOSE_CONSTANT_SIZE`] when nothing
    /// sizes them.
    loose: Vec<usize>,
}

impl Checker {
    fn node(&mut self, side: Side, text: &str, expr: &Expr) -> usize {
        let node = self.nodes.len();
        self.nodes.push(Node {
            side,
            text: text[expr.span.clone()].trim().to_string(),
            parent: node,
            size: expr.size,
        });
        node
    }

    /// `message` with the text of `node` after it when the node is an op: a
    /// capture or a constant is already named by the message.
    fn quote(&self, node: usize, message: String) -> String {
        let text = &self.nodes[node].text;
        if text.contains('(') {
            format!("{message}, in `{text}`")
        } else {
            message
        }
    }

    fn problem(&self, node: usize, message: String) -> Problem {
        Problem {
            side: self.nodes[node].side,
            message: self.quote(node, message),
        }
    }

    /// The problem of sizes that do not fit at `node`.
    fn mismatch(&self, (node, detail): (usize, String)) -> Problem {
        self.problem(node, format!("size mismatch: {detail}"))
    }

    fn class(&self, mut node: usize) -> usize {
        while self.nodes[node].parent != node {
            node = self.nodes[node].parent;
        }
        node
    }

    fn size(&self, node: usize) -> Option<i32> {
        self.nodes[self.class(node)].size
    }

    /// Make `a` and `b` one size; `Err` holds their two known sizes when they
    /// differ.
    fn join(&mut self, a: usize, b: usize) -> Result<(), (i32, i32)> {
        let (a, b) = (self.class(a), self.class(b));
        if a == b {
            return Ok(());
        }
        let size = match (self.nodes[a].size, self.nodes[b].size) {
            (Some(x), Some(y)) if x != y => return Err((x, y)),
            (x, y) => x.or(y),
        };
        // The lower node stays the root, so a class that holds a pattern node
        // is rooted at its first one.
        let (root, child) = (a.min(b), a.max(b));
        self.nodes[child].parent = root;
        self.nodes[root].size = size;
        Ok(())
    }

    /// [`join`](Self::join) for two operands of the op at `op`.
    fn same(&mut self, op: usize, a: usize, b: usize, what: &str) -> Result<(), Problem> {
        self.join(a, b).map_err(|(x, y)| {
            let detail = format!(
                "{what}, but `{}` is {} and `{}` is {}",
                self.nodes[a].text,
                bytes(x),
                self.nodes[b].text,
                bytes(y)
            );
            self.mismatch((op, detail))
        })
    }

    fn fix(&mut self, op: usize, node: usize, size: i32, what: &str) -> Result<(), Problem> {
        let class = self.class(node);
        match self.nodes[class].size {
            Some(known) if known != size => {
                let text = &self.nodes[node].text;
                Err(self.mismatch((op, format!("{what}, but `{text}` is {}", bytes(known)))))
            }
            _ => {
                self.nodes[class].size = Some(size);
                Ok(())
            }
        }
    }

    /// The shape of the op at `node`, once its opcode and input count are
    /// known to be ones a rule can use.
    fn op(&self, node: usize, code: OpCode, inputs: usize) -> Result<Shape, Problem> {
        let name = get_opname(code);
        let Some(shape) = Shape::of(code) else {
            return Err(self.problem(
                node,
                format!("opcode {name} cannot be used in a rewrite rule"),
            ));
        };
        if shape.inputs() != inputs {
            return Err(self.problem(
                node,
                format!("{name} takes {} inputs, not {inputs}", shape.inputs()),
            ));
        }
        Ok(shape)
    }

    /// Relate the sizes of the op at `op` to those of its `inputs`; `skip` is
    /// the offset of a `SUBPIECE`.
    fn relate(
        &mut self,
        op: usize,
        code: OpCode,
        shape: Shape,
        inputs: &[usize],
        skip: u64,
    ) -> Result<(), Problem> {
        let name = get_opname(code);
        match shape {
            Shape::Unary => self.same(
                op,
                inputs[0],
                op,
                &format!("the input of {name} is as wide as its output"),
            ),
            Shape::Binary => {
                let what = format!("both inputs of {name} are as wide as its output");
                self.same(op, inputs[0], inputs[1], &what)?;
                self.same(op, inputs[0], op, &what)
            }
            Shape::Shift => self.same(
                op,
                inputs[0],
                op,
                &format!("the first input of {name} is as wide as its output"),
            ),
            Shape::Compare => {
                self.same(
                    op,
                    inputs[0],
                    inputs[1],
                    &format!("{name} compares two values of one size"),
                )?;
                self.fix(op, op, 1, &format!("the output of {name} is 1 byte"))
            }
            Shape::BoolUnary | Shape::BoolBinary => {
                let what = format!("the inputs and the output of {name} are 1 byte");
                for &node in inputs.iter().chain([&op]) {
                    self.fix(op, node, 1, &what)?;
                }
                Ok(())
            }
            Shape::Flag => self.fix(op, op, 1, &format!("the output of {name} is 1 byte")),
            Shape::Convert => Ok(()),
            Shape::Extend => {
                self.relations.push(Relation::Narrower {
                    narrow: inputs[0],
                    wide: op,
                    op,
                });
                Ok(())
            }
            Shape::Piece => {
                self.relations.push(Relation::Joined {
                    whole: op,
                    high: inputs[0],
                    low: inputs[1],
                    op,
                });
                Ok(())
            }
            Shape::Subpiece => {
                self.relations.push(Relation::Within {
                    part: op,
                    skip,
                    whole: inputs[0],
                    op,
                });
                Ok(())
            }
        }
    }

    fn pattern(&mut self, text: &str, expr: &Expr) -> Result<MatchNode, Problem> {
        let node = self.node(Side::Match, text, expr);
        let kind = match &expr.kind {
            Kind::Capture(name) => {
                let slot = self.captures.len();
                let (slot, first) = *self.captures.entry(name.clone()).or_insert((slot, node));
                self.same(
                    node,
                    first,
                    node,
                    &format!("every `{name}` is the same Varnode"),
                )?;
                Match::Capture { slot }
            }
            Kind::Const(number) => {
                let value = Some(*number);
                self.relations.push(Relation::Constant { node, value });
                Match::Const(*number)
            }
            Kind::Masked { value, mask } => {
                if value & !mask != 0 {
                    return Err(self.problem(
                        node,
                        format!(
                            "`{}` has value bits outside its mask, so no constant matches it",
                            self.nodes[node].text
                        ),
                    ));
                }
                self.relations
                    .push(Relation::Constant { node, value: None });
                Match::Masked {
                    value: *value,
                    mask: *mask,
                }
            }
            Kind::Op(code, inputs) => {
                let shape = self.op(node, *code, inputs.len())?;
                let inputs = inputs
                    .iter()
                    .map(|input| self.pattern(text, input))
                    .collect::<Result<Vec<_>, _>>()?;
                let skip = match (shape, inputs.get(1).map(|input| &input.kind)) {
                    (Shape::Subpiece, Some(Match::Const(offset))) if !offset.negative => {
                        offset.magnitude
                    }
                    (Shape::Subpiece, Some(Match::Const(_) | Match::Op { .. })) => {
                        return Err(self.problem(node, SUBPIECE_OFFSET.to_string()));
                    }
                    _ => 0,
                };
                let ids: Vec<usize> = inputs.iter().map(|input| input.node).collect();
                self.relate(node, *code, shape, &ids, skip)?;
                Match::Op {
                    code: *code,
                    inputs,
                }
            }
        };
        Ok(MatchNode { node, kind })
    }

    fn replacement(&mut self, text: &str, expr: &Expr) -> Result<BuildNode, Problem> {
        let node = self.node(Side::Replace, text, expr);
        let kind = match &expr.kind {
            Kind::Capture(name) => {
                let Some(&(slot, first)) = self.captures.get(name) else {
                    return Err(self.problem(
                        node,
                        format!("unbound capture `{name}`: the pattern does not name it"),
                    ));
                };
                self.same(
                    node,
                    first,
                    node,
                    &format!("`{name}` is the Varnode the pattern found"),
                )?;
                Build::Capture { slot }
            }
            Kind::Const(number) => {
                let value = Some(*number);
                self.relations.push(Relation::Constant { node, value });
                Build::Const(*number)
            }
            Kind::Masked { .. } => {
                return Err(self.problem(
                    node,
                    format!(
                        "`{}` matches many values, so a replacement cannot hold it",
                        self.nodes[node].text
                    ),
                ));
            }
            Kind::Op(code, inputs) => {
                let shape = self.op(node, *code, inputs.len())?;
                let inputs = inputs
                    .iter()
                    .map(|input| self.replacement(text, input))
                    .collect::<Result<Vec<_>, _>>()?;
                let second = inputs.get(1).map(|input| (input.node, &input.kind));
                let skip = match (shape, second) {
                    (Shape::Subpiece, Some((id, Build::Const(offset)))) if !offset.negative => {
                        self.loose.push(id);
                        offset.magnitude
                    }
                    (Shape::Subpiece, _) => {
                        return Err(self.problem(node, SUBPIECE_OFFSET.to_string()));
                    }
                    (Shape::Shift, Some((id, Build::Const(_)))) => {
                        self.loose.push(id);
                        0
                    }
                    _ => 0,
                };
                let ids: Vec<usize> = inputs.iter().map(|input| input.node).collect();
                self.relate(node, *code, shape, &ids, skip)?;
                Build::Op {
                    code: *code,
                    shape,
                    inputs,
                }
            }
        };
        Ok(BuildNode { node, kind })
    }

    /// Check every [`Relation`], after deriving the sizes a `PIECE` fixes.
    /// `Err` is the node of the relation that does not hold and what it asks.
    fn settle(&mut self) -> Result<(), (usize, String)> {
        loop {
            let derived = self.relations.iter().find_map(|relation| {
                let Relation::Joined {
                    whole, high, low, ..
                } = *relation
                else {
                    return None;
                };
                match (self.size(whole), self.size(high), self.size(low)) {
                    (None, Some(high), Some(low)) => Some((whole, high.checked_add(low)?)),
                    (Some(whole), None, Some(low)) if whole > low => Some((high, whole - low)),
                    (Some(whole), Some(high), None) if whole > high => Some((low, whole - high)),
                    _ => None,
                }
            });
            let Some((node, size)) = derived else {
                break;
            };
            let class = self.class(node);
            self.nodes[class].size = Some(size);
        }
        for relation in &self.relations {
            match *relation {
                Relation::Narrower { narrow, wide, op } => {
                    let same = self.class(narrow) == self.class(wide);
                    let known = matches!(
                        (self.size(narrow), self.size(wide)),
                        (Some(narrow), Some(wide)) if narrow >= wide
                    );
                    if same || known {
                        let asks = "the output of an extension is wider than its input";
                        return Err((op, asks.to_string()));
                    }
                }
                Relation::Joined {
                    whole,
                    high,
                    low,
                    op,
                } => {
                    let class = self.class(whole);
                    let part_is_whole = class == self.class(high) || class == self.class(low);
                    let known = matches!(
                        (self.size(whole), self.size(high), self.size(low)),
                        (Some(whole), Some(high), Some(low))
                            if high.checked_add(low) != Some(whole)
                    );
                    let too_big = matches!(
                        (self.size(high), self.size(low)),
                        (Some(high), Some(low)) if high.checked_add(low).is_none()
                    );
                    let too_small = [high, low].into_iter().any(|part| {
                        matches!(
                            (self.size(whole), self.size(part)),
                            (Some(whole), Some(part)) if whole <= part
                        )
                    });
                    if part_is_whole || known || too_big || too_small {
                        let asks = "the output of PIECE is as wide as its two inputs together";
                        return Err((op, asks.to_string()));
                    }
                }
                Relation::Within {
                    part,
                    skip,
                    whole,
                    op,
                } => {
                    let same = self.class(part) == self.class(whole);
                    let known = matches!(
                        (self.size(part), self.size(whole)),
                        (Some(part), Some(whole))
                            if part >= whole || skip > (whole - part) as u64
                    );
                    if same || known {
                        let asks = "the output of SUBPIECE is a narrower part of its input";
                        return Err((op, asks.to_string()));
                    }
                }
                Relation::Constant { node, value } => {
                    let Some(size) = self.size(node) else {
                        continue;
                    };
                    let text = &self.nodes[node].text;
                    if size > 8 {
                        let asks = format!(
                            "a constant is at most 8 bytes, but `{text}` is {}",
                            bytes(size)
                        );
                        return Err((node, asks));
                    }
                    if value.is_some_and(|value| value.bits(size).is_none()) {
                        return Err((node, format!("`{text}` does not fit {}", bytes(size))));
                    }
                }
            }
        }
        Ok(())
    }

    /// The first op of the replacement the pattern matches, if any: the rule
    /// would fire on what it wrote, every time. A capture of the replacement
    /// stands for a Varnode the pattern knows nothing about, so only the ops
    /// and constants the replacement spells out can match.
    fn refires(&self, pattern: &MatchNode, built: &BuildNode) -> Option<usize> {
        let mut slots = vec![None; self.captures.len()];
        if self.matches(pattern, built, &mut slots) {
            return Some(built.node);
        }
        let Build::Op { inputs, .. } = &built.kind else {
            return None;
        };
        inputs.iter().find_map(|input| self.refires(pattern, input))
    }

    /// Whether `pattern` matches the replacement node `built`, binding each
    /// capture slot to the replacement node it meets first.
    fn matches<'a>(
        &self,
        pattern: &MatchNode,
        built: &'a BuildNode,
        slots: &mut Vec<Option<&'a BuildNode>>,
    ) -> bool {
        let size = self.size(built.node);
        if matches!((self.size(pattern.node), size), (Some(wanted), Some(given)) if wanted != given)
        {
            return false;
        }
        match (&pattern.kind, &built.kind) {
            (Match::Capture { slot }, _) => match slots[*slot] {
                Some(held) => same_built(held, built),
                None => {
                    slots[*slot] = Some(built);
                    true
                }
            },
            (Match::Const(wanted), Build::Const(given)) => match size {
                Some(size) => wanted
                    .bits(size)
                    .is_some_and(|w| Some(w) == given.bits(size)),
                None => wanted == given,
            },
            (Match::Masked { value, mask }, Build::Const(given)) => {
                let given = match size {
                    Some(size) => given.bits(size),
                    None => (!given.negative).then_some(given.magnitude),
                };
                given.is_some_and(|given| given & mask == *value)
            }
            (
                Match::Op { code, inputs },
                Build::Op {
                    code: given_code,
                    inputs: given,
                    ..
                },
            ) => {
                if code != given_code {
                    return false;
                }
                let commutes = inputs.len() == 2 && type_op_info(*code).is_commutative();
                let orders: &[[usize; 2]] = if commutes {
                    &[[0, 1], [1, 0]]
                } else {
                    &[[0, 1]]
                };
                orders.iter().any(|order| {
                    let mut tried = slots.clone();
                    let all = inputs
                        .iter()
                        .zip(order)
                        .all(|(input, &at)| self.matches(input, &given[at], &mut tried));
                    if all {
                        *slots = tried;
                    }
                    all
                })
            }
            _ => false,
        }
    }

    /// The size of every node. A replacement node (from `first_built` on)
    /// must have one: a known size, or the size of what the pattern matched.
    fn sizes(&self, first_built: usize) -> Result<Vec<Size>, Problem> {
        (0..self.nodes.len())
            .map(|node| {
                let class = self.class(node);
                match self.nodes[class].size {
                    Some(size) => Ok(Size::Fixed(size)),
                    None if class < first_built => Ok(Size::Of(class)),
                    None if self.loose.contains(&node) => Ok(Size::Fixed(LOOSE_CONSTANT_SIZE)),
                    None => {
                        let text = &self.nodes[node].text;
                        Err(Problem {
                            side: Side::Replace,
                            message: format!(
                                "nothing gives `{text}` a size: write it as `{text}:N`, \
                                 N bytes wide"
                            ),
                        })
                    }
                }
            })
            .collect()
    }
}

/// Whether two replacement nodes spell out the same value.
fn same_built(a: &BuildNode, b: &BuildNode) -> bool {
    match (&a.kind, &b.kind) {
        (Build::Capture { slot: x }, Build::Capture { slot: y }) => x == y,
        (Build::Const(x), Build::Const(y)) => x == y,
        (
            Build::Op {
                code: code_a,
                inputs: inputs_a,
                ..
            },
            Build::Op {
                code: code_b,
                inputs: inputs_b,
                ..
            },
        ) => {
            code_a == code_b
                && inputs_a.len() == inputs_b.len()
                && inputs_a.iter().zip(inputs_b).all(|(x, y)| same_built(x, y))
        }
        _ => false,
    }
}
