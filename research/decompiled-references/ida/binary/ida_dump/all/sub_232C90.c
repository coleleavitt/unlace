__int64 __fastcall sub_232C90(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6, __int16 a7, _BYTE *a8)
{
  __int64 v10; // rax
  char v11; // bl
  unsigned int v12; // eax
  __int64 v13; // rax
  char v14; // bl
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rax
  int v18; // r14d
  __int64 v19; // r14
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r13
  __int64 v23; // rbx
  char v24; // cl
  char v25; // r13
  int v26; // eax
  unsigned __int64 v27; // r14
  int v28; // esi
  __int64 v29; // rcx
  __int64 v30; // rax
  _DWORD *v31; // rdi
  __int64 v32; // rcx
  size_t v33; // r8
  int v34; // r9d
  __int64 v35; // r14
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  __int64 v39; // r14
  size_t v40; // r9
  __int64 v41; // rsi
  int v42; // r13d
  int v43; // r10d
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // r14
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // ebx
  int v50; // ecx
  int v51; // eax
  __int64 v52; // r12
  __int64 v54; // r14
  char v55; // al
  char v56; // al
  int v57; // eax
  char v58; // di
  int v59; // ebx
  int v60; // eax
  int v61; // eax
  signed __int64 v62; // rsi
  __int64 v64; // rax
  char v65; // bl
  __int64 v66; // rax
  int v67; // eax
  char v68; // di
  __int64 v69; // rdi
  _QWORD *v70; // rsi
  int v71; // eax
  __int64 v72; // rax
  char v73; // bl
  unsigned __int64 v74; // rbx
  int v75; // eax
  int v76; // ebx
  char v77; // al
  int v78; // r12d
  __int64 v79; // rax
  char v80; // r12
  char v81; // r13
  __int64 v82; // r13
  __int64 v83; // rsi
  __int64 v84; // kr00_8
  signed __int64 v85; // rdx
  int v86; // eax
  bool v87; // al
  __int64 v88; // rax
  int v89; // edx
  int v90; // ecx
  __int64 v91; // rdi
  int v92; // [rsp+30h] [rbp-210h]
  size_t v93; // [rsp+30h] [rbp-210h]
  int v94; // [rsp+30h] [rbp-210h]
  unsigned __int8 v95; // [rsp+3Ah] [rbp-206h]
  char v96; // [rsp+3Bh] [rbp-205h]
  int v97; // [rsp+3Ch] [rbp-204h]
  __int64 v99; // [rsp+48h] [rbp-1F8h]
  __int64 v100; // [rsp+50h] [rbp-1F0h]
  size_t v101; // [rsp+50h] [rbp-1F0h]
  size_t v102; // [rsp+50h] [rbp-1F0h]
  char v103; // [rsp+5Bh] [rbp-1E5h]
  int v105; // [rsp+60h] [rbp-1E0h]
  int v106; // [rsp+64h] [rbp-1DCh]
  bool v107; // [rsp+64h] [rbp-1DCh]
  __int64 v109; // [rsp+70h] [rbp-1D0h]
  unsigned int tinfo_size; // [rsp+70h] [rbp-1D0h]
  unsigned __int64 v111; // [rsp+70h] [rbp-1D0h]
  unsigned __int64 v112; // [rsp+70h] [rbp-1D0h]
  __int64 v113; // [rsp+78h] [rbp-1C8h]
  char v114; // [rsp+8Bh] [rbp-1B5h]
  int v115; // [rsp+8Ch] [rbp-1B4h] BYREF
  __int64 v116[2]; // [rsp+90h] [rbp-1B0h] BYREF
  __int64 v117; // [rsp+A0h] [rbp-1A0h] BYREF
  __int64 v118; // [rsp+A8h] [rbp-198h] BYREF
  __int64 tinfo_property; // [rsp+B0h] [rbp-190h]
  __int64 v120; // [rsp+B8h] [rbp-188h] BYREF
  __int64 v121; // [rsp+C0h] [rbp-180h] BYREF
  __int64 v122; // [rsp+C8h] [rbp-178h]
  __int64 scalar_bt; // [rsp+D0h] [rbp-170h] BYREF
  __int64 v124; // [rsp+D8h] [rbp-168h]
  void *src; // [rsp+E0h] [rbp-160h] BYREF
  __int128 v126; // [rsp+E8h] [rbp-158h]
  __int64 v127; // [rsp+100h] [rbp-140h] BYREF
  __int64 v128; // [rsp+108h] [rbp-138h]
  __int64 v129; // [rsp+110h] [rbp-130h]
  int v130; // [rsp+118h] [rbp-128h]
  __int64 v131; // [rsp+120h] [rbp-120h]
  __int128 v132; // [rsp+128h] [rbp-118h]
  __int64 v133; // [rsp+138h] [rbp-108h]
  __int128 v134; // [rsp+140h] [rbp-100h]
  __int64 v135; // [rsp+150h] [rbp-F0h] BYREF
  int v136; // [rsp+158h] [rbp-E8h]
  int v137; // [rsp+15Ch] [rbp-E4h]
  __int64 v138; // [rsp+160h] [rbp-E0h]
  __m128i v139; // [rsp+170h] [rbp-D0h] BYREF
  __int64 v140; // [rsp+180h] [rbp-C0h]
  __int128 v141; // [rsp+188h] [rbp-B8h]
  __int64 v142; // [rsp+198h] [rbp-A8h]
  __int128 v143; // [rsp+1A0h] [rbp-A0h]
  __int128 v144; // [rsp+1B0h] [rbp-90h]
  __int64 v145; // [rsp+1E0h] [rbp-60h]
  int v146; // [rsp+1E8h] [rbp-58h]
  __int64 v147; // [rsp+1F0h] [rbp-50h]
  char v148; // [rsp+1F8h] [rbp-48h]
  unsigned __int64 v149; // [rsp+208h] [rbp-38h]

  v115 = a3;
  v149 = __readfsqword(0x28u);
  v116[0] = 0;
  copy_tinfo_t();
  v97 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v114 = (a7 & 8) != 0;
  v105 = v115;
  if ( a2 >= *(_QWORD *)(a1 + 144) )
  {
    if ( !a5 )
    {
LABEL_9:
      v12 = *(_DWORD *)(a1 + 72);
      if ( v12 <= 0x10 )
        v12 = getinf();
      v96 = v12 == 256 || v12 == 176;
      v11 = v96;
      if ( !v96 )
      {
        v96 = getinf_flag();
        v11 = 1;
      }
      goto LABEL_13;
    }
    if ( (a7 & 0x40) == 0 )
    {
      v10 = 1;
      if ( v115 > 0 )
        v10 = v115;
      if ( a2 + v10 <= *(_QWORD *)(a1 + 168) && (a7 & 0x84) != 0x80 )
      {
        v96 = 0;
        v11 = 0;
        if ( (a7 & 0x100) == 0 )
          goto LABEL_13;
      }
      goto LABEL_9;
    }
  }
  v96 = 0;
  v11 = 0;
LABEL_13:
  v99 = sub_1CFD00(a1, a2);
  v13 = *(_QWORD *)(a1 + 136) + *(int *)(a1 + 116);
  v116[1] = 0;
  if ( a2 >= v13 && (*(_BYTE *)(a1 + 5) & 0x10) != 0 )
  {
    v52 = *(_QWORD *)(a1 + 944);
    if ( *(_QWORD *)(v52 + 8) != -1 || (unsigned __int8)sub_21E760(*(__int64 **)(a1 + 944)) )
    {
      if ( *(_QWORD *)(v52 + 16) )
      {
        v54 = *(_QWORD *)(v52 + 8);
        copy_tinfo_t();
        if ( a2 >= v54 )
        {
          v121 = 0;
          v122 = 0;
          goto LABEL_131;
        }
      }
    }
  }
  v121 = 0;
  v122 = 0;
  if ( !v11 )
  {
LABEL_131:
    v103 = 0;
    v14 = 0;
    v95 = 0;
    v113 = a2;
    goto LABEL_16;
  }
  v95 = 0;
  v14 = 0;
  v103 = 1;
  v113 = a2;
  if ( (a7 & 0x40) == 0 )
    goto LABEL_47;
  while ( 1 )
  {
LABEL_16:
    v15 = *(_QWORD *)(a1 + 1496);
    v117 = 0;
    v140 = 0;
    v142 = 0;
    v145 = 1;
    v146 = -1;
    v147 = 0;
    v148 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v144 = 0;
    v109 = sub_1CFF80(v99, v15, &v139, v113, nullptr, &v117);
    v92 = a7 & 0xC0;
    if ( v92 != 128 || v14 && *(_QWORD *)(a1 + 144) <= v113 )
      goto LABEL_17;
    if ( v109 == -1
      || LOBYTE(v116[0])
      && (a7 & 0x10) != 0
      && (v74 = v139.m128i_u64[1], (unsigned int)(v74 >> 3) != (unsigned int)get_tinfo_size()) )
    {
LABEL_17:
      v118 = 0;
      v106 = 0;
      v100 = -1;
      v109 = -1;
    }
    else
    {
      v118 = 0;
      v106 = 0;
      v100 = -1;
      if ( (a7 & 0x100) == 0 )
      {
        copy_tinfo_t();
        v44 = (unsigned __int64)v139.m128i_i64[0] >> 3;
        v45 = (unsigned __int64)(v139.m128i_i64[0] + v139.m128i_i64[1]) >> 3;
        v46 = (unsigned __int64)v139.m128i_i64[1] >> 3;
        v106 = (unsigned __int64)v139.m128i_i64[1] >> 3;
        v47 = ((unsigned __int64)v139.m128i_i64[0] >> 3) + *(_QWORD *)(v99 + 32);
        v100 = v47;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
          v100 = (int)v47;
        if ( v103
          && (v100 != sub_227D30(a1, v100, &v118, v106)
           || v113 == v100 && v115 != -1 && v115 != (_DWORD)v46 && v113 != sub_227D30(a1, v113, v116, v115)) )
        {
          goto LABEL_217;
        }
        v48 = *(_QWORD *)(a1 + 144);
        if ( v48 <= v100 )
          goto LABEL_117;
        v85 = v45 + *(_QWORD *)(v99 + 32);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
          v85 = (int)v85;
        if ( v48 >= v85 )
        {
LABEL_117:
          if ( !(_DWORD)v46 || a2 < (unsigned __int64)v100 || (int)v46 + v100 - 1 < (unsigned __int64)a2 )
            goto LABEL_125;
          LODWORD(v121) = 1;
          v122 = v100;
          LODWORD(v127) = 0;
          copy_argloc();
          v129 = a6;
          v22 = sub_1F04A0((__int64 *)(a1 + 432), (__int64)&v127);
          cleanup_argloc();
          if ( v22 )
          {
            v49 = v115;
            v50 = 1;
            if ( v115 != -1 )
              v50 = v115;
            v51 = sub_1C36B0(v22, *(_QWORD *)(a1 + 1496), v113, v50, *(unsigned int *)(v22 + 88), nullptr, nullptr);
            if ( v51 && (v49 == -1 || v49 == v51) )
            {
              LODWORD(v22) = -991146299 * ((v22 - *(_QWORD *)(a1 + 432)) >> 3);
              goto LABEL_194;
            }
            if ( v113 == *(_QWORD *)(v22 + 8) )
            {
              if ( !under_debugger )
                sub_383060(51728);
LABEL_349:
              BUG();
            }
            goto LABEL_125;
          }
          if ( v113 == v100 && v115 != -1 && v115 >= (int)v46 )
            goto LABEL_18;
          v86 = sub_1F06C0((__int64 *)(a1 + 432), (int *)&v121, v106, -1);
          if ( v86 < 0 )
            goto LABEL_18;
          if ( !v103 )
          {
            v90 = v115;
            if ( v115 == -1 )
              v90 = 1;
            v91 = *(_QWORD *)(a1 + 432) + 104LL * v86;
            if ( (unsigned int)sub_1C36B0(
                                 v91,
                                 *(_QWORD *)(a1 + 1496),
                                 v113,
                                 v90,
                                 *(unsigned int *)(v91 + 88),
                                 nullptr,
                                 nullptr) )
              goto LABEL_18;
            goto LABEL_125;
          }
        }
        else
        {
LABEL_217:
          if ( !(unsigned __int8)sub_22D9A0(a1, v99, &v117, v44, v45, nullptr) )
          {
            LODWORD(v22) = -1;
            goto LABEL_194;
          }
        }
        sub_232920(a1, v99, v100, v106);
LABEL_125:
        v109 = -1;
      }
    }
LABEL_18:
    v130 = 1;
    v131 = 0;
    v129 = a6;
    v133 = 0;
    v135 = 0;
    v136 = 0;
    v138 = 0;
    v137 = a5;
    src = nullptr;
    v132 = 0;
    v134 = 0;
    v126 = 0;
    if ( v109 == -1 )
      break;
    v16 = *(_QWORD *)(a1 + 1256);
    LODWORD(v127) = 1;
    v128 = v100;
    if ( 96LL * *(_QWORD *)(a1 + 1264) )
    {
      while ( (unsigned int)sub_3307E0(v16, &v127) )
      {
        v16 += 96;
        if ( v16 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
          goto LABEL_99;
      }
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 80);
        if ( v17 != -1 && v100 + v17 <= v113 )
          break;
      }
    }
LABEL_99:
    v18 = v115;
    if ( v115 > v106 )
      goto LABEL_27;
    v115 = v106;
    if ( !(_BYTE)v118 )
    {
      if ( v18 != -1 )
      {
LABEL_102:
        v42 = v18 + v113;
        v43 = v100;
        if ( (int)v100 + v106 >= v18 + (int)v113 )
        {
          if ( LOBYTE(v116[0]) && !(unsigned int)verify_tinfo() )
          {
            v107 = 0;
            v114 = 0;
            goto LABEL_255;
          }
          v105 = v18;
          v114 = 0;
          v113 = v100;
          tinfo_size = -1;
          goto LABEL_156;
        }
        v107 = 0;
        goto LABEL_223;
      }
      if ( !LOBYTE(v116[0]) )
      {
        v114 = 0;
        v105 = -1;
        v55 = v103;
        v113 = v100;
        goto LABEL_136;
      }
      if ( !(unsigned int)verify_tinfo() )
      {
        tinfo_size = get_tinfo_size();
        v105 = -1;
        v113 = v100;
        v114 = 0;
        goto LABEL_156;
      }
LABEL_286:
      v105 = -1;
      v114 = 0;
      v113 = v100;
      tinfo_size = -1;
      goto LABEL_156;
    }
    v114 = sub_1EF510((__int64)&v127, *(_QWORD *)(a1 + 1504), &v118, 0);
    if ( !v114 )
    {
      if ( v18 != -1 )
        goto LABEL_102;
      if ( !LOBYTE(v116[0]) )
      {
        v55 = v103;
        v105 = -1;
        v113 = v100;
        goto LABEL_136;
      }
      if ( !(unsigned int)verify_tinfo() )
      {
        tinfo_size = get_tinfo_size();
        v105 = -1;
        v113 = v100;
        goto LABEL_156;
      }
      goto LABEL_286;
    }
    if ( v103
      && !(unsigned __int8)sub_1EEFF0(
                             (__int64)&v127,
                             *(_QWORD *)(a1 + 1504),
                             &v118,
                             0xFFFFFFFF,
                             *(_DWORD *)(a1 + 72),
                             8) )
    {
      if ( v18 != -1 )
        goto LABEL_102;
      if ( !LOBYTE(v116[0]) )
      {
        v114 = 0;
        tinfo_size = -1;
        v18 = v106;
        v105 = -1;
        v113 = v100;
        goto LABEL_137;
      }
      if ( !(unsigned int)verify_tinfo() )
      {
        tinfo_size = get_tinfo_size();
        v105 = -1;
        v114 = 0;
        v113 = v100;
        goto LABEL_156;
      }
      goto LABEL_286;
    }
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    v77 = get_tinfo_property();
    if ( (v77 & 0xE) == 0 && (v77 & 0x30) != 0 )
    {
      v130 |= 0x4000u;
      v78 = get_tinfo_property();
      get_tinfo_size();
      scalar_bt = (unsigned __int8)get_scalar_bt();
      copy_tinfo_t();
      clear_tinfo_t();
      if ( v78 != -1 )
      {
        LODWORD(v124) = 0;
        scalar_bt = 0;
        HIDWORD(v124) = v78;
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
      }
    }
    sub_1EF8F0((__int64)&v127, *(_QWORD *)(a1 + 1504), &v118, 0);
    v120 = 0;
    v79 = get_tinfo_property();
    v120 = v79;
    v80 = v79;
    if ( (unsigned __int8)v144 <= 0x3Fu
      && (unsigned __int8)v79 <= 0x3Fu
      && (!(_BYTE)v79
       || (v79 & 0xE) == 0 && (v79 & 0x30) != 0
       || (scalar_bt = 0,
           scalar_bt = get_tinfo_property(),
           v81 = get_tinfo_property(),
           clear_tinfo_t(),
           (v81 & 0x3F) == 0x30)
       || (v80 & 0xCF) == 9) )
    {
      clear_tinfo_t();
    }
    else
    {
      clear_tinfo_t();
      v130 = v130 & 0xFFFBFFFD | 2;
    }
    clear_tinfo_t();
    if ( v18 == -1 )
    {
      if ( !LOBYTE(v116[0]) )
      {
        v18 = v136;
        tinfo_size = -1;
        v25 = 0;
        v105 = -1;
        v107 = v114;
        v114 = 0;
        v113 = v100;
        goto LABEL_75;
      }
      if ( (unsigned int)verify_tinfo() )
      {
        v114 = 0;
        v105 = -1;
        v113 = v100;
        tinfo_size = -1;
      }
      else
      {
        tinfo_size = get_tinfo_size();
        v105 = -1;
        v113 = v100;
        v114 = 0;
      }
      goto LABEL_257;
    }
    v42 = v18 + v113;
    v43 = v100;
    if ( v18 + (int)v113 <= (int)v100 + v106 )
    {
      if ( !LOBYTE(v116[0]) || (unsigned int)verify_tinfo() )
      {
        v105 = v18;
        v114 = 0;
        v113 = v100;
        tinfo_size = -1;
        goto LABEL_257;
      }
      v87 = v114;
      v114 = 0;
      v107 = v87;
LABEL_255:
      tinfo_size = get_tinfo_size();
      v105 = v18;
      v113 = v100;
      goto LABEL_256;
    }
    v107 = v114;
LABEL_223:
    v94 = v43;
    get_tinfo_property4();
    v105 = v18;
    v114 = 0;
    if ( (unsigned __int64)v143 > 1 )
      goto LABEL_82;
    if ( (get_aflags() & 0x2000000) != 0 )
    {
      v105 = v18;
      v114 = 0;
      goto LABEL_82;
    }
    v115 = v42 - v94;
    v67 = sub_2327F0((_QWORD *)a1, &v115, v100, &v118);
    if ( !v67 )
    {
      v105 = v18;
      v107 = 0;
      v114 = 0;
      goto LABEL_82;
    }
    v68 = v116[0];
    v114 = a8 != nullptr && v67 == 2;
    if ( v114 )
    {
      *a8 = 1;
      if ( v68 && !(unsigned int)verify_tinfo() )
      {
LABEL_324:
        tinfo_size = get_tinfo_size();
        v105 = v18;
        v113 = v100;
        v114 = 0;
        goto LABEL_156;
      }
      v105 = v18;
      v18 = -1;
      v114 = 0;
      v106 = v115;
      v55 = v103;
      v113 = v100;
    }
    else if ( LOBYTE(v116[0]) )
    {
      if ( !(unsigned int)verify_tinfo() )
        goto LABEL_324;
      v105 = v18;
      v18 = -1;
      v106 = v115;
      v55 = v103;
      v113 = v100;
    }
    else
    {
      v105 = v18;
      v18 = -1;
      v113 = v100;
      v106 = v115;
      v55 = v103;
    }
LABEL_136:
    tinfo_size = v18;
    v18 = v106;
    if ( !v55 )
      goto LABEL_71;
LABEL_137:
    if ( v106 == tinfo_size
      && (unsigned __int8)sub_1EEFF0((__int64)&v127, *(_QWORD *)(a1 + 1504), v116, 0xFFFFFFFF, *(_DWORD *)(a1 + 72), 8) )
    {
      if ( v136 != tinfo_size )
      {
        sub_1EF680(&v127, *(_QWORD **)(a1 + 1504), tinfo_size, 0);
LABEL_141:
        v56 = get_tinfo_property();
        v107 = 0;
        v18 = v136;
        v25 = v114 ^ ((v56 & 0xF) == 9);
        goto LABEL_75;
      }
      v18 = tinfo_size;
      goto LABEL_213;
    }
LABEL_33:
    if ( sub_11CA80(v18) )
      goto LABEL_34;
    if ( v18 <= 0 )
    {
      v115 = v97;
      v18 = v97;
    }
    else
    {
      if ( !a5 && *(_QWORD *)(a1 + 144) <= v113 && v96 )
      {
LABEL_34:
        v18 = v115;
        goto LABEL_35;
      }
      v115 = (v97 + v18 - 1) & -v97;
      v18 = v115;
    }
LABEL_35:
    if ( v113 + v105 >= v128 + v18 )
    {
      v25 = sub_11CA80(v18);
      if ( !v25 )
      {
        clear_tinfo_t();
        if ( v18 == v136 )
        {
          v107 = 0;
          v114 = 0;
          goto LABEL_75;
        }
        goto LABEL_168;
      }
      if ( v136 != v18 )
      {
LABEL_168:
        v24 = 0;
LABEL_73:
        sub_1EF680(&v127, *(_QWORD **)(a1 + 1504), v18, v24);
        if ( v18 != tinfo_size )
        {
          v107 = 0;
          v18 = v136;
          v25 = 1;
          goto LABEL_75;
        }
        goto LABEL_141;
      }
LABEL_213:
      v107 = 0;
      v25 = 0;
      v114 = 0;
      goto LABEL_75;
    }
    if ( src )
    {
      *(_QWORD *)&v126 = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( v133 )
    {
      *(_QWORD *)&v134 = 0;
      qfree();
    }
    if ( v131 )
    {
      *(_QWORD *)&v132 = 0;
      qfree();
    }
    cleanup_argloc();
    clear_tinfo_t();
    clear_tinfo_t();
    if ( v142 )
    {
      *(_QWORD *)&v143 = 0;
      qfree();
    }
    if ( v140 )
    {
      *(_QWORD *)&v141 = 0;
      qfree();
    }
    v14 = 0;
    clear_tinfo_t();
    cleanup_argloc();
    v105 = v18;
    v121 = 0;
    v122 = 0;
    v114 = 0;
    v103 = 1;
    if ( (a7 & 0x40) == 0 )
    {
LABEL_47:
      scalar_bt = v113;
      LODWORD(v120) = v105;
      sub_228510((int *)&v120, &scalar_bt, a1, v116);
      if ( (int)v120 > v105
        && !LOBYTE(v116[0])
        && *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL)
        && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) > v105
        && sub_11CB40(v105)
        && (sub_32C150(&src, *(_QWORD *)(a1 + 1504), (unsigned int)v105),
            LOBYTE(v128) = 5,
            v127 = v113,
            v65 = sub_227ED0(a1, (__int64)&v127, &src, v105),
            clear_tinfo_t(),
            v65) )
      {
        v114 = v65;
        scalar_bt = v113;
        v19 = v113;
        LODWORD(v120) = v105;
      }
      else
      {
        v19 = scalar_bt;
        if ( scalar_bt != v113 )
        {
          v114 = 0;
          v95 = 1;
        }
      }
      v122 = v19;
      LODWORD(v121) = 1;
      if ( v105 == -1 )
      {
        LODWORD(v120) = 1;
        v20 = 1;
      }
      else
      {
        v20 = v120;
        v115 = v120;
      }
      if ( !v96 && !(v19 % v97) )
      {
        v20 = (v97 + v20 - 1) & -v97;
        LODWORD(v120) = v20;
      }
      v21 = sub_228E60(a1, 0, (__int64)&v121, v20);
      v22 = v21;
      if ( v21 == -1 )
      {
        v103 = 1;
        v14 = 0;
        goto LABEL_67;
      }
      if ( (a7 & 0x100) != 0 )
      {
        if ( !under_debugger )
          sub_383060(52273);
        goto LABEL_349;
      }
      v23 = *(_QWORD *)(a1 + 432) + 104LL * v21;
      if ( (a7 & 4) == 0 )
        sub_231430(a1, v21, a2, v105, nullptr, 0);
      v103 = sub_229120((_DWORD *)v23, a1, a2, v105);
      if ( v103 )
        goto LABEL_199;
      if ( *(_DWORD *)(v23 + 92) )
      {
        if ( *(_DWORD *)v23 == 1 && *(_QWORD *)(v23 + 8) != v19 )
        {
          v75 = sub_228E60(a1, (int)v22 + 1, (__int64)&v121, 1);
          v76 = v75;
          if ( v75 != -1 )
          {
            if ( (unsigned __int8)sub_229120((_DWORD *)(*(_QWORD *)(a1 + 432) + 104LL * v75), a1, a2, v105) )
            {
              LODWORD(v22) = v76;
              goto LABEL_199;
            }
            v22 = v76;
          }
        }
      }
      if ( !a5 )
      {
        if ( a8 )
        {
          if ( !*(_BYTE *)(a1 + 320) && (int)v22 < *(_DWORD *)(a1 + 792) && (*(_BYTE *)(a1 + 2) & 4) == 0 )
          {
            v88 = *(_QWORD *)(a1 + 432) + 104LL * (int)v22;
            v89 = *(_DWORD *)(v88 + 24);
            if ( (v89 & 0x9040060) == 0 && *(_QWORD *)(v88 + 64) <= 1u && (v89 & 0x8000) == 0 )
            {
              sub_1F5300(a1, v22);
              *a8 = 1;
              LODWORD(v22) = -1;
            }
          }
        }
        goto LABEL_199;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v22 + 92) )
        v103 = 1;
      else
        v19 = a2;
      v14 = 1;
