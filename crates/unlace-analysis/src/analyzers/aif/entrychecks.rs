//! Check additive entry recovery and pool corrections before AIF bodies claim gaps.

use std::rc::Rc;

use unlace_base::space::AddrSpace;
use unlace_decomp::architecture::Architecture;
use unlace_sleigh::translate::Translate;

use crate::listing::Listing;

pub(crate) struct CheckedAif {
    pub entries: Vec<u64>,
    pub pool_entries: Vec<u64>,
    pub pointer_entries: Vec<u64>,
    /// Addresses accepted post-frame AIF bodies run into by straight-line flow,
    /// and every address of a body that gap walk refused.
    pub straight_line: std::collections::BTreeSet<u64>,
}

/// All checks use the partition preceding the optional AIF rewalk. Pointer and
/// pool entries stay additive; only surviving AIF candidates may seed that walk.
pub(crate) fn run(
    listing: &Listing,
    pre_frame: Option<&Listing>,
    arch: &Architecture,
    translate: &dyn Translate,
    code_space: Rc<AddrSpace>,
    pointer_entries: Vec<u64>,
    bracket: Option<&super::aifbracket::BracketEvidence>,
    memo: Option<&Rc<crate::listing::decodememo::DecodeMemo>>,
) -> CheckedAif {
    let mut straight_line = std::collections::BTreeSet::new();
    let poolslide = (arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Aifpoolslide>()
        .0
        && crate::loadimage_object::is_arm32_language(&arch.archid))
    .then_some(arch);
    let mut entries = if let Some(prior) = pre_frame {
        super::run_aif_after_frames(
            listing,
            prior,
            translate,
            Rc::clone(&code_space),
            arch.unlace_options
                .get::<unlace_decomp::aif::AifMode>()
                .strict(),
            arch.unlace_options
                .get::<unlace_decomp::aif::AifMode>()
                .corroborate(),
            bracket,
            poolslide,
            Some(&mut straight_line),
            memo,
        )
    } else {
        super::run_aif_sharing(
            listing,
            translate,
            Rc::clone(&code_space),
            listing.exec_ranges(),
            arch.unlace_options
                .get::<unlace_decomp::aif::AifMode>()
                .strict(),
            arch.unlace_options
                .get::<unlace_decomp::aif::AifMode>()
                .corroborate(),
            bracket,
            poolslide,
            memo,
        )
    };
    let mut pool_entries = Vec::new();
    if arch
        .unlace_options
        .get::<unlace_decomp::analysisgates::Poolentry>()
        .0
    {
        let checked = super::poolentry::run_pool_pass(
            arch,
            listing,
            translate,
            code_space,
            listing.exec_ranges(),
            &entries,
            &pointer_entries,
        );
        entries = checked.kept_aif;
        pool_entries = checked.added;
    }
    CheckedAif {
        entries,
        pool_entries,
        pointer_entries,
        straight_line,
    }
}
