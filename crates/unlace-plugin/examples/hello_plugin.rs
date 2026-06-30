//! A minimal, real `UnlacePlugin` worked example.
//!
//! Run with:
//!
//! ```text
//! cargo run -p unlace-plugin --example hello_plugin
//! ```
//!
//! It implements the [`UnlacePlugin`] trait, registers the plugin in a
//! [`PluginRegistry`], builds a tiny SSA function, dispatches the
//! `on_function` hook through the registry, and prints the resulting
//! [`PluginFinding`]s. This is the smallest end-to-end use of the SDK:
//! implement -> register -> run -> collect findings.

use smallvec::smallvec;
use unlace_ir::ssa::{SsaFunction, build_ssa};
use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};
use unlace_plugin::{PluginFinding, PluginRegistry, UnlacePlugin};

/// A plugin that emits exactly one finding per recovered function,
/// naming the function it observed and anchoring the finding at the
/// function's entry address.
struct HelloPlugin;

impl UnlacePlugin for HelloPlugin {
    /// Short identifier used for logging and CLI flags.
    fn name(&self) -> &str {
        "hello"
    }

    /// SemVer version string for the plugin.
    fn version(&self) -> &str {
        "0.1.0"
    }

    /// Called once per recovered SSA function. We return a single
    /// [`PluginFinding`] greeting the function by name.
    fn on_function(&self, func: &SsaFunction) -> Vec<PluginFinding> {
        vec![PluginFinding {
            kind: "hello".into(),
            message: format!("hello from function '{}'", func.function.name),
            addr: Some(func.function.addr),
        }]
    }
}

/// Build a trivial single-block SSA function so the example is fully
/// self-contained (no binary on disk required).
fn demo_function(name: &str, addr: u64) -> SsaFunction {
    let mut func = Function::new(name, BlockId(0), addr);
    let mut bb = BasicBlock::new(BlockId(0));
    bb.insns.push(IrInsn::without_output(
        IrOp::Return,
        smallvec![Varnode::constant(0, 8)],
        addr,
    ));
    func.insert_block(bb);
    build_ssa(func)
}

fn main() {
    // 1. Implement + register the plugin in the runtime registry.
    let mut registry = PluginRegistry::new();
    registry.register(Box::new(HelloPlugin));
    println!("registered {} plugin(s)", registry.len());

    // 2. Dispatch the on_function hook across every registered plugin.
    for (name, addr) in [("main", 0x1000u64), ("helper", 0x1040u64)] {
        let ssa = demo_function(name, addr);
        let findings = registry.run_all_on_function(&ssa);
        for finding in &findings {
            match finding.addr {
                Some(a) => println!("[{}] {} @ {:#x}", finding.kind, finding.message, a),
                None => println!("[{}] {}", finding.kind, finding.message),
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn hello_plugin_emits_one_named_finding_per_function() {
        let mut registry = PluginRegistry::new();
        registry.register(Box::new(HelloPlugin));

        let ssa = demo_function("target", 0x2000);
        let findings = registry.run_all_on_function(&ssa);

        assert_eq!(findings.len(), 1);
        assert_eq!(findings[0].kind, "hello");
        assert_eq!(findings[0].message, "hello from function 'target'");
        assert_eq!(findings[0].addr, Some(0x2000));
    }
}
