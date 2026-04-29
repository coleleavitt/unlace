__int64 __fastcall sub_13E2D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r12
  __int128 v19; // rdi
  int v20; // r8d
  int *v21; // r9
  __int64 *v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // r10
  int **v25; // r13
  char v26; // si
  unsigned __int64 v27; // r15
  __int64 v28; // rdx
  unsigned __int64 v29; // r12
  bool v30; // r11
  int v31; // ecx
  __int64 v32; // rax
  char *v33; // rax
  char v34; // dl
  __int64 v35; // rax
  int *v36; // r12
  __int64 v37; // r15
  unsigned __int64 *v38; // rdi
  __int64 v39; // rax
  int **v40; // rax
  int *v41; // rdx
  __int64 v42; // r10
  int *v43; // rcx
  int *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 *v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // r13
  char *v54; // rbx
  char *v55; // rdx
  int v56; // eax
  int v57; // eax
  int *v58; // r12
  __int64 i; // r13
  unsigned int *v60; // rcx
  unsigned int v61; // r15d
  unsigned int *v62; // rax
  unsigned __int64 v63; // rdx
  _QWORD *v64; // rcx
  char *v65; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  unsigned int *v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned int *v71; // rax
  int v72; // r9d
  __int64 v73; // rdx
  __int64 v74; // r8
  _DWORD *v75; // rcx
  _DWORD *v76; // rax
  _DWORD *v77; // rdx
  _DWORD *v78; // rax
  _DWORD *v79; // rax
  __int64 v80; // rdi
  int *v81; // rcx
  __int64 v82; // r8
  __int64 *v83; // rsi
  __int64 v84; // r9
  __int64 *v85; // r15
  char v86; // al
  _QWORD *v87; // rdx
  unsigned int *v88; // rbx
  unsigned int *v89; // r13
  __int64 v90; // rbx
  unsigned int *v91; // r15
  __int64 v92; // rax
  __int64 v93; // r15
  size_t v94; // r14
  _QWORD *v95; // rbx
  unsigned int *v96; // rdx
  char v97; // r15
  __int64 v98; // r14
  int v99; // r13d
  __int64 v100; // rax
  char *v101; // rax
  char v102; // r12
  unsigned __int64 v103; // r14
  __int64 v104; // rax
  _DWORD *v105; // r13
  __int64 v106; // r14
  unsigned int *v107; // rax
  _QWORD *v108; // r12
  _QWORD *v109; // rax
  __int64 v110; // r12
  unsigned __int64 v111; // r13
  __int64 v112; // rdx
  __int64 v113; // rax
  _QWORD *v114; // rdi
  __int64 v115; // r12
  __int64 v116; // rsi
  __int64 *v117; // rdi
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // r14
  __int64 *v123; // rax
  __int64 v124; // rax
  __int64 v125; // r12
  unsigned int *v126; // r13
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 *v129; // rbx
  __int64 v130; // rsi
  int v131; // eax
  unsigned int *v132; // rcx
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rdx
  int v137; // eax
  int v138; // [rsp+0h] [rbp-280h]
  int v139; // [rsp+8h] [rbp-278h]
  _DWORD **v140; // [rsp+8h] [rbp-278h]
  __int64 *v141; // [rsp+10h] [rbp-270h]
  _QWORD *v142; // [rsp+10h] [rbp-270h]
  __int64 v143; // [rsp+18h] [rbp-268h]
  __int64 v144; // [rsp+20h] [rbp-260h]
  char v145; // [rsp+2Eh] [rbp-252h]
  unsigned __int8 v146; // [rsp+2Fh] [rbp-251h]
  __int64 v147; // [rsp+30h] [rbp-250h]
  unsigned int *v148; // [rsp+30h] [rbp-250h]
  __int64 v149; // [rsp+30h] [rbp-250h]
  __int64 v150; // [rsp+38h] [rbp-248h]
  unsigned int *v151; // [rsp+40h] [rbp-240h]
  int *v152; // [rsp+40h] [rbp-240h]
  unsigned __int64 v153; // [rsp+40h] [rbp-240h]
  int v154; // [rsp+48h] [rbp-238h]
  unsigned __int64 v155; // [rsp+48h] [rbp-238h]
  size_t na; // [rsp+50h] [rbp-230h]
  size_t nb; // [rsp+50h] [rbp-230h]
  unsigned int nc; // [rsp+50h] [rbp-230h]
  bool n; // [rsp+50h] [rbp-230h]
  __int64 nd; // [rsp+50h] [rbp-230h]
  __int64 v161; // [rsp+58h] [rbp-228h]
  int v163; // [rsp+68h] [rbp-218h]
  int v164; // [rsp+68h] [rbp-218h]
  int v165; // [rsp+68h] [rbp-218h]
  unsigned int v166; // [rsp+68h] [rbp-218h]
  __int64 *v167; // [rsp+68h] [rbp-218h]
  unsigned int *v168; // [rsp+68h] [rbp-218h]
  unsigned int *v169; // [rsp+70h] [rbp-210h] BYREF
  __int128 v170; // [rsp+78h] [rbp-208h]
  _DWORD *v171; // [rsp+90h] [rbp-1F0h] BYREF
  __int128 v172; // [rsp+98h] [rbp-1E8h]
  __int64 v173[2]; // [rsp+B0h] [rbp-1D0h] BYREF
  void *v174; // [rsp+C0h] [rbp-1C0h]
  __int128 v175; // [rsp+C8h] [rbp-1B8h]
  __int64 v176[2]; // [rsp+E0h] [rbp-1A0h] BYREF
  void *src; // [rsp+F0h] [rbp-190h] BYREF
  __int128 v178; // [rsp+F8h] [rbp-188h]
  __int64 v179[2]; // [rsp+110h] [rbp-170h] BYREF
  void *v180; // [rsp+120h] [rbp-160h] BYREF
  __int128 v181; // [rsp+128h] [rbp-158h]
  __int64 v182; // [rsp+140h] [rbp-140h] BYREF
  __int128 v183; // [rsp+148h] [rbp-138h] BYREF
  __int128 v184; // [rsp+158h] [rbp-128h]
  unsigned __int64 v185; // [rsp+168h] [rbp-118h]
  char v186; // [rsp+170h] [rbp-110h]
  _QWORD v187[3]; // [rsp+180h] [rbp-100h] BYREF
  char v188; // [rsp+198h] [rbp-E8h]
  __int64 v189; // [rsp+1A0h] [rbp-E0h]
  char v190; // [rsp+1A8h] [rbp-D8h]
  __int64 (__fastcall **v191)(); // [rsp+1B0h] [rbp-D0h] BYREF
  __int64 v192; // [rsp+1B8h] [rbp-C8h]
  __int64 v193; // [rsp+1C0h] [rbp-C0h]
  __int64 v194; // [rsp+1C8h] [rbp-B8h]
  __int64 v195; // [rsp+1D0h] [rbp-B0h]
  char v196; // [rsp+1D8h] [rbp-A8h]
  unsigned __int8 *v197; // [rsp+1E0h] [rbp-A0h]
  unsigned __int8 *v198; // [rsp+1E8h] [rbp-98h]
  _QWORD *v199; // [rsp+1F0h] [rbp-90h]
  __int64 v200; // [rsp+1F8h] [rbp-88h] BYREF
  __int128 v201; // [rsp+200h] [rbp-80h]
  int *v202; // [rsp+210h] [rbp-70h] BYREF
  __int128 v203; // [rsp+218h] [rbp-68h]
  char *v204; // [rsp+228h] [rbp-58h]
  __int64 v205; // [rsp+230h] [rbp-50h]
  char v206; // [rsp+238h] [rbp-48h]
  unsigned __int64 v207; // [rsp+248h] [rbp-38h]

  v207 = __readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 14 || *(_BYTE *)a4 != 1 || *(_DWORD *)(a4 + 4) != *(_DWORD *)(a3 + 4) )
  {
    if ( !under_debugger )
      sub_383060(50435);
LABEL_241:
    BUG();
  }
  if ( (**(_DWORD **)(a1 + 64) & 0x100000) != 0 )
    return 0;
  v146 = sub_11ED30(a3);
  if ( v146 )
    return 0;
  v187[1] = 0;
  v187[0] = off_4DDB98;
  v191 = off_4DDB70;
  v199 = v187;
  v187[2] = 0;
  v193 = a1;
  v10 = *(_QWORD *)(a1 + 64);
  v188 = 0;
  v189 = 0;
  v190 = 0;
  v194 = 0;
  v195 = 0;
  v196 = 0;
  v197 = (unsigned __int8 *)a3;
  v198 = (unsigned __int8 *)a4;
  v200 = 0;
  v202 = nullptr;
  v204 = nullptr;
  v205 = 0;
  v192 = v10;
  v201 = 0;
  v203 = 0;
  sub_134780(&v200, a3, v8, v9);
  v206 = 0;
  v169 = nullptr;
  v11 = *(_QWORD **)(a1 + 64);
  v170 = 0;
  v14 = sub_670E0(v11, a3, v12, v13);
  v150 = sub_1108E0(v14, 0);
  if ( !v150 )
  {
    if ( !under_debugger )
      sub_383060(50446);
    goto LABEL_241;
  }
  ++*(_DWORD *)(v150 + 24);
  v17 = sub_670E0(*(_QWORD **)(a1 + 64), 0, v15, v16);
  v161 = sub_110340(v17, 0);
  if ( !v161 )
  {
    if ( !under_debugger )
      sub_383060(50446);
    goto LABEL_241;
  }
  ++*(_DWORD *)(v161 + 24);
  v163 = *(_DWORD *)(a1 + 72);
  v18 = *(_QWORD *)v150;
  sub_125180(a2 + 64, (unsigned __int8 *)a4);
  *(_QWORD *)&v19 = a1;
  v173[0] = 0;
  *((_QWORD *)&v19 + 1) = v173;
  v173[1] = 0;
  v174 = nullptr;
  v175 = 0;
  sub_123EA0(v19, a3, 1, 0xFFFF0000);
  if ( (unsigned int)sub_129C50((_QWORD *)a1, v173, *(_QWORD *)(a2 + 8), 0, (__int64)v187) )
    goto LABEL_57;
  v22 = (__int64 *)(v18 + 24LL * v163);
  v147 = *v22;
  if ( !*v22 )
    goto LABEL_50;
  if ( !v22[1] )
    goto LABEL_50;
  v23 = *(_QWORD *)(v147 + 8);
  if ( v23 == v147 )
    goto LABEL_50;
  v141 = (__int64 *)&v169;
  do
  {
    v24 = *(_QWORD *)(v23 + 32);
    v25 = (int **)(v23 + 24);
    if ( !v24 )
      goto LABEL_81;
    v26 = *(_BYTE *)(v23 + 56);
    if ( v26 == 1 )
    {
      v27 = *(int *)(v23 + 48);
      goto LABEL_18;
    }
    if ( v26 != 5 )
    {
      if ( !under_debugger )
        sub_383060(51893);
      goto LABEL_241;
    }
    v27 = *(_QWORD *)(v23 + 48);
LABEL_18:
    v28 = *(int *)(v23 + 64);
    if ( !(_QWORD)v201 )
      goto LABEL_81;
    v20 = v200;
    v29 = v27 + v28 - 1;
    v30 = v28 != 0;
    v31 = 0;
    v32 = 0;
    while ( 1 )
    {
      v33 = (char *)(v200 + 16 * v32);
      v34 = *v33;
      if ( *v33 == 1 )
      {
        v21 = (int *)*((int *)v33 + 2);
        goto LABEL_24;
      }
      if ( v34 == 5 )
        break;
LABEL_21:
      v32 = ++v31;
      if ( v31 >= (unsigned __int64)v201 )
        goto LABEL_81;
    }
    v21 = *(int **)(*((_QWORD *)v33 + 1) + 8LL);
LABEL_24:
    if ( v26 != v34 )
      goto LABEL_21;
    v35 = *((int *)v33 + 1);
    if ( !v35 || !v30 || v29 < (unsigned __int64)v21 || (unsigned __int64)v21 + v35 - 1 < v27 )
      goto LABEL_21;
    if ( (int *)v27 != v21 || v31 == -2 )
      goto LABEL_57;
    v36 = *v25;
    v37 = (__int64)&(*v25)[v24];
    if ( *v25 != (int *)v37 )
    {
      while ( 1 )
      {
        v38 = (unsigned __int64 *)(*(_QWORD *)v161 + 24LL * *v36);
        v39 = *(_QWORD *)(v23 + 48);
        BYTE8(v184) = v26;
        v182 = 0;
        *(_QWORD *)&v184 = v39;
        v186 = 1;
        v185 = 0xFFFFFFFF00000001LL;
        v183 = 0;
        v40 = (int **)sub_104DF0(v38, (__int64)&v182);
        if ( v182 )
        {
          na = (size_t)v40;
          *(_QWORD *)&v183 = 0;
          qfree(v182);
          v40 = (int **)na;
        }
        if ( !v40 )
          goto LABEL_57;
        v41 = v40[1];
        if ( !v41 )
          goto LABEL_57;
        v21 = *v40;
        v42 = (__int64)&(*v40)[(_QWORD)v41];
        if ( *v40 != (int *)v42 )
        {
          do
          {
            v20 = *v21;
            if ( !*v21 )
              goto LABEL_57;
            if ( v20 != *(_DWORD *)(v193 + 72) )
            {
              v43 = &v202[v203];
              if ( v202 == v43 )
                goto LABEL_70;
              v44 = v202;
              while ( v20 != *v44 )
              {
                if ( v43 == ++v44 )
                  goto LABEL_70;
              }
              if ( v43 == v44 )
              {
LABEL_70:
                if ( *((_QWORD *)&v203 + 1) < (unsigned __int64)(v203 + 1) )
                {
                  v152 = v21;
                  v154 = *v21;
                  nb = v42;
                  v202 = (int *)qvector_reserve((__int64)&v202, (__int64)v202, v203 + 1, 4);
                  v21 = v152;
                  v20 = v154;
                  v42 = nb;
                  v43 = &v202[v203];
                }
                *v43 = v20;
                *(_QWORD *)&v203 = v203 + 1;
              }
            }
            ++v21;
          }
          while ( (int *)v42 != v21 );
        }
        if ( (int *)v37 == ++v36 )
          break;
        v26 = *(_BYTE *)(v23 + 56);
      }
      v58 = *v25;
      for ( i = (__int64)&(*v25)[*(_QWORD *)(v23 + 32)]; (int *)i != v58; ++v58 )
      {
        v60 = &v169[v170];
        v61 = *v58;
        if ( v169 == v60 )
        {
LABEL_86:
          if ( *((_QWORD *)&v170 + 1) < (unsigned __int64)(v170 + 1) )
          {
            v169 = (unsigned int *)qvector_reserve((__int64)&v169, (__int64)v169, v170 + 1, 4);
            v60 = &v169[v170];
          }
          *v60 = v61;
          *(_QWORD *)&v170 = v170 + 1;
        }
        else
        {
          v62 = v169;
          while ( *v58 != *v62 )
          {
            if ( v60 == ++v62 )
            {
              v61 = *v58;
              goto LABEL_86;
            }
          }
          v61 = *v58;
          if ( v60 == v62 )
            goto LABEL_86;
        }
      }
    }
LABEL_81:
    if ( (*(_QWORD *)v23 & 2) == 0 )
    {
      v63 = *(_QWORD *)(v23 + 16);
      if ( (*(_BYTE *)v63 & 2) != 0 )
      {
        v45 = (_QWORD *)(*(_QWORD *)v23 & 0xFFFFFFFFFFFFFFFCLL);
        v46 = *v45;
        if ( (*v45 & 2) != 0 || v45[2] != v23 )
        {
LABEL_48:
          v23 = (unsigned __int64)v45;
        }
        else
        {
          while ( 1 )
          {
            v23 = v46 & 0xFFFFFFFFFFFFFFFCLL;
            v46 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v46 & 2) != 0 )
              break;
            v64 = v45;
            v45 = (_QWORD *)v23;
            if ( *(_QWORD **)(v23 + 16) != v64 )
              goto LABEL_48;
          }
        }
      }
      else
      {
        do
        {
          v23 = v63;
          v63 = *(_QWORD *)(v63 + 8);
        }
        while ( (*(_BYTE *)v63 & 2) == 0 );
      }
    }
  }
  while ( v147 != v23 );
