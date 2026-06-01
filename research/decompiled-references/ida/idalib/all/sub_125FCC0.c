void __fastcall sub_125FCC0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r15
  _QWORD *v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r14
  _QWORD *v12; // r15
  void *v13; // r15
  size_t v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // r15
  _QWORD *v20; // r14
  size_t v21; // r14
  const void *v22; // r15
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // r14
  _QWORD *v26; // r15
  char *(__fastcall *v27)(char *, __int64, __int64, __int64, __int64, __int64); // rax
  _BYTE *v28; // rsi
  __int64 v29; // r8
  bool v30; // al
  _QWORD *v31; // rdx
  size_t v32; // rcx
  unsigned __int64 v33; // r8
  __int64 v34; // r12
  char *v35; // r9
  void *v36; // rsi
  size_t v37; // r15
  __m128i *v38; // rax
  size_t v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // r15
  _BYTE *v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  size_t v46; // r8
  unsigned __int64 v47; // r9
  __int64 v48; // rdx
  char *v49; // rax
  __m128i v50; // xmm0
  _BYTE *v51; // r14
  char *v52; // rdi
  __int64 v53; // r14
  __int64 (__fastcall *v54)(__int64, void **); // rcx
  __m128i *v55; // rdx
  size_t v56; // r12
  size_t v57; // r8
  __int64 v58; // r9
  char *v59; // r10
  char *v60; // r8
  size_t v61; // r12
  __int64 v62; // rax
  _BYTE *v63; // rdi
  size_t v64; // rax
  char v65; // r14
  __m128i *v66; // rdx
  size_t v67; // rcx
  unsigned __int64 v68; // r8
  __int64 v69; // r9
  char *v70; // r10
  _BYTE *v71; // r8
  unsigned __int64 v72; // rcx
  __int64 v73; // rax
  _BYTE *v74; // rdi
  size_t v75; // rax
  __int64 v76; // r15
  unsigned __int64 v77; // rdi
  _BYTE *v78; // rax
  _QWORD *v79; // r11
  size_t v80; // rdx
  __m128i v81; // xmm0
  __m128i *v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // r12
  unsigned __int64 v85; // rdi
  char *v86; // rax
  _QWORD *v87; // r10
  size_t v88; // rdx
  char *v89; // rax
  __int64 v90; // r15
  unsigned __int64 v91; // rdi
  _BYTE *v92; // rax
  __m128i *v93; // r10
  size_t v94; // rdx
  _BYTE *v95; // rax
  __m128i *v96; // rax
  __m128i *v97; // rax
  signed __int64 v98; // r9
  char *v99; // rax
  __int64 v100; // r9
  __m128i *v101; // r11
  char *v102; // rax
  __int64 v103; // rcx
  size_t v104; // rax
  char *v105; // rax
  size_t v106; // r9
  size_t v107; // r10
  __m128i *v108; // rcx
  char *v109; // r11
  size_t v110; // rdx
  char *v111; // rax
  char *v112; // rdi
  __int64 v113; // r9
  char *v114; // rax
  __int64 v115; // r9
  __m128i *v116; // r11
  char *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rax
  _BYTE *v120; // rax
  size_t v121; // r9
  size_t v122; // r10
  _BYTE *v123; // r11
  __m128i *v124; // r14
  size_t v125; // rdx
  _BYTE *v126; // rax
  _BYTE *v127; // rdi
  _QWORD *v129; // [rsp+8h] [rbp-230h]
  __int64 (__fastcall *v130)(__int64, void **); // [rsp+8h] [rbp-230h]
  size_t v131; // [rsp+8h] [rbp-230h]
  size_t v132; // [rsp+8h] [rbp-230h]
  void *v133; // [rsp+8h] [rbp-230h]
  size_t v134; // [rsp+8h] [rbp-230h]
  _QWORD *v135; // [rsp+8h] [rbp-230h]
  size_t v136; // [rsp+8h] [rbp-230h]
  size_t v137; // [rsp+8h] [rbp-230h]
  size_t v138; // [rsp+8h] [rbp-230h]
  __m128i *v139; // [rsp+8h] [rbp-230h]
  size_t v140; // [rsp+8h] [rbp-230h]
  size_t v141; // [rsp+8h] [rbp-230h]
  __int64 v142; // [rsp+8h] [rbp-230h]
  size_t v143; // [rsp+8h] [rbp-230h]
  __m128i *v144; // [rsp+8h] [rbp-230h]
  size_t v145; // [rsp+8h] [rbp-230h]
  size_t v146; // [rsp+8h] [rbp-230h]
  size_t v147; // [rsp+10h] [rbp-228h]
  _QWORD *v148; // [rsp+10h] [rbp-228h]
  size_t v149; // [rsp+10h] [rbp-228h]
  size_t v150; // [rsp+18h] [rbp-220h]
  size_t v151; // [rsp+18h] [rbp-220h]
  size_t v152; // [rsp+18h] [rbp-220h]
  size_t v153; // [rsp+18h] [rbp-220h]
  size_t v154; // [rsp+18h] [rbp-220h]
  size_t v155; // [rsp+18h] [rbp-220h]
  size_t v156; // [rsp+18h] [rbp-220h]
  size_t v157; // [rsp+18h] [rbp-220h]
  size_t v158; // [rsp+18h] [rbp-220h]
  size_t v159; // [rsp+18h] [rbp-220h]
  size_t v160; // [rsp+18h] [rbp-220h]
  __m128i *v161; // [rsp+18h] [rbp-220h]
  size_t v162; // [rsp+18h] [rbp-220h]
  size_t v163; // [rsp+18h] [rbp-220h]
  __int64 v164; // [rsp+18h] [rbp-220h]
  _BYTE *v165; // [rsp+18h] [rbp-220h]
  size_t v166; // [rsp+18h] [rbp-220h]
  size_t v167; // [rsp+18h] [rbp-220h]
  size_t v168; // [rsp+18h] [rbp-220h]
  size_t v169; // [rsp+18h] [rbp-220h]
  size_t v170; // [rsp+18h] [rbp-220h]
  size_t v171; // [rsp+18h] [rbp-220h]
  size_t v172; // [rsp+20h] [rbp-218h]
  size_t v173; // [rsp+20h] [rbp-218h]
  size_t v174; // [rsp+20h] [rbp-218h]
  size_t v175; // [rsp+20h] [rbp-218h]
  size_t v176; // [rsp+20h] [rbp-218h]
  size_t v177; // [rsp+20h] [rbp-218h]
  size_t v178; // [rsp+20h] [rbp-218h]
  size_t v179; // [rsp+20h] [rbp-218h]
  __m128i *v180; // [rsp+20h] [rbp-218h]
  size_t v181; // [rsp+20h] [rbp-218h]
  size_t v182; // [rsp+20h] [rbp-218h]
  _BYTE *v183; // [rsp+20h] [rbp-218h]
  size_t v184; // [rsp+20h] [rbp-218h]
  size_t v185; // [rsp+20h] [rbp-218h]
  _BYTE *v186; // [rsp+20h] [rbp-218h]
  size_t v187; // [rsp+20h] [rbp-218h]
  size_t v188; // [rsp+20h] [rbp-218h]
  size_t v189; // [rsp+20h] [rbp-218h]
  size_t v190; // [rsp+28h] [rbp-210h]
  size_t v191; // [rsp+28h] [rbp-210h]
  char *v192; // [rsp+28h] [rbp-210h]
  size_t v193; // [rsp+28h] [rbp-210h]
  size_t v194; // [rsp+28h] [rbp-210h]
  size_t v195; // [rsp+28h] [rbp-210h]
  size_t v196; // [rsp+28h] [rbp-210h]
  size_t v197; // [rsp+28h] [rbp-210h]
  size_t v198; // [rsp+28h] [rbp-210h]
  size_t v199; // [rsp+30h] [rbp-208h]
  size_t v200; // [rsp+30h] [rbp-208h]
  size_t v201; // [rsp+30h] [rbp-208h]
  char *v202; // [rsp+38h] [rbp-200h]
  void *src; // [rsp+40h] [rbp-1F8h] BYREF
  size_t n; // [rsp+48h] [rbp-1F0h]
  __int64 v205; // [rsp+50h] [rbp-1E8h] BYREF
  void *v206; // [rsp+60h] [rbp-1D8h] BYREF
  size_t v207; // [rsp+68h] [rbp-1D0h]
  _QWORD v208[2]; // [rsp+70h] [rbp-1C8h] BYREF
  void *v209; // [rsp+80h] [rbp-1B8h] BYREF
  size_t v210; // [rsp+88h] [rbp-1B0h]
  __int64 v211; // [rsp+90h] [rbp-1A8h] BYREF
  void *v212; // [rsp+A0h] [rbp-198h] BYREF
  size_t v213; // [rsp+A8h] [rbp-190h]
  __m128i v214; // [rsp+B0h] [rbp-188h] BYREF
  __int16 v215; // [rsp+C0h] [rbp-178h]
  void *v216; // [rsp+D0h] [rbp-168h] BYREF
  size_t v217; // [rsp+D8h] [rbp-160h]
  __m128i v218; // [rsp+E0h] [rbp-158h] BYREF
  __int16 v219; // [rsp+F0h] [rbp-148h]
  void *v220; // [rsp+100h] [rbp-138h] BYREF
  size_t v221; // [rsp+108h] [rbp-130h]
  _QWORD v222[2]; // [rsp+110h] [rbp-128h] BYREF
  __int16 v223; // [rsp+120h] [rbp-118h]
  void *v224; // [rsp+130h] [rbp-108h] BYREF
  __int64 v225; // [rsp+138h] [rbp-100h]
  __m128i v226; // [rsp+140h] [rbp-F8h] BYREF
  __int16 v227; // [rsp+150h] [rbp-E8h]
  void *ptr; // [rsp+160h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+168h] [rbp-D0h]
  __int64 v230; // [rsp+178h] [rbp-C0h] BYREF
  __int16 v231; // [rsp+180h] [rbp-B8h]

  v129 = (_QWORD *)a1[1];
  (*(void (__fastcall **)(void **, _QWORD *))(*a1 + 552LL))(&src, a1);
  LODWORD(ptr) = 3053;
  v5 = sub_21B6DA0(a2, &ptr, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_5;
  while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3053) )
  {
    if ( v8 == ++v7 )
      goto LABEL_5;
  }
  if ( v7 == v8 )
  {
LABEL_5:
    LODWORD(ptr) = 3055;
    v9 = sub_21B6DA0(a2, &ptr, 1);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
    v12 = (_QWORD *)(v10 + 8 * HIDWORD(v9));
    if ( v11 != v12 )
    {
      while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 3055) )
      {
        if ( v12 == ++v11 )
          goto LABEL_9;
      }
      if ( v12 != v11 )
      {
        do
        {
          v16 = *v11;
          if ( *(_QWORD *)(*v11 + 16LL) )
            v16 = *(_QWORD *)(*v11 + 16LL);
          ++v11;
          *(_BYTE *)(v16 + 44) |= 1u;
          if ( v11 == v12 )
            break;
          while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 3055) )
          {
            if ( v12 == ++v11 )
              goto LABEL_31;
          }
        }
        while ( v12 != v11 );
