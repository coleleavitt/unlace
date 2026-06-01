__int64 __fastcall sub_5A9B80(_QWORD *a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // rbp
  size_t v5; // rbx
  __int64 v6; // rcx
  char *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r15
  size_t v10; // rbp
  const char *v11; // rsi
  const char *v12; // rdi
  size_t v14; // rax
  size_t v15; // rbp
  size_t v16; // rbx
  __int64 v17; // rdi
  char *v18; // rbx
  size_t v19; // rbp
  void *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rax
  char *v23; // r14
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-78h]
  unsigned __int64 v29; // [rsp+10h] [rbp-68h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( !a2 || !*a2 )
    return 0xFFFFFFFFLL;
  src = nullptr;
  *(_OWORD *)n = 0;
  v3 = strlen(a2);
  v4 = v3 + 1;
  v5 = v3;
  src = (void *)qvector_reserve(&src, 0, v3 + 1, 1);
  n[0] = v4;
  memmove(src, a2, v5);
  *((_BYTE *)src + v5) = 0;
  v6 = a1[1];
  v7 = (char *)src;
  v29 = a1[2];
  v8 = v6 + 24 * v29;
  v27 = v6;
  v9 = v6;
  if ( v6 == v8 )
  {
LABEL_12:
    if ( !v7 )
      goto LABEL_16;
    goto LABEL_13;
  }
  v10 = n[0];
  v9 = a1[1];
  while ( 1 )
  {
    if ( *(_QWORD *)(v9 + 8) )
    {
      v11 = *(const char **)v9;
      v12 = haystack;
      if ( !v10 )
        goto LABEL_6;
      goto LABEL_11;
    }
    if ( !v10 )
      break;
    v11 = haystack;
LABEL_11:
    v12 = v7;
LABEL_6:
    if ( !strcmp(v12, v11) )
      break;
    v9 += 24;
    if ( v8 == v9 )
      goto LABEL_12;
  }
  if ( v7 )
  {
LABEL_13:
    n[0] = 0;
    qfree(v7);
    v27 = a1[1];
    v29 = a1[2];
    v8 = v27 + 24 * v29;
  }
  if ( v8 != v9 )
    return -1431655765 * (unsigned int)((v9 - v27) >> 3);
LABEL_16:
  if ( v29 > 0xFE )
    return 0xFFFFFFFFLL;
  src = nullptr;
  *(_OWORD *)n = 0;
  v14 = strlen(a2);
  v15 = v14 + 1;
  v16 = v14;
  src = (void *)qvector_reserve(&src, 0, v14 + 1, 1);
  n[0] = v15;
  memmove(src, a2, v16);
  *((_BYTE *)src + v16) = 0;
  v17 = 24LL * a1[2];
  v18 = (char *)(v17 + a1[1]);
  sub_5A91E0(0xAAAAAAAAAAAAAAABLL * (v17 >> 3), (__int64)&src, 0, 0xB0u);
  v19 = n[0];
  v20 = nullptr;
  if ( n[0] )
  {
    v20 = (void *)qalloc_or_throw(n[0]);
    memcpy(v20, src, v19);
  }
  v21 = a1[1];
  v22 = a1[2];
  v23 = &v18[-v21];
  if ( a1[3] < (unsigned __int64)(v22 + 1) )
  {
    v26 = qvector_reserve(a1 + 1, v21, v22 + 1, 24);
    a1[1] = v26;
    v18 = &v23[v26];
    v22 = a1[2];
  }
  memmove(v18 + 24, v18, 24 * v22 - (_QWORD)v23);
  *(_QWORD *)v18 = v20;
  *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
  v24 = src;
  v25 = a1[2] + 1LL;
  a1[2] = v25;
  if ( v24 )
  {
    n[0] = 0;
    qfree(v24);
    v25 = a1[2];
  }
  return (unsigned int)(v25 - 1);
}
