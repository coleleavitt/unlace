__int64 __fastcall sub_1E8820(_QWORD *a1, __int64 *a2, int a3)
{
  void *v3; // r15
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rdx
  __m128i si128; // xmm0
  __int64 v9; // rdi
  __int64 *v10; // r13
  __int64 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  size_t v17; // r13
  __m128i v18[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = nullptr;
  v5 = 40LL * a3;
  v6 = v5 + a1[1];
  sub_606D0(a2, (__int64 *)v6);
  v7 = *(_QWORD *)(v6 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  if ( v7 )
  {
    v18[0] = si128;
    v17 = 16 * v7;
    v3 = (void *)qalloc_or_throw(16 * v7);
    memcpy(v3, *(const void **)(v6 + 16), v17);
    si128 = _mm_load_si128(v18);
  }
  v9 = a2[2];
  if ( v9 )
  {
    a2[3] = 0;
    v18[0] = si128;
    qfree(v9);
    si128 = _mm_load_si128(v18);
  }
  *(__m128i *)(a2 + 3) = si128;
  a2[2] = (__int64)v3;
  v10 = (__int64 *)(v5 + a1[15]);
  sub_60080(a2, v10);
  sub_311F30(a2 + 2, v10 + 2);
  v11 = (__int64 *)(a1[18] + v5);
  sub_60440(a2, v11, v12, v13, v14, v15);
  return sub_312EE0(a2 + 2, v11 + 2);
}
