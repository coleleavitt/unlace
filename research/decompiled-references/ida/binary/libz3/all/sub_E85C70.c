__int64 *__fastcall sub_E85C70(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int16 v8; // ax
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v16; // rsi
  __int64 v17; // rdx
  __m128 v18; // xmm0
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r12
  char v21; // al
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rsi
  char v26; // al
  void *v27; // rdi
  _DWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r14
  _DWORD *v31; // rax
  char v32; // al
  void *v33; // r12
  _DWORD *v34; // rax
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rdi
  void *v39; // r12
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdi
  void *v44; // rbp
  _DWORD *v45; // rax
  char v46; // r14
  __int64 v47; // rcx
  void *v48; // rdi
  void *v49; // rdi
  void *v50; // rdi
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rbp
  __int64 v56; // rsi
  __int64 v57; // rdi
  void *v58; // rbp
  __int64 v59; // rbp
  __int64 v60; // r12
  _DWORD *v61; // rax
  _DWORD *v62; // rax
  _DWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // rdi
  char v67; // al
  void *v68; // r14
  __int64 v69; // r12
  __int64 v70; // rax
  char v71; // al
  void *v72; // r12
  __int64 v73; // r12
  __int64 v74; // r14
  _DWORD *v75; // rax
  char v76; // al
  void *v77; // rbp
  _DWORD *v78; // rax
  int v79; // ecx
  int v80; // r8d
  int v81; // r9d
  __int64 v82; // rdi
  void *v83; // rbp
  __int64 v84; // rax
  __int64 v85; // r12
  __int64 v86; // rsi
  __int64 v87; // rdi
  void *v88; // r12
  _DWORD *v89; // rax
  char v90; // r14
  __int64 v91; // r14
  int v92; // ecx
  int v93; // r8d
  int v94; // r9d
  __int64 v95; // rax
  __int64 v96; // r12
  char v97; // al
  void *v98; // rbp
  __int64 v99; // r8
  __int64 v100; // r9
  _DWORD *v101; // rax
  __int64 v102; // rsi
  void *v103; // rdi
  __int64 v104; // r14
  _DWORD *v105; // rax
  int v106; // ecx
  int v107; // r8d
  int v108; // r9d
  __int64 v109; // rdi
  void *v110; // rbp
  _DWORD *v111; // rax
  __int64 v112; // rsi
  char v113; // al
  void *v114; // rdi
  __int64 v115; // r14
  __int64 v116; // r9
  _DWORD *v117; // rax
  _DWORD *v118; // rax
  __int64 v119; // rbp
  _DWORD *v120; // rax
  int v121; // ecx
  int v122; // r8d
  int v123; // r9d
  __int64 v124; // rdi
  void *v125; // r12
  __int64 v126; // rdi
  __int64 v127; // rbp
  __int64 v128; // r14
  _DWORD *v129; // rax
  _DWORD *v130; // rax
  __int64 v131; // r14
  int v132; // ecx
  int v133; // r8d
  int v134; // r9d
  __int64 v135; // r15
  __int64 v136; // rax
  __int64 v137; // r9
  _DWORD *v138; // rax
  _DWORD *v139; // rax
  __int64 v140; // r14
  __int64 v141; // rcx
  _DWORD *v142; // rax
  _DWORD *v143; // rax
  __int64 v144; // rsi
  char v145; // al
  void *v146; // rbp
  char v147; // al
  __int64 v148; // rsi
  char v149; // al
  void *v150; // rbp
  int v151; // [rsp+0h] [rbp-158h]
  void *v152; // [rsp+0h] [rbp-158h]
  void *v153; // [rsp+0h] [rbp-158h]
  void *v154; // [rsp+0h] [rbp-158h]
  void *v155; // [rsp+0h] [rbp-158h]
  void *v156; // [rsp+0h] [rbp-158h]
  void *v157; // [rsp+0h] [rbp-158h]
  __int64 v158; // [rsp+8h] [rbp-150h]
  __int64 v159; // [rsp+18h] [rbp-140h]
  void *v160; // [rsp+18h] [rbp-140h]
  __int64 v161; // [rsp+18h] [rbp-140h]
  void *v162; // [rsp+18h] [rbp-140h]
  __int64 v163; // [rsp+18h] [rbp-140h]
  int v164; // [rsp+18h] [rbp-140h]
  int v165; // [rsp+18h] [rbp-140h]
  void *v166; // [rsp+20h] [rbp-138h]
  void *v167; // [rsp+20h] [rbp-138h]
  __int64 v168; // [rsp+20h] [rbp-138h]
  __int64 v169; // [rsp+20h] [rbp-138h]
  __int64 v170; // [rsp+20h] [rbp-138h]
  int v171[2]; // [rsp+28h] [rbp-130h]
  int v172; // [rsp+28h] [rbp-130h]
  int v173[2]; // [rsp+28h] [rbp-130h]
  __int64 v174; // [rsp+30h] [rbp-128h]
  unsigned __int64 v175; // [rsp+38h] [rbp-120h]
  unsigned __int64 v176; // [rsp+40h] [rbp-118h]
  __int64 v177; // [rsp+48h] [rbp-110h]
  __int64 v178; // [rsp+50h] [rbp-108h]
  int v179; // [rsp+60h] [rbp-F8h]
  __int64 v180; // [rsp+68h] [rbp-F0h]
  char v181; // [rsp+8Fh] [rbp-C9h] BYREF
  __m128 v182; // [rsp+90h] [rbp-C8h] BYREF
  __m128 v183; // [rsp+A0h] [rbp-B8h] BYREF
  _QWORD v184[2]; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v185; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v186; // [rsp+C8h] [rbp-90h]
  int v187; // [rsp+D0h] [rbp-88h] BYREF
  char v188; // [rsp+D4h] [rbp-84h]
  __int64 v189; // [rsp+D8h] [rbp-80h]
  __int64 v190; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v191; // [rsp+E8h] [rbp-70h]
  __int64 v192; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v193; // [rsp+F8h] [rbp-60h]
  __int64 v194; // [rsp+100h] [rbp-58h] BYREF
  __int64 v195; // [rsp+108h] [rbp-50h]
  __int64 v196; // [rsp+110h] [rbp-48h] BYREF
  __int64 v197; // [rsp+118h] [rbp-40h]

  *(__m128 *)a1 = _mm_loadh_ps((const double *)(a2 + 8));
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v8 = *(_WORD *)(a3 + 4);
  if ( !a4 )
  {
    if ( v8 )
      goto LABEL_12;
    v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( !v9 )
      goto LABEL_12;
    goto LABEL_106;
  }
  if ( v8 )
    return a1;
  v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v9 )
    return a1;
  if ( *v9 )
  {
    if ( *v9 != 5 )
      return a1;
    goto LABEL_8;
  }
  if ( v9[1] != 2 || *(_DWORD *)(a3 + 24) != 2 )
  {
    if ( v9[1] != 2 || *(_DWORD *)(a3 + 24) != 2 )
      return a1;
    goto LABEL_23;
  }
  v59 = *(_QWORD *)(a3 + 32);
  v60 = *(_QWORD *)(a3 + 40);
  v61 = *(_DWORD **)(sub_15D1F10(v59) + 24);
  if ( v61 && *v61 == 5 && v61[1] == 1 )
  {
    if ( !*(_WORD *)(v60 + 4) )
    {
      v62 = *(_DWORD **)(*(_QWORD *)(v60 + 16) + 24LL);
      if ( v62 )
      {
        if ( *v62 == 5 && v62[1] == 9 )
        {
LABEL_118:
          if ( *(_DWORD *)(v60 + 24) == 2 )
          {
            v168 = a2 + 32;
            v64 = *(_QWORD *)(v60 + 32);
            v65 = *(_QWORD *)(v60 + 40);
            v161 = v64;
            if ( !*(_WORD *)(v64 + 4) )
            {
              v66 = *(_QWORD *)(a2 + 40);
              if ( !v66 )
              {
                sub_16669E0(v168);
                v66 = *(_QWORD *)(a2 + 40);
              }
              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 72LL))(v66, v161) )
                goto LABEL_123;
            }
            if ( !*(_WORD *)(v65 + 4) )
            {
              v126 = *(_QWORD *)(a2 + 40);
              if ( !v126 )
              {
                sub_16669E0(v168);
                v126 = *(_QWORD *)(a2 + 40);
              }
              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v126 + 72LL))(v126, v65) )
              {
                v161 = v65;
LABEL_123:
                v194 = 0;
                v195 = 0;
                v196 = 1;
                v197 = 0;
                v67 = sub_1666AE0(v168, v161, &v194, &v190);
                v68 = qword_1C7F2C0;
                if ( v67 && !(_DWORD)v194 )
                {
                  sub_182CBA0(qword_1C7F2C0, &v194);
                  sub_182CBA0(v68, &v196);
                  v69 = *(_QWORD *)(a2 + 8);
                  sub_993400(v168, 0);
                  v70 = sub_15E1B70(v69);
                  v11 = v70;
                  if ( v70 )
                    ++*(_DWORD *)(v70 + 8);
                  sub_E820F0(*a1, a1[1]);
                  goto LABEL_18;
                }
                sub_182CBA0(qword_1C7F2C0, &v194);
                sub_182CBA0(v68, &v196);
                v131 = *(_QWORD *)(a2 + 8);
                sub_15E1B70(*(_QWORD *)(a2 + 32));
                v194 = 0;
                v195 = 0;
                v196 = 1;
                v197 = 0;
                sub_182CBA0(qword_1C7F2C0, &v196);
                BYTE4(v196) &= ~1u;
                v14 = *(_QWORD *)(a2 + 40) == 0;
                LODWORD(v196) = 1;
                if ( v14 )
                  sub_16669E0(v168);
                sub_166A700(*(_QWORD *)(a2 + 40), (unsigned int)&v194, 1, v132, v133, v134);
                v157 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v194);
                sub_182CBA0(v157, &v196);
                sub_15E1B70(v131);
                v135 = *(_QWORD *)(a2 + 8);
                sub_15E1B70(*(_QWORD *)(a2 + 32));
                sub_15E1B70(v135);
                v10 = sub_15E1B70(v131);
