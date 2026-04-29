unsigned __int64 __fastcall sub_44B20(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(); // rdx
  __int64 (__fastcall *v13)(); // rcx
  __int64 v14; // r8
  int v15; // r9d
  int v16; // eax
  __int64 v18; // rax
  __m128i *v19; // rsi
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(); // rcx
  __int64 v23; // r8
  int v24; // r9d
  char v25; // al
  __m128i v26; // xmm0
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __m128i v30; // xmm4
  double v31; // xmm0_8
  __int64 v32; // rsi
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 (__fastcall **v37)(); // rdi
  unsigned int v38; // r15d
  __int64 v39; // rax
  int v40; // r8d
  __int64 v41; // r9
  __int64 v42; // rax
  const char *v43; // rcx
  __int64 v44; // rax
  const char *v45; // rsi
  __int64 v46; // rdi
  int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // r15
  __int64 v52; // rdi
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  __int64 (__fastcall *v56)(); // rdx
  __int64 (__fastcall *v57)(); // rcx
  __int64 v58; // r8
  int v59; // r9d
  char *v60; // rax
  char *v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rsi
  __int64 v67; // r10
  __int64 v68; // r11
  __int64 v69; // rax
  __int64 (__fastcall *v70)(); // rdx
  __int64 (__fastcall *v71)(); // rcx
  __int64 v72; // r8
  int v73; // r9d
  const char *v74; // rsi
  __int64 v75; // rax
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  __int64 v79; // r15
  __int64 v80; // rdi
  char *v81; // rax
  __m128i v82; // [rsp+0h] [rbp-308h] BYREF
  __int64 v83; // [rsp+10h] [rbp-2F8h] BYREF
  __int64 v84; // [rsp+18h] [rbp-2F0h] BYREF
  __m128i v85; // [rsp+20h] [rbp-2E8h] BYREF
  _QWORD v86[2]; // [rsp+30h] [rbp-2D8h] BYREF
  __m128i v87; // [rsp+40h] [rbp-2C8h] BYREF
  char v88; // [rsp+50h] [rbp-2B8h]
  __int64 (__fastcall **v89)(); // [rsp+60h] [rbp-2A8h] BYREF
  __int128 v90; // [rsp+68h] [rbp-2A0h]
  _BYTE haystack[24]; // [rsp+80h] [rbp-288h] BYREF
  __int16 v92; // [rsp+98h] [rbp-270h]
  _QWORD v93[2]; // [rsp+A0h] [rbp-268h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-258h]
  __int64 v95; // [rsp+C0h] [rbp-248h]
  int v96; // [rsp+C8h] [rbp-240h]
  char v97; // [rsp+CCh] [rbp-23Ch]
  __int64 v98; // [rsp+D0h] [rbp-238h]
  char v99; // [rsp+D8h] [rbp-230h]
  __int64 v100; // [rsp+E8h] [rbp-220h]
  __int128 v101; // [rsp+F0h] [rbp-218h]
  __int64 v102; // [rsp+100h] [rbp-208h]
  __int64 v103; // [rsp+108h] [rbp-200h]
  char v104; // [rsp+110h] [rbp-1F8h]
  __m128i v105; // [rsp+118h] [rbp-1F0h]
  __int64 v106; // [rsp+128h] [rbp-1E0h]
  __int128 v107; // [rsp+130h] [rbp-1D8h]
  __int16 v108; // [rsp+140h] [rbp-1C8h]
  __m128i v109; // [rsp+144h] [rbp-1C4h] BYREF
  __m128i v110; // [rsp+154h] [rbp-1B4h] BYREF
  __int64 v111; // [rsp+168h] [rbp-1A0h]
  __int128 v112; // [rsp+170h] [rbp-198h]
  __int64 v113; // [rsp+180h] [rbp-188h]
  __int128 v114; // [rsp+188h] [rbp-180h]
  __int64 v115; // [rsp+198h] [rbp-170h]
  __int128 v116; // [rsp+1A0h] [rbp-168h]
  __int64 v117; // [rsp+1B0h] [rbp-158h]
  __int128 v118; // [rsp+1B8h] [rbp-150h]
  __int64 v119; // [rsp+1C8h] [rbp-140h]
  __int128 v120; // [rsp+1D0h] [rbp-138h]
  __int64 v121; // [rsp+1E0h] [rbp-128h]
  __int128 v122; // [rsp+1E8h] [rbp-120h]
  __int64 v123; // [rsp+1F8h] [rbp-110h]
  __int128 v124; // [rsp+200h] [rbp-108h]
  __int64 v125; // [rsp+210h] [rbp-F8h]
  __int128 v126; // [rsp+218h] [rbp-F0h]
  __int64 v127; // [rsp+228h] [rbp-E0h]
  __int128 v128; // [rsp+230h] [rbp-D8h]
  __int64 v129; // [rsp+240h] [rbp-C8h]
  __int128 v130; // [rsp+248h] [rbp-C0h]
  __int16 v131; // [rsp+258h] [rbp-B0h]
  char v132; // [rsp+25Ah] [rbp-AEh]
  int v133; // [rsp+25Ch] [rbp-ACh]
  __int128 v134; // [rsp+260h] [rbp-A8h]
  __int64 v135; // [rsp+270h] [rbp-98h]
  __int64 v136; // [rsp+278h] [rbp-90h]
  int v137; // [rsp+280h] [rbp-88h]
  __int64 v138; // [rsp+288h] [rbp-80h]
  __int128 v139; // [rsp+290h] [rbp-78h]
  __int64 v140; // [rsp+2A0h] [rbp-68h]
  __int128 v141; // [rsp+2B0h] [rbp-58h] BYREF
  unsigned __int64 v142; // [rsp+2C8h] [rbp-40h]

  v142 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 16);
  if ( !v2 )
  {
    if ( !under_debugger )
      interr(1719);
    BUG();
  }
  v5 = 0;
  if ( *(_DWORD *)(a2 + 232) )
  {
    v18 = *(_QWORD *)(a2 + 32);
    if ( v18 )
      v5 = *(_QWORD *)(v18 + 32);
  }
  v6 = *(_DWORD *)(a2 + 364);
  v7 = *(_QWORD *)(a2 + 120);
  v93[0] = &off_62AA0;
  v8 = *(_QWORD *)(a2 + 216);
  v95 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_574B0);
  v9 = (v6 >> 3) & 2;
  v105 = _mm_load_si128((const __m128i *)&xmmword_574C0);
  v97 = 1;
  v10 = (v6 & 0x80) == 0;
  v11 = *(_QWORD *)(a1 + 8);
  v96 = 8;
  if ( !v10 )
    v9 |= 4u;
  v98 = v2;
  v93[1] = v11;
  v99 = 0;
  v100 = 0;
  v102 = v5;
  v103 = -1;
  v104 = 0;
  v106 = 0;
  v108 = 0;
  v111 = 0;
  v113 = 0;
  v115 = 0;
  v117 = 0;
  v119 = 0;
  v101 = 0;
  v107 = 0;
  v112 = 0;
  v114 = 0;
  v116 = 0;
  v118 = 0;
  v120 = 0;
  v140 = v7;
  v121 = 0;
  v123 = 0;
  v125 = 0;
  v127 = 0;
  v129 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v135 = a1 + 16;
  v136 = v8;
  v137 = v9;
  v138 = 0;
  v122 = 0;
  v124 = 0;
  v126 = 0;
  v128 = 0;
  v130 = 0;
  v134 = -1;
  v139 = 0;
  if ( (unsigned __int8)sub_25BB0(v93)
    && (v5 = *(unsigned int *)(a2 + 360),
        (unsigned __int8)sub_25EF0(v93, v5, *(_QWORD *)(a2 + 24), *(_DWORD *)(a2 + 364) & 1)) )
  {
    v19 = &v85;
    v20 = v93;
    v85.m128i_i32[2] = 0;
    *(_QWORD *)(a2 + 16) = v98;
    v85.m128i_i64[0] = (__int64)off_62AE8;
    sub_27280((__int64)v93, &v85, v12, v13, v14, v15);
    if ( v85.m128i_i32[2] == 1 )
    {
      if ( !*(_BYTE *)(a1 + 4128) )
      {
        v19 = (__m128i *)"HIDECANCEL\n"
                         "The file is apple-protected.\n"
                         "You have to define 'SMC_DEVICE_KEY' in macho.cfg to decrypt it.\n"
                         "Do you still want to continue?";
        v20 = 0;
        if ( (unsigned int)sub_19F30(
                             0,
                             (unsigned int)"HIDECANCEL\n"
                                           "The file is apple-protected.\n"
                                           "You have to define 'SMC_DEVICE_KEY' in macho.cfg to decrypt it.\n"
                                           "Do you still want to continue?",
                             v21,
                             (_DWORD)v22,
                             v23,
                             v24,
                             v82.m128i_i8[0]) != 1 )
          sub_1A260(
            0,
            (unsigned int)"HIDECANCEL\n"
                          "The file is apple-protected.\n"
                          "You have to define 'SMC_DEVICE_KEY' in macho.cfg to decrypt it.\n"
                          "Do you still want to continue?",
            v21,
            (_DWORD)v22,
            v23,
            v24);
      }
    }
    else if ( v85.m128i_i32[2] == 2 )
    {
      v19 = (__m128i *)"HIDECANCEL\n"
                       "The file is iOS-encrypted.\n"
                       "Its disassembly will likely be useless.\n"
                       "Do you still want to continue?";
      v20 = 0;
      if ( (unsigned int)sub_19F30(
                           0,
                           (unsigned int)"HIDECANCEL\n"
                                         "The file is iOS-encrypted.\n"
                                         "Its disassembly will likely be useless.\n"
                                         "Do you still want to continue?",
                           v21,
                           (_DWORD)v22,
                           v23,
                           v24,
                           v82.m128i_i8[0]) != 1 )
        sub_1A260(
          0,
          (unsigned int)"HIDECANCEL\n"
                        "The file is iOS-encrypted.\n"
                        "Its disassembly will likely be useless.\n"
                        "Do you still want to continue?",
          v21,
          (_DWORD)v22,
          v23,
          v24);
    }
    v82 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_633A8, (__m128i)(unsigned __int64)v93);
    if ( (*(_BYTE *)(a1 + 5200) & 1) != 0 )
      *(_DWORD *)(a2 + 364) |= 4u;
    if ( v105.m128i_i64[0] == -1 )
      sub_11CF0(v20, v19, v21, v22);
    v25 = HIBYTE(v108);
    *(__m128i *)(a2 + 328) = _mm_loadu_si128(&v109);
    v26 = _mm_loadu_si128(&v110);
    *(__m128i *)(a2 + 344) = v26;
    *(_BYTE *)(a1 + 13692) = v25;
    v27 = *(_DWORD *)(a2 + 364);
    if ( (v27 & 0x40) == 0
      || (v27 & 0x10) != 0
      || (v21 = *(_QWORD *)(a2 + 8), v28 = *(_QWORD *)(a2 + 240), *(_QWORD *)(v21 + 16) != v28) && v28 != -1 )
    {
      if ( !*(_BYTE *)(a1 + 13691) )
        sub_1D2B0(a1, a2 + 328, *(double *)v26.m128i_i64, NAN);
    }
    if ( !*(_BYTE *)(a1 + 13690) )
      sub_3A180(a1, v93, *(double *)v26.m128i_i64, NAN);
    v29 = *(_DWORD *)(a2 + 364);
    if ( (v29 & 0x50) == 0 )
      goto LABEL_61;
    if ( (v29 & 0x80u) == 0 )
    {
      v89 = 0;
      v90 = 0;
      haystack[16] = 0;
      *(__m128i *)haystack = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_63B78, (__m128i)(unsigned __int64)&v89);
      sub_27280((__int64)v93, (__m128i *)haystack, (__int64 (__fastcall *)())v21, v22, v23, v24);
      if ( haystack[16]
        || (v74 = haystack,
            *(__m128i *)haystack = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)off_63CB8,
                                     (__m128i)(unsigned __int64)&v89),
            sub_27280((__int64)v93, (__m128i *)haystack, v70, v71, v72, v73),
            haystack[16]) )
      {
        v74 = s1;
        if ( (_QWORD)v90 )
          v74 = (const char *)v89;
        sub_1CC90(a2, v74);
      }
      if ( v89 )
      {
        *(_QWORD *)&v90 = 0;
        qfree(v89, v74);
      }
      v29 = *(_DWORD *)(a2 + 364);
    }
    if ( (v29 & 0x40) == 0 || (v29 & 0x10) != 0 )
    {
LABEL_61:
      v55 = 28;
      if ( *(_BYTE *)(a1 + 13692) )
        v55 = 32;
      netnode_supset(*(_QWORD *)(a1 + 24), 0, a2 + 328, v55, 83);
      v88 = 0;
      v141 = 0;
      v87 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_63268, (__m128i)(unsigned __int64)&v141);
      sub_27280((__int64)v93, &v87, v56, v57, v58, v59);
      if ( v88 )
        netnode_supset(*(_QWORD *)(a1 + 24), -2, &v141, 16, 83);
    }
    v30 = _mm_load_si128(&v82);
    v31 = 0.0;
    v32 = (__int64)haystack;
    v89 = 0;
    *(_QWORD *)&haystack[16] = &v89;
    v92 = 256;
    v90 = 0;
    *(__m128i *)haystack = v30;
    sub_27280((__int64)v93, (__m128i *)haystack, (__int64 (__fastcall *)())v21, v22, 256, v24);
    v37 = v89;
    if ( 16LL * (_QWORD)v90 )
    {
      v38 = *(_DWORD *)v89;
      v39 = netnode_altval(*(_QWORD *)(a1 + 24), -3, 65);
      v40 = v39;
      v41 = v38;
      if ( v39 && v39 != v38 )
      {
        v42 = (unsigned int)(v39 - 1);
        v43 = "<unknown>";
        if ( (unsigned int)v42 <= 9 )
          v43 = off_65240[v42];
        v44 = v38 - 1;
        v45 = "<unknown>";
        if ( (unsigned int)v44 <= 9 )
          v45 = off_65240[v44];
        sub_112F0(
          (unsigned int)"new platform \"%s\" (%u) doesn't match previous one \"%s\" (%llu)\n",
          (_DWORD)v45,
          v38,
          (_DWORD)v43,
          v40,
          v38,
          0.0,
          NAN,
          v38,
          v82.m128i_i64[1]);
        v41 = v82.m128i_i64[0];
      }
      v46 = *(_QWORD *)(a1 + 24);
      v32 = -3;
      v83 = v41;
      netnode_supset(v46, -3, &v83, 8, 65);
      v37 = v89;
    }
    if ( v37 )
    {
      *(_QWORD *)&v90 = 0;
      v31 = qfree(v37, v32);
    }
    sub_1A010(2019, v32, v33, v34, v35, v36, v82.m128i_i8[0]);
    if ( (*(_BYTE *)(a2 + 364) & 0x50) == 0 )
    {
      v75 = sub_28AA0(v93, v31, NAN);
      if ( v75 != -1 )
      {
        v79 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & v75;
        if ( (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) != 0 )
        {
          sub_1A010(87, v79, v79 & 1, v76, v77, v78, v82.m128i_i8[0]);
          v79 &= ~1uLL;
        }
        setinf(15, v79);
      }
    }
    if ( (unsigned __int8)sub_2B5C0(a1, a2, v93, v31, NAN) )
    {
      v47 = *(_DWORD *)(a2 + 364);
      if ( (v47 & 0x40) == 0 )
      {
        v48 = *(_QWORD *)(a2 + 248);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) != v48 && v48 != -1 )
        {
          v49 = *(_QWORD *)(a2 + 240);
          if ( (*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) == v49 || v49 == -1)
            && ((v47 & 0x10) == 0 || (v47 & 0x200) != 0) )
          {
            setinf(93, v48);
            v50 = *(_QWORD *)(a1 + 24);
            v84 = *(_QWORD *)(a2 + 248);
            netnode_supset(v50, -1, &v84, 8, 65);
          }
        }
      }
      v51 = *(_QWORD *)(a2 + 120);
      if ( v51 && (*(_BYTE *)(a2 + 365) & 8) != 0 )
      {
        v66 = *(_QWORD *)(a2 + 120);
        *(_QWORD *)haystack = 0;
        sub_40DA0(haystack, v66);
        if ( *(int *)(v51 + 680) > 0 )
        {
          if ( !(_BYTE)v131 )
            sub_28840(v93);
          v67 = v113;
          v68 = v113 + 72 * v114;
          if ( v68 != v113 )
          {
            while ( 1 )
            {
              if ( (*(_BYTE *)(v67 + 60) & 4) == 0 )
              {
                v69 = sub_1C420(v51, *(_QWORD *)(v67 + 24));
                if ( v69 )
                  break;
              }
              v67 += 72;
              if ( v67 == v68 )
                goto LABEL_85;
            }
            v51 = v69;
          }
        }
LABEL_85:
        sub_23EC0(a1, v51, *(_QWORD *)haystack, a2 + 176, *(_DWORD *)(a2 + 364) & 1);
      }
      if ( *(_DWORD *)(a2 + 232) )
        v102 = 0;
      sub_44860(a1, a2, v93);
      sub_2A960(a1, a2, v93);
      sub_38590(a1, a2, v93);
      sub_32090(a1, a2, v93);
      v86[1] = a1;
      v86[0] = &off_64660;
      sub_30290(v93, v86);
      *(_QWORD *)&v90 = a1;
      v89 = off_64678;
      *((_QWORD *)&v90 + 1) = a2;
      sub_31350(v93, &v89);
      v52 = *(_QWORD *)(a2 + 248);
      v53 = *(_QWORD *)(a2 + 240);
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v53 && v53 != -1 )
      {
        if ( !*(_QWORD *)(a2 + 184) )
          goto LABEL_58;
        if ( !rangeset_t_find_range(a2 + 176, *(_QWORD *)(a2 + 248)) )
        {
LABEL_71:
          v54 = *(_DWORD *)(a2 + 364);
          if ( (v54 & 0x50) != 0
            || (v62 = *(_QWORD *)(a2 + 240), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v62) && v62 != -1 )
          {
LABEL_59:
            if ( (v54 & 0x100) != 0 )
              sub_38640(a1, a2, v93);
            goto LABEL_9;
          }
          if ( getinf(15) != -1 )
          {
            v63 = getinf(15);
            v64 = getseg(v63);
            v65 = 0;
            if ( v64 )
              v65 = *(_QWORD *)(v64 + 48);
            setinf(14, v65);
          }
LABEL_58:
          v54 = *(_DWORD *)(a2 + 364);
          goto LABEL_59;
        }
        v52 = *(_QWORD *)(a2 + 248);
      }
      v60 = (char *)getseg(v52);
      memset(haystack, 0, sizeof(haystack));
      if ( !v60 )
        goto LABEL_71;
      v61 = *(char **)(a2 + 248);
      if ( *(char **)v60 != v61 )
        goto LABEL_71;
      if ( (*(_BYTE *)(a2 + 364) & 0x50) == 0 && (*(_BYTE *)(a1 + 13689) & 8) == 0 )
      {
        v61 = v60;
        if ( get_segm_name(haystack, v60, 0) <= 0 )
          goto LABEL_104;
        v80 = *(_QWORD *)haystack;
        if ( !*(_QWORD *)&haystack[8]
          || (v61 = "HEADER",
              v82.m128i_i64[0] = *(_QWORD *)haystack,
              v81 = strstr(*(const char **)haystack, "HEADER"),
              v80 = v82.m128i_i64[0],
              !v81)
          || &v81[-v82.m128i_i64[0]] == (char *)-1LL )
        {
LABEL_105:
          if ( v80 )
          {
            *(_QWORD *)&haystack[8] = 0;
            qfree(v80, v61);
          }
          goto LABEL_71;
        }
        v61 = *(char **)(a2 + 248);
      }
      sub_3E1A0(a1);
LABEL_104:
      v80 = *(_QWORD *)haystack;
      goto LABEL_105;
    }
  }
  else
  {
    v16 = *(_DWORD *)(a2 + 364);
    if ( (v16 & 1) == 0 && (v16 & 0x50) == 0 )
      sub_1A260((unsigned int)"The file is corrupt", v5, (_DWORD)v12, (_DWORD)v13, v14, v15);
    sub_112F0((unsigned int)"skipping invalid subfile.\n", v5, (_DWORD)v12, (_DWORD)v13, v14, v15, 0.0, NAN);
  }
LABEL_9:
  sub_162E0(v93);
  return v142 - __readfsqword(0x28u);
}
