__int64 __fastcall sub_87F0C0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // r14d
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rcx
  unsigned int v26; // ecx
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rax
  void *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int8 **v34; // rax
  unsigned __int8 **v35; // r12
  bool v36; // al
  bool v37; // r12
  const __m128i *v38; // rbp
  __m128i v39; // xmm0
  __int16 v40; // dx
  __int16 v41; // ax
  __int64 *v42; // rdx
  __int64 v43; // rsi
  void *v44; // rax
  __int64 v45; // rcx
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // r8
  __int64 v49; // r9
  void *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned __int8 **v53; // rax
  unsigned __int8 **v54; // r12
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  char v62; // al
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rbp
  __int64 v66; // rdi
  unsigned __int64 v67; // r12
  int v68; // r13d
  unsigned int v69; // eax
  void *v70; // r13
  void *v71; // rax
  __int64 *v72; // rax
  void *v73; // rbx
  __int64 v74; // r13
  __int64 *v75; // r12
  __int64 v76; // rcx
  __int64 v77; // rdi
  char v78; // al
  unsigned int v79; // edx
  bool v80; // al
  __int64 v81; // rdx
  __int64 v82; // rdi
  char v83; // al
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 *v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rsi
  const __m128i *v90; // r12
  __m128i v91; // xmm0
  __int64 v92; // rcx
  __int16 v93; // dx
  __int16 v94; // ax
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r12
  char v102; // al
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 *v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rsi
  char v108; // al
  __int64 v109; // rcx
  __int64 v110; // rdx
  unsigned __int64 v111; // r14
  unsigned __int8 **v112; // rax
  unsigned __int8 **v113; // rbx
  __int64 v114; // rax
  _QWORD *v115; // r12
  unsigned __int8 *v116; // rbx
  _BYTE *v117; // rdx
  __int64 v118; // rax
  __int64 v119; // r13
  __int64 v120; // rax
  unsigned __int8 **v121; // rax
  unsigned __int8 **v122; // rbx
  __int64 v123; // rsi
  void **v124; // rdi
  unsigned __int8 **v125; // rax
  unsigned __int8 **v126; // r14
  bool v127; // al
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rcx
  __int64 v131; // rdi
  char v132; // al
  __int64 v133; // rdx
  __int64 v134; // rdi
  char v135; // al
  __int64 v136; // rax
  bool v137; // al
  __int64 v138; // rdi
  __int64 v139; // rsi
  unsigned __int8 **v140; // rax
  _QWORD *v141; // rbp
  __int64 v142; // r8
  __int64 v143; // r9
  unsigned __int8 **v144; // r14
  unsigned __int8 **v145; // rdi
  char v146; // al
  __int64 v147; // rdi
  char v148; // al
  unsigned __int64 v149; // rdx
  unsigned __int64 v150; // r14
  unsigned __int64 v151; // rdx
  void *v152; // rax
  __int64 v153; // rdi
  unsigned __int64 v154; // rax
  __int64 v155; // r12
  __int64 v156; // rdi
  __int64 v157; // rdx
  int v158; // eax
  __int64 v159; // rax
  __int64 v160; // r13
  __int64 v161; // r14
  __int64 v162; // r13
  void *v163; // rdi
  __int64 v164; // rdx
  unsigned __int8 **v165; // rax
  unsigned __int8 **v166; // rbx
  unsigned __int8 **v167; // rax
  unsigned __int8 **v168; // rbx
  unsigned __int8 v169; // al
  unsigned __int8 **v170; // rax
  unsigned __int8 **v171; // rbx
  unsigned __int8 **v172; // rdi
  bool v173; // [rsp+0h] [rbp-218h]
  __int64 v174; // [rsp+0h] [rbp-218h]
  void *v175; // [rsp+8h] [rbp-210h]
  int v176; // [rsp+8h] [rbp-210h]
  char v177; // [rsp+8h] [rbp-210h]
  unsigned __int8 v178; // [rsp+10h] [rbp-208h]
  unsigned __int64 v179; // [rsp+10h] [rbp-208h]
  void *v180; // [rsp+10h] [rbp-208h]
  unsigned __int8 v181; // [rsp+18h] [rbp-200h]
  char v182; // [rsp+18h] [rbp-200h]
  unsigned int v183; // [rsp+20h] [rbp-1F8h]
  __int64 v184; // [rsp+30h] [rbp-1E8h]
  unsigned __int64 v185; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v186; // [rsp+48h] [rbp-1D0h] BYREF
  void *v187; // [rsp+50h] [rbp-1C8h] BYREF
  unsigned int v188; // [rsp+58h] [rbp-1C0h]
  char v189; // [rsp+5Ch] [rbp-1BCh]
  void *v190; // [rsp+60h] [rbp-1B8h] BYREF
  size_t v191; // [rsp+68h] [rbp-1B0h]
  void *v192; // [rsp+80h] [rbp-198h] BYREF
  void **v193; // [rsp+88h] [rbp-190h]
  char v194; // [rsp+90h] [rbp-188h]
  void *v195[2]; // [rsp+C0h] [rbp-158h] BYREF
  unsigned __int64 v196; // [rsp+D0h] [rbp-148h]
  void *v197[3]; // [rsp+D8h] [rbp-140h] BYREF
  void *v198; // [rsp+F0h] [rbp-128h]
  char v199; // [rsp+100h] [rbp-118h] BYREF
  __int16 v200; // [rsp+140h] [rbp-D8h]
  void *v201[2]; // [rsp+150h] [rbp-C8h] BYREF
  unsigned __int64 v202; // [rsp+160h] [rbp-B8h]
  void *v203[3]; // [rsp+168h] [rbp-B0h] BYREF
  void *ptr; // [rsp+180h] [rbp-98h]
  __int64 v205; // [rsp+188h] [rbp-90h]
  _BYTE v206[64]; // [rsp+190h] [rbp-88h] BYREF
  __int16 v207; // [rsp+1D0h] [rbp-48h]

  v5 = a1;
  v6 = sub_80FBD0(a2);
  v10 = (unsigned int)(v6 - 204);
  if ( (unsigned int)v10 > 0x13 )
  {
    if ( v6 != 1030 )
      goto LABEL_3;
LABEL_9:
    v12 = a1[1];
    v13 = 1;
    sub_69F1F0((__int64)v201, a2, 0, 0);
    sub_823790(v12, (__int64)v201[0], (__int64)v201[1], 0);
    return v13;
  }
  v11 = -528386;
  if ( !_bittest64(&v11, v10) )
    goto LABEL_9;