LABEL_50:
  v47 = v193;
  v48 = v176;
  v176[0] = 0;
  v176[1] = 0;
  src = nullptr;
  v178 = 0;
  sub_127FE0(v193, (__int64)v176, (__int64)v197, 0, v20, (int)v21, v138, v139, (int)v141, (int)v173, (__int64)v187);
  v148 = (unsigned int *)&v202[v203];
  if ( v202 == (int *)v148 )
    goto LABEL_140;
  v151 = (unsigned int *)v202;
  do
  {
    v52 = *v151;
    if ( (unsigned int)v52 >= *(_DWORD *)(v192 + 64) )
      sub_1346B0(v47, v48, v192, v49, v50, v51);
    v53 = *(_QWORD *)(*(_QWORD *)(v192 + 528) + 8 * v52);
    if ( !(unsigned __int8)sub_64820(v176, (_QWORD *)(v53 + 200)) || !(unsigned __int8)sub_317F40(v53 + 216, &src) )
      goto LABEL_54;
    v68 = *(unsigned int **)(v53 + 56);
    sub_64000(v179, (__int64)v176);
    v180 = nullptr;
    v181 = 0;
    if ( (_QWORD)v178 )
    {
      v93 = v178;
      v94 = 16 * v178;
      v180 = (void *)qalloc_or_throw(16 * v178, (__int64)v176, v69, v70);
      *((_QWORD *)&v181 + 1) = v93;
      memcpy(v180, src, v94);
      *(_QWORD *)&v181 = v93;
    }
    v171 = nullptr;
    v172 = 0;
    do
    {
      v184 = 0;
      v182 = 0;
      v183 = 0u;
      v71 = (unsigned int *)sub_129150(v53, v179, (__int64)v68, 0, (__int64)&v182, 0, 0x101u);
      v68 = v71;
      if ( !v71 )
      {
        if ( !under_debugger )
          sub_383060(52819);
        goto LABEL_241;
      }
      if ( v71 == *(unsigned int **)(v53 + 56) && (unsigned __int8)sub_32ED40(*v71, 0)
        || !(unsigned __int8)sub_64820(&v182, v179)
        || !(unsigned __int8)sub_317F40(&v180, (char *)&v183 + 8) )
      {
        if ( *((_QWORD *)&v183 + 1) )
        {
          *(_QWORD *)&v184 = 0;
          qfree(*((__int64 *)&v183 + 1));
        }
        qfree(v182);
LABEL_111:
        if ( v171 )
        {
          *(_QWORD *)&v172 = 0;
          qfree((__int64)v171);
        }
        if ( v180 )
        {
          *(_QWORD *)&v181 = 0;
          qfree((__int64)v180);
        }
        qfree(v179[0]);
LABEL_54:
        if ( src )
        {
          *(_QWORD *)&v178 = 0;
          qfree((__int64)src);
        }
        qfree(v176[0]);
        goto LABEL_57;
      }
      v73 = v172;
      v74 = *v68;
      v75 = &v171[v172];
      if ( v171 == v75 )
        goto LABEL_150;
      v76 = v171;
      while ( (_DWORD)v74 != *v76 )
      {
        if ( v75 == ++v76 )
          goto LABEL_150;
      }
      if ( v76 == v75 )
      {
LABEL_150:
        v73 = v172 + 1;
        if ( *((_QWORD *)&v172 + 1) < (unsigned __int64)(v172 + 1) )
        {
          nc = *v68;
          v92 = qvector_reserve((__int64)&v171, (__int64)v171, v73, 4);
          v73 = v172;
          v171 = (_DWORD *)v92;
          v74 = nc;
          v75 = (_DWORD *)(v92 + 4 * v172);
        }
        *v75 = v74;
        *(_QWORD *)&v172 = v172 + 1;
      }
      sub_64640(v179, &v182, v73, (__int64)v75, v74, v72);
      v48 = (__int64 *)&v183 + 1;
      sub_317C60(&v180, (char *)&v183 + 8);
      if ( *((_QWORD *)&v183 + 1) )
      {
        *(_QWORD *)&v184 = 0;
        qfree(*((__int64 *)&v183 + 1));
      }
      qfree(v182);
    }
    while ( !(unsigned __int8)sub_64880(v179) || (_QWORD)v181 );
    v77 = &v171[v172];
    v78 = v171;
    if ( v171 != v77 )
    {
      while ( *v78 != 12 )
      {
        if ( v77 == ++v78 )
          goto LABEL_135;
      }
      if ( v78 != v77 )
      {
        v79 = v171;
        while ( *v79 != 13 )
        {
          if ( v77 == ++v79 )
            goto LABEL_135;
        }
        if ( v79 != v77 )
          goto LABEL_111;
      }
    }
LABEL_135:
    if ( v171 )
    {
      *(_QWORD *)&v172 = 0;
      qfree((__int64)v171);
    }
    if ( v180 )
    {
      *(_QWORD *)&v181 = 0;
      qfree((__int64)v180);
    }
    v47 = v179[0];
    qfree(v179[0]);
    ++v151;
  }
  while ( v148 != v151 );
