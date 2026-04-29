_QWORD *__fastcall sub_D1290(__int64 a1, __int64 a2, int a3)
{
  void *v4; // r13
  __int64 v5; // rcx
  __int64 v6; // rdx
  __m128i si128; // xmm0
  __int64 v8; // rdi
  size_t v10; // r12
  __m128i v11[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned int)(a3 - 208) > 0x2F )
  {
    if ( !under_debugger )
      sub_383060(52528);
    BUG();
  }
  v4 = nullptr;
  sub_D0F50(a1, 1, a3);
  *(_DWORD *)a1 = 1;
  v6 = *(_QWORD *)(a2 + 8);
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v6);
  if ( v6 )
  {
    v10 = 4 * v6;
    v11[0] = si128;
    v4 = (void *)qalloc_or_throw(4 * v6, 1, v6, v5);
    memcpy(v4, *(const void **)a2, v10);
    si128 = _mm_load_si128(v11);
  }
  v8 = *(_QWORD *)(a1 + 88);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    v11[0] = si128;
    qfree(v8);
    si128 = _mm_load_si128(v11);
  }
  *(_QWORD *)(a1 + 88) = v4;
  *(__m128i *)(a1 + 96) = si128;
  return sub_D0E70(a1, (__int64 *)(a1 + 8), (_QWORD *)(a1 + 88));
}
