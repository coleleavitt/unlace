//! (unlace `taintcheck`) Report-only taint check: data from an input source reaches
//! a command-execution sink.
//!
//! Ported from the archived research decompiler's `taint_engine.rs` (`propagate_taint`).
//! A call to a listed input source (`recv`, `getenv`, ...) taints its return value.
//! Taint then flows forward over the live ops flow-insensitively: an op whose input is
//! tainted taints its output, and the first source it traces to is kept as its origin.
//! A call to a listed command sink (`system`, `execl`, ...) that takes a tainted
//! argument is reported as a warning comment at the call. Argument slot 0 of a CALL is
//! the target address, so it is never a tainted argument.
//!
//! Limits: memory is not tracked (a buffer an input call fills is not tainted), and only
//! the return value of a source is a seed. The check changes no output apart from the
//! added warnings, and it runs only under option `taintcheck` (default off).

use std::collections::BTreeMap;

use unlace_base::address::Address;
use unlace_num::opcodes::OpCode;

use crate::context::VarnodeId;
use crate::funcdata::Funcdata;

crate::unlace_flag!(
    /// (unlace) Report data from an input source that reaches a command sink (option
    /// `taintcheck`). See [`crate::taintcheck`].
    TaintCheck,
    "taintcheck",
    "taint from an input source reaching a command sink",
    unset: false,
    shipped: false
);

/// Callees whose return value is attacker-controlled input.
const SOURCES: &[&str] = &[
    "recv", "recvfrom", "read", "fread", "fgets", "getenv", "gets",
];

/// Callees that run a command or program from their arguments.
const SINKS: &[&str] = &[
    "system", "popen", "execl", "execle", "execlp", "execv", "execve", "execvp",
];

/// Propagation rounds before the fixed point is assumed; origins only grow, so this bounds
/// the work on a pathological def-use chain.
const MAX_PASSES: usize = 64;

/// One live op as the check reads it: its callee name when it is a call, its output, and
/// its inputs in slot order (slot 0 of a CALL is the target address).
pub struct Step<'a, V> {
    pub callee: Option<&'a str>,
    pub out: Option<V>,
    pub ins: &'a [Option<V>],
}

/// A source-to-sink flow: the sink call's index in the step list.
#[derive(Debug, PartialEq, Eq)]
pub struct Reach {
    pub step: usize,
    pub source: &'static str,
    pub sink: &'static str,
}

fn listed(name: &str, list: &'static [&'static str]) -> Option<&'static str> {
    list.iter().copied().find(|c| *c == name)
}

/// Every sink call that takes a value traced to a source, in step order.
pub fn reach<V: Copy + Ord>(steps: &[Step<'_, V>]) -> Vec<Reach> {
    let mut origin: BTreeMap<V, &'static str> = BTreeMap::new();
    for s in steps {
        if let (Some(src), Some(out)) = (s.callee.and_then(|n| listed(n, SOURCES)), s.out) {
            origin.entry(out).or_insert(src);
        }
    }
    for _ in 0..MAX_PASSES {
        let mut changed = false;
        for s in steps {
            let Some(out) = s.out else { continue };
            if origin.contains_key(&out) {
                continue;
            }
            if let Some(src) = s.ins.iter().flatten().find_map(|v| origin.get(v).copied()) {
                origin.insert(out, src);
                changed = true;
            }
        }
        if !changed {
            break;
        }
    }
    let mut found = Vec::new();
    for (step, s) in steps.iter().enumerate() {
        let Some(sink) = s.callee.and_then(|n| listed(n, SINKS)) else {
            continue;
        };
        if let Some(source) = s
            .ins
            .iter()
            .skip(1)
            .flatten()
            .find_map(|v| origin.get(v).copied())
        {
            found.push(Reach { step, source, sink });
        }
    }
    found
}

type LiveCall = (
    Address,
    Option<String>,
    Option<VarnodeId>,
    Vec<Option<VarnodeId>>,
);

/// The warnings for one function: the sink call's address and its text.
pub fn findings(data: &Funcdata) -> Vec<(Address, String)> {
    let mut live: Vec<LiveCall> = Vec::new();
    for id in data.obank().iter_alive() {
        let Some(op) = data.obank().get(id) else {
            continue;
        };
        let callee = if op.code() == OpCode::CPUI_CALL {
            data.get_call_specs_index(id)
                .map(|i| data.get_call_specs(i).get_name().to_string())
        } else {
            None
        };
        let ins = (0..op.num_input()).map(|slot| op.get_in(slot)).collect();
        live.push((op.get_addr().clone(), callee, op.get_out(), ins));
    }
    let steps: Vec<Step<'_, VarnodeId>> = live
        .iter()
        .map(|(_, callee, out, ins)| Step {
            callee: callee.as_deref(),
            out: *out,
            ins: ins.as_slice(),
        })
        .collect();
    reach(&steps)
        .into_iter()
        .map(|r| {
            let addr = live[r.step].0.clone();
            let text = format!(
                "taintcheck: data from {}() reaches {}() as an argument (report only)",
                r.source, r.sink
            );
            (addr, text)
        })
        .collect()
}

/// Emit the taint warnings for a function when option `taintcheck` is on.
pub fn warn(data: &mut Funcdata) {
    if !data.get_arch().unlace_options.get::<TaintCheck>().0 {
        return;
    }
    for (addr, text) in findings(data) {
        data.warning(&text, &addr);
    }
}

#[cfg(test)]
mod tests;
