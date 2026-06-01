__int64 __fastcall sub_7183C0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v10; // rax
  unsigned __int32 v12; // r12d
  const __m128i *v13; // rax
  __int64 v14; // rdx
  __m128i v15; // [rsp+0h] [rbp-28h]

  v10 = *(_QWORD *)(a2 + 120);
  if ( (v10 & 4) == 0 )
    return sub_718340(a1, 0, 0, 0.0, a4, a5, a6, a7, a8, a9, a10);
  v12 = 0;
  while ( 1 )
  {
    v13 = (const __m128i *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12 >= v13[1].m128i_i32[0] )
      break;
    v14 = v12++;
    sub_7154D0(a1, *(_QWORD *)(v13[1].m128i_i64[1] + 8 * v14), a3, a4, a5, a6, a7, a8, a9, a10);
    v10 = *(_QWORD *)(a2 + 120);
    if ( (v10 & 4) == 0 )
      return sub_718340(a1, 0, 0, 0.0, a4, a5, a6, a7, a8, a9, a10);
  }
  v15 = _mm_loadu_si128(v13);
  return sub_718340(a1, v15.m128i_i64[0], v15.m128i_i64[1], a3, v15, a5, a6, a7, a8, a9, a10);
}
