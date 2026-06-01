__int64 __fastcall sub_D7F2B0(
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
  _QWORD *v132; // r15
  __int64 *v133; // rdi
  __int64 v134; // r10
  _QWORD *m; // rdx
  __int64 *v136; // rax
  int n; // r11d
  __int64 v138; // rcx
  unsigned int v139; // esi
  _QWORD *v140; // rdx
  __int64 v141; // r9
  int v142; // ecx
  int v143; // ecx
  unsigned int v144; // edi
  unsigned int v145; // eax
  _QWORD *v146; // rax
  _QWORD *v147; // r11
  __int64 *v148; // r9
  __int64 v149; // r10
  _QWORD *j; // rdx
  __int64 *v151; // rax
  __int64 v152; // rdx
  unsigned int v153; // esi
  _QWORD *v154; // rcx
  __int64 v155; // rdi
  int v156; // ecx
  int v157; // ecx
  unsigned int v158; // r15d
  __int64 v159; // rdx
  _QWORD *ii; // rdx
  __int64 v161; // rdx
  _QWORD *k; // rdx
  _QWORD *v163; // r9
  int v164; // r8d
  int v165; // edi
  unsigned int v166; // r8d
  _QWORD *v167; // r10
  int v168; // r9d
  int v169; // r8d
  unsigned int v170; // r9d
  int v173; // [rsp+10h] [rbp-F8h]
  __int64 v177; // [rsp+28h] [rbp-E0h]
  __int64 v178; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v179; // [rsp+30h] [rbp-D8h]
  __int64 v180; // [rsp+30h] [rbp-D8h]
  __int64 v181; // [rsp+38h] [rbp-D0h]
  unsigned int v182; // [rsp+38h] [rbp-D0h]
  __int64 v183; // [rsp+40h] [rbp-C8h]
  _DWORD *v184; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v185; // [rsp+40h] [rbp-C8h]
  unsigned int v186; // [rsp+48h] [rbp-C0h]
  __int64 *v187; // [rsp+48h] [rbp-C0h]
  int v188; // [rsp+48h] [rbp-C0h]
  __int64 v189; // [rsp+48h] [rbp-C0h]
  __int64 *v190; // [rsp+50h] [rbp-B8h]
  unsigned int v191; // [rsp+50h] [rbp-B8h]
  _QWORD *v192; // [rsp+50h] [rbp-B8h]
  int v193; // [rsp+58h] [rbp-B0h]
  _QWORD *v194; // [rsp+58h] [rbp-B0h]
  int v195; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v196; // [rsp+70h] [rbp-98h] BYREF
  __int128 v197; // [rsp+78h] [rbp-90h]
  int v198; // [rsp+88h] [rbp-80h]
  __int64 v199; // [rsp+90h] [rbp-78h]
  __int64 v200; // [rsp+98h] [rbp-70h]
  __int64 v201; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v202; // [rsp+A8h] [rbp-60h]
  int v203; // [rsp+B8h] [rbp-50h]
  __int64 v204; // [rsp+C0h] [rbp-48h]
  __int64 v205; // [rsp+C8h] [rbp-40h]

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
  v179 = *(_BYTE *)(v9 + 60);
  if ( v179 )
  {
    if ( *(_QWORD *)(v9 + 40) )
    {
      v43 = sub_CCB8E0(v9, (__int64)a2, a3, a4, (__int64)a5);
      v44 = sub_A73FE0(*a2, *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL));
      v45 = a1[6];
      v177 = v44;
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
          return v179;
        v51 = a1[6];
        if ( v51 == 1 )
          break;
        if ( v51 == 2 )
        {
          v73 = *((_QWORD *)a1 + 4);
          v196 = (unsigned int)v48;
          v197 = 0;
          v198 = 2;
          v199 = v73;
          goto LABEL_88;
        }
        v52 = a1[10];
        if ( (_DWORD)v52 == -1 )
        {
          if ( v51 == 3 )
            goto LABEL_290;
          sub_DFF4E0(&v196, *((_QWORD *)a1 + 4), v52, *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL) + 20LL));
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
          sub_DFF4E0(&v196, v53, v52, v57 + v56);
        }
        if ( v198 || !v199 )
          goto LABEL_88;
        v58 = *(_DWORD **)(v199 + 32);
        v59 = v58;
        v60 = v58[6] == (_DWORD)v200 || (_DWORD)v200 == 0;
        if ( !v60 )
          v59 = *(_DWORD **)(v199 + (unsigned int)v200 + 32);
        if ( v59[5] == -1 )
          goto LABEL_88;
        v61 = v196;
        if ( (_DWORD)v200 == -1 )
        {
          if ( v196 )
            v61 = 0xFFFFFFFFLL;
          sub_DFF4E0(&v201, v199, 16, v61);
        }
        else
        {
          v62 = *(_QWORD *)(v199 + 32);
          if ( !v60 )
            v62 = *(_QWORD *)(v199 + (unsigned int)v200 + 32);
          if ( *(_DWORD *)(v62 + 20) == -1 )
          {
            if ( v196 == (unsigned int)v200 )
              goto LABEL_88;
          }
          else
          {
            if ( v196 > (unsigned int)v58[7] )
              goto LABEL_65;
            if ( v60 )
            {
              v63 = v58[5];
              if ( (unsigned int)v200 == v196 )
                goto LABEL_63;
            }
            else
            {
              v63 = *(_DWORD *)(*(_QWORD *)(v199 + (unsigned int)v200 + 32) + 20LL);
              if ( (unsigned int)v200 == v196 )
              {
LABEL_63:
                if ( (_DWORD)v196 - (_DWORD)v200 == v63 && v63 )
                  goto LABEL_65;
                goto LABEL_88;
              }
            }
            if ( (_DWORD)v196 - (_DWORD)v200 - (*((_QWORD *)v59 + 5) == 0 ? 32 : 16) == v63 && v63 )
            {
LABEL_65:
              sub_DFF4E0(&v201, v199, (unsigned int)v200, 0xFFFFFFFFLL);
              goto LABEL_89;
            }
          }
          if ( !*((_QWORD *)v59 + 5) && *((_BYTE *)v59 + 60) )
            goto LABEL_88;
          sub_DFF4E0(&v201, v199, (unsigned int)v196, v196);
        }
