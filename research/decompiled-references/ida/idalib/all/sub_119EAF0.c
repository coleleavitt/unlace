__int64 __fastcall sub_119EAF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v9; // rax
  __m128i *p_ptr; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rbp
  __m128 v15; // xmm1
  __int64 v16; // r15
  __m256i *v17; // r14
  __int64 v18; // rsi
  __m128i v19; // xmm1
  __int64 *v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 *v23; // r13
  __int64 v24; // r12
  __m256i *v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 v28; // r12
  __m128i si128; // xmm5
  _QWORD *v30; // r12
  _QWORD *v31; // r15
  char v32; // al
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rbp
  __int64 v37; // rbx
  __int64 v38; // r14
  int v39; // eax
  int v40; // eax
  _BYTE *v41; // rsi
  __int64 v42; // rdx
  std::_V2 *v43; // r12
  _QWORD *v44; // rax
  __m128i v45; // xmm5
  __int64 v46; // r13
  unsigned __int8 **v47; // r14
  const char **v48; // rax
  char *v49; // rdx
  char *v50; // r15
  size_t v51; // rax
  __int64 v52; // rdi
  unsigned __int8 (__fastcall *v53)(__int64, unsigned __int8 **); // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbp
  char v57; // r12
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  unsigned int v64; // esi
  char *v65; // rbp
  __int64 *v66; // r12
  __int64 v67; // rdi
  unsigned int v68; // edx
  _QWORD *v69; // rax
  __int64 v70; // rcx
  __int64 *v71; // rax
  int v72; // esi
  const char *v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rax
  const char *v76; // rbp
  __m128i v77; // xmm6
  int v78; // esi
  __int64 v79; // rax
  __int64 v80; // rbp
  std::_V2 *v81; // r14
  __int64 v82; // rax
  size_t v83; // rdx
  size_t v84; // rbp
  const void *v85; // r12
  __int64 *v86; // rdi
  __int64 v87; // rax
  int v88; // eax
  int v89; // edx
  unsigned __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 *v93; // rsi
  void *v94; // r15
  __int64 v95; // rax
  void (__fastcall *v96)(unsigned __int8 **, __int64 *, unsigned __int8 **); // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rax
  __int64 v101; // rsi
  void (__fastcall *v102)(void **, __int64, unsigned __int8 **, int *); // rax
  __int64 v103; // rdx
  volatile signed __int32 *v104; // rax
  __int64 v105; // rdx
  volatile signed __int32 *v106; // rax
  signed __int64 v107; // rdx
  unsigned __int8 **v108; // r15
  __int64 v109; // rax
  int v110; // eax
  __int64 v111; // rax
  __m128i v112; // xmm6
  _QWORD *v113; // r12
  _QWORD *v114; // r13
  __int64 v115; // r14
  const char **v116; // rax
  char *v117; // rbp
  size_t v118; // rax
  signed __int64 v119; // r15
  _BYTE *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  _QWORD *v123; // rbp
  __int64 v124; // r14
  __m128i v125; // xmm7
  _QWORD *v126; // r12
  _QWORD *v127; // rbp
  __int64 v128; // r15
  const char **v129; // rax
  char *v130; // r13
  size_t v131; // rax
  signed __int64 v132; // r14
  _BYTE *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  _QWORD *v136; // r15
  __int64 v137; // r13
  __int64 v138; // rax
  char *v139; // rbp
  __int64 v140; // rax
  char *v142; // rax
  signed __int64 v143; // rdx
  char *v144; // rax
  signed __int64 v145; // rdx
  __int64 v146; // r12
  __int64 v147; // rdi
  int v148; // eax
  int v149; // edx
  __int64 v150; // rdi
  int v151; // edx
  __int64 v152; // rbp
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  const char *v157; // r12
  void *v158; // r13
  char *v159; // rax
  const char *v160; // rax
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  int v166; // edx
  unsigned __int64 v167; // rax
  unsigned __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rbp
  __int64 j; // r12
  unsigned __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rbp
  __int64 i; // r12
  __int64 v176; // rdi
  unsigned __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rbp
  __int64 v180; // r13
  unsigned __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rbp
  __int64 v184; // r13
  _BYTE *v185; // rdx
  _BYTE *v186; // rbp
  std::_V2 *v187; // r14
  void *v188; // rax
  void *v189; // rdx
  int v190; // edx
  int v191; // eax
  _BYTE *v192; // rsi
  __int64 v193; // rdx
  std::_V2 *v194; // r14
  __int64 v195; // r15
  __int64 v196; // rax
  void *v197; // rdi
  __int64 v198; // rbp
  __int64 v199; // rax
  signed __int64 v200; // rdx
  unsigned __int8 **v201; // r15
  unsigned __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // r15
  __int64 v205; // rsi
  std::_V2 *v206; // r14
  char *v207; // rsi
  unsigned __int64 v208; // rax
  char *v209; // rcx
  __int64 v210; // r8
  std::_V2 *v211; // r14
  __int64 v212; // rax
  size_t v213; // rsi
  __int64 v214; // r13
  __int64 v215; // rdi
  __int64 v216; // rdx
  __int64 v217; // rdi
  __int64 v218; // rax
  __int64 v219; // rax
  int v220; // r10d
  _QWORD *v221; // r11
  void *v222; // rdi
  __int64 v223; // rcx
  bool v224; // zf
  _BYTE *v225; // rax
  __int64 v226; // rdx
  __int64 v227; // r15
  __int64 v228; // rax
  __int64 v229; // rax
  _BYTE *v230; // rsi
  __int64 v231; // rdx
  std::_V2 *v232; // r15
  __int64 v233; // r13
  __int64 v234; // rax
  __int64 v235; // rax
  __m128i v239; // [rsp+20h] [rbp-288h] BYREF
  __int64 v240; // [rsp+30h] [rbp-278h]
  void **v241; // [rsp+38h] [rbp-270h]
  std::_V2 *v242; // [rsp+40h] [rbp-268h]
  __int64 v243; // [rsp+48h] [rbp-260h]
  __int64 v244; // [rsp+50h] [rbp-258h]
  __int64 v245; // [rsp+58h] [rbp-250h]
  unsigned __int8 **v246; // [rsp+60h] [rbp-248h]
  __m128i *v247; // [rsp+68h] [rbp-240h]
  int v248; // [rsp+74h] [rbp-234h]
  _BYTE *v249; // [rsp+78h] [rbp-230h]
  char **v250; // [rsp+80h] [rbp-228h]
  volatile signed __int32 *v251; // [rsp+88h] [rbp-220h]
  int v252; // [rsp+90h] [rbp-218h] BYREF
  __int64 v253; // [rsp+98h] [rbp-210h]
  void *v254[2]; // [rsp+A0h] [rbp-208h] BYREF
  _BYTE v255[16]; // [rsp+B0h] [rbp-1F8h] BYREF
  __m128i v256; // [rsp+C0h] [rbp-1E8h] BYREF
  __int64 v257; // [rsp+D0h] [rbp-1D8h]
  __int16 v258; // [rsp+E0h] [rbp-1C8h]
  __m128i v259; // [rsp+F0h] [rbp-1B8h] BYREF
  __int64 v260; // [rsp+100h] [rbp-1A8h]
  __int64 v261; // [rsp+108h] [rbp-1A0h]
  __int16 v262; // [rsp+110h] [rbp-198h]
  void *v263[2]; // [rsp+120h] [rbp-188h] BYREF
  char *v264; // [rsp+130h] [rbp-178h] BYREF
  char v265[8]; // [rsp+138h] [rbp-170h] BYREF
  __int16 v266; // [rsp+140h] [rbp-168h]
  void *v267[2]; // [rsp+170h] [rbp-138h] BYREF
  __int64 v268; // [rsp+180h] [rbp-128h]
  _QWORD *v269; // [rsp+188h] [rbp-120h]
  __int16 v270; // [rsp+190h] [rbp-118h]
  char v271; // [rsp+1C8h] [rbp-E0h]
  __m256i ptr; // [rsp+1D0h] [rbp-D8h] BYREF
  __int64 v273; // [rsp+1F0h] [rbp-B8h]

  v9 = *(_QWORD *)(a1 + 24);
  p_ptr = (__m128i *)&ptr;
  v243 = a1;
  LODWORD(v9) = *(_DWORD *)(v9 + 60);
  v245 = a2;
  v240 = a4;
  *(__m128i *)ptr.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_23A9A20);
  v248 = v9;
  ptr.m256i_i64[2] = 0x4AF0000037DLL;
  v11 = sub_21B6DA0(a5, &ptr, 6);
  v12 = *(_QWORD *)(a5 + 8);
  v268 = 0x4AF0000037DLL;
  v273 = 0x4AF0000037DLL;
  v13 = v12 + 8LL * (unsigned int)v11;
  v14 = v12 + 8 * HIDWORD(v11);
  *(__m128i *)v267 = _mm_load_si128((const __m128i *)&xmmword_23A9A20);
  v239.m128i_i64[0] = v14;
  *(_OWORD *)&ptr.m256i_u64[2] = *(_OWORD *)v267;
  v15 = _mm_loadh_ps((const double *)v239.m128i_i64);
  *(__m128 *)ptr.m256i_i8 = v15;
  if ( v13 != v14 )
  {
    do
    {
      v16 = *(_QWORD *)v13;
      v17 = &ptr;
      if ( *(_QWORD *)v13 )
      {
        do
        {
          v18 = v17->m256i_u32[4];
          if ( !(_DWORD)v18 )
            break;
          if ( (unsigned __int8)sub_21B9810(v16, v18) )
          {
            v239.m128i_i64[0] = v14;
            v15 = _mm_loadh_ps((const double *)v239.m128i_i64);
            goto LABEL_8;
          }
          v17 = (__m256i *)((char *)v17 + 4);
        }
        while ( &ptr.m256i_u64[3] != (unsigned __int64 *)v17 );
      }
      v13 += 8;
      ptr.m256i_i64[0] = v13;
    }
    while ( v14 != v13 );
    v239.m128i_i64[0] = v14;
    v19 = _mm_loadl_epi64(&v239);
    v15 = (__m128)_mm_unpacklo_epi64(v19, v19);
  }