LABEL_67:
      if ( *(_BYTE *)(a1 + 320) )
      {
        v103 = 0;
        v19 = a2;
        v115 = v105;
      }
      v113 = v19;
    }
  }
  v18 = v115;
LABEL_27:
  LODWORD(v127) = 1;
  v128 = v113;
  if ( v18 == -1 )
  {
    if ( !v96
      || (v124 = v113 & -v97,
          LODWORD(scalar_bt) = 1,
          v59 = sub_228E60(a1, 0, (__int64)&scalar_bt, v97),
          cleanup_argloc(),
          v59 == -1) )
    {
      v106 = v97 + (v113 & -v97) - v113;
    }
    else
    {
      v106 = 1;
    }
    v115 = v106;
    if ( !LOBYTE(v116[0]) || (unsigned int)verify_tinfo() )
    {
      v95 = 1;
      v55 = v103 & (v114 ^ 1);
      goto LABEL_136;
    }
    tinfo_size = get_tinfo_size();
    v95 = 1;
    goto LABEL_156;
  }
  if ( v92 != 128 )
  {
LABEL_29:
    if ( !LOBYTE(v116[0]) )
      goto LABEL_30;
    goto LABEL_154;
  }
  v57 = sub_2309F0(a1, v113, v18, nullptr, 3, (__int64 *)&src);
  v107 = a8 != nullptr && v57 == 2;
  if ( v107 )
  {
    v58 = v116[0];
    *a8 = 1;
    if ( !v58 )
    {
LABEL_30:
      if ( v114 == 1 || !v103 )
      {
        tinfo_size = -1;
LABEL_71:
        if ( v136 == v18 )
        {
          v107 = 0;
          v25 = 0;
          goto LABEL_75;
        }
        v24 = v114;
        goto LABEL_73;
      }
      tinfo_size = -1;
      v114 = 0;
      goto LABEL_33;
    }
LABEL_154:
    if ( (unsigned int)verify_tinfo() )
      goto LABEL_30;
    tinfo_size = get_tinfo_size();
LABEL_156:
    v18 = tinfo_size;
    v106 = v115;
    v55 = v103 & (v114 ^ 1);
    goto LABEL_136;
  }
  if ( v57 != -1 )
    goto LABEL_29;
  do
  {
LABEL_82:
    if ( (a7 & 0x100) == 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 604LL) & 0x10) == 0 )
      {
        LODWORD(v22) = -1;
        goto LABEL_187;
      }
      v31 = *(_DWORD **)(a1 + 1504);
      scalar_bt = 0;
      v124 = 0;
      sub_1EFA10(v31, (__int64 *)(a1 + 496), (__int64)&v127, v115, &scalar_bt, 0);
      cleanup_argloc();
      if ( (unsigned __int64)v126 > 1 )
      {
        v35 = *(_QWORD *)(a1 + 504);
        if ( v35 )
        {
          v33 = v35 + 11;
          v36 = v35 + 12;
          --v35;
        }
        else
        {
          v36 = 13;
          v33 = 12;
        }
        v37 = *(_QWORD *)(a1 + 496);
        if ( *(_QWORD *)(a1 + 512) < v36 )
        {
          v101 = v33;
          v111 = v36;
          v64 = qvector_reserve();
          *(_QWORD *)(a1 + 496) = v64;
          v33 = v101;
          v37 = v64;
          v36 = v111;
        }
        *(_QWORD *)(a1 + 504) = v36;
        *(_BYTE *)(v37 + v33) = 0;
        qmemcpy((void *)(*(_QWORD *)(a1 + 496) + v35), " and stkvar ", 12);
        v38 = v126;
        if ( (_QWORD)v126 )
        {
          v33 = v126 - 1;
          if ( (_QWORD)v126 != 1 )
          {
            v39 = *(_QWORD *)(a1 + 504);
            v40 = v126 - 1;
            if ( v39 )
            {
              --v39;
              v40 = v33 + v39;
              v38 = v126 + v39;
            }
            v41 = *(_QWORD *)(a1 + 496);
            if ( *(_QWORD *)(a1 + 512) < v38 )
            {
              v93 = v126 - 1;
              v102 = v40;
              v112 = v38;
              v66 = qvector_reserve();
              *(_QWORD *)(a1 + 496) = v66;
              v33 = v93;
              v41 = v66;
              v40 = v102;
              v38 = v112;
            }
            *(_QWORD *)(a1 + 504) = v38;
            *(_BYTE *)(v41 + v40) = 0;
            memcpy((void *)(v39 + *(_QWORD *)(a1 + 496)), src, v33);
          }
        }
      }
      sub_1F08B0(a1, -1, 20, v32, v33, v34);
    }
    v130 |= 0x400u;
    if ( LOBYTE(v116[0]) && !(unsigned int)verify_tinfo() )
    {
      v18 = v105;
      v100 = v113;
      goto LABEL_255;
    }
    tinfo_size = -1;
