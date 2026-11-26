//! (unlace `ctreeexport`) What the printer records for the exported C syntax tree
//! (`p9_emit/ctreeexport.rs`).
//!
//! A tree-capture render ([`PrintC::doc_function_capture`]) is the token render of
//! `doc_function_tokens` with one addition: the RPN driver records a node for every operator
//! token it pushes and every atom it prints, with the range of captured tokens the node
//! printed. Statements and declarations need no record of their own; the exporter reads them
//! from the tokens and the emitter's statement marks. Nothing is recorded on any other render.

use std::collections::BTreeMap;

use super::{PrintC, tokens};
use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::ctreeexport::{
    Brace, Capture, CapturedExpr, ExprShape, Form, Keyword, LeafKind, LooseOps, Style,
};
use crate::funcdata::Funcdata;
use crate::funcdata_facing::FuncdataFacingExt;
use crate::prettyprint::{BraceStyle, CaptureMark, Emit, EmitToken, MarkupProvenance};
use crate::printlanguage::{Atom, AtomData, IrKey, OpToken, SyntaxHighlight, TagType, TokenType};

/// One expression node the RPN driver printed.
struct RpnNode {
    parent: Option<u32>,
    first: u32,
    end: u32,
    /// The operator token; `None` for an atom.
    tok: Option<&'static OpToken>,
    /// An atom's text.
    text: String,
    paren: bool,
    tag: TagType,
    constant: bool,
    op: Option<IrKey>,
    vn: Option<IrKey>,
}

/// The nodes of one tree-capture render, in the order they were opened.
#[derive(Default)]
pub(super) struct RpnRecord {
    nodes: Vec<RpnNode>,
    open: Vec<u32>,
    /// Token ranges the RPN engine itself printed: operator tokens and its parentheses.
    engine: Vec<(u32, u32)>,
}

impl RpnRecord {
    /// Forget the open nodes (the RPN stack was cleared).
    pub(super) fn reset_open(&mut self) {
        self.open.clear();
    }

    fn open_node(&mut self, node: RpnNode) {
        let id = u32::try_from(self.nodes.len()).expect("captured expression count");
        self.nodes.push(RpnNode {
            parent: self.open.last().copied(),
            ..node
        });
        self.open.push(id);
    }
}

fn index(count: usize) -> u32 {
    u32::try_from(count).expect("captured token count")
}

impl PrintC {
    /// Record the operator node `tok` opens, before its parenthesis prints.
    pub(super) fn rpn_open(&mut self, tok: &'static OpToken, op: Option<IrKey>, paren: bool) {
        let first = index(self.emit.token_count());
        if let Some(record) = self.rpn_record.as_mut() {
            record.open_node(RpnNode {
                parent: None,
                first,
                end: first,
                tok: Some(tok),
                text: String::new(),
                paren,
                tag: TagType::Syntax,
                constant: false,
                op,
                vn: None,
            });
        }
    }

    /// Record the atom about to print.
    pub(super) fn rpn_leaf_open(&mut self, atom: &Atom) {
        let first = index(self.emit.token_count());
        let constant_vn = self.rpn_constant;
        if let Some(record) = self.rpn_record.as_mut() {
            record.open_node(RpnNode {
                parent: None,
                first,
                end: first,
                tok: None,
                text: atom.name.clone(),
                paren: false,
                tag: atom.tag,
                constant: atom.highlight == SyntaxHighlight::const_color,
                op: atom.op,
                vn: match atom.data {
                    AtomData::Vn(vn) => Some(vn),
                    _ if atom.highlight == SyntaxHighlight::const_color => constant_vn,
                    _ => None,
                },
            });
        }
    }

    /// Close the innermost recorded node: everything it prints is printed.
    pub(super) fn rpn_close(&mut self) {
        let end = index(self.emit.token_count());
        if let Some(record) = self.rpn_record.as_mut()
            && let Some(id) = record.open.pop()
        {
            record.nodes[id as usize].end = end;
        }
    }