LABEL_13:
                v11 = v10;
                if ( v10 )
                  ++*(_DWORD *)(v10 + 8);
                v12 = *a1;
                if ( *a1 )
                {
                  v13 = a1[1];
                  v14 = (*(_DWORD *)(v12 + 8))-- == 1;
                  if ( v14 )
                    sub_15D7BC0(v13, v12);
                }
LABEL_18:
                *a1 = v11;
                return a1;
              }
            }
          }
          goto LABEL_104;
        }
      }
    }
    if ( !*(_WORD *)(v59 + 4) )
    {
      v63 = *(_DWORD **)(*(_QWORD *)(v59 + 16) + 24LL);
      if ( v63 )
      {
        if ( *v63 == 5 && v63[1] == 9 )
        {
          v60 = v59;
          goto LABEL_118;
        }
      }
    }
  }
LABEL_104:
  if ( *(_WORD *)(a3 + 4) )
    return a1;
  v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v9 )
    return a1;
LABEL_106:
  if ( *v9 )
  {
    if ( *v9 != 5 )
      goto LABEL_11;
LABEL_8:
    if ( v9[1] != 2 )
    {
      if ( v9[1] != 3 || *(_DWORD *)(a3 + 24) != 2 )
        goto LABEL_11;
      v29 = *(_QWORD *)(a3 + 32);
      v183 = 0u;
      v30 = *(_QWORD *)(a3 + 40);
      v184[0] = 1;
      v184[1] = 0;
      v31 = *(_DWORD **)(sub_15D1F10(v29) + 24);
      if ( v31 && *v31 == 5 && v31[1] == 1 )
      {
        v194 = 0;
        v195 = 0;
        v196 = 1;
        v197 = 0;
        v71 = sub_1666AE0(a2 + 32, v30, &v194, &v190);
        v72 = qword_1C7F2C0;
        if ( v71 && (v194 & 0x100000000LL) == 0 && (_DWORD)v194 == 1 && (v196 & 0x100000000LL) == 0 && (_DWORD)v196 == 1 )
        {
          sub_182CBA0(qword_1C7F2C0, &v194);
          sub_182CBA0(v72, &v196);
          v119 = *(_QWORD *)(a2 + 8);
          if ( !*(_WORD *)(v29 + 4)
            && (v120 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL)) != nullptr
            && *v120 == 5
            && v120[1] == 6
            && *(_DWORD *)(v29 + 24) == 2
            && ((v140 = *(_QWORD *)(v29 + 40), v141 = *(_QWORD *)(v29 + 32), !*(_WORD *)(v140 + 4))
             && (v142 = *(_DWORD **)(*(_QWORD *)(v140 + 16) + 24LL)) != nullptr
             && *v142 == 5
             && v142[1] == 9
             && *(_DWORD *)(v140 + 24) == 2
             && (v163 = *(_QWORD *)(v29 + 32), v147 = sub_3DB3F0(a2 + 32, *(_QWORD *)(v140 + 32)), v141 = v163, v147)
             || !*(_WORD *)(v141 + 4)
             && (v143 = *(_DWORD **)(*(_QWORD *)(v141 + 16) + 24LL)) != nullptr
             && *v143 == 5
             && v143[1] == 9
             && *(_DWORD *)(v141 + 24) == 2
             && (unsigned __int8)sub_3DB3F0(a2 + 32, *(_QWORD *)(v141 + 32))) )
          {
            sub_15E1B70(*(_QWORD *)(a2 + 32));
          }
          else
          {
            v194 = 0;
            v195 = 0;
            v196 = 1;
            v197 = 0;
            sub_182CBA0(qword_1C7F2C0, &v196);
            v124 = *(_QWORD *)(a2 + 40);
            BYTE4(v196) &= ~1u;
            LODWORD(v196) = 1;
            if ( !v124 )
            {
              sub_16669E0(a2 + 32);
              v124 = *(_QWORD *)(a2 + 40);
            }
            sub_166A700(v124, (unsigned int)&v194, 1, v121, v122, v123);
            v125 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v194);
            sub_182CBA0(v125, &v196);
            sub_15E1B70(*(_QWORD *)(a2 + 32));
          }
          v41 = sub_15E1A70(v119);
          if ( !v41 )
            goto LABEL_67;
          goto LABEL_66;
        }
        sub_182CBA0(qword_1C7F2C0, &v194);
        sub_182CBA0(v72, &v196);
      }
      v194 = 0;
      v195 = 0;
      v196 = 1;
      v197 = 0;
      v32 = sub_1666AE0(a2 + 32, v30, &v194, &v190);
      v33 = qword_1C7F2C0;
      if ( !v32 || (_DWORD)v194 )
      {
        sub_182CBA0(qword_1C7F2C0, &v194);
        sub_182CBA0(v33, &v196);
        v45 = *(_DWORD **)(sub_15D1F10(v29) + 24);
        if ( v45 && *v45 == 5 && v45[1] == 1 && (unsigned __int8)sub_1666AE0(a2 + 32, v30, &v183, &v194) )
        {
          v194 = 0;
          v195 = 0;
          v196 = 1;
          v197 = 0;
          sub_182CBA0(qword_1C7F2C0, &v196);
          BYTE4(v196) &= ~1u;
          LODWORD(v196) = 1;
          if ( (v184[0] & 0x100000000LL) == 0 && LODWORD(v184[0]) == 1 )
            v46 = (v194 & 0x100000000LL) != 0 || (v183.m128_i8[4] & 1) != 0
                ? (int)sub_182C7B0(qword_1C7F2C0, &v194, &v183) < 0
                : (int)v194 < v183.m128_i32[0];
          else
            v46 = sub_1848D40(qword_1C7F2C0, &v194, &v183);
          v160 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v194);
          sub_182CBA0(v160, &v196);
          if ( v46 )
          {
            v47 = *(_QWORD *)(a2 + 8);
            v190 = 1;
            v172 = v47;
            v191 = 0;
            v192 = 1;
            v193 = 0;
            sub_182CBA0(qword_1C7F2C0, &v192);
            BYTE4(v192) &= ~1u;
            v197 = 0;
            LODWORD(v192) = 1;
            v48 = qword_1C7F2C0;
            v194 = 0;
            v195 = 0;
            v196 = 1;
            if ( (v183.m128_i8[4] & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v194, &v183);
            else
              LODWORD(v194) = v183.m128_i32[0];
            if ( (v184[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v48, &v196, v184);
            }
            else
            {
              BYTE4(v196) &= ~1u;
              LODWORD(v196) = v184[0];
            }
            v49 = qword_1C7F2C0;
            if ( (v196 & 0x100000000LL) != 0 || (_DWORD)v196 != 1 || (v192 & 0x100000000LL) != 0 || (_DWORD)v192 != 1 )
            {
              sub_1852000(qword_1C7F2C0, &v194, &v190);
            }
            else
            {
              sub_1832A70(qword_1C7F2C0, &v194, &v190);
              sub_182CBA0(v49, &v196);
              BYTE4(v196) &= ~1u;
              LODWORD(v196) = 1;
            }
            BYTE4(v185) &= 0xFCu;
            LODWORD(v185) = 0;
            v188 &= 0xFCu;
            v186 = 0;
            v50 = qword_1C7F2C0;
            v187 = 1;
            v189 = 0;
            if ( (v194 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v185, &v194);
            else
              LODWORD(v185) = v194;
            if ( (v196 & 0x100000000LL) != 0 )
            {
              sub_182C690(v50, &v187, &v196);
            }
            else
            {
              v188 &= ~1u;
              v187 = v196;
            }
            v153 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v194);
            sub_182CBA0(v153, &v196);
            v154 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v190);
            sub_182CBA0(v154, &v192);
            if ( !*(_QWORD *)(a2 + 40) )
              sub_16669E0(a2 + 32);
            sub_166A700(*(_QWORD *)(a2 + 40), (unsigned int)&v185, 1, v51, v52, v53);
            sub_15E1B70(*(_QWORD *)(a2 + 32));
            v54 = sub_15E1A70(v172);
            v55 = v54;
            if ( v54 )
              ++*(_DWORD *)(v54 + 8);
            v56 = *a1;
            if ( *a1 )
            {
              v57 = a1[1];
              v14 = (*(_DWORD *)(v56 + 8))-- == 1;
              if ( v14 )
                sub_15D7BC0(v57, v56);
            }
            *a1 = v55;
            v58 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v185);
            sub_182CBA0(v58, &v187);
          }
        }
        goto LABEL_71;
      }
      sub_182CBA0(qword_1C7F2C0, &v194);
      sub_182CBA0(v33, &v196);
      if ( !*(_WORD *)(v29 + 4)
        && (v34 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL)) != nullptr
        && *v34 == 5
        && v34[1] == 6
        && *(_DWORD *)(v29 + 24) == 2
        && ((v127 = *(_QWORD *)(v29 + 40), v128 = *(_QWORD *)(v29 + 32), !*(_WORD *)(v127 + 4))
         && (v129 = *(_DWORD **)(*(_QWORD *)(v127 + 16) + 24LL)) != nullptr
         && *v129 == 5
         && v129[1] == 9
         && *(_DWORD *)(v127 + 24) == 2
         && (unsigned __int8)sub_3DB3F0(a2 + 32, *(_QWORD *)(v127 + 32))
         || !*(_WORD *)(v128 + 4)
         && (v130 = *(_DWORD **)(*(_QWORD *)(v128 + 16) + 24LL)) != nullptr
         && *v130 == 5
         && v130[1] == 9
         && *(_DWORD *)(v128 + 24) == 2
         && (unsigned __int8)sub_3DB3F0(a2 + 32, *(_QWORD *)(v128 + 32))) )
      {
        v40 = sub_15E1B70(*(_QWORD *)(a2 + 32));
      }
      else
      {
        v194 = 0;
        v195 = 0;
        v196 = 1;
        v197 = 0;
        sub_182CBA0(qword_1C7F2C0, &v196);
        v38 = *(_QWORD *)(a2 + 40);
        BYTE4(v196) &= ~1u;
        LODWORD(v196) = 1;
        if ( !v38 )
        {
          sub_16669E0(a2 + 32);
          v38 = *(_QWORD *)(a2 + 40);
        }
        sub_166A700(v38, (unsigned int)&v194, 1, v35, v36, v37);
        v39 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v194);
        sub_182CBA0(v39, &v196);
        v40 = sub_15E1B70(*(_QWORD *)(a2 + 32));
      }
      v41 = v40;
      if ( !v40 )
      {
LABEL_67:
        v42 = *a1;
        if ( *a1 )
        {
          v43 = a1[1];
          v14 = (*(_DWORD *)(v42 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v43, v42);
        }
        *a1 = v41;
LABEL_71:
        v44 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v183);
        sub_182CBA0(v44, v184);
        goto LABEL_11;
      }
