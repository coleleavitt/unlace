__int64 __fastcall sub_6959E0(__int64 **a1)
{
  __int64 **v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // r8
  __int64 *v4; // rax
  void **v5; // rdi
  unsigned int v6; // r15d
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 *v9; // rax
  void *idati; // rax
  __int64 numbered_type_name; // r12
  unsigned int tinfo_tid; // r12d
  __int64 v13; // rax
  _DWORD *v14; // rsi
  char *v15; // r13
  char *v16; // r12
  unsigned int v17; // r14d
  __int64 v18; // rax
  _DWORD *v19; // rsi
  char *v20; // rdi
  __int64 v21; // r14
  __int64 v22; // r12
  char *v23; // r13
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
  unsigned int *v35; // rax
  __int64 v36; // rdx
  int *v37; // r14
  __int64 *v38; // rbp
  unsigned int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // rax
  int v42; // ebp
  _DWORD *v43; // rsi
  __int64 *v44; // rbp
  int v45; // eax
  __int64 *v46; // rdi
  unsigned __int64 i; // rbp
  const char *v48; // rsi
  unsigned int v49; // eax
  unsigned int v50; // r14d
  __int64 v51; // rax
  _DWORD *v52; // rsi
  const char *v53; // rsi
  unsigned int v54; // eax
  __int64 v55; // rax
  int v56; // ebp
  _DWORD *v57; // rsi
  __int64 v58; // rcx
  unsigned int v59; // ebp
  unsigned int v60; // r13d
  int *v61; // r12
  unsigned int v62; // ebp
  char *v63; // rdi
  __int64 v64; // r13
  __int64 v65; // r12
  char *v66; // rbx
  void *v67; // rdi
  void *v68; // rdi
  char *v70; // rdi
  __int64 v71; // r14
  __int64 v72; // rbx
  __int64 v73; // r13
  char *v74; // r12
  void *v75; // rdi
  void *v76; // rdi
  __int64 v77; // rax
  unsigned int v78; // edi
  _DWORD *v79; // rsi
  unsigned __int64 v80; // rdx
  char *v81; // rdi
  __int64 v82; // r12
  __int64 v83; // r13
  char *v84; // rbx
  void *v85; // rdi
  void *v86; // rdi
  _QWORD *v87; // r12
  void *v88; // rdi
  char *v89; // rdx
  __int64 v90; // r12
  __int64 v91; // r13
  char *v92; // rax
  void *v93; // rdi
  __int64 v94; // rax
  unsigned int v95; // edi
  _DWORD *v96; // rsi
  unsigned __int64 v97; // rdx
  char *v98; // rdi
  __int64 v99; // r13
  __int64 v100; // rbp
  __int64 **v101; // r14
  __int64 v102; // rbx
  char *v103; // r12
  void *v104; // rdi
  void *v105; // rdi
  unsigned int v106; // [rsp+8h] [rbp-270h]
  unsigned int v107; // [rsp+20h] [rbp-258h]
  unsigned int v108; // [rsp+24h] [rbp-254h]
  __int64 **v109; // [rsp+40h] [rbp-238h]
  __int64 **v110; // [rsp+40h] [rbp-238h]
  unsigned int v111; // [rsp+40h] [rbp-238h]
  unsigned __int64 v112; // [rsp+58h] [rbp-220h] BYREF
  void *v113; // [rsp+60h] [rbp-218h] BYREF
  __int128 v114; // [rsp+68h] [rbp-210h]
  void *v115; // [rsp+80h] [rbp-1F8h] BYREF
  __int128 v116; // [rsp+88h] [rbp-1F0h]
  void *v117; // [rsp+A0h] [rbp-1D8h] BYREF
  __int128 v118; // [rsp+A8h] [rbp-1D0h]
  __int64 v119; // [rsp+C0h] [rbp-1B8h] BYREF
  int v120; // [rsp+C8h] [rbp-1B0h] BYREF
  _QWORD *v121; // [rsp+D0h] [rbp-1A8h]
  int *v122; // [rsp+D8h] [rbp-1A0h]
  int *v123; // [rsp+E0h] [rbp-198h]
  __int64 v124; // [rsp+E8h] [rbp-190h]
  void *v125; // [rsp+F0h] [rbp-188h] BYREF
  __int128 v126; // [rsp+F8h] [rbp-180h]
  __int128 v127; // [rsp+108h] [rbp-170h]
  __int64 v128; // [rsp+118h] [rbp-160h]
  int v129; // [rsp+120h] [rbp-158h]
  void *v130; // [rsp+130h] [rbp-148h] BYREF
  __int128 v131; // [rsp+138h] [rbp-140h]
  void *v132; // [rsp+148h] [rbp-130h]
  __int128 v133; // [rsp+150h] [rbp-128h]
  int v134; // [rsp+160h] [rbp-118h]
  char v135; // [rsp+164h] [rbp-114h]
  void *ptr; // [rsp+170h] [rbp-108h] BYREF
  __int128 v137; // [rsp+178h] [rbp-100h]
  int v138; // [rsp+188h] [rbp-F0h]
  __int16 v139; // [rsp+18Ch] [rbp-ECh]
  char v140; // [rsp+18Eh] [rbp-EAh]
  void *v141; // [rsp+190h] [rbp-E8h]
  __int128 v142; // [rsp+198h] [rbp-E0h]
  void *s; // [rsp+1A8h] [rbp-D0h]
  __int64 v144; // [rsp+1B0h] [rbp-C8h]
  void *v145; // [rsp+1B8h] [rbp-C0h]
  __int64 v146; // [rsp+1C0h] [rbp-B8h]
  int v147; // [rsp+1C8h] [rbp-B0h]
  __int64 v148; // [rsp+1D0h] [rbp-A8h]
  void *v149[2]; // [rsp+1D8h] [rbp-A0h] BYREF
  __int128 v150; // [rsp+1E8h] [rbp-90h]
  void *v151; // [rsp+1F8h] [rbp-80h]
  __int128 v152; // [rsp+200h] [rbp-78h]
  _QWORD v153[2]; // [rsp+210h] [rbp-68h] BYREF
  __m128i v154; // [rsp+220h] [rbp-58h]
  unsigned __int64 v155; // [rsp+238h] [rbp-40h]

  v155 = __readfsqword(0x28u);
  v1 = a1;
  v120 = 0;
  v122 = &v120;
  v123 = &v120;
  v153[1] = &v119;
  v2 = *a1;
  v153[0] = a1;
  v121 = nullptr;
  v124 = 0;
  v154 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B0DCB0), (__m128i)(unsigned __int64)sub_693480);
  sub_798010(*v2, "$$ ", v153);
  if ( v154.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v154.m128i_i64[0])(v153, v153, 3);
  v4 = *a1;
  ptr = nullptr;
  sub_6141A0(*v4, 26, &ptr, 8u, v3);
  v5 = (void **)*a1;
  v128 = 0;
  v114 = 0;
  v6 = (unsigned int)ptr;
  v129 = 1;
  v116 = 0;
  v126 = 0;
  v127 = 0;
  v7 = (__int64)v5[1];
  v107 = HIDWORD(ptr);
  v113 = nullptr;
  v115 = nullptr;
  v125 = nullptr;
  v108 = sub_630AA0((__int64)v5, v7);
  if ( v108 > 1 )
  {
    v8 = 1;
    while ( 1 )
    {
      v117 = nullptr;
      v139 = 0;
      ptr = nullptr;
      s = v149;
      v9 = *v1;
      v138 = -1;
      v140 = 0;
      v141 = nullptr;
      v144 = 1;
      v145 = nullptr;
      v146 = 0;
      v147 = 1065353216;
      v148 = 0;
      v151 = nullptr;
      v137 = 0;
      v142 = 0;
      *(_OWORD *)v149 = 0;
      v150 = 0;
      v152 = 0;
      idati = (void *)v9[1];
      WORD4(v131) = 257;
      *(_QWORD *)&v131 = v8;
      if ( !idati )
        idati = (void *)get_idati(v5, v7);
      v130 = idati;
      if ( !(unsigned __int8)create_tinfo(&v117, 61, 189, &v130) )
        goto LABEL_26;
      numbered_type_name = get_numbered_type_name((*v1)[1], v8);
      if ( get_tinfo_property(v117, 288) )
        goto LABEL_9;
      if ( (get_tinfo_property(v117, 2) & 0x2F) != 0xD )
        break;
      if ( !(unsigned __int8)get_tinfo_details(v117, 141, &v125) )
      {
        v77 = v116;
        LODWORD(v130) = v8;
        v78 = v8;
        v79 = v115;
        v80 = v116 + 1;
        if ( &v130 < v115 || &v130 >= (void **)((char *)v115 + 4 * *((_QWORD *)&v116 + 1)) )
        {
          if ( *((_QWORD *)&v116 + 1) < v80 )
          {
            v115 = (void *)qvector_reserve(&v115, v115, v80, 4);
            v79 = v115;
            v77 = v116;
            v78 = (unsigned int)v130;
          }
          v79[v77] = v78;
        }
        else
        {
          if ( *((_QWORD *)&v116 + 1) < v80 )
          {
            v115 = (void *)qvector_reserve(&v115, v115, v80, 4);
            v79 = v115;
            v77 = v116;
          }
          v79[v77] = v8;
        }
        *(_QWORD *)&v116 = v116 + 1;
LABEL_141:
        v81 = (char *)v151;
        if ( v151 )
        {
          if ( (_QWORD)v152 )
          {
            v110 = v1;
            v82 = 0;
            v83 = v152;
            do
            {
              v84 = &v81[128 * v82];
              clear_tinfo_t(v84 + 64);
              v85 = *((void **)v84 + 5);
              if ( v85 )
              {
                *((_QWORD *)v84 + 6) = 0;
                qfree(v85);
              }
              v86 = *((void **)v84 + 2);
              if ( v86 )
              {
                *((_QWORD *)v84 + 3) = 0;
                qfree(v86);
              }
              ++v82;
              v81 = (char *)v151;
            }
            while ( v83 != v82 );
            v1 = v110;
          }
          *(_QWORD *)&v152 = 0;
          qfree(v81);
        }
        if ( v149[1] )
        {
          *(_QWORD *)&v150 = 0;
          qfree(v149[1]);
        }
        v87 = v145;
        if ( v145 )
        {
          do
          {
            v88 = v87;
            v87 = (_QWORD *)*v87;
            operator delete(v88, 0x20u);
          }
          while ( v87 );
        }
        v7 = 0;
        memset(s, 0, 8 * v144);
        v146 = 0;
        v145 = nullptr;
        if ( s != v149 )
        {
          v7 = 8 * v144;
          operator delete(s, 8 * v144);
        }
        v89 = (char *)v141;
        if ( v141 )
        {
          v90 = v142;
          if ( (_QWORD)v142 )
          {
            v91 = 0;
            do
            {
              v92 = &v89[32 * v91];
              v93 = *(void **)v92;
              if ( *(_QWORD *)v92 )
              {
                *((_QWORD *)v92 + 1) = 0;
                qfree(v93);
                v89 = (char *)v141;
              }
              ++v91;
            }
            while ( v90 != v91 );
          }
          *(_QWORD *)&v142 = 0;
          qfree(v89);
        }
        if ( ptr )
        {
          *(_QWORD *)&v137 = 0;
          qfree(ptr);
        }
        goto LABEL_50;
      }
      sub_6A0BD0(&ptr, *v1, numbered_type_name, &v125, 1);
      tinfo_tid = v138;
      if ( v138 != -1 )
      {
LABEL_10:
        if ( tinfo_tid < v6 || tinfo_tid >= v107 )
        {
          v13 = v114;
          v14 = v113;
          if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)(v114 + 1) )
          {
            v113 = (void *)qvector_reserve(&v113, v113, v114 + 1, 4);
            v14 = v113;
            v13 = v114;
          }
          v14[v13] = tinfo_tid;
          *(_QWORD *)&v114 = v114 + 1;
        }
        sub_6937A0(&v119, tinfo_tid);
        goto LABEL_16;
      }
