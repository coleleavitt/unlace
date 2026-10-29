__int64 __fastcall sub_E0360(__int16 a1, __m128i si128)
{
  int v2; // eax
  const char *v3; // rsi
  __int64 file_ext; // rdi
  char v5; // dl
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  _DWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  bool v20; // zf
  char v21; // r13
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // r12
  char v26; // al
  char v27; // al
  __int64 v28; // r12
  __int64 v29; // rdi
  _DWORD *v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // r12d
  __int64 result; // rax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rdi
  __int64 v38; // rax
  int *v39; // rbp
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // r14
  int v43; // edx
  __int64 v44; // r13
  _QWORD *v45; // rdi
  int v46; // eax
  _QWORD *v47; // rdi
  int v48; // eax
  __int64 v49; // rdx
  _DWORD *v50; // rdi
  __int64 spd; // rax
  unsigned __int64 v52; // r13
  __int64 bytes; // rax
  __int64 v54; // rax
  char v55; // al
  unsigned __int64 v56; // r14
  __int64 func; // r14
  __m128i *v58; // rax
  __m128i *v59; // rbx
  __int64 v60; // rbp
  __int64 v61; // r12
  __m128i *v62; // rax
  __int32 v63; // edx
  int v64; // edx
  const char *v65; // rbp
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  const char *v68; // r12
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // r13
  char v73; // al
  int v74; // eax
  const char *v75; // rsi
  int i; // edx
  __int64 v77; // rbp
  _DWORD *v78; // rax
  _QWORD *v79; // rcx
  _QWORD *v80; // rdi
  _QWORD *v81; // rsi
  __int64 v82; // rdx
  void *v83; // rdi
  char v84; // al
  char v85; // al
  unsigned __int64 v86; // rax
  __int64 v87; // rcx
  unsigned __int8 v88; // bl
  const char *v89; // rsi
  unsigned __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  int v93; // edi
  int v94; // eax
  __int64 v95; // rbx
  int v96; // ecx
  __int64 v97; // r13
  unsigned __int64 v98; // r14
  unsigned __int64 v99; // r14
  char v100; // ah
  char v101; // al
  __int64 bpt_kernel_interface; // rax
  int v103; // edx
  __int64 v104; // rax
  int v105; // r9d
  __int64 v106; // rcx
  int v107; // eax
  void *v108; // rcx
  int v109; // ebx
  __int64 v110; // rax
  __int64 v111; // rbp
  __int64 v112; // rbx
  __int64 v113; // rax
  char v114; // bl
  _DWORD *v115; // rax
  _QWORD *v116; // rcx
  _QWORD *v117; // rdi
  _QWORD *v118; // rsi
  __int64 v119; // rdx
  __int64 v120; // rsi
  __int64 v121; // rdx
  __int64 v122; // rax
  __m128i v123; // xmm0
  __int64 v124; // r13
  __int64 v125; // r13
  __int64 v126; // rdx
  __int64 eah; // rax
  unsigned __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rax
  unsigned __int8 v131; // al
  __int64 tinfo_size; // rax
  __int64 v133; // rcx
  __int64 v134; // r13
  __int64 v135; // rax
  char *v136; // r13
  __int64 v137; // rbx
  char *v138; // rdi
  unsigned __int64 v139; // rax
  __int64 v140; // rdx
  unsigned __int8 v141; // bp
  const char *v142; // rdx
  const void *v143; // r12
  void *v144; // rdi
  const void *v145; // rbp
  unsigned __int64 v147; // [rsp+10h] [rbp-2148h]
  unsigned __int64 v148; // [rsp+18h] [rbp-2140h]
  __int64 v149; // [rsp+18h] [rbp-2140h]
  unsigned int v150; // [rsp+28h] [rbp-2130h]
  char v151; // [rsp+2Fh] [rbp-2129h]
  unsigned __int64 v152; // [rsp+30h] [rbp-2128h]
  unsigned __int64 v153; // [rsp+38h] [rbp-2120h]
  __int64 v154; // [rsp+38h] [rbp-2120h]
  __int64 v155; // [rsp+40h] [rbp-2118h]
  __int64 v156; // [rsp+48h] [rbp-2110h]
  __int64 v157; // [rsp+50h] [rbp-2108h] BYREF
  unsigned __int64 v158; // [rsp+58h] [rbp-2100h]
  __int64 v159; // [rsp+60h] [rbp-20F8h]
  __int128 v160; // [rsp+68h] [rbp-20F0h]
  _OWORD v161[7]; // [rsp+80h] [rbp-20D8h] BYREF
  __int64 v162; // [rsp+F0h] [rbp-2068h]
  int v163; // [rsp+F8h] [rbp-2060h]
  __int64 v164; // [rsp+100h] [rbp-2058h]
  char v165; // [rsp+108h] [rbp-2050h]
  char v166; // [rsp+110h] [rbp-2048h] BYREF
  char s1[16]; // [rsp+1110h] [rbp-1048h] BYREF
  __m128i v168; // [rsp+1120h] [rbp-1038h] BYREF
  __m128i v169; // [rsp+1130h] [rbp-1028h] BYREF
  __m128i v170; // [rsp+1140h] [rbp-1018h] BYREF
  __m128i v171; // [rsp+1150h] [rbp-1008h] BYREF
  __m128i v172; // [rsp+1160h] [rbp-FF8h] BYREF
  __m128i v173; // [rsp+1170h] [rbp-FE8h] BYREF
  __m128i v174; // [rsp+1180h] [rbp-FD8h] BYREF
  __m128i v175; // [rsp+1190h] [rbp-FC8h] BYREF
  __m128i v176; // [rsp+11A0h] [rbp-FB8h] BYREF
  __m128i v177; // [rsp+11B0h] [rbp-FA8h] BYREF
  __m128i v178; // [rsp+11C0h] [rbp-F98h] BYREF
  __m128i v179; // [rsp+11D0h] [rbp-F88h] BYREF
  __m128i v180; // [rsp+11E0h] [rbp-F78h] BYREF
  __m128i v181; // [rsp+11F0h] [rbp-F68h] BYREF
  __m128i v182[49]; // [rsp+1200h] [rbp-F58h] BYREF
  unsigned __int64 v183; // [rsp+2118h] [rbp-40h]

  v183 = __readfsqword(0x28u);
  ++dword_252744;
  dword_25274C = -1;
  byte_252748 = 1;
  if ( !byte_252741 && (HIDWORD(qword_2524B0) & 0xFFFFFFFu) - 8 > 3 && (HIDWORD(qword_2524B0) & 0xFFFFFFFu) > 4 )
  {
    if ( !under_debugger )
      interr();
    goto LABEL_491;
  }
  if ( (*(_BYTE *)(dbg + 34LL) & 2) != 0 )
  {
    v58 = (__m128i *)sub_C6150(SHIDWORD(qword_2524A0));
    v59 = v58;
    if ( v58 )
    {
      if ( !v58[15].m128i_i64[0] )
      {
        v60 = qword_252590;
        v61 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
        if ( qword_252590 != v61 )
        {
          v62 = (__m128i *)qword_252590;
          while ( !v62[15].m128i_i64[0] )
          {
            v62 += 16;
            if ( (__m128i *)v61 == v62 )
              goto LABEL_420;
          }
          if ( v62 )
          {
            if ( v59 == v62 )
              goto LABEL_5;
            goto LABEL_181;
          }
LABEL_420:
          v134 = qword_2524A8;
          while ( 1 )
          {
            v135 = *(_QWORD *)(v60 + 144);
            if ( v135 )
            {
              if ( v134 == *(_QWORD *)(v135 + 80) )
                break;
            }
            if ( sub_C84B0(v60, v134) )
              break;
            v60 += 256;
            if ( v61 == v60 )
              goto LABEL_5;
          }
          if ( v59 != (__m128i *)v60 && v60 != 0 )
          {
            v62 = (__m128i *)v60;
LABEL_181:
            *(__m128i *)s1 = _mm_loadu_si128(v62);
            v168 = _mm_loadu_si128(v62 + 1);
            v169 = _mm_loadu_si128(v62 + 2);
            v170 = _mm_loadu_si128(v62 + 3);
            v171 = _mm_loadu_si128(v62 + 4);
            v172 = _mm_loadu_si128(v62 + 5);
            v173 = _mm_loadu_si128(v62 + 6);
            v174 = _mm_loadu_si128(v62 + 7);
            v175 = _mm_loadu_si128(v62 + 8);
            v176 = _mm_loadu_si128(v62 + 9);
            v177 = _mm_loadu_si128(v62 + 10);
            v178 = _mm_loadu_si128(v62 + 11);
            v179 = _mm_loadu_si128(v62 + 12);
            v180 = _mm_loadu_si128(v62 + 13);
            v181 = _mm_loadu_si128(v62 + 14);
            v182[0] = _mm_loadu_si128(v62 + 15);
            *v62 = _mm_loadu_si128(v59);
            v62[1] = _mm_loadu_si128(v59 + 1);
            v62[2] = _mm_loadu_si128(v59 + 2);
            v62[3] = _mm_loadu_si128(v59 + 3);
            v62[4] = _mm_loadu_si128(v59 + 4);
            v62[5] = _mm_loadu_si128(v59 + 5);
            v62[6] = _mm_loadu_si128(v59 + 6);
            v62[7] = _mm_loadu_si128(v59 + 7);
            v62[8] = _mm_loadu_si128(v59 + 8);
            v62[9] = _mm_loadu_si128(v59 + 9);
            v62[10] = _mm_loadu_si128(v59 + 10);
            v62[11] = _mm_loadu_si128(v59 + 11);
            v62[12] = _mm_loadu_si128(v59 + 12);
            v62[13] = _mm_loadu_si128(v59 + 13);
            v62[14] = _mm_loadu_si128(v59 + 14);
            v62[15] = _mm_loadu_si128(v59 + 15);
            *v59 = _mm_load_si128((const __m128i *)s1);
            v59[1] = _mm_load_si128(&v168);
            v59[2] = _mm_load_si128(&v169);
            v59[3] = _mm_load_si128(&v170);
            v59[4] = _mm_load_si128(&v171);
            v59[5] = _mm_load_si128(&v172);
            v59[6] = _mm_load_si128(&v173);
            v59[7] = _mm_load_si128(&v174);
            v59[8] = _mm_load_si128(&v175);
            v59[9] = _mm_load_si128(&v176);
            v59[10] = _mm_load_si128(&v177);
            v59[11] = _mm_load_si128(&v178);
            v59[12] = _mm_load_si128(&v179);
            v59[13] = _mm_load_si128(&v180);
            v59[14] = _mm_load_si128(&v181);
            si128 = _mm_load_si128(v182);
            v59[15] = si128;
            v63 = v62->m128i_i32[0];
            v62->m128i_i32[0] = v59->m128i_i32[0];
            v59->m128i_i32[0] = v63;
            v64 = dword_2524EC;
            v62[2].m128i_i32[1] = dword_2524EC;
            v59[2].m128i_i32[1] = v64;
          }
        }
      }
    }
  }
LABEL_5:
  v2 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
  if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) == 8 )
  {
    v3 = (_BYTE *)(elf_gnu_hash_bucket + 1424);
    dbg_get_input_path();
    file_ext = (__int64)s1;
    v65 = (const char *)qbasename();
    v66 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
    if ( (unsigned int)v66 > 0xB )
      goto LABEL_400;
    v67 = 2306;
    if ( !_bittest64(&v67, v66) )
      goto LABEL_400;
    v68 = ::s1;
    if ( *(&xmmword_2524B8 + 1) )
      v68 = (const char *)xmmword_2524B8;
    file_ext = (__int64)v65;
    v3 = (const char *)qbasename();
    if ( !strcasecmp(v65, v3) )
    {
      v3 = v68;
      file_ext = (__int64)s1;
      if ( !strcasecmp(s1, v68)
        || (v3 = nullptr, file_ext = 0, !(unsigned __int8)qdirname())
        || (v3 = "~N~ot the same",
            file_ext = (__int64)"~S~ame",
            (unsigned int)sub_C0990(
                            (__int64)"~S~ame",
                            (__int64)"~N~ot the same",
                            0,
                            1u,
                            (__int64)"TITLE Debugger warning\n"
                                     "ICON WARNING\n"
                                     "HIDECANCEL\n"
                                     "AUTOHIDE DATABASE\n"
                                     "Debugger found two modules with same base name but different paths\n"
                                     "This could happen if the program loads the module from a path different than the sp"
                                     "ecified input file\n"
                                     "\n"
                                     "Is the loaded file\n"
                                     "'%s'\n"
                                     "the same as the input file\n"
                                     "'%s'?\n",
                            v68,
                            s1) == 1) )
      {
        v69 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
        if ( (unsigned int)v69 > 0xB )
          goto LABEL_400;
        v70 = 2306;
        if ( !_bittest64(&v70, v69) )
          goto LABEL_400;
        *((_QWORD *)&xmmword_2524D8 + 1) = *((_QWORD *)&xmmword_2524C8 + 1);
      }
    }
  }
  else
  {
    if ( v2 == 11 )
    {
      if ( (*(_BYTE *)(dbg + 32LL) & 4) != 0 )
        sub_922D0((__int64)"AUTOHIDE REGISTRY\n"
                           "Successfully attached to the process.\n"
                           "Now you can browse the process memory and set breakpoints.\n");
    }
    else if ( v2 != 1 )
    {
      goto LABEL_19;
    }
    v3 = &byte_8;
    file_ext = 3;
    v5 = getinf_flag();
    v6 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
    if ( v5 )
    {
      if ( (unsigned int)v6 > 0xB )
        goto LABEL_400;
      v7 = 2306;
      if ( !_bittest64(&v7, v6) )
        goto LABEL_400;
      *((_QWORD *)&xmmword_2524D8 + 1) = -1;
      if ( !byte_252751 )
        goto LABEL_12;
LABEL_385:
      eah = get_eah();
      v128 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
      if ( (unsigned int)v128 > 0xB )
        goto LABEL_400;
      v129 = 2306;
      if ( !_bittest64(&v129, v128) )
        goto LABEL_400;
      v3 = *((const char **)&xmmword_2524D8 + 1);
      if ( *(_QWORD *)(eah + 16) != *((_QWORD *)&xmmword_2524D8 + 1) && *((_QWORD *)&xmmword_2524D8 + 1) != -1 )
      {
        file_ext = 93;
        setinf();
      }
      goto LABEL_12;
    }
    if ( (unsigned int)v6 > 0xB )
      goto LABEL_400;
    v126 = 2306;
    if ( !_bittest64(&v126, v6) )
      goto LABEL_400;
    *((_QWORD *)&xmmword_2524D8 + 1) = *((_QWORD *)&xmmword_2524C8 + 1);
    if ( byte_252751 )
      goto LABEL_385;
  }
