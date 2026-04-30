__int64 __fastcall user_graph_t__::vfunc_21(__int64 a1)
{
  __int64 v2; // rax
  const void *v3; // rsi
  __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // r12
  void *v7; // r13
  unsigned __int64 v8; // rdx
  __m128i si128; // xmm0
  __int64 v10; // rdi
  void *v11; // r13
  size_t v12; // r12
  __m128i v13; // xmm0
  __int64 v14; // rdi
  void *v15; // r13
  const void *v16; // rsi
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rdi
  const void *v21; // r14
  void *v22; // rax
  size_t v23; // r12
  void *v24; // rax
  __int64 v25; // rdi
  void *v26; // rax
  size_t v27; // r12
  void *v28; // rax
  __m128i v29[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = qalloc_or_throw(264);
  v3 = *(const void **)(a1 + 72);
  v4 = *(_QWORD *)(a1 + 256);
  v5 = v2;
  sub_29C4E0(v2, (__int64)v3);
  *(_QWORD *)(v5 + 256) = v4;
  *(_QWORD *)v5 = user_graph_t___vtable;
  if ( v5 + 8 != a1 + 8 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 > 1 )
    {
      v21 = *(const void **)(a1 + 8);
      v22 = *(void **)(v5 + 8);
      if ( *(_QWORD *)(v5 + 24) < v6 )
      {
        v22 = (void *)qvector_reserve(v5 + 8, *(_QWORD *)(v5 + 8), *(_QWORD *)(a1 + 16), 1);
        *(_QWORD *)(v5 + 8) = v22;
      }
      *(_QWORD *)(v5 + 16) = v6;
      v3 = v21;
      memmove(v22, v21, v6 - 1);
      *(_BYTE *)(*(_QWORD *)(v5 + 8) + v6 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v5 + 16) = 0;
    }
  }
  v7 = nullptr;
  *(_BYTE *)(v5 + 32) = *(_BYTE *)(a1 + 32);
  *(_DWORD *)(v5 + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(v5 + 40) = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(v5 + 48) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(v5 + 56) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v5 + 64) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(v5 + 72) = *(_QWORD *)(a1 + 72);
  v8 = *(_QWORD *)(a1 + 88);
  si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  if ( v8 )
  {
    v27 = 4 * v8;
    v29[0] = si128;
    v28 = (void *)qalloc_or_throw(4 * v8);
    v3 = *(const void **)(a1 + 80);
    v7 = v28;
    memcpy(v28, v3, v27);
    si128 = _mm_load_si128(v29);
  }
  v10 = *(_QWORD *)(v5 + 80);
  if ( v10 )
  {
    *(_QWORD *)(v5 + 88) = 0;
    v29[0] = si128;
    qfree(v10, (const char *)v3);
    si128 = _mm_load_si128(v29);
  }
  *(_QWORD *)(v5 + 80) = v7;
  v11 = nullptr;
  *(__m128i *)(v5 + 88) = si128;
  v12 = *(_QWORD *)(a1 + 112);
  v13 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  if ( v12 )
  {
    v25 = *(_QWORD *)(a1 + 112);
    v29[0] = v13;
    v26 = (void *)qalloc_or_throw(v25);
    v3 = *(const void **)(a1 + 104);
    v11 = v26;
    memcpy(v26, v3, v12);
    v13 = _mm_load_si128(v29);
  }
  v14 = *(_QWORD *)(v5 + 104);
  if ( v14 )
  {
    *(_QWORD *)(v5 + 112) = 0;
    v29[0] = v13;
    qfree(v14, (const char *)v3);
    v13 = _mm_load_si128(v29);
  }
  *(_QWORD *)(v5 + 104) = v11;
  v15 = nullptr;
  *(__m128i *)(v5 + 112) = v13;
  sub_2AD280((__int64 *)(v5 + 128), (__int64 *)(a1 + 128));
  sub_2AD280((__int64 *)(v5 + 152), (__int64 *)(a1 + 152));
  sub_2AD280((__int64 *)(v5 + 176), (__int64 *)(a1 + 176));
  v16 = (const void *)(a1 + 200);
  sub_2AD280((__int64 *)(v5 + 200), (__int64 *)(a1 + 200));
  v17 = *(_QWORD *)(a1 + 232);
  v18 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
  if ( v17 )
  {
    v29[0] = v18;
    v23 = 16 * v17;
    v24 = (void *)qalloc_or_throw(16 * v17);
    v16 = *(const void **)(a1 + 224);
    v15 = v24;
    memcpy(v24, v16, v23);
    v18 = _mm_load_si128(v29);
  }
  v19 = *(_QWORD *)(v5 + 224);
  if ( v19 )
  {
    *(_QWORD *)(v5 + 232) = 0;
    v29[0] = v18;
    qfree(v19, (const char *)v16);
    v18 = _mm_load_si128(v29);
  }
  *(_QWORD *)(v5 + 224) = v15;
  *(__m128i *)(v5 + 232) = v18;
  sub_2A2220((_QWORD **)(v5 + 248), (__int64 *)(a1 + 248));
  *(_QWORD *)(v5 + 256) = *(_QWORD *)(a1 + 256);
  return v5;
}
