void __fastcall sub_CAA050(__int64 *a1, __int64 a2, __int64 *a3, char a4, unsigned __int8 a5)
{
  int *v6; // rax
  int v7; // r14d
  unsigned __int64 v9; // rbx
  char v10; // r15
  __int64 *v11; // rax
  unsigned __int64 v12; // r13
  char v13; // al
  _DWORD *v14; // rax
  char v15; // r14
  char v16; // r12
  _DWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  _DWORD *v20; // rax
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r12
  int v23; // ecx
  _DWORD *v24; // rdx
  int *v25; // r14
  __int64 v26; // r13
  __int64 v27; // rdi
  __int64 i; // r12
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // edx
  char v32; // si
  __int64 v33; // rbp
  __int64 v34; // rax
  char v35; // si
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // edx
  char v39; // r8
  char v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rsi
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rax
  char v48; // r8
  char v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rax
  char v52; // r8
  char v53; // r8
  int *v54; // r12
  char *j; // r12
  char *v56; // rdi
  unsigned int v57; // ebx
  unsigned int v58; // ebx
  void *v59; // r13
  bool v60; // al
  __int64 v61; // rbx
  _QWORD *v62; // r14
  void *v63; // rdi
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rax
  int *v67; // rcx
  __int64 v68; // rax
  int *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  unsigned __int64 v72; // rdx
  __int64 v73; // rax
  int v74; // esi
  _DWORD *v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rcx
  _DWORD *v78; // rax
  _DWORD *v79; // rax
  __int64 v80; // rbp
  __int64 v81; // r12
  int *v82; // rbx
  __int64 v83; // rax
  __int64 v84; // r12
  void *v85; // rbp
  int *v86; // rsi
  int v87; // ecx
  int v88; // r8d
  int v89; // r9d
  _DWORD *v90; // rax
  __int64 v92; // r8
  __int64 v93; // r9
  unsigned int v94; // ebx
  __int64 v95; // rbp
  __int64 v96; // r14
  __int64 v97; // r13
  void *v98; // rdi
  bool v99; // al
  bool v100; // al
  void *v101; // r13
  bool v102; // al
  int *v104; // rax
  __int64 v105; // r13
  unsigned int v106; // ecx
  __int64 *v107; // rcx
  __int64 v108; // r14
  unsigned int v109; // ebx
  unsigned __int64 v110; // rbp
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  __int64 *v115; // rbp
  __int64 v116; // rsi
  int v117; // ecx
  int v118; // r8d
  int v119; // r9d
  int *v120; // rbx
  __int64 v121; // rax
  __int64 v122; // r12
  void *v123; // rbp
  int *v124; // rsi
  char v125; // al
  char v126; // bp
  void *v127; // rdi
  char v128; // al
  void *v129; // rdi
  char v130; // bp
  __int64 v131; // rax
  __int64 v132; // rbx
  __int64 v133; // rax
  __int64 v134; // rbx
  __int64 v135; // rbp
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rax
  __int64 v143; // rbx
  int v145; // [rsp+10h] [rbp-238h]
  char v146; // [rsp+10h] [rbp-238h]
  char v147; // [rsp+10h] [rbp-238h]
  char v148; // [rsp+10h] [rbp-238h]
  char v149; // [rsp+20h] [rbp-228h]
  unsigned __int8 v151; // [rsp+30h] [rbp-218h]
  int v152[2]; // [rsp+38h] [rbp-210h]
  int *v153; // [rsp+38h] [rbp-210h]
  int v154[2]; // [rsp+38h] [rbp-210h]
  unsigned int v155; // [rsp+38h] [rbp-210h]
  unsigned int v156; // [rsp+40h] [rbp-208h]
  char v157; // [rsp+4Fh] [rbp-1F9h]
  __int64 v159; // [rsp+58h] [rbp-1F0h]
  __int64 v160; // [rsp+68h] [rbp-1E0h]
  char v161; // [rsp+75h] [rbp-1D3h] BYREF
  char v162; // [rsp+76h] [rbp-1D2h] BYREF
  char v163; // [rsp+77h] [rbp-1D1h] BYREF
  __int64 v164; // [rsp+78h] [rbp-1D0h] BYREF
  __m128 v165; // [rsp+80h] [rbp-1C8h] BYREF
  _QWORD v166[2]; // [rsp+90h] [rbp-1B8h] BYREF
  _QWORD v167[2]; // [rsp+A0h] [rbp-1A8h] BYREF
  _QWORD v168[4]; // [rsp+B0h] [rbp-198h] BYREF
  _QWORD v169[2]; // [rsp+D0h] [rbp-178h] BYREF
  _QWORD v170[2]; // [rsp+E0h] [rbp-168h] BYREF
  int v171; // [rsp+F0h] [rbp-158h] BYREF
  char v172; // [rsp+F4h] [rbp-154h]
  __int64 v173; // [rsp+F8h] [rbp-150h]
  int v174; // [rsp+100h] [rbp-148h]
  char v175; // [rsp+104h] [rbp-144h]
  __int64 v176; // [rsp+108h] [rbp-140h]
  int v177; // [rsp+110h] [rbp-138h] BYREF
  char v178; // [rsp+114h] [rbp-134h]
  __int64 v179; // [rsp+118h] [rbp-130h]
  int v180; // [rsp+120h] [rbp-128h]
  char v181; // [rsp+124h] [rbp-124h]
  __int64 v182; // [rsp+128h] [rbp-120h]
  int v183; // [rsp+130h] [rbp-118h] BYREF
  char v184; // [rsp+134h] [rbp-114h]
  __int64 v185; // [rsp+138h] [rbp-110h]
  int v186; // [rsp+140h] [rbp-108h]
  char v187; // [rsp+144h] [rbp-104h]
  __int64 v188; // [rsp+148h] [rbp-100h]
  int v189[2]; // [rsp+150h] [rbp-F8h] BYREF
  __int64 v190; // [rsp+158h] [rbp-F0h]
  int v191; // [rsp+160h] [rbp-E8h]
  char v192; // [rsp+164h] [rbp-E4h]
  __int64 v193; // [rsp+168h] [rbp-E0h]
  __int64 v194[2]; // [rsp+170h] [rbp-D8h] BYREF
  int v195; // [rsp+180h] [rbp-C8h]
  char v196; // [rsp+184h] [rbp-C4h]
  __int64 v197; // [rsp+188h] [rbp-C0h]
  __int64 v198; // [rsp+190h] [rbp-B8h] BYREF
  __int64 v199; // [rsp+198h] [rbp-B0h]
  int v200; // [rsp+1A0h] [rbp-A8h] BYREF
  char v201; // [rsp+1A4h] [rbp-A4h]
  __int64 v202; // [rsp+1A8h] [rbp-A0h]
  __int64 v203; // [rsp+1B0h] [rbp-98h] BYREF
  __int64 v204; // [rsp+1B8h] [rbp-90h]
  __int64 v205; // [rsp+1C0h] [rbp-88h] BYREF
  __int64 v206; // [rsp+1C8h] [rbp-80h]
  unsigned __int64 v207; // [rsp+1D0h] [rbp-78h]
  __int64 v208; // [rsp+1E0h] [rbp-68h] BYREF
  __int64 v209; // [rsp+1E8h] [rbp-60h] BYREF
  __int64 v210; // [rsp+1F0h] [rbp-58h] BYREF
  __int64 v211; // [rsp+1F8h] [rbp-50h]
  unsigned __int64 v212; // [rsp+200h] [rbp-48h]

  v157 = a4;
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_2;
  v6 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v6 )
    goto LABEL_2;
  v7 = *v6;
  if ( *v6 )
  {
    if ( v7 != 5 )
      goto LABEL_2;
    if ( v6[1] != 2 )
    {
      if ( v6[1] == 3 && *(_DWORD *)(a2 + 24) == 2 )
      {
        v149 = 1;
        v9 = *(_QWORD *)(a2 + 32);
        v10 = 0;
        v11 = a1;
        v151 = 0;
        v12 = *(_QWORD *)(a2 + 40);
        LOBYTE(v7) = 1;
        v145 = 1;
        goto LABEL_10;
      }
LABEL_2:
      sub_1626DC(a2);
    }
    v145 = *(_DWORD *)(a2 + 24);
    if ( v145 != 2 )
      goto LABEL_2;
    v149 = 0;
    v9 = *(_QWORD *)(a2 + 32);
    LOBYTE(v7) = 0;
    v11 = a1;
    v151 = 1;
    v12 = *(_QWORD *)(a2 + 40);
    v10 = 1;
LABEL_10:
    v166[0] = 0;
    v166[1] = 0;
    v167[0] = 1;
    v167[1] = 0;
    *(_QWORD *)v152 = v11 + 45;
    v13 = sub_1666AE0(v11 + 45, v9, v166, &v162);
    if ( v13 )
    {
      if ( !a4 )
      {
        if ( v145 == 2 )
        {
          v146 = v13;
          v172 &= 0xFCu;
          v175 &= 0xFCu;
          v171 = 0;
          v173 = 0;
          v174 = 1;
          v176 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v171, (int *)v166);
          v178 &= 0xFCu;
          v181 &= 0xFCu;
          v177 = 1;
          v179 = 0;
          v180 = 1;
          v182 = 0;
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v166, (__int64)&v177, (__int64)v166);
          v10 = 0;
          LOBYTE(v7) = 1;
          sub_25A130((char *)&v171);
          v125 = v146;
          v145 = 1;
          v157 = v125;
          v149 = v125;
        }
        else if ( v145 == 1 )
        {
          v147 = v13;
          v184 &= 0xFCu;
          v187 &= 0xFCu;
          v183 = 0;
          v185 = 0;
          v186 = 1;
          v188 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v183, (int *)v166);
          v127 = qword_1C7F2C0;
          v189[0] = 1;
          LOBYTE(v189[1]) &= 0xFCu;
          v190 = 0;
          v191 = 1;
          v192 &= 0xFCu;
          v193 = 0;
          if ( (v167[0] & 0x100000000LL) == 0 && LODWORD(v167[0]) == 1 )
          {
            sub_1832A70(qword_1C7F2C0, v166, v189);
            sub_182CBA0(v127, v167);
            BYTE4(v167[0]) &= ~1u;
            v128 = v147;
            LODWORD(v167[0]) = 1;
          }
          else
          {
            sub_1852000(qword_1C7F2C0, v166, v189);
            v128 = v147;
          }
          v148 = v128;
          LOBYTE(v7) = 0;
          sub_25A130((char *)&v183);
          v10 = v148;
          v149 = 0;
          v145 = 2;
          v157 = v10;
        }
        else
        {
          v149 = 0;
          v10 = 0;
          LOBYTE(v7) = 0;
          v145 = 0;
        }
      }
      if ( *(_WORD *)(v12 + 4)
        || *(_DWORD *)(v12 + 24)
        || (v17 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL)) != nullptr && *v17 != -1 )
      {
        sub_1626DC(a2);
      }
      sub_CA29E0(a1, v12);
      if ( v145 )
      {
        if ( LODWORD(v166[0]) )
        {
          if ( (v166[0] & 0x100000000LL) == 0 && LODWORD(v166[0]) == 1 && (v167[0] & 0x100000000LL) == 0 )
          {
            if ( v149 )
            {
              if ( LODWORD(v167[0]) == 1 )
                goto LABEL_151;
            }
            else if ( LODWORD(v167[0]) == 1 && v10 )
            {
              goto LABEL_38;
            }
          }
          sub_1626DC(a2);
        }
        if ( v145 != 2 )
        {
LABEL_38:
          v18 = sub_CA0420((__int64)a1, v12, v7);
          goto LABEL_39;
        }
LABEL_151:
        v19 = *(_QWORD *)(*a1 + 856);
        if ( !v19 )
          goto LABEL_41;
        goto LABEL_40;
      }
      v18 = sub_CA0420((__int64)a1, v12, v157 ^ (LODWORD(v166[0]) != 0));
