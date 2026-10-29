__int64 __fastcall sub_4EE960(__int64 a1, const char *a2, __int64 a3)
{
  const char *v4; // rax
  const char *v5; // rbp
  char v7; // r12
  _QWORD *v8; // rbp
  _QWORD *v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  char *v13; // rsi
  const char *v14; // rbp
  _BYTE *v15; // rax
  _QWORD *v16; // r15
  size_t v17; // r12
  const char *v18; // rcx
  _QWORD *v19; // rbx
  char *v20; // rsi
  _QWORD *v21; // r13
  const char *v22; // rdi
  int v23; // eax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  const char *file_ext; // rax
  const char *v28; // r14
  size_t v29; // rax
  size_t v30; // rbp
  char *v31; // rbp
  __m128i v32; // xmm0
  void *v33; // rbp
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  char *v36; // rax
  const char *v37; // rsi
  __int64 v38; // rax
  size_t v39; // r13
  __int64 v40; // r12
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rbp
  char *v45; // r14
  void *v46; // rax
  size_t v47; // rbp
  void *v48; // r14
  void *v49; // rax
  void *v50; // rdi
  void *v51; // rax
  void *v52; // rsi
  __int64 v53; // r14
  const char *v54; // rsi
  const char *v55; // rdi
  unsigned int v56; // eax
  __m128i v57; // [rsp+0h] [rbp-C8h] BYREF
  char *s1; // [rsp+10h] [rbp-B8h]
  void **p_src; // [rsp+18h] [rbp-B0h]
  char *s2; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v61; // [rsp+28h] [rbp-A0h]
  void *src; // [rsp+38h] [rbp-90h] BYREF
  size_t n[2]; // [rsp+40h] [rbp-88h]
  void *v64; // [rsp+50h] [rbp-78h] BYREF
  __m128i v65; // [rsp+58h] [rbp-70h] BYREF
  void *ptr; // [rsp+68h] [rbp-60h] BYREF
  __m128i v67; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v68; // [rsp+88h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v4 = (const char *)qbasename(a2);
  s2 = nullptr;
  src = nullptr;
  v5 = v4;
  v61 = 0;
  *(_OWORD *)n = 0;
  if ( a3 )
  {
    if ( strcmp(v4, "ida-plugin.json") )
      return 0;
    v65 = 0;
    v64 = nullptr;
    if ( !(unsigned __int8)sub_4E9160((__int64 *)&s2, (__int64)a2, (__int64 *)&v64) )
      sub_368890();
    if ( v64 )
    {
      v65.m128i_i64[0] = 0;
      qfree(v64);
    }
    v7 = 0;
  }
  else
  {
    file_ext = (const char *)get_file_ext(v4);
    v28 = file_ext;
    if ( !file_ext || !strcmp(file_ext, "cfg") )
      goto LABEL_46;
    if ( *v28 == 115 && v28[1] == 111 && !v28[2] )
    {
      v7 = 1;
      if ( v28 >= v5 + 3 && *(v28 - 2) == 50 && *(v28 - 3) == 51 )
        goto LABEL_46;
    }
    else
    {
      v7 = 0;
    }
    v64 = nullptr;
    ptr = nullptr;
    v65 = 0;
    v67 = 0;
    if ( a2 )
    {
      v29 = strlen(a2);
      v30 = v29;
      if ( v29 )
      {
        v53 = v29 + 1;
        v64 = (void *)qvector_reserve(&v64, 0, v29 + 1, 1);
        v65.m128i_i64[0] = v53;
        memmove(v64, a2, v30);
        *((_BYTE *)v64 + v30) = 0;
      }
    }
    plugin_name_from_path_or_name(&ptr, a2);
    v31 = (char *)v64;
    v64 = nullptr;
    v32 = _mm_loadu_si128(&v65);
    v65 = 0;
    if ( s2 )
    {
      v57 = v32;
      v61.m128i_i64[0] = 0;
      qfree(s2);
      v32 = _mm_load_si128(&v57);
    }
    s2 = v31;
    v61 = v32;
    v33 = ptr;
    v34 = _mm_load_si128(&v67);
    ptr = nullptr;
    v67 = 0;
    if ( src )
    {
      v57 = v34;
      n[0] = 0;
      qfree(src);
      v35 = _mm_load_si128(&v57);
      src = v33;
      *(__m128i *)n = v35;
      if ( ptr )
      {
        v67.m128i_i64[0] = 0;
        qfree(ptr);
      }
    }
    else
    {
      src = v33;
      *(__m128i *)n = v34;
    }
    if ( v64 )
    {
      v65.m128i_i64[0] = 0;
      qfree(v64);
    }
  }
  v8 = *(_QWORD **)(a1 + 8);
  p_src = &src;
  v9 = v8 + 1;
  v10 = sub_4EAAA0((__int64)v8, (__int64)&src);
  v11 = (__int64)v10;
  if ( v10 == v8 + 1 )
    goto LABEL_17;
  v12 = v10[8];
  if ( !v61.m128i_i64[0] )
  {
    v13 = (char *)haystack;
    if ( !v12 )
      goto LABEL_46;
    goto LABEL_11;
  }
  v13 = s2;
  v14 = haystack;
  if ( v12 )
LABEL_11:
    v14 = *(const char **)(v11 + 56);
  v57.m128i_i64[0] = v11;
  if ( !strcmp(v14, v13) )
    goto LABEL_46;
  if ( !v7 || (v15 = (_BYTE *)get_file_ext(v14)) != nullptr && *v15 == 115 && v15[1] == 111 && !v15[2] )
  {
    if ( (debug & 0x20) != 0 )
      sub_3879F0();
    goto LABEL_46;
  }
  v8 = *(_QWORD **)(a1 + 8);
  v9 = v8 + 1;
LABEL_17:
  v16 = (_QWORD *)v8[2];
  if ( !v16 )
  {
    v19 = v9;
    goto LABEL_61;
  }
  v17 = n[0];
  v18 = haystack;
  v19 = v9;
  s1 = (char *)src;
  if ( n[0] )
    v18 = (const char *)src;
  v57.m128i_i64[0] = (__int64)v18;
  while ( 1 )
  {
    v25 = v16[5];
    if ( !v17 )
      break;
    if ( v25 )
      goto LABEL_30;
    v20 = s1;
    v21 = v16;
    v22 = haystack;
LABEL_23:
    v23 = strcmp(v22, v20);
    v24 = (_QWORD *)v16[2];
    v16 = (_QWORD *)v16[3];
    if ( v23 >= 0 )
    {
      v19 = v21;
      v16 = v24;
    }
    if ( !v16 )
      goto LABEL_55;
  }
  if ( v25 )
  {
LABEL_30:
    v22 = (const char *)v16[4];
    v20 = (char *)v57.m128i_i64[0];
    v21 = v16;
    goto LABEL_23;
  }
  while ( 1 )
  {
    v26 = v16[2];
    if ( !v26 )
      break;
    v19 = v16;
    v16 = (_QWORD *)v16[2];
    if ( *(_QWORD *)(v26 + 40) )
      goto LABEL_30;
  }
  v19 = v16;
LABEL_55:
  if ( v9 == v19 )
    goto LABEL_61;
  if ( v19[5] )
  {
    v36 = (char *)haystack;
    if ( v17 )
      v36 = s1;
    v37 = (const char *)v19[4];
    s1 = v36;
LABEL_60:
    if ( strcmp(s1, v37) < 0 )
    {
LABEL_61:
      v38 = operator new(0x68u);
      v39 = n[0];
      *(_QWORD *)(v38 + 32) = 0;
      v40 = v38;
      *(_OWORD *)(v38 + 40) = 0;
      if ( v39 )
      {
        v51 = (void *)qalloc_or_throw(v39);
        *(_QWORD *)(v40 + 32) = v51;
        v52 = src;
        *(_QWORD *)(v40 + 48) = v39;
        memcpy(v51, v52, v39);
        *(_QWORD *)(v40 + 40) = v39;
      }
      *(_QWORD *)(v40 + 56) = 0;
      *(_QWORD *)(v40 + 80) = 0;
      *(_OWORD *)(v40 + 64) = 0;
      *(_OWORD *)(v40 + 88) = 0;
      v41 = sub_4EE7A0(v8, v19, v40 + 32);
      v19 = v41;
      if ( v42 )
      {
        if ( v9 == (_QWORD *)v42 || v41 )
        {
          v43 = 1;
        }
        else
        {
          v54 = haystack;
          if ( *(_QWORD *)(v42 + 40) )
            v54 = *(const char **)(v42 + 32);
          v55 = haystack;
          if ( *(_QWORD *)(v40 + 40) )
            v55 = *(const char **)(v40 + 32);
          v57.m128i_i64[0] = v42;
          v56 = strcmp(v55, v54);
          v42 = v57.m128i_i64[0];
          v43 = v56 >> 31;
        }
        v19 = (_QWORD *)v40;
        std::_Rb_tree_insert_and_rebalance(v43, v40, v42, v9);
        ++v8[5];
      }
      else if ( v40 )
      {
        v50 = *(void **)(v40 + 32);
        if ( v50 )
        {
          *(_QWORD *)(v40 + 40) = 0;
          qfree(v50);
        }
        operator delete((void *)v40, 0x68u);
      }
    }
  }
  else
  {
    v37 = haystack;
    if ( v17 )
      goto LABEL_60;
  }
  if ( v19 + 7 != &s2 )
  {
    v44 = v61.m128i_i64[0];
    if ( v61.m128i_i64[0] < 2uLL )
    {
      v19[8] = 0;
    }
    else
    {
      v45 = s2;
      v46 = (void *)v19[7];
      if ( v19[9] < v61.m128i_i64[0] )
      {
        v46 = (void *)qvector_reserve(v19 + 7, v19[7], v61.m128i_i64[0], 1);
        v19[7] = v46;
      }
      v19[8] = v44;
      memmove(v46, v45, v44 - 1);
      *(_BYTE *)(v19[7] + v44 - 1) = 0;
    }
  }
  if ( v19 + 10 != p_src )
  {
    v47 = n[0];
    if ( n[0] < 2 )
    {
      v19[11] = 0;
    }
    else
    {
      v48 = src;
      v49 = (void *)v19[10];
      if ( v19[12] < n[0] )
      {
        v49 = (void *)qvector_reserve(v19 + 10, v19[10], n[0], 1);
        v19[10] = v49;
      }
      v19[11] = v47;
      memmove(v49, v48, v47 - 1);
      *(_BYTE *)(v19[10] + v47 - 1) = 0;
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
    v61.m128i_i64[0] = 0;
    qfree(s2);
  }
  return 0;
}