LABEL_83:
      tinfo_tid = get_tinfo_tid(&v117, 0);
      if ( tinfo_tid != -1 )
        goto LABEL_10;
LABEL_16:
      v15 = (char *)v141;
      v16 = (char *)v141 + 32 * v142;
      if ( v141 != v16 )
      {
        do
        {
          v17 = *((_DWORD *)v15 + 6);
          if ( v17 != -1 )
          {
            if ( v17 < v6 || v17 >= v107 )
            {
              v18 = v114;
              v19 = v113;
              if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)(v114 + 1) )
              {
                v113 = (void *)qvector_reserve(&v113, v113, v114 + 1, 4);
                v19 = v113;
                v18 = v114;
              }
              v19[v18] = v17;
              *(_QWORD *)&v114 = v114 + 1;
            }
            sub_6937A0(&v119, v17);
          }
          v15 += 32;
        }
        while ( v16 != v15 );
      }
LABEL_26:
      v20 = (char *)v151;
      if ( v151 )
      {
        v21 = v152;
        if ( (_QWORD)v152 )
        {
          v22 = 0;
          do
          {
            v23 = &v20[128 * v22];
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
            v20 = (char *)v151;
          }
          while ( v21 != v22 );
        }
        *(_QWORD *)&v152 = 0;
        qfree(v20);
      }
      if ( v149[1] )
      {
        *(_QWORD *)&v150 = 0;
        qfree(v149[1]);
      }
      v26 = v145;
      if ( v145 )
      {
        do
        {
          v27 = v26;
          v26 = (_QWORD *)*v26;
          operator delete(v27, 0x20u);
        }
        while ( v26 );
      }
      memset(s, 0, 8 * v144);
      v146 = 0;
      v145 = nullptr;
      v7 = v144;
      if ( s != v149 )
      {
        v7 = 8 * v144;
        operator delete(s, 8 * v144);
      }
      v28 = (char *)v141;
      if ( v141 )
      {
        v29 = v142;
        if ( (_QWORD)v142 )
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
              v28 = (char *)v141;
            }
            ++v30;
          }
          while ( v29 != v30 );
        }
        *(_QWORD *)&v142 = 0;
        qfree(v28);
      }
      if ( ptr )
      {
        *(_QWORD *)&v137 = 0;
        qfree(ptr);
      }
