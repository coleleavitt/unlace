//! An ARM ELF that states the base (core-register) procedure-call standard keeps
//! it at every externally visible function.
//!
//! `ARM.cspec`'s default model is the VFP variant (`s0`..`s15` for float
//! arguments, `s0` for a float result). An image whose build attributes or header
//! state the base standard (`Tag_ABI_VFP_args` 0 or absent, `EF_ARM_ABI_FLOAT_SOFT`)
//! passes and returns floating-point values in `r0`..`r3` at every function another
//! unit can call. Read under the default, `float scale(float v, int n)` returns
//! `s0`, which it never writes, and a call to an import returning `float` (a
//! run-time helper such as `__aeabi_fadd`) drops the `r0` it returns (#681). Each
//! defined global or weak function symbol and each resolved import is bound to
//! `__stdcall_softfp`. A local (static) function keeps the default: clang may
//! give one the VFP variant on an image with an FPU (`fastcc` under
//! `-mfloat-abi=softfp`).

use object::{Object, ObjectSymbol};

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, ModelFact, Phase};

/// The ARM spec's base-standard model.
const BASE_PCS_MODEL: &str = "__stdcall_softfp";

/// The base-standard binding pass.
#[derive(Default)]
pub struct ArmBasePcsPass;

impl AnalysisPass for ArmBasePcsPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "armbasepcs"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        if ctx.file.format() != object::BinaryFormat::Elf
            || ctx.file.architecture() != object::Architecture::Arm
            || super::armfloatabi::args_evidence(ctx.file) != Some(false)
        {
            return out;
        }
        out.models = base_pcs_functions(ctx)
            .into_iter()
            .map(|func_addr| ModelFact {
                func_addr,
                model: BASE_PCS_MODEL,
                leaf_stack_inputs: None,
                maybe_self: false,
            })
            .collect();
        out
    }
}

/// The entry of every defined global or weak function symbol (the Thumb bit
/// cleared) and the address of every resolved import, a relocatable object's
/// undefined symbols included (`fmod` in a `.o`), sorted and unique.
fn base_pcs_functions(ctx: &AnalysisCtx) -> Vec<u64> {
    let (file, bytes) = (ctx.file, ctx.bytes);
    let relocated: Vec<u64> = ctx
        .image
        .map(|image| {
            crate::protos::loaded_import_addrs(file, bytes, image)
                .1
                .into_iter()
                .map(|(_, addr)| addr)
                .collect()
        })
        .unwrap_or_default();
    let mut addrs: Vec<u64> = file
        .symbols()
        .chain(file.dynamic_symbols())
        .filter(|symbol| {
            symbol.is_definition()
                && symbol.is_global()
                && symbol.kind() == object::SymbolKind::Text
        })
        .map(|symbol| symbol.address() & !1)
        .chain(
            crate::protos::resolved_import_addrs(file, bytes)
                .into_iter()
                .map(|(_, addr)| addr),
        )
        .chain(relocated)
        .collect();
    addrs.sort_unstable();
    addrs.dedup();
    addrs
}
