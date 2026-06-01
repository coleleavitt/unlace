__int64 __fastcall sub_24FE80(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 si128,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  int v14; // eax
  __int64 v15; // rsi
  char *file_ext; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 v25; // rdx
  char v26; // di
  unsigned __int64 v27; // rdi
  _DWORD *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // eax
  bool v35; // zf
  char v36; // r13
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rbp
  void (__fastcall ***v40)(_QWORD, __int64); // rdi
  __int64 v41; // r12
  unsigned int v42; // edi
  char v43; // al
  char v44; // al
  void *v45; // r12
  __int64 v46; // rdx
  double v47; // xmm4_8
  double v48; // xmm5_8
  __int64 v49; // rdx
  double v50; // xmm4_8
  double v51; // xmm5_8
  int v52; // edi
  _DWORD *v53; // rax
  unsigned int v54; // r12d
  __int64 v55; // rdx
  __int64 result; // rax
  int v57; // eax
  double v58; // xmm4_8
  double v59; // xmm5_8
  __int64 v60; // rax
  char *v61; // rcx
  _DWORD *v62; // rdi
  __int64 v63; // rax
  unsigned int *v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // rax
  char *v67; // rcx
  __int64 v68; // r14
  __int64 v69; // rdx
  __int64 v70; // r13
  _QWORD *v71; // rdi
  char *v72; // rcx
  int v73; // eax
  __int64 v74; // rdx
  _QWORD *v75; // rdi
  int v76; // eax
  __int64 v77; // rdx
  _DWORD *v78; // rdi
  int v79; // eax
  __int64 spd; // rax
  unsigned __int64 v81; // r13
  __int64 bytes; // rax
  __int64 v83; // rax
  char v84; // al
  unsigned __int64 v85; // r14
  __int64 func; // rax
  __int64 v87; // r14
  __int64 that; // rax
  __m128i *v89; // rax
  __m128i *v90; // rbx
  __int64 v91; // rbp
  __int64 v92; // r12
  __m128i *v93; // rax
  __int32 v94; // edx
  const char *v95; // rbp
  unsigned __int64 v96; // rax
  const char *v97; // r12
  unsigned __int64 v98; // rax
  __int64 v99; // rsi
  unsigned __int64 v100; // rax
  const char *v101; // rsi
  const char *v102; // rcx
  unsigned __int64 v103; // r13
  char v104; // al
  int v105; // eax
  int v106; // edx
  __int64 v107; // rsi
  __int64 v108; // rbp
  _DWORD *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rdi
  __int64 v114; // rcx
  __int64 v115; // rdx
  char *v116; // rcx
  double v117; // xmm4_8
  double v118; // xmm5_8
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rcx
  double v122; // xmm4_8
  double v123; // xmm5_8
  char v124; // al
  __int64 v125; // r8
  __int64 v126; // r9
  __m128 v127; // xmm4
  __m128 v128; // xmm5
  unsigned __int64 v129; // rax
  unsigned __int8 v130; // bl
  const char *v131; // rsi
  unsigned __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  char *v135; // rdi
  int v136; // eax
  __int64 v137; // rdx
  __int64 v138; // rbx
  __int64 v139; // r13
  unsigned __int64 v140; // r14
  unsigned __int64 v141; // r14
  __int64 v142; // rdx
  __int64 v143; // rcx
  int v144; // r8d
  size_t v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __m128 v152; // xmm4
  __m128 v153; // xmm5
  __int64 v154; // rdx
  int v155; // eax
  char v156; // ah
  __int64 v157; // rdx
  char v158; // al
  __int64 bpt_kernel_interface; // rax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // r10
  __int64 v165; // rdi
  __int64 v166; // rdx
  __int64 v167; // rax
  __int64 v168; // rcx
  int v169; // eax
  int v170; // ebx
  __int64 v171; // rax
  __int64 v172; // rbp
  __int64 v173; // rbx
  double v174; // xmm4_8
  double v175; // xmm5_8
  __int64 v176; // rax
  char *v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __m128 v180; // xmm4
  __m128 v181; // xmm5
  char v182; // bl
  _DWORD *v183; // rax
  __int64 v184; // rdx
  _QWORD *v185; // rcx
  _QWORD *v186; // rdi
  _QWORD *v187; // rsi
  __int64 v188; // rdx
  __int64 v189; // rsi
  unsigned __int64 v190; // rdx
  const char *v191; // rcx
  __m128 *v192; // rax
  const char *v193; // rsi
  unsigned __int64 v194; // rdx
  const char *v195; // r13
  __int64 v196; // r13
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 eah; // rax
  __int64 v201; // rax
  unsigned __int8 v202; // al
  __int64 tinfo_size; // rax
  unsigned __int64 v204; // rcx
  __int64 v205; // r13
  __int64 v206; // rax
  char *v207; // r13
  __int64 v208; // rbx
  char *v209; // rdi
  unsigned __int64 v210; // rax
  unsigned __int8 v211; // bp
  const char *v212; // rdx
  const char *v213; // rdx
  __int64 v214; // rax
  __int64 *v215; // rdi
  int v216; // eax
  const void *v217; // r12
  void *v218; // rdi
  const char *v219; // rcx
  char v220; // [rsp+0h] [rbp-2158h]
  unsigned __int64 v222; // [rsp+10h] [rbp-2148h]
  unsigned __int64 v223; // [rsp+18h] [rbp-2140h]
  __int64 v224; // [rsp+18h] [rbp-2140h]
  char v225; // [rsp+2Fh] [rbp-2129h]
  unsigned __int64 v226; // [rsp+30h] [rbp-2128h]
  unsigned __int64 v227; // [rsp+38h] [rbp-2120h]
  __int64 v228; // [rsp+38h] [rbp-2120h]
  __int64 v229; // [rsp+40h] [rbp-2118h]
  __int64 v230; // [rsp+48h] [rbp-2110h]
  const char *v231; // [rsp+50h] [rbp-2108h] BYREF
  unsigned __int64 v232; // [rsp+58h] [rbp-2100h] BYREF
  const char *v233; // [rsp+60h] [rbp-20F8h] BYREF
  __int128 v234; // [rsp+68h] [rbp-20F0h]
  _OWORD v235[4]; // [rsp+80h] [rbp-20D8h] BYREF
  _OWORD v236[3]; // [rsp+C0h] [rbp-2098h] BYREF
  __int64 v237; // [rsp+F0h] [rbp-2068h]
  int v238; // [rsp+F8h] [rbp-2060h]
  __int64 v239; // [rsp+100h] [rbp-2058h]
  char v240; // [rsp+108h] [rbp-2050h]
  char v241[4096]; // [rsp+110h] [rbp-2048h] BYREF
  char s1[16]; // [rsp+1110h] [rbp-1048h] BYREF
  __m128i v243; // [rsp+1120h] [rbp-1038h] BYREF
  __m128i v244; // [rsp+1130h] [rbp-1028h] BYREF
  __m128i v245; // [rsp+1140h] [rbp-1018h] BYREF
  __m128i v246; // [rsp+1150h] [rbp-1008h] BYREF
  __m128i v247; // [rsp+1160h] [rbp-FF8h] BYREF
  __m128i v248; // [rsp+1170h] [rbp-FE8h] BYREF
  __m128i v249; // [rsp+1180h] [rbp-FD8h] BYREF
  __m128i v250; // [rsp+1190h] [rbp-FC8h] BYREF
  __m128i v251; // [rsp+11A0h] [rbp-FB8h] BYREF
  __m128i v252; // [rsp+11B0h] [rbp-FA8h] BYREF
  __m128i v253; // [rsp+11C0h] [rbp-F98h] BYREF
  __m128i v254; // [rsp+11D0h] [rbp-F88h] BYREF
  __m128i v255; // [rsp+11E0h] [rbp-F78h] BYREF
  __m128i v256; // [rsp+11F0h] [rbp-F68h] BYREF
  __m128i v257[49]; // [rsp+1200h] [rbp-F58h] BYREF
  _BYTE v258[3080]; // [rsp+1510h] [rbp-C48h] BYREF
  unsigned __int64 v259; // [rsp+2118h] [rbp-40h]

  v259 = __readfsqword(0x28u);
  ++dword_8CC5E8;
  dword_8CC5F0 = -1;
  byte_8CC5EC = 1;
  if ( !byte_8CC5E1 )
  {
    a3 = (HIDWORD(qword_8CC350) & 0xFFFFFFFu) - 8;
    if ( (unsigned int)a3 > 3 && (HIDWORD(qword_8CC350) & 0xFFFFFFFu) > 4 )
    {
      if ( !under_debugger )
        interr(40291, a2, a3, a4, *(double *)si128.m128_u64);
      goto LABEL_503;
    }
  }
  if ( (*(_BYTE *)(dbg + 34) & 2) != 0 )
  {
    v89 = (__m128i *)sub_234FE0(SHIDWORD(qword_8CC340));
    v90 = v89;
    if ( v89 )
    {
      if ( !v89[15].m128i_i64[0] )
      {
        v91 = qword_8CC430;
        v92 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
        if ( qword_8CC430 != v92 )
        {
          v93 = (__m128i *)qword_8CC430;
          while ( !v93[15].m128i_i64[0] )
          {
            v93 += 16;
            if ( (__m128i *)v92 == v93 )
              goto LABEL_423;
          }
          if ( v93 )
          {
            if ( v90 == v93 )
              goto LABEL_5;
            goto LABEL_178;
          }
LABEL_423:
          v205 = qword_8CC348;
          while ( 1 )
          {
            v206 = *(_QWORD *)(v91 + 144);
            if ( v206 )
            {
              if ( v205 == *(_QWORD *)(v206 + 80) )
                break;
            }
            a2 = v205;
            if ( sub_236AB0(v91, v205) )
              break;
            v91 += 256;
            if ( v92 == v91 )
              goto LABEL_5;
          }
          LOBYTE(a3) = v90 != (__m128i *)v91;
          if ( v90 != (__m128i *)v91 && v91 != 0 )
          {
            v93 = (__m128i *)v91;
LABEL_178:
            *(__m128i *)s1 = _mm_loadu_si128(v93);
            v243 = _mm_loadu_si128(v93 + 1);
            v244 = _mm_loadu_si128(v93 + 2);
            v245 = _mm_loadu_si128(v93 + 3);
            v246 = _mm_loadu_si128(v93 + 4);
            v247 = _mm_loadu_si128(v93 + 5);
            v248 = _mm_loadu_si128(v93 + 6);
            v249 = _mm_loadu_si128(v93 + 7);
            v250 = _mm_loadu_si128(v93 + 8);
            v251 = _mm_loadu_si128(v93 + 9);
            v252 = _mm_loadu_si128(v93 + 10);
            v253 = _mm_loadu_si128(v93 + 11);
            v254 = _mm_loadu_si128(v93 + 12);
            v255 = _mm_loadu_si128(v93 + 13);
            v256 = _mm_loadu_si128(v93 + 14);
            v257[0] = _mm_loadu_si128(v93 + 15);
            *v93 = _mm_loadu_si128(v90);
            v93[1] = _mm_loadu_si128(v90 + 1);
            v93[2] = _mm_loadu_si128(v90 + 2);
            v93[3] = _mm_loadu_si128(v90 + 3);
            v93[4] = _mm_loadu_si128(v90 + 4);
            v93[5] = _mm_loadu_si128(v90 + 5);
            v93[6] = _mm_loadu_si128(v90 + 6);
            v93[7] = _mm_loadu_si128(v90 + 7);
            v93[8] = _mm_loadu_si128(v90 + 8);
            v93[9] = _mm_loadu_si128(v90 + 9);
            v93[10] = _mm_loadu_si128(v90 + 10);
            v93[11] = _mm_loadu_si128(v90 + 11);
            v93[12] = _mm_loadu_si128(v90 + 12);
            v93[13] = _mm_loadu_si128(v90 + 13);
            v93[14] = _mm_loadu_si128(v90 + 14);
            v93[15] = _mm_loadu_si128(v90 + 15);
            *v90 = _mm_load_si128((const __m128i *)s1);
            v90[1] = _mm_load_si128(&v243);
            v90[2] = _mm_load_si128(&v244);
            v90[3] = _mm_load_si128(&v245);
            v90[4] = _mm_load_si128(&v246);
            v90[5] = _mm_load_si128(&v247);
            v90[6] = _mm_load_si128(&v248);
            v90[7] = _mm_load_si128(&v249);
            v90[8] = _mm_load_si128(&v250);
            v90[9] = _mm_load_si128(&v251);
            v90[10] = _mm_load_si128(&v252);
            v90[11] = _mm_load_si128(&v253);
            v90[12] = _mm_load_si128(&v254);
            v90[13] = _mm_load_si128(&v255);
            v90[14] = _mm_load_si128(&v256);
            si128 = (__m128)_mm_load_si128(v257);
            v90[15] = (__m128i)si128;
            v94 = v93->m128i_i32[0];
            a4 = v90->m128i_u32[0];
            v93->m128i_i32[0] = a4;
            v90->m128i_i32[0] = v94;
            a3 = (unsigned int)dword_8CC38C;
            v93[2].m128i_i32[1] = dword_8CC38C;
            v90[2].m128i_i32[1] = a3;
          }
        }
      }
    }
  }
LABEL_5:
  v14 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
  if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 8 )
  {
    v15 = 4096;
    dbg_get_input_path(s1, 4096);
    file_ext = s1;
    v95 = (const char *)qbasename(s1);
    v96 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
    if ( (unsigned int)v96 > 0xB )
      goto LABEL_407;
    v17 = 2306;
    if ( !_bittest64(&v17, v96) )
      goto LABEL_407;
    v97 = &::s1;
    if ( *(&xmmword_8CC358 + 1) )
      v97 = (const char *)xmmword_8CC358;
    file_ext = (char *)v95;
    v15 = qbasename(v97);
    if ( !strcasecmp(v95, (const char *)v15) )
    {
      v15 = (__int64)v97;
      file_ext = s1;
      if ( !strcasecmp(s1, v97)
        || (v15 = 0, file_ext = nullptr, !(unsigned __int8)qdirname(0, 0, s1))
        || (v15 = (__int64)"~N~ot the same",
            file_ext = "~S~ame",
            (unsigned int)sub_22EDE0(
                            (int)"~S~ame",
                            (int)"~N~ot the same",
                            0,
                            1,
                            (int)"TITLE Debugger warning\n"
                                 "ICON WARNING\n"
                                 "HIDECANCEL\n"
                                 "AUTOHIDE DATABASE\n"
                                 "Debugger found two modules with same base name but different paths\n"
                                 "This could happen if the program loads the module from a path different than the specif"
                                 "ied input file\n"
                                 "\n"
                                 "Is the loaded file\n"
                                 "'%s'\n"
                                 "the same as the input file\n"
                                 "'%s'?\n",
                            v97,
                            s1) == 1) )
      {
        v98 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
        if ( (unsigned int)v98 > 0xB )
          goto LABEL_407;
        v17 = 2306;
        if ( !_bittest64(&v17, v98) )
          goto LABEL_407;
        *((_QWORD *)&xmmword_8CC378 + 1) = *((_QWORD *)&xmmword_8CC368 + 1);
      }
    }
  }
  else
  {
    if ( v14 == 11 )
    {
      if ( (*(_BYTE *)(dbg + 32) & 4) != 0 )
        sub_16B9E0(
          (int)"AUTOHIDE REGISTRY\n"
               "Successfully attached to the process.\n"
               "Now you can browse the process memory and set breakpoints.\n",
          a2,
          a3,
          a4,
          a5,
          a6,
          si128,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          v220);
    }
    else if ( v14 != 1 )
    {
      goto LABEL_19;
    }
    v15 = 8;
    file_ext = (_BYTE *)(&dword_0 + 3);
    v17 = (unsigned int)getinf_flag(3, 8);
    v19 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
    if ( (_BYTE)v17 )
    {
      if ( (unsigned int)v19 > 0xB )
        goto LABEL_407;
      v17 = 2306;
      if ( !_bittest64(&v17, v19) )
        goto LABEL_407;
      *((_QWORD *)&xmmword_8CC378 + 1) = -1;
      if ( !byte_8CC5F5 )
        goto LABEL_12;
LABEL_392:
      eah = get_eah(3, 8, 2306);
      v17 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
      if ( (unsigned int)v17 > 0xB )
        goto LABEL_407;
      v18 = 2306;
      if ( !_bittest64(&v18, v17) )
        goto LABEL_407;
      v15 = *((_QWORD *)&xmmword_8CC378 + 1);
      if ( *(_QWORD *)(eah + 16) != *((_QWORD *)&xmmword_8CC378 + 1) && *((_QWORD *)&xmmword_8CC378 + 1) != -1 )
      {
        file_ext = (_BYTE *)(&qword_58 + 5);
        setinf(93, *((_QWORD *)&xmmword_8CC378 + 1));
      }
      goto LABEL_12;
    }
    if ( (unsigned int)v19 > 0xB )
      goto LABEL_407;
    v17 = 2306;
    if ( !_bittest64(&v17, v19) )
      goto LABEL_407;
    *((_QWORD *)&xmmword_8CC378 + 1) = *((_QWORD *)&xmmword_8CC368 + 1);
    if ( byte_8CC5F5 )
      goto LABEL_392;
  }
