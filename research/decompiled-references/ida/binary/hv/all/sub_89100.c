__int64 __fastcall sub_89100(__int64 a1)
{
  int v1; // r11d
  int v3; // eax
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // r12d
  __int64 v14; // rdx
  int v15; // eax
  char v16; // bl
  char v17; // bp
  char *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  char *v21; // rdi
  size_t v22; // rsi
  size_t v23; // rbx
  size_t v24; // rdx
  size_t v25; // rax
  char *v26; // rcx
  __int64 v27; // rdx
  __m128i si128; // xmm0
  bool v29; // zf
  const void *v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rdx
  char v33; // dl
  __int64 *v34; // rsi
  int v35; // r12d
  __int64 v36; // rax
  __int64 v37; // rdx
  _DWORD *v38; // rbp
  unsigned __int64 v39; // r12
  __int64 i; // rax
  __int64 j; // rax
  __int64 v42; // rsi
  __int64 k; // rax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // edx
  int v47; // esi
  int v48; // edx
  int v49; // ecx
  __int64 v50; // rbx
  unsigned __int64 v51; // rax
  char v52; // dl
  __int64 *v53; // r13
  __int64 v54; // r8
  char *v55; // rbx
  char *v56; // rdi
  size_t v57; // r14
  size_t v58; // rdx
  __int64 v59; // rdx
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // r14
  __int64 *v63; // rsi
  char v64; // bp
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 *v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 *v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 *v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 *v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 *v79; // rsi
  __int64 v80; // rax
  char v81; // bp
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  __int64 v84; // r14
  char v85; // dl
  __int64 *v86; // rcx
  __int64 v87; // rax
  char *v88; // r14
  size_t v89; // rdi
  char *v90; // r8
  size_t v91; // rbp
  const void *v92; // rsi
  __int64 v93; // rbp
  __int64 *v94; // rax
  __int64 *v95; // rax
  __int64 v96; // rbx
  __int64 *v97; // rcx
  char *v98; // r8
  char *v99; // rbx
  size_t v100; // rdi
  size_t v101; // r13
  const void *v102; // rsi
  __int64 v103; // r13
  __int64 *v104; // rax
  __int64 *v105; // rsi
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rbx
  char v109; // al
  __int64 *v110; // r13
  char *v111; // rcx
  char *v112; // rbx
  size_t v113; // rdi
  size_t v114; // r12
  const void *v115; // rsi
  __int64 v116; // r12
  __int64 *v117; // rax
  __int64 v118; // r12
  unsigned __int64 v119; // rax
  char v120; // dl
  __int64 *v121; // r13
  size_t v122; // r14
  char *v123; // r12
  size_t v124; // rdi
  size_t v125; // rbx
  const void *v126; // rsi
  __int64 v127; // rbx
  __int64 *v128; // rax
  __int64 *v129; // rax
  __int64 *v130; // rax
  __int64 v131; // r12
  unsigned __int64 v132; // rax
  char v133; // dl
  __int64 *v134; // r13
  size_t v135; // r14
  char *v136; // r12
  size_t v137; // rdi
  size_t v138; // rbx
  const void *v139; // rsi
  __int64 v140; // rbx
  __int64 *v141; // rax
  __int64 *v142; // rax
  __int64 v143; // r12
  __int64 *v144; // r13
  size_t v145; // r14
  char *v146; // r12
  size_t v147; // rdi
  size_t v148; // rbx
  const void *v149; // rsi
  __int64 v150; // rbx
  __int64 *v151; // rax
  const char *v152; // rax
  __int64 *v153; // rax
  __int64 v154; // r12
  __int64 *v155; // r13
  size_t v156; // r14
  char *v157; // r12
  size_t v158; // rdi
  size_t v159; // rbx
  const void *v160; // rsi
  __int64 v161; // rbx
  __int64 *v162; // rax
  unsigned int v163; // eax
  __int64 *v164; // r12
  unsigned __int64 v165; // r13
  size_t v166; // rdi
  size_t v167; // rbx
  const void *v168; // rsi
  __int64 v169; // rbx
  __int64 *v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rdx
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rdx
  __int64 *v176; // rax
  __int64 *v177; // rcx
  size_t v178; // r14
  size_t v179; // rdi
  size_t v180; // rbp
  __int64 v181; // rbp
  __int64 *v182; // rax
  __m128i v183; // xmm0
  __int64 *v184; // rax
  __int64 *v185; // rax
  size_t v186; // [rsp+8h] [rbp-C0h]
  __int64 *v187; // [rsp+8h] [rbp-C0h]
  char *v188; // [rsp+8h] [rbp-C0h]
  __int64 *v189; // [rsp+8h] [rbp-C0h]
  char *v190; // [rsp+8h] [rbp-C0h]
  char *v191; // [rsp+8h] [rbp-C0h]
  char *v192; // [rsp+8h] [rbp-C0h]
  char *v193; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v194; // [rsp+10h] [rbp-B8h]
  char *v195; // [rsp+10h] [rbp-B8h]
  char *v196; // [rsp+10h] [rbp-B8h]
  __int64 *v197; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v198; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v199; // [rsp+20h] [rbp-A8h]
  int v200; // [rsp+28h] [rbp-A0h]
  char v201; // [rsp+2Fh] [rbp-99h]
  int v202; // [rsp+38h] [rbp-90h] BYREF
  int v203; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v204; // [rsp+40h] [rbp-88h] BYREF
  __m128i v205; // [rsp+48h] [rbp-80h]
  _DWORD src[2]; // [rsp+7Ch] [rbp-4Ch] BYREF
  char v207; // [rsp+85h] [rbp-43h]
  unsigned __int64 v208; // [rsp+88h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 816);
  v208 = __readfsqword(0x28u);
  if ( v1 )
  {
    v152 = "encoder/decoder transition";
LABEL_208:
    *(_QWORD *)(a1 + 64) = v152;
    return 4294949586LL;
  }
  switch ( *(_DWORD *)(a1 + 496) )
  {
    case 0:
      if ( (unsigned int)sub_84D80(a1, 1) )
        return 12;
      *(_DWORD *)(a1 + 496) = 1;
LABEL_24:
      v18 = *(char **)a1;
      if ( !*(_QWORD *)a1 )
        return 4294949593LL;
      if ( *(_QWORD *)(a1 + 648) )
      {
LABEL_40:
        v21 = *(char **)(a1 + 632);
        if ( v21 )
        {
          v30 = *(const void **)(a1 + 648);
LABEL_42:
          memcpy(v21, v30, *(_QWORD *)(a1 + 656));
          v19 = *(_QWORD *)(a1 + 656);
          v20 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 648) = 0;
          v18 = *(char **)a1;
          v21 = *(char **)(a1 + 632);
          *(_QWORD *)(a1 + 640) = v19;
          goto LABEL_30;
        }
        v20 = *(_QWORD *)(a1 + 80);
      }
      else
      {
        v19 = *(_QWORD *)(a1 + 640);
        v20 = *(_QWORD *)(a1 + 80);
        if ( !v19 && (*(_QWORD *)(a1 + 8) >= v20 || (*(_BYTE *)(a1 + 152) & 0x10) != 0) )
          goto LABEL_35;
        v21 = *(char **)(a1 + 632);
        if ( v21 )
          goto LABEL_30;
      }
      v61 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), v20, 1);
      v21 = (char *)v61;
      if ( !v61 )
      {
        *(_QWORD *)(a1 + 632) = 0;
        *(_QWORD *)(a1 + 64) = "out of memory";
        return 12;
      }
      v30 = *(const void **)(a1 + 648);
      *(_QWORD *)(a1 + 632) = v61;
      if ( v30 )
        goto LABEL_42;
      v20 = *(_QWORD *)(a1 + 80);
      v19 = *(_QWORD *)(a1 + 640);
      v18 = *(char **)a1;