LABEL_8:
  *(__m128 *)ptr.m256i_i8 = v15;
  if ( v14 == v13 )
    goto LABEL_19;
  v20 = (__int64 *)v14;
  v239.m128i_i64[0] = (__int64)&ptr.m256i_i64[3];
LABEL_10:
  v21 = *(_QWORD *)v13;
  v22 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
  if ( !v22 )
    v22 = *(_QWORD *)v13;
  v23 = (__int64 *)(v13 + 8);
  *(_BYTE *)(v22 + 44) |= 1u;
  for ( ptr.m256i_i64[0] = (__int64)v23; v20 != v23; ptr.m256i_i64[0] = (__int64)v23 )
  {
    v24 = *v23;
    v25 = &ptr;
    if ( *v23 )
    {
      do
      {
        v26 = v25->m256i_u32[4];
        if ( !(_DWORD)v26 )
          break;
        if ( (unsigned __int8)sub_21B9810(v24, v26) )
        {
          v13 = ptr.m256i_i64[0];
          if ( v20 != (__int64 *)ptr.m256i_i64[0] )
            goto LABEL_10;
          goto LABEL_18;
        }
        v25 = (__m256i *)((char *)v25 + 4);
      }
      while ( v25 != (__m256i *)v239.m128i_i64[0] );
    }
    ++v23;
  }
LABEL_18:
  v27 = v21;
  if ( sub_10DCD30(a5, 0x185u) )
  {
LABEL_19:
    v242 = (std::_V2 *)v267;
  }
  else
  {
    v203 = sub_10DCD30(a5, 0xC6Du);
    v242 = (std::_V2 *)v267;
    if ( !v203 && !sub_10DCD30(a5, 0x16Du) )
    {
      v204 = v240;
      if ( *(_DWORD *)(v240 + 16) != 2 )
      {
        sub_FC70B0((__int64)&ptr, *(_QWORD *)v240, 0, 324);
        v205 = *(_QWORD *)(v27 + 16);
        if ( !v205 )
          v205 = v27;
        v206 = v242;
        sub_21B5FF0(v242, v205, a5);
        sub_AEC220((unsigned __int8 **)&ptr, (_BYTE *)v267[0], (signed __int64)v267[1]);
        v207 = "/E, /P or /EP";
        if ( *(_DWORD *)(v204 + 16) != 3 )
          v207 = "-E";
        sub_1188FA0((unsigned __int8 **)&ptr, (__int64)v207);
        if ( v267[0] != (char *)v206 + 16 )
          operator delete(v267[0]);
        sub_AEA040((__int64)&ptr);
      }
    }
  }
  sub_118FCD0(a5, a6, 0xF7u);
  sub_118FCD0(a5, a6, 0xB0u);
  v244 = sub_10DCD30(a5, 0x9C8u);
  if ( v244 )
  {
    v28 = sub_10DCD30(a5, 0x9B4u);
    if ( v28 )
    {
LABEL_22:
      sub_10DC5D0(a6, (__int64)"-w");
      goto LABEL_23;
    }
    v235 = sub_10DCD30(a5, 0x927u);
    v198 = v244;
    v244 = v235;
LABEL_361:
    v28 = v244;
    v244 = v198;
    goto LABEL_22;
  }
  v198 = sub_10DCD30(a5, 0xBAEu);
  v199 = sub_10DCD30(a5, 0x9B4u);
  v244 = v199;
  if ( v199 )
  {
    if ( v198 )
      goto LABEL_361;
    v28 = v199;
  }
  else
  {
    v244 = sub_10DCD30(a5, 0x927u);
    if ( v198 )
      goto LABEL_361;
    if ( !v244 )
    {
      if ( !sub_10DCD30(a5, 0x961u) )
        goto LABEL_48;
LABEL_46:
      sub_FC70B0((__int64)p_ptr, *(_QWORD *)v240, 0, 416);
      sub_AEA040((__int64)p_ptr);
LABEL_47:
      sub_10DC5D0(a6, (__int64)"-MG");
      goto LABEL_48;
    }
    v28 = v244;
  }
