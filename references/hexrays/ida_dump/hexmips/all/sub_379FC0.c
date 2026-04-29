__int64 __fastcall sub_379FC0(__int64 a1, unsigned __int64 a2, _BYTE *a3, int a4)
{
  __int64 *v4; // r12
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // ebp
  _QWORD **v14; // rbx
  void *v15; // rdi
  char v17; // al
  unsigned int v18; // ecx
  int v19; // eax
  unsigned __int64 v20; // rsi
  int v21; // eax
  unsigned __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // r12
  _QWORD *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  int v28; // eax
  int flags; // eax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // r14
  __int64 v34; // r12
  __int64 *v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // r14
  __int64 *v41; // rbp
  __int64 v42; // rdi
  __int64 v43; // rdi
  unsigned __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // r14
  _QWORD *v47; // rbp
  __int64 v48; // rdi
  __int64 v49; // rdi
  unsigned __int64 v50; // r8
  int v51; // esi
  __int64 v52; // rax
  int v53; // esi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 *v57; // rdi
  int v58; // eax
  __int64 *v59; // r8
  __int64 *v60; // rdi
  unsigned __int64 v61; // r9
  unsigned __int64 v62; // r9
  int v63; // eax
  bool v64; // cl
  __int64 v65; // rax
  unsigned __int64 v66; // rsi
  __int64 v67; // rax
  unsigned __int64 v68; // r14
  void *v69; // rax
  __m128i v70; // xmm0
  void *v71; // rax
  __m128i v72; // xmm1
  __int64 *v73; // r14
  __int64 *v74; // r14
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rdx
  int v77; // r8d
  unsigned __int64 v78; // rsi
  __int64 v79; // rax
  char v80; // dl
  unsigned int v81; // eax
  char v82; // al
  __int64 *v83; // rax
  __int64 v84; // rax
  __int64 *v85; // r8
  unsigned __int64 v86; // r9
  unsigned __int64 v87; // r9
  void *v88; // rdi
  void *v89; // rdi
  void *v90; // rdi
  __int64 v91; // rax
  void *v92; // rdi
  __int64 v93; // rax
  __int64 *v95; // [rsp+8h] [rbp-240h]
  __int64 *v96; // [rsp+8h] [rbp-240h]
  unsigned __int64 v97; // [rsp+8h] [rbp-240h]
  unsigned __int64 v98; // [rsp+8h] [rbp-240h]
  __int64 *v99; // [rsp+10h] [rbp-238h]
  int tinfo_property; // [rsp+18h] [rbp-230h]
  _QWORD *v101; // [rsp+28h] [rbp-220h]
  _QWORD *v102; // [rsp+28h] [rbp-220h]
  __int64 v103; // [rsp+38h] [rbp-210h]
  int v104; // [rsp+48h] [rbp-200h]
  int tinfo_size; // [rsp+60h] [rbp-1E8h]
  int v106; // [rsp+60h] [rbp-1E8h]
  __int64 v107; // [rsp+60h] [rbp-1E8h]
  __int64 *v108; // [rsp+60h] [rbp-1E8h]
  unsigned int v109; // [rsp+60h] [rbp-1E8h]
  int v110; // [rsp+6Bh] [rbp-1DDh]
  int v111; // [rsp+6Ch] [rbp-1DCh]
  __int64 v112; // [rsp+70h] [rbp-1D8h]
  unsigned int v113; // [rsp+70h] [rbp-1D8h]
  __int64 *v114; // [rsp+78h] [rbp-1D0h]
  size_t v115; // [rsp+78h] [rbp-1D0h]
  size_t v116; // [rsp+78h] [rbp-1D0h]
  size_t v117; // [rsp+78h] [rbp-1D0h]
  int v118; // [rsp+78h] [rbp-1D0h]
  size_t v119; // [rsp+78h] [rbp-1D0h]
  size_t v120; // [rsp+78h] [rbp-1D0h]
  size_t v121; // [rsp+78h] [rbp-1D0h]
  char v122; // [rsp+83h] [rbp-1C5h]
  int v123; // [rsp+84h] [rbp-1C4h]
  int nf; // [rsp+88h] [rbp-1C0h]
  int n; // [rsp+88h] [rbp-1C0h]
  __int64 ng; // [rsp+88h] [rbp-1C0h]
  __int64 ne; // [rsp+88h] [rbp-1C0h]
  const void *na; // [rsp+88h] [rbp-1C0h]
  const void *nb; // [rsp+88h] [rbp-1C0h]
  const void *nc; // [rsp+88h] [rbp-1C0h]
  const void *nd; // [rsp+88h] [rbp-1C0h]
  unsigned __int64 v132; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v133; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v134; // [rsp+90h] [rbp-1B8h]
  __int64 v135; // [rsp+90h] [rbp-1B8h]
  __int64 *v136; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v137; // [rsp+90h] [rbp-1B8h]
  __int64 *v138; // [rsp+90h] [rbp-1B8h]
  unsigned __int64 v139; // [rsp+90h] [rbp-1B8h]
  __int64 *v140; // [rsp+98h] [rbp-1B0h]
  __int64 *v141; // [rsp+98h] [rbp-1B0h]
  __int64 *v142; // [rsp+98h] [rbp-1B0h]
  __int64 *v143; // [rsp+98h] [rbp-1B0h]
  unsigned __int64 v144; // [rsp+98h] [rbp-1B0h]
  __int64 *v145; // [rsp+98h] [rbp-1B0h]
  unsigned __int64 v146; // [rsp+98h] [rbp-1B0h]
  __int64 *v147; // [rsp+98h] [rbp-1B0h]
  __int64 v148; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v149; // [rsp+A8h] [rbp-1A0h] BYREF
  char v150[8]; // [rsp+B0h] [rbp-198h] BYREF
  int v151; // [rsp+B8h] [rbp-190h] BYREF
  void *v152; // [rsp+C0h] [rbp-188h]
  int *v153; // [rsp+C8h] [rbp-180h]
  int *v154; // [rsp+D0h] [rbp-178h]
  __int128 v155; // [rsp+D8h] [rbp-170h] BYREF
  __int64 v156; // [rsp+E8h] [rbp-160h]
  int v157[4]; // [rsp+F0h] [rbp-158h] BYREF
  void *v158; // [rsp+100h] [rbp-148h]
  __m128i v159; // [rsp+108h] [rbp-140h] BYREF
  void *v160; // [rsp+118h] [rbp-130h]
  __m128i v161; // [rsp+120h] [rbp-128h] BYREF
  __int64 v162; // [rsp+130h] [rbp-118h] BYREF
  int v163; // [rsp+138h] [rbp-110h]
  __int64 v164; // [rsp+140h] [rbp-108h] BYREF
  __int128 v165; // [rsp+148h] [rbp-100h]
  __int64 v166; // [rsp+158h] [rbp-F0h]
  __int64 v167; // [rsp+160h] [rbp-E8h] BYREF
  __int64 v168; // [rsp+168h] [rbp-E0h] BYREF
  __int128 v169; // [rsp+170h] [rbp-D8h]
  __int64 v170; // [rsp+180h] [rbp-C8h]
  __int128 v171; // [rsp+188h] [rbp-C0h]
  char v172; // [rsp+198h] [rbp-B0h]
  __int64 *v173; // [rsp+1A0h] [rbp-A8h] BYREF
  __int128 v174; // [rsp+1A8h] [rbp-A0h]
  __int64 v175; // [rsp+1B8h] [rbp-90h]
  __int64 v176; // [rsp+1C0h] [rbp-88h] BYREF
  __int64 v177; // [rsp+1C8h] [rbp-80h] BYREF
  __int128 v178; // [rsp+1D0h] [rbp-78h]
  __int64 v179; // [rsp+1E0h] [rbp-68h]
  __int128 v180; // [rsp+1E8h] [rbp-60h]
  char v181; // [rsp+1F8h] [rbp-50h]
  unsigned __int64 v182; // [rsp+208h] [rbp-40h]

  v4 = (__int64 *)a1;
  v5 = a2;
  v6 = a3;
  v182 = __readfsqword(0x28u);
  if ( (*a3 & 0xF) == 0xC )
  {
    if ( a2 == -1 )
      return 0;
    flags = get_flags_ex(a2, 4);
    if ( ((~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0) && !(unsigned __int8)is_spec_ea(a2) )
      return 0;
  }
  v153 = &v151;
  v151 = 0;
  v152 = nullptr;
  v154 = &v151;
  v156 = 0;
  v155 = 0;
  copy_tinfo_t((char *)&v155 + 8, v6);
  LODWORD(v156) = a4 & 0xF1FFFFFF;
  if ( (a4 & 0xF1FFFFFF) == 1 )
  {
    if ( !under_debugger )
      sub_37E160(50228);
    goto LABEL_248;
  }
  v7 = *(_QWORD **)(a1 + 8);
  if ( v7 )
  {
    v8 = 24;
    v9 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v9 )
      goto LABEL_8;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)v9 & 2) != 0 )
          goto LABEL_6;
        v20 = *(_QWORD *)(v9 + 24);
        v8 = v9 + 24;
        if ( v5 >= v20 )
          break;
        v9 = *(_QWORD *)(v9 + 8);
      }
      if ( v20 >= v5 )
        break;
      v9 = *(_QWORD *)(v9 + 16);
    }
    if ( v7 != (_QWORD *)v9 )
    {
LABEL_8:
      v12 = *(_QWORD *)(v8 + 56);
      if ( *(_DWORD *)(v8 + 64) < (signed int)(a4 & 0xF1FFFFFF) && (v12 & 0x3F) != 0x30 )
        goto LABEL_10;
      v17 = compare_tinfo(v12, *v6, 32);
      v18 = a4 & 0xF1FFFFFF;
      if ( v17 )
      {
        if ( !(unsigned int)lexcompare_tinfo(*(_QWORD *)(v8 + 56), *v6, 0) )
        {
LABEL_10:
          v13 = 0;
          goto LABEL_11;
        }
        tinfo_property = get_tinfo_property(*(_QWORD *)(v8 + 56), 20);
        v21 = get_tinfo_property(*v6, 20);
        v18 = a4 & 0xF1FFFFFF;
        if ( tinfo_property == v21 )
        {
          copy_tinfo_t(v8 + 56, v6);
          goto LABEL_22;
        }
      }
      v99 = (__int64 *)(v8 + 56);
      if ( !v18 )
        goto LABEL_45;
      v103 = *v4;
      v19 = sub_366360((__int64)v99, (__int64)v6);
      if ( v19 == 1 )
      {
LABEL_21:
        *(_DWORD *)(v8 + 64) = v156;
        sub_3671E0(v4 + 3, v5);
        sub_36FF50((__int64)v4, v5, v99, *(_DWORD *)(v8 + 64));
        goto LABEL_22;
      }
      if ( v19 == -1 )
        goto LABEL_45;
      v148 = 0;
      copy_tinfo_t(&v148, v99);
      v149 = 0;
      copy_tinfo_t(&v149, v6);
      if ( (get_tinfo_property(v148, 2) & 0xF) != 0xC )
      {
        v173 = nullptr;
        v173 = (__int64 *)get_tinfo_property(v148, 9);
        copy_tinfo_t(&v148, &v173);
        clear_tinfo_t(&v173);
        if ( (get_tinfo_property(v148, 2) & 0xF) != 0xC )
        {
          clear_tinfo_t(&v149);
          clear_tinfo_t(&v148);
          goto LABEL_21;
        }
        v173 = nullptr;
        v173 = (__int64 *)get_tinfo_property(v149, 9);
        copy_tinfo_t(&v149, &v173);
        clear_tinfo_t(&v173);
      }
      v164 = 0;
      v166 = 0;
      v167 = 0;
      v168 = 0;
      v170 = 0;
      v172 = 16;
      v165 = 0;
      v169 = 0;
      v171 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v148, 12, &v164) || !(_QWORD)v165 )
      {
LABEL_32:
        if ( v170 )
        {
          *(_QWORD *)&v171 = 0;
          qfree(v170);
        }
        cleanup_argloc(&v168);
        clear_tinfo_t(&v167);
        v22 = v164;
        if ( v164 )
        {
          if ( (_QWORD)v165 )
          {
            v101 = v6;
            v23 = 0;
            v95 = v4;
            v24 = v165;
            do
            {
              v25 = (_QWORD *)(v22 + 80 * v23);
              clear_tinfo_t(v25 + 8);
              v26 = v25[5];
              if ( v26 )
              {
                v25[6] = 0;
                qfree(v26);
              }
              v27 = v25[2];
              if ( v27 )
              {
                v25[3] = 0;
                qfree(v27);
              }
              ++v23;
              cleanup_argloc(v25);
              v22 = v164;
            }
            while ( v24 != v23 );
            v4 = v95;
            v6 = v101;
          }
          *(_QWORD *)&v165 = 0;
          qfree(v22);
        }
        clear_tinfo_t(&v149);
        clear_tinfo_t(&v148);
LABEL_45:
        copy_tinfo_t(v99, v6);
LABEL_46:
        v28 = *(_DWORD *)(v8 + 68) + 1;
        *(_DWORD *)(v8 + 68) = v28;
        if ( v28 <= 9 )
          sub_35F570(*v4, v8 + 8, 0.0);
        goto LABEL_21;
      }
      v173 = nullptr;
      v175 = 0;
      v176 = 0;
      v177 = 0;
      v179 = 0;
      v181 = 16;
      v174 = 0;
      v178 = 0;
      v180 = 0;
      LOBYTE(v110) = get_tinfo_details(v149, 12, &v173);
      if ( !(_BYTE)v110 || !(_QWORD)v174 )
      {
        LOBYTE(v110) = 0;
        v30 = v179;
        goto LABEL_77;
      }
      v123 = compare_arglocs(&v168, &v177);
      v30 = v179;
      if ( v123 || (_QWORD)v171 != (_QWORD)v180 )
        goto LABEL_62;
      if ( (_QWORD)v171 )
      {
        v31 = 0;
        do
        {
          if ( *(_DWORD *)(v170 + 8 * v31) != *(_DWORD *)(v179 + 8 * v31)
            || *(_DWORD *)(v170 + 8 * v31 + 4) != *(_DWORD *)(v179 + 8 * v31 + 4) )
          {
            goto LABEL_62;
          }
          ++v31;
        }
        while ( (_QWORD)v171 != v31 );
      }
      if ( (_QWORD)v165 )
      {
        v50 = v164;
        v51 = 0;
        v52 = 0;
        do
        {
          if ( (unsigned int)(*(_DWORD *)(v164 + 80 * v52) - 3) <= 1 )
          {
            v122 = v110;
            if ( !(_QWORD)v174 )
              goto LABEL_154;
            goto LABEL_109;
          }
          v52 = ++v51;
        }
        while ( v51 < (unsigned __int64)v165 );
        v122 = 0;
        if ( !(_QWORD)v174 )
          goto LABEL_115;
      }
      else
      {
        v122 = 0;
        if ( !(_QWORD)v174 )
          goto LABEL_132;
      }
