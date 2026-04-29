__int64 __fastcall sub_22F010(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6, __int16 a7, _BYTE *a8)
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
  __int64 v19; // rdi
  __int64 v20; // r14
  int v21; // ecx
  int v22; // eax
  __int64 v23; // r13
  __int64 v24; // rbx
  char v25; // cl
  char v26; // r13
  int v27; // eax
  unsigned __int64 v28; // r14
  int v29; // esi
  __int64 v30; // rcx
  __int64 v31; // rax
  _DWORD *v32; // rdi
  __int64 v33; // rcx
  size_t v34; // r8
  int v35; // r9d
  __int64 v36; // r14
  unsigned __int64 v37; // rdx
  __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  __int64 v40; // r14
  size_t v41; // r9
  __int64 v42; // rsi
  int v43; // r13d
  int v44; // r10d
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // r13
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // ebx
  int v51; // ecx
  int v52; // eax
  __int64 v53; // r12
  __int64 v54; // r13
  __int64 v55; // r14
  char v56; // al
  char v57; // al
  int v58; // eax
  int v59; // ebx
  int v60; // eax
  int v61; // eax
  signed __int64 v62; // rsi
  __int64 v64; // rax
  char v65; // bl
  __int64 v66; // rax
  __int64 tinfo_property4; // rax
  int v68; // eax
  __int64 v69; // rdi
  __int64 v70; // rdi
  _QWORD *v71; // rsi
  int v72; // eax
  __int64 v73; // rax
  char v74; // bl
  unsigned __int64 v75; // rbx
  int v76; // eax
  int v77; // ebx
  char v78; // al
  int v79; // r12d
  unsigned int v80; // eax
  __int64 v81; // rax
  char v82; // r12
  char v83; // r13
  __int64 v84; // r13
  __int64 v85; // rsi
  __int64 v86; // kr00_8
  signed __int64 v87; // rdx
  int v88; // eax
  bool v89; // al
  __int64 v90; // rax
  int v91; // edx
  int v92; // ecx
  __int64 v93; // rdi
  int v94; // [rsp+30h] [rbp-210h]
  size_t v95; // [rsp+30h] [rbp-210h]
  int v96; // [rsp+30h] [rbp-210h]
  unsigned __int8 v97; // [rsp+3Ah] [rbp-206h]
  char v98; // [rsp+3Bh] [rbp-205h]
  int v99; // [rsp+3Ch] [rbp-204h]
  __int64 *v101; // [rsp+48h] [rbp-1F8h]
  __int64 v102; // [rsp+50h] [rbp-1F0h]
  size_t v103; // [rsp+50h] [rbp-1F0h]
  size_t v104; // [rsp+50h] [rbp-1F0h]
  char v105; // [rsp+5Bh] [rbp-1E5h]
  int v107; // [rsp+60h] [rbp-1E0h]
  int v108; // [rsp+64h] [rbp-1DCh]
  bool v109; // [rsp+64h] [rbp-1DCh]
  __int64 v111; // [rsp+70h] [rbp-1D0h]
  unsigned int tinfo_size; // [rsp+70h] [rbp-1D0h]
  unsigned __int64 v113; // [rsp+70h] [rbp-1D0h]
  unsigned __int64 v114; // [rsp+70h] [rbp-1D0h]
  __int64 v115; // [rsp+78h] [rbp-1C8h]
  char v116; // [rsp+8Bh] [rbp-1B5h]
  int v117; // [rsp+8Ch] [rbp-1B4h] BYREF
  __int64 v118; // [rsp+90h] [rbp-1B0h] BYREF
  __int64 v119; // [rsp+98h] [rbp-1A8h] BYREF
  __int64 v120; // [rsp+A0h] [rbp-1A0h] BYREF
  __int64 v121; // [rsp+A8h] [rbp-198h] BYREF
  __int64 tinfo_property; // [rsp+B0h] [rbp-190h] BYREF
  __int64 v123; // [rsp+B8h] [rbp-188h] BYREF
  __int64 v124; // [rsp+C0h] [rbp-180h] BYREF
  __int64 v125; // [rsp+C8h] [rbp-178h]
  __int64 scalar_bt; // [rsp+D0h] [rbp-170h] BYREF
  __int64 v127; // [rsp+D8h] [rbp-168h]
  void *src; // [rsp+E0h] [rbp-160h] BYREF
  __int128 v129; // [rsp+E8h] [rbp-158h]
  __int64 v130; // [rsp+100h] [rbp-140h] BYREF
  __int64 v131; // [rsp+108h] [rbp-138h]
  __int64 v132; // [rsp+110h] [rbp-130h]
  int v133; // [rsp+118h] [rbp-128h]
  __int64 v134; // [rsp+120h] [rbp-120h]
  __int128 v135; // [rsp+128h] [rbp-118h]
  __int64 v136; // [rsp+138h] [rbp-108h]
  __int128 v137; // [rsp+140h] [rbp-100h]
  __int64 v138; // [rsp+150h] [rbp-F0h] BYREF
  int v139; // [rsp+158h] [rbp-E8h]
  int v140; // [rsp+15Ch] [rbp-E4h]
  __int64 v141; // [rsp+160h] [rbp-E0h]
  __m128i v142; // [rsp+170h] [rbp-D0h] BYREF
  __int64 v143; // [rsp+180h] [rbp-C0h]
  __int128 v144; // [rsp+188h] [rbp-B8h]
  __int64 v145; // [rsp+198h] [rbp-A8h]
  __int128 v146; // [rsp+1A0h] [rbp-A0h]
  _OWORD v147[3]; // [rsp+1B0h] [rbp-90h] BYREF
  __int64 v148; // [rsp+1E0h] [rbp-60h]
  int v149; // [rsp+1E8h] [rbp-58h]
  __int64 v150; // [rsp+1F0h] [rbp-50h]
  char v151; // [rsp+1F8h] [rbp-48h]
  unsigned __int64 v152; // [rsp+208h] [rbp-38h]

  v117 = a3;
  v152 = __readfsqword(0x28u);
  v118 = 0;
  copy_tinfo_t(&v118, a4);
  v99 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v116 = (a7 & 8) != 0;
  v107 = v117;
  if ( a2 >= *(_QWORD *)(a1 + 144) )
  {
    if ( !a5 )
    {
LABEL_9:
      v12 = *(_DWORD *)(a1 + 72);
      if ( v12 <= 0x10 )
        v12 = getinf(99);
      v98 = v12 == 256 || v12 == 176;
      v11 = v98;
      if ( !v98 )
      {
        v98 = getinf_flag(67, 2);
        v11 = 1;
      }
      goto LABEL_13;
    }
    if ( (a7 & 0x40) == 0 )
    {
      v10 = 1;
      if ( v117 > 0 )
        v10 = v117;
      if ( a2 + v10 <= *(_QWORD *)(a1 + 168) && (a7 & 0x84) != 0x80 )
      {
        v98 = 0;
        v11 = 0;
        if ( (a7 & 0x100) == 0 )
          goto LABEL_13;
      }
      goto LABEL_9;
    }
  }
  v98 = 0;
  v11 = 0;
