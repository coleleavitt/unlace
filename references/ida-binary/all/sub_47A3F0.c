unsigned __int64 __fastcall sub_47A3F0(_QWORD *a1, __int64 a2)
{
  void *v2; // r14
  size_t v3; // r13
  size_t v4; // r12
  void *v5; // r15
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+38h] [rbp-40h]

  v2 = nullptr;
  v3 = *(_QWORD *)(a2 + 8);
  v12 = __readfsqword(0x28u);
  if ( v3 )
  {
    v5 = nullptr;
    v2 = (void *)qalloc_or_throw(v3);
    memcpy(v2, *(const void **)a2, v3);
    v4 = *(_QWORD *)(a2 + 32);
    if ( !v4 )
      goto LABEL_3;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = nullptr;
    if ( !v4 )
      goto LABEL_3;
  }
  v5 = (void *)qalloc_or_throw(v4);
  memcpy(v5, *(const void **)(a2 + 24), v4);
LABEL_3:
  v6 = *(_DWORD *)(a2 + 48);
  v7 = a1[19];
  v8 = a1[18];
  if ( a1[20] < (unsigned __int64)(v7 + 1) )
  {
    v11 = qvector_reserve(a1 + 18, v8, v7 + 1, 56);
    a1[18] = v11;
    v7 = a1[19];
    v8 = v11;
  }
  v9 = v8 + 56 * v7;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  *(_QWORD *)v9 = v2;
  *(_QWORD *)(v9 + 24) = v5;
  *(_DWORD *)(v9 + 48) = v6;
  *(__m128i *)(v9 + 32) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  ++a1[19];
  return v12 - __readfsqword(0x28u);
}
