__int64 __fastcall sub_6B6250(__int64 **a1)
{
  __int64 **v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // r8
  __int64 *v4; // rax
  void **v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 *v9; // rax
  void *idati; // rax
  __int64 numbered_type_name; // r12
  unsigned __int64 tinfo_tid; // r12
  __int64 v13; // rax
  _QWORD *v14; // rsi
  char *v15; // r13
  char *v16; // r12
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // rsi
  char *v20; // rdi
  __int64 v21; // r14
  __int64 v22; // r13
  char *v23; // r12
  void *v24; // rdi
  void *v25; // rdi
  _QWORD *v26; // r12
  void *v27; // rdi
  char *v28; // rdx
  __int64 v29; // r13
  __int64 v30; // r12
  char *v31; // rax
  void *v32; // rdi
  __int64 v33; // rbp
  unsigned int v34; // eax
  unsigned __int64 *v35; // rax
  __int64 *v36; // r14
  __int64 *v37; // rbp
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbp
  _QWORD *v42; // rsi
  __int64 *v43; // rbp
  __int64 v44; // rax
  __int64 *v45; // rdi
  unsigned __int64 j; // rbp
  const char *v47; // rsi
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r14
  __int64 v50; // rax
  _QWORD *v51; // rsi
  const char *v52; // rsi
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbp
  _QWORD *v56; // rsi
  __int64 v57; // rcx
  unsigned int v58; // ebp
  unsigned int v59; // r13d
  __int64 v60; // r12
  unsigned __int64 v61; // rbp
  char *v62; // rdi
  __int64 v63; // r13
  __int64 v64; // r12
  char *v65; // rbx
  void *v66; // rdi
  void *v67; // rdi
  char *v69; // rdi
  __int64 v70; // r14
  __int64 v71; // rbx
  __int64 v72; // r13
  char *v73; // r12
  void *v74; // rdi
  void *v75; // rdi
  __int64 v76; // rax
  unsigned int v77; // edi
  _DWORD *v78; // rsi
  unsigned __int64 v79; // rdx
  char *v80; // rdi
  __int64 v81; // r14
  __int64 i; // rbx
  char *v83; // r12
  void *v84; // rdi
  void *v85; // rdi
  _QWORD *v86; // r12
  void *v87; // rdi
  char *v88; // rdx
  __int64 v89; // r12
  __int64 v90; // r13
  char *v91; // rax
  void *v92; // rdi
  __int64 v93; // rax
  unsigned int v94; // edi
  _DWORD *v95; // rsi
  unsigned __int64 v96; // rdx
  char *v97; // rdi
  __int64 v98; // r13
  __int64 v99; // rbp
  __int64 **v100; // r14
  __int64 v101; // rbx
  char *v102; // r12
  void *v103; // rdi
  void *v104; // rdi
  unsigned __int64 v105; // [rsp+10h] [rbp-288h]
  unsigned __int64 v106; // [rsp+20h] [rbp-278h]
  unsigned int v107; // [rsp+34h] [rbp-264h]
  __int64 **v108; // [rsp+50h] [rbp-248h]
  __int64 **v109; // [rsp+50h] [rbp-248h]
  unsigned int v110; // [rsp+50h] [rbp-248h]
  unsigned __int64 v111; // [rsp+68h] [rbp-230h] BYREF
  void *v112; // [rsp+70h] [rbp-228h] BYREF
  __int128 v113; // [rsp+78h] [rbp-220h]
  void *v114; // [rsp+90h] [rbp-208h] BYREF
  __int128 v115; // [rsp+98h] [rbp-200h]
  void *v116; // [rsp+B0h] [rbp-1E8h] BYREF
  __int128 v117; // [rsp+B8h] [rbp-1E0h]
  __int64 v118; // [rsp+D0h] [rbp-1C8h] BYREF
  int v119; // [rsp+D8h] [rbp-1C0h] BYREF
  _QWORD *v120; // [rsp+E0h] [rbp-1B8h]
  int *v121; // [rsp+E8h] [rbp-1B0h]
  int *v122; // [rsp+F0h] [rbp-1A8h]
  __int64 v123; // [rsp+F8h] [rbp-1A0h]
  void *v124; // [rsp+100h] [rbp-198h] BYREF
  __int128 v125; // [rsp+108h] [rbp-190h]
  __int128 v126; // [rsp+118h] [rbp-180h]
  __int64 v127; // [rsp+128h] [rbp-170h]
  int v128; // [rsp+130h] [rbp-168h]
  void *v129; // [rsp+140h] [rbp-158h] BYREF
  __int128 v130; // [rsp+148h] [rbp-150h]
  void *v131; // [rsp+158h] [rbp-140h]
  __int128 v132; // [rsp+160h] [rbp-138h]
  int v133; // [rsp+170h] [rbp-128h]
  char v134; // [rsp+174h] [rbp-124h]
  _BYTE ptr[24]; // [rsp+180h] [rbp-118h] BYREF
  __int64 v136; // [rsp+198h] [rbp-100h]
  __int16 v137; // [rsp+1A0h] [rbp-F8h]
  char v138; // [rsp+1A2h] [rbp-F6h]
  void *v139; // [rsp+1A8h] [rbp-F0h]
  __int128 v140; // [rsp+1B0h] [rbp-E8h]
  void *s; // [rsp+1C0h] [rbp-D8h]
  __int64 v142; // [rsp+1C8h] [rbp-D0h]
  void *v143; // [rsp+1D0h] [rbp-C8h]
  __int64 v144; // [rsp+1D8h] [rbp-C0h]
  int v145; // [rsp+1E0h] [rbp-B8h]
  __int64 v146; // [rsp+1E8h] [rbp-B0h]
  void *v147[2]; // [rsp+1F0h] [rbp-A8h] BYREF
  __int128 v148; // [rsp+200h] [rbp-98h]
  void *v149; // [rsp+210h] [rbp-88h]
  __int128 v150; // [rsp+218h] [rbp-80h]
  _QWORD v151[2]; // [rsp+230h] [rbp-68h] BYREF
  __m128i v152; // [rsp+240h] [rbp-58h]
  unsigned __int64 v153; // [rsp+258h] [rbp-40h]

  v153 = __readfsqword(0x28u);
  v1 = a1;
  v119 = 0;
  v121 = &v119;
  v122 = &v119;
  v151[1] = &v118;
  v2 = *a1;
  v151[0] = a1;
  v120 = nullptr;
  v123 = 0;
  v152 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B37C70), (__m128i)(unsigned __int64)sub_6B3C00);
  sub_7BB110(*v2, "$$ ", v151);
  if ( v152.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v152.m128i_i64[0])(v151, v151, 3);
  v4 = *a1;
  *(_OWORD *)ptr = 0;
  sub_630CA0(*v4, 26, ptr, 0x10u, v3);
  v5 = (void **)*a1;
  v127 = 0;
  v113 = 0;
  v6 = *(_QWORD *)ptr;
  v128 = 1;
  v115 = 0;
  v125 = 0;
  v126 = 0;
  v7 = (__int64)v5[1];
  v106 = *(_QWORD *)&ptr[8];
  v112 = nullptr;
  v114 = nullptr;
  v124 = nullptr;
  v107 = sub_64E0C0((__int64)v5, v7);
  if ( v107 > 1 )
  {
    v8 = 1;
    while ( 1 )
    {
      v116 = nullptr;
      v137 = 0;
      memset(ptr, 0, sizeof(ptr));
      s = v147;
      v9 = *v1;
      v136 = -1;
      v138 = 0;
      v139 = nullptr;
      v142 = 1;
      v143 = nullptr;
      v144 = 0;
      v145 = 1065353216;
      v146 = 0;
      v149 = nullptr;
      v140 = 0;
      *(_OWORD *)v147 = 0;
      v148 = 0;
      v150 = 0;
      idati = (void *)v9[1];
      WORD4(v130) = 257;
      *(_QWORD *)&v130 = v8;
      if ( !idati )
        idati = (void *)get_idati(v5, v7);
      v129 = idati;
      if ( !(unsigned __int8)create_tinfo(&v116, 61, 189, &v129) )
        goto LABEL_26;
      numbered_type_name = get_numbered_type_name((*v1)[1], v8);
      if ( get_tinfo_property(v116, 288) )
        goto LABEL_9;
      if ( (get_tinfo_property(v116, 2) & 0x2F) != 0xD )
        break;
      if ( !(unsigned __int8)get_tinfo_details(v116, 141, &v124) )
      {
        v76 = v115;
        LODWORD(v129) = v8;
        v77 = v8;
        v78 = v114;
        v79 = v115 + 1;
        if ( &v129 < v114 || &v129 >= (void **)((char *)v114 + 4 * *((_QWORD *)&v115 + 1)) )
        {
          if ( *((_QWORD *)&v115 + 1) < v79 )
          {
            v114 = (void *)qvector_reserve(&v114, v114, v79, 4);
            v78 = v114;
            v76 = v115;
            v77 = (unsigned int)v129;
          }
          v78[v76] = v77;
        }
        else
        {
          if ( *((_QWORD *)&v115 + 1) < v79 )
          {
            v114 = (void *)qvector_reserve(&v114, v114, v79, 4);
            v78 = v114;
            v76 = v115;
          }
          v78[v76] = v8;
        }
        *(_QWORD *)&v115 = v115 + 1;
LABEL_141:
        v80 = (char *)v149;
        if ( v149 )
        {
          if ( (_QWORD)v150 )
          {
            v109 = v1;
            v81 = v150;
            for ( i = 0; i != v81; ++i )
            {
              v83 = &v80[144 * i];
              clear_tinfo_t(v83 + 64);
              v84 = *((void **)v83 + 5);
              if ( v84 )
              {
                *((_QWORD *)v83 + 6) = 0;
                qfree(v84);
              }
              v85 = *((void **)v83 + 2);
              if ( v85 )
              {
                *((_QWORD *)v83 + 3) = 0;
                qfree(v85);
              }
              v80 = (char *)v149;
            }
            v1 = v109;
          }
          *(_QWORD *)&v150 = 0;
          qfree(v80);
        }
        if ( v147[1] )
        {
          *(_QWORD *)&v148 = 0;
          qfree(v147[1]);
        }
        v86 = v143;
        if ( v143 )
        {
          do
          {
            v87 = v86;
            v86 = (_QWORD *)*v86;
            operator delete(v87, 0x20u);
          }
          while ( v86 );
        }
        v7 = 0;
        memset(s, 0, 8 * v142);
        v144 = 0;
        v143 = nullptr;
        if ( s != v147 )
        {
          v7 = 8 * v142;
          operator delete(s, 8 * v142);
        }
        v88 = (char *)v139;
        if ( v139 )
        {
          v89 = v140;
          if ( (_QWORD)v140 )
          {
            v90 = 0;
            do
            {
              v91 = &v88[32 * v90];
              v92 = *(void **)v91;
              if ( *(_QWORD *)v91 )
              {
                *((_QWORD *)v91 + 1) = 0;
                qfree(v92);
                v88 = (char *)v139;
              }
              ++v90;
            }
            while ( v89 != v90 );
          }
          *(_QWORD *)&v140 = 0;
          qfree(v88);
        }
        if ( *(_QWORD *)ptr )
        {
          *(_QWORD *)&ptr[8] = 0;
          qfree(*(void **)ptr);
        }
        goto LABEL_50;
      }
      sub_6C1860(ptr, *v1, numbered_type_name, &v124, 1);
      tinfo_tid = v136;
      if ( v136 != -1 )
      {
LABEL_10:
        if ( tinfo_tid < v6 || tinfo_tid >= v106 )
        {
          v13 = v113;
          v14 = v112;
          if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v113 + 1) )
          {
            v112 = (void *)qvector_reserve(&v112, v112, v113 + 1, 8);
            v14 = v112;
            v13 = v113;
          }
          v14[v13] = tinfo_tid;
          *(_QWORD *)&v113 = v113 + 1;
        }
        sub_6B3F60(&v118, tinfo_tid);
        goto LABEL_16;
      }
