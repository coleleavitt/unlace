//! The per-function records `unlace decompile-all --json` reports (variables and type definitions),
//! and the signed frame offset they carry. Passes that shape the report fill them; the driver
//! serializes them.

use std::rc::Rc;

use unlace_base::space::AddrSpace;

/// A recovered variable surfaced for the machine-readable batch output
/// (`unlace decompile-all --json`) — the fields decbench's `type_match` metric
/// consumes from a decompiler's per-function variable list.
#[derive(Debug, Clone)]
pub struct VarInfo {
    /// Variable name as it appears in the decompiled C (`param_1`, `local_18`, a
    /// DWARF name on a `-g` binary, …).
    pub name: String,
    /// The C type string, rendered exactly as `print_c` would spell it
    /// (`int`, `char *`, `undefined8`, …) via [`crate::printc::type_to_c_string`].
    pub type_name: String,
    /// Signed frame-relative stack offset for a stack-resident variable; `None`
    /// for a register-resident parameter or local (ghidra
    /// `getStorage().getStackOffset()`).
    pub stack_offset: Option<i64>,
    /// Size in bytes (the variable's type size).
    pub size: i64,
    /// `true` for a formal parameter, `false` for a local; see [`VarInfo::kind`].
    pub is_param: bool,
    /// ABI parameter index (dense, source order) for parameters; `None` for locals.
    pub arg_index: Option<usize>,
    /// 1-based pseudocode lines containing markup-backed references to this variable.
    pub line_numbers: Vec<usize>,
    /// Machine instruction addresses associated with those pseudocode lines.
    pub addresses: Vec<u64>,
    /// (kuna `slotsplit`) A piece `slotsplit` cut from a wider frame row, other
    /// than the first piece of that row: the rows without it are the rows
    /// reported before the split.
    pub split_piece: bool,
}

impl VarInfo {
    /// The JSON `kind`: `arg` for a parameter, `stack` for a local with a frame
    /// offset, `register` for a local the C declares outside the frame
    /// ([`crate::reglocals`]).
    pub fn kind(&self) -> &'static str {
        if self.is_param {
            "arg"
        } else if self.stack_offset.is_some() {
            "stack"
        } else {
            "register"
        }
    }
}

/// A type definition surfaced for the machine-readable batch output
/// (`unlace decompile-all --json`'s per-function `types`) — the layout side of a
/// recovered function, so a consumer reads it without parsing C out of `code`.
///
/// Populated only under `option structdefs on`, whose preamble prints the same
/// set above the function; the key is always present (`[]` when off) so a
/// consumer can read it unconditionally.
#[derive(Debug, Clone)]
pub struct TypeInfo {
    /// The type's name as the factory holds it (`_IO_FILE`, `FILE`, `struct_0`).
    pub name: String,
    /// The definition text: the `struct <n> { … };` body for a complete
    /// composite, the enum block, the `typedef <base> <n>;` line, or the
    /// `typedef struct <n> <n>; /* opaque */` forward declaration for an
    /// incomplete one — the same line(s) the export's `.h` gives it.
    pub definition: String,
    /// The type's size in bytes as the factory holds it, which an incomplete
    /// (opaque) type also has: a `libctypes` shell is created at its ABI size
    /// and reports it (`FILE` is 216) even though no member is known, so a
    /// consumer testing for an opaque shell reads `definition` — the
    /// `/* opaque */` forward declaration — and never `size == 0`.
    pub size: i64,
}

/// Interpret a raw spacebase `off` as a signed frame offset for `space`
/// (negative locals wrap to the high end of the unsigned range): sign-extend from
/// the space's address bit-width via the codebase's canonical
/// [`unlace_base::address::sign_extend`] (the same idiom `varmap` uses, which also
/// masks off any bits above the sign bit).  Matches ghidra
/// `getStorage().getStackOffset()`, which the decbench `type_match` metric
/// calibrates per binary against DWARF.  Stack spaces are byte-addressed
/// (`word_size == 1`), so no `byte_to_address` scaling is needed.
#[doc(hidden)]
pub fn signed_space_offset(space: &Rc<AddrSpace>, off: u64) -> i64 {
    unlace_base::address::sign_extend(off as i64, space.get_addr_size() as i32 * 8 - 1)
}
