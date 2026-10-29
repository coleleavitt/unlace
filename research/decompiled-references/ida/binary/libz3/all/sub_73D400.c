__int64 __fastcall sub_73D400(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rsi
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // rdi
  _DWORD *v28; // rax
  char *v29; // rax
  char *v30; // rax
  _OWORD *v31; // rax
  char *v32; // rax
  __int64 v33; // rsi
  int v34; // r13d
  __int64 v35; // rax
  _QWORD *v36; // rdx
  unsigned int v37; // r8d
  unsigned __int64 v38; // rcx
  __int64 *v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // r13
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // r14
  int v59; // eax
  _QWORD *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 *v64; // rcx
  __int64 v65; // rdx
  _QWORD *v66; // rax
  __int64 v67; // r12
  __int64 v68; // rsi
  __int64 v69; // rdi
  int v70; // ecx
  __int64 v71; // rdi
  int v72; // edx
  __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // r12
  _QWORD *v77; // rcx
  unsigned int v78; // edx
  __int64 v79; // rsi
  int v80; // edx
  _QWORD *v81; // rax
  int v82; // ecx
  unsigned int v83; // ecx
  size_t v84; // rsi
  unsigned int *v85; // rax
  unsigned int v86; // r13d
  size_t v87; // rsi
  unsigned int *v88; // rax
  __int64 v89; // rax
  int v90; // edx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 v96; // r13
  __int64 v97; // rsi
  __int64 v98; // rdi
  _QWORD *v99; // rdx
  __int64 v100; // r13
  _QWORD *v101; // rax
  int v102; // eax
  __int64 *v103; // rcx
  _QWORD *v104; // rdx
  unsigned int v105; // r14d
  unsigned __int64 v106; // r13
  __int64 *v107; // rbx
  __int64 v108; // rsi
  __int64 v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rsi
  __int64 v113; // rdi
  __int64 v114; // rsi
  __int64 v115; // rdi
  unsigned int v116; // r8d
  unsigned __int64 v117; // r14
  __int64 *v118; // r13
  __int64 v119; // rsi
  __int64 v120; // rdi
  __int64 v121; // rbx
  _QWORD *v122; // rcx
  int v123; // eax
  __int64 v124; // rsi
  __int64 v125; // rdi
  __int64 v126; // rsi
  int v127; // ecx
  __int64 v128; // rdi
  __int64 v129; // r14
  _QWORD *v130; // rcx
  int v131; // eax
  __int64 v132; // rdx
  unsigned __int64 v133; // r14
  __int64 *v134; // rax
  __int64 v135; // rsi
  __int64 v136; // rdi
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rdi
  __int64 v140; // rsi
  __int64 v141; // r14
  int v142; // eax
  _QWORD *v143; // rdx
  unsigned int v144; // eax
  __int64 v145; // rcx
  int v146; // eax
  __int64 *v147; // rcx
  __int64 v148; // rsi
  __int64 v149; // rdi
  __int64 v150; // rsi
  __int64 v151; // rdx
  __int64 v152; // rdi
  __int64 v153; // rcx
  __int64 v154; // r14
  int v155; // eax
  __int64 v156; // rcx
  __int64 v157; // rsi
  __int64 v158; // rcx
  __int64 v159; // r13
  __int64 v160; // rcx
  __int64 v161; // rsi
  __int64 v162; // rax
  __int64 v163; // rsi
  __int64 v164; // rdi
  __int64 v165; // rdx
  int v166; // eax
  _QWORD *v167; // rcx
  unsigned int v168; // eax
  __int64 v169; // rsi
  int v170; // eax
  __int64 *v171; // rsi
  __int64 v172; // rdx
  _QWORD *v173; // rax
  __int64 v174; // r13
  __int64 v175; // rsi
  __int64 v176; // rdi
  int v177; // ecx
  __int64 v178; // rdi
  int v179; // edx
  __int64 v180; // rsi
  __int64 v181; // rcx
  __int64 v182; // rsi
  __int64 v183; // r13
  _QWORD *v184; // rcx
  unsigned int v185; // edx
  __int64 v186; // rsi
  int v187; // edx
  _QWORD *v188; // rax
  int v189; // ecx
  __int64 v190; // rsi
  __int64 v191; // rdi
  __int64 v192; // rsi
  __int64 v193; // rdi
  unsigned int v194; // r14d
  unsigned int v195; // eax
  unsigned int *v196; // rax
  __int64 v197; // rcx
  unsigned int v198; // r13d
  unsigned int v199; // eax
  unsigned int *v200; // rax
  __int64 v201; // rcx
  unsigned int v202; // ecx
  unsigned int v203; // eax
  unsigned int *v204; // rax
  unsigned int v205; // ecx
  size_t v206; // rsi
  unsigned int *v207; // rax
  _QWORD *v208; // rax
  _QWORD *v209; // rax
  _QWORD *v210; // rax
  _QWORD *v211; // rax
  __int64 v212; // rax
  __int64 v213; // rsi
  __int64 v214; // rdi
  unsigned int v215; // r14d
  unsigned int v216; // ecx
  unsigned int *v217; // rax
  __int64 v218; // rax
  int v219; // edx
  unsigned int v220; // r8d
  size_t v221; // rsi
  unsigned int *v222; // rax
  __int64 v223; // rsi
  _QWORD *v224; // rdx
  _QWORD *v225; // rax
  _QWORD *v226; // rcx
  char **v227; // rbx
  char **v228; // rbp
  char **v229; // rbx
  char **v230; // rbp
  char **v231; // rbp
  char **v232; // rbp
  char **exception; // rbp
  char **v234; // rbp
  int v235; // [rsp+0h] [rbp-F8h]
  int v236[2]; // [rsp+8h] [rbp-F0h]
  int v237[2]; // [rsp+8h] [rbp-F0h]
  int v238[2]; // [rsp+8h] [rbp-F0h]
  unsigned int v239; // [rsp+8h] [rbp-F0h]
  int v240[2]; // [rsp+8h] [rbp-F0h]
  int v241[2]; // [rsp+8h] [rbp-F0h]
  unsigned int v242; // [rsp+8h] [rbp-F0h]
  unsigned int v243; // [rsp+8h] [rbp-F0h]
  int v244[2]; // [rsp+8h] [rbp-F0h]
  int v245[2]; // [rsp+8h] [rbp-F0h]
  unsigned int v246; // [rsp+10h] [rbp-E8h]
  unsigned int v247; // [rsp+10h] [rbp-E8h]
  unsigned int v248; // [rsp+10h] [rbp-E8h]
  unsigned int v249; // [rsp+10h] [rbp-E8h]
  int v250[2]; // [rsp+10h] [rbp-E8h]
  int v251[2]; // [rsp+10h] [rbp-E8h]
  int v252[2]; // [rsp+10h] [rbp-E8h]
  int v253; // [rsp+18h] [rbp-E0h]
  unsigned int v254; // [rsp+18h] [rbp-E0h]
  int *v255; // [rsp+20h] [rbp-D8h]
  int v256[2]; // [rsp+20h] [rbp-D8h]
  char v257[8]; // [rsp+28h] [rbp-D0h]
  int v258[2]; // [rsp+30h] [rbp-C8h] BYREF
  void *v259; // [rsp+38h] [rbp-C0h]
  int v260[2]; // [rsp+40h] [rbp-B8h]
  void *v261; // [rsp+48h] [rbp-B0h]
  void *v262; // [rsp+50h] [rbp-A8h]
  __int64 v263; // [rsp+58h] [rbp-A0h]
  int v264; // [rsp+60h] [rbp-98h]
  void *ptr; // [rsp+68h] [rbp-90h]
  __int64 v266; // [rsp+70h] [rbp-88h]
  int v267; // [rsp+78h] [rbp-80h]
  void *v268; // [rsp+80h] [rbp-78h]
  __int64 v269; // [rsp+88h] [rbp-70h]
  int v270; // [rsp+90h] [rbp-68h]
  _BYTE v271[96]; // [rsp+98h] [rbp-60h] BYREF

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v3 )
  {
    case 2:
      v42 = 515;
LABEL_34:
      sub_1872CE0("");
      sub_1873130(107, v42);
    case 3:
      v42 = 520;
      goto LABEL_34;
    case 0:
      v7 = *(_DWORD *)(a2 + 24);
      while ( 1 )
      {
        v11 = *(_DWORD *)(a3 + 8);
        v12 = v11 >> 6;
        if ( v11 >> 6 >= v7 )
          break;
        v8 = *(_QWORD *)(a2 + 8LL * v12 + 32);
        v9 = ((v12 + 1) << 6) | v11 & 0x3F;
        *(_DWORD *)(a3 + 8) = v9;
        result = sub_73C1C0((__int64)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
        if ( !(_BYTE)result )
          return result;
      }
      *(_QWORD *)v236 = *(_QWORD *)(a2 + 16);
      v13 = a1[7];
      if ( v13 )
        v14 = *(_DWORD *)(v13 - 4);
      else
        v14 = 0;
      v15 = *(unsigned int *)(a3 + 12);
      v246 = v14 - v15;
      v253 = v13 + 8 * v15;
      *(_QWORD *)v257 = a1[1];
      sub_1584610(a1, v15);
      v18 = a1[11];
      if ( v18 )
        v19 = *(_DWORD *)(v18 - 4);
      else
        v19 = 0;
      if ( v19 == *(_DWORD *)(a3 + 12) )
      {
        v20 = a1[62];
        ++*(_DWORD *)(a2 + 8);
        if ( v20 )
        {
          v21 = a1[63];
          v22 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v21, v20);
        }
        v23 = a2;
        v24 = 0;
      }
      else
      {
        v110 = sub_15DC610(
                 a1[1],
                 v236[0],
                 v246,
                 v253,
                 v16,
                 v17,
                 v235,
                 v236[0],
                 v246,
                 v253,
                 (int)v255,
                 v257[0],
                 v258[0],
                 (int)v259,
                 v260[0],
                 v261);
        v23 = v110;
        if ( v110 )
          ++*(_DWORD *)(v110 + 8);
        v111 = sub_15E2980(a1[1]);
        v24 = v111;
        if ( v111 )
          ++*(_DWORD *)(v111 + 8);
        v112 = a1[62];
        if ( v112 )
        {
          v113 = a1[63];
          v22 = (*(_DWORD *)(v112 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v113, v112);
        }
      }
      v25 = a1[64];
      a1[62] = v24;
      v26 = a1[18];
      if ( v25 )
      {
        v27 = a1[65];
        v22 = (*(_DWORD *)(v25 + 8))-- == 1;
        if ( v22 )
          sub_15D7BC0(v27, v25);
      }
      a1[64] = 0;
      v28 = *(_DWORD **)(*(_QWORD *)v236 + 24LL);
      if ( v28 && !*v28 )
      {
        *(_QWORD *)v258 = *(_QWORD *)v26;
        *(_QWORD *)v256 = *(_QWORD *)v258;
        v29 = (char *)sub_186B270(0x140u);
        *(_QWORD *)v29 = 0;
        *((_QWORD *)v29 + 28) = 1;
        *((_QWORD *)v29 + 1) = 0;
        *((_QWORD *)v29 + 2) = 0;
        *((_QWORD *)v29 + 3) = 1;
        *((_QWORD *)v29 + 4) = 0;
        *((_QWORD *)v29 + 5) = 0;
        *((_QWORD *)v29 + 6) = 0;
        *((_QWORD *)v29 + 7) = 0;
        *((_QWORD *)v29 + 8) = 1;
        *((_QWORD *)v29 + 9) = 0;
        *((_QWORD *)v29 + 10) = 0;
        *((_QWORD *)v29 + 11) = 0;
        *((_QWORD *)v29 + 12) = 0;
        *((_QWORD *)v29 + 13) = 1;
        *((_QWORD *)v29 + 14) = 0;
        *((_QWORD *)v29 + 15) = 0;
        *((_QWORD *)v29 + 16) = 0;
        *((_QWORD *)v29 + 17) = 0;
        *((_QWORD *)v29 + 18) = 1;
        *((_QWORD *)v29 + 19) = 0;
        *((_QWORD *)v29 + 20) = 0;
        *((_QWORD *)v29 + 21) = 0;
        *((_QWORD *)v29 + 22) = 0;
        *((_QWORD *)v29 + 23) = 1;
        *((_QWORD *)v29 + 24) = 0;
        *((_QWORD *)v29 + 25) = 0;
        *((_QWORD *)v29 + 26) = 0;
        *((_QWORD *)v29 + 27) = 0;
        v29[228] = 0;
        *((_QWORD *)v29 + 31) = 0;
        *(_OWORD *)(v29 + 232) = 0;
        *((_QWORD *)v29 + 32) = 0;
        *((_QWORD *)v29 + 33) = 1;
        *((_QWORD *)v29 + 34) = 0;
        *((_QWORD *)v29 + 35) = 0;
        *((_QWORD *)v29 + 36) = 0;
        *((_QWORD *)v29 + 37) = 0;
        *((_QWORD *)v29 + 38) = 1;
        *((_QWORD *)v29 + 39) = 0;
        v259 = v29;
        *(_QWORD *)v260 = 8;
        LODWORD(v261) = 0;
        v30 = (char *)sub_186B270(0x140u);
        *(_QWORD *)v30 = 0;
        *((_QWORD *)v30 + 28) = 1;
        *((_QWORD *)v30 + 1) = 0;
        *((_QWORD *)v30 + 2) = 0;
        *((_QWORD *)v30 + 3) = 1;
        *((_QWORD *)v30 + 4) = 0;
        *((_QWORD *)v30 + 5) = 0;
        *((_QWORD *)v30 + 6) = 0;
        *((_QWORD *)v30 + 7) = 0;
        *((_QWORD *)v30 + 8) = 1;
        *((_QWORD *)v30 + 9) = 0;
        *((_QWORD *)v30 + 10) = 0;
        *((_QWORD *)v30 + 11) = 0;
        *((_QWORD *)v30 + 12) = 0;
        *((_QWORD *)v30 + 13) = 1;
        *((_QWORD *)v30 + 14) = 0;
        *((_QWORD *)v30 + 15) = 0;
        *((_QWORD *)v30 + 16) = 0;
        *((_QWORD *)v30 + 17) = 0;
        *((_QWORD *)v30 + 18) = 1;
        *((_QWORD *)v30 + 19) = 0;
        *((_QWORD *)v30 + 20) = 0;
        *((_QWORD *)v30 + 21) = 0;
        *((_QWORD *)v30 + 22) = 0;
        *((_QWORD *)v30 + 23) = 1;
        *((_QWORD *)v30 + 24) = 0;
        *((_QWORD *)v30 + 25) = 0;
        *((_QWORD *)v30 + 26) = 0;
        *((_QWORD *)v30 + 27) = 0;
        v30[228] = 0;
        *((_QWORD *)v30 + 31) = 0;
        *(_OWORD *)(v30 + 232) = 0;
        *((_QWORD *)v30 + 32) = 0;
        *((_QWORD *)v30 + 33) = 1;
        *((_QWORD *)v30 + 34) = 0;
        *((_QWORD *)v30 + 35) = 0;
        *((_QWORD *)v30 + 36) = 0;
        *((_QWORD *)v30 + 37) = 0;
        *((_QWORD *)v30 + 38) = 1;
        *((_QWORD *)v30 + 39) = 0;
        v262 = v30;
        v263 = 8;
        v264 = 0;
        v31 = (_OWORD *)sub_186B270(0x80u);
        ptr = v31;
        *v31 = 0;
        v31[1] = 0;
        v31[2] = 0;
        v31[3] = 0;
        v31[4] = 0;
        v31[5] = 0;
        v31[6] = 0;
        v31[7] = 0;
        v266 = 8;
        v267 = 0;
        v32 = (char *)sub_186B270(0x140u);
        *(_QWORD *)v32 = 0;
        *((_QWORD *)v32 + 28) = 1;
        *((_QWORD *)v32 + 1) = 0;
        *((_QWORD *)v32 + 2) = 0;
        *((_QWORD *)v32 + 3) = 1;
        *((_QWORD *)v32 + 4) = 0;
        *((_QWORD *)v32 + 5) = 0;
        *((_QWORD *)v32 + 6) = 0;
        *((_QWORD *)v32 + 7) = 0;
        *((_QWORD *)v32 + 8) = 1;
        *((_QWORD *)v32 + 9) = 0;
        *((_QWORD *)v32 + 10) = 0;
        *((_QWORD *)v32 + 11) = 0;
        *((_QWORD *)v32 + 12) = 0;
        *((_QWORD *)v32 + 13) = 1;
        *((_QWORD *)v32 + 14) = 0;
        *((_QWORD *)v32 + 15) = 0;
        *((_QWORD *)v32 + 16) = 0;
        *((_QWORD *)v32 + 17) = 0;
        *((_QWORD *)v32 + 18) = 1;
        *((_QWORD *)v32 + 19) = 0;
        *((_QWORD *)v32 + 20) = 0;
        *((_QWORD *)v32 + 21) = 0;
        *((_QWORD *)v32 + 22) = 0;
        *((_QWORD *)v32 + 23) = 1;
        *((_QWORD *)v32 + 24) = 0;
        *((_QWORD *)v32 + 25) = 0;
        *((_QWORD *)v32 + 26) = 0;
        *((_QWORD *)v32 + 27) = 0;
        v32[228] = 0;
        *((_QWORD *)v32 + 31) = 0;
        *(_OWORD *)(v32 + 232) = 0;
        *((_QWORD *)v32 + 32) = 0;
        *((_QWORD *)v32 + 33) = 1;
        *((_QWORD *)v32 + 34) = 0;
        *((_QWORD *)v32 + 35) = 0;
        *((_QWORD *)v32 + 36) = 0;
        *((_QWORD *)v32 + 37) = 0;
        *((_QWORD *)v32 + 38) = 1;
        *((_QWORD *)v32 + 39) = 0;
        v268 = v32;
        v269 = 8;
        v270 = 0;
        sub_16744A0(v271, *(_QWORD *)v256);
        v33 = *(unsigned int *)(v26 + 8);
        v255 = v258;
        v271[24] = 1;
        v34 = sub_14AE330((int)v258);
        if ( v34 != 5 )
        {
          v35 = a1[60];
          if ( v35 == *(_QWORD *)(*(_QWORD *)v26 + 864LL) || v35 == *(_QWORD *)(*(_QWORD *)v26 + 856LL) )
          {
            ++**(_DWORD **)(v26 + 248);
            sub_149FE90(v258, v33);
          }
          else if ( HIDWORD(v269) )
          {
            ++*(_DWORD *)(*(_QWORD *)(v26 + 248) + 4LL);
            sub_149FE90(v258, v33);
          }
          else if ( *(_WORD *)(v35 + 4) || *(_DWORD *)(v35 + 24) >= v246 )
          {
            sub_149FE90(v258, v33);
          }
          else
          {
            ++*(_DWORD *)(*(_QWORD *)(v26 + 248) + 8LL);
            sub_149FE90(v258, v33);
          }
          v36 = (_QWORD *)a1[7];
          if ( !v36 )
            goto LABEL_274;
          v37 = *(_DWORD *)(a3 + 12);
          v38 = (unsigned __int64)&v36[*((unsigned int *)v36 - 1)];
          v39 = &v36[v37];
          if ( (unsigned __int64)v39 >= v38 )
            goto LABEL_169;
          do
          {
            v40 = *v39;
            if ( *v39 )
            {
              v41 = a1[6];
              v22 = (*(_DWORD *)(v40 + 8))-- == 1;
              if ( v22 )
              {
                v247 = v37;
                *(_QWORD *)v237 = v38;
                sub_15D7BC0(v41, v40);
                v37 = v247;
                v38 = *(_QWORD *)v237;
              }
            }
            ++v39;
          }
          while ( (unsigned __int64)v39 < v38 );
          v36 = (_QWORD *)a1[7];
          if ( v36 )
          {
LABEL_169:
            v129 = a1[60];
            *((_DWORD *)v36 - 1) = v37;
            if ( v129 )
            {
              ++*(_DWORD *)(v129 + 8);
              v37 = *((_DWORD *)v36 - 1);
            }
            if ( *((_DWORD *)v36 - 2) == v37 )
            {
              v202 = (3 * v37 + 1) >> 1;
              v203 = 8 * v202 + 8;
              if ( 8 * v37 + 8 >= v203 || v37 >= v202 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_737700((__int64 *)v258, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v258);
                sub_233E40((__int64)v258);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v242 = (3 * v37 + 1) >> 1;
              v204 = (unsigned int *)sub_186B300(v36 - 1, v203);
              v36 = v204 + 2;
              a1[7] = v204 + 2;
              *v204 = v242;
              LODWORD(v204) = v204[1];
              v130 = &v36[(unsigned int)v204];
              v131 = (_DWORD)v204 + 1;
            }
            else
            {
              v130 = &v36[*((unsigned int *)v36 - 1)];
              v131 = *((_DWORD *)v36 - 1) + 1;
            }
          }
          else
          {
LABEL_274:
            v129 = a1[60];
            if ( v129 )
              ++*(_DWORD *)(v129 + 8);
            v211 = (_QWORD *)sub_186B270(0x18u);
            v36 = v211 + 1;
            *v211 = 2;
            v131 = 1;
            a1[7] = v36;
            v130 = v36;
          }
          *v130 = v129;
          *((_DWORD *)v36 - 1) = v131;
          v132 = a1[11];
          if ( v132 )
          {
            v133 = v132 + 8LL * *(unsigned int *)(v132 - 4);
            v249 = *(_DWORD *)(a3 + 12);
            v134 = (__int64 *)(v132 + 8LL * v249);
            if ( (unsigned __int64)v134 >= v133 )
              goto LABEL_181;
            do
            {
              v135 = *v134;
              if ( *v134 )
              {
                v136 = a1[10];
                v22 = (*(_DWORD *)(v135 + 8))-- == 1;
                if ( v22 )
                {
                  *(_QWORD *)v240 = v134;
                  sub_15D7BC0(v136, v135);
                  v134 = *(__int64 **)v240;
                }
              }
              ++v134;
            }
            while ( (unsigned __int64)v134 < v133 );
            v132 = a1[11];
            if ( v132 )
LABEL_181:
              *(_DWORD *)(v132 - 4) = v249;
          }
          v137 = a1[64];
          if ( !v137 )
          {
            v212 = sub_15DE370(a1[1]);
            v137 = v212;
            if ( v212 )
              ++*(_DWORD *)(v212 + 8);
            v213 = a1[64];
            if ( v213 )
            {
              v214 = a1[65];
              v22 = (*(_DWORD *)(v213 + 8))-- == 1;
              if ( v22 )
              {
                *(_QWORD *)v245 = v212;
                sub_15D7BC0(v214, v213);
                v137 = *(_QWORD *)v245;
              }
            }
            a1[64] = v137;
          }
          v138 = sub_15E2470(a1[1], a1[62], v137);
          v139 = a1[63];
          v140 = a1[62];
          v141 = v138;
          if ( v138 )
          {
            v142 = *(_DWORD *)(v138 + 8) + 1;
            *(_DWORD *)(v141 + 8) = v142;
            if ( v140 )
            {
              v22 = (*(_DWORD *)(v140 + 8))-- == 1;
              if ( v22 )
                sub_15D7BC0(v139, v140);
              a1[62] = v141;
              v142 = *(_DWORD *)(v141 + 8);
            }
            else
            {
              a1[62] = v141;
            }
            *(_DWORD *)(v141 + 8) = v142 + 1;
          }
          else
          {
            if ( v140 )
            {
              v22 = (*(_DWORD *)(v140 + 8))-- == 1;
              if ( v22 )
                sub_15D7BC0(v139, v140);
            }
            a1[62] = 0;
          }
          v143 = (_QWORD *)a1[11];
          if ( v143 )
          {
            v144 = *((_DWORD *)v143 - 1);
            if ( v144 == *((_DWORD *)v143 - 2) )
            {
              v205 = (3 * v144 + 1) >> 1;
              v206 = 8 * v205 + 8;
              if ( 8 * v144 + 8 >= (unsigned int)v206 || v144 >= v205 )
              {
                v232 = (char **)__cxa_allocate_exception(0x28u);
                sub_737700((__int64 *)v258, "Overflow encountered when expanding vector");
                *v232 = (char *)off_1C63128;
                sub_2333C0(v232 + 1, v258);
                sub_233E40((__int64)v258);
                __cxa_throw(v232, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v243 = (3 * v144 + 1) >> 1;
              v207 = (unsigned int *)sub_186B300(v143 - 1, v206);
              v143 = v207 + 2;
              a1[11] = v207 + 2;
              *v207 = v243;
              LODWORD(v207) = v207[1];
              v147 = &v143[(unsigned int)v207];
              v146 = (_DWORD)v207 + 1;
            }
            else
            {
              v145 = v144;
              v146 = v144 + 1;
              v147 = &v143[v145];
            }
          }
          else
          {
            v224 = (_QWORD *)sub_186B270(0x18u);
            *v224 = 2;
            v146 = 1;
            v143 = v224 + 1;
            a1[11] = v143;
            v147 = v143;
          }
          *v147 = v141;
          v148 = a1[64];
          *((_DWORD *)v143 - 1) = v146;
          if ( v148 )
          {
            v149 = a1[65];
            v22 = (*(_DWORD *)(v148 + 8))-- == 1;
            if ( v22 )
              sub_15D7BC0(v149, v148);
          }
          a1[64] = 0;
          v150 = a1[60];
          if ( v34 == 4 )
          {
            if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
            {
LABEL_240:
              result = a1[5];
              v189 = *(_DWORD *)(result - 4);
              *(_DWORD *)(result - 4) = v189 - 1;
              if ( v189 != 1 )
                *(_BYTE *)(result + 16LL * (unsigned int)(v189 - 2) + 8) |= 2u;
              goto LABEL_242;
            }
LABEL_239:
            sub_15843A0(a1, a2, a1[60], a1[62]);
            goto LABEL_240;
          }
          *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
          result = sub_73C1C0((__int64)a1, v150, (unsigned int)(v34 != 3) + v34);
          if ( !(_BYTE)result )
          {
LABEL_242:
            v190 = a1[60];
            if ( v190 )
            {
              v191 = a1[61];
              v22 = (*(_DWORD *)(v190 + 8))-- == 1;
              if ( v22 )
                result = sub_15D7BC0(v191, v190);
            }
            v192 = a1[62];
            a1[60] = 0;
            if ( v192 )
            {
              v193 = a1[63];
              v22 = (*(_DWORD *)(v192 + 8))-- == 1;
              if ( v22 )
                result = sub_15D7BC0(v193, v192);
            }
            a1[62] = 0;
LABEL_160:
            if ( v23 )
            {
              v22 = (*(_DWORD *)(v23 + 8))-- == 1;
              if ( v22 )
                return sub_15D7BC0(*(_QWORD *)v257, v23);
            }
            return result;
          }
          v151 = a1[11];
          v152 = a1[10];
          *(_QWORD *)v241 = a1[1];
          if ( v151 )
          {
            v153 = (unsigned int)(*(_DWORD *)(v151 - 4) - 1);
            v154 = *(_QWORD *)(v151 + 8 * v153);
            v155 = *(_DWORD *)(v151 - 4) - 1;
            if ( !v154 )
            {
              *(_DWORD *)(v151 - 4) = v153;
              goto LABEL_202;
            }
            ++*(_DWORD *)(v154 + 8);
            v156 = (unsigned int)(*(_DWORD *)(v151 - 4) - 1);
            v157 = *(_QWORD *)(v151 + 8 * v156);
            v155 = *(_DWORD *)(v151 - 4) - 1;
            *(_DWORD *)(v151 - 4) = v156;
            if ( !v157 )
            {
LABEL_202:
              v158 = (unsigned int)(v155 - 1);
              v159 = *(_QWORD *)(v151 + 8 * v158);
              if ( !v159 )
              {
                *(_DWORD *)(v151 - 4) = v158;
                goto LABEL_206;
              }
              ++*(_DWORD *)(v159 + 8);
              v160 = (unsigned int)(*(_DWORD *)(v151 - 4) - 1);
              v161 = *(_QWORD *)(v151 + 8 * v160);
              *(_DWORD *)(v151 - 4) = v160;
              if ( !v161 )
                goto LABEL_206;
              goto LABEL_204;
            }
          }
          else
          {
            v154 = MEMORY[0x7FFFFFFF8];
            if ( !MEMORY[0x7FFFFFFF8] )
            {
              v155 = --MEMORY[0xFFFFFFFFFFFFFFFC];
              goto LABEL_202;
            }
            ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
            v157 = MEMORY[0x7FFFFFFF8];
            --MEMORY[0xFFFFFFFFFFFFFFFC];
          }
          v22 = (*(_DWORD *)(v157 + 8))-- == 1;
          if ( v22 )
          {
            sub_15D7BC0(v152, v157);
            v151 = a1[11];
            if ( !v151 )
            {
              v159 = MEMORY[0x7FFFFFFF8];
              if ( !MEMORY[0x7FFFFFFF8] )
              {
                --MEMORY[0xFFFFFFFFFFFFFFFC];
                goto LABEL_206;
              }
              ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
              v161 = MEMORY[0x7FFFFFFF8];
              v152 = a1[10];
              --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_204:
              v22 = (*(_DWORD *)(v161 + 8))-- == 1;
              if ( v22 )
                sub_15D7BC0(v152, v161);
LABEL_206:
              v162 = sub_15E2470(a1[1], v159, v154);
              v163 = a1[62];
              v164 = a1[63];
              v165 = v162;
              if ( v162 )
              {
                v166 = *(_DWORD *)(v162 + 8) + 1;
                *(_DWORD *)(v165 + 8) = v166;
                if ( v163 )
                {
                  v22 = (*(_DWORD *)(v163 + 8))-- == 1;
                  if ( v22 )
                  {
                    *(_QWORD *)v251 = v165;
                    sub_15D7BC0(v164, v163);
                    v165 = *(_QWORD *)v251;
                    a1[62] = *(_QWORD *)v251;
                    v166 = *(_DWORD *)(*(_QWORD *)v251 + 8LL);
                  }
                  else
                  {
                    a1[62] = v165;
                    v166 = *(_DWORD *)(v165 + 8);
                  }
                }
                else
                {
                  a1[62] = v165;
                }
                *(_DWORD *)(v165 + 8) = v166 + 1;
              }
              else if ( v163 && (v22 = *(_DWORD *)(v163 + 8) == 1, --*(_DWORD *)(v163 + 8), v22) )
              {
                sub_15D7BC0(v164, v163);
                a1[62] = 0;
                v165 = 0;
              }
              else
              {
                a1[62] = 0;
              }
              v167 = (_QWORD *)a1[11];
              if ( v167 )
              {
                v168 = *((_DWORD *)v167 - 1);
                if ( v168 == *((_DWORD *)v167 - 2) )
                {
                  v220 = (3 * v168 + 1) >> 1;
                  v221 = 8 * v220 + 8;
                  if ( 8 * v168 + 8 >= (unsigned int)v221 || v168 >= v220 )
                  {
                    v227 = (char **)__cxa_allocate_exception(0x28u);
                    sub_737700((__int64 *)v258, "Overflow encountered when expanding vector");
                    *v227 = (char *)off_1C63128;
                    sub_2333C0(v227 + 1, v258);
                    sub_233E40((__int64)v258);
                    __cxa_throw(
                      v227,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v254 = (3 * v168 + 1) >> 1;
                  *(_QWORD *)v250 = v165;
                  v222 = (unsigned int *)sub_186B300(v167 - 1, v221);
                  v223 = v222[1];
                  v167 = v222 + 2;
                  a1[11] = v222 + 2;
                  v165 = *(_QWORD *)v250;
                  *v222 = v254;
                  LODWORD(v222) = v223;
                  v171 = &v167[v223];
                  v170 = (_DWORD)v222 + 1;
                }
                else
                {
                  v169 = v168;
                  v170 = v168 + 1;
                  v171 = &v167[v169];
                }
              }
              else
              {
                *(_QWORD *)v252 = v165;
                v226 = (_QWORD *)sub_186B270(0x18u);
                *v226 = 2;
                v165 = *(_QWORD *)v252;
                v170 = 1;
                v167 = v226 + 1;
                a1[11] = v167;
                v171 = v167;
              }
              *v171 = v165;
              *((_DWORD *)v167 - 1) = v170;
              if ( v159 )
              {
                v22 = (*(_DWORD *)(v159 + 8))-- == 1;
                if ( v22 )
                  sub_15D7BC0(*(_QWORD *)v241, v159);
              }
              if ( v154 )
              {
                v22 = (*(_DWORD *)(v154 + 8))-- == 1;
                if ( v22 )
                  sub_15D7BC0(*(_QWORD *)v241, v154);
              }
              v172 = 0xFFFFFFFFLL;
              v173 = (_QWORD *)a1[7];
              if ( v173 )
                v172 = (unsigned int)(*((_DWORD *)v173 - 1) - 1);
              v174 = v173[v172];
              if ( v174 )
                ++*(_DWORD *)(v174 + 8);
              v175 = a1[60];
              if ( v175 )
              {
                v176 = a1[61];
                v22 = (*(_DWORD *)(v175 + 8))-- == 1;
                if ( v22 )
                {
                  sub_15D7BC0(v176, v175);
                  v173 = (_QWORD *)a1[7];
                }
              }
              v177 = *((_DWORD *)v173 - 1);
              v178 = a1[6];
              a1[60] = v174;
              v179 = v177 - 1;
              v180 = v173[v177 - 1];
              *((_DWORD *)v173 - 1) = v177 - 1;
              if ( v180 )
              {
                v22 = (*(_DWORD *)(v180 + 8))-- == 1;
                if ( v22 )
                {
                  sub_15D7BC0(v178, v180);
                  v173 = (_QWORD *)a1[7];
                  v178 = a1[6];
                }
                v179 = *((_DWORD *)v173 - 1);
              }
              v181 = (unsigned int)(v179 - 1);
              v182 = v173[v181];
              *((_DWORD *)v173 - 1) = v181;
              if ( v182 && (v22 = *(_DWORD *)(v182 + 8) == 1, --*(_DWORD *)(v182 + 8), v22) )
              {
                sub_15D7BC0(v178, v182);
                v183 = a1[60];
                v173 = (_QWORD *)a1[7];
                if ( !v183 )
                {
LABEL_235:
                  v184 = v173;
                  if ( !v173 )
                  {
                    v225 = (_QWORD *)sub_186B270(0x18u);
                    *v225 = 2;
                    v187 = 1;
                    v184 = v225 + 1;
                    a1[7] = v225 + 1;
                    v188 = v225 + 1;
                    goto LABEL_238;
                  }
LABEL_236:
                  v185 = *((_DWORD *)v173 - 1);
                  if ( v185 == *((_DWORD *)v173 - 2) )
                  {
                    v215 = (3 * v185 + 1) >> 1;
                    v216 = 8 * v215 + 8;
                    if ( 8 * v185 + 8 >= v216 || v185 >= v215 )
                    {
                      v231 = (char **)__cxa_allocate_exception(0x28u);
                      sub_737700((__int64 *)v258, "Overflow encountered when expanding vector");
                      *v231 = (char *)off_1C63128;
                      sub_2333C0(v231 + 1, v258);
                      sub_233E40((__int64)v258);
                      __cxa_throw(
                        v231,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v217 = (unsigned int *)sub_186B300(v173 - 1, v216);
                    v184 = v217 + 2;
                    *v217 = v215;
                    v218 = v217[1];
                    a1[7] = v184;
                    v219 = v218;
                    v188 = &v184[v218];
                    v187 = v219 + 1;
                  }
                  else
                  {
                    v186 = v185;
                    v187 = v185 + 1;
                    v188 = &v173[v186];
                  }
LABEL_238:
                  *v188 = v183;
                  *((_DWORD *)v184 - 1) = v187;
                  if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
                    goto LABEL_240;
                  goto LABEL_239;
                }
              }
              else
              {
                v183 = a1[60];
                v184 = v173;
                if ( !v183 )
                  goto LABEL_236;
              }
              ++*(_DWORD *)(v183 + 8);
              goto LABEL_235;
            }
            v155 = *(_DWORD *)(v151 - 4);
            v152 = a1[10];
          }
          else
          {
            v155 = *(_DWORD *)(v151 - 4);
          }
          goto LABEL_202;
        }
        sub_149FE90(v258, v33);
      }
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v91 = sub_15DC610(
                a1[1],
                v236[0],
                v246,
                v253,
                v16,
                v17,
                v235,
                v236[0],
                v246,
                v253,
                (int)v255,
                v257[0],
                v258[0],
                (int)v259,
                v260[0],
                v261);
        v92 = v91;
        if ( v91 )
          ++*(_DWORD *)(v91 + 8);
        v93 = a1[60];
        if ( v93 )
        {
          v94 = a1[61];
          v22 = (*(_DWORD *)(v93 + 8))-- == 1;
          if ( v22 )
          {
            *(_QWORD *)v244 = v91;
            sub_15D7BC0(v94, v93);
            v92 = *(_QWORD *)v244;
          }
        }
        a1[60] = v92;
        v95 = sub_15DE370(a1[1]);
        v96 = v95;
        if ( v95 )
          ++*(_DWORD *)(v95 + 8);
        v97 = a1[62];
        if ( v97 )
        {
          v98 = a1[63];
          v22 = (*(_DWORD *)(v97 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v98, v97);
        }
        v99 = (_QWORD *)a1[7];
        a1[62] = v96;
        if ( !v99 )
          goto LABEL_106;
      }
      else
      {
        v114 = a1[60];
        ++*(_DWORD *)(a2 + 8);
        if ( v114 )
        {
          v115 = a1[61];
          v22 = (*(_DWORD *)(v114 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v115, v114);
        }
        v99 = (_QWORD *)a1[7];
        a1[60] = a2;
        if ( !v99 )
        {
          v100 = a2;
          goto LABEL_107;
        }
      }
      v116 = *(_DWORD *)(a3 + 12);
      v117 = (unsigned __int64)&v99[*((unsigned int *)v99 - 1)];
      v118 = &v99[v116];
      if ( (unsigned __int64)v118 >= v117 )
        goto LABEL_164;
      do
      {
        v119 = *v118;
        if ( *v118 )
        {
          v120 = a1[6];
          v22 = (*(_DWORD *)(v119 + 8))-- == 1;
          if ( v22 )
          {
            v239 = v116;
            sub_15D7BC0(v120, v119);
            v116 = v239;
          }
        }
        ++v118;
      }
      while ( (unsigned __int64)v118 < v117 );
      v99 = (_QWORD *)a1[7];
      if ( v99 )
      {
LABEL_164:
        v100 = a1[60];
        *((_DWORD *)v99 - 1) = v116;
        if ( v100 )
        {
          ++*(_DWORD *)(v100 + 8);
          v116 = *((_DWORD *)v99 - 1);
        }
        if ( *((_DWORD *)v99 - 2) == v116 )
        {
          v194 = (3 * v116 + 1) >> 1;
          v195 = 8 * v194 + 8;
          if ( 8 * v116 + 8 >= v195 || v116 >= v194 )
          {
            v230 = (char **)__cxa_allocate_exception(0x28u);
            sub_737700((__int64 *)v258, "Overflow encountered when expanding vector");
            *v230 = (char *)off_1C63128;
            sub_2333C0(v230 + 1, v258);
            sub_233E40((__int64)v258);
            __cxa_throw(v230, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v196 = (unsigned int *)sub_186B300(v99 - 1, v195);
          v197 = v196[1];
          v99 = v196 + 2;
          *v196 = v194;
          a1[7] = v196 + 2;
          LODWORD(v196) = v197;
          v103 = &v99[v197];
          v102 = (_DWORD)v196 + 1;
        }
        else
        {
          v103 = &v99[*((unsigned int *)v99 - 1)];
          v102 = *((_DWORD *)v99 - 1) + 1;
        }
        goto LABEL_109;
      }
LABEL_106:
      v100 = a1[60];
      if ( !v100 )
      {
LABEL_108:
        v101 = (_QWORD *)sub_186B270(0x18u);
        v99 = v101 + 1;
        *v101 = 2;
        v102 = 1;
        a1[7] = v99;
        v103 = v99;
LABEL_109:
        *v103 = v100;
        *((_DWORD *)v99 - 1) = v102;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        v104 = (_QWORD *)a1[11];
        if ( !v104 )
          goto LABEL_271;
        v105 = *(_DWORD *)(a3 + 12);
        v106 = (unsigned __int64)&v104[*((unsigned int *)v104 - 1)];
        v107 = &v104[v105];
        if ( (unsigned __int64)v107 >= v106 )
          goto LABEL_146;
        do
        {
          v108 = *v107;
          if ( *v107 )
          {
            v109 = a1[10];
            v22 = (*(_DWORD *)(v108 + 8))-- == 1;
            if ( v22 )
              sub_15D7BC0(v109, v108);
          }
          ++v107;
        }
        while ( (unsigned __int64)v107 < v106 );
        v104 = (_QWORD *)a1[11];
        if ( v104 )
        {
LABEL_146:
          v121 = a1[62];
          *((_DWORD *)v104 - 1) = v105;
          if ( v121 )
          {
            ++*(_DWORD *)(v121 + 8);
            v105 = *((_DWORD *)v104 - 1);
          }
          if ( *((_DWORD *)v104 - 2) == v105 )
          {
            v198 = (3 * v105 + 1) >> 1;
            v199 = 8 * v198 + 8;
            if ( 8 * v105 + 8 >= v199 || v105 >= v198 )
            {
              v234 = (char **)__cxa_allocate_exception(0x28u);
              sub_737700((__int64 *)v258, "Overflow encountered when expanding vector");
              *v234 = (char *)off_1C63128;
              sub_2333C0(v234 + 1, v258);
              sub_233E40((__int64)v258);
              __cxa_throw(v234, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v200 = (unsigned int *)sub_186B300(v104 - 1, v199);
            v201 = v200[1];
            v104 = v200 + 2;
            *v200 = v198;
            a1[11] = v200 + 2;
            LODWORD(v200) = v201;
            v122 = &v104[v201];
            v123 = (_DWORD)v200 + 1;
          }
          else
          {
            v122 = &v104[*((unsigned int *)v104 - 1)];
            v123 = *((_DWORD *)v104 - 1) + 1;
          }
        }
        else
        {
LABEL_271:
          v121 = a1[62];
          if ( v121 )
            ++*(_DWORD *)(v121 + 8);
          v210 = (_QWORD *)sub_186B270(0x18u);
          v104 = v210 + 1;
          *v210 = 2;
          v123 = 1;
          a1[11] = v104;
          v122 = v104;
        }
        *v122 = v121;
        v124 = a1[62];
        *((_DWORD *)v104 - 1) = v123;
        if ( v124 )
        {
          v125 = a1[63];
          v22 = (*(_DWORD *)(v124 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v125, v124);
        }
        result = a1[5];
        v126 = a1[60];
        a1[62] = 0;
        v127 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v127 - 1;
        if ( v127 != 1 && a2 != v126 )
        {
          *(_BYTE *)(result + 16LL * (unsigned int)(v127 - 2) + 8) |= 2u;
          v126 = a1[60];
        }
        if ( v126 )
        {
          v128 = a1[61];
          v22 = (*(_DWORD *)(v126 + 8))-- == 1;
          if ( v22 )
            result = sub_15D7BC0(v128, v126);
        }
        a1[60] = 0;
        goto LABEL_160;
      }
LABEL_107:
      ++*(_DWORD *)(v100 + 8);
      goto LABEL_108;
  }
  v43 = a1[1];
  v44 = a1[11];
  v45 = a1[10];
  *(_QWORD *)v238 = v43;
  if ( v44 )
  {
    v46 = (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
    v47 = *(_QWORD *)(v44 + 8 * v46);
    v48 = *(_DWORD *)(v44 - 4) - 1;
    if ( !v47 )
    {
      *(_DWORD *)(v44 - 4) = v46;
      goto LABEL_40;
    }
    ++*(_DWORD *)(v47 + 8);
    v49 = (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
    v50 = *(_QWORD *)(v44 + 8 * v49);
    v48 = *(_DWORD *)(v44 - 4) - 1;
    *(_DWORD *)(v44 - 4) = v49;
    if ( !v50 )
    {
LABEL_40:
      v51 = (unsigned int)(v48 - 1);
      v52 = *(_QWORD *)(v44 + 8 * v51);
      if ( !v52 )
      {
        *(_DWORD *)(v44 - 4) = v51;
        goto LABEL_44;
      }
      ++*(_DWORD *)(v52 + 8);
      v53 = (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
      v54 = *(_QWORD *)(v44 + 8 * v53);
      *(_DWORD *)(v44 - 4) = v53;
      if ( !v54 )
        goto LABEL_44;
      goto LABEL_42;
    }
  }
  else
  {
    v47 = MEMORY[0x7FFFFFFF8];
    if ( !MEMORY[0x7FFFFFFF8] )
    {
      v48 = --MEMORY[0xFFFFFFFFFFFFFFFC];
      goto LABEL_40;
    }
    ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
    v50 = MEMORY[0x7FFFFFFF8];
    --MEMORY[0xFFFFFFFFFFFFFFFC];
  }
  v22 = (*(_DWORD *)(v50 + 8))-- == 1;
  if ( !v22 )
  {
    v48 = *(_DWORD *)(v44 - 4);
    goto LABEL_40;
  }
  sub_15D7BC0(v45, v50);
  v44 = a1[11];
  if ( v44 )
  {
    v48 = *(_DWORD *)(v44 - 4);
    v45 = a1[10];
    goto LABEL_40;
  }
  v52 = MEMORY[0x7FFFFFFF8];
  if ( !MEMORY[0x7FFFFFFF8] )
  {
    --MEMORY[0xFFFFFFFFFFFFFFFC];
    goto LABEL_44;
  }
  ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
  v54 = MEMORY[0x7FFFFFFF8];
  v45 = a1[10];
  --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_42:
  v22 = (*(_DWORD *)(v54 + 8))-- == 1;
  if ( v22 )
    sub_15D7BC0(v45, v54);
LABEL_44:
  v55 = sub_15E2470(a1[1], v52, v47);
  v56 = a1[62];
  v57 = a1[63];
  v58 = v55;
  if ( v55 )
  {
    v59 = *(_DWORD *)(v55 + 8) + 1;
    *(_DWORD *)(v58 + 8) = v59;
    if ( v56 )
    {
      v22 = (*(_DWORD *)(v56 + 8))-- == 1;
      if ( v22 )
        sub_15D7BC0(v57, v56);
      a1[62] = v58;
      v59 = *(_DWORD *)(v58 + 8);
    }
    else
    {
      a1[62] = v58;
    }
    *(_DWORD *)(v58 + 8) = v59 + 1;
  }
  else
  {
    if ( v56 )
    {
      v22 = (*(_DWORD *)(v56 + 8))-- == 1;
      if ( v22 )
        sub_15D7BC0(v57, v56);
    }
    a1[62] = 0;
  }
  v60 = (_QWORD *)a1[11];
  if ( v60 )
  {
    v61 = *((_DWORD *)v60 - 1);
    if ( v61 == *((_DWORD *)v60 - 2) )
    {
      v83 = (3 * v61 + 1) >> 1;
      v84 = 8 * v83 + 8;
      if ( 8 * v61 + 8 >= (unsigned int)v84 || v61 >= v83 )
      {
        v228 = (char **)__cxa_allocate_exception(0x28u);
        sub_737700((__int64 *)v258, "Overflow encountered when expanding vector");
        *v228 = (char *)off_1C63128;
        sub_2333C0(v228 + 1, v258);
        sub_233E40((__int64)v258);
        __cxa_throw(v228, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v248 = (3 * v61 + 1) >> 1;
      v85 = (unsigned int *)sub_186B300(v60 - 1, v84);
      v60 = v85 + 2;
      a1[11] = v85 + 2;
      *v85 = v248;
      LODWORD(v85) = v85[1];
      v64 = &v60[(unsigned int)v85];
      v63 = (_DWORD)v85 + 1;
    }
    else
    {
      v62 = v61;
      v63 = v61 + 1;
      v64 = &v60[v62];
    }
  }
  else
  {
    v209 = (_QWORD *)sub_186B270(0x18u);
    v60 = v209 + 1;
    *v209 = 2;
    v63 = 1;
    a1[11] = v60;
    v64 = v60;
  }
  *v64 = v58;
  *((_DWORD *)v60 - 1) = v63;
  if ( v52 )
  {
    v22 = (*(_DWORD *)(v52 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(*(_QWORD *)v238, v52);
  }
  if ( v47 )
  {
    v22 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(*(_QWORD *)v238, v47);
  }
  v65 = 0xFFFFFFFFLL;
  v66 = (_QWORD *)a1[7];
  if ( v66 )
    v65 = (unsigned int)(*((_DWORD *)v66 - 1) - 1);
  v67 = v66[v65];
  if ( v67 )
    ++*(_DWORD *)(v67 + 8);
  v68 = a1[60];
  if ( v68 )
  {
    v69 = a1[61];
    v22 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v22 )
    {
      sub_15D7BC0(v69, v68);
      v66 = (_QWORD *)a1[7];
    }
  }
  v70 = *((_DWORD *)v66 - 1);
  v71 = a1[6];
  a1[60] = v67;
  v72 = v70 - 1;
  v73 = v66[v70 - 1];
  *((_DWORD *)v66 - 1) = v70 - 1;
  if ( v73 )
  {
    v22 = (*(_DWORD *)(v73 + 8))-- == 1;
    if ( v22 )
    {
      sub_15D7BC0(v71, v73);
      v66 = (_QWORD *)a1[7];
      v71 = a1[6];
    }
    v72 = *((_DWORD *)v66 - 1);
  }
  v74 = (unsigned int)(v72 - 1);
  v75 = v66[v74];
  *((_DWORD *)v66 - 1) = v74;
  if ( !v75 || (v22 = *(_DWORD *)(v75 + 8) == 1, --*(_DWORD *)(v75 + 8), !v22) )
  {
    v76 = a1[60];
    v77 = v66;
    if ( !v76 )
      goto LABEL_75;
    goto LABEL_73;
  }
  sub_15D7BC0(v71, v75);
  v76 = a1[60];
  v66 = (_QWORD *)a1[7];
  if ( v76 )
LABEL_73:
    ++*(_DWORD *)(v76 + 8);
  v77 = v66;
  if ( v66 )
  {
LABEL_75:
    v78 = *((_DWORD *)v66 - 1);
    if ( v78 == *((_DWORD *)v66 - 2) )
    {
      v86 = (3 * v78 + 1) >> 1;
      v87 = 8 * v86 + 8;
      if ( 8 * v78 + 8 >= (unsigned int)v87 || v78 >= v86 )
      {
        v229 = (char **)__cxa_allocate_exception(0x28u);
        sub_737700((__int64 *)v258, "Overflow encountered when expanding vector");
        *v229 = (char *)off_1C63128;
        sub_2333C0(v229 + 1, v258);
        sub_233E40((__int64)v258);
        __cxa_throw(v229, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v88 = (unsigned int *)sub_186B300(v66 - 1, v87);
      v77 = v88 + 2;
      *v88 = v86;
      v89 = v88[1];
      a1[7] = v77;
      v90 = v89;
      v81 = &v77[v89];
      v80 = v90 + 1;
    }
    else
    {
      v79 = v78;
      v80 = v78 + 1;
      v81 = &v66[v79];
    }
    goto LABEL_77;
  }
  v208 = (_QWORD *)sub_186B270(0x18u);
  v80 = 1;
  v77 = v208 + 1;
  *v208 = 2;
  a1[7] = v208 + 1;
  v81 = v208 + 1;
LABEL_77:
  *v81 = v76;
  *((_DWORD *)v77 - 1) = v80;
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, a1[60], a1[62]);
  result = a1[5];
  v82 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v82 - 1;
  if ( v82 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v82 - 2) + 8) |= 2u;
  return result;
}