LABEL_83:
      tinfo_tid = get_tinfo_tid(&v116, 0);
      if ( tinfo_tid != -1 )
        goto LABEL_10;
LABEL_16:
      v15 = (char *)v139;
      v16 = (char *)v139 + 32 * v140;
      if ( v139 != v16 )
      {
        do
        {
          v17 = *((_QWORD *)v15 + 3);
          if ( v17 != -1 )
          {
            if ( v17 < v6 || v17 >= v106 )
            {
              v18 = v113;
              v19 = v112;
              if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v113 + 1) )
              {
                v112 = (void *)qvector_reserve(&v112, v112, v113 + 1, 8);
                v19 = v112;
                v18 = v113;
              }
              v19[v18] = v17;
              *(_QWORD *)&v113 = v113 + 1;
            }
            sub_6B3F60(&v118, v17);
          }
          v15 += 32;
        }
        while ( v16 != v15 );
      }
LABEL_26:
      v20 = (char *)v149;
      if ( v149 )
      {
        v21 = v150;
        if ( (_QWORD)v150 )
        {
          v22 = 0;
          do
          {
            v23 = &v20[144 * v22];
            clear_tinfo_t(v23 + 64);
            v24 = *((void **)v23 + 5);
            if ( v24 )
            {
              *((_QWORD *)v23 + 6) = 0;
              qfree(v24);
            }
            v25 = *((void **)v23 + 2);
            if ( v25 )
            {
              *((_QWORD *)v23 + 3) = 0;
              qfree(v25);
            }
            ++v22;
            v20 = (char *)v149;
          }
          while ( v21 != v22 );
        }
        *(_QWORD *)&v150 = 0;
        qfree(v20);
      }
      if ( v147[1] )
      {
        *(_QWORD *)&v148 = 0;
        qfree(v147[1]);
      }
      v26 = v143;
      if ( v143 )
      {
        do
        {
          v27 = v26;
          v26 = (_QWORD *)*v26;
          operator delete(v27, 0x20u);
        }
        while ( v26 );
      }
      memset(s, 0, 8 * v142);
      v144 = 0;
      v143 = nullptr;
      v7 = v142;
      if ( s != v147 )
      {
        v7 = 8 * v142;
        operator delete(s, 8 * v142);
      }
      v28 = (char *)v139;
      if ( v139 )
      {
        v29 = v140;
        if ( (_QWORD)v140 )
        {
          v30 = 0;
          do
          {
            v31 = &v28[32 * v30];
            v32 = *(void **)v31;
            if ( *(_QWORD *)v31 )
            {
              *((_QWORD *)v31 + 1) = 0;
              qfree(v32);
              v28 = (char *)v139;
            }
            ++v30;
          }
          while ( v29 != v30 );
        }
        *(_QWORD *)&v140 = 0;
        qfree(v28);
      }
      if ( *(_QWORD *)ptr )
      {
        *(_QWORD *)&ptr[8] = 0;
        qfree(*(void **)ptr);
      }
