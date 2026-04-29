void *__fastcall sub_1A3420(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // r12
  unsigned __int64 v4; // rdx
  __m128i si128; // xmm0
  __int64 v6; // rdi
  void *v7; // r12
  void *result; // rax
  unsigned __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rdi
  size_t v12; // rbp
  size_t v13; // rbp
  __m128i v14[3]; // [rsp+0h] [rbp-38h] BYREF

  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 88) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 96) = 0;
  }
  *(_QWORD *)(a1 + 72) = 0;
  v3 = nullptr;
  *(_OWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  sub_648D0((__int64 *)(a1 + 160), (__int64 *)(a1 + 120));
  v4 = *(_QWORD *)(a1 + 144);
  si128 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    v14[0] = si128;
    v12 = 16 * v4;
    v3 = (void *)qalloc_or_throw(16 * v4);
    memcpy(v3, *(const void **)(a1 + 136), v12);
    si128 = _mm_load_si128(v14);
  }
  v6 = *(_QWORD *)(a1 + 176);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    v14[0] = si128;
    qfree(v6);
    si128 = _mm_load_si128(v14);
  }
  *(_QWORD *)(a1 + 176) = v3;
  v7 = nullptr;
  *(__m128i *)(a1 + 184) = si128;
  result = sub_648D0((__int64 *)(a1 + 200), (__int64 *)(a1 + 160));
  v9 = *(_QWORD *)(a1 + 184);
  v10 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  if ( v9 )
  {
    v14[0] = v10;
    v13 = 16 * v9;
    v7 = (void *)qalloc_or_throw(16 * v9);
    result = memcpy(v7, *(const void **)(a1 + 176), v13);
    v10 = _mm_load_si128(v14);
  }
  v11 = *(_QWORD *)(a1 + 216);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    v14[0] = v10;
    result = (void *)qfree(v11);
    v10 = _mm_load_si128(v14);
  }
  *(_QWORD *)(a1 + 216) = v7;
  *(__m128i *)(a1 + 224) = v10;
  return result;
}
