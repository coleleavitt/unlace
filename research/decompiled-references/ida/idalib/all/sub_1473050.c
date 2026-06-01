__int64 __fastcall sub_1473050(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbp
  char v13; // r13
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int16 v17; // di
  int v18; // r13d
  int v19; // r15d
  __int64 v20; // rax
  const __m128i *p_ptr; // r13
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rdx
  __m128i *v24; // rax
  __int64 v25; // rdx
  const __m128i *v26; // r13
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __m128i *v31; // rax
  char *v32; // rsi
  __int64 v33; // rdx
  __int16 v34; // ax
  unsigned __int16 v35; // cx
  unsigned int v36; // eax
  unsigned __int16 v37; // si
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rax
  __int64 *v44; // rbx
  __int16 v45; // ax
  __int64 v46; // rax
  int v47; // ebp
  int v48; // r12d
  __int64 v49; // rax
  unsigned __int64 v50; // r13
  const __m128i *v51; // r12
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __m128i *v55; // rax
  __int64 v56; // rdx
  int *v57; // r12
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rdx
  const __m128i *v62; // rbp
  __m128i *v63; // rax
  char *v64; // rsi
  __int64 v65; // rdx
  __int16 v66; // ax
  unsigned __int16 v67; // cx
  __int64 *v68; // rdi
  unsigned __int64 v69; // r9
  unsigned __int8 v70; // al
  unsigned __int64 v71; // r13
  __int64 v72; // rbp
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  _BOOL4 v76; // r11d
  __int64 *v77; // rax
  __int64 v78; // r10
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // r8
  char v84; // dl
  unsigned __int64 v85; // rsi
  char v86; // al
  _DWORD *v87; // rdi
  unsigned int v88; // eax
  unsigned __int16 v89; // cx
  __int64 v90; // rdx
  __int64 result; // rax
  unsigned __int16 v92; // cx
  __int64 *v93; // rdi
  __int64 *v94; // rdi
  _QWORD *v95; // r13
  unsigned int v96; // esi
  unsigned int v97; // ecx
  __int64 v98; // rax
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // rdx
  __int64 v101; // rax
  void **v102; // r13
  unsigned __int64 v103; // rax
  void **v104; // rdx
  void **v105; // r15
  __int64 v106; // r14
  __int64 *v107; // r12
  void **v108; // rbx
  void **v109; // rdi
  void **v110; // rdi
  void **v111; // r15
  __int16 v112; // ax
  unsigned __int16 v113; // cx
  __int64 *v114; // rdi
  unsigned __int16 v115; // cx
  unsigned int v116; // eax
  unsigned __int16 v117; // si
  __int64 v118; // rdx
  unsigned __int16 v119; // cx
  unsigned int v120; // eax
  unsigned __int16 v121; // si
  __int64 v122; // rdx
  unsigned int v123; // eax
  unsigned __int16 v124; // cx
  __int64 v125; // rdx
  unsigned int v126; // eax
  _WORD *v127; // rdx
  int v128; // eax
  __int64 *v129; // rdi
  unsigned __int64 v130; // rax
  unsigned __int16 v131; // cx
  unsigned int v132; // eax
  unsigned __int16 v133; // si
  __int64 v134; // rdx
  void *v135; // rdi
  void **v136; // r15
  unsigned __int64 v137; // rax
  void **v138; // rdx
  void **v139; // r13
  __int64 v140; // r14
  __int64 *v141; // r12
  void **v142; // rbx
  void **v143; // rdi
  void **v144; // rdi
  void **v145; // r13
  unsigned int v146; // eax
  __int64 v147; // rdx
  unsigned __int64 v148; // rdx
  int v149; // eax
  __int64 v150; // rax
  __int64 v151; // r15
  __int64 v152; // rax
  __int64 v153; // r15
  unsigned int v154; // r13d
  __int64 *v155; // r12
  __int64 v156; // rbx
  void *v157; // rdi
  __int64 v158; // rcx
  __int8 *v159; // r13
  __int64 *v160; // rsi
  _BYTE *v161; // rax
  unsigned __int16 v162; // cx
  unsigned int v163; // eax
  unsigned __int16 v164; // si
  __int64 v165; // rdx
  unsigned __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rcx
  _BOOL4 v170; // r11d
  __int64 v171; // r13
  __int64 v172; // rsi
  void **v173; // r13
  unsigned __int64 v174; // rax
  __int64 v175; // rdx
  unsigned __int64 v176; // rax
  void **v177; // rcx
  void **v178; // r15
  __int64 v179; // r13
  __int64 v180; // rbp
  __int64 *v181; // r14
  __int64 v182; // rbx
  void *v183; // rdi
  void **v184; // rdi
  void **v185; // rax
  void **v186; // r14
  __int64 *v187; // r13
  void **v188; // rbx
  void **v189; // r13
  unsigned __int64 v190; // rcx
  __int16 i; // ax
  unsigned __int16 v192; // cx
  __int64 *v193; // rdi
  unsigned __int16 v194; // cx
  unsigned int v195; // eax
  unsigned __int16 v196; // si
  __int64 v197; // rdx
  unsigned __int16 v198; // cx
  unsigned int v199; // eax
  unsigned __int16 v200; // si
  __int64 v201; // rdx
  unsigned int v202; // eax
  _WORD *v203; // rdx
  unsigned __int16 v204; // cx
  unsigned int v205; // eax
  __int64 v206; // rdx
  __int64 v207; // rdx
  __int64 v208; // rdx
  __int64 v209; // rdx
  __int64 v210; // rax
  __int64 v211; // rcx
  __int64 *v212; // rsi
  char *v213; // rbp
  __int64 *v214; // rsi
  int v215; // eax
  __int64 *v216; // rdi
  unsigned int v217; // eax
  unsigned __int16 v218; // si
  __int64 v219; // rdx
  int v220; // eax
  __int64 *v221; // rdi
  int v222; // eax
  __int64 *v223; // rdi
  __int16 v225; // [rsp+0h] [rbp-228h]
  int *v226; // [rsp+8h] [rbp-220h]
  int v227; // [rsp+8h] [rbp-220h]
  __int64 v228; // [rsp+10h] [rbp-218h]
  unsigned __int64 v229; // [rsp+10h] [rbp-218h]
  _BOOL4 v230; // [rsp+10h] [rbp-218h]
  __int64 v231; // [rsp+10h] [rbp-218h]
  __int64 v232; // [rsp+10h] [rbp-218h]
  void **v233; // [rsp+10h] [rbp-218h]
  __int64 v234; // [rsp+10h] [rbp-218h]
  __int64 v235; // [rsp+18h] [rbp-210h]
  __int64 v236; // [rsp+18h] [rbp-210h]
  void **v237; // [rsp+18h] [rbp-210h]
  _BOOL4 v238; // [rsp+18h] [rbp-210h]
  int v239; // [rsp+18h] [rbp-210h]
  _BOOL4 v240; // [rsp+18h] [rbp-210h]
  __int16 v241; // [rsp+20h] [rbp-208h]
  __int64 v242; // [rsp+20h] [rbp-208h]
  int v243; // [rsp+28h] [rbp-200h]
  __int64 *v244; // [rsp+30h] [rbp-1F8h]
  __int64 v245; // [rsp+38h] [rbp-1F0h]
  __int64 v246; // [rsp+40h] [rbp-1E8h]
  unsigned int v247; // [rsp+40h] [rbp-1E8h]
  int v248; // [rsp+48h] [rbp-1E0h]
  __int64 v249; // [rsp+48h] [rbp-1E0h]
  void **v250; // [rsp+48h] [rbp-1E0h]
  unsigned int *v251; // [rsp+48h] [rbp-1E0h]
  unsigned int v252; // [rsp+48h] [rbp-1E0h]
  int v253; // [rsp+50h] [rbp-1D8h]
  __int64 v254; // [rsp+58h] [rbp-1D0h]
  __int64 v255; // [rsp+58h] [rbp-1D0h]
  __int64 v256; // [rsp+60h] [rbp-1C8h]
  unsigned int v257; // [rsp+60h] [rbp-1C8h]
  __int64 v258; // [rsp+70h] [rbp-1B8h] BYREF
  unsigned __int64 v259; // [rsp+78h] [rbp-1B0h] BYREF
  char v260[8]; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v261; // [rsp+88h] [rbp-1A0h] BYREF
  __int64 v262; // [rsp+90h] [rbp-198h] BYREF
  char v263; // [rsp+98h] [rbp-190h]
  _DWORD v264[2]; // [rsp+A0h] [rbp-188h] BYREF
  __int64 v265; // [rsp+A8h] [rbp-180h]
  int v266; // [rsp+B0h] [rbp-178h]
  _BYTE v267[32]; // [rsp+C0h] [rbp-168h] BYREF
  __int64 v268; // [rsp+E0h] [rbp-148h]
  __int64 v269; // [rsp+E8h] [rbp-140h] BYREF
  unsigned int v270; // [rsp+F0h] [rbp-138h]
  _DWORD *v271; // [rsp+F8h] [rbp-130h]
  int v272; // [rsp+100h] [rbp-128h]
  __int64 v273; // [rsp+128h] [rbp-100h]
  void *v274; // [rsp+140h] [rbp-E8h] BYREF
  __int64 v275; // [rsp+148h] [rbp-E0h]
  _BYTE v276[32]; // [rsp+150h] [rbp-D8h] BYREF
  void *ptr; // [rsp+170h] [rbp-B8h] BYREF
  __int64 v278; // [rsp+178h] [rbp-B0h]
  _DWORD v279[8]; // [rsp+180h] [rbp-A8h] BYREF
  void *v280; // [rsp+1A0h] [rbp-88h] BYREF
  unsigned __int64 v281; // [rsp+1A8h] [rbp-80h]
  __int64 v282; // [rsp+1B0h] [rbp-78h]
  void *v283; // [rsp+1C0h] [rbp-68h]
  _BYTE v284[16]; // [rsp+1D0h] [rbp-58h] BYREF
  __int16 v285; // [rsp+1E0h] [rbp-48h]

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a2 + 16);
  v268 = a1;
  v269 = a1;
  v270 = 0;
  v271 = (_DWORD *)(a1 + 2548);
  v272 = 0;
  v5 = sub_154D3C0(a1, &v269, v4);
  *v271 += v5;
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(a2 + 16);
  v272 += v5;
  nullsub_1164(v6, *(_QWORD *)(v6 + 608), v7);
  sub_1564E40(v269, 776);
  v8 = *(_DWORD *)(a2 + 32);
  ++v270;
  v228 = (unsigned int)(v8 - 1);
  if ( !v8 )
    goto LABEL_33;
  v9 = 0;
  v10 = v2;
  while ( 1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16 * v9);
    v13 = *(_BYTE *)(v12 + 97);
    sub_183CFC0(*(_QWORD *)(v10 + 96), *(_QWORD *)(*(_QWORD *)(v10 + 96) + 608LL), v12);
    v14 = 16 * v9 + *(_QWORD *)(a2 + 24);
    v15 = *(__int64 **)(v14 + 8);
    *(_QWORD *)(v14 + 8) = 0;
    if ( v15 )
    {
      v241 = *(_WORD *)(v10 + 92);
      v243 = *(_DWORD *)(v10 + 88);
      v16 = *v15 + 24LL * *((unsigned int *)v15 + 2) - 24;
      v17 = *(_WORD *)(v16 + 16);
      v18 = *(_DWORD *)v16;
      v19 = *(_DWORD *)(v16 + 4);
      HIDWORD(ptr) = 0;
      v279[0] = 1;
      if ( sub_10CCDE0(v17) )
      {
        if ( !v19 )
          v19 = v18;
      }
      else
      {
        v19 += v18;
      }
      LODWORD(ptr) = v19;
      v20 = *((unsigned int *)v15 + 2);
      p_ptr = (const __m128i *)&ptr;
      v278 = v12;
      v22 = *v15;
      v244 = v15 + 2;
      v23 = v20 + 1;
      v24 = (__m128i *)(*v15 + 24 * v20);
      if ( v23 > *((unsigned int *)v15 + 3) )
      {
        v160 = v15 + 2;
        if ( v22 > (unsigned __int64)&ptr || v24 <= (__m128i *)&ptr )
        {
          sub_2237220(v15, v160, v23, 24);
          v24 = (__m128i *)(*v15 + 24LL * *((unsigned int *)v15 + 2));
        }
        else
        {
          sub_2237220(v15, v160, v23, 24);
          p_ptr = (const __m128i *)((char *)&ptr + *v15 - v22);
          v24 = (__m128i *)(*v15 + 24LL * *((unsigned int *)v15 + 2));
        }
      }
      *v24 = _mm_loadu_si128(p_ptr);
      v25 = p_ptr[1].m128i_i64[0];
      v26 = (const __m128i *)(v10 + 16);
      v226 = (int *)(v10 + 16);
      v24[1].m128i_i64[0] = v25;
      v27 = *((unsigned int *)v15 + 3);
      v28 = (unsigned int)(*((_DWORD *)v15 + 2) + 1);
      v29 = v28 + 1;
      *((_DWORD *)v15 + 2) = v28;
      if ( v28 + 1 > v27 )
      {
        v158 = *v15;
        if ( *v15 > (unsigned __int64)v26 || (unsigned __int64)v26 >= v158 + 24 * v28 )
        {
          sub_2237220(v15, v15 + 2, v29, 24);
          v30 = *v15;
          v28 = *((unsigned int *)v15 + 2);
          v26 = (const __m128i *)(v10 + 16);
        }
        else
        {
          v159 = &v26->m128i_i8[-v158];
          sub_2237220(v15, v15 + 2, v29, 24);
          v30 = *v15;
          v28 = *((unsigned int *)v15 + 2);
          v26 = (const __m128i *)&v159[*v15];
        }
      }
      else
      {
        v30 = *v15;
      }
      v31 = (__m128i *)(v30 + 24 * v28);
      *v31 = _mm_loadu_si128(v26);
      v31[1].m128i_i64[0] = v26[1].m128i_i64[0];
      v32 = (char *)*v15;
      v33 = (unsigned int)(*((_DWORD *)v15 + 2) + 1);
      *((_DWORD *)v15 + 2) = v33;
      sub_14368B0(*(_QWORD *)(v10 + 8), v32, v33, 1u, 0, 1u);
      v34 = *(_WORD *)(v10 + 32);
      if ( v34 == 22 )
      {
        ++*(_WORD *)(v10 + 88);
        goto LABEL_85;
      }
      if ( v34 != 23 )
      {
        if ( (unsigned __int16)(v34 - 20) <= 1u )
        {
          v35 = *(_WORD *)(v10 + 90);
          if ( v34 == 20 )
          {
            *(_WORD *)(v10 + 90) = v35 + 1;
          }
          else if ( v35 )
          {
            v36 = *(_DWORD *)(v10 + 2792);
            if ( v36 )
            {
              v37 = *(_WORD *)(v10 + 88);
              v38 = *(_QWORD *)(v10 + 2784) + 24LL * v36 - 24;
              do
              {
                if ( v37 == *(_WORD *)(v38 + 14) )
                {
                  if ( *(_DWORD *)(v38 + 16) == *(_DWORD *)(v10 + 90) )
                    goto LABEL_21;
                }
                else if ( v37 > *(_WORD *)(v38 + 14) )
                {
                  goto LABEL_21;
                }
                if ( *(_WORD *)(v38 + 16) >= v35 && *(_WORD *)(v10 + 92) <= *(_WORD *)(v38 + 18) )
                  break;
LABEL_21:
                --v36;
                v38 -= 24;
                *(_DWORD *)(v10 + 2792) = v36;
              }
              while ( v36 );
            }
            *(_WORD *)(v10 + 90) = v35 - 1;
          }
          goto LABEL_85;
        }
        if ( (unsigned __int16)(v34 - 24) > 1u )
        {
          if ( (unsigned __int16)(v34 - 17) > 2u && (unsigned __int16)(v34 - 14) > 1u )
          {
            if ( v34 == 3 )
            {
              sub_1566D30(v10);
              goto LABEL_86;
            }
            if ( sub_10CCDE0(v34) )
            {
              v220 = *(_DWORD *)(v10 + 20);
              v221 = *(__int64 **)(v10 + 8);
              if ( !v220 )
                v220 = *(_DWORD *)(v10 + 16);
              *(_DWORD *)(v10 + 40) = v220;
              sub_14634E0(v221, v226);
LABEL_86:
              v94 = *(__int64 **)(v10 + 8);
              *(_DWORD *)(v10 + 40) = *(_DWORD *)(v10 + 16);
              sub_14634E0(v94, v226);
              v247 = *(_DWORD *)(v10 + 40);
              v245 = *(_QWORD *)(v10 + 96);
              sub_18C74E0(v245, 7, v12, 4);
              if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 56LL) + 1LL) & 0x10) == 0
                || *(_WORD *)(v10 + 32) != 24 )
              {
                v235 = sub_14BDAD0(v10, 0);
                goto LABEL_89;
              }
              sub_1564840(&v280, v10, v226, 2118);
              if ( (_BYTE)v285 )
              {
                sub_FC7790(v282, (__int64 *)&v280, SHIBYTE(v285));
                v135 = v283;
                v282 = 0;
                v285 = 0;
                if ( v283 == v284 )
                {
LABEL_210:
                  v136 = (void **)v280;
                  if ( v280 )
                  {
                    v137 = v281;
                    if ( v281 )
                    {
                      if ( (unsigned __int64)v280 < v281 || (unsigned __int64)v280 > v281 + 14848 )
                      {
                        v138 = *((void ***)v280 + 66);
                        v139 = &v138[8 * (unsigned __int64)*((unsigned int *)v280 + 134)];
                        if ( v138 != v139 )
                        {
                          v236 = v10;
                          v140 = v9;
                          v141 = v15;
                          v142 = *((void ***)v280 + 66);
                          do
                          {
                            while ( 1 )
                            {
                              v139 -= 8;
                              v143 = (void **)v139[3];
                              if ( v143 == v139 + 5 )
                                break;
                              operator delete(v143);
                              if ( v142 == v139 )
                                goto LABEL_217;
                            }
                          }
                          while ( v142 != v139 );
LABEL_217:
                          v15 = v141;
                          v139 = (void **)v136[66];
                          v9 = v140;
                          v10 = v236;
                        }
                        if ( v139 != v136 + 68 )
                          free(v139);
                        v144 = (void **)v136[52];
                        if ( v144 != v136 + 54 )
                          free(v144);
                        v145 = v136 + 48;
                        v237 = v136 + 8;
                        do
                        {
                          while ( *v145 != v145 + 2 )
                          {
                            operator delete(*v145);
                            v145 -= 4;
                            if ( v145 == v237 )
                              goto LABEL_225;
                          }
                          v145 -= 4;
                        }
                        while ( v237 != v145 );
LABEL_225:
                        operator delete(v136, 0x3A0u);
                      }
                      else
                      {
                        v209 = *(unsigned int *)(v281 + 14976);
                        *(_DWORD *)(v281 + 14976) = v209 + 1;
                        *(_QWORD *)(v137 + 8 * v209 + 14848) = v136;
                      }
                    }
                  }
                  v235 = sub_14EE310(v10);
LABEL_89:
                  if ( v235 == 1 )
                  {
                    sub_183B3E0(*(_QWORD *)(v10 + 96), v12, v247, 0);
                  }
                  else
                  {
                    if ( *(_WORD *)(v10 + 32) != 1 || v12 != *(_QWORD *)(v10 + 24) )
                    {
                      sub_1564820(&v280, v10, *(unsigned int *)(v10 + 16), 1584);
                      v95 = v280;
                      v96 = *(_DWORD *)(v10 + 16);
                      v97 = *(_DWORD *)(*v15 + 8 * (3LL * *((unsigned int *)v15 + 2) - 9));
                      if ( v280 )
                      {
                        v98 = *((unsigned int *)v280 + 106);
                        v99 = *((unsigned int *)v280 + 107);
                        v100 = v98 + 1;
                      }
                      else
                      {
                        v148 = v281;
                        v149 = *(_DWORD *)(v281 + 14976);
                        if ( v149 )
                        {
                          v150 = (unsigned int)(v149 - 1);
                          *(_DWORD *)(v281 + 14976) = v150;
                          v95 = *(_QWORD **)(v148 + 8 * v150 + 14848);
                          v151 = *((unsigned int *)v95 + 134);
                          *(_BYTE *)v95 = 0;
                          v152 = v95[66];
                          *((_DWORD *)v95 + 106) = 0;
                          v153 = v152 + (v151 << 6);
                          if ( v152 == v153 )
                          {
                            v100 = 1;
                            v98 = 0;
                          }
                          else
                          {
                            v251 = (unsigned int *)v95;
                            v154 = v97;
                            v256 = v9;
                            v155 = v15;
                            v156 = v152;
                            do
                            {
                              while ( 1 )
                              {
                                v153 -= 64;
                                v157 = *(void **)(v153 + 24);
                                if ( v157 == (void *)(v153 + 40) )
                                  break;
                                operator delete(v157);
                                if ( v156 == v153 )
                                  goto LABEL_241;
                              }
                            }
                            while ( v156 != v153 );
LABEL_241:
                            v97 = v154;
                            v95 = v251;
                            v15 = v155;
                            v9 = v256;
                            v98 = v251[106];
                            v100 = v98 + 1;
                          }
                          *((_DWORD *)v95 + 134) = 0;
                          v99 = *((unsigned int *)v95 + 107);
                        }
                        else
                        {
                          v257 = *(_DWORD *)(v10 + 16);
                          v252 = *(_DWORD *)(*v15 + 8 * (3LL * *((unsigned int *)v15 + 2) - 9));
                          v161 = (_BYTE *)operator new(0x3A0u);
                          v99 = 8;
                          v100 = 1;
                          v95 = v161;
                          *v161 = 0;
                          *((_QWORD *)v161 + 12) = v161 + 112;
                          *((_QWORD *)v161 + 16) = v161 + 144;
                          *((_QWORD *)v161 + 20) = v161 + 176;
                          *((_QWORD *)v161 + 24) = v161 + 208;
                          *((_QWORD *)v161 + 28) = v161 + 240;
                          *((_QWORD *)v161 + 32) = v161 + 272;
                          *((_QWORD *)v161 + 36) = v161 + 304;
                          *((_QWORD *)v161 + 40) = v161 + 336;
                          *((_QWORD *)v161 + 44) = v161 + 368;
                          *((_QWORD *)v161 + 48) = v161 + 400;
                          *((_QWORD *)v161 + 52) = v161 + 432;
                          *((_QWORD *)v161 + 13) = 0;
                          v161[112] = 0;
                          *((_QWORD *)v161 + 17) = 0;
                          v161[144] = 0;
                          *((_QWORD *)v161 + 21) = 0;
                          v161[176] = 0;
                          *((_QWORD *)v161 + 25) = 0;
                          v161[208] = 0;
                          *((_QWORD *)v161 + 29) = 0;
                          v161[240] = 0;
                          *((_QWORD *)v161 + 33) = 0;
                          v161[272] = 0;
                          *((_QWORD *)v161 + 37) = 0;
                          v161[304] = 0;
                          *((_QWORD *)v161 + 41) = 0;
                          v161[336] = 0;
                          *((_QWORD *)v161 + 45) = 0;
                          v161[368] = 0;
                          *((_QWORD *)v161 + 49) = 0;
                          v161[400] = 0;
                          *((_QWORD *)v161 + 53) = 0x800000000LL;
                          v97 = v252;
                          *((_QWORD *)v161 + 66) = v161 + 544;
                          v96 = v257;
                          *((_QWORD *)v161 + 67) = 0x600000000LL;
                          v98 = 0;
                        }
                        v280 = v95;
                      }
                      v274 = (void *)__PAIR64__(v97, v96);
                      LOBYTE(v275) = 1;
                      if ( v100 > v99 )
                      {
                        sub_2237220(v95 + 52, v95 + 54, v100, 12);
                        v98 = *((unsigned int *)v95 + 106);
                      }
                      v101 = v95[52] + 12 * v98;
                      *(_QWORD *)v101 = v274;
                      *(_DWORD *)(v101 + 8) = v275;
                      ++*((_DWORD *)v95 + 106);
                      if ( (_BYTE)v285 )
                      {
                        sub_FC7790(v282, (__int64 *)&v280, SHIBYTE(v285));
                        v282 = 0;
                        v285 = 0;
                      }
                      if ( v283 != v284 )
                        operator delete(v283);
                      v102 = (void **)v280;
                      if ( v280 )
                      {
                        v103 = v281;
                        if ( v281 )
                        {
                          if ( (unsigned __int64)v280 >= v281 && (unsigned __int64)v280 <= v281 + 14848 )
                          {
                            v207 = *(unsigned int *)(v281 + 14976);
                            *(_DWORD *)(v281 + 14976) = v207 + 1;
                            *(_QWORD *)(v103 + 8 * v207 + 14848) = v102;
                          }
                          else
                          {
                            v104 = *((void ***)v280 + 66);
                            v105 = &v104[8 * (unsigned __int64)*((unsigned int *)v280 + 134)];
                            if ( v104 != v105 )
                            {
                              v249 = v10;
                              v106 = v9;
                              v107 = v15;
                              v108 = *((void ***)v280 + 66);
                              do
                              {
                                while ( 1 )
                                {
                                  v105 -= 8;
                                  v109 = (void **)v105[3];
                                  if ( v109 == v105 + 5 )
                                    break;
                                  operator delete(v109);
                                  if ( v108 == v105 )
                                    goto LABEL_108;
                                }
                              }
                              while ( v108 != v105 );
LABEL_108:
                              v15 = v107;
                              v105 = (void **)v102[66];
                              v9 = v106;
                              v10 = v249;
                            }
                            if ( v105 != v102 + 68 )
                              free(v105);
                            v110 = (void **)v102[52];
                            if ( v110 != v102 + 54 )
                              free(v110);
                            v111 = v102 + 48;
                            v250 = v102 + 8;
                            do
                            {
                              while ( *v111 != v111 + 2 )
                              {
                                operator delete(*v111);
                                v111 -= 4;
                                if ( v111 == v250 )
                                  goto LABEL_116;
                              }
                              v111 -= 4;
                            }
                            while ( v250 != v111 );
LABEL_116:
                            operator delete(v102, 0x3A0u);
                          }
                        }
                      }
                    }
                    sub_184A040(*(_QWORD *)(v10 + 96), v12, v247, v235 & 0xFFFFFFFFFFFFFFFELL);
                  }
                  v112 = *(_WORD *)(v10 + 32);
                  if ( v112 == 1 )
                  {
LABEL_150:
                    if ( v12 == *(_QWORD *)(v10 + 24) )
                      sub_146AA30(v10);
                    sub_190D5E0(v245);
                    v123 = *(_DWORD *)(v10 + 2792);
                    if ( v123 )
                    {
                      v124 = *(_WORD *)(v10 + 88);
                      v125 = *(_QWORD *)(v10 + 2784) + 24LL * v123 - 24;
                      do
                      {
                        if ( v124 == *(_WORD *)(v125 + 14) )
                        {
                          if ( *(_DWORD *)(v125 + 16) == *(_DWORD *)(v10 + 90) )
                            goto LABEL_155;
                        }
                        else if ( v124 > *(_WORD *)(v125 + 14) )
                        {
                          goto LABEL_155;
                        }
                        if ( *(_WORD *)(v10 + 90) <= *(_WORD *)(v125 + 16)
                          && *(_WORD *)(v10 + 92) <= *(_WORD *)(v125 + 18) )
                        {
                          break;
                        }
LABEL_155:
                        --v123;
                        v125 -= 24;
                        *(_DWORD *)(v10 + 2792) = v123;
                      }
                      while ( v123 );
                    }
                    *(_DWORD *)(v10 + 88) = v243;
                    *(_WORD *)(v10 + 92) = v241;
                    if ( v244 != (__int64 *)*v15 )
                      free((void *)*v15);
                    operator delete(v15, 0x70u);
                    goto LABEL_4;
                  }
                  while ( 1 )
                  {
                    if ( (unsigned __int16)(v112 - 22) <= 1u )
                    {
                      v113 = *(_WORD *)(v10 + 88);
                      if ( v112 == 22 )
                      {
                        *(_WORD *)(v10 + 88) = v113 + 1;
                      }
                      else if ( v113 )
                      {
                        v126 = *(_DWORD *)(v10 + 2792);
                        if ( !v126 )
                        {
LABEL_171:
                          *(_WORD *)(v10 + 88) = v113 - 1;
                          goto LABEL_122;
                        }
                        v127 = (_WORD *)(*(_QWORD *)(v10 + 2784) + 24LL * v126 - 24);
                        while ( 2 )
                        {
                          if ( v127[7] == v113 )
                          {
                            if ( *((_DWORD *)v127 + 4) != *(_DWORD *)(v10 + 90) )
                            {
LABEL_169:
                              if ( *(_WORD *)(v10 + 90) <= v127[8] && *(_WORD *)(v10 + 92) <= v127[9] )
                                goto LABEL_171;
                            }
                          }
                          else if ( v127[7] >= v113 )
                          {
                            goto LABEL_169;
                          }
                          --v126;
                          v127 -= 12;
                          *(_DWORD *)(v10 + 2792) = v126;
                          if ( !v126 )
                            goto LABEL_171;
                          continue;
                        }
                      }
                    }
                    else
                    {
                      if ( (unsigned __int16)(v112 - 20) <= 1u )
                      {
                        v115 = *(_WORD *)(v10 + 90);
                        if ( v112 == 20 )
                        {
                          *(_WORD *)(v10 + 90) = v115 + 1;
                        }
                        else if ( v115 )
                        {
                          v116 = *(_DWORD *)(v10 + 2792);
                          if ( v116 )
                          {
                            v117 = *(_WORD *)(v10 + 88);
                            v118 = *(_QWORD *)(v10 + 2784) + 24LL * v116 - 24;
                            do
                            {
                              if ( v117 == *(_WORD *)(v118 + 14) )
                              {
                                if ( *(_DWORD *)(v118 + 16) == *(_DWORD *)(v10 + 90) )
                                  goto LABEL_131;
                              }
                              else if ( v117 > *(_WORD *)(v118 + 14) )
                              {
                                goto LABEL_131;
                              }
                              if ( *(_WORD *)(v118 + 16) >= v115 && *(_WORD *)(v10 + 92) <= *(_WORD *)(v118 + 18) )
                                break;
LABEL_131:
                              --v116;
                              v118 -= 24;
                              *(_DWORD *)(v10 + 2792) = v116;
                            }
                            while ( v116 );
                          }
                          *(_WORD *)(v10 + 90) = v115 - 1;
                        }
                        goto LABEL_122;
                      }
                      if ( (unsigned __int16)(v112 - 24) > 1u )
                      {
                        if ( (unsigned __int16)(v112 - 17) > 2u && (unsigned __int16)(v112 - 14) > 1u )
                        {
                          if ( v112 == 3 )
                          {
                            sub_1566D30(v10);
                            goto LABEL_123;
                          }
                          if ( sub_10CCDE0(v112) )
                          {
                            v128 = *(_DWORD *)(v10 + 20);
                            v129 = *(__int64 **)(v10 + 8);
                            if ( !v128 )
                              v128 = *(_DWORD *)(v10 + 16);
                            *(_DWORD *)(v10 + 40) = v128;
                            sub_14634E0(v129, v226);
                            goto LABEL_123;
                          }
                        }
                      }
                      else
                      {
                        v119 = *(_WORD *)(v10 + 92);
                        if ( v112 == 24 )
                        {
                          *(_WORD *)(v10 + 92) = v119 + 1;
                        }
                        else if ( v119 )
                        {
                          v120 = *(_DWORD *)(v10 + 2792);
                          if ( v120 )
                          {
                            v121 = *(_WORD *)(v10 + 88);
                            v122 = *(_QWORD *)(v10 + 2784) + 24LL * v120 - 24;
                            do
                            {
                              if ( v121 == *(_WORD *)(v122 + 14) )
                              {
                                if ( *(_DWORD *)(v122 + 16) == *(_DWORD *)(v10 + 90) )
                                  goto LABEL_144;
                              }
                              else if ( v121 > *(_WORD *)(v122 + 14) )
                              {
                                goto LABEL_144;
                              }
                              if ( *(_WORD *)(v10 + 90) <= *(_WORD *)(v122 + 16) && *(_WORD *)(v122 + 18) >= v119 )
                                break;
LABEL_144:
                              --v120;
                              v122 -= 24;
                              *(_DWORD *)(v10 + 2792) = v120;
                            }
                            while ( v120 );
                          }
                          *(_WORD *)(v10 + 92) = v119 - 1;
                        }
                      }
                    }
LABEL_122:
                    v114 = *(__int64 **)(v10 + 8);
                    *(_DWORD *)(v10 + 40) = *(_DWORD *)(v10 + 16);
                    sub_14634E0(v114, v226);
LABEL_123:
                    v112 = *(_WORD *)(v10 + 32);
                    if ( v112 == 1 )
                      goto LABEL_150;
                  }
                }
              }
              else
              {
                v135 = v283;
                if ( v283 == v284 )
                  goto LABEL_210;
              }
              operator delete(v135);
              goto LABEL_210;
            }
          }
        }
        else
        {
          v131 = *(_WORD *)(v10 + 92);
          if ( v34 == 24 )
          {
            *(_WORD *)(v10 + 92) = v131 + 1;
          }
          else if ( v131 )
          {
            v132 = *(_DWORD *)(v10 + 2792);
            if ( v132 )
            {
              v133 = *(_WORD *)(v10 + 88);
              v134 = *(_QWORD *)(v10 + 2784) + 24LL * v132 - 24;
              do
              {
                if ( v133 == *(_WORD *)(v134 + 14) )
                {
                  if ( *(_DWORD *)(v134 + 16) == *(_DWORD *)(v10 + 90) )
                    goto LABEL_201;
                }
                else if ( v133 > *(_WORD *)(v134 + 14) )
                {
                  goto LABEL_201;
                }
                if ( *(_WORD *)(v10 + 90) <= *(_WORD *)(v134 + 16) && *(_WORD *)(v134 + 18) >= v131 )
                  break;
LABEL_201:
                --v132;
                v134 -= 24;
                *(_DWORD *)(v10 + 2792) = v132;
              }
              while ( v132 );
            }
            *(_WORD *)(v10 + 92) = v131 - 1;
          }
        }
