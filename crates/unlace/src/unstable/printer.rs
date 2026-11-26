//! Printers over the exported C syntax tree (`docs/architecture/ctree.md` section 11).
//!
//! A decompiled function's text can be exported as a [`Tree`]: statements and expressions as
//! nested [`Node`]s, each with its kind, its operands, its C type where the printer knows it,
//! where its text is in the code and the instruction addresses it came from.
//! [`Decompiler::tree`] returns it; `unlace decompile --json --ctree` writes the same tree as
//! the record's `ctree` member, which [`tree_from_json`] reads back.
//!
//! [`Printer`] prints a tree. Each of its methods has a default that prints the tree in its
//! output language (`tree.lang`, the layout and the forms of that language), so [`CPrinter`]
//! (the defaults and nothing else) reproduces the function's code byte for byte in C, Rust, Go
//! and Java alike, and a printer for another flavour overrides only what it prints differently.
//! `examples/let_flavour.rs` prints declarations as `let` bindings.

use std::panic::{AssertUnwindSafe, catch_unwind};

use unlace_cli::embed;

pub use unlace_decomp::ctreeexport::{
    Brace, CPrinter, ExportTree as Tree, Form, Keyword, Kind, Node, Place, Printer, Span, Style,
    Writer, item_column, print, print_braced, print_c, print_expr, print_function, print_item,
    print_statement,
};

use crate::Decompiler;

/// Why a function has no [`Tree`].
#[derive(Debug, thiserror::Error)]
pub enum TreeError {
    /// The function was not found or did not decompile.
    #[error(transparent)]
    Decompile(#[from] crate::Error),
    /// The function decompiled, but its text has no tree: the output language is not C, or
    /// the text was rewritten after it was printed. The reason is the record's `ctree_error`.
    #[error("no tree: {0}")]
    Unavailable(String),
    /// The text is not a `ctree` member.
    #[error("not a ctree document: {0}")]
    Json(String),
}

/// The tree a `ctree` member of `unlace decompile --json --ctree` holds, from its JSON text.
///
/// ```
/// use unlace::unstable::printer::{print_c, tree_from_json};
///
/// let tree = tree_from_json(
///     r#"{"style": {"indent": 2, "comment_indent": 20, "brace_function": "next_line",
///         "brace_ifelse": "same_line", "brace_loop": "same_line", "brace_switch": "same_line",
///         "keywords": {}},
///        "root": {"kind": "function", "children": [
///          {"kind": "prototype", "text": "void f(void)"},
///          {"kind": "block", "children": [{"kind": "return"}]}]}}"#,
/// )?;
/// assert_eq!(print_c(&tree), "void f(void)\n{\n  return;\n}");
/// # Ok::<(), unlace::unstable::printer::TreeError>(())
/// ```
pub fn tree_from_json(text: &str) -> Result<Tree, TreeError> {
    embed::ctree_from_json(text).map_err(TreeError::Json)
}

impl Decompiler {
    /// Decompile the function at `address` and export its text as a tree.
    ///
    /// ```no_run
    /// use unlace::unstable::printer::{Kind, print_c};
    ///
    /// let mut decompiler = unlace::Decompiler::open("a.out")?;
    /// let tree = decompiler.tree(0x401000)?;
    /// let mut calls = 0;
    /// tree.root.walk(&mut |node| calls += usize::from(node.kind == Kind::Call));
    /// println!("{calls} calls\n{}", print_c(&tree));
    /// # Ok::<(), unlace::unstable::printer::TreeError>(())
    /// ```
    pub fn tree(&mut self, address: u64) -> Result<Tree, TreeError> {
        self.tree_selected(&embed::Selector::Address(address), format!("{address:#x}"))
    }

    /// [`Decompiler::tree`] of the function called `name` (or carrying it as an alias).
    pub fn tree_named(&mut self, name: &str) -> Result<Tree, TreeError> {
        self.tree_selected(&embed::Selector::Name(name.to_string()), name.to_string())
    }

    fn tree_selected(
        &mut self,
        selector: &embed::Selector,
        what: String,
    ) -> Result<Tree, TreeError> {
        let session = self.session()?;
        session.set_ctree(true);
        let outcome = catch_unwind(AssertUnwindSafe(|| session.decompile(selector)));
        session.set_ctree(false);
        let mut output = match outcome {
            Ok(Ok(output)) => output,
            Ok(Err(reason)) => return Err(crate::Error::NotFound { what, reason }.into()),
            Err(panic) => {
                self.session = None;
                return Err(crate::Error::Panic(crate::panic_message(panic.as_ref())).into());
            }
        };
        let tree = output.ctree.take();
        crate::Decompiled::from_output(output)?;
        match tree {
            Some(Ok(tree)) => Ok(tree),
            Some(Err(reason)) => Err(TreeError::Unavailable(reason)),
            None => Err(TreeError::Unavailable(
                "the tree was not exported".to_string(),
            )),
        }
    }
}
