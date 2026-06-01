_DWORD *__fastcall sub_B9F910(__int64 *a1, _DWORD *a2, unsigned int a3, __m128 a4, __m128 a5, __m128 a6)
{
  char **exception; // rbx
  __int64 v9; // rax
  _DWORD *result; // rax
  _DWORD *v11; // r8
  int v12; // eax
  _DWORD *v13; // r12
  __int64 v14; // r14
  __int64 v15; // rax
  _DWORD *v16; // r8
  _DWORD *v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // rbx
  __int64 v20; // rax
  char v21; // al
  unsigned int v22; // esi
  _QWORD *v23; // rdi
  unsigned int *v24; // rbp
  __int64 v25; // r12
  __int64 v26; // r14
  unsigned int v27; // eax
  int v28; // ebp
  _DWORD *v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // r12d
  _DWORD *v34; // rdi
  _DWORD *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // r13d
  __int64 v39; // rcx
  char v40; // r12
  _DWORD *v41; // r14
  __int64 v42; // rdx
  unsigned int v43; // esi
  __int64 v44; // rax
  __int64 v45; // r12
  _QWORD *v46; // r13
  __int64 v47; // rax
  __int64 v48; // rdi
  unsigned int v49; // ebp
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  int v53; // edx
  __int64 v54; // r12
  int v55; // eax
  char v56; // bp
  unsigned int v57; // r14d
  __int64 v58; // r12
  __int64 v59; // rax
  char *v60; // rbp
  _QWORD *v61; // rdi
  __int64 v62; // r14
  _DWORD *v63; // r13
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r10
  __int64 *v71; // r12
  __int64 v72; // rdx
  char v73; // al
  __int64 v74; // rbx
  __int64 *v75; // r14
  _DWORD *v76; // r12
  __int64 v77; // r13
  __int64 *v78; // rax
  __int64 *v79; // rbp
  __int64 *v80; // r12
  char v81; // al
  __int64 v82; // r15
  __int64 v83; // r13
  __int64 v84; // r14
  __int64 *v85; // rbx
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // r12
  _QWORD *v89; // rbp
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rsi
  _QWORD *v93; // rbp
  __int64 v94; // rax
  __int64 v95; // r12
  _QWORD *v96; // rbp
  __int64 v97; // rax
  unsigned int *v98; // rsi
  int v99; // ebp
  __int64 v100; // r12
  unsigned int v101; // r8d
  __int64 v102; // r14
  unsigned int v103; // r12d
  __int64 v104; // rbp
  bool v105; // r9
  unsigned int *v106; // rcx
  __int64 v107; // rdi
  unsigned int *v108; // rax
  __int64 v109; // rdx
  _QWORD *v110; // r12
  _DWORD *v111; // r13
  unsigned int *v112; // rbx
  __int64 v113; // rbp
  unsigned int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rbx
  char v118; // cl
  unsigned int *v119; // rbx
  __int64 v120; // rbp
  __int64 v121; // r13
  unsigned int v122; // eax
  __int64 v123; // rcx
  __int64 v124; // rax
  unsigned int v125; // edx
  __int64 v126; // rsi
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rdi
  unsigned int v130; // ebx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rbp
  char v135; // al
  int v136; // eax
  unsigned int v137; // edx
  __int64 *v138; // rbp
  unsigned int v139; // r14d
  _QWORD *v140; // rcx
  __int64 v141; // rbx
  unsigned int v142; // r12d
  unsigned int v143; // r13d
  unsigned int v144; // ebx
  size_t v145; // rsi
  unsigned int *v146; // rax
  unsigned int v147; // eax
  __int64 v148; // rax
  __int64 v149; // rdx
  unsigned int *v150; // rdx
  __int64 v151; // rax
  unsigned int *v152; // rax
  _QWORD *v153; // rax
  unsigned int v154; // ebx
  size_t v155; // rsi
  unsigned int *v156; // rax
  __int64 v157; // rax
  _QWORD *v158; // rax
  __int64 v159; // r12
  __int64 v160; // rax
  __int64 v161; // rsi
  char v162; // al
  _DWORD *v163; // rdi
  _QWORD *v164; // rcx
  __int64 v165; // r12
  int v166; // edx
  unsigned int v167; // r14d
  __int64 *v168; // r12
  unsigned int v169; // ebp
  __int64 v170; // r13
  unsigned int v171; // eax
  unsigned int v172; // edx
  size_t v173; // rsi
  unsigned int v174; // ebp
  unsigned int *v175; // rax
  unsigned int v176; // eax
  __int64 v177; // rdx
  __int64 v178; // rax
  _QWORD *v179; // rdx
  __int64 v180; // rax
  unsigned int *v181; // rax
  _QWORD *v182; // rax
  unsigned int v183; // r13d
  unsigned int v184; // ecx
  unsigned int *v185; // rax
  __int64 v186; // rax
  _QWORD *v187; // rax
  _DWORD *v188; // rax
  __int64 v189; // r15
  _QWORD *v190; // rbx
  _QWORD *v191; // r13
  _QWORD *v192; // rax
  unsigned int v193; // edx
  __int64 v194; // rcx
  int v195; // edx
  unsigned int v196; // r15d
  unsigned int v197; // ecx
  unsigned int *v198; // rdx
  __int64 v199; // rcx
  _QWORD *v200; // rax
  _DWORD *v201; // [rsp+8h] [rbp-C0h]
  _DWORD *v202; // [rsp+8h] [rbp-C0h]
  _DWORD *v203; // [rsp+8h] [rbp-C0h]
  _DWORD *v204; // [rsp+8h] [rbp-C0h]
  _DWORD *v205; // [rsp+8h] [rbp-C0h]
  __int64 v206; // [rsp+8h] [rbp-C0h]
  _DWORD *v207; // [rsp+8h] [rbp-C0h]
  _DWORD *v208; // [rsp+8h] [rbp-C0h]
  _QWORD *v209; // [rsp+8h] [rbp-C0h]
  __int64 v210; // [rsp+8h] [rbp-C0h]
  __int64 v211; // [rsp+8h] [rbp-C0h]
  unsigned int v212; // [rsp+8h] [rbp-C0h]
  unsigned int v213; // [rsp+8h] [rbp-C0h]
  unsigned int v214; // [rsp+8h] [rbp-C0h]
  __int64 v215; // [rsp+8h] [rbp-C0h]
  _QWORD *v216; // [rsp+8h] [rbp-C0h]
  unsigned int v217; // [rsp+8h] [rbp-C0h]
  _DWORD *v218; // [rsp+8h] [rbp-C0h]
  _DWORD *v219; // [rsp+8h] [rbp-C0h]
  _DWORD *v220; // [rsp+8h] [rbp-C0h]
  unsigned int v221; // [rsp+8h] [rbp-C0h]
  _QWORD *v222; // [rsp+8h] [rbp-C0h]
  _DWORD *v223; // [rsp+10h] [rbp-B8h]
  __int64 *v224; // [rsp+10h] [rbp-B8h]
  __int64 v225; // [rsp+10h] [rbp-B8h]
  _DWORD *v226; // [rsp+10h] [rbp-B8h]
  int v227; // [rsp+10h] [rbp-B8h]
  unsigned int v228; // [rsp+10h] [rbp-B8h]
  _DWORD *v229; // [rsp+18h] [rbp-B0h]
  _DWORD *v230; // [rsp+18h] [rbp-B0h]
  _DWORD *v231; // [rsp+18h] [rbp-B0h]
  int v232; // [rsp+18h] [rbp-B0h]
  _DWORD *v233; // [rsp+20h] [rbp-A8h]
  __int64 v234; // [rsp+20h] [rbp-A8h]
  __int64 v235; // [rsp+20h] [rbp-A8h]
  int v236; // [rsp+20h] [rbp-A8h]
  unsigned int v237; // [rsp+28h] [rbp-A0h]
  __int64 v238; // [rsp+28h] [rbp-A0h]
  unsigned int v239; // [rsp+30h] [rbp-98h]
  _DWORD *v240; // [rsp+30h] [rbp-98h]
  __int64 v241; // [rsp+38h] [rbp-90h]
  _DWORD *v242; // [rsp+40h] [rbp-88h]
  _DWORD *v243; // [rsp+48h] [rbp-80h]
  _DWORD *v244; // [rsp+50h] [rbp-78h]
  unsigned int v245; // [rsp+58h] [rbp-70h]
  int v247; // [rsp+60h] [rbp-68h] BYREF
  int v248; // [rsp+64h] [rbp-64h] BYREF
  _DWORD *i; // [rsp+68h] [rbp-60h] BYREF
  char *v250[11]; // [rsp+70h] [rbp-58h] BYREF

  while ( 1 )
  {
    v9 = a1[19];
    if ( v9 )
      *(_DWORD *)(v9 - 4) = 0;
    result = (_DWORD *)a1[20];
    if ( result )
      *(result - 1) = 0;
    v11 = *((_DWORD **)a2 + 1);
    i = v11;
    if ( !v11 )
    {
      v62 = (__int64)a1;
      if ( !result )
        return result;
LABEL_58:
      v63 = nullptr;
      if ( !*(result - 1) )
        return result;
LABEL_59:
      v208 = a2;
      v64 = sub_180C100(*(_QWORD *)(*(_QWORD *)(v62 + 16) + 16LL), 24);
      a4 = 0;
      *(_OWORD *)(v64 + 8) = 0;
      v65 = v64;
      *(_DWORD *)v64 = 27;
      v66 = sub_180C100(*(_QWORD *)(*(_QWORD *)(v62 + 16) + 16LL), 24);
      v70 = (__int64)v208;
      v71 = *(__int64 **)(v62 + 152);
      *(_DWORD *)v66 = 26;
      v72 = v66;
      *(_QWORD *)(v66 + 8) = 0;
      *(_QWORD *)(v66 + 16) = v65;
      v73 = *(_BYTE *)(v62 + 100);
      ++*(_DWORD *)(v62 + 96);
      i = v208;
      if ( !v71 || (v67 = *((unsigned int *)v71 - 1), &v71[v67] == v71) )
      {
LABEL_79:
        if ( !v73 )
        {
          v226 = (_DWORD *)v72;
          v95 = *(_QWORD *)(v70 + 8);
          v211 = v70;
          v96 = *(_QWORD **)(*(_QWORD *)(v62 + 16) + 8LL);
          v97 = sub_180C100(v96 + 2, 24);
          *(_QWORD *)v97 = off_1C57AF8;
          *(_QWORD *)(v97 + 16) = v95;
          *(_QWORD *)(v97 + 8) = v211 + 8;
          v250[0] = (char *)v97;
          sub_B9B610(v96, v250);
          v72 = (__int64)v226;
          v79 = *(__int64 **)(v62 + 160);
          v81 = *(_BYTE *)(v62 + 100);
          *(_QWORD *)(v211 + 8) = v226;
          i = v226;
          if ( !v79 || (v67 = *((unsigned int *)v79 - 1), v80 = &v79[v67], v80 == v79) )
          {
            v82 = (__int64)v226;
LABEL_73:
            if ( !v81 )
            {
              v88 = *(_QWORD *)(v82 + 8);
              v89 = *(_QWORD **)(*(_QWORD *)(v62 + 16) + 8LL);
              v90 = sub_180C100(v89 + 2, 24);
              *(_QWORD *)v90 = off_1C57AF8;
              *(_QWORD *)(v90 + 8) = v82 + 8;
              *(_QWORD *)(v90 + 16) = v88;
              v250[0] = (char *)v90;
              sub_B9B610(v89, v250);
            }
            goto LABEL_75;
          }
LABEL_67:
          v230 = v63;
          v82 = v72;
          v83 = v62;
          v84 = v72;
          v235 = v65;
          v85 = v80;
          do
          {
            while ( 1 )
            {
              v86 = v82;
              v82 = *v79;
              if ( v84 != v86 && !v81 )
                break;
              ++v79;
              *(_QWORD *)(v86 + 8) = v82;
              i = (_DWORD *)v82;
              if ( v85 == v79 )
                goto LABEL_72;
            }
            ++v79;
            v225 = *(_QWORD *)(v86 + 8);
            v209 = *(_QWORD **)(*(_QWORD *)(v83 + 16) + 8LL);
            v87 = sub_180C100(v209 + 2, 24);
            *(_QWORD *)v87 = off_1C57AF8;
            *(_QWORD *)(v87 + 8) = v86 + 8;
            *(_QWORD *)(v87 + 16) = v225;
            v250[0] = (char *)v87;
            sub_B9B610(v209, v250);
            *(_QWORD *)(v86 + 8) = v82;
            v81 = *(_BYTE *)(v83 + 100);
            i = (_DWORD *)v82;
          }
          while ( v85 != v79 );
LABEL_72:
          v62 = v83;
          v65 = v235;
          v63 = v230;
          goto LABEL_73;
        }
      }
      else
      {
        v229 = v63;
        v238 = v72;
        v224 = &v71[v67];
        v234 = v65;
        v74 = v62;
        v75 = v71;
        v76 = v208;
        while ( 1 )
        {
          v77 = (__int64)v76;
          v76 = (_DWORD *)*v75;
          if ( v73 )
            break;
          ++v75;
          v93 = *(_QWORD **)(*(_QWORD *)(v74 + 16) + 8LL);
          v210 = *(_QWORD *)(v77 + 8);
          v94 = sub_180C100(v93 + 2, 24);
          *(_QWORD *)(v94 + 8) = v77 + 8;
          *(_QWORD *)v94 = off_1C57AF8;
          *(_QWORD *)(v94 + 16) = v210;
          v250[0] = (char *)v94;
          sub_B9B610(v93, v250);
          *(_QWORD *)(v77 + 8) = v76;
          i = v76;
          v73 = *(_BYTE *)(v74 + 100);
          if ( v75 == v224 )
          {
            v62 = v74;
            v63 = v229;
            v72 = v238;
            v70 = (__int64)v76;
            v65 = v234;
            goto LABEL_79;
          }
        }
        v70 = *v75;
        v67 = v77;
        v78 = v75 + 1;
        v62 = v74;
        *(_QWORD *)(v77 + 8) = v70;
        v72 = v238;
        v63 = v229;
        v65 = v234;
        for ( i = (_DWORD *)v70; v78 != v224; *(_QWORD *)(v67 + 8) = v70 )
        {
          v67 = v70;
          v70 = *v78++;
        }
      }
      v79 = *(__int64 **)(v62 + 160);
      *(_QWORD *)(v70 + 8) = v72;
      i = (_DWORD *)v72;
      if ( !v79 || (v80 = &v79[*((unsigned int *)v79 - 1)], v81 = 1, v80 == v79) )
      {
        v82 = v72;
LABEL_75:
        *(_QWORD *)(v82 + 8) = v63;
        v91 = a3;
        v92 = v65;
        return sub_B9F490(v62, v92, v91, a4, a5, a6, v67, v68, v69);
      }
      goto LABEL_67;
    }
    v12 = *v11;
    v233 = a2;
    v13 = a2;
    if ( (unsigned int)(*v11 - 26) > 1 )
    {
      while ( 1 )
      {
        switch ( v12 )
        {
          case 7:
          case 8:
          case 9:
          case 10:
          case 11:
          case 12:
          case 13:
            v14 = (unsigned int)v11[7];
            v15 = *(_QWORD *)(a1[5] + 8 * v14);
            if ( !v15
              || *(_WORD *)(v15 + 4)
              || (*(_BYTE *)(v15 + 30) & 1) != 0
              || *((_QWORD *)v11 + 2) != *(_QWORD *)(v15 + 16)
              || *(_DWORD *)(v15 + 24) != *((unsigned __int16 *)v11 + 12) )
            {
              goto LABEL_12;
            }
            v163 = (_DWORD *)a1[6];
            v220 = v11;
            v248 = v11[7];
            sub_B99330(v163, &v248);
            LODWORD(v250[0]) = 0;
            sub_B9B6D0(a1 + 17, v14, (unsigned int *)v250);
            sub_B9B7D0(a1 + 19, &i);
            v16 = v220;
            v164 = (_QWORD *)a1[5];
            v165 = v164[v14];
            v166 = v220[8];
            if ( !*((_WORD *)v220 + 12) )
              goto LABEL_13;
            v167 = v166 + 1;
            v168 = (__int64 *)(v165 + 32);
            v240 = v220;
            v232 = v166 + *((unsigned __int16 *)v220 + 12);
            v169 = v220[8];
            v170 = *v168;
            if ( v164 )
              goto LABEL_195;
LABEL_209:
            if ( !v167 )
              goto LABEL_204;
            v182 = (_QWORD *)sub_186B270(0x18u);
            v221 = v169;
            v164 = v182 + 1;
            *v182 = 2;
            a1[5] = (__int64)(v182 + 1);
            v228 = 0;
LABEL_201:
            while ( 2 )
            {
              v176 = *((_DWORD *)v164 - 2);
              if ( v176 < v167 )
              {
                v172 = (3 * v176 + 1) >> 1;
                v173 = 8 * v172 + 8;
                v174 = v172;
                if ( 8 * v176 + 8 < (unsigned int)v173 && v176 < v172 )
                {
                  v175 = (unsigned int *)sub_186B300(v164 - 1, v173);
                  v164 = v175 + 2;
                  *v175 = v174;
                  a1[5] = (__int64)(v175 + 2);
                  continue;
                }
LABEL_230:
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_151CF2(v250);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v250);
                sub_233E40((__int64)v250);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              break;
            }
            v169 = v221;
            *((_DWORD *)v164 - 1) = v167;
            v177 = 8LL * v167;
            v178 = 8LL * v228;
            if ( v178 != v177 )
            {
              v222 = v164;
              memset(&v164[(unsigned __int64)v178 / 8], 0, v177 - v178);
              v164 = v222;
            }
LABEL_204:
            v179 = (_QWORD *)a1[6];
            v164[v169] = v170;
            if ( v179 )
            {
LABEL_205:
              v180 = *((unsigned int *)v179 - 1);
              if ( (_DWORD)v180 != *((_DWORD *)v179 - 2) )
              {
                v181 = (unsigned int *)v179 + v180;
                goto LABEL_207;
              }
              v183 = (unsigned int)(3 * v180 + 1) >> 1;
              v184 = 4 * v183 + 8;
              if ( 4 * (int)v180 + 8 < v184 && (unsigned int)v180 < v183 )
              {
                v185 = (unsigned int *)sub_186B300(v179 - 1, v184);
                v179 = v185 + 2;
                *v185 = v183;
                v186 = v185[1];
                a1[6] = (__int64)v179;
                v181 = (unsigned int *)v179 + v186;
                goto LABEL_207;
              }
              goto LABEL_230;
            }
            while ( 1 )
            {
              v187 = (_QWORD *)sub_186B270(0x10u);
              *v187 = 2;
              v179 = v187 + 1;
              a1[6] = (__int64)(v187 + 1);
              v181 = (unsigned int *)(v187 + 1);
LABEL_207:
              *v181 = v169;
              ++v168;
              ++*((_DWORD *)v179 - 1);
              if ( v232 == v167 )
                break;
              v164 = (_QWORD *)a1[5];
              ++v167;
              v170 = *v168;
              v169 = v167 - 1;
              if ( !v164 )
                goto LABEL_209;
LABEL_195:
              v171 = *((_DWORD *)v164 - 1);
              if ( v169 < v171 )
                goto LABEL_204;
              if ( v171 < v167 )
              {
                v221 = v169;
                v228 = *((_DWORD *)v164 - 1);
                goto LABEL_201;
              }
              v179 = (_QWORD *)a1[6];
              *((_DWORD *)v164 - 1) = v167;
              v164[v169] = v170;
              if ( v179 )
                goto LABEL_205;
            }
            v16 = v240;
            goto LABEL_13;
          case 21:
            v30 = (unsigned int)v11[4];
            v31 = a1[5];
            v32 = *(_QWORD *)(v31 + 8 * v30);
            if ( !v32 )
              goto LABEL_12;
            v33 = v11[5];
            if ( v32 != *(_QWORD *)(v31 + 8LL * v33) )
              goto LABEL_12;
            v34 = (_DWORD *)a1[6];
            v248 = v11[5];
            v203 = v11;
            v247 = v30;
            sub_B99330(v34, &v248);
            LODWORD(v250[0]) = 0;
            sub_B9B6D0(a1 + 17, v33, (unsigned int *)v250);
            v35 = v203;
            if ( *(_WORD *)(*(_QWORD *)(a1[5] + 8 * v30) + 4LL) == 1 )
            {
              sub_B99330((_DWORD *)a1[6], &v247);
              LODWORD(v250[0]) = 0;
              sub_B9B6D0(a1 + 17, v30, (unsigned int *)v250);
              v35 = v203;
              v188 = (_DWORD *)(a1[8] + 4LL * *(unsigned int *)(*(_QWORD *)(a1[5] + 8 * v30) + 16LL));
              if ( *v188 == -1 )
                *v188 = v30;
            }
            goto LABEL_32;
          case 22:
            v24 = *(unsigned int **)(a1[5] + 8LL * (unsigned int)v11[4]);
            if ( v24 )
            {
              if ( !*((_WORD *)v24 + 2) && (*((_BYTE *)v24 + 30) & 1) != 0 )
              {
                v25 = *a1;
                v202 = v11;
                v26 = *((_QWORD *)v11 + 3);
                v27 = sub_952CC0(*(__int64 **)(*a1 + 7472), a1[9]);
                sub_B6F6E0(v25, (__int64)v24, 0, v27, *(double *)a4.m128_u64, a5, a6);
                v11 = v202;
                if ( *(_QWORD *)(v26 + 8) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 8656) + 8LL * *v24) + 8LL) )
                {
                  v29 = (_DWORD *)a1[6];
                  v248 = v202[4];
                  v28 = v248;
                  sub_B99330(v29, &v248);
                  LODWORD(v250[0]) = 0;
                  v22 = v28;
                  v23 = a1 + 17;
LABEL_28:
                  sub_B9B6D0(v23, v22, (unsigned int *)v250);
                  sub_B9B7D0(a1 + 19, &i);
                  v16 = v202;
                  goto LABEL_13;
                }
              }
            }
            if ( *((_BYTE *)a1 + 32) )
            {
              v48 = *((_QWORD *)v11 + 3);
              v49 = v11[4];
              if ( v48 && *(char *)(v48 + 53) < 0 )
              {
                v219 = v11;
                sub_B39E50(v48, *a1);
                v11 = v219;
              }
              v50 = *(_QWORD *)(a1[5] + 8LL * v49);
              if ( v50 )
              {
                v51 = a1[17];
                if ( (!v51 || v49 >= *(_DWORD *)(v51 - 4) || !*(_DWORD *)(v51 + 4LL * v49))
                  && !*(_WORD *)(v50 + 4)
                  && (*(_BYTE *)(v50 + 30) & 1) != 0 )
                {
                  v207 = v11;
                  v52 = sub_B9B440(a1, v49, *(double *)a4.m128_u64, a5, a6);
                  v11 = v207;
                  v53 = v52;
                  v54 = *((_QWORD *)v207 + 3);
                  v55 = *(unsigned __int8 *)(v54 + 53);
                  v56 = *(_BYTE *)(v54 + 53);
                  if ( v53 == v55 )
                  {
                    v57 = v207[4];
                    if ( (v55 & 0x80u) != 0 )
                    {
                      sub_B39E50(*((_QWORD *)v207 + 3), *a1);
                      v56 = *(_BYTE *)(v54 + 53);
                      v11 = v207;
                    }
                    v205 = v11;
                    v58 = (1LL << v56) | (1LL << sub_B9B440(a1, v57, *(double *)a4.m128_u64, a5, a6));
                    v59 = sub_180C100(*(_QWORD *)(a1[2] + 16), 32);
                    *(_QWORD *)(v59 + 24) = v58;
                    v60 = (char *)v59;
                    *(_DWORD *)v59 = 24;
                    *(_QWORD *)(v59 + 8) = 0;
                    *(_DWORD *)(v59 + 16) = v57;
                    LODWORD(v250[0]) = 1;
                    sub_B9B6D0(a1 + 17, v57, (unsigned int *)v250);
                    v250[0] = v60;
                    v61 = a1 + 19;
                    goto LABEL_184;
                  }
                }
              }
            }
            goto LABEL_12;
          case 23:
            v36 = (unsigned int)v11[4];
            v37 = *(_QWORD *)(a1[5] + 8 * v36);
            v38 = v11[4];
            if ( !v37 )
              goto LABEL_12;
            if ( *(_WORD *)(v37 + 4) || (*(_BYTE *)(v37 + 30) & 1) != 0 )
              goto LABEL_36;
            v161 = (unsigned int)v36;
            v218 = v11;
            v162 = sub_B9B440(a1, v36, *(double *)a4.m128_u64, a5, a6);
            v11 = v218;
            v38 = v218[4];
            if ( (*((_QWORD *)v218 + 3) & (1LL << v162)) != 0 )
            {
              if ( (unsigned int)sub_17E8DF0(v218 + 6, v161, *((_QWORD *)v218 + 3) & (1LL << v162)) == 1 )
                LODWORD(v250[0]) = 2;
              else
                LODWORD(v250[0]) = 1;
              sub_B9B6D0(a1 + 17, v38, (unsigned int *)v250);
              v35 = v218;
              goto LABEL_32;
            }
            v36 = v38;
            v37 = *(_QWORD *)(a1[5] + 8LL * v38);
            if ( !v37 )
              goto LABEL_12;
LABEL_36:
            v39 = a1[17];
            if ( v39 && v38 < *(_DWORD *)(v39 - 4) && *(_DWORD *)(v39 + 4 * v36)
              || *(_WORD *)(v37 + 4)
              || (*(_BYTE *)(v37 + 30) & 1) != 0 )
            {
LABEL_12:
              v201 = v11;
              sub_B9B7D0(a1 + 20, &i);
              v16 = v201;
              goto LABEL_13;
            }
            v205 = v11;
            v40 = sub_B9B270((_QWORD *)a1[3], *(int **)(v37 + 16));
            LODWORD(v250[0]) = 1;
            sub_B9B6D0(a1 + 17, v38, (unsigned int *)v250);
            v41 = v205 + 6;
            v43 = sub_17E8DF0(v205 + 6, v38, v42);
            v44 = a1[2];
            v45 = 1LL << v40;
            if ( v43 > 1 )
            {
              v46 = *(_QWORD **)(v44 + 8);
              v223 = v205;
              v206 = *((_QWORD *)v205 + 3);
              v47 = sub_180C100(v46 + 2, 24);
              *(_QWORD *)v47 = off_1C56EA8;
              *(_QWORD *)(v47 + 8) = v41;
              *(_QWORD *)(v47 + 16) = v206;
              v250[0] = (char *)v47;
              sub_B9B610(v46, v250);
              v35 = v223;
              *((_QWORD *)v223 + 3) |= v45;
LABEL_32:
              v204 = v35;
              sub_B9B7D0(a1 + 19, &i);
              v16 = v204;
              goto LABEL_13;
            }
            v159 = *((_QWORD *)v205 + 3) | v45;
            v160 = sub_180C100(*(_QWORD *)(v44 + 16), 32);
            v61 = a1 + 19;
            *(_DWORD *)v160 = 23;
            *(_QWORD *)(v160 + 8) = 0;
            *(_DWORD *)(v160 + 16) = v38;
            *(_QWORD *)(v160 + 24) = v159;
            v250[0] = (char *)v160;
LABEL_184:
            sub_B9B7D0(v61, v250);
            sub_B9B7D0(a1 + 20, &i);
            v16 = v205;
LABEL_13:
            v17 = *((_DWORD **)v16 + 1);
            v13 = v16;
            i = v17;
            if ( !v17 )
            {
              result = (_DWORD *)a1[20];
              a2 = v233;
              v62 = (__int64)a1;
              if ( !result )
                return result;
              goto LABEL_58;
            }
            v11 = v17;
            v12 = *v17;
            if ( (unsigned int)(v12 - 26) <= 1 )
              goto LABEL_15;
            break;
          case 24:
            v20 = *(_QWORD *)(a1[5] + 8LL * (unsigned int)v11[4]);
            if ( !v20 )
              goto LABEL_12;
            if ( *(_WORD *)(v20 + 4) )
              goto LABEL_12;
            if ( (*(_BYTE *)(v20 + 30) & 1) == 0 )
              goto LABEL_12;
            v202 = v11;
            v21 = sub_B9B440(a1, v11[4], *(double *)a4.m128_u64, a5, a6);
            v11 = v202;
            if ( (*((_QWORD *)v202 + 3) & (1LL << v21)) == 0 )
              goto LABEL_12;
            v22 = v202[4];
            LODWORD(v250[0]) = 2;
            v23 = a1 + 17;
            goto LABEL_28;
          default:
            goto LABEL_12;
        }
      }
    }
