unsigned __int64 __fastcall sub_865160(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r14
  __int64 v3; // rbx
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 *i; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  char v10; // bp
  __int64 v11; // rax
  unsigned int *v13; // r12
  __int64 v14; // r15
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 *nn; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rbp
  int v22; // r15d
  int v23; // r12d
  _QWORD *v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  unsigned int *v27; // rbp
  __int64 v28; // r15
  unsigned int *v29; // rdi
  __int64 v30; // r12
  _QWORD *v31; // rax
  __int64 v32; // r12
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // rdx
  unsigned int *v37; // r12
  _QWORD *v38; // rbp
  __int64 v39; // r15
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 *v42; // rcx
  __int64 v43; // rdx
  unsigned int *v44; // r12
  __int64 v45; // r9
  int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __m128 *v50; // rax
  __m128 *v51; // rax
  __int64 v52; // r9
  __int64 v53; // rbp
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // r12
  unsigned int *v57; // rbp
  unsigned int *v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rdi
  bool v61; // cc
  unsigned int *v62; // rbp
  __int64 v63; // r9
  unsigned int *v64; // r12
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  __m128 *v68; // rax
  __m128 *v69; // rax
  _QWORD *v70; // rbp
  _QWORD *v71; // rax
  __int64 *k; // rcx
  __int64 v73; // rdx
  unsigned int *v74; // rdi
  int v75; // eax
  __int64 v76; // r15
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 *j; // rcx
  __int64 v80; // rdx
  unsigned int *v81; // r12
  int v82; // eax
  __int64 v83; // rbp
  unsigned int *v84; // rdi
  _QWORD *v85; // rax
  __int64 *i1; // rcx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rcx
  __m128 *v91; // rax
  __m128 *v92; // rax
  _QWORD *v93; // rbp
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rcx
  __m128 *v97; // rax
  __m128 *v98; // rax
  _QWORD *v99; // rax
  int v100; // eax
  unsigned int *v101; // rbp
  int v102; // r12d
  unsigned int *v103; // r15
  unsigned int *v104; // rdi
  _QWORD *v105; // r12
  _QWORD *v106; // rax
  __int64 *i2; // rcx
  __int64 v108; // rdx
  int v109; // r15d
  _QWORD *v110; // rax
  _QWORD *v111; // r12
  __int64 v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  __int64 *v116; // rdx
  _QWORD *v117; // rcx
  bool m; // si
  __int64 v119; // rax
  _QWORD *v120; // rax
  unsigned int *v121; // rbp
  unsigned int *v122; // rdi
  _QWORD *v123; // r15
  _QWORD *v124; // rbp
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  __int64 v128; // rbp
  __int64 v129; // rdx
  __int64 v130; // rax
  __int64 v131; // rcx
  __m128 *v132; // rax
  __m128 *v133; // rax
  _QWORD *v134; // rax
  _QWORD *v135; // rax
  __int64 *ii; // rcx
  __int64 v137; // rdx
  __int64 v138; // r12
  _QWORD *v139; // rax
  _QWORD *v140; // rax
  unsigned int *v141; // rbp
  __int64 v142; // r12
  _QWORD *v143; // rax
  _QWORD *v144; // rax
  unsigned __int64 *v145; // rdx
  _QWORD *v146; // rcx
  unsigned __int64 v147; // rax
  __int64 v148; // r12
  _QWORD *v149; // rax
  _QWORD *v150; // rax
  __int64 *v151; // rdx
  _QWORD *v152; // rcx
  bool v153; // si
  __int64 v154; // rax
  __int64 v155; // r12
  _QWORD *v156; // rax
  _QWORD *v157; // rax
  __int64 *v158; // rdx
  _QWORD *v159; // rcx
  bool jj; // si
  __int64 v161; // rax
  __int16 v162; // bp
  int v163; // ebp
  int v164; // eax
  __int64 v165; // rdx
  __int64 v166; // rax
  __int64 v167; // rcx
  __m128 *v168; // rax
  __m128 *v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rax
  __int64 v172; // rcx
  __m128 *v173; // rax
  __m128 *v174; // rax
  __int64 v175; // r12
  _QWORD *v176; // rax
  _QWORD *v177; // rax
  __int64 *v178; // rdx
  _QWORD *v179; // rcx
  bool v180; // si
  __int64 v181; // rax
  __m128 *v182; // rax
  _QWORD *v183; // r12
  _QWORD *v184; // rax
  _QWORD *v185; // rax
  unsigned __int64 *v186; // rdx
  _QWORD *v187; // rcx
  bool kk; // si
  unsigned __int64 v189; // rax
  _QWORD *v190; // rax
  __int64 v191; // rdx
  __int64 v192; // rax
  __int64 v193; // rcx
  __m128 *v194; // rax
  __m128 *v195; // rax
  __m128 v196; // xmm0
  __int64 v197; // r12
  _QWORD *v198; // rax
  _QWORD *v199; // rax
  unsigned __int64 *v200; // rdx
  _QWORD *v201; // rcx
  bool mm; // si
  unsigned __int64 v203; // rax
  __int64 v204; // r12
  _QWORD *v205; // rax
  _QWORD *v206; // rax
  _QWORD *v207; // rax
  __int64 *v208; // rdx
  _QWORD *v209; // rcx
  bool n; // si
  __int64 v211; // rax
  unsigned int *v212; // r12
  unsigned int *v213; // rdi
  __int64 v214; // r12
  _QWORD *v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rax
  __int64 v218; // rcx
  __m128 *v219; // rax
  __m128 *v220; // rax
  __int64 v221; // [rsp+8h] [rbp-D0h]
  int v222; // [rsp+10h] [rbp-C8h]
  _QWORD *v223; // [rsp+10h] [rbp-C8h]
  __int64 v224; // [rsp+10h] [rbp-C8h]
  unsigned __int8 *v225; // [rsp+18h] [rbp-C0h]
  unsigned __int8 v226; // [rsp+18h] [rbp-C0h]
  __int64 v227; // [rsp+18h] [rbp-C0h]
  __int64 v228; // [rsp+18h] [rbp-C0h]
  _QWORD *v229; // [rsp+18h] [rbp-C0h]
  char v230; // [rsp+20h] [rbp-B8h]
  unsigned __int8 v231; // [rsp+28h] [rbp-B0h]
  char v232; // [rsp+3Eh] [rbp-9Ah] BYREF
  unsigned __int8 v233; // [rsp+3Fh] [rbp-99h] BYREF
  int v234; // [rsp+40h] [rbp-98h] BYREF
  int v235; // [rsp+44h] [rbp-94h] BYREF
  unsigned __int64 *v236; // [rsp+48h] [rbp-90h] BYREF
  _OWORD v237[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v238; // [rsp+80h] [rbp-58h]
  __int64 v239; // [rsp+88h] [rbp-50h]
  unsigned __int64 v240; // [rsp+98h] [rbp-40h]

  v2 = *(unsigned int **)a1;
  v3 = *(_QWORD *)(a1 + 64);
  v240 = __readfsqword(0x28u);
  if ( a2 )
  {
    v221 = v3;
    v5 = a2;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_3:
        if ( *(_QWORD *)(v5 + 8) )
        {
          v6 = sub_845240((__int64)v2);
          for ( i = *(__int64 **)(v5 + 8); i; i = (__int64 *)i[1] )
          {
            v8 = *i;
            if ( *i && v6 )
            {
              *(_QWORD *)(v8 + 16) &= ~1uLL;
              *(_QWORD *)(v8 + 24) = v6;
            }
          }
        }
        v9 = *(_QWORD *)(v5 + 32);
        v10 = *(_BYTE *)v9;
        if ( *(_BYTE *)v9 > 0x91u )
          break;
        if ( v10 < 0 )
        {
          v11 = 1LL << (v10 + 0x80);
          if ( (v11 & 0x16BF0) != 0 )
          {
LABEL_104:
            sub_867640(a1, v5);
            v5 = *(_QWORD *)v5;
            if ( !v5 )
              goto LABEL_17;
          }
          else if ( (v11 & 0x29400) != 0 )
          {
            v64 = *(unsigned int **)a1;
            if ( *(int *)(v5 + 44) < 0 )
            {
LABEL_146:
              if ( v10 == -116 || v10 == -111 )
              {
                v162 = *(_WORD *)(v9 + 3);
                sub_847F60(v64, 32, 1, 0, 140, 0);
                v163 = 16 * (unsigned __int16)__ROL2__(v162, 8);
                sub_847F60(v64, 32, 4, 0, 140, 8);
                sub_847F60(v64, 32, 142, v163 + *(_DWORD *)(a1 + 76), 1, 0);
                if ( *(_DWORD *)(a1 + 116) )
                  sub_847F60(v64, 32, 1, 0, 140, 16);
                sub_847F60(v64, 32, 142, v163 + *(_DWORD *)(a1 + 76) + 8, 4, 0);
                v164 = *(_DWORD *)(a1 + 116);
                if ( v164 )
                  sub_847F60(v64, 32, 142, v164, 1, 0);
              }
              v78 = sub_845240((__int64)v64);
              for ( j = *(__int64 **)(v5 + 24); j; j = (__int64 *)j[1] )
              {
                v80 = *j;
                if ( *j && v78 )
                {
                  *(_QWORD *)(v80 + 16) &= ~1uLL;
                  *(_QWORD *)(v80 + 24) = v78;
                }
              }
              v81 = *(unsigned int **)a1;
              v82 = *(_DWORD *)(v5 + 48);
              v83 = 8 * v82;
              if ( !**(_DWORD **)a1 )
              {
                v84 = *(unsigned int **)a1;
                v81[36] = 0;
                if ( (unsigned int)sub_848C40(v84, 12, 0, 12, 0, 127, 8 * v82) == 4 )
                  sub_8498A0(v81, 0x5030100u, 12, 0, 12, 0, 127, v83);
              }
              goto LABEL_16;
            }
LABEL_125:
            sub_847F60(v64, 32, 12, 0, 142, *(int *)(v5 + 40));
            sub_8452F0((__int64)v64, 37);
            if ( !*v64 )
            {
              v65 = *((_QWORD *)v64 + 10);
              v66 = *(_QWORD *)(v65 + 8);
              v67 = v66 + 16;
              if ( (unsigned __int64)(v66 + 16) <= 0xFF0 )
              {
                v69 = (__m128 *)(v65 + v66 + 16);
                *(_QWORD *)(v65 + 8) = v67;
                if ( !v69 )
                  goto LABEL_130;
              }
              else
              {
                v68 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v64 + 7))(
                                  4096,
                                  *(_QWORD *)(*((_QWORD *)v64 + 7) + 16LL));
                if ( !v68 )
                {
                  *v64 = 2;
                  goto LABEL_130;
                }
                v68->m128_u64[0] = *((_QWORD *)v64 + 10);
                *((_QWORD *)v64 + 10) = v68;
                v69 = v68 + 1;
                v69[-1].m128_u64[1] = 16;
              }
              *v69 = _mm_loadh_ps((const double *)(a1 + 400));
              *(_QWORD *)(a1 + 400) = v69;
            }
LABEL_130:
            sub_849F80(v64, 0x40u, 12, 0, 12, 0, 0x7Fu, 8LL * (*(_DWORD *)(v5 + 44) - 1));
            if ( *(_QWORD *)(v5 + 24) )
            {
              v70 = sub_8452F0((__int64)v64, 36);
              v71 = sub_845240((__int64)v64);
              for ( k = *(__int64 **)(v5 + 24); k; k = (__int64 *)k[1] )
              {
                v73 = *k;
                if ( *k && v71 )
                {
                  *(_QWORD *)(v73 + 16) &= ~1uLL;
                  *(_QWORD *)(v73 + 24) = v71;
                }
              }
              v74 = *(unsigned int **)a1;
              v75 = *(_DWORD *)(v5 + 48);
              v76 = 8 * v75;
              if ( !**(_DWORD **)a1 )
              {
                v74[36] = 0;
                if ( (unsigned int)sub_848C40(v74, 12, 0, 12, 0, 127, 8 * v75) == 4 )
                  sub_8498A0(v74, 0x5030100u, 12, 0, 12, 0, 127, v76);
              }
              v77 = sub_845240((__int64)v64);
              if ( v70 && v77 )
              {
                v70[2] &= ~1uLL;
                v70[3] = v77;
              }
            }
            sub_847F60(v64, 32, 142, *(int *)(v5 + 40), 140, 8 * ~*(_DWORD *)(v5 + 44));
            v5 = *(_QWORD *)v5;
            if ( !v5 )
              goto LABEL_17;
          }
          else
          {
            if ( (v11 & 0xF) == 0 )
              goto LABEL_16;
            sub_84F710(a1, v5);
            v5 = *(_QWORD *)v5;
            if ( !v5 )
              goto LABEL_17;
          }
        }
        else if ( (unsigned __int8)v10 <= 0x6Du )
        {
          if ( v10 != 3 )
          {
            if ( (unsigned __int8)(v10 - 33) <= 0x40u )
            {
LABEL_31:
              v19 = *(_QWORD *)(a1 + 24);
              v20 = v9 - *(_QWORD *)(a1 + 16);
              v21 = *(_QWORD *)a1;
              v234 = 0;
              v236 = nullptr;
              v22 = *(_DWORD *)(v19 + 4 * v20);
              v222 = v22 + 8;
              v225 = sub_845700((_BYTE *)v9, &v232, &v233, &v234, &v235, v237);
              v23 = v22 == 0 ? 140 : 142;
              switch ( v232 )
              {
                case '!':
                case '\'':
                  if ( v233 != 22 )
                  {
                    if ( *(_DWORD *)(v5 + 56) )
                    {
                      v226 = v233;
                      sub_847F60((unsigned int *)v21, 32, 2, 0, v23, v22);
                      sub_847F60((unsigned int *)v21, 32, 4, 0, v23, v222);
                      v223 = sub_84A700((unsigned int *)v21, 5, 2, 0, 4, 0);
                      v111 = sub_845240(v21);
                      if ( v226 == 17 )
                        sub_84D550(*(unsigned int **)a1);
                      sub_849F80(*(unsigned int **)a1, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
                      sub_847F60((unsigned int *)v21, 33, 1, 0, 130, 0);
                      v112 = *(unsigned int *)(v5 + 48);
                      if ( (_DWORD)v112 && !*(_DWORD *)v21 )
                      {
                        *(_DWORD *)(v21 + 144) = 0;
                        sub_8498A0((unsigned int *)v21, 0xD0B0908u, 1, 0, 1, 0, 127, v112);
                      }
                      v227 = *(_QWORD *)(v5 + 40);
                      v113 = sub_84A700((unsigned int *)v21, 0, 1, 0, 127, *(unsigned __int8 *)(v5 + 52));
                      if ( v227 && v113 )
                      {
                        v113[2] &= ~1uLL;
                        v113[3] = v227;
                      }
                      v114 = sub_8452F0(v21, 36);
                      if ( v111 && v114 )
                      {
                        v114[2] &= ~1uLL;
                        v114[3] = v111;
                      }
                      v115 = sub_845240(v21);
                      v116 = *(__int64 **)(v5 + 24);
                      v117 = v115;
                      for ( m = v115 != nullptr; v116; v116 = (__int64 *)v116[1] )
                      {
                        v119 = *v116;
                        if ( *v116 && m )
                        {
                          *(_QWORD *)(v119 + 16) &= ~1uLL;
                          *(_QWORD *)(v119 + 24) = v117;
                        }
                      }
                      *(_QWORD *)(v5 + 24) = 0;
                    }
                    else
                    {
                      v231 = v233;
                      v230 = v232;
                      sub_847F60((unsigned int *)v21, 32, 2, 0, v23, v22);
                      if ( v230 == 33 && v235 == 1 )
                      {
                        if ( v231 == 17 )
                        {
                          sub_847F60((unsigned int *)v21, 32, 4, 0, v23, v222);
                          sub_84D550(*(unsigned int **)a1);
                        }
                        sub_849F80(*(unsigned int **)a1, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
                        v223 = sub_84A700((unsigned int *)v21, 5, 2, 0, v23, v222);
                      }
                      else
                      {
                        if ( v231 == 17 )
                        {
                          sub_847F60((unsigned int *)v21, 32, 4, 0, v23, v222);
                          v223 = sub_84A700((unsigned int *)v21, 5, 2, 0, 4, 0);
                          sub_84D550(*(unsigned int **)a1);
                        }
                        else
                        {
                          v223 = sub_84A700((unsigned int *)v21, 5, 2, 0, v23, v222);
                        }
                        sub_849F80(*(unsigned int **)a1, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
                      }
                      sub_847F60((unsigned int *)v21, 32, v23, v22, 2, 0);
                      v175 = *(_QWORD *)(v5 + 40);
                      v176 = sub_8452F0(v21, 36);
                      if ( v175 && v176 )
                      {
                        v176[2] &= ~1uLL;
                        v176[3] = v175;
                      }
                      v177 = sub_845240(v21);
                      v178 = *(__int64 **)(v5 + 24);
                      v179 = v177;
                      if ( v178 )
                      {
                        v180 = v177 != nullptr;
                        do
                        {
                          v181 = *v178;
                          if ( *v178 && v180 )
                          {
                            *(_QWORD *)(v181 + 16) &= ~1uLL;
                            *(_QWORD *)(v181 + 24) = v179;
                          }
                          v178 = (__int64 *)v178[1];
                        }
                        while ( v178 );
                      }
                    }
                    v120 = sub_845240(v21);
                    if ( v223 && v120 )
                    {
                      v223[2] &= ~1uLL;
                      v223[3] = v120;
                    }
                    goto LABEL_221;
                  }
                  v207 = sub_845240(v21);
                  v208 = *(__int64 **)(v5 + 24);
                  v209 = v207;
                  for ( n = v207 != nullptr; v208; v208 = (__int64 *)v208[1] )
                  {
                    v211 = *v208;
                    if ( *v208 && n )
                    {
                      *(_QWORD *)(v211 + 16) &= ~1uLL;
                      *(_QWORD *)(v211 + 24) = v209;
                    }
                  }
                  sub_847F60((unsigned int *)v21, 32, 2, 0, 140, 0);
                  v212 = *(unsigned int **)a1;
                  if ( !**(_DWORD **)a1 )
                  {
                    v213 = *(unsigned int **)a1;
                    v212[36] = 0;
                    if ( (unsigned int)sub_848C40(v213, 12, 0, 12, 0, 127, 8) == 4 )
                      sub_8498A0(v212, 0x5030100u, 12, 0, 12, 0, 127, 8);
                  }
                  v214 = *(_QWORD *)(v5 + 40);
                  v215 = sub_84A700((unsigned int *)v21, 1, 2, 0, 127, 0);
                  if ( v214 && v215 )
                  {
                    v215[2] &= ~1uLL;
                    v215[3] = v214;
                  }
                  goto LABEL_16;
                case '"':
                  sub_847F60((unsigned int *)v21, 32, 2, 0, v23, v22);
                  if ( v235 )
                  {
                    if ( v235 != 1 )
                      sub_847F60((unsigned int *)v21, 32, 3, 0, 127, 1);
                    v142 = *(_QWORD *)(v5 + 40);
                    v143 = sub_8452F0(v21, 36);
                    if ( v143 && v142 )
                    {
                      v143[2] &= ~1uLL;
                      v143[3] = v142;
                    }
                    v144 = sub_845240(v21);
                    v145 = *(unsigned __int64 **)(v5 + 24);
                    v146 = v144;
                  }
                  else
                  {
                    sub_856900(a1, v233, (char *)v225, (double *)&v236, 1);
                    sub_847F60((unsigned int *)v21, 32, v23, v22, 2, 0);
                    v204 = *(_QWORD *)(v5 + 40);
                    v205 = sub_8452F0(v21, 36);
                    if ( v204 && v205 )
                    {
                      v205[2] &= ~1uLL;
                      v205[3] = v204;
                    }
                    v206 = sub_845240(v21);
                    v145 = v236;
                    v146 = v206;
                  }
                  for ( ; v145; v145 = (unsigned __int64 *)v145[1] )
                  {
                    v147 = *v145;
                    if ( *v145 && v146 )
                    {
                      *(_QWORD *)(v147 + 16) &= ~1uLL;
                      *(_QWORD *)(v147 + 24) = v146;
                    }
                  }
                  goto LABEL_255;
                case '%':
                  sub_847F60((unsigned int *)v21, 32, 2, 0, v23, v22);
                  sub_847F60((unsigned int *)v21, 32, v23, v22, 127, 0);
                  v228 = *(_QWORD *)(v5 + 40);
                  v134 = sub_84A700((unsigned int *)v21, 1, 2, 0, 127, 0);
                  if ( v228 && v134 )
                  {
                    v134[2] &= ~1uLL;
                    v134[3] = v228;
                  }
                  v229 = sub_8452F0(v21, 36);
                  v135 = sub_845240(v21);
                  for ( ii = *(__int64 **)(v5 + 24); ii; ii = (__int64 *)ii[1] )
                  {
                    v137 = *ii;
                    if ( *ii && v135 )
                    {
                      *(_QWORD *)(v137 + 16) &= ~1uLL;
                      *(_QWORD *)(v137 + 24) = v135;
                    }
                  }
                  sub_847F60((unsigned int *)v21, 32, 2, 0, v23, v22);
                  sub_847F60((unsigned int *)v21, 32, v23, v22, 127, 0);
                  v138 = *(_QWORD *)(v5 + 40);
                  v139 = sub_8452F0(v21, 36);
                  if ( v138 && v139 )
                  {
                    v139[2] &= ~1uLL;
                    v139[3] = v138;
                  }
                  v140 = sub_845240(v21);
                  if ( v229 && v140 )
                  {
                    v229[2] &= ~1uLL;
                    v229[3] = v140;
                  }
                  goto LABEL_255;
                case '&':
                  sub_847F60((unsigned int *)v21, 32, 2, 0, v23, v22);
                  sub_847F60((unsigned int *)v21, 32, v23, v22, 127, 0);
                  if ( v235 )
                  {
                    if ( v235 != 1 )
                      sub_847F60((unsigned int *)v21, 32, 3, 0, 127, 1);
                    v155 = *(_QWORD *)(v5 + 40);
                    v156 = sub_84A700((unsigned int *)v21, 1, 2, 0, 127, 0);
                    if ( v156 && v155 )
                    {
                      v156[2] &= ~1uLL;
                      v156[3] = v155;
                    }
                    v157 = sub_845240(v21);
                    v158 = *(__int64 **)(v5 + 24);
                    v159 = v157;
                    for ( jj = v157 != nullptr; v158; v158 = (__int64 *)v158[1] )
                    {
                      v161 = *v158;
                      if ( *v158 && jj )
                      {
                        *(_QWORD *)(v161 + 16) &= ~1uLL;
                        *(_QWORD *)(v161 + 24) = v159;
                      }
                    }
                  }
                  else
                  {
                    v183 = sub_84A700((unsigned int *)v21, 0, 2, 0, 127, 0);
                    sub_856900(a1, v233, (char *)v225, (double *)&v236, 1);
                    v224 = *(_QWORD *)(v5 + 40);
                    v184 = sub_8452F0(v21, 36);
                    if ( v184 && v224 )
                    {
                      v184[2] &= ~1uLL;
                      v184[3] = v224;
                    }
                    v185 = sub_845240(v21);
                    v186 = v236;
                    v187 = v185;
                    for ( kk = v185 != nullptr; v186; v186 = (unsigned __int64 *)v186[1] )
                    {
                      v189 = *v186;
                      if ( *v186 && kk )
                      {
                        *(_QWORD *)(v189 + 16) &= ~1uLL;
                        *(_QWORD *)(v189 + 24) = v187;
                      }
                    }
                    v190 = sub_845240(v21);
                    if ( v183 && v190 )
                    {
                      v183[2] &= ~1uLL;
                      v183[3] = v190;
                    }
                  }
LABEL_255:
                  if ( !v22 )
                  {
                    v141 = *(unsigned int **)a1;
                    if ( !**(_DWORD **)a1 )
                    {
                      v141[36] = 0;
                      if ( (unsigned int)sub_848C40(v141, 12, 0, 12, 0, 127, 8) == 4 )
                        sub_8498A0(v141, 0x5030100u, 12, 0, 12, 0, 127, 8);
                    }
                  }
                  goto LABEL_16;
                case '(':
                  sub_847F60((unsigned int *)v21, 32, 1, 0, v23, v222);
                  sub_847F60((unsigned int *)v21, 32, 2, 0, v23, v22);
                  if ( !*(_DWORD *)v21 )
                  {
                    *(_DWORD *)(v21 + 144) = 0;
                    sub_8490A0((unsigned int *)v21, 0x2D2B2928u, 1, 0, 1, 0, 127, 1);
                  }
                  if ( v235 )
                  {
                    if ( v235 != 1 )
                      sub_847F60((unsigned int *)v21, 32, 3, 0, 127, 1);
                    sub_847F60((unsigned int *)v21, 32, v23, v222, 1, 0);
                    v148 = *(_QWORD *)(v5 + 40);
                    v149 = sub_8452F0(v21, 1);
                    if ( v148 && v149 )
                    {
                      v149[2] &= ~1uLL;
                      v149[3] = v148;
                    }
                    v150 = sub_845240(v21);
                    v151 = *(__int64 **)(v5 + 24);
                    v152 = v150;
                    if ( v151 )
                    {
                      v153 = v150 != nullptr;
                      do
                      {
                        v154 = *v151;
                        if ( *v151 && v153 )
                        {
                          *(_QWORD *)(v154 + 16) &= ~1uLL;
                          *(_QWORD *)(v154 + 24) = v152;
                        }
                        v151 = (__int64 *)v151[1];
                      }
                      while ( v151 );
                    }
                    goto LABEL_221;
                  }
                  sub_8452F0(v21, 0);
                  if ( *(_DWORD *)v21 )
                    goto LABEL_366;
                  v191 = *(_QWORD *)(v21 + 80);
                  v192 = *(_QWORD *)(v191 + 8);
                  v193 = v192 + 16;
                  if ( (unsigned __int64)(v192 + 16) <= 0xFF0 )
                  {
                    v195 = (__m128 *)(v191 + v192 + 16);
                    *(_QWORD *)(v191 + 8) = v193;
                    if ( v195 )
                      goto LABEL_365;
                  }
                  else
                  {
                    v194 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v21 + 56))(
                                       4096,
                                       *(_QWORD *)(*(_QWORD *)(v21 + 56) + 16LL));
                    if ( v194 )
                    {
                      v194->m128_u64[0] = *(_QWORD *)(v21 + 80);
                      *(_QWORD *)(v21 + 80) = v194;
                      v195 = v194 + 1;
                      v195[-1].m128_u64[1] = 16;
LABEL_365:
                      v196 = _mm_loadh_ps((const double *)&v236);
                      v236 = (unsigned __int64 *)v195;
                      *v195 = v196;
                      goto LABEL_366;
                    }
                    *(_DWORD *)v21 = 2;
                  }
LABEL_366:
                  sub_847F60((unsigned int *)v21, 32, v23, v222, 1, 0);
                  sub_856900(a1, v233, (char *)v225, (double *)&v236, 1);
                  sub_847F60((unsigned int *)v21, 32, v23, v22, 2, 0);
                  v197 = *(_QWORD *)(v5 + 40);
                  v198 = sub_8452F0(v21, 36);
                  if ( v198 && v197 )
                  {
                    v198[2] &= ~1uLL;
                    v198[3] = v197;
                  }
                  v199 = sub_845240(v21);
                  v200 = v236;
                  v201 = v199;
                  for ( mm = v199 != nullptr; v200; v200 = (unsigned __int64 *)v200[1] )
                  {
                    v203 = *v200;
                    if ( *v200 && mm )
                    {
                      *(_QWORD *)(v203 + 16) &= ~1uLL;
                      *(_QWORD *)(v203 + 24) = v201;
                    }
                  }
LABEL_221:
                  if ( !v22 )
                  {
                    v121 = *(unsigned int **)a1;
                    if ( !**(_DWORD **)a1 )
                    {
                      v122 = *(unsigned int **)a1;
                      v121[36] = 0;
                      if ( (unsigned int)sub_848C40(v122, 12, 0, 12, 0, 127, 16) == 4 )
                        sub_8498A0(v121, 0x5030100u, 12, 0, 12, 0, 127, 16);
                    }
                  }
                  break;
                default:
                  goto LABEL_16;
              }
            }
            goto LABEL_16;
          }
          sub_847F60(v2, 32, 1, 0, 140, 0);
          v62 = *(unsigned int **)a1;
          if ( !**(_DWORD **)a1 )
          {
            v62[36] = 0;
            if ( (unsigned int)sub_848C40(v62, 12, 0, 12, 0, 127, 8) == 4 )
              sub_8498A0(v62, 0x5030100u, 12, 0, 12, 0, 127, 8);
          }
          sub_847F60(v2, 32, 142, *(int *)(a1 + 76), 1, 0);
          v5 = *(_QWORD *)v5;
          if ( !v5 )
            goto LABEL_17;
        }
        else
        {
          switch ( v10 )
          {
            case 'n':
            case 'o':
              goto LABEL_31;
            case 'r':
            case 's':
            case 't':
            case 'u':
              v13 = *(unsigned int **)a1;
              if ( (*(_BYTE *)(v9 + byte_239F9C0[(unsigned __int8)v10]) & 1) != 0 )
              {
                sub_847F60(*(unsigned int **)a1, 32, 2, 0, 140, 0);
                v14 = *(_QWORD *)(v5 + 40);
                v15 = sub_84A700(v13, 1, 2, 0, 127, 0);
                if ( v14 && v15 )
                {
                  v15[2] &= ~1uLL;
                  v15[3] = v14;
                }
                v16 = sub_845240((__int64)v13);
                for ( nn = *(__int64 **)(v5 + 24); nn; nn = (__int64 *)nn[1] )
                {
                  v18 = *nn;
                  if ( *nn && v16 )
                  {
                    *(_QWORD *)(v18 + 16) &= ~1uLL;
                    *(_QWORD *)(v18 + 24) = v16;
                  }
                }
                sub_849F80(
                  *(unsigned int **)a1,
                  0x40u,
                  12,
                  0,
                  12,
                  0,
                  0x7Fu,
                  (-(__int64)((unsigned __int8)(v10 - 114) < 2u) & 0xFFFFFFFFFFFFFFF8LL) + 24);
                v5 = *(_QWORD *)v5;
                if ( !v5 )
                  goto LABEL_17;
              }
              else
              {
                v85 = sub_845240(*(_QWORD *)a1);
                for ( i1 = *(__int64 **)(v5 + 24); i1; i1 = (__int64 *)i1[1] )
                {
                  v87 = *i1;
                  if ( *i1 && v85 )
                  {
                    *(_QWORD *)(v87 + 16) &= ~1uLL;
                    *(_QWORD *)(v87 + 24) = v85;
                  }
                }
                sub_847F60(v13, 32, 2, 0, 140, 0);
                sub_849F80(*(unsigned int **)a1, 0x40u, 12, 0, 12, 0, 0x7Fu, 8);
                v53 = *(_QWORD *)(v5 + 40);
                v54 = sub_84A700(v13, 1, 2, 0, 127, 0);
                if ( !v54 || !v53 )
                  goto LABEL_16;
LABEL_83:
                v54[2] &= ~1uLL;
                v54[3] = v53;
                v5 = *(_QWORD *)v5;
                if ( !v5 )
                  goto LABEL_17;
              }
              break;
            case 'v':
              v27 = *(unsigned int **)a1;
              if ( *(_DWORD *)(v5 + 56) )
              {
                sub_865160(a1, *(_QWORD *)(v5 + 16));
                goto LABEL_46;
              }
              v28 = *(_QWORD *)(v5 + 48);
              v29 = *(unsigned int **)a1;
              v30 = *(_QWORD *)(v28 + 16);
              if ( v30 )
              {
                v31 = sub_8452F0((__int64)v29, 37);
                if ( v31 )
                {
                  v31[2] &= ~1uLL;
                  v31[3] = v30;
                }
              }
              else
              {
                sub_8452F0((__int64)v29, 37);
                if ( *v27 )
                  goto LABEL_43;
                v165 = *((_QWORD *)v27 + 10);
                v166 = *(_QWORD *)(v165 + 8);
                v167 = v166 + 16;
                if ( (unsigned __int64)(v166 + 16) <= 0xFF0 )
                {
                  v169 = (__m128 *)(v165 + v166 + 16);
                  *(_QWORD *)(v165 + 8) = v167;
                  if ( v169 )
                    goto LABEL_311;
                }
                else
                {
                  v168 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v27 + 7))(
                                     4096,
                                     *(_QWORD *)(*((_QWORD *)v27 + 7) + 16LL));
                  if ( v168 )
                  {
                    v168->m128_u64[0] = *((_QWORD *)v27 + 10);
                    *((_QWORD *)v27 + 10) = v168;
                    v169 = v168 + 1;
                    v169[-1].m128_u64[1] = 16;
LABEL_311:
                    *v169 = _mm_loadh_ps((const double *)(v28 + 32));
                    *(_QWORD *)(v28 + 32) = v169;
                    goto LABEL_43;
                  }
                  *v27 = 2;
                }
              }
LABEL_43:
              v32 = *(_QWORD *)(v5 + 40);
              v33 = sub_84A700(v27, 1, 1, 0, 127, 0);
              if ( v32 && v33 )
              {
                v33[2] &= ~1uLL;
                v33[3] = v32;
              }
LABEL_46:
              v34 = sub_845240((__int64)v27);
              v35 = *(__int64 **)(v5 + 24);
              if ( !v35 )
                goto LABEL_16;
              do
              {
                v36 = *v35;
                if ( *v35 && v34 )
                {
                  *(_QWORD *)(v36 + 16) &= ~1uLL;
                  *(_QWORD *)(v36 + 24) = v34;
                }
                v35 = (__int64 *)v35[1];
              }
              while ( v35 );
              v5 = *(_QWORD *)v5;
              if ( !v5 )
                goto LABEL_17;
              continue;
            case 'w':
            case 'x':
              goto LABEL_32;
            case '\x7F':
              v37 = *(unsigned int **)a1;
              sub_847F60(*(unsigned int **)a1, 32, 2, 0, 140, 16);
              v38 = sub_84A700(v37, 3, 2, 0, 140, 24);
              sub_849F80(*(unsigned int **)a1, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
              sub_847F60(v37, 32, 140, 16, 2, 0);
              v39 = *(_QWORD *)(v5 + 40);
              v40 = sub_8452F0((__int64)v37, 36);
              if ( v40 && v39 )
              {
                v40[2] &= ~1uLL;
                v40[3] = v39;
              }
              v41 = sub_845240((__int64)v37);
              if ( v38 && v41 )
              {
                v38[2] &= ~1uLL;
                v38[3] = v41;
              }
              v42 = *(__int64 **)(v5 + 24);
              if ( !v42 )
                goto LABEL_16;
              do
              {
                v43 = *v42;
                if ( *v42 && v41 )
                {
                  *(_QWORD *)(v43 + 16) &= ~1uLL;
                  *(_QWORD *)(v43 + 24) = v41;
                }
                v42 = (__int64 *)v42[1];
              }
              while ( v42 );
              v5 = *(_QWORD *)v5;
              if ( !v5 )
                goto LABEL_17;
              continue;
            default:
              goto LABEL_16;
          }
        }
      }
      switch ( v10 )
      {
        case -110:
          goto LABEL_104;
        case -103:
          v61 = *(_BYTE *)(v9 + 1) <= 0x83u;
          v59 = v5;
          v60 = a1;
          if ( !v61 )
            goto LABEL_99;
          sub_84F710(a1, v5);
          v5 = *(_QWORD *)v5;
          if ( !v5 )
            goto LABEL_17;
          goto LABEL_3;
        case -102:
          *(_QWORD *)(v5 + 24) = 0;
          *(_OWORD *)(v5 + 8) = 0;
          if ( *(_BYTE *)(v9 + 1) <= 0x83u )
          {
            v238 = 0;
            v237[2] = v9;
            memset(v237, 0, 32);
            v239 = *(_QWORD *)(v5 + 40);
            sub_85F700((int **)a1, (char *)v9, (__int64)v237, 0);
            v5 = *(_QWORD *)v5;
            if ( !v5 )
              goto LABEL_17;
          }
          else
          {
            sub_861900(a1, (unsigned __int8 *)v9, v5);
            if ( **(_DWORD **)a1 )
              goto LABEL_16;
            v59 = *(_QWORD *)(v5 + 16);
            v60 = a1;
LABEL_99:
            sub_867640(v60, v59);
            v5 = *(_QWORD *)v5;
            if ( !v5 )
            {
LABEL_17:
              v3 = v221;
              goto LABEL_18;
            }
          }
          goto LABEL_3;
        case -101:
          v64 = *(unsigned int **)a1;
          if ( *(int *)(v5 + 44) >= 0 )
            goto LABEL_125;
          v10 = *(_BYTE *)++v9;
          goto LABEL_146;
        case -100:
          sub_847F60(v2, 32, 1, 0, 140, 32LL * (*(_DWORD *)(a1 + 184) != 0));
          if ( *(_DWORD *)(a1 + 184) && (sub_847F60(v2, 32, 4, 0, 140, 0), *(_DWORD *)(a1 + 184)) )
            v56 = 40;
          else
            v56 = 8;
          v57 = *(unsigned int **)a1;
          if ( !**(_DWORD **)a1 )
          {
            v58 = *(unsigned int **)a1;
            v57[36] = 0;
            if ( (unsigned int)sub_848C40(v58, 12, 0, 12, 0, 127, v56) == 4 )
              sub_8498A0(v57, 0x5030100u, 12, 0, 12, 0, 127, v56);
          }
          sub_847F60(v2, 32, 142, *(int *)(a1 + 104), 1, 0);
          if ( !*(_DWORD *)(a1 + 184) )
            goto LABEL_16;
          sub_847F60(v2, 32, 142, *(int *)(a1 + 108), 4, 0);
          v5 = *(_QWORD *)v5;
          if ( !v5 )
            goto LABEL_17;
          goto LABEL_3;
        case -99:
        case -98:
        case -97:
        case -96:
        case -95:
        case -94:
          v44 = *(unsigned int **)a1;
          if ( (unsigned __int8)(v10 + 95) <= 1u )
          {
            if ( *(_QWORD *)(a1 + 64) )
            {
              sub_847F60(*(unsigned int **)a1, 32, 12, 0, 142, *(int *)(a1 + 108));
              sub_847F60(v44, 32, 1, 0, 127, 1);
              sub_847F60(v44, 32, 4, 0, 127, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 48LL));
              v123 = sub_8452F0((__int64)v44, 36);
              v124 = sub_845240((__int64)v44);
              sub_847F60(v44, 32, 12, 0, 140, 0);
              v125 = sub_845240((__int64)v44);
              if ( v125 && v123 )
              {
                v123[2] &= ~1uLL;
                v123[3] = v125;
              }
              v126 = sub_84A700(v44, 1, 140, 8, 1, 0);
              if ( v126 && v124 )
              {
                v126[2] &= ~1uLL;
                v126[3] = v124;
              }
              v127 = sub_84A700(v44, 1, 140, 16, 4, 0);
              if ( v127 && v124 )
              {
                v127[2] &= ~1uLL;
                v127[3] = v124;
              }
              sub_8452F0((__int64)v44, 36);
              v128 = *(_QWORD *)(a1 + 64);
              if ( !*v44 )
              {
                v129 = *((_QWORD *)v44 + 10);
                v130 = *(_QWORD *)(v129 + 8);
                v131 = v130 + 16;
                if ( (unsigned __int64)(v130 + 16) > 0xFF0 )
                {
                  v132 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v44 + 7))(
                                     4096,
                                     *(_QWORD *)(*((_QWORD *)v44 + 7) + 16LL));
                  if ( v132 )
                  {
                    v132->m128_u64[0] = *((_QWORD *)v44 + 10);
                    *((_QWORD *)v44 + 10) = v132;
                    v133 = v132 + 1;
                    v133[-1].m128_u64[1] = 16;
LABEL_240:
                    *v133 = _mm_loadh_ps((const double *)(v128 + 56));
                    *(_QWORD *)(v128 + 56) = v133;
                    goto LABEL_16;
                  }
LABEL_379:
                  *v44 = 2;
                  goto LABEL_16;
                }
                v133 = (__m128 *)(v129 + v130 + 16);
                *(_QWORD *)(v129 + 8) = v131;
                if ( v133 )
                  goto LABEL_240;
              }
              goto LABEL_16;
            }
            if ( *(_DWORD *)(a1 + 196) )
            {
              v63 = *(int *)(a1 + 112);
              if ( !(_DWORD)v63 )
                goto LABEL_304;
              goto LABEL_120;
            }
            if ( !*(_DWORD *)(a1 + 200) )
            {
              v63 = *(int *)(a1 + 112);
              if ( !(_DWORD)v63 )
                goto LABEL_121;
LABEL_120:
              sub_847F60(*(unsigned int **)a1, 32, 13, 0, 142, v63);
              if ( !*(_DWORD *)(a1 + 196) )
                goto LABEL_121;
              goto LABEL_304;
            }
            sub_8452F0(*(_QWORD *)a1, 36);
            if ( *v44 )
              goto LABEL_16;
            v216 = *((_QWORD *)v44 + 10);
            v217 = *(_QWORD *)(v216 + 8);
            v218 = v217 + 16;
            if ( (unsigned __int64)(v217 + 16) > 0xFF0 )
            {
              v219 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v44 + 7))(
                                 4096,
                                 *(_QWORD *)(*((_QWORD *)v44 + 7) + 16LL));
              if ( !v219 )
                goto LABEL_379;
              v219->m128_u64[0] = *((_QWORD *)v44 + 10);
              *((_QWORD *)v44 + 10) = v219;
              v220 = v219 + 1;
              v220[-1].m128_u64[1] = 16;
