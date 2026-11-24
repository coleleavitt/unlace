//! Port of `decompiler/cpp/kuna_v850indbranch.{cc,hh}` — V850 "jmp [reg]"
//! indirect-branch reclassification (unlace GH-8817, S2 flow-classification).
//!
//! The V850 SLEIGH spec lifts `jmp [reg]` (reg != lp) to `call [reg]`, i.e.
//! `CPUI_CALLIND`, so a compiler switch dispatch never reaches jump-table
//! recovery (gated on `CPUI_BRANCHIND`).  With `option v850indirectbranch on`
//! (the default) and a V850 language loaded ([`applies`]), at
//! flow-classification time such a CALLIND is reclassified to BRANCHIND; on
//! every other processor a register-indirect call is left alone.
//!
//! ## What this module ports
//!
//! [`unlace_is_v850_indirect_jmp`] is a faithful free-function transcription of
//! the C++ `unlaceIsV850IndirectJmp(Funcdata&, const PcodeOp*)` predicate.  The
//! reclassification itself (the `opSetOpcode(op, CPUI_BRANCHIND)` rewrite) is
//! driven by `flow.rs` at `FlowInfo::xrefControlFlow`; this module only owns
//! the *decision*.
//!
//! ## STUB(W4): Rule/Action + ArchOption wrappers
//!
//! Two pieces of the C++ live on the W4 `Architecture` and are taken here as
//! resolved inputs / a closure rather than reached through `glb`:
//!
//!   - the **gate** `glb->v850_indirect_branch` (shipped `option
//!     v850indirectbranch on`), combined with the V850 language test in
//!     [`applies`]: modelled by [`V850IndirectBranchOption`], whose `default()`
//!     is the shipped flag.  `decompile_drive.rs` routes
//!     `FlowEnv::is_v850_indirect_jmp` through `applies` + the predicate below.
//!   - the **register-name resolution** `glb->translate->getRegisterName(spc,
//!     off, size)` (W2 `Translate` is available, but it is reached through the
//!     W4 `glb`): supplied to the predicate as the already-resolved register
//!     name (`Option<&str>`, `None` == the C++ empty string, i.e. "not a named
//!     register").  W4 wires the real `getRegisterName` call.

use unlace_base::space::spacetype;

use crate::context::OpId;
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

/// (unlace) Toggle V850 "jmp [reg]" CALLIND -> BRANCHIND reclassification
/// (C++ `OptionV850IndirectBranch`, GH-8817).
///
/// STUB(W4): the C++ `OptionV850IndirectBranch::apply` flips
/// `glb->v850_indirect_branch`; here the flag is carried as a plain `bool` whose
/// [`Default`] is the *shipped* default (`option v850indirectbranch on`).
/// W4's `ArchOption` registry plugs
/// this into the option table; [`apply`](V850IndirectBranchOption::apply)
/// transcribes the `onOrOff(p1)` body.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct V850IndirectBranchOption {
    /// True if V850 "jmp [reg]" CALLIND is reclassified to BRANCHIND
    /// (C++ the registered option `V850IndirectBranch`).
    pub enabled: bool,
}

impl Default for V850IndirectBranchOption {
    /// Shipped default: `option v850indirectbranch on` (inert off V850, see
    /// [`applies`]).
    fn default() -> Self {
        V850IndirectBranchOption { enabled: true }
    }
}

impl V850IndirectBranchOption {
    /// (unlace) Set the gate (C++ `OptionV850IndirectBranch::apply`).
    pub fn apply(&mut self, val: bool) -> &'static str {
        self.enabled = val;
        if val {
            "V850 indirect-branch (jmp [reg]) reclassification turned on"
        } else {
            "V850 indirect-branch (jmp [reg]) reclassification turned off"
        }
    }

    /// Read the gate (C++ `glb->v850_indirect_branch`).
    pub fn is_enabled(&self) -> bool {
        self.enabled
    }
}

/// The option is on and the loaded language is a V850 variant, the only
/// processor whose SLEIGH lifts `jmp [reg]` to a CALLIND.
pub fn applies(arch: &crate::architecture::Architecture) -> bool {
    arch.unlace_options
        .get::<crate::v850indbranch::V850IndirectBranch>()
        .0
        && arch.archid.starts_with("V850:")
}

/// (unlace) Is `op` a V850 "jmp [reg]" CALLIND that should become a BRANCHIND?
/// (C++ `unlaceIsV850IndirectJmp`, v850indbranch.cc:13-36, GH-8817).
///
/// `gate` is the resolved `glb->v850_indirect_branch` (see
/// [`V850IndirectBranchOption`]).  `register_name` is the already-resolved
/// `glb->translate->getRegisterName(...)` of `op`'s input-0 varnode: `None`
/// transcribes the C++ empty string ("not a named register").  // STUB(W4)
pub fn unlace_is_v850_indirect_jmp(
    data: &Funcdata,
    op: OpId,
    gate: bool,
    register_name: Option<&str>,
) -> bool {
    // default-off gate
    if !gate {
        return false;
    }
    let opref = match data.obank().get(op) {
        Some(o) => o,
        None => return false,
    };
    if opref.code() != OpCode::CPUI_CALLIND {
        return false;
    }
    let vn = match opref.get_in(0) {
        Some(v) => v,
        None => return false,
    };
    let vnref = match data.vbank().get(vn) {
        Some(v) => v,
        None => return false,
    };
    // a hardware register
    if vnref.get_space().get_type() != spacetype::IPTR_PROCESSOR {
        return false;
    }
    // only a named register (not raw memory)
    let regname = match register_name {
        Some(name) if !name.is_empty() => name,
        _ => return false,
    };
    // exclude the PC
    if regname == "PC" || regname == "pc" {
        return false;
    }
    true
}

crate::unlace_flag!(
    /// (unlace GH-8817) Reclassify V850 `jmp [reg]` CALLIND to BRANCHIND
    /// (C++ `v850_indirect_branch`).
    V850IndirectBranch,
    "v850indirectbranch",
    "V850 indirect-branch reclassification",
    unset: false,
    shipped: true
);

#[cfg(test)]
#[path = "v850indbranch/tests.rs"]
mod tests;
