__int64 __fastcall sub_D1EDE0(__int64 a1, __m128i *a2, char a3, __int32 a4)
{
  char v4; // r15
  __int32 v5; // r12d
  __int64 *v6; // rbx
  _DWORD *v7; // rcx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 *v11; // r14
  void **v12; // rbp
  __int64 v13; // rsi
  _DWORD *v14; // rdx
  __m128i *v15; // rax
  unsigned int v16; // r9d
  __m128i si128; // xmm1
  __int64 v18; // rsi
  __int64 *v19; // r15
  __int64 *v20; // r14
  __int64 *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // r8
  int v26; // r9d
  __int64 *v27; // rbx
  void **v28; // rcx
  unsigned int v29; // esi
  __int64 v30; // rbp
  __int64 *v31; // rax
  __int64 *v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // r11
  __int64 *v35; // rbp
  int v36; // eax
  _DWORD *v37; // r12
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  _QWORD *v42; // rcx
  bool v43; // zf
  unsigned int *v44; // r12
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  unsigned int **v49; // rcx
  void *v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int64 *v54; // r12
  __int64 *v55; // rax
  _DWORD *v56; // rax
  __int64 v57; // rax
  int v58; // edi
  unsigned int v59; // ecx
  size_t v60; // rsi
  __int64 v61; // rax
  int v62; // ecx
  unsigned int v63; // ecx
  size_t v64; // rsi
  __int64 v65; // rax
  int v66; // ecx
  _DWORD *v67; // rax
  _DWORD *v68; // rsi
  __int64 v69; // rdi
  __int64 *v70; // rbx
  __int64 *v71; // rbp
  __int64 v72; // rsi
  void *v73; // rdi
  __int64 v74; // rbx
  __int64 v75; // rbx
  _QWORD *v76; // rax
  __int64 *v77; // rax
  __int64 v78; // rcx
  _DWORD *v79; // rdi
  unsigned int v80; // ebp
  unsigned int *v81; // rcx
  _DWORD *v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // r8
  void **v85; // r10
  __int64 v86; // r12
  unsigned int *v87; // r14
  __int32 v88; // r9d
  __int64 v89; // rax
  _DWORD *v90; // rdx
  __int32 v91; // r9d
  __int64 v92; // rdi
  unsigned __int64 v93; // rax
  __int64 v94; // r11
  unsigned int *v95; // r8
  _DWORD *v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdx
  void **v99; // rdx
  unsigned int v100; // r10d
  unsigned int v101; // ecx
  unsigned int v102; // edx
  __int64 v103; // rbx
  unsigned int v104; // r15d
  unsigned int *v105; // r12
  unsigned int v106; // ebp
  __int64 v107; // rsi
  unsigned int v108; // edx
  _QWORD *v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned int v112; // edx
  __int64 v113; // rbp
  unsigned int v114; // r11d
  size_t v115; // r14
  __int64 *v116; // r8
  int v117; // ecx
  __int64 v118; // r11
  __int64 v119; // rsi
  __int64 *v120; // rax
  __int64 **v121; // rdi
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rbp
  __int64 *v125; // rax
  __int64 *v126; // rdi
  unsigned __int64 v127; // rax
  __int64 v128; // rcx
  _QWORD *v129; // rdx
  unsigned int v130; // eax
  unsigned int v131; // ebp
  unsigned int v132; // ecx
  unsigned int *v133; // rax
  __int64 v134; // rax
  int v135; // ecx
  __int64 *v136; // rdx
  __int64 *v137; // rax
  __m128i *v138; // rdi
  const __m128i *v139; // r9
  __int64 *m128i_i64; // r10
  __int64 v141; // rdx
  __m128i *v142; // rsi
  __m128i *v143; // rdx
  __int64 *v144; // rax
  unsigned __int64 v145; // rax
  __int64 v146; // rsi
  __int64 v147; // rdi
  _QWORD *v148; // rdx
  __int64 v149; // rax
  unsigned int *v150; // rcx
  _DWORD *v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // rsi
  unsigned int *v154; // rdx
  __int64 v155; // rdx
  unsigned int v156; // esi
  unsigned int v157; // r14d
  unsigned int *v158; // rbp
  __m128i *v159; // rax
  __m128 v160; // xmm2
  __int64 v161; // rsi
  __int32 v162; // r9d
  __m128i v163; // xmm4
  __int64 v164; // rdi
  __int32 v165; // r9d
  __m128i v166; // xmm3
  __int64 v167; // rbp
  __int64 *v168; // rsi
  unsigned int v169; // r8d
  __int64 v170; // rax
  int *v171; // rdi
  __int64 v172; // rbx
  unsigned int v173; // eax
  unsigned int v174; // eax
  _QWORD *v175; // rdx
  __int64 v176; // rsi
  unsigned int *v177; // rdx
  char *v178; // rdi
  unsigned __int64 v179; // rsi
  __int64 v180; // r8
  void *v181; // rdx
  __int64 v182; // rbx
  unsigned int v183; // eax
  __int64 v184; // rbx
  __int64 *v185; // rcx
  __int64 v186; // rdx
  __int64 *v187; // rdi
  __int64 v188; // rsi
  char **v189; // r12
  __int64 v190; // rdx
  char **exception; // rbp
  __int64 v192; // rdx
  char **v193; // r12
  __int64 v194; // rdx
  int v195; // [rsp-8h] [rbp-3D8h]
  __m128i *v196; // [rsp+0h] [rbp-3D0h] BYREF
  __int64 v197; // [rsp+8h] [rbp-3C8h] BYREF
  __int64 *v198; // [rsp+10h] [rbp-3C0h]
  __m128i v199; // [rsp+18h] [rbp-3B8h] BYREF
  unsigned int *v200; // [rsp+28h] [rbp-3A8h]
  void **v201; // [rsp+30h] [rbp-3A0h]
  __int64 *v202; // [rsp+38h] [rbp-398h]
  __int64 v203; // [rsp+40h] [rbp-390h]
  int *v204; // [rsp+48h] [rbp-388h]
  __m128i *v205; // [rsp+50h] [rbp-380h]
  __m128i v206; // [rsp+58h] [rbp-378h] BYREF
  int *v207; // [rsp+68h] [rbp-368h]
  _BYTE *v208; // [rsp+70h] [rbp-360h]
  unsigned int *v209; // [rsp+78h] [rbp-358h]
  __int64 *v210; // [rsp+80h] [rbp-350h]
  void **v211; // [rsp+88h] [rbp-348h]
  int v212; // [rsp+90h] [rbp-340h]
  __int32 v213; // [rsp+94h] [rbp-33Ch]
  int v214; // [rsp+98h] [rbp-338h]
  __int64 v215; // [rsp+A0h] [rbp-330h] BYREF
  __int64 v216; // [rsp+A8h] [rbp-328h] BYREF
  __int64 v217; // [rsp+B0h] [rbp-320h] BYREF
  __m128i v218; // [rsp+B8h] [rbp-318h] BYREF
  __int64 v219; // [rsp+C8h] [rbp-308h] BYREF
  void **v220; // [rsp+D0h] [rbp-300h]
  void *v221; // [rsp+D8h] [rbp-2F8h] BYREF
  __int64 v222; // [rsp+E0h] [rbp-2F0h]
  int v223[16]; // [rsp+E8h] [rbp-2E8h] BYREF
  void *v224[2]; // [rsp+128h] [rbp-2A8h] BYREF
  int v225[6]; // [rsp+138h] [rbp-298h] BYREF
  char v226; // [rsp+150h] [rbp-280h]
  void *v227; // [rsp+178h] [rbp-258h] BYREF
  __int64 v228; // [rsp+180h] [rbp-250h]
  _BYTE v229[64]; // [rsp+188h] [rbp-248h] BYREF
  void *v230; // [rsp+1C8h] [rbp-208h] BYREF
  __int64 v231; // [rsp+1D0h] [rbp-200h]
  _BYTE v232[128]; // [rsp+1D8h] [rbp-1F8h] BYREF
  __m128i *v233; // [rsp+258h] [rbp-178h] BYREF
  __int64 *v234; // [rsp+260h] [rbp-170h] BYREF
  __int64 v235; // [rsp+268h] [rbp-168h]
  char v236; // [rsp+270h] [rbp-160h] BYREF
  void *ptr[2]; // [rsp+2F8h] [rbp-D8h] BYREF
  __int64 v238; // [rsp+308h] [rbp-C8h] BYREF
  _BYTE v239[192]; // [rsp+310h] [rbp-C0h] BYREF

  if ( a2->m128i_i16[2] )
    return 0;
  v4 = a4;
  v5 = a4;
  v6 = (__int64 *)a2;
  v7 = *(_DWORD **)(a2[1].m128i_i64[0] + 24);
  result = 0;
  if ( v7 && !*v7 && v7[1] == 6 )
  {
    if ( !a3 )
      goto LABEL_17;
    v10 = a2[1].m128i_u32[2];
    LOBYTE(v233) = 1;
    if ( !(_DWORD)v10 )
      goto LABEL_17;
    LODWORD(v197) = 1;
    v196 = a2;
    v11 = &a2->m128i_i64[v10];
    v12 = (void **)&v233;
    do
    {
      v13 = v6[4];
      if ( *(_BYTE *)(a1 + 379)
        && !*(_WORD *)(v13 + 4)
        && (v14 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL)) != nullptr
        && !*v14
        && v14[1] == 8
        && *(_DWORD *)(v13 + 24) == 1
        && (v95 = *(unsigned int **)(v13 + 32), !*((_WORD *)v95 + 2))
        && (v96 = *(_DWORD **)(*((_QWORD *)v95 + 2) + 24LL)) != nullptr
        && !*v96
        && v96[1] == 6
        && ((v97 = *(_QWORD *)(a1 + 80), v98 = *v95, ptr[0] = nullptr, !v97)
         || (unsigned int)v98 >= *(_DWORD *)(v97 - 4)
          ? (v99 = ptr)
          : (v99 = (void **)(v97 + 8 * v98)),
            !*v99
         && (v100 = v95[6], v101 = *(_DWORD *)(a1 + 380), v100 < v101)
         && (v102 = v100 * v197, v100 * (unsigned int)v197 < v101)
         && (unsigned int)v197 < v102) )
      {
        v197 = (__int64)v11;
        v198 = v6;
        v103 = 0;
        LOBYTE(v200) = v4;
        v104 = v102;
        v199.m128i_i32[0] = v5;
        v105 = v95;
        v201 = v12;
        v106 = v100;
        while ( (unsigned int)v103 < v106 )
        {
          v107 = *(_QWORD *)&v105[2 * v103++ + 8];
          sub_D18670(a1, v107, &v233, 0);
        }
        v108 = v104;
        v11 = (__int64 *)v197;
        v6 = v198;
        v4 = (char)v200;
        v5 = v199.m128i_i32[0];
        LODWORD(v197) = v108;
        v12 = v201;
      }
      else
      {
        sub_D18670(a1, v13, v12, 0);
      }
      ++v6;
    }
    while ( v11 != v6 );
    v6 = (__int64 *)v196;
    result = 1;
    if ( (_BYTE)v233 )
    {
LABEL_17:
      v15 = *(__m128i **)a1;
      v205 = *(__m128i **)a1;
      if ( (_BYTE)v5 )
      {
        v196 = v15;
        v203 = 0;
        v197 = 0;
        goto LABEL_19;
      }
      v110 = sub_D17130(a1);
      v197 = v110;
      if ( v110 )
        ++*(_DWORD *)(v110 + 8);
      v111 = sub_15E1A70(*(_QWORD *)a1);
      v203 = v111;
      if ( v111 )
        ++*(_DWORD *)(v111 + 8);
      v112 = *(_DWORD *)(a1 + 24);
      if ( 3 * v112 < 4 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 32)) )
      {
        LODWORD(v196) = 2 * v112;
        v115 = 32LL * v112;
        v134 = sub_186B270(v115);
        v135 = (int)v196;
        v113 = v134;
        v136 = (__int64 *)v134;
        v137 = (__int64 *)(v115 + v134);
        if ( (_DWORD)v196 )
        {
          if ( (((_BYTE)v137 - (_BYTE)v113) & 0x10) == 0
            || (v136 = (__int64 *)(v113 + 16), *(_OWORD *)v113 = 0, v137 != (__int64 *)(v113 + 16)) )
          {
            do
            {
              *(_OWORD *)v136 = 0;
              v136 += 4;
              *((_OWORD *)v136 - 1) = 0;
            }
            while ( v137 != v136 );
          }
        }
        v138 = *(__m128i **)(a1 + 16);
        v114 = v135 - 1;
        v116 = v137;
        v139 = v138;
        m128i_i64 = v138[*(unsigned int *)(a1 + 24)].m128i_i64;
        if ( v138 != (__m128i *)m128i_i64 )
        {
          do
          {
            if ( v139->m128i_i64[0] > 1uLL )
            {
              v141 = 16LL * (*(_DWORD *)(v139->m128i_i64[0] + 12) & v114);
              v142 = (__m128i *)(v113 + v141);
              if ( v115 == v141 )
              {
LABEL_230:
                if ( (__m128i *)v113 == v142 )
                {
LABEL_245:
                  v202 = v137;
                  LODWORD(v201) = v135;
                  v199.m128i_i64[0] = (__int64)v137;
                  LODWORD(v200) = v135 - 1;
                  v198 = m128i_i64;
                  v196 = (__m128i *)v139;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v143 = (__m128i *)v113;
                while ( v143->m128i_i64[0] )
                {
                  if ( v142 == ++v143 )
                    goto LABEL_245;
                }
              }
              else
              {
                v143 = (__m128i *)(v113 + v141);
                while ( v143->m128i_i64[0] )
                {
                  if ( v137 == (__int64 *)++v143 )
                    goto LABEL_230;
                }
              }
              *v143 = _mm_loadu_si128(v139);
            }
            ++v139;
          }
          while ( m128i_i64 != (__int64 *)v139 );
          v138 = *(__m128i **)(a1 + 16);
        }
        if ( v138 )
        {
          LODWORD(v200) = v135;
          v198 = v137;
          LODWORD(v196) = v135 - 1;
          sub_186B220(v138);
          v135 = (int)v200;
          v116 = v198;
          v114 = (unsigned int)v196;
        }
        *(_QWORD *)(a1 + 16) = v113;
        *(_DWORD *)(a1 + 24) = v135;
        *(_DWORD *)(a1 + 32) = 0;
      }
      else
      {
        v113 = *(_QWORD *)(a1 + 16);
        v114 = v112 - 1;
        v115 = 16LL * v112;
        v116 = (__int64 *)(v113 + v115);
      }
      v117 = *((_DWORD *)v6 + 3);
      v118 = 16LL * (v117 & v114);
      v119 = v113 + v118;
      if ( v118 != v115 )
      {
        v120 = (__int64 *)(v113 + v118);
        v121 = nullptr;
        while ( 1 )
        {
          v122 = *v120;
          if ( (unsigned __int64)*v120 > 1 )
          {
            if ( *(_DWORD *)(v122 + 12) == v117 && v6 == (__int64 *)v122 )
            {
              v147 = v197;
              *v120 = (__int64)v6;
              v120[1] = v147;
              goto LABEL_211;
            }
          }
          else
          {
            if ( !v122 )
            {
              if ( v121 )
                goto LABEL_240;
              v121 = (__int64 **)v120;
              goto LABEL_241;
            }
            v121 = (__int64 **)v120;
          }
          v120 += 2;
          if ( v120 == v116 )
            goto LABEL_194;
        }
      }
      v121 = nullptr;
      while ( 1 )
      {
LABEL_194:
        if ( v119 == v113 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v123 = *(_QWORD *)v113;
        if ( *(_QWORD *)v113 > 1u )
        {
          if ( *(_DWORD *)(v123 + 12) == v117 && v6 == (__int64 *)v123 )
          {
            v149 = v197;
            *(_QWORD *)v113 = v6;
            *(_QWORD *)(v113 + 8) = v149;
            goto LABEL_211;
          }
        }
        else
        {
          if ( !v123 )
          {
            if ( v121 )
LABEL_240:
              --*(_DWORD *)(a1 + 32);
            else
              v121 = (__int64 **)v113;
LABEL_241:
            v144 = (__int64 *)v197;
            *v121 = v6;
            v121[1] = v144;
            ++*(_DWORD *)(a1 + 28);
LABEL_211:
            v129 = *(_QWORD **)(a1 + 48);
            ++*((_DWORD *)v6 + 2);
            if ( v129 )
            {
              v130 = *((_DWORD *)v129 - 1);
              if ( v130 == *((_DWORD *)v129 - 2) )
              {
                v131 = (3 * v130 + 1) >> 1;
                v132 = 8 * v131 + 8;
                if ( 8 * v130 + 8 >= v132 || v130 >= v131 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_166874((__int64 *)ptr, "Overflow encountered when expanding vector", v192);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, ptr);
                  sub_233E40((__int64)ptr);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v133 = (unsigned int *)sub_186B300(v129 - 1, v132);
                v129 = v133 + 2;
                *v133 = v131;
                v130 = v133[1];
                *(_QWORD *)(a1 + 48) = v129;
              }
            }
            else
            {
              v148 = (_QWORD *)sub_186B270(0x18u);
              *v148 = 2;
              v130 = 0;
              v129 = v148 + 1;
              *(_QWORD *)(a1 + 48) = v129;
            }
            v129[v130] = v6;
            *((_DWORD *)v129 - 1) = v130 + 1;
            v196 = *(__m128i **)a1;
LABEL_19:
            v16 = *((_DWORD *)v6 + 6);
            si128 = (__m128i)_mm_loadh_ps((const double *)&v196);
            if ( *(_BYTE *)(a1 + 379) )
            {
              if ( v16 )
              {
                v18 = v16;
                v77 = v6;
                while ( 1 )
                {
                  v78 = v77[4];
                  if ( !*(_WORD *)(v78 + 4) )
                  {
                    v79 = *(_DWORD **)(*(_QWORD *)(v78 + 16) + 24LL);
                    if ( v79 )
                    {
                      if ( !*v79 && v79[1] == 8 )
                      {
                        v80 = *(_DWORD *)(v78 + 24);
                        if ( v80 == 1 )
                        {
                          v81 = *(unsigned int **)(v78 + 32);
                          if ( !*((_WORD *)v81 + 2) )
                          {
                            v82 = *(_DWORD **)(*((_QWORD *)v81 + 2) + 24LL);
                            if ( v82 )
                            {
                              if ( !*v82 && v82[1] == 6 )
                              {
                                v83 = *(_QWORD *)(a1 + 80);
                                v84 = *v81;
                                v85 = ptr;
                                ptr[0] = nullptr;
                                if ( v83 && (unsigned int)v84 < *(_DWORD *)(v83 - 4) )
                                  v85 = (void **)(v83 + 8 * v84);
                                if ( !*v85 && v81[6] < *(_DWORD *)(a1 + 380) )
                                  break;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  if ( ++v77 == &v6[v16] )
                  {
                    ptr[0] = v196;
                    v202 = (__int64 *)v239;
                    ptr[1] = v239;
                    v238 = 0x1000000000LL;
                    goto LABEL_22;
                  }
                }
                v199.m128i_i64[0] = 0;
                v234 = (__int64 *)&v236;
                v86 = 0;
                v233 = v196;
                v235 = 0x1000000000LL;
                v204 = v223;
                v221 = v223;
                v201 = (void **)v196;
                v222 = 0x1000000000LL;
                v207 = v225;
                v224[0] = v225;
                v202 = nullptr;
                v224[1] = (void *)0x1000000000LL;
                v208 = v229;
                v227 = v229;
                v228 = 0x1000000000LL;
                v200 = (unsigned int *)ptr;
                v198 = (__int64 *)v224;
                v211 = &v227;
                do
                {
                  v87 = v200;
                  v206.m128i_i32[0] = v16;
                  LODWORD(ptr[0]) = 0;
                  sub_D17000((__int64)v198, v200);
                  LODWORD(ptr[0]) = v235;
                  sub_D17000((__int64)v211, v87);
                  v88 = v206.m128i_i32[0];
                  v89 = v6[(_QWORD)v202 + 4];
                  if ( *(_WORD *)(v89 + 4)
                    || (v90 = *(_DWORD **)(*(_QWORD *)(v89 + 16) + 24LL)) == nullptr
                    || *v90
                    || v90[1] != 8
                    || *(_DWORD *)(v89 + 24) != 1
                    || (v150 = *(unsigned int **)(v89 + 32), *((_WORD *)v150 + 2))
                    || (v151 = *(_DWORD **)(*((_QWORD *)v150 + 2) + 24LL)) == nullptr
                    || *v151
                    || v151[1] != 6
                    || ((v152 = *v150, ptr[0] = nullptr, (v153 = *(_QWORD *)(a1 + 80)) == 0)
                     || (unsigned int)v152 >= *(_DWORD *)(v153 - 4)
                      ? (v154 = v200)
                      : (v154 = (unsigned int *)(v153 + 8 * v152)),
                        *(_QWORD *)v154
                     || (v155 = v150[6], v156 = *(_DWORD *)(a1 + 380), (unsigned int)v155 >= v156)
                     || (v157 = v80 * v155, v80 * (unsigned int)v155 >= v156)
                     || v80 >= v80 * (unsigned int)v155) )
                  {
                    v206.m128i_i64[0] = v89;
                    LODWORD(v209) = v88;
                    LODWORD(ptr[0]) = 1;
                    sub_D17000((__int64)&v221, v200);
                    v218.m128i_i64[0] = v199.m128i_i64[0];
                    v218.m128i_i64[1] = (__int64)v196;
                    sub_D16A30(a1, v206.m128i_i64[0], 0, v218.m128i_i64);
                    v91 = (int)v209;
                    v196 = (__m128i *)v218.m128i_i64[1];
                    v199.m128i_i64[0] = v218.m128i_i64[0];
                    v230 = (void *)v218.m128i_i64[0];
                    if ( v218.m128i_i64[0] )
                      ++*(_DWORD *)(v218.m128i_i64[0] + 8);
                    v206.m128i_i32[0] = v91;
                    sub_9EDC60((__int64)&v234, &v230);
                    v16 = v206.m128i_i32[0];
                    if ( !v4 )
                    {
                      v92 = *(_QWORD *)a1;
                      v219 = v86;
                      v220 = v201;
                      sub_D15F70(v92, v199.m128i_i64[0], &v219);
                      v86 = v219;
                      v201 = v220;
                      *(__m128 *)ptr = _mm_loadh_ps((const double *)&v197);
                      sub_D175A0(a1, 2, v200);
                      v16 = v206.m128i_i32[0];
                    }
                  }
                  else
                  {
                    if ( (unsigned int)v222 >= HIDWORD(v222) )
                    {
                      LODWORD(v210) = v206.m128i_i32[0];
                      v167 = (unsigned int)(2 * HIDWORD(v222));
                      v209 = v150;
                      v206.m128i_i32[0] = v155;
                      v168 = (__int64 *)sub_186B270(4 * v167);
                      v169 = v222;
                      v155 = v206.m128i_u32[0];
                      v170 = 0;
                      v171 = (int *)v221;
                      v150 = v209;
                      v88 = (int)v210;
                      while ( (unsigned int)v170 < v169 )
                      {
                        *((_DWORD *)v168 + v170) = v171[v170];
                        ++v170;
                      }
                      if ( v171 != v204 && v171 )
                      {
                        v213 = v88;
                        v210 = v168;
                        v209 = v150;
                        v206.m128i_i32[0] = v155;
                        sub_186B220(v171);
                        v88 = v213;
                        v168 = v210;
                        v150 = v209;
                        v155 = v206.m128i_u32[0];
                      }
                      v221 = v168;
                      HIDWORD(v222) = v167;
                    }
                    v158 = v150;
                    *((_DWORD *)v221 + (unsigned int)v222) = v155;
                    v159 = *(__m128i **)a1;
                    v160 = _mm_loadh_ps((const double *)&v196);
                    LODWORD(v222) = v222 + 1;
                    ptr[0] = v159;
                    ptr[1] = v239;
                    v206 = (__m128i)v160;
                    v238 = 0x1000000000LL;
                    v209 = &v150[2 * v155];
                    v210 = &v219;
                    while ( v209 != v158 )
                    {
                      v161 = *((_QWORD *)v158 + 4);
                      v213 = v88;
                      v219 = v86;
                      v220 = v201;
                      sub_D16A30(a1, v161, 1, v210);
                      v86 = v219;
                      v162 = v213;
                      v201 = v220;
                      v215 = v219;
                      if ( v219 )
                        ++*(_DWORD *)(v219 + 8);
                      v213 = v162;
                      sub_9EDC60((__int64)&v234, &v215);
                      v88 = v213;
                      if ( !v4 )
                      {
                        v163 = _mm_load_si128(&v206);
                        v164 = *(_QWORD *)a1;
                        LODWORD(v196) = v213;
                        v218 = v163;
                        sub_D15F70(v164, v86, v218.m128i_i64);
                        v165 = (int)v196;
                        v166 = _mm_load_si128(&v218);
                        v199.m128i_i64[0] = v218.m128i_i64[0];
                        v206 = v166;
                        v196 = (__m128i *)v218.m128i_i64[1];
                        v216 = v166.m128i_i64[0];
                        if ( v166.m128i_i64[0] )
                          ++*(_DWORD *)(v166.m128i_i64[0] + 8);
                        v213 = v165;
                        sub_9EDC60((__int64)&ptr[1], &v216);
                        v88 = v213;
                      }
                      v158 += 2;
                    }
                    if ( !v4 )
                    {
                      v217 = v197;
                      if ( v197 )
                        ++*(_DWORD *)(v197 + 8);
                      v206.m128i_i32[0] = v88;
                      sub_9EDC60((__int64)&ptr[1], &v217);
                      sub_D175A0(a1, (unsigned int)v238, ptr[1]);
                      v88 = v206.m128i_i32[0];
                    }
                    v206.m128i_i32[0] = v88;
                    v80 = v157;
                    sub_451AA0((__int64 *)v200);
                    v16 = v206.m128i_i32[0];
                  }
                  v202 = (__int64 *)((char *)v202 + 1);
                }
                while ( (unsigned int)v202 < v16 );
                v172 = 0;
                v230 = v232;
                v231 = 0x1000000000LL;
                ptr[1] = (void *)0x1000000000LL;
                ptr[0] = &v238;
                v202 = v234;
                v173 = 0;
                do
                {
                  v198 = &v202[*((unsigned int *)v227 + v172)];
                  if ( v173 < HIDWORD(v231) )
                  {
                    v174 = v231;
                  }
                  else
                  {
                    LODWORD(v209) = v16;
                    v206.m128i_i32[0] = 2 * HIDWORD(v231);
                    v177 = (unsigned int *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v231)));
                    v174 = v231;
                    v178 = (char *)v230;
                    v16 = (unsigned int)v209;
                    if ( (_DWORD)v231 )
                    {
                      if ( (unsigned int)(v231 - 1) <= 2 || v177 == (unsigned int *)((char *)v230 + 8) )
                      {
                        v188 = 0;
                        do
                        {
                          *(_QWORD *)&v177[2 * v188] = *(_QWORD *)&v178[8 * v188];
                          ++v188;
                        }
                        while ( (unsigned int)v188 < v174 );
                      }
                      else
                      {
                        v179 = 0;
                        v180 = 16LL * ((unsigned int)v231 >> 1);
                        do
                        {
                          *(__m128i *)&v177[v179 / 4] = _mm_loadu_si128((const __m128i *)&v178[v179]);
                          v179 += 16LL;
                        }
                        while ( v179 != v180 );
                        if ( (v174 & 1) != 0 )
                          *(_QWORD *)&v177[2 * (v174 & 0xFFFFFFFE)] = *(_QWORD *)&v178[8 * (v174 & 0xFFFFFFFE)];
                      }
                    }
                    if ( v178 && v178 != v232 )
                    {
                      LODWORD(v210) = v16;
                      v209 = v177;
                      sub_186B220(v178);
                      v174 = v231;
                      v16 = (unsigned int)v210;
                      v177 = v209;
                    }
                    v230 = v177;
                    HIDWORD(v231) = v206.m128i_i32[0];
                  }
                  v175 = v230;
                  v176 = v174;
                  ++v172;
                  v173 = v174 + 1;
                  *((_QWORD *)v230 + v176) = v198;
                  LODWORD(v231) = v173;
                }
                while ( (unsigned int)v172 < v16 );
                while ( 1 )
                {
                  v182 = 0;
                  LODWORD(ptr[1]) = 0;
                  while ( 1 )
                  {
                    LODWORD(v198) = v16;
                    sub_9EDC60((__int64)v200, (_QWORD *)(v175[v182] + 8LL * *((unsigned int *)v224[0] + v182)));
                    v16 = (unsigned int)v198;
                    if ( (unsigned int)++v182 >= (unsigned int)v198 )
                      break;
                    v175 = v230;
                  }
                  if ( v4 )
                  {
                    v181 = ptr[0];
                  }
                  else
                  {
                    if ( LODWORD(ptr[1]) >= HIDWORD(ptr[1]) )
                    {
                      v184 = (unsigned int)(2 * HIDWORD(ptr[1]));
                      v185 = (__int64 *)sub_186B270(8 * v184);
                      v16 = (unsigned int)v198;
                      v183 = (unsigned int)ptr[1];
                      v186 = 0;
                      v187 = (__int64 *)ptr[0];
                      while ( (unsigned int)v186 < v183 )
                      {
                        v185[v186] = v187[v186];
                        ++v186;
                      }
                      if ( v187 && v187 != &v238 )
                      {
                        v202 = v185;
                        LODWORD(v198) = v16;
                        sub_186B220(v187);
                        v183 = (unsigned int)ptr[1];
                        v185 = v202;
                        v16 = (unsigned int)v198;
                      }
                      ptr[0] = v185;
                      HIDWORD(ptr[1]) = v184;
                    }
                    else
                    {
                      v183 = (unsigned int)ptr[1];
                    }
                    v181 = ptr[0];
                    *((_QWORD *)ptr[0] + v183) = v203;
                    LODWORD(ptr[1]) = v183 + 1;
                  }
                  LODWORD(v198) = v16;
                  sub_D175A0(a1, LODWORD(ptr[1]), v181);
                  if ( !(unsigned __int8)sub_180B260((unsigned int)v222, v221, v224[0]) )
                    break;
                  v175 = v230;
                  v16 = (unsigned int)v198;
                }
                if ( ptr[0] && ptr[0] != &v238 )
                  sub_186B220(ptr[0]);
                if ( v230 != v232 && v230 )
                  sub_186B220(v230);
                if ( v227 && v227 != v208 )
                  sub_186B220(v227);
                if ( v224[0] != v207 && v224[0] )
                  sub_186B220(v224[0]);
                if ( v221 && v221 != v204 )
                  sub_186B220(v221);
                sub_D15E80(v86, (__int64)v201);
                sub_D15E80(v199.m128i_i64[0], (__int64)v196);
                sub_451AA0((__int64 *)&v233);
                goto LABEL_117;
              }
              ptr[0] = v196;
              v202 = (__int64 *)v239;
              ptr[1] = v239;
              v238 = 0x1000000000LL;
              if ( !(_BYTE)v5 )
              {
                v27 = nullptr;
LABEL_99:
                if ( v203 )
                  goto LABEL_100;
                goto LABEL_101;
              }
            }
            else
            {
              ptr[0] = v196;
              v202 = (__int64 *)v239;
              ptr[1] = v239;
              v238 = 0x1000000000LL;
              if ( v16 )
              {
                v18 = v16;
LABEL_22:
                v19 = v6;
                v200 = (unsigned int *)(8 * v18);
                v20 = &v6[v18];
                v198 = (__int64 *)v224;
                do
                {
                  v24 = v19[4];
                  *(__m128i *)v224 = si128;
                  sub_D16A30(a1, v24, 0, v198);
                  v27 = (__int64 *)v224[0];
                  si128 = _mm_load_si128((const __m128i *)v224);
                  v196 = (__m128i *)v224[1];
                  v28 = (void **)si128.m128i_i64[0];
                  if ( si128.m128i_i64[0] )
                    ++*(_DWORD *)(si128.m128i_i64[0] + 8);
                  v29 = v238;
                  if ( (unsigned int)v238 < HIDWORD(v238) )
                  {
                    v21 = (__int64 *)ptr[1];
                  }
                  else
                  {
                    v201 = (void **)si128.m128i_i64[0];
                    v30 = (unsigned int)(2 * HIDWORD(v238));
                    v199 = si128;
                    v31 = (__int64 *)sub_186B270(8 * v30);
                    v29 = v238;
                    v32 = (__int64 *)ptr[1];
                    v21 = v31;
                    si128 = _mm_load_si128(&v199);
                    v28 = v201;
                    if ( (_DWORD)v238 )
                    {
                      if ( (unsigned int)(v238 - 1) <= 2 || v31 == (__int64 *)((char *)ptr[1] + 8) )
                      {
                        v93 = 0;
                        v94 = 8LL * (unsigned int)v238;
                        do
                        {
                          v25 = v32[v93 / 8];
                          v21[v93 / 8] = v25;
                          v93 += 8LL;
                        }
                        while ( v94 != v93 );
                      }
                      else
                      {
                        v33 = 0;
                        v34 = 16LL * ((unsigned int)v238 >> 1);
                        do
                        {
                          *(__m128i *)&v21[v33 / 8] = _mm_loadu_si128((const __m128i *)&v32[v33 / 8]);
                          v33 += 16LL;
                        }
                        while ( v34 != v33 );
                        if ( (v29 & 1) != 0 )
                          v21[v29 & 0xFFFFFFFE] = v32[v29 & 0xFFFFFFFE];
                      }
                    }
                    if ( v32 != v202 && v32 )
                    {
                      v204 = (int *)v21;
                      v201 = v28;
                      v199 = si128;
                      sub_186B220(v32);
                      v29 = v238;
                      v21 = (__int64 *)v204;
                      v28 = v201;
                      si128 = _mm_load_si128(&v199);
                    }
                    ptr[1] = v21;
                    HIDWORD(v238) = v30;
                  }
                  v22 = v29;
                  ++v19;
                  v23 = v29 + 1;
                  v21[v22] = (__int64)v28;
                  LODWORD(v238) = v23;
                }
                while ( v19 != v20 );
                v35 = nullptr;
                if ( (_BYTE)v5 )
                {
LABEL_104:
                  sub_D175A0(a1, v23, v21);
                  if ( v27 )
                  {
                    v43 = (*((_DWORD *)v27 + 2))-- == 1;
                    if ( v43 )
                      sub_15D7BC0(v196, v27);
                  }
LABEL_107:
                  v70 = (__int64 *)ptr[1];
                  v71 = (__int64 *)((char *)ptr[1] + 8 * (unsigned int)v238);
                  if ( ptr[1] < v71 )
                  {
                    do
                    {
                      v72 = *v70;
                      if ( *v70 )
                      {
                        v73 = ptr[0];
                        v43 = (*(_DWORD *)(v72 + 8))-- == 1;
                        if ( v43 )
                          sub_15D7BC0(v73, v72);
                      }
                      ++v70;
                    }
                    while ( v70 < v71 );
                    v70 = (__int64 *)ptr[1];
                  }
                  if ( v70 != v202 && v70 )
                    sub_186B220(v70);
LABEL_117:
                  v74 = v203;
                  if ( v203 )
                  {
                    LODWORD(v196) = *(_DWORD *)(v203 + 8);
                    v43 = (_DWORD)v196 == 1;
                    *(_DWORD *)(v203 + 8) = (_DWORD)v196 - 1;
                    if ( v43 )
                      sub_15D7BC0(v205, v74);
                  }
                  v75 = v197;
                  if ( v197 )
                  {
                    LODWORD(v196) = *(_DWORD *)(v197 + 8);
                    v43 = (_DWORD)v196 == 1;
                    *(_DWORD *)(v197 + 8) = (_DWORD)v196 - 1;
                    if ( v43 )
                      sub_15D7BC0(v205, v75);
                  }
                  return 2;
                }
                while ( 2 )
                {
                  v52 = *(_QWORD *)a1;
                  v53 = *(__int64 *)((char *)v35 + (_QWORD)v21);
                  v54 = *(__int64 **)(*(_QWORD *)a1 + 856LL);
                  v55 = *(__int64 **)(*(_QWORD *)a1 + 864LL);
                  if ( (__int64 *)v53 == v54 )
                  {
                    if ( v55 )
                      ++*((_DWORD *)v55 + 2);
                    if ( v27 )
                    {
                      v43 = (*((_DWORD *)v27 + 2))-- == 1;
                      if ( v43 )
                      {
                        v198 = v55;
                        sub_15D7BC0(v196, v27);
                        v52 = *(_QWORD *)a1;
                        v55 = v198;
                      }
                    }
                    v27 = v55;
                  }
                  else
                  {
                    if ( (__int64 *)v53 == v55 )
                      goto LABEL_86;
                    if ( *(_WORD *)(v53 + 4)
                      || (v56 = *(_DWORD **)(*(_QWORD *)(v53 + 16) + 24LL)) == nullptr
                      || (LODWORD(v25) = *v56) != 0
                      || v56[1] != 8 )
                    {
                      v57 = sub_15E1A70(v52);
                      v54 = (__int64 *)v57;
                      if ( v57 )
                        ++*(_DWORD *)(v57 + 8);
                      if ( v27 )
                      {
                        v43 = (*((_DWORD *)v27 + 2))-- == 1;
                        if ( v43 )
                          goto LABEL_90;
                      }
LABEL_70:
                      v52 = *(_QWORD *)a1;
                    }
                    else
                    {
                      v54 = *(__int64 **)(v53 + 32);
LABEL_86:
                      if ( v54 )
                        ++*((_DWORD *)v54 + 2);
                      if ( v27 )
                      {
                        v43 = (*((_DWORD *)v27 + 2))-- == 1;
                        if ( v43 )
                        {
LABEL_90:
                          sub_15D7BC0(v196, v27);
                          goto LABEL_70;
                        }
                      }
                    }
                    v27 = v54;
                  }
                  v43 = *(_BYTE *)(a1 + 160) == 0;
                  v231 = v52;
                  v227 = v27;
                  v58 = a1 + 152;
                  v228 = v197;
                  v230 = nullptr;
                  if ( v43 )
                    v36 = sub_14E03D0(
                            v58,
                            v195,
                            (__int64)v196,
                            v197,
                            (int)v198,
                            v199.m128i_i32[0],
                            v199.m128i_i32[2],
                            (int)v200,
                            v201,
                            (int)v202,
                            v203,
                            (int)v204,
                            (int)v205,
                            v206.m128i_i32[0],
                            v206.m128i_i32[2],
                            (int)v207,
                            (int)v208,
                            (int)v209,
                            (int)v210,
                            (int)v211,
                            v212,
                            v214,
                            v215,
                            v216,
                            v217,
                            v218.m128i_i32[0],
                            v218.m128i_i8[8],
                            v219,
                            (int)v220,
                            (int)v221,
                            v222,
                            v223[0],
                            v223[2],
                            v223[4],
                            v223[6],
                            v223[8],
                            v223[10],
                            v223[12],
                            v223[14],
                            (int)v224[0],
                            (int)v224[1],
                            v225[0],
                            v225[2],
                            v225[4],
                            v226);
                  else
                    v36 = sub_14E0E20(
                            v58,
                            2,
                            (int)&v227,
                            (int)&v230,
                            v25,
                            v26,
                            v195,
                            (int)v196,
                            v197,
                            (int)v198,
                            v199.m128i_i32[0],
                            (void *)v199.m128i_i64[1]);
                  if ( v36 != 5 )
                  {
                    v37 = v230;
                    goto LABEL_44;
                  }
                  v67 = (_DWORD *)sub_15E1AF0(*(_QWORD *)(a1 + 152));
                  v37 = v67;
                  if ( v67 )
                  {
                    v68 = v230;
                    ++v67[2];
                    if ( !v68 || (v69 = v231, v43 = v68[2] == 1, --v68[2], !v43) )
                    {
                      v230 = v67;
                      goto LABEL_45;
                    }
LABEL_198:
                    sub_15D7BC0(v69, v68);
                    v230 = v37;
LABEL_44:
                    if ( v37 )
                    {
LABEL_45:
                      ++v37[2];
LABEL_46:
                      v38 = *(_QWORD **)(a1 + 128);
                      if ( v38 )
                      {
                        v39 = *((_DWORD *)v38 - 1);
                        if ( v39 == *((_DWORD *)v38 - 2) )
                        {
                          v59 = (3 * v39 + 1) >> 1;
                          v60 = 8 * v59 + 8;
                          if ( 8 * v39 + 8 >= (unsigned int)v60 || v39 >= v59 )
                          {
                            v189 = (char **)__cxa_allocate_exception(0x28u);
                            sub_166874((__int64 *)&v233, "Overflow encountered when expanding vector", v190);
                            *v189 = (char *)off_1C63128;
                            sub_2333C0(v189 + 1, &v233);
                            sub_233E40((__int64)&v233);
                            __cxa_throw(
                              v189,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          LODWORD(v198) = (3 * v39 + 1) >> 1;
                          v61 = sub_186B300(v38 - 1, v60);
                          v62 = (int)v198;
                          v38 = (_QWORD *)(v61 + 8);
                          *(_QWORD *)(a1 + 128) = v61 + 8;
                          *(_DWORD *)v61 = v62;
                          LODWORD(v61) = *(_DWORD *)(v61 + 4);
                          v42 = &v38[(unsigned int)v61];
                          v41 = v61 + 1;
                        }
                        else
                        {
                          v40 = v39;
                          v41 = v39 + 1;
                          v42 = &v38[v40];
                        }
                      }
                      else
                      {
                        v76 = (_QWORD *)sub_186B270(0x18u);
                        v38 = v76 + 1;
                        *v76 = 2;
                        v41 = 1;
                        *(_QWORD *)(a1 + 128) = v38;
                        v42 = v38;
                      }
                      v43 = *(_BYTE *)(a1 + 377) == 0;
                      *v42 = v37;
                      *((_DWORD *)v38 - 1) = v41;
                      if ( !v43 )
                      {
                        v44 = *(unsigned int **)(a1 + 368);
                        if ( v44 )
                          *v44 = (*v44 + 1) & 0x3FFFFFFF | *v44 & 0xC0000000;
                        v45 = *(_QWORD **)(a1 + 144);
                        if ( v45 )
                        {
                          v46 = *((_DWORD *)v45 - 1);
                          if ( v46 == *((_DWORD *)v45 - 2) )
                          {
                            v63 = (3 * v46 + 1) >> 1;
                            v64 = 8 * v63 + 8;
                            if ( 8 * v46 + 8 >= (unsigned int)v64 || v46 >= v63 )
                            {
                              v193 = (char **)__cxa_allocate_exception(0x28u);
                              sub_166874((__int64 *)&v233, "Overflow encountered when expanding vector", v194);
                              *v193 = (char *)off_1C63128;
                              sub_2333C0(v193 + 1, &v233);
                              sub_233E40((__int64)&v233);
                              __cxa_throw(
                                v193,
                                (struct type_info *)&`typeinfo for'default_exception,
                                (void (*)(void *))sub_230E50);
                            }
                            LODWORD(v198) = (3 * v46 + 1) >> 1;
                            v65 = sub_186B300(v45 - 1, v64);
                            v66 = (int)v198;
                            v45 = (_QWORD *)(v65 + 8);
                            *(_QWORD *)(a1 + 144) = v65 + 8;
                            *(_DWORD *)v65 = v66;
                            LODWORD(v65) = *(_DWORD *)(v65 + 4);
                            v49 = (unsigned int **)&v45[(unsigned int)v65];
                            v48 = v65 + 1;
                          }
                          else
                          {
                            v47 = v46;
                            v48 = v46 + 1;
                            v49 = (unsigned int **)&v45[v47];
                          }
                        }
                        else
                        {
                          v109 = (_QWORD *)sub_186B270(0x18u);
                          v45 = v109 + 1;
                          *v109 = 2;
                          v48 = 1;
                          *(_QWORD *)(a1 + 144) = v45;
                          v49 = (unsigned int **)v45;
                        }
                        *v49 = v44;
                        *((_DWORD *)v45 - 1) = v48;
                      }
                      v50 = v230;
                      if ( v230 )
                      {
                        v51 = v231;
                        v43 = (*((_DWORD *)v230 + 2))-- == 1;
                        if ( v43 )
                          sub_15D7BC0(v51, v50);
                      }
                      if ( v200 == (unsigned int *)++v35 )
                        goto LABEL_99;
                      v21 = (__int64 *)ptr[1];
                      continue;
                    }
                  }
                  else
                  {
                    v68 = v230;
                    if ( v230 )
                    {
                      v69 = v231;
                      v43 = (*((_DWORD *)v230 + 2))-- == 1;
                      if ( v43 )
                        goto LABEL_198;
                    }
                    v230 = nullptr;
                  }
                  break;
                }
                v37 = nullptr;
                goto LABEL_46;
              }
              if ( !(_BYTE)v5 )
              {
                v27 = nullptr;
                v21 = v202;
                if ( !v203 )
                {
LABEL_103:
                  v23 = v16 + 1;
                  v21[v16] = v203;
                  LODWORD(v238) = v16 + 1;
                  goto LABEL_104;
                }
LABEL_100:
                ++*(_DWORD *)(v203 + 8);
LABEL_101:
                v16 = v238;
                if ( (unsigned int)v238 >= HIDWORD(v238) )
                {
                  v124 = (unsigned int)(2 * HIDWORD(v238));
                  v125 = (__int64 *)sub_186B270(8 * v124);
                  v16 = v238;
                  v126 = (__int64 *)ptr[1];
                  v21 = v125;
                  if ( (_DWORD)v238 )
                  {
                    if ( (unsigned int)(v238 - 1) <= 2 || v125 == (__int64 *)((char *)ptr[1] + 8) )
                    {
                      v145 = 0;
                      v146 = 8LL * (unsigned int)v238;
                      do
                      {
                        v21[v145 / 8] = v126[v145 / 8];
                        v145 += 8LL;
                      }
                      while ( v145 != v146 );
                    }
                    else
                    {
                      v127 = 0;
                      v128 = 16LL * ((unsigned int)v238 >> 1);
                      do
                      {
                        *(__m128i *)&v21[v127 / 8] = _mm_loadu_si128((const __m128i *)&v126[v127 / 8]);
                        v127 += 16LL;
                      }
                      while ( v128 != v127 );
                      if ( (v16 & 1) != 0 )
                        v21[v16 & 0xFFFFFFFE] = v126[v16 & 0xFFFFFFFE];
                    }
                  }
                  if ( v126 != v202 && v126 )
                  {
                    v198 = v21;
                    sub_186B220(v126);
                    v16 = v238;
                    v21 = v198;
                  }
                  ptr[1] = v21;
                  HIDWORD(v238) = v124;
                }
                else
                {
                  v21 = (__int64 *)ptr[1];
                }
                goto LABEL_103;
              }
            }
            sub_D175A0(a1, 0, v202);
            goto LABEL_107;
          }
          v121 = (__int64 **)v113;
        }
        v113 += 16;
      }
    }
  }
  return result;
}

