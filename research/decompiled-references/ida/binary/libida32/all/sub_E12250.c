__int64 __fastcall sub_E12250(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // r15
  const __m128i *v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r12
  const __m128i *v15; // r13
  _QWORD *m; // rax
  const __m128i *v17; // r10
  __int64 v18; // rdx
  int v19; // r13d
  __int64 *v20; // r11
  int v21; // r13d
  int v22; // eax
  int v23; // r8d
  __int64 *v24; // r10
  unsigned int n; // r9d
  __int64 v26; // rax
  char v27; // al
  __int64 *v28; // r11
  int v29; // eax
  unsigned int v30; // edx
  __int64 *v31; // rdi
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // r12
  int v35; // eax
  __int64 v36; // rbp
  unsigned __int64 v37; // rbp
  unsigned int v38; // r14d
  __int64 *v39; // r13
  unsigned __int64 v40; // rsi
  unsigned int v41; // ecx
  __int64 *v42; // rdx
  __int64 v43; // rax
  _DWORD *v44; // rcx
  __int64 result; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // edi
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rdx
  int v62; // r10d
  __int64 *v63; // r9
  _QWORD *v64; // rcx
  __int64 *v65; // rdx
  int i; // r12d
  __int64 v67; // rcx
  unsigned int v68; // r8d
  __int64 v69; // rdi
  __int64 v70; // r11
  int v71; // ecx
  int v72; // esi
  int v73; // r8d
  unsigned int v74; // edi
  __int64 v75; // r9
  int v76; // esi
  unsigned __int64 *v77; // r10
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rcx
  _QWORD *v82; // rdx
  int v83; // r10d
  __int64 *v84; // r9
  _QWORD *v85; // rcx
  __int64 *v86; // rdx
  int v87; // r15d
  __int64 v88; // rcx
  unsigned int v89; // r8d
  __int64 v90; // rdi
  __int64 v91; // r11
  int v92; // ecx
  int v93; // esi
  int v94; // edi
  unsigned int v95; // r12d
  __int64 v96; // r8
  int v97; // esi
  unsigned __int64 *v98; // r9
  int v99; // eax
  int v100; // edx
  __int64 v101; // rcx
  bool v102; // zf
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  bool v105; // r9
  _QWORD *v106; // rbp
  const __m128i *v107; // r8
  _QWORD *j; // rax
  const __m128i *v109; // r9
  __int64 v110; // rdx
  int v111; // r13d
  int v112; // r12d
  int v113; // eax
  bool v114; // r9
  int v115; // r8d
  unsigned int k; // r13d
  __int64 v117; // rax
  char v118; // al
  __int64 *v119; // r11
  __int64 v120; // r10
  __int64 v121; // r13
  unsigned __int64 v122; // rsi
  __int64 v123; // r14
  __int64 v124; // rsi
  __int64 v125; // rcx
  _QWORD *v126; // rcx
  _QWORD *v127; // rdx
  __int64 v128; // rcx
  _QWORD *v129; // rcx
  _QWORD *v130; // rdx
  __int64 v131; // rax
  _QWORD *v132; // rdx
  _QWORD *v133; // rax
  __int64 v134; // rax
  _QWORD *v135; // rdx
  _QWORD *v136; // rax
  int v137; // r15d
  __int64 v138; // r14
  __int64 v139; // r14
  __int64 v140; // rdi
  int v141; // eax
  int v142; // ecx
  const __m128i *v143; // rbx
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // r11
  __int64 v147; // rdi
  __int32 v148; // eax
  __int64 v149; // rdi
  int v150; // eax
  int v151; // ecx
  const __m128i *v152; // r9
  const __m128i *v153; // r11
  __int64 v154; // rcx
  __int64 *v155; // rbx
  __int64 v156; // rax
  __int64 v157; // rdi
  const __m128i *v158; // r11
  __m128i *v159; // r11
  __int32 v160; // eax
  __int64 v161; // rsi
  unsigned __int64 v162; // rdx
  unsigned __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // rdi
  __int64 v166; // rsi
  unsigned __int64 v167; // rdx
  unsigned __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // rdi
  __int64 v171; // r10
  __int64 v172; // rdx
  unsigned __int64 v173; // rcx
  unsigned __int64 v174; // rsi
  __int64 v175; // rcx
  __int64 v176; // r8
  bool v177; // dl
  char v178; // al
  __int64 v179; // r8
  __int64 v180; // rdx
  unsigned __int64 v181; // rcx
  unsigned __int64 v182; // rsi
  __int64 v183; // rcx
  __int64 v184; // r9
  bool v185; // al
  char v186; // al
  __int64 v187; // r11
  int v188; // [rsp+8h] [rbp-A0h]
  unsigned int v189; // [rsp+10h] [rbp-98h]
  const __m128i *v190; // [rsp+10h] [rbp-98h]
  bool v191; // [rsp+10h] [rbp-98h]
  bool v192; // [rsp+10h] [rbp-98h]
  __int64 *v193; // [rsp+10h] [rbp-98h]
  __int64 v194; // [rsp+10h] [rbp-98h]
  int v195; // [rsp+10h] [rbp-98h]
  __int64 v196; // [rsp+10h] [rbp-98h]
  __int64 *v197; // [rsp+18h] [rbp-90h]
  int v198; // [rsp+18h] [rbp-90h]
  unsigned int v199; // [rsp+18h] [rbp-90h]
  int v200; // [rsp+20h] [rbp-88h]
  bool v201; // [rsp+20h] [rbp-88h]
  __int64 v202; // [rsp+20h] [rbp-88h]
  int v203; // [rsp+20h] [rbp-88h]
  __m128i *v204; // [rsp+20h] [rbp-88h]
  __int64 v205; // [rsp+28h] [rbp-80h]
  const __m128i *v206; // [rsp+28h] [rbp-80h]
  int v207; // [rsp+30h] [rbp-78h]
  const __m128i *v208; // [rsp+30h] [rbp-78h]
  __int64 v209; // [rsp+30h] [rbp-78h]
  const __m128i *v210; // [rsp+38h] [rbp-70h]
  __int64 v211; // [rsp+38h] [rbp-70h]
  int v212; // [rsp+38h] [rbp-70h]
  __int64 v213; // [rsp+40h] [rbp-68h]
  __int64 v214; // [rsp+40h] [rbp-68h]
  int v215; // [rsp+48h] [rbp-60h]
  unsigned int v216; // [rsp+48h] [rbp-60h]
  int v217; // [rsp+4Ch] [rbp-5Ch]
  __int64 v218; // [rsp+50h] [rbp-58h]
  __int64 v219; // [rsp+58h] [rbp-50h]
  __int64 v220; // [rsp+60h] [rbp-48h] BYREF
  __int64 v221; // [rsp+68h] [rbp-40h]

  v6 = a1;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2E )
  {
    v36 = *(_QWORD *)(a2 + 40);
    if ( (v36 & 7) != 0 || (v37 = v36 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v47 = *(_QWORD *)v46;
      if ( *(_BYTE *)(*(_QWORD *)v46 + 16LL) != 48 )
        v47 = 0;
      v48 = sub_F3D1D0(v47, a2, a3, a4, a5);
      v53 = sub_B5AC50(v48, a2, v49, v50, v51, v52);
      v37 = v53;
      if ( v53 )
      {
        v54 = *(_QWORD *)(v53 + 40);
        v37 = v54 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v54 & 7) != 0 )
          v37 = 0;
      }
    }
    v38 = *(_DWORD *)(v6 + 72);
    v39 = *(__int64 **)(v6 + 56);
    if ( !v38 )
      goto LABEL_54;
    v40 = v38 - 1;
    v41 = v40 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
    v42 = &v39[2 * v41];
    v43 = *v42;
    if ( *v42 == v37 )
    {
LABEL_37:
      v44 = v42 + 1;
      result = (unsigned int)(*((_DWORD *)v42 + 2) + 1);
LABEL_38:
      *v44 = result;
      return result;
    }
    v55 = 1;
    a5 = 0;
    if ( v43 != -4096 )
    {
      while ( 1 )
      {
        if ( v43 == -8192 && !a5 )
          a5 = (__int64)v42;
        a6 = (unsigned int)(v55 + 1);
        v41 = v40 & (v55 + v41);
        v42 = &v39[2 * v41];
        v43 = *v42;
        if ( *v42 == v37 )
          goto LABEL_37;
        if ( v43 == -4096 )
          break;
        ++v55;
      }
      if ( a5 )
        v42 = (__int64 *)a5;
    }
    a4 = (unsigned int)(*(_DWORD *)(v6 + 64) + 1);
    if ( 4 * (int)a4 < 3 * v38 )
    {
      if ( v38 - *(_DWORD *)(v6 + 68) - (unsigned int)a4 > v38 >> 3 )
      {
        v56 = *v42;
        goto LABEL_51;
      }
      v78 = (((v40 >> 1) | v40 | (((v40 >> 1) | v40) >> 2)) >> 4) | (v40 >> 1) | v40 | (((v40 >> 1) | v40) >> 2);
      v79 = ((((v78 >> 8) | v78) >> 16) | (v78 >> 8) | v78) + 1;
      if ( (unsigned int)v79 < 0x40 )
        LODWORD(v79) = 64;
      *(_DWORD *)(v6 + 72) = v79;
      v80 = sub_220C370(16LL * (unsigned int)v79, 8, 64, a4, a5, a6);
      *(_QWORD *)(v6 + 56) = v80;
      if ( v39 )
      {
        v81 = *(unsigned int *)(v6 + 72);
        v82 = (_QWORD *)v80;
        *(_QWORD *)(v6 + 64) = 0;
        v83 = v81;
        v84 = &v39[2 * v38];
        v85 = (_QWORD *)(v80 + 16 * v81);
        if ( (_QWORD *)v80 != v85 )
        {
          do
          {
            *v82 = -4096;
            v82 += 2;
          }
          while ( v85 != v82 );
        }
        v86 = v39;
        v87 = v83 - 1;
        do
        {
          v88 = *v86;
          if ( *v86 != -4096 && v88 != -8192 )
          {
            if ( !v83 )
            {
              *(_QWORD *)&dword_0 = *v86;
              BUG();
            }
            v89 = v87 & (((unsigned int)v88 >> 9) ^ ((unsigned int)v88 >> 4));
            v90 = v80 + 16LL * v89;
            v91 = *(_QWORD *)v90;
            if ( v88 != *(_QWORD *)v90 && v91 != -4096 )
            {
              v188 = 1;
              v139 = 0;
              while ( 1 )
              {
                if ( v91 == -8192 && !v139 )
                  v139 = v90;
                v89 = v87 & (v188 + v89);
                v90 = v80 + 16LL * v89;
                v91 = *(_QWORD *)v90;
                if ( v88 == *(_QWORD *)v90 )
                  break;
                if ( v91 == -4096 )
                {
                  if ( v139 )
                    v90 = v139;
                  break;
                }
                ++v188;
              }
            }
            *(_QWORD *)v90 = v88;
            v92 = *((_DWORD *)v86 + 2);
            ++*(_DWORD *)(v6 + 64);
            *(_DWORD *)(v90 + 8) = v92;
          }
          v86 += 2;
        }
        while ( v84 != v86 );
        operator delete();
        v80 = *(_QWORD *)(v6 + 56);
        v93 = *(_DWORD *)(v6 + 72);
        LODWORD(a4) = *(_DWORD *)(v6 + 64) + 1;
      }
      else
      {
        v128 = *(unsigned int *)(v6 + 72);
        *(_QWORD *)(v6 + 64) = 0;
        v93 = v128;
        v129 = (_QWORD *)(v80 + 16 * v128);
        if ( (_QWORD *)v80 != v129 )
        {
          v130 = (_QWORD *)v80;
          do
          {
            *v130 = -4096;
            v130 += 2;
          }
          while ( v129 != v130 );
        }
        LODWORD(a4) = 1;
      }
      if ( v93 )
      {
        v94 = v93 - 1;
        v56 = v37;
        v95 = v94 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
        v42 = (__int64 *)(v80 + 16LL * v95);
        v96 = *v42;
        if ( *v42 == v37 )
          goto LABEL_51;
        v97 = 1;
        v98 = nullptr;
        if ( v96 != -4096 )
        {
          while ( 1 )
          {
            if ( v96 == -8192 && !v98 )
              v98 = (unsigned __int64 *)v42;
            v95 = v94 & (v97 + v95);
            v42 = (__int64 *)(v80 + 16LL * v95);
            v96 = *v42;
            if ( *v42 == v37 )
              break;
            if ( v96 == -4096 )
            {
              if ( !v98 )
                goto LABEL_70;
              v56 = *v98;
              v42 = (__int64 *)v98;
              goto LABEL_51;
            }
            ++v97;
          }
LABEL_91:
          v56 = v37;
LABEL_51:
          *(_DWORD *)(v6 + 64) = a4;
          if ( v56 != -4096 )
            --*(_DWORD *)(v6 + 68);
          goto LABEL_53;
        }
        goto LABEL_70;
      }
    }
    else
    {
LABEL_54:
      v57 = (((((((2 * v38 - 1) | ((unsigned __int64)(2 * v38 - 1) >> 1)) >> 2)
              | (2 * v38 - 1)
              | ((unsigned __int64)(2 * v38 - 1) >> 1)) >> 4)
            | (((2 * v38 - 1) | ((unsigned __int64)(2 * v38 - 1) >> 1)) >> 2)
            | (2 * v38 - 1)
            | ((unsigned __int64)(2 * v38 - 1) >> 1)) >> 8)
          | (((((2 * v38 - 1) | ((unsigned __int64)(2 * v38 - 1) >> 1)) >> 2)
            | (2 * v38 - 1)
            | ((unsigned __int64)(2 * v38 - 1) >> 1)) >> 4)
          | (((2 * v38 - 1) | ((unsigned __int64)(2 * v38 - 1) >> 1)) >> 2)
          | (2 * v38 - 1)
          | ((unsigned __int64)(2 * v38 - 1) >> 1);
      v58 = ((v57 >> 16) | v57) + 1;
      if ( (unsigned int)v58 < 0x40 )
        LODWORD(v58) = 64;
      *(_DWORD *)(v6 + 72) = v58;
      v59 = sub_220C370(16LL * (unsigned int)v58, 8, 64, a4, a5, a6);
      *(_QWORD *)(v6 + 56) = v59;
      if ( v39 )
      {
        v60 = *(unsigned int *)(v6 + 72);
        v61 = (_QWORD *)v59;
        *(_QWORD *)(v6 + 64) = 0;
        v62 = v60;
        v63 = &v39[2 * v38];
        v64 = (_QWORD *)(v59 + 16 * v60);
        if ( (_QWORD *)v59 != v64 )
        {
          do
          {
            *v61 = -4096;
            v61 += 2;
          }
          while ( v64 != v61 );
        }
        v65 = v39;
        for ( i = v62 - 1; v63 != v65; v65 += 2 )
        {
          v67 = *v65;
          if ( *v65 != -8192 && v67 != -4096 )
          {
            if ( !v62 )
            {
              *(_QWORD *)&dword_0 = *v65;
              BUG();
            }
            v68 = i & (((unsigned int)v67 >> 9) ^ ((unsigned int)v67 >> 4));
            v69 = v59 + 16LL * v68;
            v70 = *(_QWORD *)v69;
            if ( v67 != *(_QWORD *)v69 )
            {
              v137 = 1;
              v138 = 0;
              if ( v70 != -4096 )
              {
                while ( 1 )
                {
                  if ( v70 == -8192 && !v138 )
                    v138 = v69;
                  v68 = i & (v137 + v68);
                  v69 = v59 + 16LL * v68;
                  v70 = *(_QWORD *)v69;
                  if ( v67 == *(_QWORD *)v69 )
                    break;
                  if ( v70 == -4096 )
                  {
                    if ( v138 )
                      v69 = v138;
                    break;
                  }
                  ++v137;
                }
              }
            }
            *(_QWORD *)v69 = v67;
            v71 = *((_DWORD *)v65 + 2);
            ++*(_DWORD *)(v6 + 64);
            *(_DWORD *)(v69 + 8) = v71;
          }
        }
        operator delete();
        v59 = *(_QWORD *)(v6 + 56);
        v72 = *(_DWORD *)(v6 + 72);
        LODWORD(a4) = *(_DWORD *)(v6 + 64) + 1;
      }
      else
      {
        v125 = *(unsigned int *)(v6 + 72);
        *(_QWORD *)(v6 + 64) = 0;
        v72 = v125;
        v126 = (_QWORD *)(v59 + 16 * v125);
        if ( (_QWORD *)v59 != v126 )
        {
          v127 = (_QWORD *)v59;
          do
          {
            *v127 = -4096;
            v127 += 2;
          }
          while ( v126 != v127 );
        }
        LODWORD(a4) = 1;
      }
      if ( v72 )
      {
        v73 = v72 - 1;
        v56 = v37;
        v74 = v73 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
        v42 = (__int64 *)(v59 + 16LL * v74);
        v75 = *v42;
        if ( *v42 == v37 )
          goto LABEL_51;
        v76 = 1;
        v77 = nullptr;
        if ( v75 != -4096 )
        {
          while ( 1 )
          {
            if ( v75 == -8192 && !v77 )
              v77 = (unsigned __int64 *)v42;
            v74 = v73 & (v76 + v74);
            v42 = (__int64 *)(v59 + 16LL * v74);
            v75 = *v42;
            if ( *v42 == v37 )
              goto LABEL_91;
            if ( v75 == -4096 )
            {
              if ( !v77 )
                break;
              v56 = *v77;
              v42 = (__int64 *)v77;
              goto LABEL_51;
            }
            ++v76;
          }
        }
LABEL_70:
        *(_DWORD *)(v6 + 64) = a4;
LABEL_53:
        *v42 = v37;
        v44 = v42 + 1;
        result = 1;
        *((_DWORD *)v42 + 2) = 0;
        goto LABEL_38;
      }
    }
    ++*(_DWORD *)(v6 + 64);
    BUG();
  }
  v7 = *(_DWORD *)(a1 + 120);
  v8 = *(unsigned int *)(a2 + 100);
  v9 = a2 + 104;
  v10 = *(const __m128i **)(a1 + 104);
  if ( v7 )
  {
    v220 = a2 + 104;
    v221 = v8;
    v29 = sub_E10AB0((__int64)&v220);
    v30 = v7 - 1;
    v31 = nullptr;
    v32 = v9 + 8 * v8;
    v33 = (v7 - 1) & v29;
    a5 = 1;
    while ( 1 )
    {
      LOBYTE(a6) = v9 == -1;
      v20 = &v10->m128i_i64[3 * v33];
      v34 = *v20;
      if ( *v20 != -1 && v9 != -1 )
      {
        if ( v34 == -2 )
        {
          if ( v9 != -2 )
            goto LABEL_29;
        }
        else
        {
          if ( v9 == -2 || v8 != v20[1] )
            goto LABEL_29;
          if ( v9 != v32 )
          {
            v120 = *v20;
            v121 = v9;
            v194 = v8;
            do
            {
              a6 = *(_QWORD *)(*(_QWORD *)v120 + 40LL);
              v124 = *(_QWORD *)(*(_QWORD *)v121 + 40LL);
              if ( (v124 & 7) != 0 )
              {
                v122 = 0;
                if ( (a6 & 7) != 0 )
                  goto LABEL_126;
              }
              else
              {
                v122 = v124 & 0xFFFFFFFFFFFFFFF8LL;
                v123 = 0;
                if ( (a6 & 7) != 0 )
                  goto LABEL_125;
              }
              a6 &= 0xFFFFFFFFFFFFFFF8LL;
              v123 = a6;
LABEL_125:
              if ( v123 != v122 )
              {
                v8 = v194;
                goto LABEL_29;
              }
LABEL_126:
              v121 += 8;
              v120 += 8;
            }
            while ( v32 != v121 );
          }
        }
LABEL_46:
        result = (unsigned int)(*((_DWORD *)v20 + 4) + 1);
        *((_DWORD *)v20 + 4) = result;
        return result;
      }
      if ( (v34 & v9) == 0xFFFFFFFFFFFFFFFFLL )
        goto LABEL_46;
      if ( v34 == -1 )
        break;
LABEL_29:
      if ( v34 == -2 && !v31 )
        v31 = &v10->m128i_i64[3 * v33];
      v35 = a5 + v33;
      a5 = (unsigned int)(a5 + 1);
      v33 = v30 & v35;
    }
    v99 = *(_DWORD *)(v6 + 112);
    v7 = *(_DWORD *)(v6 + 120);
    if ( v31 )
      v20 = v31;
    v100 = v99 + 1;
    a4 = (unsigned int)(4 * (v99 + 1));
    if ( (unsigned int)a4 >= 3 * v7 )
    {
      v10 = *(const __m128i **)(v6 + 104);
      goto LABEL_3;
    }
    v101 = v7 >> 3;
    if ( v7 - *(_DWORD *)(v6 + 116) - v100 > (unsigned int)v101 )
      goto LABEL_97;
    v190 = *(const __m128i **)(v6 + 104);
    v103 = ((((((((((v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 2) | (v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 4)
              | (((v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 2)
              | (v7 - 1)
              | ((unsigned __int64)(v7 - 1) >> 1)) >> 8)
            | (((((v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 2) | (v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 4)
            | (((v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 2)
            | (v7 - 1)
            | ((unsigned __int64)(v7 - 1) >> 1)) >> 16)
          | (((((((v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 2) | (v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 4)
            | (((v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 2)
            | (v7 - 1)
            | ((unsigned __int64)(v7 - 1) >> 1)) >> 8)
          | (((((v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 2) | (v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 4)
          | (((v7 - 1) | ((unsigned __int64)(v7 - 1) >> 1)) >> 2)
          | (v7 - 1)
          | ((unsigned __int64)(v7 - 1) >> 1))
         + 1;
    if ( (unsigned int)v103 < 0x40 )
      LODWORD(v103) = 64;
    *(_DWORD *)(v6 + 120) = v103;
    v104 = sub_220C370(24LL * (unsigned int)v103, 8, 64, v101, a5, a6);
    v105 = v9 == -1;
    v106 = (_QWORD *)v104;
    *(_QWORD *)(v6 + 104) = v104;
    if ( v190 )
    {
      *(_QWORD *)(v6 + 112) = 0;
      v107 = (const __m128i *)((char *)v190 + 24 * v7);
      for ( j = (_QWORD *)(v104 + 24LL * *(unsigned int *)(v6 + 120)); j != v106; *(v106 - 2) = 0 )
      {
        *v106 = -1;
        v106 += 3;
      }
      if ( v190 != v107 )
      {
        v109 = v190;
        while ( 1 )
        {
          v110 = v109->m128i_i64[1];
          if ( v109->m128i_i64[0] >= 0xFFFFFFFFFFFFFFFELL )
            goto LABEL_108;
          v206 = v107;
          v203 = *(_DWORD *)(v6 + 120);
          if ( !v203 )
          {
            *(__m128i *)&dword_0 = _mm_loadu_si128(v109);
            BUG();
          }
          v149 = *(_QWORD *)(v6 + 104);
          v208 = v109;
          v220 = v109->m128i_i64[0];
          v214 = v149;
          v221 = v110;
          v150 = sub_E10AB0((__int64)&v220);
          v151 = v203;
          v152 = v208;
          v212 = 1;
          v204 = nullptr;
          v209 = v6;
          v153 = v152;
          v217 = v151 - 1;
          v216 = (v151 - 1) & v150;
          while ( 1 )
          {
            v154 = v153->m128i_i64[1];
            v155 = (__int64 *)(v214 + 24LL * v216);
            v156 = v153->m128i_i64[0];
            v157 = *v155;
            if ( *v155 == -1 || v156 == -1 )
            {
              v185 = (v157 & v156) == -1;
            }
            else
            {
              if ( v157 != -2 && v156 != -2 )
              {
                if ( v154 != v155[1] )
                  goto LABEL_197;
                v179 = v156 + 8 * v154;
                v180 = 0;
                while ( 2 )
                {
                  if ( v179 == v156 + v180 )
                    goto LABEL_267;
                  v183 = *(_QWORD *)(*(_QWORD *)(v156 + v180) + 40LL);
                  v184 = *(_QWORD *)(*(_QWORD *)(v157 + v180) + 40LL) & 7LL;
                  if ( (v183 & 7) != 0 )
                  {
                    v181 = 0;
                    if ( (_DWORD)v184 )
                    {
LABEL_260:
                      v180 += 8;
                      continue;
                    }
LABEL_258:
                    v182 = *(_QWORD *)(*(_QWORD *)(v157 + v180) + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v181 = v183 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( !(_DWORD)v184 )
                      goto LABEL_258;
                    v182 = 0;
                  }
                  break;
                }
                if ( v182 != v181 )
                  goto LABEL_197;
                goto LABEL_260;
              }
              v185 = v156 == -2 && v157 == -2;
            }
            if ( v185 )
            {
LABEL_267:
              v109 = v153;
              v107 = v206;
              v159 = (__m128i *)(v214 + 24LL * v216);
              v6 = v209;
              goto LABEL_200;
            }
LABEL_197:
            v219 = *v155;
            v218 = v155[1];
            if ( sub_E10860(*v155, v218, -1, 0) )
              break;
            v178 = sub_E10860(v219, v218, -2, 0);
            if ( v204 || !v178 )
              v155 = (__int64 *)v204;
            v204 = (__m128i *)v155;
            v216 = v217 & (v212 + v216);
            ++v212;
          }
          v109 = v158;
          v159 = (__m128i *)(v214 + 24LL * v216);
          v107 = v206;
          v6 = v209;
          if ( v204 )
            v159 = v204;
LABEL_200:
          v160 = v109[1].m128i_i32[0];
          *v159 = _mm_loadu_si128(v109);
          v159[1].m128i_i32[0] = v160;
          ++*(_DWORD *)(v6 + 112);
LABEL_108:
          v109 = (const __m128i *)((char *)v109 + 24);
          if ( v107 == v109 )
          {
            v105 = v9 == -1;
            break;
          }
        }
      }
      v191 = v105;
      operator delete();
      v106 = *(_QWORD **)(v6 + 104);
      v111 = *(_DWORD *)(v6 + 120);
      v105 = v191;
    }
    else
    {
      v134 = *(unsigned int *)(v6 + 120);
      *(_QWORD *)(v6 + 112) = 0;
      v111 = v134;
      v135 = &v106[3 * v134];
      if ( v135 != v106 )
      {
        v136 = v106;
        do
        {
          *v136 = -1;
          v136 += 3;
          *(v136 - 2) = 0;
        }
        while ( v135 != v136 );
      }
    }
    v192 = v105;
    v20 = nullptr;
    if ( !v111 )
      goto LABEL_134;
    v220 = v9;
    v112 = v111 - 1;
    v221 = v8;
    v113 = sub_E10AB0((__int64)&v220);
    v114 = v192;
    v115 = 1;
    v24 = nullptr;
    for ( k = (v111 - 1) & v113; ; k = v112 & (v198 + k) )
    {
      v20 = &v106[3 * k];
      v117 = *v20;
      if ( *v20 == -1 || v114 )
      {
        if ( (v117 & v9) == 0xFFFFFFFFFFFFFFFFLL )
          goto LABEL_134;
        if ( v117 == -1 )
        {
LABEL_132:
          if ( v24 )
            v20 = v24;
          goto LABEL_134;
        }
      }
      else
      {
        if ( v117 != -2 )
        {
          if ( v9 == -2 || v8 != v20[1] )
            goto LABEL_118;
          v161 = v9;
          while ( 2 )
          {
            if ( v9 + 8 * v8 == v161 )
              goto LABEL_134;
            v164 = *(_QWORD *)(*(_QWORD *)v161 + 40LL);
            v165 = *(_QWORD *)(*(_QWORD *)v117 + 40LL) & 7LL;
            if ( (v164 & 7) != 0 )
            {
              v162 = 0;
              if ( (_DWORD)v165 )
              {
LABEL_210:
                v161 += 8;
                v117 += 8;
                continue;
              }
LABEL_208:
              v163 = *(_QWORD *)(*(_QWORD *)v117 + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v162 = v164 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !(_DWORD)v165 )
                goto LABEL_208;
              v163 = 0;
            }
            break;
          }
          if ( v163 != v162 )
            goto LABEL_118;
          goto LABEL_210;
        }
        if ( v9 == -2 )
          goto LABEL_134;
      }
LABEL_118:
      v201 = v114;
      v198 = v115;
      v193 = v24;
      v118 = sub_E10860(*v20, v20[1], -2, 0);
      v114 = v201;
      if ( v193 || !v118 )
        v119 = v193;
      v24 = v119;
      v115 = v198 + 1;
    }
  }
LABEL_3:
  v11 = (((((((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
          | (2 * v7 - 1)
          | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 4)
        | (((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
        | (2 * v7 - 1)
        | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 8)
      | (((((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
        | (2 * v7 - 1)
        | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 4)
      | (((2 * v7 - 1) | ((unsigned __int64)(2 * v7 - 1) >> 1)) >> 2)
      | (2 * v7 - 1)
      | ((unsigned __int64)(2 * v7 - 1) >> 1);
  v12 = ((v11 >> 16) | v11) + 1;
  if ( (unsigned int)v12 < 0x40 )
    LODWORD(v12) = 64;
  *(_DWORD *)(v6 + 120) = v12;
  v13 = sub_220C370(24LL * (unsigned int)v12, 8, 64, a4, a5, a6);
  v14 = (_QWORD *)v13;
  *(_QWORD *)(v6 + 104) = v13;
  if ( v10 )
  {
    *(_QWORD *)(v6 + 112) = 0;
    v15 = (const __m128i *)((char *)v10 + 24 * v7);
    for ( m = (_QWORD *)(v13 + 24LL * *(unsigned int *)(v6 + 120)); m != v14; *(v14 - 2) = 0 )
    {
      *v14 = -1;
      v14 += 3;
    }
    if ( v15 == v10 )
      goto LABEL_12;
    v17 = v10;
    while ( 1 )
    {
      v18 = v17->m128i_i64[1];
      if ( v17->m128i_i64[0] >= 0xFFFFFFFFFFFFFFFELL )
        goto LABEL_11;
      v195 = *(_DWORD *)(v6 + 120);
      if ( !v195 )
      {
        *(__m128i *)&dword_0 = _mm_loadu_si128(v17);
        BUG();
      }
      v140 = *(_QWORD *)(v6 + 104);
      v210 = v17;
      v220 = v17->m128i_i64[0];
      v205 = v140;
      v221 = v18;
      v141 = sub_E10AB0((__int64)&v220);
      v142 = v195;
      v215 = 1;
      v196 = 0;
      v202 = v6;
      v143 = v210;
      v207 = v142 - 1;
      v199 = (v142 - 1) & v141;
      while ( 1 )
      {
        v144 = v143->m128i_i64[0];
        v145 = v143->m128i_i64[1];
        v146 = v205 + 24LL * v199;
        v147 = *(_QWORD *)v146;
        if ( *(_QWORD *)v146 == -1 || v144 == -1 )
        {
          v177 = (v147 & v144) == -1;
        }
        else
        {
          if ( v147 != -2 && v144 != -2 )
          {
            if ( v145 != *(_QWORD *)(v146 + 8) )
              goto LABEL_186;
            v171 = v144 + 8 * v145;
            v172 = 0;
            while ( 2 )
            {
              if ( v171 == v144 + v172 )
                goto LABEL_248;
              v175 = *(_QWORD *)(*(_QWORD *)(v144 + v172) + 40LL);
              v176 = *(_QWORD *)(*(_QWORD *)(v147 + v172) + 40LL) & 7LL;
              if ( (v175 & 7) != 0 )
              {
                v173 = 0;
                if ( (_DWORD)v176 )
                {
LABEL_241:
                  v172 += 8;
                  continue;
                }
LABEL_239:
                v174 = *(_QWORD *)(*(_QWORD *)(v147 + v172) + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v173 = v175 & 0xFFFFFFFFFFFFFFF8LL;
                if ( !(_DWORD)v176 )
                  goto LABEL_239;
                v174 = 0;
              }
              break;
            }
            if ( v174 != v173 )
              goto LABEL_186;
            goto LABEL_241;
          }
          v177 = v144 == -2 && v147 == -2;
        }
        if ( v177 )
        {
LABEL_248:
          v17 = v143;
          v6 = v202;
          goto LABEL_189;
        }
LABEL_186:
        v213 = *(_QWORD *)v146;
        v211 = *(_QWORD *)(v146 + 8);
        if ( sub_E10860(*(_QWORD *)v146, v211, -1, 0) )
          break;
        v186 = sub_E10860(v213, v211, -2, 0);
        if ( v196 || !v186 )
          v187 = v196;
        v196 = v187;
        v199 = v207 & (v215 + v199);
        ++v215;
      }
      v17 = v143;
      v6 = v202;
      if ( v196 )
        v146 = v196;
LABEL_189:
      v148 = v17[1].m128i_i32[0];
      *(__m128i *)v146 = _mm_loadu_si128(v17);
      *(_DWORD *)(v146 + 16) = v148;
      ++*(_DWORD *)(v6 + 112);
LABEL_11:
      v17 = (const __m128i *)((char *)v17 + 24);
      if ( v15 == v17 )
      {
LABEL_12:
        operator delete();
        v14 = *(_QWORD **)(v6 + 104);
        v19 = *(_DWORD *)(v6 + 120);
        goto LABEL_13;
      }
    }
  }
  v131 = *(unsigned int *)(v6 + 120);
  *(_QWORD *)(v6 + 112) = 0;
  v19 = v131;
  v132 = &v14[3 * v131];
  if ( v132 != v14 )
  {
    v133 = v14;
    do
    {
      *v133 = -1;
      v133 += 3;
      *(v133 - 2) = 0;
    }
    while ( v132 != v133 );
  }
LABEL_13:
  v20 = nullptr;
  if ( v19 )
  {
    v220 = v9;
    v21 = v19 - 1;
    v221 = v8;
    v22 = sub_E10AB0((__int64)&v220);
    v23 = 1;
    v24 = nullptr;
    for ( n = v21 & v22; ; n = v21 & (v200 + v189) )
    {
      v20 = &v14[3 * n];
      v26 = *v20;
      if ( *v20 == -1 || v9 == -1 )
      {
        if ( (v26 & v9) == 0xFFFFFFFFFFFFFFFFLL )
          break;
        if ( v26 == -1 )
          goto LABEL_132;
      }
      else
      {
        if ( v26 != -2 )
        {
          if ( v9 == -2 || v8 != v20[1] )
            goto LABEL_20;
          v166 = v9;
LABEL_229:
          if ( v9 + 8 * v8 == v166 )
            break;
          v169 = *(_QWORD *)(*(_QWORD *)v166 + 40LL);
          v170 = *(_QWORD *)(*(_QWORD *)v26 + 40LL) & 7LL;
          if ( (v169 & 7) != 0 )
          {
            v167 = 0;
            if ( (_DWORD)v170 )
            {
LABEL_228:
              v166 += 8;
              v26 += 8;
              goto LABEL_229;
            }
LABEL_226:
            v168 = *(_QWORD *)(*(_QWORD *)v26 + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v167 = v169 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !(_DWORD)v170 )
              goto LABEL_226;
            v168 = 0;
          }
          if ( v168 != v167 )
            goto LABEL_20;
          goto LABEL_228;
        }
        if ( v9 == -2 )
          break;
      }
LABEL_20:
      v200 = v23;
      v197 = v24;
      v189 = n;
      v27 = sub_E10860(*v20, v20[1], -2, 0);
      if ( v197 || !v27 )
        v28 = v197;
      v24 = v28;
      v23 = v200 + 1;
    }
  }
LABEL_134:
  v100 = *(_DWORD *)(v6 + 112) + 1;
LABEL_97:
  v102 = *v20 == -1;
  *(_DWORD *)(v6 + 112) = v100;
  if ( !v102 )
    --*(_DWORD *)(v6 + 116);
  *v20 = v9;
  v20[1] = v8;
  *((_DWORD *)v20 + 4) = 0;
  *((_DWORD *)v20 + 4) = 1;
  return 1;
}

