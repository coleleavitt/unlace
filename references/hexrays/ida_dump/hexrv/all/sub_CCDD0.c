_QWORD *__fastcall sub_CCDD0(__int64 a1, __int64 a2, int a3)
{
  void *v4; // r13
  unsigned __int64 v5; // rdx
  __m128i si128; // xmm0
  __int64 v7; // rdi
  size_t v9; // r12
  __m128i v10[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned int)(a3 - 208) > 0x2F )
  {
    if ( !under_debugger )
      sub_37DDE0(52528);
    BUG();
  }
  v4 = nullptr;
  sub_CCA90(a1, 1, a3);
  *(_DWORD *)a1 = 1;
  v5 = *(_QWORD *)(a2 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v5 )
  {
    v9 = 4 * v5;
    v10[0] = si128;
    v4 = (void *)qalloc_or_throw(4 * v5);
    memcpy(v4, *(const void **)a2, v9);
    si128 = _mm_load_si128(v10);
  }
  v7 = *(_QWORD *)(a1 + 88);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    v10[0] = si128;
    qfree(v7);
    si128 = _mm_load_si128(v10);
  }
  *(_QWORD *)(a1 + 88) = v4;
  *(__m128i *)(a1 + 96) = si128;
  return sub_CC9B0(a1, (__int64 *)(a1 + 8), (_QWORD *)(a1 + 88));
}
