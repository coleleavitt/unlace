__int64 __fastcall sub_5E34E0(__int64 a1)
{
  _QWORD *v1; // rbp
  size_t v2; // r12
  void *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = *(_QWORD **)(a1 + 128);
  if ( !v1 )
  {
    v1 = *(_QWORD **)(a1 + 136);
    if ( !v1 )
      v1 = *(_QWORD **)(a1 + 112);
  }
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 <= 1 )
    return 0;
  v4 = (void *)qalloc_or_throw(*(_QWORD *)(a1 + 48));
  memcpy(v4, *(const void **)(a1 + 40), v2);
  v5 = v1[17];
  v6 = v1[16];
  if ( v1[18] < (unsigned __int64)(v5 + 1) )
  {
    v8 = qvector_reserve(v1 + 16, v6, v5 + 1, 24);
    v1[16] = v8;
    v5 = v1[17];
    v6 = v8;
  }
  v7 = v6 + 24 * v5;
  *(_QWORD *)v7 = v4;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v2);
  ++v1[17];
  return 0;
}