LABEL_140:
  if ( src )
  {
    *(_QWORD *)&v178 = 0;
    qfree((__int64)src);
  }
  v80 = v176[0];
  qfree(v176[0]);
  v83 = (__int64 *)v203;
  v84 = (__int64)&v202[v203];
  if ( (int *)v84 == v202 )
  {
    v88 = v169;
    v112 = v170;
    v89 = &v169[v170];
    if ( v89 == v169 )
      goto LABEL_219;
    while ( 1 )
    {
LABEL_205:
      v115 = *v88;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 == (_DWORD)v115 )
      {
        v146 = 1;
      }
      else
      {
        if ( v188 )
          v206 = 1;
        v116 = v143;
        v117 = &v182;
        sub_64000(&v182, v143);
        v122 = v175;
        *((_QWORD *)&v183 + 1) = 0;
        v184 = 0;
        if ( (_QWORD)v175 )
        {
          nd = 16 * v175;
          v123 = (__int64 *)qalloc_or_throw(16 * v175, v143, 16 * v175, v119);
          v116 = (__int64)v174;
          v117 = v123;
          *((_QWORD *)&v183 + 1) = v123;
          *((_QWORD *)&v184 + 1) = v122;
          memcpy(v123, v174, nd);
          *(_QWORD *)&v184 = v122;
        }
        v113 = *(_QWORD *)(a1 + 64);
        if ( (unsigned int)v115 >= *(_DWORD *)(v113 + 64) )
          sub_1346B0(v117, v116, v118, v119, v120, v121);
        v83 = &v182;
        v114 = *(_QWORD **)(*(_QWORD *)(v113 + 528) + 8 * v115);
        if ( (unsigned int)sub_129C50(v114, &v182, v114[6], 0, v144) )
        {
          sub_93B40(&v182);
LABEL_57:
          if ( v204 )
          {
            if ( v205 )
            {
              v54 = *((char **)v204 + 1);
              while ( v204 != v54 )
              {
                sub_11CA10(*((char **)v54 + 3), v54 + 32);
                if ( (*(_QWORD *)v54 & 2) == 0 )
                {
                  v55 = *((char **)v54 + 2);
                  if ( (*v55 & 2) != 0 )
                  {
                    v65 = (char *)(*(_QWORD *)v54 & 0xFFFFFFFFFFFFFFFCLL);
                    v66 = *(_QWORD *)v65;
                    if ( (*(_QWORD *)v65 & 2) == 0 )
                    {
                      while ( v54 == *((char **)v65 + 2) )
                      {
                        v54 = v65;
                        v67 = v66 & 0xFFFFFFFFFFFFFFFCLL;
                        v66 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v66 & 2) != 0 )
                        {
                          v54 = (char *)v67;
                          goto LABEL_63;
                        }
                        v65 = (char *)v67;
                      }
                    }
                    v54 = v65;
                  }
                  else
                  {
                    do
                    {
                      v54 = v55;
                      v55 = *((char **)v55 + 1);
                    }
                    while ( (*v55 & 2) == 0 );
                  }
                }
LABEL_63:
                ;
              }
            }
          }
          v56 = 0;
          goto LABEL_65;
        }
        if ( *((_QWORD *)&v183 + 1) )
        {
          *(_QWORD *)&v184 = 0;
          qfree(*((__int64 *)&v183 + 1));
        }
        v80 = v182;
        qfree(v182);
      }
      if ( v89 == ++v88 )
      {
        v90 = (__int64)v202;
        v91 = (unsigned int *)&v202[v203];
        if ( v202 != (int *)v91 )
          goto LABEL_213;
        goto LABEL_218;
      }
    }
  }
  v81 = v202;
  v85 = (__int64 *)v203;
  v84 = (__int64)v202;
  v86 = 1;
  while ( 2 )
  {
    v87 = (_QWORD *)(*(_QWORD *)v150 + 24LL * *v81);
    v142 = (_QWORD *)*v87;
    if ( *v87 )
    {
      if ( v87[1] )
      {
        v95 = *(_QWORD **)(*v87 + 8LL);
        if ( (_QWORD *)*v87 != v95 )
        {
          v145 = v86;
          v167 = v85;
          v80 = v201;
          v82 = v200;
          v96 = &v169[v170];
          while ( 1 )
          {
            v149 = v95[4];
            if ( !v149 )
              goto LABEL_185;
            v97 = *((_BYTE *)v95 + 56);
            if ( v97 == 1 )
            {
              v155 = *((int *)v95 + 12);
            }
            else
            {
              if ( v97 != 5 )
              {
                if ( !under_debugger )
                  sub_383060(51893);
                goto LABEL_241;
              }
              v155 = v95[6];
            }
            v98 = *((int *)v95 + 16);
            if ( !(_QWORD)v201 )
              goto LABEL_185;
            v140 = (_DWORD **)(v95 + 3);
            n = v98 != 0;
            v99 = 0;
            v153 = v155 + v98 - 1;
            v100 = 0;
            while ( 1 )
            {
              v101 = (char *)(v200 + 16 * v100);
              v102 = *v101;
              if ( *v101 == 1 )
                break;
              if ( v102 == 5 )
              {
                v103 = *(_QWORD *)(*((_QWORD *)v101 + 1) + 8LL);
                goto LABEL_167;
              }
LABEL_164:
              v100 = ++v99;
              if ( v99 >= (unsigned __int64)v201 )
                goto LABEL_185;
            }
            v103 = *((int *)v101 + 2);
LABEL_167:
            if ( v97 != v102 )
              goto LABEL_164;
            v104 = *((int *)v101 + 1);
            if ( !v104 || !n || v153 < v103 || v103 + v104 - 1 < v155 )
              goto LABEL_164;
            v85 = v167;
            if ( v155 != v103 )
              goto LABEL_173;
            if ( v99 == -2 )
            {
LABEL_174:
              v86 = 0;
              break;
            }
            v105 = *v140;
            v106 = (__int64)&(*v140)[v149];
            if ( (_DWORD *)v106 != *v140 )
            {
              v85 = v167;
              while ( v169 != v96 )
              {
                v107 = v169;
                while ( *v105 != *v107 )
                {
                  if ( v96 == ++v107 )
                    goto LABEL_174;
                }
                if ( (_DWORD *)v106 == ++v105 )
                  goto LABEL_184;
              }
              goto LABEL_174;
            }
LABEL_184:
            if ( !v145 )
            {
LABEL_173:
              v85 = v167;
              goto LABEL_174;
            }
LABEL_185:
            if ( (*v95 & 2) == 0 )
            {
              v108 = (_QWORD *)v95[2];
              if ( (*(_BYTE *)v108 & 2) != 0 )
              {
                v109 = (_QWORD *)(*v95 & 0xFFFFFFFFFFFFFFFCLL);
                v110 = *v109;
                if ( (*v109 & 2) == 0 )
                {
                  while ( (_QWORD *)v109[2] == v95 )
                  {
                    v95 = v109;
                    v111 = v110 & 0xFFFFFFFFFFFFFFFCLL;
                    v110 = *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v110 & 2) != 0 )
                    {
                      v95 = (_QWORD *)v111;
                      goto LABEL_188;
                    }
                    v109 = (_QWORD *)v111;
                  }
                }
                v95 = v109;
              }
              else
              {
                do
                {
                  v95 = v108;
                  v108 = (_QWORD *)v108[1];
                }
                while ( (*(_BYTE *)v108 & 2) == 0 );
              }
            }
LABEL_188:
            if ( v142 == v95 )
            {
              v86 = v145;
              v85 = v167;
              break;
            }
          }
        }
      }
    }
    if ( &v202[(_QWORD)v203] != ++v81 )
      continue;
    break;
  }
  v83 = v85;
  if ( !v86 )
    goto LABEL_57;
  v88 = v169;
  v89 = &v169[v170];
  if ( v169 != v89 )
    goto LABEL_205;
  v90 = (__int64)v202;
  v91 = (unsigned int *)&v202[(_QWORD)v85];
