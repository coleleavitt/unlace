__int64 __fastcall sub_10E7790(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  char *v12; // r13
  size_t v13; // rbx
  unsigned __int32 v14; // ebp
  _QWORD **v15; // rax
  _QWORD *v16; // r15
  void *v17; // rax
  unsigned __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 *v20; // r15
  _QWORD *i; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  size_t v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  char *v31; // rax
  void *v32; // rdx
  char *v33; // rdi
  void *v34; // rsi
  char *v35; // rdx
  __m128i v36; // xmm3
  __m128i v37; // xmm4
  __m128i v38; // xmm5
  unsigned __int8 **v39; // rsi
  __m128i v40; // xmm1
  __m128i v41; // xmm0
  __m128i v42; // xmm6
  __m128i v43; // xmm4
  char *v44; // rcx
  __m128i v45; // xmm5
  __m128i v46; // xmm6
  __m128i v47; // xmm7
  __m128i v48; // xmm3
  __m128i v49; // xmm7
  __m128i v50; // rax
  __int64 v51; // rbx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rbx
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rbx
  void **v57; // rbx
  void **v58; // r12
  void *v59; // rdi
  size_t v60; // rax
  unsigned __int8 v61; // bl
  __int64 v62; // rax
  _BYTE *v63; // rbp
  __int64 j; // rbx
  __int64 v65; // r15
  __int64 v66; // rdx
  int v67; // edi
  char *v68; // rax
  __int64 v69; // rcx
  char *v70; // rbp
  _QWORD **v71; // rbx
  _QWORD **v72; // rbp
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rbp
  unsigned int v77; // ebx
  __m128i *v78; // rax
  __int64 v79; // rax
  unsigned __int8 *v80; // rbx
  _BYTE *v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // r12
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  void **v88; // rbx
  _BYTE *v89; // rdi
  __int64 v90; // rax
  void **v91; // rax
  unsigned __int8 *v92; // rbp
  _BYTE *v93; // rsi
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  void **v99; // rbp
  _BYTE *v100; // rdi
  __int64 v101; // rax
  unsigned __int8 *v102; // rbp
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 *v105; // rdi
  void **v106; // rbx
  __int64 v107; // rax
  void **v108; // r12
  void **v109; // rbp
  void **v110; // rdi
  void **v111; // rdi
  void **v112; // r12
  void **v113; // rbp
  __int64 v114; // rax
  char *v115; // rdx
  _BYTE *v116; // rcx
  __int64 v117; // r13
  char *v118; // r12
  _BYTE *v119; // rbp
  __int64 v120; // rbx
  void *v121; // rax
  _QWORD **v122; // rbp
  _QWORD **v123; // rbx
  size_t v124; // rdx
  size_t v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rcx
  int v128; // eax
  __int64 v129; // rdx
  int v130; // eax
  __int64 v131; // rdx
  int v132; // eax
  __m128i v133; // xmm7
  __m128i v134; // xmm4
  __m128i v135; // xmm5
  const void *v136; // rsi
  size_t v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rbp
  __int64 v140; // rax
  __int64 v141; // rbp
  __int64 v142; // r15
  unsigned __int8 *v143; // r12
  __int64 v144; // rbx
  void *v145; // rdi
  __int64 v146; // rax
  __int64 v147; // r12
  __int64 v148; // rax
  __int64 v149; // r12
  __int64 v150; // rbx
  __int64 v151; // r13
  void *v152; // rdi
  __int64 v153; // rax
  __int64 v154; // r12
  __int64 v155; // rdx
  __int64 v156; // r12
  __int64 v157; // rbx
  void *v158; // rdi
  _QWORD **v159; // rbp
  _QWORD **v160; // rbx
  _QWORD *v161; // rax
  __int64 v162; // [rsp+0h] [rbp-2B8h]
  __int64 v163; // [rsp+8h] [rbp-2B0h]
  __int64 v164; // [rsp+10h] [rbp-2A8h]
  unsigned __int8 v165; // [rsp+37h] [rbp-281h]
  _QWORD *v166; // [rsp+38h] [rbp-280h]
  char *v167; // [rsp+40h] [rbp-278h]
  _BYTE *v168; // [rsp+40h] [rbp-278h]
  __int64 *v169; // [rsp+40h] [rbp-278h]
  _QWORD *v170; // [rsp+50h] [rbp-268h]
  _QWORD *v171; // [rsp+58h] [rbp-260h]
  __int64 v172; // [rsp+60h] [rbp-258h]
  char *v173; // [rsp+68h] [rbp-250h]
  void **v174; // [rsp+78h] [rbp-240h] BYREF
  __m128i v175; // [rsp+80h] [rbp-238h] BYREF
  void *v176; // [rsp+90h] [rbp-228h] BYREF
  __int64 v177; // [rsp+98h] [rbp-220h]
  __int64 v178; // [rsp+A0h] [rbp-218h] BYREF
  void *v179; // [rsp+B0h] [rbp-208h] BYREF
  size_t n; // [rsp+B8h] [rbp-200h]
  _QWORD v181[2]; // [rsp+C0h] [rbp-1F8h] BYREF
  char v182; // [rsp+D0h] [rbp-1E8h] BYREF
  int v183; // [rsp+D8h] [rbp-1E0h] BYREF
  void *v184; // [rsp+E0h] [rbp-1D8h]
  int *v185; // [rsp+E8h] [rbp-1D0h]
  int *v186; // [rsp+F0h] [rbp-1C8h]
  __int64 v187; // [rsp+F8h] [rbp-1C0h]
  char v188; // [rsp+100h] [rbp-1B8h] BYREF
  __m128i v189; // [rsp+108h] [rbp-1B0h] BYREF
  __m128i v190; // [rsp+118h] [rbp-1A0h] BYREF
  __m128i v191; // [rsp+128h] [rbp-190h]
  char v192; // [rsp+140h] [rbp-178h] BYREF
  __m128i v193; // [rsp+148h] [rbp-170h]
  __m128i v194; // [rsp+158h] [rbp-160h]
  __m128i v195; // [rsp+168h] [rbp-150h]
  void **v196; // [rsp+180h] [rbp-138h] BYREF
  __m128i v197; // [rsp+188h] [rbp-130h] BYREF
  __m128i v198; // [rsp+198h] [rbp-120h] BYREF
  __m128i v199; // [rsp+1A8h] [rbp-110h] BYREF
  _BYTE v200[24]; // [rsp+1C0h] [rbp-F8h] BYREF
  void *v201[2]; // [rsp+1D8h] [rbp-E0h] BYREF
  __m128i v202; // [rsp+1E8h] [rbp-D0h] BYREF
  __int16 v203; // [rsp+200h] [rbp-B8h]
  unsigned __int8 *v204; // [rsp+210h] [rbp-A8h] BYREF
  __m128i v205; // [rsp+218h] [rbp-A0h] BYREF
  __m128i v206; // [rsp+228h] [rbp-90h] BYREF
  __m128i v207; // [rsp+238h] [rbp-80h] BYREF
  char v208; // [rsp+248h] [rbp-70h] BYREF
  __m128i v209; // [rsp+250h] [rbp-68h] BYREF
  __m128i v210; // [rsp+260h] [rbp-58h] BYREF
  __m128i v211; // [rsp+270h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 64) == 2;
  v3 = *(_QWORD *)(a1 + 8) + 24LL;
  if ( v2 )
    LODWORD(v204) = 2;
  else
    LODWORD(v204) = 8;
  v4 = *(_QWORD *)(sub_10E0830(v3, (int *)&v204) + 40);
  v5 = *(unsigned int *)(a1 + 24);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
  {
    sub_2237220(a1 + 16, a1 + 32, v5 + 1, 8);
    v5 = *(unsigned int *)(a1 + 24);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5) = v4;
  v6 = *(_QWORD *)(a1 + 8);
  ++*(_DWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 68) = *(_DWORD *)(*(_QWORD *)v6 + 28LL) == 1;
  v8 = sub_10DCD30(v7, 0x159u);
  v9 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 70) = v8 != 0;
  v10 = sub_10DCD30(v9, 0xCF8u);
  v11 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 71) = v10 != 0;
  if ( sub_10DF140(v11, 0xC12u) && sub_10DECA0(*(_QWORD *)(a1 + 48), 0xC07u, 0xBC6u) )
  {
    sub_FC70B0((__int64)&v204, ***(_QWORD ***)(a1 + 8), 0, 52);
    sub_10D8830(&v204, (__int64)"--offload-arch");
    sub_10D8830(&v204, (__int64)"--offload");
    sub_AEA040((__int64)&v204);
  }
  v12 = &v182;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(_DWORD *)(a1 + 64);
  v183 = 0;
  v185 = &v183;
  v186 = &v183;
  v15 = *(_QWORD ***)(a1 + 16);
  v184 = nullptr;
  v187 = 0;
  v16 = *v15;
  v170 = *v15;
  v17 = (void *)j__strlen(&byte_22F0C30);
  v18 = sub_10D5E20(v13, v16, (void *)&byte_22F0C30, v17, v14);
  v19 = *(_QWORD **)(v18 + 8);
  v166 = v19;
  v171 = &v19[*(unsigned int *)(v18 + 16)];
  if ( v19 == v171 )
  {
LABEL_213:
    v165 = 0;
    v20 = (__int64 *)v200;
    goto LABEL_61;
  }
  if ( !*v19 )
  {
    v161 = v19 + 1;
    do
    {
      v166 = v161;
      if ( v171 == v161 )
        goto LABEL_213;
      ++v161;
    }
    while ( !*(v161 - 1) );
  }
  v165 = 0;
  v20 = (__int64 *)v200;
  for ( i = v166; ; v166 = i )
  {
    v163 = *i;
    if ( (unsigned __int8)sub_21B9810(*i, 3079) || (unsigned __int8)sub_21B9810(v163, 3014) )
    {
      v23 = *(_QWORD *)(v163 + 16);
      if ( !v23 )
        v23 = v163;
      *(_BYTE *)(v23 + 44) |= 1u;
      v24 = **(_QWORD **)(v163 + 48);
      v25 = 0;
      if ( v24 )
        v25 = strlen(**(const char ***)(v163 + 48));
      v198.m128i_i64[1] = v25;
      v199.m128i_i64[0] = (__int64)",";
      v197 = 0u;
      v198.m128i_i64[0] = v24;
      v199.m128i_i64[1] = 1;
      v26 = sub_2246AB0(&v198, ",", 1, 0);
      if ( v26 == -1 )
      {
        v26 = v198.m128i_u64[1];
        v29 = v198.m128i_i64[0];
        v28 = 0;
        v30 = 0;
      }
      else
      {
        v27 = v26 + 1;
        if ( v26 + 1 > v198.m128i_i64[1] )
        {
          v27 = v198.m128i_i64[1];
          v28 = 0;
        }
        else
        {
          v28 = v198.m128i_i64[1] - v27;
        }
        v29 = v198.m128i_i64[0];
        v30 = v198.m128i_i64[0] + v27;
        if ( v26 > v198.m128i_i64[1] )
          v26 = v198.m128i_u64[1];
      }
      v197.m128i_i64[1] = v26;
      v197.m128i_i64[0] = v29;
      v198.m128i_i64[0] = v30;
      v198.m128i_i64[1] = v28;
      *(_OWORD *)&v200[8] = 0u;
      v201[0] = nullptr;
      v201[1] = nullptr;
      v202.m128i_i64[0] = (__int64)",";
      v202.m128i_i64[1] = 1;
      v31 = (char *)sub_2246AB0(v20 + 3, ",", 1, 0);
      if ( v31 == (char *)-1LL )
      {
        v34 = v201[0];
        v31 = (char *)v201[1];
        v33 = nullptr;
        v35 = nullptr;
      }
      else
      {
        v32 = v31 + 1;
        if ( v31 + 1 > v201[1] )
        {
          v32 = v201[1];
          v33 = nullptr;
        }
        else
        {
          v33 = (char *)((char *)v201[1] - (char *)v32);
        }
        v34 = v201[0];
        v35 = (char *)v201[0] + (unsigned __int64)v32;
        if ( v31 > v201[1] )
          v31 = (char *)v201[1];
      }
      *(_QWORD *)&v200[16] = v31;
      v36 = _mm_loadu_si128(&v197);
      *(_QWORD *)&v200[8] = v34;
      v37 = _mm_loadu_si128(&v198);
      v201[0] = v35;
      v38 = _mm_loadu_si128(&v199);
      v201[1] = v33;
      LOBYTE(v204) = (_BYTE)v196;
      v205 = v36;
      v206 = v37;
      v207 = v38;
      if ( (void ***)v199.m128i_i64[0] == &v196 )
      {
        v207.m128i_i64[1] = 1;
        v207.m128i_i64[0] = (__int64)&v204;
        v39 = &v204;
      }
      else
      {
        v39 = (unsigned __int8 **)v207.m128i_i64[0];
      }
      v40 = _mm_loadu_si128((const __m128i *)&v200[8]);
      v41 = _mm_loadu_si128((const __m128i *)v201);
      v42 = _mm_loadu_si128(&v202);
      v208 = v200[0];
      v209 = v40;
      v210 = v41;
      v211 = v42;
      if ( (__int64 *)v202.m128i_i64[0] == v20 )
      {
        v188 = (char)v196;
        v133 = _mm_loadu_si128(&v205);
        v134 = _mm_loadu_si128(&v206);
        v211.m128i_i64[1] = 1;
        v135 = _mm_loadu_si128(&v207);
        v44 = &v208;
        v211.m128i_i64[0] = (__int64)&v208;
        v189 = v133;
        v190 = v134;
        v191 = v135;
        if ( v39 != &v204 )
        {
          v192 = v200[0];
          v193 = v40;
          v194 = v41;
LABEL_172:
          v195.m128i_i64[1] = 1;
          v195.m128i_i64[0] = (__int64)&v192;
LABEL_35:
          v164 = v193.m128i_i64[0];
          if ( v189.m128i_i64[0] == v193.m128i_i64[0] )
            goto LABEL_12;
          while ( 1 )
          {
            v175 = _mm_loadu_si128(&v189);
            if ( (unsigned __int8)sub_21B9810(v163, 3014) && v175.m128i_i64[1] == 3 )
            {
              if ( *(_WORD *)v175.m128i_i64[0] == 27745 && *(_BYTE *)(v175.m128i_i64[0] + 2) == 108 )
              {
                v122 = (_QWORD **)v184;
                if ( v184 )
                {
                  do
                  {
                    sub_9ED9D0((__int64)v12, v122[3]);
                    v123 = (_QWORD **)v122[2];
                    operator delete(v122);
                    v122 = v123;
                  }
                  while ( v123 );
                }
LABEL_141:
                v184 = nullptr;
                v185 = (int *)(v12 + 8);
                v186 = (int *)(v12 + 8);
                v187 = 0;
                goto LABEL_41;
              }
            }
            else if ( v175.m128i_i64[1] == 6
                   && *(_DWORD *)v175.m128i_i64[0] == 1769234798
                   && *(_WORD *)(v175.m128i_i64[0] + 4) == 25974 )
            {
              (*(void (__fastcall **)(void ***, _QWORD, _QWORD))(***(_QWORD ***)(a1 + 16) + 664LL))(
                &v196,
                **(_QWORD **)(a1 + 16),
                *(_QWORD *)(a1 + 48));
              if ( (v199.m128i_i8[8] & 1) == 0 )
              {
                v57 = v196;
                v58 = &v196[4 * v197.m128i_u32[0]];
                if ( v196 != v58 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      *(_QWORD *)v200 = v20 + 2;
                      sub_10D8CD0(v20, *v57, (__int64)v57[1] + (_QWORD)*v57);
                      v59 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 16LL))(
                                      *(_QWORD *)(a1 + 48),
                                      *(_QWORD *)v200,
                                      *(_QWORD *)&v200[8]);
                      v179 = v59;
                      v60 = 0;
                      if ( v59 )
                        v60 = strlen((const char *)v59);
                      n = v60;
                      sub_10E74B0((__int64)v12, (__int64 *)&v179);
                      if ( *(__int64 **)v200 == v20 + 2 )
                        break;
                      operator delete(*(void **)v200);
                      v57 += 4;
                      if ( v58 == v57 )
                        goto LABEL_127;
                    }
                    v57 += 4;
                  }
                  while ( v58 != v57 );
                }
LABEL_127:
                sub_10DFE60(&v196);
                goto LABEL_41;
              }
              sub_FC70B0((__int64)v20, *(_QWORD *)v170[1], 0, 479);
              v79 = sub_22B5820(*((unsigned int *)v170 + 12));
              v80 = *(unsigned __int8 **)v200;
              v81 = (_BYTE *)v79;
              v83 = v82;
              if ( !*(_QWORD *)v200 )
              {
                v131 = *(_QWORD *)&v200[8];
                v132 = *(_DWORD *)(*(_QWORD *)&v200[8] + 14976LL);
                if ( v132 )
                {
                  v138 = (unsigned int)(v132 - 1);
                  *(_DWORD *)(*(_QWORD *)&v200[8] + 14976LL) = v138;
                  v80 = *(unsigned __int8 **)(v131 + 8 * v138 + 14848);
                  v139 = *((unsigned int *)v80 + 134);
                  *v80 = 0;
                  v140 = *((_QWORD *)v80 + 66);
                  *((_DWORD *)v80 + 106) = 0;
                  v141 = v140 + (v139 << 6);
                  if ( v140 != v141 )
                  {
                    v169 = v20;
                    v142 = v83;
                    v143 = v80;
                    v144 = v140;
                    do
                    {
                      while ( 1 )
                      {
                        v141 -= 64;
                        v145 = *(void **)(v141 + 24);
                        if ( v145 == (void *)(v141 + 40) )
                          break;
                        operator delete(v145);
                        if ( v144 == v141 )
                          goto LABEL_182;
                      }
                    }
                    while ( v144 != v141 );
LABEL_182:
                    v80 = v143;
                    v83 = v142;
                    v20 = v169;
                  }
                  *((_DWORD *)v80 + 134) = 0;
                }
                else
                {
                  v80 = (unsigned __int8 *)operator new(0x3A0u);
                  *v80 = 0;
                  *((_QWORD *)v80 + 12) = v80 + 112;
                  *((_QWORD *)v80 + 16) = v80 + 144;
                  *((_QWORD *)v80 + 20) = v80 + 176;
                  *((_QWORD *)v80 + 24) = v80 + 208;
                  *((_QWORD *)v80 + 28) = v80 + 240;
                  *((_QWORD *)v80 + 32) = v80 + 272;
                  *((_QWORD *)v80 + 36) = v80 + 304;
                  *((_QWORD *)v80 + 40) = v80 + 336;
                  *((_QWORD *)v80 + 44) = v80 + 368;
                  *((_QWORD *)v80 + 48) = v80 + 400;
                  *((_QWORD *)v80 + 52) = v80 + 432;
                  *((_QWORD *)v80 + 13) = 0;
                  v80[112] = 0;
                  *((_QWORD *)v80 + 17) = 0;
                  v80[144] = 0;
                  *((_QWORD *)v80 + 21) = 0;
                  v80[176] = 0;
                  *((_QWORD *)v80 + 25) = 0;
                  v80[208] = 0;
                  *((_QWORD *)v80 + 29) = 0;
                  v80[240] = 0;
                  *((_QWORD *)v80 + 33) = 0;
                  v80[272] = 0;
                  *((_QWORD *)v80 + 37) = 0;
                  v80[304] = 0;
                  *((_QWORD *)v80 + 41) = 0;
                  v80[336] = 0;
                  *((_QWORD *)v80 + 45) = 0;
                  v80[368] = 0;
                  *((_QWORD *)v80 + 49) = 0;
                  v80[400] = 0;
                  *((_QWORD *)v80 + 53) = 0x800000000LL;
                  *((_QWORD *)v80 + 66) = v80 + 544;
                  *((_QWORD *)v80 + 67) = 0x600000000LL;
                }
                *(_QWORD *)v200 = v80;
              }
              v80[*v80 + 1] = 0;
              v179 = v181;
              sub_10D8DB0(&v179, v81, (__int64)&v81[v83]);
              v84 = *(_QWORD *)v200;
              v85 = (unsigned __int8)**(_BYTE **)v200;
              **(_BYTE **)v200 = v85 + 1;
              v86 = (unsigned __int8)v85;
              v87 = 32 * (v85 + 3);
              v88 = (void **)(v84 + v87);
              v89 = *(_BYTE **)(v84 + v87);
              if ( v179 == v181 )
              {
                v124 = n;
                if ( n )
                {
                  if ( n == 1 )
                    *v89 = v181[0];
                  else
                    memcpy(v89, v181, n);
                  v124 = n;
                  v89 = *v88;
                }
                v88[1] = (void *)v124;
                v89[v124] = 0;
                v89 = v179;
              }
              else
              {
                if ( v89 == (_BYTE *)(v84 + v87 + 16) )
                {
                  *v88 = v179;
                  v88[1] = (void *)n;
                  v88[2] = (void *)v181[0];
                }
                else
                {
                  v90 = *(_QWORD *)(v84 + 32 * v86 + 112);
                  *v88 = v179;
                  v88[1] = (void *)n;
                  v88[2] = (void *)v181[0];
                  if ( v89 )
                  {
                    v179 = v89;
                    v181[0] = v90;
                    goto LABEL_92;
                  }
                }
                v179 = v181;
                v89 = v181;
              }
LABEL_92:
              n = 0;
              *v89 = 0;
              if ( v179 != v181 )
                operator delete(v179);
              if ( (v199.m128i_i8[8] & 1) != 0 )
              {
                v91 = v196;
                v196 = nullptr;
                v174 = v91;
              }
              else
              {
                v174 = nullptr;
              }
              sub_2221210(&v176, &v174);
              v92 = *(unsigned __int8 **)v200;
              v93 = v176;
              v94 = v177;
              if ( !*(_QWORD *)v200 )
              {
                v127 = *(_QWORD *)&v200[8];
                v128 = *(_DWORD *)(*(_QWORD *)&v200[8] + 14976LL);
                if ( v128 )
                {
                  v146 = (unsigned int)(v128 - 1);
                  *(_DWORD *)(*(_QWORD *)&v200[8] + 14976LL) = v146;
                  v92 = *(unsigned __int8 **)(v127 + 8 * v146 + 14848);
                  v147 = *((unsigned int *)v92 + 134);
                  *v92 = 0;
                  v148 = *((_QWORD *)v92 + 66);
                  *((_DWORD *)v92 + 106) = 0;
                  v149 = v148 + (v147 << 6);
                  if ( v148 != v149 )
                  {
                    v150 = v148;
                    v173 = v12;
                    v151 = v94;
                    do
                    {
                      while ( 1 )
                      {
                        v149 -= 64;
                        v152 = *(void **)(v149 + 24);
                        if ( v152 == (void *)(v149 + 40) )
                          break;
                        operator delete(v152);
                        if ( v150 == v149 )
                          goto LABEL_190;
                      }
                    }
                    while ( v150 != v149 );
LABEL_190:
                    v94 = v151;
                    v12 = v173;
                  }
                  *((_DWORD *)v92 + 134) = 0;
                }
                else
                {
                  v172 = v177;
                  v168 = v176;
                  v92 = (unsigned __int8 *)operator new(0x3A0u);
                  *v92 = 0;
                  *((_QWORD *)v92 + 12) = v92 + 112;
                  *((_QWORD *)v92 + 16) = v92 + 144;
                  *((_QWORD *)v92 + 20) = v92 + 176;
                  *((_QWORD *)v92 + 24) = v92 + 208;
                  *((_QWORD *)v92 + 28) = v92 + 240;
                  *((_QWORD *)v92 + 32) = v92 + 272;
                  *((_QWORD *)v92 + 36) = v92 + 304;
                  *((_QWORD *)v92 + 40) = v92 + 336;
                  *((_QWORD *)v92 + 44) = v92 + 368;
                  *((_QWORD *)v92 + 48) = v92 + 400;
                  *((_QWORD *)v92 + 52) = v92 + 432;
                  *((_QWORD *)v92 + 13) = 0;
                  v92[112] = 0;
                  *((_QWORD *)v92 + 17) = 0;
                  v92[144] = 0;
                  *((_QWORD *)v92 + 21) = 0;
                  v92[176] = 0;
                  *((_QWORD *)v92 + 25) = 0;
                  v92[208] = 0;
                  *((_QWORD *)v92 + 29) = 0;
                  v92[240] = 0;
                  *((_QWORD *)v92 + 33) = 0;
                  v92[272] = 0;
                  *((_QWORD *)v92 + 37) = 0;
                  v92[304] = 0;
                  *((_QWORD *)v92 + 41) = 0;
                  v92[336] = 0;
                  *((_QWORD *)v92 + 45) = 0;
                  v92[368] = 0;
                  *((_QWORD *)v92 + 49) = 0;
                  v92[400] = 0;
                  *((_QWORD *)v92 + 53) = 0x800000000LL;
                  v93 = v168;
                  *((_QWORD *)v92 + 66) = v92 + 544;
                  v94 = v172;
                  *((_QWORD *)v92 + 67) = 0x600000000LL;
                }
                *(_QWORD *)v200 = v92;
              }
              v92[*v92 + 1] = 0;
              v179 = v181;
              sub_10D8DB0(&v179, v93, (__int64)&v93[v94]);
              v95 = *(_QWORD *)v200;
              v96 = (unsigned __int8)**(_BYTE **)v200;
              **(_BYTE **)v200 = v96 + 1;
              v97 = (unsigned __int8)v96;
              v98 = 32 * (v96 + 3);
              v99 = (void **)(v95 + v98);
              v100 = *(_BYTE **)(v95 + v98);
              if ( v179 == v181 )
              {
                v125 = n;
                if ( n )
                {
                  if ( n == 1 )
                    *v100 = v181[0];
                  else
                    memcpy(v100, v181, n);
                  v125 = n;
                  v100 = *v99;
                }
                v99[1] = (void *)v125;
                v100[v125] = 0;
                v100 = v179;
              }
              else
              {
                if ( v100 == (_BYTE *)(v95 + v98 + 16) )
                {
                  *v99 = v179;
                  v99[1] = (void *)n;
                  v99[2] = (void *)v181[0];
                }
                else
                {
                  v101 = *(_QWORD *)(v95 + 32 * v97 + 112);
                  *v99 = v179;
                  v99[1] = (void *)n;
                  v99[2] = (void *)v181[0];
                  if ( v100 )
                  {
                    v179 = v100;
                    v181[0] = v101;
                    goto LABEL_101;
                  }
                }
                v179 = v181;
                v100 = v181;
              }
LABEL_101:
              n = 0;
              *v100 = 0;
              if ( v179 != v181 )
                operator delete(v179);
              v102 = *(unsigned __int8 **)v200;
              if ( !*(_QWORD *)v200 )
              {
                v129 = *(_QWORD *)&v200[8];
                v130 = *(_DWORD *)(*(_QWORD *)&v200[8] + 14976LL);
                if ( v130 )
                {
                  v153 = (unsigned int)(v130 - 1);
                  *(_DWORD *)(*(_QWORD *)&v200[8] + 14976LL) = v153;
                  v102 = *(unsigned __int8 **)(v129 + 8 * v153 + 14848);
                  v154 = *((unsigned int *)v102 + 134);
                  *v102 = 0;
                  v155 = *((_QWORD *)v102 + 66);
                  *((_DWORD *)v102 + 106) = 0;
                  v156 = v155 + (v154 << 6);
                  if ( v155 != v156 )
                  {
                    v157 = v155;
                    do
                    {
                      while ( 1 )
                      {
                        v156 -= 64;
                        v158 = *(void **)(v156 + 24);
                        if ( v158 == (void *)(v156 + 40) )
                          break;
                        operator delete(v158);
                        if ( v157 == v156 )
                          goto LABEL_198;
                      }
                    }
                    while ( v157 != v156 );
                  }
LABEL_198:
                  *((_DWORD *)v102 + 134) = 0;
                }
                else
                {
                  v102 = (unsigned __int8 *)operator new(0x3A0u);
                  *v102 = 0;
                  *((_QWORD *)v102 + 12) = v102 + 112;
                  *((_QWORD *)v102 + 16) = v102 + 144;
                  *((_QWORD *)v102 + 20) = v102 + 176;
                  *((_QWORD *)v102 + 24) = v102 + 208;
                  *((_QWORD *)v102 + 28) = v102 + 240;
                  *((_QWORD *)v102 + 32) = v102 + 272;
                  *((_QWORD *)v102 + 36) = v102 + 304;
                  *((_QWORD *)v102 + 40) = v102 + 336;
                  *((_QWORD *)v102 + 44) = v102 + 368;
                  *((_QWORD *)v102 + 48) = v102 + 400;
                  *((_QWORD *)v102 + 52) = v102 + 432;
                  *((_QWORD *)v102 + 13) = 0;
                  v102[112] = 0;
                  *((_QWORD *)v102 + 17) = 0;
                  v102[144] = 0;
                  *((_QWORD *)v102 + 21) = 0;
                  v102[176] = 0;
                  *((_QWORD *)v102 + 25) = 0;
                  v102[208] = 0;
                  *((_QWORD *)v102 + 29) = 0;
                  v102[240] = 0;
                  *((_QWORD *)v102 + 33) = 0;
                  v102[272] = 0;
                  *((_QWORD *)v102 + 37) = 0;
                  v102[304] = 0;
                  *((_QWORD *)v102 + 41) = 0;
                  v102[336] = 0;
                  *((_QWORD *)v102 + 45) = 0;
                  v102[368] = 0;
                  *((_QWORD *)v102 + 49) = 0;
                  v102[400] = 0;
                  *((_QWORD *)v102 + 53) = 0x800000000LL;
                  *((_QWORD *)v102 + 66) = v102 + 544;
                  *((_QWORD *)v102 + 67) = 0x600000000LL;
                }
                *(_QWORD *)v200 = v102;
              }
              v102[*v102 + 1] = 1;
              v103 = *(_QWORD *)v200;
              v104 = (unsigned __int8)**(_BYTE **)v200;
              **(_BYTE **)v200 = v104 + 1;
              v105 = (__int64 *)v176;
              *(_QWORD *)(v103 + 8 * v104 + 16) = "--offload-arch";
              if ( v105 != &v178 )
                operator delete(v105);
              if ( v174 )
                (*((void (__fastcall **)(void **))*v174 + 1))(v174);
              if ( (_BYTE)v203 )
              {
                sub_FC7790(*(__int64 *)&v200[16], v20, SHIBYTE(v203));
                *(_QWORD *)&v200[16] = 0;
                v203 = 0;
              }
              if ( v201[1] != v20 + 6 )
                operator delete(v201[1]);
              v106 = *(void ***)v200;
              if ( *(_QWORD *)v200 )
              {
                v107 = *(_QWORD *)&v200[8];
                if ( *(_QWORD *)&v200[8] )
                {
                  if ( *(_QWORD *)v200 >= *(_QWORD *)&v200[8]
                    && *(_QWORD *)v200 <= (unsigned __int64)(*(_QWORD *)&v200[8] + 14848LL) )
                  {
                    v126 = *(unsigned int *)(*(_QWORD *)&v200[8] + 14976LL);
                    *(_DWORD *)(*(_QWORD *)&v200[8] + 14976LL) = v126 + 1;
                    *(_QWORD *)(v107 + 8 * v126 + 14848) = v106;
                    sub_10DFE60(&v196);
                    goto LABEL_41;
                  }
                  v108 = *(void ***)(*(_QWORD *)v200 + 528LL);
                  v109 = &v108[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v200 + 536LL)];
                  if ( v108 != v109 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v109 -= 8;
                        v110 = (void **)v109[3];
                        if ( v110 == v109 + 5 )
                          break;
                        operator delete(v110);
                        if ( v108 == v109 )
                          goto LABEL_118;
                      }
                    }
                    while ( v108 != v109 );
LABEL_118:
                    v109 = (void **)v106[66];
                  }
                  if ( v109 != v106 + 68 )
                    free(v109);
                  v111 = (void **)v106[52];
                  v112 = v106 + 52;
                  if ( v111 != v106 + 54 )
                    free(v111);
                  v113 = v106 + 12;
                  do
                  {
                    while ( 1 )
                    {
                      v112 -= 4;
                      if ( *v112 == v112 + 2 )
                        break;
                      operator delete(*v112);
                      if ( v112 == v113 )
                        goto LABEL_126;
                    }
                  }
                  while ( v112 != v113 );
LABEL_126:
                  operator delete(v106, 0x3A0u);
                }
              }
              goto LABEL_127;
            }
            v50.m128i_i64[0] = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 80LL))(
                                 a1,
                                 v175.m128i_i64[0],
                                 v175.m128i_i64[1]);
            v175 = v50;
            if ( v50.m128i_i64[1] )
            {
              if ( (unsigned __int8)sub_21B9810(v163, 3079) )
              {
                v74 = sub_9F5E30((__int64)v12, (__int64)&v175);
                v76 = v75;
                if ( v75 )
                {
                  if ( v74 || (char *)v75 == v12 + 8 )
                  {
                    v77 = 1;
                  }
                  else
                  {
                    v136 = *(const void **)(v75 + 32);
                    v137 = *(_QWORD *)(v75 + 40);
                    *(__m128i *)v200 = v175;
                    v77 = (unsigned int)sub_9C4B00((__int64)v20, v136, v137) >> 31;
                  }
                  v78 = (__m128i *)operator new(0x30u);
                  v78[2] = v175;
                  std::_Rb_tree_insert_and_rebalance(v77, v78, v76, v12 + 8);
                  ++v187;
                }
                goto LABEL_41;
              }
              sub_21B9810(v163, 3014);
              v114 = sub_10E7580((__int64)v12, (__int64)&v175);
              if ( v185 != (int *)v114 || v12 + 8 != v115 )
              {
                v116 = v12 + 8;
                if ( v115 != (char *)v114 )
                {
                  v167 = v12;
                  v117 = v114;
                  v118 = v115;
                  v119 = v116;
                  do
                  {
                    v120 = std::_Rb_tree_increment(v117);
                    v121 = (void *)std::_Rb_tree_rebalance_for_erase(v117, v119);
                    v117 = v120;
                    operator delete(v121);
                    --v187;
                  }
                  while ( v118 != (char *)v120 );
                  v12 = v167;
                }
                goto LABEL_41;
              }
              v159 = (_QWORD **)v184;
              if ( v184 )
              {
                do
                {
                  sub_9ED9D0((__int64)v12, v159[3]);
                  v160 = (_QWORD **)v159[2];
                  operator delete(v159);
                  v159 = v160;
                }
                while ( v160 );
              }
              goto LABEL_141;
            }
            v165 = 1;
