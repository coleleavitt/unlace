__int64 __fastcall sub_1E2580(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebp
  __int64 v6; // rsi
  int v7; // r8d
  int v8; // r9d
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  int v15; // r13d
  unsigned __int64 v16; // rbx
  _QWORD *v17; // r14
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  void **v24; // rcx
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 *v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rdx
  _DWORD *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  void *v37; // rbx
  __m128i v38; // xmm0
  __int64 v39; // rbp
  unsigned __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  char *v43; // rax
  int v44; // r9d
  __int64 v45; // rax
  size_t v46; // r13
  __int64 v47; // rbp
  __int64 v48; // r15
  unsigned __int64 v49; // r14
  __int64 v50; // r13
  const char *v51; // r14
  __int64 v52; // rbp
  __int64 v53; // r15
  char *v54; // rsi
  __int64 v55; // rdx
  char *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  const char *v59; // r8
  const char *v60; // rcx
  __int64 v61; // rbp
  __int64 v62; // r12
  __int64 v63; // rbx
  __int64 *v64; // rax
  __int64 v65; // rdi
  __m128i v66; // xmm0
  void *v67; // rdx
  unsigned __int64 v68; // rax
  const void **v69; // r14
  __int64 v70; // r13
  size_t v71; // r13
  __int64 v72; // rbp
  unsigned __int64 v73; // rdx
  int v74; // eax
  char *v75; // rax
  __m128i v76; // xmm0
  __m128i v77; // xmm0
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  int v80; // ebx
  int v81; // eax
  const char *v82; // rbx
  char *v83; // rax
  __m128i si128; // xmm0
  _QWORD *v85; // rbp
  __int64 v86; // rdi
  __int64 v87; // r13
  __int64 *v88; // rbp
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 *v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rax
  unsigned __int64 v95; // [rsp+10h] [rbp-198h]
  __m128i v97; // [rsp+20h] [rbp-188h] BYREF
  void **p_src; // [rsp+30h] [rbp-178h]
  unsigned __int64 v99; // [rsp+38h] [rbp-170h]
  unsigned __int8 v100; // [rsp+42h] [rbp-166h]
  unsigned __int8 v101; // [rsp+43h] [rbp-165h]
  int v102; // [rsp+44h] [rbp-164h]
  __int64 v103; // [rsp+48h] [rbp-160h]
  __m128i v104; // [rsp+50h] [rbp-158h] BYREF
  int v105; // [rsp+6Ch] [rbp-13Ch] BYREF
  __int64 v106; // [rsp+70h] [rbp-138h] BYREF
  char v107; // [rsp+78h] [rbp-130h]
  unsigned __int64 v108; // [rsp+80h] [rbp-128h] BYREF
  __int128 v109; // [rsp+88h] [rbp-120h]
  __int64 v110; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-100h]
  char *v112; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v113; // [rsp+C8h] [rbp-E0h]
  void *src; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i v115; // [rsp+E8h] [rbp-C0h] BYREF
  _DWORD v116[2]; // [rsp+100h] [rbp-A8h] BYREF
  __int128 v117; // [rsp+108h] [rbp-A0h]
  __int64 v118; // [rsp+118h] [rbp-90h]
  _BYTE v119[32]; // [rsp+120h] [rbp-88h] BYREF
  _DWORD v120[2]; // [rsp+140h] [rbp-68h] BYREF
  __int128 v121; // [rsp+148h] [rbp-60h]
  __int64 v122; // [rsp+158h] [rbp-50h]
  unsigned __int64 v123; // [rsp+168h] [rbp-40h]

  v123 = __readfsqword(0x28u);
  v3 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1496LL) + 728LL) & 1) == 0 )
    return 0;
  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 480) + 760LL);
  if ( v4 <= 0 )
    return 0;
  v101 = a1[24];
  if ( v101 )
    return 0;
  v6 = *(_QWORD *)(v3 + 1504);
  v107 = 0;
  v106 = 0;
  v103 = a3 + 32;
  if ( !(unsigned __int8)sub_1DFF30((__int64)&v106, v6, &v105, a3 + 32) )
    return 0;
  v9 = *(__int64 **)(a3 + 56);
  v10 = v9[1];
  v11 = *v9;
  v97.m128i_i64[1] = (__int64)v9;
  v12 = v11 + 24 * v10;
  if ( v11 != v12 )
  {
    v13 = 0;
    do
    {
      v13 += *(_QWORD *)(v11 + 8);
      if ( v4 < v13 )
        return 0;
      v11 += 24;
    }
    while ( v12 != v11 );
  }
  v15 = v105;
  v116[0] = 0;
  v118 = 0;
  v116[1] = v105;
  v117 = 0;
  v100 = sub_1E0180((_DWORD)a1, (unsigned int)v116, (unsigned int)&v106, 0, v7, v8);
  if ( !v100 )
    goto LABEL_83;
  if ( v116[0] == 8 )
  {
    v100 = 0;
    goto LABEL_83;
  }
  v108 = 0;
  v109 = 0;
  v99 = *(_QWORD *)(v97.m128i_i64[1] + 32);
  if ( !v99 )
  {
    p_src = (void **)v119;
    sub_312C40(v119, v116);
    goto LABEL_90;
  }
  v102 = -1;
  v16 = 0;
  v97.m128i_i64[0] = ~(-1LL << (8 * (unsigned __int8)v15));
  while ( 2 )
  {
    v17 = (_QWORD *)(*(_QWORD *)v97.m128i_i64[1] + 24 * v16);
    if ( !v17[1] )
    {
      v102 = v16++;
      goto LABEL_16;
    }
    v18 = 0;
    do
    {
      while ( 1 )
      {
        v20 = v97.m128i_i64[0] & *(_QWORD *)(*v17 + 8 * v18);
        if ( v15 == 8 )
          v20 = *(_QWORD *)(*v17 + 8 * v18);
        if ( !(unsigned __int8)sub_315890(v116, v20) )
          break;
        ++v18;
LABEL_20:
        v19 = v17[1];
        if ( v18 >= v19 )
          goto LABEL_31;
      }
      src = nullptr;
      v115 = 0;
      p_src = &src;
      sub_6B870((__int64 *)&src);
      v21 = v109;
      v22 = v108;
      v23 = v109 + 1;
      if ( (unsigned __int64)&src < v108 || (unsigned __int64)p_src >= v108 + 24LL * *((_QWORD *)&v109 + 1) )
      {
        if ( *((_QWORD *)&v109 + 1) < v23 )
        {
          v108 = qvector_reserve((__int64)&v108, v108, v109 + 1, 24);
          v22 = v108;
          v21 = v109;
        }
        v66 = _mm_loadu_si128(&v115);
        v67 = src;
        src = nullptr;
        v68 = v22 + 24 * v21;
        *(__m128i *)(v68 + 8) = v66;
        *(_QWORD *)v68 = v67;
        v115 = 0;
      }
      else
      {
        v24 = (void **)src;
        v25 = _mm_loadl_epi64(&v115);
        src = nullptr;
        v26 = _mm_loadl_epi64((const __m128i *)&v115.m128i_u64[1]);
        v115 = 0;
        p_src = v24;
        if ( *((_QWORD *)&v109 + 1) < v23 )
        {
          v104.m128i_i64[1] = v26.m128i_i64[0];
          v104.m128i_i64[0] = v25.m128i_i64[0];
          v108 = qvector_reserve((__int64)&v108, v108, v109 + 1, 24);
          v22 = v108;
          v26 = _mm_loadl_epi64((const __m128i *)&v104.m128i_u64[1]);
          v21 = v109;
          v25 = _mm_loadl_epi64(&v104);
        }
        v27 = v22 + 24 * v21;
        *(_QWORD *)v27 = p_src;
        *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v25, v26);
      }
      *(_QWORD *)&v109 = v109 + 1;
      memmove((void *)(8 * v18 + *v17), (const void *)(8 * v18 + *v17 + 8), 8LL * v17[1]-- - 8 - 8 * v18);
      if ( !src )
        goto LABEL_20;
      v115.m128i_i64[0] = 0;
      qfree((__int64)src);
      v19 = v17[1];
    }
    while ( v18 < v19 );