LABEL_39:
      v19 = v18;
      if ( !v18 )
      {
LABEL_41:
        sub_C9E940(*a3, a3[1]);
        *a3 = v19;
LABEL_42:
        sub_25A130((char *)v166);
        return;
      }
LABEL_40:
      ++*(_DWORD *)(v19 + 8);
      goto LABEL_41;
    }
    if ( !(unsigned __int8)sub_1666AE0(*(_QWORD *)v152, v12, v166, &v161) || (v15 = v161) == 0 )
      sub_1626DC(a2);
    if ( a4 )
    {
      v16 = 1;
    }
    else if ( v145 == 2 )
    {
      LODWORD(v194[0]) = 0;
      BYTE4(v194[0]) &= 0xFCu;
      v196 &= 0xFCu;
      v194[1] = 0;
      v195 = 1;
      v197 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v194, (int *)v166);
      BYTE4(v198) &= 0xFCu;
      v201 &= 0xFCu;
      LODWORD(v198) = 1;
      v199 = 0;
      v200 = 1;
      v202 = 0;
      sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v166, (__int64)&v198, (__int64)v166);
      v16 = 1;
      sub_25A130((char *)v194);
      v157 = v15;
      v151 = 0;
      v145 = 1;
    }
    else if ( v145 == 1 )
    {
      LODWORD(v203) = 0;
      BYTE4(v203) &= 0xFCu;
      BYTE4(v205) &= 0xFCu;
      v204 = 0;
      LODWORD(v205) = 1;
      v206 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v203, (int *)v166);
      LODWORD(v208) = 1;
      BYTE4(v208) &= 0xFCu;
      v129 = qword_1C7F2C0;
      v209 = 0;
      LODWORD(v210) = 1;
      BYTE4(v210) &= 0xFCu;
      v211 = 0;
      if ( (v167[0] & 0x100000000LL) == 0 && LODWORD(v167[0]) == 1 )
      {
        sub_1832A70(qword_1C7F2C0, v166, &v208);
        sub_182CBA0(v129, v167);
        BYTE4(v167[0]) &= ~1u;
        LODWORD(v167[0]) = 1;
      }
      else
      {
        sub_1852000(qword_1C7F2C0, v166, &v208);
      }
      v16 = 1;
      sub_25A130((char *)&v203);
      v157 = v15;
      v151 = 1;
      v145 = 2;
    }
    else
    {
      v151 = 0;
      v16 = 0;
      v145 = 0;
    }
    if ( *(_WORD *)(v9 + 4) )
