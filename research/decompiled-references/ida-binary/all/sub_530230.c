__int64 __fastcall get_registered_actions(_QWORD *a1, __int64 a2)
{
  size_t v2; // r12
  void *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 <= 1 )
    return 0;
  v4 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 40));
  memcpy(v4, *(const void **)(a2 + 32), v2);
  v5 = a1[2];
  v6 = a1[1];
  if ( a1[3] < (unsigned __int64)(v5 + 1) )
  {
    v8 = qvector_reserve(a1 + 1, v6, v5 + 1, 24);
    a1[1] = v8;
    v5 = a1[2];
    v6 = v8;
  }
  v7 = v6 + 24 * v5;
  *(_QWORD *)v7 = v4;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v2);
  ++a1[2];
  return 0;
}