LABEL_396:
              *v220 = _mm_loadh_ps((const double *)(a1 + 352));
              *(_QWORD *)(a1 + 352) = v220;
              goto LABEL_16;
            }
            v220 = (__m128 *)(v216 + v217 + 16);
            *(_QWORD *)(v216 + 8) = v218;
            if ( v220 )
              goto LABEL_396;
LABEL_16:
            v5 = *(_QWORD *)v5;
            if ( !v5 )
              goto LABEL_17;
          }
          else
          {
            v45 = *(int *)(a1 + 112);
            if ( (_DWORD)v45 )
            {
              if ( v10 == -96 )
              {
                if ( !*(_DWORD *)(a1 + 196) )
                  goto LABEL_176;
              }
              else
              {
                sub_847F60(*(unsigned int **)a1, 32, 13, 0, 142, v45);
                if ( !*(_DWORD *)(a1 + 196) )
                {
LABEL_71:
                  if ( v10 == -97 )
                    v46 = 140;
                  else
LABEL_121:
                    v46 = 127;
                  sub_847F60(v44, 32, 2, 0, v46, 0);
                  sub_8452F0((__int64)v44, 36);
                  if ( *v44 )
                    goto LABEL_16;
                  goto LABEL_74;
                }
              }
LABEL_304:
              v53 = *(_QWORD *)(a1 + 280);
              if ( v53 )
              {
                v54 = sub_8452F0((__int64)v44, 36);
                if ( v54 )
                  goto LABEL_83;
                goto LABEL_16;
              }
              sub_8452F0((__int64)v44, 36);
              if ( *v44 )
                goto LABEL_16;
              v88 = *((_QWORD *)v44 + 10);
              v89 = *(_QWORD *)(v88 + 8);
              v90 = v89 + 16;
              if ( (unsigned __int64)(v89 + 16) <= 0xFF0 )
              {
LABEL_320:
                v92 = (__m128 *)(v88 + v89 + 16);
                *(_QWORD *)(v88 + 8) = v90;
                if ( !v92 )
                  goto LABEL_16;
              }
              else
              {
                v182 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v44 + 7))(
                                   4096,
                                   *(_QWORD *)(*((_QWORD *)v44 + 7) + 16LL));
                if ( !v182 )
                  goto LABEL_379;
                v182->m128_u64[0] = *((_QWORD *)v44 + 10);
                *((_QWORD *)v44 + 10) = v182;
                v92 = v182 + 1;
                v92[-1].m128_u64[1] = 16;
              }
