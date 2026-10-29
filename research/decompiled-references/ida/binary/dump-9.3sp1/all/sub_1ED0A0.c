__int64 __fastcall sub_1ED0A0(_QWORD *a1, __int64 *a2, int a3)
{
  void *v3; // r15
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __m128i si128; // xmm0
  __int64 v10; // rdi
  __int64 *v11; // r13
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v18; // r13
  __m128i v19[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = nullptr;
  v5 = 40LL * a3;
  v6 = v5 + a1[1];
  sub_648D0(a2, (__int64 *)v6);
  v8 = *(_QWORD *)(v6 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  if ( v8 )
  {
    v19[0] = si128;
    v18 = 16 * v8;
    v3 = (void *)qalloc_or_throw(v18, v6, v18, v7);
    memcpy(v3, *(const void **)(v6 + 16), v18);
    si128 = _mm_load_si128(v19);
  }
  v10 = a2[2];
  if ( v10 )
  {
    a2[3] = 0;
    v19[0] = si128;
    qfree(v10);
    si128 = _mm_load_si128(v19);
  }
  *(__m128i *)(a2 + 3) = si128;
  a2[2] = (__int64)v3;
  v11 = (__int64 *)(v5 + a1[15]);
  sub_64280(a2, v11);
  sub_316CB0(a2 + 2, v11 + 2);
  v12 = (__int64 *)(a1[18] + v5);
  sub_64640(a2, v12, v13, v14, v15, v16);
  return sub_317C60(a2 + 2, v12 + 2);
}
