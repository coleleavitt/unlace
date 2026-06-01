__int64 __fastcall sub_382790(__int64 *a1)
{
  bool v1; // bl
  __int64 v3; // rax
  __int64 *v4; // rax
  char v5; // dl
  int v6; // eax
  __int64 *v7; // rbx
  bool v8; // cc
  unsigned int v9; // edx
  __int64 func_cmt; // rbx
  size_t v11; // r13
  _BYTE *v12; // rsi
  size_t v13; // r14
  void **p_src; // rdi
  size_t v15; // r13
  _BYTE *v16; // rsi
  const char *v17; // rax
  const char *v18; // r13
  size_t v19; // r14
  size_t v20; // rax
  size_t v21; // r15
  size_t v22; // r8
  _BYTE *v23; // rsi
  size_t v24; // rdx
  size_t v25; // r13
  size_t v26; // r15
  size_t v27; // r14
  _BYTE *v28; // rsi
  __int64 v29; // rax
  const void *v30; // r14
  size_t v31; // r13
  size_t v32; // rax
  size_t v33; // r15
  size_t v34; // r8
  _BYTE *v35; // rsi
  size_t v36; // rdx
  size_t v37; // r13
  size_t v38; // r14
  size_t v39; // r15
  _BYTE *v40; // rsi
  size_t v41; // r13
  size_t v42; // rbp
  size_t v43; // r14
  __int64 v44; // rsi
  size_t v46; // rbx
  void *v47; // rax
  void *v48; // rdx
  __m128i v49; // xmm0
  __m128 v50; // xmm1
  __int64 v51; // r13
  __int64 v52; // rbp
  unsigned int v53; // ebx
  __int64 v54; // rax
  __int64 v55; // rax
  _BYTE *v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rbx
  _DWORD *func; // r13
  __int64 v62; // rax
  void *v63; // rdx
  __m128i v64; // xmm1
  __m128 v65; // xmm0
  __int64 v66; // [rsp+0h] [rbp-140h]
  size_t v67; // [rsp+8h] [rbp-138h]
  size_t v68; // [rsp+8h] [rbp-138h]
  size_t v69; // [rsp+10h] [rbp-130h]
  size_t v70; // [rsp+10h] [rbp-130h]
  __int64 v71; // [rsp+20h] [rbp-120h] BYREF
  void *src; // [rsp+28h] [rbp-118h] BYREF
  __m128i n; // [rsp+30h] [rbp-110h] BYREF
  __int64 *v74[2]; // [rsp+48h] [rbp-F8h] BYREF
  void *v75; // [rsp+58h] [rbp-E8h]
  __int128 v76; // [rsp+60h] [rbp-E0h]
  int v77; // [rsp+70h] [rbp-D0h]
  char v78; // [rsp+74h] [rbp-CCh]
  bool v79; // [rsp+75h] [rbp-CBh]
  char v80; // [rsp+76h] [rbp-CAh]
  _QWORD v81[2]; // [rsp+78h] [rbp-C8h] BYREF
  void *v82; // [rsp+88h] [rbp-B8h]
  __int128 v83; // [rsp+90h] [rbp-B0h]
  void *ptr; // [rsp+A0h] [rbp-A0h]
  __m128i v85; // [rsp+A8h] [rbp-98h] BYREF
  _OWORD v86[2]; // [rsp+B8h] [rbp-88h] BYREF
  __int64 v87; // [rsp+D8h] [rbp-68h]
  int v88; // [rsp+E0h] [rbp-60h]
  __int64 v89; // [rsp+E8h] [rbp-58h]
  char v90; // [rsp+F0h] [rbp-50h]
  unsigned __int64 v91; // [rsp+100h] [rbp-40h]

  v1 = 0;
  v91 = __readfsqword(0x28u);
  n = 0;
  src = nullptr;
  if ( (*((_BYTE *)a1 + 146) & 2) == 0 )
    v1 = *((_DWORD *)a1 + 38) == -1;
  v3 = a1[58];
  v74[0] = (__int64 *)&src;
  v75 = nullptr;
  v4 = *(__int64 **)(v3 + 32);
  v76 = 0;
  v74[1] = v4;
  v5 = getinf(32);
  v6 = 0x7FFFFFFF;
  if ( v5 != -1 )
    v6 = (unsigned __int8)getinf(32);
  v79 = v1;
  v7 = v74[0];
  v77 = v6;
  v8 = v74[0][2] <= 0x3FFuLL;
  v78 = 0;
  v80 = 0;
  if ( v8 )
    *v7 = qvector_reserve(v74[0], *v74[0], 1024, 1);
  v9 = *((_DWORD *)a1 + 38);
  if ( v9 != -1 )
    sub_381AD0(v74, *((_DWORD *)a1 + 4), v9, 0);
  v66 = (__int64)(a1 + 20);
  func_cmt = sub_3BE860(*(_QWORD *)(qword_2CA1698 + 1480), a1 + 20, *((unsigned int *)a1 + 4), a1 + 24);
  if ( func_cmt > 0 )
  {
LABEL_10:
    v11 = n.m128i_i64[0];
    if ( n.m128i_i64[0] <= 1uLL )
      goto LABEL_40;
    v12 = src;
    if ( n.m128i_i64[1] < (unsigned __int64)(n.m128i_i64[0] + 2) )
    {
      src = (void *)qvector_reserve(&src, src, n.m128i_i64[0] + 2, 1);
      v12 = src;
    }
    n.m128i_i64[0] = v11 + 2;
    v13 = 2;
    v12[v11 + 1] = 0;
    p_src = (void **)((char *)src + 2);
    memmove((char *)src + 2, src, v11 - 1);
    *(_WORD *)src = 1025;
    v15 = n.m128i_i64[0];
    if ( n.m128i_i64[0] )
    {
      v13 = n.m128i_i64[0] + 1;
      v15 = n.m128i_i64[0] - 1;
    }
    v16 = src;
    if ( n.m128i_i64[1] < v13 )
    {
      p_src = &src;
      src = (void *)qvector_reserve(&src, src, v13, 1);
      v16 = src;
    }
    n.m128i_i64[0] = v13;
    v16[v15] = 32;
    *((_BYTE *)src + v15 + 1) = 0;
    v17 = (const char *)closing_comment(p_src, v16);
    v18 = v17;
    if ( v17 )
    {
      v19 = n.m128i_i64[0];
      v20 = strlen(v17);
      v21 = v20;
      v22 = v20;
      if ( v19 )
      {
        --v19;
        v22 = v20 + v19;
      }
      v23 = src;
      v24 = v22 + 1;
      if ( n.m128i_i64[1] < v22 + 1 )
      {
        v70 = v22;
        v68 = v22 + 1;
        src = (void *)qvector_reserve(&src, src, v24, 1);
        v22 = v70;
        v23 = src;
        v24 = v68;
      }
      n.m128i_i64[0] = v24;
      v23[v22] = 0;
      memmove((char *)src + v19, v18, v21);
    }
    v25 = n.m128i_i64[0];
    if ( n.m128i_i64[0] )
    {
      v26 = n.m128i_i64[0] + 1;
      v27 = n.m128i_i64[0] + 2;
      v28 = src;
      v25 = n.m128i_i64[0] - 1;
      if ( n.m128i_i64[1] >= (unsigned __int64)(n.m128i_i64[0] + 2) )
        goto LABEL_25;
    }
    else
    {
      v28 = src;
      v27 = 3;
      v26 = 2;
      if ( n.m128i_i64[1] >= 3uLL )
        goto LABEL_25;
    }
    src = (void *)qvector_reserve(&src, v28, v27, 1);
    v28 = src;
LABEL_25:
    n.m128i_i64[0] = v27;
    v28[v26] = 0;
    *(_WORD *)((char *)src + v25) = 1026;
    v29 = a1[60];
    v30 = *(const void **)(v29 + 48);
    if ( v30 )
    {
      v31 = n.m128i_i64[0];
      v32 = strlen(*(const char **)(v29 + 48));
      v33 = v32;
      v34 = v32;
      if ( v31 )
      {
        --v31;
        v34 = v32 + v31;
      }
      v35 = src;
      v36 = v34 + 1;
      if ( n.m128i_i64[1] < v34 + 1 )
      {
        v69 = v34;
        v67 = v34 + 1;
        src = (void *)qvector_reserve(&src, src, v36, 1);
        v34 = v69;
        v35 = src;
        v36 = v67;
      }
      n.m128i_i64[0] = v36;
      v35[v34] = 0;
      memmove((char *)src + v31, v30, v33);
    }
    v37 = n.m128i_i64[0];
    if ( n.m128i_i64[0] )
    {
      v38 = n.m128i_i64[0] + 1;
      v39 = n.m128i_i64[0];
      v40 = src;
      v37 = n.m128i_i64[0] - 1;
      if ( n.m128i_i64[1] >= (unsigned __int64)(n.m128i_i64[0] + 1) )
      {
LABEL_33:
        n.m128i_i64[0] = v38;
        v40[v39] = 0;
        *((_BYTE *)src + v37) = 32;
        v41 = n.m128i_i64[0];
        v42 = (a1[21] == 0) + a1[21] - 1;
        v43 = v42;
        if ( n.m128i_i64[0] )
        {
          v41 = n.m128i_i64[0] - 1;
          v43 = n.m128i_i64[0] - 1 + v42;
        }
        v44 = a1[20];
        if ( a1[22] < v43 + 1 )
        {
          v62 = qvector_reserve(v66, v44, v43 + 1, 1);
          a1[20] = v62;
          v44 = v62;
        }
        a1[21] = v43 + 1;
        *(_BYTE *)(v44 + v43) = 0;
        if ( v42 )
          memmove((void *)(a1[20] + v41), (const void *)a1[20], v42);
        memcpy((void *)a1[20], src, v41);
        goto LABEL_40;
      }
    }
    else
    {
      v40 = src;
      v38 = 2;
      v39 = 1;
      if ( n.m128i_i64[1] >= 2uLL )
        goto LABEL_33;
    }
    src = (void *)qvector_reserve(&src, v40, v38, 1);
    v40 = src;
    goto LABEL_33;
  }
  if ( (unsigned __int8)is_spec_ea(*((unsigned int *)a1 + 4)) )
  {
    func = (_DWORD *)get_func(*((unsigned int *)a1 + 4));
    if ( func )
    {
      if ( *func == *((_DWORD *)a1 + 4) )
      {
        func_cmt = get_func_cmt(v66, func, 0);
        if ( func_cmt > 0 || (func_cmt = get_func_cmt(v66, func, 1), func_cmt > 0) )
        {
          *((_BYTE *)a1 + 192) = 2;
          goto LABEL_10;
        }
      }
    }
  }
  v46 = n.m128i_i64[0];
  if ( n.m128i_i64[0] > 1uLL )
  {
    v47 = (void *)a1[20];
    v48 = src;
    *((_BYTE *)a1 + 192) = 4;
    v49 = _mm_loadu_si128((const __m128i *)(a1 + 21));
    v50 = _mm_loadh_ps((const double *)&n.m128i_i64[1]);
    func_cmt = v46 - 1;
    a1[20] = (__int64)v48;
    src = v47;
    *(__m128 *)(a1 + 21) = v50;
    n = v49;
    goto LABEL_40;
  }
  v51 = (__int64)a1 + 236;
  v52 = 0;
  while ( 1 )
  {
    v53 = *((_DWORD *)a1 + v52 + 122);
    if ( (unsigned __int8)is_stkvar(a1[66], (unsigned int)v52) )
      break;
LABEL_62:
    ++v52;
    v51 += 24;
    if ( v52 == 8 )
    {
      if ( !(unsigned __int8)getinf_flag(45, 2) )
        goto LABEL_79;
      if ( (~*((_WORD *)a1 + 264) & 0x600) != 0 )
        goto LABEL_79;
      if ( (unsigned __int8)segtype(*((unsigned int *)a1 + 4)) == 1 )
        goto LABEL_79;
      *((_BYTE *)a1 + 192) = 4;
      func_cmt = get_predef_insn_cmt(v66, (char *)a1 + 212);
      if ( func_cmt <= 0 )
        goto LABEL_79;
      if ( !a1[21] )
        goto LABEL_40;
      v56 = (_BYTE *)a1[20];
      if ( *v56 != 36 || v56[1] != 33 )
        goto LABEL_40;
      if ( sub_375980(0x35u, v66, (char *)a1 + 212) != 1 )
      {
        v57 = a1[21];
        if ( v57 < 2 )
          goto LABEL_79;
        v58 = 0;
        if ( v57 - 1 > 2 )
        {
          v58 = v57 - 3;
          memmove((void *)a1[20], (const void *)(a1[20] + 2), v57 - 3);
        }
        if ( a1[22] < v58 + 1 )
          a1[20] = qvector_reserve(v66, a1[20], v58 + 1, 1);
        v59 = a1[20];
        a1[21] = v58 + 1;
        *(_BYTE *)(v59 + v58) = 0;
      }
      v60 = a1[21];
      if ( v60 )
      {
        func_cmt = v60 - 1;
        if ( func_cmt > 0 )
          goto LABEL_40;
      }
LABEL_79:
      func_cmt = -1;
      goto LABEL_40;
    }
  }
  v54 = *a1;
  v71 = 0;
  v55 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, _QWORD, __int64 *))(v54 + 232))(
          a1,
          v51,
          v53,
          0,
          0,
          &v71);
  if ( v55 == -1 )
  {
LABEL_61:
    clear_tinfo_t(&v71);
    goto LABEL_62;
  }
  v81[1] = 0;
  v82 = nullptr;
  ptr = nullptr;
  v87 = 1;
  v88 = -1;
  v89 = 0;
  v90 = 0;
  v81[0] = v55;
  v83 = 0;
  v85 = 0;
  v86[0] = 0;
  find_tinfo_udt_member((int)v81);
  if ( !v85.m128i_i64[0] || (func_cmt = v85.m128i_i64[0] - 1, v85.m128i_i64[0] - 1 <= 0) )
  {
    clear_tinfo_t(v86);
    if ( ptr )
    {
      v85.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v82 )
    {
      *(_QWORD *)&v83 = 0;
      qfree(v82);
    }
    goto LABEL_61;
  }
  v63 = (void *)a1[20];
  v64 = _mm_loadu_si128((const __m128i *)(a1 + 21));
  v65 = _mm_loadh_ps((const double *)&v85.m128i_i64[1]);
  a1[20] = (__int64)ptr;
  *(__m128 *)(a1 + 21) = v65;
  ptr = v63;
  v85 = v64;
  clear_tinfo_t(v86);
  if ( ptr )
  {
    v85.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v82 )
  {
    *(_QWORD *)&v83 = 0;
    qfree(v82);
  }
  clear_tinfo_t(&v71);
LABEL_40:
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v75);
  }
  if ( src )
  {
    n.m128i_i64[0] = 0;
    qfree(src);
  }
  return func_cmt;
}

