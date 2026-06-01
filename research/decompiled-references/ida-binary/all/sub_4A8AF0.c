unsigned __int64 __fastcall sub_4A8AF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned __int64 v11; // r13
  void *v14; // r14
  double v15; // xmm4_8
  double v16; // xmm5_8
  void *v17; // [rsp+0h] [rbp-68h] BYREF
  __m128i v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v11 = *(_QWORD *)(a2 + 8);
  v20 = __readfsqword(0x28u);
  v18 = 0;
  v19 = -1;
  if ( v11 )
  {
    v14 = (void *)qalloc_or_throw(8 * v11);
    memcpy(v14, *(const void **)a2, 8 * v11);
    v19 = a3;
    v17 = v14;
    v18 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
    sub_4A8920(a1, (unsigned __int64 *)&v17, 19, *(double *)v18.m128i_i64, a5, a6, a7, v15, v16, a10, a11);
    if ( v14 )
      qfree(v14, (const char *)&v17);
  }
  else
  {
    v19 = a3;
    v17 = nullptr;
    sub_4A8920(a1, (unsigned __int64 *)&v17, 19, 0.0, a5, a6, a7, a8, a9, a10, a11);
  }
  return v20 - __readfsqword(0x28u);
}
