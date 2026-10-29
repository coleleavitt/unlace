__int64 __fastcall sub_798E00(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(_QWORD *, __int64, __int64); // rax
  __int64 v18; // rax
  size_t v19; // r8
  __int64 v20; // r15
  __int64 v21; // rax
  int v22; // edi
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 *i; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 *v34; // rdx
  __int64 v35; // rax
  int v36; // r11d
  unsigned int v37; // edx
  int v38; // edi
  __int64 v39; // rax
  _QWORD *v40; // r10
  __int64 *v41; // rax
  __int64 *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 *v48; // rbp
  __int64 v49; // rsi
  __int64 v50; // rdi
  bool v51; // zf
  __int64 *v52; // rax
  __int64 *v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v57; // rax
  __int64 (__fastcall *v58)(_QWORD *, __int64, __int64); // rax
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // rax
  int v62; // edi
  unsigned int v63; // edx
  __int64 *v64; // rsi
  __int64 v65; // rdx
  __int64 *m; // rax
  __int64 v67; // rdx
  _QWORD *v68; // rcx
  unsigned int v69; // eax
  __int64 v70; // rdx
  int v71; // eax
  __int64 *v72; // rdx
  __int64 v73; // rax
  int v74; // r11d
  int v75; // edi
  __int64 v76; // rax
  _QWORD *v77; // r10
  __int64 *v78; // rax
  __int64 *v79; // rsi
  __int64 v80; // rdx
  unsigned __int64 *v81; // rax
  __int64 v82; // rdx
  unsigned __int64 *v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 (__fastcall *v87)(_QWORD *, __int64, __int64); // rax
  __int64 v88; // rax
  __int64 v89; // r15
  __int64 v90; // rax
  int v91; // edi
  __int64 *v92; // rsi
  unsigned int v93; // edx
  __int64 *v94; // r10
  __int64 v95; // rdx
  __int64 *ii; // rax
  __int64 v97; // rdx
  _QWORD *v98; // rdx
  unsigned int v99; // ecx
  __int64 v100; // rax
  unsigned int v101; // ecx
  __int64 *v102; // rax
  __int64 v103; // rax
  int v104; // r11d
  int v105; // edi
  __int64 v106; // rax
  _QWORD *v107; // r10
  __int64 *v108; // rax
  __int64 *v109; // rsi
  __int64 v110; // rdx
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 (__fastcall *v114)(_QWORD *, __int64, __int64); // rax
  __int64 v115; // r12
  __int64 v116; // rax
  __int64 *v117; // rcx
  __int64 v118; // rax
  int v119; // edi
  unsigned int v120; // edx
  __int64 *v121; // rsi
  __int64 v122; // rdx
  __int64 *v123; // r8
  __int64 *j; // rax
  __int64 v125; // rdx
  _QWORD *v126; // rax
  unsigned int v127; // edx
  __int64 v128; // rcx
  int v129; // edx
  __int64 *v130; // rcx
  __int64 v131; // rax
  int v132; // r8d
  __int64 *v133; // rbp
  __int64 v134; // rcx
  unsigned int v135; // r10d
  __int64 v136; // r14
  int v137; // esi
  __int64 v138; // r10
  __int64 *v139; // rdi
  __int64 *v140; // rax
  __int64 *v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // rsi
  __int64 v144; // rdi
  __int64 *v145; // rsi
  __int64 v146; // rsi
  __int64 v147; // rdi
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 *v150; // rcx
  __int64 v151; // rax
  int v152; // edi
  unsigned int v153; // edx
  __int64 *v154; // rsi
  __int64 v155; // rdx
  __int64 *v156; // r8
  __int64 *k; // rax
  __int64 v158; // rdx
  _QWORD *v159; // rax
  unsigned int v160; // edx
  __int64 v161; // rcx
  int v162; // edx
  __int64 *v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rcx
  unsigned int v166; // r10d
  __int64 v167; // r14
  int v168; // esi
  __int64 v169; // r10
  __int64 *v170; // rdi
  __int64 v171; // rdx
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  unsigned int v183; // edx
  size_t v184; // rsi
  unsigned int *v185; // rax
  __int64 v186; // rdx
  unsigned int v187; // r14d
  unsigned int v188; // ecx
  unsigned int *v189; // rdx
  __int64 v190; // rcx
  _QWORD *v191; // rax
  _QWORD *v192; // rax
  _QWORD *v193; // rax
  _QWORD *v194; // rcx
  _QWORD *v195; // rax
  _QWORD *v196; // rax
  char *v197; // r10
  __int64 v198; // rsi
  char *v199; // rbx
  __int64 v200; // rax
  void **v201; // r15
  __int64 v202; // r8
  __int64 v203; // rdx
  _QWORD *v204; // rsi
  _QWORD *v205; // rdx
  __int64 *v206; // rax
  int v207; // r9d
  __int64 *v208; // r15
  __int64 *v209; // r8
  __int64 v210; // rax
  __int64 *v211; // rdx
  __int64 *v212; // rax
  unsigned int v213; // r14d
  unsigned int v214; // ecx
  unsigned int *v215; // rdx
  __int64 v216; // rcx
  unsigned int v217; // r9d
  unsigned int v218; // eax
  unsigned int *v219; // rax
  __int64 v220; // rax
  int v221; // ecx
  unsigned int v222; // edx
  size_t v223; // rsi
  unsigned int *v224; // rax
  __int64 v225; // rdx
  _QWORD *v226; // rax
  _QWORD *v227; // rax
  char *v228; // rax
  __int64 v229; // rdx
  void *v230; // r10
  __int64 *v231; // rsi
  _QWORD *v232; // r13
  void **v233; // r14
  __int64 v234; // rcx
  _QWORD *v235; // r8
  char *v236; // rbx
  char *v237; // r12
  _QWORD *v238; // rax
  _QWORD *v239; // rbp
  __int64 *v240; // r9
  __int64 v241; // rdx
  _QWORD *v242; // rsi
  _QWORD *v243; // rdx
  _QWORD *v244; // rax
  _QWORD *v245; // rax
  char *v246; // rax
  __int64 v247; // rdx
  void *v248; // r10
  __int64 *v249; // rsi
  _QWORD *v250; // r13
  void **v251; // r14
  __int64 v252; // rcx
  _QWORD *v253; // r8
  char *v254; // rbx
  char *v255; // r12
  _QWORD *v256; // rax
  _QWORD *v257; // rbp
  __int64 *v258; // r9
  __int64 v259; // rdx
  _QWORD *v260; // rsi
  _QWORD *v261; // rdx
  __int64 *v262; // rax
  int v263; // r9d
  __int64 *v264; // r15
  __int64 *v265; // r8
  __int64 v266; // rax
  __int64 *v267; // rdx
  __int64 *v268; // rax
  unsigned __int64 v269; // rbx
  unsigned __int64 *v270; // r14
  unsigned __int64 v271; // r14
  __int64 v272; // rbx
  _QWORD *v273; // rax
  _QWORD *v274; // rcx
  _QWORD *v275; // rax
  char **exception; // r12
  char **v277; // rbx
  __int64 v278; // [rsp+8h] [rbp-B0h]
  unsigned int v279; // [rsp+8h] [rbp-B0h]
  __int64 v280; // [rsp+8h] [rbp-B0h]
  unsigned int v281; // [rsp+8h] [rbp-B0h]
  size_t n; // [rsp+10h] [rbp-A8h]
  __int64 na; // [rsp+10h] [rbp-A8h]
  size_t nb; // [rsp+10h] [rbp-A8h]
  __int64 nc; // [rsp+10h] [rbp-A8h]
  unsigned int nd; // [rsp+10h] [rbp-A8h]
  __int64 ne; // [rsp+10h] [rbp-A8h]
  size_t nh; // [rsp+10h] [rbp-A8h]
  int nf; // [rsp+10h] [rbp-A8h]
  size_t ni; // [rsp+10h] [rbp-A8h]
  size_t nj; // [rsp+10h] [rbp-A8h]
  int ng; // [rsp+10h] [rbp-A8h]
  size_t nk; // [rsp+10h] [rbp-A8h]
  unsigned int v294; // [rsp+18h] [rbp-A0h]
  unsigned int v295; // [rsp+18h] [rbp-A0h]
  __int64 v296; // [rsp+18h] [rbp-A0h]
  unsigned int v297; // [rsp+18h] [rbp-A0h]
  unsigned int v298; // [rsp+18h] [rbp-A0h]
  unsigned int v299; // [rsp+18h] [rbp-A0h]
  int v300; // [rsp+18h] [rbp-A0h]
  unsigned int v301; // [rsp+18h] [rbp-A0h]
  unsigned int v302; // [rsp+18h] [rbp-A0h]
  size_t v303; // [rsp+18h] [rbp-A0h]
  size_t v304; // [rsp+18h] [rbp-A0h]
  int v305; // [rsp+18h] [rbp-A0h]
  unsigned int v306; // [rsp+20h] [rbp-98h]
  unsigned int v307; // [rsp+20h] [rbp-98h]
  size_t v308; // [rsp+20h] [rbp-98h]
  size_t v309; // [rsp+20h] [rbp-98h]
  _QWORD *v310; // [rsp+28h] [rbp-90h]
  _QWORD *v311; // [rsp+28h] [rbp-90h]
  size_t v312; // [rsp+28h] [rbp-90h]
  unsigned int v313; // [rsp+30h] [rbp-88h]
  size_t v314; // [rsp+30h] [rbp-88h]
  _QWORD *v315; // [rsp+30h] [rbp-88h]
  _QWORD *v316; // [rsp+38h] [rbp-80h]
  __int64 v317; // [rsp+38h] [rbp-80h]
  __int64 v318; // [rsp+38h] [rbp-80h]
  int v319; // [rsp+5Ch] [rbp-5Ch] BYREF
  __int64 v320[11]; // [rsp+60h] [rbp-58h] BYREF

  v6 = (_QWORD *)a1;
  v7 = a2;
  v8 = *(unsigned int *)(a1 + 32);
  v9 = *(__int64 **)(a1 + 24);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v8 - 1;
  v8 *= 16;
  v12 = (__int64 *)((char *)v9 + v8);
  v13 = 16LL * (v10 & v11);
  v14 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 == v8 )
  {
LABEL_50:
    while ( v14 != v9 )
    {
      v57 = *v9;
      if ( (unsigned __int64)*v9 > 1 )
      {
        if ( *(_DWORD *)(v57 + 12) == v10 && v7 == v57 )
        {
          v15 = v9;
          goto LABEL_30;
        }
      }
      else if ( !v57 )
      {
        break;
      }
      v9 += 2;
    }
LABEL_8:
    v17 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v6 + 56LL);
    v319 = 0;
    if ( v17 != sub_797F40 )
    {
      v20 = ((__int64 (__fastcall *)(_QWORD *, int *, __int64, __int64 *, __int64 *))v17)(v6, &v319, v7, v9, v14);
      if ( v20 )
        goto LABEL_111;
      goto LABEL_112;
    }
    n = sub_796F80((__int64)v6, v7);
    v18 = (*(__int64 (__fastcall **)(_QWORD *, int *, __int64))(*v6 + 48LL))(v6, &v319, v7);
    v19 = n;
    v20 = v18;
    v21 = *(unsigned int *)(n + 8);
    v22 = *(_DWORD *)(v20 + 12);
    v23 = *(_QWORD *)n;
    v24 = v21 - 1;
    v21 *= 8;
    v25 = (__int64 *)(*(_QWORD *)n + v21);
    v26 = 8LL * (v22 & v24);
    v27 = *(_QWORD *)n + v26;
    if ( v26 != v21 )
    {
      for ( i = (__int64 *)(*(_QWORD *)n + v26); v25 != i; ++i )
      {
        v29 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v29 + 12) == v22 && v20 == v29 )
            goto LABEL_111;
        }
        else if ( !v29 )
        {
          goto LABEL_16;
        }
      }
    }
    for ( ; v27 != v23; v23 += 8LL )
    {
      v173 = *(_QWORD *)v23;
      if ( *(_QWORD *)v23 > 1u )
      {
        if ( *(_DWORD *)(v173 + 12) == v22 && v20 == v173 )
          goto LABEL_111;
      }
      else if ( !v173 )
      {
        break;
      }
    }