LABEL_50:
      v5 = &v116;
      clear_tinfo_t(&v116);
      if ( v107 == ++v8 )
        goto LABEL_51;
    }
    if ( (get_tinfo_property(v116, 2) & 0x3F) == 0x2D )
    {
      v129 = nullptr;
      v131 = nullptr;
      v133 = 0;
      v134 = 0x80;
      v130 = 0;
      v132 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v116, 45, &v129) )
      {
        v93 = v115;
        LODWORD(v111) = v8;
        v94 = v8;
        v95 = v114;
        v96 = v115 + 1;
        if ( &v111 < v114 || &v111 >= (unsigned __int64 *)((char *)v114 + 4 * *((_QWORD *)&v115 + 1)) )
        {
          if ( *((_QWORD *)&v115 + 1) < v96 )
          {
            v114 = (void *)qvector_reserve(&v114, v114, v96, 4);
            v95 = v114;
            v94 = v111;
            v93 = v115;
          }
          v95[v93] = v94;
        }
        else
        {
          if ( *((_QWORD *)&v115 + 1) < v96 )
          {
            v114 = (void *)qvector_reserve(&v114, v114, v96, 4);
            v95 = v114;
            v93 = v115;
          }
          v95[v93] = v8;
        }
        *(_QWORD *)&v115 = v115 + 1;
        if ( v131 )
        {
          *(_QWORD *)&v132 = 0;
          qfree(v131);
        }
        v97 = (char *)v129;
        if ( v129 )
        {
          if ( (_QWORD)v130 )
          {
            v98 = 0;
            v110 = v8;
            v99 = 0;
            v100 = v1;
            v101 = v130;
            do
            {
              v102 = &v97[v99];
              v103 = *(void **)&v97[v99 + 24];
              if ( v103 )
              {
                *((_QWORD *)v102 + 4) = 0;
                qfree(v103);
              }
              v104 = *(void **)v102;
              if ( *(_QWORD *)v102 )
              {
                *((_QWORD *)v102 + 1) = 0;
                qfree(v104);
              }
              ++v98;
              v97 = (char *)v129;
              v99 += 56;
            }
            while ( v101 != v98 );
            v8 = v110;
            v1 = v100;
          }
          *(_QWORD *)&v130 = 0;
          qfree(v97);
        }
        goto LABEL_141;
      }
      sub_6B9D10(ptr, *v1, numbered_type_name, &v129, 1);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      v69 = (char *)v129;
      if ( v129 )
      {
        v70 = v130;
        if ( (_QWORD)v130 )
        {
          v108 = v1;
          v71 = 0;
          v72 = 0;
          do
          {
            v73 = &v69[v71];
            v74 = *(void **)&v69[v71 + 24];
            if ( v74 )
            {
              *((_QWORD *)v73 + 4) = 0;
              qfree(v74);
            }
            v75 = *(void **)v73;
            if ( *(_QWORD *)v73 )
            {
              *((_QWORD *)v73 + 1) = 0;
              qfree(v75);
            }
            ++v72;
            v69 = (char *)v129;
            v71 += 56;
          }
          while ( v70 != v72 );
          v1 = v108;
        }
        *(_QWORD *)&v130 = 0;
        qfree(v69);
      }
    }