LABEL_3:
  if ( a3 == 803 )
  {
    v105 = (__int64 *)*(unsigned __int8 *)(a2 + 3);
    v106 = a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
    *(__m128 *)v201 = _mm_loadh_ps((const double *)a1 + 1);
    v107 = *(__int64 *)((char *)v105 + v106);
    LOBYTE(v202) = *((_BYTE *)a1 + 16);
    return (unsigned int)sub_871080((__int64)v201, v107, v105, v7, v8, v9);
  }
  if ( a3 > 0x323 )
  {
    if ( a3 <= 0x5B6 )
    {
      if ( a3 > 0x59D )
      {
        switch ( a3 )
        {
          case 0x59Eu:
          case 0x5A7u:
            goto LABEL_57;
          case 0x59Fu:
          case 0x5A8u:
            goto LABEL_53;
          case 0x5A2u:
          case 0x5A4u:
            goto LABEL_45;
          case 0x5A3u:
          case 0x5A5u:
            goto LABEL_37;
          case 0x5B6u:
            goto LABEL_96;
          default:
            return 0;
        }
      }
      if ( a3 <= 0x393 )
      {
        if ( a3 > 0x38C )
        {
          switch ( a3 )
          {
            case 0x38Du:
              goto LABEL_57;
            case 0x38Eu:
              goto LABEL_53;
            case 0x390u:
            case 0x392u:
LABEL_45:
              v173 = ((a3 - 1442) & 0xFFFFFFFD) == 0;
              goto LABEL_46;
            case 0x391u:
            case 0x393u:
LABEL_37:
              v32 = sub_A2CB40(*a1);
              v33 = *a1;
              if ( (*(_BYTE *)(v32 + 1) & 0x10) != 0 )
              {
                v34 = (unsigned __int8 **)sub_A2E240(v33, a2, 2217, 0);
                v35 = v34;
                if ( v34 )
                {
                  sub_823450(v34, 0);
                  sub_823450(v35, 0);
                  sub_C64680(v201, *(_QWORD *)(*(_QWORD *)(*v5 + 16) + 17360LL), a3);
                  sub_838D50(v35, (_BYTE *)v201[0], (size_t)v201[1]);
                }
                else
                {
                  sub_C64680(v201, *(_QWORD *)(*(_QWORD *)(*v5 + 16) + 17360LL), a3);
                }
                std::string::_M_dispose();
              }
              else
              {
                sub_A2E240(v33, a2, 110, 0);
              }
              v36 = a3 == 1445;
              if ( ((a3 - 1443) & 0xFFFFFFFD) != 0 )
              {
                v173 = 0;
                v36 = 0;
              }
              else
              {
                v173 = 1;
              }
              v37 = v36 || a3 == 915;
              if ( !v37 )
LABEL_46:
                v37 = a3 == 1444 || a3 == 914;
              v13 = sub_871080(
                      (__int64)v5,
                      *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3)),
                      (__int64 *)*(unsigned __int8 *)(a2 + 3),
                      v7,
                      v8,
                      v9);
              if ( !(_BYTE)v13 )
                return v13;
              v38 = (const __m128i *)v5[1];
              v39 = _mm_loadu_si128(v38);
              v196 = v38[1].m128i_u64[0];
              *(__m128i *)v195 = v39;
              sub_823900(v197, (__int64)&v38[1].m128i_i64[1]);
              v40 = v38[8].m128i_i16[0];
              LOBYTE(v203[0]) |= 1u;
              LOBYTE(v40) = v40 & 3;
              v201[0] = nullptr;
              v41 = v40 | v200 & 0xFC;
              v42 = (__int64 *)*(unsigned __int8 *)(a2 + 3);
              v201[1] = nullptr;
              v200 = v41;
              v202 = 0;
              v205 = 0x800000000LL;
              LOBYTE(v41) = *(_BYTE *)(a2 + 2);
              v203[2] = nullptr;
              ptr = v206;
              HIBYTE(v207) = 0;
              v193 = v201;
              v43 = *(__int64 *)((char *)&v42[((v41 & 8) != 0) + 2] + a2);
              v44 = (void *)*v5;
              v194 = 0;
              v192 = v44;
              v13 = sub_871080((__int64)&v192, v43, v42, v45, v46, v47);
              if ( !(_BYTE)v13 )
                goto LABEL_49;
              v108 = *(_BYTE *)(a2 + 2);
              v109 = *(unsigned __int8 *)(a2 + 3);
              v188 = 1;
              v110 = *v5;
              v189 = 0;
              v187 = nullptr;
              v13 = sub_87D880(
                      *(_QWORD *)(v109 + a2 + 8LL * ((v108 & 8) != 0) + 8 + 16),
                      (__int64)&v187,
                      v110,
                      v109,
                      v48,
                      v49);
              if ( !(_BYTE)v13 )
                goto LABEL_124;
              if ( v188 <= 0x40 )
              {
                if ( !v187 )
                  goto LABEL_49;
              }
              else
              {
                v183 = v188;
                if ( (unsigned int)sub_2587400(&v187) == v183 )
                  goto LABEL_126;
              }
              if ( !sub_69F610(v201) || !sub_69F610(v195) )
              {
                BYTE4(v192) &= ~1u;
                LODWORD(v192) = 0;
                v124 = v195;
                if ( !sub_69F610(v201) )
                  v124 = v201;
                sub_81F730((__int64)v124, (__int64)&v192);
                v125 = (unsigned __int8 **)sub_A2E130(*v5, a2, 2235, 0);
                v126 = v125;
                if ( v125 )
                {
                  sub_823450(v125, v37);
                  sub_823450(v126, v173);
                  v127 = sub_69F610(v201);
                  sub_823450(v126, v127);
                  sub_6A3290(
                    (__int64)&v190,
                    (__int64)&v192,
                    *(_QWORD *)(*v5 + 16),
                    *(_QWORD *)(*(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3))
                              + 8LL),
                    v128,
                    v129);
                  sub_838D50(v126, v190, v191);
                }
                else
                {
                  sub_69F610(v201);
                  sub_6A3290(
                    (__int64)&v190,
                    (__int64)&v192,
                    *(_QWORD *)(*v5 + 16),
                    *(_QWORD *)(*(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3))
                              + 8LL),
                    v142,
                    v143);
                }
                std::string::_M_dispose();
                if ( (unsigned int)v192 > 1 )
                  sub_69F740((__int64)&v192);
                goto LABEL_124;
              }
              if ( ((LOBYTE(v197[0]) | LOBYTE(v203[0])) & 1) != 0 )
                goto LABEL_124;
              v185 = sub_81FA40((__int64)v197, *(_QWORD *)(*v5 + 16));
              v111 = sub_81FA40((__int64)v203, *(_QWORD *)(*v5 + 16));
              if ( *(_QWORD *)(*(_QWORD *)&byte_8[v185 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v111 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
              {
                v112 = (unsigned __int8 **)sub_A2E130(*v5, a2, 2237, 0);
                v113 = v112;
                if ( v112 )
                {
                  sub_823450(v112, v37);
                  sub_8356A0(v113, v111, 8u);
                  sub_8356A0(v113, v185, 8u);
                }
                goto LABEL_124;
              }
              v146 = sub_B19120(*(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL), 0);
              v147 = *v5;
              if ( v146 )
              {
                v164 = 2233;
              }
              else
              {
                v148 = sub_B198D0(&v185, *(_QWORD *)(v147 + 16));
                v147 = *v5;
                if ( v148 )
                {
                  v184 = sub_70E2F0(*(_QWORD *)(v147 + 16), v185);
                  if ( !v184 )
                    goto LABEL_124;
                  if ( !v173 )
                  {
                    LODWORD(v191) = v188;
                    if ( v188 > 0x40 )
                      sub_2585B30(&v190);
                    else
                      v190 = v187;
                    sub_258A690(&v190, v184, &v187, &v186);
                    if ( v186 )
                    {
                      v170 = (unsigned __int8 **)sub_A2E130(*v5, a2, 2238, 0);
                      v171 = v170;
                      if ( v170 )
                      {
                        sub_823450(v170, v37);
                        sub_823450(v171, 0);
                        sub_823450(v171, 0);
                        sub_8356A0(v171, v185, 8u);
                        sub_83DF30((__int64 *)&v192, (int)&v190, 10, 0, 0, 1u, 0);
                        sub_838D50(v171, v192, (size_t)v193);
                        sub_8356A0(v171, (unsigned int)v184, 3u);
                      }
                      else
                      {
                        sub_83DF30((__int64 *)&v192, (int)&v190, 10, 0, 0, 1u, 0);
                      }
                      std::string::_M_dispose();
                      if ( (unsigned int)v191 > 0x40 && v190 )
                        operator delete[](v190);
                      goto LABEL_124;
                    }
                    if ( (unsigned int)v191 > 0x40 && v190 )
                      operator delete[](v190);
                  }
                  sub_81F590((char *)v203);
                  v150 = v149;
                  sub_81F590((char *)v197);
                  v179 = v151;
                  if ( sub_8318F0((__int64)&v187, v150) || sub_8318F0((__int64)&v187, v179) )
                  {
                    v167 = (unsigned __int8 **)sub_A2E130(*v5, a2, 2238, 0);
                    v168 = v167;
                    if ( v167 )
                    {
                      sub_823450(v167, v37);
                      sub_823450(v168, v173);
                      v169 = sub_8318F0((__int64)&v187, v150);
                      sub_823450(v168, 2 - v169);
                      sub_8356A0(v168, v185, 8u);
                      sub_83DF30((__int64 *)&v192, (int)&v187, 10, 0, 0, 1u, 0);
                      sub_838D50(v168, v192, (size_t)v193);
                    }
                    else
                    {
                      sub_83DF30((__int64 *)&v192, (int)&v187, 10, 0, 0, 1u, 0);
                    }
                    std::string::_M_dispose();
                    goto LABEL_124;
                  }
                  v152 = v187;
                  if ( v188 > 0x40 )
                    v152 = *(void **)v187;
                  v180 = v152;
                  if ( sub_820230((const __m128i *)v201, (const __m128i *)v195) )
                  {
                    v153 = *v5;
                    v154 = (_QWORD)v180 * v184;
                    if ( v196 >= v202 && v196 - v202 < v154 )
                    {
                      if ( v37 )
                      {
                        if ( (unsigned __int8)sub_836040(v153, a2, (__int64)v201, v185, (char *)v180 - 1) )
                        {
                          v155 = -1;
                          if ( (unsigned __int8)sub_836040(*v5, a2, (__int64)v195, v185, (char *)v180 - 1) )
                          {
LABEL_229:
                            while ( 1 )
                            {
                              v156 = *v5;
                              LODWORD(v192) = 0;
                              BYTE4(v192) &= ~1u;
                              if ( !(unsigned __int8)sub_85F440(
                                                       v156,
                                                       (_DWORD *)a2,
                                                       v185,
                                                       (__int64)v201,
                                                       (__int64)&v192,
                                                       0) )
                                break;
                              v13 = sub_84C750(*v5, (_DWORD *)a2, (__m128i *)v195, v185, (__int64)&v192);
                              if ( !(_BYTE)v13 )
                                break;
                              v180 = (char *)v180 - 1;
                              if ( !v180 )
                                goto LABEL_253;
                              if ( !(unsigned __int8)sub_836040(*v5, a2, (__int64)v201, v185, (void *)v155)
                                || !(unsigned __int8)sub_836040(*v5, a2, (__int64)v195, v185, (void *)v155) )
                              {
                                break;
                              }
                              if ( (unsigned int)v192 > 1 )
                                sub_69F740((__int64)&v192);
                            }
                            v13 = 0;
LABEL_253:
                            if ( (unsigned int)v192 > 1 )
                              sub_69F740((__int64)&v192);
LABEL_125:
                            if ( v188 <= 0x40 )
                              goto LABEL_49;
LABEL_126:
                            if ( v187 )
                              operator delete[](v187);
LABEL_49:
                            if ( ptr != v206 )
                              free(ptr);
                            v50 = v198;
                            if ( v198 == &v199 )
                              return v13;
LABEL_52:
                            free(v50);
                            return v13;
                          }
                        }
LABEL_124:
                        v13 = 0;
                        goto LABEL_125;
                      }
LABEL_267:
                      v172 = (unsigned __int8 **)sub_A2E130(v153, a2, 2236, 0);
                      if ( v172 )
                        sub_823450(v172, v173);
                      goto LABEL_124;
                    }
                    if ( !v37 && v202 >= v196 )
                    {
                      v155 = 1;
                      if ( v202 - v196 >= v154 )
                        goto LABEL_229;
                      goto LABEL_267;
                    }
                  }
                  v155 = 1;
                  goto LABEL_229;
                }
                v164 = 2234;
              }
              v165 = (unsigned __int8 **)sub_A2E130(v147, a2, v164, 0);
              v166 = v165;
              if ( v165 )
              {
                sub_823450(v165, v37);
                sub_8356A0(v166, v185, 8u);
              }
              goto LABEL_124;
            default:
              return 0;
          }
        }
        return 0;
      }
      if ( a3 != 1197 )
      {
        if ( a3 != 1198 )
          return 0;
LABEL_53:
        v51 = sub_A2CB40(*a1);
        v52 = *a1;
        if ( (*(_BYTE *)(v51 + 1) & 0x10) != 0 )
        {
          v53 = (unsigned __int8 **)sub_A2E240(v52, a2, 2217, 0);
          v54 = v53;
          if ( v53 )
          {
            sub_823450(v53, 0);
            sub_823450(v54, 0);
            sub_C64680(v201, *(_QWORD *)(*(_QWORD *)(*v5 + 16) + 17360LL), a3);
            sub_838D50(v54, (_BYTE *)v201[0], (size_t)v201[1]);
          }
          else
          {
            sub_C64680(v201, *(_QWORD *)(*(_QWORD *)(*v5 + 16) + 17360LL), a3);
          }
          std::string::_M_dispose();
        }
        else
        {
          sub_A2E240(v52, a2, 110, 0);
        }
      }
LABEL_57:
      v13 = sub_871080(
              (__int64)v5,
              *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3)),
              (__int64 *)*(unsigned __int8 *)(a2 + 3),
              v7,
              v8,
              v9);
      if ( !(_BYTE)v13 )
        return v13;
      v57 = *(_BYTE *)(a2 + 2);
      v58 = *(unsigned __int8 *)(a2 + 3);
      LODWORD(v193) = 1;
      v59 = *v5;
      BYTE4(v193) = 0;
      v192 = nullptr;
      v178 = sub_87D880(*(_QWORD *)(v58 + a2 + 8LL * ((v57 & 8) != 0) + 8 + 8), (__int64)&v192, v59, v58, v55, v56);
      if ( !v178 )
        goto LABEL_132;
      if ( a3 - 1447 <= 1 || a3 - 1197 <= 1 )
      {
        v174 = -1;
      }
      else
      {
        v62 = *(_BYTE *)(a2 + 2);
        v63 = *(unsigned __int8 *)(a2 + 3);
        LODWORD(v201[1]) = 1;
        v64 = *v5;
        v201[0] = nullptr;
        BYTE4(v201[1]) = 0;
        if ( !(unsigned __int8)sub_87D880(
                                 *(_QWORD *)(v63 + a2 + 8LL * ((v62 & 8) != 0) + 8 + 16),
                                 (__int64)v201,
                                 v64,
                                 v63,
                                 v60,
                                 v61) )
        {
          if ( LODWORD(v201[1]) > 0x40 && v201[0] )
            operator delete[](v201[0]);
          goto LABEL_132;
        }
        if ( LODWORD(v201[1]) <= 0x40 )
        {
          v174 = (__int64)v201[0];
        }
        else
        {
          v174 = *(_QWORD *)v201[0];
          operator delete[](v201[0]);
        }
        if ( !v174 )
          goto LABEL_94;
      }
      v65 = v5[1];
      if ( (*(_BYTE *)(v65 + 24) & 1) == 0 )
      {
        v66 = *v5;
        v13 = *(_BYTE *)(v65 + 128) & 1;
        if ( (*(_BYTE *)(v65 + 128) & 1) != 0 )
        {
          v114 = sub_A2E130(v66, a2, 2168, 0);
          v115 = (_QWORD *)v114;
          if ( v114 )
          {
            v116 = *(unsigned __int8 **)v114;
            if ( !*(_QWORD *)v114 )
            {
              v157 = *(_QWORD *)(v114 + 8);
              v158 = *(_DWORD *)(v157 + 14976);
              if ( v158 )
              {
                v159 = (unsigned int)(v158 - 1);
                *(_DWORD *)(v157 + 14976) = v159;
                v116 = *(unsigned __int8 **)(v157 + 8 * v159 + 14848);
                v160 = *((unsigned int *)v116 + 134);
                v161 = *((_QWORD *)v116 + 66);
                *v116 = 0;
                *((_DWORD *)v116 + 106) = 0;
                v162 = v161 + (v160 << 6);
                while ( v161 != v162 )
                {
                  while ( 1 )
                  {
                    v162 -= 64;
                    v163 = *(void **)(v162 + 24);
                    if ( v163 == (void *)(v162 + 40) )
                      break;
                    operator delete(v163, *(_QWORD *)(v162 + 40) + 1LL);
                    if ( v161 == v162 )
                      goto LABEL_241;
                  }
                }
LABEL_241:
                *((_DWORD *)v116 + 134) = 0;
              }
              else
              {
                v116 = (unsigned __int8 *)operator new(0x3A0u);
                *v116 = 0;
                *((_QWORD *)v116 + 12) = v116 + 112;
                *((_QWORD *)v116 + 13) = 0;
                *((_QWORD *)v116 + 16) = v116 + 144;
                *((_QWORD *)v116 + 17) = 0;
                *((_QWORD *)v116 + 20) = v116 + 176;
                *((_QWORD *)v116 + 21) = 0;
                *((_QWORD *)v116 + 24) = v116 + 208;
                *((_QWORD *)v116 + 25) = 0;
                *((_QWORD *)v116 + 28) = v116 + 240;
                *((_QWORD *)v116 + 32) = v116 + 272;
                *((_QWORD *)v116 + 36) = v116 + 304;
                *((_QWORD *)v116 + 40) = v116 + 336;
                *((_QWORD *)v116 + 44) = v116 + 368;
                *((_QWORD *)v116 + 48) = v116 + 400;
                v116[112] = 0;
                v116[144] = 0;
                v116[176] = 0;
                v116[208] = 0;
                *((_QWORD *)v116 + 29) = 0;
                v116[240] = 0;
                *((_QWORD *)v116 + 33) = 0;
                v116[272] = 0;
                *((_QWORD *)v116 + 37) = 0;
                v116[304] = 0;
                *((_QWORD *)v116 + 41) = 0;
                v116[336] = 0;
                *((_QWORD *)v116 + 45) = 0;
                v116[368] = 0;
                *((_QWORD *)v116 + 49) = 0;
                v116[400] = 0;
                *((_QWORD *)v116 + 52) = v116 + 432;
                *((_QWORD *)v116 + 53) = 0x800000000LL;
                *((_QWORD *)v116 + 66) = v116 + 544;
                *((_QWORD *)v116 + 67) = 0x600000000LL;
              }
              *v115 = v116;
            }
            v116[*v116 + 1] = 2;
            v117 = (_BYTE *)*v115;
            v118 = *(unsigned __int8 *)*v115;
            *v117 = v118 + 1;
            *(_QWORD *)&v117[8 * v118 + 16] = 0;
          }
          *(_BYTE *)(v65 + 24) |= 1u;
          *(_DWORD *)(v65 + 56) = 0;
        }
        else
        {
          v67 = sub_81FA40(v65 + 24, *(_QWORD *)(v66 + 16));
          if ( a3 - 909 > 1 )
          {
            if ( a3 > 0x59F )
            {
              v70 = v192;
              if ( (unsigned int)v193 > 0x40 )
                v70 = *(void **)v192;
LABEL_80:
              v72 = v5;
              v73 = v70;
              v74 = v67;
              v75 = v72;
              while ( 1 )
              {
                v76 = v75[1];
                v77 = *v75;
                BYTE4(v201[0]) &= ~1u;
                LODWORD(v201[0]) = 0;
                v78 = sub_85F440(v77, (_DWORD *)a2, v74, v76, (__int64)v201, 0);
                v79 = (unsigned int)v201[0];
                if ( !v78 || LODWORD(v201[0]) != 2 )
                  break;
                if ( (unsigned int)v202 <= 0x40 )
                {
                  if ( v201[1] == v73 )
                    goto LABEL_179;
                  v80 = v201[1] == nullptr;
                }
                else
                {
                  if ( *(void **)v201[1] == v73 )
                    goto LABEL_179;
                  v176 = v202;
                  v80 = v176 == (unsigned int)sub_2587400(&v201[1]);
                }
                if ( v80 )
                {
                  v5 = v75;
                  sub_69F740((__int64)v201);
                  goto LABEL_94;
                }
                v81 = v75[1];
                v82 = *v75;
                BYTE4(v195[1]) = 0;
                LODWORD(v195[1]) = 64;
                v195[0] = &dword_0 + 1;
                v83 = sub_835AB0(v82, a2, v81, v74, (__int64)v195);
                if ( LODWORD(v195[1]) > 0x40 && v195[0] )
                {
                  v177 = v83;
                  operator delete[](v195[0]);
                  v83 = v177;
                }
                v79 = (unsigned int)v201[0];
                if ( !v83 )
                  break;
                if ( LODWORD(v201[0]) > 1 )
                {
                  sub_69F740((__int64)v201);
                  if ( !--v174 )
                  {
LABEL_93:
                    v5 = v75;
                    goto LABEL_94;
                  }
                }
                else if ( !--v174 )
                {
                  goto LABEL_93;
                }
              }
LABEL_153:
              if ( v79 > 1 )
LABEL_154:
                sub_69F740((__int64)v201);
LABEL_133:
              if ( (unsigned int)v193 <= 0x40 )
                return v13;
              v31 = v192;
              if ( !v192 )
                return v13;
              goto LABEL_27;
            }
            if ( a3 > 0x59D )
            {
              v70 = v192;
              if ( (unsigned int)v193 > 0x40 )
                v70 = *(void **)v192;
LABEL_165:
              while ( 1 )
              {
                v130 = v5[1];
                v131 = *v5;
                BYTE4(v201[0]) &= ~1u;
                LODWORD(v201[0]) = 0;
                v132 = sub_85F440(v131, (_DWORD *)a2, v67, v130, (__int64)v201, 0);
                v79 = (unsigned int)v201[0];
                if ( !v132 || LODWORD(v201[0]) != 2 )
                  goto LABEL_153;
                if ( (unsigned int)v202 <= 0x40 )
                {
                  if ( v201[1] == v70 )
                  {
LABEL_179:
                    v13 = v178;
                    goto LABEL_154;
                  }
                }
                else if ( *(void **)v201[1] == v70 )
                {
                  goto LABEL_179;
                }
                v133 = v5[1];
                v134 = *v5;
                BYTE4(v195[1]) = 0;
                LODWORD(v195[1]) = 64;
                v195[0] = &dword_0 + 1;
                v135 = sub_835AB0(v134, a2, v133, v67, (__int64)v195);
                if ( LODWORD(v195[1]) > 0x40 && v195[0] )
                {
                  v182 = v135;
                  operator delete[](v195[0]);
                  v135 = v182;
                }
                v79 = (unsigned int)v201[0];
                if ( !v135 )
                  goto LABEL_153;
                if ( LODWORD(v201[0]) > 1 )
                {
                  sub_69F740((__int64)v201);
                  if ( !--v174 )
                    goto LABEL_94;
                }
                else if ( !--v174 )
                {
                  goto LABEL_94;
                }
              }
            }
            if ( a3 > 0x4AC )
            {
              sub_8260F0((__int64)v201, *(_QWORD *)(*v5 + 16), v67, (__int64)&v192);
              v68 = sub_804370((__int64 *)v201, (__int64 *)&v192);
              if ( LODWORD(v201[1]) > 0x40 && v201[0] )
                operator delete[](v201[0]);
              v181 = v178;
              if ( !v68 )
              {
LABEL_75:
                v69 = sub_6F6DE0(
                        *(_QWORD *)(*v5 + 16),
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5 + 16) + 18488LL) & 0xFFFFFFFFFFFFFFF0LL));
                sub_25877E0(v201, &v192, v69);
                v70 = v201[0];
                if ( LODWORD(v201[1]) > 0x40 )
                {
                  v71 = *(void **)v201[0];
                  if ( v201[0] )
                  {
                    v175 = *(void **)v201[0];
                    operator delete[](v201[0]);
                    v71 = v175;
                  }
                  v70 = v71;
                }
                if ( !v181 )
                  goto LABEL_165;
                goto LABEL_80;
              }
LABEL_94:
              sub_823870((__m128i *)v5[1], *(_QWORD *)(*v5 + 16), *(_QWORD *)(a2 + 8));
              v13 = v178;
              goto LABEL_133;
            }