LABEL_13:
  v101 = (__int64 *)sub_1CC2C0(a1, a2);
  v13 = *(_QWORD *)(a1 + 136) + *(int *)(a1 + 116);
  v119 = 0;
  if ( a2 >= v13 && (*(_BYTE *)(a1 + 5) & 0x10) != 0 )
  {
    v53 = *(_QWORD *)(a1 + 944);
    if ( *(_QWORD *)(v53 + 8) != -1 || (unsigned __int8)sub_21AAE0(*(__int64 **)(a1 + 944)) )
    {
      v54 = *(_QWORD *)(v53 + 16);
      if ( v54 )
      {
        v55 = *(_QWORD *)(v53 + 8);
        copy_tinfo_t(&v119, v53 + 32);
        if ( a2 >= v55 )
        {
          if ( a2 == v55 && v117 == (_DWORD)v54 && (_BYTE)v119 )
            copy_tinfo_t(&v118, &v119);
          v124 = 0;
          v125 = 0;
          goto LABEL_133;
        }
      }
    }
  }
  v124 = 0;
  v125 = 0;
  if ( !v11 )
  {
LABEL_133:
    v105 = 0;
    v14 = 0;
    v97 = 0;
    v115 = a2;
    goto LABEL_16;
  }
  v97 = 0;
  v14 = 0;
  v105 = 1;
  v115 = a2;
  if ( (a7 & 0x40) == 0 )
    goto LABEL_47;
  while ( 1 )
  {
LABEL_16:
    if ( (v15 = *(_QWORD *)(a1 + 1496),
          v120 = 0,
          v143 = 0,
          v145 = 0,
          v148 = 1,
          v149 = -1,
          v150 = 0,
          v151 = 0,
          v142 = 0,
          v144 = 0,
          v146 = 0,
          v147[0] = 0,
          v111 = sub_1CC540(v101, v15, &v142, v115, nullptr, &v120),
          v94 = a7 & 0xC0,
          v94 != 128)
      || v14 && *(_QWORD *)(a1 + 144) <= v115
      || v111 == -1
      || (_BYTE)v118
      && (a7 & 0x10) != 0
      && (v75 = v142.m128i_u64[1], (unsigned int)(v75 >> 3) != (unsigned int)get_tinfo_size(0, v118, 0)) )
    {
      v121 = 0;
      v108 = 0;
      v102 = -1;
      v111 = -1;
    }
    else
    {
      v121 = 0;
      v108 = 0;
      v102 = -1;
      if ( (a7 & 0x100) == 0 )
      {
        copy_tinfo_t(&v121, v147);
        v45 = (unsigned __int64)v142.m128i_i64[0] >> 3;
        v46 = (unsigned __int64)(v142.m128i_i64[0] + v142.m128i_i64[1]) >> 3;
        v47 = (unsigned __int64)v142.m128i_i64[1] >> 3;
        v108 = (unsigned __int64)v142.m128i_i64[1] >> 3;
        v48 = ((unsigned __int64)v142.m128i_i64[0] >> 3) + v101[4];
        v102 = v48;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
          v102 = (int)v48;
        if ( v105
          && (v102 != sub_2240B0(a1, v102, &v121, v108)
           || v115 == v102 && v117 != -1 && v117 != (_DWORD)v47 && v115 != sub_2240B0(a1, v115, &v118, v117)) )
        {
          goto LABEL_221;
        }
        v49 = *(_QWORD *)(a1 + 144);
        if ( v49 <= v102 )
          goto LABEL_117;
        v87 = v46 + v101[4];
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL) != 8 )
          v87 = (int)v87;
        if ( v49 >= v87 )
        {
LABEL_117:
          if ( !(_DWORD)v47 || a2 < (unsigned __int64)v102 || (int)v47 + v102 - 1 < (unsigned __int64)a2 )
            goto LABEL_125;
          LODWORD(v124) = 1;
          v125 = v102;
          LODWORD(v130) = 0;
          copy_argloc(&v130, &v124);
          v132 = a6;
          v23 = sub_1EC820((__int64 *)(a1 + 432), (__int64)&v130);
          cleanup_argloc(&v130);
          if ( v23 )
          {
            v50 = v117;
            v51 = 1;
            if ( v117 != -1 )
              v51 = v117;
            v52 = sub_1BFC70(v23, *(_QWORD *)(a1 + 1496), v115, v51, *(unsigned int *)(v23 + 88), nullptr, nullptr);
            if ( v52 && (v50 == -1 || v50 == v52) )
            {
              LODWORD(v23) = -991146299 * ((v23 - *(_QWORD *)(a1 + 432)) >> 3);
              goto LABEL_196;
            }
            if ( v115 == *(_QWORD *)(v23 + 8) )
            {
              if ( !under_debugger )
                sub_37EEE0(51728);
LABEL_353:
              BUG();
            }
            goto LABEL_125;
          }
          if ( v115 == v102 && v117 != -1 && v117 >= (int)v47 )
            goto LABEL_18;
          v88 = sub_1ECA40((__int64 *)(a1 + 432), (int *)&v124, v108, -1);
          if ( v88 < 0 )
            goto LABEL_18;
          if ( !v105 )
          {
            v92 = v117;
            if ( v117 == -1 )
              v92 = 1;
            v93 = *(_QWORD *)(a1 + 432) + 104LL * v88;
            if ( (unsigned int)sub_1BFC70(
                                 v93,
                                 *(_QWORD *)(a1 + 1496),
                                 v115,
                                 v92,
                                 *(unsigned int *)(v93 + 88),
                                 nullptr,
                                 nullptr) )
              goto LABEL_18;
            goto LABEL_125;
          }
        }
        else
        {
LABEL_221:
          if ( !(unsigned __int8)sub_229D20(a1, (__int64)v101, &v120, v45, v46, nullptr, 0.0) )
          {
            LODWORD(v23) = -1;
            goto LABEL_196;
          }
        }
        sub_22ECA0(a1, v101, v102, v108);
LABEL_125:
        v111 = -1;
      }
    }
