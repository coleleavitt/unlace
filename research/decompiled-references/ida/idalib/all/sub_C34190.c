__int64 __fastcall sub_C34190(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  __m128i *v6; // r12
  unsigned __int64 v7; // r13
  __int16 v8; // ax
  unsigned __int64 v9; // rbp
  __int64 m128i_i64; // rsi
  __m128i *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  void **v16; // r15
  int *v17; // r13
  char *v18; // r14
  unsigned int v19; // ebp
  __int32 v20; // edx
  unsigned __int64 v21; // rax
  void **v22; // r9
  __m128i *v23; // r15
  __int64 v24; // rbx
  void *v25; // rcx
  char *v26; // rdx
  char *v27; // rsi
  char *v28; // rsi
  char *v29; // rax
  unsigned __int64 v30; // rdi
  int v31; // eax
  int v32; // ebx
  __int64 v33; // r15
  int v34; // ebx
  void *v35; // rax
  void *v36; // rdx
  int v37; // eax
  __int64 v38; // rbp
  __int64 v39; // rdx
  _QWORD *v40; // rax
  _QWORD *v41; // rcx
  _QWORD *v42; // rdx
  bool v43; // al
  unsigned __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rdx
  unsigned __int8 **v47; // rax
  char v48; // al
  unsigned int v49; // ebx
  unsigned __int64 v51; // rbp
  int v52; // eax
  _WORD *v53; // r15
  _WORD *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rcx
  _QWORD *v58; // rdx
  __m128i si128; // xmm1
  __int64 v60; // rbp
  unsigned __int64 v61; // r15
  __int64 v62; // rbx
  unsigned __int64 v63; // r14
  __m128i *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // r12
  unsigned __int64 v71; // r14
  __int64 v72; // rdx
  unsigned int v73; // r15d
  _DWORD *v74; // r15
  unsigned __int8 **v75; // rax
  unsigned __int8 **v76; // rbx
  void *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  unsigned int v81; // ebp
  unsigned __int64 v82; // rbx
  unsigned __int8 **v83; // rax
  unsigned __int8 **v84; // r15
  unsigned __int8 **v85; // rax
  unsigned int v86; // eax
  int v87; // ecx
  __int64 v88; // rcx
  unsigned __int64 v89; // r15
  unsigned __int64 v90; // rbx
  unsigned __int8 **v91; // rax
  unsigned __int8 **v92; // rbp
  __m128i v93; // xmm3
  _QWORD *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 *v97; // r8
  __m128i *v98; // r10
  char v99; // al
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 *v106; // r10
  __m128i *v107; // r8
  __int64 v108; // r14
  __int64 v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rax
  int v112; // eax
  char v113; // dl
  unsigned __int64 v114; // rax
  __int64 *v115; // r10
  __int64 v116; // rax
  __int64 *v117; // rdx
  __int64 i; // r15
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r9
  __int64 v124; // r15
  __int64 v125; // r9
  unsigned __int64 v126; // r15
  __int64 v127; // rax
  unsigned __int64 *v128; // rax
  char v129; // al
  char v130; // al
  __int64 v131; // rax
  unsigned __int64 v132; // r12
  unsigned int v133; // eax
  __int64 v134; // rsi
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  unsigned __int8 **v139; // rax
  __int64 v140; // r10
  unsigned __int8 **v141; // rbx
  __int64 v142; // rax
  __int64 v143; // r9
  unsigned __int8 **v144; // rax
  unsigned __int8 **v145; // rbx
  unsigned __int64 v147; // [rsp+10h] [rbp-1E8h]
  _QWORD *v148; // [rsp+18h] [rbp-1E0h]
  int v149; // [rsp+18h] [rbp-1E0h]
  __int64 v150; // [rsp+18h] [rbp-1E0h]
  __int64 v151; // [rsp+18h] [rbp-1E0h]
  __int64 v152; // [rsp+18h] [rbp-1E0h]
  unsigned int v153; // [rsp+20h] [rbp-1D8h]
  __int64 v154; // [rsp+20h] [rbp-1D8h]
  _DWORD *v155; // [rsp+28h] [rbp-1D0h] BYREF
  __m128 v156; // [rsp+30h] [rbp-1C8h] BYREF
  void **v157; // [rsp+40h] [rbp-1B8h]
  char *v158; // [rsp+48h] [rbp-1B0h]
  char *v159; // [rsp+50h] [rbp-1A8h]
  int *v160; // [rsp+58h] [rbp-1A0h]
  __m128i *v161; // [rsp+60h] [rbp-198h]
  _QWORD **v162; // [rsp+68h] [rbp-190h]
  void **v163; // [rsp+70h] [rbp-188h]
  _QWORD *v164; // [rsp+78h] [rbp-180h]
  __int64 *v165; // [rsp+80h] [rbp-178h]
  __m128i *v166; // [rsp+88h] [rbp-170h]
  __m128i *v167; // [rsp+90h] [rbp-168h]
  __m128i *v168; // [rsp+98h] [rbp-160h]
  __m128i v169; // [rsp+A0h] [rbp-158h] BYREF
  unsigned int *v170; // [rsp+B0h] [rbp-148h]
  unsigned __int64 v171; // [rsp+B8h] [rbp-140h]
  __m128i v172; // [rsp+C0h] [rbp-138h] BYREF
  _QWORD *v173; // [rsp+D0h] [rbp-128h] BYREF
  unsigned __int64 v174; // [rsp+D8h] [rbp-120h]
  void *v175[2]; // [rsp+E0h] [rbp-118h] BYREF
  _QWORD *v176; // [rsp+F0h] [rbp-108h]
  __int64 v177; // [rsp+F8h] [rbp-100h]
  void *v178; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v179; // [rsp+108h] [rbp-F0h]
  char v180; // [rsp+110h] [rbp-E8h] BYREF
  int v181; // [rsp+150h] [rbp-A8h] BYREF
  __int64 v182; // [rsp+158h] [rbp-A0h]
  __int64 v183; // [rsp+160h] [rbp-98h]
  void *ptr; // [rsp+168h] [rbp-90h]
  __int64 v185; // [rsp+170h] [rbp-88h]

  v5 = *(_DWORD *)(a3 + 56);
  v163 = &v178;
  v178 = &v180;
  v179 = 0x400000000LL;
  if ( !a2 )
    return 1;
  v155 = (_DWORD *)a2;
  v6 = (__m128i *)a3;
  v7 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_WORD *)v7 & 0x1FF;
      if ( v8 != 46 )
        break;
      v9 = *(_QWORD *)(v7 + 24);
      if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 49 > 2 )
        goto LABEL_6;
      a3 = *(_QWORD *)(v9 + 48);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 <= 1 )
        goto LABEL_6;
      a4 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
        a4 = *(_QWORD *)a4;
      if ( (*(_BYTE *)(a4 + 8) & 0x7Fu) - 58 > 3 )
        BUG();
      --v5;
      if ( *(_BYTE *)(a4 + 9) >> 5 == 2 )
      {
        v117 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
        for ( i = *v117; ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
        {
          if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) > 4u )
          {
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
              || (v119 = sub_F63050(i, a2, v117, a4)) == 0 )
            {
              v120 = sub_F63270(i);
              v124 = v120;
              if ( !v120
                || ((sub_7052B0(
                       (__int64 *)(*(_QWORD *)(v120 + 104) + 96LL),
                       *(_QWORD *)(v120 + 104),
                       v121,
                       v122,
                       a5,
                       v123),
                     (*(_BYTE *)(*(_QWORD *)(v124 + 128) + 9LL) & 1) != 0)
                 || (sub_7052B0((__int64 *)(*(_QWORD *)(v124 + 104) + 96LL), *(_QWORD *)(v124 + 104), a3, a4, a5, v125),
                     (**(_BYTE **)(v124 + 128) & 1) == 0)
                 && (sub_7052B0((__int64 *)(*(_QWORD *)(v124 + 104) + 96LL), *(_QWORD *)(v124 + 104), a3, a4, a5, v125),
                     v142 = *(_QWORD *)(v124 + 128),
                     (*(_BYTE *)(v142 + 9) & 1) == 0)
                 && ((*(_BYTE *)(v142 + 10) & 0x20) == 0 || (unsigned __int8)sub_B96D80(v124))
                 || (a2 = *(_QWORD *)(v124 + 104),
                     sub_7052B0((__int64 *)(a2 + 96), a2, a3, a4, a5, v125),
                     (*(_BYTE *)(*(_QWORD *)(v124 + 128) + 3LL) & 8) != 0)
                 && (a2 = *(_QWORD *)(v124 + 104),
                     sub_7052B0((__int64 *)(a2 + 96), a2, a3, a4, a5, v143),
                     (*(_BYTE *)(*(_QWORD *)(v124 + 128) + 9LL) & 1) == 0))
                && (a2 = *(_QWORD *)(v124 + 104),
                    sub_7052B0((__int64 *)(a2 + 96), a2, a3, a4, a5, v125),
                    *(char *)(*(_QWORD *)(v124 + 128) + 4LL) < 0) )
              {
                a4 = HIDWORD(v179);
                v126 = v5 | v147 & 0xFFFFFFFF00000000LL;
                v127 = (unsigned int)v179;
                v147 = v126;
                a3 = (unsigned int)v179 + 1LL;
                if ( a3 > HIDWORD(v179) )
                {
                  a2 = (__int64)(v163 + 2);
                  sub_2237220(v163, v163 + 2, a3, 16);
                  v127 = (unsigned int)v179;
                }
                v128 = (unsigned __int64 *)((char *)v178 + 16 * v127);
                *v128 = v126;
                v128[1] = v9;
                LODWORD(v179) = v179 + 1;
              }
              break;
            }
            i = v119;
          }
        }
      }
      v7 = *(_QWORD *)(v7 + 16);
