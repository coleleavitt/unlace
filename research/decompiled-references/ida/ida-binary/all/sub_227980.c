_BOOL8 __fastcall sub_227980(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // edx
  _BOOL8 result; // rax

  v9 = sub_19CF90(*(_QWORD *)(a1 + 32), a2, a3, a4, a5, a6, a7, a8, a9);
  result = 0;
  if ( !v9 )
    return sub_19B410(*(_QWORD *)(a1 + 32), a2, *(double *)a3.m128_u64, a4) != 0;
  return result;
}
