//! Frame-prefix reconciliation uses literal evidence from the original walk and
//! validated frames before deciding whether an earlier prefix is code.

use super::*;

pub(super) fn policy(
    arch: &unlace_decomp::architecture::Architecture,
    code_space: Rc<AddrSpace>,
) -> GapWalk<'_> {
    GapWalk {
        strict: arch
            .unlace_options
            .get::<unlace_decomp::aif::AifMode>()
            .strict(),
        corroborate: arch
            .unlace_options
            .get::<unlace_decomp::aif::AifMode>()
            .corroborate(),
        bracket: None,
        noppad: false,
        poolslide: arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::Aifpoolslide>()
            .0
            .then_some((arch, code_space)),
    }
}

pub(super) fn literals<'a>(
    listing: &Listing,
    decoder: &GapDecoder,
    frames: &BTreeMap<u64, u32>,
    policy: Option<(&'a unlace_decomp::architecture::Architecture, Rc<AddrSpace>)>,
) -> Option<aifpoolslide::LiteralWords<'a>> {
    let (arch, code_space) = policy?;
    let mut literals = aifpoolslide::LiteralWords::from_listing(
        listing,
        poolentry::DecodeMode { arch, code_space },
    );
    literals.add_instructions(listing, decoder, frames.keys().copied());
    Some(literals)
}