LABEL_30:
      v22 = v20 - v19;
      v23 = *(_QWORD *)(a1 + 8);
      if ( v22 <= v23 )
        v23 = v22;
      memcpy(&v21[v19], v18, v23);
      v24 = *(_QWORD *)(a1 + 8);
      v25 = v23 + *(_QWORD *)(a1 + 640);
      *(_QWORD *)(a1 + 640) = v25;
      if ( v23 < v24 )
      {
        v26 = *(char **)a1;
        *(_QWORD *)(a1 + 656) = v24 - v23;
        *(_QWORD *)(a1 + 648) = &v26[v23];
LABEL_34:
        v27 = *(_QWORD *)(a1 + 632);
        *(_QWORD *)(a1 + 8) = v25;
        *(_QWORD *)(a1 + 640) = 0;
        *(_QWORD *)a1 = v27;
LABEL_35:
        sub_83780(a1 + 456);
        si128 = _mm_load_si128((const __m128i *)&xmmword_130530);
        *(_QWORD *)(a1 + 528) = 0;
        *(_DWORD *)(a1 + 496) = 2;
        *(__m128i *)(a1 + 512) = si128;
        return 4294949589LL;
      }
      if ( v25 >= *(_QWORD *)(a1 + 80) || (*(_BYTE *)(a1 + 152) & 0x10) != 0 )
        goto LABEL_34;
      return 4294949593LL;
    case 1:
      goto LABEL_24;
    case 2:
      if ( !*(_QWORD *)(a1 + 72) )
        goto LABEL_6;
      v3 = *(_DWORD *)(a1 + 552);
      v4 = *(_QWORD *)(a1 + 8);
      if ( v3 )
      {
        if ( (unsigned int)(v3 - 1) > 1 )
          goto LABEL_6;
        if ( !v4 )
          goto LABEL_8;
      }
      else
      {
        if ( !v4 )
        {
          *(_DWORD *)(a1 + 552) = 3;
          *(_QWORD *)(a1 + 608) = 0;
          goto LABEL_8;
        }
        sub_80070(a1, *(_QWORD *)(a1 + 560));
        *(_DWORD *)(a1 + 552) = 2;
      }
      result = sub_88C00((__m128i *)a1);
      if ( (_DWORD)result )
        return result;
      *(_QWORD *)(a1 + 512) += *(_QWORD *)(a1 + 608);
