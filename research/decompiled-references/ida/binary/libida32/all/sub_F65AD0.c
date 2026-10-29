void __fastcall sub_F65AD0(__int64 a1, char *a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6, __int64 a7)
{
  int v9; // ebp
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // esi
  int v17; // ecx
  __int64 v18; // rax
  _QWORD *v19; // r13
  unsigned __int64 v20; // rax
  __int64 *v21; // rbp
  __int64 v22; // rax
  __int64 *v23; // r12
  __int64 v24; // r13
  __int64 *v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rcx
  void *v28; // r12
  signed __int64 v29; // rbp
  __int64 v30; // rbx
  unsigned __int64 v31; // rdx
  __int64 *v32; // rax
  __m128 v33; // xmm5
  int v34; // ecx
  int v35; // ecx
  int v36; // r8d
  unsigned __int64 v37; // rax
  unsigned int j; // eax
  _QWORD *v39; // rsi
  unsigned int v40; // eax
  __int64 v41; // r14
  __m128i v42; // xmm1
  __int64 v43; // rsi
  void *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  char *v54; // rsi
  __int64 v55; // rbp
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  _QWORD *v60; // rax
  __int64 *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rdi
  __int64 v67; // rcx
  __int64 v68; // r9
  __int64 v69; // rbp
  __m128i v70; // rax
  _QWORD *v71; // rax
  __int64 *v72; // rsi
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // r13
  char v76; // r12
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  _QWORD *v80; // rdx
  __int64 v81; // rcx
  int v82; // eax
  int v83; // esi
  bool v84; // zf
  __m128i v85; // xmm3
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  __int64 *v88; // rbp
  __int64 *v89; // r13
  __int64 v90; // rdi
  unsigned int v91; // edx
  __int64 *v92; // rsi
  __int64 v93; // r8
  __int64 v94; // rax
  int v95; // esi
  int v96; // r11d
  __int64 v97; // r13
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rbp
  unsigned __int64 v101; // rdx
  int v102; // r10d
  __int64 *v103; // r11
  _QWORD *v104; // rax
  __int64 v105; // rdx
  int v106; // esi
  __int64 *v107; // rbp
  __int64 v108; // rax
  int v109; // edx
  __int64 v110; // r12
  int v111; // r8d
  int v112; // esi
  unsigned __int64 v113; // rax
  unsigned int i; // eax
  _QWORD *v115; // rdx
  unsigned int v116; // eax
  unsigned __int64 v117; // rax
  __int64 v118; // rbp
  __int64 v119; // rbx
  _QWORD *v120; // rax
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rax
  unsigned __int64 v124; // rdx
  __int64 v125; // rax
  unsigned __int64 v126; // rdx
  __int64 *v127; // rcx
  char v128; // al
  __int64 *v129; // rcx
  __int64 *v130; // rax
  int v131; // edi
  __int64 v132; // rdx
  unsigned int v133; // edi
  __int64 v134; // r9
  int v135; // esi
  __int64 v136; // r8
  __int64 v137; // rdx
  _QWORD *v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  void *v141; // rax
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  int v145; // ecx
  __int64 v146; // rdi
  int v147; // ecx
  unsigned int v148; // edx
  _QWORD *v149; // rax
  _QWORD *v150; // r8
  unsigned __int64 v151; // rax
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rsi
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rdx
  unsigned __int64 v160; // rax
  __m128i v161; // xmm7
  __int64 v162; // rax
  _QWORD *v163; // rax
  __int64 *v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  _QWORD *v172; // rax
  __int64 *v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  _QWORD *v177; // rax
  _QWORD *v178; // rdx
  _QWORD *v179; // rax
  __m128i v180; // xmm6
  int v181; // eax
  int v182; // r8d
  __int64 v183; // rax
  _QWORD *v184; // r9
  __int64 *v185; // [rsp+8h] [rbp-200h]
  __int64 *v186; // [rsp+8h] [rbp-200h]
  unsigned __int64 v187; // [rsp+8h] [rbp-200h]
  __int64 v188; // [rsp+10h] [rbp-1F8h]
  _QWORD *v190; // [rsp+20h] [rbp-1E8h]
  __int64 *v191; // [rsp+20h] [rbp-1E8h]
  void *v192; // [rsp+20h] [rbp-1E8h]
  __int64 v193; // [rsp+28h] [rbp-1E0h]
  __int64 v195; // [rsp+38h] [rbp-1D0h] BYREF
  __m128 *v196; // [rsp+40h] [rbp-1C8h]
  __int64 *v197; // [rsp+48h] [rbp-1C0h]
  __m128i v198; // [rsp+50h] [rbp-1B8h] BYREF
  __m128i *v199; // [rsp+60h] [rbp-1A8h]
  __int64 v200; // [rsp+68h] [rbp-1A0h]
  __int64 v201; // [rsp+70h] [rbp-198h]
  void **p_ptr; // [rsp+78h] [rbp-190h]
  void **p_src; // [rsp+80h] [rbp-188h]
  int v204; // [rsp+8Ch] [rbp-17Ch]
  __int64 v205; // [rsp+90h] [rbp-178h] BYREF
  _QWORD *v206; // [rsp+98h] [rbp-170h] BYREF
  __m128i v207; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v208; // [rsp+B0h] [rbp-158h]
  __m128i v209; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v210; // [rsp+D0h] [rbp-138h]
  void *src; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v212; // [rsp+E8h] [rbp-120h]
  char v213; // [rsp+F0h] [rbp-118h] BYREF
  void *ptr; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v215; // [rsp+118h] [rbp-F0h]
  char v216; // [rsp+120h] [rbp-E8h] BYREF
  _BYTE v217[24]; // [rsp+160h] [rbp-A8h] BYREF
  void *v218; // [rsp+178h] [rbp-90h] BYREF
  __int64 v219; // [rsp+180h] [rbp-88h]
  _QWORD v220[16]; // [rsp+188h] [rbp-80h] BYREF

  v9 = a3;
  v11 = *(_QWORD *)(a1 + 40);
  v201 = a3;
  v195 = a4;
  v13 = *(_QWORD *)(sub_EBA840(v11, a2, a3, a4, (__int64)a5, a6)[9] + 48LL);
  v16 = v13 & 0xFFFFFFF8;
  *(_QWORD *)v217 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v13 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v17 = a4;
    if ( (v13 & 4) != 0 )
    {
      v163 = sub_EBA840(*(_QWORD *)(a1 + 40), *(char **)(a1 + 8), v12, a4, v14, v15);
      v9 = sub_F5E070(v163 + 9, *(__int64 *)v217, v164, v165, v166, v167);
      v172 = sub_EBA840(*(_QWORD *)(a1 + 40), *(char **)(a1 + 32), v168, v169, v170, v171);
      v16 = *(_DWORD *)v217;
      v17 = sub_F5E070(v172 + 9, *(__int64 *)v217, v173, v174, v175, v176);
    }
    sub_F65AD0(a1, v16, v9, v17, (_DWORD)a5, a6, a7);
    sub_F63DE0(a7, (__int64 *)v217);
  }
  p_ptr = &ptr;
  ptr = &v216;
  v215 = 0x800000000LL;
  p_src = &src;
  src = &v213;
  v212 = 0x400000000LL;
  v18 = sub_B6AC30((__int64)(a2 + 64));
  v19 = (_QWORD *)v18;
  if ( v18 )
  {
    if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 35 > 3 )
    {
      while ( 1 )
      {
        v20 = v19[1] & 0xFFFFFFFFFFFFFFF8LL;
        v19 = (_QWORD *)v20;
        if ( !v20 )
          break;
        if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 35 <= 3 )
          goto LABEL_111;
      }
    }
    else
    {
LABEL_111:
      v187 = (unsigned int)(37 * v201);
LABEL_112:
      if ( !(unsigned __int8)sub_F59A10((__int64)v19) )
        goto LABEL_119;
      v108 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 32LL))(v19);
      v109 = *(_DWORD *)(a1 + 104);
      v110 = v108;
      if ( v109 )
      {
        v111 = 1;
        v112 = v109 - 1;
        v113 = 0xBF58476D1CE4E5B9LL
             * (v187 | ((unsigned __int64)(((unsigned int)v108 >> 9) ^ ((unsigned int)v108 >> 4)) << 32));
        for ( i = (v109 - 1) & ((v113 >> 31) ^ v113); ; i = v112 & v116 )
        {
          v115 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 40LL * i);
          if ( v110 == *v115 && v115[1] == v201 )
            break;
          if ( *v115 == -4096 && v115[1] == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_122;
          v116 = v111 + i;
          ++v111;
        }
        v119 = v115[2];
        v118 = v115[4];
      }
      else
      {
LABEL_122:
        v118 = 0;
        v119 = 0;
      }
      v120 = (_QWORD *)sub_F57040(v110, a7);
      v206 = v120;
      if ( v120 )
      {
        sub_F5D5B0((__m128 *)v217, *(_QWORD *)(a1 + 40), v110, (__int64)v120, v121, v122);
        if ( *(_OWORD *)&v217[8] == 0 )
        {
          v127 = *(__int64 **)a1;
          v207.m128i_i64[0] = v110;
          v196 = (__m128 *)&v209;
          v190 = v206;
          v197 = v127;
          v198.m128i_i64[0] = (__int64)(v127 + 14);
          v199 = &v207;
          v128 = sub_F5A760(v127 + 14, v207.m128i_i64, &v209);
          v129 = v197;
          v84 = v128 == 0;
          v130 = (__int64 *)v209.m128i_i64[0];
          if ( !v84 )
            goto LABEL_141;
          v131 = *((_DWORD *)v197 + 30);
          *(_QWORD *)v217 = v209.m128i_i64[0];
          v132 = (unsigned int)(v131 + 1);
          v133 = *((_DWORD *)v197 + 32);
          v134 = (unsigned int)(4 * v132);
          v135 = 2 * v133;
          v136 = 3 * v133;
          if ( (unsigned int)v134 < (unsigned int)v136 )
          {
            v136 = v133 >> 3;
            if ( v133 - *((_DWORD *)v197 + 31) - (unsigned int)v132 > (unsigned int)v136 )
            {
LABEL_138:
              v84 = *v130 == -4096;
              *((_DWORD *)v129 + 30) = v132;
              if ( !v84 )
                --*((_DWORD *)v129 + 31);
              v137 = v207.m128i_i64[0];
              v130[1] = 0;
              *v130 = v137;
LABEL_141:
              v138 = v190;
              v191 = (__int64 *)(a1 + 712);
              v130[1] = (__int64)v138;
              v197 = (__int64 *)&v206;
              if ( (unsigned __int8)sub_F55820((__int64 *)(a1 + 712), (__int64 *)&v206, v217) )
              {
                v141 = *(void **)(*(_QWORD *)v217 + 24LL);
              }
              else
              {
                v177 = sub_F55DB0((__int64)v191, v197, *(_QWORD **)v217, (__int64)v197, v139, v140);
                v178 = v206;
                *(_OWORD *)(v177 + 1) = 0;
                *v177 = v178;
                v177[3] = 0;
                v141 = nullptr;
              }
              *(_QWORD *)v217 = v110;
              v218 = v141;
              *(__m128 *)&v217[8] = _mm_loadh_ps((const double *)&v195);
              if ( !(unsigned __int8)sub_F55820(v191, (__int64 *)v217, v196) )
              {
                v179 = sub_F55DB0((__int64)v191, (__int64 *)v217, v209.m128i_i64[0], v142, v143, v144);
                v180 = _mm_loadu_si128((const __m128i *)&v217[8]);
                *v179 = *(_QWORD *)v217;
                *(__m128i *)(v179 + 1) = v180;
                v179[3] = v218;
              }
              v145 = *(_DWORD *)(a1 + 728);
              v146 = *(_QWORD *)(a1 + 712);
              if ( !v145 )
                goto LABEL_148;
              v147 = v145 - 1;
              v148 = v147 & (((unsigned int)v206 >> 9) ^ ((unsigned int)v206 >> 4));
              v149 = (_QWORD *)(v146 + 32LL * v148);
              v150 = (_QWORD *)*v149;
              if ( (_QWORD *)*v149 != v206 )
              {
                v181 = 1;
                if ( v150 == (_QWORD *)-4096LL )
                  goto LABEL_148;
                while ( 1 )
                {
                  v182 = v181 + 1;
                  v183 = v147 & (v148 + v181);
                  v148 = v183;
                  v149 = (_QWORD *)(v146 + 32 * v183);
                  v184 = (_QWORD *)*v149;
                  if ( v206 == (_QWORD *)*v149 )
                    break;
                  v181 = v182;
                  if ( v184 == (_QWORD *)-4096LL )
                    goto LABEL_148;
                }
              }
              *v149 = -8192;
              --*(_DWORD *)(a1 + 720);
              ++*(_DWORD *)(a1 + 724);
LABEL_148:
              if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 32) && v206 != (_QWORD *)v110 )
              {
                sub_F5E570((__int64)v199, a1, (__int64)v206, v195, v119, v118);
                if ( v207.m128i_i64[1] )
                {
                  v151 = sub_B4E950(v119 + 72);
                  if ( v151 )
                    v151 -= 64LL;
                  if ( *(_QWORD *)(a1 + 8) == v151 )
                  {
                    v154 = *(_QWORD *)(a1 + 40);
                    sub_F5D5B0(v196, v154, v119, v110, v152, v153);
                    v192 = (void *)sub_F63910(
                                     a1,
                                     v154,
                                     v155,
                                     v156,
                                     v157,
                                     v158,
                                     (char *)v209.m128i_i64[0],
                                     v209.m128i_u64[1],
                                     v210);
                    v193 = v159;
                    v160 = sub_B74A20((__int64)v206, v154);
                    v161 = _mm_load_si128(&v207);
                    v162 = *(_QWORD *)(v160 & 0xFFFFFFFFFFFFFFF0LL);
                    v218 = v192;
                    *(_QWORD *)&v217[16] = v208;
                    *(__m128i *)v217 = v161;
                    v219 = v193;
                    v220[0] = 0;
                    v220[1] = v162;
                    sub_F5FF40(a1, v119, (__m128i *)v217);
                  }
                }
              }
              goto LABEL_119;
            }
            v135 = *((_DWORD *)v197 + 32);
          }
          sub_F5EC40(v198.m128i_i64[0], v135, v132, (__int64)v197, v136, v134);
          sub_F5A760((__int64 *)v198.m128i_i64[0], v199->m128i_i64, v217);
          v129 = v197;
          LODWORD(v132) = *((_DWORD *)v197 + 30) + 1;
          v130 = *(__int64 **)v217;
          goto LABEL_138;
        }
      }
      if ( (*(_BYTE *)(v110 + 29) & 2) != 0 )
      {
        v123 = (unsigned int)v212;
        v124 = (unsigned int)v212 + 1LL;
        if ( v124 > HIDWORD(v212) )
        {
          sub_22134E0(p_src, p_src + 2, v124, 8);
          v123 = (unsigned int)v212;
        }
        *((_QWORD *)src + v123) = v110;
        LODWORD(v212) = v212 + 1;
      }
      else
      {
        v125 = (unsigned int)v215;
        v126 = (unsigned int)v215 + 1LL;
        if ( v126 > HIDWORD(v215) )
        {
          sub_22134E0(p_ptr, p_ptr + 2, v126, 8);
          v125 = (unsigned int)v215;
        }
        *((_QWORD *)ptr + v125) = v110;
        LODWORD(v215) = v215 + 1;
      }
