void __fastcall sub_F299B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  bool v4; // zf
  size_t v5; // rax
  __m128 v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm2
  __m128i *v14; // rdx
  __m128i v15; // xmm0
  void (__fastcall *v16)(__m256i *, __m256i *, __int64); // rax
  __int64 v17; // rdx
  __m128i *v18; // rdi
  size_t v19; // rax
  __m128i v20; // xmm0
  __m128i v21; // xmm4
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // xmm5
  __m128i *v25; // rdx
  __m128 v26; // xmm0
  __m128i *v27; // rdi
  _BYTE *v28; // rbp
  size_t v29; // rax
  size_t v30; // rax
  __m128i v31; // xmm3
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __m128i *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rax
  __m128i v38; // xmm6
  __m128i *v39; // rdx
  __m128i v40; // xmm0
  void *v41; // rax
  void *v42; // rdx
  size_t v43; // rax
  __m128i v44; // xmm2
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __m128i *v48; // r14
  __int64 v49; // rax
  __int64 v50; // rax
  __m128i v51; // xmm7
  __m128i *v52; // rdx
  __m128i si128; // xmm0
  void (__fastcall *v54)(__m256i *, __m256i *, __int64); // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rsi
  unsigned __int64 v62; // rbp
  __int64 (__fastcall *v63)(); // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 (__fastcall *v66)(); // rsi
  __int64 v67; // r8
  __int64 v68; // r9
  _BYTE *v69; // r12
  __int64 v70; // rax
  __int64 v71; // rsi
  unsigned __int16 v72; // ax
  int v73; // ebp
  __int64 v74; // rax
  size_t v75; // rax
  __m128i v76; // xmm0
  __m128i v77; // xmm2
  __int64 v78; // rax
  __int64 v79; // rax
  __m128i v80; // xmm3
  __m128i *v81; // rdx
  __m128 v82; // xmm0
  __m128i *v83; // rdi
  size_t v84; // rax
  __int128 v85; // xmm1
  __int64 v86; // r8
  __int64 v87; // r9
  size_t v88; // rax
  __m128i v89; // xmm4
  __int64 v90; // rax
  __int64 v91; // rax
  __m128i v92; // xmm5
  __m128i *v93; // rdx
  __m128 v94; // xmm0
  __m128i v95; // xmm3
  __int64 v96; // rax
  __int64 v97; // rax
  __m128i v98; // xmm4
  __m128i *v99; // rdx
  __m128 v100; // xmm0
  __m128i v101; // xmm5
  __int64 v102; // rax
  __int64 v103; // rax
  __m128i v104; // xmm6
  __m128i *v105; // rdx
  __m128 v106; // xmm0
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rdi
  __int64 v112; // rdi
  void (__fastcall *v113)(__int64, __int64, __int64); // rax
  __int64 v114; // rax
  _BYTE *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rax
  __m128i *v119; // r14
  __int64 v120; // rax
  __int64 v121; // rax
  __m128i v122; // xmm7
  __m128i *v123; // rdx
  __m128i v124; // xmm0
  void (__fastcall *v125)(__m256i *, __m256i *, __int64); // rax
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rdi
  __int64 v132; // rdi
  void (__fastcall *v133)(__int64, __int64, __int64); // rax
  __int64 v134; // rax
  _BYTE *v135; // rax
  unsigned __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rdi
  __int64 v142; // rdi
  void (__fastcall *v143)(__int64, __int64, __int64); // rax
  __int64 v144; // rax
  _BYTE *v145; // rax
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rdi
  __int64 v151; // rdi
  void (__fastcall *v152)(__int64, __int64, __int64); // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rdi
  __int64 v161; // rdi
  void (__fastcall *v162)(__int64, __int64, __int64); // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rax
  __m128i *v167; // r14
  __int64 v168; // rax
  __int64 v169; // rax
  __m128i v170; // xmm5
  __m128i *v171; // rdx
  __m128i v172; // xmm0
  void (__fastcall *v173)(__m256i *, __m256i *, __int64); // rax
  __int64 v174; // rdx
  __int128 v175; // [rsp-20h] [rbp-228h]
  __m128 v176; // [rsp+0h] [rbp-208h] BYREF
  void (__fastcall *v177)(__int64 ***, char *); // [rsp+10h] [rbp-1F8h] BYREF
  __int64 v178; // [rsp+18h] [rbp-1F0h] BYREF
  char v179; // [rsp+27h] [rbp-1E1h] BYREF
  char v180; // [rsp+28h] [rbp-1E0h] BYREF
  char v181; // [rsp+29h] [rbp-1DFh] BYREF
  char v182; // [rsp+2Ah] [rbp-1DEh] BYREF
  char v183; // [rsp+2Bh] [rbp-1DDh] BYREF
  char v184; // [rsp+2Ch] [rbp-1DCh] BYREF
  char v185; // [rsp+2Dh] [rbp-1DBh] BYREF
  char v186; // [rsp+2Eh] [rbp-1DAh] BYREF
  char v187; // [rsp+2Fh] [rbp-1D9h] BYREF
  __m128i v188; // [rsp+30h] [rbp-1D8h] BYREF
  __m128 v189; // [rsp+40h] [rbp-1C8h] BYREF
  const char *v190; // [rsp+50h] [rbp-1B8h]
  __m128i v191; // [rsp+58h] [rbp-1B0h] BYREF
  void *v192; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v193; // [rsp+70h] [rbp-198h]
  __m128i v194; // [rsp+78h] [rbp-190h] BYREF
  __m128i v195; // [rsp+90h] [rbp-178h] BYREF
  __int64 v196; // [rsp+A0h] [rbp-168h]
  __m128i *v197; // [rsp+A8h] [rbp-160h] BYREF
  __int64 v198; // [rsp+B0h] [rbp-158h]
  __m128i v199; // [rsp+B8h] [rbp-150h] BYREF
  __m128 v200; // [rsp+D0h] [rbp-138h] BYREF
  __int64 v201; // [rsp+E0h] [rbp-128h]
  void *v202; // [rsp+E8h] [rbp-120h] BYREF
  __int64 v203; // [rsp+F0h] [rbp-118h]
  __m128i v204; // [rsp+F8h] [rbp-110h] BYREF
  __m128i v205; // [rsp+110h] [rbp-F8h] BYREF
  void *v206[2]; // [rsp+120h] [rbp-E8h] BYREF
  __int64 v207; // [rsp+130h] [rbp-D8h]
  __m128i v208; // [rsp+138h] [rbp-D0h] BYREF
  __m256i v209; // [rsp+150h] [rbp-B8h] BYREF
  __int64 v210; // [rsp+170h] [rbp-98h]
  __m128i v211; // [rsp+178h] [rbp-90h] BYREF
  const char *v212; // [rsp+190h] [rbp-78h] BYREF
  _BYTE v213[24]; // [rsp+198h] [rbp-70h] BYREF
  __int64 v214; // [rsp+1B0h] [rbp-58h]
  __m128i v215[5]; // [rsp+1B8h] [rbp-50h] BYREF

  v178 = a2;
  switch ( (unsigned int)sub_EFEE00(&v178) )
  {
    case 0u:
      v43 = j__strlen(&byte_22CD811);
      v188.m128i_i64[1] = a1;
      v4 = *(_BYTE *)(a1 + 1056) == 0;
      v188.m128i_i64[0] = v178;
      if ( !v4 )
      {
        *(_BYTE *)(a1 + 1056) = 0;
        v136 = sub_EFEE90(v188.m128i_i64, 0);
        sub_F27760(a1, v136);
        v137 = *(unsigned int *)(a1 + 24);
        if ( (_DWORD)v137 )
        {
          v138 = *(_QWORD *)(a1 + 16);
          v180 = 1;
          v139 = v138 + 32 * v137 - 32;
          if ( !*(_QWORD *)(v139 + 16) )
            goto LABEL_176;
          while ( 1 )
          {
            (*(void (__fastcall **)(__int64, char *))(v139 + 24))(v139, &v180);
            v141 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
            *(_DWORD *)(a1 + 24) = v141;
            v142 = *(_QWORD *)(a1 + 16) + 32 * v141;
            v143 = *(void (__fastcall **)(__int64, __int64, __int64))(v142 + 16);
            if ( v143 )
              v143(v142, v142, 3);
            v144 = *(unsigned int *)(a1 + 24);
            if ( !(_DWORD)v144 )
              break;
            v140 = *(_QWORD *)(a1 + 16);
            v180 = 1;
            v139 = v140 + 32 * v144 - 32;
            if ( !*(_QWORD *)(v139 + 16) )
              goto LABEL_176;
          }
        }
LABEL_132:
        v145 = *(_BYTE **)(a1 + 1064);
        *(_QWORD *)(a1 + 1072) = 0;
        *v145 = 0;
        sub_971800(*(_QWORD *)a1, "\n");
        *(_BYTE *)(a1 + 1056) = 1;
        return;
      }
      v44 = _mm_load_si128(&v188);
      v190 = (const char *)a1;
      v191 = v44;
      v192 = &v194;
      sub_F009D0(&v192, &byte_22CD811, (__int64)(&byte_22CD811 + v43));
      if ( !*(_BYTE *)(a1 + 1057) )
      {
        v45 = *(unsigned int *)(a1 + 24);
        v46 = *(_QWORD *)(a1 + 16);
        v179 = 0;
        v47 = v46 + 32 * v45 - 32;
        if ( *(_QWORD *)(v47 + 16) )
        {
          (*(void (__fastcall **)(__int64, char *))(v47 + 24))(v47, &v179);
          v48 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
          *(__m128i *)v213 = _mm_loadu_si128(&v191);
          v212 = v190;
          *(_QWORD *)&v213[16] = v215;
          if ( v192 == &v194 )
          {
            v215[0] = _mm_loadu_si128(&v194);
          }
          else
          {
            *(_QWORD *)&v213[16] = v192;
            v215[0].m128i_i64[0] = v194.m128i_i64[0];
          }
          v49 = v193;
          v193 = 0;
          v194.m128i_i8[0] = 0;
          v214 = v49;
          v192 = &v194;
          v209.m256i_i64[2] = 0;
          v50 = operator new(0x38u);
          v51 = _mm_loadu_si128((const __m128i *)v213);
          *(_QWORD *)v50 = v212;
          *(_QWORD *)(v50 + 24) = v50 + 40;
          v52 = *(__m128i **)&v213[16];
          *(__m128i *)(v50 + 8) = v51;
          if ( v52 == v215 )
          {
            *(__m128i *)(v50 + 40) = _mm_loadu_si128(v215);
          }
          else
          {
            *(_QWORD *)(v50 + 24) = v52;
            *(_QWORD *)(v50 + 40) = v215[0].m128i_i64[0];
          }
          v209.m256i_i64[0] = v50;
          v215[0].m128i_i8[0] = 0;
          si128 = _mm_load_si128((const __m128i *)&v209);
          *(_QWORD *)(v50 + 32) = v214;
          *(_QWORD *)&v213[16] = v215;
          v214 = 0;
          *(__m128i *)v209.m256i_i8 = _mm_loadu_si128(v48);
          v54 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v48[1].m128i_i64[0];
          v55 = v48[1].m128i_i64[1];
          *v48 = si128;
          v209.m256i_i64[2] = (__int64)v54;
          v48[1].m128i_i64[0] = (__int64)sub_F02270;
          v209.m256i_i64[3] = v55;
          v48[1].m128i_i64[1] = (__int64)sub_F28F40;
          if ( v54 )
            v54(&v209, &v209, 3);
          goto LABEL_49;
        }
LABEL_176:
        std::__throw_bad_function_call();
      }
      v89 = _mm_loadu_si128(&v191);
      v212 = v190;
      *(_QWORD *)&v213[16] = v215;
      *(__m128i *)v213 = v89;
      if ( v192 == &v194 )
      {
        v215[0] = _mm_loadu_si128(&v194);
      }
      else
      {
        *(_QWORD *)&v213[16] = v192;
        v215[0].m128i_i64[0] = v194.m128i_i64[0];
      }
      v90 = v193;
      v193 = 0;
      v194.m128i_i8[0] = 0;
      v214 = v90;
      v192 = &v194;
      v209.m256i_i64[2] = 0;
      v91 = operator new(0x38u);
      v92 = _mm_loadu_si128((const __m128i *)v213);
      *(_QWORD *)v91 = v212;
      *(_QWORD *)(v91 + 24) = v91 + 40;
      v93 = *(__m128i **)&v213[16];
      *(__m128i *)(v91 + 8) = v92;
      if ( v93 == v215 )
      {
        *(__m128i *)(v91 + 40) = _mm_loadu_si128(v215);
      }
      else
      {
        *(_QWORD *)(v91 + 24) = v93;
        *(_QWORD *)(v91 + 40) = v215[0].m128i_i64[0];
      }
      v209.m256i_i64[0] = v91;
      *(_QWORD *)(v91 + 32) = v214;
      v176.m128_u64[0] = (unsigned __int64)sub_F28F40;
      *(_QWORD *)&v213[16] = v215;
      v214 = 0;
      v94 = _mm_loadh_ps((const double *)v176.m128_u64);
      v215[0].m128i_i8[0] = 0;
      *(__m128 *)&v209.m256i_u64[2] = v94;
      sub_AA95F0(a1 + 16, (__m128i *)&v209);
      if ( v209.m256i_i64[2] )
        ((void (__fastcall *)(__m256i *, __m256i *, __int64))v209.m256i_i64[2])(&v209, &v209, 3);
LABEL_49:
      if ( *(__m128i **)&v213[16] != v215 )
        operator delete(*(void **)&v213[16]);
      v27 = (__m128i *)v192;
      *(_BYTE *)(a1 + 1057) = 0;
      if ( v27 != &v194 )
LABEL_52:
        operator delete(v27);
      return;
    case 1u:
      sub_971800(*(_QWORD *)(a1 + 1096), " overloaded");
      return;
    case 2u:
      sub_971800(*(_QWORD *)(a1 + 1096), " assumed");
      return;
    case 3u:
      sub_971800(*(_QWORD *)(a1 + 1096), " qualified");
      v56 = sub_EFF210(&v178);
      v61 = *(_QWORD *)(v56 + 8);
      v62 = v56;
      if ( (v61 & 4) != 0 )
      {
        sub_971800(*(_QWORD *)(a1 + 1096), " keyword");
        v61 = *(_QWORD *)(v62 + 8);
      }
      v63 = (__int64 (__fastcall *)())(v61 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v63 )
        sub_F1D820(a1, v63, v57, v58, v59, v60);
      sub_F299B0(a1, *(_QWORD *)(v62 + 16));
      return;
    case 4u:
      sub_971800(*(_QWORD *)(a1 + 1096), " dependent");
      v66 = (__int64 (__fastcall *)())(*(_QWORD *)sub_EFF230(&v178) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v66 )
        sub_F1D820(a1, v66, v64, v65, v67, v68);
      return;
    case 5u:
      sub_971800(*(_QWORD *)(a1 + 1096), " subst");
      v69 = sub_EFF190(&v178);
      v70 = sub_971800(*(_QWORD *)(a1 + 1096), " index ");
      v71 = (*(_DWORD *)v69 >> 3) & 0x3FFF;
      sub_2257BD0(v70, v71);
      v72 = *((_WORD *)v69 + 1) >> 1;
      v73 = (int)v72 >> 1;
      if ( v73 )
      {
        v154 = sub_971800(*(_QWORD *)(a1 + 1096), " pack_index ");
        v71 = (unsigned int)(v73 - 1);
        sub_2257BD0(v154, v71);
        v72 = *((_WORD *)v69 + 1) >> 1;
      }
      if ( (v72 & 1) != 0 )
      {
        v71 = (__int64)" final";
        sub_971800(*(_QWORD *)(a1 + 1096), " final");
      }
      v74 = sub_EFE470((__int64)v69);
      if ( !v74 )
        goto LABEL_80;
      if ( *(_BYTE *)(a1 + 1056) )
      {
        *(_BYTE *)(a1 + 1056) = 0;
        sub_F27760(a1, v74);
        v107 = *(unsigned int *)(a1 + 24);
        if ( (_DWORD)v107 )
        {
          v108 = *(_QWORD *)(a1 + 16);
          v186 = 1;
          v109 = v108 + 32 * v107 - 32;
          if ( !*(_QWORD *)(v109 + 16) )
            goto LABEL_176;
          while ( 1 )
          {
            (*(void (__fastcall **)(__int64, char *))(v109 + 24))(v109, &v186);
            v111 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
            *(_DWORD *)(a1 + 24) = v111;
            v112 = *(_QWORD *)(a1 + 16) + 32 * v111;
            v113 = *(void (__fastcall **)(__int64, __int64, __int64))(v112 + 16);
            if ( v113 )
              v113(v112, v112, 3);
            v114 = *(unsigned int *)(a1 + 24);
            if ( !(_DWORD)v114 )
              break;
            v110 = *(_QWORD *)(a1 + 16);
            v186 = 1;
            v109 = v110 + 32 * v114 - 32;
            if ( !*(_QWORD *)(v109 + 16) )
              goto LABEL_176;
          }
        }
        v115 = *(_BYTE **)(a1 + 1064);
        v71 = (__int64)"\n";
        *(_QWORD *)(a1 + 1072) = 0;
        *v115 = 0;
        sub_971800(*(_QWORD *)a1, "\n");
        *(_BYTE *)(a1 + 1056) = 1;
      }
      else
      {
        v176.m128_u64[0] = v74;
        v176 = _mm_loadh_ps((const double *)v176.m128_u64);
        v75 = j__strlen("parameter");
        v76 = _mm_load_si128((const __m128i *)&v176);
        v206[0] = (void *)a1;
        v205 = v76;
        v206[1] = &v208;
        sub_F009D0(&v206[1], "parameter", (__int64)&aUnsupportedPar[v75 + 12]);
        if ( *(_BYTE *)(a1 + 1057) )
        {
          v77 = _mm_loadu_si128((const __m128i *)&v205.m128i_u64[1]);
          v212 = (const char *)v205.m128i_i64[0];
          *(_QWORD *)&v213[16] = v215;
          *(__m128i *)v213 = v77;
          if ( v206[1] == &v208 )
          {
            v215[0] = _mm_loadu_si128(&v208);
          }
          else
          {
            *(void **)&v213[16] = v206[1];
            v215[0].m128i_i64[0] = v208.m128i_i64[0];
          }
          v78 = v207;
          v207 = 0;
          v208.m128i_i8[0] = 0;
          v214 = v78;
          v206[1] = &v208;
          v209.m256i_i64[2] = 0;
          v79 = operator new(0x38u);
          v80 = _mm_loadu_si128((const __m128i *)v213);
          *(_QWORD *)v79 = v212;
          *(_QWORD *)(v79 + 24) = v79 + 40;
          v81 = *(__m128i **)&v213[16];
          *(__m128i *)(v79 + 8) = v80;
          if ( v81 == v215 )
          {
            *(__m128i *)(v79 + 40) = _mm_loadu_si128(v215);
          }
          else
          {
            *(_QWORD *)(v79 + 24) = v81;
            *(_QWORD *)(v79 + 40) = v215[0].m128i_i64[0];
          }
          v209.m256i_i64[0] = v79;
          *(_QWORD *)(v79 + 32) = v214;
          v71 = (__int64)&v209;
          v176.m128_u64[0] = (unsigned __int64)sub_F28550;
          *(_QWORD *)&v213[16] = v215;
          v214 = 0;
          v82 = _mm_loadh_ps((const double *)v176.m128_u64);
          v215[0].m128i_i8[0] = 0;
          *(__m128 *)&v209.m256i_u64[2] = v82;
          sub_AA95F0(a1 + 16, (__m128i *)&v209);
          if ( v209.m256i_i64[2] )
          {
            v71 = (__int64)&v209;
            ((void (__fastcall *)(__m256i *, __m256i *, __int64))v209.m256i_i64[2])(&v209, &v209, 3);
          }
        }
        else
        {
          v164 = *(unsigned int *)(a1 + 24);
          v165 = *(_QWORD *)(a1 + 16);
          v185 = 0;
          v166 = v165 + 32 * v164 - 32;
          if ( !*(_QWORD *)(v166 + 16) )
            goto LABEL_176;
          v71 = (__int64)&v185;
          (*(void (__fastcall **)(__int64, char *))(v166 + 24))(v166, &v185);
          v167 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
          *(__m128i *)v213 = _mm_loadu_si128((const __m128i *)&v205.m128i_u64[1]);
          v212 = (const char *)v205.m128i_i64[0];
          *(_QWORD *)&v213[16] = v215;
          if ( v206[1] == &v208 )
          {
            v215[0] = _mm_loadu_si128(&v208);
          }
          else
          {
            *(void **)&v213[16] = v206[1];
            v215[0].m128i_i64[0] = v208.m128i_i64[0];
          }
          v168 = v207;
          v207 = 0;
          v208.m128i_i8[0] = 0;
          v214 = v168;
          v206[1] = &v208;
          v209.m256i_i64[2] = 0;
          v169 = operator new(0x38u);
          v170 = _mm_loadu_si128((const __m128i *)v213);
          *(_QWORD *)v169 = v212;
          *(_QWORD *)(v169 + 24) = v169 + 40;
          v171 = *(__m128i **)&v213[16];
          *(__m128i *)(v169 + 8) = v170;
          if ( v171 == v215 )
          {
            *(__m128i *)(v169 + 40) = _mm_loadu_si128(v215);
          }
          else
          {
            *(_QWORD *)(v169 + 24) = v171;
            *(_QWORD *)(v169 + 40) = v215[0].m128i_i64[0];
          }
          v209.m256i_i64[0] = v169;
          v215[0].m128i_i8[0] = 0;
          v172 = _mm_load_si128((const __m128i *)&v209);
          *(_QWORD *)(v169 + 32) = v214;
          *(_QWORD *)&v213[16] = v215;
          v214 = 0;
          *(__m128i *)v209.m256i_i8 = _mm_loadu_si128(v167);
          v173 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v167[1].m128i_i64[0];
          v174 = v167[1].m128i_i64[1];
          *v167 = v172;
          v209.m256i_i64[2] = (__int64)v173;
          v167[1].m128i_i64[0] = (__int64)sub_F02060;
          v209.m256i_i64[3] = v174;
          v167[1].m128i_i64[1] = (__int64)sub_F28550;
          if ( v173 )
          {
            v71 = (__int64)&v209;
            v173(&v209, &v209, 3);
          }
        }
        if ( *(__m128i **)&v213[16] != v215 )
          operator delete(*(void **)&v213[16]);
        v83 = (__m128i *)v206[1];
        *(_BYTE *)(a1 + 1057) = 0;
        if ( v83 != &v208 )
          operator delete(v83);
      }
LABEL_80:
      if ( *((_QWORD *)v69 + 3) )
      {
        v176.m128_u64[0] = *((_QWORD *)v69 + 3);
        v176 = _mm_loadh_ps((const double *)v176.m128_u64);
        v84 = j__strlen("associated");
        v85 = (__int128)_mm_load_si128((const __m128i *)&v176);
        *(_QWORD *)v213 = v84;
        v176 = (__m128)v85;
        v212 = "associated";
        *(_OWORD *)&v213[8] = v85;
        *((_QWORD *)&v175 + 1) = v84;
        *(_QWORD *)&v175 = "associated";
        sub_F1BAF0(a1, v71, *((__int64 *)&v85 + 1), (__int64)"associated", v86, v87, v175, v85);
      }
      v88 = j__strlen("replacement");
      sub_F2CE80(a1, "replacement", v88, *((_QWORD *)v69 + 2), a1);
      return;
    case 6u:
      sub_971800(*(_QWORD *)(a1 + 1096), " subst_pack");
      return;
    case 7u:
      v3 = sub_EFF250(&v178);
      v4 = *(_BYTE *)(a1 + 1056) == 0;
      v176.m128_u64[0] = v3;
      if ( v4 )
      {
        v5 = j__strlen(&byte_22CD811);
        v177 = (void (__fastcall *)(__int64 ***, char *))a1;
        v201 = a1;
        v6 = _mm_loadh_ps((const double *)v176.m128_u64);
        v202 = &v204;
        v200 = v6;
        sub_F009D0(&v202, &byte_22CD811, (__int64)(&byte_22CD811 + v5));
        if ( *(_BYTE *)(a1 + 1057) )
        {
          v101 = _mm_loadu_si128((const __m128i *)&v200.m128_u16[4]);
          v212 = (const char *)v200.m128_u64[0];
          *(_QWORD *)&v213[16] = v215;
          *(__m128i *)v213 = v101;
          if ( v202 == &v204 )
          {
            v215[0] = _mm_loadu_si128(&v204);
          }
          else
          {
            *(_QWORD *)&v213[16] = v202;
            v215[0].m128i_i64[0] = v204.m128i_i64[0];
          }
          v102 = v203;
          v203 = 0;
          v204.m128i_i8[0] = 0;
          v214 = v102;
          v202 = &v204;
          v209.m256i_i64[2] = 0;
          v103 = operator new(0x38u);
          v104 = _mm_loadu_si128((const __m128i *)v213);
          *(_QWORD *)v103 = v212;
          *(_QWORD *)(v103 + 24) = v103 + 40;
          v105 = *(__m128i **)&v213[16];
          *(__m128i *)(v103 + 8) = v104;
          if ( v105 == v215 )
          {
            *(__m128i *)(v103 + 40) = _mm_loadu_si128(v215);
          }
          else
          {
            *(_QWORD *)(v103 + 24) = v105;
            *(_QWORD *)(v103 + 40) = v215[0].m128i_i64[0];
          }
          v209.m256i_i64[0] = v103;
          *(_QWORD *)(v103 + 32) = v214;
          v177 = sub_F28BF0;
          *(_QWORD *)&v213[16] = v215;
          v214 = 0;
          v106 = _mm_loadh_ps((const double *)&v177);
          v215[0].m128i_i8[0] = 0;
          *(__m128 *)&v209.m256i_u64[2] = v106;
          sub_AA95F0(a1 + 16, (__m128i *)&v209);
          if ( v209.m256i_i64[2] )
            ((void (__fastcall *)(__m256i *, __m256i *, __int64))v209.m256i_i64[2])(&v209, &v209, 3);
        }
        else
        {
          v7 = *(unsigned int *)(a1 + 24);
          v8 = *(_QWORD *)(a1 + 16);
          v183 = 0;
          v9 = v8 + 32 * v7 - 32;
          if ( !*(_QWORD *)(v9 + 16) )
            goto LABEL_176;
          (*(void (__fastcall **)(__int64, char *))(v9 + 24))(v9, &v183);
          v10 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
          *(__m128i *)v213 = _mm_loadu_si128((const __m128i *)&v200.m128_u16[4]);
          v212 = (const char *)v200.m128_u64[0];
          *(_QWORD *)&v213[16] = v215;
          if ( v202 == &v204 )
          {
            v215[0] = _mm_loadu_si128(&v204);
          }
          else
          {
            *(_QWORD *)&v213[16] = v202;
            v215[0].m128i_i64[0] = v204.m128i_i64[0];
          }
          v11 = v203;
          v203 = 0;
          v204.m128i_i8[0] = 0;
          v214 = v11;
          v202 = &v204;
          v209.m256i_i64[2] = 0;
          v12 = operator new(0x38u);
          v13 = _mm_loadu_si128((const __m128i *)v213);
          *(_QWORD *)v12 = v212;
          *(_QWORD *)(v12 + 24) = v12 + 40;
          v14 = *(__m128i **)&v213[16];
          *(__m128i *)(v12 + 8) = v13;
          if ( v14 == v215 )
          {
            *(__m128i *)(v12 + 40) = _mm_loadu_si128(v215);
          }
          else
          {
            *(_QWORD *)(v12 + 24) = v14;
            *(_QWORD *)(v12 + 40) = v215[0].m128i_i64[0];
          }
          v209.m256i_i64[0] = v12;
          v215[0].m128i_i8[0] = 0;
          v15 = _mm_load_si128((const __m128i *)&v209);
          *(_QWORD *)(v12 + 32) = v214;
          *(_QWORD *)&v213[16] = v215;
          v214 = 0;
          *(__m128i *)v209.m256i_i8 = _mm_loadu_si128(v10);
          v16 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v10[1].m128i_i64[0];
          v17 = v10[1].m128i_i64[1];
          *v10 = v15;
          v209.m256i_i64[2] = (__int64)v16;
          v10[1].m128i_i64[0] = (__int64)sub_F021C0;
          v209.m256i_i64[3] = v17;
          v10[1].m128i_i64[1] = (__int64)sub_F28BF0;
          if ( v16 )
            v16(&v209, &v209, 3);
        }
        if ( *(__m128i **)&v213[16] != v215 )
          operator delete(*(void **)&v213[16]);
        v18 = (__m128i *)v202;
        *(_BYTE *)(a1 + 1057) = 0;
        if ( v18 != &v204 )
          operator delete(v18);
      }
      else
      {
        *(_BYTE *)(a1 + 1056) = 0;
        sub_F27760(a1, v3);
        v127 = *(unsigned int *)(a1 + 24);
        if ( (_DWORD)v127 )
        {
          v128 = *(_QWORD *)(a1 + 16);
          v184 = 1;
          v129 = v128 + 32 * v127 - 32;
          if ( !*(_QWORD *)(v129 + 16) )
            goto LABEL_176;
          while ( 1 )
          {
            (*(void (__fastcall **)(__int64, char *))(v129 + 24))(v129, &v184);
            v131 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
            *(_DWORD *)(a1 + 24) = v131;
            v132 = *(_QWORD *)(a1 + 16) + 32 * v131;
            v133 = *(void (__fastcall **)(__int64, __int64, __int64))(v132 + 16);
            if ( v133 )
              v133(v132, v132, 3);
            v134 = *(unsigned int *)(a1 + 24);
            if ( !(_DWORD)v134 )
              break;
            v130 = *(_QWORD *)(a1 + 16);
            v184 = 1;
            v129 = v130 + 32 * v134 - 32;
            if ( !*(_QWORD *)(v129 + 16) )
              goto LABEL_176;
          }
        }
        v135 = *(_BYTE **)(a1 + 1064);
        *(_QWORD *)(a1 + 1072) = 0;
        *v135 = 0;
        sub_971800(*(_QWORD *)a1, "\n");
        *(_BYTE *)(a1 + 1056) = 1;
      }
      if ( !*(_BYTE *)(a1 + 1056) )
      {
        v177 = (void (__fastcall *)(__int64 ***, char *))a1;
        v176 = _mm_loadh_ps((const double *)v176.m128_u64);
        v19 = j__strlen("target");
        v20 = _mm_load_si128((const __m128i *)&v176);
        v196 = a1;
        v195 = v20;
        v197 = &v199;
        sub_F009D0(&v197, "target", (__int64)&aTarget_0[v19 + 2]);
        if ( *(_BYTE *)(a1 + 1057) )
        {
          v21 = _mm_loadu_si128((const __m128i *)&v195.m128i_u64[1]);
          v212 = (const char *)v195.m128i_i64[0];
          *(_QWORD *)&v213[16] = v215;
          *(__m128i *)v213 = v21;
          if ( v197 == &v199 )
          {
            v215[0] = _mm_loadu_si128(&v199);
          }
          else
          {
            *(_QWORD *)&v213[16] = v197;
            v215[0].m128i_i64[0] = v199.m128i_i64[0];
          }
          v22 = v198;
          v198 = 0;
          v199.m128i_i8[0] = 0;
          v214 = v22;
          v197 = &v199;
          v209.m256i_i64[2] = 0;
          v23 = operator new(0x38u);
          v24 = _mm_loadu_si128((const __m128i *)v213);
          *(_QWORD *)v23 = v212;
          *(_QWORD *)(v23 + 24) = v23 + 40;
          v25 = *(__m128i **)&v213[16];
          *(__m128i *)(v23 + 8) = v24;
          if ( v25 == v215 )
          {
            *(__m128i *)(v23 + 40) = _mm_loadu_si128(v215);
          }
          else
          {
            *(_QWORD *)(v23 + 24) = v25;
            *(_QWORD *)(v23 + 40) = v215[0].m128i_i64[0];
          }
          v209.m256i_i64[0] = v23;
          *(_QWORD *)(v23 + 32) = v214;
          v176.m128_u64[0] = (unsigned __int64)sub_F288A0;
          *(_QWORD *)&v213[16] = v215;
          v214 = 0;
          v26 = _mm_loadh_ps((const double *)v176.m128_u64);
          v215[0].m128i_i8[0] = 0;
          *(__m128 *)&v209.m256i_u64[2] = v26;
          sub_AA95F0(a1 + 16, (__m128i *)&v209);
          if ( v209.m256i_i64[2] )
            ((void (__fastcall *)(__m256i *, __m256i *, __int64))v209.m256i_i64[2])(&v209, &v209, 3);
        }
        else
        {
          v116 = *(unsigned int *)(a1 + 24);
          v117 = *(_QWORD *)(a1 + 16);
          v181 = 0;
          v118 = v117 + 32 * v116 - 32;
          if ( !*(_QWORD *)(v118 + 16) )
            goto LABEL_176;
          (*(void (__fastcall **)(__int64, char *))(v118 + 24))(v118, &v181);
          v119 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
          *(__m128i *)v213 = _mm_loadu_si128((const __m128i *)&v195.m128i_u64[1]);
          v212 = (const char *)v195.m128i_i64[0];
          *(_QWORD *)&v213[16] = v215;
          if ( v197 == &v199 )
          {
            v215[0] = _mm_loadu_si128(&v199);
          }
          else
          {
            *(_QWORD *)&v213[16] = v197;
            v215[0].m128i_i64[0] = v199.m128i_i64[0];
          }
          v120 = v198;
          v198 = 0;
          v199.m128i_i8[0] = 0;
          v214 = v120;
          v197 = &v199;
          v209.m256i_i64[2] = 0;
          v121 = operator new(0x38u);
          v122 = _mm_loadu_si128((const __m128i *)v213);
          *(_QWORD *)v121 = v212;
          *(_QWORD *)(v121 + 24) = v121 + 40;
          v123 = *(__m128i **)&v213[16];
          *(__m128i *)(v121 + 8) = v122;
          if ( v123 == v215 )
          {
            *(__m128i *)(v121 + 40) = _mm_loadu_si128(v215);
          }
          else
          {
            *(_QWORD *)(v121 + 24) = v123;
            *(_QWORD *)(v121 + 40) = v215[0].m128i_i64[0];
          }
          v209.m256i_i64[0] = v121;
          v215[0].m128i_i8[0] = 0;
          v124 = _mm_load_si128((const __m128i *)&v209);
          *(_QWORD *)(v121 + 32) = v214;
          *(_QWORD *)&v213[16] = v215;
          v214 = 0;
          *(__m128i *)v209.m256i_i8 = _mm_loadu_si128(v119);
          v125 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v119[1].m128i_i64[0];
          v126 = v119[1].m128i_i64[1];
          *v119 = v124;
          v209.m256i_i64[2] = (__int64)v125;
          v119[1].m128i_i64[0] = (__int64)sub_F02110;
          v209.m256i_i64[3] = v126;
          v119[1].m128i_i64[1] = (__int64)sub_F288A0;
          if ( v125 )
            v125(&v209, &v209, 3);
        }
        if ( *(__m128i **)&v213[16] != v215 )
          operator delete(*(void **)&v213[16]);
        v27 = v197;
        *(_BYTE *)(a1 + 1057) = 0;
        if ( v27 != &v199 )
          goto LABEL_52;
        return;
      }
      v155 = v176.m128_u64[0];
      *(_BYTE *)(a1 + 1056) = 0;
      sub_F27760(a1, *(_QWORD *)(v155 + 64));
      v156 = *(unsigned int *)(a1 + 24);
      if ( !(_DWORD)v156 )
        goto LABEL_132;
      v157 = *(_QWORD *)(a1 + 16);
      v182 = 1;
      v158 = v157 + 32 * v156 - 32;
      if ( !*(_QWORD *)(v158 + 16) )
        goto LABEL_176;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, char *))(v158 + 24))(v158, &v182);
        v160 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v160;
        v161 = *(_QWORD *)(a1 + 16) + 32 * v160;
        v162 = *(void (__fastcall **)(__int64, __int64, __int64))(v161 + 16);
        if ( v162 )
          v162(v161, v161, 3);
        v163 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v163 )
          goto LABEL_132;
        v159 = *(_QWORD *)(a1 + 16);
        v182 = 1;
        v158 = v159 + 32 * v163 - 32;
        if ( !*(_QWORD *)(v158 + 16) )
          goto LABEL_176;
      }
    case 8u:
      sub_971800(*(_QWORD *)(a1 + 1096), " deduced");
      v28 = sub_EFF4F0(&v178);
      v29 = j__strlen("underlying");
      sub_F2CE80(a1, "underlying", v29, *((_QWORD *)v28 + 2), a1);
      v30 = j__strlen("defaults");
      v176.m128_u64[0] = a1;
      v4 = *(_BYTE *)(a1 + 1056) == 0;
      v189 = _mm_loadh_ps((const double *)v176.m128_u64);
      if ( v4 )
      {
        v31 = _mm_load_si128((const __m128i *)&v189);
        v209.m256i_i64[0] = a1;
        *(__m128i *)&v209.m256i_u64[1] = v31;
        v209.m256i_i64[3] = (__int64)&v211;
        sub_F009D0(&v209.m256i_i64[3], "defaults", (__int64)&aTagNodefaults[v30 + 6]);
        if ( *(_BYTE *)(a1 + 1057) )
        {
          v95 = _mm_loadu_si128((const __m128i *)&v209.m256i_u64[1]);
          v212 = (const char *)v209.m256i_i64[0];
          *(_QWORD *)&v213[16] = v215;
          *(__m128i *)v213 = v95;
          if ( (__m128i *)v209.m256i_i64[3] == &v211 )
          {
            v215[0] = _mm_loadu_si128(&v211);
          }
          else
          {
            *(_QWORD *)&v213[16] = v209.m256i_i64[3];
            v215[0].m128i_i64[0] = v211.m128i_i64[0];
          }
          v96 = v210;
          v210 = 0;
          v211.m128i_i8[0] = 0;
          v214 = v96;
          v209.m256i_i64[3] = (__int64)&v211;
          v206[0] = nullptr;
          v97 = operator new(0x38u);
          v98 = _mm_loadu_si128((const __m128i *)v213);
          *(_QWORD *)v97 = v212;
          *(_QWORD *)(v97 + 24) = v97 + 40;
          v99 = *(__m128i **)&v213[16];
          *(__m128i *)(v97 + 8) = v98;
          if ( v99 == v215 )
          {
            *(__m128i *)(v97 + 40) = _mm_loadu_si128(v215);
          }
          else
          {
            *(_QWORD *)(v97 + 24) = v99;
            *(_QWORD *)(v97 + 40) = v215[0].m128i_i64[0];
          }
          v205.m128i_i64[0] = v97;
          *(_QWORD *)(v97 + 32) = v214;
          v176.m128_u64[0] = (unsigned __int64)sub_F2C310;
          *(_QWORD *)&v213[16] = v215;
          v214 = 0;
          v100 = _mm_loadh_ps((const double *)v176.m128_u64);
          v215[0].m128i_i8[0] = 0;
          *(__m128 *)v206 = v100;
          sub_AA95F0(a1 + 16, &v205);
          if ( v206[0] )
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v206[0])(&v205, &v205, 3);
        }
        else
        {
          v32 = *(unsigned int *)(a1 + 24);
          v33 = *(_QWORD *)(a1 + 16);
          v187 = 0;
          v34 = v33 + 32 * v32 - 32;
          if ( !*(_QWORD *)(v34 + 16) )
            goto LABEL_176;
          (*(void (__fastcall **)(__int64, char *))(v34 + 24))(v34, &v187);
          v35 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
          *(__m128i *)v213 = _mm_loadu_si128((const __m128i *)&v209.m256i_u64[1]);
          v212 = (const char *)v209.m256i_i64[0];
          *(_QWORD *)&v213[16] = v215;
          if ( (__m128i *)v209.m256i_i64[3] == &v211 )
          {
            v215[0] = _mm_loadu_si128(&v211);
          }
          else
          {
            *(_QWORD *)&v213[16] = v209.m256i_i64[3];
            v215[0].m128i_i64[0] = v211.m128i_i64[0];
          }
          v36 = v210;
          v210 = 0;
          v211.m128i_i8[0] = 0;
          v214 = v36;
          v209.m256i_i64[3] = (__int64)&v211;
          v206[0] = nullptr;
          v37 = operator new(0x38u);
          v38 = _mm_loadu_si128((const __m128i *)v213);
          *(_QWORD *)v37 = v212;
          *(_QWORD *)(v37 + 24) = v37 + 40;
          v39 = *(__m128i **)&v213[16];
          *(__m128i *)(v37 + 8) = v38;
          if ( v39 == v215 )
          {
            *(__m128i *)(v37 + 40) = _mm_loadu_si128(v215);
          }
          else
          {
            *(_QWORD *)(v37 + 24) = v39;
            *(_QWORD *)(v37 + 40) = v215[0].m128i_i64[0];
          }
          v205.m128i_i64[0] = v37;
          v215[0].m128i_i8[0] = 0;
          v40 = _mm_load_si128(&v205);
          *(_QWORD *)(v37 + 32) = v214;
          *(_QWORD *)&v213[16] = v215;
          v214 = 0;
          v205 = _mm_loadu_si128(v35);
          v41 = (void *)v35[1].m128i_i64[0];
          v42 = (void *)v35[1].m128i_i64[1];
          *v35 = v40;
          v206[0] = v41;
          v35[1].m128i_i64[0] = (__int64)sub_F01EE0;
          v206[1] = v42;
          v35[1].m128i_i64[1] = (__int64)sub_F2C310;
          if ( v41 )
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v41)(&v205, &v205, 3);
        }
        if ( *(__m128i **)&v213[16] != v215 )
          operator delete(*(void **)&v213[16]);
        v27 = (__m128i *)v209.m256i_i64[3];
        *(_BYTE *)(a1 + 1057) = 0;
        if ( v27 != &v211 )
          goto LABEL_52;
        return;
      }
      *(_BYTE *)(a1 + 1056) = 0;
      sub_F2BA00(v28, &v189.m128_u16[4]);
      v146 = *(unsigned int *)(a1 + 24);
      if ( !(_DWORD)v146 )
        goto LABEL_132;
      v147 = *(_QWORD *)(a1 + 16);
      LOBYTE(v212) = 1;
      v148 = v147 + 32 * v146 - 32;
      if ( !*(_QWORD *)(v148 + 16) )
        goto LABEL_176;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, const char **))(v148 + 24))(v148, &v212);
        v150 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v150;
        v151 = *(_QWORD *)(a1 + 16) + 32 * v150;
        v152 = *(void (__fastcall **)(__int64, __int64, __int64))(v151 + 16);
        if ( v152 )
          v152(v151, v151, 3);
        v153 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v153 )
          goto LABEL_132;
        v149 = *(_QWORD *)(a1 + 16);
        LOBYTE(v212) = 1;
        v148 = v149 + 32 * v153 - 32;
        if ( !*(_QWORD *)(v148 + 16) )
          goto LABEL_176;
      }
  }
}

