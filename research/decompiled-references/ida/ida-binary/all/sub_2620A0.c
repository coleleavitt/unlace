__int64 __fastcall sub_2620A0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char *v9; // rsi

  v9 = *(char **)(a1 + 24);
  if ( !dbg || v9 == (char *)-1LL )
    return 0;
  if ( !dword_8CC5F0 )
    return sub_25FBA0((__int64)v9, v9, *(double *)a2.m128_u64, a3, a4, a5, a6, a7, a8, a9);
  if ( dword_8CC5F0 >= 0 )
    return 0;
  return sub_243150(dword_8CC428, (__int64)v9, *(_BYTE *)(a1 + 12), 0, a2, a3, a4, a5, a6, a7, a8, a9);
}