LABEL_85:
        v93 = *(__int64 **)(v10 + 8);
        *(_DWORD *)(v10 + 40) = *(_DWORD *)(v10 + 16);
        sub_14634E0(v93, v226);
        goto LABEL_86;
      }
      v92 = *(_WORD *)(v10 + 88);
      if ( !v92 )
        goto LABEL_85;
      v146 = *(_DWORD *)(v10 + 2792);
      if ( !v146 )
      {
LABEL_235:
        *(_WORD *)(v10 + 88) = v92 - 1;
        goto LABEL_85;
      }
      v147 = *(_QWORD *)(v10 + 2784) + 24LL * v146 - 24;
      while ( 1 )
      {
        if ( v92 == *(_WORD *)(v147 + 14) )
        {
          if ( *(_DWORD *)(v147 + 16) == *(_DWORD *)(v10 + 90) )
            goto LABEL_230;
        }
        else if ( v92 > *(_WORD *)(v147 + 14) )
        {
          goto LABEL_230;
        }
        if ( *(_WORD *)(v10 + 90) <= *(_WORD *)(v147 + 16) && *(_WORD *)(v10 + 92) <= *(_WORD *)(v147 + 18) )
          goto LABEL_235;
LABEL_230:
        --v146;
        v147 -= 24;
        *(_DWORD *)(v10 + 2792) = v146;
        if ( !v146 )
          goto LABEL_235;
      }
    }
    if ( (v13 & 6) != 2 )
      goto LABEL_4;
    v39 = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)(v39 + 28) & 0x7F) == 0x47 )
      break;
    v40 = *(_QWORD *)(v39 + 104);
    if ( (v40 & 3) == 0 )
      goto LABEL_29;
