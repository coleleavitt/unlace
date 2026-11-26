//! Print a function in another flavour from its exported C syntax tree: locals as `let`
//! bindings, the prototype as `fn name(arg: type) -> type`, casts as `(value as type)`.
//!
//! ```sh
//! cargo run -p unlace --example let_flavour -- /usr/bin/true main
//! ```
//!
//! A flavour is a [`Printer`]: it overrides the methods for what it prints differently and
//! leaves the rest to the defaults, which print C in the decompiler's layout and call back
//! into the printer for the nodes under the one they print. Statements, operators, calls and
//! comments here are the defaults. `unlace::unstable` is not covered by a stability promise.

use unlace::Decompiler;
use unlace::unstable::printer::{Form, Kind, Node, Printer, Writer, print, print_c, print_expr};

struct LetFlavour;

/// The first child of `node` with `kind`.
fn child(node: &Node, kind: Kind) -> Option<&Node> {
    node.children.iter().find(|child| child.kind == kind)
}

/// `name: type` of a declaration node.
fn binding(decl: &Node) -> String {
    let name = child(decl, Kind::Var).map_or("_", |var| var.text.as_str());
    format!("{name}: {}", decl.ty.as_deref().unwrap_or("_"))
}

impl Printer for LetFlavour {
    fn prototype(&mut self, w: &mut Writer, node: &Node) {
        let name = child(node, Kind::Func).map_or("_", |func| func.text.as_str());
        let parameters: Vec<String> = node
            .children
            .iter()
            .filter(|child| child.kind == Kind::Decl)
            .map(binding)
            .collect();
        w.push(&format!("fn {name}({})", parameters.join(", ")));
        if let Some(returns) = child(node, Kind::Type).filter(|ty| ty.text != "void") {
            w.push(&format!(" -> {}", returns.text));
        }
    }

    fn declaration(&mut self, w: &mut Writer, node: &Node) {
        w.push(&format!("let mut {};", binding(node)));
    }

    fn expr(&mut self, w: &mut Writer, node: &Node) {
        match node.children.as_slice() {
            [ty, value] if node.kind == Kind::Op && node.form == Form::Presurround => {
                w.push("(");
                self.expr(w, value);
                w.push(" as ");
                self.expr(w, ty);
                w.push(")");
            }
            _ => print_expr(self, w, node),
        }
    }
}

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let mut args = std::env::args().skip(1);
    let (Some(path), Some(name)) = (args.next(), args.next()) else {
        eprintln!("usage: let_flavour <binary> <function>");
        std::process::exit(2);
    };
    let tree = Decompiler::open(&path)?.tree_named(&name)?;
    println!("{}\n", print_c(&tree));
    println!("{}", print(&mut LetFlavour, &tree));
    Ok(())
}
