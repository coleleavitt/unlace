void __fastcall sub_11E26C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r14
  _QWORD *v8; // r15
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
  _BYTE *v27; // rsi
  __int64 v28; // rdx
  _BYTE *v29; // rsi
  __int64 v30; // rcx
  bool v31; // al
  _QWORD *v32; // rdx
  size_t v33; // rcx
  unsigned __int64 v34; // r8
  __int64 v35; // r12
  char *v36; // r9
  void *v37; // rsi
  size_t v38; // r12
  _QWORD *v39; // rax
  size_t v40; // rcx
  unsigned __int64 v41; // r8
  __int64 v42; // r12
  char *v43; // r9
  void *v44; // rsi
  size_t v45; // r15
  __m128i *v46; // rax
  size_t v47; // rcx
  unsigned __int64 v48; // r8
  __int64 v49; // r15
  __m128i si128; // xmm0
  char *v51; // rax
  _BYTE *v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  size_t v56; // r8
  unsigned __int64 v57; // r9
  __int64 v58; // rdx
  char *v59; // rax
  __m128i v60; // xmm0
  _BYTE *v61; // r14
  char *v62; // rdi
  __int64 v63; // r15
  unsigned __int64 v64; // rdi
  _BYTE *v65; // rax
  _QWORD *v66; // r11
  size_t v67; // rdx
  __m128i v68; // xmm0
  __m128i *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // r12
  unsigned __int64 v72; // rdi
  char *v73; // rax
  _QWORD *v74; // r10
  size_t v75; // rdx
  char *v76; // rax
  __int64 v77; // r12
  unsigned __int64 v78; // rdi
  char *v79; // rax
  _QWORD *v80; // r10
  size_t v81; // rdx
  char *v82; // rax
  __int64 v83; // r15
  unsigned __int64 v84; // rdi
  _BYTE *v85; // rax
  __m128i *v86; // r10
  size_t v87; // rdx
  _BYTE *v88; // rax
  __m128i v89; // xmm0
  __m128i *v90; // rax
  void *v91; // rsi
  size_t v92; // r12
  _QWORD *v93; // rax
  size_t v94; // r12
  size_t v95; // rcx
  __int64 v96; // rdx
  char *v97; // r9
  __m128i *v98; // rax
  _QWORD *v99; // rdx
  size_t v100; // rcx
  unsigned __int64 v101; // r8
  __int64 v102; // rdx
  _BYTE *v103; // r10
  __m128i *v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // r9
  _BYTE *v107; // rax
  size_t v108; // r9
  _QWORD *v109; // r11
  _BYTE *v110; // rax
  size_t v111; // r8
  char *v112; // rax
  size_t v113; // r8
  _QWORD *v114; // r10
  char *v115; // rax
  _QWORD *v117; // [rsp+8h] [rbp-240h]
  size_t v118; // [rsp+8h] [rbp-240h]
  void *v119; // [rsp+8h] [rbp-240h]
  size_t v120; // [rsp+8h] [rbp-240h]
  _QWORD *v121; // [rsp+8h] [rbp-240h]
  size_t v122; // [rsp+8h] [rbp-240h]
  size_t v123; // [rsp+8h] [rbp-240h]
  _QWORD *v124; // [rsp+8h] [rbp-240h]
  size_t v125; // [rsp+8h] [rbp-240h]
  void *v126; // [rsp+8h] [rbp-240h]
  size_t v127; // [rsp+8h] [rbp-240h]
  __m128i *v128; // [rsp+8h] [rbp-240h]
  size_t v129; // [rsp+8h] [rbp-240h]
  size_t v130; // [rsp+8h] [rbp-240h]
  __int64 (__fastcall *v131)(size_t, void **); // [rsp+8h] [rbp-240h]
  char v132; // [rsp+8h] [rbp-240h]
  size_t v133; // [rsp+8h] [rbp-240h]
  size_t v134; // [rsp+8h] [rbp-240h]
  _QWORD *v135; // [rsp+8h] [rbp-240h]
  size_t v136; // [rsp+8h] [rbp-240h]
  size_t v137; // [rsp+8h] [rbp-240h]
  size_t v138; // [rsp+10h] [rbp-238h]
  _QWORD *v139; // [rsp+10h] [rbp-238h]
  size_t v140; // [rsp+10h] [rbp-238h]
  size_t v141; // [rsp+10h] [rbp-238h]
  size_t v142; // [rsp+10h] [rbp-238h]
  size_t v143; // [rsp+10h] [rbp-238h]
  size_t v144; // [rsp+10h] [rbp-238h]
  size_t v145; // [rsp+10h] [rbp-238h]
  size_t v146; // [rsp+10h] [rbp-238h]
  size_t v147; // [rsp+10h] [rbp-238h]
  size_t v148; // [rsp+10h] [rbp-238h]
  size_t v149; // [rsp+10h] [rbp-238h]
  size_t v150; // [rsp+10h] [rbp-238h]
  size_t v151; // [rsp+10h] [rbp-238h]
  size_t v152; // [rsp+10h] [rbp-238h]
  _BYTE *v153; // [rsp+10h] [rbp-238h]
  unsigned __int64 v154; // [rsp+18h] [rbp-230h]
  size_t v155; // [rsp+18h] [rbp-230h]
  unsigned __int64 v156; // [rsp+18h] [rbp-230h]
  size_t v157; // [rsp+18h] [rbp-230h]
  char *v158; // [rsp+18h] [rbp-230h]
  size_t v159; // [rsp+18h] [rbp-230h]
  unsigned __int64 v160; // [rsp+18h] [rbp-230h]
  size_t v161; // [rsp+18h] [rbp-230h]
  unsigned __int64 v162; // [rsp+18h] [rbp-230h]
  unsigned __int64 v163; // [rsp+18h] [rbp-230h]
  size_t v164; // [rsp+18h] [rbp-230h]
  size_t v165; // [rsp+18h] [rbp-230h]
  _QWORD *v166; // [rsp+18h] [rbp-230h]
  size_t v167; // [rsp+18h] [rbp-230h]
  void *v168; // [rsp+18h] [rbp-230h]
  unsigned __int64 v169; // [rsp+20h] [rbp-228h]
  size_t v170; // [rsp+20h] [rbp-228h]
  _BYTE *v171; // [rsp+20h] [rbp-228h]
  size_t v172; // [rsp+20h] [rbp-228h]
  size_t v173; // [rsp+20h] [rbp-228h]
  size_t v174; // [rsp+28h] [rbp-220h]
  char *v175; // [rsp+28h] [rbp-220h]
  void *src; // [rsp+30h] [rbp-218h] BYREF
  size_t n; // [rsp+38h] [rbp-210h]
  __int64 v178; // [rsp+40h] [rbp-208h] BYREF
  void *v179; // [rsp+50h] [rbp-1F8h] BYREF
  size_t v180; // [rsp+58h] [rbp-1F0h]
  _QWORD v181[2]; // [rsp+60h] [rbp-1E8h] BYREF
  void *v182; // [rsp+70h] [rbp-1D8h] BYREF
  size_t v183; // [rsp+78h] [rbp-1D0h]
  _BYTE v184[16]; // [rsp+80h] [rbp-1C8h] BYREF
  void *v185; // [rsp+90h] [rbp-1B8h] BYREF
  size_t v186; // [rsp+98h] [rbp-1B0h]
  _QWORD v187[2]; // [rsp+A0h] [rbp-1A8h] BYREF
  void *v188; // [rsp+B0h] [rbp-198h] BYREF
  size_t v189; // [rsp+B8h] [rbp-190h]
  _QWORD v190[2]; // [rsp+C0h] [rbp-188h] BYREF
  __int16 v191; // [rsp+D0h] [rbp-178h]
  void *v192; // [rsp+E0h] [rbp-168h] BYREF
  size_t v193; // [rsp+E8h] [rbp-160h]
  _QWORD v194[2]; // [rsp+F0h] [rbp-158h] BYREF
  __int16 v195; // [rsp+100h] [rbp-148h]
  void *v196; // [rsp+110h] [rbp-138h] BYREF
  size_t v197; // [rsp+118h] [rbp-130h]
  _QWORD v198[2]; // [rsp+120h] [rbp-128h] BYREF
  __int16 v199; // [rsp+130h] [rbp-118h]
  void *v200; // [rsp+140h] [rbp-108h] BYREF
  __int64 v201; // [rsp+148h] [rbp-100h]
  __m128i v202; // [rsp+150h] [rbp-F8h] BYREF
  __int16 v203; // [rsp+160h] [rbp-E8h]
  void *ptr; // [rsp+170h] [rbp-D8h] BYREF
  __m128i v205; // [rsp+178h] [rbp-D0h]
  __int64 v206; // [rsp+188h] [rbp-C0h] BYREF
  __int16 v207; // [rsp+190h] [rbp-B8h]

  v117 = (_QWORD *)a1[1];
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
  if ( v8 == v7 )
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
              v53 = *v19;
              if ( *(_QWORD *)(*v19 + 16LL) )
                v53 = *(_QWORD *)(*v19 + 16LL);
              ++v19;
              *(_BYTE *)(v53 + 44) |= 1u;
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
                  v54 = *v25;
                  if ( *(_QWORD *)(*v25 + 16LL) )
                    v54 = *(_QWORD *)(*v25 + 16LL);
                  ++v25;
                  *(_BYTE *)(v54 + 44) |= 1u;
                  if ( v25 == v26 )
                    break;
                  while ( !*v25 || !(unsigned __int8)sub_21B9810(*v25, 3055) )
                  {
                    if ( v26 == ++v25 )
                      goto LABEL_19;
                  }
                }
                while ( v26 != v25 );
                goto LABEL_19;
              }
            }
