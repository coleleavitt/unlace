__int64 __fastcall sub_403630(__int64 a1, __int64 *a2, __int64 a3)
{
  void *v3; // r12
  __int64 v5; // r13
  size_t v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rax

  v3 = nullptr;
  v5 = *(_QWORD *)(a1 + 40) + 88 * a3;
  v6 = *(_QWORD *)(v5 + 48);
  if ( v6 )
  {
    v3 = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 48));
    memcpy(v3, *(const void **)(v5 + 40), v6);
  }
  v7 = a2[1];
  v8 = *a2;
  if ( a2[2] < (unsigned __int64)(v7 + 1) )
  {
    v10 = qvector_reserve(a2, v8, v7 + 1, 24);
    *a2 = v10;
    v7 = a2[1];
    v8 = v10;
  }
  result = v8 + 24 * v7;
  *(_QWORD *)result = v3;
  *(__m128i *)(result + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  ++a2[1];
  return result;
}