LABEL_6:
      if ( *(_QWORD *)(a1 + 8) )
      {
        result = (*(__int64 (__fastcall **)(__int64))(a1 + 264))(a1);
        if ( (_DWORD)result )
          return result;
      }
LABEL_8:
      *(_DWORD *)(a1 + 496) = 3;
LABEL_9:
      if ( (unsigned int)sub_87B10((__m128i *)a1, 1) )
        return 12;
      v6 = *(_QWORD *)(a1 + 8);
      v7 = *(_QWORD *)(a1 + 528);
      if ( v7 < v6 )
      {
        LOBYTE(v204) = 1;
        v205 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(v6 - v7));
        if ( (unsigned int)sub_873A0(a1, (__m128i *)&v204) )
          return 12;
      }
      v8 = *(_QWORD *)(a1 + 784);
      if ( v8 )
      {
        if ( (unsigned int)sub_86D40(a1, v8, *(_BYTE *)(v8 + 2)) )
          return 12;
        v9 = *(__m128i **)(a1 + 784);
        if ( v9->m128i_i8[0] != 1 )
        {
          v10 = *(_QWORD **)(a1 + 776);
          *(_QWORD *)(a1 + 776) = v9 + 2;
          *v10 = v9 + 2;
          v9[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 768), (__m128i)(unsigned __int64)v10);
        }
        *(_QWORD *)(a1 + 784) = 0;
      }
      *(_DWORD *)(a1 + 496) = 4;
