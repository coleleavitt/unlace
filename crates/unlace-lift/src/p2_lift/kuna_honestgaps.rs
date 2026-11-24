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
//! * `debuginfo`: a DWARF register local whose register has no write within 16
//!   bytes before its range starts is dropped by
//!   `Funcdata::seed_dwarf_register_locals`, so the name the debug
//!   information gave simply does not appear.
//!
//! Default off: the extra comments change the text of every function that has
//! one of these gaps.

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
/// of its register was found where its range starts.
pub fn unbound_debug_local_text(name: &str, start: u64) -> String {
    format!(
        "debuginfo: DWARF local {name} (range from 0x{start:x}) not bound: no write of its register found there"
    )
}

#[cfg(test)]
mod tests;
