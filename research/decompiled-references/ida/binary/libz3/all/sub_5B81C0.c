__int64 __fastcall sub_5B81C0(unsigned int *a1, __int64 a2, __int64 *a3)
{
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  unsigned int *v6; // rbp
  unsigned int *v7; // r9
  unsigned int *v8; // r12
  unsigned int v9; // r14d
  size_t v10; // r13
  __int64 v11; // rax
  __m128i v12; // xmm2
  __int64 v13; // r15
  char *v14; // r14
  unsigned __int64 v15; // xmm1_8
  size_t v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _DWORD *v19; // r13
  size_t v20; // rdx
  unsigned int v21; // r15d
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  void *v26; // r15
  size_t v27; // rdx
  int v28; // eax
  int v29; // eax
  char *v30; // rcx
  int v31; // r15d
  __int64 v32; // rdx
  char *v33; // r8
  char *v34; // rdx
  int *v35; // rbx
  int v36; // eax
  unsigned int *v37; // rax
  __int64 v38; // rsi
  _DWORD *v39; // rsi
  __int64 v40; // r10
  __int64 v41; // rax
  __int64 v42; // rbx
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 *v47; // rcx
  int v49; // eax
  _DWORD *v50; // rax
  __int64 v51; // rdx
  _DWORD *v52; // rsi
  _DWORD *v53; // rdx
  __int64 v54; // rdx
  unsigned int v55; // r12d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rcx
  unsigned int *v59; // rax
  unsigned int *v60; // rdx
  char *v61; // rsi
  __int64 v62; // rdx
  char *v63; // r8
  unsigned int *v64; // rax
  unsigned int *v65; // rdx
  unsigned int v66; // edi
  __int64 v67; // rdx
  unsigned int *v68; // rsi
  unsigned int *v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rsi
  char *v72; // r12
  char *v73; // rbp
  char *v74; // rbx
  __int64 v75; // rdi
  size_t v76; // r9
  _BYTE *v77; // r14
  size_t v78; // r11
  void *v79; // rcx
  _QWORD *v80; // rsi
  size_t v81; // rdx
  __int64 v82; // r14
  unsigned int v83; // r15d
  __int64 v84; // rax
  unsigned int *v85; // r10
  __int64 v86; // r14
  _QWORD *v87; // rdx
  unsigned int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  __int64 *v91; // rcx
  _QWORD *v92; // r14
  __int64 v93; // rax
  unsigned int **v94; // r15
  unsigned int v95; // r12d
  __int64 v96; // rax
  __int64 v97; // rdx
  size_t v98; // rdx
  bool v99; // zf
  unsigned int *v100; // rcx
  unsigned int v101; // r12d
  __int64 v102; // rax
  unsigned int *v103; // rcx
  size_t v104; // rdx
  __int64 v105; // rax
  unsigned int v106; // esi
  __int64 v107; // r12
  unsigned int **v108; // r15
  unsigned int v109; // eax
  __int64 v110; // rdi
  __int64 v111; // rdx
  unsigned int **v112; // r13
  unsigned int *v113; // rdi
  __int64 v114; // rsi
  unsigned int *v115; // rdi
  unsigned int v116; // r15d
  unsigned int v117; // ecx
  unsigned int *v118; // rax
  __int64 v119; // rcx
  size_t v120; // r14
  unsigned __int64 v121; // rdi
  __int64 v122; // rax
  _BYTE *v123; // r8
  unsigned int v124; // edx
  __int64 *v125; // r15
  __int64 v126; // rdi
  __int64 v127; // rdx
  __int64 *v128; // rax
  __int64 *v129; // rsi
  __int64 v130; // rcx
  __int64 v131; // rcx
  __int64 *v132; // r13
  __int64 v133; // rdi
  _OWORD *v134; // rdx
  _OWORD *v135; // rax
  char *v136; // rsi
  __int64 v137; // rdx
  _QWORD *v138; // r14
  unsigned __int64 v139; // rdx
  __int64 v140; // rdi
  _QWORD *v141; // rsi
  _QWORD *v142; // r13
  __int64 v143; // rdx
  char *v144; // r13
  __int64 v145; // r15
  char *v146; // r14
  int *v147; // rbp
  unsigned int *v148; // r12
  unsigned int *v149; // rbx
  __int64 v150; // rdi
  __int64 v151; // rax
  _QWORD *v152; // rax
  int v153; // ecx
  _DWORD *v154; // rdi
  _DWORD *v155; // rax
  __int64 v156; // rsi
  __int64 v157; // rax
  __int64 v158; // rsi
  unsigned int *v159; // rax
  _QWORD *v160; // rdx
  __int64 v161; // rax
  __int64 v162; // rsi
  int v163; // edx
  _DWORD *src; // [rsp+0h] [rbp-F8h]
  char *srca; // [rsp+0h] [rbp-F8h]
  size_t v166; // [rsp+8h] [rbp-F0h]
  unsigned int v167; // [rsp+8h] [rbp-F0h]
  unsigned int v168; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v169; // [rsp+8h] [rbp-F0h]
  unsigned int v170; // [rsp+8h] [rbp-F0h]
  unsigned int v171; // [rsp+8h] [rbp-F0h]
  size_t v172; // [rsp+8h] [rbp-F0h]
  _DWORD *v173; // [rsp+8h] [rbp-F0h]
  _BYTE *v174; // [rsp+8h] [rbp-F0h]
  unsigned int v175; // [rsp+10h] [rbp-E8h]
  __int64 v176; // [rsp+10h] [rbp-E8h]
  size_t v177; // [rsp+10h] [rbp-E8h]
  size_t v178; // [rsp+10h] [rbp-E8h]
  unsigned int v179; // [rsp+10h] [rbp-E8h]
  unsigned int *v180; // [rsp+18h] [rbp-E0h]
  char *v181; // [rsp+18h] [rbp-E0h]
  int v182; // [rsp+20h] [rbp-D8h]
  size_t v183; // [rsp+28h] [rbp-D0h]
  unsigned int *v184; // [rsp+28h] [rbp-D0h]
  size_t v185; // [rsp+28h] [rbp-D0h]
  size_t v186; // [rsp+28h] [rbp-D0h]
  size_t v187; // [rsp+28h] [rbp-D0h]
  void *v188; // [rsp+28h] [rbp-D0h]
  _DWORD **v189; // [rsp+30h] [rbp-C8h]
  size_t v190; // [rsp+30h] [rbp-C8h]
  __int64 v191; // [rsp+38h] [rbp-C0h]
  size_t v192; // [rsp+38h] [rbp-C0h]
  unsigned int *v193; // [rsp+40h] [rbp-B8h]
  __int64 v194; // [rsp+40h] [rbp-B8h]
  unsigned int *v195; // [rsp+48h] [rbp-B0h]
  char *v196; // [rsp+50h] [rbp-A8h]
  _OWORD *v197; // [rsp+50h] [rbp-A8h]
  unsigned int *v198; // [rsp+58h] [rbp-A0h]
  _DWORD *v199; // [rsp+78h] [rbp-80h] BYREF
  void *v200; // [rsp+80h] [rbp-78h]
  size_t v201; // [rsp+88h] [rbp-70h]
  _QWORD v202[2]; // [rsp+90h] [rbp-68h] BYREF
  void *v203; // [rsp+A0h] [rbp-58h] BYREF
  size_t n; // [rsp+A8h] [rbp-50h]
  _QWORD v205[9]; // [rsp+B0h] [rbp-48h] BYREF

  v6 = a1;
  v182 = a2;
  v180 = *(unsigned int **)(a2 + 16);
  v189 = &v199;
  v199 = nullptr;
  sub_5B7EC0((unsigned __int64 *)&v199, a2, a3);
  v8 = v180;
  src = v199;
  if ( v199 )
  {
    v9 = *(v199 - 1);
    v10 = 4LL * (unsigned int)*(v199 - 2) + 8;
    v167 = *(v199 - 2);
    v11 = sub_186B270(v10);
    v12 = _mm_cvtsi32_si128(v9);
    v13 = v11;
    v14 = (char *)(v11 + 8);
    v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v167), v12).m128i_u64[0];
    *(_QWORD *)v11 = v15;
    v16 = 4LL * (unsigned int)*(src - 1);
    if ( v16 <= 4 )
    {
      if ( v16 == 4 )
        *(_DWORD *)(v11 + 8) = *src;
    }
    else
    {
      memmove((void *)(v11 + 8), src, v16);
    }
    v17 = sub_186B270(v10);
    v18 = *(unsigned int *)(v13 + 4);
    *(_QWORD *)v17 = v15;
    v19 = (_DWORD *)(v17 + 8);
    v20 = 4 * v18;
    if ( v20 <= 4 )
    {
      if ( v20 == 4 )
        *(_DWORD *)(v17 + 8) = *(_DWORD *)(v13 + 8);
    }
    else
    {
      memcpy((void *)(v17 + 8), v14, v20);
    }
    v21 = a1[26];
    v22 = 2 * v21;
    if ( 3 * v21 >= 4 * (a1[27] + a1[28]) )
    {
      v23 = v180[3];
LABEL_8:
      if ( *(v19 - 1) )
      {
        v175 = *(v19 - 1);
        v168 = *(v19 - 2);
        v24 = (_QWORD *)sub_186B270(4LL * v168 + 8);
        v25 = (unsigned int)*(v19 - 1);
        v26 = v24;
        v203 = v24 + 1;
        v27 = 4 * v25;
        *v24 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v168), _mm_cvtsi32_si128(v175)).m128i_u64[0];
        if ( v27 <= 4 )
        {
          if ( v27 == 4 )
            *((_DWORD *)v24 + 2) = *v19;
          v28 = sub_5B7080((int **)&v203, v175);
        }
        else
        {
          memcpy(v24 + 1, v19, v27);
          v28 = sub_5B7080((int **)&v203, v175);
        }
        LODWORD(v184) = v28;
        sub_186B220(v26);
        v169 = v6[26];
        LODWORD(v176) = v169 - 1;
        v29 = (int)v184;
        goto LABEL_12;
      }
      goto LABEL_42;
    }
    goto LABEL_71;
  }
  v21 = a1[26];
  v22 = 2 * v21;
  if ( 3 * v21 < 4 * (a1[27] + a1[28]) )
  {
    v19 = nullptr;
    v14 = nullptr;
LABEL_71:
    v21 = v22;
    v169 = v22;
    v191 = 32LL * v22;
    v59 = (unsigned int *)sub_186B270(v191);
    v184 = v59;
    v60 = (unsigned int *)((char *)v59 + v191);
    if ( v22 )
    {
      do
      {
        *(_QWORD *)v59 = 0;
        v59 += 8;
        *((_QWORD *)v59 - 2) = 0;
      }
      while ( v59 != v60 );
    }
    v61 = *((char **)a1 + 12);
    LODWORD(v176) = v22 - 1;
    v62 = a1[26];
    v63 = &v61[32 * v62];
    v7 = (unsigned int *)((char *)v184 + v191);
    v64 = (unsigned int *)(v61 + 16);
    if ( v61 == v63 )
    {
LABEL_88:
      if ( v63 )
      {
        if ( (_DWORD)v62 )
        {
          LODWORD(v191) = (_DWORD)v14;
          v72 = v63;
          v193 = v6;
          LODWORD(v195) = v22;
          v73 = &v63[32 * v62];
          v74 = v63;
          do
          {
            while ( 1 )
            {
              v75 = *((_QWORD *)v74 + 2);
              if ( !v75 )
                break;
              v74 += 32;
              sub_186B220((void *)(v75 - 8));
              if ( v74 == v73 )
                goto LABEL_93;
            }
            v74 += 32;
          }
          while ( v74 != v73 );
LABEL_93:
          v63 = v72;
          v6 = v193;
          v8 = v180;
          v22 = (unsigned int)v195;
        }
        sub_186B220(v63);
      }
      v6[26] = v22;
      v6[28] = 0;
      v23 = v8[3];
      *((_QWORD *)v6 + 12) = v184;
      if ( !v19 )
        goto LABEL_43;
      goto LABEL_8;
    }
    while ( 1 )
    {
      if ( *(v64 - 3) != 2 )
      {
        v65 = v64 + 8;
        if ( v63 == (char *)(v64 + 4) )
          goto LABEL_87;
        goto LABEL_76;
      }
      v66 = *(v64 - 4);
      v67 = 32LL * (v66 & (unsigned int)v176);
      v68 = &v184[(unsigned __int64)v67 / 4];
      if ( v191 == v67 )
      {
LABEL_133:
        if ( v184 == v68 )
        {
LABEL_167:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v69 = v184;
        while ( v69[1] )
        {
          v69 += 8;
          if ( v68 == v69 )
            goto LABEL_167;
        }
        v114 = *((_QWORD *)v64 - 1);
        *v69 = v66;
        v69[1] = 2;
        *((_QWORD *)v69 + 1) = v114;
        if ( v64 != v69 + 4 )
        {
          v71 = *((_QWORD *)v69 + 2);
          if ( v71 )
          {
LABEL_84:
            v198 = v64;
            v196 = v63;
            v195 = v69;
            v193 = v7;
            sub_186B220((void *)(v71 - 8));
            v64 = v198;
            v63 = v196;
            v69 = v195;
            v7 = v193;
          }
LABEL_85:
          *((_QWORD *)v69 + 2) = 0;
          *((_QWORD *)v69 + 2) = *(_QWORD *)v64;
          *(_QWORD *)v64 = 0;
        }
      }
      else
      {
        v69 = &v184[(unsigned __int64)v67 / 4];
        while ( v69[1] )
        {
          v69 += 8;
          if ( v7 == v69 )
            goto LABEL_133;
        }
        v70 = *((_QWORD *)v64 - 1);
        *v69 = v66;
        v69[1] = 2;
        *((_QWORD *)v69 + 1) = v70;
        if ( v64 != v69 + 4 )
        {
          v71 = *((_QWORD *)v69 + 2);
          if ( v71 )
            goto LABEL_84;
          goto LABEL_85;
        }
      }
      *((_QWORD *)v69 + 3) = *((_QWORD *)v64 + 1);
      v65 = v64 + 8;
      if ( v63 == (char *)(v64 + 4) )
      {
LABEL_87:
        v62 = v6[26];
        v63 = *((char **)v6 + 12);
        goto LABEL_88;
      }
LABEL_76:
      v64 = v65;
    }
  }
  v23 = v180[3];
  v19 = nullptr;
  v14 = nullptr;
LABEL_42:
  v169 = v21;
  LODWORD(v176) = v21 - 1;
LABEL_43:
  v29 = 778;
LABEL_12:
  v30 = *((char **)v6 + 12);
  v31 = v23 ^ v29;
  v32 = 32LL * ((v23 ^ v29) & (unsigned int)v176);
  v33 = &v30[v32];
  if ( v32 == 32 * v169 )
  {
    v35 = nullptr;
LABEL_45:
    if ( v30 == v33 )
    {
LABEL_69:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    while ( 1 )
    {
      v49 = *((_DWORD *)v30 + 1);
      if ( v49 == 2 )
      {
        if ( v31 == *(_DWORD *)v30 && *((unsigned int **)v30 + 1) == v8 )
        {
          v50 = *((_DWORD **)v30 + 2);
          if ( v50 )
          {
            v51 = (unsigned int)*(v50 - 1);
            if ( v19 )
            {
              if ( (_DWORD)v51 == *(v19 - 1) )
              {
                v52 = &v50[v51];
                if ( v50 == v52 )
                {
LABEL_60:
                  v34 = v30;
                  goto LABEL_27;
                }
                v53 = v19;
                while ( *v50 == *v53 )
                {
                  ++v50;
                  ++v53;
                  if ( v52 == v50 )
                    goto LABEL_60;
                }
              }
            }
            else if ( !(_DWORD)v51 )
            {
              goto LABEL_230;
            }
          }
          else
          {
            if ( !v19 )
              goto LABEL_230;
            if ( !*(v19 - 1) )
            {
              v35 = (int *)v30;
              goto LABEL_28;
            }
          }
        }
      }
      else
      {
        if ( !v49 )
        {
          if ( v35 )
            --v6[28];
          else
            v35 = (int *)v30;
          v54 = *((_QWORD *)v35 + 2);
          *((_QWORD *)v35 + 1) = v8;
          if ( v54 )
            goto LABEL_64;
          goto LABEL_65;
        }
        v35 = (int *)v30;
      }
      v30 += 32;
      if ( v33 == v30 )
        goto LABEL_69;
    }
  }
  v34 = &v30[v32];
  v35 = nullptr;
  while ( 1 )
  {
    v36 = *((_DWORD *)v34 + 1);
    if ( v36 != 2 )
      break;
    if ( v31 == *(_DWORD *)v34 && *((unsigned int **)v34 + 1) == v8 )
    {
      v37 = *((unsigned int **)v34 + 2);
      if ( v37 )
      {
        v38 = *(v37 - 1);
        if ( v19 )
        {
          if ( (_DWORD)v38 == *(v19 - 1) )
          {
            v7 = &v37[v38];
            if ( v37 == v7 )
              goto LABEL_27;
            v39 = v19;
            while ( *v37 == *v39 )
            {
              ++v37;
              ++v39;
              if ( v7 == v37 )
                goto LABEL_27;
            }
          }
        }
        else if ( !(_DWORD)v38 )
        {
          v30 = v34;
LABEL_230:
          v35 = (int *)v30;
          goto LABEL_29;
        }
      }
      else
      {
        if ( !v19 )
        {
          v35 = (int *)v34;
          goto LABEL_29;
        }
        LODWORD(v7) = *(v19 - 1);
        if ( !(_DWORD)v7 )
        {
LABEL_27:
          v35 = (int *)v34;
LABEL_28:
          sub_186B220(v19 - 2);
          goto LABEL_29;
        }
      }
    }
LABEL_16:
    v34 += 32;
    if ( &v30[32 * v169] == v34 )
      goto LABEL_45;
  }
  if ( v36 )
  {
    v35 = (int *)v34;
    goto LABEL_16;
  }
  if ( v35 )
    --v6[28];
  else
    v35 = (int *)v34;
  v54 = *((_QWORD *)v35 + 2);
  *((_QWORD *)v35 + 1) = v8;
  if ( v54 )
LABEL_64:
    sub_186B220((void *)(v54 - 8));
LABEL_65:
  *((_QWORD *)v35 + 2) = v19;
  *((_QWORD *)v35 + 3) = 0;
  v35[1] = 2;
  *v35 = v31;
  ++v6[27];
LABEL_29:
  if ( v14 )
    sub_186B220(v14 - 8);
  v40 = *((_QWORD *)v35 + 3);
  if ( v40 )
    goto LABEL_32;
  sub_5B7FE0(&v203, &v199);
  v76 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 2 )
    std::__throw_length_error("basic_string::_M_replace");
  v77 = v203;
  v78 = n + 3;
  if ( v203 == v205 )
  {
    if ( v78 > 0xF )
    {
      v121 = 31;
      v120 = 30;
      goto LABEL_158;
    }
LABEL_102:
    if ( "ad_" >= v203 )
    {
      if ( (char *)v203 + n >= "ad_" )
      {
        v183 = n + 3;
        v166 = n;
        std::string::_M_replace_cold();
        v78 = v183;
        v76 = v166;
        v79 = v203;
        goto LABEL_105;
      }
      if ( !n )
      {
LABEL_104:
        v77[2] = 95;
        *(_WORD *)v77 = 25697;
        v79 = v203;
        goto LABEL_105;
      }
    }
    else if ( !n )
    {
      goto LABEL_104;
    }
    if ( n == 1 )
    {
      *((_BYTE *)v203 + 3) = *(_BYTE *)v203;
    }
    else
    {
      v185 = n + 3;
      v172 = n;
      memmove((char *)v203 + 3, v203, n);
      v78 = v185;
      v76 = v172;
    }
    goto LABEL_104;
  }
  if ( v205[0] >= v78 )
    goto LABEL_102;
  if ( (v78 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  v120 = 2LL * v205[0];
  if ( v78 >= 2LL * v205[0] )
  {
    v120 = n + 3;
    v121 = n + 4;
    if ( (__int64)(n + 4) >= 0 )
      goto LABEL_158;
LABEL_259:
    std::__throw_bad_alloc();
  }
  v121 = v120 + 1;
  if ( (v205[0] & 0x4000000000000000LL) != 0 )
    goto LABEL_259;
LABEL_158:
  v186 = n + 3;
  v177 = n;
  v122 = operator new(v121);
  v76 = v177;
  v79 = (void *)v122;
  v123 = v203;
  v78 = v186;
  *(_WORD *)v122 = 25697;
  *(_BYTE *)(v122 + 2) = 95;
  if ( v177 )
  {
    if ( v177 == 1 )
    {
      *(_BYTE *)(v122 + 3) = *v123;
    }
    else
    {
      v192 = v186;
      v188 = (void *)v122;
      v174 = v123;
      memcpy((void *)(v122 + 3), v123, v177);
      v78 = v192;
      v79 = v188;
      v76 = v177;
      v123 = v174;
    }
  }
  if ( v123 != (_BYTE *)v205 )
  {
    v190 = v78;
    v187 = v76;
    v178 = (size_t)v79;
    operator delete(v123, v205[0] + 1LL);
    v78 = v190;
    v76 = v187;
    v79 = (void *)v178;
  }
  v203 = v79;
  v205[0] = v120;
LABEL_105:
  n = v78;
  *((_BYTE *)v79 + v76 + 3) = 0;
  v80 = v203;
  v184 = (unsigned int *)v202;
  v81 = n;
  v200 = v202;
  if ( v203 == v205 )
  {
    v153 = n + 1;
    v154 = v202;
    v155 = v205;
    if ( (unsigned int)(n + 1) >= 8 )
    {
      LODWORD(v157) = 0;
      do
      {
        v158 = (unsigned int)v157;
        v157 = (unsigned int)(v157 + 8);
        *(_QWORD *)((char *)v202 + v158) = *(_QWORD *)((char *)v205 + v158);
      }
      while ( (unsigned int)v157 < (v153 & 0xFFFFFFF8) );
      v154 = (_DWORD *)((char *)v202 + v157);
      v155 = (_DWORD *)((char *)v205 + v157);
    }
    v156 = 0;
    if ( (v153 & 4) != 0 )
    {
      *v154 = *v155;
      v156 = 4;
    }
    if ( (v153 & 2) != 0 )
    {
      *(_WORD *)((char *)v154 + v156) = *(_WORD *)((char *)v155 + v156);
      v156 += 2;
    }
    if ( (v153 & 1) != 0 )
      *((_BYTE *)v154 + v156) = *((_BYTE *)v155 + v156);
    v80 = v202;
  }
  else
  {
    v200 = v203;
    v202[0] = v205[0];
  }
  v82 = *((_QWORD *)v6 + 3);
  v201 = v81;
  v83 = v180[8];
  sub_180C5A0(&v203, v80);
  v84 = sub_651680(v82, v180 + 4, &v203, v83, v180 + 12, v180);
  *((_QWORD *)v35 + 3) = v84;
  v85 = nullptr;
  v86 = v84;
  if ( v84 )
    ++*(_DWORD *)(v84 + 8);
  v87 = *((_QWORD **)v6 + 7);
  if ( v87 )
  {
    v88 = *((_DWORD *)v87 - 1);
    if ( v88 == *((_DWORD *)v87 - 2) )
    {
      v116 = (3 * v88 + 1) >> 1;
      v117 = 8 * v116 + 8;
      if ( 8 * v88 + 8 >= v117 || v88 >= v116 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v203, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v203);
        sub_233E40((__int64)&v203);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v118 = (unsigned int *)sub_186B300(v87 - 1, v117);
      v119 = v118[1];
      v87 = v118 + 2;
      v85 = nullptr;
      *v118 = v116;
      *((_QWORD *)v6 + 7) = v118 + 2;
      LODWORD(v118) = v119;
      v91 = &v87[v119];
      v90 = (_DWORD)v118 + 1;
    }
    else
    {
      v89 = v88;
      v90 = v88 + 1;
      v91 = &v87[v89];
    }
  }
  else
  {
    v160 = (_QWORD *)sub_186B270(0x18u);
    *v160 = 2;
    v85 = nullptr;
    v90 = 1;
    v87 = v160 + 1;
    *((_QWORD *)v6 + 7) = v87;
    v91 = v87;
  }
  *v91 = v86;
  v92 = *((_QWORD **)v6 + 11);
  *((_DWORD *)v87 - 1) = v90;
  if ( v92 )
  {
    LODWORD(v93) = *((_DWORD *)v92 - 1);
    v94 = (unsigned int **)&v92[2 * (unsigned int)v93];
    if ( (_DWORD)v93 == *((_DWORD *)v92 - 2) )
    {
      v179 = (unsigned int)(3 * v93 + 1) >> 1;
      v124 = 16 * v179 + 8;
      if ( 16 * (int)v93 + 8 >= v124 || (unsigned int)v93 >= (unsigned int)(3 * v93 + 1) >> 1 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v203, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, &v203);
        sub_233E40((__int64)&v203);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v180) = 0;
      v93 = sub_186B270(v124);
      v125 = *((__int64 **)v6 + 11);
      v173 = (_DWORD *)v93;
      v92 = (_QWORD *)(v93 + 8);
      v85 = nullptr;
      if ( v125 )
      {
        v126 = *((unsigned int *)v125 - 1);
        v127 = v93 + 8;
        *(_DWORD *)(v93 + 4) = v126;
        v128 = v125;
        v129 = &v125[2 * v126];
        if ( v125 != v129 )
        {
          do
          {
            v130 = *v128;
            v128 += 2;
            v127 += 16;
            *(_QWORD *)(v127 - 16) = v130;
            v131 = *(v128 - 1);
            *(v128 - 1) = 0;
            *(_QWORD *)(v127 - 8) = v131;
          }
          while ( v128 != v129 );
        }
        v132 = &v125[2 * v126];
        if ( (_DWORD)v126 )
        {
          do
          {
            while ( 1 )
            {
              v133 = v125[1];
              if ( !v133 )
                break;
              v125 += 2;
              sub_186B220((void *)(v133 - 8));
              if ( v125 == v132 )
                goto LABEL_176;
            }
            v125 += 2;
          }
          while ( v125 != v132 );
LABEL_176:
          v125 = *((__int64 **)v6 + 11);
        }
        LODWORD(v180) = 0;
        sub_186B220(v125 - 1);
        v85 = nullptr;
        v93 = (unsigned int)v173[1];
        v94 = (unsigned int **)&v92[2 * v93];
      }
      else
      {
        *(_DWORD *)(v93 + 4) = 0;
        v94 = (unsigned int **)(v93 + 8);
        LODWORD(v93) = 0;
      }
      *((_QWORD *)v6 + 11) = v92;
      *v173 = v179;
    }
  }
  else
  {
    v93 = sub_186B270(0x28u);
    v92 = (_QWORD *)(v93 + 8);
    *(_QWORD *)v93 = 2;
    v85 = nullptr;
    LODWORD(v93) = 0;
    *((_QWORD *)v6 + 11) = v92;
    v94 = (unsigned int **)v92;
  }
  *v94 = v8;
  v94[1] = nullptr;
  if ( src )
  {
    v95 = *(src - 1);
    v170 = *(src - 2);
    v96 = sub_186B270(4LL * v170 + 8);
    *(_QWORD *)v96 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v170), _mm_cvtsi32_si128(v95)).m128i_u64[0];
    v97 = (unsigned int)*(src - 1);
    v94[1] = (unsigned int *)(v96 + 8);
    v98 = 4 * v97;
    v99 = v98 == 4;
    if ( v98 <= 4 )
    {
      v162 = *((_QWORD *)v6 + 11);
      v100 = *((unsigned int **)v35 + 3);
      v163 = *(_DWORD *)(v162 - 4);
      if ( v99 )
        *(_DWORD *)(v96 + 8) = *src;
      *(_DWORD *)(v162 - 4) = v163 + 1;
    }
    else
    {
      memmove((void *)(v96 + 8), src, v98);
      v100 = *((unsigned int **)v35 + 3);
      ++*(_DWORD *)(*((_QWORD *)v6 + 11) - 4LL);
    }
    v180 = v100;
    v101 = *(src - 1);
    v171 = *(src - 2);
    v102 = sub_186B270(4LL * v171 + 8);
    v85 = nullptr;
    v191 = v102 + 8;
    v103 = v180;
    *(_QWORD *)v102 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v171), _mm_cvtsi32_si128(v101)).m128i_u64[0];
    v104 = 4LL * (unsigned int)*(src - 1);
    if ( v104 <= 4 )
    {
      if ( v104 == 4 )
        *(_DWORD *)(v102 + 8) = *src;
    }
    else
    {
      memmove((void *)(v102 + 8), src, v104);
      v85 = nullptr;
      v103 = v180;
    }
  }
  else
  {
    v191 = 0;
    v103 = *((unsigned int **)v35 + 3);
    *((_DWORD *)v92 - 1) = v93 + 1;
  }
  v105 = v6[32];
  v106 = v6[34];
  LODWORD(v189) = 2 * v105;
  if ( 3 * (int)v105 >= 4 * (v106 + v6[33]) )
  {
    v107 = *((_QWORD *)v6 + 15);
    LODWORD(v169) = v105 - 1;
    v176 = 16 * v105;
    v108 = (unsigned int **)(v107 + 16 * v105);
    goto LABEL_121;
  }
  v180 = v103;
  v176 = 16LL * (unsigned int)v189;
  v107 = sub_186B270(v176);
  v134 = (_OWORD *)v107;
  v85 = nullptr;
  v103 = v180;
  v135 = (_OWORD *)(v176 + v107);
  if ( (_DWORD)v189 )
  {
    if ( (v176 & 0x10) == 0 || (v134 = (_OWORD *)(v107 + 16), *(_OWORD *)v107 = 0, v135 != (_OWORD *)(v107 + 16)) )
    {
      do
      {
        *v134 = 0;
        v134 += 2;
        *(v134 - 1) = 0;
      }
      while ( v135 != v134 );
    }
  }
  v136 = *((char **)v6 + 15);
  v108 = (unsigned int **)(16LL * (unsigned int)v189 + v107);
  v137 = v6[32];
  v138 = v136 + 8;
  v33 = &v136[16 * v137];
  LODWORD(v169) = (_DWORD)v189 - 1;
  if ( v136 != v33 )
  {
    while ( 1 )
    {
      v139 = *(v138 - 1);
      if ( v139 <= 1 )
        goto LABEL_194;
      v140 = 16LL * (*(_DWORD *)(v139 + 12) & (unsigned int)v169);
      v141 = (_QWORD *)(v107 + v140);
      if ( v176 == v140 )
      {
LABEL_205:
        if ( (_QWORD *)v107 == v141 )
        {
LABEL_235:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v142 = (_QWORD *)v107;
        while ( *v142 )
        {
          v142 += 2;
          if ( v141 == v142 )
            goto LABEL_235;
        }
        *v142 = v139;
        if ( v138 != v142 + 1 )
        {
          v143 = v142[1];
          if ( v143 )
          {
LABEL_203:
            v197 = v135;
            v195 = (unsigned int *)v33;
            v193 = v103;
            v180 = v85;
            sub_186B220((void *)(v143 - 8));
            v135 = v197;
            v33 = (char *)v195;
            v103 = v193;
            v85 = v180;
          }
LABEL_204:
          v142[1] = 0;
          v142[1] = *v138;
          *v138 = 0;
        }
      }
      else
      {
        v142 = (_QWORD *)(v107 + v140);
        while ( *v142 )
        {
          v142 += 2;
          if ( v135 == (_OWORD *)v142 )
            goto LABEL_205;
        }
        *v142 = v139;
        if ( v138 != v142 + 1 )
        {
          v143 = v142[1];
          if ( v143 )
            goto LABEL_203;
          goto LABEL_204;
        }
      }
LABEL_194:
      if ( v33 == (char *)(v138 + 1) )
      {
        v137 = v6[32];
        v33 = *((char **)v6 + 15);
        break;
      }
      v138 += 2;
    }
  }
  if ( v33 )
  {
    if ( (_DWORD)v137 )
    {
      v194 = 16LL * (unsigned int)v189 + v107;
      v144 = v33;
      v145 = v107;
      v195 = v6;
      v146 = &v33[16 * v137];
      v147 = v35;
      v148 = v103;
      v149 = v85;
      do
      {
        while ( 1 )
        {
          v150 = *((_QWORD *)v144 + 1);
          if ( !v150 )
            break;
          v144 += 16;
          v181 = v33;
          sub_186B220((void *)(v150 - 8));
          v33 = v181;
          if ( v144 == v146 )
            goto LABEL_218;
        }
        v144 += 16;
      }
      while ( v144 != v146 );
LABEL_218:
      v85 = v149;
      v103 = v148;
      v35 = v147;
      v107 = v145;
      v6 = v195;
      v108 = (unsigned int **)v194;
    }
    v193 = v103;
    v180 = v85;
    sub_186B220(v33);
    v85 = v180;
    v103 = v193;
  }
  *((_QWORD *)v6 + 15) = v107;
  v106 = 0;
  v6[34] = 0;
  v6[32] = (unsigned int)v189;
LABEL_121:
  v109 = v103[3];
  v110 = 16LL * (v109 & (unsigned int)v169);
  v111 = v107 + v110;
  if ( v110 == v176 )
    goto LABEL_143;
  v112 = (unsigned int **)(v107 + v110);
  do
  {
    v113 = *v112;
    if ( (unsigned __int64)*v112 > 1 )
    {
      if ( v113[3] == v109 && v103 == v113 )
      {
        v159 = v112[1];
        *v112 = v103;
        if ( v159 )
          sub_186B220(v159 - 2);
        v112[1] = (unsigned int *)v191;
        goto LABEL_182;
      }
    }
    else
    {
      if ( !v113 )
      {
        if ( v85 )
          v6[34] = v106 - 1;
        else
          v85 = (unsigned int *)v112;
        v151 = *((_QWORD *)v85 + 1);
        *(_QWORD *)v85 = v103;
        if ( v151 )
          goto LABEL_226;
        goto LABEL_227;
      }
      v85 = (unsigned int *)v112;
    }
    v112 += 2;
  }
  while ( v112 != v108 );
LABEL_143:
  while ( 2 )
  {
    if ( v111 == v107 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v115 = *(unsigned int **)v107;
    if ( *(_QWORD *)v107 > 1u )
    {
      if ( v115[3] == v109 && v103 == v115 )
      {
        v161 = *(_QWORD *)(v107 + 8);
        *(_QWORD *)v107 = v103;
        if ( v161 )
          sub_186B220((void *)(v161 - 8));
        *(_QWORD *)(v107 + 8) = v191;
        goto LABEL_182;
      }
      goto LABEL_142;
    }
    if ( v115 )
    {
      v85 = (unsigned int *)v107;
LABEL_142:
      v107 += 16;
      continue;
    }
    break;
  }
  if ( v85 )
    v6[34] = v106 - 1;
  else
    v85 = (unsigned int *)v107;
  v151 = *((_QWORD *)v85 + 1);
  *(_QWORD *)v85 = v103;
  if ( !v151 )
    goto LABEL_227;
LABEL_226:
  v169 = (unsigned __int64)v85;
  sub_186B220((void *)(v151 - 8));
  v85 = (unsigned int *)v169;
LABEL_227:
  *((_QWORD *)v85 + 1) = v191;
  ++v6[33];
LABEL_182:
  if ( v200 != v202 )
    operator delete(v200, v202[0] + 1LL);
  v40 = *((_QWORD *)v35 + 3);
LABEL_32:
  v41 = sub_15DC610(
          *((_QWORD *)v6 + 4),
          v40,
          *(_DWORD *)(v40 + 32),
          v182 + 32,
          (int)v33,
          (int)v7,
          (int)src,
          v169,
          v176,
          (int)v180,
          v182,
          (char)v184,
          (int)v189,
          v191,
          (int)v193,
          v195);
  v42 = v41;
  if ( v41 )
    ++*(_DWORD *)(v41 + 8);
  v43 = *((_QWORD **)v6 + 7);
  if ( v43 )
  {
    v44 = *((_DWORD *)v43 - 1);
    if ( v44 == *((_DWORD *)v43 - 2) )
    {
      v55 = (3 * v44 + 1) >> 1;
      v56 = 8 * v55 + 8;
      if ( 8 * v44 + 8 >= (unsigned int)v56 || v44 >= v55 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v203, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, &v203);
        sub_233E40((__int64)&v203);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v57 = (unsigned int *)sub_186B300(v43 - 1, v56);
      v58 = v57[1];
      v43 = v57 + 2;
      *v57 = v55;
      *((_QWORD *)v6 + 7) = v57 + 2;
      LODWORD(v57) = v58;
      v47 = &v43[v58];
      v46 = (_DWORD)v57 + 1;
    }
    else
    {
      v45 = v44;
      v46 = v44 + 1;
      v47 = &v43[v45];
    }
  }
  else
  {
    v152 = (_QWORD *)sub_186B270(0x18u);
    v43 = v152 + 1;
    *v152 = 2;
    v46 = 1;
    *((_QWORD *)v6 + 7) = v43;
    v47 = v43;
  }
  *v47 = v42;
  *((_DWORD *)v43 - 1) = v46;
  if ( srca )
    sub_186B220(srca - 8);
  return v42;
}

