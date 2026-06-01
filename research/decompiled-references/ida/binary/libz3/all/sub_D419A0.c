__int64 __fastcall sub_D419A0(__int64 a1, void *a2, unsigned int a3, __int64 *a4, __int64 **a5, __m128 a6)
{
  __int64 result; // rax
  unsigned int v11; // eax
  __int64 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  char v15; // al
  __int64 v16; // r14
  __int64 *v17; // r13
  void *v18; // rbx
  void *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rbp
  void *v23; // r15
  __int64 v24; // rsi
  __int64 *v25; // rbx
  unsigned __int64 v26; // rbp
  __int64 v27; // rsi
  bool v28; // zf
  __int64 *v29; // rbx
  unsigned __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rax
  int v37; // edx
  void **v38; // rax
  __int64 v39; // rax
  int v40; // edx
  __int64 *v41; // rax
  char v42; // al
  void *v43; // rbx
  void *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rbx
  void *v48; // r15
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 *v51; // r9
  __int64 v52; // r8
  void *v53; // rbx
  _DWORD *v54; // rax
  __int64 v55; // rax
  int v56; // esi
  __int64 *v57; // rdx
  __int64 v58; // r11
  __int64 v59; // r10
  __int64 *v60; // rcx
  __int64 *v61; // rdi
  __int64 *v62; // rax
  __int64 v63; // rdi
  __int64 *v64; // rax
  __int64 v65; // rcx
  __int64 *v66; // rcx
  unsigned int i; // r12d
  __int64 v68; // rsi
  int v69; // ecx
  int v70; // r8d
  __int64 *v71; // r9
  __int64 v72; // rax
  __int64 v73; // rsi
  _DWORD *v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 *v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rsi
  __int64 *v80; // rax
  __int64 v81; // r10
  __int64 v82; // rax
  _DWORD *v83; // rcx
  _DWORD *v84; // rax
  __int64 *v85; // rdx
  char v86; // r8
  unsigned int v87; // eax
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rcx
  _DWORD *v91; // rdi
  _DWORD *v92; // rdi
  int v93; // r11d
  char v94; // r8
  __int64 v95; // rcx
  __int64 v96; // rsi
  _DWORD *v97; // rdi
  _DWORD *v98; // rdi
  void *v99; // rdi
  __int64 v100; // rax
  int v101; // edx
  int v102; // eax
  __int64 v103; // rax
  unsigned int v104; // edx
  unsigned int v105; // ecx
  _DWORD *v106; // rax
  __int64 v107; // rcx
  char v108; // al
  char v109; // al
  void *v110; // r8
  int v111; // edx
  int v112; // eax
  __int64 v113; // rax
  unsigned int v114; // ecx
  unsigned int v115; // edx
  unsigned int v116; // eax
  _DWORD *v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rax
  __int64 v120; // r12
  __int64 v121; // rsi
  __int64 v122; // rdi
  __int64 v123; // r12
  __int64 v124; // rdi
  int v125; // eax
  __int64 v126; // rdi
  __int64 v127; // rdi
  __int64 v128; // rsi
  __m128 *v129; // rdi
  __int64 *v130; // r12
  __int64 v131; // rcx
  unsigned int *v132; // r8
  __int64 v133; // rax
  _QWORD *v134; // rax
  _QWORD *v135; // rax
  int v136; // eax
  __int64 v137; // r12
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // r12
  __int64 v141; // rax
  __int64 v142; // rax
  int v143; // r12d
  __int64 v144; // rax
  __int64 v145; // r12
  __int64 v146; // r12
  __int64 v147; // rdi
  int v148; // eax
  __int64 v149; // rdi
  __int64 v150; // rax
  char **exception; // rbp
  __int64 v152; // rdx
  int v153; // [rsp-8h] [rbp-1F8h]
  int *v154; // [rsp+0h] [rbp-1F0h]
  void *v155; // [rsp+0h] [rbp-1F0h]
  void *v156; // [rsp+0h] [rbp-1F0h]
  void *v157; // [rsp+8h] [rbp-1E8h]
  _QWORD *v158; // [rsp+8h] [rbp-1E8h]
  void *v159; // [rsp+8h] [rbp-1E8h]
  void *v160; // [rsp+8h] [rbp-1E8h]
  void *v161; // [rsp+8h] [rbp-1E8h]
  void *v162; // [rsp+8h] [rbp-1E8h]
  __int64 v163; // [rsp+10h] [rbp-1E0h]
  int v164; // [rsp+18h] [rbp-1D8h]
  unsigned int v165; // [rsp+1Ch] [rbp-1D4h]
  int v166[2]; // [rsp+20h] [rbp-1D0h]
  int v167[2]; // [rsp+20h] [rbp-1D0h]
  __int64 v168; // [rsp+28h] [rbp-1C8h]
  int v169[2]; // [rsp+28h] [rbp-1C8h]
  unsigned int *v170; // [rsp+28h] [rbp-1C8h]
  int v171[2]; // [rsp+28h] [rbp-1C8h]
  int v172[2]; // [rsp+28h] [rbp-1C8h]
  int *v173; // [rsp+30h] [rbp-1C0h]
  __int64 *v174; // [rsp+38h] [rbp-1B8h]
  int *v175; // [rsp+40h] [rbp-1B0h]
  int v176[2]; // [rsp+48h] [rbp-1A8h]
  int v177[2]; // [rsp+48h] [rbp-1A8h]
  unsigned int v178; // [rsp+50h] [rbp-1A0h]
  __int64 *v179; // [rsp+50h] [rbp-1A0h]
  void *v180; // [rsp+50h] [rbp-1A0h]
  __m128 *v181; // [rsp+50h] [rbp-1A0h]
  unsigned int *v182; // [rsp+50h] [rbp-1A0h]
  int v183[2]; // [rsp+58h] [rbp-198h]
  int v184; // [rsp+58h] [rbp-198h]
  int v185[2]; // [rsp+58h] [rbp-198h]
  int v186[2]; // [rsp+58h] [rbp-198h]
  __int64 v187; // [rsp+60h] [rbp-190h]
  __int64 *v188; // [rsp+68h] [rbp-188h]
  int *v189; // [rsp+70h] [rbp-180h]
  __int64 *v190; // [rsp+78h] [rbp-178h]
  int *v191; // [rsp+80h] [rbp-170h]
  __int64 *v192; // [rsp+90h] [rbp-160h]
  _QWORD *v193; // [rsp+98h] [rbp-158h]
  __int64 *v194; // [rsp+A0h] [rbp-150h]
  int v195[2]; // [rsp+A8h] [rbp-148h] BYREF
  int v196[2]; // [rsp+B0h] [rbp-140h] BYREF
  int v197[2]; // [rsp+B8h] [rbp-138h] BYREF
  int v198[2]; // [rsp+C0h] [rbp-130h]
  int v199[2]; // [rsp+C8h] [rbp-128h] BYREF
  int v200[2]; // [rsp+D0h] [rbp-120h]
  __int64 v201; // [rsp+D8h] [rbp-118h] BYREF
  int v202[2]; // [rsp+E0h] [rbp-110h]
  int v203[2]; // [rsp+E8h] [rbp-108h] BYREF
  int v204[2]; // [rsp+F0h] [rbp-100h]
  int v205[2]; // [rsp+F8h] [rbp-F8h] BYREF
  char v206[8]; // [rsp+100h] [rbp-F0h]
  _QWORD v207[2]; // [rsp+108h] [rbp-E8h] BYREF
  int v208[2]; // [rsp+118h] [rbp-D8h] BYREF
  __int64 v209; // [rsp+120h] [rbp-D0h]
  _QWORD v210[2]; // [rsp+128h] [rbp-C8h] BYREF
  _QWORD v211[2]; // [rsp+138h] [rbp-B8h] BYREF
  int v212[2]; // [rsp+148h] [rbp-A8h] BYREF
  __int64 v213; // [rsp+150h] [rbp-A0h]
  _BYTE v214[16]; // [rsp+158h] [rbp-98h] BYREF
  _BYTE v215[32]; // [rsp+168h] [rbp-88h] BYREF
  __m128 v216; // [rsp+188h] [rbp-68h] BYREF
  int v217; // [rsp+198h] [rbp-58h] BYREF
  char v218; // [rsp+19Ch] [rbp-54h]

  result = *a4;
  if ( !*a4 || *(_DWORD *)(result - 4) != 1 )
    return result;
  v11 = *(_DWORD *)result;
  v12 = *a5;
  *(_QWORD *)v197 = 0;
  v165 = v11;
  v13 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v199 = 0;
  *(_QWORD *)v198 = v13;
  *(_QWORD *)v200 = v13;
  v14 = *v12;
  if ( (*((_BYTE *)v12 + 123) & 0x20) != 0 )
  {
    v157 = *(void **)(v14 + 864);
    v168 = (__int64)v157;
  }
  else
  {
    v36 = v12[9];
    v37 = 18;
    while ( --v37 )
    {
      if ( *(char *)(v36 + 3) >= 0 )
      {
        if ( a3 == *(_DWORD *)(v36 + 4) )
        {
          v38 = (void **)(v36 + 8);
          goto LABEL_44;
        }
      }
      else if ( *(_BYTE *)(v36 + 3) >> 6 != 2 )
      {
        v38 = (void **)(*(_QWORD *)(v36 + 16) + 8LL * a3);
LABEL_44:
        v157 = *v38;
        goto LABEL_45;
      }
      v36 = *(_QWORD *)(v36 + 16);
    }
    v156 = a2;
    sub_233F80((__int64 *)(v14 + 616), (_DWORD *)v12 + 18);
    v50 = v12[9];
    v12 = *a5;
    a2 = v156;
    v14 = **a5;
    v157 = *(void **)(*(_QWORD *)(v50 + 16) + 8LL * a3);
    if ( (*((_BYTE *)*a5 + 123) & 0x20) != 0 )
    {
      v168 = *(_QWORD *)(v14 + 864);
      v13 = *(_QWORD *)(a1 + 16);
      goto LABEL_6;
    }
LABEL_45:
    v39 = v12[9];
    v40 = 18;
    while ( --v40 )
    {
      if ( *(char *)(v39 + 3) >= 0 )
      {
        if ( v165 == *(_DWORD *)(v39 + 4) )
        {
          v41 = (__int64 *)(v39 + 8);
          goto LABEL_50;
        }
      }
      else if ( *(_BYTE *)(v39 + 3) >> 6 != 2 )
      {
        v41 = (__int64 *)(*(_QWORD *)(v39 + 16) + 8LL * v165);
        goto LABEL_50;
      }
      v39 = *(_QWORD *)(v39 + 16);
    }
    v155 = a2;
    sub_233F80((__int64 *)(v14 + 616), (_DWORD *)v12 + 18);
    a2 = v155;
    v41 = (__int64 *)(*(_QWORD *)(v12[9] + 16) + 8LL * v165);
LABEL_50:
    v168 = *v41;
    v13 = *(_QWORD *)(a1 + 16);
  }
LABEL_6:
  *(_QWORD *)v203 = v13;
  v201 = v13;
  *(_QWORD *)v166 = a2;
  *(_QWORD *)v204 = 0;
  *(_QWORD *)v205 = 0;
  *(_QWORD *)v206 = 0;
  v207[0] = 1;
  v207[1] = 0;
  *(_QWORD *)v208 = 0;
  v209 = 0;
  v210[0] = 1;
  v210[1] = 0;
  *(_QWORD *)v202 = 0;
  *(_QWORD *)v195 = 0;
  v154 = v205;
  v173 = v195;
  v174 = &v201;
  v15 = sub_D3EC80(a1, (__int64)v157, (__int64)&v201, (__int64 *)v195, (__int64)v205);
  v16 = *(_QWORD *)v195;
  v17 = *(__int64 **)v202;
  v163 = v201;
  if ( !v15 || (v205[1] & 1) != 0 || v205[0] != 1 || (v207[0] & 0x100000000LL) != 0 || LODWORD(v207[0]) != 1 )
  {
    v18 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v208);
    sub_182CBA0(v18, v210);
    v19 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v205);
    result = sub_182CBA0(v19, v207);
    goto LABEL_10;
  }
  *(_QWORD *)v176 = *(_QWORD *)v166;
  *(_QWORD *)v196 = 0;
  v175 = v208;
  v191 = v196;
  v189 = v203;
  v42 = sub_D3EC80(a1, v168, (__int64)v203, (__int64 *)v196, (__int64)v208);
  *(_QWORD *)v167 = *(_QWORD *)v196;
  if ( !v42 )
  {
LABEL_60:
    v43 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v208);
    sub_182CBA0(v43, v210);
    v44 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v205);
    sub_182CBA0(v44, v207);
    result = *(_QWORD *)v167;
    if ( *(_QWORD *)v167 )
    {
      v45 = *(unsigned int *)(*(_QWORD *)v167 - 4LL);
      if ( (_DWORD)v45 )
      {
        v46 = *(_QWORD *)v167;
        v47 = *(_QWORD *)v167 + 32 * v45;
        do
        {
          v48 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v46);
          v49 = v46 + 16;
          v46 += 32;
          sub_182CBA0(v48, v49);
        }
        while ( v46 != v47 );
      }
      result = sub_186B220((void *)(*(_QWORD *)v167 - 8LL));
    }
