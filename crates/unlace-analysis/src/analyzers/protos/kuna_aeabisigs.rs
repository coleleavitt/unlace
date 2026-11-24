//! (kuna) The Arm run-time ABI's helper functions, typed as RTABI32 declares
//! them, on every 32-bit ARM image that names one.
//!
//! A soft-float caller computes `a + b` on `double` as `__aeabi_dadd(a, b)`
//! and converts with `__aeabi_i2d`, `__aeabi_d2iz`, `__aeabi_f2d`, ...; an
//! integer division without a divide instruction calls `__aeabi_idiv`, a block
//! copy `__aeabi_memcpy`. Each one's contract is fixed by the "Run-time ABI for
//! the Arm Architecture" (RTABI32) section 4: the floating-point helpers of 4.1
//! (`double __aeabi_dadd(double, double)`, `int __aeabi_dcmplt(double, double)`,
//! `long long __aeabi_d2lz(double)`, `float __aeabi_ui2f(unsigned)`, ...), the
//! integer helpers of 4.2, the memory helpers of 4.3.4, whose `__aeabi_memset`
//! takes the length before the fill byte and which all return `void`, the
//! unaligned accessors of 4.3.3 and `__aeabi_read_tp`. Every one keeps the base
//! procedure-call standard in every image (RTABI32 3.1), so its declared
//! prototype is laid out under the core-register model even on a hard-float
//! image (`kuna_armfloatreturn::declared_helper_model`): a `double` in r0:r1 /
//! r2:r3. Without a prototype the call prints `__aeabi_fadd()`, or splits each
//! `double` into two `int` words of a union cast.
//!
//! Left out: the `__value_in_regs` divmod pairs (`__aeabi_idivmod`,
//! `__aeabi_ldivmod`, ...), which return a remainder in r1 or r2:r3 no C return
//! type holds and which `arithhelpers` replaces with `/` and `%`, and the
//! `__aeabi_cdcmp*`/`__aeabi_cfcmp*` comparisons, which return in the flags.

use object::{Architecture, Object};

use super::{L, Sig, Ty, seed_named_prototypes, seed_resolved_prototypes};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