LABEL_23:
  if ( *(_DWORD *)(a3 + 64) == 8 )
  {
LABEL_24:
    sub_21B7CF0(a5, 3081);
    sub_21B7CF0(a5, 3015);
    sub_21B7CF0(a5, 3086);
    goto LABEL_25;
  }
  v59 = sub_10DCD30(a5, 0x958u);
  if ( v59 )
  {
    v63 = v245;
    v64 = *(_DWORD *)(v245 + 432);
    v65 = **(char ***)(v59 + 48);
    v66 = (__int64 *)(v245 + 416);
    v267[0] = (void *)a3;
    if ( v64 )
    {
      v61 = v64 - 1;
      v67 = *(_QWORD *)(v245 + 416);
      v68 = v61 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
      v69 = (_QWORD *)(v67 + 16LL * v68);
      v70 = *v69;
      if ( a3 == *v69 )
      {
LABEL_88:
        v71 = v69 + 1;
LABEL_89:
        *v71 = (__int64)v65;
        goto LABEL_90;
      }
      v220 = 1;
      v221 = nullptr;
      if ( v70 != -4096 )
      {
        while ( 1 )
        {
          if ( v70 == -8192 && !v221 )
            v221 = v69;
          v62 = (unsigned int)(v220 + 1);
          v68 = v61 & (v220 + v68);
          v69 = (_QWORD *)(v67 + 16LL * v68);
          v70 = *v69;
          if ( a3 == *v69 )
            goto LABEL_88;
          if ( v70 == -4096 )
          {
            if ( v221 )
              v69 = v221;
            break;
          }
          ++v220;
        }
      }
      ptr.m256i_i64[0] = (__int64)v69;
      v60 = (unsigned int)(*(_DWORD *)(v245 + 424) + 1);
      v239.m128i_i32[0] = *(_DWORD *)(v245 + 424);
      v63 = 3 * v64;
      if ( 4 * (int)v60 < (unsigned int)v63 )
      {
        v61 = v64 >> 3;
        v222 = (void *)a3;
        v63 = v64 - *(_DWORD *)(v245 + 428) - (unsigned int)v60;
        if ( (unsigned int)v63 > (unsigned int)v61 )
        {
LABEL_339:
          v223 = v245;
          v224 = *v69 == -4096;
          *(_DWORD *)(v245 + 424) = v60;
          if ( !v224 )
            --*(_DWORD *)(v223 + 428);
          *v69 = v222;
          v69[1] = 0;
          goto LABEL_88;
        }
LABEL_344:
        sub_10F0F00(v245 + 416, v64, v60, v63, v61, v62);
        sub_1192E90(v66, (__int64 *)v242, &ptr);
        v222 = v267[0];
        v239.m128i_i32[0] = *(_DWORD *)(v245 + 424);
        LODWORD(v60) = v239.m128i_i32[0] + 1;
        v69 = (_QWORD *)ptr.m256i_i64[0];
        goto LABEL_339;
      }
    }
    else
    {
      ptr.m256i_i64[0] = 0;
    }
    v64 *= 2;
    goto LABEL_344;
  }
  if ( *(_DWORD *)(a7 + 24) == 62 )
  {
    v65 = *(char **)a7;
    goto LABEL_90;
  }
  v65 = "-";
  if ( v28 )
  {
    v65 = (char *)sub_118EFC0(a5, a8);
    ptr.m256i_i64[0] = a3;
    v71 = sub_10F1110(v245 + 416, ptr.m256i_i64, v162, v163, v164, v165);
    goto LABEL_89;
  }
LABEL_90:
  sub_10DC5D0(a6, (__int64)"-dependency-file");
  sub_10DC5D0(a6, (__int64)v65);
  if ( (*(_BYTE *)(a3 + 60) & 8) != 0 || *(_DWORD *)(a3 + 64) == 8 )
    goto LABEL_24;
LABEL_25:
  sub_10DF020((__int64)v242, a5, 0xB67u, 0xB04u);
  v239.m128i_i64[0] = (__int64)&ptr;
  si128 = _mm_load_si128((const __m128i *)v267);
  v241 = v263;
  v30 = v269;
  v259 = si128;
  v31 = (_QWORD *)si128.m128i_i64[0];
  v260 = v268;
  v32 = 0;
  if ( v269 == (_QWORD *)si128.m128i_i64[0] )
  {
LABEL_101:
    p_ptr = (__m128i *)v239.m128i_i64[0];
    if ( !v32 )
    {
      v75 = sub_10DE660(a5, 0xC2Cu, 0x62Cu);
      if ( !v75 || *(_DWORD *)(a7 + 24) == 62 )
      {
        v185 = nullptr;
        v186 = *(_BYTE **)(*a8 + 32);
        if ( v186 )
          v185 = &v186[j__strlen(*(const char **)(*a8 + 32))];
        ptr.m256i_i64[0] = (__int64)&p_ptr[1].m128i_i64[1];
        v239 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        *(__m128i *)&ptr.m256i_u64[1] = v239;
        sub_A1FE50(p_ptr, v186, v185);
        v187 = v242;
        v267[0] = "o";
        v270 = 259;
        sub_228A730(p_ptr, v242, 0);
        v188 = (void *)sub_228AA60(ptr.m256i_i64[0], ptr.m256i_i64[1], 0);
        v270 = 261;
        v267[0] = v188;
        v267[1] = v189;
        v76 = (const char *)sub_10DA6C0(a5, (__int64)v187);
        if ( (unsigned __int64 *)ptr.m256i_i64[0] != &p_ptr[1].m128i_u64[1] )
          free((void *)ptr.m256i_i64[0]);
      }
      else
      {
        v76 = **(const char ***)(v75 + 48);
        v239 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      }
      sub_10DC5D0(a6, (__int64)"-MT");
      v77 = _mm_load_si128(&v239);
      v78 = 0;
      ptr.m256i_i64[0] = (__int64)&p_ptr[1].m128i_i64[1];
      *(__m128i *)&ptr.m256i_u64[1] = v77;
      if ( v76 )
        v78 = j__strlen(v76);
      sub_FECE00((__int64)v76, v78, p_ptr->m128i_i64);
      v270 = 261;
      *(_OWORD *)v267 = *(_OWORD *)ptr.m256i_i8;
      v79 = sub_10DA6C0(a5, (__int64)v242);
      sub_10DC5D0(a6, v79);
      if ( (unsigned __int64 *)ptr.m256i_i64[0] != &p_ptr[1].m128i_u64[1] )
        free((void *)ptr.m256i_i64[0]);
    }
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        v34 = *(_QWORD *)(*v31 + 16LL);
        v35 = *v31;
        if ( !v34 )
          v34 = *v31;
        *(_BYTE *)(v34 + 44) |= 1u;
        if ( (unsigned __int8)sub_21B9810(v35, 2919) )
        {
          sub_21B5A40(v33, a5, a6);
        }
        else
        {
          sub_10DC5D0(a6, (__int64)"-MT");
          ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
          v72 = 0;
          v73 = **(const char ***)(v33 + 48);
          *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          if ( v73 )
            v72 = j__strlen(v73);
          sub_FECE00((__int64)v73, v72, (__int64 *)v239.m128i_i64[0]);
          v266 = 261;
          *(_OWORD *)v263 = *(_OWORD *)ptr.m256i_i8;
          v74 = sub_10DA6C0(a5, (__int64)v241);
          sub_10DC5D0(a6, v74);
          if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
            free((void *)ptr.m256i_i64[0]);
        }
        v36 = v259.m128i_i64[1];
        v259.m128i_i64[0] = (__int64)++v31;
        if ( v31 == (_QWORD *)v259.m128i_i64[1] )
          break;
        while ( 1 )
        {
          v37 = *v31;
          if ( *v31 )
          {
            if ( (_DWORD)v260
              && ((unsigned __int8)sub_21B9810(*v31, (unsigned int)v260)
               || HIDWORD(v260) && (unsigned __int8)sub_21B9810(v37, HIDWORD(v260))) )
            {
              break;
            }
          }
          v259.m128i_i64[0] = (__int64)++v31;
          if ( (_QWORD *)v36 == v31 )
            goto LABEL_37;
        }
        v31 = (_QWORD *)v259.m128i_i64[0];
        v32 = 1;
        if ( v30 == (_QWORD *)v259.m128i_i64[0] )
          goto LABEL_101;
      }
