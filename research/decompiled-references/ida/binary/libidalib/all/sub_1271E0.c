unsigned __int64 __fastcall sub_1271E0(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  bool v6; // zf
  int v8; // r13d
  unsigned __int64 v9; // rbx
  size_t v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // r13
  __int64 v18; // rsi
  char *v19; // rbx
  char *v20; // rbp
  _BYTE *v21; // rsi
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rbp
  __int64 v25; // r15
  __int64 v26; // r9
  __int64 v27; // rdx
  _BYTE *v28; // rdi
  __m128i v29; // xmm0
  __m128 v30; // xmm0
  __m128i v31; // xmm1
  __int64 v32; // rsi
  unsigned __int64 v33; // xmm2_8
  __int64 v34; // rbx
  unsigned __int64 v35; // rbp
  __int64 v36; // r14
  __int64 v37; // rax
  __m128i si128; // xmm0
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  size_t v43; // rax
  size_t v44; // r14
  size_t v45; // r15
  __int64 v46; // rdx
  char *v47; // [rsp+8h] [rbp-90h]
  __int64 v48; // [rsp+10h] [rbp-88h]
  __int64 v49; // [rsp+18h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-78h]
  char *sa; // [rsp+20h] [rbp-78h]
  __m128i v52; // [rsp+28h] [rbp-70h] BYREF
  void *src; // [rsp+40h] [rbp-58h]
  __m128i v54; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-40h]

  v6 = *(_BYTE *)(a2 + 40) == 0;
  v55 = __readfsqword(0x28u);
  if ( v6 )
  {
    v8 = *(_DWORD *)(a2 + 28);
    if ( v8 != -1 )
      goto LABEL_3;
    v37 = qvector_reserve();
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D3570);
    *(_QWORD *)(a1 + 8) = 20;
    *(_QWORD *)a1 = v37;
    *(__m128i *)v37 = si128;
    *(_DWORD *)(v37 + 15) = 694968690;
    *(_BYTE *)(*(_QWORD *)a1 + 19LL) = 0;
    return v55 - __readfsqword(0x28u);
  }
  v52 = 0;
  s = nullptr;
  if ( !(unsigned __int8)print_strlit_type() )
    return v55 - __readfsqword(0x28u);
  v19 = nullptr;
  src = nullptr;
  v47 = (char *)s1;
  v54 = 0;
  if ( v52.m128i_i64[0] )
  {
    v47 = nullptr;
    v19 = strchr(nullptr, 58);
  }
  v20 = v47;
  v21 = nullptr;
  while ( v19 )
  {
    if ( v19 != v20 )
    {
      v25 = v54.m128i_i64[0];
      v26 = v19 - v20;
      if ( v54.m128i_i64[0] )
      {
        v25 = v54.m128i_i64[0] - 1;
        v26 = v19 - v20 + v54.m128i_i64[0] - 1;
      }
      v27 = v26 + 1;
      if ( v54.m128i_i64[1] < (unsigned __int64)(v26 + 1) )
      {
        v49 = v26;
        v48 = v26 + 1;
        src = (void *)qvector_reserve();
        v26 = v49;
        v21 = src;
        v27 = v48;
      }
      v54.m128i_i64[0] = v27;
      v21[v26] = 0;
      memmove((char *)src + v25, v20, v19 - v20);
      v21 = src;
    }
    v24 = v54.m128i_i64[0];
    if ( v54.m128i_i64[0] )
    {
      v22 = v54.m128i_i64[0] + 1;
      v23 = v54.m128i_i64[0];
      v24 = v54.m128i_i64[0] - 1;
      if ( v54.m128i_i64[1] >= (unsigned __int64)(v54.m128i_i64[0] + 1) )
        goto LABEL_25;
    }
    else
    {
      v22 = 2;
      v23 = 1;
      if ( v54.m128i_i64[1] >= 2uLL )
        goto LABEL_25;
    }
    src = (void *)qvector_reserve();
    v21 = src;
LABEL_25:
    v54.m128i_i64[0] = v22;
    v21[v23] = 0;
    *((_BYTE *)src + v24) = 32;
    v20 = v19 + 1;
    v21 = src;
    v19 = strchr(v19 + 1, 58);
  }
  if ( v20 == v47 )
  {
    v28 = v21;
  }
  else
  {
    if ( *v20 && v20 )
    {
      v42 = v54.m128i_i64[0];
      v43 = strlen(v20);
      v44 = v43;
      v45 = v43;
      if ( v54.m128i_i64[0] )
      {
        v42 = v54.m128i_i64[0] - 1;
        v45 = v43 + v54.m128i_i64[0] - 1;
      }
      v46 = v45 + 1;
      if ( v54.m128i_i64[1] < v45 + 1 )
      {
        src = (void *)qvector_reserve();
        v46 = v45 + 1;
        v21 = src;
      }
      v54.m128i_i64[0] = v46;
      v21[v45] = 0;
      memmove((char *)src + v42, v20, v44);
      v21 = src;
    }
    v28 = nullptr;
    s = v21;
    v29 = _mm_loadu_si128(&v54);
    src = nullptr;
    v54.m128i_i64[1] = v52.m128i_i64[1];
    v52 = v29;
  }
  if ( v28 )
  {
    v54.m128i_i64[0] = 0;
    qfree();
  }
  v30 = (__m128)_mm_loadu_si128(&v52);
  v31 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v32 = (__int64)s;
  v33 = _mm_movehl_ps(a5, v30).m128_u64[0];
  v34 = v30.m128_u64[0];
  sa = *(char **)a1;
  *(_QWORD *)a1 = v32;
  *(__m128 *)(a1 + 8) = v30;
  v52 = v31;
  if ( v30.m128_u64[0] )
  {
    v36 = v30.m128_u64[0] + 1;
    v35 = v30.m128_u64[0] + 2;
    v34 = v30.m128_u64[0] - 1;
  }
  else
  {
    v35 = 3;
    v36 = 2;
  }
  if ( v33 < v35 )
  {
    v41 = qvector_reserve();
    *(_QWORD *)a1 = v41;
    v32 = v41;
  }
  *(_QWORD *)(a1 + 8) = v35;
  *(_BYTE *)(v32 + v36) = 0;
  *(_WORD *)(*(_QWORD *)a1 + v34) = 8236;
  v8 = *(_DWORD *)(a2 + 24);
  if ( sa )
  {
    v52.m128i_i64[0] = 0;
    qfree();
  }