LABEL_31:
        LODWORD(ptr) = 3033;
        v17 = sub_21B6DA0(a2, &ptr, 1);
        v18 = *(_QWORD *)(a2 + 8);
        v19 = (_QWORD *)(v18 + 8LL * (unsigned int)v17);
        v20 = (_QWORD *)(v18 + 8 * HIDWORD(v17));
        if ( v19 != v20 )
        {
          while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 3033) )
          {
            if ( v20 == ++v19 )
              goto LABEL_35;
          }
          if ( v19 != v20 )
          {
            do
            {
              v43 = *v19;
              if ( *(_QWORD *)(*v19 + 16LL) )
                v43 = *(_QWORD *)(*v19 + 16LL);
              ++v19;
              *(_BYTE *)(v43 + 44) |= 1u;
              if ( v19 == v20 )
                break;
              while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 3033) )
              {
                if ( v20 == ++v19 )
                  goto LABEL_39;
              }
            }
            while ( v19 != v20 );
LABEL_39:
            LODWORD(ptr) = 3055;
            v23 = sub_21B6DA0(a2, &ptr, 1);
            v24 = *(_QWORD *)(a2 + 8);
            v25 = (_QWORD *)(v24 + 8LL * (unsigned int)v23);
            v26 = (_QWORD *)(v24 + 8 * HIDWORD(v23));
            if ( v25 != v26 )
            {
              while ( !*v25 || !(unsigned __int8)sub_21B9810(*v25, 3055) )
              {
                if ( v26 == ++v25 )
                  goto LABEL_43;
              }
              if ( v25 != v26 )
              {
                do
                {
                  v44 = *v25;
                  if ( *(_QWORD *)(*v25 + 16LL) )
                    v44 = *(_QWORD *)(*v25 + 16LL);
                  ++v25;
                  *(_BYTE *)(v44 + 44) |= 1u;
                  if ( v25 == v26 )
                    break;
                  while ( !*v25 || !(unsigned __int8)sub_21B9810(*v25, 3055) )
                  {
                    if ( v26 == ++v25 )
                      goto LABEL_19;
                  }
                }
                while ( v25 != v26 );
                goto LABEL_19;
              }
            }
