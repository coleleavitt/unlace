__int64 __fastcall sub_DA2FF0(
        unsigned int *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, __int64),
        __int64 a6)
{
  unsigned __int64 v6; // r15
  unsigned int v7; // eax
  __int64 v8; // r11
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v12; // r13
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  _DWORD *v27; // rdx
  _DWORD *i; // r14
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 v36; // rcx
  unsigned int v37; // edi
  _QWORD *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // r13
  unsigned int v49; // edx
  int v50; // eax
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rax
  unsigned __int64 v55; // rdi
  __int64 v56; // rcx
  unsigned __int64 v57; // r8
  _DWORD *v58; // r8
  _DWORD *v59; // rax
  bool v60; // cl
  __int64 v61; // rdi
  __int64 v62; // r9
  int v63; // r8d
  unsigned int v64; // esi
  __int64 v65; // r8
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // edi
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rbp
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // r13
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  unsigned __int64 v81; // rax
  unsigned int v82; // eax
  unsigned int v83; // edx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // r11
  unsigned __int64 v87; // r13
  unsigned int *v88; // rax
  __int64 v89; // r12
  unsigned int v90; // ebx
  unsigned int v91; // ebp
  unsigned __int64 v92; // r13
  unsigned int *v93; // r15
  unsigned int v94; // eax
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rax
  __int64 v99; // rcx
  unsigned __int64 v100; // rdi
  unsigned __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // r15
  __int64 v105; // rax
  unsigned __int64 v106; // rdx
  _QWORD *v107; // rcx
  __int64 v108; // r8
  unsigned __int64 v109; // rdx
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rax
  _DWORD *v113; // rax
  __int64 v114; // rdi
  int v115; // edx
  __int64 v116; // rax
  unsigned int v117; // edx
  __int64 v118; // r8
  __int64 v119; // rax
  unsigned __int64 v120; // rsi
  __int64 v121; // rax
  int v122; // edi
  unsigned __int64 v123; // rax
  int v124; // r10d
  _QWORD *v125; // r11
  int v126; // esi
  __int64 v127; // r9
  __int64 v128; // rdx
  unsigned __int64 v129; // rax
  __int64 v130; // rax
  _QWORD *v131; // rax
  _QWORD *v132; // r8
  __int64 v133; // rdx
  _QWORD *v134; // r15
  __int64 *v135; // rdi
  __int64 v136; // r10
  _QWORD *m; // rdx
  __int64 *v138; // rax
  int n; // r11d
  __int64 v140; // rcx
  unsigned int v141; // esi
  _QWORD *v142; // rdx
  __int64 v143; // r9
  int v144; // ecx
  int v145; // ecx
  unsigned int v146; // edi
  unsigned int v147; // eax
  _QWORD *v148; // rax
  _QWORD *v149; // r8
  __int64 v150; // rdx
  _QWORD *v151; // r11
  __int64 *v152; // r9
  __int64 v153; // r10
  _QWORD *j; // rdx
  __int64 *v155; // rax
  __int64 v156; // rdx
  unsigned int v157; // esi
  _QWORD *v158; // rcx
  __int64 v159; // rdi
  int v160; // ecx
  int v161; // ecx
  unsigned int v162; // r15d
  __int64 v163; // rdx
  _QWORD *ii; // rdx
  __int64 v165; // rdx
  _QWORD *k; // rdx
  _QWORD *v167; // r9
  int v168; // r8d
  int v169; // edi
  unsigned int v170; // r8d
  _QWORD *v171; // r10
  int v172; // r9d
  int v173; // r8d
  unsigned int v174; // r9d
  int v177; // [rsp+10h] [rbp-F8h]
  __int64 v181; // [rsp+28h] [rbp-E0h]
  __int64 v182; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v183; // [rsp+30h] [rbp-D8h]
  __int64 v184; // [rsp+30h] [rbp-D8h]
  __int64 v185; // [rsp+38h] [rbp-D0h]
  unsigned int v186; // [rsp+38h] [rbp-D0h]
  __int64 v187; // [rsp+40h] [rbp-C8h]
  _DWORD *v188; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v189; // [rsp+40h] [rbp-C8h]
  unsigned int v190; // [rsp+48h] [rbp-C0h]
  __int64 v191; // [rsp+48h] [rbp-C0h]
  _QWORD *v192; // [rsp+48h] [rbp-C0h]
  int v193; // [rsp+48h] [rbp-C0h]
  __int64 v194; // [rsp+48h] [rbp-C0h]
  _QWORD *v195; // [rsp+50h] [rbp-B8h]
  unsigned int v196; // [rsp+50h] [rbp-B8h]
  __int64 v197; // [rsp+50h] [rbp-B8h]
  _QWORD *v198; // [rsp+50h] [rbp-B8h]
  int v199; // [rsp+58h] [rbp-B0h]
  _QWORD *v200; // [rsp+58h] [rbp-B0h]
  int v201; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v202; // [rsp+70h] [rbp-98h] BYREF
  __int128 v203; // [rsp+78h] [rbp-90h]
  int v204; // [rsp+88h] [rbp-80h]
  __int64 v205; // [rsp+90h] [rbp-78h]
  __int64 v206; // [rsp+98h] [rbp-70h]
  __int64 v207; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v208; // [rsp+A8h] [rbp-60h]
  int v209; // [rsp+B8h] [rbp-50h]
  __int64 v210; // [rsp+C0h] [rbp-48h]
  __int64 v211; // [rsp+C8h] [rbp-40h]

  v6 = a3;
  v7 = a1[6];
  if ( v7 == 1 )
  {
    v9 = *((_QWORD *)a1 + 4);
  }
  else if ( v7 )
  {
    if ( v7 == 2 || v7 == 3 )
      BUG();
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL);
  }
  else
  {
    v8 = *((_QWORD *)a1 + 4);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 32);
      v10 = a1[10];
      if ( *(_DWORD *)(v9 + 24) != (_DWORD)v10 && (_DWORD)v10 )
        v9 = *(_QWORD *)(v8 + v10 + 32);
    }
    else
    {
      v9 = 64;
    }
  }
  v183 = *(_BYTE *)(v9 + 60);
  if ( v183 )
  {
    if ( *(_QWORD *)(v9 + 40) )
    {
      v43 = sub_CEF620(v9, (__int64)a2, a3, a4, (__int64)a5);
      v44 = sub_A97D20(*a2, *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL));
      v45 = a1[6];
      v181 = v44;
      v46 = *((_QWORD *)a1 + 4);
      if ( v45 )
      {
        v47 = *(_QWORD *)a1;
        v48 = v46 + *(_QWORD *)a1;
        if ( v45 == 1 )
        {
          v48 = *((_QWORD *)a1 + 5);
          if ( v46 )
            LODWORD(v47) = *(_DWORD *)(v46 + 16) * v47;
          LODWORD(v48) = v47 + v48;
        }
        goto LABEL_39;
      }
      LODWORD(v48) = 0;
      if ( !v46 )
        goto LABEL_39;
      v64 = a1[10];
      if ( v64 > 0x10 )
      {
        if ( v64 == *(_QWORD *)a1 )
          goto LABEL_39;
        v65 = *(_QWORD *)(v46 + 32);
        if ( v64 == -1 )
        {
          v67 = *(unsigned int *)(v65 + 20);
          if ( !*(_DWORD *)(v65 + 20) )
            goto LABEL_39;
          v70 = *a1;
          goto LABEL_162;
        }
      }
      else
      {
        v65 = *(_QWORD *)(v46 + 32);
      }
      v66 = v65;
      if ( v64 != 0 && *(_DWORD *)(v65 + 24) != v64 )
        v66 = *(_QWORD *)(v46 + v64 + 32);
      v67 = *(unsigned int *)(v66 + 16);
      LODWORD(v48) = 0;
      if ( *(_DWORD *)(v66 + 16) )
      {
        v68 = *(_QWORD *)a1;
        v69 = 0;
        if ( *(_QWORD *)a1 != v64 )
        {
          if ( v64 != 0 && *(_DWORD *)(v65 + 24) != v64 )
            v65 = *(_QWORD *)(v46 + v64 + 32);
          v69 = *(_QWORD *)(v65 + 40) == 0 ? 32 : 16;
        }
        v70 = (unsigned int)v68 - v64 - v69;
LABEL_162:
        v48 = v70 / v67;
        goto LABEL_39;
      }
      while ( 1 )
      {
LABEL_39:
        v49 = *(_DWORD *)(v9 + 20);
        v50 = 0;
        if ( v49 != -1 )
          v50 = v49 / *(_DWORD *)(v9 + 16);
        if ( (_DWORD)v48 == v50 )
          return v183;
        v51 = a1[6];
        if ( v51 == 1 )
          break;
        if ( v51 == 2 )
        {
          v73 = *((_QWORD *)a1 + 4);
          v202 = (unsigned int)v48;
          v203 = 0;
          v204 = 2;
          v205 = v73;
          goto LABEL_88;
        }
        v52 = a1[10];
        if ( (_DWORD)v52 == -1 )
        {
          if ( v51 == 3 )
            goto LABEL_290;
          sub_E23220(&v202, *((_QWORD *)a1 + 4), v52, *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL) + 20LL));
        }
        else
        {
          if ( v51 )
          {
            if ( v51 == 3 )
              goto LABEL_292;
            v53 = *((_QWORD *)a1 + 4);
            v54 = *(_QWORD *)(v53 + 32);
            v55 = *(unsigned int *)(v54 + 16) * (unsigned __int64)(unsigned int)v48;
            v56 = (unsigned int)v52;
          }
          else
          {
            v53 = *((_QWORD *)a1 + 4);
            v54 = *(_QWORD *)(v53 + 32);
            if ( *(_DWORD *)(v54 + 24) == (_DWORD)v52 || !(_DWORD)v52 )
            {
              v55 = *(unsigned int *)(v54 + 16) * (unsigned __int64)(unsigned int)v48;
              v56 = (unsigned int)v52;
            }
            else
            {
              v56 = (unsigned int)v52;
              v55 = *(unsigned int *)(*(_QWORD *)(v53 + (unsigned int)v52 + 32) + 16LL)
                  * (unsigned __int64)(unsigned int)v48;
            }
            if ( *(_DWORD *)(v54 + 24) != (_DWORD)v52 && (_DWORD)v52 )
              v54 = *(_QWORD *)(v53 + v56 + 32);
          }
          v57 = v55 + 32;
          if ( *(_QWORD *)(v54 + 40) )
            v57 = v55 + 16;
          sub_E23220(&v202, v53, v52, v57 + v56);
        }
        if ( v204 || !v205 )
          goto LABEL_88;
        v58 = *(_DWORD **)(v205 + 32);
        v59 = v58;
        v60 = v58[6] == (_DWORD)v206 || (_DWORD)v206 == 0;
        if ( !v60 )
          v59 = *(_DWORD **)(v205 + (unsigned int)v206 + 32);
        if ( v59[5] == -1 )
          goto LABEL_88;
        v61 = v202;
        if ( (_DWORD)v206 == -1 )
        {
          if ( v202 )
            v61 = 0xFFFFFFFFLL;
          sub_E23220(&v207, v205, 16, v61);
        }
        else
        {
          v62 = *(_QWORD *)(v205 + 32);
          if ( !v60 )
            v62 = *(_QWORD *)(v205 + (unsigned int)v206 + 32);
          if ( *(_DWORD *)(v62 + 20) == -1 )
          {
            if ( v202 == (unsigned int)v206 )
              goto LABEL_88;
          }
          else
          {
            if ( v202 > (unsigned int)v58[7] )
              goto LABEL_65;
            if ( v60 )
            {
              v63 = v58[5];
              if ( (unsigned int)v206 == v202 )
                goto LABEL_63;
            }
            else
            {
              v63 = *(_DWORD *)(*(_QWORD *)(v205 + (unsigned int)v206 + 32) + 20LL);
              if ( (unsigned int)v206 == v202 )
              {
LABEL_63:
                if ( (_DWORD)v202 - (_DWORD)v206 == v63 && v63 )
                  goto LABEL_65;
                goto LABEL_88;
              }
            }
            if ( (_DWORD)v202 - (_DWORD)v206 - (*((_QWORD *)v59 + 5) == 0 ? 32 : 16) == v63 && v63 )
            {
LABEL_65:
              sub_E23220(&v207, v205, (unsigned int)v206, 0xFFFFFFFFLL);
              goto LABEL_89;
            }
          }
          if ( !*((_QWORD *)v59 + 5) && *((_BYTE *)v59 + 60) )
            goto LABEL_88;
          sub_E23220(&v207, v205, (unsigned int)v202, v202);
        }