LABEL_31:
    if ( v19 )
    {
      ++v16;
    }
    else
    {
      sub_122440((__int64 *)v97.m128i_i64[1], a2, v16);
      --v99;
    }
LABEL_16:
    if ( v16 < v99 )
      continue;
    break;
  }
  p_src = (void **)v119;
  sub_312C40(v119, v116);
  if ( v102 != -1 )
  {
    v28 = *(_QWORD *)(v97.m128i_i64[1] + 8);
    goto LABEL_35;
  }
LABEL_90:
  v28 = *(_QWORD *)(v97.m128i_i64[1] + 8);
  if ( v28 == 1 )
  {
    v102 = -1;
LABEL_35:
    v29 = *(_QWORD *)v97.m128i_i64[1];
    for ( v97.m128i_i64[0] = *(_QWORD *)v97.m128i_i64[1] + 24 * v28; v97.m128i_i64[0] != v29; v29 += 24 )
    {
      v30 = *(__int64 **)v29;
      v31 = *(_QWORD *)v29 + 8LL * *(_QWORD *)(v29 + 8);
      if ( v31 != *(_QWORD *)v29 )
      {
        do
        {
          v32 = *v30;
          v120[0] = 0;
          v120[1] = v15;
          v122 = 0;
          v121 = 0;
          sub_313200(v120, 0, v32);
          sub_3147B0(v116, v120);
          ++v30;
          sub_312B80(v120);
        }
        while ( (__int64 *)v31 != v30 );
      }
    }
    if ( !v116[0] )
    {
      if ( v102 != -1 )
      {
        sub_122440((__int64 *)v97.m128i_i64[1], a2, v102);
        v115 = 0;
        v97.m128i_i64[0] = (__int64)&src;
        src = nullptr;
        v33 = (_DWORD *)qvector_reserve((__int64)&src, 0, 8, 1);
        src = v33;
        v115.m128i_i64[0] = 8;
        *v33 = 1634100580;
        *(_DWORD *)((char *)v33 + 3) = 1953264993;
        *((_BYTE *)src + 7) = 0;
        v34 = v109;
        v35 = v108;
        v36 = v109 + 1;
        if ( (unsigned __int64)&src < v108 || (unsigned __int64)&src >= v108 + 24LL * *((_QWORD *)&v109 + 1) )
        {
          if ( *((_QWORD *)&v109 + 1) < v36 )
          {
            v108 = qvector_reserve((__int64)&v108, v108, v36, 24);
            v35 = v108;
            v34 = v109;
          }
          v77 = _mm_loadu_si128(&v115);
          v78 = v35 + 24 * v34;
          *(_QWORD *)v78 = src;
          *(__m128i *)(v78 + 8) = v77;
          *(_QWORD *)&v109 = v109 + 1;
        }
        else
        {
          v37 = src;
          v38 = _mm_loadl_epi64(&v115);
          src = nullptr;
          v39 = v115.m128i_i64[1];
          v115 = 0;
          if ( *((_QWORD *)&v109 + 1) < v36 )
          {
            v97.m128i_i64[0] = v38.m128i_i64[0];
            v108 = qvector_reserve((__int64)&v108, v108, v36, 24);
            v35 = v108;
            v38 = _mm_loadl_epi64(&v97);
            v34 = v109;
          }
          v40 = v35 + 24 * v34;
          *(_QWORD *)v40 = v37;
          *(__m128i *)(v40 + 8) = _mm_unpacklo_epi64(v38, (__m128i)(unsigned __int64)v39);
          *(_QWORD *)&v109 = v109 + 1;
          if ( src )
          {
            v115.m128i_i64[0] = 0;
            qfree((__int64)src);
          }
        }
      }
      v41 = *(_QWORD *)(v97.m128i_i64[1] + 8);
      if ( v41 == 1 )
      {
        v85 = *(_QWORD **)v97.m128i_i64[1];
        v86 = **(_QWORD **)v97.m128i_i64[1];
        if ( v86 )
        {
          v85[1] = 0;
          qfree(v86);
          *v85 = 0;
          v85[2] = 0;
        }
        v87 = v109;
        v88 = (__int64 *)v108;
        if ( (_QWORD)v109 != 1 )
        {
          v89 = v108;
          src = nullptr;
          v115 = 0;
          if ( (unsigned __int64)v109 > 1 )
          {
            do
            {
              v91 = &v88[3 * v41];
              v92 = *v91;
              if ( *v91 )
              {
                v91[1] = 0;
                qfree(v92);
                v88 = (__int64 *)v108;
              }
              ++v41;
            }
            while ( v87 != v41 );
          }
          else if ( *((_QWORD *)&v109 + 1)
                 || (v89 = qvector_reserve((__int64)&v108, v108, 1, 24), v108 = v89, v88 = (__int64 *)v89, !(_QWORD)v109) )
          {
            *(_QWORD *)v89 = 0;
            *(_OWORD *)(v89 + 8) = 0;
            v88 = (__int64 *)v108;
          }
          *(_QWORD *)&v109 = 1;
        }
        v90 = *v88;
        if ( (unsigned __int64)v88[2] <= 3 )
        {
          v93 = qvector_reserve((__int64)v88, v90, 4, 1);
          *v88 = v93;
          v90 = v93;
        }
        v88[1] = 4;
        *(_WORD *)v90 = 27745;
        *(_BYTE *)(v90 + 2) = 108;
        *(_BYTE *)(*v88 + 3) = 0;
      }
    }
  }
  if ( !(_QWORD)v109 )
    goto LABEL_75;
  sub_3166B0(&v110, p_src, v103);
  v42 = *(_QWORD *)(v97.m128i_i64[1] + 32);
  if ( !v42 )
  {
    sub_159B40(a3, *(_QWORD *)(*(_QWORD *)a1 + 1504LL), a2, a3, 0);
    sub_11D5A0(a3);
    v74 = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 76) = 2;
    BYTE1(v74) &= ~2u;
    LOBYTE(v74) = v74 | 0x80;
    *(_DWORD *)(a2 + 24) = v74;
    v112 = nullptr;
    v113 = 0;
    goto LABEL_100;
  }
  if ( v42 != 1 || *(_QWORD *)(*(_QWORD *)v97.m128i_i64[1] + 8LL) )
  {
    v112 = nullptr;
    v113 = 0;
    if ( (_QWORD)v109 != 1 )
    {
      v43 = (char *)qvector_reserve((__int64)&v112, 0, 11, 1);
      *(_QWORD *)&v113 = 11;
      v112 = v43;
      strcpy(v43, "the cases ");
      sub_1DF580((__int64)&src, (__int64 *)&v108, ", ");
      if ( v115.m128i_i64[0] )
      {
        v45 = v115.m128i_i64[0] - 1;
        v46 = v115.m128i_i64[0] - 1;
        if ( v115.m128i_i64[0] != 1 )
        {
          v47 = ((_QWORD)v113 == 0) + (_QWORD)v113 - 1LL;
          v48 = v45 + v47;
          v49 = v45 + ((_QWORD)v113 == 0) + (_QWORD)v113;
          if ( *((_QWORD *)&v113 + 1) < v49 )
            v112 = (char *)qvector_reserve((__int64)&v112, (__int64)v112, v45 + ((_QWORD)v113 == 0) + (_QWORD)v113, 1);
          *(_QWORD *)&v113 = v49;
          v112[v48] = 0;
          memcpy(&v112[v47], src, v46);
        }
      }
      if ( src )
      {
        v115.m128i_i64[0] = 0;
        qfree((__int64)src);
      }
      goto LABEL_59;
    }
    if ( *(_QWORD *)(v108 + 8) )
    {
      v82 = *(const char **)v108;
      if ( !strcmp(*(const char **)v108, "all") )
      {
        v112 = (char *)qvector_reserve((__int64)&v112, 0, 14, 1);
        *(_QWORD *)&v113 = 14;
        strcpy(v112, "the all cases");
LABEL_59:
        v50 = 5;
        v51 = " were";
        goto LABEL_60;
      }
      if ( !strcmp(v82, "default") )
      {
        v83 = (char *)qvector_reserve((__int64)&v112, 0, 17, 1);
        si128 = _mm_load_si128((const __m128i *)&xmmword_4248A0);
        v112 = v83;
        *(_QWORD *)&v113 = 17;
        v83[16] = 0;
        *(__m128i *)v83 = si128;
        goto LABEL_98;
      }
    }
    v112 = (char *)qvector_reserve((__int64)&v112, 0, 10, 1);
    *(_QWORD *)&v113 = 10;
    strcpy(v112, "the case ");
    v69 = (const void **)v108;
    v70 = *(_QWORD *)(v108 + 8);
    if ( v70 )
    {
      v71 = v70 - 1;
      if ( v71 )
      {
        v72 = ((_QWORD)v113 == 0) + (_QWORD)v113 - 1LL;
        v73 = v71 + ((_QWORD)v113 == 0) + (_QWORD)v113;
        if ( *((_QWORD *)&v113 + 1) < v73 )
        {
          v95 = v71 + ((_QWORD)v113 == 0) + (_QWORD)v113;
          v112 = (char *)qvector_reserve((__int64)&v112, (__int64)v112, v73, 1);
          v73 = v95;
        }
        *(_QWORD *)&v113 = v73;
        v112[v71 + v72] = 0;
        memcpy(&v112[v72], *v69, v71);
      }
    }
    goto LABEL_98;
  }
  sub_159B40(a3, *(_QWORD *)(*(_QWORD *)a1 + 1504LL), a2, a3, 0);
  v79 = v97.m128i_i64[1];
  *(_DWORD *)a3 = 55;
  v80 = **(_DWORD **)(v79 + 24);
  sub_11CDA0(v103);
  *(_BYTE *)(a3 + 32) = 7;
  *(_DWORD *)(a3 + 40) = v80;
  sub_11CDA0(a3 + 48);
  v81 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 76) = 3;
  BYTE1(v81) &= ~2u;
  LOBYTE(v81) = v81 | 0x80;
  *(_DWORD *)(a2 + 24) = v81;
  v112 = nullptr;
  v113 = 0;
