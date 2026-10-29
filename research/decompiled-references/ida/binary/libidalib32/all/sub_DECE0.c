__int64 __fastcall sub_DECE0(__int16 a1, __m128 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  const char *v4; // r12
  int v5; // r13d
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rsi
  __int64 file_ext; // rdi
  char v10; // dl
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // esi
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  int v22; // eax
  bool v23; // zf
  char v24; // r13
  __int64 v25; // rbp
  int v26; // eax
  __int64 v27; // rbp
  __int64 v28; // r12
  char v29; // al
  _DWORD *v30; // r12
  char v31; // al
  __int64 v32; // rdi
  _DWORD *v33; // rax
  _DWORD *v34; // rdx
  __int64 result; // rax
  int v36; // eax
  __int64 v37; // rcx
  _DWORD *v38; // rdi
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rax
  int v42; // edx
  __int64 v43; // rcx
  _QWORD *v44; // rdi
  int v45; // eax
  __int64 v46; // rdx
  _QWORD *v47; // rdi
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  unsigned int *v51; // rdi
  _DWORD *v52; // rax
  __m128i *v53; // rax
  __int32 v54; // ecx
  __int32 v55; // edx
  int v56; // edx
  __int64 func; // r14
  int spd; // eax
  unsigned int v59; // r13d
  __int64 bytes; // rax
  __int64 v61; // rax
  char v62; // al
  unsigned int v63; // r14d
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  unsigned int v68; // eax
  const char *v69; // rcx
  unsigned int v70; // r13d
  char v71; // al
  int v72; // eax
  const char *v73; // rsi
  int v74; // edx
  unsigned int v75; // ebp
  _DWORD *v76; // rax
  _QWORD *v77; // rcx
  _QWORD *v78; // rdi
  _QWORD *v79; // rsi
  __int64 v80; // rdx
  _DWORD *v81; // rax
  _QWORD *v82; // rcx
  _QWORD *v83; // rdi
  _QWORD *v84; // rsi
  __int64 v85; // rdx
  void *v86; // rdi
  char v87; // al
  char v88; // al
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  const char *v91; // rsi
  unsigned __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rdx
  int v95; // edi
  int v96; // eax
  __int64 v97; // rbx
  unsigned int v98; // edx
  __int64 v99; // r13
  unsigned __int64 v100; // r14
  unsigned __int64 v101; // r14
  char v102; // ah
  __int64 v103; // rbx
  unsigned int v104; // eax
  __int64 bpt_kernel_interface; // rax
  int v106; // edx
  __int64 v107; // rax
  int v108; // r9d
  __int64 v109; // rcx
  int v110; // eax
  int v111; // ecx
  int v112; // ebx
  __int64 v113; // rax
  __int64 v114; // rbp
  char v115; // al
  int v116; // esi
  int v117; // edx
  const char *v118; // rcx
  __int64 v119; // rdx
  unsigned __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rdx
  unsigned __int8 v123; // al
  int v124; // eax
  __int64 tinfo_size; // rax
  int v126; // ecx
  __int64 v127; // rax
  char *v128; // r13
  __int64 v129; // rbx
  char *v130; // rdi
  unsigned __int64 v131; // rax
  __int64 v132; // rdx
  const char *v133; // rdx
  const void *v134; // rbp
  const void *v135; // r12
  void *v136; // rdi
  int v137; // [rsp-10h] [rbp-2148h]
  int v138; // [rsp-8h] [rbp-2140h]
  unsigned int v140; // [rsp+8h] [rbp-2130h]
  unsigned int v141; // [rsp+Ch] [rbp-212Ch]
  unsigned int v142; // [rsp+18h] [rbp-2120h]
  __int64 v143; // [rsp+18h] [rbp-2120h]
  char v144; // [rsp+23h] [rbp-2115h]
  unsigned int v145; // [rsp+24h] [rbp-2114h]
  unsigned int v146; // [rsp+28h] [rbp-2110h]
  __int64 v147; // [rsp+28h] [rbp-2110h]
  __int64 v148; // [rsp+30h] [rbp-2108h]
  __int64 v149; // [rsp+48h] [rbp-20F0h] BYREF
  const char *v150; // [rsp+50h] [rbp-20E8h]
  __int128 v151; // [rsp+58h] [rbp-20E0h]
  _OWORD v152[6]; // [rsp+70h] [rbp-20C8h] BYREF
  __int64 v153; // [rsp+D0h] [rbp-2068h]
  int v154; // [rsp+D8h] [rbp-2060h]
  __int64 v155; // [rsp+E0h] [rbp-2058h]
  char v156; // [rsp+E8h] [rbp-2050h]
  char v157[4096]; // [rsp+F0h] [rbp-2048h] BYREF
  char s1[16]; // [rsp+10F0h] [rbp-1048h] BYREF
  __m128i v159; // [rsp+1100h] [rbp-1038h] BYREF
  __m128i v160; // [rsp+1110h] [rbp-1028h] BYREF
  __m128i v161; // [rsp+1120h] [rbp-1018h] BYREF
  __m128i v162; // [rsp+1130h] [rbp-1008h] BYREF
  __m128i v163; // [rsp+1140h] [rbp-FF8h] BYREF
  __m128i v164; // [rsp+1150h] [rbp-FE8h] BYREF
  __m128i v165; // [rsp+1160h] [rbp-FD8h] BYREF
  __m128i v166; // [rsp+1170h] [rbp-FC8h] BYREF
  __m128i v167; // [rsp+1180h] [rbp-FB8h] BYREF
  __m128i v168; // [rsp+1190h] [rbp-FA8h] BYREF
  __m128i v169; // [rsp+11A0h] [rbp-F98h] BYREF
  __m128i v170; // [rsp+11B0h] [rbp-F88h] BYREF
  __m128i v171; // [rsp+11C0h] [rbp-F78h] BYREF
  __int64 v172; // [rsp+11D0h] [rbp-F68h]
  unsigned __int64 v173; // [rsp+20F8h] [rbp-40h]

  v173 = __readfsqword(0x28u);
  ++dword_25159C;
  dword_2515A4 = -1;
  byte_2515A0 = 1;
  if ( !byte_251599 && ((unsigned int)qword_251330 & 0xFFFFFFF) - 8 > 3 && ((unsigned int)qword_251330 & 0xFFFFFFF) > 4 )
  {
    if ( !under_debugger )
      interr();
    goto LABEL_479;
  }
  if ( (*(_BYTE *)(dbg + 34LL) & 2) != 0 )
  {
    v52 = sub_C4D00(SHIDWORD(qword_251320));
    v2 = (__int64)v52;
    if ( v52 )
    {
      if ( !*((_QWORD *)v52 + 27) )
      {
        v3 = qword_251410;
        v4 = (const char *)(qword_251410 + 232 * xmmword_251418);
        if ( (const char *)qword_251410 != v4 )
        {
          v53 = (__m128i *)qword_251410;
          while ( !v53[13].m128i_i64[1] )
          {
            v53 = (__m128i *)((char *)v53 + 232);
            if ( v4 == (const char *)v53 )
              goto LABEL_412;
          }
          if ( v53 )
          {
            if ( (__m128i *)v2 == v53 )
              goto LABEL_5;
            goto LABEL_161;
          }
LABEL_412:
          v5 = qword_251328;
          while ( 1 )
          {
            v127 = *(_QWORD *)(v3 + 144);
            if ( v127 )
            {
              if ( v5 == *(_DWORD *)(v127 + 76) )
                break;
            }
            if ( sub_C7030(v3, v5) )
              break;
            v3 += 232;
            if ( v4 == (const char *)v3 )
              goto LABEL_5;
          }
          if ( v2 != v3 && v3 != 0 )
          {
            v53 = (__m128i *)v3;
LABEL_161:
            *(__m128i *)s1 = _mm_loadu_si128(v53);
            v159 = _mm_loadu_si128(v53 + 1);
            v160 = _mm_loadu_si128(v53 + 2);
            v161 = _mm_loadu_si128(v53 + 3);
            v162 = _mm_loadu_si128(v53 + 4);
            v163 = _mm_loadu_si128(v53 + 5);
            v164 = _mm_loadu_si128(v53 + 6);
            v165 = _mm_loadu_si128(v53 + 7);
            v166 = _mm_loadu_si128(v53 + 8);
            v167 = _mm_loadu_si128(v53 + 9);
            v168 = _mm_loadu_si128(v53 + 10);
            v169 = _mm_loadu_si128(v53 + 11);
            v170 = _mm_loadu_si128(v53 + 12);
            v171 = _mm_loadu_si128(v53 + 13);
            v172 = v53[14].m128i_i64[0];
            *v53 = _mm_loadu_si128((const __m128i *)v2);
            v53[1] = _mm_loadu_si128((const __m128i *)(v2 + 16));
            v53[2] = _mm_loadu_si128((const __m128i *)(v2 + 32));
            v53[3] = _mm_loadu_si128((const __m128i *)(v2 + 48));
            v53[4] = _mm_loadu_si128((const __m128i *)(v2 + 64));
            v53[5] = _mm_loadu_si128((const __m128i *)(v2 + 80));
            v53[6] = _mm_loadu_si128((const __m128i *)(v2 + 96));
            v53[7] = _mm_loadu_si128((const __m128i *)(v2 + 112));
            v53[8] = _mm_loadu_si128((const __m128i *)(v2 + 128));
            v53[9] = _mm_loadu_si128((const __m128i *)(v2 + 144));
            v53[10] = _mm_loadu_si128((const __m128i *)(v2 + 160));
            v53[11] = _mm_loadu_si128((const __m128i *)(v2 + 176));
            v53[12] = _mm_loadu_si128((const __m128i *)(v2 + 192));
            v53[13] = _mm_loadu_si128((const __m128i *)(v2 + 208));
            v53[14].m128i_i64[0] = *(_QWORD *)(v2 + 224);
            *(__m128i *)v2 = _mm_load_si128((const __m128i *)s1);
            *(__m128i *)(v2 + 16) = _mm_load_si128(&v159);
            v54 = *(_DWORD *)v2;
            *(__m128i *)(v2 + 32) = _mm_load_si128(&v160);
            *(__m128i *)(v2 + 48) = _mm_load_si128(&v161);
            *(__m128i *)(v2 + 64) = _mm_load_si128(&v162);
            *(__m128i *)(v2 + 80) = _mm_load_si128(&v163);
            *(__m128i *)(v2 + 96) = _mm_load_si128(&v164);
            *(__m128i *)(v2 + 112) = _mm_load_si128(&v165);
            *(__m128i *)(v2 + 128) = _mm_load_si128(&v166);
            *(__m128i *)(v2 + 144) = _mm_load_si128(&v167);
            *(__m128i *)(v2 + 160) = _mm_load_si128(&v168);
            *(__m128i *)(v2 + 176) = _mm_load_si128(&v169);
            *(__m128i *)(v2 + 192) = _mm_load_si128(&v170);
            a2 = (__m128)_mm_load_si128(&v171);
            *(__m128 *)(v2 + 208) = a2;
            *(_QWORD *)(v2 + 224) = v172;
            v55 = v53->m128i_i32[0];
            v53->m128i_i32[0] = v54;
            *(_DWORD *)v2 = v55;
            v56 = dword_251360;
            v53[2].m128i_i32[1] = dword_251360;
            *(_DWORD *)(v2 + 36) = v56;
          }
        }
      }
    }
  }
LABEL_5:
  v7 = qword_251330 & 0xFFFFFFF;
  if ( (qword_251330 & 0xFFFFFFF) == 8 )
  {
    v2 = (__int64)s1;
    v8 = 4096;
    dbg_get_input_path();
    file_ext = (__int64)s1;
    v3 = qbasename();
    v64 = qword_251330 & 0xFFFFFFF;
    if ( (unsigned int)v64 > 0xB )
      goto LABEL_395;
    v65 = 2306;
    if ( !_bittest64(&v65, v64) )
      goto LABEL_395;
    v4 = ::s1;
    if ( qword_25133C )
      v4 = *(const char **)((char *)&qword_251330 + 4);
    file_ext = v3;
    v8 = qbasename();
    if ( !strcasecmp((const char *)v3, (const char *)v8) )
    {
      v8 = (__int64)v4;
      file_ext = (__int64)s1;
      if ( !strcasecmp(s1, v4)
        || (v8 = 0, file_ext = 0, !(unsigned __int8)qdirname())
        || (v8 = (__int64)"~N~ot the same",
            file_ext = (__int64)"~S~ame",
            v124 = sub_C0230(
                     (__int64)"~S~ame",
                     (__int64)"~N~ot the same",
                     0,
                     1u,
                     (__int64)"TITLE Debugger warning\n"
                              "ICON WARNING\n"
                              "HIDECANCEL\n"
                              "AUTOHIDE DATABASE\n"
                              "Debugger found two modules with same base name but different paths\n"
                              "This could happen if the program loads the module from a path different than the specified"
                              " input file\n"
                              "\n"
                              "Is the loaded file\n"
                              "'%s'\n"
                              "the same as the input file\n"
                              "'%s'?\n",
                     v4,
                     s1),
            LODWORD(v4) = v137,
            v5 = v138,
            v124 == 1) )
      {
        v66 = qword_251330 & 0xFFFFFFF;
        if ( (unsigned int)v66 > 0xB )
          goto LABEL_395;
        v67 = 2306;
        if ( !_bittest64(&v67, v66) )
          goto LABEL_395;
        LODWORD(qword_251354) = DWORD2(xmmword_251344);
      }
    }
    goto LABEL_12;
  }
  if ( v7 == 11 )
  {
    if ( (*(_BYTE *)(dbg + 32LL) & 4) != 0 )
      sub_921F0((__int64)"AUTOHIDE REGISTRY\n"
                         "Successfully attached to the process.\n"
                         "Now you can browse the process memory and set breakpoints.\n");
  }
  else if ( v7 != 1 )
  {
    goto LABEL_18;
  }
  v8 = 8;
  file_ext = 3;
  v10 = getinf_flag();
  v11 = qword_251330 & 0xFFFFFFF;
  if ( v10 )
  {
    if ( (unsigned int)v11 > 0xB )
      goto LABEL_395;
    v12 = 2306;
    if ( !_bittest64(&v12, v11) )
      goto LABEL_395;
    LODWORD(qword_251354) = -1;
    if ( !byte_2515A9 )
      goto LABEL_12;
  }
  else
  {
    if ( (unsigned int)v11 > 0xB )
      goto LABEL_395;
    v119 = 2306;
    if ( !_bittest64(&v119, v11) )
      goto LABEL_395;
    LODWORD(qword_251354) = DWORD2(xmmword_251344);
    if ( !byte_2515A9 )
      goto LABEL_12;
  }
  get_eah();
  v120 = qword_251330 & 0xFFFFFFF;
  if ( (unsigned int)v120 > 0xB )
    goto LABEL_395;
  v121 = 2306;
  if ( !_bittest64(&v121, v120) )
    goto LABEL_395;
  if ( (_DWORD)qword_251354 != -1 )
  {
    v8 = (unsigned int)qword_251354;
    file_ext = 93;
    setinf();
  }
LABEL_12:
  get_eah();
  v13 = qword_251330 & 0xFFFFFFF;
  if ( (unsigned int)v13 > 0xB )
    goto LABEL_395;
  v14 = 2306;
  if ( !_bittest64(&v14, v13) )
    goto LABEL_395;
  if ( (_DWORD)qword_251354 != -1 )
  {
    if ( dword_2440EC == -1 )
    {
      v8 = 0;
      v123 = qgetenv() ^ 1;
      dword_2440EC = v123;
      if ( !v123 )
        goto LABEL_17;
      file_ext = dbg;
      v13 = qword_251330 & 0xFFFFFFF;
      if ( (unsigned int)v13 > 0xB )
        goto LABEL_395;
    }
    else
    {
      if ( !dword_2440EC )
      {
LABEL_17:
        byte_251468 = 1;
        goto LABEL_18;
      }
      file_ext = dbg;
    }
    v122 = 2306;
    if ( !_bittest64(&v122, v13) )
      goto LABEL_395;
    sub_9E0A0();
    goto LABEL_17;
  }
LABEL_18:
  sub_C0300();
  byte_251290 = 0;
  v15 = qword_251330 & 0xFFFFFFF;
  if ( (unsigned int)(v15 - 8) <= 1 || (unsigned int)(v15 - 3) <= 1 )
  {
    byte_251534 = 1;
    if ( (int)qword_251330 >= 0 )
      goto LABEL_20;
  }
  else if ( (int)qword_251330 >= 0 && v15 != 1 && v15 != 11 )
  {
LABEL_20:
    file_ext = HIDWORD(qword_251320);
    if ( !HIDWORD(qword_251320) )
      goto LABEL_95;
    goto LABEL_21;
  }
  sub_DE910();
  file_ext = HIDWORD(qword_251320);
  LODWORD(qword_251330) = qword_251330 & 0x7FFFFFFF;
  if ( !HIDWORD(qword_251320) )
    goto LABEL_95;
LABEL_21:
  v2 = qword_251410;
  v16 = qword_251410 + 232 * xmmword_251418;
  if ( qword_251410 != v16 )
  {
    while ( (_DWORD)file_ext != *(_DWORD *)v2 )
    {
      v2 += 232;
      if ( v16 == v2 )
        goto LABEL_95;
    }
    if ( v2 )
    {
      v17 = sub_CE480(v2, -1);
      file_ext = HIDWORD(qword_251320);
      v2 = v17;
    }
    goto LABEL_27;
  }
LABEL_95:
  v2 = 0;
LABEL_27:
  qword_2511A0 = (unsigned int)file_ext;
  v18 = qword_251330 & 0xFFFFFFF;
  switch ( qword_251330 & 0xFFFFFFF )
  {
    case 0LL:
    case 6LL:
      goto LABEL_31;
    case 1LL:
      v103 = 0;
      sub_C53A0((__int64)&qword_251330 + 4, 0);
      v8 = (__int64)sub_CFB90;
      set_dbgmem_source();
      v3 = HIDWORD(qword_251320);
      if ( HIDWORD(qword_251320) )
        v103 = sub_DCF40();
      file_ext = 16;
      v104 = getinf();
      if ( (dword_24412C & 0x1000) == 0 || (v8 = v104, v104 == -1) )
      {
        if ( !(a1 & 0x100 | dword_24412C & 2) )
          goto LABEL_338;
      }
      else if ( v103 )
      {
        file_ext = v103;
        sub_CCBE0(v103, v104, 6, nullptr, (__int64)qword_251548, 0);
        if ( !(a1 & 0x100 | dword_24412C & 2) )
        {
LABEL_338:
          v2 = (unsigned __int8)byte_25159A;
          if ( byte_25159A )
          {
LABEL_339:
            file_ext = 0x2000700418000000LL;
            sub_F5330(0x2000700418000000LL, 0);
            v19 = HIDWORD(qword_2511A0);
            byte_251599 = 1;
            v74 = BYTE4(qword_2511A0) & 0x40;
            goto LABEL_273;
          }
          v131 = qword_251330 & 0xFFFFFFF;
          if ( (unsigned int)v131 <= 0xB )
          {
            v132 = 2306;
            LOBYTE(v3) = _bittest64(&v132, v131);
            if ( (_BYTE)v3 )
            {
              v133 = ::s1;
              if ( qword_25133C )
                LODWORD(v133) = HIDWORD(qword_251330);
              sub_8F660(
                (__int64)"%a: process %s has started (pid=%u)\n",
                *(double *)a2.m128_u64,
                (const char *)DWORD2(xmmword_251344),
                (_DWORD)v133);
              if ( HIDWORD(qword_2512A0) == 1 )
              {
                if ( (_DWORD)qword_2512A0 )
                {
                  qword_2512A0 = 0;
                  LOBYTE(v2) = v3;
                }
                byte_251290 = v2;
                sub_C73B0();
              }
              else
              {
                sub_C73B0();
              }
              goto LABEL_339;
            }
          }
LABEL_395:
          sub_B7D80(file_ext, v8);
          goto LABEL_396;
        }
      }
      sub_D2AA0();
      goto LABEL_338;
    case 2LL:
      goto LABEL_261;
    case 3LL:
      if ( !(_DWORD)file_ext )
        goto LABEL_31;
      sub_DCF40();
      if ( byte_25159A )
        goto LABEL_399;
      v115 = dword_24412C;
      if ( (dword_24412C & 4) == 0 )
        goto LABEL_360;
      if ( ((unsigned int)qword_251330 & 0xFFFFFFF) - 9 > 1 && (qword_251330 & 0xFFFFFFF) != 3 )
        goto LABEL_464;
      sub_8F660(
        (__int64)"%a: thread has started (tid=%d) %s\n",
        *(double *)a2.m128_u64,
        qword_251328,
        (const char *)HIDWORD(qword_251320));
      v115 = dword_24412C;
LABEL_360:
      if ( (v115 & 8) != 0 )
        sub_D2AA0();
      file_ext = 5;
LABEL_272:
      sub_C73B0();
      v19 = HIDWORD(qword_2511A0);
      v74 = BYTE4(qword_2511A0) & 0x40;
      goto LABEL_273;
    case 4LL:
      if ( !(_DWORD)file_ext )
        goto LABEL_31;
      sub_D2B10(file_ext);
      if ( (_QWORD)xmmword_251418 || HIDWORD(qword_251320) != (_DWORD)qword_251320 )
        goto LABEL_399;
      HIDWORD(qword_251320) = 0;
      set_debug_event_code();
      if ( (((qword_251330 & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_467;
      HIDWORD(qword_251330) = 1;
LABEL_261:
      if ( (*(_BYTE *)(dbg + 34LL) & 1) != 0 )
        sub_DC360(a1 | 0x40);
      if ( (dword_24412C & 0x10000) != 0 )
        sub_D2AA0();
      if ( (((qword_251330 & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_467;
      sub_8F660((__int64)"Debugger: process has exited (exit code %d)\n", HIDWORD(qword_251330));
      reset_undo();
      v86 = qword_2515B0;
      sub_CC780((__int64)qword_2515B0, 2);
      if ( dword_2515A4 )
        sub_D3040((__int64)v86);
      file_ext = 2;
      if ( HIDWORD(qword_2512A0) == 2 )
      {
        v87 = 0;
        if ( (_DWORD)qword_2512A0 )
        {
          qword_2512A0 = 0;
          v87 = 1;
        }
        byte_251290 = v87;
        file_ext = 2;
      }
      goto LABEL_272;
    case 5LL:
      if ( byte_2515A1 )
        goto LABEL_31;
      memset(v152, 0, 24);
      bpt_kernel_interface = get_bpt_kernel_interface();
      (*(void (__fastcall **)(__int64, _OWORD *, __int64 *))(*(_QWORD *)bpt_kernel_interface + 64LL))(
        bpt_kernel_interface,
        v152,
        &qword_251320);
      if ( *((_QWORD *)&v152[0] + 1) )
      {
        file_ext = *(_QWORD *)&v152[0];
        v106 = 0;
        v107 = 0;
        v108 = qword_251330 & 0xFFFFFFF;
        do
        {
          v109 = *(_QWORD *)(*(_QWORD *)&v152[0] + 8 * v107);
          v110 = *(_DWORD *)(v109 + 56);
          if ( v110 != 4 )
          {
            v111 = *(_DWORD *)(v109 + 52);
            if ( v110 == 8 )
            {
              if ( v108 != 5 )
                goto LABEL_475;
              if ( HIDWORD(qword_251330) == v111 && HIDWORD(qword_251330) == (_DWORD)qword_251328 )
                goto LABEL_351;
            }
            else
            {
              if ( v108 != 5 )
                goto LABEL_468;
              if ( HIDWORD(qword_251330) == v111 )
                goto LABEL_351;
            }
          }
          v107 = ++v106;
        }
        while ( (unsigned __int64)v106 < *((_QWORD *)&v152[0] + 1) );
        if ( (*(_BYTE *)(dbg + 32LL) & 0x10) != 0 )
          goto LABEL_351;
        if ( (_DWORD)qword_251328 != (unsigned int)sub_CF9D0(v2, dword_24411C)
          && !(unsigned __int8)sub_CF8A0(SHIDWORD(qword_251320), qword_251328) )
        {
          sub_C5070("failed to reset program counter to %a (tid=%d)", 0.0, qword_251328);
          file_ext = *(_QWORD *)&v152[0];
          byte_2515A0 = 0;
          if ( !*(_QWORD *)&v152[0] )
            goto LABEL_399;
LABEL_441:
          *((_QWORD *)&v152[0] + 1) = 0;
          qfree();
          goto LABEL_399;
        }
        file_ext = *(_QWORD *)&v152[0];
        if ( *((_QWORD *)&v152[0] + 1) )
        {
LABEL_351:
          v112 = 0;
          v113 = 0;
          do
          {
            v114 = *(_QWORD *)(file_ext + 8 * v113);
            if ( (*(_BYTE *)(v114 + 68) & 2) != 0 )
            {
              sub_C0300();
              if ( (*(_BYTE *)(v114 + 64) & 8) != 0 )
                sub_C74B0(v114, (unsigned __int64)&qword_251320, 0.0);
              file_ext = *(_QWORD *)&v152[0];
            }
            v113 = ++v112;
          }
          while ( (unsigned __int64)v112 < *((_QWORD *)&v152[0] + 1) );
        }
      }
      else
      {
        sub_8F660((__int64)"%a: unknown debugger breakpoint\n", 0.0);
        byte_2515A0 = 0;
        file_ext = *(_QWORD *)&v152[0];
      }
      if ( !file_ext )
        goto LABEL_399;
      goto LABEL_441;
    case 7LL:
      sub_C0300();
      memset(v152, 0, 56);
      v94 = (unsigned int)(xmmword_2512E8 - 1);
      v95 = qword_251330 & 0xFFFFFFF;
      v96 = v94;
      if ( (int)v94 < 0 )
      {
        byte_2515A0 = 0;
        goto LABEL_312;
      }
      v97 = 56 * v94;
      v98 = *(_DWORD *)(qword_2512E0 + 56 * v94);
      v99 = qword_2512E0 + v97;
      if ( v95 != 7 )
      {
LABEL_465:
        if ( !under_debugger )
        {
          interr();
LABEL_467:
          sub_B7DA0();
LABEL_468:
          sub_B7DE0();
        }
        goto LABEL_479;
      }
      while ( 1 )
      {
        if ( v98 == HIDWORD(qword_251330) )
        {
          *(_QWORD *)&v152[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v98), _mm_cvtsi32_si128(*(_DWORD *)(v99 + 4))).m128i_u64[0];
          if ( (_OWORD *)((char *)v152 + 8) != (_OWORD *)(v99 + 8) )
          {
            v100 = *(_QWORD *)(v99 + 16);
            if ( v100 >= 2 )
            {
              v134 = *(const void **)(v99 + 8);
              *((_QWORD *)&v152[0] + 1) = qvector_reserve();
              *(_QWORD *)&v152[1] = v100;
              memmove(*((void **)&v152[0] + 1), v134, v100 - 1);
              *(_BYTE *)(*((_QWORD *)&v152[0] + 1) + v100 - 1) = 0;
            }
          }
          if ( &v152[2] != (_OWORD *)(v99 + 32) )
          {
            v101 = *(_QWORD *)(v99 + 40);
            if ( v101 > 1 )
            {
              v135 = *(const void **)(v99 + 32);
              v136 = *(void **)&v152[2];
              if ( *(_QWORD *)&v152[3] < v101 )
              {
                *(_QWORD *)&v152[2] = qvector_reserve();
                v136 = *(void **)&v152[2];
              }
              *((_QWORD *)&v152[2] + 1) = v101;
              memmove(v136, v135, v101 - 1);
              *(_BYTE *)(*(_QWORD *)&v152[2] + v101 - 1) = 0;
            }
            else
            {
              *((_QWORD *)&v152[2] + 1) = 0;
            }
          }
          v95 = qword_251330 & 0xFFFFFFF;
          byte_2515A0 = !(*(_BYTE *)(qword_2512E0 + v97 + 4) & 1);
LABEL_312:
          if ( v95 == 7 )
            goto LABEL_313;
          goto LABEL_472;
        }
        --v96;
        v97 -= 56;
        if ( v96 == -1 )
          break;
        v98 = *(_DWORD *)(qword_2512E0 + v97);
        v99 = qword_2512E0 + v97;
      }
      byte_2515A0 = 0;
LABEL_313:
      qsnprintf();
      if ( (qword_251330 & 0xFFFFFFF) != 7 )
      {
        sub_B7E00();
LABEL_472:
        sub_B7E00();
        goto LABEL_473;
      }
      if ( (_DWORD)qword_25133C != -1 )
      {
        strlen(s1);
        qsnprintf();
        if ( (qword_251330 & 0xFFFFFFF) != 7 )
          sub_B7E00();
      }
      append_snprintf();
      if ( (BYTE4(v152[0]) & 0xC) == 0 || (BYTE4(v152[0]) & 5) != 0 )
        sub_8F660((__int64)"%s\n", s1);
      sub_C73B0();
      if ( (BYTE4(v152[0]) & 0xC) != 0 )
      {
        LODWORD(v150) = 0;
      }
      else
      {
        LODWORD(v150) = (unsigned __int8)byte_2515A0 ^ 1;
        if ( byte_2515A0 != 1 )
          sub_C5070("%s", s1);
      }
      if ( *(_QWORD *)&v152[2] )
      {
        *((_QWORD *)&v152[2] + 1) = 0;
        qfree();
      }
      file_ext = *((_QWORD *)&v152[0] + 1);
      if ( *((_QWORD *)&v152[0] + 1) )
      {
        *(_QWORD *)&v152[1] = 0;
        qfree();
      }
LABEL_399:
      v19 = HIDWORD(qword_2511A0);
      v74 = BYTE4(qword_2511A0) & 0x40;
LABEL_273:
      v2 = qword_251288;
      if ( !v74 )
      {
LABEL_32:
        v20 = v19 | 0x40;
        if ( (_DWORD)qword_2511A0 )
        {
          v2 = qword_251410;
          v21 = qword_251410 + 232 * xmmword_251418;
          if ( qword_251410 != v21 )
          {
            while ( (_DWORD)qword_2511A0 != *(_DWORD *)v2 )
            {
              v2 += 232;
              if ( v21 == v2 )
              {
                v2 = 0;
                break;
              }
            }
            qword_251288 = v2;
            HIDWORD(qword_2511A0) = v20;
            goto LABEL_38;
          }
        }
        qword_251288 = 0;
        HIDWORD(qword_2511A0) = v20;
LABEL_166:
        if ( qword_251198 )
        {
          file_ext = 0;
          sub_B7090(0);
        }
        v2 = 0;
        v144 = byte_2515A0;
        if ( byte_2515A0 )
        {
          if ( byte_251290 && (_DWORD)qword_2512A0 )
            qword_2512A0 = 0;
          v144 = 0;
          v2 = 0;
          goto LABEL_194;
        }
LABEL_56:
        file_ext = HIDWORD(qword_2512A0);
        if ( (unsigned int)(HIDWORD(qword_2512A0) - 15) > 3 )
        {
          if ( byte_251290 )
          {
            if ( !(_DWORD)qword_2512A0 )
            {
LABEL_194:
              v31 = byte_251290;
              goto LABEL_67;
            }
LABEL_193:
            qword_2512A0 = 0;
            goto LABEL_194;
          }
        }
        else
        {
          v29 = 0;
          if ( (_DWORD)qword_2512A0 )
          {
            qword_2512A0 = 0;
            v29 = 1;
          }
          byte_251290 = v29;
          sub_C73B0();
          if ( byte_251290 )
          {
            if ( (_DWORD)qword_2512A0 )
              qword_2512A0 = 0;
LABEL_62:
            if ( v144 && byte_2515A0 )
              goto LABEL_64;
            goto LABEL_194;
          }
          if ( byte_2515A0 )
            goto LABEL_62;
        }
        v31 = 0;
        if ( !(_DWORD)qword_2512A0 )
          goto LABEL_67;
        goto LABEL_193;
      }
LABEL_38:
      if ( !v2 )
        goto LABEL_166;
      v22 = qword_251330;
      *(_BYTE *)(v2 + 34) = 0;
      v23 = qword_251198 == 0;
      *(_DWORD *)(v2 + 200) = v22 & 0xFFFFFFF;
      if ( !v23 )
      {
        file_ext = v2;
        sub_B7090(v2);
      }
      v24 = byte_2515A1;
      if ( byte_2515A1 )
        goto LABEL_54;
      if ( byte_2515A0 && ((unsigned int)qword_251330 & 0xFFFFFFF) - 5 > 2 )
        goto LABEL_97;
      v25 = *(_QWORD *)(v2 + 216);
      if ( v25 )
      {
        v26 = *(_DWORD *)(v25 + 16);
        if ( v26 == -1 || v26 == (_DWORD)qword_251328 )
        {
          v24 = sub_CD7F0(*(int **)(v2 + 216));
          if ( *(_QWORD *)(v25 + 8) )
          {
            v81 = sub_C4D00(*(_DWORD *)(v25 + 4));
            if ( !v81 )
            {
              if ( !under_debugger )
                interr();
              goto LABEL_479;
            }
            v83 = *((_QWORD **)v81 + 28);
            if ( v83 )
            {
              v84 = nullptr;
              while ( 1 )
              {
                v85 = v83[1];
                if ( v82 == v83 )
                  break;
                v84 = v83;
                if ( !v85 )
                  goto LABEL_255;
                v83 = (_QWORD *)v83[1];
              }
              if ( v84 )
                v84[1] = v85;
              else
                *((_QWORD *)v81 + 28) = v85;
              (*(void (__fastcall **)(_QWORD *))(*v83 + 16LL))(v83);
            }
          }
LABEL_255:
          operator delete((void *)v25, 0x18u);
          file_ext = 11;
          *(_QWORD *)(v2 + 216) = 0;
          sub_C0300();
        }
      }
      v27 = *(_QWORD *)(v2 + 224);
      if ( v27 )
      {
        while ( 1 )
        {
          v28 = *(_QWORD *)(v27 + 8);
          if ( v24 )
          {
            if ( *(_BYTE *)(v27 + 16) )
              break;
          }
LABEL_48:
          file_ext = v27;
          v27 = v28;
          (**(void (__fastcall ***)(__int64, __int64))file_ext)(file_ext, v2);
          if ( !v28 )
            goto LABEL_54;
        }
        while ( v28 )
        {
          v27 = v28;
          v28 = *(_QWORD *)(v28 + 8);
          if ( !*(_BYTE *)(v27 + 16) )
            goto LABEL_48;
        }
      }
LABEL_54:
      if ( !byte_2515A0 )
      {
        v144 = 1;
        goto LABEL_56;
      }
LABEL_97:
      if ( byte_251290 && (_DWORD)qword_2512A0 )
        qword_2512A0 = 0;
LABEL_64:
      v30 = *(_DWORD **)(v2 + 216);
      if ( !v30 || (*v30 & 0xF000) == 0x1000 )
      {
LABEL_66:
        v144 = 1;
        v31 = byte_251290;
        goto LABEL_67;
      }
      v75 = v30[4];
      if ( *((_QWORD *)v30 + 1) )
      {
        v76 = sub_C4D00(v30[1]);
        if ( v76 )
        {
          v78 = *((_QWORD **)v76 + 28);
          if ( v78 )
          {
            v79 = nullptr;
            while ( 1 )
            {
              v80 = v78[1];
              if ( v77 == v78 )
                break;
              v79 = v78;
              if ( !v80 )
                goto LABEL_242;
              v78 = (_QWORD *)v78[1];
            }
            if ( v79 )
              v79[1] = v80;
            else
              *((_QWORD *)v76 + 28) = v80;
            (*(void (__fastcall **)(_QWORD *))(*v78 + 16LL))(v78);
          }
          goto LABEL_242;
        }
LABEL_473:
        if ( !under_debugger )
        {
          interr();
LABEL_475:
          sub_B7DE0();
        }
LABEL_479:
        BUG();
      }
LABEL_242:
      file_ext = (__int64)v30;
      operator delete(v30, 0x18u);
      *(_QWORD *)(v2 + 216) = 0;
      if ( v75 != -1 )
      {
        file_ext = v2;
        if ( (unsigned int)sub_CCBE0(v2, v75, 2, nullptr, 0, 0) )
          goto LABEL_66;
      }
      byte_2515A0 = 0;
      v31 = byte_251290;
      v144 = 1;
LABEL_67:
      v141 = a1 & 0x18 | 0x20;
LABEL_68:
      if ( v31 )
        goto LABEL_91;
      while ( 1 )
      {
        if ( byte_2515A0 )
        {
          if ( (a1 & 0x200) == 0 && !byte_25159A && !byte_2515A1 && ((a1 & 2) != 0 || byte_25159B) )
            goto LABEL_73;
        }
        else if ( (a1 & 0x200) != 0 )
        {
          byte_25159B = 1;
        }
        else if ( !byte_25159A && !byte_2515A1 )
        {
          goto LABEL_73;
        }
        file_ext = v141;
        v36 = sub_D3B60(v141);
        if ( v36 == -1 )
          break;
        if ( v36 )
        {
          result = 1;
          goto LABEL_104;
        }
LABEL_73:
        if ( !dword_2515A4 )
          goto LABEL_105;
        byte_25159B = 0;
        byte_2515A0 = 0;
        if ( (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
        {
          if ( byte_25117A )
          {
            sub_10D850(file_ext);
            byte_25117A = 0;
          }
          byte_2515A8 = 0;
        }
        if ( v144 )
          sub_C5200(v2, 1);
        sub_D0730(byte_251534);
        byte_251534 = 0;
        sub_C70D0();
        sub_C0300();
        v32 = HIDWORD(qword_251320);
        if ( !HIDWORD(qword_251320) )
          goto LABEL_151;
        v33 = (_DWORD *)qword_251410;
        v34 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
        if ( (_DWORD *)qword_251410 == v34 )
          goto LABEL_151;
        while ( HIDWORD(qword_251320) != *v33 )
        {
          v33 += 58;
          if ( v34 == v33 )
            goto LABEL_151;
        }
        if ( !v33 )
        {
LABEL_151:
          if ( (_QWORD)xmmword_251418 )
            v32 = *(unsigned int *)qword_251410;
        }
        LODWORD(v4) = 0;
        sub_D2660(v32, 0);
        sub_F5330(0x2000700418000000LL, 0);
        sub_16EE30();
        if ( (qword_251330 & 0xFFFFFFF) == 6 )
          LODWORD(v4) = HIDWORD(qword_251320);
        sub_149E40((unsigned int)v4);
        if ( (dword_24412C & 0x800) != 0 && dword_244118 != -1 )
        {
          get_eah();
          v37 = xmmword_251418;
          v38 = (_DWORD *)qword_251410;
          v39 = qword_251410 + 232 * xmmword_251418;
          if ( v39 != qword_251410 )
          {
            v3 = qword_251410;
            do
            {
              v40 = *(_DWORD *)v3;
              if ( (_DWORD)v4 )
              {
                if ( (_DWORD)v4 == v40 )
                  goto LABEL_121;
              }
              else if ( v40 )
              {
LABEL_121:
                if ( v38 == (_DWORD *)v39 )
                  goto LABEL_118;
                while ( *v38 != v40 )
                {
                  v38 += 58;
                  if ( v38 == (_DWORD *)v39 )
                    goto LABEL_118;
                }
                if ( !v38 )
                  goto LABEL_118;
                v41 = sub_CE480((__int64)v38, -1);
                v6 = v41;
                if ( !v41 )
                  goto LABEL_147;
                v42 = dword_24411C;
                v43 = *(_QWORD *)(v41 + 32LL * dword_24411C + 8);
                v5 = v43;
                if ( dbg )
                {
                  if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
                  {
                    v44 = qword_2515B0;
                    if ( qword_2515B0 )
                    {
                      *(_DWORD *)qword_2515B0 = v43;
                      v5 = -1;
                      v44[1] = v41;
                      *((_DWORD *)v44 + 4) = v42;
                      if ( (unsigned int)sub_CC780((__int64)v44, 11) == 1 )
                        v5 = *(_DWORD *)qword_2515B0;
                      v45 = dword_244118;
                      if ( dword_244118 == -1 )
                        goto LABEL_163;
                      v46 = *(_QWORD *)(v6 + 32LL * dword_244118 + 8);
                      v140 = v46;
                      if ( dbg )
                      {
                        if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
                        {
                          v47 = qword_2515B0;
                          if ( qword_2515B0 )
                          {
                            *(_DWORD *)qword_2515B0 = v46;
                            v47[1] = v6;
                            *((_DWORD *)v47 + 4) = v45;
                            if ( (unsigned int)sub_CC780((__int64)v47, 11) == 1 )
                            {
                              v140 = *(_DWORD *)qword_2515B0;
                              goto LABEL_140;
                            }
LABEL_163:
                            v49 = dword_244114;
                            if ( dword_244114 == -1 )
                              goto LABEL_363;
                            v140 = -1;
LABEL_141:
                            v50 = dbg;
                            v142 = *(_DWORD *)(v6 + 32LL * v49 + 8);
                            if ( dbg )
                            {
LABEL_142:
                              if ( (*(_BYTE *)(v50 + 37) & 0x40) != 0 )
                              {
                                v51 = (unsigned int *)qword_2515B0;
                                if ( qword_2515B0 )
                                {
                                  *((_QWORD *)qword_2515B0 + 1) = v6;
                                  v51[4] = v49;
                                  *v51 = v142;
                                  v142 = -1;
                                  if ( (unsigned int)sub_CC780((__int64)v51, 11) == 1 )
                                    v142 = *(_DWORD *)qword_2515B0;
                                }
                              }
                            }
LABEL_146:
                            v145 = sub_149EE0(1332920885 * (unsigned int)((v3 - qword_251410) >> 3));
                            if ( v140 < v145 )
                            {
                              while ( v5 != -1 && v140 != -1 )
                              {
                                if ( v145 < v142 )
                                  break;
                                func = get_func();
                                if ( !func )
                                  break;
                                v149 = 0;
                                if ( !(unsigned __int8)tinfo_get_func_frame()
                                  || (unsigned int)prev_that() == -1
                                  || (unsigned int)get_spd() )
                                {
                                  goto LABEL_179;
                                }
                                spd = get_spd();
                                v59 = -spd;
                                if ( spd > 0 )
                                  v59 = spd;
                                v146 = v59 + v140;
                                if ( get_tinfo_size() != 0xFFFFFFFFLL )
                                {
                                  v151 = 0;
                                  v150 = nullptr;
                                  get_ea_name();
                                  v68 = *(_DWORD *)(func + 20);
                                  if ( (*(_BYTE *)(func + 8) & 0x10) != 0
                                    && v142 >= v140
                                    && v142 != -1
                                    && v142 < v146
                                    && v59 >= v68 )
                                  {
                                    v69 = ::s1;
                                    v70 = v142 - v68;
                                    if ( (_QWORD)v151 )
                                      v69 = v150;
                                    v71 = sub_B9040((__int64)&v149, v142 - v68, 0, (__int64)v69);
                                  }
                                  else
                                  {
                                    v116 = *(unsigned __int16 *)(func + 24);
                                    v70 = v146 - (v116 + v68);
                                    v117 = 0;
                                    if ( v70 < v140 )
                                    {
                                      v143 = v116 + v68 + v140 - v146;
                                      tinfo_size = get_tinfo_size();
                                      v126 = v143;
                                      if ( tinfo_size <= v143 )
                                        v126 = tinfo_size;
                                      v117 = v126;
                                    }
                                    v118 = ::s1;
                                    if ( (_QWORD)v151 )
                                      v118 = v150;
                                    v71 = sub_B9040((__int64)&v149, v70, v117, (__int64)v118);
                                  }
                                  if ( !v71 )
                                  {
                                    if ( !v150 )
                                    {
LABEL_179:
                                      clear_tinfo_t();
                                      v37 = xmmword_251418;
                                      goto LABEL_118;
                                    }
                                    *(_QWORD *)&v151 = 0;
                                    qfree();
                                    clear_tinfo_t();
                                    v37 = xmmword_251418;
                                    goto LABEL_118;
                                  }
                                  v153 = 1;
                                  v154 = -1;
                                  v155 = 0;
                                  v156 = 0;
                                  memset(v152, 0, 80);
                                  sub_BAC20((__int64)&v152[1], "__saved_registers");
                                  if ( (unsigned int)find_tinfo_udt_member() != -1
                                    && v70 + (unsigned int)(*(_QWORD *)&v152[0] >> 3) >= v140 )
                                  {
                                    get_bytes();
                                  }
                                  v142 = -1;
                                  clear_tinfo_t();
                                  if ( *((_QWORD *)&v152[2] + 1) )
                                  {
                                    *(_QWORD *)&v152[3] = 0;
                                    qfree();
                                  }
                                  if ( *(_QWORD *)&v152[1] )
                                  {
                                    *((_QWORD *)&v152[1] + 1) = 0;
                                    qfree();
                                  }
                                  if ( v150 )
                                  {
                                    *(_QWORD *)&v151 = 0;
                                    qfree();
                                  }
                                }
                                LODWORD(v152[0]) = -1;
                                v148 = dword_25153C >> 1;
                                bytes = get_bytes();
                                v5 = v152[0];
                                if ( v148 == bytes )
                                {
                                  if ( LODWORD(v152[0]) == -1 || !(unsigned __int8)is_mapped() )
                                    v5 = -1;
                                  else
                                    v5 = v152[0];
                                }
                                v61 = getseg();
                                if ( v61 )
                                {
                                  v62 = *(_BYTE *)(v61 + 22);
                                  if ( v62 && (v62 & 1) == 0 )
                                    v5 = -1;
                                }
                                else
                                {
                                  v5 = -1;
                                }
                                v63 = v146 + *(_DWORD *)(func + 28) + (dword_25153C >> 1);
                                if ( !(unsigned __int8)is_mapped() )
                                  goto LABEL_179;
                                v147 = getseg();
                                if ( v147 != getseg() )
                                  goto LABEL_179;
                                clear_tinfo_t();
                                v140 = v63;
                              }
                            }
LABEL_147:
                            v37 = xmmword_251418;
                            goto LABEL_118;
                          }
                        }
                      }
LABEL_140:
                      v49 = dword_244114;
                      v142 = -1;
                      if ( dword_244114 != -1 )
                        goto LABEL_141;
                      goto LABEL_146;
                    }
                  }
                  v48 = dword_244118;
                  if ( dword_244118 == -1 )
                  {
LABEL_396:
                    v49 = dword_244114;
                    if ( dword_244114 == -1 )
                    {
LABEL_363:
                      sub_149EE0(1332920885 * (unsigned int)((v3 - qword_251410) >> 3));
                      v37 = xmmword_251418;
                      goto LABEL_118;
                    }
                    v140 = -1;
                    v50 = dbg;
                    v142 = *(_DWORD *)(v6 + 32LL * dword_244114 + 8);
                    goto LABEL_142;
                  }
                }
                else
                {
                  v48 = dword_244118;
                  if ( dword_244118 == -1 )
                    goto LABEL_163;
                }
                v140 = *(_DWORD *)(v6 + 32 * v48 + 8);
                goto LABEL_140;
              }
LABEL_118:
              v3 += 232;
              v38 = (_DWORD *)qword_251410;
              v39 = qword_251410 + 232 * v37;
            }
            while ( v3 != v39 );
          }
        }
        dword_251538 |= 3u;
        if ( !(unsigned __int8)getinf_flag() && byte_251038 )
          TProgram::switch_screen(nullptr, 16);
        mark_builtin_widgets();
        file_ext = 11;
        sub_C73B0();
        v31 = byte_251290;
        if ( byte_2515A0 )
          goto LABEL_68;
        if ( !byte_251290 )
          goto LABEL_105;
LABEL_91:
        file_ext = (__int64)&qword_2512A0;
        result = sub_C9160((unsigned __int64 *)&qword_2512A0);
        if ( (_BYTE)result )
          goto LABEL_104;
        byte_251290 = 0;
      }
      if ( dword_2515A4 )
      {
        sub_D3040(v141);
        goto LABEL_73;
      }
LABEL_105:
      result = 0;
LABEL_104:
      --dword_25159C;
      return result;
    case 8LL:
    case 9LL:
      if ( v18 == 9 )
      {
        v128 = (char *)::s1;
        if ( qword_25133C )
          v128 = *(char **)((char *)&qword_251330 + 4);
        v129 = qword_2514D8;
        if ( (int *)qword_2514D8 == &dword_2514C8 )
        {
          if ( (dword_24412C & 0x40) != 0 )
          {
LABEL_224:
            v73 = ::s1;
            if ( qword_25133C )
              v73 = *(const char **)((char *)&qword_251330 + 4);
            file_ext = (__int64)"Unloaded %s\n";
            sub_8F660((__int64)"Unloaded %s\n", v73);
          }
LABEL_227:
          if ( !byte_25159A )
          {
            if ( (dword_24412C & 0x80u) != 0 )
              sub_D2AA0();
            sub_C73B0();
            file_ext = (unsigned int)((qword_251330 & 0xFFFFFFF) != 8) + 23;
            sub_C0300();
          }
          invalidate_dbgmem_config();
          v19 = HIDWORD(qword_2511A0);
          v74 = BYTE4(qword_2511A0) & 0x40;
          goto LABEL_273;
        }
        while ( 1 )
        {
          v130 = (char *)::s1;
          if ( *(_QWORD *)(v129 + 48) )
            v130 = *(char **)(v129 + 40);
          if ( (unsigned __int8)sub_B7730(v130, v128) )
            break;
          file_ext = v129;
          v129 = std::_Rb_tree_increment();
          if ( (int *)v129 == &dword_2514C8 )
            goto LABEL_220;
        }
        file_ext = *(unsigned int *)(v129 + 64);
        sub_C5840(file_ext, 0);
      }
      else
      {
        file_ext = (__int64)&qword_251330 + 4;
        sub_C53A0((__int64)&qword_251330 + 4, 0);
      }
LABEL_220:
      if ( (dword_24412C & 0x40) != 0 )
      {
        v72 = qword_251330 & 0xFFFFFFF;
        if ( (qword_251330 & 0xFFFFFFF) != 8 )
        {
          if ( (unsigned int)(v72 - 9) > 1 && v72 != 3 )
          {
LABEL_464:
            sub_B7DC0();
            goto LABEL_465;
          }
          goto LABEL_224;
        }
        file_ext = (__int64)"%a: loaded %s\n";
        sub_8F660((__int64)"%a: loaded %s\n", *(double *)a2.m128_u64, (const char *)DWORD2(xmmword_251344));
      }
      goto LABEL_227;
    case 0xALL:
      if ( qword_25133C <= 1 )
        goto LABEL_31;
      v102 = BYTE1(dword_24412C);
      if ( (dword_24412C & 0x100) != 0 )
      {
        sub_8F660((__int64)"Debugged application message: %s\n", *(const char **)((char *)&qword_251330 + 4));
        v102 = BYTE1(dword_24412C);
      }
      if ( (v102 & 2) != 0 )
        sub_D2AA0();
      sub_C73B0();
      file_ext = 26;
      sub_C0300();
      v19 = HIDWORD(qword_2511A0);
      v74 = BYTE4(qword_2511A0) & 0x40;
      goto LABEL_273;
    case 0xBLL:
      v8 = 0;
      file_ext = (__int64)&qword_251330 + 4;
      byte_25159A = 0;
      sub_C53A0((__int64)&qword_251330 + 4, 0);
      v89 = qword_251330 & 0xFFFFFFF;
      if ( (unsigned int)v89 > 0xB )
        goto LABEL_395;
      v90 = 2306;
      LOBYTE(v2) = _bittest64(&v90, v89);
      if ( !(_BYTE)v2 )
        goto LABEL_395;
      v91 = ::s1;
      if ( qword_25133C )
        v91 = *(const char **)((char *)&qword_251330 + 4);
      sub_8F660((__int64)"Debugger: attached to process %s (pid=%u)\n", v91, qword_251320);
      if ( (*(_BYTE *)(dbg + 32LL) & 4) == 0 )
        byte_2515A0 = 0;
      if ( HIDWORD(qword_2512A0) == 3 )
      {
        if ( (_DWORD)qword_2512A0 )
          qword_2512A0 = 0;
        else
          LOBYTE(v2) = 0;
        byte_251290 = v2;
        sub_C73B0();
      }
      else
      {
        sub_C73B0();
      }
      file_ext = 97;
      v2 = (__int64)v157;
      v8 = (__int64)v157;
      byte_251535 = (*(_BYTE *)(dbg + 36LL) & 4) != 0;
      if ( getinf_buf() > 0 )
      {
        file_ext = get_file_ext();
        if ( !(unsigned __int8)is_database_ext() )
          goto LABEL_399;
      }
      v92 = qword_251330 & 0xFFFFFFF;
      if ( (unsigned int)v92 > 0xB )
        goto LABEL_395;
      v93 = 2306;
      if ( !_bittest64(&v93, v92) )
        goto LABEL_395;
      setinf_buf();
      file_ext = 0;
      sub_CB4C0(nullptr);
      v19 = HIDWORD(qword_2511A0);
      v74 = BYTE4(qword_2511A0) & 0x40;
      goto LABEL_273;
    case 0xCLL:
      if ( (dword_24412C & 0x10000) != 0 )
        sub_D2AA0();
      sub_8F660((__int64)"Debugger: detached from process\n");
      reset_undo();
      sub_CC780((__int64)qword_2515B0, 2);
      if ( dword_2515A4 )
        sub_D3040((unsigned int)dword_2515A4);
      if ( HIDWORD(qword_2512A0) == 4 )
      {
        v88 = 0;
        if ( (_DWORD)qword_2512A0 )
        {
          qword_2512A0 = 0;
          v88 = 1;
        }
        byte_251290 = v88;
      }
      file_ext = 4;
      goto LABEL_272;
    case 0xDLL:
      byte_2515A0 = 0;
LABEL_31:
      v19 = 0;
      goto LABEL_32;
    default:
      file_ext = (__int64)"UNKNOWN DEBUG EVENT %d!!!\n";
      sub_8F660((__int64)"UNKNOWN DEBUG EVENT %d!!!\n", v18);
      byte_2515A0 = 0;
      goto LABEL_399;
  }
}