LABEL_213:
  v168 = (unsigned int *)v90;
  do
  {
    v124 = *v168;
    if ( (unsigned int)v124 >= *(_DWORD *)(v192 + 64) )
      sub_1346B0(v80, v83, v192, v81, v82, v84);
    v125 = *(_QWORD *)(*(_QWORD *)(v192 + 528) + 8 * v124);
    v126 = *(unsigned int **)(v125 + 56);
    if ( (unsigned __int8)sub_32ED40(*v126, 0) )
      v126 = *((unsigned int **)v126 + 2);
    v129 = (__int64 *)j__qalloc_or_throw(80, 0, v127, v128);
    v130 = *(_QWORD *)(*(_QWORD *)(v125 + 56) + 24LL);
    v129[4] = 0xFFFFFFFF00000000LL;
    v129[5] = 0;
    v129[6] = 0xFFFFFFFF00000000LL;
    v129[7] = 0;
    v129[8] = 0xFFFFFFFF00000000LL;
    v129[9] = 0;
    sub_330970(v129, v130);
    *(_DWORD *)v129 = 4;
    sub_125180((__int64)(v129 + 4), v197);
    sub_125180((__int64)(v129 + 8), v198);
    v83 = v129;
    v80 = v125;
    sub_A3160(v125, v129, (__int64)v126);
    v131 = *(_DWORD *)(v125 + 24);
    ++v168;
    BYTE1(v131) &= ~2u;
    LOBYTE(v131) = v131 | 0x80;
    *(_DWORD *)(v125 + 24) = v131;
  }
  while ( v91 != v168 );
