__int64 __fastcall interactive_graph_t__::vfunc_21(__int64 a1)
{
  __int64 v2; // rax
  const void *v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  void *v6; // r13
  unsigned __int64 v7; // rdx
  __m128i si128; // xmm0
  __int64 v9; // rdi
  void *v10; // r13
  size_t v11; // r12
  __m128i v12; // xmm0
  __int64 v13; // rdi
  void *v14; // r13
  const void *v15; // rsi
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // rdi
  _QWORD *v19; // rdi
  const void *v21; // r14
  void *v22; // rax
  size_t v23; // r12
  void *v24; // rax
  __int64 v25; // rdi
  void *v26; // rax
  size_t v27; // r12
  void *v28; // rax
  __m128i v29[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = qalloc_or_throw(256);
  v3 = *(const void **)(a1 + 72);
  v4 = v2;
  sub_29C4E0(v2, (__int64)v3);
  if ( v4 + 8 != a1 + 8 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 > 1 )
    {
      v21 = *(const void **)(a1 + 8);
      v22 = *(void **)(v4 + 8);
      if ( *(_QWORD *)(v4 + 24) < v5 )
      {
        v22 = (void *)qvector_reserve(v4 + 8, *(_QWORD *)(v4 + 8), *(_QWORD *)(a1 + 16), 1);
        *(_QWORD *)(v4 + 8) = v22;
      }
      *(_QWORD *)(v4 + 16) = v5;
      v3 = v21;
      memmove(v22, v21, v5 - 1);
      *(_BYTE *)(*(_QWORD *)(v4 + 8) + v5 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v4 + 16) = 0;
    }
  }
  v6 = nullptr;
  *(_BYTE *)(v4 + 32) = *(_BYTE *)(a1 + 32);
  *(_DWORD *)(v4 + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(v4 + 48) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(v4 + 56) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v4 + 64) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(v4 + 72) = *(_QWORD *)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 88);
  si128 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  if ( v7 )
  {
    v27 = 4 * v7;
    v29[0] = si128;
    v28 = (void *)qalloc_or_throw(4 * v7);
    v3 = *(const void **)(a1 + 80);
    v6 = v28;
    memcpy(v28, v3, v27);
    si128 = _mm_load_si128(v29);
  }
  v9 = *(_QWORD *)(v4 + 80);
  if ( v9 )
  {
    *(_QWORD *)(v4 + 88) = 0;
    v29[0] = si128;
    qfree(v9, (const char *)v3);
    si128 = _mm_load_si128(v29);
  }
  *(_QWORD *)(v4 + 80) = v6;
  v10 = nullptr;
  *(__m128i *)(v4 + 88) = si128;
  v11 = *(_QWORD *)(a1 + 112);
  v12 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  if ( v11 )
  {
    v25 = *(_QWORD *)(a1 + 112);
    v29[0] = v12;
    v26 = (void *)qalloc_or_throw(v25);
    v3 = *(const void **)(a1 + 104);
    v10 = v26;
    memcpy(v26, v3, v11);
    v12 = _mm_load_si128(v29);
  }
  v13 = *(_QWORD *)(v4 + 104);
  if ( v13 )
  {
    *(_QWORD *)(v4 + 112) = 0;
    v29[0] = v12;
    qfree(v13, (const char *)v3);
    v12 = _mm_load_si128(v29);
  }
  *(_QWORD *)(v4 + 104) = v10;
  v14 = nullptr;
  *(__m128i *)(v4 + 112) = v12;
  sub_2904C0((__int64 *)(v4 + 128), (__int64 *)(a1 + 128));
  sub_2904C0((__int64 *)(v4 + 152), (__int64 *)(a1 + 152));
  sub_2904C0((__int64 *)(v4 + 176), (__int64 *)(a1 + 176));
  v15 = (const void *)(a1 + 200);
  sub_2904C0((__int64 *)(v4 + 200), (__int64 *)(a1 + 200));
  v16 = *(_QWORD *)(a1 + 232);
  v17 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
  if ( v16 )
  {
    v29[0] = v17;
    v23 = 16 * v16;
    v24 = (void *)qalloc_or_throw(16 * v16);
    v15 = *(const void **)(a1 + 224);
    v14 = v24;
    memcpy(v24, v15, v23);
    v17 = _mm_load_si128(v29);
  }
  v18 = *(_QWORD *)(v4 + 224);
  if ( v18 )
  {
    *(_QWORD *)(v4 + 232) = 0;
    v29[0] = v17;
    qfree(v18, (const char *)v15);
    v17 = _mm_load_si128(v29);
  }
  *(_QWORD *)(v4 + 224) = v14;
  v19 = *(_QWORD **)(v4 + 248);
  *(__m128i *)(v4 + 232) = v17;
  sub_2A2040(v19, *(_QWORD *)(a1 + 248));
  return v4;
}