LABEL_12:
  v20 = get_eah(file_ext, v15, v17);
  v17 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
  if ( (unsigned int)v17 > 0xB )
    goto LABEL_407;
  v18 = 2306;
  if ( !_bittest64(&v18, v17) )
    goto LABEL_407;
  v18 = *((_QWORD *)&xmmword_8CC378 + 1);
  if ( *(_QWORD *)(v20 + 16) != *((_QWORD *)&xmmword_8CC378 + 1) && *((_QWORD *)&xmmword_8CC378 + 1) != -1 )
  {
    if ( dword_8BA548 == -1 )
    {
      v15 = 0;
      v202 = qgetenv("IDA_NO_REBASE", 0) ^ 1;
      dword_8BA548 = v202;
      if ( !v202 )
        goto LABEL_18;
      file_ext = (char *)dbg;
      v17 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
      if ( (unsigned int)v17 > 0xB )
        goto LABEL_407;
    }
    else
    {
      if ( !dword_8BA548 )
      {
LABEL_18:
        byte_8CC488 = 1;
        goto LABEL_19;
      }
      file_ext = (char *)dbg;
    }
    v201 = 2306;
    if ( !_bittest64(&v201, v17) )
      goto LABEL_407;
    sub_20CEA0((__int64)file_ext, 7, *((_QWORD *)&xmmword_8CC378 + 1));
    goto LABEL_18;
  }
