__int64 __fastcall sub_5C77C0(__int64 a1, const char *a2)
{
  _QWORD *v2; // rbp
  size_t v3; // r12
  void *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = *(_QWORD **)(a1 + 120);
  if ( !v2 )
  {
    v2 = *(_QWORD **)(a1 + 128);
    if ( !v2 )
      v2 = *(_QWORD **)(a1 + 104);
  }
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 <= 1 )
    return 0;
  v5 = (void *)qalloc_or_throw(*(_QWORD *)(a1 + 48), a2);
  memcpy(v5, *(const void **)(a1 + 40), v3);
  v6 = v2[17];
  v7 = v2[16];
  if ( v2[18] < (unsigned __int64)(v6 + 1) )
  {
    v9 = qvector_reserve(v2 + 16, v7, v6 + 1, 24);
    v2[16] = v9;
    v6 = v2[17];
    v7 = v9;
  }
  v8 = v7 + 24 * v6;
  *(_QWORD *)v8 = v5;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  ++v2[17];
  return 0;
}