    /// Record that the tokens from `first` on were printed by the RPN engine itself.
    pub(super) fn rpn_engine_tokens(&mut self, first: usize) {
        let end = index(self.emit.token_count());
        if let Some(record) = self.rpn_record.as_mut()
            && index(first) < end
        {
            record.engine.push((index(first), end));
        }
    }

    /// The token render of [`doc_function_tokens`](Self::doc_function_tokens) with the
    /// record the tree exporter needs beside it: the expression nodes, the statement marks and
    /// the printer's style.
    pub fn doc_function_capture(
        &mut self,
        fd: &Funcdata,
        arch: &Architecture,
    ) -> (MarkupProvenance, Vec<EmitToken>, Capture) {
        self.set_markup(true);
        self.emit.set_capture_tokens(true);
        self.rpn_record = Some(RpnRecord::default());
        self.emit_function_document(fd, arch);
        let _ = self.emit.flush();
        let provenance = self.emit.take_markup_provenance();
        let tokens = self.emit.take_markup_tokens();
        let marks = self.emit.take_markup_marks();
        let record = self.rpn_record.take().unwrap_or_default();
        let capture = self.finish_capture(fd, record, marks);
        self.set_markup(false);
        (provenance, tokens, capture)
    }

    /// The capture of a finished render. A leaf's type is its Varnode's. An operator's is the
    /// type of its op's output when the node is the outermost one printed for that op, or the
    /// right side of the assignment that op prints to its own output (`i = i + 1`); any other
    /// node printed for its parent's op is a part of the parent and has no type of its own.
    fn finish_capture(&self, fd: &Funcdata, record: RpnRecord, marks: Vec<CaptureMark>) -> Capture {
        // The cache keeps each type alive, so a pointer key is never reused by another type.
        let names: std::cell::RefCell<
            BTreeMap<usize, (std::rc::Rc<crate::dtype::Datatype>, String)>,
        > = std::cell::RefCell::new(BTreeMap::new());
        let spell = |ty: &std::rc::Rc<crate::dtype::Datatype>| -> String {
            names
                .borrow_mut()
                .entry(std::rc::Rc::as_ptr(ty) as usize)
                .or_insert_with(|| {
                    let (front, back) = super::declarator_parts(ty, self.rt_ctx.clone());
                    (std::rc::Rc::clone(ty), format!("{front}{back}"))
                })
                .1
                .clone()
        };
        let type_of = |vn: VarnodeId| -> Option<String> {
            let ty = fd.vbank().get(vn)?.get_type();
            Some(spell(ty))
        };
        let op_of = |key: IrKey| OpId::from(slotmap::KeyData::from_ffi(key));
        let vn_of = |key: IrKey| VarnodeId::from(slotmap::KeyData::from_ffi(key));
        let output = |op: IrKey| fd.obank().get(op_of(op))?.get_out();
        let mut kids: Vec<Vec<usize>> = vec![Vec::new(); record.nodes.len()];
        for (id, node) in record.nodes.iter().enumerate() {
            if let Some(parent) = node.parent {
                kids[parent as usize].push(id);
            }
        }
        let assigned = |id: usize, node: &RpnNode| {
            let Some(parent) = node.parent else {
                return false;
            };
            let [target, .., value] = kids[parent as usize].as_slice() else {
                return false;
            };
            let (above, target) = (&record.nodes[parent as usize], &record.nodes[*target]);
            above
                .tok
                .is_some_and(|tok| std::ptr::eq(tok, &tokens::ASSIGNMENT))
                && *value == id
                && target.tok.is_none()
                && target.vn.is_some()
                && target.vn.map(vn_of) == node.op.and_then(output)
        };
        let exprs = record
            .nodes
            .iter()
            .enumerate()
            .map(|(id, node)| {
                let parent_op = node
                    .parent
                    .and_then(|parent| record.nodes[parent as usize].op);
                let ty = match node.tok {
                    None if node.constant => node
                        .vn
                        .zip(node.op)
                        .map(|(vn, op)| fd.vn_type_read_facing(vn_of(vn), op_of(op)))
                        .map(|ty| spell(&ty)),
                    None => node.vn.map(vn_of).and_then(type_of),
                    Some(tok) if tok.token_type != TokenType::HiddenFunction => node
                        .op
                        .filter(|op| Some(*op) != parent_op || assigned(id, node))
                        .and_then(output)
                        .and_then(type_of),
                    Some(_) => None,
                };
                CapturedExpr {
                    parent: node.parent,
                    first: node.first,
                    end: node.end,
                    shape: match node.tok {
                        Some(tok) => ExprShape::Op {
                            name: token_name(tok),
                            form: match tok.token_type {
                                TokenType::Binary => Form::Binary,
                                TokenType::UnaryPrefix => Form::Prefix,
                                TokenType::Postsurround => Form::Postsurround,
                                TokenType::Presurround => Form::Presurround,
                                TokenType::Space => Form::Space,
                                TokenType::HiddenFunction => Form::Hidden,
                            },
                            open: self.op_spelling(tok),
                            close: tok.print2,
                            spacing: u32::try_from(tok.spacing).unwrap_or(0),
                            operands: u32::try_from(tok.stage).unwrap_or(0),
                        },
                        None => ExprShape::Leaf(
                            match node.tag {
                                _ if node.constant => LeafKind::Const,
                                TagType::VarToken | TagType::LiteralToken => LeafKind::Var,
                                TagType::FuncToken => LeafKind::Func,
                                TagType::TypeToken => LeafKind::Type,
                                TagType::FieldToken | TagType::BitFieldToken => LeafKind::Field,
                                TagType::CaseToken => LeafKind::Const,
                                TagType::Syntax | TagType::OpToken => LeafKind::Text,
                                TagType::BlankToken => LeafKind::Empty,
                            },
                            node.text.clone(),
                        ),
                    },
                    paren: node.paren,
                    op: node
                        .op
                        .and_then(|op| Some(u64::from(fd.obank().get(op_of(op))?.get_time()))),
                    ty,
                }
            })
            .collect();
        let brace = |style: crate::options::BraceStyle| match self.output_brace(style) {
            BraceStyle::SameLine | BraceStyle::SameLineRequired => Brace::SameLine,
            BraceStyle::NextLine => Brace::NextLine,
            BraceStyle::SkipLine => Brace::SkipLine,
        };
        let lang = self.lang();
        let keywords = [
            (Keyword::Break, lang.kw_break),
            (Keyword::Case, lang.kw_case),
            (Keyword::Continue, lang.kw_continue),
            (Keyword::Default, lang.kw_default),
            (Keyword::Do, lang.kw_do),
            (Keyword::Else, lang.kw_else),
            (Keyword::For, lang.kw_for),
            (Keyword::Goto, lang.kw_goto),
            (Keyword::If, lang.kw_if),
            (Keyword::Return, lang.kw_return),
            (Keyword::Switch, lang.kw_switch),
            (Keyword::True, lang.kw_true),
            (Keyword::While, lang.kw_while),
        ]
        .into_iter()
        .filter(|(keyword, spelled)| *spelled != keyword.c())
        .map(|(keyword, spelled)| (keyword, spelled.to_string()))
        .collect();
        Capture {
            exprs,
            engine_tokens: record.engine,
            marks,
            style: Style {
                indent: u32::try_from(self.emit.get_indent_increment()).unwrap_or(0),
                comment_indent: u32::try_from(self.context.line_comment_indent()).unwrap_or(0),
                brace_function: brace(self.options.brace_func),
                brace_ifelse: brace(self.options.brace_ifelse),
                brace_loop: brace(self.options.brace_loop),
                brace_switch: brace(self.options.brace_switch),
                keywords,
            },
            loose: LooseOps {
                assign: self.op_spelling(&tokens::ASSIGNMENT),
                or: self.op_spelling(&tokens::BOOLEAN_OR),
                and: self.op_spelling(&tokens::BOOLEAN_AND),
                not: self.op_spelling(&tokens::BOOLEAN_NOT),
            },
            c_output: self.out_lang == crate::lang::OutLang::C,
        }
    }
}