LABEL_19:
  sub_22FC60(0x13u, &qword_8CC340);
  byte_8CC2A8 = 0;
  v25 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
  v18 = (unsigned int)(v25 - 8);
  LOBYTE(v18) = (unsigned int)v18 <= 1;
  v26 = v18 | ((unsigned int)(v25 - 3) <= 1);
  if ( v26 )
  {
    byte_8CC558 = 1;
    if ( qword_8CC350 >= 0 )
      goto LABEL_21;
  }
  else
  {
    v26 = qword_8CC350 < 0;
    LOBYTE(v18) = qword_8CC350 < 0 || (_DWORD)v25 == 1;
    if ( !(_BYTE)v18 )
    {
      if ( (_DWORD)v25 != 11 )
      {
LABEL_21:
        v27 = HIDWORD(qword_8CC340);
        if ( !HIDWORD(qword_8CC340) )
          goto LABEL_67;
        goto LABEL_22;
      }
      v26 = 0;
    }
  }
  sub_24E850(
    v26,
    *(double *)si128.m128_u64,
    *(double *)a8.m128_u64,
    a9,
    a10,
    *(double *)v23.m128_u64,
    *(double *)v24.m128_u64,
    a13,
    a14);
  v27 = HIDWORD(qword_8CC340);
  HIDWORD(qword_8CC350) &= ~0x80000000;
  if ( !HIDWORD(qword_8CC340) )
    goto LABEL_67;
LABEL_22:
  v28 = (_DWORD *)qword_8CC430;
  v29 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 != v29 )
  {
    while ( (_DWORD)v27 != *v28 )
    {
      v28 += 64;
      if ( (_DWORD *)v29 == v28 )
        goto LABEL_67;
    }
    if ( v28 )
    {
      v30 = sub_23F1C0((__int64)v28, -1, *(double *)si128.m128_u64, v25, (char *)v18);
      v27 = HIDWORD(qword_8CC340);
      v28 = (_DWORD *)v30;
    }
    goto LABEL_28;
  }
LABEL_67:
  v28 = nullptr;