LABEL_43:
            sub_1216510((__int64)a1, a2, a3);
            v27 = *(char *(__fastcall **)(char *, __int64, __int64, __int64, __int64, __int64))(*a1 + 512LL);
            if ( v27 == sub_125F9E0 )
              sub_125FB50((char *)&v209, (__int64)v129, (__int64)(a1 + 2), (__int64)src, n);
            else
              v27((char *)&v209, (__int64)a1, (__int64)v129, (__int64)(a1 + 2), (__int64)src, n);
            v28 = src;
            v29 = n;
            v30 = (char *)src + n != nullptr && src == nullptr;
            if ( !v210 )
            {
LABEL_46:
              v31 = v222;
              v220 = v222;
              if ( v30 )
                goto LABEL_11;
              if ( (unsigned __int64)v29 > 0xF )
              {
                if ( v29 < 0 )
                  goto LABEL_277;
                v137 = v29;
                v83 = (_QWORD *)operator new(v29 + 1);
                v29 = v137;
                v220 = v83;
                v222[0] = v137;
              }
              else
              {
                if ( v29 == 1 )
                {
                  LOBYTE(v222[0]) = *v28;
                  goto LABEL_50;
                }
                if ( !v29 )
                {
LABEL_50:
                  v221 = v29;
                  *((_BYTE *)v31 + v29) = 0;
                  v32 = v221;
                  if ( 0x7FFFFFFFFFFFFFFFLL - v221 <= 7 )
                    goto LABEL_276;
                  v33 = v221 + 8;
                  if ( v220 == v222 )
                  {
                    v34 = 15;
                    if ( v33 <= 0xF )
                      goto LABEL_53;
                  }
                  else
                  {
                    v34 = v222[0];
                    if ( v33 <= v222[0] )
                    {
LABEL_53:
                      *(_QWORD *)((char *)v220 + v221) = 0x6564756C636E692FLL;
                      v35 = (char *)v220;
                      goto LABEL_54;
                    }
                  }
                  if ( (v33 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_277;
                  v84 = 2 * v34;
                  if ( v33 < v84 )
                  {
                    v85 = v84 + 1;
                    if ( v84 < 0 )
                    {
                      v85 = 0x8000000000000000LL;
                      v84 = 0x7FFFFFFFFFFFFFFFLL;
                    }
                  }
                  else
                  {
                    v85 = v221 + 9;
                    v84 = v221 + 8;
                  }
                  v153 = v221 + 8;
                  v134 = v221;
                  v86 = (char *)operator new(v85);
                  v32 = v134;
                  v33 = v153;
                  v35 = v86;
                  v87 = v220;
                  if ( v134 )
                  {
                    if ( v134 == 1 )
                    {
                      *v86 = *(_BYTE *)v220;
                    }
                    else
                    {
                      v88 = v134;
                      v173 = v153;
                      v154 = v134;
                      v135 = v220;
                      v89 = (char *)memcpy(v86, v220, v88);
                      v33 = v173;
                      v32 = v154;
                      v87 = v135;
                      v35 = v89;
                    }
                  }
                  *(_QWORD *)&v35[v32] = 0x6564756C636E692FLL;
                  if ( v87 != v222 )
                  {
                    v174 = v33;
                    v155 = v32;
                    v136 = (size_t)v35;
                    operator delete(v87);
                    v33 = v174;
                    v32 = v155;
                    v35 = (char *)v136;
                  }
                  v220 = v35;
                  v222[0] = v84;
LABEL_54:
                  v221 = v33;
                  v35[v32 + 8] = 0;
                  v231 = 260;
                  ptr = &v220;
                  sub_112FAC0(a2, a3, (__int64)&ptr);
                  if ( v220 != v222 )
                    operator delete(v220);
                  v36 = src;
                  v37 = n;
                  v224 = &v226;
                  if ( !((char *)src + n) || src )
                  {
                    if ( n > 0xF )
                    {
                      v133 = src;
                      if ( (n & 0x8000000000000000LL) != 0LL )
                        goto LABEL_277;
                      v38 = (__m128i *)operator new(n + 1);
                      v226.m128i_i64[0] = v37;
                      v36 = v133;
                      v224 = v38;
                    }
                    else
                    {
                      if ( n == 1 )
                      {
                        v226.m128i_i8[0] = *(_BYTE *)src;
                        v38 = &v226;
                        goto LABEL_61;
                      }
                      v38 = &v226;
                      if ( !n )
                      {
LABEL_61:
                        v225 = v37;
                        v38->m128i_i8[v37] = 0;
                        v39 = v225;
                        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v225) > 0xB )
                        {
                          v40 = v225 + 12;
                          if ( v224 == &v226 )
                          {
                            v41 = 15;
                            if ( v40 <= 0xF )
                              goto LABEL_64;
                          }
                          else
                          {
                            v41 = v226.m128i_i64[0];
                            if ( v40 <= v226.m128i_i64[0] )
                            {
LABEL_64:
                              qmemcpy((char *)v224 + v225, "/usr/include", 12);
                              v42 = v224;
LABEL_65:
                              v225 = v40;
                              v42[v39 + 12] = 0;
                              ptr = &v224;
                              v231 = 260;
                              sub_112FAC0(a2, a3, (__int64)&ptr);
                              if ( v224 != &v226 )
                                operator delete(v224);
                              if ( v209 != &v211 )
                                operator delete(v209);
                              goto LABEL_19;
                            }
                          }
                          if ( (v40 & 0x8000000000000000LL) == 0LL )
                          {
                            v90 = 2 * v41;
                            if ( v40 < v90 )
                            {
                              v91 = v90 + 1;
                              if ( v90 < 0 )
                              {
                                v91 = 0x8000000000000000LL;
                                v90 = 0x7FFFFFFFFFFFFFFFLL;
                              }
                            }
                            else
                            {
                              v91 = v225 + 13;
                              v90 = v225 + 12;
                            }
                            v156 = v225 + 12;
                            v138 = v225;
                            v92 = (_BYTE *)operator new(v91);
                            v39 = v138;
                            v40 = v156;
                            v42 = v92;
                            v93 = (__m128i *)v224;
                            if ( v138 )
                            {
                              if ( v138 == 1 )
                              {
                                *v92 = *(_BYTE *)v224;
                              }
                              else
                              {
                                v94 = v138;
                                v175 = v156;
                                v157 = v138;
                                v139 = (__m128i *)v224;
                                v95 = memcpy(v92, v224, v94);
                                v40 = v175;
                                v39 = v157;
                                v93 = v139;
                                v42 = v95;
                              }
                            }
                            qmemcpy(&v42[v39], "/usr/include", 12);
                            if ( v93 != &v226 )
                            {
                              v176 = v40;
                              v158 = v39;
                              v140 = (size_t)v42;
                              operator delete(v93);
                              v40 = v176;
                              v39 = v158;
                              v42 = (_BYTE *)v140;
                            }
                            v224 = v42;
                            v226.m128i_i64[0] = v90;
                            goto LABEL_65;
                          }
LABEL_277:
                          std::__throw_length_error("basic_string::_M_create");
                        }
LABEL_276:
                        std::__throw_length_error("basic_string::append");
                      }
                    }
                    memcpy(v38, v36, v37);
                    v38 = (__m128i *)v224;
                    goto LABEL_61;
                  }
LABEL_11:
                  std::__throw_logic_error("basic_string::_M_construct null not valid");
                }
                v83 = v222;
              }
              v132 = v29;
              memcpy(v83, v28, v29);
              v31 = v220;
              v29 = v132;
              goto LABEL_50;
            }
            v53 = v129[1];
            v54 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v53 + 96LL);
            v55 = &v214;
            v212 = &v214;
            v130 = v54;
            if ( v30 )
              goto LABEL_11;
            if ( n > 0xF )
            {
              v183 = src;
              if ( (n & 0x8000000000000000LL) != 0LL )
                goto LABEL_277;
              v164 = n;
              v96 = (__m128i *)operator new(n + 1);
              v29 = v164;
              v28 = v183;
              v212 = v96;
              v214.m128i_i64[0] = v164;
            }
            else
            {
              if ( n == 1 )
              {
                v214.m128i_i8[0] = *(_BYTE *)src;
                goto LABEL_109;
              }
              if ( !n )
              {
LABEL_109:
                v213 = v29;
                v55->m128i_i8[v29] = 0;
                v56 = v213;
                if ( 0x7FFFFFFFFFFFFFFFLL - v213 <= 0xC )
                  goto LABEL_276;
                v57 = v213 + 13;
                if ( v212 == &v214 )
                {
                  v58 = 15;
                  if ( v57 <= 0xF )
                    goto LABEL_112;
                }
                else
                {
                  v58 = v214.m128i_i64[0];
                  if ( v57 <= v214.m128i_i64[0] )
                  {
LABEL_112:
                    qmemcpy((char *)v212 + v213, "/usr/include/", 13);
                    v59 = (char *)v212;
                    goto LABEL_113;
                  }
                }
                if ( (v57 & 0x8000000000000000LL) != 0LL )
                  goto LABEL_277;
                v98 = 2 * v58;
                if ( v57 >= v98 )
                {
                  v98 = v213 + 13;
                }
                else if ( v98 < 0 )
                {
                  v98 = 0x7FFFFFFFFFFFFFFFLL;
                }
                v177 = v213 + 13;
                v160 = v98;
                v99 = (char *)operator new(v98 + 1);
                v100 = v160;
                v101 = (__m128i *)v212;
                v59 = v99;
                v57 = v56 + 13;
                if ( v56 )
                {
                  if ( v56 == 1 )
                  {
                    *v99 = *(_BYTE *)v212;
                  }
                  else
                  {
                    v190 = v160;
                    v161 = (__m128i *)v212;
                    v102 = (char *)memcpy(v99, v212, v56);
                    v100 = v190;
                    v57 = v177;
                    v101 = v161;
                    v59 = v102;
                  }
                }
                qmemcpy(&v59[v56], "/usr/include/", 13);
                if ( v101 != &v214 )
                {
                  v191 = (size_t)v59;
                  v178 = v100;
                  v162 = v57;
                  operator delete(v101);
                  v59 = (char *)v191;
                  v100 = v178;
                  v57 = v162;
                }
                v212 = v59;
                v214.m128i_i64[0] = v100;
LABEL_113:
                v213 = v57;
                v59[v56 + 13] = 0;
                v60 = (char *)v212;
                v61 = v210 + v213;
                if ( v212 == &v214 )
                {
                  v62 = 15;
                  if ( v61 <= 0xF )
                  {
LABEL_115:
                    if ( v210 )
                    {
                      v63 = (char *)v212 + v213;
                      if ( v210 == 1 )
                        *v63 = *(_BYTE *)v209;
                      else
                        memcpy(v63, v209, v210);
                      v60 = (char *)v212;
                    }
                    goto LABEL_119;
                  }
                }
                else
                {
                  v62 = v214.m128i_i64[0];
                  if ( v61 <= v214.m128i_i64[0] )
                    goto LABEL_115;
                }
                if ( (v61 & 0x8000000000000000LL) != 0LL )
                  goto LABEL_277;
                v103 = 2 * v62;
                if ( v61 >= 2 * v62 )
                {
                  v163 = v210 + v213;
                  v104 = v210 + v213;
                }
                else
                {
                  v104 = 0x7FFFFFFFFFFFFFFFLL;
                  if ( v103 >= 0 )
                    v104 = v103;
                  v163 = v104;
                }
                v199 = v213;
                v192 = (char *)v209;
                v179 = v210;
                v105 = (char *)operator new(v104 + 1);
                v106 = v199;
                v107 = v179;
                v60 = v105;
                v108 = (__m128i *)v212;
                v109 = v192;
                if ( v199 )
                {
                  if ( v199 == 1 )
                  {
                    *v105 = *(_BYTE *)v212;
                  }
                  else
                  {
                    v110 = v199;
                    v202 = v192;
                    v200 = v179;
                    v193 = v106;
                    v180 = (__m128i *)v212;
                    v111 = (char *)memcpy(v105, v212, v110);
                    v109 = v202;
                    v107 = v200;
                    v106 = v193;
                    v108 = v180;
                    v60 = v111;
                  }
                }
                if ( v109 && v107 )
                {
                  v112 = &v60[v106];
                  if ( v107 == 1 )
                  {
                    *v112 = *v109;
                  }
                  else
                  {
                    v194 = (size_t)v108;
                    v181 = (size_t)v60;
                    memcpy(v112, v109, v107);
                    v108 = (__m128i *)v194;
                    v60 = (char *)v181;
                  }
                }
                if ( v108 != &v214 )
                {
                  v182 = (size_t)v60;
                  operator delete(v108);
                  v60 = (char *)v182;
                }
                v212 = v60;
                v214.m128i_i64[0] = v163;
LABEL_119:
                v213 = v61;
                v60[v61] = 0;
                v224 = &v226;
                if ( v212 == &v214 )
                {
                  v226 = _mm_load_si128(&v214);
                }
                else
                {
                  v224 = v212;
                  v226.m128i_i64[0] = v214.m128i_i64[0];
                }
                v64 = v213;
                v213 = 0;
                v231 = 260;
                v225 = v64;
                v212 = &v214;
                v214.m128i_i8[0] = 0;
                ptr = &v224;
                v65 = v130(v53, &ptr);
                if ( v224 != &v226 )
                  operator delete(v224);
                if ( v212 != &v214 )
                  operator delete(v212);
                v28 = src;
                v29 = n;
                v30 = (char *)src + n != nullptr && src == nullptr;
                if ( !v65 )
                  goto LABEL_46;
                v66 = &v218;
                v216 = &v218;
                if ( v30 )
                  goto LABEL_11;
                if ( n > 0xF )
                {
                  v165 = src;
                  if ( (n & 0x8000000000000000LL) != 0LL )
                    goto LABEL_277;
                  v142 = n;
                  v97 = (__m128i *)operator new(n + 1);
                  v29 = v142;
                  v28 = v165;
                  v216 = v97;
                  v218.m128i_i64[0] = v142;
                }
                else
                {
                  if ( n == 1 )
                  {
                    v218.m128i_i8[0] = *(_BYTE *)src;
                    goto LABEL_130;
                  }
                  if ( !n )
                  {
LABEL_130:
                    v217 = v29;
                    v66->m128i_i8[v29] = 0;
                    v67 = v217;
                    if ( 0x7FFFFFFFFFFFFFFFLL - v217 <= 0xC )
                      goto LABEL_276;
                    v68 = v217 + 13;
                    if ( v216 == &v218 )
                    {
                      v69 = 15;
                      if ( v68 <= 0xF )
                        goto LABEL_133;
                    }
                    else
                    {
                      v69 = v218.m128i_i64[0];
                      if ( v68 <= v218.m128i_i64[0] )
                      {
LABEL_133:
                        qmemcpy((char *)v216 + v217, "/usr/include/", 13);
                        v70 = (char *)v216;
                        goto LABEL_134;
                      }
                    }
                    if ( (v68 & 0x8000000000000000LL) != 0LL )
                      goto LABEL_277;
                    v113 = 2 * v69;
                    if ( v68 >= v113 )
                    {
                      v113 = v217 + 13;
                    }
                    else if ( v113 < 0 )
                    {
                      v113 = 0x7FFFFFFFFFFFFFFFLL;
                    }
                    v184 = v217 + 13;
                    v166 = v217;
                    v143 = v113;
                    v114 = (char *)operator new(v113 + 1);
                    v67 = v166;
                    v115 = v143;
                    v70 = v114;
                    v116 = (__m128i *)v216;
                    v68 = v184;
                    if ( v166 )
                    {
                      if ( v166 == 1 )
                      {
                        *v114 = *(_BYTE *)v216;
                      }
                      else
                      {
                        v195 = v143;
                        v144 = (__m128i *)v216;
                        v117 = (char *)memcpy(v114, v216, v166);
                        v115 = v195;
                        v68 = v184;
                        v67 = v166;
                        v116 = v144;
                        v70 = v117;
                      }
                    }
                    qmemcpy(&v70[v67], "/usr/include/", 13);
                    if ( v116 != &v218 )
                    {
                      v196 = (size_t)v70;
                      v185 = v115;
                      v167 = v68;
                      v145 = v67;
                      operator delete(v116);
                      v70 = (char *)v196;
                      v115 = v185;
                      v68 = v167;
                      v67 = v145;
                    }
                    v216 = v70;
                    v218.m128i_i64[0] = v115;
LABEL_134:
                    v217 = v68;
                    v70[v67 + 13] = 0;
                    v71 = v216;
                    v72 = v210 + v217;
                    if ( v216 == &v218 )
                    {
                      v73 = 15;
                      if ( v72 <= 0xF )
                      {
LABEL_136:
                        if ( v210 )
                        {
                          v74 = (char *)v216 + v217;
                          if ( v210 == 1 )
                          {
                            *v74 = *(_BYTE *)v209;
                            v71 = v216;
                          }
                          else
                          {
                            v131 = v210 + v217;
                            memcpy(v74, v209, v210);
                            v71 = v216;
                            v72 = v131;
                          }
                        }
LABEL_139:
                        v217 = v72;
                        v71[v72] = 0;
                        v224 = &v226;
                        if ( v216 == &v218 )
                        {
                          v226 = _mm_load_si128(&v218);
                        }
                        else
                        {
                          v224 = v216;
                          v226.m128i_i64[0] = v218.m128i_i64[0];
                        }
                        v75 = v217;
                        ptr = &v224;
                        v217 = 0;
                        v225 = v75;
                        v216 = &v218;
                        v218.m128i_i8[0] = 0;
                        v231 = 260;
                        sub_112FAC0(a2, a3, (__int64)&ptr);
                        if ( v224 != &v226 )
                          operator delete(v224);
                        if ( v216 != &v218 )
                          operator delete(v216);
                        v28 = src;
                        v29 = n;
                        v30 = (char *)src + n != nullptr && src == nullptr;
                        goto LABEL_46;
                      }
                    }
                    else
                    {
                      v73 = v218.m128i_i64[0];
                      if ( v72 <= v218.m128i_i64[0] )
                        goto LABEL_136;
                    }
                    if ( (v72 & 0x8000000000000000LL) != 0LL )
                      goto LABEL_277;
                    v118 = 2 * v73;
                    if ( v72 >= 2 * v73 )
                    {
                      v146 = v210 + v217;
                      v119 = v210 + v217;
                    }
                    else
                    {
                      v119 = 0x7FFFFFFFFFFFFFFFLL;
                      if ( v118 >= 0 )
                        v119 = v118;
                      v146 = v119;
                    }
                    v201 = v210 + v217;
                    v197 = v217;
                    v186 = v209;
                    v168 = v210;
                    v120 = (_BYTE *)operator new(v119 + 1);
                    v121 = v197;
                    v122 = v168;
                    v71 = v120;
                    v123 = v186;
                    v72 = v201;
                    v124 = (__m128i *)v216;
                    if ( v197 )
                    {
                      if ( v197 == 1 )
                      {
                        *v120 = *(_BYTE *)v216;
                      }
                      else
                      {
                        v125 = v197;
                        v198 = (size_t)v186;
                        v187 = v168;
                        v169 = v121;
                        v126 = memcpy(v120, v216, v125);
                        v72 = v201;
                        v123 = (_BYTE *)v198;
                        v122 = v187;
                        v121 = v169;
                        v71 = v126;
                      }
                    }
                    if ( v123 && v122 )
                    {
                      v127 = &v71[v121];
                      if ( v122 == 1 )
                      {
                        *v127 = *v123;
                      }
                      else
                      {
                        v188 = (size_t)v71;
                        v170 = v72;
                        memcpy(v127, v123, v122);
                        v71 = (_BYTE *)v188;
                        v72 = v170;
                      }
                    }
                    if ( v124 != &v218 )
                    {
                      v189 = (size_t)v71;
                      v171 = v72;
                      operator delete(v124);
                      v71 = (_BYTE *)v189;
                      v72 = v171;
                    }
                    v216 = v71;
                    v218.m128i_i64[0] = v146;
                    goto LABEL_139;
                  }
                  v97 = &v218;
                }
                v141 = v29;
                memcpy(v97, v28, v29);
                v66 = (__m128i *)v216;
                v29 = v141;
                goto LABEL_130;
              }
              v96 = &v214;
            }
            v159 = v29;
            memcpy(v96, v28, v29);
            v55 = (__m128i *)v212;
            v29 = v159;
            goto LABEL_109;
          }
        }