LABEL_109:
      v53 = 0;
      v54 = 0;
      do
      {
        if ( (unsigned int)(LODWORD(v173[10 * v54]) - 3) <= 1 )
        {
          if ( v122 )
            goto LABEL_113;
          goto LABEL_62;
        }
        v54 = ++v53;
      }
      while ( v53 < (unsigned __int64)v174 );
      if ( v122 )
      {
LABEL_154:
        LOBYTE(v110) = 0;
        goto LABEL_77;
      }
LABEL_113:
      if ( (_QWORD)v165 )
      {
        v50 = v164;
LABEL_115:
        v104 = 0;
        v55 = 0;
        v111 = 0;
        while ( 1 )
        {
          v56 = v50 + 80 * v55;
          tinfo_size = get_tinfo_size(0, *(_QWORD *)(v56 + 64), 0);
          sub_1C1BF0((__int64)v157, v56, tinfo_size, 0);
          v106 = sub_364DC0(&v173, v157, tinfo_size);
          cleanup_argloc(v157);
          if ( v106 != -1 )
          {
            v57 = &v173[10 * v106];
            v107 = 10LL * v106;
            if ( !(unsigned int)compare_arglocs(v57, v56) )
            {
              v112 = v56 + 64;
              v114 = &v173[v107];
              v108 = &v173[v107 + 8];
              v58 = sub_366720(v103, (_QWORD *)(v56 + 64), v108, a4);
              if ( v58 == -1 )
              {
                copy_argloc(v56, v114);
                v85 = v114;
                if ( (__int64 *)(v56 + 16) != v114 + 2 )
                {
                  v86 = v114[3];
                  if ( v86 && (v119 = v86 - 1, v86 != 1) )
                  {
                    na = (const void *)v85[2];
                    if ( *(_QWORD *)(v56 + 32) < v86 )
                    {
                      v142 = v85;
                      v134 = v86;
                      *(_QWORD *)(v56 + 16) = qvector_reserve(v56 + 16, *(_QWORD *)(v56 + 16), v86, 1);
                      v85 = v142;
                      v86 = v134;
                    }
                    v88 = *(void **)(v56 + 16);
                    *(_QWORD *)(v56 + 24) = v86;
                    v140 = v85;
                    v132 = v86;
                    memmove(v88, na, v119);
                    v85 = v140;
                    *(_BYTE *)(*(_QWORD *)(v56 + 16) + v132 - 1) = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v56 + 24) = 0;
                  }
                }
                if ( (__int64 *)(v56 + 40) != v85 + 5 )
                {
                  v87 = v85[6];
                  if ( v87 && (v120 = v87 - 1, v87 != 1) )
                  {
                    nb = (const void *)v85[5];
                    if ( *(_QWORD *)(v56 + 56) < v87 )
                    {
                      v143 = v85;
                      v135 = v85[6];
                      *(_QWORD *)(v56 + 40) = qvector_reserve(v56 + 40, *(_QWORD *)(v56 + 40), v87, 1);
                      v85 = v143;
                      v87 = v135;
                    }
                    v89 = *(void **)(v56 + 40);
                    *(_QWORD *)(v56 + 48) = v87;
                    v141 = v85;
                    v133 = v87;
                    memmove(v89, nb, v120);
                    v85 = v141;
                    *(_BYTE *)(*(_QWORD *)(v56 + 40) + v133 - 1) = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v56 + 48) = 0;
                  }
                }
                v121 = (size_t)v85;
                copy_tinfo_t(v112, v108);
                v111 |= 1u;
                *(_DWORD *)(v56 + 72) = *(_DWORD *)(v121 + 72);
              }
              else if ( v58 == 1 )
              {
                copy_argloc(v114, v56);
                v59 = v114;
                v60 = v114 + 2;
                if ( v114 + 2 != (__int64 *)(v56 + 16) )
                {
                  v61 = *(_QWORD *)(v56 + 24);
                  if ( v61 && (v115 = v61 - 1, v61 != 1) )
                  {
                    nd = *(const void **)(v56 + 16);
                    if ( v59[4] < v61 )
                    {
                      v147 = v59;
                      v139 = *(_QWORD *)(v56 + 24);
                      v93 = qvector_reserve(v60, v59[2], v61, 1);
                      v59 = v147;
                      v61 = v139;
                      v147[2] = v93;
                    }
                    v92 = (void *)v59[2];
                    v59[3] = v61;
                    v146 = v61;
                    v138 = v59;
                    memmove(v92, nd, v115);
                    v59 = v138;
                    *(_BYTE *)(v138[2] + v146 - 1) = 0;
                  }
                  else
                  {
                    v59[3] = 0;
                  }
                }
                if ( v59 + 5 != (__int64 *)(v56 + 40) )
                {
                  v62 = *(_QWORD *)(v56 + 48);
                  if ( v62 && (v116 = v62 - 1, v62 != 1) )
                  {
                    nc = *(const void **)(v56 + 40);
                    if ( v59[7] < v62 )
                    {
                      v145 = v59;
                      v137 = *(_QWORD *)(v56 + 48);
                      v91 = qvector_reserve(v59 + 5, v59[5], v62, 1);
                      v59 = v145;
                      v62 = v137;
                      v145[5] = v91;
                    }
                    v90 = (void *)v59[5];
                    v59[6] = v62;
                    v144 = v62;
                    v136 = v59;
                    memmove(v90, nc, v116);
                    v59 = v136;
                    *(_BYTE *)(v136[5] + v144 - 1) = 0;
                  }
                  else
                  {
                    v59[6] = 0;
                  }
                }
                v117 = (size_t)v59;
                copy_tinfo_t(v108, v112);
                v111 |= 2u;
                *(_DWORD *)(v117 + 72) = *(_DWORD *)(v56 + 72);
              }
            }
          }
          v55 = ++v104;
          if ( v104 >= (unsigned __int64)v165 )
            break;
          v50 = v164;
        }