LABEL_218:
  v112 = v170;
  v88 = v169;
LABEL_219:
  v132 = &v88[v112];
  v133 = *(_DWORD *)(a1 + 24);
  BYTE1(v133) &= ~2u;
  LOBYTE(v133) = v133 | 0x80;
  for ( *(_DWORD *)(a1 + 24) = v133; v132 != v88; ++v88 )
  {
    v134 = *(_QWORD *)(a1 + 64);
    v135 = *v88;
    if ( (unsigned int)v135 >= *(_DWORD *)(v134 + 64) )
      sub_1346B0(v80, a1, v134, v132, v82, v84);
    v136 = *(_QWORD *)(*(_QWORD *)(v134 + 528) + 8 * v135);
    if ( *(_DWORD *)(v136 + 76) != 1 )
    {
      v137 = *(_DWORD *)(v136 + 24);
      BYTE1(v137) &= ~2u;
      LOBYTE(v137) = v137 | 0x80;
      *(_DWORD *)(v136 + 24) = v137;
    }
  }
  v56 = v146 + 1;
LABEL_65:
  if ( v174 )
  {
    v164 = v56;
    *(_QWORD *)&v175 = 0;
    qfree((__int64)v174);
    v56 = v164;
  }
  v165 = v56;
  qfree(v173[0]);
  sub_104E10(v161);
  sub_104E10(v150);
  v57 = v165;
  if ( v169 )
  {
    *(_QWORD *)&v170 = 0;
    qfree((__int64)v169);
    v57 = v165;
  }
  v166 = v57;
  v187[0] = off_4DDB98;
  sub_136640(&v191);
  return v166;
}
