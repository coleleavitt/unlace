//! Rewrite the C syntax tree before it prints: decompile one function without its calls to
//! one callee (a logging helper, a stack-protector check).
//!
//! ```sh
//! cargo run -p unlace --example tree_hook -- /usr/bin/true main __stack_chk_fail
//! ```
//!
//! The callback runs at the `statements` level, where every leaf of the tree lists the ops it
//! prints. It takes the calls to the named callee out of those lists; the printer then prints
//! the function without them. `unlace::unstable` is not covered by a stability promise.

use unlace::Decompiler;
use unlace::unstable::ctree::{CMaturity, StmtKind};

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let mut args = std::env::args().skip(1);
    let (Some(path), Some(name), Some(callee)) = (args.next(), args.next(), args.next()) else {
        eprintln!("usage: tree_hook <binary> <function> <callee to hide>");
        std::process::exit(2);
    };

    let mut decompiler =
        Decompiler::open(&path)?.with_tree_hook(CMaturity::Statements, move |tree, fd| {
            let hidden: Vec<_> = (0..fd.num_calls())
                .map(|i| fd.get_call_specs(i))
                .filter(|call| call.get_name() == callee)
                .map(|call| call.get_op())
                .collect();
            for id in tree.stmt_ids() {
                if let StmtKind::Stmts { ops, .. } = &mut tree.stmt_mut(id).kind {
                    ops.retain(|op| !hidden.contains(op));
                }
            }
        });
    println!("{}", decompiler.decompile_named(&name)?.c);
    Ok(())
}