LABEL_185:
            v181 = 0;
            goto LABEL_75;
          }
          v141 = (_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned __int8)sub_B19120(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL), 0) )
          {
            v145 = (unsigned __int8 **)sub_A2E130(*v5, a2, 2226, 0);
            if ( v145 )
              sub_8356A0(v145, v67, 8u);
          }
          else
          {
            if ( (unsigned __int8)sub_B07E10(*v141, 0) || (unsigned __int8)sub_B07E90(*v141) )
              goto LABEL_185;
            v144 = (unsigned __int8 **)sub_A2E130(*v5, a2, 2231, 0);
            sub_C64680(v201, *(_QWORD *)(*(_QWORD *)(*v5 + 16) + 17360LL), a3);
            if ( v144 )
            {
              sub_838D50(v144, (_BYTE *)v201[0], (size_t)v201[1]);
              sub_8356A0(v144, v67, 8u);
            }
            std::string::_M_dispose();
          }
        }
      }
LABEL_132:
      v13 = 0;
      goto LABEL_133;
    }
    return 0;
  }
  if ( a3 == 202 )
  {
    v87 = (__int64 *)*(unsigned __int8 *)(a2 + 3);
    v88 = a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
    *(__m128 *)v201 = _mm_loadh_ps((const double *)a1 + 1);
    v89 = *(__int64 *)((char *)v87 + v88);
    LOBYTE(v202) = *((_BYTE *)a1 + 16);
    v13 = sub_871080((__int64)v201, v89, v87, v7, v8, v9);
    if ( !(_BYTE)v13 )
      return v13;
    v90 = (const __m128i *)a1[1];
    v91 = _mm_loadu_si128(v90);
    v202 = v90[1].m128i_u64[0];
    *(__m128i *)v201 = v91;
    sub_823900(v203, (__int64)&v90[1].m128i_i64[1]);
    v92 = *(unsigned __int8 *)(a2 + 3);
    v93 = v90[8].m128i_i16[0];
    LODWORD(v193) = 1;
    BYTE4(v193) = 0;
    v192 = nullptr;
    LOBYTE(v93) = v93 & 3;
    v94 = v93 | v207 & 0xFC;
    v95 = *a1;
    v207 = v94;
    v96 = v92 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
    v13 = sub_87D960(*(_QWORD *)(a2 + v96 + 8), *(_QWORD *)(*(_QWORD *)(a2 + v96) + 8LL), v95, (__int64)&v192, v97, v98);
    if ( !(_BYTE)v13 )
      goto LABEL_150;
    v101 = (__int64)v192;
    if ( (unsigned int)v193 > 0x40 )
      v101 = *(_QWORD *)v192;
    if ( *(_DWORD *)(a2 + 16) > 2u )
    {
      v102 = *(_BYTE *)(a2 + 2);
      v103 = *(unsigned __int8 *)(a2 + 3);
      LODWORD(v195[1]) = 1;
      v104 = *a1;
      BYTE4(v195[1]) = 0;
      v195[0] = nullptr;
      if ( !(unsigned __int8)sub_87D880(
                               *(_QWORD *)(v103 + a2 + 8LL * ((v102 & 8) != 0) + 8 + 16),
                               (__int64)v195,
                               v104,
                               v103,
                               v99,
                               v100) )
      {
        if ( LODWORD(v195[1]) > 0x40 && v195[0] )
          operator delete[](v195[0]);
        goto LABEL_150;
      }
      if ( LODWORD(v195[1]) <= 0x40 )
      {
        v202 -= (unsigned __int64)v195[0];
      }
      else
      {
        v202 -= *(_QWORD *)v195[0];
        operator delete[](v195[0]);
      }
    }
    if ( sub_69F610(v201) && (v119 = sub_825BB0(*a1, (__int64 *)v201), v101 > v119) )
    {
      v120 = a1[1];
      *(_BYTE *)(v120 + 24) |= 1u;
      *(_DWORD *)(v120 + 56) = 0;
      v121 = (unsigned __int8 **)sub_A2E240(
                                   *a1,
                                   *(_QWORD *)(a2
                                             + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0)
                                             + 8
                                             + *(unsigned __int8 *)(a2 + 3)),
                                   2181,
                                   0);
      v122 = v121;
      if ( !v121 )
      {
LABEL_150:
        v13 = 0;
        goto LABEL_107;
      }
      sub_823450(v121, 0);
      v123 = v119;
    }
    else
    {
      if ( v202 == v101 * ((v202 != 0) + (v202 - (v202 != 0)) / v101) )
      {
LABEL_107:
        if ( (unsigned int)v193 > 0x40 && v192 )
          operator delete[](v192);
        v50 = ptr;
        if ( ptr == v206 )
          return v13;
        goto LABEL_52;
      }
      v136 = a1[1];
      *(_BYTE *)(v136 + 24) |= 1u;
      *(_DWORD *)(v136 + 56) = 0;
      v137 = sub_69F610(v201);
      v138 = *a1;
      v139 = *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3));
      if ( v137 )
      {
        v140 = (unsigned __int8 **)sub_A2E240(v138, v139, 2181, 0);
        v122 = v140;
        if ( !v140 )
          goto LABEL_150;
        sub_823450(v140, 1);
        v123 = v202;
      }
      else
      {
        v122 = (unsigned __int8 **)sub_A2E240(v138, v139, 2182, 0);
        if ( !v122 )
          goto LABEL_150;
        v123 = v202;
      }
    }
    sub_823450(v122, v123);
    sub_823450(v122, v101);
    goto LABEL_150;
  }
  if ( a3 <= 0xCA )
  {
    if ( a3 > 0x7B )
    {
      if ( a3 != 201 )
        return 0;
    }
    else
    {
      if ( a3 > 0x79 )
      {
        v15 = (__int64 *)*(unsigned __int8 *)(a2 + 3);
        v16 = a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
        *(__m128 *)v201 = _mm_loadh_ps((const double *)a1 + 1);
        v17 = *(__int64 *)((char *)v15 + v16);
        LOBYTE(v202) = *((_BYTE *)a1 + 16);
        v13 = sub_871080((__int64)v201, v17, v15, v7, v8, v9);
        if ( (_BYTE)v13 )
        {
          v20 = *(_BYTE *)(a2 + 2);
          v21 = *a1;
          LODWORD(v201[1]) = 1;
          v22 = *(unsigned __int8 *)(a2 + 3);
          BYTE4(v201[1]) = 0;
          v201[0] = nullptr;
          v23 = v22 + 8LL * ((v20 & 8) != 0) + 8;
          v13 = sub_87D960(
                  *(_QWORD *)(a2 + v23 + 8),
                  *(_QWORD *)(*(_QWORD *)(a2 + v23) + 8LL),
                  v21,
                  (__int64)v201,
                  v18,
                  v19);
          if ( (_BYTE)v13 )
          {
            v24 = sub_825BB0(*a1, (__int64 *)a1[1]);
            v25 = v24 | *(_QWORD *)(a1[1] + 16LL);
            v13 = sub_832AA0((__int64)v201, (void *)(v25 & -v25));
            if ( !(_BYTE)v13 )
            {
              v13 = sub_832AA0((__int64)v201, (void *)v24);
              if ( (_BYTE)v13 )
              {
                v26 = (unsigned int)v201[1];
                v27 = (unsigned __int64)v201[0];
                if ( LODWORD(v201[1]) > 0x40 )
                  v27 = *(_QWORD *)v201[0];
                v28 = a1[1];
                v29 = *(_QWORD *)(v28 + 16);
                if ( a3 == 122 )
                  v30 = v29 - v29 % v27;
                else
                  v30 = v27 * ((v29 != 0) + (v29 - (v29 != 0)) / v27);
                *(_QWORD *)(v28 + 16) = v30;
                if ( v30 != v29 )
                  *(_BYTE *)(v28 + 128) &= ~1u;
LABEL_25:
                if ( v26 <= 0x40 )
                  return v13;
                v31 = v201[0];
                if ( !v201[0] )
                  return v13;
LABEL_27:
                operator delete[](v31);
                return v13;
              }
              v195[0] = (void *)sub_A2E130(
                                  *a1,
                                  *(_QWORD *)(a2
                                            + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0)
                                            + 8
                                            + *(unsigned __int8 *)(a2 + 3)),
                                  2176,
                                  0);
              if ( v195[0] )
                sub_829A30((unsigned __int8 ***)v195, (__int64)v201);
            }
          }
          v26 = (unsigned int)v201[1];
          goto LABEL_25;
        }
        return v13;
      }
      if ( a3 != 121 )
        return 0;
    }
LABEL_96:
    v84 = *(unsigned __int8 *)(a2 + 3);
    v85 = a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8;
    *(__m128 *)v201 = _mm_loadh_ps((const double *)a1 + 1);
    v86 = *(_QWORD *)(v85 + v84);
    LOBYTE(v202) = *((_BYTE *)a1 + 16);
    return (unsigned int)sub_869D30((__m128i *)v201, v86);
  }
  if ( a3 == 209 )
    goto LABEL_57;
  if ( a3 != 225 )
    return 0;
  return sub_87DD20(*a1, a2, (__m128i *)a1[1]);
}