LABEL_9:
    tinfo_tid = v136;
    if ( v136 != -1 )
      goto LABEL_10;
    goto LABEL_83;
  }
LABEL_51:
  v116 = nullptr;
  v129 = nullptr;
  v105 = -1;
  v117 = 0;
  v130 = 0;
  while ( 1 )
  {
    v33 = (__int64)(*v1 + 213);
    v34 = sub_505E30(v33, v105);
    v35 = sub_505DE0(v33, v34);
    v36 = (__int64 *)v35;
    if ( !v35 )
      break;
    v37 = *v1;
    v38 = *v35;
    v111 = 0;
    v105 = v38;
    v39 = sub_3BDD60(v37, *v36);
    if ( v39 == -1 || !(unsigned __int8)sub_54BE00(v37, &v111, v39) )
    {
      v43 = *v1;
      v44 = ea2node(*v36);
      if ( (unsigned __int8)sub_5373A0(v43, v44, nullptr, nullptr, nullptr) )
      {
        v54 = v130;
        v55 = *v36;
        v56 = v129;
        if ( *((_QWORD *)&v130 + 1) < (unsigned __int64)(v130 + 1) )
        {
          v129 = (void *)qvector_reserve(&v129, v129, v130 + 1, 8);
          v56 = v129;
          v54 = v130;
        }
        v56[v54] = v55;
        *(_QWORD *)&v130 = v130 + 1;
      }
LABEL_60:
      clear_tinfo_t(&v111);
    }
    else
    {
      if ( (unsigned __int8)get_tinfo_details(v111, 141, &v124) )
      {
        v45 = *v1;
        memset(ptr, 0, sizeof(ptr));
        sub_5BC010(v45, (char **)ptr, *v36);
        for ( j = 0; j < (unsigned __int64)v125; ++j )
        {
          v47 = haystack;
          if ( *(_QWORD *)&ptr[8] )
            v47 = *(const char **)ptr;
          v48 = sub_6BCE30(&v124, v47, j, 1);
          v49 = v48;
          if ( v48 != -1 )
          {
            if ( v48 < v6 || v48 >= v106 )
            {
              v50 = v113;
              v51 = v112;
              if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v113 + 1) )
              {
                v112 = (void *)qvector_reserve(&v112, v112, v113 + 1, 8);
                v51 = v112;
                v50 = v113;
              }
              v51[v50] = v49;
              *(_QWORD *)&v113 = v113 + 1;
            }
            sub_6B3F60(&v118, v49);
          }
        }
        v52 = haystack;
        if ( *(_QWORD *)&ptr[8] )
          v52 = *(const char **)ptr;
        v53 = sub_6B9860(*v1, v52, 0, 0);
        sub_6B3F60(&v118, v53);
        if ( *(_QWORD *)ptr )
        {
          *(_QWORD *)&ptr[8] = 0;
          qfree(*(void **)ptr);
        }
        goto LABEL_60;
      }
      v40 = v117;
      v41 = *v36;
      v42 = v116;
      if ( *((_QWORD *)&v117 + 1) < (unsigned __int64)(v117 + 1) )
      {
        v116 = (void *)qvector_reserve(&v116, v116, v117 + 1, 8);
        v42 = v116;
        v40 = v117;
      }
      v42[v40] = v41;
      *(_QWORD *)&v117 = v117 + 1;
      clear_tinfo_t(&v111);
    }
  }
  if ( v123 )
  {
    sub_6B4500(v1, -1);
    if ( (_QWORD)v115 )
LABEL_87:
      sub_6B4500(v1, -1);
    v57 = v117;
  }
  else
  {
    if ( (_QWORD)v115 )
      goto LABEL_87;
    v57 = v117;
    if ( !((unsigned __int64)v113 | (unsigned __int64)v117 | (unsigned __int64)v130) )
    {
      v58 = 1;
      goto LABEL_96;
    }
  }
  if ( v57 )
    sub_6B4500(v1, -1);
  if ( (_QWORD)v130 )
    sub_6B4500(v1, -1);
  if ( (_QWORD)v113 )
    sub_6B4500(v1, -1);
  v58 = 0;