LABEL_15:
    v18 = a1[20];
    a2 = v233;
    if ( !v18 )
    {
      v237 = 0;
      v19 = v11;
      goto LABEL_84;
    }
    if ( *(_DWORD *)(v18 - 4) )
    {
      v63 = v11;
      v62 = (__int64)a1;
      goto LABEL_59;
    }
    v237 = 0;
    v19 = v11;
LABEL_84:
    v243 = v11;
    v98 = (unsigned int *)a1[18];
    v99 = 0;
    v244 = v13;
    v242 = nullptr;
LABEL_85:
    v100 = *((_QWORD *)v19 + 1);
    if ( v98 )
      break;
    if ( v100 )
      goto LABEL_87;
    if ( (unsigned int)++v99 > 0x40 )
      goto LABEL_148;
LABEL_104:
    v19 = *((_DWORD **)v19 + 2);
    if ( v19 )
      goto LABEL_85;
    a2 = v242;
    v110 = v244;
    if ( !v242 )
    {
      v111 = v243;
      v62 = (__int64)a1;
      goto LABEL_149;
    }
  }
  *(v98 - 1) = 0;
  v101 = 0;
  if ( !v100 )
    goto LABEL_155;
LABEL_87:
  v231 = v19;
  v102 = v100;
  v101 = 0;
  v236 = v99;
  v103 = 0;
  do
  {
    if ( (unsigned int)(*(_DWORD *)v102 - 26) <= 1 )
    {
      v19 = v231;
      v99 = v236;
      v98 = (unsigned int *)a1[18];
      if ( v103 > 4 )
        goto LABEL_96;
      v105 = *(_DWORD *)v102 != 26;
      if ( v98 )
      {
        v106 = &v98[*(v98 - 1)];
        if ( v106 != v98 )
        {
LABEL_98:
          v107 = a1[5];
          v108 = v98;
          do
          {
            v109 = *v108++;
            *(_QWORD *)(v107 + 8 * v109) = 0;
          }
          while ( v108 != v106 );
        }
      }
      if ( v105 )
        goto LABEL_101;
LABEL_102:
      if ( v237 < v101 )
      {
        v237 = v101;
        v242 = v19;
      }
      goto LABEL_104;
    }
    ++v103;
    switch ( *(_DWORD *)v102 )
    {
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
        v104 = *(_QWORD *)(a1[5] + 8LL * *(unsigned int *)(v102 + 28));
        if ( !v104 )
          goto LABEL_94;
        if ( *(_WORD *)(v104 + 4) )
          goto LABEL_94;
        if ( (*(_BYTE *)(v104 + 30) & 1) != 0 )
          goto LABEL_94;
        if ( *(_QWORD *)(v102 + 16) != *(_QWORD *)(v104 + 16) )
          goto LABEL_94;
        v136 = *(unsigned __int16 *)(v102 + 24);
        if ( *(_DWORD *)(v104 + 24) != v136 )
          goto LABEL_94;
        v137 = *(_DWORD *)(v102 + 32);
        v101 += 4;
        if ( !*(_WORD *)(v102 + 24) )
          goto LABEL_94;
        v241 = v102;
        v138 = (__int64 *)(v104 + 32);
        v139 = v137 + 1;
        v140 = (_QWORD *)a1[5];
        v245 = v103;
        v141 = *v138;
        v227 = v137 + v136;
        v142 = v137;
        v239 = v101;
        if ( v140 )
          goto LABEL_160;
        break;
      case 0x15:
        v127 = a1[5];
        v128 = *(_QWORD *)(v127 + 8LL * *(unsigned int *)(v102 + 16));
        if ( v128 && v128 == *(_QWORD *)(v127 + 8LL * *(unsigned int *)(v102 + 20)) )
          goto LABEL_119;
        goto LABEL_94;
      case 0x16:
        v119 = *(unsigned int **)(a1[5] + 8LL * *(unsigned int *)(v102 + 16));
        if ( v119 )
        {
          if ( !*((_WORD *)v119 + 2) && (*((_BYTE *)v119 + 30) & 1) != 0 )
          {
            v120 = *a1;
            v213 = v101;
            v121 = *(_QWORD *)(v102 + 24);
            v122 = sub_952CC0(*(__int64 **)(*a1 + 7472), a1[9]);
            sub_B6F6E0(v120, (__int64)v119, 0, v122, *(double *)a4.m128_u64, a5, a6);
            v101 = v213;
            if ( *(_QWORD *)(v121 + 8) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v120 + 8656) + 8LL * *v119) + 8LL) )
              goto LABEL_119;
          }
        }
        if ( *((_BYTE *)a1 + 32) )
        {
          v129 = *(_QWORD *)(v102 + 24);
          v130 = *(_DWORD *)(v102 + 16);
          if ( v129 && *(char *)(v129 + 53) < 0 )
          {
            v217 = v101;
            sub_B39E50(v129, *a1);
            v101 = v217;
          }
          v131 = *(_QWORD *)(a1[5] + 8LL * v130);
          if ( v131 )
          {
            v132 = a1[17];
            if ( (!v132 || v130 >= *(_DWORD *)(v132 - 4) || !*(_DWORD *)(v132 + 4LL * v130))
              && !*(_WORD *)(v131 + 4)
              && (*(_BYTE *)(v131 + 30) & 1) != 0 )
            {
              v101 += sub_B9B440(a1, v130, *(double *)a4.m128_u64, a5, a6) == *(unsigned __int8 *)(*(_QWORD *)(v102 + 24)
                                                                                                 + 53LL);
            }
          }
        }
        goto LABEL_94;
      case 0x17:
        v123 = *(unsigned int *)(v102 + 16);
        v124 = *(_QWORD *)(a1[5] + 8 * v123);
        v125 = *(_DWORD *)(v102 + 16);
        if ( !v124 )
          goto LABEL_94;
        if ( *(_WORD *)(v124 + 4) || (*(_BYTE *)(v124 + 30) & 1) != 0 )
          goto LABEL_123;
        v214 = v101;
        v135 = sub_B9B270((_QWORD *)a1[3], *(int **)(v124 + 16));
        v101 = v214;
        if ( (*(_QWORD *)(v102 + 24) & (1LL << v135)) != 0 )
        {
LABEL_119:
          v101 += 2;
        }
        else
        {
          v123 = *(unsigned int *)(v102 + 16);
          v124 = *(_QWORD *)(a1[5] + 8 * v123);
          v125 = *(_DWORD *)(v102 + 16);
          if ( v124 )
          {
LABEL_123:
            v126 = a1[17];
            if ( (!v126 || v125 >= *(_DWORD *)(v126 - 4) || !*(_DWORD *)(v126 + 4 * v123)) && !*(_WORD *)(v124 + 4) )
              v101 += (*(_BYTE *)(v124 + 30) & 1) == 0;
          }
        }
        goto LABEL_94;
      case 0x18:
        v112 = *(unsigned int **)(a1[5] + 8LL * *(unsigned int *)(v102 + 16));
        if ( v112 && !*((_WORD *)v112 + 2) && (*((_BYTE *)v112 + 30) & 1) != 0 )
        {
          v113 = *a1;
          v212 = v101;
          v114 = sub_952CC0(*(__int64 **)(*a1 + 7472), a1[9]);
          sub_B6F6E0(v113, (__int64)v112, 0, v114, *(double *)a4.m128_u64, a5, a6);
          v115 = *v112;
          v101 = v212;
          v116 = *(_QWORD *)(v113 + 8656);
          v117 = *(_QWORD *)(v116 + 8 * v115);
          v118 = *(_BYTE *)(v117 + 53);
          if ( v118 < 0 )
          {
            sub_B39E50(*(_QWORD *)(v116 + 8 * v115), *a1);
            v118 = *(_BYTE *)(v117 + 53);
            v101 = v212;
          }
          if ( (*(_QWORD *)(v102 + 24) & (1LL << v118)) != 0 )
            v101 += 2;
        }
        goto LABEL_94;
      default:
        goto LABEL_94;
    }
