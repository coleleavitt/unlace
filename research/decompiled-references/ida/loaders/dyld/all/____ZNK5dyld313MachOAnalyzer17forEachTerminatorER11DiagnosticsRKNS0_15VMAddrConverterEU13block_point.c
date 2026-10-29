__int64 __fastcall ___ZNK5dyld313MachOAnalyzer17forEachTerminatorER11DiagnosticsRKNS0_15VMAddrConverterEU13block_pointerFvjE_block_invoke(
        __int64 result,
        __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x8

  if ( (*(_BYTE *)(a2 + 52) & 4) != 0 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL);
    v3 = *(_QWORD *)(a2 + 16);
    v4 = *(_QWORD *)(a2 + 8);
    v5 = *(_QWORD *)(a2 + 24) + v3;
    result = dyld3::OverflowSafeArray<dyld3::SegmentRanges::SegmentRange,4294967295ul>::verifySpace(v2 + 64, 1);
    v6 = *(_QWORD *)(v2 + 64);
    v7 = *(_QWORD *)(v2 + 80);
    *(_QWORD *)(v2 + 80) = v7 + 1;
    v8 = v6 + 24 * v7;
    *(_QWORD *)v8 = v3;
    *(_QWORD *)(v8 + 8) = v5;
    *(_DWORD *)(v8 + 16) = v4;
  }
  return result;
}
