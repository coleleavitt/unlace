unsigned __int64 __fastcall sub_132940(__int64 *a1, __int64 a2)
{
  void *v2; // r13
  size_t v3; // r12
  size_t v4; // rbp
  void *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+38h] [rbp-40h]

  v2 = nullptr;
  v3 = *(_QWORD *)(a2 + 8);
  v11 = __readfsqword(0x28u);
  if ( v3 )
  {
    v5 = nullptr;
    v2 = (void *)qalloc_or_throw();
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
  v5 = (void *)qalloc_or_throw();
  memcpy(v5, *(const void **)(a2 + 24), v4);
LABEL_3:
  v6 = a1[1];
  v7 = *a1;
  if ( a1[2] < (unsigned __int64)(v6 + 1) )
  {
    v10 = qvector_reserve();
    *a1 = v10;
    v7 = v10;
    v6 = a1[1];
  }
  v8 = 48 * v6 + v7;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  *(_QWORD *)v8 = v2;
  *(_QWORD *)(v8 + 24) = v5;
  *(__m128i *)(v8 + 32) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  ++a1[1];
  return v11 - __readfsqword(0x28u);
}