LABEL_68:
      if ( !v7 )
        goto LABEL_6;
    }
    if ( v8 != 123 )
    {
      if ( v8 != 79 )
        break;
      v51 = *(_QWORD *)(v7 + 16);
      v52 = (*(_WORD *)(v7 + 2) >> 3) & 0x7F;
      if ( v52 != 5 )
      {
        if ( (unsigned int)(v52 - 7) > 1 )
          break;
        v53 = &sub_BFA620((_WORD *)v7)[4 * *(unsigned int *)(v7 + 4)];
        v54 = sub_BFA620((_WORD *)v7);
        if ( v53 != v54 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v53 - 1) + 12LL) & 1) != 0 )
            break;
          a3 = (unsigned __int64)(v53 - 4);
          while ( 1 )
          {
            --v5;
            a4 = a3;
            if ( v54 == (_WORD *)a3 )
              break;
            v55 = *(_QWORD *)(a3 - 8);
            a3 -= 8LL;
            if ( (*(_BYTE *)(v55 + 12) & 1) != 0 )
              goto LABEL_6;
          }
        }
      }
      v7 = v51;
      goto LABEL_68;
    }
    v44 = sub_9EC890(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5)
        ? *(_QWORD *)(v7 + 16)
        : *(_QWORD *)(v7 + 24);
    v7 = sub_BFB900(v44);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) > 4u )
      break;
    --v5;
  }