LABEL_43:
            sub_1216510(a1, a2, a3);
            v27 = (_BYTE *)a1[2];
            v28 = (__int64)&v27[a1[3]];
            v182 = v184;
            sub_11E2070(&v182, v27, v28);
            if ( !v183 )
              goto LABEL_44;
            v91 = src;
            v92 = n;
            v150 = v117[1];
            v131 = *(__int64 (__fastcall **)(size_t, void **))(*(_QWORD *)v150 + 96LL);
            v185 = v187;
            if ( (char *)src + n && !src )
              goto LABEL_11;
            if ( n > 0xF )
            {
              v168 = src;
              if ( (n & 0x8000000000000000LL) != 0LL )
                goto LABEL_251;
              v93 = (_QWORD *)operator new(n + 1);
              v187[0] = v92;
              v91 = v168;
              v185 = v93;
            }
            else
            {
              if ( n == 1 )
              {
                LOBYTE(v187[0]) = *(_BYTE *)src;
                v93 = v187;
                goto LABEL_175;
              }
              v93 = v187;
              if ( !n )
              {
LABEL_175:
                v186 = v92;
                *((_BYTE *)v93 + v92) = 0;
                v94 = v186;
                if ( 0x7FFFFFFFFFFFFFFFLL - v186 <= 0xC )
                  goto LABEL_250;
                v95 = v186 + 13;
                if ( v185 == v187 )
                {
                  v96 = 15;
                  if ( v95 <= 0xF )
                    goto LABEL_178;
                }
                else
                {
                  v96 = v187[0];
                  if ( v95 <= v187[0] )
                  {
LABEL_178:
                    qmemcpy((char *)v185 + v186, "/usr/include/", 13);
                    v97 = (char *)v185;
                    goto LABEL_179;
                  }
                }
                if ( (v95 & 0x8000000000000000LL) != 0LL )
                  goto LABEL_251;
                v111 = 2 * v96;
                if ( v95 >= 2 * v96 )
                {
                  v111 = v186 + 13;
                }
                else if ( (v96 & 0x4000000000000000LL) != 0 )
                {
                  v111 = 0x7FFFFFFFFFFFFFFFLL;
                }
                v172 = v186 + 13;
                v165 = v111;
                v112 = (char *)operator new(v111 + 1);
                v113 = v165;
                v114 = v185;
                v97 = v112;
                v95 = v94 + 13;
                if ( v94 )
                {
                  if ( v94 == 1 )
                  {
                    *v112 = *(_BYTE *)v185;
                  }
                  else
                  {
                    v174 = v165;
                    v166 = v185;
                    v115 = (char *)memcpy(v112, v185, v94);
                    v113 = v174;
                    v95 = v172;
                    v114 = v166;
                    v97 = v115;
                  }
                }
                qmemcpy(&v97[v94], "/usr/include/", 13);
                if ( v114 != v187 )
                {
                  v175 = v97;
                  v173 = v113;
                  v167 = v95;
                  operator delete(v114);
                  v97 = v175;
                  v113 = v173;
                  v95 = v167;
                }
                v185 = v97;
                v187[0] = v113;
LABEL_179:
                v186 = v95;
                v97[v94 + 13] = 0;
                v98 = (__m128i *)sub_9EE560(&v185, v182, v183);
                v200 = &v202;
                if ( (__m128i *)v98->m128i_i64[0] == &v98[1] )
                {
                  v202 = _mm_loadu_si128(v98 + 1);
                }
                else
                {
                  v200 = (void *)v98->m128i_i64[0];
                  v202.m128i_i64[0] = v98[1].m128i_i64[0];
                }
                v201 = v98->m128i_i64[1];
                v98->m128i_i64[0] = (__int64)v98[1].m128i_i64;
                v98->m128i_i64[1] = 0;
                v98[1].m128i_i8[0] = 0;
                v207 = 260;
                ptr = &v200;
                v132 = v131(v150, &ptr);
                if ( v200 != &v202 )
                  operator delete(v200);
                if ( v185 != v187 )
                  operator delete(v185);
                v29 = src;
                v30 = n;
                v31 = src == nullptr && (char *)src + n != nullptr;
                if ( !v132 )
                {
LABEL_45:
                  v32 = v194;
                  v192 = v194;
                  if ( v31 )
                    goto LABEL_11;
                  if ( (unsigned __int64)v30 > 0xF )
                  {
                    if ( v30 < 0 )
                      goto LABEL_251;
                    v130 = v30;
                    v70 = (_QWORD *)operator new(v30 + 1);
                    v30 = v130;
                    v192 = v70;
                    v194[0] = v130;
                  }
                  else
                  {
                    if ( v30 == 1 )
                    {
                      LOBYTE(v194[0]) = *v29;
                      goto LABEL_49;
                    }
                    if ( !v30 )
                    {
LABEL_49:
                      v193 = v30;
                      *((_BYTE *)v32 + v30) = 0;
                      v33 = v193;
                      if ( 0x7FFFFFFFFFFFFFFFLL - v193 <= 7 )
                        goto LABEL_250;
                      v34 = v193 + 8;
                      if ( v192 == v194 )
                      {
                        v35 = 15;
                        if ( v34 <= 0xF )
                          goto LABEL_52;
                      }
                      else
                      {
                        v35 = v194[0];
                        if ( v34 <= v194[0] )
                        {
LABEL_52:
                          *(_QWORD *)((char *)v192 + v193) = 0x6564756C636E692FLL;
                          v36 = (char *)v192;
                          goto LABEL_53;
                        }
                      }
                      if ( (v34 & 0x8000000000000000LL) != 0LL )
                        goto LABEL_251;
                      v71 = 2 * v35;
                      if ( v34 < v71 )
                      {
                        v72 = v71 + 1;
                        if ( v71 < 0 )
                        {
                          v72 = 0x8000000000000000LL;
                          v71 = 0x7FFFFFFFFFFFFFFFLL;
                        }
                      }
                      else
                      {
                        v72 = v193 + 9;
                        v71 = v193 + 8;
                      }
                      v141 = v193 + 8;
                      v120 = v193;
                      v73 = (char *)operator new(v72);
                      v33 = v120;
                      v34 = v141;
                      v36 = v73;
                      v74 = v192;
                      if ( v120 )
                      {
                        if ( v120 == 1 )
                        {
                          *v73 = *(_BYTE *)v192;
                        }
                        else
                        {
                          v75 = v120;
                          v157 = v141;
                          v142 = v120;
                          v121 = v192;
                          v76 = (char *)memcpy(v73, v192, v75);
                          v34 = v157;
                          v33 = v142;
                          v74 = v121;
                          v36 = v76;
                        }
                      }
                      *(_QWORD *)&v36[v33] = 0x6564756C636E692FLL;
                      if ( v74 != v194 )
                      {
                        v158 = v36;
                        v143 = v34;
                        v122 = v33;
                        operator delete(v74);
                        v36 = v158;
                        v34 = v143;
                        v33 = v122;
                      }
                      v192 = v36;
                      v194[0] = v71;
LABEL_53:
                      v193 = v34;
                      v36[v33 + 8] = 0;
                      ptr = &v192;
                      v207 = 260;
                      sub_112FAC0(a2, a3, (__int64)&ptr);
                      if ( v192 != v194 )
                        operator delete(v192);
                      v37 = src;
                      v38 = n;
                      v196 = v198;
                      if ( (char *)src + n && !src )
                        goto LABEL_11;
                      if ( n > 0xF )
                      {
                        v119 = src;
                        if ( (n & 0x8000000000000000LL) != 0LL )
                          goto LABEL_251;
                        v39 = (_QWORD *)operator new(n + 1);
                        v198[0] = v38;
                        v37 = v119;
                        v196 = v39;
                      }
                      else
                      {
                        if ( n == 1 )
                        {
                          LOBYTE(v198[0]) = *(_BYTE *)src;
                          v39 = v198;
                          goto LABEL_60;
                        }
                        v39 = v198;
                        if ( !n )
                        {
LABEL_60:
                          v197 = v38;
                          *((_BYTE *)v39 + v38) = 0;
                          v40 = v197;
                          if ( 0x7FFFFFFFFFFFFFFFLL - v197 <= 0xB )
                            goto LABEL_250;
                          v41 = v197 + 12;
                          if ( v196 == v198 )
                          {
                            v42 = 15;
                            if ( v41 <= 0xF )
                              goto LABEL_63;
                          }
                          else
                          {
                            v42 = v198[0];
                            if ( v41 <= v198[0] )
                            {
LABEL_63:
                              qmemcpy((char *)v196 + v197, "/usr/include", 12);
                              v43 = (char *)v196;
                              goto LABEL_64;
                            }
                          }
                          if ( (v41 & 0x8000000000000000LL) != 0LL )
                            goto LABEL_251;
                          v77 = 2 * v42;
                          if ( v41 < v77 )
                          {
                            v78 = v77 + 1;
                            if ( v77 < 0 )
                            {
                              v78 = 0x8000000000000000LL;
                              v77 = 0x7FFFFFFFFFFFFFFFLL;
                            }
                          }
                          else
                          {
                            v78 = v197 + 13;
                            v77 = v197 + 12;
                          }
                          v144 = v197 + 12;
                          v123 = v197;
                          v79 = (char *)operator new(v78);
                          v40 = v123;
                          v41 = v144;
                          v43 = v79;
                          v80 = v196;
                          if ( v123 )
                          {
                            if ( v123 == 1 )
                            {
                              *v79 = *(_BYTE *)v196;
                            }
                            else
                            {
                              v81 = v123;
                              v159 = v144;
                              v145 = v123;
                              v124 = v196;
                              v82 = (char *)memcpy(v79, v196, v81);
                              v41 = v159;
                              v40 = v145;
                              v80 = v124;
                              v43 = v82;
                            }
                          }
                          qmemcpy(&v43[v40], "/usr/include", 12);
                          if ( v80 != v198 )
                          {
                            v160 = v41;
                            v146 = v40;
                            v125 = (size_t)v43;
                            operator delete(v80);
                            v41 = v160;
                            v40 = v146;
                            v43 = (char *)v125;
                          }
                          v196 = v43;
                          v198[0] = v77;
LABEL_64:
                          v197 = v41;
                          v43[v40 + 12] = 0;
                          v207 = 260;
                          ptr = &v196;
                          sub_112FAC0(a2, a3, (__int64)&ptr);
                          if ( v196 != v198 )
                            operator delete(v196);
                          v44 = src;
                          v45 = n;
                          v200 = &v202;
                          if ( !((char *)src + n) || src )
                          {
                            if ( n > 0xF )
                            {
                              v126 = src;
                              if ( (n & 0x8000000000000000LL) != 0LL )
                                goto LABEL_251;
                              v46 = (__m128i *)operator new(n + 1);
                              v202.m128i_i64[0] = v45;
                              v44 = v126;
                              v200 = v46;
                            }
                            else
                            {
                              if ( n == 1 )
                              {
                                v202.m128i_i8[0] = *(_BYTE *)src;
                                v46 = &v202;
                                goto LABEL_71;
                              }
                              v46 = &v202;
                              if ( !n )
                              {
LABEL_71:
                                v201 = v45;
                                v46->m128i_i8[v45] = 0;
                                v47 = v201;
                                if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v201) > 0x12 )
                                {
                                  v48 = v201 + 19;
                                  if ( v200 == &v202 )
                                  {
                                    v49 = 15;
                                    if ( v48 <= 0xF )
                                      goto LABEL_74;
                                  }
                                  else
                                  {
                                    v49 = v202.m128i_i64[0];
                                    if ( v48 <= v202.m128i_i64[0] )
                                    {
LABEL_74:
                                      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9BD0);
                                      v51 = (char *)v200 + v201;
                                      *((_WORD *)v51 + 8) = 28769;
                                      *(__m128i *)v51 = si128;
                                      v51[18] = 105;
                                      v52 = v200;
LABEL_75:
                                      v201 = v48;
                                      v52[v47 + 19] = 0;
                                      ptr = &v200;
                                      v207 = 260;
                                      sub_112FAC0(a2, a3, (__int64)&ptr);
                                      if ( v200 != &v202 )
                                        operator delete(v200);
                                      if ( v182 != v184 )
                                        operator delete(v182);
                                      goto LABEL_19;
                                    }
                                  }
                                  if ( (v48 & 0x8000000000000000LL) == 0LL )
                                  {
                                    v83 = 2 * v49;
                                    if ( v48 < v83 )
                                    {
                                      v84 = v83 + 1;
                                      if ( v83 < 0 )
                                      {
                                        v84 = 0x8000000000000000LL;
                                        v83 = 0x7FFFFFFFFFFFFFFFLL;
                                      }
                                    }
                                    else
                                    {
                                      v84 = v201 + 20;
                                      v83 = v201 + 19;
                                    }
                                    v147 = v201 + 19;
                                    v127 = v201;
                                    v85 = (_BYTE *)operator new(v84);
                                    v47 = v127;
                                    v48 = v147;
                                    v52 = v85;
                                    v86 = (__m128i *)v200;
                                    if ( v127 )
                                    {
                                      if ( v127 == 1 )
                                      {
                                        *v85 = *(_BYTE *)v200;
                                      }
                                      else
                                      {
                                        v87 = v127;
                                        v161 = v147;
                                        v148 = v127;
                                        v128 = (__m128i *)v200;
                                        v88 = memcpy(v85, v200, v87);
                                        v48 = v161;
                                        v47 = v148;
                                        v86 = v128;
                                        v52 = v88;
                                      }
                                    }
                                    v89 = _mm_load_si128((const __m128i *)&xmmword_23A9BD0);
                                    v90 = (__m128i *)&v52[v47];
                                    v90[1].m128i_i16[0] = 28769;
                                    *v90 = v89;
                                    v90[1].m128i_i8[2] = 105;
                                    if ( v86 != &v202 )
                                    {
                                      v162 = v48;
                                      v149 = v47;
                                      v129 = (size_t)v52;
                                      operator delete(v86);
                                      v48 = v162;
                                      v47 = v149;
                                      v52 = (_BYTE *)v129;
                                    }
                                    v200 = v52;
                                    v202.m128i_i64[0] = v83;
                                    goto LABEL_75;
                                  }
LABEL_251:
                                  std::__throw_length_error("basic_string::_M_create");
                                }
LABEL_250:
                                std::__throw_length_error("basic_string::append");
                              }
                            }
                            memcpy(v46, v44, v45);
                            v46 = (__m128i *)v200;
                            goto LABEL_71;
                          }
LABEL_11:
                          std::__throw_logic_error("basic_string::_M_construct null not valid");
                        }
                      }
                      memcpy(v39, v37, v38);
                      v39 = v196;
                      goto LABEL_60;
                    }
                    v70 = v194;
                  }
                  v118 = v30;
                  memcpy(v70, v29, v30);
                  v32 = v192;
                  v30 = v118;
                  goto LABEL_49;
                }
                v99 = v190;
                v188 = v190;
                if ( v31 )
                  goto LABEL_11;
                if ( n > 0xF )
                {
                  v153 = src;
                  if ( (n & 0x8000000000000000LL) != 0LL )
                    goto LABEL_251;
                  v137 = n;
                  v105 = (_QWORD *)operator new(n + 1);
                  v30 = v137;
                  v29 = v153;
                  v188 = v105;
                  v190[0] = v137;
                }
                else
                {
                  if ( n == 1 )
                  {
                    LOBYTE(v190[0]) = *(_BYTE *)src;
                    goto LABEL_190;
                  }
                  if ( !n )
                  {
LABEL_190:
                    v189 = v30;
                    *((_BYTE *)v99 + v30) = 0;
                    v100 = v189;
                    if ( 0x7FFFFFFFFFFFFFFFLL - v189 <= 0xC )
                      goto LABEL_250;
                    v101 = v189 + 13;
                    if ( v188 == v190 )
                    {
                      v102 = 15;
                      if ( v101 <= 0xF )
                        goto LABEL_193;
                    }
                    else
                    {
                      v102 = v190[0];
                      if ( v101 <= v190[0] )
                      {
LABEL_193:
                        qmemcpy((char *)v188 + v189, "/usr/include/", 13);
                        v103 = v188;
LABEL_194:
                        v189 = v101;
                        v103[v100 + 13] = 0;
                        v104 = (__m128i *)sub_9EE560(&v188, v182, v183);
                        v200 = &v202;
                        if ( (__m128i *)v104->m128i_i64[0] == &v104[1] )
                        {
                          v202 = _mm_loadu_si128(v104 + 1);
                        }
                        else
                        {
                          v200 = (void *)v104->m128i_i64[0];
                          v202.m128i_i64[0] = v104[1].m128i_i64[0];
                        }
                        v201 = v104->m128i_i64[1];
                        v104->m128i_i64[0] = (__int64)v104[1].m128i_i64;
                        v104->m128i_i64[1] = 0;
                        v104[1].m128i_i8[0] = 0;
                        ptr = &v200;
                        v207 = 260;
                        sub_112FAC0(a2, a3, (__int64)&ptr);
                        if ( v200 != &v202 )
                          operator delete(v200);
                        if ( v188 != v190 )
                          operator delete(v188);
LABEL_44:
                        v29 = src;
                        v30 = n;
                        v31 = src == nullptr && (char *)src + n != nullptr;
                        goto LABEL_45;
                      }
                    }
                    if ( (v101 & 0x8000000000000000LL) != 0LL )
                      goto LABEL_251;
                    v106 = 2 * v102;
                    if ( v101 >= 2 * v102 )
                    {
                      v106 = v189 + 13;
                    }
                    else if ( (v102 & 0x4000000000000000LL) != 0 )
                    {
                      v106 = 0x7FFFFFFFFFFFFFFFLL;
                    }
                    v163 = v189 + 13;
                    v151 = v189;
                    v134 = v106;
                    v107 = (_BYTE *)operator new(v106 + 1);
                    v100 = v151;
                    v108 = v134;
                    v103 = v107;
                    v109 = v188;
                    v101 = v163;
                    if ( v151 )
                    {
                      if ( v151 == 1 )
                      {
                        *v107 = *(_BYTE *)v188;
                      }
                      else
                      {
                        v170 = v134;
                        v135 = v188;
                        v110 = memcpy(v107, v188, v151);
                        v108 = v170;
                        v101 = v163;
                        v100 = v151;
                        v109 = v135;
                        v103 = v110;
                      }
                    }
                    qmemcpy(&v103[v100], "/usr/include/", 13);
                    if ( v109 != v190 )
                    {
                      v171 = v103;
                      v164 = v108;
                      v152 = v101;
                      v136 = v100;
                      operator delete(v109);
                      v103 = v171;
                      v108 = v164;
                      v101 = v152;
                      v100 = v136;
                    }
                    v188 = v103;
                    v190[0] = v108;
                    goto LABEL_194;
                  }
                  v105 = v190;
                }
                v133 = v30;
                memcpy(v105, v29, v30);
                v99 = v188;
                v30 = v133;
                goto LABEL_190;
              }
            }
            memcpy(v93, v91, v92);
            v93 = v185;
            goto LABEL_175;
          }
        }
