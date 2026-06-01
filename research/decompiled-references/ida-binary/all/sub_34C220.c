unsigned __int64 __fastcall sub_34C220(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  bool v6; // zf
  unsigned int v8; // r13d
  const char *v9; // rsi
  unsigned __int64 v10; // rbx
  size_t v11; // r14
  __int64 v12; // rbp
  __int64 v13; // r15
  char *v14; // rsi
  void *v15; // rdi
  __int64 v17; // rbx
  unsigned __int64 v18; // rbp
  __int64 v19; // r13
  const char *v20; // rsi
  char *v21; // rbx
  const char *v22; // rbp
  char *v23; // rsi
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rbp
  char *v27; // rax
  __int64 v28; // r15
  __int64 v29; // r9
  __int64 v30; // rdx
  char *v31; // rdi
  __m128i v32; // xmm0
  __m128 v33; // xmm0
  __m128i v34; // xmm1
  char *v35; // rsi
  unsigned __int64 v36; // xmm2_8
  __int64 v37; // rbx
  unsigned __int64 v38; // rbp
  __int64 v39; // r14
  __int64 v40; // rax
  __m128i si128; // xmm0
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  size_t v46; // rax
  size_t v47; // r14
  size_t v48; // r15
  __int64 v49; // rdx
  const char *v50; // [rsp+8h] [rbp-90h]
  __int64 v51; // [rsp+10h] [rbp-88h]
  __int64 v52; // [rsp+18h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-78h] BYREF
  __m128i v54; // [rsp+28h] [rbp-70h] BYREF
  void *src; // [rsp+40h] [rbp-58h] BYREF
  __m128i v56; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v57; // [rsp+58h] [rbp-40h]

  v6 = *(_BYTE *)(a2 + 40) == 0;
  v57 = __readfsqword(0x28u);
  if ( v6 )
  {
    v8 = *(_DWORD *)(a2 + 28);
    if ( v8 != -1 )
      goto LABEL_3;
    v40 = qvector_reserve(a1, 0, 20, 1);
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD0E0);
    *(_QWORD *)(a1 + 8) = 20;
    *(_QWORD *)a1 = v40;
    *(__m128i *)v40 = si128;
    *(_DWORD *)(v40 + 15) = 694968690;
    *(_BYTE *)(*(_QWORD *)a1 + 19LL) = 0;
    return v57 - __readfsqword(0x28u);
  }
  v20 = (const char *)*(unsigned int *)(a2 + 24);
  v54 = 0;
  s = nullptr;
  if ( !(unsigned __int8)print_strlit_type(&s, v20, 0, 0) )
  {
    if ( s )
    {
      v54.m128i_i64[0] = 0;
      qfree(s, v20);
    }
    return v57 - __readfsqword(0x28u);
  }
  v21 = nullptr;
  src = nullptr;
  v50 = &s1;
  v56 = 0;
  if ( v54.m128i_i64[0] )
  {
    v50 = s;
    v21 = strchr(s, 58);
  }
  v22 = v50;
  v23 = nullptr;
  while ( v21 )
  {
    if ( v21 != v22 )
    {
      v28 = v56.m128i_i64[0];
      v29 = v21 - v22;
      if ( v56.m128i_i64[0] )
      {
        v28 = v56.m128i_i64[0] - 1;
        v29 = v21 - v22 + v56.m128i_i64[0] - 1;
      }
      v30 = v29 + 1;
      if ( v56.m128i_i64[1] < (unsigned __int64)(v29 + 1) )
      {
        v52 = v29;
        v51 = v29 + 1;
        src = (void *)qvector_reserve(&src, v23, v30, 1);
        v29 = v52;
        v23 = (char *)src;
        v30 = v51;
      }
      v56.m128i_i64[0] = v30;
      v23[v29] = 0;
      memmove((char *)src + v28, v22, v21 - v22);
      v23 = (char *)src;
    }
    v26 = v56.m128i_i64[0];
    if ( v56.m128i_i64[0] )
    {
      v24 = v56.m128i_i64[0] + 1;
      v25 = v56.m128i_i64[0];
      v26 = v56.m128i_i64[0] - 1;
      if ( v56.m128i_i64[1] >= (unsigned __int64)(v56.m128i_i64[0] + 1) )
        goto LABEL_27;
    }
    else
    {
      v24 = 2;
      v25 = 1;
      if ( v56.m128i_i64[1] >= 2uLL )
        goto LABEL_27;
    }
    src = (void *)qvector_reserve(&src, v23, v24, 1);
    v23 = (char *)src;
LABEL_27:
    v56.m128i_i64[0] = v24;
    v23[v25] = 0;
    *((_BYTE *)src + v26) = 32;
    v22 = v21 + 1;
    v27 = strchr(v21 + 1, 58);
    v23 = (char *)src;
    v21 = v27;
  }
  if ( v22 == v50 )
  {
    v31 = v23;
  }
  else
  {
    if ( *v22 && v22 )
    {
      v45 = v56.m128i_i64[0];
      v46 = strlen(v22);
      v47 = v46;
      v48 = v46;
      if ( v45 )
      {
        --v45;
        v48 = v46 + v45;
      }
      v49 = v48 + 1;
      if ( v56.m128i_i64[1] < v48 + 1 )
      {
        src = (void *)qvector_reserve(&src, v23, v49, 1);
        v49 = v48 + 1;
        v23 = (char *)src;
      }
      v56.m128i_i64[0] = v49;
      v23[v48] = 0;
      memmove((char *)src + v45, v22, v47);
      v23 = (char *)src;
    }
    v31 = s;
    s = v23;
    v32 = _mm_loadu_si128(&v56);
    src = v31;
    v56.m128i_i64[1] = v54.m128i_i64[1];
    v54 = v32;
  }
  if ( v31 )
  {
    v56.m128i_i64[0] = 0;
    qfree(v31, v23);
  }
  v33 = (__m128)_mm_loadu_si128(&v54);
  v34 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v35 = s;
  v36 = _mm_movehl_ps(a5, v33).m128_u64[0];
  v37 = v33.m128_u64[0];
  s = *(char **)a1;
  *(_QWORD *)a1 = v35;
  *(__m128 *)(a1 + 8) = v33;
  v54 = v34;
  if ( v33.m128_u64[0] )
  {
    v39 = v33.m128_u64[0] + 1;
    v38 = v33.m128_u64[0] + 2;
    v37 = v33.m128_u64[0] - 1;
  }
  else
  {
    v38 = 3;
    v39 = 2;
  }
  if ( v36 < v38 )
  {
    v44 = qvector_reserve(a1, v35, v38, 1);
    *(_QWORD *)a1 = v44;
    v35 = (char *)v44;
  }
  *(_QWORD *)(a1 + 8) = v38;
  v35[v39] = 0;
  *(_WORD *)(*(_QWORD *)a1 + v37) = 8236;
  v8 = *(_DWORD *)(a2 + 24);
  if ( s )
  {
    v54.m128i_i64[0] = 0;
    qfree(s, (_BYTE *)&stru_2020.st_value + 4);
  }
