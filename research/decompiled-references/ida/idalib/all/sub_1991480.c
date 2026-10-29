__int64 __fastcall sub_1991480(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v12; // rax

  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 )
  {
    v10 = sub_197B880((__int64)a1, v9, 0, a6, a7, a8, a3, a4);
    if ( v10 == 1 )
      return 1;
  }
  else
  {
    v10 = 0;
  }
  v12 = sub_1991470(a1, *(_QWORD *)(a2 + 32), *(double *)a3.m128_u64, a4);
  if ( v12 == 1 )
    return 1;
  return sub_178D010(
           (__int64 *)*a1,
           *(unsigned int *)(a2 + 16),
           v10 & 0xFFFFFFFFFFFFFFFELL,
           v12 & 0xFFFFFFFFFFFFFFFELL,
           (__m128i)a3);
}
