__int64 __fastcall sub_6EFE10(
        __int64 *a1,
        _QWORD *a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v10; // rbx
  __int64 v11; // r12

  v10 = a2[3];
  v11 = v10 + 8LL * a2[4];
  if ( v10 == v11 )
    return sub_6ED600(a1, a2[5], 0, a3, a4, a5, a6, a7, a8, a9, a10);
  while ( (unsigned __int8)sub_6EFC60(a1, a3, *(double *)a4.m128i_i64, a5, a6, a7, a8, a9, a10) )
  {
    v10 += 8;
    if ( v11 == v10 )
      return sub_6ED600(a1, a2[5], 0, a3, a4, a5, a6, a7, a8, a9, a10);
  }
  return 0;
}

