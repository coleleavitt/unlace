void __fastcall sub_14E660(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // r13
  unsigned __int64 v6; // rdx
  __m128i si128; // xmm0
  __int64 v8; // rdi
  __int64 v9; // r12
  __m128i v10[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = nullptr;
  v6 = *(_QWORD *)(a2 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v6 )
  {
    v10[0] = si128;
    v9 = 16 * v6;
    v4 = (void *)qalloc_or_throw(v9, a2, v9, a4);
    memcpy(v4, *(const void **)a2, v9);
    si128 = _mm_load_si128(v10);
  }
  v8 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    v10[0] = si128;
    qfree(v8);
    si128 = _mm_load_si128(v10);
  }
  *a1 = (__int64)v4;
  *(__m128i *)(a1 + 1) = si128;
}