LABEL_3:
  v54 = 0;
  src = nullptr;
  print_strlit_type();
  v9 = v54.m128i_i64[0];
  if ( v54.m128i_i64[0] )
  {
    v10 = v54.m128i_i64[0] - 1;
    if ( v54.m128i_i64[0] != 1 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = v54.m128i_i64[0] - 1;
      if ( v11 )
      {
        --v11;
        v12 = v10 + v11;
        v9 = v54.m128i_i64[0] + v11;
      }
      v13 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v9 )
      {
        v40 = qvector_reserve();
        *(_QWORD *)a1 = v40;
        v13 = v40;
      }
      *(_QWORD *)(a1 + 8) = v9;
      *(_BYTE *)(v13 + v12) = 0;
      memcpy((void *)(v11 + *(_QWORD *)a1), src, v10);
    }
  }
  if ( HIBYTE(v8) )
  {
    if ( src )
      goto LABEL_12;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 8);
    if ( v15 )
    {
      v17 = v15 + 9;
      v16 = v15 + 10;
      --v15;
    }
    else
    {
      v16 = 11;
      v17 = 10;
    }
    v18 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < v16 )
    {
      v39 = qvector_reserve();
      *(_QWORD *)a1 = v39;
      v18 = v39;
    }
    *(_QWORD *)(a1 + 8) = v16;
    *(_BYTE *)(v18 + v17) = 0;
    qmemcpy((void *)(*(_QWORD *)a1 + v15), " (default)", 10);
    if ( src )
    {
LABEL_12:
      v54.m128i_i64[0] = 0;
      qfree();
    }
  }
  return v55 - __readfsqword(0x28u);
}