LABEL_50:
      v5 = &v117;
      clear_tinfo_t(&v117);
      if ( v108 == ++v8 )
        goto LABEL_51;
    }
    if ( (get_tinfo_property(v117, 2) & 0x3F) == 0x2D )
    {
      v130 = nullptr;
      v132 = nullptr;
      v134 = 0;
      v135 = 0x80;
      v131 = 0;
      v133 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v117, 45, &v130) )
      {
        v94 = v116;
        LODWORD(v112) = v8;
        v95 = v8;
        v96 = v115;
        v97 = v116 + 1;
        if ( &v112 < v115 || &v112 >= (unsigned __int64 *)((char *)v115 + 4 * *((_QWORD *)&v116 + 1)) )
        {
          if ( *((_QWORD *)&v116 + 1) < v97 )
          {
            v115 = (void *)qvector_reserve(&v115, v115, v97, 4);
            v96 = v115;
            v95 = v112;
            v94 = v116;
          }
          v96[v94] = v95;
        }
        else
        {
          if ( *((_QWORD *)&v116 + 1) < v97 )
          {
            v115 = (void *)qvector_reserve(&v115, v115, v97, 4);
            v96 = v115;
            v94 = v116;
          }
          v96[v94] = v8;
        }
        *(_QWORD *)&v116 = v116 + 1;
        if ( v132 )
        {
          *(_QWORD *)&v133 = 0;
          qfree(v132);
        }
        v98 = (char *)v130;
        if ( v130 )
        {
          if ( (_QWORD)v131 )
          {
            v99 = 0;
            v111 = v8;
            v100 = 0;
            v101 = v1;
            v102 = v131;
            do
            {
              v103 = &v98[v100];
              v104 = *(void **)&v98[v100 + 24];
              if ( v104 )
              {
                *((_QWORD *)v103 + 4) = 0;
                qfree(v104);
              }
              v105 = *(void **)v103;
              if ( *(_QWORD *)v103 )
              {
                *((_QWORD *)v103 + 1) = 0;
                qfree(v105);
              }
              ++v99;
              v98 = (char *)v130;
              v100 += 56;
            }
            while ( v102 != v99 );
            v8 = v111;
            v1 = v101;
          }
          *(_QWORD *)&v131 = 0;
          qfree(v98);
        }
        goto LABEL_141;
      }
      sub_6993B0(&ptr, *v1, numbered_type_name, &v130, 1);
      if ( v132 )
      {
        *(_QWORD *)&v133 = 0;
        qfree(v132);
      }
      v70 = (char *)v130;
      if ( v130 )
      {
        v71 = v131;
        if ( (_QWORD)v131 )
        {
          v109 = v1;
          v72 = 0;
          v73 = 0;
          do
          {
            v74 = &v70[v72];
            v75 = *(void **)&v70[v72 + 24];
            if ( v75 )
            {
              *((_QWORD *)v74 + 4) = 0;
              qfree(v75);
            }
            v76 = *(void **)v74;
            if ( *(_QWORD *)v74 )
            {
              *((_QWORD *)v74 + 1) = 0;
              qfree(v76);
            }
            ++v73;
            v70 = (char *)v130;
            v72 += 56;
          }
          while ( v71 != v73 );
          v1 = v109;
        }
        *(_QWORD *)&v131 = 0;
        qfree(v70);
      }
    }