LABEL_28:
  qword_8CC120 = (unsigned int)v27;
  v15 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
  switch ( (int)v15 )
  {
    case 0:
    case 6:
      goto LABEL_32;
    case 1:
      v173 = 0;
      sub_235300((__int64)&xmmword_8CC358, 0);
      v15 = (__int64)sub_2404E0;
      set_dbgmem_source(sub_244AA0, sub_2404E0, sub_240310);
      if ( HIDWORD(qword_8CC340) )
        v173 = sub_24C410(*(double *)si128.m128_u64, *(double *)a8.m128_u64, a9, a10, v174, v175, a13, a14);
      file_ext = (char *)&word_10;
      v176 = getinf(16);
      v17 = (unsigned int)dword_8BA5B0;
      if ( (dword_8BA5B0 & 0x1000) == 0 || v176 == -1 )
      {
        v17 = a1 & 0x100 | dword_8BA5B0 & 2u;
        if ( !(_DWORD)v17 )
          goto LABEL_355;
      }
      else if ( v173 )
      {
        v15 = v176;
        file_ext = (char *)v173;
        sub_23D8E0(
          v173,
          v176,
          6,
          nullptr,
          (__int64)qword_8CC588,
          0,
          *(double *)si128.m128_u64,
          a8,
          a9,
          a10,
          *(double *)v180.m128_u64,
          *(double *)v181.m128_u64,
          a13,
          a14);
        v17 = a1 & 0x100;
        if ( !((unsigned int)v17 | dword_8BA5B0 & 2) )
        {
LABEL_355:
          v182 = byte_8CC5E2;
          if ( byte_8CC5E2 )
          {
LABEL_356:
            v15 = 0;
            sub_27EA50(0x2000700418000000LL, 0);
            v31 = HIDWORD(qword_8CC120);
            byte_8CC5E1 = 1;
            v106 = BYTE4(qword_8CC120) & 0x40;
            goto LABEL_265;
          }
          v18 = (unsigned int)qword_8CC340;
          v210 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
          if ( (unsigned int)v210 <= 0xB )
          {
            v17 = 2306;
            v211 = _bittest64(&v17, v210);
            if ( v211 )
            {
              v212 = &::s1;
              if ( *(&xmmword_8CC358 + 1) )
                v212 = (const char *)xmmword_8CC358;
              sub_169700(
                (int)"%a: process %s has started (pid=%u)\n",
                *((__int64 *)&xmmword_8CC368 + 1),
                (__int64)v212,
                (unsigned int)qword_8CC340,
                v178,
                v179,
                si128,
                a8,
                a9,
                a10,
                v180,
                v181,
                a13,
                a14,
                v220);
              if ( HIDWORD(qword_8CC2B0) == 1 )
              {
                if ( (_DWORD)qword_8CC2B0 )
                {
                  qword_8CC2B0 = 0;
                  v182 = v211;
                }
                byte_8CC2A8 = v182;
                sub_236E30(1u, &qword_8CC340);
              }
              else
              {
                sub_236E30(1u, &qword_8CC340);
              }
              goto LABEL_356;
            }
          }
LABEL_407:
          sub_227660(*(double *)si128.m128_u64, (__int64)file_ext, v15, v17, v18);
LABEL_408:
          sub_169700(
            (int)"UNKNOWN DEBUG EVENT %d!!!\n",
            v15,
            v25,
            v18,
            (__int64)v21,
            v22,
            si128,
            a8,
            a9,
            a10,
            v23,
            v24,
            a13,
            a14,
            v220);
          byte_8CC5EC = 0;
          goto LABEL_409;
        }
      }
      sub_24F660(
        *(double *)si128.m128_u64,
        a8,
        a9,
        a10,
        *(double *)v180.m128_u64,
        *(double *)v181.m128_u64,
        a13,
        a14,
        (__int64)file_ext,
        v15,
        v17,
        v177);
      goto LABEL_355;
    case 2:
      goto LABEL_252;
    case 3:
      if ( !(_DWORD)v27 )
        goto LABEL_32;
      sub_24C410(
        *(double *)si128.m128_u64,
        *(double *)a8.m128_u64,
        a9,
        a10,
        *(double *)v23.m128_u64,
        *(double *)v24.m128_u64,
        a13,
        a14);
      if ( byte_8CC5E2 )
        goto LABEL_409;
      v158 = dword_8BA5B0;
      if ( (dword_8BA5B0 & 4) == 0 )
        goto LABEL_329;
      v25 = (HIDWORD(qword_8CC350) & 0xFFFFFFFu) - 9;
      if ( (unsigned int)v25 > 1 && (HIDWORD(qword_8CC350) & 0xFFFFFFF) != 3 )
        goto LABEL_489;
      v219 = &::s1;
      if ( *(&xmmword_8CC358 + 1) )
        v219 = (const char *)xmmword_8CC358;
      v15 = qword_8CC348;
      v27 = (unsigned __int64)"%a: thread has started (tid=%d) %s\n";
      sub_169700(
        (int)"%a: thread has started (tid=%d) %s\n",
        qword_8CC348,
        HIDWORD(qword_8CC340),
        (__int64)v219,
        (__int64)v21,
        v22,
        si128,
        a8,
        a9,
        a10,
        v23,
        v24,
        a13,
        a14,
        v220);
      v158 = dword_8BA5B0;
LABEL_329:
      if ( (v158 & 8) != 0 )
        sub_24F660(
          *(double *)si128.m128_u64,
          a8,
          a9,
          a10,
          *(double *)v23.m128_u64,
          *(double *)v24.m128_u64,
          a13,
          a14,
          v27,
          v15,
          v157,
          (char *)v18);
      v15 = (__int64)&qword_8CC340;
      sub_236E30(5u, &qword_8CC340);
      goto LABEL_264;
    case 4:
      if ( !(_DWORD)v27 )
        goto LABEL_32;
      sub_24F6D0(v27, si128, a8, a9, a10, *(double *)v23.m128_u64, *(double *)v24.m128_u64, a13, a14);
      if ( (_QWORD)xmmword_8CC438 || HIDWORD(qword_8CC340) != (_DWORD)qword_8CC340 )
        goto LABEL_409;
      v15 = 2;
      v27 = (unsigned __int64)&qword_8CC340;
      HIDWORD(qword_8CC340) = 0;
      set_debug_event_code(&qword_8CC340, 2);
      if ( (((HIDWORD(qword_8CC350) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
      {
        LODWORD(xmmword_8CC358) = 1;
LABEL_252:
        if ( (*(_BYTE *)(dbg + 34) & 1) != 0 )
        {
          v27 = a1 | 0x40u;
          sub_24B020(
            a1 | 0x40,
            *(double *)si128.m128_u64,
            a8,
            a9,
            a10,
            *(double *)v23.m128_u64,
            *(double *)v24.m128_u64,
            a13,
            a14);
        }
        if ( (dword_8BA5B0 & 0x10000) != 0 )
          sub_24F660(
            *(double *)si128.m128_u64,
            a8,
            a9,
            a10,
            *(double *)v23.m128_u64,
            *(double *)v24.m128_u64,
            a13,
            a14,
            v27,
            v15,
            v25,
            (char *)v18);
        if ( (((HIDWORD(qword_8CC350) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
        {
          sub_169700(
            (int)"Debugger: process has exited (exit code %d)\n",
            (unsigned int)xmmword_8CC358,
            v25,
            v18,
            (__int64)v21,
            v22,
            si128,
            a8,
            a9,
            a10,
            v23,
            v24,
            a13,
            a14,
            v220);
          *(double *)si128.m128_u64 = reset_undo();
          sub_23D480((__int64)qword_8CC600, 2, v115, v116, *(double *)si128.m128_u64);
          if ( dword_8CC5F0 )
            sub_24FC00(si128, a8, a9, a10, v117, v118, a13, a14);
          v15 = (__int64)&qword_8CC340;
          if ( HIDWORD(qword_8CC2B0) == 2 )
          {
            v119 = 0;
            if ( (_DWORD)qword_8CC2B0 )
            {
              qword_8CC2B0 = 0;
              v119 = 1;
            }
            byte_8CC2A8 = v119;
            v15 = (__int64)&qword_8CC340;
          }
          sub_236E30(2u, &qword_8CC340);
LABEL_264:
          v31 = HIDWORD(qword_8CC120);
          v106 = BYTE4(qword_8CC120) & 0x40;
          goto LABEL_265;
        }
      }
      sub_227680(*(double *)si128.m128_u64, v27, v15, v25, v18);
      goto LABEL_489;
    case 5:
      if ( byte_8CC5ED )
        goto LABEL_32;
      memset(v235, 0, 24);
      si128 = 0;
      bpt_kernel_interface = get_bpt_kernel_interface(v27, v15);
      (*(void (__fastcall **)(__int64, _OWORD *, __int64 *))(*(_QWORD *)bpt_kernel_interface + 64LL))(
        bpt_kernel_interface,
        v235,
        &qword_8CC340);
      v15 = *((_QWORD *)&v235[0] + 1);
      v164 = qword_8CC348;
      if ( *((_QWORD *)&v235[0] + 1) )
      {
        v165 = *(_QWORD *)&v235[0];
        v166 = 0;
        v167 = 0;
        v21 = xmmword_8CC358;
        v22 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
        do
        {
          v168 = *(_QWORD *)(*(_QWORD *)&v235[0] + 8 * v167);
          v169 = *(_DWORD *)(v168 + 64);
          if ( v169 != 4 )
          {
            v18 = *(_QWORD *)(v168 + 56);
            if ( v169 == 8 )
            {
              if ( (_DWORD)v22 != 5 )
                goto LABEL_492;
              if ( xmmword_8CC358 == (void *)v18 && xmmword_8CC358 == (void *)qword_8CC348 )
                goto LABEL_343;
            }
            else
            {
              if ( (_DWORD)v22 != 5 )
              {
                sub_2276C0(0.0, *(__int64 *)&v235[0], *((__int64 *)&v235[0] + 1), v166, v18);
                goto LABEL_498;
              }
              if ( xmmword_8CC358 == (void *)v18 )
                goto LABEL_343;
            }
          }
          v166 = (unsigned int)(v166 + 1);
          v167 = (int)v166;
        }
        while ( (unsigned __int64)(int)v166 < *((_QWORD *)&v235[0] + 1) );
        v166 = dbg;
        v18 = *(_QWORD *)(dbg + 32);
        if ( (v18 & 0x10) != 0 )
          goto LABEL_343;
        if ( !v28 )
          goto LABEL_498;
        v15 = dword_8BA594;
        v214 = *(_QWORD *)&v28[8 * dword_8BA594 + 2];
        if ( dbg )
        {
          if ( (v18 & 0x400000000000LL) != 0 )
          {
            v215 = (__int64 *)qword_8CC600;
            if ( qword_8CC600 )
            {
              *((_DWORD *)qword_8CC600 + 4) = dword_8BA594;
              v15 = 11;
              *v215 = v214;
              v215[1] = (__int64)v28;
              v216 = sub_23D480((__int64)v215, 11, v166, (char *)v18, 0.0);
              v164 = qword_8CC348;
              if ( v216 == 1 )
              {
                v214 = *(_QWORD *)qword_8CC600;
                goto LABEL_467;
              }
LABEL_498:
              v214 = -1;
            }
          }
        }
LABEL_467:
        if ( v164 != v214 )
        {
          v15 = v164;
          if ( !(unsigned __int8)sub_2401E0(SHIDWORD(qword_8CC340), v164, v166, (char *)v18, 0.0) )
          {
            v15 = qword_8CC348;
            sub_233B00(
              (int)"failed to reset program counter to %a (tid=%d)",
              qword_8CC348,
              HIDWORD(qword_8CC340),
              v18,
              (__int64)v21,
              v22,
              (__m128)0LL,
              a8,
              a9,
              a10,
              v23,
              v24,
              a13,
              a14,
              v220);
            byte_8CC5EC = 0;
            if ( *(_QWORD *)&v235[0] )
            {
              *((_QWORD *)&v235[0] + 1) = 0;
              *(double *)si128.m128_u64 = qfree(*(_QWORD *)&v235[0], (const char *)v15);
            }
            goto LABEL_409;
          }
        }
        v165 = *(_QWORD *)&v235[0];
        if ( *((_QWORD *)&v235[0] + 1) )
        {
LABEL_343:
          v170 = 0;
          v171 = 0;
          do
          {
            v172 = *(_QWORD *)(v165 + 8 * v171);
            if ( (*(_BYTE *)(v172 + 76) & 2) != 0 )
            {
              v15 = (__int64)&qword_8CC340;
              sub_22FC60(0xAu, &qword_8CC340, v166, v18, v21);
              if ( (*(_BYTE *)(v172 + 72) & 8) != 0 )
                sub_236F30(
                  (const char *)v172,
                  (__int64)&qword_8CC340,
                  (__m128)0LL,
                  a8,
                  a9,
                  a10,
                  *(double *)v23.m128_u64,
                  *(double *)v24.m128_u64,
                  a13,
                  a14,
                  v166,
                  v18);
              v165 = *(_QWORD *)&v235[0];
            }
            v171 = ++v170;
          }
          while ( (unsigned __int64)v170 < *((_QWORD *)&v235[0] + 1) );
        }
      }
      else
      {
        v15 = qword_8CC348;
        sub_169700(
          (int)"%a: unknown debugger breakpoint\n",
          qword_8CC348,
          v160,
          v161,
          v162,
          v163,
          (__m128)0LL,
          a8,
          a9,
          a10,
          v23,
          v24,
          a13,
          a14,
          v220);
        byte_8CC5EC = 0;
        v165 = *(_QWORD *)&v235[0];
      }
      if ( v165 )
      {
        *((_QWORD *)&v235[0] + 1) = 0;
        *(double *)si128.m128_u64 = qfree(v165, (const char *)v15, v166, v18, v21);
      }
      goto LABEL_409;
    case 7:
      v15 = (__int64)&qword_8CC340;
      sub_22FC60(0x19u, &qword_8CC340);
      si128 = 0;
      memset(v235, 0, 56);
      v134 = (unsigned int)(xmmword_8CC2F8 - 1);
      v135 = (char *)(HIDWORD(qword_8CC350) & 0xFFFFFFF);
      v136 = v134;
      if ( (int)v134 < 0 )
      {
        byte_8CC5EC = 0;
        goto LABEL_306;
      }
      v137 = qword_8CC2F0;
      v15 = (unsigned int)xmmword_8CC358;
      v138 = 56 * v134;
      v134 = *(unsigned int *)(qword_8CC2F0 + 56 * v134);
      v139 = qword_8CC2F0 + v138;
      if ( (_DWORD)v135 != 7 )
        goto LABEL_490;
      while ( 1 )
      {
        if ( (_DWORD)xmmword_8CC358 == (_DWORD)v134 )
        {
          a8 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(v139 + 4));
          si128 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)xmmword_8CC358), (__m128i)a8);
          *(_QWORD *)&v235[0] = si128.m128_u64[0];
          if ( (_OWORD *)((char *)v235 + 8) != (_OWORD *)(v139 + 8) )
          {
            v140 = *(_QWORD *)(v139 + 16);
            if ( v140 >= 2 )
            {
              v15 = *(_QWORD *)(v139 + 8);
              *((_QWORD *)&v235[0] + 1) = qvector_reserve((char *)v235 + 8, 0, *(_QWORD *)(v139 + 16), 1);
              *(_QWORD *)&v235[1] = v140;
              memmove(*((void **)&v235[0] + 1), (const void *)v15, v140 - 1);
              *(_BYTE *)(*((_QWORD *)&v235[0] + 1) + v140 - 1) = 0;
            }
          }
          v133 = v139 + 32;
          if ( &v235[2] != (_OWORD *)(v139 + 32) )
          {
            v141 = *(_QWORD *)(v139 + 40);
            if ( v141 > 1 )
            {
              v217 = *(const void **)(v139 + 32);
              v218 = *(void **)&v235[2];
              if ( *(_QWORD *)&v235[3] < v141 )
              {
                *(_QWORD *)&v235[2] = qvector_reserve(&v235[2], *(_QWORD *)&v235[2], *(_QWORD *)(v139 + 40), 1);
                v218 = *(void **)&v235[2];
              }
              v15 = (__int64)v217;
              *((_QWORD *)&v235[2] + 1) = v141;
              memmove(v218, v217, v141 - 1);
              *(_BYTE *)(*(_QWORD *)&v235[2] + v141 - 1) = 0;
            }
            else
            {
              *((_QWORD *)&v235[2] + 1) = 0;
            }
          }
          v135 = (char *)(HIDWORD(qword_8CC350) & 0xFFFFFFF);
          byte_8CC5EC = !(*(_BYTE *)(qword_8CC2F0 + v138 + 4) & 1);
LABEL_306:
          if ( (_DWORD)v135 == 7 )
            goto LABEL_307;
          goto LABEL_486;
        }
        --v136;
        v138 -= 56;
        if ( v136 == -1 )
          break;
        v134 = *(unsigned int *)(qword_8CC2F0 + v138);
        v139 = qword_8CC2F0 + v138;
      }
      byte_8CC5EC = 0;
LABEL_307:
      v15 = 1024;
      v135 = s1;
      *(double *)si128.m128_u64 = qsnprintf(s1, 1024, "%a: %s", *(double *)si128.m128_u64, (const char *)qword_8CC348);
      if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) != 7 )
      {
        sub_2276E0(*(double *)si128.m128_u64, (__int64)s1, 1024, v142, v143);
LABEL_486:
        sub_2276E0(*(double *)si128.m128_u64, (__int64)v135, v15, v133, v134);
        goto LABEL_487;
      }
      v144 = HIDWORD(qword_8CC340);
      if ( *(&xmmword_8CC358 + 1) != (void *)-1LL )
      {
        v145 = strlen(s1);
        v15 = 1024 - v145;
        v135 = &s1[v145];
        *(double *)si128.m128_u64 = qsnprintf(
                                      &s1[v145],
                                      1024 - v145,
                                      " -> %0*a",
                                      dword_8CC560,
                                      *(double *)si128.m128_u64);
        v144 = HIDWORD(qword_8CC340);
        if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) != 7 )
LABEL_487:
          sub_2276E0(*(double *)si128.m128_u64, (__int64)v135, v15, v146, v147);
      }
      append_snprintf(s1, v258, " (exc.code %x, tid %d)", (_DWORD)xmmword_8CC358, v144);
      if ( (BYTE4(v235[0]) & 0xC) == 0 || (BYTE4(v235[0]) & 5) != 0 )
        sub_169700((int)"%s\n", (__int64)s1, v148, v149, v150, v151, si128, a8, a9, a10, v152, v153, a13, a14, v220);
      v15 = (__int64)&qword_8CC340;
      LODWORD(v233) = -1;
      sub_236E30(0xAu, &qword_8CC340, &v233, *(double *)si128.m128_u64);
      v155 = (int)v233;
      if ( (_DWORD)v233 == -1 )
      {
        if ( (BYTE4(v235[0]) & 0xC) == 0 )
        {
          v155 = (unsigned __int8)byte_8CC5EC ^ 1;
          LODWORD(v233) = v155;
          goto LABEL_314;
        }
        LODWORD(v233) = 0;
      }
      else
      {
LABEL_314:
        if ( v155 )
        {
          v15 = (__int64)s1;
          sub_233B00((int)"%s", (__int64)s1, v154, v18, (__int64)v21, v22, si128, a8, a9, a10, v23, v24, a13, a14, v220);
        }
      }
      if ( *(_QWORD *)&v235[2] )
      {
        *((_QWORD *)&v235[2] + 1) = 0;
        *(double *)si128.m128_u64 = qfree(*(_QWORD *)&v235[2], (const char *)v15);
      }
      if ( *((_QWORD *)&v235[0] + 1) )
      {
        *(_QWORD *)&v235[1] = 0;
        *(double *)si128.m128_u64 = qfree(*((_QWORD *)&v235[0] + 1), (const char *)v15, *(double *)si128.m128_u64);
      }
LABEL_409:
      v31 = HIDWORD(qword_8CC120);
      v106 = BYTE4(qword_8CC120) & 0x40;
LABEL_265:
      v32 = qword_8CC2A0;
      if ( !v106 )
      {
LABEL_33:
        v18 = v31 | 0x40u;
        if ( (_DWORD)qword_8CC120 )
        {
          v32 = qword_8CC430;
          v33 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
          if ( qword_8CC430 != v33 )
          {
            while ( (_DWORD)qword_8CC120 != *(_DWORD *)v32 )
            {
              v32 += 256;
              if ( v33 == v32 )
              {
                v32 = 0;
                break;
              }
            }
            qword_8CC2A0 = v32;
            HIDWORD(qword_8CC120) = v18;
            goto LABEL_39;
          }
        }
        qword_8CC2A0 = 0;
        HIDWORD(qword_8CC120) = v18;
LABEL_185:
        if ( qword_8CC108 )
          sub_226B70(0);
        v32 = 0;
        v225 = byte_8CC5EC;
        if ( byte_8CC5EC )
        {
          if ( byte_8CC2A8 && (_DWORD)qword_8CC2B0 )
            qword_8CC2B0 = 0;
          v225 = 0;
          v32 = 0;
          goto LABEL_64;
        }
LABEL_57:
        v42 = HIDWORD(qword_8CC2B0);
        if ( (unsigned int)(HIDWORD(qword_8CC2B0) - 15) <= 3 )
        {
          v43 = 0;
          if ( (_DWORD)qword_8CC2B0 )
          {
            qword_8CC2B0 = 0;
            v43 = 1;
          }
          byte_8CC2A8 = v43;
          v15 = (__int64)&qword_8CC340;
          sub_236E30(v42, &qword_8CC340);
          if ( byte_8CC2A8 )
          {
            if ( (_DWORD)qword_8CC2B0 )
              qword_8CC2B0 = 0;
          }
          else if ( !byte_8CC5EC )
          {
            goto LABEL_62;
          }
          if ( v225 && byte_8CC5EC )
            goto LABEL_72;
          goto LABEL_64;
        }
        if ( byte_8CC2A8 )
        {
          if ( !(_DWORD)qword_8CC2B0 )
            goto LABEL_64;
          goto LABEL_63;
        }
LABEL_62:
        v18 = (unsigned int)qword_8CC2B0;
        v44 = 0;
        if ( !(_DWORD)qword_8CC2B0 )
          goto LABEL_75;
LABEL_63:
        qword_8CC2B0 = 0;
LABEL_64:
        v44 = byte_8CC2A8;
        goto LABEL_75;
      }
LABEL_39:
      if ( !v32 )
        goto LABEL_185;
      v34 = HIDWORD(qword_8CC350);
      *(_BYTE *)(v32 + 34) = 0;
      v35 = qword_8CC108 == 0;
      *(_DWORD *)(v32 + 216) = v34 & 0xFFFFFFF;
      if ( !v35 )
        sub_226B70(v32);
      v36 = byte_8CC5ED;
      if ( byte_8CC5ED )
        goto LABEL_55;
      if ( byte_8CC5EC && (HIDWORD(qword_8CC350) & 0xFFFFFFFu) - 5 > 2 )
        goto LABEL_69;
      v37 = *(_QWORD *)(v32 + 240);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 16);
        if ( v38 == -1 || v38 == qword_8CC348 )
        {
          v15 = v32;
          v36 = sub_23E520(
                  *(_QWORD *)(v32 + 240),
                  v32,
                  *(double *)si128.m128_u64,
                  a8,
                  a9,
                  a10,
                  *(double *)v23.m128_u64,
                  *(double *)v24.m128_u64,
                  a13,
                  a14);
          if ( *(_QWORD *)(v37 + 8) )
          {
            v183 = sub_234FE0(*(_DWORD *)(v37 + 4));
            if ( !v183 )
            {
LABEL_493:
              if ( !under_debugger )
                interr(40047, v15, v184, v185, *(double *)si128.m128_u64);
              goto LABEL_503;
            }
            v186 = *((_QWORD **)v183 + 31);
            if ( v186 )
            {
              v187 = nullptr;
              while ( 1 )
              {
                v188 = v186[1];
                if ( v185 == v186 )
                  break;
                v187 = v186;
                if ( !v188 )
                  goto LABEL_367;
                v186 = (_QWORD *)v186[1];
              }
              if ( v187 )
                v187[1] = v188;
              else
                *((_QWORD *)v183 + 31) = v188;
              (*(void (__fastcall **)(_QWORD *))(*v186 + 16LL))(v186);
            }
          }
LABEL_367:
          operator delete((void *)v37, 0x20u);
          v15 = (__int64)&qword_8CC340;
          *(_QWORD *)(v32 + 240) = 0;
          sub_22FC60(0xBu, &qword_8CC340);
        }
      }
      v39 = *(_QWORD *)(v32 + 248);
      if ( v39 )
      {
        while ( 1 )
        {
          v41 = *(_QWORD *)(v39 + 8);
          if ( v36 )
          {
            if ( *(_BYTE *)(v39 + 16) )
              break;
          }
LABEL_49:
          v40 = (void (__fastcall ***)(_QWORD, __int64))v39;
          v15 = v32;
          v39 = v41;
          (**v40)(v40, v32);
          if ( !v41 )
            goto LABEL_55;
        }
        while ( v41 )
        {
          v39 = v41;
          v41 = *(_QWORD *)(v41 + 8);
          if ( !*(_BYTE *)(v39 + 16) )
            goto LABEL_49;
        }
      }
