__n128 __fastcall ___ZNK5dyld313MachOAnalyzer19getAllSegmentsInfosER11DiagnosticsPNS_9MachOFile11SegmentInfoE_block_invoke(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // x8
  __n128 result; // q0
  __int128 v4; // q1
  __int128 v5; // q3

  v2 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)((unsigned __int16)*(_DWORD *)(a2 + 56) >> 4) << 6);
  result = *(__n128 *)a2;
  v4 = *(_OWORD *)(a2 + 16);
  v5 = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v2 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v2 + 48) = v5;
  *(__n128 *)v2 = result;
  *(_OWORD *)(v2 + 16) = v4;
  return result;
}
