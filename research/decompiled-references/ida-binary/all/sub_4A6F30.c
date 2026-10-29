unsigned __int64 __fastcall sub_4A6F30(
        __int64 *a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *p_src; // rsi
  unsigned __int64 v12; // rbp
  void *v13; // r13
  void *v14; // r12
  __int64 v15; // rdi
  __m128i v16; // xmm0
  __m128i v18; // [rsp+0h] [rbp-68h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  p_src = (const char *)&src;
  v20 = 0;
  v21 = -1;
  src = nullptr;
  sub_4A6DB0(a1, (__int64 *)&src, 1, 0.0, a4, a5, a6, a7, a8, a9, a10);
  v12 = v20;
  v13 = src;
  v14 = nullptr;
  if ( (_QWORD)v20 )
  {
    p_src = (const char *)src;
    v14 = (void *)qalloc_or_throw(8 * v20);
    memcpy(v14, v13, 8 * v12);
  }
  v15 = *a2;
  v16 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  if ( *a2 )
  {
    a2[1] = 0;
    v18 = v16;
    qfree(v15, p_src);
    v16 = _mm_load_si128(&v18);
  }
  *a2 = v14;
  *(__m128i *)(a2 + 1) = v16;
  if ( v13 )
    qfree(v13, p_src);
  return v12;
}