LABEL_41:
            v51 = v191.m128i_i64[1];
            v52 = sub_2246AB0(&v190, v191.m128i_i64[0], v191.m128i_i64[1], 0);
            if ( v52 == -1 )
            {
              v52 = v190.m128i_u64[1];
              v55 = v190.m128i_i64[0];
              v54 = 0;
              v56 = 0;
            }
            else
            {
              v53 = v52 + v51;
              if ( v53 > v190.m128i_i64[1] )
              {
                v53 = v190.m128i_u64[1];
                v54 = 0;
              }
              else
              {
                v54 = v190.m128i_i64[1] - v53;
              }
              v55 = v190.m128i_i64[0];
              v56 = v190.m128i_i64[0] + v53;
              if ( v52 > v190.m128i_i64[1] )
                v52 = v190.m128i_u64[1];
            }
            v189.m128i_i64[0] = v55;
            v189.m128i_i64[1] = v52;
            v190.m128i_i64[0] = v56;
            v190.m128i_i64[1] = v54;
            if ( v55 == v164 )
              goto LABEL_12;
          }
        }
      }
      else
      {
        v43 = _mm_loadu_si128(&v205);
        v44 = (char *)v211.m128i_i64[0];
        v188 = (char)v196;
        v45 = _mm_loadu_si128(&v206);
        v46 = _mm_loadu_si128(&v207);
        v189 = v43;
        v190 = v45;
        v191 = v46;
        if ( v39 != &v204 )
          goto LABEL_34;
      }
      v191.m128i_i64[1] = 1;
      v191.m128i_i64[0] = (__int64)&v188;
