void __fastcall sub_16F09D0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, double a7)
{
  _WORD *v8; // r12
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r12
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // r15
  __int16 v24; // ax
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned __int64 v27; // rax
  __int16 v28; // ax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r13
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 k; // rdx
  char v47; // al
  size_t v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 *v52; // r9
  __m128i v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // r13d
  __int64 v57; // r14
  unsigned int v58; // r13d
  unsigned int v59; // eax
  void **v60; // rsi
  __int64 v61; // r14
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  unsigned int v67; // eax
  size_t v68; // r14
  int v69; // eax
  _WORD *v70; // rsi
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned __int64 v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rdx
  void *v77; // rdi
  __int64 v78; // r13
  int i; // r12d
  __int32 v80; // edx
  int j; // r12d
  __int32 v82; // edx
  unsigned int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 **v91; // rax
  __int64 *v92; // rdx
  unsigned __int64 v93; // rax
  unsigned __int64 *v94; // rcx
  __int64 (__fastcall **v95)(); // rax
  __int64 v96; // rsi
  __int64 *v97; // rax
  __int64 *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 **v106; // rax
  __int64 *v107; // rdx
  unsigned __int64 v108; // rax
  unsigned __int64 *v109; // rcx
  unsigned __int64 v110; // r12
  __int64 v111; // rdx
  __int64 v112; // rcx
  _QWORD *v113; // r13
  __int64 v114; // rcx
  __int64 v115; // rdi
  __int64 v116; // rsi
  __int64 v117; // rdx
  _QWORD *v118; // rax
  __int64 v119; // rax
  __int64 v120; // r13
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // r13
  __int64 *v126; // rax
  __int64 v127; // rcx
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rax
  unsigned __int64 v131; // r8
  __int64 **v132; // rax
  __int64 *v133; // rdi
  __int64 *v134; // rax
  unsigned int v135; // eax
  size_t v136; // rbp
  int v137; // eax
  int v138; // eax
  __int64 *v139; // rax
  __int64 v140; // rax
  __int64 v141; // rcx
  int *v142; // r9
  int *v143; // rcx
  int v144; // eax
  int *v145; // rdx
  __int64 *v146; // rax
  __int64 v147; // rdx
  __int64 v148; // [rsp-8h] [rbp-220h]
  char v149; // [rsp+0h] [rbp-218h]
  __int64 v150; // [rsp+0h] [rbp-218h]
  __int64 v151; // [rsp+10h] [rbp-208h]
  char *v152; // [rsp+18h] [rbp-200h]
  __int64 v153; // [rsp+18h] [rbp-200h]
  unsigned __int64 v154; // [rsp+18h] [rbp-200h]
  char v155; // [rsp+2Bh] [rbp-1EDh]
  unsigned __int64 v156; // [rsp+2Ch] [rbp-1ECh] BYREF
  unsigned __int8 v157[4]; // [rsp+34h] [rbp-1E4h] BYREF
  _WORD *v158; // [rsp+38h] [rbp-1E0h] BYREF
  bool v159; // [rsp+47h] [rbp-1D1h] BYREF
  __int64 v160; // [rsp+48h] [rbp-1D0h] BYREF
  void *v161[2]; // [rsp+50h] [rbp-1C8h] BYREF
  _BYTE v162[16]; // [rsp+60h] [rbp-1B8h] BYREF
  _QWORD v163[6]; // [rsp+70h] [rbp-1A8h] BYREF
  void *ptr[2]; // [rsp+A0h] [rbp-178h] BYREF
  _BYTE v165[32]; // [rsp+B0h] [rbp-168h] BYREF
  __int64 (__fastcall **v166)(); // [rsp+D0h] [rbp-148h] BYREF
  int v167; // [rsp+D8h] [rbp-140h]
  __int128 v168; // [rsp+E0h] [rbp-138h]
  __int64 v169; // [rsp+F0h] [rbp-128h]
  char v170; // [rsp+F8h] [rbp-120h]
  int v171; // [rsp+FCh] [rbp-11Ch]
  void **v172; // [rsp+100h] [rbp-118h]
  unsigned __int64 v173; // [rsp+110h] [rbp-108h] BYREF
  unsigned __int64 v174; // [rsp+118h] [rbp-100h]
  void *v175; // [rsp+128h] [rbp-F0h]
  _BYTE v176[24]; // [rsp+138h] [rbp-E0h] BYREF
  __m128i v177; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v178; // [rsp+160h] [rbp-B8h]
  unsigned __int8 *v179; // [rsp+170h] [rbp-A8h] BYREF
  char v180; // [rsp+1C8h] [rbp-50h]
  unsigned int v181; // [rsp+1D0h] [rbp-48h]
  char v182; // [rsp+1D4h] [rbp-44h]

  v158 = (_WORD *)a2;
  v156 = a5;
  v157[0] = a4;
  if ( !a2 )
    return;
  v8 = (_WORD *)a2;
  v9 = a3;
  if ( (int)sub_C00A40(a2, a2, a3, a4, a5) < 0 )
  {
    v78 = *(_QWORD *)(a1 + 272);
    for ( i = sub_C00A40(a2, a2, v10, v11, v12); i < 0; i = sub_10205A0(v78, i) )
    {
      while ( 1 )
      {
        if ( sub_1020410(v78, i) )
          return;
        a2 = (unsigned int)i;
        if ( (unsigned __int8)sub_1020490(v78, i, nullptr) )
          break;
        v177.m128i_i64[0] = sub_101FC50(v78, i);
        i = v177.m128i_i32[0];
        v177.m128i_i32[2] = v80;
        if ( v177.m128i_i32[0] >= 0 )
          goto LABEL_62;
      }
    }
LABEL_62:
    for ( j = v156; j < 0; j = sub_10205A0(v78, j) )
    {
      while ( 1 )
      {
        if ( sub_1020410(v78, j) )
          return;
        a2 = (unsigned int)j;
        if ( (unsigned __int8)sub_1020490(v78, j, nullptr) )
          break;
        v177.m128i_i64[0] = sub_101FC50(v78, j);
        j = v177.m128i_i32[0];
        v177.m128i_i32[2] = v82;
        if ( v177.m128i_i32[0] >= 0 )
          goto LABEL_66;
      }
    }
LABEL_66:
    v8 = v158;
  }
  v16 = sub_BFB840((__int64)v8);
  v158 = (_WORD *)v16;
  v17 = *(_WORD *)v16;
  v159 = v9 != 0;
  if ( (v17 & 0x1FF) == 0x62 )
  {
    v83 = sub_C00A40(v16, a2, v13, v14, v15);
    sub_168B9F0((__int64)&v177, (__int64 *)(a1 + 8), v83, (v9 != 0) + 7432, 0);
    v173 = sub_EEC8C0((unsigned __int64)v158, a1 + 8, a6);
    v84 = sub_1587DB0((__int64)&v177, (__int64 *)&v173);
    v85 = sub_15884C0(v84, (__int64 *)&v156);
    sub_15890D0(v85, v157);
    sub_15F7200(&v177);
    return;
  }
  v18 = sub_BFB9F0(v16);
  if ( (*(_WORD *)v18 & 0x1FF) != 4 )
  {
    v149 = 0;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(v18 + 2) >> 3 != 4 )
    return;
  v158 = *(_WORD **)(v18 + 16);
  sub_168B9B0((__int64)&v177, a1 + 8, (v9 != 0) + 6489);
  LOBYTE(v174) = 1;
  v173 = sub_EEC8C0((unsigned __int64)v158, a1 + 8, a6);
  sub_AEC610(v177.m128i_i64, (__int64 *)&v173);
  LOBYTE(v174) = 1;
  v173 = v156;
  sub_AEC610(v177.m128i_i64, (__int64 *)&v173);
  sub_16B71B0((unsigned __int8 **)&v177, v157[0]);
  sub_1582CA0((__int64)&v173, &v177);
  v19 = v177.m128i_i64[0];
  if ( v177.m128i_i64[0] && v177.m128i_i64[1] )
    sub_1580C40(v177.m128i_u64[1], v177.m128i_u64[0]);
  v166 = nullptr;
  v23 = sub_BFBAE0((unsigned __int64)v158);
  v24 = *(_WORD *)v23 & 0x1FF;
  if ( v24 == 71 )
  {
    v25 = *(_QWORD *)(v23 + 16);
  }
  else
  {
    if ( v24 != 46 )
    {
      if ( ((v24 + 423) & 0x1FFu) <= 4 )
      {
        v19 = *(_QWORD *)(a1 + 248);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BFB6C0(v23, v19, v20, v21)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 43) <= 1u )
        {
          v95 = (__int64 (__fastcall **)())sub_BFBC70(*(_QWORD *)(v23 + 32));
          if ( v95 )
          {
            v20 = 0;
            if ( (*((_BYTE *)v95 + 28) & 0x7Fu) - 34 >= 6 )
              v95 = nullptr;
          }
          v166 = v95;
          goto LABEL_12;
        }
      }
      goto LABEL_74;
    }
    v25 = *(_QWORD *)(v23 + 24);
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 48)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 <= 1 )
  {
LABEL_12:
    v26 = sub_C00A40(v23, v19, v20, v21, v22);
    sub_168CDE0((__int64)&v177, (__int64 *)(a1 + 8), v26, (__int64)&v173, 0);
    sub_15F7200(&v177);
    if ( v166 )
    {
      sub_168B9F0((__int64)&v177, (__int64 *)(a1 + 8), *((_DWORD *)v166 + 6), 0x18C6u, 0);
      sub_16060E0((__int64)&v177, (__int64 *)&v166);
      sub_15F7200(&v177);
    }
    if ( v173 )
    {
      if ( v174 )
        sub_1580C40(v174, v173);
    }
    return;
  }
