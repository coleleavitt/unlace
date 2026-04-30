__int64 __fastcall sub_314450(__int64 a1, const char *a2, const char *a3)
{
  size_t v5; // rax
  size_t v6; // rbp
  size_t v7; // rbx
  void *v8; // rax
  size_t v10; // rax
  size_t v11; // r14
  size_t v12; // rbp
  char *v13; // rbx
  char *v14; // rbp
  char *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rbp
  char *v19; // rax
  __int64 v20; // r15
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rbx
  size_t v24; // rax
  size_t v25; // r15
  size_t v26; // r8
  __int64 v27; // rdx
  char *v28; // rdi
  __m128i v29; // xmm0
  char *v30; // rdx
  const char *v31; // rdx
  const char *v32; // rcx
  __m128i v33; // xmm0
  char *v34; // rdi
  char *src; // [rsp+8h] [rbp-90h]
  void *srca; // [rsp+8h] [rbp-90h]
  __int64 v37; // [rsp+10h] [rbp-88h]
  size_t v38; // [rsp+10h] [rbp-88h]
  __int64 v39; // [rsp+18h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-78h] BYREF
  __m128i v41; // [rsp+28h] [rbp-70h]
  char *v42; // [rsp+40h] [rbp-58h] BYREF
  __m128i v43; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( !a2 || !*a2 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    if ( a3 )
    {
      v5 = strlen(a3);
      v6 = v5 + 1;
      v7 = v5;
      v8 = (void *)qvector_reserve(a1, 0, v5 + 1, 1);
      *(_QWORD *)a1 = v8;
      *(_QWORD *)(a1 + 8) = v6;
      memmove(v8, a3, v7);
      *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
    }
    return a1;
  }
  s = nullptr;
  v41 = 0;
  v10 = strlen(a2);
  v11 = v10 + 1;
  v12 = v10;
  s = (char *)qvector_reserve(&s, 0, v10 + 1, 1);
  v41.m128i_i64[0] = v11;
  v13 = nullptr;
  memmove(s, a2, v12);
  s[v12] = 0;
  v42 = nullptr;
  src = (char *)&s1;
  v43 = 0;
  if ( v41.m128i_i64[0] )
  {
    src = s;
    v13 = strchr(s, 58);
  }
  v14 = src;
  v15 = nullptr;
  while ( v13 )
  {
    if ( v13 != v14 )
    {
      v20 = v43.m128i_i64[0];
      v21 = v13 - v14;
      if ( v43.m128i_i64[0] )
      {
        v20 = v43.m128i_i64[0] - 1;
        v21 = v13 - v14 + v43.m128i_i64[0] - 1;
      }
      v22 = v21 + 1;
      if ( v43.m128i_i64[1] < (unsigned __int64)(v21 + 1) )
      {
        v39 = v21;
        v37 = v21 + 1;
        v42 = (char *)qvector_reserve(&v42, v15, v22, 1);
        v21 = v39;
        v15 = v42;
        v22 = v37;
      }
      v43.m128i_i64[0] = v22;
      v15[v21] = 0;
      memmove(&v42[v20], v14, v13 - v14);
      v15 = v42;
    }
    v18 = v43.m128i_i64[0];
    if ( v43.m128i_i64[0] )
    {
      v16 = v43.m128i_i64[0] + 1;
      v17 = v43.m128i_i64[0];
      v18 = v43.m128i_i64[0] - 1;
      if ( v43.m128i_i64[1] >= (unsigned __int64)(v43.m128i_i64[0] + 1) )
        goto LABEL_10;
    }
    else
    {
      v16 = 2;
      v17 = 1;
      if ( v43.m128i_i64[1] >= 2uLL )
        goto LABEL_10;
    }
    v42 = (char *)qvector_reserve(&v42, v15, v16, 1);
    v15 = v42;
LABEL_10:
    v43.m128i_i64[0] = v16;
    v15[v17] = 0;
    v42[v18] = 95;
    v14 = v13 + 1;
    v19 = strchr(v13 + 1, 58);
    v15 = v42;
    v13 = v19;
  }
  if ( v14 == src )
  {
    v28 = v15;
  }
  else
  {
    if ( *v14 && v14 )
    {
      v23 = v43.m128i_i64[0];
      v24 = strlen(v14);
      v25 = v24;
      v26 = v24;
      if ( v23 )
      {
        --v23;
        v26 = v24 + v23;
      }
      v27 = v26 + 1;
      if ( v43.m128i_i64[1] < v26 + 1 )
      {
        v38 = v26;
        srca = (void *)(v26 + 1);
        v42 = (char *)qvector_reserve(&v42, v15, v27, 1);
        v26 = v38;
        v15 = v42;
        v27 = (__int64)srca;
      }
      v43.m128i_i64[0] = v27;
      v15[v26] = 0;
      memmove(&v42[v23], v14, v25);
      v15 = v42;
    }
    v28 = s;
    s = v15;
    v29 = _mm_loadu_si128(&v43);
    v42 = v28;
    v43.m128i_i64[1] = v41.m128i_i64[1];
    v41 = v29;
  }
  if ( v28 )
  {
    v43.m128i_i64[0] = 0;
    qfree(v28, v15);
  }
  v42 = nullptr;
  v30 = (char *)&s1;
  v43 = 0;
  if ( v41.m128i_i64[0] )
    v30 = s;
  sub_169A50((__int64 *)&v42, (__int64)"%s:%s", v30, a3);
  v33 = _mm_loadu_si128(&v43);
  v34 = s;
  *(_QWORD *)a1 = v42;
  *(__m128i *)(a1 + 8) = v33;
  if ( v34 )
  {
    v41.m128i_i64[0] = 0;
    qfree(v34, "%s:%s", v31, v32);
  }
  return a1;
}