LABEL_256:
    if ( !v107 )
      goto LABEL_156;
LABEL_257:
    v107 = 1;
    v18 = v136;
    v25 = 0;
LABEL_75:
    if ( !v18 )
    {
      if ( !under_debugger )
        sub_383060(50325);
      goto LABEL_349;
    }
    v26 = v130;
    if ( *(int *)(a1 + 116) <= 0 || (v130 & 0x400) != 0 )
      goto LABEL_174;
    v27 = v128;
    if ( (get_tinfo_property() & 0x3F) == 0x29 && (get_tinfo_property() & 0x3F) == 0x39 )
      v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 8LL) + 120LL);
    else
      v28 = v136;
    v29 = *(_QWORD *)(a1 + 136);
    v30 = v27 + v28;
  }
  while ( v29 > (__int64)v27 && v29 < v30 );
  if ( !*(_DWORD *)(a1 + 116) )
    goto LABEL_173;
  if ( v27 < v29 )
    goto LABEL_173;
  v69 = v29 + *(int *)(a1 + 116);
  if ( v69 - 1 < v27 )
    goto LABEL_173;
  if ( v29 > (__int64)v27 )
    v29 = v27;
  if ( v69 < v30 )
    LODWORD(v69) = v27 + v28;
  if ( v28 == (_DWORD)v69 - (_DWORD)v29 )
  {
LABEL_173:
    v18 = v136;
    v26 = v130;
LABEL_174:
    v60 = (16 * v95) | v26;
    BYTE1(v60) &= 0x7Eu;
    v130 = v60;
    if ( v18 != tinfo_size )
      goto LABEL_175;
    if ( v25 )
      goto LABEL_239;
LABEL_215:
    copy_tinfo_t();
    v18 = v136;
    goto LABEL_175;
  }
  v70 = *(_QWORD **)(a1 + 1504);
  v128 = v29;
  LODWORD(v127) = 1;
  sub_1EF680(&v127, v70, v69 - v29, 0);
  v71 = v130;
  v18 = v136;
  BYTE1(v71) = BYTE1(v130) & 0x7E;
  if ( v95 )
  {
    v130 = v71 | 0x10;
    if ( v136 != tinfo_size )
      goto LABEL_175;
LABEL_239:
    v120 = 0;
    v72 = get_tinfo_property();
    v120 = v72;
    if ( (_BYTE)v72 && ((v72 & 0xE) != 0 || (v72 & 0x30) == 0) )
    {
      scalar_bt = 0;
      scalar_bt = get_tinfo_property();
      v73 = get_tinfo_property();
      clear_tinfo_t();
      if ( (v73 & 0x3F) != 0x30 && (a7 & 0x20) == 0 )
      {
        clear_tinfo_t();
        v18 = v136;
        goto LABEL_175;
      }
    }
    clear_tinfo_t();
    goto LABEL_215;
  }
  v130 = v71;
  if ( v136 == tinfo_size )
    goto LABEL_239;