LABEL_37:
      ;
    }
    while ( v30 != v31 );
    p_ptr = (__m128i *)v239.m128i_i64[0];
  }
  v38 = v244;
  if ( (unsigned __int8)sub_21B9810(v244, 2990) || (unsigned __int8)sub_21B9810(v38, 2343) )
  {
    sub_10DC5D0(a6, (__int64)"-sys-header-deps");
    if ( *(_DWORD *)(a3 + 8) != 4 )
      goto LABEL_42;
  }
  else if ( *(_DWORD *)(a3 + 8) != 4 )
  {
    goto LABEL_42;
  }
  if ( sub_10DCD30(a5, 0x4BFu) )
  {
LABEL_42:
    if ( !sub_10DCD30(a5, 0x3A5u) )
      goto LABEL_44;
  }
  sub_10DC5D0(a6, (__int64)"-module-file-deps");
LABEL_44:
  if ( sub_10DCD30(a5, 0x961u) )
  {
    if ( !(unsigned __int8)sub_21B9810(v244, 2343) && !(unsigned __int8)sub_21B9810(v244, 2484) )
      goto LABEL_47;
    goto LABEL_46;
  }
LABEL_48:
  sub_118FCD0(a5, a6, 0xB01u);
  sub_118FCD0(a5, a6, 0xB93u);
  v39 = *(_DWORD *)(a3 + 60);
  if ( (v39 & 2) != 0 || *(_DWORD *)(a3 + 64) == 2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v243 + 24) + 680LL))(
      *(_QWORD *)(v243 + 24),
      a5,
      a6);
    v39 = *(_DWORD *)(a3 + 60);
  }
  if ( (v39 & 8) != 0 || *(_DWORD *)(a3 + 64) == 8 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v243 + 24) + 688LL))(
      *(_QWORD *)(v243 + 24),
      a5,
      a6);
    v39 = *(_DWORD *)(a3 + 60);
  }
  if ( (v39 & 0x10) != 0 || (v40 = *(_DWORD *)(a3 + 64), v40 == 16) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v243 + 24) + 696LL))(
      *(_QWORD *)(v243 + 24),
      a5,
      a6);
    if ( *(_DWORD *)(a3 + 64) != 4 )
      goto LABEL_55;
  }
  else if ( v40 != 4 )
  {
LABEL_55:
    v247 = &v259;
    goto LABEL_56;
  }
  v109 = sub_10DCD30(a5, 0xBEDu);
  v247 = &v259;
  if ( !v109 )
  {
    if ( (unsigned __int8)sub_21B7850(a5, 3085, 3016, 1) )
    {
      v110 = *(_DWORD *)(*(_QWORD *)(v243 + 24) + 48LL);
      if ( ((v110 - 25) & 0xFFFFFFEE) == 0 || (unsigned int)(v110 - 49) <= 2 )
      {
        v111 = sub_10DCD30(a5, 0xBD9u);
        v247 = &v259;
        if ( !v111 )
        {
          ptr.m256i_i64[0] = (__int64)&p_ptr[1].m128i_i64[1];
          v230 = *(_BYTE **)(v240 + 248);
          v231 = *(_QWORD *)(v240 + 256);
          *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          sub_A1FE50(p_ptr, v230, &v230[v231]);
          v232 = v242;
          v233 = (__int64)v247;
          v270 = 257;
          v266 = 257;
          v262 = 257;
          v258 = 259;
          v256.m128i_i64[0] = (__int64)"include";
          sub_228A3B0(p_ptr, &v256, v247, v263, v242);
          v262 = 257;
          v256.m128i_i64[0] = (__int64)"openmp_wrappers";
          v270 = 257;
          v266 = 257;
          v258 = 259;
          sub_228A3B0(p_ptr, &v256, v233, v263, v232);
          sub_10DC5D0(a6, (__int64)"-internal-isystem");
          v270 = 261;
          *(_OWORD *)v267 = *(_OWORD *)ptr.m256i_i8;
          v234 = sub_10DA6C0(a5, (__int64)v232);
          sub_10DC5D0(a6, v234);
          if ( (unsigned __int64 *)ptr.m256i_i64[0] != &p_ptr[1].m128i_u64[1] )
            free((void *)ptr.m256i_i64[0]);
        }
        sub_10DC5D0(a6, (__int64)"-include");
        sub_10DC5D0(a6, (__int64)"__clang_openmp_device_functions.h");
      }
    }
  }
