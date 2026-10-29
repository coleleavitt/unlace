unsigned __int64 __fastcall sub_520270(__int64 *a1, const char *a2)
{
  void *v2; // r13
  size_t v3; // r12
  const char *v4; // r15
  size_t v5; // rbp
  void *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  void *v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]

  v2 = nullptr;
  v3 = *((_QWORD *)a2 + 1);
  v13 = __readfsqword(0x28u);
  v4 = a2;
  if ( v3 )
  {
    v6 = nullptr;
    v11 = (void *)qalloc_or_throw(v3, a2);
    a2 = *(const char **)a2;
    v2 = v11;
    memcpy(v11, a2, v3);
    v5 = *((_QWORD *)v4 + 4);
    if ( !v5 )
      goto LABEL_3;
  }
  else
  {
    v5 = *((_QWORD *)a2 + 4);
    v6 = nullptr;
    if ( !v5 )
      goto LABEL_3;
  }
  v6 = (void *)qalloc_or_throw(v5, a2);
  memcpy(v6, *((const void **)v4 + 3), v5);
LABEL_3:
  v7 = a1[1];
  v8 = *a1;
  if ( a1[2] < (unsigned __int64)(v7 + 1) )
  {
    v12 = qvector_reserve(a1, v8, v7 + 1, 48);
    *a1 = v12;
    v8 = v12;
    v7 = a1[1];
  }
  v9 = 48 * v7 + v8;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  *(_QWORD *)v9 = v2;
  *(_QWORD *)(v9 + 24) = v6;
  *(__m128i *)(v9 + 32) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  ++a1[1];
  return v13 - __readfsqword(0x28u);
}