LABEL_172:
              *v92 = _mm_loadh_ps((const double *)(a1 + 344));
              *(_QWORD *)(a1 + 344) = v92;
              v5 = *(_QWORD *)v5;
              if ( !v5 )
                goto LABEL_17;
            }
            else
            {
              if ( *(_DWORD *)(a1 + 196) )
                goto LABEL_304;
              if ( v10 != -96 )
                goto LABEL_71;
LABEL_176:
              sub_847F60(*(unsigned int **)a1, 32, 1, 0, 142, *(int *)(a1 + 108));
              sub_847F60(v44, 32, 2, 0, 127, *(_QWORD *)(v5 + 32) + 2LL);
              sub_847C00(v44, 273, (__int64)sub_844020);
              if ( *(_DWORD *)(a1 + 112) )
              {
                v93 = sub_84A700(v44, 0, 1, 0, 127, 0);
                sub_847F60(v44, 32, 2, 0, 1, 0);
                sub_847F60(v44, 32, 13, 0, 142, *(int *)(a1 + 112));
                sub_8452F0((__int64)v44, 36);
                if ( !*v44 )
                {
                  v94 = *((_QWORD *)v44 + 10);
                  v95 = *(_QWORD *)(v94 + 8);
                  v96 = v95 + 16;
                  if ( (unsigned __int64)(v95 + 16) <= 0xFF0 )
                  {
                    v98 = (__m128 *)(v94 + v95 + 16);
                    *(_QWORD *)(v94 + 8) = v96;
                    if ( v98 )
                    {
LABEL_181:
                      *v98 = _mm_loadh_ps((const double *)(a1 + 464));
                      *(_QWORD *)(a1 + 464) = v98;
                    }
                  }
                  else
                  {
                    v97 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v44 + 7))(
                                      4096,
                                      *(_QWORD *)(*((_QWORD *)v44 + 7) + 16LL));
                    if ( v97 )
                    {
                      v97->m128_u64[0] = *((_QWORD *)v44 + 10);
                      *((_QWORD *)v44 + 10) = v97;
                      v98 = v97 + 1;
                      v98[-1].m128_u64[1] = 16;
                      goto LABEL_181;
                    }
                    *v44 = 2;
                  }
                }
                v99 = sub_845240((__int64)v44);
                if ( v99 && v93 )
                {
                  v93[2] &= ~1uLL;
                  v93[3] = v99;
                }
                goto LABEL_16;
              }
              sub_847F60(v44, 32, 2, 0, 1, 0);
              sub_84A700(v44, 1, 1, 0, 127, 0);
              if ( *v44 )
                goto LABEL_16;
