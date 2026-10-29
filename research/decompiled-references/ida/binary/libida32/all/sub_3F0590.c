__int64 __fastcall sub_3F0590(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v6; // r13
  __int64 v8; // rbp
  size_t v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rax

  v6 = nullptr;
  v8 = *(_QWORD *)(a1 + 40) + 80 * a3;
  v9 = *(_QWORD *)(v8 + 40);
  if ( v9 )
  {
    v6 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 40), a2, a3, a4, a5, a6);
    memcpy(v6, *(const void **)(v8 + 32), v9);
  }
  v10 = a2[1];
  v11 = *a2;
  if ( a2[2] < (unsigned __int64)(v10 + 1) )
  {
    v13 = qvector_reserve(a2, v11, v10 + 1, 24);
    *a2 = v13;
    v10 = a2[1];
    v11 = v13;
  }
  result = v11 + 24 * v10;
  *(_QWORD *)result = v6;
  *(__m128i *)(result + 8) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  ++a2[1];
  return result;
}