LABEL_12:
  v8 = get_eah();
  v9 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
  if ( (unsigned int)v9 > 0xB )
    goto LABEL_400;
  v10 = 2306;
  if ( !_bittest64(&v10, v9) )
    goto LABEL_400;
  if ( *(_QWORD *)(v8 + 16) != *((_QWORD *)&xmmword_2524D8 + 1) && *((_QWORD *)&xmmword_2524D8 + 1) != -1 )
  {
    if ( dword_245144 == -1 )
    {
      v3 = nullptr;
      v131 = qgetenv() ^ 1;
      dword_245144 = v131;
      if ( !v131 )
        goto LABEL_18;
      file_ext = dbg;
      v9 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
      if ( (unsigned int)v9 > 0xB )
        goto LABEL_400;
    }
    else
    {
      if ( !dword_245144 )
      {
LABEL_18:
        byte_2525E8 = 1;
        goto LABEL_19;
      }
      file_ext = dbg;
    }
    v130 = 2306;
    if ( !_bittest64(&v130, v9) )
      goto LABEL_400;
    sub_9E1E0();
    goto LABEL_18;
  }
LABEL_19:
  sub_C14A0();
  byte_252408 = 0;
  v11 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
  if ( (unsigned int)(v11 - 3) <= 1 || (unsigned int)(v11 - 8) <= 1 )
  {
    byte_2526B8 = 1;
    if ( qword_2524B0 >= 0 )
      goto LABEL_21;
  }
  else if ( qword_2524B0 >= 0 && v11 != 1 && v11 != 11 )
  {
LABEL_21:
    file_ext = HIDWORD(qword_2524A0);
    if ( !HIDWORD(qword_2524A0) )
      goto LABEL_67;
    goto LABEL_22;
  }
  sub_DFFA0();
  file_ext = HIDWORD(qword_2524A0);
  HIDWORD(qword_2524B0) &= ~0x80000000;
  if ( !HIDWORD(qword_2524A0) )
    goto LABEL_67;
