__int64 __fastcall ___ZNK5dyld46Loader18applyFixupsGenericER11DiagnosticsRNS_12RuntimeStateEyRKN5dyld35ArrayIPKvEESB_bRKNS6_INS0_21MissingFlatLazySymbolEEE_block_invoke(
        __int64 a1)
{
  return dyld3::MachOLoaded::fixupAllChainedFixups(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
}
