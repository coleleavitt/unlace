__int64 __fastcall sub_D3EC80(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  unsigned int v5; // r13d
  __int64 v7; // rsi
  _DWORD *v11; // rax
  __int64 v12; // r8
  int v13; // r9d
  __int64 *v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rax
  _DWORD *v19; // rsi
  _DWORD *v20; // rax
  __int64 v22; // rax
  _DWORD *v23; // rax
  _QWORD *v24; // rdx
  unsigned int v25; // r13d
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // r13
  __int64 v29; // rax
  unsigned int v30; // r12d
  unsigned int v31; // edx
  __int64 v32; // rax
  int *v33; // r14
  _DWORD *v34; // r9
  __int64 v35; // rsi
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rdx
  int *v39; // r8
  int *j; // rax
  int v41; // ecx
  char v42; // di
  __int64 v43; // rcx
  char v44; // di
  __int64 v45; // rcx
  __int64 v46; // rax
  int *v47; // r14
  int *v48; // rbx
  __int64 v49; // r13
  void *v50; // rbp
  int *v51; // rsi
  _QWORD *v52; // r13
  _QWORD *v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  _QWORD *v57; // rcx
  void *v58; // r12
  int v59; // edx
  __int64 v60; // rdx
  void *v61; // rbx
  int v62; // eax
  int v63; // eax
  __int64 *v64; // r13
  __int64 *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rsi
  _DWORD *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdi
  int v72; // r8d
  _DWORD *v73; // rcx
  __int64 v74; // rcx
  int v75; // eax
  _QWORD *v76; // rcx
  _QWORD *v77; // rsi
  __int64 v78; // rax
  _QWORD *v79; // rax
  void *v80; // r14
  void *v81; // rdi
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // r14
  _QWORD *v85; // rdx
  unsigned int v86; // eax
  unsigned int v87; // ecx
  size_t v88; // rsi
  unsigned int v89; // r13d
  unsigned int *v90; // rax
  __int64 v91; // rcx
  size_t v92; // rdi
  __int64 v93; // rax
  int *v94; // r13
  _DWORD *v95; // r10
  __int64 v96; // rdi
  __int64 v97; // rdx
  int *v98; // rax
  int *v99; // rdi
  int v100; // ecx
  char v101; // r8
  __int64 v102; // rcx
  char v103; // r8
  __int64 v104; // rcx
  __int64 v105; // r14
  int *v106; // r14
  int *v107; // rbx
  _QWORD *v108; // r13
  void *v109; // rbp
  int *v110; // rsi
  int v111; // ecx
  char v112; // si
  __int64 v113; // rdx
  __int64 v114; // rcx
  char v115; // di
  __int64 v116; // rdx
  char v117; // si
  __int64 v118; // rcx
  void *v119; // rbp
  unsigned int v120; // r12d
  size_t v121; // rdi
  __int64 v122; // rax
  int *v123; // r13
  _DWORD *v124; // rsi
  __int64 v125; // r8
  __int64 v126; // rax
  __int64 v127; // rdx
  int *v128; // rdi
  int *i; // rax
  int v130; // ecx
  char v131; // r9
  __int64 v132; // rcx
  char v133; // r9
  __int64 v134; // rcx
  __int64 v135; // rax
  int *v136; // r14
  int *v137; // rbx
  _DWORD *v138; // r13
  void *v139; // rbp
  int *v140; // rsi
  unsigned int v141; // r13d
  size_t v142; // rsi
  unsigned int *v143; // rax
  __int64 v144; // rcx
  _QWORD *v145; // rax
  _QWORD *v146; // rax
  __int64 *v147; // r14
  int v148; // eax
  __int64 v149; // r12
  _QWORD *v150; // rdx
  unsigned int v151; // eax
  __int64 v152; // rcx
  int v153; // eax
  _QWORD *v154; // rcx
  __int64 v155; // rsi
  __int64 v156; // rax
  _QWORD *v157; // rsi
  void *v158; // rdi
  size_t v159; // rdi
  __int64 v160; // rax
  int *v161; // rbp
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rax
  int *v165; // rdi
  int *k; // rax
  int v167; // ecx
  char v168; // si
  __int64 v169; // rcx
  char v170; // si
  __int64 v171; // rcx
  __int64 v172; // rax
  void *v173; // r12
  int *v174; // rsi
  unsigned int v175; // r15d
  size_t v176; // rsi
  unsigned int *v177; // rax
  __int64 v178; // rcx
  _QWORD *v179; // rax
  _QWORD *v180; // rax
  unsigned int v181; // r14d
  unsigned int v182; // eax
  unsigned int *v183; // rax
  __int64 v184; // rax
  int v185; // r13d
  _QWORD *v186; // rax
  _QWORD *v187; // rax
  _QWORD *v188; // rax
  _QWORD *v189; // rax
  char **exception; // rbp
  __int64 v191; // rdx
  __int64 v192; // rdx
  char **v193; // rbp
  __int64 v194; // rdx
  _DWORD *v195; // [rsp+0h] [rbp-B8h]
  _DWORD *v196; // [rsp+0h] [rbp-B8h]
  unsigned int v197; // [rsp+0h] [rbp-B8h]
  int v198; // [rsp+0h] [rbp-B8h]
  __int64 v199; // [rsp+0h] [rbp-B8h]
  int *v200; // [rsp+0h] [rbp-B8h]
  __int64 v201; // [rsp+8h] [rbp-B0h]
  __int64 *v202; // [rsp+8h] [rbp-B0h]
  __int64 *v203; // [rsp+8h] [rbp-B0h]
  __int64 v204; // [rsp+8h] [rbp-B0h]
  __int64 v205; // [rsp+10h] [rbp-A8h]
  int *v206; // [rsp+10h] [rbp-A8h]
  __int64 v207; // [rsp+10h] [rbp-A8h]
  _DWORD *v208; // [rsp+10h] [rbp-A8h]
  __int64 v209; // [rsp+18h] [rbp-A0h]
  __int64 v210; // [rsp+18h] [rbp-A0h]
  int v211; // [rsp+20h] [rbp-98h]
  unsigned int v212; // [rsp+24h] [rbp-94h]
  unsigned int v213; // [rsp+24h] [rbp-94h]
  int v214; // [rsp+28h] [rbp-90h]
  _DWORD *v215; // [rsp+28h] [rbp-90h]
  __int64 v216; // [rsp+28h] [rbp-90h]
  _DWORD *v217; // [rsp+30h] [rbp-88h]
  __int64 *v218; // [rsp+30h] [rbp-88h]
  __int64 v219; // [rsp+38h] [rbp-80h]
  int v220; // [rsp+40h] [rbp-78h] BYREF
  char v221; // [rsp+44h] [rbp-74h]
  __int64 v222; // [rsp+48h] [rbp-70h]
  int v223; // [rsp+50h] [rbp-68h] BYREF
  char v224; // [rsp+54h] [rbp-64h]
  __int64 v225; // [rsp+58h] [rbp-60h]
  __int64 v226; // [rsp+60h] [rbp-58h] BYREF
  __int64 v227; // [rsp+68h] [rbp-50h]
  int v228; // [rsp+70h] [rbp-48h] BYREF
  char v229; // [rsp+74h] [rbp-44h]
  __int64 v230; // [rsp+78h] [rbp-40h]

  v201 = a3;
  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v5 = *(_DWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 16);
  v11 = *(_DWORD **)(v7 + 24);
  if ( !v5 )
  {
    if ( v11 && *v11 != -1 )
      goto LABEL_5;
    ++*(_DWORD *)(a2 + 8);
    v53 = *(_QWORD **)(a3 + 8);
    if ( v53 )
    {
      v54 = *((_DWORD *)v53 - 1);
      if ( v54 == *((_DWORD *)v53 - 2) )
      {
        v141 = (3 * v54 + 1) >> 1;
        v142 = 8 * v141 + 8;
        if ( 8 * v54 + 8 >= (unsigned int)v142 || v54 >= v141 )
          goto LABEL_181;
        v143 = (unsigned int *)sub_186B300(v53 - 1, v142);
        v144 = v143[1];
        v53 = v143 + 2;
        *v143 = v141;
        *(_QWORD *)(v201 + 8) = v143 + 2;
        LODWORD(v143) = v144;
        v57 = &v53[v144];
        v56 = (_DWORD)v143 + 1;
      }
      else
      {
        v55 = v54;
        v56 = v54 + 1;
        v57 = &v53[v55];
      }
    }
    else
    {
      v180 = (_QWORD *)sub_186B270(0x18u);
      v53 = v180 + 1;
      *v180 = 2;
      v57 = v180 + 1;
      *(_QWORD *)(v201 + 8) = v180 + 1;
      v56 = 1;
    }
    v28 = *a4;
    *v57 = a2;
    *((_DWORD *)v53 - 1) = v56;
    if ( !v28 )
    {
      v179 = (_QWORD *)sub_186B270(0x48u);
      v52 = v179 + 1;
      *v179 = 2;
      *a4 = (__int64)(v179 + 1);
      goto LABEL_54;
    }
    v29 = *(unsigned int *)(v28 - 4);
    if ( (_DWORD)v29 != *(_DWORD *)(v28 - 8) )
      goto LABEL_53;
    v120 = (unsigned int)(3 * v29 + 1) >> 1;
    v121 = 32 * v120 + 8;
    if ( 32 * (int)v29 + 8 < (unsigned int)v121 && (unsigned int)v29 < v120 )
    {
      v122 = sub_186B270(v121);
      v123 = (int *)*a4;
      v124 = (_DWORD *)v122;
      v125 = v122 + 8;
      if ( *a4 )
      {
        v126 = (unsigned int)*(v123 - 1);
        v127 = v125;
        v124[1] = v126;
        v128 = &v123[8 * v126];
        for ( i = v123; i != v128; *(_QWORD *)(v127 - 8) = v134 )
        {
          v130 = *i;
          v131 = *((_BYTE *)i + 4);
          i += 8;
          v127 += 32;
          *(_DWORD *)(v127 - 32) = v130;
          *(_BYTE *)(v127 - 28) = v131 & 3 | *(_BYTE *)(v127 - 28) & 0xFC;
          v132 = *((_QWORD *)i - 3);
          *((_QWORD *)i - 3) = 0;
          *(_QWORD *)(v127 - 24) = v132;
          v133 = *((_BYTE *)i - 12);
          *(_DWORD *)(v127 - 16) = *(i - 4);
          *(_BYTE *)(v127 - 12) = v133 & 3 | *(_BYTE *)(v127 - 12) & 0xFC;
          v134 = *((_QWORD *)i - 1);
          *((_QWORD *)i - 1) = 0;
        }
        v135 = (unsigned int)*(v123 - 1);
        if ( (_DWORD)v135 )
        {
          v199 = v125;
          v207 = a5;
          v136 = &v123[8 * v135];
          v203 = a4;
          v137 = v123;
          v138 = v124;
          do
          {
            v139 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v137);
            v140 = v137 + 4;
            v137 += 8;
            sub_182CBA0(v139, v140);
          }
          while ( v137 != v136 );
          a4 = v203;
          v124 = v138;
          v125 = v199;
          a5 = v207;
          v123 = (int *)*v203;
        }
        v204 = v125;
        sub_186B220(v123 - 2);
        v125 = v204;
        v52 = (_QWORD *)(v204 + 32LL * (unsigned int)v124[1]);
      }
      else
      {
        *(_DWORD *)(v122 + 4) = 0;
        v52 = (_QWORD *)(v122 + 8);
      }
      *a4 = v125;
      *v124 = v120;
      goto LABEL_54;
    }
LABEL_181:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_167E90(&v226, "Overflow encountered when expanding vector", v191);
    goto LABEL_182;
  }
  if ( v11 )
  {
    if ( !*v11 && v11[1] == 8 && v5 == 1 )
    {
      v22 = *(_QWORD *)(a2 + 32);
      if ( !*(_WORD *)(v22 + 4) && !*(_DWORD *)(v22 + 24) )
      {
        v23 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
        if ( !v23 || *v23 == -1 )
        {
          ++*(_DWORD *)(a2 + 8);
          v24 = *(_QWORD **)(a3 + 8);
          if ( v24 )
          {
            v25 = *((_DWORD *)v24 - 1);
            if ( v25 == *((_DWORD *)v24 - 2) )
            {
              v181 = (3 * v25 + 1) >> 1;
              v182 = 8 * v181 + 8;
              if ( 8 * v25 + 8 >= v182 || v25 >= v181 )
                goto LABEL_181;
              v183 = (unsigned int *)sub_186B300(v24 - 1, v182);
              v24 = v183 + 2;
              *v183 = v181;
              v184 = v183[1];
              *(_QWORD *)(v201 + 8) = v24;
              v185 = v184;
              v27 = &v24[v184];
              v5 = v185 + 1;
            }
            else
            {
              v26 = v25;
              v5 = v25 + 1;
              v27 = &v24[v26];
            }
          }
          else
          {
            v188 = (_QWORD *)sub_186B270(0x18u);
            *v188 = 2;
            v24 = v188 + 1;
            *(_QWORD *)(v201 + 8) = v188 + 1;
            v27 = v188 + 1;
          }
          *v27 = a2;
          *((_DWORD *)v24 - 1) = v5;
          v28 = *a4;
          if ( !*a4 )
          {
            v189 = (_QWORD *)sub_186B270(0x48u);
            *v189 = 2;
            v52 = v189 + 1;
            *a4 = (__int64)(v189 + 1);
            goto LABEL_54;
          }
          v29 = *(unsigned int *)(v28 - 4);
          if ( (_DWORD)v29 != *(_DWORD *)(v28 - 8) )
          {
LABEL_53:
            v52 = (_QWORD *)(32 * v29 + v28);
            goto LABEL_54;
          }
          v30 = (unsigned int)(3 * v29 + 1) >> 1;
          v31 = 32 * v30 + 8;
          if ( 32 * (int)v29 + 8 < v31 && (unsigned int)v29 < v30 )
          {
            v32 = sub_186B270(v31);
            v33 = (int *)*a4;
            v34 = (_DWORD *)v32;
            v35 = v32 + 8;
            v36 = *a4;
            if ( *a4 )
            {
              v37 = (unsigned int)*(v33 - 1);
              v38 = v35;
              v34[1] = v37;
              v39 = &v33[8 * v37];
              for ( j = v33; v39 != j; *(_QWORD *)(v38 - 8) = v45 )
              {
                v41 = *j;
                v42 = *((_BYTE *)j + 4);
                j += 8;
                v38 += 32;
                *(_DWORD *)(v38 - 32) = v41;
                *(_BYTE *)(v38 - 28) = v42 & 3 | *(_BYTE *)(v38 - 28) & 0xFC;
                v43 = *((_QWORD *)j - 3);
                *((_QWORD *)j - 3) = 0;
                *(_QWORD *)(v38 - 24) = v43;
                v44 = *((_BYTE *)j - 12);
                *(_DWORD *)(v38 - 16) = *(j - 4);
                *(_BYTE *)(v38 - 12) = v44 & 3 | *(_BYTE *)(v38 - 12) & 0xFC;
                v45 = *((_QWORD *)j - 1);
                *((_QWORD *)j - 1) = 0;
              }
              v46 = (unsigned int)*(v33 - 1);
              if ( (_DWORD)v46 )
              {
                v195 = v34;
                v205 = a5;
                v47 = &v33[8 * v46];
                v202 = a4;
                v48 = (int *)v36;
                v49 = v35;
                do
                {
                  v50 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v48);
                  v51 = v48 + 4;
                  v48 += 8;
                  sub_182CBA0(v50, v51);
                }
                while ( v48 != v47 );
                a4 = v202;
                v34 = v195;
                v35 = v49;
                a5 = v205;
                v33 = (int *)*v202;
              }
              v196 = v34;
              sub_186B220(v33 - 2);
              v34 = v196;
              v52 = (_QWORD *)(v35 + 32LL * (unsigned int)v196[1]);
            }
            else
            {
              *(_DWORD *)(v32 + 4) = 0;
              v52 = (_QWORD *)(v32 + 8);
            }
            *a4 = v35;
            *v34 = v30;
LABEL_54:
            *v52 = 0;
            v52[2] = 1;
            v58 = qword_1C7F2C0;
            v52[1] = 0;
            v52[3] = 0;
            if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
              sub_182C690(v58, v52, &qword_1C7F280);
            else
              *(_DWORD *)v52 = qword_1C7F280;
            if ( (qword_1C7F290 & 0x100000000LL) != 0 )
            {
              sub_182C690(v58, v52 + 2, &qword_1C7F290);
            }
            else
            {
              v59 = qword_1C7F290;
              *((_BYTE *)v52 + 20) &= ~1u;
              *((_DWORD *)v52 + 4) = v59;
            }
            v60 = *a4;
            v61 = qword_1C7F2C0;
            ++*(_DWORD *)(v60 - 4);
            if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
              goto LABEL_110;
            goto LABEL_59;
          }
          goto LABEL_181;
        }
      }
    }
  }
