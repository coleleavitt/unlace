__int64 __fastcall sub_10C3A50(__int64 a1)
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
  unsigned int v14; // ebp
  _QWORD **v15; // rax
  _QWORD *v16; // r15
  void *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // r15
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
  __int64 v76; // rax
  unsigned __int8 *v77; // rbx
  _BYTE *v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // r12
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  void **v85; // rbx
  _BYTE *v86; // rdi
  __int64 v87; // rax
  void **v88; // rax
  unsigned __int8 *v89; // rbp
  _BYTE *v90; // rsi
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  void **v96; // rbp
  _BYTE *v97; // rdi
  __int64 v98; // rax
  unsigned __int8 *v99; // rbp
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 *v102; // rdi
  void **v103; // rbx
  __int64 v104; // rax
  void **v105; // r12
  void **v106; // rbp
  void **v107; // rdi
  void **v108; // rdi
  void **v109; // r12
  void **v110; // rbp
  __int64 v111; // rax
  char *v112; // rdx
  char *v113; // r12
  __int64 v114; // rbx
  void *v115; // rax
  _QWORD **v116; // rbp
  _QWORD **v117; // rbx
  size_t v118; // rdx
  size_t v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rcx
  int v122; // eax
  __int64 v123; // rdx
  int v124; // eax
  __int64 v125; // rdx
  int v126; // eax
  __m128i v127; // xmm7
  __m128i v128; // xmm4
  __m128i v129; // xmm5
  const void *v130; // rsi
  size_t v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rbp
  __int64 v134; // rax
  __int64 v135; // rbp
  __int64 v136; // r15
  unsigned __int8 *v137; // r12
  __int64 v138; // rbx
  void *v139; // rdi
  __int64 v140; // rax
  __int64 v141; // r12
  __int64 v142; // rax
  __int64 v143; // r12
  __int64 v144; // rbx
  __int64 v145; // r13
  void *v146; // rdi
  __int64 v147; // rax
  __int64 v148; // r12
  __int64 v149; // rdx
  __int64 v150; // r12
  __int64 v151; // rbx
  void *v152; // rdi
  _QWORD **v153; // rbp
  _QWORD **v154; // rbx
  _QWORD *v155; // rax
  __int64 v156; // [rsp+8h] [rbp-2B0h]
  __int64 v157; // [rsp+10h] [rbp-2A8h]
  unsigned __int8 v158; // [rsp+37h] [rbp-281h]
  _QWORD *v159; // [rsp+38h] [rbp-280h]
  _BYTE *v160; // [rsp+40h] [rbp-278h]
  _QWORD *v161; // [rsp+40h] [rbp-278h]
  _QWORD *v162; // [rsp+50h] [rbp-268h]
  _QWORD *v163; // [rsp+58h] [rbp-260h]
  __int64 v164; // [rsp+60h] [rbp-258h]
  char *v165; // [rsp+68h] [rbp-250h]
  void **v166; // [rsp+78h] [rbp-240h] BYREF
  __m128i v167; // [rsp+80h] [rbp-238h] BYREF
  void *v168; // [rsp+90h] [rbp-228h] BYREF
  __int64 v169; // [rsp+98h] [rbp-220h]
  __int64 v170; // [rsp+A0h] [rbp-218h] BYREF
  void *v171; // [rsp+B0h] [rbp-208h] BYREF
  size_t n; // [rsp+B8h] [rbp-200h]
  _QWORD v173[2]; // [rsp+C0h] [rbp-1F8h] BYREF
  char v174; // [rsp+D0h] [rbp-1E8h] BYREF
  int v175; // [rsp+D8h] [rbp-1E0h] BYREF
  void *v176; // [rsp+E0h] [rbp-1D8h]
  int *v177; // [rsp+E8h] [rbp-1D0h]
  int *v178; // [rsp+F0h] [rbp-1C8h]
  __int64 v179; // [rsp+F8h] [rbp-1C0h]
  char v180; // [rsp+100h] [rbp-1B8h] BYREF
  __m128i v181; // [rsp+108h] [rbp-1B0h] BYREF
  __m128i v182; // [rsp+118h] [rbp-1A0h] BYREF
  __m128i v183; // [rsp+128h] [rbp-190h]
  char v184; // [rsp+140h] [rbp-178h] BYREF
  __m128i v185; // [rsp+148h] [rbp-170h]
  __m128i v186; // [rsp+158h] [rbp-160h]
  __m128i v187; // [rsp+168h] [rbp-150h]
  void **v188; // [rsp+180h] [rbp-138h] BYREF
  __m128i v189; // [rsp+188h] [rbp-130h] BYREF
  __m128i v190; // [rsp+198h] [rbp-120h] BYREF
  __m128i v191; // [rsp+1A8h] [rbp-110h] BYREF
  _BYTE v192[24]; // [rsp+1C0h] [rbp-F8h] BYREF
  void *v193[2]; // [rsp+1D8h] [rbp-E0h] BYREF
  __m128i v194; // [rsp+1E8h] [rbp-D0h] BYREF
  __int16 v195; // [rsp+200h] [rbp-B8h]
  unsigned __int8 *v196; // [rsp+210h] [rbp-A8h] BYREF
  __m128i v197; // [rsp+218h] [rbp-A0h] BYREF
  __m128i v198; // [rsp+228h] [rbp-90h] BYREF
  __m128i v199; // [rsp+238h] [rbp-80h] BYREF
  char v200; // [rsp+248h] [rbp-70h] BYREF
  __m128i v201; // [rsp+250h] [rbp-68h] BYREF
  __m128i v202; // [rsp+260h] [rbp-58h] BYREF
  __m128i v203; // [rsp+270h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 64) == 2;
  v3 = *(_QWORD *)(a1 + 8) + 24LL;
  if ( v2 )
    LODWORD(v196) = 2;
  else
    LODWORD(v196) = 8;
  v4 = *(_QWORD *)(sub_10BCAF0(v3, (int *)&v196) + 40);
  v5 = *(unsigned int *)(a1 + 24);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
  {
    sub_22134E0(a1 + 16, a1 + 32, v5 + 1, 8);
    v5 = *(unsigned int *)(a1 + 24);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5) = v4;
  v6 = *(_QWORD *)(a1 + 8);
  ++*(_DWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 68) = *(_DWORD *)(*(_QWORD *)v6 + 28LL) == 1;
  v8 = sub_10B8FF0(v7, 0x159u);
  v9 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 70) = v8 != 0;
  v10 = sub_10B8FF0(v9, 0xCF8u);
  v11 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 71) = v10 != 0;
  if ( sub_10BB400(v11, 0xC12u) && sub_10BAF60(*(_QWORD *)(a1 + 48), 0xC07u, 0xBC6u) )
  {
    sub_FA3370((__int64)&v196, ***(_QWORD ***)(a1 + 8), 0, 52);
    sub_10B4AF0(&v196, (__int64)"--offload-arch");
    sub_10B4AF0(&v196, (__int64)"--offload");
    sub_AC6300((__int64)&v196);
  }
  v12 = &v174;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(_DWORD *)(a1 + 64);
  v175 = 0;
  v177 = &v175;
  v178 = &v175;
  v15 = *(_QWORD ***)(a1 + 16);
  v176 = nullptr;
  v179 = 0;
  v16 = *v15;
  v162 = *v15;
  v17 = (void *)j__strlen(&byte_22CD811);
  v18 = sub_10B20E0(v13, v16, (void *)&byte_22CD811, v17, v14);
  v19 = *(_QWORD **)(v18 + 8);
  v159 = v19;
  v163 = &v19[*(unsigned int *)(v18 + 16)];
  if ( v19 == v163 )
  {
LABEL_212:
    v158 = 0;
    v20 = v192;
    goto LABEL_61;
  }
  if ( !*v19 )
  {
    v155 = v19 + 1;
    do
    {
      v159 = v155;
      if ( v163 == v155 )
        goto LABEL_212;
      ++v155;
    }
    while ( !*(v155 - 1) );
  }
  v158 = 0;
  v20 = v192;
  for ( i = v159; ; v159 = i )
  {
    v156 = *i;
    if ( (unsigned __int8)sub_2195AD0(*i, 3079) || (unsigned __int8)sub_2195AD0(v156, 3014) )
    {
      v23 = *(_QWORD *)(v156 + 16);
      if ( !v23 )
        v23 = v156;
      *(_BYTE *)(v23 + 44) |= 1u;
      v24 = **(_QWORD **)(v156 + 48);
      v25 = 0;
      if ( v24 )
        v25 = strlen(**(const char ***)(v156 + 48));
      v190.m128i_i64[1] = v25;
      v191.m128i_i64[0] = (__int64)",";
      v189 = 0u;
      v190.m128i_i64[0] = v24;
      v191.m128i_i64[1] = 1;
      v26 = sub_2222D70(&v190, ",", 1, 0);
      if ( v26 == -1 )
      {
        v26 = v190.m128i_u64[1];
        v29 = v190.m128i_i64[0];
        v28 = 0;
        v30 = 0;
      }
      else
      {
        v27 = v26 + 1;
        if ( v26 + 1 > v190.m128i_i64[1] )
        {
          v27 = v190.m128i_i64[1];
          v28 = 0;
        }
        else
        {
          v28 = v190.m128i_i64[1] - v27;
        }
        v29 = v190.m128i_i64[0];
        v30 = v190.m128i_i64[0] + v27;
        if ( v26 > v190.m128i_i64[1] )
          v26 = v190.m128i_u64[1];
      }
      v189.m128i_i64[1] = v26;
      v189.m128i_i64[0] = v29;
      v190.m128i_i64[0] = v30;
      v190.m128i_i64[1] = v28;
      *(_OWORD *)&v192[8] = 0u;
      v193[0] = nullptr;
      v193[1] = nullptr;
      v194.m128i_i64[0] = (__int64)",";
      v194.m128i_i64[1] = 1;
      v31 = (char *)sub_2222D70(v20 + 3, ",", 1, 0);
      if ( v31 == (char *)-1LL )
      {
        v34 = v193[0];
        v31 = (char *)v193[1];
        v33 = nullptr;
        v35 = nullptr;
      }
      else
      {
        v32 = v31 + 1;
        if ( v31 + 1 > v193[1] )
        {
          v32 = v193[1];
          v33 = nullptr;
        }
        else
        {
          v33 = (char *)((char *)v193[1] - (char *)v32);
        }
        v34 = v193[0];
        v35 = (char *)v193[0] + (unsigned __int64)v32;
        if ( v31 > v193[1] )
          v31 = (char *)v193[1];
      }
      *(_QWORD *)&v192[16] = v31;
      v36 = _mm_loadu_si128(&v189);
      *(_QWORD *)&v192[8] = v34;
      v37 = _mm_loadu_si128(&v190);
      v193[0] = v35;
      v38 = _mm_loadu_si128(&v191);
      v193[1] = v33;
      LOBYTE(v196) = (_BYTE)v188;
      v197 = v36;
      v198 = v37;
      v199 = v38;
      if ( (void ***)v191.m128i_i64[0] == &v188 )
      {
        v199.m128i_i64[1] = 1;
        v199.m128i_i64[0] = (__int64)&v196;
        v39 = &v196;
      }
      else
      {
        v39 = (unsigned __int8 **)v199.m128i_i64[0];
      }
      v40 = _mm_loadu_si128((const __m128i *)&v192[8]);
      v41 = _mm_loadu_si128((const __m128i *)v193);
      v42 = _mm_loadu_si128(&v194);
      v200 = v192[0];
      v201 = v40;
      v202 = v41;
      v203 = v42;
      if ( (_QWORD *)v194.m128i_i64[0] == v20 )
      {
        v180 = (char)v188;
        v127 = _mm_loadu_si128(&v197);
        v128 = _mm_loadu_si128(&v198);
        v203.m128i_i64[1] = 1;
        v129 = _mm_loadu_si128(&v199);
        v44 = &v200;
        v203.m128i_i64[0] = (__int64)&v200;
        v181 = v127;
        v182 = v128;
        v183 = v129;
        if ( v39 != &v196 )
        {
          v184 = v192[0];
          v185 = v40;
          v186 = v41;
LABEL_172:
          v187.m128i_i64[1] = 1;
          v187.m128i_i64[0] = (__int64)&v184;
LABEL_35:
          v157 = v185.m128i_i64[0];
          if ( v181.m128i_i64[0] == v185.m128i_i64[0] )
            goto LABEL_12;
          while ( 1 )
          {
            v167 = _mm_loadu_si128(&v181);
            if ( (unsigned __int8)sub_2195AD0(v156, 3014) && v167.m128i_i64[1] == 3 )
            {
              if ( *(_WORD *)v167.m128i_i64[0] == 27745 && *(_BYTE *)(v167.m128i_i64[0] + 2) == 108 )
              {
                v116 = (_QWORD **)v176;
                if ( v176 )
                {
                  do
                  {
                    sub_9C9C90((__int64)v12, v116[3]);
                    v117 = (_QWORD **)v116[2];
                    operator delete(v116);
                    v116 = v117;
                  }
                  while ( v117 );
                }
LABEL_141:
                v176 = nullptr;
                v177 = (int *)(v12 + 8);
                v178 = (int *)(v12 + 8);
                v179 = 0;
                goto LABEL_41;
              }
            }
            else if ( v167.m128i_i64[1] == 6
                   && *(_DWORD *)v167.m128i_i64[0] == 1769234798
                   && *(_WORD *)(v167.m128i_i64[0] + 4) == 25974 )
            {
              (*(void (__fastcall **)(void ***, _QWORD, _QWORD))(***(_QWORD ***)(a1 + 16) + 664LL))(
                &v188,
                **(_QWORD **)(a1 + 16),
                *(_QWORD *)(a1 + 48));
              if ( (v191.m128i_i8[8] & 1) == 0 )
              {
                v57 = v188;
                v58 = &v188[4 * v189.m128i_u32[0]];
                if ( v188 != v58 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      *(_QWORD *)v192 = v20 + 2;
                      sub_10B4F90(v20, *v57, (__int64)v57[1] + (_QWORD)*v57);
                      v59 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 16LL))(
                                      *(_QWORD *)(a1 + 48),
                                      *(_QWORD *)v192,
                                      *(_QWORD *)&v192[8]);
                      v171 = v59;
                      v60 = 0;
                      if ( v59 )
                        v60 = strlen((const char *)v59);
                      n = v60;
                      sub_10C3770((__int64)v12, (__int64 *)&v171);
                      if ( *(_QWORD **)v192 == v20 + 2 )
                        break;
                      operator delete(*(void **)v192);
                      v57 += 4;
                      if ( v58 == v57 )
                        goto LABEL_127;
                    }
                    v57 += 4;
                  }
                  while ( v58 != v57 );
                }
LABEL_127:
                sub_10BC120(&v188);
                goto LABEL_41;
              }
              sub_FA3370((__int64)v20, *(_QWORD *)v162[1], 0, 479);
              v76 = sub_2291AE0(*((unsigned int *)v162 + 12));
              v77 = *(unsigned __int8 **)v192;
              v78 = (_BYTE *)v76;
              v80 = v79;
              if ( !*(_QWORD *)v192 )
              {
                v125 = *(_QWORD *)&v192[8];
                v126 = *(_DWORD *)(*(_QWORD *)&v192[8] + 14976LL);
                if ( v126 )
                {
                  v132 = (unsigned int)(v126 - 1);
                  *(_DWORD *)(*(_QWORD *)&v192[8] + 14976LL) = v132;
                  v77 = *(unsigned __int8 **)(v125 + 8 * v132 + 14848);
                  v133 = *((unsigned int *)v77 + 134);
                  *v77 = 0;
                  v134 = *((_QWORD *)v77 + 66);
                  *((_DWORD *)v77 + 106) = 0;
                  v135 = v134 + (v133 << 6);
                  if ( v134 != v135 )
                  {
                    v161 = v20;
                    v136 = v80;
                    v137 = v77;
                    v138 = v134;
                    do
                    {
                      while ( 1 )
                      {
                        v135 -= 64;
                        v139 = *(void **)(v135 + 24);
                        if ( v139 == (void *)(v135 + 40) )
                          break;
                        operator delete(v139);
                        if ( v138 == v135 )
                          goto LABEL_181;
                      }
                    }
                    while ( v138 != v135 );
LABEL_181:
                    v77 = v137;
                    v80 = v136;
                    v20 = v161;
                  }
                  *((_DWORD *)v77 + 134) = 0;
                }
                else
                {
                  v77 = (unsigned __int8 *)operator new(0x3A0u);
                  *v77 = 0;
                  *((_QWORD *)v77 + 12) = v77 + 112;
                  *((_QWORD *)v77 + 16) = v77 + 144;
                  *((_QWORD *)v77 + 20) = v77 + 176;
                  *((_QWORD *)v77 + 24) = v77 + 208;
                  *((_QWORD *)v77 + 28) = v77 + 240;
                  *((_QWORD *)v77 + 32) = v77 + 272;
                  *((_QWORD *)v77 + 36) = v77 + 304;
                  *((_QWORD *)v77 + 40) = v77 + 336;
                  *((_QWORD *)v77 + 44) = v77 + 368;
                  *((_QWORD *)v77 + 48) = v77 + 400;
                  *((_QWORD *)v77 + 52) = v77 + 432;
                  *((_QWORD *)v77 + 13) = 0;
                  v77[112] = 0;
                  *((_QWORD *)v77 + 17) = 0;
                  v77[144] = 0;
                  *((_QWORD *)v77 + 21) = 0;
                  v77[176] = 0;
                  *((_QWORD *)v77 + 25) = 0;
                  v77[208] = 0;
                  *((_QWORD *)v77 + 29) = 0;
                  v77[240] = 0;
                  *((_QWORD *)v77 + 33) = 0;
                  v77[272] = 0;
                  *((_QWORD *)v77 + 37) = 0;
                  v77[304] = 0;
                  *((_QWORD *)v77 + 41) = 0;
                  v77[336] = 0;
                  *((_QWORD *)v77 + 45) = 0;
                  v77[368] = 0;
                  *((_QWORD *)v77 + 49) = 0;
                  v77[400] = 0;
                  *((_QWORD *)v77 + 53) = 0x800000000LL;
                  *((_QWORD *)v77 + 66) = v77 + 544;
                  *((_QWORD *)v77 + 67) = 0x600000000LL;
                }
                *(_QWORD *)v192 = v77;
              }
              v77[*v77 + 1] = 0;
              v171 = v173;
              sub_10B5070(&v171, v78, (__int64)&v78[v80]);
              v81 = *(_QWORD *)v192;
              v82 = (unsigned __int8)**(_BYTE **)v192;
              **(_BYTE **)v192 = v82 + 1;
              v83 = (unsigned __int8)v82;
              v84 = 32 * (v82 + 3);
              v85 = (void **)(v81 + v84);
              v86 = *(_BYTE **)(v81 + v84);
              if ( v171 == v173 )
              {
                v118 = n;
                if ( n )
                {
                  if ( n == 1 )
                    *v86 = v173[0];
                  else
                    memcpy(v86, v173, n);
                  v118 = n;
                  v86 = *v85;
                }
                v85[1] = (void *)v118;
                v86[v118] = 0;
                v86 = v171;
              }
              else
              {
                if ( v86 == (_BYTE *)(v81 + v84 + 16) )
                {
                  *v85 = v171;
                  v85[1] = (void *)n;
                  v85[2] = (void *)v173[0];
                }
                else
                {
                  v87 = *(_QWORD *)(v81 + 32 * v83 + 112);
                  *v85 = v171;
                  v85[1] = (void *)n;
                  v85[2] = (void *)v173[0];
                  if ( v86 )
                  {
                    v171 = v86;
                    v173[0] = v87;
                    goto LABEL_92;
                  }
                }
                v171 = v173;
                v86 = v173;
              }
LABEL_92:
              n = 0;
              *v86 = 0;
              if ( v171 != v173 )
                operator delete(v171);
              if ( (v191.m128i_i8[8] & 1) != 0 )
              {
                v88 = v188;
                v188 = nullptr;
                v166 = v88;
              }
              else
              {
                v166 = nullptr;
              }
              sub_21FD4D0(&v168, &v166);
              v89 = *(unsigned __int8 **)v192;
              v90 = v168;
              v91 = v169;
              if ( !*(_QWORD *)v192 )
              {
                v121 = *(_QWORD *)&v192[8];
                v122 = *(_DWORD *)(*(_QWORD *)&v192[8] + 14976LL);
                if ( v122 )
                {
                  v140 = (unsigned int)(v122 - 1);
                  *(_DWORD *)(*(_QWORD *)&v192[8] + 14976LL) = v140;
                  v89 = *(unsigned __int8 **)(v121 + 8 * v140 + 14848);
                  v141 = *((unsigned int *)v89 + 134);
                  *v89 = 0;
                  v142 = *((_QWORD *)v89 + 66);
                  *((_DWORD *)v89 + 106) = 0;
                  v143 = v142 + (v141 << 6);
                  if ( v142 != v143 )
                  {
                    v144 = v142;
                    v165 = v12;
                    v145 = v91;
                    do
                    {
                      while ( 1 )
                      {
                        v143 -= 64;
                        v146 = *(void **)(v143 + 24);
                        if ( v146 == (void *)(v143 + 40) )
                          break;
                        operator delete(v146);
                        if ( v144 == v143 )
                          goto LABEL_189;
                      }
                    }
                    while ( v144 != v143 );
LABEL_189:
                    v91 = v145;
                    v12 = v165;
                  }
                  *((_DWORD *)v89 + 134) = 0;
                }
                else
                {
                  v164 = v169;
                  v160 = v168;
                  v89 = (unsigned __int8 *)operator new(0x3A0u);
                  *v89 = 0;
                  *((_QWORD *)v89 + 12) = v89 + 112;
                  *((_QWORD *)v89 + 16) = v89 + 144;
                  *((_QWORD *)v89 + 20) = v89 + 176;
                  *((_QWORD *)v89 + 24) = v89 + 208;
                  *((_QWORD *)v89 + 28) = v89 + 240;
                  *((_QWORD *)v89 + 32) = v89 + 272;
                  *((_QWORD *)v89 + 36) = v89 + 304;
                  *((_QWORD *)v89 + 40) = v89 + 336;
                  *((_QWORD *)v89 + 44) = v89 + 368;
                  *((_QWORD *)v89 + 48) = v89 + 400;
                  *((_QWORD *)v89 + 52) = v89 + 432;
                  *((_QWORD *)v89 + 13) = 0;
                  v89[112] = 0;
                  *((_QWORD *)v89 + 17) = 0;
                  v89[144] = 0;
                  *((_QWORD *)v89 + 21) = 0;
                  v89[176] = 0;
                  *((_QWORD *)v89 + 25) = 0;
                  v89[208] = 0;
                  *((_QWORD *)v89 + 29) = 0;
                  v89[240] = 0;
                  *((_QWORD *)v89 + 33) = 0;
                  v89[272] = 0;
                  *((_QWORD *)v89 + 37) = 0;
                  v89[304] = 0;
                  *((_QWORD *)v89 + 41) = 0;
                  v89[336] = 0;
                  *((_QWORD *)v89 + 45) = 0;
                  v89[368] = 0;
                  *((_QWORD *)v89 + 49) = 0;
                  v89[400] = 0;
                  *((_QWORD *)v89 + 53) = 0x800000000LL;
                  v90 = v160;
                  *((_QWORD *)v89 + 66) = v89 + 544;
                  v91 = v164;
                  *((_QWORD *)v89 + 67) = 0x600000000LL;
                }
                *(_QWORD *)v192 = v89;
              }
              v89[*v89 + 1] = 0;
              v171 = v173;
              sub_10B5070(&v171, v90, (__int64)&v90[v91]);
              v92 = *(_QWORD *)v192;
              v93 = (unsigned __int8)**(_BYTE **)v192;
              **(_BYTE **)v192 = v93 + 1;
              v94 = (unsigned __int8)v93;
              v95 = 32 * (v93 + 3);
              v96 = (void **)(v92 + v95);
              v97 = *(_BYTE **)(v92 + v95);
              if ( v171 == v173 )
              {
                v119 = n;
                if ( n )
                {
                  if ( n == 1 )
                    *v97 = v173[0];
                  else
                    memcpy(v97, v173, n);
                  v119 = n;
                  v97 = *v96;
                }
                v96[1] = (void *)v119;
                v97[v119] = 0;
                v97 = v171;
              }
              else
              {
                if ( v97 == (_BYTE *)(v92 + v95 + 16) )
                {
                  *v96 = v171;
                  v96[1] = (void *)n;
                  v96[2] = (void *)v173[0];
                }
                else
                {
                  v98 = *(_QWORD *)(v92 + 32 * v94 + 112);
                  *v96 = v171;
                  v96[1] = (void *)n;
                  v96[2] = (void *)v173[0];
                  if ( v97 )
                  {
                    v171 = v97;
                    v173[0] = v98;
                    goto LABEL_101;
                  }
                }
                v171 = v173;
                v97 = v173;
              }
LABEL_101:
              n = 0;
              *v97 = 0;
              if ( v171 != v173 )
                operator delete(v171);
              v99 = *(unsigned __int8 **)v192;
              if ( !*(_QWORD *)v192 )
              {
                v123 = *(_QWORD *)&v192[8];
                v124 = *(_DWORD *)(*(_QWORD *)&v192[8] + 14976LL);
                if ( v124 )
                {
                  v147 = (unsigned int)(v124 - 1);
                  *(_DWORD *)(*(_QWORD *)&v192[8] + 14976LL) = v147;
                  v99 = *(unsigned __int8 **)(v123 + 8 * v147 + 14848);
                  v148 = *((unsigned int *)v99 + 134);
                  *v99 = 0;
                  v149 = *((_QWORD *)v99 + 66);
                  *((_DWORD *)v99 + 106) = 0;
                  v150 = v149 + (v148 << 6);
                  if ( v149 != v150 )
                  {
                    v151 = v149;
                    do
                    {
                      while ( 1 )
                      {
                        v150 -= 64;
                        v152 = *(void **)(v150 + 24);
                        if ( v152 == (void *)(v150 + 40) )
                          break;
                        operator delete(v152);
                        if ( v151 == v150 )
                          goto LABEL_197;
                      }
                    }
                    while ( v151 != v150 );
                  }
LABEL_197:
                  *((_DWORD *)v99 + 134) = 0;
                }
                else
                {
                  v99 = (unsigned __int8 *)operator new(0x3A0u);
                  *v99 = 0;
                  *((_QWORD *)v99 + 12) = v99 + 112;
                  *((_QWORD *)v99 + 16) = v99 + 144;
                  *((_QWORD *)v99 + 20) = v99 + 176;
                  *((_QWORD *)v99 + 24) = v99 + 208;
                  *((_QWORD *)v99 + 28) = v99 + 240;
                  *((_QWORD *)v99 + 32) = v99 + 272;
                  *((_QWORD *)v99 + 36) = v99 + 304;
                  *((_QWORD *)v99 + 40) = v99 + 336;
                  *((_QWORD *)v99 + 44) = v99 + 368;
                  *((_QWORD *)v99 + 48) = v99 + 400;
                  *((_QWORD *)v99 + 52) = v99 + 432;
                  *((_QWORD *)v99 + 13) = 0;
                  v99[112] = 0;
                  *((_QWORD *)v99 + 17) = 0;
                  v99[144] = 0;
                  *((_QWORD *)v99 + 21) = 0;
                  v99[176] = 0;
                  *((_QWORD *)v99 + 25) = 0;
                  v99[208] = 0;
                  *((_QWORD *)v99 + 29) = 0;
                  v99[240] = 0;
                  *((_QWORD *)v99 + 33) = 0;
                  v99[272] = 0;
                  *((_QWORD *)v99 + 37) = 0;
                  v99[304] = 0;
                  *((_QWORD *)v99 + 41) = 0;
                  v99[336] = 0;
                  *((_QWORD *)v99 + 45) = 0;
                  v99[368] = 0;
                  *((_QWORD *)v99 + 49) = 0;
                  v99[400] = 0;
                  *((_QWORD *)v99 + 53) = 0x800000000LL;
                  *((_QWORD *)v99 + 66) = v99 + 544;
                  *((_QWORD *)v99 + 67) = 0x600000000LL;
                }
                *(_QWORD *)v192 = v99;
              }
              v99[*v99 + 1] = 1;
              v100 = *(_QWORD *)v192;
              v101 = (unsigned __int8)**(_BYTE **)v192;
              **(_BYTE **)v192 = v101 + 1;
              v102 = (__int64 *)v168;
              *(_QWORD *)(v100 + 8 * v101 + 16) = "--offload-arch";
              if ( v102 != &v170 )
                operator delete(v102);
              if ( v166 )
                (*((void (__fastcall **)(void **))*v166 + 1))(v166);
              if ( (_BYTE)v195 )
              {
                sub_FA3A50(*(__int64 *)&v192[16], (__int64)v20, SHIBYTE(v195));
                *(_QWORD *)&v192[16] = 0;
                v195 = 0;
              }
              if ( v193[1] != v20 + 6 )
                operator delete(v193[1]);
              v103 = *(void ***)v192;
              if ( *(_QWORD *)v192 )
              {
                v104 = *(_QWORD *)&v192[8];
                if ( *(_QWORD *)&v192[8] )
                {
                  if ( *(_QWORD *)v192 >= *(_QWORD *)&v192[8]
                    && *(_QWORD *)v192 <= (unsigned __int64)(*(_QWORD *)&v192[8] + 14848LL) )
                  {
                    v120 = *(unsigned int *)(*(_QWORD *)&v192[8] + 14976LL);
                    *(_DWORD *)(*(_QWORD *)&v192[8] + 14976LL) = v120 + 1;
                    *(_QWORD *)(v104 + 8 * v120 + 14848) = v103;
                    sub_10BC120(&v188);
                    goto LABEL_41;
                  }
                  v105 = *(void ***)(*(_QWORD *)v192 + 528LL);
                  v106 = &v105[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v192 + 536LL)];
                  if ( v105 != v106 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v106 -= 8;
                        v107 = (void **)v106[3];
                        if ( v107 == v106 + 5 )
                          break;
                        operator delete(v107);
                        if ( v105 == v106 )
                          goto LABEL_118;
                      }
                    }
                    while ( v105 != v106 );
LABEL_118:
                    v106 = (void **)v103[66];
                  }
                  if ( v106 != v103 + 68 )
                    free(v106);
                  v108 = (void **)v103[52];
                  v109 = v103 + 52;
                  if ( v108 != v103 + 54 )
                    free(v108);
                  v110 = v103 + 12;
                  do
                  {
                    while ( 1 )
                    {
                      v109 -= 4;
                      if ( *v109 == v109 + 2 )
                        break;
                      operator delete(*v109);
                      if ( v109 == v110 )
                        goto LABEL_126;
                    }
                  }
                  while ( v109 != v110 );
LABEL_126:
                  operator delete(v103, 0x3A0u);
                }
              }
              goto LABEL_127;
            }
            v50.m128i_i64[0] = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 80LL))(
                                 a1,
                                 v167.m128i_i64[0],
                                 v167.m128i_i64[1]);
            v167 = v50;
            if ( v50.m128i_i64[1] )
            {
              if ( (unsigned __int8)sub_2195AD0(v156, 3079) )
              {
                v74 = sub_9D20F0((__int64)v12, (__int64)&v167);
                if ( v75 )
                {
                  if ( !v74 && (char *)v75 != v12 + 8 )
                  {
                    v130 = *(const void **)(v75 + 32);
                    v131 = *(_QWORD *)(v75 + 40);
                    *(__m128i *)v192 = v167;
                    sub_9A0DC0((__int64)v20, v130, v131);
                  }
                  *(__m128i *)(operator new(0x30u) + 32) = v167;
                  std::_Rb_tree_insert_and_rebalance();
                  ++v179;
                }
                goto LABEL_41;
              }
              sub_2195AD0(v156, 3014);
              v111 = sub_10C3840((__int64)v12, (__int64)&v167);
              if ( v177 != (int *)v111 || v12 + 8 != v112 )
              {
                if ( v112 != (char *)v111 )
                {
                  v113 = v112;
                  do
                  {
                    v114 = std::_Rb_tree_increment();
                    v115 = (void *)std::_Rb_tree_rebalance_for_erase();
                    operator delete(v115);
                    --v179;
                  }
                  while ( v113 != (char *)v114 );
                }
                goto LABEL_41;
              }
              v153 = (_QWORD **)v176;
              if ( v176 )
              {
                do
                {
                  sub_9C9C90((__int64)v12, v153[3]);
                  v154 = (_QWORD **)v153[2];
                  operator delete(v153);
                  v153 = v154;
                }
                while ( v154 );
              }
              goto LABEL_141;
            }
            v158 = 1;