LABEL_119:
      while ( 1 )
      {
        v117 = v19[1] & 0xFFFFFFFFFFFFFFF8LL;
        v19 = (_QWORD *)v117;
        if ( !v117 )
          break;
        if ( (*(_BYTE *)(v117 + 28) & 0x7Fu) - 35 <= 3 )
          goto LABEL_112;
      }
    }
  }
  v21 = (__int64 *)src;
  v22 = 8LL * (unsigned int)v212;
  v23 = (__int64 *)((char *)src + v22);
  v24 = v22 >> 3;
  if ( v22 )
  {
    while ( 1 )
    {
      v25 = (__int64 *)operator new(8 * v24, (const std::nothrow_t *)&std::nothrow);
      if ( v25 )
        break;
      v24 >>= 1;
      if ( !v24 )
        goto LABEL_108;
    }
    v185 = v25;
    sub_F62BE0(v21, v23, v25, (__int64 *)v24);
    v26 = v185;
  }
  else
  {
LABEL_108:
    sub_F57370(v21, v23);
    v26 = nullptr;
  }
  operator delete(v26, (const std::nothrow_t *)&std::nothrow);
  v27 = (unsigned int)v215;
  v28 = src;
  v29 = 8LL * (unsigned int)v212;
  v30 = v29 >> 3;
  v31 = (v29 >> 3) + (unsigned int)v215;
  if ( v31 > HIDWORD(v215) )
  {
    sub_22134E0(p_ptr, p_ptr + 2, v31, 8);
    v27 = (unsigned int)v215;
  }
  v32 = (__int64 *)ptr;
  if ( v29 )
  {
    memcpy((char *)ptr + 8 * v27, v28, v29);
    v32 = (__int64 *)ptr;
    LODWORD(v27) = v215;
  }
  LODWORD(v215) = v27 + v30;
  v197 = &v32[(unsigned int)(v27 + v30)];
  if ( v197 != v32 )
  {
    v186 = v32;
    v200 = (unsigned int)(37 * v201);
    v33 = _mm_loadh_ps((const double *)&v195);
    v196 = (__m128 *)(a1 + 712);
    v198 = (__m128i)v33;
    while ( 1 )
    {
      v34 = *(_DWORD *)(a1 + 104);
      v188 = *v186;
      if ( v34 )
      {
        v35 = v34 - 1;
        v36 = 1;
        v37 = 0xBF58476D1CE4E5B9LL
            * (v200 | ((unsigned __int64)(((unsigned int)*v186 >> 9) ^ ((unsigned int)*v186 >> 4)) << 32));
        for ( j = v35 & ((v37 >> 31) ^ v37); ; j = v35 & v40 )
        {
          v39 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 40LL * j);
          if ( v188 == *v39 && v39[1] == v201 )
            break;
          if ( *v39 == -4096 && v39[1] == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_27;
          v40 = v36 + j;
          ++v36;
        }
        v41 = v39[2];
      }
      else
      {
LABEL_27:
        v41 = 0;
      }
      v42 = _mm_load_si128(&v198);
      v43 = (__int64)v217;
      *(_QWORD *)v217 = *v186;
      v44 = (void *)*(unsigned int *)(a1 + 168);
      *(__m128i *)&v217[8] = v42;
      v218 = v44;
      if ( (unsigned __int8)sub_F55820((__int64 *)v196, (__int64 *)v217, &v207) )
        goto LABEL_29;
      v81 = *(unsigned int *)(a1 + 728);
      v45 = v207.m128i_i64[0];
      v82 = *(_DWORD *)(a1 + 720) + 1;
      v83 = 2 * v81;
      v46 = (unsigned int)(4 * v82);
      v209.m128i_i64[0] = v207.m128i_i64[0];
      if ( (unsigned int)v46 >= 3 * (int)v81 )
        goto LABEL_110;
      v43 = (unsigned int)(v81 - *(_DWORD *)(a1 + 724) - v82);
      if ( (unsigned int)v43 <= (unsigned int)v81 >> 3 )
        break;
LABEL_71:
      v84 = *(_QWORD *)v45 == -4096;
      *(_DWORD *)(a1 + 720) = v82;
      if ( !v84 )
        --*(_DWORD *)(a1 + 724);
      v85 = _mm_loadu_si128((const __m128i *)&v217[8]);
      *(_QWORD *)v45 = *(_QWORD *)v217;
      *(__m128i *)(v45 + 8) = v85;
      *(_QWORD *)(v45 + 24) = v218;
LABEL_29:
      v48 = v195;
      if ( a6 == v195 )
        goto LABEL_45;
      v49 = sub_B4E950(v41 + 72);
      v45 = v49 - 64;
      if ( v49 )
        v49 -= 64LL;
      if ( a5 == (_QWORD *)v49 )
        goto LABEL_45;
      memset(v217, 0, 20);
      v218 = v220;
      v219 = 0x800000000LL;
      v206 = a5;
      sub_F63DE0((__int64)v217, (__int64 *)&v206);
      v199 = (__m128i *)v41;
      v54 = (char *)v206;
      v41 = a6;
      while ( 1 )
      {
        v57 = *(_QWORD *)(sub_EBA840(*(_QWORD *)(a1 + 40), v54, v50, v51, v52, v53)[9] + 48LL);
        v207.m128i_i64[0] = v57 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v57 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          break;
        v59 = v57 & 4;
        if ( (_DWORD)v59 )
        {
          v60 = sub_EBA840(*(_QWORD *)(a1 + 40), *(char **)(a1 + 32), v59, v58, v52, v53);
          if ( sub_F5E070(v60 + 9, v207.m128i_i64[0], v61, v62, v63, v64) != a6 )
            break;
        }
        if ( *(_DWORD *)&v217[8] )
        {
          v65 = *(unsigned int *)&v217[16];
          if ( *(_DWORD *)&v217[16] )
          {
            v66 = v207.m128i_i64[0];
            v52 = *(_QWORD *)v217;
            LODWORD(v67) = (*(_DWORD *)&v217[16] - 1)
                         & (((unsigned __int32)v207.m128i_i32[0] >> 9)
                          ^ ((unsigned __int32)v207.m128i_i32[0] >> 4));
            v43 = *(_QWORD *)v217 + 8LL * (unsigned int)v67;
            v68 = *(_QWORD *)v43;
            if ( v207.m128i_i64[0] == *(_QWORD *)v43 )
              goto LABEL_44;
            v96 = 1;
            v97 = 0;
            if ( v68 != -4096 )
            {
              while ( 1 )
              {
                if ( v68 == -8192 && !v97 )
                  v97 = v43;
                v67 = (*(_DWORD *)&v217[16] - 1) & (unsigned int)(v67 + v96);
                v43 = *(_QWORD *)v217 + 8 * v67;
                v68 = *(_QWORD *)v43;
                if ( v207.m128i_i64[0] == *(_QWORD *)v43 )
                  break;
                if ( v68 == -4096 )
                {
                  if ( v97 )
                    v43 = v97;
                  goto LABEL_90;
                }
                ++v96;
              }
LABEL_44:
              sub_F60500(
                (__m128 *)&v209,
                (_QWORD *)v43,
                (_QWORD *)(*(_QWORD *)v217 + 8LL * *(unsigned int *)&v217[16]),
                (__int64)v217,
                1);
LABEL_45:
              v69 = a1 + 160;
LABEL_46:
              memset(v217, 0, sizeof(v217));
              if ( (*(_BYTE *)(v41 + 82) & 8) == 0 )
              {
                v43 = *(_QWORD *)(a1 + 40);
                sub_F5D5B0((__m128 *)v217, v43, v41, v188, v46, v47);
              }
              v70.m128i_i64[0] = sub_F63910(
                                   a1,
                                   v43,
                                   v45,
                                   v48,
                                   v46,
                                   v47,
                                   *(char **)v217,
                                   *(unsigned __int64 *)&v217[8],
                                   *(__int64 *)&v217[16]);
              v207 = v70;
              if ( v70.m128i_i64[0] || (v209.m128i_i64[0] = 0, v207.m128i_i64[1]) )
              {
                v71 = (_QWORD *)*(unsigned int *)(a1 + 168);
                v72 = (__int64 *)&v206;
                v199 = (__m128i *)&v206;
                v206 = v71;
                if ( (unsigned __int8)sub_F5A9C0((__int64 *)(a1 + 760), (__int64 *)&v206, &v209) )
                {
                  v75 = v209.m128i_i64[0] + 8;
                }
                else
                {
                  v72 = (__int64 *)v199;
                  v86 = sub_F603A0(a1 + 760, v199->m128i_i64, v209.m128i_i64[0], (__int64)v199, v73, v74);
                  v87 = v206;
                  *((_OWORD *)v86 + 1) = 0;
                  v75 = (unsigned __int64)(v86 + 1);
                  *v86 = v87;
                  v86[1] = 0;
                  v86[4] = 0;
                  v86[5] = 0;
                  *((_OWORD *)v86 + 3) = 0;
                }
                *(_QWORD *)(v75 + 40) = v188;
                *(_QWORD *)(v75 + 48) = *(_QWORD *)(sub_B74A20(v188, (__int64)v72) & 0xFFFFFFFFFFFFFFF0LL);
              }
              v209 = _mm_load_si128(&v207);
              if ( (*(_BYTE *)(v41 + 28) & 0x7F) == 0x24 )
              {
                sub_F59E60(v69, v41 | 5);
                sub_F59E60(v69, v41 | 6);
              }
              else
              {
                if ( v209.m128i_i64[0] || !sub_F58120(&v209.m128i_i64[1]) )
                {
                  v205 = *(unsigned int *)(a1 + 168);
                  if ( (unsigned __int8)sub_F5A9C0((__int64 *)(a1 + 760), &v205, &v206) )
                  {
                    v80 = v206 + 1;
                  }
                  else
                  {
                    v104 = sub_F603A0(a1 + 760, &v205, v206, v77, v78, v79);
                    v105 = v205;
                    *((_OWORD *)v104 + 1) = 0;
                    *v104 = v105;
                    v80 = v104 + 1;
                    v104[1] = 0;
                    v104[4] = 0;
                    v104[5] = 0;
                    *((_OWORD *)v104 + 3) = 0;
                  }
                  *(__m128i *)(v80 + 3) = _mm_load_si128(&v209);
                }
                sub_F59E60(v69, v41 | 4);
              }
              goto LABEL_54;
            }
LABEL_90:
            v98 = *(_DWORD *)&v217[8] + 1;
            v58 = (unsigned int)(3 * *(_DWORD *)&v217[16]);
            v209.m128i_i64[0] = v43;
            v53 = (unsigned int)(4 * (*(_DWORD *)&v217[8] + 1));
            if ( (unsigned int)v53 < (unsigned int)v58 )
            {
              v58 = (unsigned int)(*(_DWORD *)&v217[16] - *(_DWORD *)&v217[12] - v98);
              v53 = *(_DWORD *)&v217[16] >> 3;
              if ( (unsigned int)v58 > (unsigned int)v53 )
              {
LABEL_92:
                v84 = *(_QWORD *)v43 == -4096;
                *(_DWORD *)&v217[8] = v98;
                if ( !v84 )
                  --*(_DWORD *)&v217[12];
                *(_QWORD *)v43 = v66;
                sub_F60500((__m128 *)&v209, (_QWORD *)v43, (_QWORD *)(v52 + 8 * v65), (__int64)v217, 1);
                v99 = (unsigned int)v219;
                v51 = HIDWORD(v219);
                v100 = v207.m128i_i64[0];
                v101 = (unsigned int)v219 + 1LL;
                if ( v101 > HIDWORD(v219) )
                {
                  sub_22134E0(&v218, v220, v101, 8);
                  v99 = (unsigned int)v219;
                }
                v50 = (unsigned __int64)v218;
                *((_QWORD *)v218 + v99) = v100;
                LODWORD(v219) = v219 + 1;
                goto LABEL_37;
              }
              v106 = *(_DWORD *)&v217[16];
LABEL_104:
              sub_F63B80((__int64)v217, v106, *(unsigned int *)&v217[16], v58, v52, v53);
              sub_F5C450((__int64 *)v217, v207.m128i_i64, &v209);
              v66 = v207.m128i_i64[0];
              v52 = *(_QWORD *)v217;
              v65 = *(unsigned int *)&v217[16];
              v98 = *(_DWORD *)&v217[8] + 1;
              v43 = v209.m128i_i64[0];
              goto LABEL_92;
            }
          }
          else
          {
            v209.m128i_i64[0] = 0;
          }
          v106 = 2 * *(_DWORD *)&v217[16];
          goto LABEL_104;
        }
        v55 = v207.m128i_i64[0];
        v51 = (__int64)v218 + 8 * (unsigned int)v219;
        v50 = (unsigned int)v219 + 1LL;
        if ( v50 > HIDWORD(v219) )
        {
          sub_22134E0(&v218, v220, v50, 8);
          v50 = (unsigned int)v219;
          v51 = (__int64)v218 + 8 * (unsigned int)v219;
        }
        *(_QWORD *)v51 = v55;
        v56 = (unsigned int)(v219 + 1);
        LODWORD(v219) = v56;
        if ( (unsigned int)v56 > 8 )
        {
          v88 = (__int64 *)v218;
          v89 = (__int64 *)((char *)v218 + 8 * v56);
          while ( 1 )
          {
            v94 = *(unsigned int *)&v217[16];
            if ( !*(_DWORD *)&v217[16] )
              break;
            v51 = *v88;
            v90 = *(_QWORD *)v217;
            v91 = (*(_DWORD *)&v217[16] - 1) & (((unsigned int)*v88 >> 9) ^ ((unsigned int)*v88 >> 4));
            v92 = (__int64 *)(*(_QWORD *)v217 + 8LL * v91);
            v93 = *v92;
            if ( *v88 != *v92 )
            {
              v102 = 1;
              v103 = nullptr;
              if ( v93 != -4096 )
              {
                while ( 1 )
                {
                  if ( v93 == -8192 && !v103 )
                    v103 = v92;
                  v91 = (*(_DWORD *)&v217[16] - 1) & (v102 + v91);
                  v204 = v102 + 1;
                  v92 = (__int64 *)(*(_QWORD *)v217 + 8LL * v91);
                  v93 = *v92;
                  if ( v51 == *v92 )
                    goto LABEL_77;
                  if ( v93 == -4096 )
                  {
                    if ( v103 )
                      v92 = v103;
                    break;
                  }
                  v102 = v204;
                }
              }
              v52 = (unsigned int)(3 * *(_DWORD *)&v217[16]);
              v209.m128i_i64[0] = (__int64)v92;
              v50 = (unsigned int)(*(_DWORD *)&v217[8] + 1);
              v53 = (unsigned int)(4 * v50);
              if ( (unsigned int)v53 < (unsigned int)v52 )
              {
                v52 = (unsigned int)(*(_DWORD *)&v217[16] - *(_DWORD *)&v217[12] - v50);
                v53 = *(_DWORD *)&v217[16] >> 3;
                if ( (unsigned int)v52 <= (unsigned int)v53 )
                {
                  v95 = *(_DWORD *)&v217[16];
LABEL_81:
                  sub_F63B80((__int64)v217, v95, v50, v51, v52, v53);
                  sub_F5C450((__int64 *)v217, v88, &v209);
                  v51 = *v88;
                  v90 = *(_QWORD *)v217;
                  v94 = *(unsigned int *)&v217[16];
                  v92 = (__int64 *)v209.m128i_i64[0];
                  LODWORD(v50) = *(_DWORD *)&v217[8] + 1;
                }
                v84 = *v92 == -4096;
                *(_DWORD *)&v217[8] = v50;
                if ( !v84 )
                  --*(_DWORD *)&v217[12];
                *v92 = v51;
                goto LABEL_77;
              }
LABEL_80:
              v95 = 2 * *(_DWORD *)&v217[16];
              goto LABEL_81;
            }
LABEL_77:
            sub_F60500((__m128 *)&v209, v92, (_QWORD *)(v90 + 8 * v94), (__int64)v217, 1);
            if ( v89 == ++v88 )
              goto LABEL_37;
          }
          v209.m128i_i64[0] = 0;
          goto LABEL_80;
        }
LABEL_37:
        v54 = (char *)v207.m128i_i64[0];
        v206 = (_QWORD *)v207.m128i_i64[0];
      }
      v41 = (__int64)v199;
      v76 = sub_F58020((__int64)v199, (__int64 *)v217);
      if ( v218 != v220 )
        free(v218);
      v69 = a1 + 160;
      v43 = 8LL * *(unsigned int *)&v217[16];
      operator delete();
      if ( v76 )
        goto LABEL_46;
      sub_F59E60(a1 + 160, v41 | 7);
LABEL_54:
      if ( v197 == ++v186 )
        goto LABEL_55;
    }
    v83 = v81;
LABEL_110:
    v107 = (__int64 *)v196;
    sub_F55C20((__int64)v196, v83, v207.m128i_i64[0], v81, v46, v47);
    v43 = (__int64)v217;
    sub_F55820(v107, (__int64 *)v217, &v209);
    v45 = v209.m128i_i64[0];
    v82 = *(_DWORD *)(a1 + 720) + 1;
    goto LABEL_71;
  }
LABEL_55:
  if ( src != p_src + 2 )
    free(src);
  if ( ptr != p_ptr + 2 )
    free(ptr);
}

