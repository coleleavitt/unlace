unsigned __int64 __fastcall sub_1C840C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  if ( sub_1C7CFE0(a1, *(_QWORD *)(a2 + 16), a6, a7, a3, a4, a5) == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 0;
  else
    return sub_1B097D0(
             *(__int64 **)(*a1 + 760),
             *(_WORD **)(a2 + 16),
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 12),
             *(_DWORD *)(a2 + 4),
             *(double *)a6.m128_u64);
}
