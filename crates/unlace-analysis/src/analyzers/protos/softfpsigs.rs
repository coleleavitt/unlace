//! (unlace) The libgcc soft-float and machine-mode integer routines, typed by
//! their machine modes, on every target but 32-bit ARM.
//!
//! A soft-float or 32-bit target calls libgcc for what it has no instruction
//! for: `__addsf3`, `__muldf3`, `__floatsisf`, `__fixdfsi`, `__ltdf2` (the GCC
//! internals manual's "Soft float library routines"), `__muldi3`, `__udivdi3`,
//! `__ashldi3`, `__mulsi3` ("Integer library routines"), and Xtensa's
//! `__umulsidi3`. Untyped, a caller whose last act is one of them comes out
//! `void` and its arguments are lost (C-SKY, OpenRISC, Lanai, ARC, MIPS,
//! RISC-V `ilp32`): `void scale(void) { __addsf3(); }` (#864).
//!
//! Every routine is integer code under the target's integer convention, so its
//! `SFmode` value is a 4-byte and its `DFmode` value an 8-byte integer here:
//! typed `float`, a declaration would be laid out under the default model's
//! floating-point registers (`$f12` on MIPS, `fa0` on RISC-V `ilp32d`), which
//! a soft-float caller never sets. A comparison returns libgcc's `CMPtype`,
//! the word. 32-bit ARM types the same routines through `unlace_aeabisigs`'s
//! RTABI names and folds them under `aeabifloat`.
//!
//! A routine with an eight-byte value is seeded only where the default model
//! lays the eight bytes out as it lays out four, both in registers or both on
//! the stack, and returns them in registers ([`wide_values_fit`]): Lanai's
//! spec passes a `long long` on the stack and returns it through a hidden
//! pointer, which no caller sets up. One with an eight-byte RESULT is also
//! seeded by this pass only on a little-endian target; on a big-endian one
//! `unlace_libgcc`'s pass seeds it, under `libgccsigs`, since a locked
//! eight-byte result on a big-endian register pair still costs a caller that
//! returns arithmetic on it a word.

use object::{Architecture, Object};
use std::rc::Rc;

use unlace_base::space::spacetype;
use unlace_decomp::fspec::{ParameterPieces, ProtoModel};

use super::{L, Sig, Ty, build_pieces, seed_named_prototypes, seed_resolved_prototypes};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

/// Routines whose values are all four bytes, or whose eight-byte values are
/// only arguments.
const NARROW: &[(&str, Sig)] = &[
    (
        "__addsf3",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__subsf3",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__mulsf3",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__divsf3",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__negsf2",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__eqsf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__nesf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__gesf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__ltsf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__lesf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__gtsf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__unordsf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__eqdf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__nedf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__gedf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__ltdf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__ledf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__gtdf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__unorddf2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__fixsfsi",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__fixunssfsi",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__floatsisf",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__floatunsisf",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__fixdfsi",
        Sig {
            ret: Ty::Int,
            params: &[Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__fixunsdfsi",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__truncdfsf2",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__floatdisf",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::Int64],
            vararg: -1,
        },
    ),
    (
        "__floatundisf",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__mulsi3",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Int, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__divsi3",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Int, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__modsi3",
        Sig {
            ret: Ty::Int,
            params: &[Ty::Int, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__udivsi3",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__umodsi3",
        Sig {
            ret: Ty::UInt,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__cmpdi2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::Int64, Ty::Int64],
            vararg: -1,
        },
    ),
    (
        "__ucmpdi2",
        Sig {
            ret: Ty::Long,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
];

/// Routines with an eight-byte result.
const WIDE: &[(&str, Sig)] = &[
    (
        "__adddf3",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__subdf3",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__muldf3",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__divdf3",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__negdf2",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__extendsfdf2",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__floatsidf",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__floatunsidf",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__floatdidf",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::Int64],
            vararg: -1,
        },
    ),
    (
        "__floatundidf",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__fixdfdi",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__fixunsdfdi",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__fixsfdi",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__fixunssfdi",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt],
            vararg: -1,
        },
    ),
    (
        "__muldi3",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Int64, Ty::Int64],
            vararg: -1,
        },
    ),
    (
        "__divdi3",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Int64, Ty::Int64],
            vararg: -1,
        },
    ),
    (
        "__moddi3",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Int64, Ty::Int64],
            vararg: -1,
        },
    ),
    (
        "__udivdi3",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__umoddi3",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt64, Ty::UInt64],
            vararg: -1,
        },
    ),
    (
        "__ashldi3",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Int64, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__ashrdi3",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Int64, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__lshrdi3",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt64, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "__negdi2",
        Sig {
            ret: Ty::Int64,
            params: &[Ty::Int64],
            vararg: -1,
        },
    ),
    (
        "__umulsidi3",
        Sig {
            ret: Ty::UInt64,
            params: &[Ty::UInt, Ty::UInt],
            vararg: -1,
        },
    ),
];

/// The libgcc routine pass.
pub struct SoftFpSigsPass;