LABEL_56:
  if ( sub_10DCD30(a5, 0x5FDu) )
  {
    v41 = *(_BYTE **)(v240 + 248);
    v42 = *(_QWORD *)(v240 + 256);
    *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr.m256i_i64[0] = (__int64)&p_ptr[1].m128i_i64[1];
    sub_A1FE50(p_ptr, v41, &v41[v42]);
    v270 = 257;
    v43 = v242;
    v266 = 257;
    v259.m128i_i64[0] = (__int64)"llvm_offload_wrappers";
    v258 = 259;
    v262 = 259;
    v256.m128i_i64[0] = (__int64)"include";
    sub_228A3B0(p_ptr, &v256, v247, v263, v242);
    v270 = 261;
    v263[0] = "-internal-isystem";
    *(_OWORD *)v267 = *(_OWORD *)ptr.m256i_i8;
    v263[1] = (void *)sub_10DA6C0(a5, (__int64)v43);
    v264 = "-include";
    sub_118FFD0(a6, v263, v265);
    if ( *(_DWORD *)(a3 + 64) == 4 )
      sub_10DC5D0(a6, (__int64)"__llvm_offload_device.h");
    else
      sub_10DC5D0(a6, (__int64)"__llvm_offload_host.h");
    if ( (unsigned __int64 *)ptr.m256i_i64[0] != &p_ptr[1].m128i_u64[1] )
      free((void *)ptr.m256i_i64[0]);
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v243 + 24) + 8LL) + 16LL) == 3 )
  {
    v152 = sub_10DCD30(a5, 0xDB8u);
    v153 = sub_10DCD30(a5, 0xDBBu);
    if ( v152 )
    {
      v239.m128i_i32[0] = *(_DWORD *)(a3 + 8);
      if ( (unsigned int)(v239.m128i_i32[0] - 4) <= 5 )
      {
        ptr.m256i_i64[0] = (__int64)"-building-pch-with-obj";
        LOWORD(v273) = 259;
        v218 = sub_10DA6C0(a5, (__int64)p_ptr);
        sub_10DC5D0(a6, v218);
        if ( (unsigned __int8)sub_21B7850(a5, 1602, 1274, 1) )
        {
          ptr.m256i_i64[0] = (__int64)"-fpch-instantiate-templates";
          LOWORD(v273) = 259;
          v219 = sub_10DA6C0(a5, (__int64)p_ptr);
          sub_10DC5D0(a6, v219);
        }
      }
      v157 = **(const char ***)(v152 + 48);
    }
    else
    {
      if ( !v153 )
        goto LABEL_62;
      v157 = **(const char ***)(v153 + 48);
    }
    if ( v157 )
    {
      v158 = (void *)j__strlen(v157);
      if ( *(_DWORD *)(a3 + 8) == 4 )
        goto LABEL_229;
      sub_10DC5D0(a6, (__int64)"-include-pch");
      if ( v158 )
      {
        v209 = (char *)v157;
        v210 = (__int64)v158;
LABEL_317:
        v211 = v242;
        sub_10DCE40(v242, v240, v245, v209, v210);
        LOWORD(v273) = 260;
        ptr.m256i_i64[0] = (__int64)v211;
        v212 = sub_10DA6C0(a5, (__int64)p_ptr);
        sub_10DC5D0(a6, v212);
        if ( v267[0] != (char *)v211 + 16 )
          operator delete(v267[0]);
LABEL_229:
        if ( v158 )
        {
          v267[0] = (void *)v157;
          v160 = "-pch-through-header=";
          v270 = 261;
          v267[1] = v158;
LABEL_233:
          v263[0] = (void *)v160;
          v266 = 259;
          sub_A41580(p_ptr, (const __m128i *)v263, (const __m128i *)v242, v154, v155, v156);
          v161 = sub_10DA6C0(a5, (__int64)p_ptr);
          sub_10DC5D0(a6, v161);
          goto LABEL_62;
        }
LABEL_230:
        v159 = (char *)"create";
        if ( !v152 )
          v159 = "use";
        v267[0] = v159;
        v270 = 259;
        v160 = "-pch-through-hdrstop-";
        goto LABEL_233;
      }
    }
    else
    {
      if ( *(_DWORD *)(a3 + 8) == 4 )
        goto LABEL_230;
      sub_10DC5D0(a6, (__int64)"-include-pch");
    }
    v213 = 0;
    v214 = *(_QWORD *)(*a8 + 32);
    if ( v214 )
      v213 = j__strlen(*(const char **)(*a8 + 32));
    v215 = v214;
    v158 = nullptr;
    v209 = (char *)sub_228AA60(v215, v213, 0);
    v210 = v216;
    goto LABEL_317;
  }
LABEL_62:
  sub_10DC500((__int64)v247, a5, 0x17u);
  LOBYTE(v244) = 0;
  v44 = (_QWORD *)v259.m128i_i64[0];
  v45 = _mm_load_si128(&v259);
  v257 = v260;
  v256 = v45;
  if ( v261 != v259.m128i_i64[0] )
  {
    v241 = (void **)&v256;
    v46 = v240;
    v246 = (unsigned __int8 **)v263;
    v47 = (unsigned __int8 **)v242;
    v250 = &v264;
    v239.m128i_i64[0] = v261;
    do
    {
      v56 = *v44;
      v57 = sub_21B9810(*v44, 2156);
      if ( !v57 || (*(_BYTE *)(v46 + 1168) & 2) == 0 )
      {
        if ( !(unsigned __int8)sub_21B9810(v56, 2169)
          && !(unsigned __int8)sub_21B9810(v56, 3305)
          && !(unsigned __int8)sub_21B9810(v56, 2130) )
        {
          goto LABEL_79;
        }
        goto LABEL_73;
      }
      v48 = *(const char ***)(v56 + 48);
      v49 = nullptr;
      v50 = (char *)*v48;
      if ( *v48 )
        v49 = &v50[j__strlen(*v48)];
      ptr.m256i_i64[0] = (__int64)&p_ptr[1].m128i_i64[1];
      *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      sub_A1FE50(p_ptr, v50, v49);
      v51 = j__strlen(".dummy");
      sub_A1FE50(p_ptr, ".dummy", &aDummy[v51]);
      v270 = 259;
      v267[0] = "pch";
      sub_228A730(p_ptr, v47, 0);
      v52 = *(_QWORD *)(v46 + 8);
      v53 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 **))(*(_QWORD *)v52 + 96LL);
      *(_OWORD *)v267 = *(_OWORD *)ptr.m256i_i8;
      v270 = 261;
      if ( v53(v52, v47) )
        goto LABEL_67;
      v267[0] = "gch";
      v270 = 259;
      sub_228A730(p_ptr, v47, 0);
      v93 = *(__int64 **)(v46 + 8);
      v94 = (void *)ptr.m256i_i64[1];
      v95 = *v93;
      v249 = (_BYTE *)ptr.m256i_i64[0];
      v96 = *(void (__fastcall **)(unsigned __int8 **, __int64 *, unsigned __int8 **))(v95 + 40);
      v266 = 261;
      *(_OWORD *)v263 = *(_OWORD *)ptr.m256i_i8;
      v96(v47, v93, v246);
      if ( (v271 & 1) != 0 )
        goto LABEL_149;
      if ( !(unsigned __int8)sub_225AED0(v47, v93, v97, v98, v99) )
      {
        if ( !(unsigned __int8)sub_118FA80(v46, (__int64)v249, (__int64)v94) )
        {
          sub_FC70B0((__int64)v246, *(_QWORD *)v46, 0, 589);
          v200 = (signed __int64)v94;
          v201 = v246;
          sub_AEC220(v246, v249, v200);
          sub_AEA040((__int64)v201);
          if ( (v271 & 1) == 0 )
            goto LABEL_147;
          goto LABEL_149;
        }
LABEL_284:
        if ( (v271 & 1) == 0 && v267[0] != v47 + 2 )
          operator delete(v267[0]);
LABEL_67:
        if ( (_BYTE)v244 )
        {
          sub_FC70B0((__int64)v47, *(_QWORD *)v46, 0, 590);
          sub_AEC220(v47, ptr.m256i_i64[0], ptr.m256i_i64[1]);
          sub_21B5FF0(v246, v56, a5);
          sub_AEC220(v47, (_BYTE *)v263[0], (signed __int64)v263[1]);
          if ( v263[0] != v250 )
            operator delete(v263[0]);
          sub_AEA040((__int64)v47);
          goto LABEL_149;
        }
        v54 = *(_QWORD *)(v56 + 16);
        if ( !v54 )
          v54 = v56;
        *(_BYTE *)(v54 + 44) |= 1u;
        sub_10DC5D0(a6, (__int64)"-include-pch");
        *(_OWORD *)v267 = *(_OWORD *)ptr.m256i_i8;
        v270 = 261;
        v55 = sub_10DA6C0(a5, (__int64)v47);
        sub_10DC5D0(a6, v55);
        if ( (unsigned __int64 *)ptr.m256i_i64[0] != &p_ptr[1].m128i_u64[1] )
          free((void *)ptr.m256i_i64[0]);
        LOBYTE(v244) = v57;
        goto LABEL_73;
      }
      v252 = 0;
      v100 = std::_V2::system_category((std::_V2 *)v47);
      v101 = *(_QWORD *)(v46 + 8);
      v253 = v100;
      v102 = *(void (__fastcall **)(void **, __int64, unsigned __int8 **, int *))(*(_QWORD *)v101 + 64LL);
      v266 = 261;
      v263[0] = v249;
      v263[1] = v94;
      v102(v254, v101, v246, &v252);
      while ( !v252 && v254[0] )
      {
        if ( (unsigned __int8)sub_118FA80(v46, *((_QWORD *)v254[0] + 1), *((_QWORD *)v254[0] + 2)) )
        {
          if ( v254[1] )
            sub_4343A0((volatile signed __int32 *)v254[1]);
          goto LABEL_284;
        }
        v252 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v254[0] + 16LL))(v254[0]);
        v253 = v103;
        if ( !*((_QWORD *)v254[0] + 2) )
        {
          v104 = (volatile signed __int32 *)v254[1];
          *(_OWORD *)v254 = 0;
          if ( v104 )
          {
            if ( &_pthread_key_create )
            {
              if ( !_InterlockedSub(v104 + 2, 1u) )
              {
LABEL_141:
                v105 = *(_QWORD *)v104;
                v251 = v104;
                (*(void (__fastcall **)(volatile signed __int32 *))(v105 + 16))(v104);
                v106 = v251;
                if ( &_pthread_key_create )
                {
                  if ( !_InterlockedSub(v251 + 3, 1u) )
                    goto LABEL_143;
                }
                else
                {
                  v166 = *((_DWORD *)v251 + 3);
                  *((_DWORD *)v251 + 3) = v166 - 1;
                  if ( v166 == 1 )
LABEL_143:
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v106 + 24LL))(v106);
                }
              }
            }
            else
            {
              v151 = *((_DWORD *)v104 + 2);
              *((_DWORD *)v104 + 2) = v151 - 1;
              if ( v151 == 1 )
                goto LABEL_141;
            }
          }
        }
      }
      if ( v254[1] )
        sub_4343A0((volatile signed __int32 *)v254[1]);
      sub_FC70B0((__int64)v246, *(_QWORD *)v46, 0, 588);
      v107 = (signed __int64)v94;
      v108 = v246;
      sub_AEC220(v246, v249, v107);
      sub_AEA040((__int64)v108);
      if ( (v271 & 1) == 0 )
      {
LABEL_147:
        if ( v267[0] != v47 + 2 )
          operator delete(v267[0]);
      }