LABEL_16:
    v30 = (_QWORD *)v6[7];
    ++*(_DWORD *)(v20 + 8);
    if ( v30 )
    {
      v31 = *((_DWORD *)v30 - 1);
      if ( v31 == *((_DWORD *)v30 - 2) )
      {
        v183 = (3 * v31 + 1) >> 1;
        v184 = 8 * v183 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v184 || v31 >= v183 )
          goto LABEL_425;
        v298 = (3 * v31 + 1) >> 1;
        v185 = (unsigned int *)sub_186B300(v30 - 1, v184);
        v19 = n;
        v30 = v185 + 2;
        *v185 = v298;
        v186 = v185[1];
        v6[7] = v185 + 2;
        LODWORD(v185) = v186;
        v34 = &v30[v186];
        v33 = (_DWORD)v185 + 1;
      }
      else
      {
        v32 = v31;
        v33 = v31 + 1;
        v34 = &v30[v32];
      }
    }
    else
    {
      v273 = (_QWORD *)sub_186B270(0x18u);
      v19 = n;
      v274 = v273;
      *v273 = 2;
      v33 = 1;
      v30 = v274 + 1;
      v6[7] = v30;
      v34 = v30;
    }
    *v34 = v20;
    *((_DWORD *)v30 - 1) = v33;
    v35 = *(unsigned int *)(v19 + 8);
    v36 = *(_DWORD *)(v19 + 16);
    v294 = 2 * v35;
    if ( 3 * (int)v35 < (unsigned int)(4 * (v36 + *(_DWORD *)(v19 + 12))) )
    {
      v308 = v19;
      na = 8LL * v294;
      v195 = (_QWORD *)sub_186B270(na);
      v19 = v308;
      v23 = (unsigned __int64)v195;
      if ( v294 )
      {
        v196 = memset(v195, 0, na);
        v19 = v308;
        v23 = (unsigned __int64)v196;
      }
      v37 = v294 - 1;
      v197 = (char *)(*(_QWORD *)v19 + 8LL * *(unsigned int *)(v19 + 8));
      v27 = v23 + na;
      if ( *(char **)v19 != v197 )
      {
        v198 = v7;
        v199 = *(char **)v19;
        v200 = v20;
        v201 = (void **)v19;
        v202 = v198;
        do
        {
          if ( *(_QWORD *)v199 > 1u )
          {
            v203 = 8LL * (*(_DWORD *)(*(_QWORD *)v199 + 12LL) & (v294 - 1));
            v204 = (_QWORD *)(v23 + v203);
            if ( na == v203 )
            {
LABEL_291:
              if ( (_QWORD *)v23 == v204 )
              {
LABEL_398:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v205 = (_QWORD *)v23;
              while ( *v205 )
              {
                if ( v204 == ++v205 )
                  goto LABEL_398;
              }
            }
            else
            {
              v205 = (_QWORD *)(v23 + v203);
              while ( *v205 )
              {
                if ( (_QWORD *)v27 == ++v205 )
                  goto LABEL_291;
              }
            }
            *v205 = *(_QWORD *)v199;
          }
          v199 += 8;
        }
        while ( v197 != v199 );
        v7 = v202;
        v19 = (size_t)v201;
        v197 = (char *)*v201;
        v37 = v294 - 1;
        v20 = v200;
      }
      if ( v197 )
      {
        v316 = (_QWORD *)(v23 + na);
        v313 = v37;
        v310 = (_QWORD *)v23;
        v309 = v19;
        sub_186B220(v197);
        v27 = (__int64)v316;
        v37 = v313;
        v23 = (unsigned __int64)v310;
        v19 = v309;
      }
      *(_QWORD *)v19 = v23;
      v36 = 0;
      *(_DWORD *)(v19 + 16) = 0;
      *(_DWORD *)(v19 + 8) = v294;
    }
    else
    {
      v37 = v35 - 1;
      v23 = *(_QWORD *)v19;
      na = 8 * v35;
      v27 = *(_QWORD *)v19 + 8 * v35;
    }
    v38 = *(_DWORD *)(v20 + 12);
    v39 = 8LL * (v38 & v37);
    v40 = (_QWORD *)(v23 + v39);
    if ( v39 != na )
    {
      v41 = (__int64 *)(v23 + v39);
      v42 = nullptr;
      while ( 1 )
      {
        v43 = *v41;
        if ( (unsigned __int64)*v41 > 1 )
        {
          if ( *(_DWORD *)(v43 + 12) == v38 && v20 == v43 )
          {
            *v41 = v20;
            goto LABEL_111;
          }
        }
        else
        {
          if ( !v43 )
          {
            if ( v42 )
              goto LABEL_109;
            v42 = v41;
            goto LABEL_110;
          }
          v42 = v41;
        }
        if ( ++v41 == (__int64 *)v27 )
          goto LABEL_260;
      }
    }
    v42 = nullptr;
    while ( 1 )
    {
LABEL_260:
      if ( v40 == (_QWORD *)v23 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v182 = *(_QWORD *)v23;
      if ( *(_QWORD *)v23 > 1u )
      {
        if ( *(_DWORD *)(v182 + 12) == v38 && v20 == v182 )
        {
          *(_QWORD *)v23 = v20;
          goto LABEL_111;
        }
      }
      else
      {
        if ( !v182 )
        {
          if ( v42 )
LABEL_109:
            *(_DWORD *)(v19 + 16) = v36 - 1;
          else
            v42 = (__int64 *)v23;
LABEL_110:
          *v42 = v20;
          ++*(_DWORD *)(v19 + 12);
LABEL_111:
          ++*(_DWORD *)(v20 + 8);
LABEL_112:
          v111 = *a3;
          if ( *a3 )
          {
            v112 = a3[1];
            v51 = (*(_DWORD *)(v111 + 8))-- == 1;
            if ( v51 )
              sub_15D7BC0(v112, v111);
          }
          v113 = *v6;
          *a3 = v20;
          v114 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v113 + 56);
          v319 = 1;
          if ( v114 == sub_797F40 )
          {
            v115 = sub_796F80((__int64)v6, v7);
            v116 = (*(__int64 (__fastcall **)(_QWORD *, int *, __int64))(*v6 + 48LL))(v6, &v319, v7);
            v117 = *(__int64 **)v115;
            v272 = v116;
            v118 = *(unsigned int *)(v115 + 8);
            v119 = *(_DWORD *)(v272 + 12);
            v120 = v118 - 1;
            v118 *= 8;
            v121 = (__int64 *)(*(_QWORD *)v115 + v118);
            v122 = 8LL * (v119 & v120);
            v123 = (__int64 *)(*(_QWORD *)v115 + v122);
            if ( v122 != v118 )
            {
              for ( j = (__int64 *)(*(_QWORD *)v115 + v122); v121 != j; ++j )
              {
                v125 = *j;
                if ( (unsigned __int64)*j > 1 )
                {
                  if ( *(_DWORD *)(v125 + 12) == v119 && v272 == v125 )
                    goto LABEL_44;
                }
                else if ( !v125 )
                {
                  goto LABEL_123;
                }
              }
            }
            for ( ; v123 != v117; ++v117 )
            {
              v172 = *v117;
              if ( (unsigned __int64)*v117 > 1 )
              {
                if ( *(_DWORD *)(v172 + 12) == v119 && v272 == v172 )
                  goto LABEL_44;
              }
              else if ( !v172 )
              {
                break;
              }
            }
LABEL_123:
            v126 = (_QWORD *)v6[7];
            ++*(_DWORD *)(v272 + 8);
            if ( v126 )
            {
              v127 = *((_DWORD *)v126 - 1);
              if ( v127 != *((_DWORD *)v126 - 2) )
              {
                v128 = v127;
                v129 = v127 + 1;
                v130 = &v126[v128];
                goto LABEL_126;
              }
              v187 = (3 * v127 + 1) >> 1;
              v188 = 8 * v187 + 8;
              if ( 8 * v127 + 8 < v188 && v127 < v187 )
              {
                v189 = (unsigned int *)sub_186B300(v126 - 1, v188);
                v126 = v189 + 2;
                v190 = v189[1];
                *v189 = v187;
                v6[7] = v189 + 2;
                LODWORD(v189) = v190;
                v130 = &v126[v190];
                v129 = (_DWORD)v189 + 1;
                goto LABEL_126;
              }
LABEL_424:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v320, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v320);
              sub_233E40((__int64)v320);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v275 = (_QWORD *)sub_186B270(0x18u);
            v129 = 1;
            *v275 = 2;
            v126 = v275 + 1;
            v6[7] = v126;
            v130 = v126;
LABEL_126:
            *v130 = v272;
            *((_DWORD *)v126 - 1) = v129;
            v131 = *(unsigned int *)(v115 + 8);
            v132 = *(_DWORD *)(v115 + 16);
            if ( 3 * (int)v131 < (unsigned int)(4 * (v132 + *(_DWORD *)(v115 + 12))) )
            {
              nf = 2 * v131;
              v278 = 8LL * (unsigned int)(2 * v131);
              v206 = (__int64 *)sub_186B270(v278);
              v207 = nf;
              v134 = v278;
              v133 = v206;
              if ( nf )
              {
                memset(v206, 0, v278);
                v134 = v278;
                v207 = nf;
              }
              v208 = *(__int64 **)v115;
              v135 = v207 - 1;
              v136 = (__int64)v133 + v134;
              v209 = (__int64 *)(*(_QWORD *)v115 + 8LL * *(unsigned int *)(v115 + 8));
              if ( *(__int64 **)v115 != v209 )
              {
                do
                {
                  if ( (unsigned __int64)*v208 > 1 )
                  {
                    v210 = 8LL * (*(_DWORD *)(*v208 + 12) & v135);
                    v211 = &v133[(unsigned __int64)v210 / 8];
                    if ( v134 == v210 )
                    {
LABEL_311:
                      if ( v133 == v211 )
                      {
LABEL_394:
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v212 = v133;
                      while ( *v212 )
                      {
                        if ( v211 == ++v212 )
                          goto LABEL_394;
                      }
                    }
                    else
                    {
                      v212 = &v133[(unsigned __int64)v210 / 8];
                      while ( *v212 )
                      {
                        if ( (__int64 *)v136 == ++v212 )
                          goto LABEL_311;
                      }
                    }
                    *v212 = *v208;
                  }
                  ++v208;
                }
                while ( v209 != v208 );
                v209 = *(__int64 **)v115;
              }
              if ( v209 )
              {
                v300 = v207;
                ni = v134;
                v279 = v207 - 1;
                sub_186B220(v209);
                v207 = v300;
                v134 = ni;
                v135 = v279;
              }
              *(_QWORD *)v115 = v133;
              v132 = 0;
              *(_DWORD *)(v115 + 8) = v207;
              *(_DWORD *)(v115 + 16) = 0;
            }
            else
            {
              v133 = *(__int64 **)v115;
              v134 = 8 * v131;
              v135 = v131 - 1;
              v136 = *(_QWORD *)v115 + 8 * v131;
            }
            v137 = *(_DWORD *)(v272 + 12);
            v138 = v137 & v135;
            v139 = &v133[v138];
            if ( 8 * v138 != v134 )
            {
              v140 = &v133[v138];
              v141 = nullptr;
              while ( 1 )
              {
                v142 = *v140;
                if ( (unsigned __int64)*v140 > 1 )
                {
                  if ( *(_DWORD *)(v142 + 12) == v137 && v272 == v142 )
                    goto LABEL_393;
                }
                else
                {
                  if ( !v142 )
                    goto LABEL_276;
                  v141 = v140;
                }
                if ( ++v140 == (__int64 *)v136 )
                  goto LABEL_253;
              }
            }
            v141 = nullptr;
LABEL_253:
            while ( v139 != v133 )
            {
              v181 = *v133;
              if ( (unsigned __int64)*v133 > 1 )
              {
                if ( *(_DWORD *)(v181 + 12) == v137 && v272 == v181 )
                  goto LABEL_407;
              }
              else
              {
                if ( !v181 )
                  goto LABEL_320;
                v141 = v133;
              }
              ++v133;
            }
LABEL_275:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
LABEL_223:
          v145 = (__int64 *)&v319;
          v177 = v7;
LABEL_224:
          v272 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, __int64, unsigned __int64, size_t, __int64))v114)(
                   v6,
                   v145,
                   v177,
                   v23,
                   v19,
                   v27);
LABEL_221:
          if ( v272 )
            goto LABEL_44;
          goto LABEL_45;
        }
        v42 = (__int64 *)v23;
      }
      v23 += 8LL;
    }
  }
  v15 = &v9[(unsigned __int64)v13 / 8];
  while ( 1 )
  {
    v16 = *v15;
    if ( (unsigned __int64)*v15 > 1 )
      break;
    if ( !v16 )
      goto LABEL_8;
LABEL_5:
    v15 += 2;
    if ( v12 == v15 )
      goto LABEL_50;
  }
  if ( *(_DWORD *)(v16 + 12) != v10 || v7 != v16 )
    goto LABEL_5;
