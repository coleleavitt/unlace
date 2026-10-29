__int64 __fastcall sub_6EDBC0(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  unsigned int v14; // r15d
  __m128i v16; // xmm0
  void *v17; // r15
  unsigned __int64 v18; // r14
  __m128i v19; // xmm0
  const char *v20; // r14
  const char *v21; // rdx
  void *idati; // rax
  const char *v23; // rdx
  char *v24; // r8
  const char *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rdi
  _QWORD *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  char *v46; // rsi
  char *v47; // r15
  const char *v48; // rdx
  const char *v49; // r8
  const char *v50; // rcx
  char *v51; // rdi
  __int64 v52; // r12
  __int64 v53; // rbp
  char *v54; // rbx
  void *v55; // rdi
  void *v56; // rdi
  const char *v57; // rax
  void *v58; // rdx
  __int64 tinfo_size; // rax
  void *v60; // rdi
  unsigned __int64 v61; // rax
  double v62; // xmm4_8
  double v63; // xmm5_8
  __int64 *v64; // rdx
  unsigned __int64 v65; // r15
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 *v72; // rdx
  __int64 v73; // rdi
  unsigned __int64 v74; // r15
  double v75; // xmm4_8
  double v76; // xmm5_8
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r15
  double v80; // xmm4_8
  double v81; // xmm5_8
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  __int64 v84; // rsi
  char *v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rax
  char *v88; // rax
  const char *v89; // rcx
  __m128i v90; // [rsp+0h] [rbp-118h] BYREF
  __int64 *i; // [rsp+18h] [rbp-100h]
  __int64 *v92; // [rsp+20h] [rbp-F8h]
  __int64 v93; // [rsp+28h] [rbp-F0h]
  __int64 v94; // [rsp+38h] [rbp-E0h] BYREF
  void *ptr; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v96; // [rsp+48h] [rbp-D0h]
  void *v97; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v98; // [rsp+68h] [rbp-B0h]
  void *v99; // [rsp+80h] [rbp-98h] BYREF
  __int64 v100; // [rsp+88h] [rbp-90h]
  void *v101; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v102; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v103; // [rsp+B8h] [rbp-60h]
  __int64 v104; // [rsp+C8h] [rbp-50h]
  int v105; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v106; // [rsp+D8h] [rbp-40h]

  v106 = __readfsqword(0x28u);
  sub_6D7D30((__int64)&ptr, (__int64)a1, a3, 1);
  if ( v96.m128i_i64[0] <= 1uLL )
    goto LABEL_2;
  sub_6D80F0((__int64)&v101, (__int64)a1, a3, 1);
  v16 = _mm_loadu_si128(&v102);
  v17 = v101;
  v102 = 0;
  v101 = nullptr;
  v18 = v16.m128i_i64[0];
  if ( ptr )
  {
    v90 = v16;
    v96.m128i_i64[0] = 0;
    qfree(ptr);
    v19 = _mm_load_si128(&v90);
    ptr = v17;
    v96 = v19;
    if ( v101 )
    {
      v102.m128i_i64[0] = 0;
      qfree(v101);
      v18 = v96.m128i_i64[0];
    }
  }
  else
  {
    ptr = v17;
    v96 = v16;
  }
  if ( v18 <= 1 )
    goto LABEL_2;
  v20 = (const char *)sub_BAE550(a3);
  if ( v20 )
  {
    if ( a2 )
    {
      v21 = haystack;
      if ( v96.m128i_i64[0] )
        v21 = (const char *)ptr;
      if ( v21 )
      {
        idati = (void *)a1[2];
        v102.m128i_i64[0] = (__int64)v21;
        v102.m128i_i16[4] = 0;
        if ( !idati )
          idati = (void *)get_idati(0, a1);
        v101 = idati;
        create_tinfo(a2, 13, 189, &v101);
      }
    }
LABEL_2:
    v14 = 1;
    goto LABEL_3;
  }
  if ( (unsigned __int8)sub_6F41D0(a1, a3) )
  {
    if ( a2 )
    {
      v23 = haystack;
      if ( v96.m128i_i64[0] )
        v23 = (const char *)ptr;
      sub_6DC6D0((__int64)a1, a2, v23);
    }
    goto LABEL_2;
  }
  sub_6D7650((__int64)&v97, (__int64)a1, a3);
  v94 = 0;
  v24 = (char *)haystack;
  if ( v98 )
    v24 = (char *)v97;
  v25 = haystack;
  if ( v96.m128i_i64[0] )
    v25 = (const char *)ptr;
  v90.m128i_i64[0] = (__int64)&v94;
  v14 = sub_6DD660((__int64)a1, &v94, a3, v25, v24, 0xDu);
  if ( (_BYTE)v14 )
  {
    if ( a3 != sub_6E2600(a3, (__int64)&v94, v26, v27, v28, v29) )
    {
      if ( a2 )
      {
        v30 = v94;
        v94 = *a2;
        *a2 = v30;
      }
      goto LABEL_29;
    }
    if ( *(char *)(a3 + 28) < 0 )
    {
      if ( a2 )
      {
        v57 = haystack;
        if ( v96.m128i_i64[0] )
          v57 = (const char *)ptr;
        if ( v57 )
        {
          v58 = (void *)a1[2];
          v102.m128i_i64[0] = (__int64)v57;
          v102.m128i_i16[4] = 0;
          if ( !v58 )
            v58 = (void *)get_idati(a3, 0);
          v101 = v58;
          create_tinfo(a2, 13, 189, &v101);
        }
      }
      goto LABEL_29;
    }
    v31 = a1[6];
    v102 = 0;
    v103 = 0;
    v101 = nullptr;
    v104 = 0x100000000000LL;
    v105 = 1;
    v32 = (_QWORD *)sub_A630C0(v31);
    v33 = sub_A98060(a1[6], *v32);
    v34 = a1[6];
    *(_QWORD *)&v103 = v33 / 8;
    v35 = sub_A98060(v34, v32[1]);
    v36 = a1[6];
    *((_QWORD *)&v103 + 1) = v35 / 8;
    v37 = sub_A98060(v36, v32[2]);
    v38 = a1[6];
    LODWORD(v104) = v37 / 8;
    v39 = sub_A82070(v38, a3, 0);
    if ( (unsigned __int8)sub_AAE330(a1[6], v39) )
    {
      v87 = sub_A98060(a1[6], v32[5]);
      BYTE1(v105) = log2floor(v87 / 8) + 1;
    }
    v40 = a3;
    if ( (unsigned __int8)sub_6DA8E0((__int64)a1, a3, 325) )
      HIDWORD(v104) |= 0x40u;
    v43 = sub_BAB630(a3);
    if ( v43 )
    {
      v45 = v102.m128i_i64[0];
      v46 = (char *)v101;
      if ( v102.m128i_i64[1] < (unsigned __int64)(v102.m128i_i64[0] + 1) )
      {
        i = (__int64 *)v43;
        v88 = (char *)qvector_reserve(&v101, v101, v102.m128i_i64[0] + 1, 144);
        v45 = v102.m128i_i64[0];
        v43 = (__int64)i;
        v101 = v88;
        v46 = v88;
      }
      v47 = &v46[144 * v45];
      *((_QWORD *)v47 + 2) = 0;
      *((_QWORD *)v47 + 5) = 0;
      *((_QWORD *)v47 + 14) = 1;
      *((_DWORD *)v47 + 30) = -1;
      *((_DWORD *)v47 + 32) = 0;
      v47[136] = 0;
      *(_OWORD *)v47 = 0;
      *(_OWORD *)(v47 + 24) = 0;
      *((_OWORD *)v47 + 3) = 0;
      *((_OWORD *)v47 + 4) = 0;
      ++v102.m128i_i64[0];
      *((_DWORD *)v47 + 33) = 32;
      sub_6D80F0((__int64)&v99, (__int64)a1, v43, 1);
      v48 = haystack;
      if ( v100 )
        v48 = (const char *)v99;
      if ( !(unsigned __int8)sub_6DC6D0((__int64)a1, (__int64 *)v47 + 8, v48) )
      {
        v49 = haystack;
        if ( v100 )
          v49 = (const char *)v99;
        v50 = haystack;
        if ( v96.m128i_i64[0] )
          v50 = (const char *)ptr;
        sub_6DBD10(a1, a3, (__int64)"interface %s: invalid superclass type: %s", v50, v49);
        if ( v99 )
        {
          v100 = 0;
          qfree(v99);
        }
        goto LABEL_51;
      }
      v40 = *((_QWORD *)v47 + 8);
      tinfo_size = get_tinfo_size(0, v40, 0);
      v60 = v99;
      *((_QWORD *)v47 + 1) = 8 * tinfo_size;
      if ( v60 )
      {
        v100 = 0;
        qfree(v60);
      }
    }
    v61 = sub_6E26C0(a3, v40, v41, v42, v43, v44);
    i = v64;
    v65 = v61;
    if ( v64 != (__int64 *)v61 )
    {
      while ( (unsigned __int8)sub_6ED640(
                                 (__int64)a1,
                                 (__int64 *)&v101,
                                 v65,
                                 0.0,
                                 (__m128i)0LL,
                                 a6,
                                 a7,
                                 v62,
                                 v63,
                                 a10,
                                 a11) )
      {
        while ( 1 )
        {
          v66 = *(_QWORD *)(v65 + 8);
          v65 = v66 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v66 <= 7 )
            break;
          if ( (*(_BYTE *)(v65 + 28) & 0x7F) == 0x32 )
            goto LABEL_75;
        }
        v65 = 0;
LABEL_75:
        if ( (__int64 *)v65 == i )
          goto LABEL_76;
      }
      goto LABEL_51;
    }
LABEL_76:
    sub_6EDAA0(
      (__int64)a1,
      (__int64 *)&v101,
      a3,
      (__int64 *)v90.m128i_i64[0],
      0.0,
      (__m128i)0LL,
      a6,
      a7,
      v62,
      v63,
      a10,
      a11);
    v71 = sub_6E2850(a3, (__int64)&v101, v67, v68, v69, v70);
    v92 = v72;
    for ( i = (__int64 *)v71; v92 != i; ++i )
    {
      v73 = *i + 48;
      v93 = *i;
      v74 = sub_B8E970(v73);
      if ( v74 )
      {
        while ( (*(_BYTE *)(v74 + 28) & 0x7F) != 0x12 )
        {
          v77 = *(_QWORD *)(v74 + 8);
          v74 = v77 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v77 <= 7 )
            goto LABEL_85;
        }
LABEL_81:
        if ( !(unsigned __int8)sub_6ECA10(
                                 (__int64)a1,
                                 a3,
                                 (__int64 *)v90.m128i_i64[0],
                                 v74,
                                 0.0,
                                 (__m128i)0LL,
                                 a6,
                                 a7,
                                 v75,
                                 v76,
                                 a10,
                                 a11) )
          goto LABEL_51;
        while ( 1 )
        {
          v78 = *(_QWORD *)(v74 + 8);
          v74 = v78 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v78 <= 7 )
            break;
          if ( (*(_BYTE *)(v74 + 28) & 0x7F) == 0x12 )
            goto LABEL_81;
        }
      }