LABEL_175:
  if ( v103 )
  {
    v82 = v128;
    if ( v82 != sub_227D30(a1, v128, &v135, v18) )
    {
      if ( v82 % v97 )
      {
        if ( !under_debugger )
          sub_383060(51363);
        goto LABEL_349;
      }
      v83 = *(_QWORD *)(a1 + 1504);
      v136 = (v97 + v136 - 1) & -v97;
      v84 = v136;
      sub_32C270(&v120, v83, (unsigned int)v97);
      LODWORD(v124) = 0;
      HIDWORD(v124) = v84 / v97;
      scalar_bt = 0;
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    v18 = v136;
  }
  if ( (a7 & 2) != 0 )
    v130 |= 0x200u;
  if ( (a7 & 0x40) != 0 )
    v130 |= 0x10000u;
  if ( a5 && ((a7 & 4) != 0 || !v103) )
  {
    v61 = v130;
    BYTE1(v61) = BYTE1(v130) & 0x7E;
    v130 = v61 | 0x100000;
  }
  if ( (_DWORD)v127 == 1 )
    v62 = v128;
  else
    v62 = -1;
  sub_232C00(a1, v62, v18);
  LODWORD(v22) = sub_1F6560(a1, (__int64)&v127, (a7 & 0x200) != 0);
LABEL_187:
  if ( src )
  {
    *(_QWORD *)&v126 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v133 )
  {
    *(_QWORD *)&v134 = 0;
    qfree();
  }
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree();
  }
  cleanup_argloc();
LABEL_194:
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v142 )
  {
    *(_QWORD *)&v143 = 0;
    qfree();
  }
  if ( v140 )
  {
    *(_QWORD *)&v141 = 0;
    qfree();
  }
  clear_tinfo_t();
LABEL_199:
  cleanup_argloc();
  clear_tinfo_t();
  clear_tinfo_t();
  return (unsigned int)v22;
}