LABEL_9:
    tinfo_tid = v138;
    if ( v138 != -1 )
      goto LABEL_10;
    goto LABEL_83;
  }
LABEL_51:
  v117 = nullptr;
  v130 = nullptr;
  v106 = -1;
  v118 = 0;
  v131 = 0;
  while ( 1 )
  {
    v33 = (__int64)(*v1 + 203);
    v34 = sub_4EE8E0(v33, v106);
    v35 = sub_4EE890(v33, v34);
    v37 = (int *)v35;
    if ( !v35 )
      break;
    v38 = *v1;
    v39 = *v35;
    v112 = 0;
    v106 = v39;
    v40 = sub_3B90A0(v38, *v37);
    if ( v40 == -1 || !(unsigned __int8)sub_532DA0(v38, &v112, v40) )
    {
      v44 = *v1;
      v45 = ea2node((unsigned int)*v37);
      if ( (unsigned __int8)sub_51E880(v44, v45, nullptr, nullptr, nullptr) )
      {
        v55 = v131;
        v56 = *v37;
        v57 = v130;
        if ( *((_QWORD *)&v131 + 1) < (unsigned __int64)(v131 + 1) )
        {
          v130 = (void *)qvector_reserve(&v130, v130, v131 + 1, 4);
          v57 = v130;
          v55 = v131;
        }
        v57[v55] = v56;
        *(_QWORD *)&v131 = v131 + 1;
      }
LABEL_60:
      clear_tinfo_t(&v112);
    }
    else
    {
      if ( (unsigned __int8)get_tinfo_details(v112, 141, &v125) )
      {
        v46 = *v1;
        ptr = nullptr;
        v137 = 0;
        sub_5A1A70(v46, (char **)&ptr, *v37);
        for ( i = 0; i < (unsigned __int64)v126; ++i )
        {
          v48 = haystack;
          if ( (_QWORD)v137 )
            v48 = (const char *)ptr;
          v49 = sub_69C3E0(&v125, v48, i, 1);
          v50 = v49;
          if ( v49 != -1 )
          {
            if ( v49 < v6 || v49 >= v107 )
            {
              v51 = v114;
              v52 = v113;
              if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)(v114 + 1) )
              {
                v113 = (void *)qvector_reserve(&v113, v113, v114 + 1, 4);
                v52 = v113;
                v51 = v114;
              }
              v52[v51] = v50;
              *(_QWORD *)&v114 = v114 + 1;
            }
            sub_6937A0(&v119, v50);
          }
        }
        v53 = haystack;
        if ( (_QWORD)v137 )
          v53 = (const char *)ptr;
        v54 = sub_698F20(*v1, v53, 0, 0);
        sub_6937A0(&v119, v54);
        if ( ptr )
        {
          *(_QWORD *)&v137 = 0;
          qfree(ptr);
        }
        goto LABEL_60;
      }
      v41 = v118;
      v42 = *v37;
      v43 = v117;
      if ( *((_QWORD *)&v118 + 1) < (unsigned __int64)(v118 + 1) )
      {
        v117 = (void *)qvector_reserve(&v117, v117, v118 + 1, 4);
        v43 = v117;
        v41 = v118;
      }
      v43[v41] = v42;
      *(_QWORD *)&v118 = v118 + 1;
      clear_tinfo_t(&v112);
    }
  }
  if ( v124 )
  {
    sub_693D00(v1, -1);
    if ( (_QWORD)v116 )
LABEL_87:
      sub_693D00(v1, -1);
    v58 = v118;
  }
  else
  {
    if ( (_QWORD)v116 )
      goto LABEL_87;
    v58 = v118;
    if ( !((unsigned __int64)v114 | (unsigned __int64)v118 | (unsigned __int64)v131) )
    {
      v59 = 1;
      goto LABEL_96;
    }
  }
  if ( v58 )
    sub_693D00(v1, -1);
  if ( (_QWORD)v131 )
    sub_693D00(v1, -1);
  v58 = v114;
  if ( (_QWORD)v114 )
    sub_693D00(v1, -1);
  v59 = 0;
