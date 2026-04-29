__int64 __fastcall ___ZN5dyld46Reaper18finalizeDeadImagesEv_block_invoke(__int64 result, __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x21
  __int64 v5; // x21
  __int64 v6; // x20
  __int64 v7; // x19
  __int64 v8; // x8
  __int64 v9; // x9
  _QWORD *v10; // x8

  if ( (*(_BYTE *)(a2 + 52) & 4) != 0 )
  {
    v3 = result;
    v4 = *(_QWORD *)(a2 + 16);
    v5 = dyld3::MachOLoaded::getSlide(*(dyld3::MachOLoaded **)(result + 40)) + v4;
    v6 = *(_QWORD *)(a2 + 24);
    v7 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL);
    result = dyld3::OverflowSafeArray<__cxa_range_t,4294967295ul>::verifySpace(v7 + 40, 1);
    v8 = *(_QWORD *)(v7 + 40);
    v9 = *(_QWORD *)(v7 + 56);
    *(_QWORD *)(v7 + 56) = v9 + 1;
    v10 = (_QWORD *)(v8 + 16 * v9);
    *v10 = v5;
    v10[1] = v6;
  }
  return result;
}