LABEL_66:
      ++*(_DWORD *)(v41 + 8);
      goto LABEL_67;
    }
    if ( *(_DWORD *)(a3 + 24) != 2 )
      goto LABEL_11;
    v73 = *(_QWORD *)(a3 + 32);
    v190 = 0;
    v191 = 0;
    v74 = *(_QWORD *)(a3 + 40);
    v192 = 1;
    v193 = 0;
    v75 = *(_DWORD **)(sub_15D1F10(v73) + 24);
    if ( v75 && *v75 == 5 && v75[1] == 1 )
    {
      v194 = 0;
      v195 = 0;
      v196 = 1;
      v197 = 0;
      v97 = sub_1666AE0(a2 + 32, v74, &v194, &v185);
      v98 = qword_1C7F2C0;
      if ( v97 && (v194 & 0x100000000LL) == 0 && (_DWORD)v194 == -1 && (v196 & 0x100000000LL) == 0 && (_DWORD)v196 == 1 )
      {
        sub_182CBA0(qword_1C7F2C0, &v194);
        sub_182CBA0(v98, &v196);
        v104 = *(_QWORD *)(a2 + 8);
        if ( !*(_WORD *)(v73 + 4) )
        {
          v105 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL);
          if ( v105 )
          {
            if ( *v105 == 5 && v105[1] == 6 && *(_DWORD *)(v73 + 24) == 2 )
            {
              v136 = *(_QWORD *)(v73 + 40);
              v137 = *(_QWORD *)(v73 + 32);
              v169 = v136;
              if ( !*(_WORD *)(v136 + 4) )
              {
                v138 = *(_DWORD **)(*(_QWORD *)(v136 + 16) + 24LL);
                if ( v138 )
                {
                  if ( *v138 == 5 && v138[1] == 9 && *(_DWORD *)(v169 + 24) == 2 )
                  {
                    v148 = *(_QWORD *)(v169 + 32);
                    v194 = 0;
                    v195 = 0;
                    *(_QWORD *)v173 = v137;
                    v196 = 1;
                    v197 = 0;
                    v149 = sub_1666AE0(a2 + 32, v148, &v194, &v185);
                    v150 = qword_1C7F2C0;
                    if ( !v149 || (v194 & 0x100000000LL) != 0 || (_DWORD)v194 != -1 || (v196 & 0x100000000LL) != 0 )
                    {
                      sub_182CBA0(qword_1C7F2C0, &v194);
                      sub_182CBA0(v150, &v196);
                      v137 = *(_QWORD *)v173;
                    }
                    else
                    {
                      v164 = v196;
                      sub_182CBA0(qword_1C7F2C0, &v194);
                      sub_182CBA0(v150, &v196);
                      v137 = *(_QWORD *)v173;
                      if ( v164 == 1 )
                      {
LABEL_251:
                        sub_15E1B70(*(_QWORD *)(a2 + 32));
                        goto LABEL_188;
                      }
                    }
                  }
                }
              }
              if ( !*(_WORD *)(v137 + 4) )
              {
                v139 = *(_DWORD **)(*(_QWORD *)(v137 + 16) + 24LL);
                if ( v139 )
                {
                  if ( *v139 == 5
                    && v139[1] == 9
                    && *(_DWORD *)(v137 + 24) == 2
                    && (unsigned __int8)sub_3DB3F0(a2 + 32, *(_QWORD *)(v137 + 32)) )
                  {
                    goto LABEL_251;
                  }
                }
              }
            }
          }
        }
        v194 = 0;
        v195 = 0;
        v196 = 1;
        v197 = 0;
        sub_182CBA0(qword_1C7F2C0, &v196);
        v109 = *(_QWORD *)(a2 + 40);
        BYTE4(v196) &= ~1u;
        LODWORD(v196) = 1;
        if ( !v109 )
        {
          sub_16669E0(a2 + 32);
          v109 = *(_QWORD *)(a2 + 40);
        }
        sub_166A700(v109, (unsigned int)&v194, 1, v106, v107, v108);
        v110 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v194);
        sub_182CBA0(v110, &v196);
        sub_15E1B70(*(_QWORD *)(a2 + 32));