LABEL_10:
    if ( v16 )
    {
      v20 = *(unsigned int *)(v16 - 4);
      if ( (_DWORD)v20 )
      {
        v21 = v16;
        v22 = v16 + 32 * v20;
        do
        {
          v23 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v21);
          v24 = v21 + 16;
          v21 += 32;
          sub_182CBA0(v23, v24);
        }
        while ( v22 != v21 );
      }
      result = sub_186B220((void *)(v16 - 8));
    }
    v25 = *(__int64 **)v204;
    if ( *(_QWORD *)v204 )
    {
      result = *(unsigned int *)(*(_QWORD *)v204 - 4LL);
      v26 = *(_QWORD *)v204 + 8 * result;
      if ( *(_QWORD *)v204 >= v26 )
        goto LABEL_23;
      do
      {
        while ( 1 )
        {
          v27 = *v25;
          if ( *v25 )
          {
            v28 = (*(_DWORD *)(v27 + 8))-- == 1;
            if ( v28 )
              break;
          }
          if ( (unsigned __int64)++v25 >= v26 )
            goto LABEL_22;
        }
        result = sub_15D7BC0(*(_QWORD *)v203, v27);
        ++v25;
      }
      while ( (unsigned __int64)v25 < v26 );
LABEL_22:
      v25 = *(__int64 **)v204;
      if ( *(_QWORD *)v204 )
LABEL_23:
        result = sub_186B220(v25 - 1);
    }
    if ( v17 )
    {
      v29 = v17;
      v30 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
      if ( (unsigned __int64)v17 < v30 )
      {
        do
        {
          while ( 1 )
          {
            v31 = *v29;
            if ( *v29 )
            {
              v28 = (*(_DWORD *)(v31 + 8))-- == 1;
              if ( v28 )
                break;
            }
            if ( (unsigned __int64)++v29 >= v30 )
              goto LABEL_31;
          }
          ++v29;
          sub_15D7BC0(v163, v31);
        }
        while ( (unsigned __int64)v29 < v30 );
      }
LABEL_31:
      result = sub_186B220(v17 - 1);
    }
    v32 = *(_QWORD *)v199;
    if ( *(_QWORD *)v199 )
    {
      v33 = *(_QWORD *)v200;
      v28 = (*(_DWORD *)(*(_QWORD *)v199 + 8LL))-- == 1;
      if ( v28 )
        result = sub_15D7BC0(v33, v32);
    }
    v34 = *(_QWORD *)v197;
    if ( *(_QWORD *)v197 )
    {
      v35 = *(_QWORD *)v198;
      v28 = (*(_DWORD *)(*(_QWORD *)v197 + 8LL))-- == 1;
      if ( v28 )
        return sub_15D7BC0(v35, v34);
    }
    return result;
  }
  *(_QWORD *)v183 = *(_QWORD *)v176;
  v211[0] = 0;
  v211[1] = 0;
  *(_QWORD *)v212 = 1;
  v213 = 0;
  sub_182CBA0(qword_1C7F2C0, v212);
  LOBYTE(v212[1]) &= ~1u;
  v212[0] = 1;
  if ( !v17 )
  {
    v66 = *(__int64 **)v204;
    *(_QWORD *)v177 = 0;
    goto LABEL_206;
  }
  *(_QWORD *)v177 = 0;
  v51 = *(__int64 **)v183;
  v178 = 0;
  LODWORD(v187) = 0;