LABEL_18:
    v133 = 1;
    v134 = 0;
    v132 = a6;
    v136 = 0;
    v138 = 0;
    v139 = 0;
    v141 = 0;
    v140 = a5;
    src = nullptr;
    v135 = 0;
    v137 = 0;
    v129 = 0;
    if ( v111 == -1 )
      break;
    v16 = *(_QWORD *)(a1 + 1256);
    LODWORD(v130) = 1;
    v131 = v102;
    if ( 96LL * *(_QWORD *)(a1 + 1264) )
    {
      while ( (unsigned int)sub_32C390(v16, &v130) )
      {
        v16 += 96;
        if ( v16 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
          goto LABEL_99;
      }
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 80);
        if ( v17 != -1 && v102 + v17 <= v115 )
          break;
      }
    }
LABEL_99:
    v18 = v117;
    if ( v117 > v108 )
      goto LABEL_27;
    v117 = v108;
    if ( !(_BYTE)v121 )
    {
      if ( v18 != -1 )
      {
LABEL_102:
        v43 = v18 + v115;
        v44 = v102;
        if ( (int)v102 + v108 >= v18 + (int)v115 )
        {
          if ( (_BYTE)v118 && !(unsigned int)verify_tinfo(v118) )
          {
            v109 = 0;
            v116 = 0;
            goto LABEL_259;
          }
          v107 = v18;
          v116 = 0;
          v115 = v102;
          tinfo_size = -1;
          goto LABEL_158;
        }
        v109 = 0;
        goto LABEL_227;
      }
      if ( !(_BYTE)v118 )
      {
        v116 = 0;
        v107 = -1;
        v56 = v105;
        v115 = v102;
        goto LABEL_138;
      }
      if ( !(unsigned int)verify_tinfo(v118) )
      {
        tinfo_size = get_tinfo_size(0, v118, 0);
        v107 = -1;
        v115 = v102;
        v116 = 0;
        goto LABEL_158;
      }
LABEL_290:
      v107 = -1;
      v116 = 0;
      v115 = v102;
      tinfo_size = -1;
      goto LABEL_158;
    }
    v116 = sub_1EB890((__int64)&v130, *(_QWORD *)(a1 + 1504), &v121, 0);
    if ( !v116 )
    {
      if ( v18 != -1 )
        goto LABEL_102;
      if ( !(_BYTE)v118 )
      {
        v56 = v105;
        v107 = -1;
        v115 = v102;
        goto LABEL_138;
      }
      if ( !(unsigned int)verify_tinfo(v118) )
      {
        tinfo_size = get_tinfo_size(0, v118, 0);
        v107 = -1;
        v115 = v102;
        goto LABEL_158;
      }
      goto LABEL_290;
    }
    if ( v105
      && !(unsigned __int8)sub_1EB370(
                             (__int64)&v130,
                             *(_QWORD *)(a1 + 1504),
                             &v121,
                             0xFFFFFFFF,
                             *(_DWORD *)(a1 + 72),
                             8) )
    {
      if ( v18 != -1 )
        goto LABEL_102;
      if ( !(_BYTE)v118 )
      {
        v116 = 0;
        tinfo_size = -1;
        v18 = v108;
        v107 = -1;
        v115 = v102;
        goto LABEL_139;
      }
      if ( !(unsigned int)verify_tinfo(v118) )
      {
        tinfo_size = get_tinfo_size(0, v118, 0);
        v107 = -1;
        v116 = 0;
        v115 = v102;
        goto LABEL_158;
      }
      goto LABEL_290;
    }
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(v121, 289);
    v78 = get_tinfo_property(tinfo_property, 2);
    if ( (v78 & 0xE) == 0 && (v78 & 0x30) != 0 )
    {
      v133 |= 0x4000u;
      v79 = get_tinfo_property(v121, 12);
      v80 = get_tinfo_size(0, tinfo_property, 0);
      scalar_bt = (unsigned __int8)get_scalar_bt(v80);
      copy_tinfo_t(&v121, &scalar_bt);
      clear_tinfo_t(&scalar_bt);
      if ( v79 != -1 )
      {
        LODWORD(v127) = 0;
        scalar_bt = 0;
        HIDWORD(v127) = v79;
        copy_tinfo_t(&scalar_bt, &v121);
        create_tinfo(&v121, 11, 11, &scalar_bt);
        clear_tinfo_t(&scalar_bt);
      }
    }
    sub_1EBC70((__int64)&v130, *(_QWORD *)(a1 + 1504), &v121, 0);
    v123 = 0;
    v81 = get_tinfo_property(*(_QWORD *)&v147[0], 289);
    v123 = v81;
    v82 = v81;
    if ( LOBYTE(v147[0]) <= 0x3Fu
      && (unsigned __int8)v81 <= 0x3Fu
      && (!(_BYTE)v81
       || (v81 & 0xE) == 0 && (v81 & 0x30) != 0
       || (scalar_bt = 0,
           scalar_bt = get_tinfo_property(v81, 9),
           v83 = get_tinfo_property(scalar_bt, 2),
           clear_tinfo_t(&scalar_bt),
           (v83 & 0x3F) == 0x30)
       || (v82 & 0xCF) == 9) )
    {
      clear_tinfo_t(&v123);
    }
    else
    {
      clear_tinfo_t(&v123);
      v133 = v133 & 0xFFFBFFFD | 2;
    }
    clear_tinfo_t(&tinfo_property);
    if ( v18 == -1 )
    {
      if ( !(_BYTE)v118 )
      {
        v18 = v139;
        tinfo_size = -1;
        v26 = 0;
        v107 = -1;
        v109 = v116;
        v116 = 0;
        v115 = v102;
        goto LABEL_75;
      }
      if ( (unsigned int)verify_tinfo(v118) )
      {
        v116 = 0;
        v107 = -1;
        v115 = v102;
        tinfo_size = -1;
      }
      else
      {
        tinfo_size = get_tinfo_size(0, v118, 0);
        v107 = -1;
        v115 = v102;
        v116 = 0;
      }
      goto LABEL_261;
    }
    v43 = v18 + v115;
    v44 = v102;
    if ( v18 + (int)v115 <= (int)v102 + v108 )
    {
      if ( !(_BYTE)v118 || (unsigned int)verify_tinfo(v118) )
      {
        v107 = v18;
        v116 = 0;
        v115 = v102;
        tinfo_size = -1;
        goto LABEL_261;
      }
      v89 = v116;
      v116 = 0;
      v109 = v89;
LABEL_259:
      tinfo_size = get_tinfo_size(0, v118, 0);
      v107 = v18;
      v115 = v102;
      goto LABEL_260;
    }
    v109 = v116;
