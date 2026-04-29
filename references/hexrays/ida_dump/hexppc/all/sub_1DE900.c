__int64 __fastcall sub_1DE900(_BYTE *a1, __int64 a2, __int64 a3)
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
  __int64 *v17; // r14
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdi
  void **v25; // rcx
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 *v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rdx
  _DWORD *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rdx
  void *v38; // rbx
  __m128i v39; // xmm0
  __int64 v40; // rbp
  unsigned __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  char *v44; // rax
  int v45; // r9d
  __int64 v46; // rax
  size_t v47; // r13
  __int64 v48; // rbp
  __int64 v49; // r15
  unsigned __int64 v50; // r14
  __int64 v51; // r13
  const char *v52; // r14
  __int64 v53; // rbp
  __int64 v54; // r15
  char *v55; // rsi
  __int64 v56; // rdx
  char *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rax
  const char *v60; // r8
  const char *v61; // rcx
  unsigned __int64 v62; // rbp
  __int64 v63; // r12
  __int64 v64; // rbx
  __int64 *v65; // rax
  __int64 v66; // rdi
  __m128i v67; // xmm0
  void *v68; // rdx
  unsigned __int64 v69; // rax
  const void **v70; // r14
  __int64 v71; // r13
  size_t v72; // r13
  __int64 v73; // rbp
  size_t v74; // rdx
  int v75; // eax
  char *v76; // rax
  __m128i v77; // xmm0
  __m128i v78; // xmm0
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  int v81; // ebx
  int v82; // eax
  const char *v83; // rbx
  char *v84; // rax
  __m128i si128; // xmm0
  _QWORD *v86; // rbp
  __int64 v87; // rdi
  __int64 v88; // r13
  __int64 *v89; // rbp
  __int64 v90; // rax
  __int64 v91; // rsi
  __int64 *v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rax
  size_t v96; // [rsp+10h] [rbp-198h]
  __m128i v98; // [rsp+20h] [rbp-188h] BYREF
  void **p_src; // [rsp+30h] [rbp-178h]
  unsigned __int64 v100; // [rsp+38h] [rbp-170h]
  unsigned __int8 v101; // [rsp+42h] [rbp-166h]
  unsigned __int8 v102; // [rsp+43h] [rbp-165h]
  int v103; // [rsp+44h] [rbp-164h]
  __int64 v104; // [rsp+48h] [rbp-160h]
  __m128i v105; // [rsp+50h] [rbp-158h] BYREF
  int v106; // [rsp+6Ch] [rbp-13Ch] BYREF
  __int64 v107; // [rsp+70h] [rbp-138h] BYREF
  char v108; // [rsp+78h] [rbp-130h]
  unsigned __int64 v109; // [rsp+80h] [rbp-128h] BYREF
  __int128 v110; // [rsp+88h] [rbp-120h]
  __int64 v111; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v112; // [rsp+A8h] [rbp-100h]
  char *v113; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v114; // [rsp+C8h] [rbp-E0h]
  void *src; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i v116; // [rsp+E8h] [rbp-C0h] BYREF
  _DWORD v117[2]; // [rsp+100h] [rbp-A8h] BYREF
  __int128 v118; // [rsp+108h] [rbp-A0h]
  __int64 v119; // [rsp+118h] [rbp-90h]
  _BYTE v120[32]; // [rsp+120h] [rbp-88h] BYREF
  _DWORD v121[2]; // [rsp+140h] [rbp-68h] BYREF
  __int128 v122; // [rsp+148h] [rbp-60h]
  __int64 v123; // [rsp+158h] [rbp-50h]
  unsigned __int64 v124; // [rsp+168h] [rbp-40h]

  v124 = __readfsqword(0x28u);
  v3 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1496LL) + 728LL) & 1) == 0 )
    return 0;
  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 480) + 760LL);
  if ( v4 <= 0 )
    return 0;
  v102 = a1[24];
  if ( v102 )
    return 0;
  v6 = *(_QWORD *)(v3 + 1504);
  v108 = 0;
  v107 = 0;
  v104 = a3 + 32;
  if ( !(unsigned __int8)sub_1DC2B0((__int64)&v107, v6, &v106, a3 + 32) )
    return 0;
  v9 = *(__int64 **)(a3 + 56);
  v10 = v9[1];
  v11 = *v9;
  v98.m128i_i64[1] = (__int64)v9;
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
  v15 = v106;
  v117[0] = 0;
  v119 = 0;
  v117[1] = v106;
  v118 = 0;
  v101 = sub_1DC500((_DWORD)a1, (unsigned int)v117, (unsigned int)&v107, 0, v7, v8);
  if ( !v101 )
    goto LABEL_83;
  if ( v117[0] == 8 )
  {
    v101 = 0;
    goto LABEL_83;
  }
  v109 = 0;
  v110 = 0;
  v100 = *(_QWORD *)(v98.m128i_i64[1] + 32);
  if ( !v100 )
  {
    p_src = (void **)v120;
    sub_30EAC0(v120, v117);
    goto LABEL_90;
  }
  v103 = -1;
  v16 = 0;
  v98.m128i_i64[0] = ~(-1LL << (8 * (unsigned __int8)v15));
  while ( 2 )
  {
    v17 = (__int64 *)(*(_QWORD *)v98.m128i_i64[1] + 24 * v16);
    if ( !v17[1] )
    {
      v103 = v16++;
      goto LABEL_16;
    }
    v18 = 0;
    do
    {
      while ( 1 )
      {
        v20 = v98.m128i_i64[0] & *(_QWORD *)(*v17 + 8 * v18);
        if ( v15 == 8 )
          v20 = *(_QWORD *)(*v17 + 8 * v18);
        if ( !(unsigned __int8)sub_311710(v117, v20) )
          break;
        ++v18;
LABEL_20:
        v19 = v17[1];
        if ( v18 >= v19 )
          goto LABEL_31;
      }
      src = nullptr;
      v116 = 0;
      v21 = *v17;
      p_src = &src;
      sub_67E30((__int64 *)&src, (__int64)"%lld", *(_QWORD *)(v21 + 8 * v18));
      v22 = v110;
      v23 = v109;
      v24 = v110 + 1;
      if ( (unsigned __int64)&src < v109 || (unsigned __int64)p_src >= v109 + 24LL * *((_QWORD *)&v110 + 1) )
      {
        if ( *((_QWORD *)&v110 + 1) < v24 )
        {
          v109 = qvector_reserve(&v109, v109, v110 + 1, 24);
          v23 = v109;
          v22 = v110;
        }
        v67 = _mm_loadu_si128(&v116);
        v68 = src;
        src = nullptr;
        v69 = v23 + 24 * v22;
        *(__m128i *)(v69 + 8) = v67;
        *(_QWORD *)v69 = v68;
        v116 = 0;
      }
      else
      {
        v25 = (void **)src;
        v26 = _mm_loadl_epi64(&v116);
        src = nullptr;
        v27 = _mm_loadl_epi64((const __m128i *)&v116.m128i_u64[1]);
        v116 = 0;
        p_src = v25;
        if ( *((_QWORD *)&v110 + 1) < v24 )
        {
          v105.m128i_i64[1] = v27.m128i_i64[0];
          v105.m128i_i64[0] = v26.m128i_i64[0];
          v109 = qvector_reserve(&v109, v109, v110 + 1, 24);
          v23 = v109;
          v27 = _mm_loadl_epi64((const __m128i *)&v105.m128i_u64[1]);
          v22 = v110;
          v26 = _mm_loadl_epi64(&v105);
        }
        v28 = v23 + 24 * v22;
        *(_QWORD *)v28 = p_src;
        *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64(v26, v27);
      }
      *(_QWORD *)&v110 = v110 + 1;
      memmove((void *)(8 * v18 + *v17), (const void *)(8 * v18 + *v17 + 8), 8 * v17[1]-- - 8 - 8 * v18);
      if ( !src )
        goto LABEL_20;
      v116.m128i_i64[0] = 0;
      qfree(src);
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
      sub_11EA00((__int64 *)v98.m128i_i64[1], a2, v16);
      --v100;
    }
LABEL_16:
    if ( v16 < v100 )
      continue;
    break;
  }
  p_src = (void **)v120;
  sub_30EAC0(v120, v117);
  if ( v103 != -1 )
  {
    v29 = *(_QWORD *)(v98.m128i_i64[1] + 8);
    goto LABEL_35;
  }
