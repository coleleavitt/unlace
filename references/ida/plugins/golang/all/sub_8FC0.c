__int64 __fastcall sub_8FC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 i; // rbx
  const char *v9; // r9
  char v10; // r12
  int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  _BYTE *v16; // rsi
  __int64 v17; // rbp
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  size_t v20; // r12
  __int64 v21; // rbx
  int *v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  char *v27; // r12
  size_t v28; // rax
  size_t v29; // rbp
  __int64 v30; // rax
  __m128i v31; // xmm0
  void *v33; // r15
  size_t v34; // r14
  __int64 v35; // r15
  char *v36; // r14
  size_t v37; // rdx
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // rbp
  __int64 v42; // rsi
  unsigned __int64 v43; // rbp
  char *v44; // rax
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // rdx
  void **p_src; // r10
  unsigned __int64 v48; // r12
  size_t v49; // rbp
  size_t v50; // r12
  _BYTE *v51; // rbp
  char *v52; // rax
  size_t v53; // rdx
  char *v54; // rdi
  size_t v55; // r13
  unsigned __int64 v56; // rbx
  size_t v57; // r12
  __int64 v58; // rbp
  size_t v59; // r13
  __int64 v60; // rsi
  char *v61; // rdi
  size_t v62; // rdx
  _QWORD *v63; // r10
  __int64 v64; // rbx
  size_t v65; // r9
  __int64 v66; // rbp
  size_t v67; // r11
  __int64 v68; // rsi
  size_t v69; // rbx
  void *v70; // rax
  size_t v71; // rbp
  char *v72; // rdi
  unsigned __int64 v73; // rbx
  size_t v74; // r12
  __int64 v75; // rbp
  size_t v76; // r15
  _BYTE *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rbp
  size_t v80; // r15
  __int64 v81; // rsi
  size_t nb; // [rsp+0h] [rbp-D8h]
  size_t nc; // [rsp+0h] [rbp-D8h]
  size_t nd; // [rsp+0h] [rbp-D8h]
  const char *n; // [rsp+0h] [rbp-D8h]
  _QWORD *na; // [rsp+0h] [rbp-D8h]
  size_t ne; // [rsp+0h] [rbp-D8h]
  char *v88; // [rsp+8h] [rbp-D0h]
  size_t v89; // [rsp+8h] [rbp-D0h]
  void **v90; // [rsp+8h] [rbp-D0h]
  size_t v92; // [rsp+18h] [rbp-C0h]
  __int64 v93; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v94; // [rsp+28h] [rbp-B0h] BYREF
  void *src; // [rsp+40h] [rbp-98h] BYREF
  __int128 v96; // [rsp+48h] [rbp-90h]
  __int64 v97; // [rsp+60h] [rbp-78h]
  __int128 v98; // [rsp+68h] [rbp-70h]
  char *s2; // [rsp+80h] [rbp-58h]
  __int128 v100; // [rsp+88h] [rbp-50h]
  unsigned __int64 v101; // [rsp+98h] [rbp-40h]

  v3 = *(_QWORD *)(a3 + 8);
  v101 = __readfsqword(0x28u);
  if ( v3 <= 1 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v69 = *(_QWORD *)(a2 + 8);
    if ( v69 )
    {
      v70 = (void *)qalloc_or_throw();
      *(_QWORD *)a1 = v70;
      *(_QWORD *)(a1 + 16) = v69;
      memcpy(v70, *(const void **)a2, v69);
      *(_QWORD *)(a1 + 8) = v69;
    }
    return a1;
  }
  v5 = *(_QWORD *)(a2 + 8);
  v93 = 0;
  src = nullptr;
  v97 = 0;
  v94 = 0;
  v96 = 0;
  v98 = 0;
  if ( !v5 || (v7 = v5 - 1, v5 == 1) )
  {
    v50 = v3 - 1;
    goto LABEL_136;
  }
  for ( i = 0; ; i = v48 )
  {
    while ( 1 )
    {
      v9 = *(const char **)a2;
      v10 = *(_BYTE *)(*(_QWORD *)a2 + i);
      if ( v10 != 42 )
        break;
      v17 = v94.m128i_i64[0];
      v18 = 2;
      if ( v94.m128i_i64[0] )
      {
        v18 = v94.m128i_i64[0] + 1;
        v17 = v94.m128i_i64[0] - 1;
      }
      v19 = v93;
      if ( v94.m128i_i64[1] < v18 )
      {
        v93 = qvector_reserve();
        v19 = v93;
      }
      v94.m128i_i64[0] = v18;
      ++i;
      *(_BYTE *)(v19 + v17) = 42;
      *(_BYTE *)(v93 + v17 + 1) = 0;
      if ( i >= v7 )
        goto LABEL_24;
LABEL_6:
      v5 = *(_QWORD *)(a2 + 8);
    }
    if ( v10 != 91 )
    {
      if ( v10 == 46 )
      {
        v11 = 0;
        v12 = v97;
        v13 = v98;
        if ( (_QWORD)v96 )
          v11 = v96 - 1;
        LODWORD(s2) = v11;
        if ( *((_QWORD *)&v98 + 1) < (unsigned __int64)(v98 + 1) )
        {
          v97 = qvector_reserve();
          v12 = v97;
          v13 = v98;
        }
        *(_DWORD *)(v12 + 4 * v13) = v11;
        *(_QWORD *)&v98 = v98 + 1;
      }
      v14 = v96;
      v15 = 2;
      if ( (_QWORD)v96 )
      {
        v15 = v96 + 1;
        v14 = v96 - 1;
      }
      v16 = src;
      if ( *((_QWORD *)&v96 + 1) < v15 )
      {
        nb = v15;
        src = (void *)qvector_reserve();
        v15 = nb;
        v16 = src;
      }
      *(_QWORD *)&v96 = v15;
      ++i;
      v16[v14] = v10;
      *((_BYTE *)src + v14 + 1) = 0;
      if ( i >= v7 )
        goto LABEL_24;
      goto LABEL_6;
    }
    if ( !v5 )
      goto LABEL_24;
    v43 = v5 - 1;
    if ( v5 - 1 < i + 1 )
      break;
    n = *(const char **)a2;
    v44 = strchr(&v9[i + 1], 93);
    v9 = n;
    if ( !v44 )
      break;
    v45 = v44 - n;
    v46 = i + 1;
    if ( v44 - n == -1 )
      break;
    if ( i + 1 < v45 )
    {
      while ( (unsigned __int8)(n[v46] - 48) <= 9u )
      {
        if ( ++v46 == v45 )
        {
          p_src = (void **)&v93;
          goto LABEL_71;
        }
      }
    }
    p_src = (void **)&v93;
    if ( v45 != v46 )
      p_src = &src;
LABEL_71:
    v48 = v45 + 1;
    if ( v43 < v48 )
    {
      if ( i > v43 )
        i = v43;
      v49 = v43 - i;
    }
    else
    {
      if ( v48 <= i )
        i = v48;
      v49 = v48 - i;
    }
    s2 = nullptr;
    v100 = 0;
    if ( v49 )
    {
      v61 = nullptr;
      v62 = v49 + 1;
      if ( v49 != -1 )
      {
        v90 = p_src;
        s2 = (char *)qvector_reserve();
        v9 = n;
        v61 = s2;
        p_src = v90;
        v62 = v49 + 1;
      }
      *(_QWORD *)&v100 = v62;
      na = p_src;
      memmove(v61, &v9[i], v49);
      v63 = na;
      s2[v49] = 0;
      v64 = v100;
      if ( (_QWORD)v100 )
      {
        v65 = v100 - 1;
        if ( (_QWORD)v100 != 1 )
        {
          v66 = na[1];
          v67 = v100 - 1;
          if ( v66 )
          {
            --v66;
            v68 = *na;
            v67 = v65 + v66;
            v64 = v100 + v66;
            if ( na[2] < (unsigned __int64)(v100 + v66) )
              goto LABEL_134;
          }
          else
          {
            v68 = *na;
            if ( na[2] >= (unsigned __int64)v100 )
              goto LABEL_109;
LABEL_134:
            v92 = v67;
            v89 = v100 - 1;
            v78 = qvector_reserve();
            v63 = na;
            v67 = v92;
            v68 = v78;
            v65 = v89;
            *na = v78;
          }
LABEL_109:
          v63[1] = v64;
          *(_BYTE *)(v68 + v67) = 0;
          memcpy((void *)(v66 + *v63), s2, v65);
        }
      }
      if ( s2 )
      {
        *(_QWORD *)&v100 = 0;
        qfree();
      }
    }
    if ( v48 >= v7 )
      goto LABEL_24;
    v5 = *(_QWORD *)(a2 + 8);
  }
  s2 = nullptr;
  if ( i > v43 )
    i = v43;
  v100 = 0;
  v71 = v43 - i;
  if ( v71 )
  {
    v72 = nullptr;
    if ( v71 != -1 )
    {
      ne = (size_t)v9;
      s2 = (char *)qvector_reserve();
      v9 = (const char *)ne;
      v72 = s2;
    }
    *(_QWORD *)&v100 = v71 + 1;
    memmove(v72, &v9[i], v71);
    s2[v71] = 0;
    v73 = v100;
    if ( (_QWORD)v100 )
    {
      v74 = v100 - 1;
      if ( (_QWORD)v100 != 1 )
      {
        v75 = v96;
        v76 = v100 - 1;
        if ( (_QWORD)v96 )
        {
          v75 = v96 - 1;
          v76 = v74 + v96 - 1;
          v73 = v100 + v96 - 1;
        }
        v77 = src;
        if ( *((_QWORD *)&v96 + 1) < v73 )
        {
          src = (void *)qvector_reserve();
          v77 = src;
        }
        *(_QWORD *)&v96 = v73;
        v77[v76] = 0;
        memcpy((char *)src + v75, s2, v74);
      }
    }
    if ( s2 )
    {
      *(_QWORD *)&v100 = 0;
      qfree();
    }
  }