LABEL_100:
  v75 = (char *)qvector_reserve((__int64)&v112, 0, 18, 1);
  v76 = _mm_load_si128((const __m128i *)&xmmword_424890);
  v112 = v75;
  *(_QWORD *)&v113 = 18;
  v75[17] = 0;
  v75[16] = 104;
  *(__m128i *)v75 = v76;
LABEL_98:
  v50 = 4;
  v51 = " was";
LABEL_60:
  v52 = v113;
  v53 = v50;
  if ( (_QWORD)v113 )
  {
    v52 = v113 - 1;
    v53 = v50 + v113 - 1;
  }
  v54 = v112;
  v55 = v53 + 1;
  if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v53 + 1) )
  {
    v112 = (char *)qvector_reserve((__int64)&v112, (__int64)v112, v55, 1);
    v55 = v53 + 1;
    v54 = v112;
  }
  *(_QWORD *)&v113 = v55;
  v54[v53] = 0;
  v56 = &v112[v52];
  *(_DWORD *)v56 = *(_DWORD *)v51;
  *(_DWORD *)&v56[(unsigned int)v50 - 4] = *(_DWORD *)&v51[(unsigned int)v50 - 4];
  v57 = *(_QWORD *)a1;
  v58 = *(_QWORD *)(*(_QWORD *)a1 + 784LL);
  if ( v58 )
  {
    *(_DWORD *)(v58 + 48) = 63;
    v57 = *(_QWORD *)a1;
  }
  v59 = s1;
  if ( v111 )
    LODWORD(v59) = v110;
  v60 = s1;
  if ( (_QWORD)v113 )
    LODWORD(v60) = (_DWORD)v112;
  sub_3311F0(v57, *(_QWORD *)(a3 + 24), 56, (_DWORD)v60, (_DWORD)v59, v44);
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    qfree((__int64)v112);
  }
  if ( v110 )
  {
    v111 = 0;
    qfree(v110);
  }
  v101 = v100;
LABEL_75:
  sub_312B80(p_src);
  v61 = v108;
  if ( v108 )
  {
    v62 = v109;
    if ( (_QWORD)v109 )
    {
      v63 = 0;
      do
      {
        v64 = (__int64 *)(v61 + 24 * v63);
        v65 = *v64;
        if ( *v64 )
        {
          v64[1] = 0;
          qfree(v65);
          v61 = v108;
        }
        ++v63;
      }
      while ( v62 != v63 );
    }
    *(_QWORD *)&v109 = 0;
    qfree(v61);
  }
  v100 = v101;
LABEL_83:
  sub_312B80(v116);
  return v100;
}