LABEL_35:
        v21 = v129[32];
        v22 = (const void *)v129[31];
        ptr = &v230;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        if ( v21 > 0x80 )
        {
          sub_2236E10(&ptr, &v230, v21, 1);
          v52 = (char *)ptr + si128.m128i_i64[0];
        }
        else
        {
          if ( !v21 )
            goto LABEL_37;
          v52 = (char *)&v230;
        }
        memcpy(v52, v22, v21);
        v21 += si128.m128i_i64[0];
LABEL_37:
        si128.m128i_i64[0] = v21;
        v227 = 257;
        v223 = 257;
        v212 = "include";
        v219 = 257;
        v215 = 259;
        sub_228A3B0(&ptr, &v212, &v216, &v220, &v224);
        v224 = ptr;
        v227 = 261;
        v225 = si128.m128i_i64[0];
        sub_112FA80(a2, a3, (__int64)&v224);
        if ( ptr != &v230 )
          free(ptr);
        goto LABEL_39;
      }
    }
LABEL_9:
    v13 = src;
    v14 = n;
    v206 = v208;
    if ( (char *)src + n && !src )
      goto LABEL_11;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        goto LABEL_277;
      v45 = (_QWORD *)operator new(n + 1);
      v208[0] = v14;
      v206 = v45;
    }
    else
    {
      if ( n == 1 )
      {
        LOBYTE(v208[0]) = *(_BYTE *)src;
        v45 = v208;
        goto LABEL_94;
      }
      v45 = v208;
      if ( !n )
      {
LABEL_94:
        v207 = v14;
        *((_BYTE *)v45 + v14) = 0;
        v46 = v207;
        if ( 0x7FFFFFFFFFFFFFFFLL - v207 <= 0x11 )
          goto LABEL_276;
        v47 = v207 + 18;
        if ( v206 == v208 )
        {
          v48 = 15;
          if ( v47 <= 0xF )
            goto LABEL_97;
        }
        else
        {
          v48 = v208[0];
          if ( v47 <= v208[0] )
          {
LABEL_97:
            v49 = (char *)v206 + v207;
            v50 = _mm_load_si128((const __m128i *)&xmmword_23A9BC0);
            *((_WORD *)v49 + 8) = 25956;
            *(__m128i *)v49 = v50;
            v51 = v206;
LABEL_98:
            v207 = v47;
            v51[v46 + 18] = 0;
            ptr = &v206;
            v231 = 260;
            sub_112FA80(a2, a3, (__int64)&ptr);
            if ( v206 != v208 )
              operator delete(v206);
            goto LABEL_31;
          }
        }
        if ( (v47 & 0x8000000000000000LL) != 0LL )
          goto LABEL_277;
        v76 = 2 * v48;
        if ( v47 < 2 * v48 )
        {
          v77 = v76 + 1;
          if ( (v48 & 0x4000000000000000LL) != 0 )
          {
            v77 = 0x8000000000000000LL;
            v76 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          v77 = v207 + 19;
          v76 = v207 + 18;
        }
        v150 = v207 + 18;
        v147 = v207;
        v78 = (_BYTE *)operator new(v77);
        v46 = v147;
        v79 = v206;
        v51 = v78;
        v47 = v150;
        if ( v147 )
        {
          if ( v147 == 1 )
          {
            *v78 = *(_BYTE *)v206;
          }
          else
          {
            v80 = v147;
            v172 = v150;
            v151 = v147;
            v148 = v206;
            memcpy(v78, v206, v80);
            v47 = v172;
            v46 = v151;
            v79 = v148;
          }
        }
        v81 = _mm_load_si128((const __m128i *)&xmmword_23A9BC0);
        v82 = (__m128i *)&v51[v46];
        v82[1].m128i_i16[0] = 25956;
        *v82 = v81;
        if ( v79 != v208 )
        {
          v152 = v47;
          v149 = v46;
          operator delete(v79);
          v47 = v152;
          v46 = v149;
        }
        v206 = v51;
        v208[0] = v76;
        goto LABEL_98;
      }
    }
    memcpy(v45, v13, v14);
    v45 = v206;
    goto LABEL_94;
  }
  do
  {
    v15 = *v7;
    if ( *(_QWORD *)(*v7 + 16LL) )
      v15 = *(_QWORD *)(*v7 + 16LL);
    ++v7;
    *(_BYTE *)(v15 + 44) |= 1u;
    if ( v7 == v8 )
      break;
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 3053) )
    {
      if ( v8 == ++v7 )
        goto LABEL_19;
    }
  }
  while ( v8 != v7 );
LABEL_19:
  if ( src != &v205 )
    operator delete(src);
}