LABEL_35:
        v21 = v117[32];
        v22 = (const void *)v117[31];
        ptr = &v206;
        v205 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        if ( v21 > 0x80 )
        {
          sub_2236E10(&ptr, &v206, v21, 1);
          v62 = (char *)ptr + v205.m128i_i64[0];
        }
        else
        {
          if ( !v21 )
            goto LABEL_37;
          v62 = (char *)&v206;
        }
        memcpy(v62, v22, v21);
        v21 += v205.m128i_i64[0];
LABEL_37:
        v205.m128i_i64[0] = v21;
        v199 = 257;
        v188 = "include";
        v203 = 257;
        v191 = 259;
        v195 = 257;
        sub_228A3B0(&ptr, &v188, &v192, &v196, &v200);
        v200 = ptr;
        v203 = 261;
        v201 = v205.m128i_i64[0];
        sub_112FA80(a2, a3, (__int64)&v200);
        if ( ptr != &v206 )
          free(ptr);
        goto LABEL_39;
      }
    }
LABEL_9:
    v13 = src;
    v14 = n;
    v179 = v181;
    if ( (char *)src + n && !src )
      goto LABEL_11;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        goto LABEL_251;
      v55 = (_QWORD *)operator new(n + 1);
      v181[0] = v14;
      v179 = v55;
    }
    else
    {
      if ( n == 1 )
      {
        LOBYTE(v181[0]) = *(_BYTE *)src;
        v55 = v181;
        goto LABEL_104;
      }
      v55 = v181;
      if ( !n )
      {
LABEL_104:
        v180 = v14;
        *((_BYTE *)v55 + v14) = 0;
        v56 = v180;
        if ( 0x7FFFFFFFFFFFFFFFLL - v180 <= 0x11 )
          goto LABEL_250;
        v57 = v180 + 18;
        if ( v179 == v181 )
        {
          v58 = 15;
          if ( v57 <= 0xF )
            goto LABEL_107;
        }
        else
        {
          v58 = v181[0];
          if ( v57 <= v181[0] )
          {
LABEL_107:
            v59 = (char *)v179 + v180;
            v60 = _mm_load_si128((const __m128i *)&xmmword_23A9BC0);
            *((_WORD *)v59 + 8) = 25956;
            *(__m128i *)v59 = v60;
            v61 = v179;
LABEL_108:
            v180 = v57;
            v61[v56 + 18] = 0;
            ptr = &v179;
            v207 = 260;
            sub_112FA80(a2, a3, (__int64)&ptr);
            if ( v179 != v181 )
              operator delete(v179);
            goto LABEL_31;
          }
        }
        if ( (v57 & 0x8000000000000000LL) != 0LL )
          goto LABEL_251;
        v63 = 2 * v58;
        if ( v57 < 2 * v58 )
        {
          v64 = v63 + 1;
          if ( (v58 & 0x4000000000000000LL) != 0 )
          {
            v64 = 0x8000000000000000LL;
            v63 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          v64 = v180 + 19;
          v63 = v180 + 18;
        }
        v154 = v180 + 18;
        v138 = v180;
        v65 = (_BYTE *)operator new(v64);
        v56 = v138;
        v66 = v179;
        v61 = v65;
        v57 = v154;
        if ( v138 )
        {
          if ( v138 == 1 )
          {
            *v65 = *(_BYTE *)v179;
          }
          else
          {
            v67 = v138;
            v169 = v154;
            v155 = v138;
            v139 = v179;
            memcpy(v65, v179, v67);
            v57 = v169;
            v56 = v155;
            v66 = v139;
          }
        }
        v68 = _mm_load_si128((const __m128i *)&xmmword_23A9BC0);
        v69 = (__m128i *)&v61[v56];
        v69[1].m128i_i16[0] = 25956;
        *v69 = v68;
        if ( v66 != v181 )
        {
          v156 = v57;
          v140 = v56;
          operator delete(v66);
          v57 = v156;
          v56 = v140;
        }
        v179 = v61;
        v181[0] = v63;
        goto LABEL_108;
      }
    }
    memcpy(v55, v13, v14);
    v55 = v179;
    goto LABEL_104;
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
  if ( src != &v178 )
    operator delete(src);
}
