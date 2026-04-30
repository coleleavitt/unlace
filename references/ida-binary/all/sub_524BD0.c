__int64 __fastcall sub_524BD0(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  const char **v3; // rax
  const char *v4; // rbp
  size_t v6; // rax
  size_t v7; // rbx
  char *v8; // rbx
  const char *v9; // r13
  const char *v10; // rbp
  const char *v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rbp
  char *v15; // rax
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // rdx
  const char *v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rbx
  size_t v24; // rax
  size_t v25; // r13
  size_t v26; // r14
  void *v27; // rdi
  size_t v28; // r13
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-68h]
  __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+10h] [rbp-58h] BYREF
  __m128i v34; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( a3 <= 0x8113E1FF )
    return 0;
  if ( a3 >= *(_QWORD *)(a1 + 16) + 2165563904LL )
    return 0;
  v3 = (const char **)(*(_QWORD *)(a1 + 32) + 24 * (a3 - 2165563904u));
  v4 = *v3;
  if ( !*v3 )
    return 0;
  v6 = strlen(*v3);
  v7 = v6;
  if ( v6 )
  {
    v27 = (void *)*a2;
    v28 = v6 + 1;
    if ( a2[2] < v6 + 1 )
    {
      v30 = qvector_reserve(a2, *a2, v6 + 1, 1);
      *a2 = v30;
      v27 = (void *)v30;
    }
    a2[1] = v28;
    memmove(v27, v4, v7);
    *(_BYTE *)(*a2 + v7) = 0;
    v29 = a2[1] == 0;
    v33 = 0;
    v34 = 0;
    if ( !v29 )
    {
      v9 = (const char *)*a2;
      v8 = strchr((const char *)*a2, 45);
      goto LABEL_7;
    }
  }
  else
  {
    a2[1] = 0;
    v33 = 0;
    v34 = 0;
  }
  v8 = nullptr;
  v9 = &s1;
LABEL_7:
  v10 = v9;
  v11 = nullptr;
  while ( v8 )
  {
    if ( v8 != v10 )
    {
      v17 = v34.m128i_i64[0];
      v18 = v8 - v10;
      if ( v34.m128i_i64[0] )
      {
        v17 = v34.m128i_i64[0] - 1;
        v18 = v8 - v10 + v34.m128i_i64[0] - 1;
      }
      v19 = v18 + 1;
      if ( v34.m128i_i64[1] < (unsigned __int64)(v18 + 1) )
      {
        v32 = v18;
        v31 = v18 + 1;
        v33 = qvector_reserve(&v33, v11, v19, 1);
        v18 = v32;
        v11 = (const char *)v33;
        v19 = v31;
      }
      v34.m128i_i64[0] = v19;
      v11[v18] = 0;
      memmove((void *)(v17 + v33), v10, v8 - v10);
      v11 = (const char *)v33;
    }
    v14 = v34.m128i_i64[0];
    if ( v34.m128i_i64[0] )
    {
      v12 = v34.m128i_i64[0] + 1;
      v13 = v34.m128i_i64[0];
      v14 = v34.m128i_i64[0] - 1;
      if ( v34.m128i_i64[1] >= (unsigned __int64)(v34.m128i_i64[0] + 1) )
        goto LABEL_9;
    }
    else
    {
      v12 = 2;
      v13 = 1;
      if ( v34.m128i_i64[1] >= 2uLL )
        goto LABEL_9;
    }
    v33 = qvector_reserve(&v33, v11, v12, 1);
    v11 = (const char *)v33;
LABEL_9:
    v34.m128i_i64[0] = v12;
    v11[v13] = 0;
    *(_BYTE *)(v33 + v14) = 95;
    v10 = v8 + 1;
    v15 = strchr(v8 + 1, 45);
    v11 = (const char *)v33;
    v8 = v15;
  }
  if ( v10 == v9 )
  {
    v20 = v11;
  }
  else
  {
    if ( *v10 && v10 )
    {
      v23 = v34.m128i_i64[0];
      v24 = strlen(v10);
      v25 = v24;
      v26 = v24;
      if ( v23 )
      {
        --v23;
        v26 = v24 + v23;
      }
      if ( v34.m128i_i64[1] < v26 + 1 )
      {
        v33 = qvector_reserve(&v33, v11, v26 + 1, 1);
        v11 = (const char *)v33;
      }
      v34.m128i_i64[0] = v26 + 1;
      v11[v26] = 0;
      memmove((void *)(v33 + v23), v10, v25);
      v11 = (const char *)v33;
    }
    v20 = (const char *)*a2;
    v21 = a2[2];
    *a2 = v11;
    v22 = _mm_loadu_si128(&v34);
    v33 = (__int64)v20;
    v34.m128i_i64[1] = v21;
    *(__m128i *)(a2 + 1) = v22;
  }
  if ( v20 )
  {
    v34.m128i_i64[0] = 0;
    qfree(v20, v11);
  }
  return 1;
}