LABEL_149:
      if ( (unsigned __int64 *)ptr.m256i_i64[0] != &p_ptr[1].m128i_u64[1] )
        free((void *)ptr.m256i_i64[0]);
      LOBYTE(v244) = v57;
LABEL_79:
      v58 = *(_QWORD *)(v56 + 16);
      if ( !v58 )
        v58 = v56;
      *(_BYTE *)(v58 + 44) |= 1u;
      sub_21B5A40(v56, a5, a6);
LABEL_73:
      v256.m128i_i64[0] += 8;
      sub_10DFFA0((__int64)v241);
      v44 = (_QWORD *)v256.m128i_i64[0];
    }
    while ( v239.m128i_i64[0] != v256.m128i_i64[0] );
  }
  ptr.m256i_i64[0] = 0xD2300000144LL;
  ptr.m256i_i64[1] = 0x7BC00000005LL;
  ptr.m256i_i32[4] = 332;
  sub_21B6650(a5, a6, p_ptr, 5);
  sub_21B6F20(a5, a6, 3460, 3506, 0);
  v80 = sub_10DCD30(a5, 0x850u);
  if ( v80 )
  {
    sub_FC70B0((__int64)p_ptr, *(_QWORD *)v240, 0, 318);
    v81 = v242;
    sub_21B5FF0(v242, v80, a5);
    sub_AEC220((unsigned __int8 **)p_ptr, (_BYTE *)v267[0], (signed __int64)v267[1]);
    if ( v267[0] != (char *)v81 + 16 )
      operator delete(v267[0]);
    sub_AEA040((__int64)p_ptr);
  }
  v82 = sub_10D4C90(v245);
  v84 = v83;
  v85 = (const void *)v82;
  if ( (j__strlen(&byte_22F0C30) != v83 || v84 && memcmp(v85, &byte_22F0C30, v84)) && !sub_10DCD30(a5, 0x878u) )
  {
    sub_10DC5D0(a6, (__int64)"-isysroot");
    LOWORD(v273) = 261;
    v91 = *(_QWORD *)(v245 + 80);
    ptr.m256i_i64[0] = (__int64)v85;
    ptr.m256i_i64[1] = v84;
    v92 = sub_10DA6C0(v91, (__int64)p_ptr);
    sub_10DC5D0(a6, v92);
  }
  sub_11C1900(a5, a6, "-I", "CPATH");
  sub_11C1900(a5, a6, "-c-isystem", "C_INCLUDE_PATH");
  sub_11C1900(a5, a6, "-cxx-isystem", "CPLUS_INCLUDE_PATH");
  sub_11C1900(a5, a6, "-objc-isystem", "OBJC_INCLUDE_PATH");
  sub_11C1900(a5, a6, "-objcxx-isystem", "OBJCPLUS_INCLUDE_PATH");
  if ( (unsigned __int8)sub_12CCC80(*(unsigned int *)(*a8 + 24)) )
  {
    v146 = sub_10DCD30(a5, 0xCE9u);
    v147 = *(_QWORD *)(v243 + 24);
    if ( !v146 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v147 + 632LL))(v147, a5, a6);
      v148 = *(_DWORD *)(a3 + 60);
      if ( (v148 & 2) != 0 )
      {
        ptr.m256i_i32[0] = 2;
      }
      else
      {
        v149 = *(_DWORD *)(a3 + 64);
        if ( v149 == 2 )
        {
          v176 = *(_QWORD *)(sub_10E0B00(v245) + 40);
          goto LABEL_249;
        }
        if ( (v148 & 8) == 0 )
        {
LABEL_215:
          if ( v149 != 8 )
            goto LABEL_216;
          v176 = *(_QWORD *)(sub_10E0B00(v245) + 40);
          if ( v146 )
          {
LABEL_298:
            sub_1133760(v176, a5, a6);
            v148 = *(_DWORD *)(a3 + 60);
LABEL_216:
            if ( (v148 & 4) == 0 )
            {
LABEL_217:
              if ( *(_DWORD *)(a3 + 64) != 4 )
                goto LABEL_218;
              v217 = *(_QWORD *)(sub_10E0B00(v245) + 40);
              if ( v146 )
              {
                sub_1133760(v217, a5, a6);
                v148 = *(_DWORD *)(a3 + 60);
LABEL_218:
                if ( (v148 & 0x10) == 0 )
                  goto LABEL_219;
                goto LABEL_254;
              }
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v217 + 632LL))(v217, a5, a6);
LABEL_253:
              if ( (*(_DWORD *)(a3 + 60) & 0x10) == 0 )
              {
LABEL_219:
                if ( *(_DWORD *)(a3 + 64) == 16 )
                {
                  v150 = *(_QWORD *)(sub_10E0B00(v245) + 40);
                  if ( v146 )
                    sub_1133760(v150, a5, a6);
                  else
                    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v150 + 632LL))(v150, a5, a6);
                }
                goto LABEL_117;
              }