/// The name the exported tree gives an operator token of the C token table; `""` for a token
/// that has none (a token local to one printing routine, another language's token).
fn token_name(tok: &'static OpToken) -> &'static str {
    const NAMES: [(&OpToken, &str); 52] = [
        (&tokens::SCOPE, "scope"),
        (&tokens::OBJECT_MEMBER, "member"),
        (&tokens::POINTER_MEMBER, "ptr_member"),
        (&tokens::SUBSCRIPT, "subscript"),
        (&tokens::FUNCTION_CALL, "call"),
        (&tokens::BITWISE_NOT, "bit_not"),
        (&tokens::BOOLEAN_NOT, "not"),
        (&tokens::UNARY_MINUS, "neg"),
        (&tokens::UNARY_PLUS, "pos"),
        (&tokens::ADDRESSOF, "addr_of"),
        (&tokens::DEREFERENCE, "deref"),
        (&tokens::TYPECAST, "cast"),
        (&tokens::MULTIPLY, "mul"),
        (&tokens::DIVIDE, "div"),
        (&tokens::MODULO, "rem"),
        (&tokens::BINARY_PLUS, "add"),
        (&tokens::BINARY_MINUS, "sub"),
        (&tokens::SHIFT_LEFT, "shl"),
        (&tokens::SHIFT_RIGHT, "shr"),
        (&tokens::SHIFT_SRIGHT, "sar"),
        (&tokens::LESS_THAN, "lt"),
        (&tokens::LESS_EQUAL, "le"),
        (&tokens::GREATER_THAN, "gt"),
        (&tokens::GREATER_EQUAL, "ge"),
        (&tokens::EQUAL, "eq"),
        (&tokens::NOT_EQUAL, "ne"),
        (&tokens::BITWISE_AND, "bit_and"),
        (&tokens::BITWISE_XOR, "bit_xor"),
        (&tokens::BITWISE_OR, "bit_or"),
        (&tokens::BOOLEAN_AND, "and"),
        (&tokens::BOOLEAN_XOR, "xor"),
        (&tokens::BOOLEAN_OR, "or"),
        (&tokens::CONDITIONAL, "cond"),
        (&tokens::ASSIGNMENT, "assign"),
        (&tokens::POST_INCREMENT, "post_inc"),
        (&tokens::COMMA, "comma"),
        (&tokens::NEW_OP, "new"),
        (&tokens::MULTEQUAL, "mul_assign"),
        (&tokens::DIVEQUAL, "div_assign"),
        (&tokens::REMEQUAL, "rem_assign"),
        (&tokens::PLUSEQUAL, "add_assign"),
        (&tokens::MINUSEQUAL, "sub_assign"),
        (&tokens::LEFTEQUAL, "shl_assign"),
        (&tokens::RIGHTEQUAL, "shr_assign"),
        (&tokens::ANDEQUAL, "and_assign"),
        (&tokens::OREQUAL, "or_assign"),
        (&tokens::XOREQUAL, "xor_assign"),
        (&tokens::TYPE_EXPR_SPACE, "type_expr"),
        (&tokens::TYPE_EXPR_NOSPACE, "type_expr"),
        (&tokens::FLOAT_MULTIPLY, "mul"),
        (&tokens::FLOAT_PLUS, "add"),
        (&tokens::ENUM_CAT, "enum_or"),
    ];
    NAMES
        .iter()
        .find(|(known, _)| std::ptr::eq(*known, tok))
        .map_or("", |(_, name)| name)
}