LABEL_188:
        v85 = sub_15E1A70(v104);
        if ( !v85 )
        {
LABEL_146:
          v86 = *a1;
          if ( *a1 )
          {
            v87 = a1[1];
            v14 = (*(_DWORD *)(v86 + 8))-- == 1;
            if ( v14 )
              sub_15D7BC0(v87, v86);
          }
          *a1 = v85;
LABEL_150:
          v88 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v190);
          sub_182CBA0(v88, &v192);
          goto LABEL_11;
        }
LABEL_145:
        ++*(_DWORD *)(v85 + 8);
        goto LABEL_146;
      }
      sub_182CBA0(qword_1C7F2C0, &v194);
      sub_182CBA0(v98, &v196);
    }
    v194 = 0;
    v195 = 0;
    v196 = 1;
    v197 = 0;
    v76 = sub_1666AE0(a2 + 32, v74, &v194, &v185);
    v77 = qword_1C7F2C0;
    if ( !v76 || (_DWORD)v194 )
    {
      sub_182CBA0(qword_1C7F2C0, &v194);
      sub_182CBA0(v77, &v196);
      v89 = *(_DWORD **)(sub_15D1F10(v73) + 24);
      if ( v89 && *v89 == 5 && v89[1] == 1 && (unsigned __int8)sub_1666AE0(a2 + 32, v74, &v190, &v194) )
      {
        v194 = 0;
        v195 = 0;
        v196 = 1;
        v197 = 0;
        sub_182CBA0(qword_1C7F2C0, &v196);
        LODWORD(v196) = 1;
        BYTE4(v196) &= ~1u;
        if ( (v192 & 0x100000000LL) == 0 && (_DWORD)v192 == 1 )
          v90 = (v190 & 0x100000000LL) != 0 || (v194 & 0x100000000LL) != 0
              ? (int)sub_182C7B0(qword_1C7F2C0, &v190, &v194) < 0
              : (int)v190 < (int)v194;
        else
          v90 = sub_1848D40(qword_1C7F2C0, &v190, &v194);
        v162 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v194);
        sub_182CBA0(v162, &v196);
        if ( v90 )
        {
          v91 = *(_QWORD *)(a2 + 8);
          sub_753F00((__int64)&v194, (__int64)&v190, 1u);
          if ( !*(_QWORD *)(a2 + 40) )
            sub_16669E0(a2 + 32);
          sub_166A700(*(_QWORD *)(a2 + 40), (unsigned int)&v194, 1, v92, v93, v94);
          sub_15E1B70(*(_QWORD *)(a2 + 32));
          v95 = sub_15E1A70(v91);
          v96 = v95;
          if ( v95 )
            ++*(_DWORD *)(v95 + 8);
          sub_E820F0(*a1, a1[1]);
          *a1 = v96;
          sub_25A130((char *)&v194);
        }
      }
      goto LABEL_150;
    }
    sub_182CBA0(qword_1C7F2C0, &v194);
    sub_182CBA0(v77, &v196);
    if ( !*(_WORD *)(v73 + 4) )
    {
      v78 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL);
      if ( v78 )
      {
        if ( *v78 == 5 && v78[1] == 6 && *(_DWORD *)(v73 + 24) == 2 )
        {
          v115 = *(_QWORD *)(v73 + 40);
          v116 = *(_QWORD *)(v73 + 32);
          if ( !*(_WORD *)(v115 + 4) )
          {
            v117 = *(_DWORD **)(*(_QWORD *)(v115 + 16) + 24LL);
            if ( v117 )
            {
              if ( *v117 == 5 && v117[1] == 9 && *(_DWORD *)(v115 + 24) == 2 )
              {
                v144 = *(_QWORD *)(v115 + 32);
                v170 = *(_QWORD *)(v73 + 32);
                v194 = 0;
                v195 = 0;
                v196 = 1;
                v197 = 0;
                v145 = sub_1666AE0(a2 + 32, v144, &v194, &v185);
                v146 = qword_1C7F2C0;
                if ( !v145 || (v194 & 0x100000000LL) != 0 || (_DWORD)v194 != -1 || (v196 & 0x100000000LL) != 0 )
                {
                  sub_182CBA0(qword_1C7F2C0, &v194);
                  sub_182CBA0(v146, &v196);
                  v116 = v170;
                }
                else
                {
                  v165 = v196;
                  sub_182CBA0(qword_1C7F2C0, &v194);
                  sub_182CBA0(v146, &v196);
                  v116 = v170;
                  if ( v165 == 1 )
                  {
LABEL_209:
                    v84 = sub_15E1B70(*(_QWORD *)(a2 + 32));
                    goto LABEL_144;
                  }
                }
              }
            }
          }
          if ( !*(_WORD *)(v116 + 4) )
          {
            v118 = *(_DWORD **)(*(_QWORD *)(v116 + 16) + 24LL);
            if ( v118 )
            {
              if ( *v118 == 5
                && v118[1] == 9
                && *(_DWORD *)(v116 + 24) == 2
                && (unsigned __int8)sub_3DB3F0(a2 + 32, *(_QWORD *)(v116 + 32)) )
              {
                goto LABEL_209;
              }
            }
          }
        }
      }
    }
    v194 = 0;
    v195 = 0;
    v196 = 1;
    v197 = 0;
    sub_182CBA0(qword_1C7F2C0, &v196);
    v82 = *(_QWORD *)(a2 + 40);
    BYTE4(v196) &= ~1u;
    LODWORD(v196) = 1;
    if ( !v82 )
    {
      sub_16669E0(a2 + 32);
      v82 = *(_QWORD *)(a2 + 40);
    }
    sub_166A700(v82, (unsigned int)&v194, 1, v79, v80, v81);
    v83 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v194);
    sub_182CBA0(v83, &v196);
    v84 = sub_15E1B70(*(_QWORD *)(a2 + 32));
