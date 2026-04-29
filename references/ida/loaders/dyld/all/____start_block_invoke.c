__int64 __fastcall ___start_block_invoke(__int64 a1)
{
  return dyld3::MachOLoaded::fixupAllChainedFixups(*(_QWORD *)(a1 + 40), *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40);
}