LABEL_174:
    if ( !v139 )
      goto LABEL_169;
    v143 = 0;
    v153 = (_QWORD *)sub_186B270(0x18u);
    v215 = v141;
    v140 = v153 + 1;
    *v153 = 2;
    a1[5] = (__int64)(v153 + 1);
LABEL_166:
    while ( 1 )
    {
      v147 = *((_DWORD *)v140 - 2);
      if ( v147 >= v139 )
        break;
      v144 = (3 * v147 + 1) >> 1;
      v145 = 8 * v144 + 8;
      if ( 8 * v147 + 8 >= (unsigned int)v145 || v147 >= v144 )
        goto LABEL_230;
      v146 = (unsigned int *)sub_186B300(v140 - 1, v145);
      v140 = v146 + 2;
      *v146 = v144;
      a1[5] = (__int64)(v146 + 2);
    }
    *((_DWORD *)v140 - 1) = v139;
    v141 = v215;
    v148 = 8LL * v143;
    v149 = 8LL * v139;
    if ( v148 != v149 )
    {
      v216 = v140;
      memset(&v140[(unsigned __int64)v148 / 8], 0, v149 - v148);
      v140 = v216;
    }
    while ( 1 )
    {
LABEL_169:
      v150 = (unsigned int *)a1[18];
      v140[v142] = v141;
      if ( v150 )
      {
        v151 = *(v150 - 1);
        if ( (_DWORD)v151 == *(v150 - 2) )
        {
          v154 = (unsigned int)(3 * v151 + 1) >> 1;
          v155 = 4 * v154 + 8;
          if ( 4 * (int)v151 + 8 >= (unsigned int)v155 || (unsigned int)v151 >= v154 )
            goto LABEL_230;
          v156 = (unsigned int *)sub_186B300(v150 - 2, v155);
          v150 = v156 + 2;
          *v156 = v154;
          v157 = v156[1];
          a1[18] = (__int64)v150;
          v152 = &v150[v157];
        }
        else
        {
          v152 = &v150[v151];
        }
      }
      else
      {
        v158 = (_QWORD *)sub_186B270(0x10u);
        v150 = (unsigned int *)(v158 + 1);
        *v158 = 2;
        v152 = v150;
        a1[18] = (__int64)v150;
      }
      *v152 = v142;
      ++v138;
      ++*(v150 - 1);
      if ( v227 == v139 )
        break;
      v140 = (_QWORD *)a1[5];
      ++v139;
      v141 = *v138;
      v142 = v139 - 1;
      if ( !v140 )
        goto LABEL_174;
LABEL_160:
      v143 = *((_DWORD *)v140 - 1);
      if ( v142 >= v143 )
      {
        if ( v143 < v139 )
        {
          v215 = v141;
          goto LABEL_166;
        }
        *((_DWORD *)v140 - 1) = v139;
      }
    }
    v101 = v239;
    v103 = v245;
    v102 = v241;