LABEL_55:
      if ( !byte_8CC5EC )
      {
        v225 = 1;
        goto LABEL_57;
      }
LABEL_69:
      if ( byte_8CC2A8 && (_DWORD)qword_8CC2B0 )
        qword_8CC2B0 = 0;
LABEL_72:
      v45 = *(void **)(v32 + 240);
      if ( !v45 || (*(_DWORD *)v45 & 0xF000) == 0x1000 )
      {
LABEL_74:
        v225 = 1;
        v44 = byte_8CC2A8;
        goto LABEL_75;
      }
      v107 = *((_QWORD *)v45 + 1);
      v108 = *((_QWORD *)v45 + 2);
      if ( v107 )
      {
        v109 = sub_234FE0(*((_DWORD *)v45 + 1));
        if ( v109 )
        {
          v112 = *((_QWORD *)v109 + 31);
          if ( v112 )
          {
            v113 = 0;
            while ( 1 )
            {
              v114 = *(_QWORD *)(v112 + 8);
              if ( v112 == v107 )
                break;
              v113 = v112;
              if ( !v114 )
                goto LABEL_244;
              v112 = *(_QWORD *)(v112 + 8);
            }
            if ( v113 )
              *(_QWORD *)(v113 + 8) = v114;
            else
              *((_QWORD *)v109 + 31) = v114;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
          }
          goto LABEL_244;
        }
        if ( !under_debugger )
          interr(40047, v107, v110, v111, *(double *)si128.m128_u64);
LABEL_503:
        BUG();
      }