LABEL_6:
  if ( !(_DWORD)v179 )
  {
LABEL_50:
    v16 = (void **)v178;
    v49 = 1;
    goto LABEL_51;
  }
  m128i_i64 = a1;
  v11 = &v169;
  v12 = *((_QWORD *)v155 + 1);
  v167 = &v169;
  sub_C1C470(&v169, a1, v155, 2u, v6, v12);
  if ( (v171 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_80;
  v15 = 16LL * (unsigned int)v179;
  v158 = (char *)v178;
  v16 = (void **)((char *)v178 + v15);
  if ( v178 == (char *)v178 + v15 )
  {
    v49 = 1;
    goto LABEL_51;
  }
  v17 = &v181;
  v18 = (char *)v178 + v15;
  v162 = &v173;
  v156 = _mm_loadh_ps((const double *)&v155);
LABEL_10:
  v19 = *((_DWORD *)v18 - 4);
  v20 = v6[3].m128i_i32[2];
  v148 = *((_QWORD **)v18 - 1);
  v181 = v6[1].m128i_i32[2];
  v182 = v6[2].m128i_i64[0];
  v183 = v6[2].m128i_i64[1];
  ptr = v17 + 10;
  v185 = 0x800000000LL;
  v21 = 0;
  if ( v20 )
  {
    m128i_i64 = (__int64)v6[3].m128i_i64;
    v11 = (__m128i *)(v17 + 6);
    sub_C25E10((__int64 *)v17 + 3, v6[3].m128i_i64);
    v21 = (unsigned int)v185;
    v20 = v185;
  }
  v22 = (void **)v6->m128i_i64[1];
  v23 = *(__m128i **)(a1 + 16);
  v24 = v6->m128i_i64[0];
  if ( (v181 & 1) == 0 )
  {
    v14 = v19;
    if ( v19 != v20 )
    {
      if ( v19 == v21 )
      {
        v25 = ptr;
        LODWORD(v14) = v21;
      }
      else if ( v19 < v21 )
      {
        LODWORD(v185) = v19;
        v25 = ptr;
      }
      else
      {
        if ( v19 > (unsigned __int64)HIDWORD(v185) )
        {
          v157 = (void **)v6->m128i_i64[1];
          sub_2237220(v17 + 6, v17 + 10, v19, 8);
          v22 = v157;
          v14 = v19;
          v21 = (unsigned int)v185;
        }
        v25 = ptr;
        v26 = (char *)ptr + 8 * v21;
        v27 = (char *)ptr + 8 * v14;
        if ( v26 != v27 )
        {
          v28 = v27 - 8;
          v29 = (char *)ptr + 8 * v21;
          v30 = ((unsigned __int64)(v28 - v26) >> 3) + 1;
          if ( v26 == v28 )
            goto LABEL_22;
          do
          {
            *(_OWORD *)v29 = 0;
            v29 += 16;
          }
          while ( v29 != &v26[16 * (v30 >> 1)] );
          v26 += 8 * (v30 & 0xFFFFFFFFFFFFFFFELL);
          if ( v30 != (v30 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_22:
            *(_QWORD *)v26 = 0;
        }
        LODWORD(v185) = v19;
      }
      m128i_i64 = v24;
      v11 = v23;
      v172.m128i_i8[0] = 0;
      LOBYTE(v175[0]) = 0;
      v31 = sub_C134E0(v23, v24, (__int64)v22, (__int64)v25, v14, (_QWORD *)v17 + 1, (__int64 *)v17 + 2, &v172, v175);
      v24 = v6->m128i_i64[0];
      v22 = (void **)v6->m128i_i64[1];
      v13 = 8 * (v172.m128i_i8[0] & 1u);
      v181 = (16 * v31) | v181 & 0xF;
      LOBYTE(v181) = (4 * ((__int64)v175[0] & 1)) | (8 * (v172.m128i_i8[0] & 1)) | v181 & 0xF3;
      v21 = (unsigned int)v185;
    }
  }
  v174 = v21;
  v172.m128i_i64[0] = v24;
  v32 = *(_DWORD *)(a1 + 840);
  v172.m128i_i64[1] = (__int64)v22;
  v173 = ptr;
  if ( v32 )
  {
    v33 = *(_QWORD *)(a1 + 824);
    v34 = v32 - 1;
    v35 = (void *)sub_A4F710(v11, m128i_i64, ptr, v13, v14);
    v176 = nullptr;
    v175[0] = v35;
    v175[1] = v36;
    v177 = 0;
    v37 = sub_C2F3C0((unsigned __int64 *)&v172, (__int64)v162);
    LODWORD(v159) = 1;
    v153 = v34 & v37;
    v157 = v175;
    while ( 1 )
    {
      v38 = v33 + 40LL * v153;
      if ( sub_A4F650(&v172, (_QWORD *)v38) && v174 == *(_QWORD *)(v38 + 24) )
      {
        v56 = v173;
        v57 = &v173[v174];
        if ( v173 == v57 )
          goto LABEL_76;
        v58 = *(_QWORD **)(v38 + 16);
        if ( *v173 == *v58 )
        {
          while ( 1 )
          {
            ++v56;
            ++v58;
            if ( v57 == v56 )
              break;
            if ( *v56 != *v58 )
              goto LABEL_28;
          }
LABEL_76:
          v43 = *(_DWORD *)(v38 + 32) == 2;
          goto LABEL_77;
        }
      }
LABEL_28:
      if ( sub_A4F650((_QWORD *)v38, v157) )
      {
        v39 = *(_QWORD *)(v38 + 24);
        if ( v39 == v177 )
        {
          v40 = *(_QWORD **)(v38 + 16);
          v41 = &v40[v39];
          if ( v40 == v41 )
            goto LABEL_35;
          v42 = v176;
          if ( *v176 == *v40 )
            break;
        }
      }
LABEL_199:
      v153 = v34 & ((_DWORD)v159 + v153);
      LODWORD(v159) = (_DWORD)v159 + 1;
    }
    while ( 1 )
    {
      ++v40;
      ++v42;
      if ( v41 == v40 )
        break;
      if ( *v40 != *v42 )
        goto LABEL_199;
    }
  }
LABEL_35:
  v43 = 0;
LABEL_77:
  si128 = _mm_load_si128((const __m128i *)&v156);
  m128i_i64 = (unsigned __int8)v181;
  v174 = v43;
  v172 = si128;
  v173 = v148;
  if ( (v181 & 1) != 0 )
    goto LABEL_78;
  if ( sub_C105C0((__int64)v17) || (v149 = v185, (_DWORD)v185 == 1) && (m128i_i64 &= 4u, (_DWORD)m128i_i64) )
  {
    v45 = a1;
    if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) != 0 )
    {
      v46 = !sub_C105C0((__int64)v17) ? 2375 : 2370;
LABEL_44:
      m128i_i64 = (__int64)v155;
      v47 = (unsigned __int8 **)sub_E33C10(v45, v155, v46, 0);
      if ( v47 )
      {
        m128i_i64 = 2;
        sub_C11320(v47, 2);
      }
    }
    else
    {
LABEL_200:
      m128i_i64 = (__int64)v155;
      sub_E33C10(a1, v155, 108, 0);
    }
    goto LABEL_46;
  }
  v60 = (__int64)v170;
  v61 = v171;
  v13 = *v170;
  if ( !(_DWORD)v13 )
  {
LABEL_109:
    if ( !*(_BYTE *)(a1 + 914) )
    {
      v74 = v155;
      m128i_i64 = (__int64)v155;
      v75 = (unsigned __int8 **)sub_E33C10(a1, v155, 2372, 0);
      v76 = v75;
      if ( v75 )
      {
        sub_C11320(v75, 2);
        sub_C11320(v76, *(_DWORD *)v60 == 1);
        v77 = (void *)sub_EEC8C0(v74);
        m128i_i64 = (__int64)v175;
        LOBYTE(v175[1]) = 1;
        v175[0] = v77;
        sub_AEC610((__int64 *)v76, (__int64 *)v175);
      }
    }
    goto LABEL_46;
  }
  v159 = v18;
  v62 = 0;
  v164 = nullptr;
  v160 = v17;
  v17 = (int *)a1;
  v165 = (__int64 *)(a1 + 824);
  v161 = v6;
  v6 = nullptr;
  LODWORD(v157) = v185 - 1;
LABEL_85:
  v63 = v61 & 7;
  v64 = (__m128i *)(v61 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v61 & 1) != 0
    || (v65 = *(_QWORD *)&byte_8[v61 & 0xFFFFFFFFFFFFFFF0LL] & 1LL,
        (m128i_i64 = (unsigned int)v65 | v61 & 4 | *(_QWORD *)&byte_8[v61 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v64->m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
      goto LABEL_142;
  }
  while ( 1 )
  {
    if ( v149 != (_DWORD)v62 )
    {
      v14 = v61 & 0xFFFFFFFFFFFFFFF0LL;
      v66 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL);
      v67 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (_DWORD)v157 != (_DWORD)v62 )
      {
        v68 = (unsigned int)(v67 - 2);
        if ( (unsigned __int8)(v67 - 2) <= 4u )
          goto LABEL_91;
        goto LABEL_137;
      }
      if ( (_BYTE)v67 != 14 )
      {
        v67 = (unsigned int)(v67 - 2);
        if ( (unsigned __int8)v67 > 4u )
        {
LABEL_128:
          v87 = *(unsigned __int8 *)(v66 + 16);
          v166 = (__m128i *)v14;
          v88 = (unsigned int)(v87 - 57);
          if ( (unsigned int)v88 > 1 )
          {
            v66 = sub_C10A30(v66, m128i_i64, v67, v88);
            v97 = (__int64 *)v166;
            if ( !v66 )
            {
              v98 = (__m128i *)(*((_QWORD *)ptr + (unsigned int)v62) & 0xFFFFFFFFFFFFFFF8LL);
              v6 = v98;
              if ( v98 && (v98[1].m128i_i8[12] & 0x7Fu) - 49 <= 2 )
              {
                if ( (v98[4].m128i_i8[4] & 2) != 0 )
                {
                  m128i_i64 = (__int64)v17;
                  v168 = (__m128i *)(*((_QWORD *)ptr + (unsigned int)v62) & 0xFFFFFFFFFFFFFFF8LL);
                  v99 = sub_C118B0(v167->m128i_i64, (__int64)v17, 2u);
                  v97 = (__int64 *)v166;
                  v98 = v168;
                  if ( !v99 )
                  {
                    v18 = v159;
                    v17 = v160;
                    v151 = (__int64)v168;
                    v6 = v161;
                    v139 = (unsigned __int8 **)sub_E33C10(a1, v155, 2368, 1);
                    v140 = v151;
                    v141 = v139;
                    if ( v139 )
                    {
                      sub_C11320(v139, 2);
                      sub_AE9DF0(v141, v151, 0xAu);
                      v140 = v151;
                    }
                    m128i_i64 = *(unsigned int *)(v140 + 24);
                    sub_E33DB0(a1, m128i_i64, 103);
                    v48 = BYTE1(v174);
                    goto LABEL_47;
                  }
                }
                v100 = *v97;
                v166 = v98;
                v101 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(v100 + 8) & 0xFFFFFFFFFFFFFFF0LL), m128i_i64, v95, v96, v97);
                v106 = (__int64 *)v166;
                if ( *(_BYTE *)(v101 + 73) >> 5 == 2 )
                {
                  v107 = *(__m128i **)(v60 + 8);
                  if ( !v107 )
                    goto LABEL_218;
                  v108 = *(_QWORD *)(v60 + 8);
                  if ( v107[1].m128i_i8[13] < 0 )
                  {
                    v109 = *(_QWORD *)(v60 + 8);
                    v168 = v166;
                    v166 = v107;
                    v110 = sub_B72720(v109);
                    v106 = (__int64 *)v168;
                    v107 = v166;
                    v108 = v110;
                  }
                  v111 = (__int64)v106;
                  if ( *((char *)v106 + 29) < 0 )
                  {
                    v168 = v107;
                    v166 = (__m128i *)v106;
                    v111 = sub_B72720((__int64)v106);
                    v107 = v168;
                    v106 = (__int64 *)v166;
                  }
                  if ( v111 != v108 )
                  {
LABEL_218:
                    m128i_i64 = (__int64)v155;
                    v18 = v159;
                    v17 = v160;
                    v154 = (__int64)v107;
                    v152 = (__int64)v106;
                    v6 = v161;
                    v144 = (unsigned __int8 **)sub_E33C10(a1, v155, 2367, 0);
                    v145 = v144;
                    if ( v144 )
                    {
                      sub_C11320(v144, 2);
                      sub_AE9DF0(v145, v152, 0xAu);
                      sub_C11320(v145, v154 == 0);
                      m128i_i64 = v154;
                      sub_AE9DF0(v145, v154, 0xAu);
                    }
                    goto LABEL_46;
                  }
                  v60 = *(_QWORD *)(v60 + 16);
                }
                else
                {
                  v112 = sub_C1D4D0((__int64)v166, m128i_i64, v102, v103, v104, v105);
                  v106 = (__int64 *)v166;
                  v60 = *(_QWORD *)(v60 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v60 + 16) + v112);
                }
                v113 = *((_BYTE *)v106 + 68);
                m128i_i64 = v106[6];
                v166 = (__m128i *)v106;
                v114 = sub_C0F760(v61, m128i_i64, (v113 & 2) != 0);
                v115 = (__int64 *)v166;
                v61 = v114;
                v116 = v166[3].m128i_i64[0];
                if ( (v116 & 4) != 0 )
                {
                  v164 = v166->m128i_i64;
                }
                else
                {
                  if ( (byte_8[v116 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
                    v115 = v164;
                  v164 = v115;
                }
              }
              else
              {
                v131 = sub_F63270(v166->m128i_i64[0]);
                v132 = *((_QWORD *)ptr + (unsigned int)v62) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v132
                  && (*(_BYTE *)((*((_QWORD *)ptr + (unsigned int)v62) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 59 >= 3 )
                {
                  v132 = 0;
                }
                v133 = sub_C30BC0(v131, v132);
                v134 = v132;
                v6 = nullptr;
                v135 = *(_QWORD *)(v60 + 8);
                v60 = v135 + 56LL * v133;
                m128i_i64 = sub_A7A9D0(*((_QWORD *)v17 + 2), v134, v136, v135, v137, v138);
                v61 = sub_C0F760(v61, m128i_i64, 0);
              }
              goto LABEL_107;
            }
          }
          v89 = *(unsigned int *)(v66 + 20);
          v18 = v159;
          v17 = v160;
          v90 = *((_QWORD *)ptr + (unsigned int)v62);
          v6 = v161;
          if ( v90 == v89 )
            goto LABEL_98;
          if ( v90 <= v89 )
          {
            m128i_i64 = *(_QWORD *)(v60 + 8) + 56LL * (unsigned int)v90;
            v48 = sub_C26C90((__int64)&v172, m128i_i64);
            goto LABEL_47;
          }
          m128i_i64 = (__int64)v155;
          v91 = (unsigned __int8 **)sub_E33C90(a1, v155, 2381, 0);
          v92 = v91;
          if ( v91 )
          {
            sub_AE9DF0(v91, v90, 3u);
            sub_C11320(v92, 0);
            m128i_i64 = v89;
            sub_AE9DF0(v92, v89, 3u);
          }
LABEL_46:
          v48 = BYTE1(v174);
LABEL_47:
          if ( !v48 )
            goto LABEL_78;
LABEL_48:
          v11 = (__m128i *)ptr;
          if ( ptr == v17 + 10 )
          {
            v18 -= 16;
            if ( v158 == v18 )
              goto LABEL_50;
          }
          else
          {
            free(ptr);
            v18 -= 16;
            if ( v158 == v18 )
              goto LABEL_50;
          }
          goto LABEL_10;
        }
LABEL_91:
        v69 = sub_A72040(*((_QWORD **)v17 + 2), v61);
        v70 = v69;
        if ( !v69 || (unsigned int)*(unsigned __int8 *)(v69 + 16) - 2 > 1 )
          BUG();
        m128i_i64 = *(_QWORD *)(v69 + 40);
        v71 = *((_QWORD *)ptr + (unsigned int)v62);
        v72 = *(unsigned __int8 *)(v69 + 19);
        if ( (v72 & 2) != 0 )
        {
          LODWORD(v175[1]) = *(_DWORD *)(m128i_i64 + 8);
          if ( LODWORD(v175[1]) <= 0x40 )
          {
            v175[0] = *(void **)m128i_i64;
            goto LABEL_96;
          }
          sub_2205510(v175);
          v73 = (unsigned int)v175[1];
        }
        else
        {
          v72 = ((unsigned __int8)v72 >> 2) & 0x1F;
          v73 = 8 * v72;
          LODWORD(v175[1]) = 8 * v72;
          if ( 8 * (int)v72 > 64 )
          {
            sub_2205470(v175, m128i_i64, 0);
            v73 = (unsigned int)v175[1];
          }
          else
          {
            v175[0] = (void *)m128i_i64;
          }
        }
        if ( v73 > 0x40 )
        {
          v72 = v73 - (unsigned int)sub_2206780(v175);
          if ( (unsigned int)v72 <= 0x40 )
          {
            if ( v71 >= *(_QWORD *)v175[0] )
            {
              v18 = v159;
              v17 = v160;
              v6 = v161;
              if ( v175[0] )
                operator delete[](v175[0]);
              goto LABEL_98;
            }
          }
          else if ( !v175[0] )
          {
            goto LABEL_105;
          }
          operator delete[](v175[0]);
LABEL_105:
          v61 = *(_QWORD *)(v70 + 32);
          if ( v71 >= *(unsigned int *)(v60 + 16) )
          {
            v86 = sub_C00A40((unsigned __int64)v155, m128i_i64, v72, v13, v14);
            m128i_i64 = v70;
            if ( !(unsigned __int8)sub_C19980((__int64)v17, v70, v86) )
              goto LABEL_184;
            m128i_i64 = (unsigned int)v71;
            v6 = nullptr;
            sub_C0FCF0(v60, v71);
            v14 = (unsigned int)v71;
            v60 = *(_QWORD *)(v60 + 8) + 56LL * (unsigned int)v71;
          }
          else
          {
            v6 = nullptr;
            v60 = *(_QWORD *)(v60 + 8) + 56 * v71;
          }
LABEL_107:
          v62 = (unsigned int)(v62 + 1);
          if ( !*(_DWORD *)v60 )
          {
            v18 = v159;
            v17 = v160;
            v6 = v161;
            goto LABEL_109;
          }
          goto LABEL_85;
        }
LABEL_96:
        if ( (void *)v71 >= v175[0] )
        {
          v18 = v159;
          v17 = v160;
          v6 = v161;
LABEL_98:
          v45 = a1;
          if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) == 0 )
            goto LABEL_200;
          v46 = 2370;
          goto LABEL_44;
        }
        goto LABEL_105;
      }
    }
    if ( (v61 & 4) != 0 || (v14 = v61 & 0xFFFFFFFFFFFFFFF0LL, (byte_8[v61 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
    {
      v18 = v159;
      v17 = v160;
      v6 = v161;
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) == 0 )
        goto LABEL_200;
      v81 = 0;
      if ( v164 )
      {
        v81 = *((_DWORD *)v164 + 6);
        v82 = 2;
      }
      else
      {
        v82 = v169.m128i_i64[0];
        if ( v169.m128i_i64[0] )
        {
          if ( (v169.m128i_i8[0] & 3) != 0 )
          {
            if ( (v169.m128i_i8[0] & 3) == 1 )
            {
              v82 = v169.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
              if ( (v169.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              {
                v82 = 0;
                v81 = sub_C00A40(v169.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, m128i_i64, v78, v79, v80);
              }
            }
            else
            {
              v82 = 0;
            }
          }
          else
          {
            v82 = v169.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
            if ( (v169.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              v164 = (_QWORD *)(v169.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
              v81 = *(_DWORD *)(v82 + 24);
              v82 = 1;
            }
          }
        }
      }
      v83 = (unsigned __int8 **)sub_E33C10(a1, v155, 2376, 1);
      v84 = v83;
      if ( v83 )
      {
        sub_C11320(v83, 2);
        sub_C11320(v84, v82);
        sub_AE9DF0(v84, (__int64)v164, 0xAu);
      }
      m128i_i64 = v81;
      v85 = (unsigned __int8 **)sub_E33DB0(a1, v81, 2506);
      if ( v85 )
      {
        m128i_i64 = v82;
        sub_C11320(v85, v82);
      }
      goto LABEL_46;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
    {
      m128i_i64 = (__int64)v17;
      v166 = (__m128i *)(v61 & 0xFFFFFFFFFFFFFFF0LL);
      v129 = sub_C118B0(v167->m128i_i64, (__int64)v17, 2u);
      v14 = (unsigned __int64)v166;
      if ( !v129 )
      {
        m128i_i64 = (__int64)v155;
        v130 = sub_C287E0((__int64)v17, (__int64)v155, 2, v61);
        v14 = (unsigned __int64)v166;
        if ( v130 )
        {
LABEL_184:
          v18 = v159;
          v17 = v160;
          v6 = v161;
          v48 = BYTE1(v174);
          goto LABEL_47;
        }
      }
    }
    if ( v149 == (_DWORD)v62 )
      break;
    v66 = *(_QWORD *)v14;
    v67 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    v68 = (unsigned int)(v67 - 2);
    if ( (unsigned __int8)(v67 - 2) <= 4u )
      goto LABEL_91;
LABEL_137:
    if ( (_BYTE)v67 != 14 )
      goto LABEL_128;
    v18 = v159;
    v17 = v160;
    v6 = v161;
    if ( *((_QWORD *)ptr + v62) > 1u )
      goto LABEL_98;
    v63 = v61;
    if ( *(_BYTE *)(v66 + 16) != 14 )
      v66 = sub_F63050(v66, m128i_i64, ptr, v68);
    sub_C0F760(v61, *(_QWORD *)(v66 + 32), 0);
LABEL_142:
    m128i_i64 = (__int64)v175;
    v166 = v64;
    v93 = _mm_load_si128(&v169);
    v176 = ptr;
    *(__m128i *)v175 = v93;
    v177 = (unsigned int)v62;
    v94 = sub_C2F440(v165, (unsigned __int64 *)v175);
    if ( v94 && *((_DWORD *)v94 + 8) )
      v61 = v166->m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL | v63 & 0xFFFFFFFFFFFFFFF8LL | v166->m128i_i8[8] & 2 | v63 & 2;
  }
  m128i_i64 = v60;
  v150 = (__int64)v6;
  v18 = v159;
  v17 = v160;
  v6 = v161;
  if ( (unsigned __int8)sub_C26C90((__int64)&v172, v60) )
  {
    if ( !v150 )
      goto LABEL_48;
    if ( (*(_BYTE *)(v150 + 68) & 1) == 0 )
      goto LABEL_48;
    m128i_i64 = (__int64)v155;
    if ( (unsigned __int8)sub_C12D50(a1, (__int64)v155, v60, v150) )
      goto LABEL_48;
  }
LABEL_78:
  if ( ptr != v17 + 10 )
    free(ptr);
LABEL_80:
  v16 = (void **)v178;
  v49 = 0;
LABEL_51:
  if ( v16 != v163 + 2 )
    free(v16);
  return v49;
}