LABEL_32:
      sub_1626DC(a2);
    v156 = *(_DWORD *)(v9 + 24);
    v20 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    if ( v156 )
    {
      if ( v20 && *v20 == 5 && v20[1] == 6 )
      {
        v72 = v9;
        while ( 1 )
        {
          v73 = *(_QWORD *)(v72 + 32);
          if ( *(_WORD *)(v73 + 4) )
            break;
          v74 = *(_DWORD *)(v73 + 24);
          v75 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL);
          if ( v74 )
          {
            if ( !v75 )
              break;
            if ( *v75 != 5 )
              break;
            if ( v75[1] != 9 )
              break;
            if ( v74 != 2 )
              break;
            v76 = *(_QWORD *)(v73 + 32);
            v77 = *(_QWORD *)(v73 + 40);
            if ( *(_WORD *)(v76 + 4) )
              break;
            v78 = *(_DWORD **)(*(_QWORD *)(v76 + 16) + 24LL);
            if ( !v78 )
              break;
            if ( *v78 != 5 )
              break;
            if ( v78[1] )
              break;
            if ( *(_WORD *)(v77 + 4) )
              break;
            if ( *(_DWORD *)(v77 + 24) )
              break;
            v79 = *(_DWORD **)(*(_QWORD *)(v77 + 16) + 24LL);
            if ( v79 )
            {
              if ( *v79 != -1 )
                break;
            }
          }
          else if ( v75 && *v75 != -1 )
          {
            break;
          }
          v72 += 8LL;
          if ( v72 == v9 + 8LL * v156 )
            goto LABEL_48;
        }
        sub_1626DC(a2);
      }
      goto LABEL_32;
    }
    if ( v20 && *v20 != -1 )
    {
      if ( *v20 != 5 || v20[1] != 6 )
        goto LABEL_32;
LABEL_48:
      v168[0] = 0;
      v168[1] = 0;
      v168[2] = 1;
      v168[3] = 0;
      *(_QWORD *)v189 = 0;
      v169[0] = 0;
      v169[1] = 0;
      v170[0] = 1;
      v170[1] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v169, (int *)v166);
      if ( v156 )
      {
        v21 = v9 + 8LL * v156;
        do
        {
          while ( 1 )
          {
            v22 = *(_QWORD *)(v9 + 32);
            if ( *(_WORD *)(v22 + 4) )
            {
LABEL_52:
              sub_1872CE0("");
              sub_1873130(114, 781);
            }
            v23 = *(_DWORD *)(v22 + 24);
            v24 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
            if ( !v23 )
              break;
            if ( !v24 )
              goto LABEL_52;
            if ( *v24 != 5 )
              goto LABEL_52;
            if ( v24[1] != 9 )
              goto LABEL_52;
            if ( v23 != 2 )
              goto LABEL_52;
            v160 = *(_QWORD *)(v22 + 40);
            if ( !(unsigned __int8)sub_1666AE0(*(_QWORD *)v152, *(_QWORD *)(v22 + 32), v168, &v163) )
              goto LABEL_52;
            sub_CA29E0(a1, v160);
            if ( SLODWORD(v168[0]) < 0 )
            {
              sub_1831620(qword_1C7F2C0, v168);
              sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v169, (__int64)v168, (__int64)v169);
              v208 = 0;
              v209 = 0;
              v210 = 1;
              v211 = 0;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v208, (int *)v168);
              v212 = v160 | 1;
            }
            else
            {
              v208 = 0;
              v209 = 0;
              v210 = 1;
              v211 = 0;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v208, (int *)v168);
              v212 = v160;
            }
            sub_CA3A50((int **)v189, (__int64)&v208);
            v9 += 8LL;
            sub_25A130((char *)&v208);
            if ( v21 == v9 )
              goto LABEL_64;
          }
          if ( v24 && *v24 != -1 )
            goto LABEL_52;
          sub_CA29E0(a1, *(_QWORD *)(v9 + 32));
          v208 = 1;
          v209 = 0;
          v210 = 1;
          v211 = 0;
          sub_182CBA0(qword_1C7F2C0, &v210);
          v67 = *(int **)v189;
          BYTE4(v210) &= ~1u;
          LODWORD(v210) = 1;
          v212 = v22;
          if ( !*(_QWORD *)v189
            || (v68 = *(unsigned int *)(*(_QWORD *)v189 - 4LL), (_DWORD)v68 == *(_DWORD *)(*(_QWORD *)v189 - 8LL)) )
          {
            sub_CA58E0((__int64 *)v189);
            v67 = *(int **)v189;
            v68 = *(unsigned int *)(*(_QWORD *)v189 - 4LL);
          }
          v69 = &v67[10 * v68];
          *v69 = v208;
          *((_BYTE *)v69 + 4) = BYTE4(v208) & 3 | v69[1] & 0xFC;
          v70 = v209;
          v209 = 0;
          *((_QWORD *)v69 + 1) = v70;
          v69[4] = v210;
          *((_BYTE *)v69 + 20) = BYTE4(v210) & 3 | v69[5] & 0xFC;
          v71 = v211;
          v211 = 0;
          *((_QWORD *)v69 + 3) = v71;
          *((_QWORD *)v69 + 4) = v212;
          ++*(v67 - 1);
          sub_25A130((char *)&v208);
          v9 += 8LL;
        }
        while ( v21 != v9 );
      }