LABEL_41:
            v51 = v183.m128i_i64[1];
            v52 = sub_2222D70(&v182, v183.m128i_i64[0], v183.m128i_i64[1], 0);
            if ( v52 == -1 )
            {
              v52 = v182.m128i_u64[1];
              v55 = v182.m128i_i64[0];
              v54 = 0;
              v56 = 0;
            }
            else
            {
              v53 = v52 + v51;
              if ( v53 > v182.m128i_i64[1] )
              {
                v53 = v182.m128i_u64[1];
                v54 = 0;
              }
              else
              {
                v54 = v182.m128i_i64[1] - v53;
              }
              v55 = v182.m128i_i64[0];
              v56 = v182.m128i_i64[0] + v53;
              if ( v52 > v182.m128i_i64[1] )
                v52 = v182.m128i_u64[1];
            }
            v181.m128i_i64[0] = v55;
            v181.m128i_i64[1] = v52;
            v182.m128i_i64[0] = v56;
            v182.m128i_i64[1] = v54;
            if ( v55 == v157 )
              goto LABEL_12;
          }
        }
      }
      else
      {
        v43 = _mm_loadu_si128(&v197);
        v44 = (char *)v203.m128i_i64[0];
        v180 = (char)v188;
        v45 = _mm_loadu_si128(&v198);
        v46 = _mm_loadu_si128(&v199);
        v181 = v43;
        v182 = v45;
        v183 = v46;
        if ( v39 != &v196 )
          goto LABEL_34;
      }
      v183.m128i_i64[1] = 1;
      v183.m128i_i64[0] = (__int64)&v180;