LABEL_244:
      v15 = 32;
      operator delete(v45, 0x20u);
      *(_QWORD *)(v32 + 240) = 0;
      if ( v108 != -1 )
      {
        v15 = v108;
        if ( (unsigned int)sub_23D8E0(
                             v32,
                             v108,
                             2,
                             nullptr,
                             0,
                             0,
                             *(double *)si128.m128_u64,
                             a8,
                             a9,
                             a10,
                             *(double *)v23.m128_u64,
                             *(double *)v24.m128_u64,
                             a13,
                             a14) )
          goto LABEL_74;
      }
      byte_8CC5EC = 0;
      v44 = byte_8CC2A8;
      v225 = 1;
LABEL_75:
      v46 = a1 & 0x18 | 0x20u;
      while ( 2 )
      {
        if ( v44 )
          goto LABEL_96;
LABEL_77:
        if ( byte_8CC5EC )
        {
          if ( (a1 & 0x200) != 0 || byte_8CC5E2 || byte_8CC5ED || (a1 & 2) == 0 && !byte_8CC5E4 )
            goto LABEL_99;
LABEL_81:
          if ( !dword_8CC5F0 )
            goto LABEL_103;
          byte_8CC5E4 = 0;
          byte_8CC5EC = 0;
          byte_8CC5E3 = 0;
          if ( (*(_BYTE *)(dbg + 32) & 0x40) != 0 )
          {
            if ( byte_8CC0EA )
            {
              sub_1C78D0();
              byte_8CC0EA = 0;
            }
            byte_8CC5F4 = 0;
            QT::QElapsedTimer::invalidate((QT::QElapsedTimer *)&unk_8BA570);
          }
          if ( v225 )
            sub_235140(v32, 1, v46, *(double *)si128.m128_u64);
          sub_240EA0(byte_8CC558, *(double *)si128.m128_u64);
          byte_8CC558 = 0;
          sub_236B50(*(double *)si128.m128_u64, a8, a9, a10, v47, v48, a13, a14);
          sub_22FC60(0xEu, &qword_8CC340);
          v52 = HIDWORD(qword_8CC340);
          if ( !HIDWORD(qword_8CC340) )
            goto LABEL_167;
          v53 = (_DWORD *)qword_8CC430;
          v49 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
          if ( qword_8CC430 == v49 )
            goto LABEL_167;
          while ( HIDWORD(qword_8CC340) != *v53 )
          {
            v53 += 64;
            if ( (_DWORD *)v49 == v53 )
              goto LABEL_167;
          }
          if ( !v53 )
          {
LABEL_167:
            if ( (_QWORD)xmmword_8CC438 )
              v52 = *(_DWORD *)qword_8CC430;
          }
          v54 = 0;
          sub_24F380(v52, 0, *(double *)si128.m128_u64, a8, a9, a10, v50, v51, a13, a14, v49, (char *)xmmword_8CC438);
          sub_27EA50(0x2000700418000000LL, 0);
          sub_3DA240();
          if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 6 )
            v54 = HIDWORD(qword_8CC340);
          sub_388DC0(v54);
          if ( (dword_8BA5B0 & 0x800) == 0
            || dword_8BA590 == -1
            || (v60 = get_eah(v54, 0, v55),
                v61 = (char *)xmmword_8CC438,
                v62 = (_DWORD *)qword_8CC430,
                v230 = v60,
                v63 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8),
                qword_8CC430 == v63) )
          {
LABEL_94:
            dword_8CC55C |= 3u;
            sub_227820();
            mark_builtin_widgets(0x4000, 0, 1);
            v15 = (__int64)&qword_8CC340;
            sub_236E30(0xBu, &qword_8CC340);
            v44 = byte_8CC2A8;
            if ( byte_8CC5EC )
              continue;
            if ( !byte_8CC2A8 )
              goto LABEL_103;
LABEL_96:
            result = sub_238E70((__int64)&qword_8CC2B0, *(double *)si128.m128_u64);
            if ( (_BYTE)result )
              goto LABEL_102;
            byte_8CC2A8 = 0;
            goto LABEL_77;
          }
          v64 = (unsigned int *)qword_8CC430;
          while ( 1 )
          {
            v65 = *v64;
            if ( v54 )
            {
              if ( v54 == (_DWORD)v65 )
                goto LABEL_119;
            }
            else if ( (_DWORD)v65 )
            {
LABEL_119:
              if ( (_DWORD *)v63 == v62 )
                goto LABEL_116;
              while ( *v62 != (_DWORD)v65 )
              {
                v62 += 64;
                if ( v62 == (_DWORD *)v63 )
                  goto LABEL_116;
              }
              if ( !v62 )
                goto LABEL_116;
              v66 = sub_23F1C0((__int64)v62, -1, *(double *)si128.m128_u64, v65, v61);
              v68 = v66;
              if ( !v66 )
                goto LABEL_145;
              v69 = dword_8BA594;
              v70 = *(_QWORD *)(v66 + 32LL * dword_8BA594 + 8);
              if ( !dbg )
              {
                if ( dword_8BA590 == -1 )
                  goto LABEL_206;
                v222 = *(_QWORD *)(v66 + 32LL * dword_8BA590 + 8);
LABEL_181:
                v223 = -1;
                v76 = dword_8BA58C;
                if ( dword_8BA58C != -1 )
                  goto LABEL_182;
                goto LABEL_144;
              }
              if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 && (v71 = qword_8CC600) != nullptr )
              {
                *(_QWORD *)qword_8CC600 = v70;
                v70 = -1;
                v71[1] = v66;
                *((_DWORD *)v71 + 4) = v69;
                if ( (unsigned int)sub_23D480((__int64)v71, 11, v69, v67, *(double *)si128.m128_u64) == 1 )
                  v70 = *(_QWORD *)qword_8CC600;
                v73 = dword_8BA590;
                if ( dword_8BA590 == -1 )
                  goto LABEL_206;
                v74 = dbg;
                v222 = *(_QWORD *)(v68 + 32LL * dword_8BA590 + 8);
                if ( !dbg )
                  goto LABEL_181;
                if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
                {
                  v75 = qword_8CC600;
                  if ( qword_8CC600 )
                  {
                    *(_QWORD *)qword_8CC600 = *(_QWORD *)(v68 + 32LL * dword_8BA590 + 8);
                    v75[1] = v68;
                    *((_DWORD *)v75 + 4) = v73;
                    if ( (unsigned int)sub_23D480((__int64)v75, 11, v74, v72, *(double *)si128.m128_u64) == 1 )
                    {
                      v222 = *(_QWORD *)qword_8CC600;
                      goto LABEL_181;
                    }
LABEL_206:
                    v76 = dword_8BA58C;
                    if ( dword_8BA58C == -1 )
                      goto LABEL_368;
                    v222 = -1;
LABEL_182:
                    v77 = dbg;
                    v223 = *(_QWORD *)(v68 + 32LL * v76 + 8);
                    if ( dbg )
                    {
LABEL_140:
                      if ( (*(_BYTE *)(v77 + 37) & 0x40) != 0 )
                      {
                        v78 = qword_8CC600;
                        if ( qword_8CC600 )
                        {
                          *((_QWORD *)qword_8CC600 + 1) = v68;
                          v78[4] = v76;
                          *(_QWORD *)v78 = v223;
                          v79 = sub_23D480((__int64)v78, 11, v77, (char *)v223, *(double *)si128.m128_u64);
                          v223 = -1;
                          if ( v79 == 1 )
                            v223 = *(_QWORD *)qword_8CC600;
                        }
                      }
                    }
LABEL_144:
                    v226 = sub_388E60(((__int64)v64 - qword_8CC430) >> 8);
                    if ( v222 < v226 )
                    {
                      while ( v222 != -1 && v70 != -1 )
                      {
                        if ( v226 < v223 )
                          break;
                        func = get_func(v70);
                        v87 = func;
                        if ( !func )
                          break;
                        v231 = nullptr;
                        if ( !(unsigned __int8)tinfo_get_func_frame(&v231, func) )
                          goto LABEL_163;
                        that = prev_that(*(_QWORD *)(v87 + 8), *(_QWORD *)v87, sub_20A790, 0);
                        if ( that == -1 || get_spd(v87, that) )
                          goto LABEL_163;
                        spd = get_spd(v87, v70);
                        v81 = -spd;
                        if ( spd > 0 )
                          v81 = spd;
                        v227 = v81 + v222;
                        if ( get_tinfo_size(0, v231, 0) != -1 )
                        {
                          v99 = *(_QWORD *)v87;
                          si128 = 0;
                          v234 = 0;
                          v233 = nullptr;
                          get_ea_name(&v233, v99, 0, 0);
                          v100 = *(_QWORD *)(v87 + 32);
                          if ( (*(_BYTE *)(v87 + 16) & 0x10) != 0
                            && v223 >= v222
                            && v223 != -1
                            && v223 < v227
                            && v81 >= v100 )
                          {
                            v101 = (const char *)(v223 - v100);
                            v102 = &::s1;
                            v103 = v223 - v100;
                            if ( (_QWORD)v234 )
                              v102 = v233;
                            v104 = sub_228B20(&v231, (__int64)v101, 0, v102);
                          }
                          else
                          {
                            v189 = *(unsigned __int16 *)(v87 + 40);
                            v103 = v227 - (v189 + v100);
                            v190 = 0;
                            if ( v103 < v222 )
                            {
                              v224 = v189 + v100 + v222 - v227;
                              tinfo_size = get_tinfo_size(0, v231, 0);
                              v204 = v224;
                              if ( tinfo_size <= v224 )
                                v204 = tinfo_size;
                              v190 = v204;
                            }
                            v191 = &::s1;
                            if ( (_QWORD)v234 )
                              v191 = v233;
                            v101 = (const char *)v103;
                            v104 = sub_228B20(&v231, v103, v190, v191);
                          }
                          if ( !v104 )
                          {
                            if ( !v233 )
                            {
LABEL_163:
                              clear_tinfo_t(&v231);
                              v61 = (char *)xmmword_8CC438;
                              goto LABEL_116;
                            }
                            *(_QWORD *)&v234 = 0;
                            *(double *)si128.m128_u64 = qfree(v233, v101);
                            clear_tinfo_t(&v231);
                            v61 = (char *)xmmword_8CC438;
                            goto LABEL_116;
                          }
                          v237 = 1;
                          v238 = -1;
                          v239 = 0;
                          v240 = 0;
                          memset(v235, 0, sizeof(v235));
                          v236[0] = 0;
                          v192 = (__m128 *)qvector_reserve(&v235[1], 0, 18, 1);
                          si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCA70);
                          *(_QWORD *)&v235[1] = v192;
                          v193 = v231;
                          *((_QWORD *)&v235[1] + 1) = 18;
                          v192[1].m128_i8[0] = 115;
                          *v192 = si128;
                          *(_BYTE *)(*(_QWORD *)&v235[1] + 17LL) = 0;
                          if ( (unsigned int)find_tinfo_udt_member(v235, v193, 3) == -1
                            || (v194 = v103 + (*(_QWORD *)&v235[0] >> 3), v194 < v222)
                            || (v232 = -1,
                                v195 = (const char *)(dword_8CC560 >> 1),
                                v193 = v195,
                                v195 == (const char *)get_bytes(&v232, v195, v194, 0, 0))
                            && (v232 == -1 || (v232 &= *(_QWORD *)(v230 + 16), !(unsigned __int8)is_mapped(v232)))
                            || (v223 = v232, v232 == -1)
                            || v227 >= v232
                            || (v196 = getseg(v232), v196 != getseg(v222)) )
                          {
                            v223 = -1;
                          }
                          clear_tinfo_t(v236);
                          if ( *((_QWORD *)&v235[2] + 1) )
                          {
                            *(_QWORD *)&v235[3] = 0;
                            *(double *)si128.m128_u64 = qfree(*((_QWORD *)&v235[2] + 1), v193, v197, v198, v199, v235);
                          }
                          if ( *(_QWORD *)&v235[1] )
                          {
                            *((_QWORD *)&v235[1] + 1) = 0;
                            *(double *)si128.m128_u64 = qfree(*(_QWORD *)&v235[1], v193);
                          }
                          if ( v233 )
                          {
                            *(_QWORD *)&v234 = 0;
                            *(double *)si128.m128_u64 = qfree(v233, v193);
                          }
                        }
                        *(_QWORD *)&v235[0] = -1;
                        v229 = dword_8CC560 >> 1;
                        bytes = get_bytes(v235, v229, v227, 0, 0);
                        v70 = *(_QWORD *)&v235[0];
                        if ( v229 == bytes )
                        {
                          if ( *(_QWORD *)&v235[0] == -1
                            || (*(_QWORD *)&v235[0] &= *(_QWORD *)(v230 + 16),
                                !(unsigned __int8)is_mapped(*(_QWORD *)&v235[0])) )
                          {
                            v70 = -1;
                          }
                          else
                          {
                            v70 = *(_QWORD *)&v235[0];
                          }
                        }
                        v83 = getseg(v70);
                        if ( v83 )
                        {
                          v84 = *(_BYTE *)(v83 + 42);
                          if ( v84 && (v84 & 1) == 0 )
                            v70 = -1;
                        }
                        else
                        {
                          v70 = -1;
                        }
                        v85 = v227 + *(_QWORD *)(v87 + 48) + (dword_8CC560 >> 1);
                        if ( !(unsigned __int8)is_mapped(v85) )
                          goto LABEL_163;
                        v228 = getseg(v85);
                        if ( v228 != getseg(v222) )
                          goto LABEL_163;
                        clear_tinfo_t(&v231);
                        v222 = v85;
                      }
                    }
LABEL_145:
                    v61 = (char *)xmmword_8CC438;
                    goto LABEL_116;
                  }
                }
              }
              else
              {
                if ( dword_8BA590 == -1 )
                {
                  v76 = dword_8BA58C;
                  if ( dword_8BA58C == -1 )
                  {
LABEL_368:
                    sub_388E60(((__int64)v64 - qword_8CC430) >> 8);
                    v61 = (char *)xmmword_8CC438;
                    goto LABEL_116;
                  }
                  v222 = -1;
                  v77 = dbg;
                  v223 = *(_QWORD *)(v68 + 32LL * dword_8BA58C + 8);
                  goto LABEL_140;
                }
                v222 = *(_QWORD *)(v66 + 32LL * dword_8BA590 + 8);
              }
              v223 = -1;
              v76 = dword_8BA58C;
              if ( dword_8BA58C != -1 )
              {
                v77 = dbg;
                v223 = *(_QWORD *)(v68 + 32LL * dword_8BA58C + 8);
                goto LABEL_140;
              }
              goto LABEL_144;
            }
