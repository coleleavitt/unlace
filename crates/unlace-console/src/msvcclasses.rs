//! (kuna `vtabletypes`) Commit what the typed MSVC vftables say about
//! functions and data, once [`unlace_decomp::vtabletypes::install`] has
//! built the class structures.
//!
//! Each virtual member gets an unlocked input hint `this` of its class's
//! pointer type, in the register MSVC passes `this` in (RCX on x64, ECX on
//! x86, x0 or r0 on ARM), so its other parameters are still recovered from its
//! body. Each vftable becomes a data object of its class's `C_vtbl` type: the
//! `rtti` label already at its address is retyped, else a `C_vftable` object
//! is added. A constructor's store of the vftable then carries `C_vtbl *`, which
//! types the object it stores through as `C *` (`kuna_vtblbase`).

use std::collections::HashMap;
use std::rc::Rc;

use unlace_analysis::rtti::vtabletypes::{VtableFacts, VtableObject};
use unlace_base::address::Address;
use unlace_base::error::KunaResult;
use unlace_base::space::AddrSpace;
use unlace_decomp::dtype::Datatype;
use unlace_decomp::inputhints::InputHint;
use unlace_decomp::varnode::varnode_flags;

use crate::engine::ConsoleProgram;

/// The registers MSVC passes `this` in, by architecture; the first the
/// language defines is used.
const THIS_REGISTERS: [&str; 4] = ["RCX", "ECX", "x0", "r0"];

pub(crate) fn commit(
    prog: &mut ConsoleProgram,
    code_space: &Rc<AddrSpace>,
    facts: &VtableFacts,
) -> KunaResult<()> {
    commit_this(prog, code_space, &facts.this_types)?;
    for t in &facts.tables {
        commit_table(prog, code_space, t)?;
    }
    Ok(())
}

fn class_pointer(prog: &ConsoleProgram, class: &str, ws: u32) -> KunaResult<Option<Rc<Datatype>>> {
    let types = prog.arch().types();
    let Some(st) = types.find_by_name(class)?.filter(|t| !t.is_incomplete()) else {
        return Ok(None);
    };
    Ok(Some(types.get_type_pointer(
        types.get_size_of_pointer(),
        st,
        ws,
    )?))
}

fn commit_this(
    prog: &mut ConsoleProgram,
    code_space: &Rc<AddrSpace>,
    this_types: &[(u64, String)],
) -> KunaResult<()> {
    if this_types.is_empty() {
        return Ok(());
    }
    let Some(loc) = THIS_REGISTERS
        .iter()
        .find_map(|r| prog.arch().get_register_varnode(r.as_bytes()).ok())
    else {
        return Ok(());
    };
    let Some(space) = loc.space.clone() else {
        return Ok(());
    };
    let ws = code_space.get_word_size();
    let mut pointers: HashMap<&str, Option<Rc<Datatype>>> = HashMap::new();
    let mut hints = Vec::with_capacity(this_types.len());
    for (func, class) in this_types {
        if !pointers.contains_key(class.as_str()) {
            pointers.insert(class, class_pointer(prog, class, ws)?);
        }
        let Some(Some(ct)) = pointers.get(class.as_str()) else {
            continue;
        };
        hints.push((
            Address::new(Rc::clone(code_space), *func),
            InputHint {
                addr: Address::new(Rc::clone(&space), loc.offset),
                size: loc.size as i32,
                name: "this".to_string(),
                ct: Some(Rc::clone(ct)),
            },
        ));
    }
    #[allow(clippy::mutable_key_type)]
    let table = &mut prog
        .arch_mut()
        .kuna_tables
        .get_mut::<unlace_decomp::inputhints::ThisHints>()
        .0;
    for (entry, hint) in hints {
        table.entry(entry).or_insert_with(|| Rc::new(vec![hint]));
    }
    Ok(())
}

fn commit_table(
    prog: &mut ConsoleProgram,
    code_space: &Rc<AddrSpace>,
    t: &VtableObject,
) -> KunaResult<()> {
    let arch = prog.arch_mut();
    let Some(vtbl) = arch
        .types()
        .find_by_name(&format!("{}_vtbl", t.class))?
        .filter(|v| !v.is_incomplete())
    else {
        return Ok(());
    };
    let ptr = i64::from(arch.types().get_size_of_pointer());
    if i64::from(vtbl.get_size()) != (t.slots as i64).saturating_mul(ptr) {
        return Ok(());
    }
    let Some(global) = arch.symboltab.get_global_scope() else {
        return Ok(());
    };
    let addr = Address::new(Rc::clone(code_space), t.addr);
    let (label_scope, _) = arch
        .symboltab
        .resolve_scope_from_symbol_name(&t.label, "::", None);
    for scope in label_scope.into_iter().chain([global]) {
        let Some(eref) = arch.symboltab.find_container_matching(
            scope,
            &addr,
            1,
            &Address::new_invalid(),
            |_| true,
        ) else {
            continue;
        };
        let entry = arch.symboltab.entry(scope, eref);
        if entry.addr != addr {
            return Ok(());
        }
        let sid = entry.symbol;
        arch.symboltab.retype_symbol(sid, vtbl)?;
        arch.symboltab.set_attribute(sid, varnode_flags::typelock);
        return Ok(());
    }
    let name = format!("{}_vftable", t.class);
    if !arch.symboltab.find_by_name(global, &name).is_empty() {
        return Ok(());
    }
    let (sid, _) =
        arch.symboltab
            .add_symbol_mapped(global, &name, vtbl, &addr, &Address::new_invalid())?;
    arch.symboltab
        .set_attribute(sid, varnode_flags::typelock | varnode_flags::namelock);
    Ok(())
}