LABEL_74:
  a2 = v173;
  if ( v173 && v174 )
    sub_1580C40(v174, v173);
  v16 = (__int64)v158;
  v149 = 1;
LABEL_19:
  v163[1] = a1;
  v163[0] = &v158;
  v163[2] = &v159;
  v163[3] = &v156;
  v163[4] = v157;
  v27 = sub_BFBAE0(v16);
  if ( ((*(_WORD *)v27 + 423) & 0x1FFu) <= 4 )
  {
    v86 = sub_BFBC70(*(_QWORD *)(v27 + 32));
    if ( v86 )
    {
      v90 = (*(_BYTE *)(v86 + 28) & 0x7Fu) - 34;
      if ( (unsigned int)v90 <= 5 && (*(_BYTE *)(v86 + 29) & 1) != 0 )
      {
        v91 = (__int64 **)sub_B8C3D0(v86, a2, v90, v87, v88, v89);
        v92 = *v91;
        v93 = (unsigned __int64)&(*v91)[*((unsigned int *)v91 + 2)];
        if ( (unsigned __int64)v92 >= v93 )
        {
          if ( v92 != (__int64 *)v93 )
          {
            if ( *(_WORD *)(*(_QWORD *)v93 + 36LL) == 351 )
            {
LABEL_100:
              v96 = *v92;
              if ( *(_WORD *)(*v92 + 36) != 351 )
              {
                v97 = v92 + 1;
                do
                  v96 = *v97++;
                while ( *(_WORD *)(v96 + 36) != 351 );
              }
              goto LABEL_103;
            }
            v98 = (__int64 *)(v93 + 8);
            while ( v92 != v98 )
            {
              v99 = *v98++;
              if ( *(_WORD *)(v99 + 36) == 351 )
                goto LABEL_100;
            }
          }
        }
        else
        {
          v94 = (unsigned __int64 *)v92;
          while ( 1 )
          {
            a2 = *v94;
            if ( *(_WORD *)(*v94 + 36) == 351 )
              break;
            if ( (unsigned __int64 *)v93 == ++v94 )
              goto LABEL_85;
          }
          if ( (unsigned __int64 *)v93 != v94 )
            goto LABEL_100;
        }
      }
    }
LABEL_85:
    v16 = (__int64)v158;
  }
  v28 = *(_WORD *)v16 & 0x1FF;
  if ( *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596) && v28 == 92 )
  {
    v29 = sub_C94710(v16, a2);
    v33 = v29;
    if ( v29 )
    {
      v34 = *(_QWORD *)(v29 + 128);
      v16 = (__int64)v158;
      if ( v34 && (*(_BYTE *)(v34 + 10) & 0x20) != 0 )
      {
        v35 = sub_C00A40((unsigned __int64)v158, a2, v30, v31, v32);
        sub_168B9F0((__int64)&v177, (__int64 *)(a1 + 8), v35, 0x1B66u, 0);
        LODWORD(v166) = 3;
        v36 = sub_1587D10((__int64)&v177, (int *)&v166);
        v173 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        v37 = sub_1587DB0(v36, (__int64 *)&v173);
        v38 = sub_15884C0(v37, (__int64 *)&v156);
        sub_15890D0(v38, v157);
        sub_15F7200(&v177);
        return;
      }
      v28 = *v158 & 0x1FF;
    }
    else
    {
      v16 = (__int64)v158;
      v28 = *v158 & 0x1FF;
    }
  }
  if ( v28 == 71 )
  {
    v39 = *(_QWORD *)(v16 + 16);
  }
  else
  {
    if ( v28 != 46 )
      return;
    v39 = *(_QWORD *)(v16 + 24);
  }
  if ( v39 )
  {
    v155 = sub_B79700(v39);
    if ( !v155 )
    {
      if ( (*(_BYTE *)(v39 + 28) & 0x7F) != 0x2B )
        goto LABEL_39;
      v43 = *(unsigned int *)(a1 + 40);
      if ( !(_DWORD)v43 )
        goto LABEL_39;
      v44 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v43 - 8);
      if ( !v44 )
        goto LABEL_39;
      if ( *(_BYTE *)(v44 + 644) )
      {
        v45 = *(_QWORD **)(v44 + 624);
        for ( k = (__int64)&v45[*(unsigned int *)(v44 + 636)]; (_QWORD *)k != v45; ++v45 )
        {
          if ( v39 == *v45 )
            goto LABEL_39;
        }
      }
      else
      {
        a2 = v39;
        if ( sub_2236570(v44 + 624, v39) )
          goto LABEL_39;
      }
      if ( (*(_BYTE *)(v39 + 29) & 1) == 0 )
        goto LABEL_119;
      v106 = (__int64 **)sub_B8C3D0(v39, a2, k, v40, v41, v42);
      v107 = *v106;
      v108 = (unsigned __int64)&(*v106)[*((unsigned int *)v106 + 2)];
      if ( (unsigned __int64)v107 >= v108 )
      {
        if ( v107 == (__int64 *)v108 )
          goto LABEL_119;
        while ( *(_WORD *)(*(_QWORD *)v108 + 36LL) != 100 )
        {
          v108 += 8LL;
          if ( v107 == (__int64 *)v108 )
            goto LABEL_119;
        }
      }
      else
      {
        v109 = (unsigned __int64 *)v107;
        while ( 1 )
        {
          a2 = *v109;
          if ( *(_WORD *)(*v109 + 36) == 100 )
            break;
          if ( (unsigned __int64 *)v108 == ++v109 )
            goto LABEL_119;
        }
        if ( (unsigned __int64 *)v108 == v109 )
        {
LABEL_119:
          v110 = *(_QWORD *)(v39 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v39 + 16) & 4) != 0 )
            v110 = *(_QWORD *)v110;
          if ( (*(_BYTE *)(v110 + 8) & 0x7Fu) - 34 > 5 || v110 == 72 )
            goto LABEL_39;
          v151 = v110 - 72;
          if ( (unsigned int)sub_B778D0(v110 - 72) == 1 )
            return;
          v113 = *(_QWORD **)(v110 + 48);
          v115 = (unsigned int)sub_B76070(v151, a2, v111, v112);
          v116 = (v115 * 8) >> 5;
          if ( (v115 * 8) >> 5 )
          {
            if ( v39 == *v113 )
            {
              v117 = (__int64)v113;
              goto LABEL_139;
            }
            v117 = (__int64)(v113 + 1);
            if ( v39 == v113[1] )
              goto LABEL_139;
            v117 = (__int64)(v113 + 2);
            if ( v39 == v113[2] )
              goto LABEL_139;
            v118 = v113;
            v117 = (__int64)(v113 + 3);
            v116 = (__int64)&v113[4 * v116];
            if ( v39 == v113[3] )
              goto LABEL_139;
            while ( 1 )
            {
              v117 = (__int64)(v118 + 4);
              if ( (_QWORD *)v116 == v118 + 4 )
                goto LABEL_136;
              if ( v39 == v118[4] )
                goto LABEL_139;
              if ( v39 == v118[5] )
              {
                v117 = (__int64)(v118 + 5);
                goto LABEL_139;
              }
              if ( v39 == v118[6] )
              {
                v117 = (__int64)(v118 + 6);
                goto LABEL_139;
              }
              if ( v39 == v118[7] )
                break;
              v118 += 4;
            }
            v117 = (__int64)(v118 + 7);
LABEL_139:
            v120 = *(_QWORD *)(v110 + 48);
            v153 = v117;
            sub_B76070(v151, v116, v117, v114);
            v124 = v153 - v120;
            v125 = (v153 - v120) >> 3;
            if ( (*(_BYTE *)(v110 - 43) & 1) == 0 )
              goto LABEL_39;
            v126 = sub_B8C3D0(v151, v116, v124, v121, v122, v123);
            v129 = *((unsigned int *)v126 + 2);
            v130 = *v126;
            v131 = v130 + 8 * v129;
            if ( (*(_BYTE *)(v110 - 43) & 1) != 0 )
            {
              v154 = v130 + 8 * v129;
              v132 = (__int64 **)sub_B8C3D0(v151, v116, v129, v127, v131, v128);
              v131 = v154;
              v133 = *v132;
            }
            else
            {
              v133 = nullptr;
            }
            while ( 1 )
            {
              if ( (unsigned __int64)v133 >= v131 )
              {
                if ( v133 == (__int64 *)v131 )
                  goto LABEL_39;
                if ( *(_WORD *)(*(_QWORD *)v131 + 36LL) != 100 )
                {
                  v146 = (__int64 *)(v131 + 8);
                  while ( v133 != v146 )
                  {
                    v147 = *v146++;
                    if ( *(_WORD *)(v147 + 36) == 100 )
                      goto LABEL_158;
                  }
LABEL_39:
                  v47 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                         + 8LL)
                                             & 0xFFFFFFFFFFFFFFF0LL)
                                 + 16LL);
                  if ( v47 != 2 )
                  {
                    if ( (unsigned __int8)(v47 - 25) <= 1u )
                    {
                      if ( !v149 )
                      {
                        v155 = 1;
                        goto LABEL_43;
                      }
                      return;
                    }
                    if ( !v149 && (unsigned __int8)(v47 - 3) > 3u )
                      return;
                  }
LABEL_43:
                  v161[1] = nullptr;
                  v161[0] = v162;
                  v168 = 0;
                  v166 = &off_2BEBE68;
                  v172 = v161;
                  v162[0] = 0;
                  v167 = 0;
                  v170 = 0;
                  v171 = 1;
                  v169 = 0;
                  sub_A1F700(&v166);
                  v152 = (char *)v158;
                  v48 = j__strlen("\n");
                  v53.m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v49, v50, v51, v52);
                  v177 = v53;
                  sub_F07C00(v152, (__int64)&v166, 0, &v177, 0, 0, "\n", v48);
                  v56 = -!v159;
                  v57 = 0;
                  LOBYTE(v56) = v56 & 0x68;
                  v58 = v56 + 7166;
                  if ( !v149 )
                    v57 = (v155 == 0) + 1LL;
                  v59 = sub_C00A40((unsigned __int64)v158, (__int64)&v166, v148, v54, v55);
                  sub_168B9F0((__int64)&v177, (__int64 *)(a1 + 8), v59, v58, 0);
                  if ( v180 )
                  {
                    sub_16B71B0(&v179, v57);
                  }
                  else if ( v182 )
                  {
                    v100 = sub_168B9E0(&v177);
                    v104 = v178;
                    if ( v178 )
                    {
                      v150 = v100;
                      v104 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v178 + 32LL))(v178);
                      v100 = v150;
                    }
                    v173 = v104;
                    v105 = sub_1587BC0(v100, (__int64 *)&v173, v100, v101, v102, v103);
                    sub_16B71B0((unsigned __int8 **)(*v105 + 32LL * v181 + 8), v57);
                  }
                  v60 = v172;
                  v61 = sub_1682A40((__int64)&v177, (__int64)v172);
                  v173 = sub_EEC8C0((unsigned __int64)v158, (__int64)v60, 0.0);
                  v62 = sub_1587DB0(v61, (__int64 *)&v173);
                  v63 = sub_15884C0(v62, (__int64 *)&v156);
                  sub_15890D0(v63, v157);
                  sub_15F7200(&v177);
                  if ( !v155 )
                    goto LABEL_56;
                  v67 = sub_C00A40((unsigned __int64)v158, (__int64)v157, v64, v65, v66);
                  sub_168B9F0((__int64)&v177, (__int64 *)(a1 + 8), v67, 0x177Cu, 0);
                  v68 = j__strlen("&");
                  v69 = sub_EEB7E0((unsigned __int64)v158, a1 + 8, 0.0);
                  sub_9EC740((__int64)&v173, v69, "&", v68, 0);
                  sub_1589170((__int64)&v177, &v173);
                  if ( v175 != v176 )
                    operator delete(v175);
                  sub_15F7200(&v177);
                  v70 = v158;
                  ptr[0] = v165;
                  v160 = 0;
                  ptr[1] = (void *)0x400000000LL;
                  sub_15F2730(a1, (unsigned __int64)v158, &v160, (__int64)ptr);
                  v73 = v160 & 0xFFFFFFFFFFFFFFF0LL;
                  if ( (v160 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
                  {
                    v74 = *(_QWORD *)v73;
                    v75 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v73 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
                    v76 = *(unsigned __int8 *)(v75 + 16);
                    if ( v159 )
                    {
                      if ( (_BYTE)v76 != 42
                        && ((unsigned int)(v9 - 1) > 1 || !sub_9EC890(v74, (__int64)v70, v76, v71, v72)) )
                      {
                        goto LABEL_54;
                      }
LABEL_149:
                      v135 = sub_C00A40((unsigned __int64)v158, (__int64)v70, v76, v71, v72);
                      sub_168B9F0((__int64)&v177, (__int64 *)(a1 + 8), v135, 0x177Bu, 0);
                      v136 = j__strlen("()");
                      v137 = sub_EEC140((unsigned __int64)v158);
                      v138 = sub_15F0EF0(a1, v137, 0, (__m128i)0LL, a7);
                      sub_9EC740((__int64)&v173, v138, "()", v136, 0);
                      sub_1589170((__int64)&v177, &v173);
                      if ( v175 != v176 )
                        operator delete(v175);
                      sub_15F7200(&v177);
                      v77 = ptr[0];
                      if ( ptr[0] == v165 )
                      {
LABEL_56:
                        v166 = &off_2BEBE68;
                        sub_227B7A0(&v166);
                        if ( v161[0] != v162 )
                          operator delete(v161[0]);
                        return;
                      }
LABEL_55:
                      free(v77);
                      goto LABEL_56;
                    }
                    if ( (_BYTE)v76 == 13 && ((*(_WORD *)(v75 + 18) >> 3) & 0x1FF) == 0x1B4 )
                      goto LABEL_149;
                  }
LABEL_54:
                  v77 = ptr[0];
                  if ( ptr[0] == v165 )
                    goto LABEL_56;
                  goto LABEL_55;
                }
              }
              else
              {
                v134 = v133;
                while ( *(_WORD *)(*v134 + 36) != 100 )
                {
                  if ( (__int64 *)v131 == ++v134 )
                    goto LABEL_39;
                }
              }