LABEL_64:
      v25 = *(int **)v189;
      if ( *(_QWORD *)v189 )
      {
        v26 = 40LL * *(unsigned int *)(*(_QWORD *)v189 - 4LL);
        v153 = (int *)(*(_QWORD *)v189 + v26);
        if ( *(_QWORD *)v189 != *(_QWORD *)v189 + v26 )
        {
          v27 = (__int64)(0xCCCCCCCCCCCCCCCDLL * (v26 >> 3) + 1) >> 1;
          if ( v27 )
          {
            for ( i = (__int64)(0xCCCCCCCCCCCCCCCDLL * (v26 >> 3) + 1) >> 1; ; i = (i + 1) >> 1 )
            {
              v159 = 40 * i;
              v29 = operator new(40 * i, (const std::nothrow_t *)&std::nothrow);
              v30 = v29;
              if ( v29 )
                break;
              if ( i == 1 )
              {
                sub_CA1840(v25, v153);
                operator delete(nullptr, 0);
                goto LABEL_78;
              }
            }
            v31 = *v25;
            v32 = *((_BYTE *)v25 + 4);
            v33 = v29 + 40 * i;
            *(_DWORD *)v29 = *v25;
            *(_BYTE *)(v29 + 4) = v32 & 3 | *(_BYTE *)(v29 + 4) & 0xFC;
            v34 = *((_QWORD *)v25 + 1);
            *((_QWORD *)v25 + 1) = 0;
            *(_QWORD *)(v30 + 8) = v34;
            v35 = *((_BYTE *)v25 + 20);
            *(_DWORD *)(v30 + 16) = v25[4];
            *(_BYTE *)(v30 + 20) = v35 & 3 | *(_BYTE *)(v30 + 20) & 0xFC;
            v36 = *((_QWORD *)v25 + 3);
            *((_QWORD *)v25 + 3) = 0;
            *(_QWORD *)(v30 + 24) = v36;
            *(_QWORD *)(v30 + 32) = *((_QWORD *)v25 + 4);
            v37 = v30 + 40;
            if ( 40 * i == 40 )
            {
              v44 = v30;
            }
            else
            {
              do
              {
                v38 = *(_DWORD *)(v37 - 40);
                v39 = *(_BYTE *)(v37 - 36);
                v37 += 40;
                *(_DWORD *)(v37 - 40) = v38;
                LOBYTE(v38) = v39 & 3 | *(_BYTE *)(v37 - 36) & 0xFC;
                v40 = *(_BYTE *)(v37 - 60);
                *(_BYTE *)(v37 - 36) = v38;
                v41 = *(_QWORD *)(v37 - 72);
                *(_QWORD *)(v37 - 72) = 0;
                *(_QWORD *)(v37 - 32) = v41;
                *(_DWORD *)(v37 - 24) = *(_DWORD *)(v37 - 64);
                *(_BYTE *)(v37 - 20) = v40 & 3 | *(_BYTE *)(v37 - 20) & 0xFC;
                v42 = *(_QWORD *)(v37 - 56);
                *(_QWORD *)(v37 - 56) = 0;
                *(_QWORD *)(v37 - 16) = v42;
                *(_QWORD *)(v37 - 8) = *(_QWORD *)(v37 - 48);
              }
              while ( v33 != v37 );
              v43 = (v33 - v30 - 80) & 0xFFFFFFFFFFFFFFF8LL;
              v31 = *(_DWORD *)(v43 + v30 + 40);
              v44 = v43 + v30 + 40;
            }
            v45 = *v25;
            *v25 = v31;
            v46 = *(_QWORD *)(v44 + 8);
            *(_DWORD *)v44 = v45;
            v47 = *((_QWORD *)v25 + 1);
            *((_QWORD *)v25 + 1) = v46;
            v48 = *(_BYTE *)(v44 + 4);
            *(_QWORD *)(v44 + 8) = v47;
            LOBYTE(v46) = *((_BYTE *)v25 + 4);
            *((_BYTE *)v25 + 4) = v48 & 2 | v46 & 0xFD;
            LOBYTE(v47) = v46 & 2 | *(_BYTE *)(v44 + 4) & 0xFD;
            *(_BYTE *)(v44 + 4) = v47;
            v49 = *((_BYTE *)v25 + 4);
            *((_BYTE *)v25 + 4) = v47 & 1 | v49 & 0xFE;
            LODWORD(v46) = *(_DWORD *)(v44 + 16);
            *(_BYTE *)(v44 + 4) = v49 & 1 | *(_BYTE *)(v44 + 4) & 0xFE;
            LODWORD(v47) = v25[4];
            v25[4] = v46;
            v50 = *(_QWORD *)(v44 + 24);
            *(_DWORD *)(v44 + 16) = v47;
            v51 = *((_QWORD *)v25 + 3);
            *((_QWORD *)v25 + 3) = v50;
            v52 = *(_BYTE *)(v44 + 20);
            *(_QWORD *)(v44 + 24) = v51;
            LOBYTE(v50) = *((_BYTE *)v25 + 20);
            *((_BYTE *)v25 + 20) = v52 & 2 | v50 & 0xFD;
            LOBYTE(v51) = v50 & 2 | *(_BYTE *)(v44 + 20) & 0xFD;
            *(_BYTE *)(v44 + 20) = v51;
            v53 = v25[5] & 1;
            *((_BYTE *)v25 + 20) = v51 & 1 | v25[5] & 0xFE;
            *(_BYTE *)(v44 + 20) = v53 | *(_BYTE *)(v44 + 20) & 0xFE;
            *((_QWORD *)v25 + 4) = *(_QWORD *)(v44 + 32);
            if ( v27 == i )
            {
              v54 = &v25[10 * i];
              goto LABEL_74;
            }
            sub_CA9F40(v25, v153, (int *)v30, i);
          }
          else
          {
            v159 = 0;
            v54 = *(int **)v189;
            v33 = 0;
            v30 = 0;
LABEL_74:
            sub_CA81D0(v25, v54, (int *)v30);
            sub_CA81D0(v54, v153, (int *)v30);
            sub_CA8C90(
              v25,
              v54,
              (__int64)v153,
              0xCCCCCCCCCCCCCCCDLL * (v159 >> 3),
              0xCCCCCCCCCCCCCCCDLL * ((v26 - v159) >> 3),
              (_DWORD *)v30);
          }
          for ( j = (char *)v30; (char *)v33 != j; j += 40 )
          {
            v56 = j;
            sub_25A130(v56);
          }
          operator delete((void *)v30, v159);
        }
      }