LABEL_254:
              ptr.m256i_i32[0] = 16;
              v181 = sub_10E0830(v245 + 24, p_ptr->m128i_i32);
              v183 = v182;
              v184 = v181;
              if ( v181 != v182 )
              {
                if ( v146 )
                {
                  do
                  {
                    sub_1133760(*(_QWORD *)(v184 + 40), a5, a6);
                    v184 = std::_Rb_tree_increment(v184);
                  }
                  while ( v184 != v183 );
                }
                else
                {
                  do
                  {
                    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v184 + 40) + 632LL))(
                      *(_QWORD *)(v184 + 40),
                      a5,
                      a6);
                    v184 = std::_Rb_tree_increment(v184);
                  }
                  while ( v184 != v183 );
                }
              }
              goto LABEL_117;
            }
LABEL_250:
            ptr.m256i_i32[0] = 4;
            v177 = sub_10E0830(v245 + 24, p_ptr->m128i_i32);
            v179 = v178;
            v180 = v177;
            if ( v177 != v178 )
            {
              if ( v146 )
              {
                do
                {
                  sub_1133760(*(_QWORD *)(v180 + 40), a5, a6);
                  v180 = std::_Rb_tree_increment(v180);
                }
                while ( v180 != v179 );
              }
              else
              {
                do
                {
                  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v180 + 40) + 632LL))(
                    *(_QWORD *)(v180 + 40),
                    a5,
                    a6);
                  v180 = std::_Rb_tree_increment(v180);
                }
                while ( v179 != v180 );
              }
            }
            goto LABEL_253;
          }
LABEL_249:
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v176 + 632LL))(v176, a5, a6);
          v148 = *(_DWORD *)(a3 + 60);
          if ( (v148 & 4) == 0 )
            goto LABEL_217;
          goto LABEL_250;
        }
        ptr.m256i_i32[0] = 8;
      }
      v176 = *(_QWORD *)(sub_10E0830(v245 + 24, p_ptr->m128i_i32) + 40);
      goto LABEL_249;
    }
    sub_1133760(v147, a5, a6);
    v148 = *(_DWORD *)(a3 + 60);
    if ( (v148 & 2) != 0 )
    {
      ptr.m256i_i32[0] = 2;
      v202 = sub_10E0830(v245 + 24, p_ptr->m128i_i32);
    }
    else
    {
      v149 = *(_DWORD *)(a3 + 64);
      if ( v149 == 2 )
      {
        v202 = sub_10E0B00(v245);
      }
      else
      {
        if ( (v148 & 8) == 0 )
          goto LABEL_215;
        ptr.m256i_i32[0] = 8;
        v202 = sub_10E0830(v245 + 24, p_ptr->m128i_i32);
      }
    }
    v176 = *(_QWORD *)(v202 + 40);
    goto LABEL_298;
  }
LABEL_117:
  if ( sub_10DCD30(a5, 0xBEDu) || !(unsigned __int8)sub_21B7850(a5, 3085, 3016, 1) || sub_10DCD30(a5, 0xBD9u) )
    goto LABEL_118;
  v86 = *(__int64 **)(v243 + 24);
  v190 = *(_DWORD *)(v245 + 16);
  v191 = *((_DWORD *)v86 + 12);
  if ( (((v191 - 25) & 0xFFFFFFEE) == 0 || (unsigned int)(v191 - 49) <= 2) && !v190 )
  {
    v225 = (_BYTE *)sub_228A4B0(*(_QWORD *)(v240 + 104), *(_QWORD *)(v240 + 112), 0);
    ptr.m256i_i64[0] = (__int64)&p_ptr[1].m128i_i64[1];
    *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(p_ptr, v225, &v225[v226]);
    v227 = (__int64)v247;
    v270 = 257;
    v266 = 257;
    v262 = 257;
    v258 = 259;
    v256.m128i_i64[0] = (__int64)"include";
    sub_228A3B0(p_ptr, &v256, v247, v263, v242);
    v270 = 257;
    v228 = *(_QWORD *)(v243 + 24);
    v266 = 257;
    v262 = 257;
    v254[0] = v255;
    sub_1189220(v254, *(_BYTE **)(v228 + 16), *(_QWORD *)(v228 + 16) + *(_QWORD *)(v228 + 24));
    v256.m128i_i64[0] = (__int64)v254;
    v258 = 260;
    sub_228A3B0(p_ptr, &v256, v227, v263, v242);
    if ( v254[0] != v255 )
      operator delete(v254[0]);
    sub_10DC5D0(a6, (__int64)"-internal-isystem");
    v270 = 261;
    *(_OWORD *)v267 = *(_OWORD *)ptr.m256i_i8;
    v229 = sub_10DA6C0(a5, (__int64)v242);
    sub_10DC5D0(a6, v229);
    v197 = (void *)ptr.m256i_i64[0];
    if ( (unsigned __int64 *)ptr.m256i_i64[0] == &p_ptr[1].m128i_u64[1] )
      goto LABEL_118;
    goto LABEL_272;
  }
  if ( v190 == 4 )
  {
    ptr.m256i_i64[0] = (__int64)&p_ptr[1].m128i_i64[1];
    v192 = *(_BYTE **)(v240 + 248);
    v193 = *(_QWORD *)(v240 + 256);
    *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(p_ptr, v192, &v192[v193]);
    v194 = v242;
    v195 = (__int64)v247;
    v270 = 257;
    v266 = 257;
    v262 = 257;
    v258 = 259;
    v256.m128i_i64[0] = (__int64)"include";
    sub_228A3B0(p_ptr, &v256, v247, v263, v242);
    v262 = 257;
    v256.m128i_i64[0] = (__int64)"llvm_libc_wrappers";
    v270 = 257;
    v266 = 257;
    v258 = 259;
    sub_228A3B0(p_ptr, &v256, v195, v263, v194);
    sub_10DC5D0(a6, (__int64)"-internal-isystem");
    v270 = 261;
    *(_OWORD *)v267 = *(_OWORD *)ptr.m256i_i8;
    v196 = sub_10DA6C0(a5, (__int64)v194);
    sub_10DC5D0(a6, v196);
    v197 = (void *)ptr.m256i_i64[0];
    if ( (unsigned __int64 *)ptr.m256i_i64[0] == &p_ptr[1].m128i_u64[1] )
    {
LABEL_118:
      v86 = *(__int64 **)(v243 + 24);
      goto LABEL_119;
    }
LABEL_272:
    free(v197);
    goto LABEL_118;
  }
LABEL_119:
  v87 = *v86;
  if ( v248 != 26 )
  {
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v87 + 560))(v86, a5, a6);
    v88 = *(_DWORD *)(a3 + 60);
    if ( (v88 & 2) != 0 )
    {
      ptr.m256i_i32[0] = 2;
      v167 = sub_10E0830(v245 + 24, p_ptr->m128i_i32);
    }
    else
    {
      v89 = *(_DWORD *)(a3 + 64);
      if ( v89 != 2 )
      {
        if ( (v88 & 8) != 0 )
        {
          ptr.m256i_i32[0] = 8;
          v167 = sub_10E0830(v245 + 24, p_ptr->m128i_i32);
          goto LABEL_240;
        }
        if ( v89 != 8 )
        {
          if ( (v88 & 4) == 0 )
          {
LABEL_125:
            if ( *(_DWORD *)(a3 + 64) != 4 )
            {
              if ( (v88 & 0x10) == 0 )
                goto LABEL_127;
              goto LABEL_244;
            }
            v208 = sub_10E0B00(v245);
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v208 + 40) + 560LL))(
              *(_QWORD *)(v208 + 40),
              a5,
              a6);
LABEL_243:
            if ( (*(_DWORD *)(a3 + 60) & 0x10) == 0 )
            {
LABEL_127:
              if ( *(_DWORD *)(a3 + 64) == 16 )
              {
                v90 = sub_10E0B00(v245);
                (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v90 + 40) + 560LL))(
                  *(_QWORD *)(v90 + 40),
                  a5,
                  a6);
              }
              goto LABEL_165;
            }
