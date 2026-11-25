//! (unlace `formatstring`) The three-valued gate for printf/scanf varargs typing.
//!
//! `off` types nothing. `static` runs the LOAD-TIME resolver — the format
//! constant is read out of the image at the call site and a per-call-site
//! prototype override is parked before the function is ever decompiled, so the
//! typing costs one decompile. `full` adds the original decompile → read the
//! constant off the lifted `CALL` → re-decompile loop for the sites the static
//! resolver could not answer, which costs a second decompile of every caller it
//! changes.
//!
//! `on` is accepted as a spelling of `full`: that is what the option meant when
//! it was two-valued, and a run that asked for `on` asked for the loop.
//!
//! Both halves close the call's prototype: the format's conversions become
//! ordinary parameters, and the compiler spec assigns them storage as it would
//! assign a named argument's. That is only true where the target passes a
//! variadic argument the way it passes a named one, which [`VarargAbi`] records
//! per target and every override is checked against.
//!
//! `static` resolves at load on x86 only ([`reached_by_default`]); `full` resolves
//! on every target [`VarargAbi`] admits.

use unlace_base::error::{UnlaceError, UnlaceResult};

use crate::architecture::Architecture;
use crate::dtype::{Datatype, type_metatype};
use crate::fspec::PrototypePieces;

/// One call-site override the load-time resolver parked, with the answer it was
/// built from, so the decompile step can check the drive agrees with it.
#[derive(Clone, Debug)]
pub struct ParkedFormatSite {
    /// VMA of the call instruction the override applies at.
    pub callpoint: u64,
    /// The closed prototype: the callee's fixed parameters, then one per
    /// conversion.
    pub pieces: PrototypePieces,
    /// Which parameter is the format.
    pub format_slot: usize,
    /// The format string's VMA, as the resolver read it.
    pub format_vma: u64,
}

/// How much of the format-string varargs typing a run performs.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum FormatStringMode {
    /// Type nothing; no resolver runs and no override is installed.
    Off,
    /// The load-time resolver alone (one decompile per function).
    #[default]
    Static,
    /// The load-time resolver plus the decompile→override→re-decompile loop.
    Full,
}

impl FormatStringMode {
    /// Is any format-string typing performed at all?
    pub fn enabled(self) -> bool {
        !matches!(self, FormatStringMode::Off)
    }

    /// Does the LOAD-TIME resolver run on some target?
    pub fn statik(self) -> bool {
        matches!(self, FormatStringMode::Static | FormatStringMode::Full)
    }

    /// Does the LOAD-TIME resolver run on the target `archid` names?
    pub fn resolves_at_load(self, archid: &str) -> bool {
        match self {
            FormatStringMode::Off => false,
            FormatStringMode::Static => reached_by_default(archid),
            FormatStringMode::Full => true,
        }
    }

    /// Does the decompile→override→re-decompile loop run?
    pub fn loop_pass(self) -> bool {
        matches!(self, FormatStringMode::Full)
    }

    /// The `option formatstring <p1>` token for this mode.
    pub fn as_str(self) -> &'static str {
        match self {
            FormatStringMode::Off => "off",
            FormatStringMode::Static => "static",
            FormatStringMode::Full => "full",
        }
    }
}

/// How far a closed prototype may stand in for a call's variadic arguments on a
/// target: which of them travel exactly as a named argument of the same type
/// would.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum VarargAbi {
    /// Every one does (x86, AArch64 AAPCS64 outside Apple and Windows).
    Named,
    /// Integer and pointer arguments no wider than a pointer do; a floating one
    /// does not. ARM32 hard-float and RISC-V pass a floating vararg in core
    /// registers and a named one in `d0`/`fa0`, Windows on AArch64 passes it in
    /// `x` registers, and RISC-V aligns a double-width vararg to an even register
    /// pair where a named one is not.
    Integer,
    /// None is known to. Apple AArch64 passes every variadic argument on the
    /// stack, and a target not listed here has not been checked.
    Nothing,
}

/// The object-file family an image came in, as far as its variadic calling
/// convention depends on it.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum ImageFamily {
    /// Mach-O: an Apple platform.
    Apple,
    /// PE/COFF: Windows.
    Windows,
    /// Anything else (ELF, raw).
    Other,
}

