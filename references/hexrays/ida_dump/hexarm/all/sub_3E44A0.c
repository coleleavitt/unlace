unsigned __int64 __fastcall sub_3E44A0(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v3; // rbx
  char *v4; // rbx
  const char *v5; // r13
  const char *v6; // rbp
  const char *v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rbp
  char *v11; // rax
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // rdx
  const char *v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  const void *v19; // r13
  void *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbx
  size_t v23; // rax
  size_t v24; // r13
  size_t v25; // r14
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-68h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+10h] [rbp-58h] BYREF
  __m128i v30; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v3 = a2[1];
    if ( v3 <= 1 )
    {
      a1[1] = 0;
      v29 = 0;
      v30 = 0;
      goto LABEL_4;
    }
    v19 = (const void *)*a2;
    v20 = (void *)*a1;
    if ( a1[2] < v3 )
    {
      v26 = qvector_reserve(a1, *a1, v3, 1);
      *a1 = v26;
      v20 = (void *)v26;
    }
    a1[1] = v3;
    memmove(v20, v19, v3 - 1);
    *(_BYTE *)(*a1 + v3 - 1) = 0;
  }
  v21 = a1[1];
  v29 = 0;
  v30 = 0;
  if ( v21 )
  {
    v5 = (const char *)*a1;
    v4 = strchr((const char *)*a1, 10);
    goto LABEL_5;
  }
LABEL_4:
  v4 = nullptr;
  v5 = s1;
LABEL_5:
  v6 = v5;
  v7 = nullptr;
  while ( v4 )
  {
    if ( v4 != v6 )
    {
      v12 = v30.m128i_i64[0];
      v13 = v4 - v6;
      if ( v30.m128i_i64[0] )
      {
        v12 = v30.m128i_i64[0] - 1;
        v13 = v4 - v6 + v30.m128i_i64[0] - 1;
      }
      v14 = v13 + 1;
      if ( v30.m128i_i64[1] < (unsigned __int64)(v13 + 1) )
      {
        v28 = v13;
        v27 = v13 + 1;
        v29 = qvector_reserve(&v29, v7, v14, 1);
        v13 = v28;
        v7 = (const char *)v29;
        v14 = v27;
      }
      v30.m128i_i64[0] = v14;
      v7[v13] = 0;
      memmove((void *)(v12 + v29), v6, v4 - v6);
      v7 = (const char *)v29;
    }
    v10 = v30.m128i_i64[0];
    if ( v30.m128i_i64[0] )
    {
      v8 = v30.m128i_i64[0] + 1;
      v9 = v30.m128i_i64[0] + 2;
      v10 = v30.m128i_i64[0] - 1;
      if ( v30.m128i_i64[1] >= (unsigned __int64)(v30.m128i_i64[0] + 2) )
        goto LABEL_7;
    }
    else
    {
      v9 = 3;
      v8 = 2;
      if ( v30.m128i_i64[1] >= 3uLL )
        goto LABEL_7;
    }
    v29 = qvector_reserve(&v29, v7, v9, 1);
    v7 = (const char *)v29;
LABEL_7:
    v30.m128i_i64[0] = v9;
    v7[v8] = 0;
    *(_WORD *)(v29 + v10) = 28252;
    v6 = v4 + 1;
    v11 = strchr(v4 + 1, 10);
    v7 = (const char *)v29;
    v4 = v11;
  }
  if ( v6 == v5 )
  {
    v15 = v7;
  }
  else
  {
    if ( *v6 && v6 )
    {
      v22 = v30.m128i_i64[0];
      v23 = strlen(v6);
      v24 = v23;
      v25 = v23;
      if ( v22 )
      {
        --v22;
        v25 = v23 + v22;
      }
      if ( v30.m128i_i64[1] < v25 + 1 )
      {
        v29 = qvector_reserve(&v29, v7, v25 + 1, 1);
        v7 = (const char *)v29;
      }
      v30.m128i_i64[0] = v25 + 1;
      v7[v25] = 0;
      memmove((void *)(v29 + v22), v6, v24);
      v7 = (const char *)v29;
    }
    v15 = (const char *)*a1;
    v16 = a1[2];
    *a1 = (__int64)v7;
    v17 = _mm_loadu_si128(&v30);
    v29 = (__int64)v15;
    v30.m128i_i64[1] = v16;
    *(__m128i *)(a1 + 1) = v17;
  }
  if ( v15 )
  {
    v30.m128i_i64[0] = 0;
    qfree(v15);
  }
  return v31 - __readfsqword(0x28u);
}