LABEL_3:
  v9 = (const char *)v8;
  v56 = 0;
  src = nullptr;
  print_strlit_type(&src, v8, 0, 11);
  v10 = v56.m128i_i64[0];
  if ( v56.m128i_i64[0] )
  {
    v11 = v56.m128i_i64[0] - 1;
    if ( v56.m128i_i64[0] != 1 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v13 = v56.m128i_i64[0] - 1;
      if ( v12 )
      {
        --v12;
        v13 = v11 + v12;
        v10 = v56.m128i_i64[0] + v12;
      }
      v14 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v10 )
      {
        v43 = qvector_reserve(a1, v14, v10, 1);
        *(_QWORD *)a1 = v43;
        v14 = (char *)v43;
      }
      *(_QWORD *)(a1 + 8) = v10;
      v14[v13] = 0;
      v9 = (const char *)src;
      memcpy((void *)(v12 + *(_QWORD *)a1), src, v11);
    }
  }
  if ( HIBYTE(v8) )
  {
    v15 = src;
    if ( src )
      goto LABEL_12;
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 8);
    if ( v17 )
    {
      v19 = v17 + 9;
      v18 = v17 + 10;
      --v17;
    }
    else
    {
      v18 = 11;
      v19 = 10;
    }
    v9 = *(const char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v18 )
    {
      v42 = qvector_reserve(a1, v9, v18, 1);
      *(_QWORD *)a1 = v42;
      v9 = (const char *)v42;
    }
    *(_QWORD *)(a1 + 8) = v18;
    v9[v19] = 0;
    qmemcpy((void *)(*(_QWORD *)a1 + v17), " (default)", 10);
    v15 = src;
    if ( src )
    {
LABEL_12:
      v56.m128i_i64[0] = 0;
      qfree(v15, v9);
    }
  }
  return v57 - __readfsqword(0x28u);
}