LABEL_78:
      if ( v145 != 1 )
      {
        if ( v145 != 2 )
        {
          if ( *(_QWORD *)v189 )
          {
            v57 = *(_DWORD *)(*(_QWORD *)v189 - 4LL);
            if ( (v57 & 1) != 0 )
              goto LABEL_88;
            v58 = v57 >> 1;
          }
          else
          {
            v58 = 0;
          }
          v203 = 1;
          v204 = 0;
          v205 = 1;
          v206 = 0;
          sub_182CBA0(qword_1C7F2C0, &v205);
          BYTE4(v205) &= ~1u;
          LODWORD(v205) = 1;
          sub_17F6290(&v208, v58);
          sub_3EBB80((__int64)&v198, (__int64)&v208, (__int64)&v203);
          v59 = qword_1C7F2C0;
          if ( (v169[0] & 0x100000000LL) != 0 || (v198 & 0x100000000LL) != 0 )
            v60 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v169, &v198) == 0;
          else
            v60 = LODWORD(v169[0]) == (_DWORD)v198;
          if ( v60
            && ((v170[0] & 0x100000000LL) != 0 || (v201 & 1) != 0
              ? (unsigned int)sub_182C7B0(v59, v170, &v200) == 0
              : LODWORD(v170[0]) == v200) )
          {
            sub_25A130((char *)&v198);
            sub_25A130((char *)&v208);
            sub_25A130((char *)&v203);
            if ( v58 )
            {
              v94 = v58 - 1;
              v95 = 40;
              do
              {
                v96 = *(_QWORD *)v189 + v95 - 40;
                v97 = *(_QWORD *)v189 + v95;
                if ( ((*(_QWORD *)(v96 + 32) & 7LL) == 1) == ((*(_QWORD *)(*(_QWORD *)v189 + v95 + 32) & 7LL) == 1) )
                  goto LABEL_88;
                v98 = qword_1C7F2C0;
                if ( (*(_BYTE *)(v96 + 4) & 1) != 0 || (*(_BYTE *)(v97 + 4) & 1) != 0 )
                {
                  v98 = qword_1C7F2C0;
                  v99 = (unsigned int)sub_182C7B0(qword_1C7F2C0, *(_QWORD *)v189 + v95 - 40, *(_QWORD *)v189 + v95) == 0;
                }
                else
                {
                  v99 = *(_DWORD *)v96 == *(_DWORD *)v97;
                }
                if ( !v99 )
                  goto LABEL_88;
                *(_QWORD *)v154 = v96 + 16;
                if ( (*(_BYTE *)(v96 + 20) & 1) != 0 || (*(_BYTE *)(v97 + 20) & 1) != 0 )
                  v100 = (unsigned int)sub_182C7B0(v98, *(_QWORD *)v154, v97 + 16) == 0;
                else
                  v100 = *(_DWORD *)(v96 + 16) == *(_DWORD *)(v97 + 16);
                if ( !v100 )
                  goto LABEL_88;
                sub_17F6290(&v208, v94);
                v101 = qword_1C7F2C0;
                if ( (*(_BYTE *)(v96 + 4) & 1) != 0 || (v208 & 0x100000000LL) != 0 )
                {
                  if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v96, &v208) )
                    goto LABEL_188;
                }
                else if ( *(_DWORD *)v96 != (_DWORD)v208 )
                {
                  goto LABEL_188;
                }
                if ( (*(_BYTE *)(v96 + 20) & 1) != 0 || (v210 & 0x100000000LL) != 0 )
                  v102 = (unsigned int)sub_182C7B0(v101, *(_QWORD *)v154, &v210) == 0;
                else
                  v102 = *(_DWORD *)(v96 + 16) == (_DWORD)v210;
                if ( !v102 )
                {
LABEL_188:
                  sub_25A130((char *)&v208);
                  goto LABEL_88;
                }
                v95 += 80;
                sub_25A130((char *)&v208);
              }
              while ( v94-- != 0 );
            }
            v104 = *(int **)v189;
            v105 = *a1;
            if ( *(_QWORD *)v189 )
            {
              v106 = *(_DWORD *)(*(_QWORD *)v189 - 4LL);
              v208 = *a1;
              v155 = v106;
              if ( v106 )
              {
                v107 = &v164;
                v108 = 0;
                v109 = 0;
                while ( 1 )
                {
                  v110 = *(_QWORD *)&v104[10 * v109 + 8] & 0xFFFFFFFFFFFFFFF8LL;
                  sub_C9E9F0(
                    a1,
                    *(_QWORD *)((*(_QWORD *)&v104[10 * v109 + 18] & 0xFFFFFFFFFFFFFFF8LL) + 16),
                    0,
                    v107,
                    v92,
                    v93);
                  sub_C9E9F0(a1, *(_QWORD *)(v110 + 16), 0, v111, v112, v113);
                  v114 = sub_15E1B70(v105);
                  v164 = v114;
                  if ( v114 )
                    ++*(_DWORD *)(v114 + 8);
                  v209 = v108;
                  sub_C9F390(&v209, &v164);
                  v109 += 2;
                  v108 = v209;
                  if ( v109 >= v155 )
                    break;
                  v105 = *a1;
                  v104 = *(int **)v189;
                }
                v115 = a1 + 17;
                if ( v209 )
                  v116 = *(unsigned int *)(v209 - 4);
                else
                  v116 = 0;
                goto LABEL_199;
              }
            }
            else
            {
              v208 = *a1;
            }
            v108 = 0;
            v116 = 0;
            v115 = a1 + 17;
