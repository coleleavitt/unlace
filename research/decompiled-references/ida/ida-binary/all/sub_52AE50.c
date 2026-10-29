unsigned __int64 __fastcall sub_52AE50(__int64 *a1, __int64 a2)
{
  const char *v3; // rsi
  const char *v4; // rax
  const char *v5; // r12
  size_t v6; // rax
  size_t v7; // rbp
  size_t v8; // rbx
  void *v9; // rax
  size_t v10; // rbp
  const char *v11; // r15
  __int64 v12; // rbx
  const char *v13; // r13
  const char *v14; // r14
  const char *v15; // rdi
  unsigned __int64 v16; // rbx
  char *v18; // rax
  char *v19; // rax
  __int64 v20; // rax
  __int64 v22; // [rsp+8h] [rbp-1070h]
  void *src; // [rsp+10h] [rbp-1068h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-1060h]
  char v25[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v26; // [rsp+1038h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v3 = (_BYTE *)&stru_1000;
  v4 = (const char *)qmake_full_path(v25, 4096, a2);
  src = nullptr;
  v5 = v4;
  *(_OWORD *)n = 0;
  if ( v4 )
  {
    v6 = strlen(v4);
    v7 = v6 + 1;
    v8 = v6;
    v9 = (void *)qvector_reserve(&src, 0, v6 + 1, 1);
    v3 = v5;
    n[0] = v7;
    src = v9;
    memmove(v9, v5, v8);
    *((_BYTE *)src + v8) = 0;
    v10 = n[0];
    v11 = (const char *)*a1;
    v22 = a1[1];
    v12 = *a1 + 24 * v22;
    if ( *a1 == v12 )
      goto LABEL_21;
  }
  else
  {
    v11 = (const char *)*a1;
    v10 = 0;
    v22 = a1[1];
    v12 = *a1 + 24 * v22;
    if ( v12 == *a1 )
      goto LABEL_17;
  }
  v13 = (const char *)src;
  v14 = v11;
  while ( 1 )
  {
    if ( *((_QWORD *)v14 + 1) )
    {
      v3 = *(const char **)v14;
      v15 = &s1;
      if ( !v10 )
        goto LABEL_5;
    }
    else
    {
      if ( !v10 )
      {
        if ( v14 == (const char *)v12 )
          goto LABEL_23;
        goto LABEL_12;
      }
      v3 = &s1;
    }
    v15 = v13;
LABEL_5:
    if ( !strcmp(v15, v3) )
      break;
    v14 += 24;
    if ( v14 == (const char *)v12 )
      goto LABEL_21;
  }
  if ( v14 != (const char *)v12 )
  {
LABEL_12:
    v16 = 0xAAAAAAAAAAAAAAABLL * ((v14 - v11) >> 3);
    goto LABEL_13;
  }
LABEL_21:
  if ( v10 )
  {
    v19 = (char *)qalloc_or_throw(v10);
    v3 = (const char *)src;
    v5 = v19;
    memcpy(v19, src, v10);
    v11 = (const char *)*a1;
    v22 = a1[1];
  }
  else
  {
LABEL_23:
    v5 = nullptr;
  }
LABEL_17:
  if ( a1[2] < (unsigned __int64)(v22 + 1) )
  {
    v3 = v11;
    v20 = qvector_reserve(a1, v11, v22 + 1, 24);
    *a1 = v20;
    v11 = (const char *)v20;
    v22 = a1[1];
  }
  v18 = (char *)&v11[24 * v22];
  *(_QWORD *)v18 = v5;
  v13 = (const char *)src;
  *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  v16 = a1[1];
  a1[1] = v16 + 1;
LABEL_13:
  if ( v13 )
  {
    n[0] = 0;
    qfree(v13, v3);
  }
  return v16;
}