LABEL_24:
  v3 = *(_QWORD *)(a3 + 8);
  if ( !v3 )
  {
LABEL_25:
    v88 = nullptr;
    v20 = 0;
    goto LABEL_26;
  }
  v50 = v3 - 1;
  if ( v3 != 1 )
  {
LABEL_136:
    v79 = v94.m128i_i64[0];
    v80 = v50;
    if ( v94.m128i_i64[0] )
    {
      v79 = v94.m128i_i64[0] - 1;
      v80 = v94.m128i_i64[0] - 1 + v50;
      v3 = v94.m128i_i64[0] + v50;
    }
    v81 = v93;
    if ( v94.m128i_i64[1] < v3 )
    {
      v93 = qvector_reserve();
      v81 = v93;
    }
    v94.m128i_i64[0] = v3;
    *(_BYTE *)(v81 + v80) = 0;
    memcpy((void *)(v79 + v93), *(const void **)a3, v50);
    v3 = *(_QWORD *)(a3 + 8);
  }
  if ( !v3 )
    goto LABEL_25;
  v51 = *(_BYTE **)a3;
  v52 = strrchr(*(const char **)a3, 46);
  if ( !v52 )
    goto LABEL_25;
  v53 = v52 - v51;
  if ( v52 - v51 == -1 )
    goto LABEL_25;
  if ( v52[1] != 118 )
    goto LABEL_25;
  if ( (unsigned __int8)(v52[2] - 48) > 9u )
    goto LABEL_25;
  v20 = v53 + 3;
  if ( v53 + 3 != v3 - 1 )
    goto LABEL_25;
  v88 = nullptr;
  if ( v20 > v53 )
    v20 = v52 - v51;
  v100 = 0;
  s2 = nullptr;
  if ( v20 )
  {
    s2 = (char *)qvector_reserve();
    *(_QWORD *)&v100 = v20 + 1;
    memmove(s2, v51, v20);
    s2[v20] = 0;
    v20 = v100;
    v88 = s2;
  }