LABEL_199:
            sub_6B02D0(v115, v116, v108, a3);
            if ( !v157 && (unsigned int)sub_14DEE90((_DWORD)v115, *a3, (_DWORD)a3, v117, v118, v119) == 5 )
            {
              v131 = sub_15E1A70(a1[17]);
              v132 = v131;
              if ( v131 )
                ++*(_DWORD *)(v131 + 8);
              sub_C9E940(*a3, a3[1]);
              *a3 = v132;
            }
            v209 = v108;
            sub_2334C0(&v208);
            sub_25A130((char *)v169);
            v120 = *(int **)v189;
            if ( *(_QWORD *)v189 )
            {
              v121 = *(unsigned int *)(*(_QWORD *)v189 - 4LL);
              if ( (_DWORD)v121 )
              {
                v122 = *(_QWORD *)v189 + 40 * v121;
                do
                {
                  v123 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v120);
                  v124 = v120 + 4;
                  v120 += 10;
                  sub_182CBA0(v123, v124);
                }
                while ( (int *)v122 != v120 );
                v120 = *(int **)v189;
              }
              sub_186B220(v120 - 2);
            }
            sub_25A130((char *)v168);
            goto LABEL_42;
          }
          sub_25A130((char *)&v198);
          sub_25A130((char *)&v208);
          sub_25A130((char *)&v203);