LABEL_17:
      v11 = *(_QWORD *)(a1 + 72);
      v12 = *(_QWORD *)(a1 + 1352);
      v13 = *(_DWORD *)(a1 + 152);
      v14 = *(_QWORD *)(a1 + 48);
      if ( v11 && *(_QWORD *)(v11 + 56) )
      {
        if ( v14 )
        {
          LOWORD(v15) = *(_DWORD *)(a1 + 152);
          v16 = 1;
          if ( !v12 )
          {
            v201 = 0;
            v17 = 1;
            goto LABEL_55;
          }
          goto LABEL_50;
        }
        v16 = 1;
      }
      else
      {
        if ( v14 )
        {
          LOWORD(v15) = *(_DWORD *)(a1 + 152);
          v16 = 0;
          if ( !v12 )
          {
            v201 = 0;
            v17 = 0;
LABEL_55:
            v34 = *(__int64 **)(a1 + 712);
            v35 = v13 & 0x8400;
            if ( v35 )
              v17 |= 4u;
            v200 = v35;
            v36 = v34[1];
            if ( v36 == v34[2] )
            {
              v130 = sub_84CB0(a1, (__int64)v34);
              v34 = v130;
              if ( !v130 )
                return 12;
              *(_QWORD *)(a1 + 712) = v130;
              v36 = v130[1];
            }
            v37 = *v34;
            v34[1] = v36 + 1;
            *(_BYTE *)(v37 + v36) = v17;
            if ( v16 )
            {
              v118 = 10;
              v38 = src;
              v119 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 56LL);
              do
              {
                --v118;
                v120 = v119 | 0x80;
                v119 >>= 7;
                *((_BYTE *)src + v118) = v120;
              }
              while ( v119 );
              v121 = *(__int64 **)(a1 + 712);
              v207 &= ~0x80u;
              v122 = 10 - v118;
              v123 = (char *)src + v118;
              v124 = v121[1];
              do
              {
                v127 = v121[2];
                if ( v127 == v124 )
                {
                  v128 = sub_84CB0(a1, (__int64)v121);
                  v121 = v128;
                  if ( !v128 )
                    return 12;
                  *(_QWORD *)(a1 + 712) = v128;
                  v127 = v128[2];
                  v124 = v128[1];
                }
                v125 = v127 - v124;
                v126 = v123;
                if ( v125 > v122 )
                  v125 = v122;
                v123 += v125;
                memcpy((void *)(*v121 + v124), v126, v125);
                v124 = v125 + v121[1];
                v121[1] = v124;
                v122 -= v125;
              }
              while ( v122 );
              v131 = 10;
              v132 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 64LL);
              do
              {
                --v131;
                v133 = v132 | 0x80;
                v132 >>= 7;
                *((_BYTE *)src + v131) = v133;
              }
              while ( v132 );
              v134 = *(__int64 **)(a1 + 712);
              v207 &= ~0x80u;
              v135 = 10 - v131;
              v136 = (char *)src + v131;
              v137 = v134[1];
              do
              {
                v140 = v134[2];
                if ( v140 == v137 )
                {
                  v141 = sub_84CB0(a1, (__int64)v134);
                  v134 = v141;
                  if ( !v141 )
                    return 12;
                  *(_QWORD *)(a1 + 712) = v141;
                  v140 = v141[2];
                  v137 = v141[1];
                }
                v138 = v140 - v137;
                v139 = v136;
                if ( v138 > v135 )
                  v138 = v135;
                v136 += v138;
                memcpy((void *)(*v134 + v137), v139, v138);
                v137 = v138 + v134[1];
                v134[1] = v137;
                v135 -= v138;
              }
              while ( v135 );
            }
            else
            {
              v38 = src;
            }
            v39 = 0;
            v194 = *(_QWORD *)(a1 + 8);
            for ( i = *(_QWORD *)(a1 + 688); i; i = *(_QWORD *)(i + 24) )
              v39 += *(_QWORD *)(i + 8);
            v198 = 0;
            for ( j = *(_QWORD *)(a1 + 696); j; v198 += v42 )
            {
              v42 = *(_QWORD *)(j + 8);
              j = *(_QWORD *)(j + 24);
            }
            v199 = 0;
            for ( k = *(_QWORD *)(a1 + 704); k; v199 += v44 )
            {
              v44 = *(_QWORD *)(k + 8);
              k = *(_QWORD *)(k + 24);
            }
            v45 = 2;
            if ( v194 > 0x7F )
            {
              v45 = 3;
              if ( v194 > 0x3FFF )
              {
                v45 = 4;
                if ( v194 > 0x1FFFFF )
                {
                  v45 = 5;
                  if ( v194 > 0xFFFFFFF )
                  {
                    v45 = 6;
                    if ( v194 >> 35 )
                    {
                      v45 = 7;
                      if ( v194 >> 42 )
                      {
                        v45 = 8;
                        if ( v194 >> 49 )
                        {
                          v45 = 9;
                          if ( HIBYTE(v194) )
                            v45 = (v194 >> 63) + 10;
                        }
                      }
                    }
                  }
                }
              }
            }
            v46 = 1;
            if ( v39 > 0x7F )
            {
              v46 = 2;
              if ( v39 > 0x3FFF )
              {
                v46 = 3;
                if ( v39 > 0x1FFFFF )
                {
                  v46 = 4;
                  if ( v39 > 0xFFFFFFF )
                  {
                    v46 = 5;
                    if ( v39 >> 35 )
                    {
                      v46 = 6;
                      if ( v39 >> 42 )
                      {
                        v46 = 7;
                        if ( v39 >> 49 )
                        {
                          v46 = 8;
                          if ( HIBYTE(v39) )
                            v46 = (v39 >> 63) + 9;
                        }
                      }
                    }
                  }
                }
              }
            }
            v47 = 1;
            if ( v198 > 0x7F )
            {
              v47 = 2;
              if ( v198 > 0x3FFF )
              {
                v47 = 3;
                if ( v198 > 0x1FFFFF )
                {
                  v47 = 4;
                  if ( v198 > 0xFFFFFFF )
                  {
                    v47 = 5;
                    if ( v198 >> 35 )
                    {
                      v47 = 6;
                      if ( v198 >> 42 )
                      {
                        v47 = 7;
                        if ( v198 >> 49 )
                        {
                          v47 = 8;
                          if ( HIBYTE(v198) )
                            v47 = (v198 >> 63) + 9;
                        }
                      }
                    }
                  }
                }
              }
            }
            v48 = v45 + v46;
            v49 = 1;
            if ( v199 > 0x7F )
            {
              v49 = 2;
              if ( v199 > 0x3FFF )
              {
                v49 = 3;
                if ( v199 > 0x1FFFFF )
                {
                  v49 = 4;
                  if ( v199 > 0xFFFFFFF )
                  {
                    v49 = 5;
                    if ( v199 >> 35 )
                    {
                      v49 = 6;
                      if ( v199 >> 42 )
                      {
                        v49 = 7;
                        if ( v199 >> 49 )
                        {
                          v49 = 8;
                          if ( HIBYTE(v199) )
                            v49 = (v199 >> 63) + 9;
                        }
                      }
                    }
                  }
                }
              }
            }
            v50 = 10;
            v51 = (unsigned int)(v49 + v47 + v48) + v199 + v198 + v39 + 4LL * (v200 != 0);
            do
            {
              --v50;
              v52 = v51 | 0x80;
              v51 >>= 7;
              *((_BYTE *)src + v50) = v52;
            }
            while ( v51 );
            v53 = *(__int64 **)(a1 + 712);
            v207 &= ~0x80u;
            v54 = 10 - v50;
            v55 = (char *)src + v50;
            v56 = (char *)v53[1];
            v57 = v54;
            do
            {
              v59 = v53[2];
              if ( (char *)v59 == v56 )
              {
                v60 = sub_84CB0(a1, (__int64)v53);
                v53 = v60;
                if ( !v60 )
                  return 12;
                *(_QWORD *)(a1 + 712) = v60;
                v59 = v60[2];
                v56 = (char *)v60[1];
              }
              v58 = v59 - (_QWORD)v56;
              if ( v58 > v57 )
                v58 = v57;
              v186 = v58;
              memcpy(&v56[*v53], v55, v58);
              v56 = (char *)(v186 + v53[1]);
              v55 += v186;
              v53[1] = (__int64)v56;
              v57 -= v186;
            }
            while ( v57 );
            v96 = 10;
            do
            {
              --v96;
              v29 = v194 >> 7 == 0;
              *((_BYTE *)src + v96) = v194 | 0x80;
              v194 >>= 7;
            }
            while ( !v29 );
            v97 = *(__int64 **)(a1 + 712);
            v207 &= ~0x80u;
            v98 = (char *)(10 - v96);
            v99 = (char *)src + v96;
            v100 = v97[1];
            do
            {
              v103 = v97[2];
              if ( v103 == v100 )
              {
                v190 = v98;
                v104 = sub_84CB0(a1, (__int64)v97);
                v97 = v104;
                if ( !v104 )
                  return 12;
                *(_QWORD *)(a1 + 712) = v104;
                v98 = v190;
                v103 = v104[2];
                v100 = v104[1];
              }
              v101 = v103 - v100;
              v102 = v99;
              v196 = v98;
              v189 = v97;
              if ( v101 > (unsigned __int64)v98 )
                v101 = (size_t)v98;
              v99 += v101;
              memcpy((void *)(*v97 + v100), v102, v101);
              v97 = v189;
              v100 = v189[1] + v101;
              v189[1] = v100;
              v98 = &v196[-v101];
            }
            while ( v196 != (char *)v101 );
            v105 = *(__int64 **)(a1 + 712);
            v106 = v105[1];
            if ( v106 == v105[2] )
            {
              v176 = sub_84CB0(a1, (__int64)v105);
              v105 = v176;
              if ( !v176 )
                return 12;
              *(_QWORD *)(a1 + 712) = v176;
              v106 = v176[1];
            }
            v107 = *v105;
            v108 = 10;
            v105[1] = v106 + 1;
            *(_BYTE *)(v107 + v106) = v201;
            do
            {
              --v108;
              v109 = v39 | 0x80;
              v39 >>= 7;
              *((_BYTE *)src + v108) = v109;
            }
            while ( v39 );
            v110 = *(__int64 **)(a1 + 712);
            v207 &= ~0x80u;
            v111 = (char *)(10 - v108);
            v112 = (char *)src + v108;
            v113 = v110[1];
            do
            {
              v116 = v110[2];
              if ( v116 == v113 )
              {
                v192 = v111;
                v117 = sub_84CB0(a1, (__int64)v110);
                v110 = v117;
                if ( !v117 )
                  return 12;
                *(_QWORD *)(a1 + 712) = v117;
                v111 = v192;
                v116 = v117[2];
                v113 = v117[1];
              }
              v114 = v116 - v113;
              v115 = v112;
              v191 = v111;
              if ( v114 > (unsigned __int64)v111 )
                v114 = (size_t)v111;
              v112 += v114;
              memcpy((void *)(*v110 + v113), v115, v114);
              v113 = v114 + v110[1];
              v110[1] = v113;
              v111 = &v191[-v114];
            }
            while ( v191 != (char *)v114 );
            v143 = 10;
            do
            {
              --v143;
              v29 = v198 >> 7 == 0;
              *((_BYTE *)src + v143) = v198 | 0x80;
              v198 >>= 7;
            }
            while ( !v29 );
            v144 = *(__int64 **)(a1 + 712);
            v207 &= ~0x80u;
            v145 = 10 - v143;
            v146 = (char *)src + v143;
            v147 = v144[1];
            do
            {
              v150 = v144[2];
              if ( v150 == v147 )
              {
                v151 = sub_84CB0(a1, (__int64)v144);
                v144 = v151;
                if ( !v151 )
                  return 12;
                *(_QWORD *)(a1 + 712) = v151;
                v150 = v151[2];
                v147 = v151[1];
              }
              v148 = v150 - v147;
              v149 = v146;
              if ( v148 > v145 )
                v148 = v145;
              v146 += v148;
              memcpy((void *)(*v144 + v147), v149, v148);
              v147 = v148 + v144[1];
              v144[1] = v147;
              v145 -= v148;
            }
            while ( v145 );
            v154 = 10;
            do
            {
              --v154;
              v29 = v199 >> 7 == 0;
              *((_BYTE *)src + v154) = v199 | 0x80;
              v199 >>= 7;
            }
            while ( !v29 );
            v155 = *(__int64 **)(a1 + 712);
            v207 &= ~0x80u;
            v156 = 10 - v154;
            v157 = (char *)src + v154;
            v158 = v155[1];
            do
            {
              v161 = v155[2];
              if ( v161 == v158 )
              {
                v162 = sub_84CB0(a1, (__int64)v155);
                v155 = v162;
                if ( !v162 )
                  return 12;
                *(_QWORD *)(a1 + 712) = v162;
                v161 = v162[2];
                v158 = v162[1];
              }
              v159 = v161 - v158;
              v160 = v157;
              if ( v159 > v156 )
                v159 = v156;
              v157 += v159;
              memcpy((void *)(*v155 + v158), v160, v159);
              v158 = v159 + v155[1];
              v155[1] = v158;
              v156 -= v159;
            }
            while ( v156 );
            if ( v200 )
            {
              if ( (*(_BYTE *)(a1 + 153) & 4) != 0 )
                v163 = sub_80BC0(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
              else
                v163 = *(_DWORD *)(a1 + 744);
              v164 = *(__int64 **)(a1 + 712);
              v165 = 4;
              src[0] = _byteswap_ulong(v163);
              v166 = v164[1];
              do
              {
                v169 = v164[2];
                if ( v169 == v166 )
                {
                  v170 = sub_84CB0(a1, (__int64)v164);
                  v164 = v170;
                  if ( !v170 )
                    return 12;
                  *(_QWORD *)(a1 + 712) = v170;
                  v169 = v170[2];
                  v166 = v170[1];
                }
                v167 = v169 - v166;
                v168 = v38;
                if ( v167 > v165 )
                  v167 = v165;
                v38 = (_DWORD *)((char *)v38 + v167);
                memcpy((void *)(*v164 + v166), v168, v167);
                v166 = v167 + v164[1];
                v164[1] = v166;
                v165 -= v167;
              }
              while ( v165 );
            }
            v171 = *(_QWORD *)(a1 + 688);
            *(_QWORD *)(a1 + 664) = *(_QWORD *)(a1 + 680);
            *(_QWORD *)(*(_QWORD *)(a1 + 712) + 24LL) = v171;
            v172 = *(_QWORD *)(a1 + 696);
            v173 = *(_QWORD *)(a1 + 720);
            *(_QWORD *)(a1 + 688) = 0;
            *(_QWORD *)(v173 + 24) = v172;
            v174 = *(_QWORD *)(a1 + 728);
            v175 = *(_QWORD *)(a1 + 704);
            *(_QWORD *)(a1 + 696) = 0;
            *(_QWORD *)(v174 + 24) = v175;
            v31 = *(_QWORD **)(a1 + 664);
            *(_QWORD *)(a1 + 704) = 0;
            do
            {
              *(_DWORD *)(a1 + 496) = 5;
              *(_QWORD *)(a1 + 24) = *v31;
              v32 = v31[1];
              *(_QWORD *)(a1 + 56) += v32;
              *(_QWORD *)(a1 + 32) = v32;
              if ( v32 )
                return 4294949592LL;
LABEL_45:
              v31 = (_QWORD *)v31[3];
              *(_QWORD *)(a1 + 664) = v31;
            }
            while ( v31 );
            v183 = _mm_loadu_si128((const __m128i *)(a1 + 8));
            *(_DWORD *)(a1 + 496) = 6;
            *(_QWORD *)(a1 + 16) = _mm_add_epi64(v183, _mm_srli_si128(v183, 8)).m128i_u64[0];
            return 4294949588LL;
          }
          goto LABEL_50;
        }
        v16 = 0;
      }
      v62 = *(_QWORD *)(a1 + 800);
      v63 = *(__int64 **)(a1 + 712);
      v64 = v12 != 0;
      if ( v62 )
        v64 = (v12 != 0) | 4;
      v65 = v63[1];
      if ( v65 == v63[2] )
      {
        v129 = sub_84CB0(a1, (__int64)v63);
        v63 = v129;
        if ( !v129 )
          return 12;
        *(_QWORD *)(a1 + 712) = v129;
        v65 = v129[1];
      }
      v66 = *v63;
      v63[1] = v65 + 1;
      *(_BYTE *)(v66 + v65) = -42;
      v67 = *(__int64 **)(a1 + 712);
      v68 = v67[1];
      if ( v68 == v67[2] )
      {
        v142 = sub_84CB0(a1, (__int64)v67);
        v67 = v142;
        if ( !v142 )
          return 12;
        *(_QWORD *)(a1 + 712) = v142;
        v68 = v142[1];
      }
      v69 = *v67;
      v67[1] = v68 + 1;
      *(_BYTE *)(v69 + v68) = -61;
      v70 = *(__int64 **)(a1 + 712);
      v71 = v70[1];
      if ( v71 == v70[2] )
      {
        v153 = sub_84CB0(a1, (__int64)v70);
        v70 = v153;
        if ( !v153 )
          return 12;
        *(_QWORD *)(a1 + 712) = v153;
        v71 = v153[1];
      }
      v72 = *v70;
      v70[1] = v71 + 1;
      *(_BYTE *)(v72 + v71) = -60;
      v73 = *(__int64 **)(a1 + 712);
      v74 = v73[1];
      if ( v74 == v73[2] )
      {
        v95 = sub_84CB0(a1, (__int64)v73);
        v73 = v95;
        if ( !v95 )
          return 12;
        *(_QWORD *)(a1 + 712) = v95;
        v74 = v95[1];
      }
      v75 = *v73;
      v73[1] = v74 + 1;
      *(_BYTE *)(v75 + v74) = 0;
      v76 = *(__int64 **)(a1 + 712);
      v77 = v76[1];
      if ( v77 == v76[2] )
      {
        v184 = sub_84CB0(a1, (__int64)v76);
        v76 = v184;
        if ( !v184 )
          return 12;
        *(_QWORD *)(a1 + 712) = v184;
        v77 = v184[1];
      }
      v78 = *v76;
      v76[1] = v77 + 1;
      *(_BYTE *)(v78 + v77) = v64;
      if ( v12 )
      {
        v79 = *(__int64 **)(a1 + 712);
        v80 = v79[1];
        v81 = **(_BYTE **)(a1 + 1352);
        if ( v80 == v79[2] )
        {
          v185 = sub_84CB0(a1, (__int64)v79);
          v79 = v185;
          if ( !v185 )
            return 12;
          *(_QWORD *)(a1 + 712) = v185;
          v80 = v185[1];
        }
        v82 = *v79;
        v79[1] = v80 + 1;
        *(_BYTE *)(v82 + v80) = v81;
        if ( !v62 )
          goto LABEL_224;
      }
      else if ( !v62 )
      {
        goto LABEL_213;
      }
      v83 = *(_QWORD *)(a1 + 808);
      v84 = 10;
      do
      {
        --v84;
        v85 = v83 | 0x80;
        v83 >>= 7;
        *((_BYTE *)src + v84) = v85;
      }
      while ( v83 );
      v86 = *(__int64 **)(a1 + 712);
      v207 &= ~0x80u;
      v87 = 10 - v84;
      v88 = (char *)src + v84;
      v89 = v86[1];
      v90 = (char *)v87;
      do
      {
        v93 = v86[2];
        if ( v93 == v89 )
        {
          v188 = v90;
          v94 = sub_84CB0(a1, (__int64)v86);
          v86 = v94;
          if ( !v94 )
            return 12;
          *(_QWORD *)(a1 + 712) = v94;
          v90 = v188;
          v93 = v94[2];
          v89 = v94[1];
        }
        v91 = v93 - v89;
        v92 = v88;
        v195 = v90;
        v187 = v86;
        if ( v91 > (unsigned __int64)v90 )
          v91 = (size_t)v90;
        v88 += v91;
        memcpy((void *)(*v86 + v89), v92, v91);
        v86 = v187;
        v89 = v187[1] + v91;
        v187[1] = v89;
        v90 = &v195[-v91];
      }
      while ( v195 != (char *)v91 );
      v177 = *(__int64 **)(a1 + 712);
      v178 = *(_QWORD *)(a1 + 808);
      v193 = *(char **)(a1 + 800);
      v179 = v177[1];
      do
      {
        v181 = v177[2];
        if ( v181 == v179 )
        {
          v182 = sub_84CB0(a1, (__int64)v177);
          v177 = v182;
          if ( !v182 )
            return 12;
          *(_QWORD *)(a1 + 712) = v182;
          v181 = v182[2];
          v179 = v182[1];
        }
        v180 = v181 - v179;
        v197 = v177;
        if ( v180 > v178 )
          v180 = v178;
        memcpy((void *)(*v177 + v179), v193, v180);
        v177 = v197;
        v193 += v180;
        v179 = v197[1] + v180;
        v197[1] = v179;
        v178 -= v180;
      }
      while ( v178 );
      if ( v12 )
      {
LABEL_224:
        v15 = *(_DWORD *)(a1 + 152);
LABEL_50:
        v202 = 0;
        v203 = 0;
        v204 = 0;
        if ( (v15 & 0x80u) == 0 )
        {
          result = sub_86EC0(
                     a1,
                     (__int64 **)(a1 + 688),
                     (__int64 **)(a1 + 720),
                     (__int64 *)(a1 + 1360),
                     a1 + 160,
                     &v202);
          if ( (_DWORD)result )
            return result;
          v15 = *(_DWORD *)(a1 + 152);
        }
        if ( (v15 & 0x100) == 0 )
        {
          result = sub_86EC0(
                     a1,
                     (__int64 **)(a1 + 696),
                     (__int64 **)(a1 + 728),
                     (__int64 *)(a1 + 1368),
                     a1 + 192,
                     &v203);
          if ( (_DWORD)result )
            return result;
          v15 = *(_DWORD *)(a1 + 152);
        }
        v33 = 0;
        if ( (v15 & 0x200) == 0 )
        {
          result = sub_86EC0(
                     a1,
                     (__int64 **)(a1 + 704),
                     (__int64 **)(a1 + 736),
                     (__int64 *)(a1 + 1376),
                     a1 + 224,
                     &v204);
          if ( (_DWORD)result )
            return result;
          v33 = 4 * (v204 != 0);
        }
        v201 = v33 | (v202 != 0) | (2 * (v203 != 0));
        goto LABEL_54;
      }
LABEL_213:
      v201 = 0;
LABEL_54:
      v17 = v16;
      goto LABEL_55;
    case 3:
      goto LABEL_9;
    case 4:
      goto LABEL_17;
    case 5:
      if ( !*(_QWORD *)(a1 + 32) )
      {
        v31 = *(_QWORD **)(a1 + 664);
        goto LABEL_45;
      }
      v152 = "missed call to consume output";
      goto LABEL_208;
    case 6:
      sub_7FF80(a1);
      ++*(_QWORD *)(a1 + 48);
      v29 = *(_QWORD *)(a1 + 648) == 0;
      *(_DWORD *)(a1 + 496) = 1;
      if ( !v29 )
        goto LABEL_40;
      return 4294949593LL;
    default:
      v152 = "invalid state";
      goto LABEL_208;
  }
}