LABEL_227:
    v96 = v44;
    tinfo_property4 = get_tinfo_property4(v120, 297, v111, 0, 0, 0);
    v107 = v18;
    v116 = 0;
    if ( (unsigned __int64)v146 > 1 )
      goto LABEL_82;
    if ( (get_aflags(tinfo_property4) & 0x2000000) != 0 )
    {
      v107 = v18;
      v116 = 0;
      goto LABEL_82;
    }
    v117 = v43 - v96;
    v68 = sub_22EB70((_QWORD *)a1, &v117, v102, &v121);
    if ( !v68 )
    {
      v107 = v18;
      v109 = 0;
      v116 = 0;
      goto LABEL_82;
    }
    v69 = v118;
    v116 = a8 != nullptr && v68 == 2;
    if ( v116 )
    {
      *a8 = 1;
      if ( (_BYTE)v69 && !(unsigned int)verify_tinfo(v69) )
      {
LABEL_328:
        tinfo_size = get_tinfo_size(0, v118, 0);
        v107 = v18;
        v115 = v102;
        v116 = 0;
        goto LABEL_158;
      }
      v107 = v18;
      v18 = -1;
      v116 = 0;
      v108 = v117;
      v56 = v105;
      v115 = v102;
    }
    else if ( (_BYTE)v118 )
    {
      if ( !(unsigned int)verify_tinfo(v118) )
        goto LABEL_328;
      v107 = v18;
      v18 = -1;
      v108 = v117;
      v56 = v105;
      v115 = v102;
    }
    else
    {
      v107 = v18;
      v18 = -1;
      v115 = v102;
      v108 = v117;
      v56 = v105;
    }