LABEL_133:
        v63 = sub_366720(v103, &v167, &v176, a4);
        if ( v63 )
        {
          if ( v63 != -1 )
          {
            copy_tinfo_t(&v176, &v167);
            v111 |= 2u;
            goto LABEL_136;
          }
LABEL_156:
          copy_tinfo_t(&v167, &v176);
          v111 |= 1u;
        }
        else if ( !(unsigned __int8)compare_tinfo(v167, v176, 32) )
        {
          goto LABEL_156;
        }
LABEL_136:
        v109 = v172 & 0xF0;
        if ( (v172 & 0xF0) == 0xC0 )
          v109 = HIDWORD(v166);
        if ( v109 <= 0x10 )
          v109 = getinf(99);
        v113 = v181 & 0xF0;
        if ( (v181 & 0xF0) == 0xC0 )
          v113 = HIDWORD(v175);
        if ( v113 <= 0x10 )
          v113 = getinf(99);
        if ( (v111 & 2) != 0 || v113 != 64 || v109 == 64 )
        {
          if ( (v111 & 1) != 0 )
          {
            if ( (unsigned __int64)v165 < (unsigned __int64)v174 )
            {
              v118 = v165;
              v65 = (int)v165;
              do
              {
                v73 = &v173[10 * v65];
                nf = get_tinfo_size(0, v73[8], 0);
                sub_1C1BF0((__int64)v157, (__int64)v73, nf, 0);
                n = sub_364DC0(&v164, v157, nf);
                cleanup_argloc(v157);
                if ( n >= 0 && n < (unsigned __int64)v165 )
                {
                  if ( (unsigned int)compare_arglocs(v164 + 80LL * n, v73) )
                    goto LABEL_174;
                }
                else
                {
                  v157[0] = 0;
                  copy_argloc(v157, v73);
                  v158 = nullptr;
                  v159 = 0;
                  if ( v73[3] )
                  {
                    ng = v73[3];
                    v158 = (void *)qalloc_or_throw(ng);
                    v159.m128i_i64[1] = ng;
                    memcpy(v158, (const void *)v73[2], ng);
                    v159.m128i_i64[0] = ng;
                  }
                  v160 = nullptr;
                  v161 = 0;
                  if ( v73[6] )
                  {
                    ne = v73[6];
                    v160 = (void *)qalloc_or_throw(ne);
                    v161.m128i_i64[1] = ne;
                    memcpy(v160, (const void *)v73[5], ne);
                    v161.m128i_i64[0] = ne;
                  }
                  v162 = 0;
                  copy_tinfo_t(&v162, v73 + 8);
                  v66 = v164;
                  v163 = *((_DWORD *)v73 + 18);
                  v67 = v165;
                  if ( *((_QWORD *)&v165 + 1) < (unsigned __int64)(v165 + 1) )
                  {
                    v164 = qvector_reserve(&v164, v164, v165 + 1, 80);
                    v66 = v164;
                    v67 = v165;
                  }
                  v68 = v66 + 80 * v67;
                  *(_DWORD *)v68 = 0;
                  copy_argloc(v68, v157);
                  v69 = v158;
                  v158 = nullptr;
                  v70 = _mm_loadu_si128(&v159);
                  *(_QWORD *)(v68 + 16) = v69;
                  *(__m128i *)(v68 + 24) = v70;
                  v71 = v160;
                  v72 = _mm_load_si128(&v161);
                  v159 = 0;
                  v160 = nullptr;
                  v161 = 0;
                  *(_QWORD *)(v68 + 40) = v71;
                  *(_QWORD *)(v68 + 64) = 0;
                  *(__m128i *)(v68 + 48) = v72;
                  copy_tinfo_t(v68 + 64, &v162);
                  *(_DWORD *)(v68 + 72) = v163;
                  *(_QWORD *)&v165 = v165 + 1;
                  clear_tinfo_t(&v162);
                  if ( v160 )
                  {
                    v161.m128i_i64[0] = 0;
                    qfree(v160);
                  }
                  if ( v158 )
                  {
                    v159.m128i_i64[0] = 0;
                    qfree(v158);
                  }
                  cleanup_argloc(v157);
                }
                v65 = ++v118;
              }
              while ( v118 < (unsigned __int64)v174 );
            }
            if ( !v122 && !(a4 & 0x8000000 | (v109 - 48) & 0xFFFFFFEF) && ((v113 - 48) & 0xFFFFFFEF) == 0 )
            {
              v74 = &v164;
              v64 = v109 == 64;
              goto LABEL_179;
            }
            v74 = &v164;
            goto LABEL_198;
          }
          v64 = v109 == 64;
          if ( v113 != 64 && v109 == 64 )
            goto LABEL_150;
          if ( v122 || a4 & 0x8000000 | (v109 - 48) & 0xFFFFFFEF )
          {
            v74 = (__int64 *)&v173;
            goto LABEL_205;
          }
          v74 = (__int64 *)&v173;
          if ( ((v113 - 48) & 0xFFFFFFEF) != 0 )
            goto LABEL_205;
LABEL_179:
          if ( *((_QWORD *)&v169 + 1) == *((_QWORD *)&v178 + 1) )
          {
            if ( v109 != 64 )
            {
              v75 = *((_QWORD *)&v169 + 1);
              if ( v113 == 64 )
                goto LABEL_184;
            }
            goto LABEL_205;
          }
          v75 = *((_QWORD *)&v178 + 1);
          if ( *((_QWORD *)&v169 + 1) <= *((_QWORD *)&v178 + 1) )
            v75 = *((_QWORD *)&v169 + 1);
          if ( *((_QWORD *)&v178 + 1) >= *((_QWORD *)&v169 + 1) && !(v111 & 1) && v64 )
            goto LABEL_150;
LABEL_184:
          if ( ((*((_QWORD *)&v169 + 1) >= *((_QWORD *)&v178 + 1)) & (((unsigned __int8)(v111 & 2) >> 1) ^ 1)) == 0
            || v113 != 64 )
          {
            v76 = v74[1];
            if ( !v76 )
              goto LABEL_238;
            v77 = 0;
            v78 = 0;
            do
            {
              v79 = *v74 + 80 * v78;
              if ( *(_DWORD *)v79 == 1 && *(_QWORD *)(v79 + 8) >= v75 )
                break;
              v78 = ++v77;
            }
            while ( v77 < v76 );
            sub_E69B0(v74, v78);
            v111 |= 4u;
            if ( !v74[1] )
            {
LABEL_238:
              if ( !under_debugger )
                sub_37E160(50222);
              goto LABEL_248;
            }
            v80 = *((_BYTE *)v74 + 88);
            v81 = v80 & 0xF0;
            if ( (v80 & 0xF0) == 0xC0 )
              v81 = *((_DWORD *)v74 + 7);
            if ( v81 <= 0x10 )
              v81 = getinf(99);
            if ( v81 != 64 )
            {
              v82 = *((_BYTE *)v74 + 88);
              LOBYTE(v111) = v111 | 4;
              *((_DWORD *)v74 + 7) = 0;
              *((_BYTE *)v74 + 88) = v82 & 0xF | 0x40;
              goto LABEL_198;
            }
LABEL_205:
            if ( !v111 )
            {
              v110 = v113 == 64 || v109 == 64;
              if ( v113 != 64 && v109 != 64 )
              {
                v30 = v179;
                if ( (unsigned __int64)v165 < (unsigned __int64)v174 && (a4 & 0x8000000) == 0 )
                  goto LABEL_62;
LABEL_77:
                if ( v30 )
                {
                  *(_QWORD *)&v180 = 0;
                  qfree(v30);
                }
                cleanup_argloc(&v177);
                clear_tinfo_t(&v176);
                v38 = v173;
                if ( v173 )
                {
                  if ( (_QWORD)v174 )
                  {
                    v97 = v5;
                    v39 = 0;
                    v40 = v174;
                    do
                    {
                      v41 = &v38[10 * v39];
                      clear_tinfo_t(v41 + 8);
                      v42 = v41[5];
                      if ( v42 )
                      {
                        v41[6] = 0;
                        qfree(v42);
                      }
                      v43 = v41[2];
                      if ( v43 )
                      {
                        v41[3] = 0;
                        qfree(v43);
                      }
                      ++v39;
                      cleanup_argloc(v41);
                      v38 = v173;
                    }
                    while ( v40 != v39 );
                    v5 = v97;
                  }
                  *(_QWORD *)&v174 = 0;
                  qfree(v38);
                }
                if ( v170 )
                {
                  *(_QWORD *)&v171 = 0;
                  qfree(v170);
                }
                cleanup_argloc(&v168);
                clear_tinfo_t(&v167);
                v44 = v164;
                if ( v164 )
                {
                  if ( (_QWORD)v165 )
                  {
                    v98 = v5;
                    v45 = 0;
                    v46 = v165;
                    do
                    {
                      v47 = (_QWORD *)(v44 + 80 * v45);
                      clear_tinfo_t(v47 + 8);
                      v48 = v47[5];
                      if ( v48 )
                      {
                        v47[6] = 0;
                        qfree(v48);
                      }
                      v49 = v47[2];
                      if ( v49 )
                      {
                        v47[3] = 0;
                        qfree(v49);
                      }
                      ++v45;
                      cleanup_argloc(v47);
                      v44 = v164;
                    }
                    while ( v46 != v45 );
                    v5 = v98;
                  }
                  *(_QWORD *)&v165 = 0;
                  qfree(v44);
                }
                clear_tinfo_t(&v149);
                clear_tinfo_t(&v148);
                if ( !(_BYTE)v110 )
                  goto LABEL_21;
                goto LABEL_46;
              }
              if ( (a4 & 0x8000000) != 0 )
              {
LABEL_150:
                LOBYTE(v110) = 0;
                v30 = v179;
                goto LABEL_77;
              }
              if ( (_DWORD)v166 != (_DWORD)v175 )
              {
                v30 = v179;
                if ( (unsigned __int64)v165 >= (unsigned __int64)v174 )
                {
                  LOBYTE(v110) = 0;
                  goto LABEL_77;
                }
LABEL_62:
                if ( v30 )
                {
                  *(_QWORD *)&v180 = 0;
                  qfree(v30);
                }
                cleanup_argloc(&v177);
                clear_tinfo_t(&v176);
                v32 = v173;
                if ( v173 )
                {
                  v33 = 0;
                  if ( (_QWORD)v174 )
                  {
                    v102 = v6;
                    v96 = v4;
                    v34 = v174;
                    do
                    {
                      v35 = &v32[10 * v33];
                      clear_tinfo_t(v35 + 8);
                      v36 = v35[5];
                      if ( v36 )
                      {
                        v35[6] = 0;
                        qfree(v36);
                      }
                      v37 = v35[2];
                      if ( v37 )
                      {
                        v35[3] = 0;
                        qfree(v37);
                      }
                      ++v33;
                      cleanup_argloc(v35);
                      v32 = v173;
                    }
                    while ( v34 != v33 );
                    v4 = v96;
                    v6 = v102;
                  }
                  *(_QWORD *)&v174 = 0;
                  qfree(v32);
                }
                goto LABEL_32;
              }
              if ( !under_debugger )
                sub_37E160(50225);
LABEL_248:
              BUG();
            }
LABEL_198:
            *(_QWORD *)v157 = 0;
            create_tinfo(v157, 12, 12, v74);
            v83 = &v148;
            if ( (v111 & 2) != 0 )
              v83 = &v149;
            if ( !(unsigned __int8)compare_tinfo(*(_QWORD *)v157, *v83, 32) )
            {
              v84 = *(_QWORD *)(v8 + 56);
              *(_QWORD *)(v8 + 56) = *(_QWORD *)v157;
              *(_QWORD *)v157 = v84;
              clear_tinfo_t(v157);
              v30 = v179;
              goto LABEL_77;
            }
            if ( !under_debugger )
              sub_37E160(50224);
            goto LABEL_248;
          }
        }
LABEL_174:
        v30 = v179;
        goto LABEL_62;
      }
LABEL_132:
      v111 = 0;
      goto LABEL_133;
    }
  }
LABEL_6:
  v164 = v5;
  v173 = &v164;
  v10 = sub_379E50((__m128i *)(a1 + 8), (unsigned __int64 *)&v164, &v173);
  v11 = v10 + 24;
  sub_367540((_QWORD *)(v10 + 32), (__int64)v150);
  copy_tinfo_t(v11 + 56, (char *)&v155 + 8);
  *(_QWORD *)(v11 + 64) = v156;
LABEL_22:
  v13 = 1;
LABEL_11:
  clear_tinfo_t((char *)&v155 + 8);
  v14 = (_QWORD **)v152;
  if ( v152 )
  {
    do
    {
      sub_366CD0(v14[3]);
      v15 = v14;
      v14 = (_QWORD **)v14[2];
      operator delete(v15, 0x28u);
    }
    while ( v14 );
  }
  return v13;
}