LABEL_85:
      ;
    }
    v79 = sub_B8E970(a3 + 48);
    if ( v79 )
    {
      while ( (*(_BYTE *)(v79 + 28) & 0x7F) != 0x12 )
      {
        v82 = *(_QWORD *)(v79 + 8);
        v79 = v82 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v82 <= 7 )
          goto LABEL_95;
      }
LABEL_90:
      if ( (*(_BYTE *)(v79 + 58) & 8) == 0
        && !(unsigned __int8)sub_6ECA10(
                               (__int64)a1,
                               a3,
                               (__int64 *)v90.m128i_i64[0],
                               v79,
                               0.0,
                               (__m128i)0LL,
                               a6,
                               a7,
                               v80,
                               v81,
                               a10,
                               a11) )
      {
        goto LABEL_51;
      }
      while ( 1 )
      {
        v83 = *(_QWORD *)(v79 + 8);
        v79 = v83 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v83 <= 7 )
          break;
        if ( (*(_BYTE *)(v79 + 28) & 0x7F) == 0x12 )
          goto LABEL_90;
      }
    }
LABEL_95:
    v84 = 13;
    if ( HIBYTE(v105) )
      v84 = 29;
    v14 = create_tinfo(v90.m128i_i64[0], v84, 13, &v101);
    if ( (_BYTE)v14 )
    {
      v85 = (char *)haystack;
      if ( v98 )
        v85 = (char *)v97;
      if ( v96.m128i_i64[0] > 1uLL )
        v20 = (const char *)ptr;
      sub_6DF2F0((__int64)a1, v90.m128i_i64[0], 1, v20, v85, a3, 0);
      if ( a2 )
      {
        v86 = v94;
        v94 = *a2;
        *a2 = v86;
      }
      goto LABEL_52;
    }
    v89 = haystack;
    if ( v96.m128i_i64[0] )
      v89 = (const char *)ptr;
    sub_6DBD10(a1, a3, (__int64)"Could not create tinfo for %s", v89);
LABEL_51:
    v14 = 0;
LABEL_52:
    v51 = (char *)v101;
    if ( v101 )
    {
      v52 = v102.m128i_i64[0];
      v53 = 0;
      if ( v102.m128i_i64[0] )
      {
        do
        {
          v54 = &v51[144 * v53];
          clear_tinfo_t(v54 + 64);
          v55 = *((void **)v54 + 5);
          if ( v55 )
          {
            *((_QWORD *)v54 + 6) = 0;
            qfree(v55);
          }
          v56 = *((void **)v54 + 2);
          if ( v56 )
          {
            *((_QWORD *)v54 + 3) = 0;
            qfree(v56);
          }
          ++v53;
          v51 = (char *)v101;
        }
        while ( v52 != v53 );
      }
      v102.m128i_i64[0] = 0;
      qfree(v51);
    }
  }
LABEL_29:
  clear_tinfo_t(v90.m128i_i64[0]);
  if ( v97 )
  {
    v98 = 0;
    qfree(v97);
  }
LABEL_3:
  if ( ptr )
  {
    v96.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v14;
}