LABEL_90:
  v29 = *(_QWORD *)(v98.m128i_i64[1] + 8);
  if ( v29 == 1 )
  {
    v103 = -1;
LABEL_35:
    v30 = *(_QWORD *)v98.m128i_i64[1];
    for ( v98.m128i_i64[0] = *(_QWORD *)v98.m128i_i64[1] + 24 * v29; v98.m128i_i64[0] != v30; v30 += 24 )
    {
      v31 = *(__int64 **)v30;
      v32 = *(_QWORD *)v30 + 8LL * *(_QWORD *)(v30 + 8);
      if ( v32 != *(_QWORD *)v30 )
      {
        do
        {
          v33 = *v31;
          v121[0] = 0;
          v121[1] = v15;
          v123 = 0;
          v122 = 0;
          sub_30F080(v121, 0, v33);
          sub_310630(v117, v121);
          ++v31;
          sub_30EA00(v121);
        }
        while ( (__int64 *)v32 != v31 );
      }
    }
    if ( !v117[0] )
    {
      if ( v103 != -1 )
      {
        sub_11EA00((__int64 *)v98.m128i_i64[1], a2, v103);
        v116 = 0;
        v98.m128i_i64[0] = (__int64)&src;
        src = nullptr;
        v34 = (_DWORD *)qvector_reserve(&src, 0, 8, 1);
        src = v34;
        v116.m128i_i64[0] = 8;
        *v34 = 1634100580;
        *(_DWORD *)((char *)v34 + 3) = 1953264993;
        *((_BYTE *)src + 7) = 0;
        v35 = v110;
        v36 = v109;
        v37 = v110 + 1;
        if ( (unsigned __int64)&src < v109 || (unsigned __int64)&src >= v109 + 24LL * *((_QWORD *)&v110 + 1) )
        {
          if ( *((_QWORD *)&v110 + 1) < v37 )
          {
            v109 = qvector_reserve(&v109, v109, v37, 24);
            v36 = v109;
            v35 = v110;
          }
          v78 = _mm_loadu_si128(&v116);
          v79 = v36 + 24 * v35;
          *(_QWORD *)v79 = src;
          *(__m128i *)(v79 + 8) = v78;
          *(_QWORD *)&v110 = v110 + 1;
        }
        else
        {
          v38 = src;
          v39 = _mm_loadl_epi64(&v116);
          src = nullptr;
          v40 = v116.m128i_i64[1];
          v116 = 0;
          if ( *((_QWORD *)&v110 + 1) < v37 )
          {
            v98.m128i_i64[0] = v39.m128i_i64[0];
            v109 = qvector_reserve(&v109, v109, v37, 24);
            v36 = v109;
            v39 = _mm_loadl_epi64(&v98);
            v35 = v110;
          }
          v41 = v36 + 24 * v35;
          *(_QWORD *)v41 = v38;
          *(__m128i *)(v41 + 8) = _mm_unpacklo_epi64(v39, (__m128i)(unsigned __int64)v40);
          *(_QWORD *)&v110 = v110 + 1;
          if ( src )
          {
            v116.m128i_i64[0] = 0;
            qfree(src);
          }
        }
      }
      v42 = *(_QWORD *)(v98.m128i_i64[1] + 8);
      if ( v42 == 1 )
      {
        v86 = *(_QWORD **)v98.m128i_i64[1];
        v87 = **(_QWORD **)v98.m128i_i64[1];
        if ( v87 )
        {
          v86[1] = 0;
          qfree(v87);
          *v86 = 0;
          v86[2] = 0;
        }
        v88 = v110;
        v89 = (__int64 *)v109;
        if ( (_QWORD)v110 != 1 )
        {
          v90 = v109;
          src = nullptr;
          v116 = 0;
          if ( (unsigned __int64)v110 > 1 )
          {
            do
            {
              v92 = &v89[3 * v42];
              v93 = *v92;
              if ( *v92 )
              {
                v92[1] = 0;
                qfree(v93);
                v89 = (__int64 *)v109;
              }
              ++v42;
            }
            while ( v88 != v42 );
          }
          else if ( *((_QWORD *)&v110 + 1)
                 || (v90 = qvector_reserve(&v109, v109, 1, 24), v109 = v90, v89 = (__int64 *)v90, !(_QWORD)v110) )
          {
            *(_QWORD *)v90 = 0;
            *(_OWORD *)(v90 + 8) = 0;
            v89 = (__int64 *)v109;
          }
          *(_QWORD *)&v110 = 1;
        }
        v91 = *v89;
        if ( (unsigned __int64)v89[2] <= 3 )
        {
          v94 = qvector_reserve(v89, v91, 4, 1);
          *v89 = v94;
          v91 = v94;
        }
        v89[1] = 4;
        *(_WORD *)v91 = 27745;
        *(_BYTE *)(v91 + 2) = 108;
        *(_BYTE *)(*v89 + 3) = 0;
      }
    }
  }
  if ( !(_QWORD)v110 )
    goto LABEL_75;
  sub_312530(&v111, p_src, v104);
  v43 = *(_QWORD *)(v98.m128i_i64[1] + 32);
  if ( !v43 )
  {
    sub_156100(a3, *(_QWORD *)(*(_QWORD *)a1 + 1504LL), a2, a3, 0);
    sub_119B60(a3);
    v75 = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 76) = 2;
    BYTE1(v75) &= ~2u;
    LOBYTE(v75) = v75 | 0x80;
    *(_DWORD *)(a2 + 24) = v75;
    v113 = nullptr;
    v114 = 0;
    goto LABEL_100;
  }
  if ( v43 != 1 || *(_QWORD *)(*(_QWORD *)v98.m128i_i64[1] + 8LL) )
  {
    v113 = nullptr;
    v114 = 0;
    if ( (_QWORD)v110 != 1 )
    {
      v44 = (char *)qvector_reserve(&v113, 0, 11, 1);
      *(_QWORD *)&v114 = 11;
      v113 = v44;
      strcpy(v44, "the cases ");
      sub_1DB900((__int64 *)&src, (__int64 *)&v109, ", ");
      if ( v116.m128i_i64[0] )
      {
        v46 = v116.m128i_i64[0] - 1;
        v47 = v116.m128i_i64[0] - 1;
        if ( v116.m128i_i64[0] != 1 )
        {
          v48 = ((_QWORD)v114 == 0) + (_QWORD)v114 - 1LL;
          v49 = v46 + v48;
          v50 = v46 + ((_QWORD)v114 == 0) + (_QWORD)v114;
          if ( *((_QWORD *)&v114 + 1) < v50 )
            v113 = (char *)qvector_reserve(&v113, v113, v46 + ((_QWORD)v114 == 0) + (_QWORD)v114, 1);
          *(_QWORD *)&v114 = v50;
          v113[v49] = 0;
          memcpy(&v113[v48], src, v47);
        }
      }
      if ( src )
      {
        v116.m128i_i64[0] = 0;
        qfree(src);
      }
      goto LABEL_59;
    }
    if ( *(_QWORD *)(v109 + 8) )
    {
      v83 = *(const char **)v109;
      if ( !strcmp(*(const char **)v109, "all") )
      {
        v113 = (char *)qvector_reserve(&v113, 0, 14, 1);
        *(_QWORD *)&v114 = 14;
        strcpy(v113, "the all cases");
LABEL_59:
        v51 = 5;
        v52 = " were";
        goto LABEL_60;
      }
      if ( !strcmp(v83, "default") )
      {
        v84 = (char *)qvector_reserve(&v113, 0, 17, 1);
        si128 = _mm_load_si128((const __m128i *)&xmmword_411CA0);
        v113 = v84;
        *(_QWORD *)&v114 = 17;
        v84[16] = 0;
        *(__m128i *)v84 = si128;
        goto LABEL_98;
      }
    }
    v113 = (char *)qvector_reserve(&v113, 0, 10, 1);
    *(_QWORD *)&v114 = 10;
    strcpy(v113, "the case ");
    v70 = (const void **)v109;
    v71 = *(_QWORD *)(v109 + 8);
    if ( v71 )
    {
      v72 = v71 - 1;
      if ( v72 )
      {
        v73 = ((_QWORD)v114 == 0) + (_QWORD)v114 - 1LL;
        v74 = v72 + ((_QWORD)v114 == 0) + (_QWORD)v114;
        if ( *((_QWORD *)&v114 + 1) < v74 )
        {
          v96 = v72 + ((_QWORD)v114 == 0) + (_QWORD)v114;
          v113 = (char *)qvector_reserve(&v113, v113, v74, 1);
          v74 = v96;
        }
        *(_QWORD *)&v114 = v74;
        v113[v72 + v73] = 0;
        memcpy(&v113[v73], *v70, v72);
      }
    }
    goto LABEL_98;
  }
  sub_156100(a3, *(_QWORD *)(*(_QWORD *)a1 + 1504LL), a2, a3, 0);
  v80 = v98.m128i_i64[1];
  *(_DWORD *)a3 = 55;
  v81 = **(_DWORD **)(v80 + 24);
  sub_119360(v104);
  *(_BYTE *)(a3 + 32) = 7;
  *(_DWORD *)(a3 + 40) = v81;
  sub_119360(a3 + 48);
  v82 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 76) = 3;
  BYTE1(v82) &= ~2u;
  LOBYTE(v82) = v82 | 0x80;
  *(_DWORD *)(a2 + 24) = v82;
  v113 = nullptr;
  v114 = 0;