LABEL_116:
            v64 += 64;
            v62 = (_DWORD *)qword_8CC430;
            v63 = qword_8CC430 + ((_QWORD)v61 << 8);
            if ( v64 == (unsigned int *)v63 )
              goto LABEL_94;
          }
        }
        break;
      }
      if ( (a1 & 0x200) != 0 )
      {
        byte_8CC5E4 = 1;
      }
      else if ( !byte_8CC5E2 && !byte_8CC5ED )
      {
        goto LABEL_81;
      }
LABEL_99:
      v57 = sub_2424A0(a1 & 0x18 | 0x20u, v15, si128, a8, a9, a10, v23, v24, a13, a14, v46, v18, (__int64)v21, v22);
      if ( v57 == -1 )
      {
        if ( dword_8CC5F0 )
        {
          sub_24FC00(si128, a8, a9, a10, v58, v59, a13, a14);
          goto LABEL_81;
        }
LABEL_103:
        result = 0;
      }
      else
      {
        if ( !v57 )
          goto LABEL_81;
        result = 1;
      }
LABEL_102:
      --dword_8CC5E8;
      return result;
    case 8:
    case 9:
      if ( (_DWORD)v15 == 9 )
      {
        v207 = (char *)&::s1;
        if ( *(&xmmword_8CC358 + 1) )
          v207 = (char *)xmmword_8CC358;
        v208 = qword_8CC4F8;
        if ( (int *)qword_8CC4F8 == &dword_8CC4E8 )
        {
          if ( (dword_8BA5B0 & 0x40) != 0 )
          {
LABEL_221:
            v15 = (__int64)&::s1;
            if ( *(&xmmword_8CC358 + 1) )
              v15 = (__int64)xmmword_8CC358;
            v27 = (unsigned __int64)"Unloaded %s\n";
            sub_169700(
              (int)"Unloaded %s\n",
              v15,
              v25,
              v18,
              (__int64)v21,
              v22,
              si128,
              a8,
              a9,
              a10,
              v23,
              v24,
              a13,
              a14,
              v220);
          }
LABEL_224:
          if ( !byte_8CC5E2 )
          {
            if ( (dword_8BA5B0 & 0x80u) != 0 )
              sub_24F660(
                *(double *)si128.m128_u64,
                a8,
                a9,
                a10,
                *(double *)v23.m128_u64,
                *(double *)v24.m128_u64,
                a13,
                a14,
                v27,
                v15,
                v25,
                (char *)v18);
            sub_236E30(((HIDWORD(qword_8CC350) & 0xFFFFFFF) != 8) + 7, &qword_8CC340);
            v15 = (__int64)&qword_8CC340;
            sub_22FC60(((HIDWORD(qword_8CC350) & 0xFFFFFFF) != 8) + 23, &qword_8CC340);
          }
          invalidate_dbgmem_config();
          v31 = HIDWORD(qword_8CC120);
          v106 = BYTE4(qword_8CC120) & 0x40;
          goto LABEL_265;
        }
        while ( 1 )
        {
          v209 = (char *)&::s1;
          if ( *(_QWORD *)(v208 + 48) )
            v209 = *(char **)(v208 + 40);
          v15 = (__int64)v207;
          if ( (unsigned __int8)sub_227250(v209, v207) )
            break;
          v27 = v208;
          v208 = std::_Rb_tree_increment(v208);
          if ( (int *)v208 == &dword_8CC4E8 )
            goto LABEL_217;
        }
        v27 = *(_QWORD *)(v208 + 64);
        v15 = 0;
        sub_2357A0(v27, 0);
      }
      else
      {
        v15 = 0;
        v27 = (unsigned __int64)&xmmword_8CC358;
        sub_235300((__int64)&xmmword_8CC358, 0);
      }