LABEL_70:
  if ( (unsigned int)v187 < *((_DWORD *)v17 - 1) )
  {
    v52 = v17[(unsigned int)v187];
    v190 = &v17[(unsigned int)v187];
    if ( *(_WORD *)(v52 + 4) )
      goto LABEL_72;
    v54 = *(_DWORD **)(*(_QWORD *)(v52 + 16) + 24LL);
    if ( v54 )
    {
      if ( !*v54 && v54[1] == 8 && *(_DWORD *)(v52 + 24) == 1 )
      {
        v52 = *(_QWORD *)(v52 + 32);
        if ( *(_WORD *)(v52 + 4) )
          goto LABEL_72;
      }
    }
    v55 = *(unsigned int *)(a1 + 112);
    v56 = *(_DWORD *)(v52 + 12);
    v57 = *(__int64 **)(a1 + 104);
    v58 = 24 * v55;
    v59 = 24LL * (v56 & (unsigned int)(v55 - 1));
    v60 = &v57[3 * v55];
    v61 = &v57[(unsigned __int64)v59 / 8];
    if ( v59 != 24 * v55 )
    {
      v183[0] = (_DWORD)v57 + v59;
      v62 = &v57[(unsigned __int64)v59 / 8];
      do
      {
        v63 = *v62;
        if ( (unsigned __int64)*v62 > 1 )
        {
          if ( *(_DWORD *)(v63 + 12) == v56 && v63 == v52 )
          {
            v61 = &v57[(unsigned __int64)v59 / 8];
            goto LABEL_112;
          }
        }
        else if ( !v63 )
        {
          goto LABEL_72;
        }
        v62 += 3;
      }
      while ( v60 != v62 );
      v61 = &v57[(unsigned __int64)v59 / 8];
    }
    if ( v57 == v61 )
    {
LABEL_72:
      if ( *(_QWORD *)v177 )
        sub_186B220((void *)(*(_QWORD *)v177 - 8LL));
      v53 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v211);
      sub_182CBA0(v53, v212);
      goto LABEL_60;
    }
    *(_QWORD *)v183 = v60;
    v64 = *(__int64 **)(a1 + 104);
    while ( 1 )
    {
      v65 = *v64;
      if ( (unsigned __int64)*v64 > 1 )
      {
        if ( *(_DWORD *)(v65 + 12) == v56 && v65 == v52 )
        {
          v60 = *(__int64 **)v183;
LABEL_112:
          if ( v59 == v58 )
          {
LABEL_120:
            while ( v61 != v57 )
            {
              v82 = *v57;
              if ( (unsigned __int64)*v57 > 1 )
              {
                if ( *(_DWORD *)(v82 + 12) == v56 && v82 == v52 )
                  goto LABEL_129;
              }
              else if ( !v82 )
              {
                break;
              }
              v57 += 3;
            }
LABEL_119:
            BUG();
          }
          v80 = v61;
          while ( 2 )
          {
            v81 = *v80;
            if ( (unsigned __int64)*v80 <= 1 )
            {
              if ( !v81 )
                goto LABEL_119;
              goto LABEL_116;
            }
            if ( *(_DWORD *)(v81 + 12) != v56 || v81 != v52 )
            {
LABEL_116:
              v80 += 3;
              if ( v60 == v80 )
                goto LABEL_120;
              continue;
            }
            break;
          }
          v57 = v80;
LABEL_129:
          v83 = (_DWORD *)v57[1];
          if ( !v83 )
            goto LABEL_72;
          if ( *(v83 - 1) != 1 )
            goto LABEL_72;
          v84 = (_DWORD *)v57[2];
          if ( !v84 || *(v84 - 1) != 1 || v165 != *v83 && v165 != *v84 )
            goto LABEL_72;
          v85 = *(__int64 **)v204;
          if ( !*(_QWORD *)v204 )
            goto LABEL_72;
          if ( (_DWORD)v187 )
          {
            LODWORD(v188) = 0;
            v86 = 0;
            v192 = v211;
            while ( 2 )
            {
              v87 = (unsigned int)v188;
              if ( (unsigned int)v188 >= *((_DWORD *)v85 - 1) )
              {
LABEL_146:
                LOBYTE(v183[0]) = v86;
                goto LABEL_147;
              }
LABEL_139:
              v88 = v87;
              v89 = v85[v87];
              v90 = *v190;
              if ( !*(_WORD *)(*v190 + 4) )
              {
                v91 = *(_DWORD **)(*(_QWORD *)(v90 + 16) + 24LL);
                if ( v91 )
                {
                  if ( !*v91 && v91[1] == 8 && *(_DWORD *)(v90 + 24) == 1 )
                  {
                    LOBYTE(v183[0]) = *(_QWORD *)(v90 + 32) == v89;
                    goto LABEL_182;
                  }
                }
              }
              if ( !*(_WORD *)(v89 + 4) )
              {
                v92 = *(_DWORD **)(*(_QWORD *)(v89 + 16) + 24LL);
                if ( v92 )
                {
                  if ( !*v92 && v92[1] == 8 && *(_DWORD *)(v89 + 24) == 1 )
                  {
                    LOBYTE(v183[0]) = *(_QWORD *)(v89 + 32) == v90;
LABEL_182:
                    if ( LOBYTE(v183[0]) )
                    {
                      v107 = *(_QWORD *)v167 + 32 * v88;
                      v108 = *(_BYTE *)(v107 + 20);
                      if ( (v108 & 1) != 0 || *(_DWORD *)(v107 + 16) != 1 || (v212[1] & 1) != 0 || v212[0] != 1 )
                      {
                        v194 = v51;
                        LODWORD(v193) = v167[0] + 32 * v88;
                        v109 = sub_1848D40(qword_1C7F2C0, *(_QWORD *)v167 + 32 * v88, v211);
                        v51 = v194;
                        if ( !v109 )
                          goto LABEL_193;
                        v107 = *(_QWORD *)v167 + 32 * v88;
LABEL_187:
                        v110 = qword_1C7F2C0;
                        if ( (*(_BYTE *)(v107 + 4) & 1) == 0 )
                        {
                          v108 = *(_BYTE *)(v107 + 20);
                          goto LABEL_189;
                        }
                        v194 = v51;
                        v193 = (_QWORD *)v107;
                        v180 = qword_1C7F2C0;
                        sub_182C690(qword_1C7F2C0, v211, v107);
                        v107 = (__int64)v193;
                        v110 = v180;
                        v51 = v194;
                        v108 = *((_BYTE *)v193 + 20);
LABEL_190:
                        if ( (v108 & 1) != 0 )
                        {
                          v179 = v51;
                          sub_182C690(v110, v212, v107 + 16);
                          v51 = v179;
                        }
                        else
                        {
                          v112 = *(_DWORD *)(v107 + 16);
                          LOBYTE(v212[1]) &= ~1u;
                          v212[0] = v112;
                        }
                        v178 = (unsigned int)v188;
                        goto LABEL_193;
                      }
                      v110 = qword_1C7F2C0;
                      if ( (*(_BYTE *)(v107 + 4) & 1) == 0 && (v211[0] & 0x100000000LL) == 0 )
                      {
                        if ( SLODWORD(v211[0]) <= *(_DWORD *)v107 )
                          goto LABEL_193;
LABEL_189:
                        v111 = *(_DWORD *)v107;
                        BYTE4(v211[0]) &= ~1u;
                        LODWORD(v211[0]) = v111;
                        goto LABEL_190;
                      }
                      v194 = v51;
                      LODWORD(v193) = v167[0] + 32 * v88;
                      v136 = sub_182C7B0(qword_1C7F2C0, *(_QWORD *)v167 + 32 * v88, v211);
                      v107 = *(_QWORD *)v167 + 32 * v88;
                      v51 = v194;
                      if ( v136 < 0 )
                        goto LABEL_187;
LABEL_193:
                      if ( *(_QWORD *)v177 )
                      {
                        v113 = *(unsigned int *)(*(_QWORD *)v177 - 4LL);
                        v114 = *(_DWORD *)(*(_QWORD *)v177 - 8LL);
                        if ( v114 != (_DWORD)v113 )
                          goto LABEL_195;
                        v194 = v51;
                        v115 = (3 * v114 + 1) >> 1;
                        v116 = 4 * v115 + 8;
                        if ( 4 * v114 + 8 < v116 )
                        {
                          LODWORD(v193) = (3 * v114 + 1) >> 1;
                          if ( v114 < v115 )
                          {
                            v117 = (_DWORD *)sub_186B300((void *)(*(_QWORD *)v177 - 8LL), v116);
                            v51 = v194;
                            *(_QWORD *)v177 = v117 + 2;
                            *v117 = (_DWORD)v193;
                            v113 = (unsigned int)v117[1];
                            goto LABEL_195;
                          }
                        }
LABEL_254:
                        exception = (char **)__cxa_allocate_exception(0x28u);
                        sub_167E90((__int64 *)&v216, "Overflow encountered when expanding vector", v152);
                        *exception = (char *)off_1C63128;
                        sub_2333C0(exception + 1, &v216);
                        sub_233E40((__int64)&v216);
                        __cxa_throw(
                          exception,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v193 = v51;
                      v135 = (_QWORD *)sub_186B270(0x10u);
                      *v135 = 2;
                      v51 = v193;
                      *(_QWORD *)v177 = v135 + 1;
                      v113 = 0;
LABEL_195:
                      *(_DWORD *)(*(_QWORD *)v177 + 4 * v113) = (_DWORD)v188;
                      v85 = *(__int64 **)v204;
                      ++*(_DWORD *)(*(_QWORD *)v177 - 4LL);
                      if ( !v85 )
                        goto LABEL_147;
                      LODWORD(v188) = (_DWORD)v188 + 1;
                      v86 = v183[0];
                      continue;
                    }
                  }
                }
              }
              break;
            }
            LODWORD(v188) = (_DWORD)v188 + 1;
            v87 = (unsigned int)v188;
            if ( (unsigned int)v188 >= *((_DWORD *)v85 - 1) )
              goto LABEL_146;
            goto LABEL_139;
          }
          v93 = v178;
          v178 = 0;
          v94 = 0;
          while ( 2 )
          {
            if ( v178 < *((_DWORD *)v85 - 1) )
            {
LABEL_151:
              v95 = *v190;
              v96 = v85[v178];
              if ( !*(_WORD *)(*v190 + 4) )
              {
                v97 = *(_DWORD **)(*(_QWORD *)(v95 + 16) + 24LL);
                if ( v97 )
                {
                  if ( !*v97 && v97[1] == 8 && *(_DWORD *)(v95 + 24) == 1 )
                  {
                    LOBYTE(v183[0]) = *(_QWORD *)(v95 + 32) == v96;
                    goto LABEL_162;
                  }
                }
              }
              if ( !*(_WORD *)(v96 + 4) )
              {
                v98 = *(_DWORD **)(*(_QWORD *)(v96 + 16) + 24LL);
                if ( v98 )
                {
                  if ( !*v98 && v98[1] == 8 && *(_DWORD *)(v96 + 24) == 1 )
                  {
                    LOBYTE(v183[0]) = *(_QWORD *)(v96 + 32) == v95;
LABEL_162:
                    if ( LOBYTE(v183[0]) )
                    {
                      v99 = qword_1C7F2C0;
                      v100 = *(_QWORD *)v167 + 32LL * v178;
                      if ( (*(_BYTE *)(v100 + 4) & 1) != 0 )
                      {
                        v193 = v51;
                        LODWORD(v192) = v167[0] + 32 * v178;
                        LODWORD(v188) = (_DWORD)qword_1C7F2C0;
                        sub_182C690(qword_1C7F2C0, v211, v100);
                        v51 = v193;
                        v100 = *(_QWORD *)v167 + 32LL * v178;
                      }
                      else
                      {
                        v101 = *(_DWORD *)v100;
                        BYTE4(v211[0]) &= ~1u;
                        LODWORD(v211[0]) = v101;
                      }
                      if ( (*(_BYTE *)(v100 + 20) & 1) != 0 )
                      {
                        v188 = v51;
                        sub_182C690(v99, v212, v100 + 16);
                        v51 = v188;
                      }
                      else
                      {
                        v102 = *(_DWORD *)(v100 + 16);
                        LOBYTE(v212[1]) &= ~1u;
                        v212[0] = v102;
                      }
                      if ( *(_QWORD *)v177 )
                      {
                        v103 = *(unsigned int *)(*(_QWORD *)v177 - 4LL);
                        if ( (_DWORD)v103 == *(_DWORD *)(*(_QWORD *)v177 - 8LL) )
                        {
                          v104 = (unsigned int)(3 * v103 + 1) >> 1;
                          v105 = 4 * v104 + 8;
                          if ( 4 * (int)v103 + 8 >= v105 || (unsigned int)v103 >= v104 )
                            goto LABEL_254;
                          v192 = v51;
                          LODWORD(v188) = (unsigned int)(3 * v103 + 1) >> 1;
                          v106 = (_DWORD *)sub_186B300((void *)(*(_QWORD *)v177 - 8LL), v105);
                          v51 = v192;
                          *(_QWORD *)v177 = v106 + 2;
                          *v106 = (_DWORD)v188;
                          v103 = (unsigned int)v106[1];
                        }
                      }
                      else
                      {
                        v188 = v51;
                        v134 = (_QWORD *)sub_186B270(0x10u);
                        *v134 = 2;
                        v51 = v188;
                        *(_QWORD *)v177 = v134 + 1;
                        v103 = 0;
                      }
                      *(_DWORD *)(*(_QWORD *)v177 + 4 * v103) = v178;
                      v85 = *(__int64 **)v204;
                      ++*(_DWORD *)(*(_QWORD *)v177 - 4LL);
                      if ( !v85 )
                        goto LABEL_147;
                      v94 = v183[0];
                      v93 = v178++;
                      continue;
                    }
                  }
                }
              }
              if ( ++v178 >= *((_DWORD *)v85 - 1) )
                break;
              goto LABEL_151;
            }
            break;
          }
          LOBYTE(v183[0]) = v94;
          v178 = v93;
LABEL_147:
          if ( !LOBYTE(v183[0]) )
            goto LABEL_72;
          LODWORD(v187) = v187 + 1;
          goto LABEL_70;
        }
      }
      else if ( !v65 )
      {
        goto LABEL_72;
      }
      v64 += 3;
      if ( v61 == v64 )
        goto LABEL_72;
    }
  }
  v66 = *(__int64 **)v204;
  if ( *(_QWORD *)v177 )
  {
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)v177 - 4LL); ++i )
    {
      v188 = v51;
      v77 = &v66[*(unsigned int *)(*(_QWORD *)v177 + 4LL * i)];
      v184 = *(_DWORD *)(*(_QWORD *)v177 + 4LL * i);
      v78 = *(_QWORD *)(a1 + 16);
      a6 = _mm_loadh_ps((const double *)v203);
      v187 = *v77;
      if ( v184 == v178 )
      {
        v79 = *(_QWORD *)(v78 + 864);
        v216 = a6;
        sub_D3D910((__int64 **)&v216, v79);
        v72 = v187;
        v71 = v188;
      }
      else
      {
        v68 = *(_QWORD *)(v78 + 856);
        v216 = a6;
        sub_D3D910((__int64 **)&v216, v68);
        v71 = v188;
        v72 = v187;
      }
      LOBYTE(v69) = v184 != v178;
      while ( 1 )
      {
        v73 = *(_QWORD *)(v72 + 16);
        if ( *(_WORD *)(v72 + 4) )
          break;
        v74 = *(_DWORD **)(v73 + 24);
        if ( !v74 || *v74 || v74[1] != 8 || *(_DWORD *)(v72 + 24) != 1 )
          break;
        v72 = *(_QWORD *)(v72 + 32);
        v69 ^= 1u;
      }
      v75 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)v183 = v71;
      v76 = *(_QWORD *)(v75 + 864);
      if ( (_BYTE)v69 )
        v76 = *(_QWORD *)(v75 + 856);
      sub_13333D0((_DWORD)v71, v73, v76, v69, v70, (_DWORD)v71);
      v66 = *(__int64 **)v204;
      v51 = *(__int64 **)v183;
    }
  }