impl VarargAbi {
    /// May an override declare a variadic argument of type `ty`? `ptr_size` is
    /// the target's pointer width, the widest integer [`VarargAbi::Integer`]
    /// admits.
    pub fn admits(self, ty: &Datatype, ptr_size: i32) -> bool {
        match self {
            VarargAbi::Named => true,
            VarargAbi::Integer => {
                ty.get_metatype() != type_metatype::TYPE_FLOAT && ty.get_size() <= ptr_size
            }
            VarargAbi::Nothing => false,
        }
    }
}

/// The variadic convention of the target `archid` names, in an image of
/// `family` (`None` when the image is not known). An Apple SLEIGH variant or a
/// `windows` compiler spec in the id settles the family on its own.
pub fn vararg_abi(archid: &str, family: Option<ImageFamily>) -> VarargAbi {
    let family = if archid.contains("AppleSilicon") {
        Some(ImageFamily::Apple)
    } else if archid.ends_with(":windows") {
        Some(ImageFamily::Windows)
    } else {
        family
    };
    match archid.split(':').next().unwrap_or("") {
        "x86" => VarargAbi::Named,
        "AARCH64" => match family {
            Some(ImageFamily::Other) => VarargAbi::Named,
            Some(ImageFamily::Windows) => VarargAbi::Integer,
            Some(ImageFamily::Apple) | None => VarargAbi::Nothing,
        },
        "ARM" | "RISCV" | "MIPS" | "PowerPC" => VarargAbi::Integer,
        _ => VarargAbi::Nothing,
    }
}

/// Does `static`, the default, type the target `archid` names? x86 only.
///
/// A resolved format call also changes how P4 scores the argument trials of the
/// calls around it: an argument it declares is taken for certain, so it vetoes
/// the same value at a neighbour. (The phantoms it would claim without the
/// override still do; see [`crate::p4_calls::formattail`].) Over the x86
/// corpora measured every such change removed a phantom argument. On AArch64
/// and ARM32, measured with the prototype closed from the start, most changes
/// added a phantom (an `x8` of `0` ahead of the real arguments) or dropped a
/// real argument, so those targets are typed only when `full` is asked for.
pub fn reached_by_default(archid: &str) -> bool {
    archid.split(':').next() == Some("x86")
}

/// The variadic convention of the loaded target: the loader's answer when it
/// recorded one, else what the language id alone says.
pub fn target_vararg_abi(arch: &Architecture) -> VarargAbi {
    arch.unlace_tables
        .get::<crate::formatstring::ImageVarargAbi>()
        .unwrap_or_else(|| vararg_abi(&arch.archid, None))
}

/// Parse the `option formatstring off|static|full` argument, producing the
/// resolved mode plus the confirmation message (the established value-option
/// idiom — cf. `parse_cppsig_mode`).
///
/// `on` is an accepted alias for `full`, the meaning it carried while the option
/// was `on|off`.
pub fn parse_formatstring_mode(p1: &str) -> UnlaceResult<(FormatStringMode, String)> {
    let mode = match p1 {
        "off" => FormatStringMode::Off,
        "static" => FormatStringMode::Static,
        "full" | "on" => FormatStringMode::Full,
        _ => {
            return Err(UnlaceError::parse(
                "Must specify off, static or full (`on` = full)",
            ));
        }
    };
    Ok((
        mode,
        format!("Format-string varargs typing set to {}", mode.as_str()),
    ))
}

impl crate::optionset::UnlaceOption for FormatStringMode {
    const NAME: &'static str = "formatstring";
    crate::unlace_option_id!();

    fn unset() -> Self {
        crate::formatstring::FormatStringMode::Off
    }

    fn shipped() -> Self {
        crate::formatstring::FormatStringMode::Static
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        Ok(crate::formatstring::parse_formatstring_mode(value)?)
    }
}

/// (unlace `formatstring`) The format sites the analysis tier parked, by call address; an
/// [`ArchTable`](crate::archstate::ArchTable) on the architecture.
pub type ParkedSites = std::collections::BTreeMap<u64, Vec<ParkedFormatSite>>;
crate::unlace_arch_table!(ParkedSites);

/// (unlace `formatstring`) How the image passes variadic arguments, a load-time fact; an
/// [`ArchTable`](crate::archstate::ArchTable) on the architecture.
pub type ImageVarargAbi = Option<VarargAbi>;
crate::unlace_arch_table!(ImageVarargAbi);

#[cfg(test)]
mod tests;