/// RTABI32 helper signatures. `long long` is the eight-byte machine mode.
pub(super) const SIGNATURES: &[(&str, Sig)] = &[
    (
        "__aeabi_dadd",
        Sig {
            ret: Ty::Double,
            params: &[Ty::Double, Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_ddiv",
        Sig {
            ret: Ty::Double,
            params: &[Ty::Double, Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_dmul",
        Sig {
            ret: Ty::Double,
            params: &[Ty::Double, Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_drsub",
        Sig {
            ret: Ty::Double,
            params: &[Ty::Double, Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_dsub",
        Sig {
            ret: Ty::Double,
            params: &[Ty::Double, Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_dcmpeq",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Double, Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_dcmplt",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Double, Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_dcmple",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Double, Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_dcmpge",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Double, Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_dcmpgt",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Double, Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_dcmpun",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Double, Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_fadd",
        Sig {
            ret: Ty::Float,
            params: &[Ty::Float, Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_fdiv",
        Sig {
            ret: Ty::Float,
            params: &[Ty::Float, Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_fmul",
        Sig {
            ret: Ty::Float,
            params: &[Ty::Float, Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_frsub",
        Sig {
            ret: Ty::Float,
            params: &[Ty::Float, Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_fsub",
        Sig {
            ret: Ty::Float,
            params: &[Ty::Float, Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_fcmpeq",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Float, Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_fcmplt",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Float, Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_fcmple",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Float, Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_fcmpge",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Float, Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_fcmpgt",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Float, Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_fcmpun",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Float, Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_d2iz",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_d2uiz",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_d2lz",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_d2ulz",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_f2iz",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_f2uiz",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_f2lz",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_f2ulz",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_d2f",
        Sig {
            ret: Ty::Float,
            params: &[Ty::Double],
            vararg: -1,
        },
    ),
    (
        "__aeabi_f2d",
        Sig {
            ret: Ty::Double,
            params: &[Ty::Float],
            vararg: -1,
        },
    ),
    (
        "__aeabi_i2d",
        Sig {
            ret: Ty::Double,
            params: &[Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__aeabi_ui2d",
        Sig {
            ret: Ty::Double,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__aeabi_l2d",
        Sig {
            ret: Ty::Double,
            params: &[Ty::Int64],
            vararg: -1,
        },
    ),
    (
        "__aeabi_ul2d",
        Sig {
            ret: Ty::Double,
            params: &[Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__aeabi_i2f",
        Sig {
            ret: Ty::Float,
            params: &[Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__aeabi_ui2f",
        Sig {
            ret: Ty::Float,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__aeabi_l2f",
        Sig {
            ret: Ty::Float,
            params: &[Ty::Int64],
            vararg: -1,
        },
    ),
    (
        "__aeabi_ul2f",
        Sig {
            ret: Ty::Float,
            params: &[Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__aeabi_idiv",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Int, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__aeabi_uidiv",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__aeabi_lmul",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Int64, Ty::Int64],
            vararg: -1,
        },
    ),
    (
        "__aeabi_llsl",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Int64, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__aeabi_llsr",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Int64, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__aeabi_lasr",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Int64, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__aeabi_lcmp",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Int64, Ty::Int64],
            vararg: -1,
        },
    ),
    (
        "__aeabi_ulcmp",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memcpy",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memcpy4",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memcpy8",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memmove",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memmove4",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memmove8",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memset",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memset4",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memset8",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memclr",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memclr4",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "__aeabi_memclr8",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "__aeabi_uread4",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "__aeabi_uwrite4",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Int, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "__aeabi_uread8",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "__aeabi_uwrite8",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Int64, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "__aeabi_read_tp",
        Sig {
            ret: Ty::VoidPtr,
            params: &[],
            vararg: -1,
        },
    ),
];

/// The run-time ABI helper prototype pass.
pub struct AeabiSigsPass;

impl AnalysisPass for AeabiSigsPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "aeabisigs"
    }

    /// Seed each RTABI helper a 32-bit ARM image defines or imports, by name and
    /// at each resolved import address.
    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        if ctx.file.architecture() != Architecture::Arm {
            return out;
        }
        let Some(image) = ctx.image else {
            return out;
        };
        let types = ctx.arch.types();
        let (_, word_size) = ctx.arch.data_org();
        let (imports, reloc_imports) = super::loaded_import_addrs(ctx.file, ctx.bytes, image);
        let names = super::loaded_function_names(ctx.file, ctx.bytes, &reloc_imports, false);
        seed_named_prototypes(&mut out, &names, SIGNATURES, types, word_size, L, false);
        seed_resolved_prototypes(&mut out, &imports, SIGNATURES, types, word_size, L);
        out
    }
}

#[cfg(test)]
mod tests {
    use super::SIGNATURES;

    #[test]
    fn every_helper_is_named_once_and_kept_on_the_base_standard() {
        let mut names: Vec<&str> = SIGNATURES.iter().map(|(n, _)| *n).collect();
        names.sort_unstable();
        let len = names.len();
        names.dedup();
        assert_eq!(names.len(), len, "duplicate helper row");
        assert_eq!(len, 65);
        for name in names {
            assert!(
                unlace_decomp::kuna_armfloatreturn::base_pcs_helper(name),
                "{name} must take the core-register model"
            );
        }
    }

    #[test]
    fn memset_takes_the_length_before_the_fill_byte() {
        let (_, sig) = SIGNATURES
            .iter()
            .find(|(n, _)| *n == "__aeabi_memset")
            .unwrap();
        assert!(matches!(
            sig.params,
            [super::Ty::VoidPtr, super::Ty::Size, super::Ty::Int]
        ));
        assert!(matches!(sig.ret, super::Ty::Void));
    }
}