LABEL_96:
  v59 = *((unsigned __int8 *)v1 + 40);
  if ( (_BYTE)v59 )
  {
    v60 = (__int64)v121;
    if ( v121 != &v119 )
    {
      do
      {
        v61 = *(_QWORD *)(v60 + 32);
        sub_3E34B0((__int64)*v1, v61);
        sub_6BF220(*v1, v61, 1);
        *(_QWORD *)ptr = sub_3BDD60(*v1, v61);
        sub_7BF0F0((int)ptr);
        v60 = std::_Rb_tree_increment(v60);
      }
      while ( (int *)v60 != &v119 );
      v58 = v59;
    }
  }
  if ( v129 )
  {
    *(_QWORD *)&v130 = 0;
    qfree(v129);
  }
  if ( v116 )
  {
    *(_QWORD *)&v117 = 0;
    qfree(v116);
  }
  v62 = (char *)v124;
  if ( v124 )
  {
    v63 = v125;
    if ( (_QWORD)v125 )
    {
      v64 = 0;
      do
      {
        v65 = &v62[144 * v64];
        clear_tinfo_t(v65 + 64);
        v66 = *((void **)v65 + 5);
        if ( v66 )
        {
          *((_QWORD *)v65 + 6) = 0;
          qfree(v66);
        }
        v67 = *((void **)v65 + 2);
        if ( v67 )
        {
          *((_QWORD *)v65 + 3) = 0;
          qfree(v67);
        }
        ++v64;
        v62 = (char *)v124;
      }
      while ( v63 != v64 );
    }
    *(_QWORD *)&v125 = 0;
    qfree(v62);
  }
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree(v114);
  }
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    qfree(v112);
  }
  sub_6B3D80(v120);
  return v58;
}