LABEL_26:
  v21 = v98;
  if ( (_QWORD)v98 )
  {
    while ( 1 )
    {
      --v21;
      v22 = (int *)(4 * v21 + v97);
      v23 = *v22;
      if ( !(_QWORD)v96 )
      {
        s2 = nullptr;
        v100 = 0;
LABEL_29:
        v24 = *v22;
        goto LABEL_30;
      }
      v33 = src;
      s2 = nullptr;
      v100 = 0;
      if ( (__int64)v96 - 1 <= v23 )
        v23 = v96 - 1;
      v34 = v23;
      if ( !v23 )
        goto LABEL_29;
      nc = v23 + 1;
      s2 = (char *)qvector_reserve();
      *(_QWORD *)&v100 = nc;
      memmove(s2, v33, v34);
      s2[v34] = 0;
      v35 = v100;
      v36 = s2;
      if ( !(_QWORD)v100 )
        break;
      v37 = v100 - 1;
      if ( !s2 )
      {
        v24 = *(int *)(v97 + 4 * v21);
        goto LABEL_30;
      }
      if ( (_QWORD)v100 == 1
        || (v38 = *(_QWORD *)(a3 + 8)) != 0
        && v38 - 1 >= v37
        && (nd = v100 - 1, v39 = strncmp((const char *)(*(_QWORD *)a3 + v38 - v100), s2, v37), v37 = nd, !v39)
        || v20 && v20 - 1 >= v37 && !strncmp(&v88[v20 - v35], v36, v37) )
      {
        v24 = *(int *)(v97 + 4 * v21);
LABEL_102:
        *(_QWORD *)&v100 = 0;
        qfree();
        goto LABEL_30;
      }
      *(_QWORD *)&v100 = 0;
      qfree();
      if ( !v21 )
        goto LABEL_57;
    }
    v24 = *(int *)(v97 + 4 * v21);
    if ( s2 )
      goto LABEL_102;
LABEL_30:
    if ( v24 )
    {
      v25 = v96;
      if ( (_QWORD)v96 )
        goto LABEL_32;
      goto LABEL_35;
    }
  }