LABEL_74:
              v47 = *((_QWORD *)v44 + 10);
              v48 = *(_QWORD *)(v47 + 8);
              v49 = v48 + 16;
              if ( (unsigned __int64)(v48 + 16) <= 0xFF0 )
              {
                v51 = (__m128 *)(v47 + v48 + 16);
                *(_QWORD *)(v47 + 8) = v49;
                if ( !v51 )
                  goto LABEL_16;
              }
              else
              {
                v50 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v44 + 7))(
                                  4096,
                                  *(_QWORD *)(*((_QWORD *)v44 + 7) + 16LL));
                if ( !v50 )
                  goto LABEL_379;
                v50->m128_u64[0] = *((_QWORD *)v44 + 10);
                *((_QWORD *)v44 + 10) = v50;
                v51 = v50 + 1;
                v51[-1].m128_u64[1] = 16;
              }
              *v51 = _mm_loadh_ps((const double *)(a1 + 464));
              *(_QWORD *)(a1 + 464) = v51;
              v5 = *(_QWORD *)v5;
              if ( !v5 )
                goto LABEL_17;
            }
          }
          break;
        case -93:
        case -92:
          v52 = *(int *)(a1 + 112);
          if ( (_DWORD)v52 )
          {
            sub_847F60(v2, 32, 13, 0, 142, v52);
            if ( *(_DWORD *)(a1 + 196) )
              goto LABEL_81;
          }
          else if ( *(_DWORD *)(a1 + 196) )
          {
            goto LABEL_81;
          }
          sub_847F60(v2, 32, 1, 0, 127, -1);