/// The storage the default model gives `ret f(params)`, or None when it
/// refuses or adds a hidden return pointer.
fn layout(
    model: &Rc<ProtoModel>,
    ctx: &AnalysisCtx,
    ret: Ty,
    params: &'static [Ty],
) -> Option<Vec<ParameterPieces>> {
    let (_, word_size) = ctx.arch.data_org();
    let sig = Sig {
        ret,
        params,
        vararg: -1,
    };
    let pieces = build_pieces("probe", &sig, ctx.arch.types(), word_size, L).ok()?;
    let mut res = Vec::new();
    model
        .assign_parameter_storage(
            &pieces,
            &mut res,
            false,
            ctx.arch.types(),
            ctx.arch.manage(),
        )
        .ok()?;
    let hidden = res
        .iter()
        .any(|p| p.flags & unlace_decomp::fspec::parameter_pieces_flags::HIDDENRETPARM != 0);
    (!hidden && res.len() == params.len() + 1).then_some(res)
}

/// Whether `p` is assigned storage at all, and whether it is on the stack
/// (a register, or a join of registers, otherwise).
fn on_stack(p: &ParameterPieces) -> Option<bool> {
    let space = p.addr.get_space()?;
    Some(space.get_type() == spacetype::IPTR_SPACEBASE)
}

/// Does the default model lay an eight-byte integer out the way it lays out a
/// four-byte one: the first argument both in registers or both on the stack,
/// and the result in registers (or a join of them) with no hidden pointer?
fn wide_values_fit(model: &Rc<ProtoModel>, ctx: &AnalysisCtx) -> bool {
    let (Some(narrow), Some(wide)) = (
        layout(model, ctx, Ty::UInt, &[Ty::UInt]),
        layout(model, ctx, Ty::UInt64, &[Ty::UInt64]),
    ) else {
        return false;
    };
    let arg = on_stack(&narrow[1]);
    arg.is_some() && arg == on_stack(&wide[1]) && on_stack(&wide[0]) == Some(false)
}

impl AnalysisPass for SoftFpSigsPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "softfpsigs"
    }

    /// Seed each routine the image defines or imports, by name and at each
    /// resolved import address.
    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        if ctx.file.architecture() == Architecture::Arm {
            return out;
        }
        let Some(image) = ctx.image else {
            return out;
        };
        let Some(model) = ctx.arch.default_fp().cloned() else {
            return out;
        };
        let types = ctx.arch.types();
        let (_, word_size) = ctx.arch.data_org();
        let (imports, reloc_imports) = super::loaded_import_addrs(ctx.file, ctx.bytes, image);
        let names = super::loaded_function_names(ctx.file, ctx.bytes, &reloc_imports, false);
        if !NARROW.iter().chain(WIDE).any(|(n, _)| names.contains(*n)) {
            return out;
        }
        let fits = wide_values_fit(&model, ctx);
        let narrow: Vec<(&str, Sig)> = NARROW
            .iter()
            .filter(|(_, sig)| {
                fits || sig
                    .params
                    .iter()
                    .all(|p| !matches!(p, Ty::Int64 | Ty::UInt64))
            })
            .map(|(n, sig)| {
                (
                    *n,
                    Sig {
                        ret: sig.ret,
                        params: sig.params,
                        vararg: sig.vararg,
                    },
                )
            })
            .collect();
        seed_named_prototypes(&mut out, &names, &narrow, types, word_size, L, false);
        seed_resolved_prototypes(&mut out, &imports, &narrow, types, word_size, L);
        if fits && ctx.file.is_little_endian() {
            seed_named_prototypes(&mut out, &names, WIDE, types, word_size, L, false);
            seed_resolved_prototypes(&mut out, &imports, WIDE, types, word_size, L);
        }
        out
    }
}

/// The routines with an eight-byte result on a big-endian target other than
/// 32-bit ARM whose default model fits them ([`wide_values_fit`]); seeded by
/// `unlace_libgcc`'s pass, whose commit `libgccsigs` gates.
pub(super) fn seed_big_endian_wide(ctx: &AnalysisCtx, out: &mut AnalysisOutput) {
    if ctx.file.architecture() == Architecture::Arm || ctx.file.is_little_endian() {
        return;
    }
    let (Some(image), Some(model)) = (ctx.image, ctx.arch.default_fp().cloned()) else {
        return;
    };
    if !wide_values_fit(&model, ctx) {
        return;
    }
    let types = ctx.arch.types();
    let (_, word_size) = ctx.arch.data_org();
    let (imports, reloc_imports) = super::loaded_import_addrs(ctx.file, ctx.bytes, image);
    let names = super::loaded_function_names(ctx.file, ctx.bytes, &reloc_imports, false);
    seed_named_prototypes(out, &names, WIDE, types, word_size, L, false);
    seed_resolved_prototypes(out, &imports, WIDE, types, word_size, L);
}

#[cfg(test)]
mod tests {
    use super::{NARROW, WIDE};

    #[test]
    fn each_routine_is_typed_once() {
        let mut names: Vec<&str> = NARROW.iter().chain(WIDE).map(|(n, _)| *n).collect();
        let len = names.len();
        names.sort_unstable();
        names.dedup();
        assert_eq!(names.len(), len);
        assert_eq!(len, 59);
    }

    #[test]
    fn only_the_wide_table_returns_eight_bytes() {
        for (name, sig) in NARROW {
            assert!(
                !matches!(sig.ret, super::Ty::Int64 | super::Ty::UInt64),
                "{name}"
            );
        }
        for (name, sig) in WIDE {
            assert!(
                matches!(sig.ret, super::Ty::Int64 | super::Ty::UInt64),
                "{name}"
            );
        }
    }
}