LABEL_89:
        sub_DA2FF0(&v207, a2, v6, a4, a5, a6);
        sub_E232A0(&v207);
        sub_E232A0(&v202);
        v6 += v181;
        if ( a4 <= v6 )
          return v183;
        LODWORD(v48) = v48 + 1;
      }
      v71 = *((_QWORD *)a1 + 5);
      v72 = *((_QWORD *)a1 + 4);
      v202 = (unsigned int)v48;
      v204 = 1;
      v206 = v71;
      v205 = v72;
      v203 = 0;
LABEL_88:
      sub_E231E0(&v207, &v202);
      goto LABEL_89;
    }
    v77 = sub_CEF620(v9, (__int64)a2, a3, a4, (__int64)a5);
    v182 = sub_A97D20(*a2, *(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF0LL));
    v186 = sub_CE6180((__int64)a2, v77, v78, v79, v80);
    v81 = sub_CEF5A0((__int64 *)v9);
    v177 = 0;
    v189 = sub_F579D0(*(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL), *a2);
    v82 = *(_DWORD *)(v9 + 20);
    if ( v82 != -1 )
      v177 = v82 / *(_DWORD *)(v9 + 16);
    v83 = a1[6];
    v84 = *((_QWORD *)a1 + 4);
    if ( v83 )
    {
      v85 = *(_QWORD *)a1;
      v86 = v84 + *(_QWORD *)a1;
      if ( v83 == 1 )
      {
        v86 = *((_QWORD *)a1 + 5);
        if ( v84 )
          LODWORD(v85) = *(_DWORD *)(v84 + 16) * v85;
        LODWORD(v86) = v85 + v86;
      }
      LODWORD(v87) = v86;
      goto LABEL_101;
    }
    LODWORD(v87) = 0;
    if ( !v84 )
      goto LABEL_101;
    v117 = a1[10];
    if ( v117 > 0x10 )
    {
      if ( v117 == *(_QWORD *)a1 )
        goto LABEL_101;
      v118 = *(_QWORD *)(v84 + 32);
      if ( v117 == -1 )
      {
        v120 = *(unsigned int *)(v118 + 20);
        if ( !*(_DWORD *)(v118 + 20) )
          goto LABEL_101;
        v123 = *a1;
        goto LABEL_155;
      }
    }
    else
    {
      v118 = *(_QWORD *)(v84 + 32);
    }
    v119 = v118;
    if ( v117 != 0 && *(_DWORD *)(v118 + 24) != v117 )
      v119 = *(_QWORD *)(v84 + v117 + 32);
    v120 = *(unsigned int *)(v119 + 16);
    LODWORD(v87) = 0;
    if ( !*(_DWORD *)(v119 + 16) )
    {
LABEL_101:
      if ( v177 == (_DWORD)v87 )
      {
        return v183;
      }
      else
      {
        v88 = a1;
        v89 = 1;
        if ( !v189 )
          v89 = v182;
        v90 = v183;
        v91 = v87;
        v92 = v6;
        v93 = v88;
        do
        {
          if ( (_BYTE)v90 )
          {
            v94 = v93[6];
            v95 = v189;
            if ( v94 == 1 )
            {
              v102 = *((_QWORD *)v93 + 5);
              v103 = *((_QWORD *)v93 + 4);
              v207 = v91;
              v209 = 1;
              v211 = v102;
              v210 = v103;
              v208 = 0;
            }
            else if ( v94 == 2 )
            {
              v116 = *((_QWORD *)v93 + 4);
              v207 = v91;
              v208 = 0;
              v209 = 2;
              v210 = v116;
            }
            else
            {
              v96 = v93[10];
              if ( (_DWORD)v96 == -1 )
              {
                if ( v94 == 3 )
LABEL_290:
                  BUG();
                sub_E23220(
                  &v207,
                  *((_QWORD *)v93 + 4),
                  v96,
                  *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v93 + 4) + 32LL) + 20LL));
                v95 = v189;
              }
              else
              {
                if ( v94 )
                {
                  if ( v94 == 3 )
LABEL_292:
                    BUG();
                  v97 = *((_QWORD *)v93 + 4);
                  v98 = *(_QWORD *)(v97 + 32);
                  v100 = *(unsigned int *)(v98 + 16) * (unsigned __int64)v91;
                  v99 = (unsigned int)v96;
                }
                else
                {
                  v97 = *((_QWORD *)v93 + 4);
                  v98 = *(_QWORD *)(v97 + 32);
                  if ( *(_DWORD *)(v98 + 24) == (_DWORD)v96 || !(_DWORD)v96 )
                  {
                    v100 = *(unsigned int *)(v98 + 16) * (unsigned __int64)v91;
                    v99 = (unsigned int)v96;
                  }
                  else
                  {
                    v99 = (unsigned int)v96;
                    v100 = *(unsigned int *)(*(_QWORD *)(v97 + (unsigned int)v96 + 32) + 16LL) * (unsigned __int64)v91;
                  }
                  if ( *(_DWORD *)(v98 + 24) != (_DWORD)v96 && (_DWORD)v96 )
                    v98 = *(_QWORD *)(v97 + v99 + 32);
                }
                v101 = v100 + 32;
                if ( *(_QWORD *)(v98 + 40) )
                  v101 = v100 + 16;
                sub_E23220(&v207, v97, v96, v101 + v99);
                v95 = v189;
              }
            }
            v90 = a5(a6, &v207, v186, v92, v182, v95);
            sub_E232A0(&v207);
          }
          v92 += v89;
          if ( v92 >= a4 )
            break;
          ++v91;
        }
        while ( v177 != v91 );
        return v90;
      }
    }
    v121 = *(_QWORD *)a1;
    v122 = 0;
    if ( *(_QWORD *)a1 != v117 )
    {
      if ( v117 != 0 && *(_DWORD *)(v118 + 24) != v117 )
        v118 = *(_QWORD *)(v84 + v117 + 32);
      v122 = *(_QWORD *)(v118 + 40) == 0 ? 32 : 16;
    }
    v123 = (unsigned int)v121 - v117 - v122;
