__int64 __fastcall sub_260A60(
        __int64 a1,
        char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  if ( !dbg || a1 == -1 )
    return 0;
  if ( !dword_8CC5F0 )
    return sub_25FBA0(a1, a2, *(double *)a3.m128_u64, a4, a5, a6, a7, a8, a9, a10);
  if ( dword_8CC5F0 >= 0 )
    return 0;
  return sub_243150(dword_8CC428, a1, (unsigned __int8)a2, 0, a3, a4, a5, a6, a7, a8, a9, a10);
}