LABEL_30:
  v44 = v15[1];
  v45 = *(unsigned int *)(v44 + 12);
  if ( !(_DWORD)v45 )
  {
    v58 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v6 + 56LL);
    v319 = 0;
    if ( v58 != sub_797F40 )
    {
      v60 = ((__int64 (__fastcall *)(_QWORD *, int *, __int64, __int64, __int64 *))v58)(v6, &v319, v7, v45, v14);
      if ( v60 )
LABEL_149:
        ++*(_DWORD *)(v60 + 8);
      v146 = *a3;
      if ( *a3 )
      {
        v147 = a3[1];
        v51 = (*(_DWORD *)(v146 + 8))-- == 1;
        if ( v51 )
          sub_15D7BC0(v147, v146);
      }
      v148 = *v6;
      *a3 = v60;
      v114 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v148 + 56);
      v319 = 1;
      if ( v114 != sub_797F40 )
        goto LABEL_223;
      v115 = sub_796F80((__int64)v6, v7);
      v149 = (*(__int64 (__fastcall **)(_QWORD *, int *, __int64))(*v6 + 48LL))(v6, &v319, v7);
      v150 = *(__int64 **)v115;
      v272 = v149;
      v151 = *(unsigned int *)(v115 + 8);
      v152 = *(_DWORD *)(v272 + 12);
      v153 = v151 - 1;
      v151 *= 8;
      v154 = (__int64 *)(*(_QWORD *)v115 + v151);
      v155 = 8LL * (v152 & v153);
      v156 = (__int64 *)(*(_QWORD *)v115 + v155);
      if ( v155 != v151 )
      {
        for ( k = (__int64 *)(*(_QWORD *)v115 + v155); v154 != k; ++k )
        {
          v158 = *k;
          if ( (unsigned __int64)*k > 1 )
          {
            if ( *(_DWORD *)(v158 + 12) == v152 && v272 == v158 )
              goto LABEL_44;
          }
          else if ( !v158 )
          {
            goto LABEL_161;
          }
        }
      }
      for ( ; v156 != v150; ++v150 )
      {
        v175 = *v150;
        if ( (unsigned __int64)*v150 > 1 )
        {
          if ( *(_DWORD *)(v175 + 12) == v152 && v272 == v175 )
            goto LABEL_44;
        }
        else if ( !v175 )
        {
          break;
        }
      }