LABEL_155:
    v87 = v123 / v120;
    goto LABEL_101;
  }
  v12 = *(_QWORD *)(v9 + 32);
  if ( v12 )
  {
    v13 = 1;
    v14 = sub_EDE580(*a2, *(_QWORD *)v12);
    v15 = *(_QWORD *)(v12 + 280);
    v185 = v14;
    v16 = v15 + 24LL * *(unsigned int *)(v12 + 288);
    if ( v15 != v16 )
    {
      v187 = v12;
      v17 = *(_QWORD *)(v12 + 280);
      v18 = v14;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v17 + 68LL) & 1) == 0 || *(_QWORD *)(*(_QWORD *)v17 + 40LL) )
        {
          v19 = *((_QWORD *)a1 + 4);
          v20 = *a1 + *(_DWORD *)(v17 + 8);
          sub_E23220(&v207, v19, v20, (unsigned int)v20);
          v24 = *(_QWORD *)v17;
          if ( *(char *)(*(_QWORD *)v17 + 29LL) < 0 )
            v24 = sub_B72720(*(_QWORD *)v17);
          v25 = *(unsigned int *)(v24 + 68);
          if ( (v25 & 0xFFFFFFF0) == 0 )
          {
            v184 = v24;
            sub_B7EAB0(v24, v19, v25, v21, v22, v23);
            LODWORD(v25) = *(_DWORD *)(v184 + 68);
          }
          v26 = *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL * (((unsigned int)v25 >> 4) - 1)) + a3;
          if ( (_BYTE)v13 )
            v13 = sub_DA2FF0(&v207, a2, v26, a4, a5, a6);
          sub_E232A0(&v207);
        }
        v17 += 24;
      }
      while ( v16 != v17 );
      v12 = v187;
    }
    v27 = *(_DWORD **)(v12 + 8);
    v188 = &v27[8 * *(unsigned int *)(v12 + 16)];
    if ( v27 != v188 )
    {
      for ( i = *(_DWORD **)(v12 + 8); v188 != i; i += 8 )
      {
        v29 = *a1 + i[2];
        sub_E23220(&v207, *((_QWORD *)a1 + 4), v29, (unsigned int)v29);
        v31 = *(_QWORD *)i;
        v32 = *(_QWORD *)(*(_QWORD *)i + 128LL);
        if ( !v32 )
        {
          v104 = *(_QWORD *)(v31 + 104);
          v105 = *(_QWORD *)(v104 + 96);
          v106 = v105 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v105 & 1) == 0 )
          {
            v107 = (_QWORD *)(v105 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v105 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              if ( (v105 & 2) == 0 )
                goto LABEL_26;
              v108 = v107[2295];
              v109 = v104 & 0xFFFFFFFFFFFFFFFBLL;
              if ( v108 )
              {
                v110 = v107[294];
                v107[304] += 24LL;
                v111 = (v110 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v107[295] >= v111 + 24 && v110 )
                {
                  v107[294] = v111 + 24;
                  v112 = (v110 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v194 = v108;
                  v112 = sub_986170((__int64)(v107 + 294), 24, 24, 3, v108, v30);
                  v108 = v194;
                  v111 = v112 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)v112 = v108;
                v109 = v111 | 4;
                *(_DWORD *)(v112 + 8) = 0;
                *(_QWORD *)(v112 + 16) = v104;
              }
              v106 = v109 & 0xFFFFFFFFFFFFFFFELL;
              v105 = v106 | 1;
              *(_QWORD *)(v104 + 96) = v106 | 1;
            }
          }
          if ( v106 )
          {
            if ( (v106 & 4) != 0 )
            {
              v113 = (_DWORD *)(v105 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v113 )
              {
                v114 = *(_QWORD *)v113;
                v115 = *(_DWORD *)(*(_QWORD *)v113 + 12LL);
                if ( v113[2] != v115 )
                {
                  v113[2] = v115;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v114 + 152LL))(v114, v104);
                }
              }
            }
          }
          if ( !*(_QWORD *)(v31 + 128) )
            goto LABEL_26;
          v32 = *(_QWORD *)(v31 + 128);
        }
        v32 = *(_QWORD *)(v32 + 88);