LABEL_138:
    tinfo_size = v18;
    v18 = v108;
    if ( !v56 )
      goto LABEL_71;
LABEL_139:
    if ( v108 == tinfo_size
      && (unsigned __int8)sub_1EB370((__int64)&v130, *(_QWORD *)(a1 + 1504), &v118, 0xFFFFFFFF, *(_DWORD *)(a1 + 72), 8) )
    {
      if ( v139 != tinfo_size )
      {
        sub_1EBA00(&v130, *(_QWORD **)(a1 + 1504), tinfo_size, 0);
LABEL_143:
        v57 = get_tinfo_property(v118, 2);
        v109 = 0;
        v18 = v139;
        v26 = v116 ^ ((v57 & 0xF) == 9);
        goto LABEL_75;
      }
      v18 = tinfo_size;
      goto LABEL_215;
    }
LABEL_33:
    if ( sub_119040(v18) )
      goto LABEL_34;
    if ( v18 <= 0 )
    {
      v117 = v99;
      v18 = v99;
    }
    else
    {
      if ( !a5 && *(_QWORD *)(a1 + 144) <= v115 && v98 )
      {
LABEL_34:
        v18 = v117;
        goto LABEL_35;
      }
      v117 = (v99 + v18 - 1) & -v99;
      v18 = v117;
    }