LABEL_158:
              v96 = *v133;
              if ( *(_WORD *)(*v133 + 36) != 100 )
              {
                v139 = v133 + 1;
                do
                {
                  v96 = *v139;
                  v133 = v139++;
                }
                while ( *(_WORD *)(v96 + 36) != 100 );
              }
              v140 = *(unsigned int *)(v96 + 40);
              if ( !(_DWORD)v140 )
                goto LABEL_103;
              v141 = *(_QWORD *)(v96 + 48);
              v142 = (int *)(v141 + 4 * v140);
              if ( (_DWORD)v125 == (*(_DWORD *)v141 & 0x3FFFFFFF) - 1 - ((*(_BYTE *)(v141 + 3) & 0x40) != 0) )
                goto LABEL_103;
              v143 = (int *)(v141 + 4);
              while ( 1 )
              {
                v145 = v143;
                if ( v143 == v142 )
                  break;
                v144 = *v143++;
                if ( (_DWORD)v125 == (v144 & 0x3FFFFFFF) - 1 - ((*((_BYTE *)v145 + 3) & 0x40) != 0) )
                  goto LABEL_103;
              }
              ++v133;
            }
          }
          v116 = (__int64)v113;
LABEL_136:
          v117 = (__int64)&v113[v115];
          v119 = ((__int64)&v113[v115] - v116) >> 3;
          if ( v119 != 2 )
          {
            if ( v119 != 3 )
            {
              if ( v119 != 1 )
                goto LABEL_139;
LABEL_186:
              if ( v39 == *(_QWORD *)v116 )
                v117 = v116;
              goto LABEL_139;
            }
            if ( v39 == *(_QWORD *)v116 )
            {
LABEL_192:
              v117 = v116;
              goto LABEL_139;
            }
            v116 += 8;
          }
          if ( v39 != *(_QWORD *)v116 )
          {
            v116 += 8;
            goto LABEL_186;
          }
          goto LABEL_192;
        }
      }
      while ( 1 )
      {
        v96 = *v107;
        if ( *(_WORD *)(*v107 + 36) == 100 )
          break;
        ++v107;
      }
LABEL_103:
      sub_16F0550((__int64)v163, v96);
    }
  }
}