LABEL_217:
      if ( (dword_8BA5B0 & 0x40) != 0 )
      {
        v105 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
        if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 8 )
        {
          v213 = &::s1;
          if ( *(&xmmword_8CC358 + 1) )
            v213 = (const char *)xmmword_8CC358;
          v15 = *((_QWORD *)&xmmword_8CC368 + 1);
          v27 = (unsigned __int64)"%a: loaded %s\n";
          sub_169700(
            (int)"%a: loaded %s\n",
            *((__int64 *)&xmmword_8CC368 + 1),
            (__int64)v213,
            v18,
            (__int64)v21,
            v22,
            si128,
            a8,
            a9,
            a10,
            v23,
            v24,
            a13,
            a14,
            v220);
          goto LABEL_224;
        }
        v25 = (unsigned int)(v105 - 9);
        if ( (unsigned int)v25 > 1 && v105 != 3 )
        {
LABEL_489:
          sub_2276A0(*(double *)si128.m128_u64, v27, v15, v25, v18);
LABEL_490:
          if ( under_debugger )
            goto LABEL_503;
          v165 = 3299;
          interr(3299, v15, v137, v134, *(double *)si128.m128_u64);
LABEL_492:
          sub_2276C0(*(double *)si128.m128_u64, v165, v15, v166, v18);
          goto LABEL_493;
        }
        goto LABEL_221;
      }
      goto LABEL_224;
    case 10:
      if ( (unsigned __int64)*(&xmmword_8CC358 + 1) <= 1 )
        goto LABEL_32;
      v156 = BYTE1(dword_8BA5B0);
      if ( (dword_8BA5B0 & 0x100) != 0 )
      {
        v15 = (__int64)xmmword_8CC358;
        v27 = (unsigned __int64)"Debugged application message: %s\n";
        sub_169700(
          (int)"Debugged application message: %s\n",
          (__int64)xmmword_8CC358,
          v25,
          v18,
          (__int64)v21,
          v22,
          si128,
          a8,
          a9,
          a10,
          v23,
          v24,
          a13,
          a14,
          v220);
        v156 = BYTE1(dword_8BA5B0);
      }
      if ( (v156 & 2) != 0 )
        sub_24F660(
          *(double *)si128.m128_u64,
          a8,
          a9,
          a10,
          *(double *)v23.m128_u64,
          *(double *)v24.m128_u64,
          a13,
          a14,
          v27,
          v15,
          v25,
          (char *)v18);
      sub_236E30(9u, &qword_8CC340);
      v15 = (__int64)&qword_8CC340;
      sub_22FC60(0x1Au, &qword_8CC340);
      v31 = HIDWORD(qword_8CC120);
      v106 = BYTE4(qword_8CC120) & 0x40;
      goto LABEL_265;
    case 11:
      v15 = 0;
      file_ext = (char *)&xmmword_8CC358;
      byte_8CC5E2 = 0;
      sub_235300((__int64)&xmmword_8CC358, 0);
      v17 = (unsigned int)qword_8CC340;
      v129 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
      if ( (unsigned int)v129 > 0xB )
        goto LABEL_407;
      v18 = 2306;
      v130 = _bittest64(&v18, v129);
      if ( !v130 )
        goto LABEL_407;
      v131 = &::s1;
      if ( *(&xmmword_8CC358 + 1) )
        v131 = (const char *)xmmword_8CC358;
      sub_169700(
        (int)"Debugger: attached to process %s (pid=%u)\n",
        (__int64)v131,
        (unsigned int)qword_8CC340,
        2306,
        v125,
        v126,
        si128,
        a8,
        a9,
        a10,
        v127,
        v128,
        a13,
        a14,
        v220);
      if ( (*(_BYTE *)(dbg + 32) & 4) == 0 )
        byte_8CC5EC = 0;
      if ( HIDWORD(qword_8CC2B0) == 3 )
      {
        if ( (_DWORD)qword_8CC2B0 )
          qword_8CC2B0 = 0;
        else
          v130 = 0;
        byte_8CC2A8 = v130;
        sub_236E30(3u, &qword_8CC340);
      }
      else
      {
        sub_236E30(3u, &qword_8CC340);
      }
      file_ext = (_BYTE *)(&qword_60 + 1);
      v15 = (__int64)v241;
      byte_8CC559 = (*(_BYTE *)(dbg + 36) & 4) != 0;
      if ( getinf_buf(97, v241, 4096) > 0 )
      {
        file_ext = (char *)get_file_ext(v241);
        if ( !(unsigned __int8)is_database_ext(file_ext) )
          goto LABEL_409;
      }
      v132 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
      if ( (unsigned int)v132 > 0xB )
        goto LABEL_407;
      v17 = 2306;
      if ( !_bittest64(&v17, v132) )
        goto LABEL_407;
      v15 = (__int64)&::s1;
      if ( *(&xmmword_8CC358 + 1) )
        v15 = (__int64)xmmword_8CC358;
      setinf_buf(97, v15, 0);
      sub_30A040(nullptr);
      v31 = HIDWORD(qword_8CC120);
      v106 = BYTE4(qword_8CC120) & 0x40;
      goto LABEL_265;
    case 12:
      if ( (dword_8BA5B0 & 0x10000) != 0 )
        sub_24F660(
          *(double *)si128.m128_u64,
          a8,
          a9,
          a10,
          *(double *)v23.m128_u64,
          *(double *)v24.m128_u64,
          a13,
          a14,
          v27,
          v15,
          v25,
          (char *)v18);
      sub_169700(
        (int)"Debugger: detached from process\n",
        v15,
        v25,
        v18,
        (__int64)v21,
        v22,
        si128,
        a8,
        a9,
        a10,
        v23,
        v24,
        a13,
        a14,
        v220);
      *(double *)si128.m128_u64 = reset_undo();
      sub_23D480((__int64)qword_8CC600, 2, v120, v121, *(double *)si128.m128_u64);
      if ( dword_8CC5F0 )
        sub_24FC00(si128, a8, a9, a10, v122, v123, a13, a14);
      if ( HIDWORD(qword_8CC2B0) == 4 )
      {
        v124 = 0;
        if ( (_DWORD)qword_8CC2B0 )
        {
          qword_8CC2B0 = 0;
          v124 = 1;
        }
        byte_8CC2A8 = v124;
      }
      v15 = (__int64)&qword_8CC340;
      sub_236E30(4u, &qword_8CC340);
      goto LABEL_264;
    case 13:
      byte_8CC5EC = 0;
LABEL_32:
      v31 = 0;
      goto LABEL_33;
    default:
      goto LABEL_408;
  }
}