LABEL_57:
  v40 = v94.m128i_i64[0];
  v41 = 2;
  if ( v94.m128i_i64[0] )
  {
    v41 = v94.m128i_i64[0] + 1;
    v42 = v93;
    v40 = v94.m128i_i64[0] - 1;
    if ( v94.m128i_i64[1] < (unsigned __int64)(v94.m128i_i64[0] + 1) )
      goto LABEL_132;
  }
  else
  {
    v42 = v93;
    if ( v94.m128i_i64[1] >= 2uLL )
      goto LABEL_59;
LABEL_132:
    v93 = qvector_reserve();
    v42 = v93;
  }
LABEL_59:
  v94.m128i_i64[0] = v41;
  *(_BYTE *)(v42 + v40) = 46;
  *(_BYTE *)(v93 + v40 + 1) = 0;
  v25 = v96;
  v24 = 0;
  if ( (_QWORD)v96 )
  {
LABEL_32:
    v26 = v25 - 1;
    v27 = (char *)src;
    s2 = nullptr;
    v100 = 0;
    if ( v24 > v26 )
      v24 = v26;
    v28 = v26 - v24;
    v29 = v28;
    if ( v28 )
    {
      v54 = nullptr;
      v55 = v28 + 1;
      if ( v28 != -1 )
      {
        s2 = (char *)qvector_reserve();
        v54 = s2;
      }
      *(_QWORD *)&v100 = v55;
      memmove(v54, &v27[v24], v29);
      s2[v29] = 0;
      v56 = v100;
      if ( (_QWORD)v100 )
      {
        v57 = v100 - 1;
        if ( (_QWORD)v100 != 1 )
        {
          v58 = v94.m128i_i64[0];
          v59 = v100 - 1;
          if ( v94.m128i_i64[0] )
          {
            v58 = v94.m128i_i64[0] - 1;
            v59 = v57 + v94.m128i_i64[0] - 1;
            v56 = v100 + v94.m128i_i64[0] - 1;
          }
          v60 = v93;
          if ( v94.m128i_i64[1] < v56 )
          {
            v93 = qvector_reserve();
            v60 = v93;
          }
          v94.m128i_i64[0] = v56;
          *(_BYTE *)(v60 + v59) = 0;
          memcpy((void *)(v58 + v93), s2, v57);
        }
      }
      if ( s2 )
      {
        *(_QWORD *)&v100 = 0;
        qfree();
      }
    }
  }
LABEL_35:
  v30 = v93;
  v93 = 0;
  v31 = _mm_loadu_si128(&v94);
  *(_QWORD *)a1 = v30;
  *(__m128i *)(a1 + 8) = v31;
  v94 = 0;
  if ( v88 )
    qfree();
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    qfree();
  }
  if ( src )
  {
    *(_QWORD *)&v96 = 0;
    qfree();
  }
  if ( v93 )
  {
    v94.m128i_i64[0] = 0;
    qfree();
  }
  return a1;
}