LABEL_161:
      v159 = (_QWORD *)v6[7];
      ++*(_DWORD *)(v272 + 8);
      if ( v159 )
      {
        v160 = *((_DWORD *)v159 - 1);
        if ( v160 == *((_DWORD *)v159 - 2) )
        {
          v213 = (3 * v160 + 1) >> 1;
          v214 = 8 * v213 + 8;
          if ( 8 * v160 + 8 >= v214 || v160 >= v213 )
            goto LABEL_424;
          v215 = (unsigned int *)sub_186B300(v159 - 1, v214);
          v159 = v215 + 2;
          v216 = v215[1];
          *v215 = v213;
          v6[7] = v215 + 2;
          LODWORD(v215) = v216;
          v163 = &v159[v216];
          v162 = (_DWORD)v215 + 1;
        }
        else
        {
          v161 = v160;
          v162 = v160 + 1;
          v163 = &v159[v161];
        }
      }
      else
      {
        v191 = (_QWORD *)sub_186B270(0x18u);
        v162 = 1;
        *v191 = 2;
        v159 = v191 + 1;
        v6[7] = v159;
        v163 = v159;
      }
      *v163 = v272;
      *((_DWORD *)v159 - 1) = v162;
      v164 = *(unsigned int *)(v115 + 8);
      v132 = *(_DWORD *)(v115 + 16);
      if ( 3 * (int)v164 < (unsigned int)(4 * (v132 + *(_DWORD *)(v115 + 12))) )
      {
        ng = 2 * v164;
        v280 = 8LL * (unsigned int)(2 * v164);
        v262 = (__int64 *)sub_186B270(v280);
        v263 = ng;
        v165 = v280;
        v133 = v262;
        if ( ng )
        {
          memset(v262, 0, v280);
          v165 = v280;
          v263 = ng;
        }
        v264 = *(__int64 **)v115;
        v166 = v263 - 1;
        v167 = (__int64)v133 + v165;
        v265 = (__int64 *)(*(_QWORD *)v115 + 8LL * *(unsigned int *)(v115 + 8));
        if ( *(__int64 **)v115 != v265 )
        {
          do
          {
            if ( (unsigned __int64)*v264 > 1 )
            {
              v266 = 8LL * (*(_DWORD *)(*v264 + 12) & v166);
              v267 = &v133[(unsigned __int64)v266 / 8];
              if ( v165 == v266 )
              {
LABEL_384:
                if ( v133 == v267 )
                {
LABEL_406:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v268 = v133;
                while ( *v268 )
                {
                  if ( v267 == ++v268 )
                    goto LABEL_406;
                }
              }
              else
              {
                v268 = &v133[(unsigned __int64)v266 / 8];
                while ( *v268 )
                {
                  if ( (__int64 *)v167 == ++v268 )
                    goto LABEL_384;
                }
              }
              *v268 = *v264;
            }
            ++v264;
          }
          while ( v265 != v264 );
          v265 = *(__int64 **)v115;
        }
        if ( v265 )
        {
          v305 = v263;
          nk = v165;
          v281 = v263 - 1;
          sub_186B220(v265);
          v263 = v305;
          v165 = nk;
          v166 = v281;
        }
        *(_QWORD *)v115 = v133;
        v132 = 0;
        *(_DWORD *)(v115 + 8) = v263;
        *(_DWORD *)(v115 + 16) = 0;
      }
      else
      {
        v133 = *(__int64 **)v115;
        v165 = 8 * v164;
        v166 = v164 - 1;
        v167 = *(_QWORD *)v115 + 8 * v164;
      }
      v168 = *(_DWORD *)(v272 + 12);
      v169 = v168 & v166;
      v170 = &v133[v169];
      if ( 8 * v169 != v165 )
      {
        v140 = &v133[v169];
        v141 = nullptr;
        while ( 1 )
        {
          v171 = *v140;
          if ( (unsigned __int64)*v140 > 1 )
          {
            if ( *(_DWORD *)(v171 + 12) == v168 && v272 == v171 )
            {
LABEL_393:
              *v140 = v272;
              goto LABEL_44;
            }
          }
          else
          {
            if ( !v171 )
            {
LABEL_276:
              if ( v141 )
                goto LABEL_277;
              v141 = v140;
              goto LABEL_278;
            }
            v141 = v140;
          }
          if ( ++v140 == (__int64 *)v167 )
            goto LABEL_230;
        }
      }
      v141 = nullptr;
      while ( 1 )
      {
LABEL_230:
        if ( v170 == v133 )
          goto LABEL_275;
        v178 = *v133;
        if ( (unsigned __int64)*v133 > 1 )
        {
          if ( *(_DWORD *)(v178 + 12) == v168 && v272 == v178 )
          {
LABEL_407:
            *v133 = v272;
            goto LABEL_44;
          }
        }
        else
        {
          if ( !v178 )
          {
LABEL_320:
            if ( v141 )
LABEL_277:
              *(_DWORD *)(v115 + 16) = v132 - 1;
            else
              v141 = v133;
LABEL_278:
            *v141 = v272;
            ++*(_DWORD *)(v115 + 12);
            goto LABEL_44;
          }
          v141 = v133;
        }
        ++v133;
      }
    }
    nb = sub_796F80((__int64)v6, v7);
    v59 = (*(__int64 (__fastcall **)(_QWORD *, int *, __int64))(*v6 + 48LL))(v6, &v319, v7);
    v19 = nb;
    v60 = v59;
    v61 = *(unsigned int *)(nb + 8);
    v62 = *(_DWORD *)(v60 + 12);
    v23 = *(_QWORD *)nb;
    v63 = v61 - 1;
    v61 *= 8;
    v64 = (__int64 *)(*(_QWORD *)nb + v61);
    v65 = 8LL * (v62 & v63);
    v27 = *(_QWORD *)nb + v65;
    if ( v65 != v61 )
    {
      for ( m = (__int64 *)(*(_QWORD *)nb + v65); v64 != m; ++m )
      {
        v67 = *m;
        if ( (unsigned __int64)*m > 1 )
        {
          if ( *(_DWORD *)(v67 + 12) == v62 && v60 == v67 )
            goto LABEL_149;
        }
        else if ( !v67 )
        {
          goto LABEL_66;
        }
      }
    }
    for ( ; v27 != v23; v23 += 8LL )
    {
      v174 = *(_QWORD *)v23;
      if ( *(_QWORD *)v23 > 1u )
      {
        if ( *(_DWORD *)(v174 + 12) == v62 && v60 == v174 )
          goto LABEL_149;
      }
      else if ( !v174 )
      {
        break;
      }
    }
