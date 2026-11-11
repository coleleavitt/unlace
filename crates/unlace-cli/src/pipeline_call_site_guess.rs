//! Whole-image call-site prototype guesses.
//!
//! A callee with no other prototype source (debug info, the libc table,
//! an analysable body, a demangled name) takes the arity its callers set up,
//! minimised over every call site in the image (Hex-Rays `sub_E0380`).
//! Building the index lifts every discovered function once, so it is built
//! with the shared [`SymbolContext`](super::SymbolContext), not per function.

use std::collections::BTreeMap;

use rayon::prelude::*;
use unlace_ir::signature::FunctionSignatureRegistry;
use unlace_ir::ssa::CallingConvention;
use unlace_ir::stack::StackSpec;
use unlace_ir::{ArchId, Lifter, OsAbi};
use unlace_loader::BinaryImage;
use unlace_passes::callee_guess::{
    CallSite, CallSiteArgs, collect_call_sites, guess_from_call_sites,
};

use super::{FunctionEntry, lift_function};

/// The convention every function of an image is assumed to use for its
/// outgoing calls.
fn image_calling_convention(image: &BinaryImage) -> Option<CallingConvention> {
    match (image.arch, image.os_abi) {
        (ArchId::X86_64, OsAbi::Windows) => Some(CallingConvention::MicrosoftX64),
        (ArchId::X86_64, _) => Some(CallingConvention::SystemV),
        (ArchId::AArch64, _) => Some(CallingConvention::AArch64),
        (ArchId::X86, _) => Some(CallingConvention::Cdecl),
        _ => None,
    }
}

/// Guess a prototype for every direct-call target of `functions` from all
/// of its call sites.
pub(super) fn guess_call_site_signatures(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    functions: &[FunctionEntry],
) -> FunctionSignatureRegistry {
    let (Some(cc), Some(spec)) = (
        image_calling_convention(image),
        StackSpec::for_arch(image.arch),
    ) else {
        return FunctionSignatureRegistry::new();
    };
    let per_function: Vec<Vec<CallSite>> = functions
        .par_iter()
        .map(|entry| {
            lift_function(image, lifter, entry)
                .map(|func| collect_call_sites(&func, cc, spec.sp.offset))
                .unwrap_or_default()
        })
        .collect();

    let mut by_target: BTreeMap<u64, Vec<CallSiteArgs>> = BTreeMap::new();
    for site in per_function.into_iter().flatten() {
        by_target.entry(site.target).or_default().push(site.args);
    }
    by_target
        .into_iter()
        .filter_map(|(target, sites)| {
            let guess = guess_from_call_sites(cc, &sites)?;
            tracing::debug!(
                target: "unlace::call_args",
                "call-site-guess target=0x{target:x} sites={} params={} variadic={}",
                sites.len(),
                guess.params.len(),
                guess.variadic
            );
            Some((target, guess))
        })
        .collect()
}