LABEL_88:
          v194[0] = 0;
          v203 = 0;
          v204 = 0;
          v205 = 1;
          v206 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v203, (int *)v169);
          sub_1831620(qword_1C7F2C0, &v203);
          if ( v156 )
          {
            v61 = 0;
            do
            {
              v208 = 0;
              v209 = 0;
              v210 = 1;
              v64 = v61 + *(_QWORD *)v189;
              v211 = 0;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v208, (int *)(v61 + *(_QWORD *)v189));
              v212 = *(_QWORD *)(v64 + 32);
              sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v203, (__int64)&v208, (__int64)&v203);
              v65 = v194[0];
              v212 = ((v212 & 7) != 1) | v212 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v194[0] || (v66 = *(unsigned int *)(v194[0] - 4), (_DWORD)v66 == *(_DWORD *)(v194[0] - 8)) )
              {
                sub_CA58E0(v194);
                v65 = v194[0];
                v66 = *(unsigned int *)(v194[0] - 4);
              }
              v62 = (_QWORD *)(v65 + 40 * v66);
              *v62 = 0;
              v63 = qword_1C7F2C0;
              v62[1] = 0;
              v62[2] = 1;
              v62[3] = 0;
              sub_27B950((__int64)v63, (__int64)v62, (int *)&v208);
              v61 += 40;
              v62[4] = v212;
              ++*(_DWORD *)(v194[0] - 4);
              sub_25A130((char *)&v208);
            }
            while ( 40LL * v156 != v61 );
          }
          v198 = 0;
          v208 = 0;
          v199 = *a1;
          v209 = v199;
          sub_CA6420(a1, v189, v169, &v198, 0);
          sub_CA6420(a1, v194, &v203, &v208, 0);
          v165 = _mm_loadh_ps((const double *)&v208);
          sub_6B02D0(a1 + 17, 2, &v165, a3);
          if ( !v157 && (unsigned int)sub_14DEE90((int)a1 + 136, *a3, (_DWORD)a3, v87, v88, v89) == 5 )
          {
            v133 = sub_15E1A70(a1[17]);
            v134 = v133;
            if ( v133 )
              ++*(_DWORD *)(v133 + 8);
            sub_C9E940(*a3, a3[1]);
            *a3 = v134;
          }
          sub_C9E940(v208, v209);
          sub_C9E940(v198, v199);
          sub_25A130((char *)&v203);
          sub_CA63A0(v194);
          goto LABEL_127;
        }
        sub_1831620(qword_1C7F2C0, v169);
        if ( v156 )
        {
          v80 = 0;
          do
          {
            v81 = v80 + *(_QWORD *)v189;
            sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v169, v80 + *(_QWORD *)v189, (__int64)v169);
            v80 += 40;
            *(_QWORD *)(v81 + 32) = ((*(_QWORD *)(v81 + 32) & 7LL) != 1) | *(_QWORD *)(v81 + 32) & 0xFFFFFFFFFFFFFFF8LL;
          }
          while ( 40LL * v156 != v80 );
        }
      }
      sub_CA6420(a1, v189, v169, a3, a5);
