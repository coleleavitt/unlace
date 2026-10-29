unsigned __int64 __fastcall sub_51F6F0(__int64 *a1, const char *a2, __int64 a3)
{
  void *v3; // r14
  char *v4; // rbx
  size_t v5; // r13
  __int64 v6; // rcx
  size_t v7; // r12
  void *v8; // r15
  __int64 v9; // rax
  char *v10; // r8
  __int64 v12; // rax
  __int64 v14; // [rsp+8h] [rbp-80h]
  char *v15; // [rsp+8h] [rbp-80h]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v3 = nullptr;
  v4 = (char *)a2;
  v5 = *(_QWORD *)(a3 + 8);
  v16 = __readfsqword(0x28u);
  v6 = a3;
  if ( v5 )
  {
    v8 = nullptr;
    v3 = (void *)qalloc_or_throw(v5, a2);
    a2 = *(const char **)a3;
    memcpy(v3, *(const void **)a3, v5);
    v6 = a3;
    v7 = *(_QWORD *)(a3 + 32);
    if ( !v7 )
      goto LABEL_3;
  }
  else
  {
    v7 = *(_QWORD *)(a3 + 32);
    v8 = nullptr;
    if ( !v7 )
      goto LABEL_3;
  }
  v14 = v6;
  v8 = (void *)qalloc_or_throw(v7, a2);
  memcpy(v8, *(const void **)(v14 + 24), v7);
LABEL_3:
  v9 = a1[1];
  v10 = &v4[-*a1];
  if ( a1[2] < (unsigned __int64)(v9 + 1) )
  {
    v15 = &v4[-*a1];
    v12 = qvector_reserve(a1, *a1, v9 + 1, 48);
    v10 = v15;
    *a1 = v12;
    v4 = &v15[v12];
    v9 = a1[1];
  }
  memmove(v4 + 48, v4, 48 * v9 - (_QWORD)v10);
  *(_QWORD *)v4 = v3;
  *((_QWORD *)v4 + 3) = v8;
  *(__m128i *)(v4 + 8) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  *((__m128i *)v4 + 2) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  ++a1[1];
  return v16 - __readfsqword(0x28u);
}