LABEL_81:
          v53 = *(_QWORD *)(a1 + 280);
          if ( v53 )
          {
            v54 = sub_8452F0((__int64)v2, 36);
            if ( !v54 )
              goto LABEL_16;
            goto LABEL_83;
          }
          sub_8452F0((__int64)v2, 36);
          if ( *v2 )
            goto LABEL_16;
          v88 = *((_QWORD *)v2 + 10);
          v89 = *(_QWORD *)(v88 + 8);
          v90 = v89 + 16;
          if ( (unsigned __int64)(v89 + 16) <= 0xFF0 )
            goto LABEL_320;
          v91 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v2 + 7))(
                            4096,
                            *(_QWORD *)(*((_QWORD *)v2 + 7) + 16LL));
          if ( v91 )
          {
            v91->m128_u64[0] = *((_QWORD *)v2 + 10);
            *((_QWORD *)v2 + 10) = v91;
            v92 = v91 + 1;
            v92[-1].m128_u64[1] = 16;
            goto LABEL_172;
          }
          *v2 = 2;
          goto LABEL_16;
        case -91:
        case -90:
        case -89:
LABEL_32:
          v24 = sub_845240((__int64)v2);
          v25 = *(__int64 **)(v5 + 24);
          if ( !v25 )
            goto LABEL_16;
          do
          {
            v26 = *v25;
            if ( *v25 && v24 )
            {
              *(_QWORD *)(v26 + 16) &= ~1uLL;
              *(_QWORD *)(v26 + 24) = v24;
            }
            v25 = (__int64 *)v25[1];
          }
          while ( v25 );
          v5 = *(_QWORD *)v5;
          if ( !v5 )
            goto LABEL_17;
          goto LABEL_3;
        case -83:
          v55 = *(_QWORD *)(v5 + 40);
          if ( v55 )
          {
            *(_QWORD *)(a1 + 64) = v55;
            v5 = *(_QWORD *)v5;
            if ( !v5 )
              goto LABEL_17;
            goto LABEL_3;
          }
          v100 = *(_DWORD *)(v5 + 64);
          v101 = *(unsigned int **)a1;
          if ( v100 < 0 )
            v100 = 0;
          v102 = 8 * v100 + 24;
          sub_847F60(*(unsigned int **)a1, 32, 1, 0, 140, 8 * v100);
          v103 = *(unsigned int **)a1;
          if ( !**(_DWORD **)a1 )
          {
            v104 = *(unsigned int **)a1;
            v103[36] = 0;
            if ( (unsigned int)sub_848C40(v104, 12, 0, 12, 0, 127, v102) == 4 )
              sub_8498A0(v103, 0x5030100u, 12, 0, 12, 0, 127, v102);
          }
          v105 = sub_8452F0((__int64)v101, 36);
          v106 = sub_845240((__int64)v101);
          for ( i2 = *(__int64 **)(v5 + 56); i2; i2 = (__int64 *)i2[1] )
          {
            v108 = *i2;
            if ( *i2 && v106 )
            {
              *(_QWORD *)(v108 + 16) &= ~1uLL;
              *(_QWORD *)(v108 + 24) = v106;
            }
          }
          v109 = *(_DWORD *)(v5 + 64);
          if ( v109 <= 0 )
            goto LABEL_196;
          sub_8452F0((__int64)v101, 37);
          if ( *v101 )
            goto LABEL_319;
          v170 = *((_QWORD *)v101 + 10);
          v171 = *(_QWORD *)(v170 + 8);
          v172 = v171 + 16;
          if ( (unsigned __int64)(v171 + 16) <= 0xFF0 )
          {
            v174 = (__m128 *)(v170 + v171 + 16);
            *(_QWORD *)(v170 + 8) = v172;
            if ( v174 )
              goto LABEL_318;
          }
          else
          {
            v173 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v101 + 7))(
                               4096,
                               *(_QWORD *)(*((_QWORD *)v101 + 7) + 16LL));
            if ( v173 )
            {
              v173->m128_u64[0] = *((_QWORD *)v101 + 10);
              *((_QWORD *)v101 + 10) = v173;
              v174 = v173 + 1;
              v174[-1].m128_u64[1] = 16;
LABEL_318:
              *v174 = _mm_loadh_ps((const double *)(a1 + 400));
              *(_QWORD *)(a1 + 400) = v174;
              goto LABEL_319;
            }
            *v101 = 2;
          }
LABEL_319:
          sub_849F80(v101, 0x40u, 12, 0, 12, 0, 0x7Fu, 8LL * (v109 - 1));
LABEL_196:
          sub_847F60(v101, 32, 1, 0, 140, 0);
          sub_849F80(*(unsigned int **)a1, 0x40u, 12, 0, 12, 0, 0x7Fu, 24);
          v110 = sub_845240((__int64)v101);
          if ( v110 && v105 )
          {
            v105[2] &= ~1uLL;
            v105[3] = v110;
          }
          sub_847F60(v101, 32, 142, *(int *)(a1 + 108), 1, 0);
          v5 = *(_QWORD *)v5;
          if ( !v5 )
            goto LABEL_17;
          goto LABEL_3;
        default:
          goto LABEL_16;
      }
    }
  }
LABEL_18:
  *(_QWORD *)(a1 + 64) = v3;
  return v240 - __readfsqword(0x28u);
}

