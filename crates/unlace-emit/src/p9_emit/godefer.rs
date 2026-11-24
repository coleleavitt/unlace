//! (unlace `godefer`) The Go defer chain of a function, as header comment lines.
//!
//! Go lowers `defer f(args)` on its non-open-coded path into a `runtime.deferproc(siz, fn)`
//! call at the registration point, `runtime.deferreturn` at exit, and `recover()` into
//! `runtime.gorecover`. With `option godefer` on, a function on a Go image that calls
//! `runtime.deferproc` gets header comment lines naming the defer chain: whether the frame
//! recovers, one line per distinct constant funcval, and `<opaque funcval>` for a funcval
//! that is not a constant. The registration and unwind calls print as before. Open-coded
//! defers (Go 1.14 and later) call no deferproc and get no line.

use std::collections::BTreeSet;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_num::opcodes::OpCode;

use crate::architecture::Architecture;
use crate::funcdata::Funcdata;

crate::unlace_flag!(
    /// (unlace `godefer`) Name a Go function's defer chain in its header comment.
    GoDefer,
    "godefer",
    "Go defer chain",
    unset: false,
    shipped: false
);

/// The header comment lines `option godefer` adds above `fd`: none unless the option is
/// on, the image is Go, and the function calls `runtime.deferproc`.
pub(crate) fn header_lines(fd: &Funcdata, arch: &Architecture) -> Vec<String> {
    if !arch.unlace_options.get::<GoDefer>().0 || !arch.source_lang().is_go() {
        return Vec::new();
    }
    let Some(space) = fd.get_address().get_space().map(Rc::clone) else {
        return Vec::new();
    };
    let mut registered = false;
    let mut recover = false;
    let mut opaque = false;
    let mut targets = BTreeSet::new();
    for id in fd.obank().iter_alive() {
        let Some(op) = fd.obank().get(id) else {
            continue;
        };
        if op.code() != OpCode::CPUI_CALL {
            continue;
        }
        let Some(index) = fd.get_call_specs_index(id) else {
            continue;
        };
        match fd.get_call_specs(index).get_name() {
            "runtime.deferproc" => {
                registered = true;
                match op
                    .get_in(2)
                    .and_then(|vn| fd.vbank().get(vn))
                    .filter(|vn| vn.is_constant() && vn.get_offset() != 0)
                {
                    Some(funcval) => {
                        targets.insert(funcval.get_offset());
                    }
                    None => opaque = true,
                }
            }
            "runtime.gorecover" => recover = true,
            _ => {}
        }
    }
    if !registered {
        return Vec::new();
    }
    let mut lines = vec![if recover {
        "Go panic recovery: defer/recover chain detected".to_string()
    } else {
        "Go defer chain detected".to_string()
    }];
    for addr in targets {
        let name = arch
            .symboltab
            .function_display_name_across_scopes(&Address::new(Rc::clone(&space), addr))
            .unwrap_or_else(|| format!("sub_{addr:X}"));
        lines.push(format!("defer {name}(...)"));
    }
    if opaque {
        lines.push("defer <opaque funcval>(...)".to_string());
    }
    if recover {
        lines.push("recover()".to_string());
    }
    lines
}