LABEL_66:
    v68 = (_QWORD *)v6[7];
    ++*(_DWORD *)(v60 + 8);
    if ( v68 )
    {
      v69 = *((_DWORD *)v68 - 1);
      if ( v69 == *((_DWORD *)v68 - 2) )
      {
        v222 = (3 * v69 + 1) >> 1;
        v223 = 8 * v222 + 8;
        if ( 8 * v69 + 8 >= (unsigned int)v223 || v69 >= v222 )
          goto LABEL_425;
        v302 = (3 * v69 + 1) >> 1;
        v224 = (unsigned int *)sub_186B300(v68 - 1, v223);
        v19 = nb;
        v68 = v224 + 2;
        *v224 = v302;
        v225 = v224[1];
        v6[7] = v224 + 2;
        LODWORD(v224) = v225;
        v72 = &v68[v225];
        v71 = (_DWORD)v224 + 1;
      }
      else
      {
        v70 = v69;
        v71 = v69 + 1;
        v72 = &v68[v70];
      }
    }
    else
    {
      v193 = (_QWORD *)sub_186B270(0x18u);
      v19 = nb;
      v194 = v193;
      *v193 = 2;
      v71 = 1;
      v68 = v194 + 1;
      v6[7] = v68;
      v72 = v68;
    }
    *v72 = v60;
    *((_DWORD *)v68 - 1) = v71;
    v73 = *(unsigned int *)(v19 + 8);
    v74 = *(_DWORD *)(v19 + 16);
    v306 = 2 * v73;
    if ( 3 * (int)v73 < (unsigned int)(4 * (v74 + *(_DWORD *)(v19 + 12))) )
    {
      v304 = v19;
      nc = 8LL * v306;
      v244 = (_QWORD *)sub_186B270(nc);
      v19 = v304;
      v23 = (unsigned __int64)v244;
      if ( v306 )
      {
        v245 = memset(v244, 0, nc);
        v19 = v304;
        v23 = (unsigned __int64)v245;
      }
      v246 = *(char **)v19;
      v247 = *(unsigned int *)(v19 + 8);
      v295 = v306 - 1;
      v248 = (void *)(*(_QWORD *)v19 + 8 * v247);
      v27 = v23 + nc;
      if ( *(void **)v19 != v248 )
      {
        v249 = a4;
        v250 = (_QWORD *)v23;
        v251 = (void **)v19;
        v252 = v7;
        v253 = a3;
        v254 = v246;
        v255 = &v246[8 * v247];
        v256 = v6;
        v257 = (_QWORD *)v27;
        v258 = v249;
        do
        {
          if ( *(_QWORD *)v254 > 1u )
          {
            v259 = 8LL * (*(_DWORD *)(*(_QWORD *)v254 + 12LL) & v295);
            v260 = &v250[(unsigned __int64)v259 / 8];
            if ( nc == v259 )
            {
LABEL_364:
              if ( v250 == v260 )
              {
LABEL_401:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v261 = v250;
              while ( *v261 )
              {
                if ( v260 == ++v261 )
                  goto LABEL_401;
              }
            }
            else
            {
              v261 = &v250[(unsigned __int64)v259 / 8];
              while ( *v261 )
              {
                if ( v257 == ++v261 )
                  goto LABEL_364;
              }
            }
            *v261 = *(_QWORD *)v254;
          }
          v254 += 8;
        }
        while ( v255 != v254 );
        a3 = v253;
        v19 = (size_t)v251;
        v7 = v252;
        v248 = *v251;
        v23 = (unsigned __int64)v250;
        a4 = v258;
        v27 = (__int64)v257;
        v6 = v256;
      }
      if ( v248 )
      {
        v318 = v27;
        v315 = (_QWORD *)v23;
        v312 = v19;
        sub_186B220(v248);
        v27 = v318;
        v23 = (unsigned __int64)v315;
        v19 = v312;
      }
      *(_QWORD *)v19 = v23;
      v74 = 0;
      *(_DWORD *)(v19 + 16) = 0;
      *(_DWORD *)(v19 + 8) = v306;
    }
    else
    {
      v23 = *(_QWORD *)v19;
      v295 = v73 - 1;
      nc = 8 * v73;
      v27 = *(_QWORD *)v19 + 8 * v73;
    }
    v75 = *(_DWORD *)(v60 + 12);
    v76 = 8LL * (v75 & v295);
    v77 = (_QWORD *)(v23 + v76);
    if ( v76 != nc )
    {
      v78 = (__int64 *)(v23 + v76);
      v79 = nullptr;
      while ( 1 )
      {
        v80 = *v78;
        if ( (unsigned __int64)*v78 > 1 )
        {
          if ( *(_DWORD *)(v80 + 12) == v75 && v60 == v80 )
          {
            *v78 = v60;
            goto LABEL_149;
          }
        }
        else
        {
          if ( !v80 )
          {
            if ( v79 )
              goto LABEL_147;
            v79 = v78;
            goto LABEL_148;
          }
          v79 = v78;
        }
        if ( ++v78 == (__int64 *)v27 )
          goto LABEL_239;
      }
    }
    v79 = nullptr;
    while ( 1 )
    {
LABEL_239:
      if ( v77 == (_QWORD *)v23 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v179 = *(_QWORD *)v23;
      if ( *(_QWORD *)v23 > 1u )
      {
        if ( *(_DWORD *)(v179 + 12) == v75 && v60 == v179 )
        {
          *(_QWORD *)v23 = v60;
          goto LABEL_149;
        }
      }
      else
      {
        if ( !v179 )
        {
          if ( v79 )
LABEL_147:
            *(_DWORD *)(v19 + 16) = v74 - 1;
          else
            v79 = (__int64 *)v23;
LABEL_148:
          *v79 = v60;
          ++*(_DWORD *)(v19 + 12);
          goto LABEL_149;
        }
        v79 = (__int64 *)v23;
      }
      v23 += 8LL;
    }
  }
  if ( (_DWORD)v45 != 1 )
  {
    v46 = *(unsigned __int64 **)v44;
    v47 = *(unsigned int *)(v44 + 8);
    v48 = &v46[v47];
    if ( v46 == v48 )
    {
      v269 = *v48;
      v270 = &v46[v47];
LABEL_215:
      if ( v269 )
        goto LABEL_36;
    }
    else
    {
      while ( 1 )
      {
        v269 = *v46;
        v270 = v46++;
        if ( v269 > 1 )
          break;
        if ( v48 == v46 )
        {
          v269 = v270[1];
          v270 = v48;
          goto LABEL_215;
        }
      }
LABEL_36:
      ++*(_DWORD *)(v269 + 8);
    }
    v49 = *a3;
    if ( *a3 )
    {
      v50 = a3[1];
      v51 = (*(_DWORD *)(v49 + 8))-- == 1;
      if ( v51 )
        sub_15D7BC0(v50, v49);
    }
    v52 = (__int64 *)(v270 + 1);
    *a3 = v269;
    if ( v48 == v270 + 1 )
    {
      v272 = v270[1];
      goto LABEL_221;
    }
    while ( 1 )
    {
      v272 = *v52;
      v53 = v52;
      if ( (unsigned __int64)*v52 > 1 )
        break;
      if ( v48 == (unsigned __int64 *)++v52 )
      {
        v272 = v53[1];
        goto LABEL_221;
      }
    }
LABEL_44:
    ++*(_DWORD *)(v272 + 8);
LABEL_45:
    v54 = *a4;
    if ( *a4 )
    {
      v55 = a4[1];
      v51 = (*(_DWORD *)(v54 + 8))-- == 1;
      if ( v51 )
        sub_15D7BC0(v55, v54);
    }
    *a4 = v272;
    return 1;
  }
  v81 = *(unsigned __int64 **)v44;
  v82 = *(_QWORD *)v44 + 8LL * *(unsigned int *)(v44 + 8);
  if ( v81 == (unsigned __int64 *)v82 )
  {
    v271 = *v81;
LABEL_218:
    if ( v271 )
      goto LABEL_83;
  }
  else
  {
    while ( 1 )
    {
      v271 = *v81;
      v83 = v81;
      if ( *v81 > 1 )
        break;
      if ( (unsigned __int64 *)v82 == ++v81 )
      {
        v271 = v83[1];
        goto LABEL_218;
      }
    }
LABEL_83:
    ++*(_DWORD *)(v271 + 8);
  }
  v84 = *a3;
  if ( *a3 )
  {
    v85 = a3[1];
    v51 = (*(_DWORD *)(v84 + 8))-- == 1;
    if ( v51 )
    {
      sub_15D7BC0(v85, v84);
      v45 = 1;
    }
  }
  v86 = *v6;
  *a3 = v271;
  nd = v45;
  v87 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v86 + 56);
  v319 = 0;
  if ( v87 != sub_797F40 )
  {
    v89 = ((__int64 (__fastcall *)(_QWORD *, int *, __int64, __int64, __int64 *))v87)(v6, &v319, v7, v45, v14);
    if ( v89 )
      goto LABEL_139;
    goto LABEL_140;
  }
  v296 = sub_796F80((__int64)v6, v7);
  v88 = (*(__int64 (__fastcall **)(_QWORD *, int *, __int64))(*v6 + 48LL))(v6, &v319, v7);
  v19 = v296;
  v23 = nd;
  v89 = v88;
  v90 = *(unsigned int *)(v296 + 8);
  v91 = *(_DWORD *)(v89 + 12);
  v92 = *(__int64 **)v296;
  v93 = v90 - 1;
  v90 *= 8;
  v94 = (__int64 *)(*(_QWORD *)v296 + v90);
  v95 = 8LL * (v91 & v93);
  v27 = *(_QWORD *)v296 + v95;
  if ( v95 != v90 )
  {
    for ( ii = (__int64 *)(*(_QWORD *)v296 + v95); v94 != ii; ++ii )
    {
      v97 = *ii;
      if ( (unsigned __int64)*ii > 1 )
      {
        if ( *(_DWORD *)(v97 + 12) == v91 && v89 == v97 )
          goto LABEL_139;
      }
      else if ( !v97 )
      {
        goto LABEL_95;
      }
    }
  }
  for ( ; (__int64 *)v27 != v92; ++v92 )
  {
    v176 = *v92;
    if ( (unsigned __int64)*v92 > 1 )
    {
      if ( *(_DWORD *)(v176 + 12) == v91 && v89 == v176 )
        goto LABEL_139;
    }
    else if ( !v176 )
    {
      break;
    }
  }