LABEL_206:
  v181 = (__m128 *)(a1 + 40);
  if ( v66 )
    v118 = *((unsigned int *)v66 - 1);
  else
    v118 = 0;
  v119 = sub_1690D20(v181, v118, *(_QWORD *)v167, v66, v208);
  v120 = v119;
  if ( v119 )
    ++*(_DWORD *)(v119 + 8);
  v121 = *(_QWORD *)v198;
  v122 = *(_QWORD *)v197;
  sub_D3D760(*(__int64 *)v197, *(__int64 *)v198);
  *(_QWORD *)v197 = v120;
  if ( (unsigned int)sub_180B130(v122) > 2 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a6.m128_u64) )
    {
      sub_186A4C0(*(double *)a6.m128_u64);
      v123 = sub_180B150(v122, v121);
      std::__ostream_insert<char,std::char_traits<char>>();
      v124 = sub_160EBE0(v123, v197);
      sub_D3D960(v124, "\n");
      v125 = sub_180B150(v124, "\n");
      v126 = sub_160C420(
               v125,
               v153,
               (int)v205,
               (int)v157,
               v163,
               v164,
               v167[0],
               v168,
               (int)v195,
               (int)&v201,
               (int)v208,
               v177[0],
               (int)v181,
               v183[0],
               v187,
               (int)v188,
               (int)v203,
               (int)v190,
               (int)v196,
               (int)v212,
               (int)v192,
               (int)v193,
               (int)v194,
               v195[0],
               v196[0],
               v197[0],
               v198[0],
               v199[0],
               v200[0],
               v201,
               v202[0],
               v203[0],
               v204[0],
               v205[0],
               v206[0]);
      sub_D3D960(v126, "\n");
      v127 = sub_180B150(v126, "\n");
      sub_D3D960(v127, "\n");
      sub_186A500(v127, "\n");
    }
    else
    {
      v146 = sub_180B150(v122, v121);
      std::__ostream_insert<char,std::char_traits<char>>();
      v147 = sub_160EBE0(v146, v197);
      sub_D3D960(v147, "\n");
      v148 = sub_180B150(v147, "\n");
      v149 = sub_160C420(
               v148,
               v153,
               (int)v205,
               (int)v157,
               v163,
               v164,
               v167[0],
               v168,
               (int)v195,
               (int)&v201,
               (int)v208,
               v177[0],
               (int)v181,
               v183[0],
               v187,
               (int)v188,
               (int)v203,
               (int)v190,
               (int)v196,
               (int)v212,
               (int)v192,
               (int)v193,
               (int)v194,
               v195[0],
               v196[0],
               v197[0],
               v198[0],
               v199[0],
               v200[0],
               v201,
               v202[0],
               v203[0],
               v204[0],
               v205[0],
               v206[0]);
      sub_D3D960(v149, "\n");
      v150 = sub_180B150(v149, "\n");
      sub_D3D960(v150, "\n");
    }
  }
  v128 = *(_QWORD *)v197;
  v129 = (__m128 *)(a1 + 152);
  sub_14B9BF0(a1 + 152, *(_QWORD *)v197, v199);
  if ( !*(_WORD *)(*(_QWORD *)v199 + 4LL) )
  {
    v128 = *(_QWORD *)(*(_QWORD *)v199 + 16LL);
    v129 = v181;
    if ( (unsigned __int8)sub_168DB10(v181, v128) )
    {
      v128 = (__int64)v181;
      sub_168DDF0(&v216, v181, *(_QWORD *)(*(_QWORD *)v199 + 16LL));
      if ( (v216.m128_i8[4] & 1) != 0 || v216.m128_i32[0] != 1 || (v218 & 1) != 0 )
      {
        v129 = &v216;
        sub_25A130((char *)&v216);
      }
      else
      {
        v143 = v217;
        v129 = &v216;
        sub_25A130((char *)&v216);
        if ( v143 == 1 )
        {
          v144 = sub_15E1AF0(*(_QWORD *)(a1 + 16));
          v145 = v144;
          if ( v144 )
            ++*(_DWORD *)(v144 + 8);
          v128 = *(_QWORD *)v200;
          v129 = *(__m128 **)v199;
          sub_D3D760(*(__int64 *)v199, *(__int64 *)v200);
          *(_QWORD *)v199 = v145;
        }
      }
    }
  }
  if ( (unsigned int)sub_180B130(v129) > 2 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a6.m128_u64) )
    {
      sub_186A4C0(*(double *)a6.m128_u64);
      v137 = sub_180B150(v129, v128);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v216, v157, *(_QWORD *)(a1 + 16), 0, 0, 0);
      v159 = (void *)sub_160E8B0(v137, &v216);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v214, v168, *(_QWORD *)(a1 + 16), 0, 0, 0);
      v160 = (void *)sub_160E8B0(v159, v214);
      std::__ostream_insert<char,std::char_traits<char>>();
      v138 = sub_160EBE0(v160, v197);
      sub_D3D960(v138, "\n");
      sub_18572D0(v215);
      sub_18572D0(&v217);
      *(_QWORD *)v185 = sub_180B150(&v217, "\n");
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v216, v168, *(_QWORD *)(a1 + 16), 0, 0, 0);
      *(_QWORD *)v171 = sub_160E8B0(*(_QWORD *)v185, &v216);
      std::__ostream_insert<char,std::char_traits<char>>();
      v139 = sub_160EBE0(*(_QWORD *)v171, v199);
      sub_D3D960(v139, "\n");
      sub_18572D0(&v217);
      sub_186A500(&v217, "\n");
    }
    else
    {
      v140 = sub_180B150(v129, v128);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v216, v157, *(_QWORD *)(a1 + 16), 0, 0, 0);
      v161 = (void *)sub_160E8B0(v140, &v216);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v214, v168, *(_QWORD *)(a1 + 16), 0, 0, 0);
      v162 = (void *)sub_160E8B0(v161, v214);
      std::__ostream_insert<char,std::char_traits<char>>();
      v141 = sub_160EBE0(v162, v197);
      sub_D3D960(v141, "\n");
      sub_18572D0(v215);
      sub_18572D0(&v217);
      *(_QWORD *)v186 = sub_180B150(&v217, "\n");
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v216, v168, *(_QWORD *)(a1 + 16), 0, 0, 0);
      *(_QWORD *)v172 = sub_160E8B0(*(_QWORD *)v186, &v216);
      std::__ostream_insert<char,std::char_traits<char>>();
      v142 = sub_160EBE0(*(_QWORD *)v172, v199);
      sub_D3D960(v142, "\n");
      sub_18572D0(&v217);
    }
  }
  v130 = *a5;
  if ( (*((_BYTE *)*a5 + 123) & 0x10) != 0 )
  {
    v158 = *(_QWORD **)(a1 + 16);
    v131 = *(_QWORD *)sub_2FCF50((_QWORD *)(*v130 + 672), v130 + 13, v165);
    if ( (*((_BYTE *)*a5 + 123) & 0x10) != 0 )
    {
      *(_QWORD *)v169 = v131;
      v132 = *(unsigned int **)sub_2FCF50((_QWORD *)(**a5 + 672), *a5 + 13, a3);
      if ( v132 )
      {
        if ( *(_QWORD *)v169 )
        {
          v182 = *(unsigned int **)v169;
          if ( *(unsigned int **)v169 != v132 )
          {
            v170 = v132;
            v133 = sub_17E9C90(v158[82], 24);
            *v170 = (*v170 + 1) & 0x3FFFFFFF | *v170 & 0xC0000000;
            *v182 = (*v182 + 1) & 0x3FFFFFFF | *v182 & 0xC0000000;
            *(_QWORD *)v133 = 0;
            *(__m128i *)(v133 + 8) = _mm_unpacklo_epi64(
                                       (__m128i)(unsigned __int64)v170,
                                       (__m128i)(unsigned __int64)v182);
          }
        }
      }
    }
  }
  sub_EDBFA0((int)v130);
  sub_EDBFA0((int)*a5);
  *(_BYTE *)(a1 + 144) = 1;
  if ( *(_QWORD *)v177 )
    sub_186B220((void *)(*(_QWORD *)v177 - 8LL));
  sub_25A130((char *)v211);
  sub_25A130((char *)v175);
  sub_25A130((char *)v154);
  sub_27FC20((__int64 *)v191);
  sub_27FC20((__int64 *)v173);
  sub_2334C0((__int64 *)v189);
  sub_2334C0(v174);
  sub_D3D760(*(__int64 *)v199, *(__int64 *)v200);
  return sub_D3D760(*(__int64 *)v197, *(__int64 *)v198);
}

