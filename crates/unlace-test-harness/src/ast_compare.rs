use std::fmt;

use thiserror::Error;
use tree_sitter::{Node, Parser, Tree};

/// Kinds of tree-sitter nodes to skip during structural comparison.
///
/// These are either cosmetic (comments, whitespace) or name-only
/// (identifiers that the decompiler is free to rename).
const SKIP_KINDS: &[&str] = &[
    "comment",
    "preproc_include",
    "preproc_def",
    "preproc_function_def",
    "identifier",
    "field_identifier",
    "type_identifier",
];

#[derive(Debug, Clone)]
pub struct SourceLocation {
    pub line: usize,
    pub column: usize,
}

impl fmt::Display for SourceLocation {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}:{}", self.line, self.column)
    }
}

/// Describes a structural divergence between two C ASTs.
#[derive(Debug, Error)]
pub enum AstDivergence {
    #[error("parse error in expected source")]
    ExpectedParseError,

    #[error("parse error in actual source")]
    ActualParseError,

    #[error(
        "node kind mismatch at depth {depth}: expected `{expected_kind}` (expected.c:{expected_loc}) \
         but found `{actual_kind}` (actual.c:{actual_loc})"
    )]
    KindMismatch {
        depth: usize,
        expected_kind: String,
        expected_loc: SourceLocation,
        actual_kind: String,
        actual_loc: SourceLocation,
    },

    #[error(
        "expected has extra node `{expected_kind}` at depth {depth} (expected.c:{expected_loc}) \
         but actual tree ended"
    )]
    ExpectedExtra {
        depth: usize,
        expected_kind: String,
        expected_loc: SourceLocation,
    },

    #[error(
        "actual has extra node `{actual_kind}` at depth {depth} (actual.c:{actual_loc}) \
         but expected tree ended"
    )]
    ActualExtra {
        depth: usize,
        actual_kind: String,
        actual_loc: SourceLocation,
    },
}

/// Compare two C source strings for AST-structural equivalence.
///
/// Parses both strings with tree-sitter-c and walks the parse trees in
/// lockstep, skipping identifiers, comments, preprocessor directives,
/// and whitespace. Returns `Ok(())` if the structures match, or an
/// `Err(AstDivergence)` describing the first point of divergence.
pub fn ast_equiv(expected: &str, actual: &str) -> Result<(), AstDivergence> {
    let expected_tree = parse_c(expected).ok_or(AstDivergence::ExpectedParseError)?;
    let actual_tree = parse_c(actual).ok_or(AstDivergence::ActualParseError)?;

    let mut expected_iter = StructuralIter::new(expected_tree.root_node());
    let mut actual_iter = StructuralIter::new(actual_tree.root_node());

    loop {
        match (expected_iter.next(), actual_iter.next()) {
            (None, None) => return Ok(()),
            (Some((ek, ed, enode)), None) => {
                return Err(AstDivergence::ExpectedExtra {
                    depth: ed,
                    expected_kind: ek.to_string(),
                    expected_loc: loc(enode),
                });
            }
            (None, Some((ak, ad, anode))) => {
                return Err(AstDivergence::ActualExtra {
                    depth: ad,
                    actual_kind: ak.to_string(),
                    actual_loc: loc(anode),
                });
            }
            (Some((ek, ed, enode)), Some((ak, ad, anode))) => {
                if ed != ad || ek != ak {
                    return Err(AstDivergence::KindMismatch {
                        depth: ed,
                        expected_kind: ek.to_string(),
                        expected_loc: loc(enode),
                        actual_kind: ak.to_string(),
                        actual_loc: loc(anode),
                    });
                }
            }
        }
    }
}

/// The pre-order node-kind sequence of `source`'s C syntax tree, skipping
/// [`SKIP_KINDS`]: the structural fingerprint [`ast_equiv`] compares exactly,
/// for callers that want a similarity measure instead of a verdict. `None`
/// when the source does not parse at all.
pub fn ast_kinds(source: &str) -> Option<Vec<&'static str>> {
    let tree = parse_c(source)?;
    Some(
        StructuralIter::new(tree.root_node())
            .map(|(kind, _, _)| kind)
            .collect(),
    )
}

fn parse_c(source: &str) -> Option<Tree> {
    let mut parser = Parser::new();
    parser
        .set_language(&tree_sitter_c::LANGUAGE.into())
        .expect("failed to load tree-sitter-c grammar");
    parser.parse(source, None)
}

fn loc(node: Node<'_>) -> SourceLocation {
    let point = node.start_position();
    SourceLocation {
        line: point.row + 1,
        column: point.column + 1,
    }
}

fn should_skip(kind: &str) -> bool {
    SKIP_KINDS.contains(&kind)
}

/// Pre-order iterator over a tree-sitter tree that yields
/// `(node_kind, depth, node)` tuples, skipping nodes whose kind
/// appears in [`SKIP_KINDS`].
///
/// Uses an explicit stack rather than tree-sitter's `TreeCursor` to
/// make skip logic straightforward.
struct StructuralIter<'tree> {
    /// Stack of `(node, depth)`. Children are pushed in reverse order
    /// so that left-to-right traversal is preserved.
    stack: Vec<(Node<'tree>, usize)>,
}

impl<'tree> StructuralIter<'tree> {
    fn new(root: Node<'tree>) -> Self {
        Self {
            stack: vec![(root, 0)],
        }
    }
}

impl<'tree> Iterator for StructuralIter<'tree> {
    type Item = (&'static str, usize, Node<'tree>);

    fn next(&mut self) -> Option<Self::Item> {
        loop {
            let (node, depth) = self.stack.pop()?;
            let kind = node.kind();

            // Skip the entire subtree for ignored node kinds.
            if should_skip(kind) {
                continue;
            }

            // Push children in reverse so leftmost is popped first.
            let child_count = node.named_child_count();
            for i in (0..child_count).rev() {
                if let Some(child) = node.named_child(i) {
                    self.stack.push((child, depth + 1));
                }
            }

            return Some((kind, depth, node));
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn identical_trees_match() {
        let src = "int foo(int x) { return x + 1; }";
        assert!(ast_equiv(src, src).is_ok());
    }

    #[test]
    fn renamed_identifiers_match() {
        let a = "int foo(int x) { return x + 1; }";
        let b = "int bar(int y) { return y + 1; }";
        assert!(ast_equiv(a, b).is_ok());
    }

    #[test]
    fn different_structure_diverges() {
        let a = "int f() { if (x) return 1; }";
        let b = "int f() { while (x) return 1; }";
        let err = ast_equiv(a, b).unwrap_err();
        let msg = err.to_string();
        assert!(
            msg.contains("if_statement") || msg.contains("while_statement"),
            "unexpected error: {msg}"
        );
    }

    #[test]
    fn empty_sources_match() {
        assert!(ast_equiv("", "").is_ok());
    }

    #[test]
    fn comments_ignored() {
        let a = "/* comment */ int f() { return 0; }";
        let b = "int f() { return 0; }";
        assert!(ast_equiv(a, b).is_ok());
    }

    #[test]
    fn preproc_directives_ignored() {
        let a = "#include <stdio.h>\nint f() { return 0; }";
        let b = "int f() { return 0; }";
        assert!(ast_equiv(a, b).is_ok());
    }
}