LABEL_34:
      v47 = _mm_load_si128(&v201);
      v184 = v192[0];
      v48 = _mm_load_si128(&v203);
      v185 = v47;
      v49 = _mm_load_si128(&v202);
      v187 = v48;
      v186 = v49;
      if ( v44 != &v200 )
        goto LABEL_35;
      goto LABEL_172;
    }
LABEL_12:
    i = v159 + 1;
    if ( v163 == v159 + 1 )
      goto LABEL_61;
    v22 = v159 + 2;
    if ( !v159[1] )
      break;
LABEL_14:
    ;
  }
  for ( i = v159 + 2; v163 != v22; i = v22 )
  {
    if ( *v22++ )
      goto LABEL_14;
  }
LABEL_61:
  (*(void (__fastcall **)(_QWORD *, __int64, char *))(*(_QWORD *)a1 + 88LL))(v20, a1, v12);
  v61 = (unsigned __int8)v193[1];
  if ( LOBYTE(v193[1]) )
  {
    sub_FA3370((__int64)&v196, ***(_QWORD ***)(a1 + 8), 0, 325);
    sub_AC84E0(&v196, *(_BYTE **)v192, *(signed __int64 *)&v192[8]);
    sub_AC84E0(&v196, *(_BYTE **)&v192[16], (signed __int64)v193[0]);
    sub_AC6300((__int64)&v196);
    v158 = v61;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 521LL) = 1;
  }
  else
  {
    v62 = (__int64)v177;
    v63 = v12 + 8;
    for ( j = *(unsigned int *)(a1 + 80); (_BYTE *)v62 != v63; v62 = std::_Rb_tree_increment() )
    {
      while ( 1 )
      {
        v65 = *(_QWORD *)(v62 + 32);
        if ( j + 1 > (unsigned __int64)*(unsigned int *)(a1 + 84) )
          break;
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * j) = v65;
        j = (unsigned int)(*(_DWORD *)(a1 + 80) + 1);
        *(_DWORD *)(a1 + 80) = j;
        v62 = std::_Rb_tree_increment();
        if ( (_BYTE *)v62 == v63 )
          goto LABEL_67;
      }
      sub_22134E0(a1 + 72, a1 + 88, j + 1, 8);
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
      v68 = sub_FD3E40(v67);
      v69 = *(unsigned int *)(a1 + 80);
      v70 = v68;
      if ( v69 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 84) )
      {
        sub_22134E0(a1 + 72, a1 + 88, v69 + 1, 8);
        v69 = *(unsigned int *)(a1 + 80);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v69) = v70;
      ++*(_DWORD *)(a1 + 80);
    }
  }
  v71 = (_QWORD **)v176;
  if ( v176 )
  {
    do
    {
      sub_9C9C90((__int64)v12, v71[3]);
      v72 = (_QWORD **)v71[2];
      operator delete(v71);
      v71 = v72;
    }
    while ( v72 );
  }
  return v158;
}

