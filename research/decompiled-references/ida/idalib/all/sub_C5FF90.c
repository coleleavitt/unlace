__int64 __fastcall sub_C5FF90(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x14 )
    return sub_C4FA10((__int64 *)a1, (const __m128i **)(a1 + 8), *(_QWORD *)(a2 + 16));
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7Fu) - 7 > 1 )
    return sub_C5F6A0((__int64 *)a1, a2, a3, a4, a5, a6);
  if ( sub_C5E260((_QWORD *)a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6) )
    return sub_C2E310(*(_QWORD *)a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL), *(_QWORD *)(a1 + 8));
  return 0;
}
