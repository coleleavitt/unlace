//! (kuna `honestgaps`) Say in the output where the decompile lost something it
//! did not report before.
//!
//! Most losses already print: a decode failure names its halt
//! (`kuna_decodehalt`), a truncated flow (`funcboundflow`, the instruction
//! budget, out-of-bounds flow) and an unrecovered jump table leave a warning at
//! the site, and `--json` lists every warning with its kind. Two losses stayed
//! silent, and this option names them, each as a warning comment with a
//! lowercase tag so `kuna_functionwarnings::Warning::kind` files it under its
//! own kind:
//!
//! * `notmodelled`: under the `ignoreunimplemented` policy an instruction
//!   SLEIGH decodes but has no p-code for is stepped over as a no-op; only one
//!   header line said so for the whole function, never which instruction.
//! * `debuginfo`: a DWARF register local with no write of its register that
//!   reaches its range and can carry its type is dropped by
//!   `Funcdata::seed_dwarf_register_locals`, so the name the debug
//!   information gave simply does not appear.
//!
//! * `withheldproto`: a prototype the load decided not to apply. A library
//!   signature that declares a `float` or `double` is held back on a target
//!   whose convention does not return a `double` whole (the libc tables, a
//!   declared libc function, ARM without `armfloatreturn`), and a DWARF
//!   signature naming a type the type builder cannot build is skipped whole.
//!   Both are decided once per image; the load records each in
//!   [`WithheldPrototypes`], an architecture table, and [`seed`] names it in
//!   the function's own header and at every call that reaches it.
//!
//! Default off: the extra comments change the text of every function that has
//! one of these gaps.

use std::collections::BTreeMap;

use crate::architecture::Architecture;
use crate::funcdata::Funcdata;

crate::kuna_flag!(
    /// (kuna `honestgaps`) Report the losses the decompile otherwise drops
    /// silently, as warning comments at the site.
    HonestGaps,
    "honestgaps",
    "reporting of silent information loss",
    unset: false,
    shipped: false
);

/// The warning for an instruction stepped over because SLEIGH has no p-code
/// for it, naming the instruction from the decoder's `explain` text.
pub fn not_modelled_text(explain: &str) -> String {
    format!(
        "notmodelled: {} has no p-code semantics; stepped over as a no-op",
        instruction_name(explain)
    )
}

/// The instruction an `Unimpl` decode error names: the mnemonic and operands
/// after the address on the line below `Instruction not implemented in
/// pcode:`, whitespace collapsed, else `instruction`.
pub fn instruction_name(explain: &str) -> String {
    let line = explain
        .lines()
        .map(str::trim)
        .find(|l| !l.is_empty() && !l.starts_with("Instruction not implemented"));
    let Some(line) = line else {
        return "instruction".to_string();
    };
    let insn = line.split_once(": ").map_or(line, |(_, rest)| rest);
    let insn = insn.split_whitespace().collect::<Vec<_>>().join(" ");
    if insn.is_empty() {
        "instruction".to_string()
    } else {
        format!("`{insn}`")
    }
}

/// The header warning for a DWARF register local that was not bound: no write
/// of its register reaching its range could carry it.
pub fn unbound_debug_local_text(name: &str, start: u64) -> String {
    format!(
        "debuginfo: DWARF local {name} (range from 0x{start:x}) not bound: no write of its register reaches it"
    )
}

/// Why the load withheld a prototype.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum WithheldCause {
    /// A library signature declaring a `float` or `double` on a target whose
    /// convention does not return a `double` whole.
    FloatConvention,
    /// A DWARF signature naming a type the type builder could not build.
    DwarfType,
}

/// The prototypes the load withheld, by entry address and by name; an
/// architecture table (`Architecture::kuna_tables`).
#[derive(Default)]
pub struct WithheldPrototypes {
    pub at: BTreeMap<u64, (String, WithheldCause)>,
    pub named: BTreeMap<String, WithheldCause>,
}

impl WithheldPrototypes {
    /// Record the prototype of `name` withheld for `cause`, at its entry
    /// address when the load knew it, else by name. An empty name by name is
    /// not recorded.
    pub fn record(&mut self, at: Option<u64>, name: &str, cause: WithheldCause) {
        match at {
            Some(at) => {
                self.at.entry(at).or_insert((name.to_string(), cause));
            }
            None if !name.is_empty() => {
                self.named.entry(name.to_string()).or_insert(cause);
            }
            None => {}
        }
    }

    /// The name and cause recorded for the function at `entry` (when given)
    /// or named `name`.
    pub fn lookup(&self, entry: Option<u64>, name: &str) -> Option<(String, WithheldCause)> {
        entry
            .and_then(|at| self.at.get(&at).cloned())
            .or_else(|| self.named.get(name).map(|cause| (name.to_string(), *cause)))
    }

    /// Nothing recorded?
    pub fn is_empty(&self) -> bool {
        self.at.is_empty() && self.named.is_empty()
    }
}

/// The warning naming a withheld prototype.
pub fn withheld_prototype_text(name: &str, cause: WithheldCause) -> String {
    match cause {
        WithheldCause::FloatConvention => format!(
            "withheldproto: the library prototype of {name} declares a float or double this target's convention does not return whole; not applied"
        ),
        WithheldCause::DwarfType => format!(
            "withheldproto: the DWARF signature of {name} names a type that could not be built; not applied"
        ),
    }
}

/// (kuna `honestgaps`) Name the withheld prototypes `fd` meets: its own, in
/// the header, and each call's callee, at the call. Inert with the option off
/// or nothing withheld.
pub fn seed(arch: &Architecture, fd: &mut Funcdata) {
    if !arch.kuna_options.get::<HonestGaps>().0 {
        return;
    }
    let table = arch.kuna_tables.get::<WithheldPrototypes>();
    if table.is_empty() {
        return;
    }
    let own = table.lookup(Some(fd.get_address().get_offset()), fd.get_name());
    let mut sites = Vec::new();
    for spec in fd.call_specs() {
        let entry = spec.get_entry_address();
        let entry = (!entry.is_invalid()).then(|| entry.get_offset());
        let Some((name, cause)) = table.lookup(entry, spec.get_name()) else {
            continue;
        };
        if let Some(op) = fd.obank().get(spec.get_op()) {
            sites.push((withheld_prototype_text(&name, cause), op.get_addr().clone()));
        }
    }
    use crate::architecture::comment_type;
    let header = own.map(|(name, cause)| withheld_prototype_text(&name, cause));
    let header = header.filter(|text| {
        !is_pending(
            fd.pending_comments_ref(),
            comment_type::warningheader,
            fd.get_address(),
            text,
        )
    });
    let sites: Vec<_> = sites
        .into_iter()
        .filter(|(text, addr)| {
            !is_pending(fd.pending_comments_ref(), comment_type::warning, addr, text)
        })
        .collect();
    if let Some(text) = header {
        fd.warning_header(&text);
    }
    for (text, addr) in sites {
        fd.warning(&text, &addr);
    }
}

/// Is a warning of type `tp` at `addr` whose text ends in `text` (the stored
/// text carries the `WARNING: ` prefix) already buffered? Keeps [`seed`]
/// idempotent when it runs again on a Funcdata whose comments were kept.
pub fn is_pending(
    pending: &[(
        unlace_base::types::uint4,
        unlace_base::address::Address,
        String,
    )],
    tp: unlace_base::types::uint4,
    addr: &unlace_base::address::Address,
    text: &str,
) -> bool {
    pending
        .iter()
        .any(|(t, a, stored)| *t == tp && a == addr && stored.ends_with(text))
}

#[cfg(test)]
mod tests;