LABEL_35:
    if ( v115 + v107 >= v131 + v18 )
    {
      v26 = sub_119040(v18);
      if ( !v26 )
      {
        clear_tinfo_t(&v138);
        if ( v18 == v139 )
        {
          v109 = 0;
          v116 = 0;
          goto LABEL_75;
        }
        goto LABEL_170;
      }
      if ( v139 != v18 )
      {
LABEL_170:
        v25 = 0;
LABEL_73:
        sub_1EBA00(&v130, *(_QWORD **)(a1 + 1504), v18, v25);
        if ( v18 != tinfo_size )
        {
          v109 = 0;
          v18 = v139;
          v26 = 1;
          goto LABEL_75;
        }
        goto LABEL_143;
      }
LABEL_215:
      v109 = 0;
      v26 = 0;
      v116 = 0;
      goto LABEL_75;
    }
    if ( src )
    {
      *(_QWORD *)&v129 = 0;
      qfree(src);
    }
    clear_tinfo_t(&v138);
    if ( v136 )
    {
      *(_QWORD *)&v137 = 0;
      qfree(v136);
    }
    if ( v134 )
    {
      *(_QWORD *)&v135 = 0;
      qfree(v134);
    }
    cleanup_argloc(&v130);
    clear_tinfo_t(&v121);
    clear_tinfo_t(v147);
    if ( v145 )
    {
      *(_QWORD *)&v146 = 0;
      qfree(v145);
    }
    if ( v143 )
    {
      *(_QWORD *)&v144 = 0;
      qfree(v143);
    }
    v14 = 0;
    clear_tinfo_t(&v120);
    cleanup_argloc(&v124);
    v107 = v18;
    v124 = 0;
    v125 = 0;
    v116 = 0;
    v105 = 1;
    if ( (a7 & 0x40) == 0 )
    {
LABEL_47:
      scalar_bt = v115;
      LODWORD(v123) = v107;
      sub_224890((int *)&v123, &scalar_bt, a1, &v118);
      if ( (int)v123 > v107
        && !(_BYTE)v118
        && *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL)
        && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) > v107
        && sub_119100(v107)
        && (sub_327E20(&src, *(_QWORD *)(a1 + 1504), (unsigned int)v107),
            LOBYTE(v131) = 5,
            v130 = v115,
            v65 = sub_224250(a1, (__int64)&v130, (__int64 *)&src, v107),
            clear_tinfo_t(&src),
            v65) )
      {
        v116 = v65;
        scalar_bt = v115;
        v20 = v115;
        LODWORD(v123) = v107;
      }
      else
      {
        v20 = scalar_bt;
        if ( scalar_bt != v115 )
        {
          v116 = 0;
          v97 = 1;
        }
      }
      v125 = v20;
      LODWORD(v124) = 1;
      if ( v107 == -1 )
      {
        LODWORD(v123) = 1;
        v21 = 1;
      }
      else
      {
        v21 = v123;
        v117 = v123;
      }
      if ( !v98 && !(v20 % v99) )
      {
        v21 = (v99 + v21 - 1) & -v99;
        LODWORD(v123) = v21;
      }
      v22 = sub_2251E0(a1, 0, (__int64)&v124, v21);
      v23 = v22;
      if ( v22 == -1 )
      {
        v105 = 1;
        v14 = 0;
        goto LABEL_67;
      }
      if ( (a7 & 0x100) != 0 )
      {
        if ( !under_debugger )
          sub_37EEE0(52273);
        goto LABEL_353;
      }
      v24 = *(_QWORD *)(a1 + 432) + 104LL * v22;
      if ( (a7 & 4) == 0 )
        sub_22D7B0(a1, v22, a2, v107, nullptr, 0);
      v105 = sub_2254A0((_DWORD *)v24, a1, a2, v107);
      if ( v105 )
        goto LABEL_201;
      if ( *(_DWORD *)(v24 + 92) )
      {
        if ( *(_DWORD *)v24 == 1 && *(_QWORD *)(v24 + 8) != v20 )
        {
          v76 = sub_2251E0(a1, (int)v23 + 1, (__int64)&v124, 1);
          v77 = v76;
          if ( v76 != -1 )
          {
            if ( (unsigned __int8)sub_2254A0((_DWORD *)(*(_QWORD *)(a1 + 432) + 104LL * v76), a1, a2, v107) )
            {
              LODWORD(v23) = v77;
              goto LABEL_201;
            }
            v23 = v77;
          }
        }
      }
      if ( !a5 )
      {
        if ( a8 )
        {
          if ( !*(_BYTE *)(a1 + 320) && (int)v23 < *(_DWORD *)(a1 + 792) && (*(_BYTE *)(a1 + 2) & 4) == 0 )
          {
            v90 = *(_QWORD *)(a1 + 432) + 104LL * (int)v23;
            v91 = *(_DWORD *)(v90 + 24);
            if ( (v91 & 0x9040060) == 0 && *(_QWORD *)(v90 + 64) <= 1u && (v91 & 0x8000) == 0 )
            {
              sub_1F1680(a1, v23);
              *a8 = 1;
              LODWORD(v23) = -1;
            }
          }
        }
        goto LABEL_201;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v23 + 92) )
        v105 = 1;
      else
        v20 = a2;
      v14 = 1;
LABEL_67:
      if ( *(_BYTE *)(a1 + 320) )
      {
        v105 = 0;
        v20 = a2;
        v117 = v107;
      }
      v115 = v20;
    }
  }
  v18 = v117;
