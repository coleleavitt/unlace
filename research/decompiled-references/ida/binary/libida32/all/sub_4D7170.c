__int64 __fastcall sub_4D7170(__int64 a1, const char *a2, __int64 a3)
{
  const char *v4; // rax
  const char *v5; // rbp
  char v7; // r12
  _QWORD *v8; // rbp
  const char *p_src; // rsi
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  const char *v14; // rbp
  _BYTE *v15; // rax
  _QWORD *v16; // r15
  size_t v17; // r12
  const char *v18; // rcx
  _QWORD *v19; // rbx
  _QWORD *v20; // r13
  const char *v21; // rdi
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  const char *file_ext; // rax
  const char *v27; // r12
  size_t v28; // rax
  size_t v29; // rbp
  char *v30; // rbp
  __m128i v31; // xmm0
  void *v32; // rbp
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  char *v35; // rax
  __int64 v36; // rbp
  size_t v37; // rbp
  __int64 v38; // rax
  size_t v39; // r13
  __int64 v40; // r12
  _QWORD *v41; // rax
  __int64 v42; // rdx
  void *v43; // rdi
  __int64 v44; // r14
  void *v45; // rax
  void *v46; // rsi
  void *v47; // r14
  void *v48; // rax
  char *v49; // r14
  void *v50; // rax
  const char *v51; // rsi
  const char *v52; // rdi
  __m128i v53; // [rsp+0h] [rbp-C8h] BYREF
  char *s1; // [rsp+10h] [rbp-B8h]
  void **v55; // [rsp+18h] [rbp-B0h]
  char *s2; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v57; // [rsp+28h] [rbp-A0h]
  void *src; // [rsp+38h] [rbp-90h] BYREF
  size_t n[2]; // [rsp+40h] [rbp-88h]
  void *v60; // [rsp+50h] [rbp-78h] BYREF
  __m128i v61; // [rsp+58h] [rbp-70h] BYREF
  void *ptr; // [rsp+68h] [rbp-60h] BYREF
  __m128i v63; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v64; // [rsp+88h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v4 = (const char *)qbasename(a2);
  s2 = nullptr;
  src = nullptr;
  v5 = v4;
  v57 = 0;
  *(_OWORD *)n = 0;
  if ( a3 )
  {
    if ( strcmp(v4, "ida-plugin.json") )
      return 0;
    v61 = 0;
    v60 = nullptr;
    if ( !(unsigned __int8)sub_4D18E0((__int64 *)&s2, (__int64)a2, (__int64 *)&v60) )
      sub_365330();
    if ( v60 )
    {
      v61.m128i_i64[0] = 0;
      qfree(v60);
    }
    v7 = 0;
  }
  else
  {
    file_ext = (const char *)get_file_ext(v4);
    v27 = file_ext;
    if ( !file_ext || !strcmp(file_ext, "cfg") )
      goto LABEL_46;
    if ( *v27 == 115 && v27[1] == 111 && !v27[2] )
    {
      if ( v27 < v5 + 3 || *(v27 - 2) != 50 || *(v27 - 3) != 51 )
        goto LABEL_46;
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    v60 = nullptr;
    ptr = nullptr;
    v61 = 0;
    v63 = 0;
    if ( a2 )
    {
      v28 = strlen(a2);
      v29 = v28;
      if ( v28 )
      {
        v44 = v28 + 1;
        v60 = (void *)qvector_reserve(&v60, 0, v28 + 1, 1);
        v61.m128i_i64[0] = v44;
        memmove(v60, a2, v29);
        *((_BYTE *)v60 + v29) = 0;
      }
    }
    plugin_name_from_path_or_name(&ptr, a2);
    v30 = (char *)v60;
    v60 = nullptr;
    v31 = _mm_loadu_si128(&v61);
    v61 = 0;
    if ( s2 )
    {
      v53 = v31;
      v57.m128i_i64[0] = 0;
      qfree(s2);
      v31 = _mm_load_si128(&v53);
    }
    s2 = v30;
    v57 = v31;
    v32 = ptr;
    v33 = _mm_load_si128(&v63);
    ptr = nullptr;
    v63 = 0;
    if ( src )
    {
      v53 = v33;
      n[0] = 0;
      qfree(src);
      v34 = _mm_load_si128(&v53);
      src = v32;
      *(__m128i *)n = v34;
      if ( ptr )
      {
        v63.m128i_i64[0] = 0;
        qfree(ptr);
      }
    }
    else
    {
      src = v32;
      *(__m128i *)n = v33;
    }
    if ( v60 )
    {
      v61.m128i_i64[0] = 0;
      qfree(v60);
    }
  }
  v8 = *(_QWORD **)(a1 + 8);
  p_src = (const char *)&src;
  v55 = &src;
  v10 = v8 + 1;
  v11 = sub_4D3210((__int64)v8, (__int64)&src);
  v12 = (__int64)v11;
  if ( v11 == v8 + 1 )
    goto LABEL_17;
  v13 = v11[8];
  if ( !v57.m128i_i64[0] )
  {
    p_src = haystack;
    if ( !v13 )
      goto LABEL_46;
    goto LABEL_11;
  }
  p_src = s2;
  v14 = haystack;
  if ( v13 )
LABEL_11:
    v14 = *(const char **)(v12 + 56);
  v53.m128i_i64[0] = v12;
  if ( !strcmp(v14, p_src) )
    goto LABEL_46;
  if ( !v7 || (v15 = (_BYTE *)get_file_ext(v14)) != nullptr && *v15 == 115 && v15[1] == 111 && !v15[2] )
  {
    if ( (debug & 0x20) != 0 )
      sub_383DA0();
    goto LABEL_46;
  }
  v8 = *(_QWORD **)(a1 + 8);
  v10 = v8 + 1;
LABEL_17:
  v16 = (_QWORD *)v8[2];
  if ( !v16 )
  {
    v19 = v10;
    goto LABEL_75;
  }
  v17 = n[0];
  v18 = haystack;
  v19 = v10;
  s1 = (char *)src;
  if ( n[0] )
    v18 = (const char *)src;
  v53.m128i_i64[0] = (__int64)v18;
  while ( 1 )
  {
    v24 = v16[5];
    if ( !v17 )
      break;
    if ( v24 )
      goto LABEL_30;
    p_src = s1;
    v20 = v16;
    v21 = haystack;
LABEL_23:
    v22 = strcmp(v21, p_src);
    v23 = (_QWORD *)v16[2];
    v16 = (_QWORD *)v16[3];
    if ( v22 >= 0 )
    {
      v19 = v20;
      v16 = v23;
    }
    if ( !v16 )
      goto LABEL_56;
  }
  if ( v24 )
  {
LABEL_30:
    v21 = (const char *)v16[4];
    p_src = (const char *)v53.m128i_i64[0];
    v20 = v16;
    goto LABEL_23;
  }
  while ( 1 )
  {
    v25 = v16[2];
    if ( !v25 )
      break;
    v19 = v16;
    v16 = (_QWORD *)v16[2];
    if ( *(_QWORD *)(v25 + 40) )
      goto LABEL_30;
  }
  v19 = v16;
LABEL_56:
  if ( v10 == v19 )
    goto LABEL_75;
  if ( !v19[5] )
  {
    p_src = haystack;
    if ( v17 )
      goto LABEL_61;
    goto LABEL_62;
  }
  v35 = (char *)haystack;
  if ( v17 )
    v35 = s1;
  p_src = (const char *)v19[4];
  s1 = v35;
LABEL_61:
  if ( strcmp(s1, p_src) < 0 )
  {
LABEL_75:
    v38 = operator new(0x68u);
    v39 = n[0];
    *(_QWORD *)(v38 + 32) = 0;
    v40 = v38;
    *(_OWORD *)(v38 + 40) = 0;
    if ( v39 )
    {
      v45 = (void *)qalloc_or_throw(v39, p_src);
      *(_QWORD *)(v40 + 32) = v45;
      v46 = src;
      *(_QWORD *)(v40 + 48) = v39;
      memcpy(v45, v46, v39);
      *(_QWORD *)(v40 + 40) = v39;
    }
    *(_QWORD *)(v40 + 56) = 0;
    *(_QWORD *)(v40 + 80) = 0;
    *(_OWORD *)(v40 + 64) = 0;
    *(_OWORD *)(v40 + 88) = 0;
    v41 = sub_4D6FB0(v8, v19, v40 + 32);
    v19 = v41;
    if ( v42 )
    {
      if ( v10 != (_QWORD *)v42 && !v41 )
      {
        v51 = haystack;
        if ( *(_QWORD *)(v42 + 40) )
          v51 = *(const char **)(v42 + 32);
        v52 = haystack;
        if ( *(_QWORD *)(v40 + 40) )
          v52 = *(const char **)(v40 + 32);
        v53.m128i_i64[0] = v42;
        strcmp(v52, v51);
      }
      v19 = (_QWORD *)v40;
      std::_Rb_tree_insert_and_rebalance();
      ++v8[5];
    }
    else if ( v40 )
    {
      v43 = *(void **)(v40 + 32);
      if ( v43 )
      {
        *(_QWORD *)(v40 + 40) = 0;
        qfree(v43);
      }
      operator delete((void *)v40, 0x68u);
    }
  }
LABEL_62:
  if ( v19 + 7 != &s2 )
  {
    v36 = v57.m128i_i64[0];
    if ( v57.m128i_i64[0] > 1uLL )
    {
      v49 = s2;
      v50 = (void *)v19[7];
      if ( v19[9] < v57.m128i_i64[0] )
      {
        v50 = (void *)qvector_reserve(v19 + 7, v19[7], v57.m128i_i64[0], 1);
        v19[7] = v50;
      }
      v19[8] = v36;
      memmove(v50, v49, v36 - 1);
      *(_BYTE *)(v19[7] + v36 - 1) = 0;
    }
    else
    {
      v19[8] = 0;
    }
  }
  if ( v19 + 10 != v55 )
  {
    v37 = n[0];
    if ( n[0] > 1 )
    {
      v47 = src;
      v48 = (void *)v19[10];
      if ( v19[12] < n[0] )
      {
        v48 = (void *)qvector_reserve(v19 + 10, v19[10], n[0], 1);
        v19[10] = v48;
      }
      v19[11] = v37;
      memmove(v48, v47, v37 - 1);
      *(_BYTE *)(v19[10] + v37 - 1) = 0;
    }
    else
    {
      v19[11] = 0;
    }
  }
LABEL_46:
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  if ( s2 )
  {
    v57.m128i_i64[0] = 0;
    qfree(s2);
  }
  return 0;
}

