__int64 __fastcall sub_1911F0(__int64 a1, __int64 *a2, unsigned int a3)
{
  void *v3; // r15
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rdx
  __m128i si128; // xmm0
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 *v14; // rbp
  size_t v16; // r13
  __m128i v17[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = nullptr;
  v6 = *(_QWORD *)(a1 + 8) + 40LL * (int)a3;
  sub_5FE50(a2, (__int64 *)v6);
  v10 = *(_QWORD *)(v6 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  if ( v10 )
  {
    v17[0] = si128;
    v16 = 16 * v10;
    v3 = (void *)qalloc_or_throw(16 * v10);
    memcpy(v3, *(const void **)(v6 + 16), v16);
    si128 = _mm_load_si128(v17);
  }
  v12 = a2[2];
  if ( v12 )
  {
    a2[3] = 0;
    v17[0] = si128;
    qfree(v12);
    si128 = _mm_load_si128(v17);
  }
  a2[2] = (__int64)v3;
  *(__m128i *)(a2 + 3) = si128;
  if ( *(_DWORD *)(a1 + 128) == a3 )
  {
    v14 = *(__int64 **)(a1 + 136);
  }
  else if ( *(_DWORD *)(a1 + 132) == a3 )
  {
    v14 = *(__int64 **)(a1 + 144);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 120);
    if ( a3 >= *(_DWORD *)(v13 + 64) )
      sub_190580();
    v14 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v13 + 528) + 8LL * a3) + 200LL);
  }
  sub_5FBC0(a2, v14, v10, v7, v8, v9);
  return sub_3123A0(a2 + 2, v14 + 2);
}