LABEL_5:
  v209 = a1 + 40;
  if ( (unsigned __int8)sub_168DB10(a1 + 40, v7) )
  {
    v14 = (__int64 *)(a2 + 32);
    v15 = *(unsigned int *)(a2 + 24);
    if ( !(8 * v15) )
    {
LABEL_81:
      v197 = 0;
      v206 = &v220;
      if ( (_DWORD)v15 )
      {
        do
        {
          v84 = *(_QWORD *)(a2 + 8LL * v197 + 32);
          if ( v84 )
            ++*(_DWORD *)(v84 + 8);
          v85 = *(_QWORD **)(v201 + 8);
          if ( v85 )
          {
            v86 = *((_DWORD *)v85 - 1);
            if ( v86 == *((_DWORD *)v85 - 2) )
            {
              v87 = (3 * v86 + 1) >> 1;
              v88 = 8 * v87 + 8;
              v89 = v87;
              if ( 8 * v86 + 8 >= (unsigned int)v88 || v86 >= v87 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_167E90(&v226, "Overflow encountered when expanding vector", v192);
LABEL_182:
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v226);
                sub_233E40((__int64)&v226);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v90 = (unsigned int *)sub_186B300(v85 - 1, v88);
              v91 = v90[1];
              v85 = v90 + 2;
              *v90 = v89;
              *(_QWORD *)(v201 + 8) = v90 + 2;
              LODWORD(v90) = v91;
              v76 = &v85[v91];
              v75 = (_DWORD)v90 + 1;
            }
            else
            {
              v74 = v86;
              v75 = v86 + 1;
              v76 = &v85[v74];
            }
          }
          else
          {
            v146 = (_QWORD *)sub_186B270(0x18u);
            v85 = v146 + 1;
            *v146 = 2;
            v76 = v146 + 1;
            *(_QWORD *)(v201 + 8) = v146 + 1;
            v75 = 1;
          }
          *v76 = v84;
          *((_DWORD *)v85 - 1) = v75;
          sub_168DB50(
            (_DWORD)v206,
            v209,
            *(_QWORD *)(a2 + 16),
            v197,
            v12,
            v13,
            v197,
            v201,
            (_DWORD)v206,
            v209,
            v211,
            v214,
            (_DWORD)v217,
            v219);
          v77 = (_QWORD *)*a4;
          if ( *a4 )
          {
            v78 = *((unsigned int *)v77 - 1);
            if ( (_DWORD)v78 == *((_DWORD *)v77 - 2) )
            {
              v212 = (unsigned int)(3 * v78 + 1) >> 1;
              v92 = 32 * v212 + 8;
              if ( 32 * (int)v78 + 8 >= (unsigned int)v92 || (unsigned int)v78 >= (unsigned int)(3 * v78 + 1) >> 1 )
              {
                v193 = (char **)__cxa_allocate_exception(0x28u);
                sub_167E90(&v226, "Overflow encountered when expanding vector", v194);
                *v193 = (char *)off_1C63128;
                sub_2333C0(v193 + 1, &v226);
                sub_233E40((__int64)&v226);
                __cxa_throw(v193, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v93 = sub_186B270(v92);
              v94 = (int *)*a4;
              v95 = (_DWORD *)v93;
              v77 = (_QWORD *)(v93 + 8);
              if ( *a4 )
              {
                v96 = (unsigned int)*(v94 - 1);
                v97 = v93 + 8;
                *(_DWORD *)(v93 + 4) = v96;
                v98 = v94;
                v99 = &v94[8 * v96];
                if ( v94 != v99 )
                {
                  do
                  {
                    v100 = *v98;
                    v101 = *((_BYTE *)v98 + 4);
                    v98 += 8;
                    v97 += 32;
                    *(_DWORD *)(v97 - 32) = v100;
                    *(_BYTE *)(v97 - 28) = v101 & 3 | *(_BYTE *)(v97 - 28) & 0xFC;
                    v102 = *((_QWORD *)v98 - 3);
                    *((_QWORD *)v98 - 3) = 0;
                    *(_QWORD *)(v97 - 24) = v102;
                    v103 = *((_BYTE *)v98 - 12);
                    *(_DWORD *)(v97 - 16) = *(v98 - 4);
                    *(_BYTE *)(v97 - 12) = v103 & 3 | *(_BYTE *)(v97 - 12) & 0xFC;
                    v104 = *((_QWORD *)v98 - 1);
                    *((_QWORD *)v98 - 1) = 0;
                    *(_QWORD *)(v97 - 8) = v104;
                  }
                  while ( v99 != v98 );
                }
                v105 = (unsigned int)*(v94 - 1);
                if ( (_DWORD)v105 )
                {
                  v215 = v95;
                  v219 = a5;
                  v106 = &v94[8 * v105];
                  v218 = a4;
                  v107 = v94;
                  v108 = v77;
                  do
                  {
                    v109 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v107);
                    v110 = v107 + 4;
                    v107 += 8;
                    sub_182CBA0(v109, v110);
                  }
                  while ( v107 != v106 );
                  a4 = v218;
                  v77 = v108;
                  v95 = v215;
                  a5 = v219;
                  v94 = (int *)*v218;
                }
                v217 = v95;
                v214 = (int)v77;
                sub_186B220(v94 - 2);
                v95 = v217;
                v79 = &v77[4 * (unsigned int)v217[1]];
              }
              else
              {
                *(_DWORD *)(v93 + 4) = 0;
                v79 = (_QWORD *)(v93 + 8);
              }
              *a4 = (__int64)v77;
              *v95 = v212;
            }
            else
            {
              v79 = &v77[4 * v78];
            }
          }
          else
          {
            v145 = (_QWORD *)sub_186B270(0x48u);
            v77 = v145 + 1;
            *v145 = 2;
            *a4 = (__int64)(v145 + 1);
            v79 = v145 + 1;
          }
          *(_DWORD *)v79 = v220;
          v80 = qword_1C7F2C0;
          v81 = qword_1C7F2C0;
          *((_BYTE *)v79 + 4) = v221 & 3 | *((_BYTE *)v79 + 4) & 0xFC;
          v82 = v222;
          v222 = 0;
          v79[1] = v82;
          *((_DWORD *)v79 + 4) = v223;
          *((_BYTE *)v79 + 20) = v224 & 3 | *((_BYTE *)v79 + 20) & 0xFC;
          v83 = v225;
          v225 = 0;
          v79[3] = v83;
          ++*((_DWORD *)v77 - 1);
          sub_182CBA0(v81, v206);
          sub_182CBA0(v80, &v223);
          v197 = v198 + 1;
        }
        while ( v197 < *(_DWORD *)(a2 + 24) );
      }
      sub_168DDF0(&v226, v209, *(_QWORD *)(a2 + 16));
      v111 = v226;
      v112 = BYTE4(v226);
      LODWORD(v226) = *(_DWORD *)a5;
      v113 = *(_QWORD *)(a5 + 8);
      *(_DWORD *)a5 = v111;
      v114 = v227;
      v227 = v113;
      LOBYTE(v113) = *(_BYTE *)(a5 + 4);
      *(_QWORD *)(a5 + 8) = v114;
      LOBYTE(v114) = v112;
      v112 &= ~2u;
      v115 = v113 & 0xFD;
      BYTE4(v226) = v113 & 1 | v112 & 0xFE | v113 & 2;
      LODWORD(v113) = *(_DWORD *)(a5 + 16);
      *(_BYTE *)(a5 + 4) = v112 & 1 | v115 & 0xFE | v114 & 2;
      LODWORD(v114) = v228;
      v228 = v113;
      v116 = *(_QWORD *)(a5 + 24);
      v117 = v229;
      *(_DWORD *)(a5 + 16) = v114;
      v118 = v230;
      v230 = v116;
      LOBYTE(v116) = *(_BYTE *)(a5 + 20);
      *(_QWORD *)(a5 + 24) = v118;
      LOBYTE(v118) = v117;
      v117 &= ~2u;
      v229 = v116 & 1 | v117 & 0xFE | v116 & 2;
      *(_BYTE *)(a5 + 20) = v117 & 1 | v116 & 0xFC | v118 & 2;
      v119 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v226);
      sub_182CBA0(v119, &v228);
      return 1;
    }
    while ( 1 )
    {
      v18 = *v14;
      if ( *(_WORD *)(*v14 + 4) )
        goto LABEL_12;
      v12 = *(_QWORD *)(v18 + 16);
      v13 = *(_DWORD *)(v18 + 24);
      v19 = *(_DWORD **)(v12 + 24);
      if ( !v19 )
        goto LABEL_17;
      if ( !*v19 && v19[1] == 8 && v13 == 1 )
        break;
      if ( !v13 )
      {
        v16 = *(_DWORD **)(v12 + 24);
        goto LABEL_11;
      }
LABEL_12:
      v17 = *(_QWORD *)(a1 + 16);
      if ( v18 != *(_QWORD *)(v17 + 856) && v18 != *(_QWORD *)(v17 + 864) )
        return 0;
LABEL_14:
      if ( (__int64 *)(a2 + 32 + 8 * v15) == ++v14 )
        goto LABEL_81;
    }
    v18 = *(_QWORD *)(v18 + 32);
    if ( *(_WORD *)(v18 + 4) )
      goto LABEL_12;
    v13 = *(_DWORD *)(v18 + 24);
LABEL_17:
    if ( !v13 )
    {
      v16 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL);
      if ( !v16 )
        goto LABEL_14;
LABEL_11:
      if ( *v16 == -1 )
        goto LABEL_14;
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v20 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v20 || *v20 || v20[1] != 6 )
    return 0;
  v64 = (__int64 *)(a2 + 32);
  v65 = (__int64 *)(a2 + 32);
  v66 = 8LL * *(unsigned int *)(a2 + 24);
  v67 = a2 + 32 + v66;
  if ( !v66 )
    goto LABEL_109;
  do
  {
    v70 = *v65;
    if ( !*(_WORD *)(*v65 + 4) )
    {
      v71 = *(_QWORD *)(v70 + 16);
      v72 = *(_DWORD *)(v70 + 24);
      v73 = *(_DWORD **)(v71 + 24);
      if ( !v73 )
      {
        if ( !v72 )
          goto LABEL_72;
        goto LABEL_70;
      }
      if ( !*v73 && v73[1] == 8 && v72 == 1 )
      {
        v70 = *(_QWORD *)(v70 + 32);
        if ( !*(_WORD *)(v70 + 4) && !*(_DWORD *)(v70 + 24) )
        {
          v68 = *(_DWORD **)(*(_QWORD *)(v70 + 16) + 24LL);
          if ( !v68 )
            goto LABEL_72;
          goto LABEL_69;
        }
      }
      else if ( !v72 )
      {
        v68 = *(_DWORD **)(v71 + 24);
LABEL_69:
        if ( *v68 == -1 )
          goto LABEL_72;
      }
    }
LABEL_70:
    v69 = *(_QWORD *)(a1 + 16);
    if ( v70 != *(_QWORD *)(v69 + 856) && v70 != *(_QWORD *)(v69 + 864) )
      return 0;
LABEL_72:
    ++v65;
  }
  while ( (__int64 *)v67 != v65 );
  v216 = a5;
  v147 = (__int64 *)v67;
  do
  {
    v149 = *v64;
    if ( *v64 )
      ++*(_DWORD *)(v149 + 8);
    v150 = *(_QWORD **)(v201 + 8);
    if ( v150 )
    {
      v151 = *((_DWORD *)v150 - 1);
      if ( v151 == *((_DWORD *)v150 - 2) )
      {
        v175 = (3 * v151 + 1) >> 1;
        v176 = 8 * v175 + 8;
        if ( 8 * v151 + 8 >= (unsigned int)v176 || v151 >= v175 )
          goto LABEL_181;
        v177 = (unsigned int *)sub_186B300(v150 - 1, v176);
        v178 = v177[1];
        v150 = v177 + 2;
        *v177 = v175;
        *(_QWORD *)(v201 + 8) = v177 + 2;
        LODWORD(v177) = v178;
        v154 = &v150[v178];
        v153 = (_DWORD)v177 + 1;
      }
      else
      {
        v152 = v151;
        v153 = v151 + 1;
        v154 = &v150[v152];
      }
    }
    else
    {
      v187 = (_QWORD *)sub_186B270(0x18u);
      v150 = v187 + 1;
      *v187 = 2;
      v154 = v187 + 1;
      *(_QWORD *)(v201 + 8) = v187 + 1;
      v153 = 1;
    }
    v155 = *a4;
    *v154 = v149;
    *((_DWORD *)v150 - 1) = v153;
    if ( v155 )
    {
      v156 = *(unsigned int *)(v155 - 4);
      if ( (_DWORD)v156 == *(_DWORD *)(v155 - 8) )
      {
        v213 = (unsigned int)(3 * v156 + 1) >> 1;
        v159 = 32 * v213 + 8;
        if ( 32 * (int)v156 + 8 >= (unsigned int)v159 || (unsigned int)v156 >= (unsigned int)(3 * v156 + 1) >> 1 )
          goto LABEL_181;
        v160 = sub_186B270(v159);
        v161 = (int *)*a4;
        v208 = (_DWORD *)v160;
        v162 = v160 + 8;
        v210 = v162;
        if ( *a4 )
        {
          v163 = v162;
          v164 = (unsigned int)*(v161 - 1);
          v208[1] = v164;
          v165 = &v161[8 * v164];
          for ( k = v161; v165 != k; *(_QWORD *)(v163 - 8) = v171 )
          {
            v167 = *k;
            v168 = *((_BYTE *)k + 4);
            k += 8;
            v163 += 32;
            *(_DWORD *)(v163 - 32) = v167;
            *(_BYTE *)(v163 - 28) = v168 & 3 | *(_BYTE *)(v163 - 28) & 0xFC;
            v169 = *((_QWORD *)k - 3);
            *((_QWORD *)k - 3) = 0;
            *(_QWORD *)(v163 - 24) = v169;
            v170 = *((_BYTE *)k - 12);
            *(_DWORD *)(v163 - 16) = *(k - 4);
            *(_BYTE *)(v163 - 12) = v170 & 3 | *(_BYTE *)(v163 - 12) & 0xFC;
            v171 = *((_QWORD *)k - 1);
            *((_QWORD *)k - 1) = 0;
          }
          v172 = (unsigned int)*(v161 - 1);
          if ( (_DWORD)v172 )
          {
            v200 = &v161[8 * v172];
            do
            {
              v173 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v161);
              v174 = v161 + 4;
              v161 += 8;
              sub_182CBA0(v173, v174);
            }
            while ( v200 != v161 );
            v161 = (int *)*a4;
          }
          sub_186B220(v161 - 2);
          v162 = v210;
          v157 = (_QWORD *)(v210 + 32LL * (unsigned int)v208[1]);
        }
        else
        {
          v157 = (_QWORD *)v162;
          v208[1] = 0;
        }
        *a4 = v162;
        *v208 = v213;
      }
      else
      {
        v157 = (_QWORD *)(32 * v156 + v155);
      }
    }
    else
    {
      v186 = (_QWORD *)sub_186B270(0x48u);
      v157 = v186 + 1;
      *v186 = 2;
      *a4 = (__int64)(v186 + 1);
    }
    *v157 = 0;
    v157[1] = 0;
    v158 = qword_1C7F2C0;
    v157[2] = 1;
    v157[3] = 0;
    if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
      sub_182C690(v158, v157, &qword_1C7F280);
    else
      *(_DWORD *)v157 = qword_1C7F280;
    if ( (qword_1C7F290 & 0x100000000LL) != 0 )
    {
      sub_182C690(v158, v157 + 2, &qword_1C7F290);
    }
    else
    {
      v148 = qword_1C7F290;
      *((_BYTE *)v157 + 20) &= ~1u;
      *((_DWORD *)v157 + 4) = v148;
    }
    ++v64;
    ++*(_DWORD *)(*a4 - 4);
  }
  while ( v147 != v64 );
  a5 = v216;
LABEL_109:
  v61 = qword_1C7F2C0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
LABEL_110:
    sub_182C690(v61, a5, &qword_1C7F280);
    goto LABEL_60;
  }
LABEL_59:
  v62 = qword_1C7F280;
  *(_BYTE *)(a5 + 4) &= ~1u;
  *(_DWORD *)a5 = v62;
LABEL_60:
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    sub_182C690(v61, a5 + 16, &qword_1C7F290);
  }
  else
  {
    v63 = qword_1C7F290;
    *(_BYTE *)(a5 + 20) &= ~1u;
    *(_DWORD *)(a5 + 16) = v63;
  }
  return 1;
}