LABEL_26:
        v33 = *(_QWORD *)(v185 + 72);
        v34 = *(unsigned int *)(v33 + 80);
        v35 = *(_QWORD *)(v33 + 64);
        if ( !(_DWORD)v34 )
          goto LABEL_183;
        v36 = (unsigned int)(v34 - 1);
        v37 = v36 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
        v38 = (_QWORD *)(v35 + 16LL * v37);
        v39 = *v38;
        if ( v32 == *v38 )
        {
LABEL_28:
          v40 = v38[1];
          goto LABEL_29;
        }
        v124 = 1;
        v125 = nullptr;
        if ( v39 != -4096 )
        {
          while ( 1 )
          {
            if ( !v125 && v39 == -8192 )
              v125 = v38;
            v37 = v36 & (v124 + v37);
            v38 = (_QWORD *)(v35 + 16LL * v37);
            v39 = *v38;
            if ( v32 == *v38 )
              goto LABEL_28;
            if ( v39 == -4096 )
              break;
            ++v124;
          }
          if ( v125 )
            v38 = v125;
        }
        v126 = *(_DWORD *)(v33 + 72) + 1;
        v30 = (unsigned int)(4 * v126);
        if ( (unsigned int)v30 < 3 * (int)v34 )
        {
          v127 = (unsigned int)v34 >> 3;
          if ( (int)v34 - *(_DWORD *)(v33 + 76) - v126 > (unsigned int)v127 )
            goto LABEL_178;
          v196 = *(_DWORD *)(v33 + 80);
          v192 = *(_QWORD **)(v33 + 64);
          v147 = ((((((((v36 >> 1) | v36 | (((v36 >> 1) | v36) >> 2)) >> 4)
                    | (v36 >> 1)
                    | v36
                    | (((v36 >> 1) | v36) >> 2)) >> 8)
                  | (((v36 >> 1) | v36 | (((v36 >> 1) | v36) >> 2)) >> 4)
                  | (v36 >> 1)
                  | v36
                  | (((v36 >> 1) | v36) >> 2)) >> 16)
                | (((((v36 >> 1) | v36 | (((v36 >> 1) | v36) >> 2)) >> 4) | (v36 >> 1) | v36 | (((v36 >> 1) | v36) >> 2)) >> 8)
                | (((v36 >> 1) | v36 | (((v36 >> 1) | v36) >> 2)) >> 4)
                | (v36 >> 1)
                | v36
                | (((v36 >> 1) | v36) >> 2))
               + 1;
          if ( v147 < 0x40 )
            v147 = 64;
          *(_DWORD *)(v33 + 80) = v147;
          v148 = (_QWORD *)sub_22300B0(16LL * v147, 8, v34, 64, v35, v127);
          v149 = v192;
          v150 = v196;
          v151 = v148;
          *(_QWORD *)(v33 + 64) = v148;
          if ( v192 )
          {
            *(_QWORD *)(v33 + 72) = 0;
            v197 = 16LL * v196;
            v152 = &v192[2 * v150];
            v153 = *(unsigned int *)(v33 + 80);
            for ( j = &v148[2 * v153]; j != v148; v148 += 2 )
              *v148 = -4096;
            v155 = v192;
            v193 = v153 - 1;
            do
            {
              v156 = *v155;
              if ( *v155 != -8192 && v156 != -4096 )
              {
                if ( !(_DWORD)v153 )
                {
                  *(_QWORD *)&dword_0 = *v155;
                  BUG();
                }
                v157 = v193 & (((unsigned int)v156 >> 9) ^ ((unsigned int)v156 >> 4));
                v158 = &v151[2 * v157];
                v159 = *v158;
                if ( *v158 != v156 && v159 != -4096 )
                {
                  v201 = 1;
                  v200 = nullptr;
                  while ( 1 )
                  {
                    if ( !v200 )
                    {
                      if ( v159 != -8192 )
                        v158 = nullptr;
                      v200 = v158;
                    }
                    v157 = v193 & (v201 + v157);
                    ++v201;
                    v158 = &v151[2 * v157];
                    v159 = *v158;
                    if ( v156 == *v158 )
                      break;
                    if ( v159 == -4096 )
                    {
                      if ( v200 )
                        v158 = v200;
                      break;
                    }
                  }
                }
                *v158 = v156;
                v158[1] = v155[1];
                ++*(_DWORD *)(v33 + 72);
              }
              v155 += 2;
            }
            while ( v152 != v155 );
            operator delete(v149, v197, 8);
            v151 = *(_QWORD **)(v33 + 64);
            v160 = *(_DWORD *)(v33 + 80);
            v126 = *(_DWORD *)(v33 + 72) + 1;
          }
          else
          {
            v165 = *(unsigned int *)(v33 + 80);
            *(_QWORD *)(v33 + 72) = 0;
            v160 = v165;
            for ( k = &v148[2 * v165]; k != v148; v148 += 2 )
              *v148 = -4096;
            v126 = 1;
          }
          if ( !v160 )
            goto LABEL_291;
          v161 = v160 - 1;
          v162 = v161 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
          v38 = &v151[2 * v162];
          v128 = *v38;
          if ( *v38 == v32 )
          {
            v128 = v32;
LABEL_179:
            *(_DWORD *)(v33 + 72) = v126;
            if ( v128 != -4096 )
              --*(_DWORD *)(v33 + 76);
            goto LABEL_181;
          }
          if ( v128 != -4096 )
          {
            v167 = &v151[2 * v162];
            v168 = 1;
            v38 = nullptr;
            while ( 1 )
            {
              if ( !v38 && v128 == -8192 )
                v38 = v167;
              v169 = v168 + 1;
              v170 = v161 & (v162 + v168);
              v162 = v170;
              v167 = &v151[2 * v170];
              v128 = *v167;
              if ( v32 == *v167 )
              {
                v38 = &v151[2 * v170];
                goto LABEL_179;
              }
              if ( v128 == -4096 )
                break;
              v168 = v169;
            }
            if ( v38 )
              goto LABEL_178;
            v38 = &v151[2 * v170];
          }
        }
        else
        {
LABEL_183:
          v195 = *(_QWORD **)(v33 + 64);
          v190 = *(_DWORD *)(v33 + 80);
          v129 = (((((((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
                   | (unsigned int)(2 * v34 - 1)
                   | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 4)
                 | (((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v34 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 8)
               | (((((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v34 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v34 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1);
          v130 = ((v129 >> 16) | v129) + 1;
          if ( (unsigned int)v130 < 0x40 )
            LODWORD(v130) = 64;
          *(_DWORD *)(v33 + 80) = v130;
          v131 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v130, 8, v34, 64, v35, v30);
          v132 = v195;
          v133 = v190;
          v134 = v131;
          *(_QWORD *)(v33 + 64) = v131;
          if ( v195 )
          {
            *(_QWORD *)(v33 + 72) = 0;
            v191 = 16LL * v190;
            v135 = &v195[2 * v133];
            v136 = *(unsigned int *)(v33 + 80);
            for ( m = &v131[2 * v136]; m != v131; v131 += 2 )
              *v131 = -4096;
            v138 = v195;
            for ( n = v136 - 1; v135 != v138; v138 += 2 )
            {
              v140 = *v138;
              if ( *v138 != -4096 && v140 != -8192 )
              {
                if ( !(_DWORD)v136 )
                {
                  *(_QWORD *)&dword_0 = *v138;
                  BUG();
                }
                v141 = n & (((unsigned int)v140 >> 9) ^ ((unsigned int)v140 >> 4));
                v142 = &v134[2 * v141];
                v143 = *v142;
                if ( *v142 != v140 && v143 != -4096 )
                {
                  v199 = 1;
                  v198 = nullptr;
                  while ( 1 )
                  {
                    if ( !v198 )
                    {
                      if ( v143 != -8192 )
                        v142 = nullptr;
                      v198 = v142;
                    }
                    v141 = n & (v199 + v141);
                    v142 = &v134[2 * v141];
                    v143 = *v142;
                    if ( v140 == *v142 )
                      break;
                    if ( v143 == -4096 )
                    {
                      if ( v198 )
                        v142 = v198;
                      break;
                    }
                    ++v199;
                  }
                }
                *v142 = v140;
                v142[1] = v138[1];
                ++*(_DWORD *)(v33 + 72);
              }
            }
            operator delete(v132, v191, 8);
            v134 = *(_QWORD **)(v33 + 64);
            v144 = *(_DWORD *)(v33 + 80);
            v126 = *(_DWORD *)(v33 + 72) + 1;
          }
          else
          {
            v163 = *(unsigned int *)(v33 + 80);
            *(_QWORD *)(v33 + 72) = 0;
            v144 = v163;
            for ( ii = &v131[2 * v163]; ii != v131; v131 += 2 )
              *v131 = -4096;
            v126 = 1;
          }
          if ( !v144 )
          {
LABEL_291:
            ++*(_DWORD *)(v33 + 72);
            BUG();
          }
          v145 = v144 - 1;
          v146 = v145 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
          v38 = &v134[2 * v146];
          v128 = *v38;
          if ( v32 == *v38 )
            goto LABEL_179;
          if ( v128 != -4096 )
          {
            v171 = &v134[2 * (v145 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4)))];
            v172 = 1;
            v38 = nullptr;
            while ( 1 )
            {
              if ( v128 == -8192 && !v38 )
                v38 = v171;
              v173 = v172 + 1;
              v174 = v146 + v172;
              v146 = v145 & v174;
              v171 = &v134[2 * (v145 & v174)];
              v128 = *v171;
              if ( v32 == *v171 )
              {
                v38 = &v134[2 * (v145 & v174)];
                goto LABEL_179;
              }
              if ( v128 == -4096 )
                break;
              v172 = v173;
            }
            if ( v38 )
            {
LABEL_178:
              v128 = *v38;
              goto LABEL_179;
            }
            v38 = &v134[2 * (v145 & v174)];
          }
        }
        *(_DWORD *)(v33 + 72) = v126;
LABEL_181:
        *v38 = v32;
        v40 = 0;
        v38[1] = 0;
LABEL_29:
        v41 = sub_A98060(*a2, v40) + a3;
        if ( (_BYTE)v13 && (v13 = sub_DA2FF0(&v207, a2, v41, a4, a5, a6), (_BYTE)v13) )
          sub_E24D00(&v207);
        else
          v13 = 0;
        sub_E232A0(&v207);
      }
    }
  }
  else
  {
    v74 = *a2;
    v75 = sub_CEF5A0((__int64 *)v9);
    v76 = sub_A97D20(v74, *(_QWORD *)(v75 & 0xFFFFFFFFFFFFFFF0LL));
    return (unsigned int)a5(a6, (__int64 *)a1, *(unsigned int *)(v9 + 48), a3, v76, 0);
  }
  return v13;
}