LABEL_4:
    v11 = v9 + 1;
    if ( v228 == v9 )
      goto LABEL_32;
LABEL_5:
    v9 = v11;
  }
  v40 = *(_QWORD *)(*(_QWORD *)(v39 + 48) + 104LL);
  if ( (v40 & 3) != 0 )
    goto LABEL_4;
LABEL_29:
  v41 = v40 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v41 )
    goto LABEL_4;
  v42 = *(_QWORD *)(*(_QWORD *)(v41 + 120) + 8 * v9);
  if ( (*(_BYTE *)(v42 + 97) & 6) == 4 )
  {
    v130 = sub_B74810(v42);
    sub_B747F0(v12, v130);
    goto LABEL_4;
  }
  v43 = sub_B73640(v42);
  sub_B74780(v12, v43);
  v11 = v9 + 1;
  if ( v228 != v9 )
    goto LABEL_5;
LABEL_32:
  v2 = v10;
  v3 = a2;
LABEL_33:
  v44 = *(__int64 **)(v3 + 168);
  if ( !v44 )
    goto LABEL_79;
  v264[1] = 0;
  v45 = *(_WORD *)(v2 + 92);
  v266 = 1;
  v225 = v45;
  v227 = *(_DWORD *)(v2 + 88);
  v46 = *v44 + 24LL * *((unsigned int *)v44 + 2) - 24;
  v47 = *(_DWORD *)v46;
  v48 = *(_DWORD *)(v46 + 4);
  if ( sub_10CCDE0(*(_WORD *)(v46 + 16)) )
  {
    if ( !v48 )
      v48 = v47;
  }
  else
  {
    v48 += v47;
  }
  v49 = *(_QWORD *)(v3 + 16);
  v50 = *v44;
  v264[0] = v48;
  v51 = (const __m128i *)v264;
  v52 = *((unsigned int *)v44 + 3);
  v265 = v49;
  v53 = *((unsigned int *)v44 + 2);
  v54 = v53 + 1;
  v55 = (__m128i *)(v50 + 24 * v53);
  if ( v54 > v52 )
  {
    v214 = v44 + 2;
    if ( v50 > (unsigned __int64)v264 || v55 <= (__m128i *)v264 )
    {
      sub_2237220(v44, v214, v54, 24);
      v55 = (__m128i *)(*v44 + 24LL * *((unsigned int *)v44 + 2));
    }
    else
    {
      sub_2237220(v44, v214, v54, 24);
      v51 = (const __m128i *)((char *)v264 + *v44 - v50);
      v55 = (__m128i *)(*v44 + 24LL * *((unsigned int *)v44 + 2));
    }
  }
  *v55 = _mm_loadu_si128(v51);
  v56 = v51[1].m128i_i64[0];
  v57 = (int *)(v2 + 16);
  v55[1].m128i_i64[0] = v56;
  v58 = *((unsigned int *)v44 + 3);
  v59 = (unsigned int)(*((_DWORD *)v44 + 2) + 1);
  v60 = v59 + 1;
  *((_DWORD *)v44 + 2) = v59;
  if ( v59 + 1 > v58 )
  {
    v211 = *v44;
    v212 = v44 + 2;
    if ( *v44 > (unsigned __int64)v57 || (unsigned __int64)v57 >= v211 + 24 * v59 )
    {
      v62 = (const __m128i *)(v2 + 16);
      sub_2237220(v44, v212, v60, 24);
      v61 = *v44;
      v59 = *((unsigned int *)v44 + 2);
    }
    else
    {
      v213 = (char *)v57 - v211;
      sub_2237220(v44, v212, v60, 24);
      v61 = *v44;
      v59 = *((unsigned int *)v44 + 2);
      v62 = (const __m128i *)&v213[*v44];
    }
  }
  else
  {
    v61 = *v44;
    v62 = (const __m128i *)(v2 + 16);
  }
  v63 = (__m128i *)(v61 + 24 * v59);
  *v63 = _mm_loadu_si128(v62);
  v63[1].m128i_i64[0] = v62[1].m128i_i64[0];
  v64 = (char *)*v44;
  v65 = (unsigned int)(*((_DWORD *)v44 + 2) + 1);
  *((_DWORD *)v44 + 2) = v65;
  sub_14368B0(*(_QWORD *)(v2 + 8), v64, v65, 1u, 0, 1u);
  v66 = *(_WORD *)(v2 + 32);
  if ( v66 == 22 )
  {
    ++*(_WORD *)(v2 + 88);
    goto LABEL_44;
  }
  if ( v66 == 23 )
  {
    v204 = *(_WORD *)(v2 + 88);
    if ( !v204 )
      goto LABEL_44;
    v205 = *(_DWORD *)(v2 + 2792);
    if ( !v205 )
    {
LABEL_370:
      *(_WORD *)(v2 + 88) = v204 - 1;
      goto LABEL_44;
    }
    v206 = *(_QWORD *)(v2 + 2784) + 24LL * v205 - 24;
    while ( 1 )
    {
      if ( v204 == *(_WORD *)(v206 + 14) )
      {
        if ( *(_DWORD *)(v206 + 16) == *(_DWORD *)(v2 + 90) )
          goto LABEL_365;
      }
      else if ( v204 > *(_WORD *)(v206 + 14) )
      {
        goto LABEL_365;
      }
      if ( *(_WORD *)(v2 + 90) <= *(_WORD *)(v206 + 16) && *(_WORD *)(v2 + 92) <= *(_WORD *)(v206 + 18) )
        goto LABEL_370;
LABEL_365:
      --v205;
      v206 -= 24;
      *(_DWORD *)(v2 + 2792) = v205;
      if ( !v205 )
        goto LABEL_370;
    }
  }
  if ( (unsigned __int16)(v66 - 20) <= 1u )
  {
    v67 = *(_WORD *)(v2 + 90);
    if ( v66 == 20 )
    {
      *(_WORD *)(v2 + 90) = v67 + 1;
    }
    else
    {
      if ( !v67 )
        goto LABEL_44;
      v217 = *(_DWORD *)(v2 + 2792);
      if ( v217 )
      {
        v218 = *(_WORD *)(v2 + 88);
        v219 = *(_QWORD *)(v2 + 2784) + 24LL * v217 - 24;
        do
        {
          if ( v218 == *(_WORD *)(v219 + 14) )
          {
            if ( *(_DWORD *)(v219 + 16) == *(_DWORD *)(v2 + 90) )
              goto LABEL_405;
          }
          else if ( v218 > *(_WORD *)(v219 + 14) )
          {
            goto LABEL_405;
          }
          if ( v67 <= *(_WORD *)(v219 + 16) && *(_WORD *)(v2 + 92) <= *(_WORD *)(v219 + 18) )
            break;
LABEL_405:
          --v217;
          v219 -= 24;
          *(_DWORD *)(v2 + 2792) = v217;
        }
        while ( v217 );
      }
      *(_WORD *)(v2 + 90) = v67 - 1;
    }
    goto LABEL_44;
  }
  if ( (unsigned __int16)(v66 - 24) <= 1u )
  {
    v162 = *(_WORD *)(v2 + 92);
    if ( v66 == 24 )
    {
      *(_WORD *)(v2 + 92) = v162 + 1;
    }
    else if ( v162 )
    {
      v163 = *(_DWORD *)(v2 + 2792);
      if ( v163 )
      {
        v164 = *(_WORD *)(v2 + 88);
        v165 = *(_QWORD *)(v2 + 2784) + 24LL * v163 - 24;
        do
        {
          if ( v164 == *(_WORD *)(v165 + 14) )
          {
            if ( *(_DWORD *)(v165 + 16) == *(_DWORD *)(v2 + 90) )
              goto LABEL_261;
          }
          else if ( v164 > *(_WORD *)(v165 + 14) )
          {
            goto LABEL_261;
          }
          if ( *(_WORD *)(v2 + 90) <= *(_WORD *)(v165 + 16) && *(_WORD *)(v165 + 18) >= v162 )
            break;
LABEL_261:
          --v163;
          v165 -= 24;
          *(_DWORD *)(v2 + 2792) = v163;
        }
        while ( v163 );
      }
      *(_WORD *)(v2 + 92) = v162 - 1;
    }
LABEL_44:
    v68 = *(__int64 **)(v2 + 8);
    *(_DWORD *)(v2 + 40) = *(_DWORD *)(v2 + 16);
    sub_14634E0(v68, (int *)(v2 + 16));
    goto LABEL_45;
  }
  if ( (unsigned __int16)(v66 - 17) <= 2u || (unsigned __int16)(v66 - 14) <= 1u )
    goto LABEL_44;
  if ( v66 == 3 )
  {
    sub_1566D30(v2);
  }
  else
  {
    if ( !sub_10CCDE0(v66) )
      goto LABEL_44;
    v222 = *(_DWORD *)(v2 + 20);
    v223 = *(__int64 **)(v2 + 8);
    if ( !v222 )
      v222 = *(_DWORD *)(v2 + 16);
    *(_DWORD *)(v2 + 40) = v222;
    sub_14634E0(v223, (int *)(v2 + 16));
  }