LABEL_96:
  v60 = *((unsigned __int8 *)v1 + 40);
  if ( (_BYTE)v60 )
  {
    v61 = v122;
    if ( v122 != &v120 )
    {
      do
      {
        v62 = v61[8];
        sub_3DD870((__int64)*v1, v62, v36, v58);
        sub_69E750(*v1, v62, 1);
        LODWORD(ptr) = sub_3B90A0(*v1, v62);
        sub_79BCF0((int)&ptr);
        v61 = (int *)std::_Rb_tree_increment();
      }
      while ( v61 != &v120 );
      v59 = v60;
    }
  }
  if ( v130 )
  {
    *(_QWORD *)&v131 = 0;
    qfree(v130);
  }
  if ( v117 )
  {
    *(_QWORD *)&v118 = 0;
    qfree(v117);
  }
  v63 = (char *)v125;
  if ( v125 )
  {
    v64 = v126;
    if ( (_QWORD)v126 )
    {
      v65 = 0;
      do
      {
        v66 = &v63[128 * v65];
        clear_tinfo_t(v66 + 64);
        v67 = *((void **)v66 + 5);
        if ( v67 )
        {
          *((_QWORD *)v66 + 6) = 0;
          qfree(v67);
        }
        v68 = *((void **)v66 + 2);
        if ( v68 )
        {
          *((_QWORD *)v66 + 3) = 0;
          qfree(v68);
        }
        ++v65;
        v63 = (char *)v125;
      }
      while ( v64 != v65 );
    }
    *(_QWORD *)&v126 = 0;
    qfree(v63);
  }
  if ( v115 )
  {
    *(_QWORD *)&v116 = 0;
    qfree(v115);
  }
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    qfree(v113);
  }
  sub_6935D0(v121);
  return v59;
}