LABEL_27:
  LODWORD(v130) = 1;
  v131 = v115;
  if ( v18 == -1 )
  {
    if ( !v98
      || (v127 = v115 & -v99,
          LODWORD(scalar_bt) = 1,
          v59 = sub_2251E0(a1, 0, (__int64)&scalar_bt, v99),
          cleanup_argloc(&scalar_bt),
          v59 == -1) )
    {
      v108 = v99 + (v115 & -v99) - v115;
    }
    else
    {
      v108 = 1;
    }
    v117 = v108;
    if ( !(_BYTE)v118 || (unsigned int)verify_tinfo(v118) )
    {
      v97 = 1;
      v56 = v105 & (v116 ^ 1);
      goto LABEL_138;
    }
    tinfo_size = get_tinfo_size(0, v118, 0);
    v97 = 1;
    goto LABEL_158;
  }
  if ( v94 != 128 )
  {
LABEL_29:
    v19 = v118;
    if ( !(_BYTE)v118 )
      goto LABEL_30;
    goto LABEL_156;
  }
  v58 = sub_22CD70(a1, v115, v18, nullptr, 3, (__int64 *)&src);
  v109 = a8 != nullptr && v58 == 2;
  if ( v109 )
  {
    v19 = v118;
    *a8 = 1;
    if ( !(_BYTE)v19 )
    {
LABEL_30:
      if ( v116 == 1 || !v105 )
      {
        tinfo_size = -1;
LABEL_71:
        if ( v139 == v18 )
        {
          v109 = 0;
          v26 = 0;
          goto LABEL_75;
        }
        v25 = v116;
        goto LABEL_73;
      }
      tinfo_size = -1;
      v116 = 0;
      goto LABEL_33;
    }
LABEL_156:
    if ( (unsigned int)verify_tinfo(v19) )
      goto LABEL_30;
    tinfo_size = get_tinfo_size(0, v118, 0);
LABEL_158:
    v18 = tinfo_size;
    v108 = v117;
    v56 = v105 & (v116 ^ 1);
    goto LABEL_138;
  }
  if ( v58 != -1 )
    goto LABEL_29;
  do
  {
LABEL_82:
    if ( (a7 & 0x100) == 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 604LL) & 0x10) == 0 )
      {
        LODWORD(v23) = -1;
        goto LABEL_189;
      }
      v32 = *(_DWORD **)(a1 + 1504);
      scalar_bt = 0;
      v127 = 0;
      sub_1EBD90(v32, (__int64 *)(a1 + 496), (__int64)&v130, v117, &scalar_bt, 0);
      cleanup_argloc(&scalar_bt);
      if ( (unsigned __int64)v129 > 1 )
      {
        v36 = *(_QWORD *)(a1 + 504);
        if ( v36 )
        {
          v34 = v36 + 11;
          v37 = v36 + 12;
          --v36;
        }
        else
        {
          v37 = 13;
          v34 = 12;
        }
        v38 = *(_QWORD *)(a1 + 496);
        if ( *(_QWORD *)(a1 + 512) < v37 )
        {
          v103 = v34;
          v113 = v37;
          v64 = qvector_reserve(a1 + 496, v38, v37, 1);
          *(_QWORD *)(a1 + 496) = v64;
          v34 = v103;
          v38 = v64;
          v37 = v113;
        }
        *(_QWORD *)(a1 + 504) = v37;
        *(_BYTE *)(v38 + v34) = 0;
        qmemcpy((void *)(*(_QWORD *)(a1 + 496) + v36), " and stkvar ", 12);
        v39 = v129;
        if ( (_QWORD)v129 )
        {
          v34 = v129 - 1;
          if ( (_QWORD)v129 != 1 )
          {
            v40 = *(_QWORD *)(a1 + 504);
            v41 = v129 - 1;
            if ( v40 )
            {
              --v40;
              v41 = v34 + v40;
              v39 = v129 + v40;
            }
            v42 = *(_QWORD *)(a1 + 496);
            if ( *(_QWORD *)(a1 + 512) < v39 )
            {
              v95 = v129 - 1;
              v104 = v41;
              v114 = v39;
              v66 = qvector_reserve(a1 + 496, v42, v39, 1);
              *(_QWORD *)(a1 + 496) = v66;
              v34 = v95;
              v42 = v66;
              v41 = v104;
              v39 = v114;
            }
            *(_QWORD *)(a1 + 504) = v39;
            *(_BYTE *)(v42 + v41) = 0;
            memcpy((void *)(v40 + *(_QWORD *)(a1 + 496)), src, v34);
          }
        }
      }
      sub_1ECC30(a1, -1, 20, v33, v34, v35);
    }
    v133 |= 0x400u;
    if ( (_BYTE)v118 && !(unsigned int)verify_tinfo(v118) )
    {
      v18 = v107;
      v102 = v115;
      goto LABEL_259;
    }
    tinfo_size = -1;
LABEL_260:
    if ( !v109 )
      goto LABEL_158;
LABEL_261:
    v109 = 1;
    v18 = v139;
    v26 = 0;