LABEL_95:
  v98 = (_QWORD *)v6[7];
  ++*(_DWORD *)(v89 + 8);
  if ( !v98 )
  {
    v299 = nd;
    nh = v19;
    v192 = (_QWORD *)sub_186B270(0x18u);
    v19 = nh;
    v101 = v299;
    *v192 = 2;
    v98 = v192 + 1;
    v6[7] = v192 + 1;
    v102 = v192 + 1;
    goto LABEL_98;
  }
  v99 = *((_DWORD *)v98 - 1);
  if ( v99 != *((_DWORD *)v98 - 2) )
  {
    v100 = v99;
    v101 = v99 + 1;
    v102 = &v98[v100];
    goto LABEL_98;
  }
  v217 = (3 * v99 + 1) >> 1;
  v218 = 8 * v217 + 8;
  if ( 8 * v99 + 8 >= v218 || v99 >= v217 )
  {
LABEL_425:
    v277 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v320, "Overflow encountered when expanding vector");
    *v277 = (char *)off_1C63128;
    sub_2333C0(v277 + 1, v320);
    sub_233E40((__int64)v320);
    __cxa_throw(v277, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v301 = (3 * v99 + 1) >> 1;
  nj = v19;
  v219 = (unsigned int *)sub_186B300(v98 - 1, v218);
  v19 = nj;
  v98 = v219 + 2;
  *v219 = v301;
  v220 = v219[1];
  v6[7] = v98;
  v221 = v220;
  v102 = &v98[v220];
  v101 = v221 + 1;
LABEL_98:
  *v102 = v89;
  *((_DWORD *)v98 - 1) = v101;
  v103 = *(unsigned int *)(v19 + 8);
  v104 = *(_DWORD *)(v19 + 16);
  v307 = 2 * v103;
  if ( 3 * (int)v103 < (unsigned int)(4 * (v104 + *(_DWORD *)(v19 + 12))) )
  {
    v303 = v19;
    ne = 8LL * v307;
    v226 = (_QWORD *)sub_186B270(ne);
    v19 = v303;
    v23 = (unsigned __int64)v226;
    if ( v307 )
    {
      v227 = memset(v226, 0, ne);
      v19 = v303;
      v23 = (unsigned __int64)v227;
    }
    v228 = *(char **)v19;
    v229 = *(unsigned int *)(v19 + 8);
    v297 = v307 - 1;
    v230 = (void *)(*(_QWORD *)v19 + 8 * v229);
    v27 = v23 + ne;
    if ( *(void **)v19 != v230 )
    {
      v231 = a4;
      v232 = (_QWORD *)v23;
      v233 = (void **)v19;
      v234 = v7;
      v235 = a3;
      v236 = v228;
      v237 = &v228[8 * v229];
      v238 = v6;
      v239 = (_QWORD *)v27;
      v240 = v231;
      do
      {
        if ( *(_QWORD *)v236 > 1u )
        {
          v241 = 8LL * (*(_DWORD *)(*(_QWORD *)v236 + 12LL) & v297);
          v242 = &v232[(unsigned __int64)v241 / 8];
          if ( ne == v241 )
          {
LABEL_344:
            if ( v232 == v242 )
            {
LABEL_400:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v243 = v232;
            while ( *v243 )
            {
              if ( v242 == ++v243 )
                goto LABEL_400;
            }
          }
          else
          {
            v243 = &v232[(unsigned __int64)v241 / 8];
            while ( *v243 )
            {
              if ( v239 == ++v243 )
                goto LABEL_344;
            }
          }
          *v243 = *(_QWORD *)v236;
        }
        v236 += 8;
      }
      while ( v237 != v236 );
      a3 = v235;
      v19 = (size_t)v233;
      v7 = v234;
      v230 = *v233;
      v23 = (unsigned __int64)v232;
      a4 = v240;
      v27 = (__int64)v239;
      v6 = v238;
    }
    if ( v230 )
    {
      v317 = v27;
      v314 = v19;
      v311 = (_QWORD *)v23;
      sub_186B220(v230);
      v27 = v317;
      v19 = v314;
      v23 = (unsigned __int64)v311;
    }
    *(_QWORD *)v19 = v23;
    v104 = 0;
    *(_DWORD *)(v19 + 16) = 0;
    *(_DWORD *)(v19 + 8) = v307;
  }
  else
  {
    v23 = *(_QWORD *)v19;
    v297 = v103 - 1;
    ne = 8 * v103;
    v27 = *(_QWORD *)v19 + 8 * v103;
  }
  v105 = *(_DWORD *)(v89 + 12);
  v106 = 8LL * (v105 & v297);
  v107 = (_QWORD *)(v23 + v106);
  if ( v106 != ne )
  {
    v108 = (__int64 *)(v23 + v106);
    v109 = nullptr;
    while ( 1 )
    {
      v110 = *v108;
      if ( (unsigned __int64)*v108 > 1 )
      {
        if ( *(_DWORD *)(v110 + 12) == v105 && v89 == v110 )
        {
          *v108 = v89;
          goto LABEL_139;
        }
      }
      else
      {
        if ( !v110 )
        {
          if ( v109 )
            goto LABEL_137;
          v109 = v108;
          goto LABEL_138;
        }
        v109 = v108;
      }
      if ( ++v108 == (__int64 *)v27 )
        goto LABEL_246;
    }
  }
  v109 = nullptr;
LABEL_246:
  while ( 2 )
  {
    if ( v107 == (_QWORD *)v23 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v180 = *(_QWORD *)v23;
    if ( *(_QWORD *)v23 > 1u )
    {
      if ( *(_DWORD *)(v180 + 12) == v105 && v89 == v180 )
      {
        *(_QWORD *)v23 = v89;
        goto LABEL_139;
      }
      goto LABEL_245;
    }
    if ( v180 )
    {
      v109 = (__int64 *)v23;
LABEL_245:
      v23 += 8LL;
      continue;
    }
    break;
  }
  if ( v109 )
LABEL_137:
    *(_DWORD *)(v19 + 16) = v104 - 1;
  else
    v109 = (__int64 *)v23;
LABEL_138:
  *v109 = v89;
  ++*(_DWORD *)(v19 + 12);
LABEL_139:
  ++*(_DWORD *)(v89 + 8);
LABEL_140:
  v143 = *a4;
  if ( *a4 )
  {
    v144 = a4[1];
    v51 = (*(_DWORD *)(v143 + 8))-- == 1;
    if ( v51 )
      sub_15D7BC0(v144, v143);
  }
  *a4 = v89;
  if ( *a3 == v89 )
  {
    v145 = v320;
    v114 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v6 + 56LL);
    LODWORD(v320[0]) = 1;
    if ( v114 != sub_797F40 )
    {
      v177 = v7;
      goto LABEL_224;
    }
    v272 = sub_798960(v6, (__int64)v320, v7, &v319);
    goto LABEL_44;
  }
  return 1;
}