LABEL_34:
      v47 = _mm_load_si128(&v209);
      v192 = v200[0];
      v48 = _mm_load_si128(&v211);
      v193 = v47;
      v49 = _mm_load_si128(&v210);
      v195 = v48;
      v194 = v49;
      if ( v44 != &v208 )
        goto LABEL_35;
      goto LABEL_172;
    }
LABEL_12:
    i = v166 + 1;
    if ( v171 == v166 + 1 )
      goto LABEL_61;
    v22 = v166 + 2;
    if ( !v166[1] )
      break;
LABEL_14:
    ;
  }
  for ( i = v166 + 2; v171 != v22; i = v22 )
  {
    if ( *v22++ )
      goto LABEL_14;
  }
LABEL_61:
  (*(void (__fastcall **)(__int64 *, __int64, char *))(*(_QWORD *)a1 + 88LL))(v20, a1, v12);
  v61 = (unsigned __int8)v201[1];
  if ( LOBYTE(v201[1]) )
  {
    sub_FC70B0((__int64)&v204, ***(_QWORD ***)(a1 + 8), 0, 325);
    sub_AEC220(&v204, *(_BYTE **)v200, *(signed __int64 *)&v200[8]);
    sub_AEC220(&v204, *(_BYTE **)&v200[16], (signed __int64)v201[0]);
    sub_AEA040((__int64)&v204);
    v165 = v61;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 521LL) = 1;
  }
  else
  {
    v62 = (__int64)v185;
    v63 = v12 + 8;
    for ( j = *(unsigned int *)(a1 + 80); (_BYTE *)v62 != v63; v62 = std::_Rb_tree_increment(v162) )
    {
      while ( 1 )
      {
        v65 = *(_QWORD *)(v62 + 32);
        if ( j + 1 > (unsigned __int64)*(unsigned int *)(a1 + 84) )
          break;
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * j) = v65;
        j = (unsigned int)(*(_DWORD *)(a1 + 80) + 1);
        *(_DWORD *)(a1 + 80) = j;
        v62 = std::_Rb_tree_increment(v62);
        if ( (_BYTE *)v62 == v63 )
          goto LABEL_67;
      }
      v162 = v62;
      sub_2237220(a1 + 72, a1 + 88, j + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * *(unsigned int *)(a1 + 80)) = v65;
      j = (unsigned int)(*(_DWORD *)(a1 + 80) + 1);
      *(_DWORD *)(a1 + 80) = j;
    }
LABEL_67:
    if ( !(_DWORD)j )
    {
      v66 = **(_QWORD **)(a1 + 16);
      if ( (unsigned int)(*(_DWORD *)(v66 + 48) - 49) > 2 )
      {
        v67 = *(_DWORD *)(a1 + 172);
      }
      else
      {
        v67 = 81;
        if ( *(_DWORD *)(v66 + 56) != 10 )
          v67 = 82;
      }
      v68 = sub_FF7B80(v67);
      v69 = *(unsigned int *)(a1 + 80);
      v70 = v68;
      if ( v69 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 84) )
      {
        sub_2237220(a1 + 72, a1 + 88, v69 + 1, 8);
        v69 = *(unsigned int *)(a1 + 80);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v69) = v70;
      ++*(_DWORD *)(a1 + 80);
    }
  }
  v71 = (_QWORD **)v184;
  if ( v184 )
  {
    do
    {
      sub_9ED9D0((__int64)v12, v71[3]);
      v72 = (_QWORD **)v71[2];
      operator delete(v71);
      v71 = v72;
    }
    while ( v72 );
  }
  return v165;
}
