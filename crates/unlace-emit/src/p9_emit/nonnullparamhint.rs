//! (unlace `nonnullparam`) A parameter the function dereferences before any branch
//! gets an advisory comment: the caller must have passed a non-null pointer.
//!
//! The comment goes above the first LOAD or STORE whose address is that
//! parameter, or a COPY of it, in the entry block before the first conditional
//! branch or indirect jump. The parameter is the prototype input whose storage
//! the entry-block varnode is, so a callee-saved register read on entry is not
//! one. Only comments are added: the printed statements do not change.

use unlace_base::address::Address;
use unlace_num::opcodes::OpCode;

use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::nonnullparam::NonNullParam;

/// The advisory `(address, text)` pairs for `fd`, one per parameter, under
/// `option nonnullparam`; empty otherwise.
pub(crate) fn hints(fd: &Funcdata, arch: &Architecture) -> Vec<(Address, String)> {
    let mut out = Vec::new();
    if !arch.unlace_options.get::<NonNullParam>().0 {
        return out;
    }
    let ops: Vec<OpId> = fd
        .obank()
        .iter_all()
        .map(|(_, id)| id)
        .filter(|id| fd.obank().get(*id).is_some_and(|op| !op.is_dead()))
        .collect();
    let Some(entry) = ops
        .first()
        .and_then(|id| fd.obank().get(*id))
        .and_then(|op| op.get_parent())
    else {
        return out;
    };
    let mut tainted: Vec<(VarnodeId, String)> = Vec::new();
    let mut reported: Vec<String> = Vec::new();
    for id in ops {
        let Some(op) = fd.obank().get(id) else {
            continue;
        };
        if op.get_parent() != Some(entry) {
            continue;
        }
        match op.code() {
            OpCode::CPUI_CBRANCH | OpCode::CPUI_BRANCHIND => break,
            OpCode::CPUI_COPY => {
                let (Some(src), Some(dst)) = (op.get_in(0), op.get_out()) else {
                    continue;
                };
                if let Some(name) = param_name(fd, &tainted, src) {
                    tainted.push((dst, name));
                }
            }
            OpCode::CPUI_LOAD | OpCode::CPUI_STORE => {
                let Some(addr) = op.get_in(1) else {
                    continue;
                };
                let Some(name) = param_name(fd, &tainted, addr) else {
                    continue;
                };
                if reported.contains(&name) {
                    continue;
                }
                out.push((
                    op.get_addr().clone(),
                    format!("non-null: {name} is dereferenced before any branch"),
                ));
                reported.push(name);
            }
            _ => {}
        }
    }
    out
}

/// The name of the parameter `vn` holds on entry: a tainted copy's name, or the
/// formal whose storage is the input varnode `vn`.
fn param_name(fd: &Funcdata, tainted: &[(VarnodeId, String)], vn: VarnodeId) -> Option<String> {
    if let Some((_, name)) = tainted.iter().find(|(held, _)| *held == vn) {
        return Some(name.clone());
    }
    let var = fd.vbank().get(vn)?;
    if !var.is_input() {
        return None;
    }
    let proto = fd.get_func_proto();
    (0..proto.num_params()).find_map(|i| {
        let param = proto.get_param(i)?;
        (param.get_address() == *var.get_addr()).then(|| {
            let name = param.get_name();
            if name.is_empty() {
                format!("parameter {i}")
            } else {
                name.to_string()
            }
        })
    })
}