LABEL_89:
        sub_D7F2B0(&v201, a2, v6, a4, a5, a6);
        sub_DFF560(&v201);
        sub_DFF560(&v196);
        v6 += v177;
        if ( a4 <= v6 )
          return v179;
        LODWORD(v48) = v48 + 1;
      }
      v71 = *((_QWORD *)a1 + 5);
      v72 = *((_QWORD *)a1 + 4);
      v196 = (unsigned int)v48;
      v198 = 1;
      v200 = v71;
      v199 = v72;
      v197 = 0;
LABEL_88:
      sub_DFF4A0(&v201, &v196);
      goto LABEL_89;
    }
    v77 = sub_CCB8E0(v9, (__int64)a2, a3, a4, (__int64)a5);
    v178 = sub_A73FE0(*a2, *(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF0LL));
    v182 = sub_CC2440((__int64)a2, v77, v78, v79, v80);
    v81 = sub_CCB860((__int64 *)v9);
    v173 = 0;
    v185 = sub_F33C90(*(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL), *a2);
    v82 = *(_DWORD *)(v9 + 20);
    if ( v82 != -1 )
      v173 = v82 / *(_DWORD *)(v9 + 16);
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
      if ( v173 == (_DWORD)v87 )
      {
        return v179;
      }
      else
      {
        v88 = a1;
        v89 = 1;
        if ( !v185 )
          v89 = v178;
        v90 = v179;
        v91 = v87;
        v92 = v6;
        v93 = v88;
        do
        {
          if ( (_BYTE)v90 )
          {
            v94 = v93[6];
            v95 = v185;
            if ( v94 == 1 )
            {
              v102 = *((_QWORD *)v93 + 5);
              v103 = *((_QWORD *)v93 + 4);
              v201 = v91;
              v203 = 1;
              v205 = v102;
              v204 = v103;
              v202 = 0;
            }
            else if ( v94 == 2 )
            {
              v116 = *((_QWORD *)v93 + 4);
              v201 = v91;
              v202 = 0;
              v203 = 2;
              v204 = v116;
            }
            else
            {
              v96 = v93[10];
              if ( (_DWORD)v96 == -1 )
              {
                if ( v94 == 3 )
LABEL_290:
                  BUG();
                sub_DFF4E0(
                  &v201,
                  *((_QWORD *)v93 + 4),
                  v96,
                  *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v93 + 4) + 32LL) + 20LL));
                v95 = v185;
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
                sub_DFF4E0(&v201, v97, v96, v101 + v99);
                v95 = v185;
              }
            }
            v90 = a5(a6, &v201, v182, v92, v178, v95);
            sub_DFF560(&v201);
          }
          v92 += v89;
          if ( v92 >= a4 )
            break;
          ++v91;
        }
        while ( v173 != v91 );
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
    v14 = sub_EBA840(*a2, *(_QWORD *)v12);
    v15 = *(_QWORD *)(v12 + 280);
    v181 = v14;
    v16 = v15 + 24LL * *(unsigned int *)(v12 + 288);
    if ( v15 != v16 )
    {
      v183 = v12;
      v17 = *(_QWORD *)(v12 + 280);
      v18 = v14;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v17 + 68LL) & 1) == 0 || *(_QWORD *)(*(_QWORD *)v17 + 40LL) )
        {
          v19 = *((_QWORD *)a1 + 4);
          v20 = *a1 + *(_DWORD *)(v17 + 8);
          sub_DFF4E0(&v201, v19, v20, (unsigned int)v20);
          v24 = *(_QWORD *)v17;
          if ( *(char *)(*(_QWORD *)v17 + 29LL) < 0 )
            v24 = sub_B4E9E0(*(_QWORD *)v17);
          v25 = *(unsigned int *)(v24 + 68);
          if ( (v25 & 0xFFFFFFF0) == 0 )
          {
            v180 = v24;
            sub_B5AD70(v24, v19, v25, v21, v22, v23);
            LODWORD(v25) = *(_DWORD *)(v180 + 68);
          }
          v26 = *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL * (((unsigned int)v25 >> 4) - 1)) + a3;
          if ( (_BYTE)v13 )
            v13 = sub_D7F2B0(&v201, a2, v26, a4, a5, a6);
          sub_DFF560(&v201);
        }
        v17 += 24;
      }
      while ( v16 != v17 );
      v12 = v183;
    }
    v27 = *(_DWORD **)(v12 + 8);
    v184 = &v27[8 * *(unsigned int *)(v12 + 16)];
    if ( v27 != v184 )
    {
      for ( i = *(_DWORD **)(v12 + 8); v184 != i; i += 8 )
      {
        v29 = *a1 + i[2];
        sub_DFF4E0(&v201, *((_QWORD *)a1 + 4), v29, (unsigned int)v29);
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
                  v189 = v108;
                  v112 = sub_962430((__int64)(v107 + 294), 24, 24, 3, v108, v30);
                  v108 = v189;
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
        v33 = *(_QWORD *)(v181 + 72);
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
          v191 = *(_DWORD *)(v33 + 80);
          v187 = *(__int64 **)(v33 + 64);
          v145 = ((((((((v36 >> 1) | v36 | (((v36 >> 1) | v36) >> 2)) >> 4)
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
          if ( v145 < 0x40 )
            v145 = 64;
          *(_DWORD *)(v33 + 80) = v145;
          v146 = (_QWORD *)sub_220C370(16LL * v145, 8, v34, 64, v35, v127);
          v147 = v146;
          *(_QWORD *)(v33 + 64) = v146;
          if ( v187 )
          {
            *(_QWORD *)(v33 + 72) = 0;
            v148 = &v187[2 * v191];
            v149 = *(unsigned int *)(v33 + 80);
            for ( j = &v146[2 * v149]; j != v146; v146 += 2 )
              *v146 = -4096;
            v151 = v187;
            v188 = v149 - 1;
            do
            {
              v152 = *v151;
              if ( *v151 != -8192 && v152 != -4096 )
              {
                if ( !(_DWORD)v149 )
                {
                  *(_QWORD *)&dword_0 = *v151;
                  BUG();
                }
                v153 = v188 & (((unsigned int)v152 >> 9) ^ ((unsigned int)v152 >> 4));
                v154 = &v147[2 * v153];
                v155 = *v154;
                if ( *v154 != v152 && v155 != -4096 )
                {
                  v195 = 1;
                  v194 = nullptr;
                  while ( 1 )
                  {
                    if ( !v194 )
                    {
                      if ( v155 != -8192 )
                        v154 = nullptr;
                      v194 = v154;
                    }
                    v153 = v188 & (v195 + v153);
                    ++v195;
                    v154 = &v147[2 * v153];
                    v155 = *v154;
                    if ( v152 == *v154 )
                      break;
                    if ( v155 == -4096 )
                    {
                      if ( v194 )
                        v154 = v194;
                      break;
                    }
                  }
                }
                *v154 = v152;
                v154[1] = v151[1];
                ++*(_DWORD *)(v33 + 72);
              }
              v151 += 2;
            }
            while ( v148 != v151 );
            operator delete();
            v147 = *(_QWORD **)(v33 + 64);
            v156 = *(_DWORD *)(v33 + 80);
            v126 = *(_DWORD *)(v33 + 72) + 1;
          }
          else
          {
            v161 = *(unsigned int *)(v33 + 80);
            *(_QWORD *)(v33 + 72) = 0;
            v156 = v161;
            for ( k = &v146[2 * v161]; k != v146; v146 += 2 )
              *v146 = -4096;
            v126 = 1;
          }
          if ( !v156 )
            goto LABEL_291;
          v157 = v156 - 1;
          v158 = v157 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
          v38 = &v147[2 * v158];
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
            v163 = &v147[2 * v158];
            v164 = 1;
            v38 = nullptr;
            while ( 1 )
            {
              if ( !v38 && v128 == -8192 )
                v38 = v163;
              v165 = v164 + 1;
              v166 = v157 & (v158 + v164);
              v158 = v166;
              v163 = &v147[2 * v166];
              v128 = *v163;
              if ( v32 == *v163 )
              {
                v38 = &v147[2 * v166];
                goto LABEL_179;
              }
              if ( v128 == -4096 )
                break;
              v164 = v165;
            }
            if ( v38 )
              goto LABEL_178;
            v38 = &v147[2 * v166];
          }
        }
        else
        {
LABEL_183:
          v190 = *(__int64 **)(v33 + 64);
          v186 = *(_DWORD *)(v33 + 80);
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
          v131 = (_QWORD *)sub_220C370(16LL * (unsigned int)v130, 8, v34, 64, v35, v30);
          v132 = v131;
          *(_QWORD *)(v33 + 64) = v131;
          if ( v190 )
          {
            *(_QWORD *)(v33 + 72) = 0;
            v133 = &v190[2 * v186];
            v134 = *(unsigned int *)(v33 + 80);
            for ( m = &v131[2 * v134]; m != v131; v131 += 2 )
              *v131 = -4096;
            v136 = v190;
            for ( n = v134 - 1; v133 != v136; v136 += 2 )
            {
              v138 = *v136;
              if ( *v136 != -4096 && v138 != -8192 )
              {
                if ( !(_DWORD)v134 )
                {
                  *(_QWORD *)&dword_0 = *v136;
                  BUG();
                }
                v139 = n & (((unsigned int)v138 >> 9) ^ ((unsigned int)v138 >> 4));
                v140 = &v132[2 * v139];
                v141 = *v140;
                if ( *v140 != v138 && v141 != -4096 )
                {
                  v193 = 1;
                  v192 = nullptr;
                  while ( 1 )
                  {
                    if ( !v192 )
                    {
                      if ( v141 != -8192 )
                        v140 = nullptr;
                      v192 = v140;
                    }
                    v139 = n & (v193 + v139);
                    v140 = &v132[2 * v139];
                    v141 = *v140;
                    if ( v138 == *v140 )
                      break;
                    if ( v141 == -4096 )
                    {
                      if ( v192 )
                        v140 = v192;
                      break;
                    }
                    ++v193;
                  }
                }
                *v140 = v138;
                v140[1] = v136[1];
                ++*(_DWORD *)(v33 + 72);
              }
            }
            operator delete();
            v132 = *(_QWORD **)(v33 + 64);
            v142 = *(_DWORD *)(v33 + 80);
            v126 = *(_DWORD *)(v33 + 72) + 1;
          }
          else
          {
            v159 = *(unsigned int *)(v33 + 80);
            *(_QWORD *)(v33 + 72) = 0;
            v142 = v159;
            for ( ii = &v131[2 * v159]; ii != v131; v131 += 2 )
              *v131 = -4096;
            v126 = 1;
          }
          if ( !v142 )
          {
LABEL_291:
            ++*(_DWORD *)(v33 + 72);
            BUG();
          }
          v143 = v142 - 1;
          v144 = v143 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
          v38 = &v132[2 * v144];
          v128 = *v38;
          if ( v32 == *v38 )
            goto LABEL_179;
          if ( v128 != -4096 )
          {
            v167 = &v132[2 * (v143 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4)))];
            v168 = 1;
            v38 = nullptr;
            while ( 1 )
            {
              if ( v128 == -8192 && !v38 )
                v38 = v167;
              v169 = v168 + 1;
              v170 = v144 + v168;
              v144 = v143 & v170;
              v167 = &v132[2 * (v143 & v170)];
              v128 = *v167;
              if ( v32 == *v167 )
              {
                v38 = &v132[2 * (v143 & v170)];
                goto LABEL_179;
              }
              if ( v128 == -4096 )
                break;
              v168 = v169;
            }
            if ( v38 )
            {
LABEL_178:
              v128 = *v38;
              goto LABEL_179;
            }
            v38 = &v132[2 * (v143 & v170)];
          }
        }
        *(_DWORD *)(v33 + 72) = v126;
LABEL_181:
        *v38 = v32;
        v40 = 0;
        v38[1] = 0;
LABEL_29:
        v41 = sub_A74320(*a2, v40) + a3;
        if ( (_BYTE)v13 && (v13 = sub_D7F2B0(&v201, a2, v41, a4, a5, a6), (_BYTE)v13) )
          sub_E00FC0(&v201);
        else
          v13 = 0;
        sub_DFF560(&v201);
      }
    }
  }
  else
  {
    v74 = *a2;
    v75 = sub_CCB860((__int64 *)v9);
    v76 = sub_A73FE0(v74, *(_QWORD *)(v75 & 0xFFFFFFFFFFFFFFF0LL));
    return (unsigned int)a5(a6, (__int64 *)a1, *(unsigned int *)(v9 + 48), a3, v76, 0);
  }
  return v13;
}