LABEL_75:
    if ( !v18 )
    {
      if ( !under_debugger )
        sub_37EEE0(50325);
      goto LABEL_353;
    }
    v27 = v133;
    if ( *(int *)(a1 + 116) <= 0 || (v133 & 0x400) != 0 )
      goto LABEL_176;
    v28 = v131;
    if ( (get_tinfo_property(v138, 2) & 0x3F) == 0x29 && (get_tinfo_property(v121, 2) & 0x3F) == 0x39 )
      v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 8LL) + 120LL);
    else
      v29 = v139;
    v30 = *(_QWORD *)(a1 + 136);
    v31 = v28 + v29;
  }
  while ( v30 > (__int64)v28 && v30 < v31 );
  if ( !*(_DWORD *)(a1 + 116) )
    goto LABEL_175;
  if ( v28 < v30 )
    goto LABEL_175;
  v70 = v30 + *(int *)(a1 + 116);
  if ( v70 - 1 < v28 )
    goto LABEL_175;
  if ( v30 > (__int64)v28 )
    v30 = v28;
  if ( v70 < v31 )
    LODWORD(v70) = v28 + v29;
  if ( v29 == (_DWORD)v70 - (_DWORD)v30 )
  {
LABEL_175:
    v18 = v139;
    v27 = v133;
LABEL_176:
    v60 = (16 * v97) | v27;
    BYTE1(v60) &= 0x7Eu;
    v133 = v60;
    if ( v18 != tinfo_size )
      goto LABEL_177;
    if ( v26 )
      goto LABEL_243;
LABEL_217:
    copy_tinfo_t(&v138, &v118);
    v18 = v139;
    goto LABEL_177;
  }
  v71 = *(_QWORD **)(a1 + 1504);
  v131 = v30;
  LODWORD(v130) = 1;
  sub_1EBA00(&v130, v71, v70 - v30, 0);
  v72 = v133;
  v18 = v139;
  BYTE1(v72) = BYTE1(v133) & 0x7E;
  if ( v97 )
  {
    v133 = v72 | 0x10;
    if ( v139 != tinfo_size )
      goto LABEL_177;
LABEL_243:
    v123 = 0;
    v73 = get_tinfo_property(v138, 289);
    v123 = v73;
    if ( (_BYTE)v73 && ((v73 & 0xE) != 0 || (v73 & 0x30) == 0) )
    {
      scalar_bt = 0;
      scalar_bt = get_tinfo_property(v73, 9);
      v74 = get_tinfo_property(scalar_bt, 2);
      clear_tinfo_t(&scalar_bt);
      if ( (v74 & 0x3F) != 0x30 && (a7 & 0x20) == 0 )
      {
        clear_tinfo_t(&v123);
        v18 = v139;
        goto LABEL_177;
      }
    }
    clear_tinfo_t(&v123);
    goto LABEL_217;
  }
  v133 = v72;
  if ( v139 == tinfo_size )
    goto LABEL_243;
LABEL_177:
  if ( v105 )
  {
    v84 = v131;
    if ( v84 != sub_2240B0(a1, v131, &v138, v18) )
    {
      if ( v84 % v99 )
      {
        if ( !under_debugger )
          sub_37EEE0(51363);
        goto LABEL_353;
      }
      v85 = *(_QWORD *)(a1 + 1504);
      v139 = (v99 + v139 - 1) & -v99;
      v86 = v139;
      sub_327F40(&v123, v85, (unsigned int)v99);
      LODWORD(v127) = 0;
      HIDWORD(v127) = v86 / v99;
      scalar_bt = 0;
      copy_tinfo_t(&scalar_bt, &v123);
      create_tinfo(&v138, 11, 11, &scalar_bt);
      clear_tinfo_t(&scalar_bt);
      clear_tinfo_t(&v123);
    }
    v18 = v139;
  }
  if ( (a7 & 2) != 0 )
    v133 |= 0x200u;
  if ( (a7 & 0x40) != 0 )
    v133 |= 0x10000u;
  if ( a5 && ((a7 & 4) != 0 || !v105) )
  {
    v61 = v133;
    BYTE1(v61) = BYTE1(v133) & 0x7E;
    v133 = v61 | 0x100000;
  }
  if ( (_DWORD)v130 == 1 )
    v62 = v131;
  else
    v62 = -1;
  sub_22EF80(a1, v62, v18);
  LODWORD(v23) = sub_1F28E0(a1, (__int64)&v130, (a7 & 0x200) != 0);
LABEL_189:
  if ( src )
  {
    *(_QWORD *)&v129 = 0;
    qfree(src);
  }
  clear_tinfo_t(&v138);
  if ( v136 )
  {
    *(_QWORD *)&v137 = 0;
    qfree(v136);
  }
  if ( v134 )
  {
    *(_QWORD *)&v135 = 0;
    qfree(v134);
  }
  cleanup_argloc(&v130);
LABEL_196:
  clear_tinfo_t(&v121);
  clear_tinfo_t(v147);
  if ( v145 )
  {
    *(_QWORD *)&v146 = 0;
    qfree(v145);
  }
  if ( v143 )
  {
    *(_QWORD *)&v144 = 0;
    qfree(v143);
  }
  clear_tinfo_t(&v120);
LABEL_201:
  cleanup_argloc(&v124);
  clear_tinfo_t(&v119);
  clear_tinfo_t(&v118);
  return (unsigned int)v23;
}