LABEL_100:
  v76 = (char *)qvector_reserve(&v113, 0, 18, 1);
  v77 = _mm_load_si128((const __m128i *)&xmmword_411C90);
  v113 = v76;
  *(_QWORD *)&v114 = 18;
  v76[17] = 0;
  v76[16] = 104;
  *(__m128i *)v76 = v77;
LABEL_98:
  v51 = 4;
  v52 = " was";
LABEL_60:
  v53 = v114;
  v54 = v51;
  if ( (_QWORD)v114 )
  {
    v53 = v114 - 1;
    v54 = v51 + v114 - 1;
  }
  v55 = v113;
  v56 = v54 + 1;
  if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)(v54 + 1) )
  {
    v113 = (char *)qvector_reserve(&v113, v113, v56, 1);
    v56 = v54 + 1;
    v55 = v113;
  }
  *(_QWORD *)&v114 = v56;
  v55[v54] = 0;
  v57 = &v113[v53];
  *(_DWORD *)v57 = *(_DWORD *)v52;
  *(_DWORD *)&v57[(unsigned int)v51 - 4] = *(_DWORD *)&v52[(unsigned int)v51 - 4];
  v58 = *(_QWORD *)a1;
  v59 = *(_QWORD *)(*(_QWORD *)a1 + 784LL);
  if ( v59 )
  {
    *(_DWORD *)(v59 + 48) = 63;
    v58 = *(_QWORD *)a1;
  }
  v60 = s1;
  if ( v112 )
    LODWORD(v60) = v111;
  v61 = s1;
  if ( (_QWORD)v114 )
    LODWORD(v61) = (_DWORD)v113;
  sub_32CD90(v58, *(_QWORD *)(a3 + 24), 56, (_DWORD)v61, (_DWORD)v60, v45);
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    qfree(v113);
  }
  if ( v111 )
  {
    v112 = 0;
    qfree(v111);
  }
  v102 = v101;
LABEL_75:
  sub_30EA00(p_src);
  v62 = v109;
  if ( v109 )
  {
    v63 = v110;
    if ( (_QWORD)v110 )
    {
      v64 = 0;
      do
      {
        v65 = (__int64 *)(v62 + 24 * v64);
        v66 = *v65;
        if ( *v65 )
        {
          v65[1] = 0;
          qfree(v66);
          v62 = v109;
        }
        ++v64;
      }
      while ( v63 != v64 );
    }
    *(_QWORD *)&v110 = 0;
    qfree(v62);
  }
  v101 = v102;
LABEL_83:
  sub_30EA00(v117);
  return v101;
}