LABEL_144:
    v85 = v84;
    if ( !v84 )
      goto LABEL_146;
    goto LABEL_145;
  }
  if ( v9[1] == 2 && *(_DWORD *)(a3 + 24) == 2 )
  {
LABEL_23:
    v16 = *(_QWORD *)(a3 + 32);
    v17 = *(_QWORD *)(a3 + 40);
    v18 = _mm_loadh_ps((const double *)(a2 + 8));
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v182 = v18;
    v183 = v18;
    sub_E84200((_QWORD *)a2, v16, v17, (__int64 *)&v182, (__int64 *)&v183);
    v19 = v182.m128_u64[0];
    v20 = v183.m128_u64[0];
    v185 = 0;
    v175 = v183.m128_u64[1];
    v190 = 0;
    v176 = v182.m128_u64[1];
    v186 = *(_QWORD *)(a2 + 8);
    v191 = v186;
    v21 = sub_E84200((_QWORD *)a2, v182.m128_i64[0], v183.m128_i64[0], &v185, &v190);
    v22 = v190;
    v174 = v191;
    v159 = v185;
    v177 = v186;
    if ( v21 )
    {
      v158 = *(_QWORD *)(a2 + 8);
      v23 = sub_15E1B70(v158);
LABEL_29:
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      if ( v22 )
      {
        v14 = (*(_DWORD *)(v22 + 8))-- == 1;
        if ( v14 )
        {
          v155 = (void *)v23;
          sub_15D7BC0(v174, v22);
          v23 = (__int64)v155;
        }
      }
      if ( v159 )
      {
        v151 = *(_DWORD *)(v159 + 8);
        *(_DWORD *)(v159 + 8) = v151 - 1;
        if ( v151 == 1 )
        {
          v156 = (void *)v23;
          sub_15D7BC0(v177, v159);
          v23 = (__int64)v156;
        }
      }
      v24 = *a1;
      *a1 = v23;
      if ( v24 )
      {
        v14 = (*(_DWORD *)(v24 + 8))-- == 1;
        if ( v14 )
          sub_15D7BC0(v158, v24);
      }
      if ( v20 )
      {
        v14 = (*(_DWORD *)(v20 + 8))-- == 1;
        if ( v14 )
          sub_15D7BC0(v175, v20);
      }
      if ( v19 )
      {
        v14 = (*(_DWORD *)(v19 + 8))-- == 1;
        if ( v14 )
          sub_15D7BC0(v176, v19);
      }
      goto LABEL_11;
    }
    v194 = 0;
    v178 = a2 + 32;
    v195 = 0;
    v196 = 1;
    v197 = 0;
    if ( !(unsigned __int8)sub_1666AE0(a2 + 32, v19, &v194, &v181) || (_DWORD)v194 )
    {
      v167 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v194);
      sub_182CBA0(v167, &v196);
      v25 = v20;
      *(_QWORD *)v171 = v19;
    }
    else
    {
      v166 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v194);
      sub_182CBA0(v166, &v196);
      v25 = v19;
      *(_QWORD *)v171 = v20;
    }
    v194 = 0;
    v195 = 0;
    v196 = 1;
    v197 = 0;
    v26 = sub_1666AE0(v178, v25, &v194, &v181);
    v27 = qword_1C7F2C0;
    if ( v26 && !(_DWORD)v194 )
    {
      sub_182CBA0(qword_1C7F2C0, &v194);
      sub_182CBA0(v27, &v196);
      if ( *(_WORD *)(*(_QWORD *)v171 + 4LL) )
        goto LABEL_54;
      v28 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v171 + 16LL) + 24LL);
      if ( !v28 || *v28 != 5 || v28[1] != 6 || *(_DWORD *)(*(_QWORD *)v171 + 24LL) != 2 )
        goto LABEL_54;
      v99 = *(_QWORD *)(*(_QWORD *)v171 + 40LL);
      v100 = *(_QWORD *)(*(_QWORD *)v171 + 32LL);
      if ( !*(_WORD *)(v99 + 4) )
      {
        v111 = *(_DWORD **)(*(_QWORD *)(v99 + 16) + 24LL);
        if ( v111 )
        {
          if ( *v111 == 5 && v111[1] == 9 && *(_DWORD *)(v99 + 24) == 2 )
          {
            v112 = *(_QWORD *)(v99 + 32);
            v194 = 0;
            v195 = 0;
            v197 = 0;
            v180 = v100;
            v196 = 1;
            v113 = sub_1666AE0(v178, v112, &v194, &v181);
            v114 = qword_1C7F2C0;
            if ( !v113 || (v194 & 0x100000000LL) != 0 || (_DWORD)v194 != -1 || (v196 & 0x100000000LL) != 0 )
            {
              sub_182CBA0(qword_1C7F2C0, &v194);
              sub_182CBA0(v114, &v196);
              v100 = v180;
            }
            else
            {
              v179 = v196;
              sub_182CBA0(qword_1C7F2C0, &v194);
              sub_182CBA0(v114, &v196);
              v100 = v180;
              if ( v179 == 1 )
                goto LABEL_54;
            }
          }
        }
      }
      if ( !*(_WORD *)(v100 + 4) )
      {
        v101 = *(_DWORD **)(*(_QWORD *)(v100 + 16) + 24LL);
        if ( v101 )
        {
          if ( *v101 == 5 && v101[1] == 9 && *(_DWORD *)(v100 + 24) == 2 )
          {
            v102 = *(_QWORD *)(v100 + 32);
            v194 = 0;
            v195 = 0;
            v196 = 1;
            v197 = 0;
            sub_1666AE0(v178, v102, &v194, &v181);
            v103 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v194);
            sub_182CBA0(v103, &v196);
          }
        }
      }
      goto LABEL_54;
    }
    v152 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v194);
    sub_182CBA0(v152, &v196);
LABEL_54:
    v158 = *(_QWORD *)(a2 + 8);
    v23 = sub_15E1B70(v158);
    goto LABEL_29;
  }
LABEL_11:
  if ( !a4 )
  {
LABEL_12:
    v10 = sub_15EC2C0(*(_QWORD *)(a2 + 8), *a1);
    goto LABEL_13;
  }
  return a1;
}