LABEL_127:
      sub_25A130((char *)v169);
      v82 = *(int **)v189;
      if ( *(_QWORD *)v189 )
      {
        v83 = *(unsigned int *)(*(_QWORD *)v189 - 4LL);
        if ( (_DWORD)v83 )
        {
          v84 = *(_QWORD *)v189 + 40 * v83;
          do
          {
            v85 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v82);
            v86 = v82 + 4;
            v82 += 10;
            sub_182CBA0(v85, v86);
          }
          while ( (int *)v84 != v82 );
          v82 = *(int **)v189;
        }
        sub_186B220(v82 - 2);
      }
      sub_25A130((char *)v168);
      sub_25A130((char *)v166);
      return;
    }
    sub_CA29E0(a1, v9);
    if ( !v145 )
    {
      if ( LODWORD(v166[0])
        && ((v166[0] & 0x100000000LL) != 0
         || LODWORD(v166[0]) != 1
         || (v167[0] & 0x100000000LL) != 0
         || LODWORD(v167[0]) != 1) )
      {
        v19 = *(_QWORD *)(*a1 + 864);
        if ( !v157 )
          v19 = *(_QWORD *)(*a1 + 856);
        if ( !v19 )
          goto LABEL_41;
        goto LABEL_40;
      }
      v18 = sub_CA0420((__int64)a1, v9, v16 ^ LOBYTE(v166[0]));
      goto LABEL_39;
    }
    if ( v145 == 2 )
    {
      v208 = 1;
      v209 = 0;
      v210 = 1;
      v211 = 0;
      sub_182CBA0(qword_1C7F2C0, &v210);
      LODWORD(v210) = 1;
      BYTE4(v210) &= ~1u;
      v130 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v166, (__int64)&v208);
      sub_25A130((char *)&v208);
      if ( !v130 )
        goto LABEL_151;
      if ( SLODWORD(v166[0]) < 0 )
      {
LABEL_220:
        v19 = *(_QWORD *)(*a1 + 864);
        if ( !v19 )
          goto LABEL_41;
        goto LABEL_40;
      }
    }
    else
    {
      if ( SLODWORD(v166[0]) <= 0 )
        goto LABEL_151;
      v208 = 1;
      v209 = 0;
      v210 = 1;
      v211 = 0;
      sub_182CBA0(qword_1C7F2C0, &v210);
      LODWORD(v210) = 1;
      BYTE4(v210) &= ~1u;
      v126 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v208, (__int64)v166);
      sub_25A130((char *)&v208);
      if ( v126 )
        goto LABEL_220;
    }
    v18 = sub_CA0420((__int64)a1, v9, v151);
    goto LABEL_39;
  }
  if ( v6[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
    goto LABEL_2;
  v9 = *(_QWORD *)(a2 + 32);
  v12 = *(_QWORD *)(a2 + 40);
  if ( *(_WORD *)(v9 + 4) || (v145 = *(_DWORD *)(v9 + 24)) != 0 )
  {
    v151 = 0;
    v10 = 0;
    v11 = a1;
    v149 = 0;
    v145 = 0;
    goto LABEL_10;
  }
  v14 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
  if ( v14 && *v14 != -1 )
  {
    v151 = 0;
    v10 = 0;
    v11 = a1;
    v149 = 0;
    goto LABEL_10;
  }
  if ( *(_WORD *)(v12 + 4) || *(_DWORD *)(v12 + 24) )
  {
    v151 = 0;
    v11 = a1;
    v10 = 0;
    v149 = 0;
    goto LABEL_10;
  }
  v90 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
  if ( v90 && *v90 != -1 )
  {
    v151 = 0;
    v11 = a1;
    v10 = 0;
    v145 = 0;
    v149 = 0;
    goto LABEL_10;
  }
  sub_CA29E0(a1, v9);
  sub_CA29E0(a1, v12);
  v135 = *a1;
  v208 = 1;
  v209 = 0;
  v210 = 1;
  v211 = 0;
  sub_182CBA0(qword_1C7F2C0, &v210);
  BYTE4(v210) &= ~1u;
  v212 = v12 | (unsigned __int8)a4 ^ 1u;
  LODWORD(v210) = 1;
  sub_C9E9F0(
    a1,
    *(_QWORD *)((char *)&word_10 + (v212 & 0xFFFFFFFFFFFFFFF8LL)),
    (((unsigned __int8)v12 | (unsigned __int8)a4 ^ 1) & 7) == 1,
    v136,
    v137,
    v138);
  v203 = 1;
  v204 = 0;
  v205 = 1;
  v206 = 0;
  sub_182CBA0(qword_1C7F2C0, &v205);
  BYTE4(v205) &= ~1u;
  v207 = v9;
  LODWORD(v205) = 1;
  sub_C9E9F0(a1, *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 16), (v9 & 7) == 1, v139, v140, v141);
  v142 = sub_15E1B70(v135);
  v143 = v142;
  if ( v142 )
    ++*(_DWORD *)(v142 + 8);
  sub_C9E940(*a3, a3[1]);
  *a3 = v143;
  sub_25A130((char *)&v203);
  sub_25A130((char *)&v208);
}