LABEL_22:
  v12 = (_DWORD *)qword_252590;
  v13 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( qword_252590 != v13 )
  {
    while ( (_DWORD)file_ext != *v12 )
    {
      v12 += 64;
      if ( (_DWORD *)v13 == v12 )
        goto LABEL_67;
    }
    if ( v12 )
    {
      v14 = sub_CFA40((__int64)v12, -1);
      file_ext = HIDWORD(qword_2524A0);
      v12 = (_DWORD *)v14;
    }
    goto LABEL_28;
  }
LABEL_67:
  v12 = nullptr;
LABEL_28:
  qword_252280 = (unsigned int)file_ext;
  LODWORD(v3) = HIDWORD(qword_2524B0) & 0xFFFFFFF;
  switch ( HIDWORD(qword_2524B0) & 0xFFFFFFF )
  {
    case 0:
    case 6:
      goto LABEL_32;
    case 1:
      v112 = 0;
      sub_C6800((__int64)&xmmword_2524B8, 0);
      v3 = (const char *)sub_D1150;
      set_dbgmem_source();
      if ( HIDWORD(qword_2524A0) )
        v112 = sub_DE530();
      file_ext = 16;
      v113 = getinf();
      if ( (dword_245190 & 0x1000) == 0 )
      {
        if ( !(dword_245190 & 2 | a1 & 0x100) )
          goto LABEL_352;
        goto LABEL_351;
      }
      if ( v113 == -1 )
      {
        if ( !(a1 & 0x100 | dword_245190 & 2) )
        {
LABEL_352:
          v114 = byte_252742;
          if ( byte_252742 )
          {
LABEL_353:
            file_ext = 0x2000700418000000LL;
            sub_F61B0(0x2000700418000000LL, 0);
            v15 = HIDWORD(qword_252280);
            byte_252741 = 1;
            i = BYTE4(qword_252280) & 0x40;
            goto LABEL_265;
          }
          v139 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
          if ( (unsigned int)v139 <= 0xB )
          {
            v140 = 2306;
            v141 = _bittest64(&v140, v139);
            if ( v141 )
            {
              v142 = ::s1;
              if ( *(&xmmword_2524B8 + 1) )
                LODWORD(v142) = (_DWORD)xmmword_2524B8;
              sub_8F740(
                (__int64)"%a: process %s has started (pid=%u)\n",
                *(double *)si128.m128i_i64,
                *((const char **)&xmmword_2524C8 + 1),
                (_DWORD)v142);
              if ( HIDWORD(qword_252410) == 1 )
              {
                if ( (_DWORD)qword_252410 )
                {
                  qword_252410 = 0;
                  v114 = v141;
                }
                byte_252408 = v114;
                sub_C8830();
              }
              else
              {
                sub_C8830();
              }
              goto LABEL_353;
            }
          }
LABEL_400:
          sub_B82F0(file_ext, v3);
LABEL_401:
          file_ext = (__int64)"UNKNOWN DEBUG EVENT %d!!!\n";
          sub_8F740((__int64)"UNKNOWN DEBUG EVENT %d!!!\n", (_DWORD)v3);
          byte_252748 = 0;
          goto LABEL_402;
        }
      }
      else if ( v112 )
      {
        v3 = (const char *)v113;
        file_ext = v112;
        sub_CE160(v112, v113, 6, nullptr, (__int64)qword_2526E8, 0);
        if ( !(a1 & 0x100 | dword_245190 & 2) )
          goto LABEL_352;
      }
LABEL_351:
      sub_D3FD0();
      goto LABEL_352;
    case 2:
      goto LABEL_253;
    case 3:
      if ( !(_DWORD)file_ext )
        goto LABEL_32;
      sub_DE530();
      if ( byte_252742 )
        goto LABEL_402;
      v101 = dword_245190;
      if ( (dword_245190 & 4) == 0 )
        goto LABEL_327;
      if ( (HIDWORD(qword_2524B0) & 0xFFFFFFFu) - 9 > 1 && (HIDWORD(qword_2524B0) & 0xFFFFFFF) != 3 )
        goto LABEL_474;
      sub_8F740(
        (__int64)"%a: thread has started (tid=%d) %s\n",
        *(double *)si128.m128i_i64,
        qword_2524A8,
        (const char *)HIDWORD(qword_2524A0));
      v101 = dword_245190;
LABEL_327:
      if ( (v101 & 8) != 0 )
        sub_D3FD0();
      file_ext = 5;
LABEL_264:
      sub_C8830();
      v15 = HIDWORD(qword_252280);
      i = BYTE4(qword_252280) & 0x40;
      goto LABEL_265;
    case 4:
      if ( !(_DWORD)file_ext )
        goto LABEL_32;
      sub_D4040(file_ext);
      if ( (_QWORD)xmmword_252598 || HIDWORD(qword_2524A0) != (_DWORD)qword_2524A0 )
        goto LABEL_402;
      HIDWORD(qword_2524A0) = 0;
      set_debug_event_code();
      if ( (((HIDWORD(qword_2524B0) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_487;
      LODWORD(xmmword_2524B8) = 1;
LABEL_253:
      if ( (*(_BYTE *)(dbg + 34LL) & 1) != 0 )
        sub_DD940(a1 | 0x40);
      if ( (dword_245190 & 0x10000) != 0 )
        sub_D3FD0();
      if ( (((HIDWORD(qword_2524B0) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_487;
      sub_8F740((__int64)"Debugger: process has exited (exit code %d)\n", (_DWORD)xmmword_2524B8);
      reset_undo();
      v83 = qword_252758;
      sub_CDCF0((__int64)qword_252758, 2);
      if ( dword_25274C )
        sub_D4570((__int64)v83);
      file_ext = 2;
      if ( HIDWORD(qword_252410) == 2 )
      {
        v84 = 0;
        if ( (_DWORD)qword_252410 )
        {
          qword_252410 = 0;
          v84 = 1;
        }
        byte_252408 = v84;
        file_ext = 2;
      }
      goto LABEL_264;
    case 5:
      if ( byte_252749 )
        goto LABEL_32;
      memset(v161, 0, 24);
      si128.m128i_i64[0] = 0;
      bpt_kernel_interface = get_bpt_kernel_interface();
      (*(void (__fastcall **)(__int64, _OWORD *, __int64 *))(*(_QWORD *)bpt_kernel_interface + 64LL))(
        bpt_kernel_interface,
        v161,
        &qword_2524A0);
      if ( !*((_QWORD *)&v161[0] + 1) )
      {
        sub_8F740((__int64)"%a: unknown debugger breakpoint\n", 0.0);
        byte_252748 = 0;
        file_ext = *(_QWORD *)&v161[0];
        goto LABEL_447;
      }
      file_ext = *(_QWORD *)&v161[0];
      v103 = 0;
      v104 = 0;
      v105 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
      while ( 1 )
      {
        v106 = *(_QWORD *)(*(_QWORD *)&v161[0] + 8 * v104);
        v107 = *(_DWORD *)(v106 + 64);
        if ( v107 != 4 )
        {
          v108 = *(void **)(v106 + 56);
          if ( v107 == 8 )
          {
            if ( v105 != 5 )
            {
              sub_B8350();
LABEL_487:
              sub_B8310();
            }
            if ( xmmword_2524B8 == v108 && xmmword_2524B8 == (void *)qword_2524A8 )
              goto LABEL_341;
          }
          else
          {
            if ( v105 != 5 )
              sub_B8350();
            if ( xmmword_2524B8 == v108 )
              goto LABEL_341;
          }
        }
        v104 = ++v103;
        if ( (unsigned __int64)v103 >= *((_QWORD *)&v161[0] + 1) )
        {
          if ( (*(_BYTE *)(dbg + 32LL) & 0x10) != 0 )
            goto LABEL_341;
          if ( qword_2524A8 != sub_D0F90((__int64)v12, dword_245174)
            && !(unsigned __int8)sub_D0E60(SHIDWORD(qword_2524A0), qword_2524A8) )
          {
            goto LABEL_483;
          }
          file_ext = *(_QWORD *)&v161[0];
          if ( *((_QWORD *)&v161[0] + 1) )
          {
LABEL_341:
            v109 = 0;
            v110 = 0;
            do
            {
              v111 = *(_QWORD *)(file_ext + 8 * v110);
              if ( (*(_BYTE *)(v111 + 76) & 2) != 0 )
              {
                sub_C14A0();
                if ( (*(_BYTE *)(v111 + 72) & 8) != 0 )
                  sub_C8930(v111, &qword_2524A0, 0.0);
                file_ext = *(_QWORD *)&v161[0];
              }
              v110 = ++v109;
            }
            while ( (unsigned __int64)v109 < *((_QWORD *)&v161[0] + 1) );
          }
LABEL_447:
          if ( !file_ext )
            goto LABEL_402;
          goto LABEL_448;
        }
      }
    case 7:
      sub_C14A0();
      si128.m128i_i64[0] = 0;
      memset(v161, 0, 56);
      v92 = (unsigned int)(xmmword_252458 - 1);
      v93 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
      v94 = v92;
      if ( (int)v92 < 0 )
      {
        byte_252748 = 0;
      }
      else
      {
        v95 = 56 * v92;
        v96 = *(_DWORD *)(qword_252450 + 56 * v92);
        v97 = qword_252450 + v95;
        if ( v93 != 7 )
          goto LABEL_479;
        while ( (_DWORD)xmmword_2524B8 != v96 )
        {
          --v94;
          v95 -= 56;
          if ( v94 == -1 )
          {
            byte_252748 = 0;
            goto LABEL_305;
          }
          v96 = *(_DWORD *)(qword_252450 + v95);
          v97 = qword_252450 + v95;
        }
        si128.m128i_i64[0] = _mm_unpacklo_epi32(
                               _mm_cvtsi32_si128((unsigned int)xmmword_2524B8),
                               _mm_cvtsi32_si128(*(_DWORD *)(v97 + 4))).m128i_u64[0];
        *(_QWORD *)&v161[0] = si128.m128i_i64[0];
        if ( (_OWORD *)((char *)v161 + 8) != (_OWORD *)(v97 + 8) )
        {
          v98 = *(_QWORD *)(v97 + 16);
          if ( v98 >= 2 )
          {
            v145 = *(const void **)(v97 + 8);
            *((_QWORD *)&v161[0] + 1) = qvector_reserve();
            *(_QWORD *)&v161[1] = v98;
            memmove(*((void **)&v161[0] + 1), v145, v98 - 1);
            *(_BYTE *)(*((_QWORD *)&v161[0] + 1) + v98 - 1) = 0;
          }
        }
        if ( &v161[2] != (_OWORD *)(v97 + 32) )
        {
          v99 = *(_QWORD *)(v97 + 40);
          if ( v99 > 1 )
          {
            v143 = *(const void **)(v97 + 32);
            v144 = *(void **)&v161[2];
            if ( *(_QWORD *)&v161[3] < v99 )
            {
              *(_QWORD *)&v161[2] = qvector_reserve();
              v144 = *(void **)&v161[2];
            }
            *((_QWORD *)&v161[2] + 1) = v99;
            memmove(v144, v143, v99 - 1);
            *(_BYTE *)(*(_QWORD *)&v161[2] + v99 - 1) = 0;
          }
          else
          {
            *((_QWORD *)&v161[2] + 1) = 0;
          }
        }
        v93 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
        byte_252748 = !(*(_BYTE *)(qword_252450 + v95 + 4) & 1);
      }
      if ( v93 != 7 )
        goto LABEL_481;
LABEL_305:
      qsnprintf();
      if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) != 7 )
        sub_B8370();
      if ( *(&xmmword_2524B8 + 1) != (void *)-1LL )
      {
        strlen(s1);
        qsnprintf();
        if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) != 7 )
          goto LABEL_482;
      }
      append_snprintf();
      if ( (BYTE4(v161[0]) & 0xC) == 0 || (BYTE4(v161[0]) & 5) != 0 )
        sub_8F740((__int64)"%s\n", s1);
      sub_C8830();
      if ( (BYTE4(v161[0]) & 0xC) != 0 )
      {
        LODWORD(v159) = 0;
      }
      else
      {
        LODWORD(v159) = (unsigned __int8)byte_252748 ^ 1;
        if ( byte_252748 != 1 )
          sub_C64D0("%s", s1);
      }
      if ( *(_QWORD *)&v161[2] )
      {
        *((_QWORD *)&v161[2] + 1) = 0;
        qfree();
      }
      file_ext = *((_QWORD *)&v161[0] + 1);
      if ( *((_QWORD *)&v161[0] + 1) )
      {
        *(_QWORD *)&v161[1] = 0;
        qfree();
      }
      goto LABEL_402;
    case 8:
    case 9:
      if ( (_DWORD)v3 == 9 )
      {
        v136 = (char *)::s1;
        if ( *(&xmmword_2524B8 + 1) )
          v136 = (char *)xmmword_2524B8;
        v137 = qword_252658;
        if ( (int *)qword_252658 == &dword_252648 )
        {
          if ( (dword_245190 & 0x40) != 0 )
          {
LABEL_222:
            v75 = ::s1;
            if ( *(&xmmword_2524B8 + 1) )
              v75 = (const char *)xmmword_2524B8;
            file_ext = (__int64)"Unloaded %s\n";
            sub_8F740((__int64)"Unloaded %s\n", v75);
            goto LABEL_225;
          }
          goto LABEL_225;
        }
        while ( 1 )
        {
          v138 = (char *)::s1;
          if ( *(_QWORD *)(v137 + 48) )
            v138 = *(char **)(v137 + 40);
          if ( (unsigned __int8)sub_B7D90(v138, v136) )
            break;
          file_ext = v137;
          v137 = std::_Rb_tree_increment();
          if ( (int *)v137 == &dword_252648 )
            goto LABEL_218;
        }
        file_ext = *(_QWORD *)(v137 + 64);
        sub_C6CA0(file_ext, 0);
      }
      else
      {
        file_ext = (__int64)&xmmword_2524B8;
        sub_C6800((__int64)&xmmword_2524B8, 0);
      }
LABEL_218:
      if ( (dword_245190 & 0x40) != 0 )
      {
        v74 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
        if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) != 8 )
        {
          if ( (unsigned int)(v74 - 9) <= 1 || v74 == 3 )
            goto LABEL_222;
LABEL_474:
          sub_B8330();
LABEL_475:
          if ( !under_debugger )
            interr();
LABEL_491:
          BUG();
        }
        file_ext = (__int64)"%a: loaded %s\n";
        sub_8F740((__int64)"%a: loaded %s\n", *(double *)si128.m128i_i64, *((const char **)&xmmword_2524C8 + 1));
      }
LABEL_225:
      if ( !byte_252742 )
      {
        if ( (dword_245190 & 0x80u) != 0 )
          sub_D3FD0();
        sub_C8830();
        file_ext = (unsigned int)((HIDWORD(qword_2524B0) & 0xFFFFFFF) != 8) + 23;
        sub_C14A0();
      }
      invalidate_dbgmem_config();
      v15 = HIDWORD(qword_252280);
      for ( i = BYTE4(qword_252280) & 0x40; ; i = BYTE4(qword_252280) & 0x40 )
      {
LABEL_265:
        v17 = qword_252400;
        if ( !i )
        {
LABEL_33:
          v16 = v15 | 0x40;
          if ( !(_DWORD)qword_252280
            || (v17 = qword_252590, v18 = qword_252590 + ((_QWORD)xmmword_252598 << 8), qword_252590 == v18) )
          {
            qword_252400 = 0;
            HIDWORD(qword_252280) = v16;
            goto LABEL_188;
          }
          while ( (_DWORD)qword_252280 != *(_DWORD *)v17 )
          {
            v17 += 256;
            if ( v18 == v17 )
            {
              v17 = 0;
              break;
            }
          }
          qword_252400 = v17;
          HIDWORD(qword_252280) = v16;
        }
        if ( v17 )
        {
          v19 = HIDWORD(qword_2524B0);
          *(_BYTE *)(v17 + 34) = 0;
          v20 = qword_252278 == 0;
          *(_DWORD *)(v17 + 216) = v19 & 0xFFFFFFF;
          if ( !v20 )
          {
            file_ext = v17;
            sub_B76F0(v17);
          }
          v21 = byte_252749;
          if ( !byte_252749 )
          {
            if ( byte_252748 && (HIDWORD(qword_2524B0) & 0xFFFFFFFu) - 5 > 2 )
            {
LABEL_69:
              if ( byte_252408 && (_DWORD)qword_252410 )
                qword_252410 = 0;
              goto LABEL_72;
            }
            v22 = *(_QWORD *)(v17 + 240);
            if ( v22 )
            {
              v23 = *(_QWORD *)(v22 + 16);
              if ( v23 == -1 || v23 == qword_2524A8 )
              {
                v21 = sub_CEDA0(*(int **)(v17 + 240));
                if ( *(_QWORD *)(v22 + 8) )
                {
                  v115 = sub_C6150(*(_DWORD *)(v22 + 4));
                  if ( !v115 )
                    goto LABEL_475;
                  v117 = *((_QWORD **)v115 + 31);
                  if ( v117 )
                  {
                    v118 = nullptr;
                    while ( 1 )
                    {
                      v119 = v117[1];
                      if ( v116 == v117 )
                        break;
                      v118 = v117;
                      if ( !v119 )
                        goto LABEL_364;
                      v117 = (_QWORD *)v117[1];
                    }
                    if ( v118 )
                      v118[1] = v119;
                    else
                      *((_QWORD *)v115 + 31) = v119;
                    (*(void (__fastcall **)(_QWORD *))(*v117 + 16LL))(v117);
                  }
                }
LABEL_364:
                operator delete((void *)v22, 0x20u);
                file_ext = 11;
                *(_QWORD *)(v17 + 240) = 0;
                sub_C14A0();
              }
            }
            v24 = *(_QWORD *)(v17 + 248);
            if ( v24 )
            {
              while ( 1 )
              {
                v25 = *(_QWORD *)(v24 + 8);
                if ( v21 )
                {
                  if ( *(_BYTE *)(v24 + 16) )
                    break;
                }
LABEL_49:
                file_ext = v24;
                v24 = v25;
                (**(void (__fastcall ***)(__int64, __int64))file_ext)(file_ext, v17);
                if ( !v25 )
                  goto LABEL_55;
              }
              while ( v25 )
              {
                v24 = v25;
                v25 = *(_QWORD *)(v25 + 8);
                if ( !*(_BYTE *)(v24 + 16) )
                  goto LABEL_49;
              }
            }
          }
LABEL_55:
          if ( byte_252748 )
            goto LABEL_69;
          v151 = 1;
          goto LABEL_57;
        }
LABEL_188:
        if ( qword_252278 )
        {
          file_ext = 0;
          sub_B76F0(0);
        }
        v17 = 0;
        v151 = byte_252748;
        if ( byte_252748 )
        {
          if ( byte_252408 && (_DWORD)qword_252410 )
            qword_252410 = 0;
          v151 = 0;
          v17 = 0;
          goto LABEL_64;
        }
LABEL_57:
        file_ext = HIDWORD(qword_252410);
        if ( (unsigned int)(HIDWORD(qword_252410) - 15) > 3 )
        {
          if ( byte_252408 )
          {
            if ( !(_DWORD)qword_252410 )
              goto LABEL_64;
          }
          else
          {
LABEL_62:
            v27 = 0;
            if ( !(_DWORD)qword_252410 )
              goto LABEL_75;
          }
          qword_252410 = 0;
LABEL_64:
          v27 = byte_252408;
          goto LABEL_75;
        }
        v26 = 0;
        if ( (_DWORD)qword_252410 )
        {
          qword_252410 = 0;
          v26 = 1;
        }
        byte_252408 = v26;
        sub_C8830();
        if ( byte_252408 )
        {
          if ( (_DWORD)qword_252410 )
            qword_252410 = 0;
        }
        else if ( !byte_252748 )
        {
          goto LABEL_62;
        }
        if ( !v151 || !byte_252748 )
          goto LABEL_64;
LABEL_72:
        v28 = *(_QWORD *)(v17 + 240);
        if ( !v28 || (*(_DWORD *)v28 & 0xF000) == 0x1000 )
          goto LABEL_74;
        v77 = *(_QWORD *)(v28 + 16);
        if ( !*(_QWORD *)(v28 + 8) )
          goto LABEL_245;
        v78 = sub_C6150(*(_DWORD *)(v28 + 4));
        if ( v78 )
          break;
        if ( under_debugger )
          goto LABEL_491;
        interr();
LABEL_479:
        if ( under_debugger )
          goto LABEL_491;
        interr();
LABEL_481:
        sub_B8370();
LABEL_482:
        sub_B8370();
LABEL_483:
        sub_C64D0("failed to reset program counter to %a (tid=%d)", *(double *)si128.m128i_i64, qword_2524A8);
        file_ext = *(_QWORD *)&v161[0];
        byte_252748 = 0;
        if ( *(_QWORD *)&v161[0] )
        {
LABEL_448:
          *((_QWORD *)&v161[0] + 1) = 0;
          qfree();
        }
LABEL_402:
        v15 = HIDWORD(qword_252280);
      }
      v80 = *((_QWORD **)v78 + 31);
      if ( v80 )
      {
        v81 = nullptr;
        while ( 1 )
        {
          v82 = v80[1];
          if ( v79 == v80 )
            break;
          v81 = v80;
          if ( !v82 )
            goto LABEL_245;
          v80 = (_QWORD *)v80[1];
        }
        if ( v81 )
          v81[1] = v82;
        else
          *((_QWORD *)v78 + 31) = v82;
        (*(void (__fastcall **)(_QWORD *))(*v80 + 16LL))(v80);
      }
LABEL_245:
      file_ext = v28;
      operator delete((void *)v28, 0x20u);
      *(_QWORD *)(v17 + 240) = 0;
      if ( v77 != -1 && (file_ext = v17, (unsigned int)sub_CE160(v17, v77, 2, nullptr, 0, 0)) )
      {
LABEL_74:
        v151 = 1;
        v27 = byte_252408;
      }
      else
      {
        byte_252748 = 0;
        v27 = byte_252408;
        v151 = 1;
      }
LABEL_75:
      v150 = a1 & 0x18 | 0x20;
LABEL_76:
      if ( v27 )
        goto LABEL_99;
      while ( 1 )
      {
        if ( byte_252748 )
        {
          if ( (a1 & 0x200) == 0 && !byte_252742 && !byte_252749 && ((a1 & 2) != 0 || byte_252743) )
            goto LABEL_81;
        }
        else if ( (a1 & 0x200) != 0 )
        {
          byte_252743 = 1;
        }
        else if ( !byte_252742 && !byte_252749 )
        {
          goto LABEL_81;
        }
        file_ext = v150;
        v34 = sub_D50A0(v150);
        if ( v34 == -1 )
          break;
        if ( v34 )
        {
          result = 1;
          goto LABEL_105;
        }
LABEL_81:
        if ( !dword_25274C )
          goto LABEL_106;
        byte_252743 = 0;
        byte_252748 = 0;
        if ( (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
        {
          if ( byte_25225A )
          {
            sub_10DB30(file_ext);
            byte_25225A = 0;
          }
          byte_252750 = 0;
        }
        if ( v151 )
          sub_C6660(v17, 1);
        sub_D1B30(byte_2526B8);
        byte_2526B8 = 0;
        sub_C8550();
        sub_C14A0();
        v29 = HIDWORD(qword_2524A0);
        if ( !HIDWORD(qword_2524A0) )
          goto LABEL_170;
        v30 = (_DWORD *)qword_252590;
        v31 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
        if ( qword_252590 == v31 )
          goto LABEL_170;
        while ( HIDWORD(qword_2524A0) != *v30 )
        {
          v30 += 64;
          if ( (_DWORD *)v31 == v30 )
            goto LABEL_170;
        }
        if ( !v30 )
        {
LABEL_170:
          if ( (_QWORD)xmmword_252598 )
            v29 = *(unsigned int *)qword_252590;
        }
        v32 = 0;
        sub_D3B40(v29, 0);
        sub_F61B0(0x2000700418000000LL, 0);
        sub_16F800();
        if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) == 6 )
          v32 = HIDWORD(qword_2524A0);
        sub_14A600(v32);
        if ( (dword_245190 & 0x800) != 0 && dword_245170 != -1 )
        {
          v35 = get_eah();
          v36 = xmmword_252598;
          v37 = (_DWORD *)qword_252590;
          v156 = v35;
          v38 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
          if ( qword_252590 != v38 )
          {
            v39 = (int *)qword_252590;
            do
            {
              v40 = *v39;
              if ( v32 )
              {
                if ( v32 == v40 )
                  goto LABEL_122;
              }
              else if ( v40 )
              {
LABEL_122:
                if ( (_DWORD *)v38 == v37 )
                  goto LABEL_119;
                while ( *v37 != v40 )
                {
                  v37 += 64;
                  if ( v37 == (_DWORD *)v38 )
                    goto LABEL_119;
                }
                if ( !v37 )
                  goto LABEL_119;
                v41 = sub_CFA40((__int64)v37, -1);
                v42 = v41;
                if ( !v41 )
                  goto LABEL_148;
                v43 = dword_245174;
                v44 = *(_QWORD *)(v41 + 32LL * dword_245174 + 8);
                if ( !dbg )
                {
                  if ( dword_245170 == -1 )
                    goto LABEL_209;
                  v147 = *(_QWORD *)(v41 + 32LL * dword_245170 + 8);
LABEL_184:
                  v148 = -1;
                  v48 = dword_24516C;
                  if ( dword_24516C != -1 )
                    goto LABEL_185;
                  goto LABEL_147;
                }
                if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 && (v45 = qword_252758) != nullptr )
                {
                  *(_QWORD *)qword_252758 = v44;
                  v44 = -1;
                  v45[1] = v41;
                  *((_DWORD *)v45 + 4) = v43;
                  if ( (unsigned int)sub_CDCF0((__int64)v45, 11) == 1 )
                    v44 = *(_QWORD *)qword_252758;
                  v46 = dword_245170;
                  if ( dword_245170 == -1 )
                    goto LABEL_209;
                  v147 = *(_QWORD *)(v42 + 32LL * dword_245170 + 8);
                  if ( !dbg )
                    goto LABEL_184;
                  if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
                  {
                    v47 = qword_252758;
                    if ( qword_252758 )
                    {
                      *(_QWORD *)qword_252758 = *(_QWORD *)(v42 + 32LL * dword_245170 + 8);
                      v47[1] = v42;
                      *((_DWORD *)v47 + 4) = v46;
                      if ( (unsigned int)sub_CDCF0((__int64)v47, 11) == 1 )
                      {
                        v147 = *(_QWORD *)qword_252758;
                        goto LABEL_184;
                      }
LABEL_209:
                      v48 = dword_24516C;
                      if ( dword_24516C == -1 )
                        goto LABEL_365;
                      v147 = -1;
LABEL_185:
                      v49 = dbg;
                      v148 = *(_QWORD *)(v42 + 32LL * v48 + 8);
                      if ( dbg )
                      {
LABEL_143:
                        if ( (*(_BYTE *)(v49 + 37) & 0x40) != 0 )
                        {
                          v50 = qword_252758;
                          if ( qword_252758 )
                          {
                            *((_QWORD *)qword_252758 + 1) = v42;
                            v50[4] = v48;
                            *(_QWORD *)v50 = v148;
                            v148 = -1;
                            if ( (unsigned int)sub_CDCF0((__int64)v50, 11) == 1 )
                              v148 = *(_QWORD *)qword_252758;
                          }
                        }
                      }
LABEL_147:
                      v152 = sub_14A6A0(((__int64)v39 - qword_252590) >> 8);
                      if ( v147 < v152 )
                      {
                        while ( v147 != -1 && v44 != -1 )
                        {
                          if ( v152 < v148 )
                            break;
                          func = get_func();
                          if ( !func )
                            break;
                          v157 = 0;
                          if ( !(unsigned __int8)tinfo_get_func_frame() || prev_that() == -1 || get_spd() )
                            goto LABEL_166;
                          spd = get_spd();
                          v52 = -spd;
                          if ( spd > 0 )
                            v52 = spd;
                          v153 = v52 + v147;
                          if ( get_tinfo_size() != -1 )
                          {
                            v160 = 0;
                            v159 = 0;
                            get_ea_name();
                            v71 = *(_QWORD *)(func + 32);
                            if ( (*(_BYTE *)(func + 16) & 0x10) != 0
                              && v148 >= v147
                              && v148 != -1
                              && v148 < v153
                              && v52 >= v71 )
                            {
                              v72 = v148 - v71;
                              v73 = sub_B95A0((__int64)&v157, v148 - v71, 0);
                            }
                            else
                            {
                              v120 = *(unsigned __int16 *)(func + 40);
                              v72 = v153 - (v120 + v71);
                              v121 = 0;
                              if ( v72 < v147 )
                              {
                                v149 = v120 + v71 + v147 - v153;
                                tinfo_size = get_tinfo_size();
                                v133 = v149;
                                if ( tinfo_size <= v149 )
                                  v133 = tinfo_size;
                                v121 = v133;
                              }
                              v73 = sub_B95A0((__int64)&v157, v72, v121);
                            }
                            if ( !v73 )
                            {
                              if ( !v159 )
                              {
LABEL_166:
                                clear_tinfo_t();
                                v36 = xmmword_252598;
                                goto LABEL_119;
                              }
                              *(_QWORD *)&v160 = 0;
                              qfree();
                              clear_tinfo_t();
                              v36 = xmmword_252598;
                              goto LABEL_119;
                            }
                            v162 = 1;
                            v163 = -1;
                            v164 = 0;
                            v165 = 0;
                            memset(v161, 0, 80);
                            v122 = qvector_reserve();
                            v123 = _mm_load_si128((const __m128i *)&xmmword_1D3330);
                            *(_QWORD *)&v161[1] = v122;
                            *((_QWORD *)&v161[1] + 1) = 18;
                            *(_BYTE *)(v122 + 16) = 115;
                            *(__m128i *)v122 = v123;
                            *(_BYTE *)(*(_QWORD *)&v161[1] + 17LL) = 0;
                            if ( (unsigned int)find_tinfo_udt_member() == -1
                              || v72 + (*(_QWORD *)&v161[0] >> 3) < v147
                              || (v158 = -1, v124 = dword_2526C0 >> 1, v124 == get_bytes())
                              && (v158 == -1 || (v158 &= *(_QWORD *)(v156 + 16), !(unsigned __int8)is_mapped()))
                              || (v148 = v158, v158 == -1)
                              || v153 >= v158
                              || (v125 = getseg(), v125 != getseg()) )
                            {
                              v148 = -1;
                            }
                            clear_tinfo_t();
                            if ( *((_QWORD *)&v161[2] + 1) )
                            {
                              *(_QWORD *)&v161[3] = 0;
                              qfree();
                            }
                            if ( *(_QWORD *)&v161[1] )
                            {
                              *((_QWORD *)&v161[1] + 1) = 0;
                              qfree();
                            }
                            if ( v159 )
                            {
                              *(_QWORD *)&v160 = 0;
                              qfree();
                            }
                          }
                          *(_QWORD *)&v161[0] = -1;
                          v155 = dword_2526C0 >> 1;
                          bytes = get_bytes();
                          v44 = *(_QWORD *)&v161[0];
                          if ( v155 == bytes )
                          {
                            if ( *(_QWORD *)&v161[0] == -1
                              || (*(_QWORD *)&v161[0] &= *(_QWORD *)(v156 + 16), !(unsigned __int8)is_mapped()) )
                            {
                              v44 = -1;
                            }
                            else
                            {
                              v44 = *(_QWORD *)&v161[0];
                            }
                          }
                          v54 = getseg();
                          if ( v54 )
                          {
                            v55 = *(_BYTE *)(v54 + 42);
                            if ( v55 && (v55 & 1) == 0 )
                              v44 = -1;
                          }
                          else
                          {
                            v44 = -1;
                          }
                          v56 = v153 + *(_QWORD *)(func + 48) + (dword_2526C0 >> 1);
                          if ( !(unsigned __int8)is_mapped() )
                            goto LABEL_166;
                          v154 = getseg();
                          if ( v154 != getseg() )
                            goto LABEL_166;
                          clear_tinfo_t();
                          v147 = v56;
                        }
                      }
LABEL_148:
                      v36 = xmmword_252598;
                      goto LABEL_119;
                    }
                  }
                }
                else
                {
                  if ( dword_245170 == -1 )
                  {
                    v48 = dword_24516C;
                    if ( dword_24516C == -1 )
                    {
LABEL_365:
                      sub_14A6A0(((__int64)v39 - qword_252590) >> 8);
                      v36 = xmmword_252598;
                      goto LABEL_119;
                    }
                    v147 = -1;
                    v49 = dbg;
                    v148 = *(_QWORD *)(v42 + 32LL * dword_24516C + 8);
                    goto LABEL_143;
                  }
                  v147 = *(_QWORD *)(v41 + 32LL * dword_245170 + 8);
                }
                v148 = -1;
                v48 = dword_24516C;
                if ( dword_24516C != -1 )
                {
                  v49 = dbg;
                  v148 = *(_QWORD *)(v42 + 32LL * dword_24516C + 8);
                  goto LABEL_143;
                }
                goto LABEL_147;
              }
LABEL_119:
              v39 += 64;
              v37 = (_DWORD *)qword_252590;
              v38 = qword_252590 + (v36 << 8);
            }
            while ( v39 != (int *)v38 );
          }
        }
        dword_2526BC |= 3u;
        if ( !(unsigned __int8)getinf_flag() && byte_252118 )
          TProgram::switch_screen(nullptr, 16);
        mark_builtin_widgets();
        file_ext = 11;
        sub_C8830();
        v27 = byte_252408;
        if ( byte_252748 )
          goto LABEL_76;
        if ( !byte_252408 )
          goto LABEL_106;
LABEL_99:
        file_ext = (__int64)&qword_252410;
        result = sub_CA620((unsigned __int64 *)&qword_252410);
        if ( (_BYTE)result )
          goto LABEL_105;
        byte_252408 = 0;
      }
      if ( dword_25274C )
      {
        sub_D4570(v150);
        goto LABEL_81;
      }
LABEL_106:
      result = 0;
LABEL_105:
      --dword_252744;
      return result;
    case 0xA:
      if ( (unsigned __int64)*(&xmmword_2524B8 + 1) <= 1 )
        goto LABEL_32;
      v100 = BYTE1(dword_245190);
      if ( (dword_245190 & 0x100) != 0 )
      {
        sub_8F740((__int64)"Debugged application message: %s\n", (const char *)xmmword_2524B8);
        v100 = BYTE1(dword_245190);
      }
      if ( (v100 & 2) != 0 )
        sub_D3FD0();
      sub_C8830();
      file_ext = 26;
      sub_C14A0();
      v15 = HIDWORD(qword_252280);
      i = BYTE4(qword_252280) & 0x40;
      goto LABEL_265;
    case 0xB:
      v3 = nullptr;
      file_ext = (__int64)&xmmword_2524B8;
      byte_252742 = 0;
      sub_C6800((__int64)&xmmword_2524B8, 0);
      v86 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
      if ( (unsigned int)v86 > 0xB )
        goto LABEL_400;
      v87 = 2306;
      v88 = _bittest64(&v87, v86);
      if ( !v88 )
        goto LABEL_400;
      v89 = ::s1;
      if ( *(&xmmword_2524B8 + 1) )
        v89 = (const char *)xmmword_2524B8;
      sub_8F740((__int64)"Debugger: attached to process %s (pid=%u)\n", v89, qword_2524A0);
      if ( (*(_BYTE *)(dbg + 32LL) & 4) == 0 )
        byte_252748 = 0;
      if ( HIDWORD(qword_252410) == 3 )
      {
        if ( (_DWORD)qword_252410 )
          qword_252410 = 0;
        else
          v88 = 0;
        byte_252408 = v88;
        sub_C8830();
      }
      else
      {
        sub_C8830();
      }
      file_ext = 97;
      v3 = &v166;
      byte_2526B9 = (*(_BYTE *)(dbg + 36LL) & 4) != 0;
      if ( getinf_buf() > 0 )
      {
        file_ext = get_file_ext();
        if ( !(unsigned __int8)is_database_ext() )
          goto LABEL_402;
      }
      v90 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
      if ( (unsigned int)v90 > 0xB )
        goto LABEL_400;
      v91 = 2306;
      if ( !_bittest64(&v91, v90) )
        goto LABEL_400;
      setinf_buf();
      file_ext = 0;
      sub_CCA40(nullptr);
      v15 = HIDWORD(qword_252280);
      i = BYTE4(qword_252280) & 0x40;
      goto LABEL_265;
    case 0xC:
      if ( (dword_245190 & 0x10000) != 0 )
        sub_D3FD0();
      sub_8F740((__int64)"Debugger: detached from process\n");
      reset_undo();
      sub_CDCF0((__int64)qword_252758, 2);
      if ( dword_25274C )
        sub_D4570((unsigned int)dword_25274C);
      if ( HIDWORD(qword_252410) == 4 )
      {
        v85 = 0;
        if ( (_DWORD)qword_252410 )
        {
          qword_252410 = 0;
          v85 = 1;
        }
        byte_252408 = v85;
      }
      file_ext = 4;
      goto LABEL_264;
    case 0xD:
      byte_252748 = 0;
LABEL_32:
      v15 = 0;
      goto LABEL_33;
    default:
      goto LABEL_401;
  }
}