LABEL_94:
    v102 = *(_QWORD *)(v102 + 8);
  }
  while ( v102 );
  v19 = v231;
  v99 = v236;
  v98 = (unsigned int *)a1[18];
  if ( v103 > 4 )
  {
LABEL_96:
    if ( v98 )
    {
      v105 = 0;
      v106 = &v98[*(v98 - 1)];
      if ( v98 != v106 )
        goto LABEL_98;
    }
    goto LABEL_102;
  }
  if ( v98 )
  {
LABEL_155:
    v105 = 1;
    v106 = &v98[*(v98 - 1)];
    if ( v98 != v106 )
      goto LABEL_98;
  }
LABEL_101:
  if ( (unsigned int)++v99 <= 0x40 )
    goto LABEL_102;
LABEL_148:
  v111 = v243;
  v110 = v244;
  v62 = (__int64)a1;
LABEL_149:
  v133 = sub_180C100(*(_QWORD *)(*(_QWORD *)(v62 + 16) + 16LL), 24);
  *(_DWORD *)v133 = 26;
  v134 = v133;
  *(_QWORD *)(v133 + 8) = 0;
  *(_QWORD *)(v133 + 16) = v111;
  ++*(_DWORD *)(v62 + 96);
  if ( !*(_BYTE *)(v62 + 100) )
  {
    v189 = v110[1];
    v190 = *(_QWORD **)(*(_QWORD *)(v62 + 16) + 8LL);
    v191 = (_QWORD *)sub_180C100(v190 + 2, 24);
    *v191 = off_1C57AF8;
    v191[1] = v110 + 1;
    v192 = (_QWORD *)*v190;
    v191[2] = v189;
    if ( v192 )
    {
      v193 = *((_DWORD *)v192 - 1);
      if ( v193 == *((_DWORD *)v192 - 2) )
      {
        v196 = (3 * v193 + 1) >> 1;
        v197 = 8 * v196 + 8;
        if ( 8 * v193 + 8 >= v197 || v193 >= v196 )
          goto LABEL_230;
        v198 = (unsigned int *)sub_186B300(v192 - 1, v197);
        v192 = v198 + 2;
        v199 = v198[1];
        *v190 = v198 + 2;
        *v198 = v196;
        LODWORD(v198) = v199;
        v67 = (__int64)&v192[v199];
        v195 = (_DWORD)v198 + 1;
      }
      else
      {
        v194 = v193;
        v195 = v193 + 1;
        v67 = (__int64)&v192[v194];
      }
    }
    else
    {
      v200 = (_QWORD *)sub_186B270(0x18u);
      v195 = 1;
      *v200 = 2;
      v192 = v200 + 1;
      *v190 = v192;
      v67 = (__int64)v192;
    }
    *(_QWORD *)v67 = v191;
    *((_DWORD *)v192 - 1) = v195;
  }
  v110[1] = v134;
  v91 = a3;
  v92 = v134;
  return sub_B9F490(v62, v92, v91, a4, a5, a6, v67, v68, v69);
}