LABEL_45:
  v69 = *(_QWORD *)(v3 + 16);
  v70 = *(_BYTE *)(v69 + 28) & 0x7F;
  if ( v70 == 71 )
  {
    v69 = *(_QWORD *)(v69 + 48);
    v70 = *(_BYTE *)(v69 + 28) & 0x7F;
  }
  v71 = 0;
  v229 = v69;
  if ( (unsigned int)v70 - 35 <= 3 )
    v71 = v69;
  sub_146B5E0(&v258, v2, 1u, 1, 0);
  v72 = *(_QWORD *)(v2 + 96);
  v263 = 1;
  v242 = *(_QWORD *)(v72 + 544);
  v73 = *(_QWORD *)(v72 + 512);
  *(_QWORD *)(v72 + 512) = 0;
  v246 = v73;
  v273 = *(_QWORD *)(v72 + 9944);
  v248 = *(_DWORD *)(v72 + 80);
  v253 = *(_DWORD *)(v72 + 2632);
  *(_QWORD *)(v72 + 544) = v229 + 72;
  *(_DWORD *)(v72 + 80) = *(_DWORD *)(v72 + 40);
  *(_DWORD *)(v72 + 2632) = *(_DWORD *)(v72 + 3688);
  v262 = *(_QWORD *)(v2 + 96);
  sub_15F1950();
  if ( v71 )
  {
    v76 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 56LL) + 1LL) & 0x10) != 0;
    v77 = (__int64 *)(*(_QWORD *)(v71 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v78 = *v77;
    if ( *(_BYTE *)(*v77 + 16) != 26 )
    {
      v230 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 56LL) + 1LL) & 0x10) != 0;
      v79 = sub_F63050(*v77, v2, v74, v75);
      v76 = v230;
      v78 = v79;
    }
    v80 = *(_QWORD *)(v78 + 16);
    if ( (v80 & 0x1000000) != 0 )
    {
      v81 = *(unsigned __int16 *)(v78 + 22);
      v82 = (v80 & 0x40000000) != 0;
      v83 = 8 * v81 + 48;
      v84 = *(_BYTE *)(v78 + 19);
      if ( (v84 & 0x40) != 0 )
        v82 += (*(_BYTE *)(((v78 + v83 + ((v84 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v85 = ((v78 + v83 + ((SBYTE3(v80) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v82;
      v86 = ((unsigned __int8)v84 >> 1) & 0xF;
      if ( v86 != 2 )
        __asm { jmp     rdx }
      v166 = v85 + 8LL * (*(_WORD *)((v78 + ((v84 >> 5) & 4) + v83 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
      if ( (v80 & 0x20000000) != 0 )
        v166 += v81;
      v167 = *(_QWORD *)((v166 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else if ( *(_BYTE *)(v78 + 16) == 26
           || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v78 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
           && (v240 = v76, v234 = v78, v210 = sub_F63050(v78, v2, v74, v80), v78 = v234, v76 = v240, v210) )
    {
      v167 = *(_BYTE *)(v78 + 18) >> 5;
    }
    else
    {
      v167 = 0;
    }
    v238 = v76;
    v231 = v167;
    v168 = sub_B8C1B0(v71 + 72);
    v169 = v231;
    v170 = v238;
    v171 = *(_QWORD *)(v168 + 16);
    if ( (v171 & 4) != 0 )
      v71 = *(_QWORD *)(v171 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v71 = v171 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v71 )
      v71 -= 64LL;
  }
  else
  {
    v169 = 0;
    v170 = 0;
  }
  sub_19A2CD0(v267, *(_QWORD *)(v2 + 96), v71, v169, v170);
  v274 = v276;
  ptr = v279;
  v261 = 0;
  v275 = 0x400000000LL;
  v278 = 0x400000000LL;
  v259 = 0;
  v239 = sub_14A6770(
           v2,
           0,
           (unsigned int)&v261,
           (unsigned int)&v274,
           (unsigned int)&ptr,
           (unsigned int)&v259,
           (__int64)v260);
  if ( *(_WORD *)(v2 + 32) != 1 || (v172 = *(_QWORD *)(v2 + 24), *(_QWORD *)(v3 + 16) != v172) )
  {
    sub_1564820(&v280, v2, *(unsigned int *)(v2 + 16), 1600);
    if ( (_BYTE)v285 )
    {
      sub_FC7790(v282, (__int64 *)&v280, SHIBYTE(v285));
      v282 = 0;
      v285 = 0;
    }
    if ( v283 != v284 )
      operator delete(v283);
    v173 = (void **)v280;
    if ( v280 )
    {
      v174 = v281;
      if ( v281 )
      {
        if ( (unsigned __int64)v280 < v281 || (unsigned __int64)v280 > v281 + 14848 )
        {
          v175 = *((_QWORD *)v280 + 66);
          v176 = (unsigned __int64)*((unsigned int *)v280 + 134) << 6;
          v177 = (void **)(v175 + v176);
          if ( v175 != v175 + v176 )
          {
            v232 = v2;
            v178 = (void **)v280;
            v179 = v72;
            v180 = *((_QWORD *)v280 + 66);
            v254 = v3;
            v181 = v44;
            v182 = v175 + v176;
            do
            {
              while ( 1 )
              {
                v182 -= 64;
                v183 = *(void **)(v182 + 24);
                if ( v183 == (void *)(v182 + 40) )
                  break;
                operator delete(v183);
                if ( v180 == v182 )
                  goto LABEL_288;
              }
            }
            while ( v180 != v182 );
LABEL_288:
            v72 = v179;
            v173 = v178;
            v44 = v181;
            v2 = v232;
            v3 = v254;
            v177 = (void **)v173[66];
          }
          if ( v177 != v173 + 68 )
            free(v177);
          v184 = (void **)v173[52];
          if ( v184 != v173 + 54 )
            free(v184);
          v185 = v173 + 48;
          v255 = v3;
          v186 = v173;
          v233 = v173 + 8;
          v187 = v44;
          v188 = v185;
          do
          {
            while ( *v188 != v188 + 2 )
            {
              operator delete(*v188);
              v188 -= 4;
              if ( v188 == v233 )
                goto LABEL_296;
            }
            v188 -= 4;
          }
          while ( v233 != v188 );
LABEL_296:
          v44 = v187;
          v189 = v186;
          v3 = v255;
          operator delete(v189, 0x3A0u);
        }
        else
        {
          v208 = *(unsigned int *)(v281 + 14976);
          *(_DWORD *)(v281 + 14976) = v208 + 1;
          *(_QWORD *)(v174 + 8 * v208 + 14848) = v173;
        }
      }
    }
    v172 = *(_QWORD *)(v3 + 16);
  }
  v190 = v259 & 0xFFFFFFFFFFFFFFFELL;
  if ( v259 <= 1 )
    v190 = 0;
  sub_183ED20(*(_QWORD *)(v2 + 96), v172, v239, v261, (_DWORD)v274, v275, (__int64)ptr, (unsigned int)v278, v190);
  for ( i = *(_WORD *)(v2 + 32); i != 1; i = *(_WORD *)(v2 + 32) )
  {
    if ( (unsigned __int16)(i - 22) <= 1u )
    {
      v192 = *(_WORD *)(v2 + 88);
      if ( i == 22 )
      {
        *(_WORD *)(v2 + 88) = v192 + 1;
      }
      else if ( v192 )
      {
        v202 = *(_DWORD *)(v2 + 2792);
        if ( !v202 )
        {
LABEL_342:
          *(_WORD *)(v2 + 88) = v192 - 1;
          goto LABEL_304;
        }
        v203 = (_WORD *)(*(_QWORD *)(v2 + 2784) + 24LL * v202 - 24);
        while ( 2 )
        {
          if ( v192 == v203[7] )
          {
            if ( *((_DWORD *)v203 + 4) != *(_DWORD *)(v2 + 90) )
            {
LABEL_340:
              if ( *(_WORD *)(v2 + 90) <= v203[8] && *(_WORD *)(v2 + 92) <= v203[9] )
                goto LABEL_342;
            }
          }
          else if ( v192 <= v203[7] )
          {
            goto LABEL_340;
          }
          --v202;
          v203 -= 12;
          *(_DWORD *)(v2 + 2792) = v202;
          if ( !v202 )
            goto LABEL_342;
          continue;
        }
      }
    }
    else
    {
      if ( (unsigned __int16)(i - 20) <= 1u )
      {
        v194 = *(_WORD *)(v2 + 90);
        if ( i == 20 )
        {
          *(_WORD *)(v2 + 90) = v194 + 1;
        }
        else if ( v194 )
        {
          v195 = *(_DWORD *)(v2 + 2792);
          if ( v195 )
          {
            v196 = *(_WORD *)(v2 + 88);
            v197 = *(_QWORD *)(v2 + 2784) + 24LL * v195 - 24;
            do
            {
              if ( v196 == *(_WORD *)(v197 + 14) )
              {
                if ( *(_DWORD *)(v197 + 16) == *(_DWORD *)(v2 + 90) )
                  goto LABEL_313;
              }
              else if ( v196 > *(_WORD *)(v197 + 14) )
              {
                goto LABEL_313;
              }
              if ( *(_WORD *)(v197 + 16) >= v194 && *(_WORD *)(v2 + 92) <= *(_WORD *)(v197 + 18) )
                break;
LABEL_313:
              --v195;
              v197 -= 24;
              *(_DWORD *)(v2 + 2792) = v195;
            }
            while ( v195 );
          }
          *(_WORD *)(v2 + 90) = v194 - 1;
        }
        goto LABEL_304;
      }
      if ( (unsigned __int16)(i - 24) > 1u )
      {
        if ( (unsigned __int16)(i - 14) > 1u && (unsigned __int16)(i - 17) > 2u )
        {
          if ( i == 3 )
          {
            sub_1566D30(v2);
            continue;
          }
          if ( sub_10CCDE0(i) )
          {
            v215 = *(_DWORD *)(v2 + 20);
            v216 = *(__int64 **)(v2 + 8);
            if ( !v215 )
              v215 = *(_DWORD *)(v2 + 16);
            *(_DWORD *)(v2 + 40) = v215;
            sub_14634E0(v216, v57);
            continue;
          }
        }
      }
      else
      {
        v198 = *(_WORD *)(v2 + 92);
        if ( i == 24 )
        {
          *(_WORD *)(v2 + 92) = v198 + 1;
        }
        else if ( v198 )
        {
          v199 = *(_DWORD *)(v2 + 2792);
          if ( v199 )
          {
            v200 = *(_WORD *)(v2 + 88);
            v201 = *(_QWORD *)(v2 + 2784) + 24LL * v199 - 24;
            do
            {
              if ( v200 == *(_WORD *)(v201 + 14) )
              {
                if ( *(_DWORD *)(v201 + 16) == *(_DWORD *)(v2 + 90) )
                  goto LABEL_326;
              }
              else if ( v200 > *(_WORD *)(v201 + 14) )
              {
                goto LABEL_326;
              }
              if ( *(_WORD *)(v2 + 90) <= *(_WORD *)(v201 + 16) && *(_WORD *)(v201 + 18) >= v198 )
                break;
LABEL_326:
              --v199;
              v201 -= 24;
              *(_DWORD *)(v2 + 2792) = v199;
            }
            while ( v199 );
          }
          *(_WORD *)(v2 + 92) = v198 - 1;
        }
      }
    }
LABEL_304:
    v193 = *(__int64 **)(v2 + 8);
    *(_DWORD *)(v2 + 40) = *(_DWORD *)(v2 + 16);
    sub_14634E0(v193, v57);
  }
  if ( *(_QWORD *)(v3 + 16) == *(_QWORD *)(v2 + 24) )
    sub_146AA30(v2);
  if ( (__int64 *)*v44 != v44 + 2 )
    free((void *)*v44);
  operator delete(v44, 0x70u);
  v87 = ptr;
  *(_QWORD *)(v3 + 168) = 0;
  if ( v87 != v279 )
    free(v87);
  if ( v274 != v276 )
    free(v274);
  sub_19A2DA0(v267);
  sub_146B590((__int64)&v262);
  if ( v242 )
  {
    *(_QWORD *)(v72 + 544) = v242;
    *(_QWORD *)(v72 + 512) = v246;
    *(_QWORD *)(v72 + 9944) = v273;
    *(_DWORD *)(v72 + 80) = v248;
    *(_DWORD *)(v72 + 2632) = v253;
  }
  if ( v258 )
    sub_1564F70(v258);
  v88 = *(_DWORD *)(v2 + 2792);
  if ( v88 )
  {
    v89 = *(_WORD *)(v2 + 88);
    v90 = *(_QWORD *)(v2 + 2784) + 24LL * v88 - 24;
    do
    {
      if ( v89 == *(_WORD *)(v90 + 14) )
      {
        if ( *(_DWORD *)(v90 + 16) == *(_DWORD *)(v2 + 90) )
          goto LABEL_73;
      }
      else if ( v89 > *(_WORD *)(v90 + 14) )
      {
        goto LABEL_73;
      }
      if ( *(_WORD *)(v2 + 90) <= *(_WORD *)(v90 + 16) && *(_WORD *)(v2 + 92) <= *(_WORD *)(v90 + 18) )
        break;
LABEL_73:
      --v88;
      v90 -= 24;
      *(_DWORD *)(v2 + 2792) = v88;
    }
    while ( v88 );
  }
  *(_DWORD *)(v2 + 88) = v227;
  *(_WORD *)(v2 + 92) = v225;
LABEL_79:
  while ( v270 )
  {
    sub_1564F70(v269);
    --v270;
  }
  sub_18685D0(*(_QWORD *)(v2 + 96), *(_QWORD *)(*(_QWORD *)(v2 + 96) + 608LL), *(_QWORD *)(v3 + 16));
  *v271 -= v272;
  for ( result = v270; v270; --v270 )
    result = sub_1564F70(v269);
  return result;
}
