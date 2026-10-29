unsigned __int64 __fastcall sub_1DC9A10(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v9; // rsi
  unsigned __int16 *v10; // rax

  v9 = *(_QWORD *)(a2 + 24);
  if ( !v9 )
    return sub_1B34160(
             *(__int64 **)(*a1 + 760),
             v9,
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 12),
             *(_DWORD *)(a2 + 16),
             *(_DWORD *)(a2 + 4),
             *(double *)a7.m128_u64,
             *(double *)a8.m128_u64);
  v10 = sub_1DC71F0(a1, v9, a3, a4, a5, a6, a7, a8);
  if ( v10 != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v9 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL;
    return sub_1B34160(
             *(__int64 **)(*a1 + 760),
             v9,
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 12),
             *(_DWORD *)(a2 + 16),
             *(_DWORD *)(a2 + 4),
             *(double *)a7.m128_u64,
             *(double *)a8.m128_u64);
  }
  return 0;
}