LABEL_244:
            ptr.m256i_i32[0] = 16;
            v172 = sub_10E0830(v245 + 24, p_ptr->m128i_i32);
            v174 = v173;
            for ( i = v172; i != v174; i = std::_Rb_tree_increment(i) )
              (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(i + 40) + 560LL))(
                *(_QWORD *)(i + 40),
                a5,
                a6);
            goto LABEL_165;
          }
LABEL_241:
          ptr.m256i_i32[0] = 4;
          v168 = sub_10E0830(v245 + 24, p_ptr->m128i_i32);
          v170 = v169;
          for ( j = v168; j != v170; j = std::_Rb_tree_increment(j) )
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(j + 40) + 560LL))(
              *(_QWORD *)(j + 40),
              a5,
              a6);
          goto LABEL_243;
        }
      }
      v167 = sub_10E0B00(v245);
    }
LABEL_240:
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v167 + 40) + 560LL))(
      *(_QWORD *)(v167 + 40),
      a5,
      a6);
    v88 = *(_DWORD *)(a3 + 60);
    if ( (v88 & 4) == 0 )
      goto LABEL_125;
    goto LABEL_241;
  }
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v87 + 704))(v86, a5, a6);
LABEL_165:
  sub_10DF020((__int64)v242, a5, 0x2BBu, 0x391u);
  v112 = _mm_load_si128((const __m128i *)v267);
  v113 = v269;
  v264 = (char *)v268;
  *(__m128i *)v263 = v112;
LABEL_166:
  v114 = v263[0];
  while ( v113 != v114 )
  {
LABEL_168:
    v115 = *v114;
    v116 = *(const char ***)(*v114 + 48LL);
    v117 = (char *)*v116;
    if ( !*v116 || (v118 = j__strlen(*v116), (v119 = v118) == 0) )
    {
      v119 = 0;
LABEL_208:
      sub_FC70B0((__int64)p_ptr, *(_QWORD *)v240, 0, 372);
      sub_AEC220((unsigned __int8 **)p_ptr, v117, v119);
      v142 = (char *)sub_1189870(*(_QWORD *)v115, *(_QWORD **)(v115 + 8));
      sub_AEC220((unsigned __int8 **)p_ptr, v142, v143);
      sub_AEA040((__int64)p_ptr);
      goto LABEL_173;
    }
    v120 = memchr(v117, 61, v118);
    if ( !v120 || v120 - v117 == -1 )
      goto LABEL_208;
    LOWORD(v273) = 1283;
    ptr.m256i_i64[0] = (__int64)"-fmacro-prefix-map=";
    ptr.m256i_i64[2] = (__int64)v117;
    ptr.m256i_i64[3] = v119;
    v121 = sub_10DA6C0(a5, (__int64)p_ptr);
    sub_10DC5D0(a6, v121);
LABEL_173:
    v122 = *(_QWORD *)(v115 + 16);
    v123 = v114 + 1;
    if ( !v122 )
      v122 = v115;
    *(_BYTE *)(v122 + 44) |= 1u;
    v114 = v263[1];
    v263[0] = v123;
    if ( v123 != v263[1] )
    {
      while ( 1 )
      {
        v124 = *v123;
        if ( *v123 )
        {
          if ( (_DWORD)v264
            && ((unsigned __int8)sub_21B9810(*v123, (unsigned int)v264)
             || HIDWORD(v264) && (unsigned __int8)sub_21B9810(v124, HIDWORD(v264))) )
          {
            goto LABEL_166;
          }
        }
        v263[0] = ++v123;
        if ( v123 == v114 )
        {
          if ( v113 != v114 )
            goto LABEL_168;
          goto LABEL_183;
        }
      }
    }
  }
LABEL_183:
  sub_10DF020((__int64)v242, a5, 0x2BBu, 0x211u);
  v125 = _mm_load_si128((const __m128i *)v267);
  v126 = v269;
  v264 = (char *)v268;
  *(__m128i *)v263 = v125;
LABEL_184:
  v127 = v263[0];
  while ( v127 != v126 )
  {
    v128 = *v127;
    v129 = *(const char ***)(*v127 + 48LL);
    v130 = (char *)*v129;
    if ( *v129 && (v131 = j__strlen(*v129), (v132 = v131) != 0) )
    {
      v133 = memchr(v130, 61, v131);
      if ( v133 && v133 - v130 != -1 )
      {
        LOWORD(v273) = 1283;
        ptr.m256i_i64[0] = (__int64)"-fcoverage-prefix-map=";
        ptr.m256i_i64[2] = (__int64)v130;
        ptr.m256i_i64[3] = v132;
        v134 = sub_10DA6C0(a5, (__int64)p_ptr);
        sub_10DC5D0(a6, v134);
        goto LABEL_190;
      }
    }
    else
    {
      v132 = 0;
    }
    sub_FC70B0((__int64)p_ptr, *(_QWORD *)v240, 0, 372);
    sub_AEC220((unsigned __int8 **)p_ptr, v130, v132);
    v144 = (char *)sub_1189870(*(_QWORD *)v128, *(_QWORD **)(v128 + 8));
    sub_AEC220((unsigned __int8 **)p_ptr, v144, v145);
    sub_AEA040((__int64)p_ptr);
LABEL_190:
    v135 = *(_QWORD *)(v128 + 16);
    if ( !v135 )
      v135 = v128;
    ++v127;
    *(_BYTE *)(v135 + 44) |= 1u;
    v136 = v263[1];
    v263[0] = v127;
    if ( v263[1] != v127 )
    {
      do
      {
        v137 = *v127;
        if ( *v127 )
        {
          if ( (_DWORD)v264
            && ((unsigned __int8)sub_21B9810(*v127, (unsigned int)v264)
             || HIDWORD(v264) && (unsigned __int8)sub_21B9810(v137, HIDWORD(v264))) )
          {
            goto LABEL_184;
          }
        }
        v263[0] = ++v127;
      }
      while ( v136 != v127 );
    }
  }
  v138 = sub_10DE660(a5, 0x2BCu, 0x470u);
  if ( v138 )
    sub_21B5A40(v138, a5, a6);
  v139 = getenv("SOURCE_DATE_EPOCH");
  if ( v139 )
  {
    sub_10DC5D0(a6, (__int64)"-source-date-epoch");
    LOWORD(v273) = 257;
    if ( *v139 )
    {
      ptr.m256i_i64[0] = (__int64)v139;
      LOBYTE(v273) = 3;
    }
    v140 = sub_10DA6C0(a5, (__int64)p_ptr);
    sub_10DC5D0(a6, v140);
  }
  return sub_21B73E0(a5, a6, 590, 1087);
}
