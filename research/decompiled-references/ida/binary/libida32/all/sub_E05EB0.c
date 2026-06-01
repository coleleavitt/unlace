unsigned __int64 __fastcall sub_E05EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rcx
  __m128 *v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned int v15; // r12d
  int v16; // edi
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rdx
  __m128 *v26; // r9
  int v27; // r11d
  _QWORD *v28; // rsi
  __m128 *v29; // rdx
  int v30; // r15d
  unsigned __int64 v31; // rsi
  unsigned int v32; // edi
  unsigned __int64 *v33; // rcx
  unsigned __int64 v34; // r8
  __int64 v35; // rsi
  int v36; // eax
  int v37; // edi
  __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  const __m128i *v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // r12
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int64 v51; // rdx
  __int64 v52; // rdi
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rsi
  __int64 v55; // rbx
  int v56; // r15d
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // r13
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // r11
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // r12
  int v67; // r15d
  unsigned __int64 v68; // r12
  __m128i *v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  __int64 v73; // rdi
  __int64 v74; // r12
  unsigned __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rsi
  unsigned __int64 v78; // rdx
  __int64 v79; // rdi
  __int64 v80; // r13
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // r15
  unsigned __int64 v84; // rbx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  unsigned __int64 v88; // r10
  __m128 *v89; // rax
  unsigned __int64 v90; // r14
  _BYTE *v91; // r15
  __m128i *v92; // rax
  __m128i v93; // xmm5
  void **p_ptr; // rax
  void **v95; // r12
  const __m128i *v96; // rcx
  unsigned __int64 v97; // rbx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 *v100; // r14
  int v101; // ebp
  __int64 v102; // r13
  __int64 v103; // rdx
  int v104; // ebp
  __int64 v105; // r8
  __int64 v106; // r15
  bool v107; // r12
  __int64 v108; // rdi
  unsigned __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // r9
  __int64 v112; // r11
  __int64 v113; // r8
  __int64 v114; // rdx
  unsigned __int64 v115; // r12
  __int64 v116; // rax
  __int64 v117; // rax
  void **v118; // r15
  unsigned __int64 v119; // rdx
  __m128i *v120; // rsi
  unsigned __int64 v121; // rax
  __int64 v122; // rax
  unsigned __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rbx
  __int64 *v127; // r13
  unsigned int v128; // r15d
  unsigned int v129; // edi
  __int64 *v130; // rax
  __int64 v131; // rsi
  unsigned __int64 *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // r13
  unsigned __int64 v135; // rdx
  __int64 v136; // rax
  unsigned __int64 v137; // rdx
  unsigned __int64 v138; // rax
  _DWORD *v139; // rsi
  __int64 v140; // rdi
  int v141; // eax
  __int64 v142; // rdi
  int v143; // eax
  __int64 v144; // r12
  unsigned __int64 v145; // rdx
  __int64 v146; // rax
  unsigned __int64 v147; // rdx
  unsigned __int64 v148; // rax
  _DWORD *v149; // rax
  __int64 v150; // rdi
  int v151; // edx
  __int64 v152; // r12
  unsigned __int64 v153; // rsi
  __int64 v154; // rax
  unsigned __int64 v155; // rsi
  unsigned __int64 v156; // rax
  unsigned __int64 v157; // r8
  __int64 v158; // r8
  __m128 *v159; // rax
  __int64 v160; // r12
  unsigned __int64 v161; // rdx
  __int64 v162; // rsi
  unsigned __int64 v163; // rdx
  unsigned __int64 v164; // rax
  _DWORD *v165; // rax
  __int64 v166; // rdi
  int v167; // edx
  __int64 v168; // r13
  unsigned __int64 v169; // rdx
  __int64 v170; // rsi
  unsigned __int64 v171; // rdx
  unsigned __int64 v172; // rax
  _DWORD *v173; // rsi
  __int64 v174; // rdi
  int v175; // eax
  __int64 v176; // rdi
  int v177; // eax
  unsigned int v178; // eax
  __int64 v179; // rax
  __int64 v180; // rsi
  _QWORD *v181; // rdx
  int v182; // r15d
  _QWORD *v183; // rsi
  __m128 *v184; // rdx
  int v185; // r11d
  unsigned __int64 v186; // rsi
  unsigned int v187; // edi
  unsigned __int64 *v188; // rcx
  unsigned __int64 v189; // r8
  unsigned __int64 v190; // rsi
  int v191; // r12d
  int v192; // r8d
  __int64 *v193; // rdi
  __int64 v194; // r12
  unsigned __int64 v195; // rsi
  __int64 v196; // rsi
  unsigned __int64 v197; // rdx
  unsigned __int64 v198; // rax
  __int64 v199; // rbx
  __m128 *v200; // rdx
  __int64 v201; // rbx
  __m128 *v202; // rdx
  __m128 *v203; // rax
  unsigned __int64 *v204; // r10
  unsigned __int64 *v205; // r10
  __int64 *v206; // rdx
  int v207; // esi
  __int64 v208; // rax
  __int64 v209; // rax
  _QWORD *v210; // rax
  __int64 v211; // rdx
  _QWORD *v212; // rcx
  __int64 *v213; // rsi
  int v214; // ebx
  _QWORD *v215; // rdx
  __int64 *v216; // r11
  __int64 v217; // rcx
  unsigned int v218; // esi
  _QWORD *v219; // rdx
  __int64 v220; // rdi
  __int64 v221; // rcx
  int v222; // r8d
  int v223; // r8d
  __int64 v224; // r9
  unsigned int v225; // r11d
  int v226; // edi
  __int64 *v227; // rcx
  int v228; // r9d
  __int64 *v229; // r8
  unsigned __int64 v230; // rax
  __int64 v231; // rax
  _QWORD *v232; // rax
  __int64 v233; // rdx
  _QWORD *v234; // rcx
  __int64 *v235; // rsi
  int v236; // ebx
  _QWORD *v237; // rdx
  __int64 *v238; // r11
  int v239; // r15d
  __int64 v240; // rcx
  unsigned int v241; // esi
  _QWORD *v242; // rdx
  __int64 v243; // rdi
  __int64 v244; // rcx
  int v245; // r9d
  int v246; // r9d
  __int64 v247; // r10
  unsigned int v248; // ecx
  int v249; // r8d
  __int64 *v250; // rdi
  __int64 v251; // rdx
  _QWORD *j; // rdx
  __int64 v253; // rdx
  _QWORD *i; // rdx
  int v255; // r9d
  _QWORD *v256; // r8
  int v257; // r9d
  _QWORD *v258; // r8
  __int64 v259; // [rsp-10h] [rbp-308h]
  __int64 v260; // [rsp+8h] [rbp-2F0h]
  unsigned __int64 v261; // [rsp+8h] [rbp-2F0h]
  unsigned __int64 v262; // [rsp+8h] [rbp-2F0h]
  int v263; // [rsp+8h] [rbp-2F0h]
  int v264; // [rsp+8h] [rbp-2F0h]
  __int64 *v265; // [rsp+8h] [rbp-2F0h]
  void **v266; // [rsp+10h] [rbp-2E8h]
  __int64 v267; // [rsp+10h] [rbp-2E8h]
  __int64 v268; // [rsp+10h] [rbp-2E8h]
  int v269; // [rsp+10h] [rbp-2E8h]
  __int64 v270; // [rsp+10h] [rbp-2E8h]
  int v271; // [rsp+10h] [rbp-2E8h]
  __int64 *v272; // [rsp+10h] [rbp-2E8h]
  unsigned __int64 v273; // [rsp+18h] [rbp-2E0h] BYREF
  __int64 v274; // [rsp+20h] [rbp-2D8h]
  __m128 *v275; // [rsp+28h] [rbp-2D0h]
  unsigned __int64 v276; // [rsp+30h] [rbp-2C8h]
  void **v277; // [rsp+38h] [rbp-2C0h]
  __int64 *v278; // [rsp+40h] [rbp-2B8h] BYREF
  void **v279; // [rsp+48h] [rbp-2B0h]
  __int64 v280; // [rsp+50h] [rbp-2A8h]
  __m128 *v281; // [rsp+58h] [rbp-2A0h]
  __int64 v282; // [rsp+60h] [rbp-298h]
  __int64 v283; // [rsp+68h] [rbp-290h]
  unsigned __int64 v284; // [rsp+70h] [rbp-288h] BYREF
  int v285; // [rsp+78h] [rbp-280h]
  __int64 v286; // [rsp+80h] [rbp-278h]
  void *v287; // [rsp+90h] [rbp-268h] BYREF
  __int64 v288; // [rsp+98h] [rbp-260h]
  char v289; // [rsp+A0h] [rbp-258h] BYREF
  void *ptr; // [rsp+E0h] [rbp-218h] BYREF
  __int64 v291; // [rsp+E8h] [rbp-210h]
  __m128 v292; // [rsp+F0h] [rbp-208h]
  __m128 v293; // [rsp+1B0h] [rbp-148h] BYREF
  __int64 v294; // [rsp+1C0h] [rbp-138h] BYREF

  v6 = (__int64 *)a1;
  v7 = sub_B5AB30(a2, a2, a3, a4, a5, a6);
  if ( !v7 )
    return 0;
  v10 = (__int64)v7;
  if ( (*((_BYTE *)v7 + 74) & 1) == 0 )
    return 0;
  v11 = *(unsigned int *)(a1 + 288);
  v12 = a1 + 272;
  v13 = *(__m128 **)(a1 + 272);
  if ( !(_DWORD)v11 )
    goto LABEL_8;
  v14 = (unsigned int)(v11 - 1);
  v15 = ((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4);
  v16 = v14 & v15;
  v17 = (unsigned __int64)&v13[(unsigned int)v14 & v15];
  v18 = *(_QWORD *)v17;
  if ( v10 == *(_QWORD *)v17 )
  {
LABEL_5:
    sub_CC3E30(&v293, (_QWORD *)v17, (__m128 *)v13[(unsigned int)v11].m128_u64, v12, 1);
    return *(_QWORD *)(v293.m128_u64[0] + 8);
  }
  v9 = 1;
  v157 = 0;
  if ( v18 != -4096 )
  {
    while ( 1 )
    {
      if ( !v157 && v18 == -8192 )
        v157 = v17;
      v16 = v14 & (v9 + v16);
      v17 = (unsigned __int64)&v13[v16];
      v18 = *(_QWORD *)v17;
      if ( v10 == *(_QWORD *)v17 )
        goto LABEL_5;
      if ( v18 == -4096 )
        break;
      v9 = (unsigned int)(v9 + 1);
    }
    if ( v157 )
      v17 = v157;
  }
  v36 = *((_DWORD *)v6 + 70) + 1;
  v8 = (unsigned int)(4 * v36);
  if ( (unsigned int)v8 >= 3 * (int)v11 )
  {
LABEL_8:
    v21 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v11 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1);
    v22 = ((v21 >> 16) | v21) + 1;
    if ( (unsigned int)v22 < 0x40 )
      LODWORD(v22) = 64;
    *((_DWORD *)v6 + 72) = v22;
    v23 = sub_220C370(16LL * (unsigned int)v22, 8, 64, v12, v8, v9);
    v12 = (__int64)(v6 + 34);
    v6[34] = v23;
    if ( v13 )
    {
      v24 = *((unsigned int *)v6 + 72);
      v25 = (_QWORD *)v23;
      v6[35] = 0;
      v26 = &v13[v11];
      v27 = v24;
      v28 = (_QWORD *)(v23 + 16 * v24);
      if ( (_QWORD *)v23 != v28 )
      {
        do
        {
          *v25 = -4096;
          v25 += 2;
        }
        while ( v28 != v25 );
      }
      v29 = v13;
      v30 = v27 - 1;
      if ( v13 != v26 )
      {
        do
        {
          v31 = v29->m128_u64[0];
          if ( v29->m128_u64[0] != -8192 && v31 != -4096 )
          {
            if ( !v27 )
            {
              *(_QWORD *)&dword_0 = v29->m128_u64[0];
              BUG();
            }
            v32 = v30 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
            v33 = (unsigned __int64 *)(v23 + 16LL * v32);
            v34 = *v33;
            if ( v31 != *v33 && v34 != -4096 )
            {
              v263 = 1;
              v204 = nullptr;
              while ( 1 )
              {
                if ( !v204 && v34 == -8192 )
                  v204 = v33;
                v32 = v30 & (v263 + v32);
                v33 = (unsigned __int64 *)(v23 + 16LL * v32);
                v34 = *v33;
                if ( v31 == *v33 )
                  break;
                if ( v34 == -4096 )
                {
                  if ( v204 )
                    v33 = v204;
                  break;
                }
                ++v263;
              }
            }
            *v33 = v31;
            v35 = v29->m128_i64[1];
            ++*((_DWORD *)v6 + 70);
            v33[1] = v35;
          }
          ++v29;
        }
        while ( v26 != v29 );
        v12 = (__int64)(v6 + 34);
      }
      v260 = v12;
      operator delete();
      v12 = v260;
      v13 = (__m128 *)v6[34];
      LODWORD(v11) = *((_DWORD *)v6 + 72);
      v36 = *((_DWORD *)v6 + 70) + 1;
    }
    else
    {
      v199 = *((unsigned int *)v6 + 72);
      v6[35] = 0;
      LODWORD(v11) = v199;
      v13 = (__m128 *)(v23 + 16 * v199);
      if ( (__m128 *)v23 != v13 )
      {
        v200 = (__m128 *)v23;
        do
        {
          v200->m128_u64[0] = -4096;
          ++v200;
        }
        while ( v13 != v200 );
        v13 = (__m128 *)v23;
      }
      v36 = 1;
    }
    if ( (_DWORD)v11 )
    {
      v37 = (v11 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v17 = (unsigned __int64)&v13[v37];
      v38 = *(_QWORD *)v17;
      if ( v10 == *(_QWORD *)v17 )
        goto LABEL_24;
      v228 = 1;
      v229 = nullptr;
      if ( v38 != -4096 )
      {
        while ( 1 )
        {
          if ( v38 == -8192 && !v229 )
            v229 = (__int64 *)v17;
          v37 = (v11 - 1) & (v228 + v37);
          v17 = (unsigned __int64)&v13[v37];
          v38 = *(_QWORD *)v17;
          if ( v10 == *(_QWORD *)v17 )
            goto LABEL_24;
          if ( v38 == -4096 )
          {
            if ( !v229 )
              break;
            v38 = *v229;
            v17 = (unsigned __int64)v229;
            goto LABEL_24;
          }
          ++v228;
        }
      }
LABEL_208:
      *((_DWORD *)v6 + 70) = v36;
      goto LABEL_26;
    }
LABEL_390:
    ++*((_DWORD *)v6 + 70);
    BUG();
  }
  v158 = (unsigned int)v11 >> 3;
  if ( (int)v11 - *((_DWORD *)v6 + 71) - v36 > (unsigned int)v158 )
  {
    v38 = *(_QWORD *)v17;
    goto LABEL_24;
  }
  v178 = ((((((((v14 >> 1) | v14 | (((v14 >> 1) | v14) >> 2)) >> 4) | (v14 >> 1) | v14 | (((v14 >> 1) | v14) >> 2)) >> 8)
          | (((v14 >> 1) | v14 | (((v14 >> 1) | v14) >> 2)) >> 4)
          | (v14 >> 1)
          | v14
          | (((v14 >> 1) | v14) >> 2)) >> 16)
        | (((((v14 >> 1) | v14 | (((v14 >> 1) | v14) >> 2)) >> 4) | (v14 >> 1) | v14 | (((v14 >> 1) | v14) >> 2)) >> 8)
        | (((v14 >> 1) | v14 | (((v14 >> 1) | v14) >> 2)) >> 4)
        | (v14 >> 1)
        | v14
        | (((v14 >> 1) | v14) >> 2))
       + 1;
  if ( v178 < 0x40 )
    v178 = 64;
  *((_DWORD *)v6 + 72) = v178;
  v179 = sub_220C370(16LL * v178, 8, 64, v12, v158, v9);
  v12 = (__int64)(v6 + 34);
  v6[34] = v179;
  if ( v13 )
  {
    v180 = *((unsigned int *)v6 + 72);
    v181 = (_QWORD *)v179;
    v6[35] = 0;
    v182 = v180;
    v183 = (_QWORD *)(v179 + 16 * v180);
    if ( (_QWORD *)v179 != v183 )
    {
      do
      {
        *v181 = -4096;
        v181 += 2;
      }
      while ( v183 != v181 );
    }
    v184 = v13;
    v185 = v182 - 1;
    do
    {
      v186 = v184->m128_u64[0];
      if ( v184->m128_u64[0] != -4096 && v186 != -8192 )
      {
        if ( !v182 )
        {
          *(_QWORD *)&dword_0 = v184->m128_u64[0];
          BUG();
        }
        v187 = v185 & (((unsigned int)v186 >> 9) ^ ((unsigned int)v186 >> 4));
        v188 = (unsigned __int64 *)(v179 + 16LL * v187);
        v189 = *v188;
        if ( v186 != *v188 && v189 != -4096 )
        {
          v271 = 1;
          v205 = nullptr;
          v275 = v184;
          while ( 1 )
          {
            if ( v189 == -8192 && !v205 )
              v205 = v188;
            v187 = v185 & (v271 + v187);
            v188 = (unsigned __int64 *)(v179 + 16LL * v187);
            v189 = *v188;
            if ( v186 == *v188 )
            {
              v184 = v275;
              goto LABEL_202;
            }
            if ( v189 == -4096 )
              break;
            ++v271;
          }
          v184 = v275;
          if ( v205 )
            v188 = v205;
        }
LABEL_202:
        *v188 = v186;
        v190 = v184->m128_u64[1];
        ++*((_DWORD *)v6 + 70);
        v188[1] = v190;
      }
      ++v184;
    }
    while ( &v13[v11] != v184 );
    operator delete();
    v12 = (__int64)(v6 + 34);
    v13 = (__m128 *)v6[34];
    LODWORD(v11) = *((_DWORD *)v6 + 72);
    v36 = *((_DWORD *)v6 + 70) + 1;
  }
  else
  {
    v201 = *((unsigned int *)v6 + 72);
    v6[35] = 0;
    LODWORD(v11) = v201;
    v13 = (__m128 *)(v179 + 16 * v201);
    if ( (__m128 *)v179 != v13 )
    {
      v202 = (__m128 *)v179;
      do
      {
        v202->m128_u64[0] = -4096;
        ++v202;
      }
      while ( v13 != v202 );
      v13 = (__m128 *)v179;
    }
    v36 = 1;
  }
  if ( !(_DWORD)v11 )
    goto LABEL_390;
  v191 = (v11 - 1) & v15;
  v17 = (unsigned __int64)&v13[v191];
  v38 = *(_QWORD *)v17;
  if ( v10 != *(_QWORD *)v17 )
  {
    v192 = 1;
    v193 = nullptr;
    if ( v38 != -4096 )
    {
      while ( 1 )
      {
        if ( !v193 && v38 == -8192 )
          v193 = (__int64 *)v17;
        v191 = (v11 - 1) & (v192 + v191);
        v17 = (unsigned __int64)&v13[v191];
        v38 = *(_QWORD *)v17;
        if ( v10 == *(_QWORD *)v17 )
          goto LABEL_24;
        if ( v38 == -4096 )
        {
          if ( !v193 )
            goto LABEL_208;
          v38 = *v193;
          v17 = (unsigned __int64)v193;
          goto LABEL_24;
        }
        ++v192;
      }
    }
    goto LABEL_208;
  }
LABEL_24:
  *((_DWORD *)v6 + 70) = v36;
  if ( v38 != -4096 )
    --*((_DWORD *)v6 + 71);
LABEL_26:
  *(_QWORD *)v17 = v10;
  *(_QWORD *)(v17 + 8) = 0;
  v275 = &v293;
  sub_CC3E30(&v293, (_QWORD *)v17, (__m128 *)v13[(unsigned int)v11].m128_u64, v12, 1);
  v293.m128_u64[0] = (unsigned __int64)&v294;
  v293.m128_u64[1] = 0x800000000LL;
  v277 = &v287;
  v287 = &v289;
  v288 = 0x200000000LL;
  if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 59 > 2 )
  {
    LODWORD(v280) = 0;
    v56 = 0;
LABEL_141:
    p_ptr = &ptr;
    v279 = &ptr;
    goto LABEL_77;
  }
  v43 = *(_QWORD *)(v10 + 104);
  v44 = *(_QWORD *)(v43 + 96);
  v45 = v44 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v44 & 1) == 0 )
  {
    v40 = (const __m128i *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v44 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v44 & 2) == 0 )
        goto LABEL_30;
      v144 = v40[1147].m128i_i64[1];
      v145 = v43 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v144 )
      {
        v146 = v40[147].m128i_i64[0];
        v40[152].m128i_i64[0] += 24;
        v147 = (v146 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v40[147].m128i_i64[1] >= v147 + 24 && v146 )
        {
          v40[147].m128i_i64[0] = v147 + 24;
          v148 = (v146 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v148 = sub_962430((__int64)v40[147].m128i_i64, 24, 24, 3, v41, v42);
          v147 = v148 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v148 = v144;
        v145 = v147 | 4;
        *(_DWORD *)(v148 + 8) = 0;
        *(_QWORD *)(v148 + 16) = v43;
      }
      v45 = v145 & 0xFFFFFFFFFFFFFFFELL;
      v44 = v45 | 1;
      *(_QWORD *)(v43 + 96) = v45 | 1;
    }
  }
  if ( v45 )
  {
    if ( (v45 & 4) != 0 )
    {
      v149 = (_DWORD *)(v44 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v149 )
      {
        v150 = *(_QWORD *)v149;
        v151 = *(_DWORD *)(*(_QWORD *)v149 + 12LL);
        if ( v149[2] != v151 )
        {
          v149[2] = v151;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v150 + 152LL))(v150, v43);
        }
      }
    }
  }
LABEL_30:
  v46 = *(_QWORD *)(v10 + 128);
  if ( (*(_BYTE *)(v46 + 24) & 1) != 0 )
    v47 = sub_B72C40(v46);
  else
    v47 = *(_QWORD *)(v46 + 24);
  v48 = *(_QWORD *)(v10 + 104);
  v49 = *(_QWORD *)(v48 + 96);
  v50 = v49;
  v51 = v49 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v49 & 1) != 0 )
    goto LABEL_117;
  v40 = (const __m128i *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v49 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_117;
  if ( (v49 & 2) != 0 )
  {
    v134 = v40[1147].m128i_i64[1];
    v135 = v48 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v134 )
    {
      v136 = v40[147].m128i_i64[0];
      v40[152].m128i_i64[0] += 24;
      v137 = (v136 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v40[147].m128i_i64[1] >= v137 + 24 && v136 )
      {
        v40[147].m128i_i64[0] = v137 + 24;
        v138 = (v136 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v138 = sub_962430((__int64)v40[147].m128i_i64, 24, 24, 3, v41, v42);
        v137 = v138 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v138 = v134;
      v135 = v137 | 4;
      *(_DWORD *)(v138 + 8) = 0;
      *(_QWORD *)(v138 + 16) = v48;
    }
    v51 = v135 & 0xFFFFFFFFFFFFFFFELL;
    v50 = v51 | 1;
    *(_QWORD *)(v48 + 96) = v51 | 1;
LABEL_117:
    if ( v51 )
    {
      if ( (v51 & 4) != 0 )
      {
        v139 = (_DWORD *)(v50 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v139 )
        {
          v140 = *(_QWORD *)v139;
          v141 = *(_DWORD *)(*(_QWORD *)v139 + 12LL);
          if ( v139[2] != v141 )
          {
            v139[2] = v141;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v140 + 152LL))(v140, v48);
          }
        }
      }
    }
    v52 = *(_QWORD *)(v10 + 128);
    v48 = *(_QWORD *)(v10 + 104);
    v53 = *(_QWORD *)(v48 + 96);
    v54 = v53 & 0xFFFFFFFFFFFFFFFELL;
    v261 = v47 + 24LL * *(unsigned int *)(v52 + 16);
    LOBYTE(v49) = v53;
    if ( (v53 & 1) != 0 )
      goto LABEL_123;
    v40 = (const __m128i *)(v53 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v53 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_123;
    goto LABEL_36;
  }
  v52 = *(_QWORD *)(v10 + 128);
  v53 = 3LL * *(unsigned int *)(v52 + 16);
  v54 = v47 + 24LL * *(unsigned int *)(v52 + 16);
  v261 = v54;
LABEL_36:
  if ( (v49 & 2) == 0 )
    goto LABEL_37;
  v152 = v40[1147].m128i_i64[1];
  v153 = v48 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v152 )
  {
    v154 = v40[147].m128i_i64[0];
    v40[152].m128i_i64[0] += 24;
    v155 = (v154 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v40[147].m128i_i64[1] >= v155 + 24 && v154 )
    {
      v40[147].m128i_i64[0] = v155 + 24;
      v156 = (v154 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v156 = sub_962430((__int64)v40[147].m128i_i64, 24, 24, 3, v41, v42);
      v155 = v156 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)v156 = v152;
    v153 = v155 | 4;
    *(_DWORD *)(v156 + 8) = 0;
    *(_QWORD *)(v156 + 16) = v48;
  }
  v54 = v153 & 0xFFFFFFFFFFFFFFFELL;
  v53 = v54 | 1;
  *(_QWORD *)(v48 + 96) = v54 | 1;
LABEL_123:
  if ( v54 )
  {
    v54 &= 4u;
    if ( (_DWORD)v54 )
    {
      v53 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v53 )
      {
        v142 = *(_QWORD *)v53;
        v143 = *(_DWORD *)(*(_QWORD *)v53 + 12LL);
        if ( *(_DWORD *)(v53 + 8) != v143 )
        {
          *(_DWORD *)(v53 + 8) = v143;
          v54 = v48;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v142 + 152LL))(v142, v48);
        }
      }
    }
  }
  v52 = *(_QWORD *)(v10 + 128);
LABEL_37:
  if ( (*(_BYTE *)(v52 + 24) & 1) != 0 )
    v55 = sub_B72C40(v52);
  else
    v55 = *(_QWORD *)(v52 + 24);
  v56 = 0;
  if ( v55 != v261 )
  {
    v280 = v10;
    v281 = v275 + 1;
    v279 = (void **)(v6 + 16);
    do
    {
      if ( (*(_BYTE *)(v55 + 12) & 1) == 0 )
      {
        v57 = *(_QWORD *)(**(_QWORD **)(v55 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v57 + 8) & 0xF) != 0 )
          v57 = sub_F411C0(**(_QWORD **)(v55 + 16));
        v58 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v58 + 16LL) != 48
          || (v59 = sub_F3D1D0(*v58, v54, v53, v40, v41), (v62 = sub_E05EB0(v6, v59)) == 0) )
        {
LABEL_110:
          v19 = 0;
          goto LABEL_105;
        }
        v6[26] += 88;
        v63 = v273 & 0xFFFFFF00FFFFFFFFLL;
        v64 = v273 & 0xFFFFFF00FFFFFFFFLL;
        v273 &= 0xFFFFFF00FFFFFFFFLL;
        ptr = (void *)(v59 & 0xFFFFFFFFFFFFFFFDLL);
        v65 = v6[16];
        v66 = (v65 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( v6[17] >= v66 + 88 && v65 )
        {
          v6[16] = v66 + 88;
          sub_CCB750((__m128 *)((v65 + 15) & 0xFFFFFFFFFFFFFFF0LL), (unsigned __int64 *)&ptr, v62, v64, 0, 0, 0, 0);
          if ( !v66 )
            goto LABEL_110;
        }
        else
        {
          v278 = (__int64 *)v63;
          v159 = (__m128 *)sub_962430((__int64)v279, 88, 88, 4, v60, v61);
          sub_CCB750(v159, (unsigned __int64 *)&ptr, v62, (__int64)v278, 0, 0, 0, 0);
        }
        v67 = v56 + 16;
        v278 = (__int64 *)v62;
        v68 = v293.m128_u64[0];
        v54 = v293.m128_u32[3];
        ptr = (void *)v59;
        v53 = v293.m128_u32[2] + 1LL;
        v40 = (const __m128i *)&ptr;
        LODWORD(v291) = v67;
        v69 = (__m128i *)(v293.m128_u64[0] + 32LL * v293.m128_u32[2]);
        v292 = _mm_loadh_ps((const double *)&v278);
        if ( v53 > v293.m128_u32[3] )
        {
          v54 = (unsigned __int64)v281;
          if ( v293.m128_u64[0] > (unsigned __int64)&ptr || v69 <= (__m128i *)&ptr )
          {
            sub_22134E0(v275, v281, v53, 32);
            v40 = (const __m128i *)&ptr;
            v69 = (__m128i *)(v293.m128_u64[0] + 32LL * v293.m128_u32[2]);
          }
          else
          {
            sub_22134E0(v275, v281, v53, 32);
            v53 = 32LL * v293.m128_u32[2];
            v40 = (const __m128i *)((char *)&ptr + v293.m128_u64[0] - v68);
            v69 = (__m128i *)(v53 + v293.m128_u64[0]);
          }
        }
        *v69 = _mm_loadu_si128(v40);
        v69[1] = _mm_loadu_si128(v40 + 1);
        ++v293.m128_i32[2];
        v56 = ((*(_DWORD *)(v62 + 640) + 7) & 0xFFFFFFF8) + v67;
      }
      v55 += 24;
    }
    while ( v261 != v55 );
    v10 = v280;
  }
  v70 = *(_QWORD *)(v10 + 104);
  v71 = *(_QWORD *)(v70 + 96);
  v72 = v71 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v71 & 1) == 0 )
  {
    v40 = (const __m128i *)(v71 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v71 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v71 & 2) == 0 )
        goto LABEL_56;
      v160 = v40[1147].m128i_i64[1];
      v161 = v70 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v160 )
      {
        v162 = v40[147].m128i_i64[0];
        v40[152].m128i_i64[0] += 24;
        v163 = (v162 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v40[147].m128i_i64[1] >= v163 + 24 && v162 )
        {
          v40[147].m128i_i64[0] = v163 + 24;
          v164 = (v162 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v164 = sub_962430((__int64)v40[147].m128i_i64, 24, 24, 3, v41, v42);
          v163 = v164 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v164 = v160;
        v161 = v163 | 4;
        *(_DWORD *)(v164 + 8) = 0;
        *(_QWORD *)(v164 + 16) = v70;
      }
      v72 = v161 & 0xFFFFFFFFFFFFFFFELL;
      v71 = v72 | 1;
      *(_QWORD *)(v70 + 96) = v72 | 1;
    }
  }
  if ( v72 )
  {
    if ( (v72 & 4) != 0 )
    {
      v165 = (_DWORD *)(v71 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v165 )
      {
        v166 = *(_QWORD *)v165;
        v167 = *(_DWORD *)(*(_QWORD *)v165 + 12LL);
        if ( v165[2] != v167 )
        {
          v165[2] = v167;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v166 + 152LL))(v166, v70);
        }
      }
    }
  }
LABEL_56:
  v73 = *(_QWORD *)(v10 + 128);
  if ( (*(_BYTE *)(v73 + 32) & 1) != 0 )
    v74 = sub_B72C80(v73);
  else
    v74 = *(_QWORD *)(v73 + 32);
  v75 = *(_QWORD *)(v10 + 104);
  v76 = *(_QWORD *)(v75 + 96);
  v77 = v76;
  v78 = v76 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v76 & 1) != 0 )
    goto LABEL_180;
  v40 = (const __m128i *)(v76 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v76 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_180;
  if ( (v76 & 2) != 0 )
  {
    v168 = v40[1147].m128i_i64[1];
    v169 = v75 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v168 )
    {
      v170 = v40[147].m128i_i64[0];
      v40[152].m128i_i64[0] += 24;
      v171 = (v170 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v40[147].m128i_i64[1] >= v171 + 24 && v170 )
      {
        v40[147].m128i_i64[0] = v171 + 24;
        v172 = (v170 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v172 = sub_962430((__int64)v40[147].m128i_i64, 24, 24, 3, v41, v42);
        v171 = v172 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v172 = v168;
      v169 = v171 | 4;
      *(_DWORD *)(v172 + 8) = 0;
      *(_QWORD *)(v172 + 16) = v75;
    }
    v78 = v169 & 0xFFFFFFFFFFFFFFFELL;
    v77 = v78 | 1;
    *(_QWORD *)(v75 + 96) = v78 | 1;
LABEL_180:
    if ( v78 )
    {
      if ( (v78 & 4) != 0 )
      {
        v173 = (_DWORD *)(v77 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v173 )
        {
          v174 = *(_QWORD *)v173;
          v175 = *(_DWORD *)(*(_QWORD *)v173 + 12LL);
          if ( v173[2] != v175 )
          {
            v173[2] = v175;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v174 + 152LL))(v174, v75);
          }
        }
      }
    }
    v79 = *(_QWORD *)(v10 + 128);
    v75 = *(_QWORD *)(v10 + 104);
    v39 = *(_QWORD *)(v75 + 96);
    v17 = v39 & 0xFFFFFFFFFFFFFFFELL;
    v262 = v74 + 24LL * *(unsigned int *)(v79 + 20);
    LOBYTE(v76) = v39;
    if ( (v39 & 1) != 0 )
      goto LABEL_186;
    v40 = (const __m128i *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v39 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_186;
    goto LABEL_62;
  }
  v79 = *(_QWORD *)(v10 + 128);
  v39 = 3LL * *(unsigned int *)(v79 + 20);
  v17 = v74 + 24LL * *(unsigned int *)(v79 + 20);
  v262 = v17;
LABEL_62:
  if ( (v76 & 2) == 0 )
    goto LABEL_63;
  v194 = v40[1147].m128i_i64[1];
  v195 = v75 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v194 )
  {
    v196 = v40[147].m128i_i64[0];
    v40[152].m128i_i64[0] += 24;
    v197 = (v196 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v40[147].m128i_i64[1] >= v197 + 24 && v196 )
    {
      v40[147].m128i_i64[0] = v197 + 24;
      v198 = (v196 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v198 = sub_962430((__int64)v40[147].m128i_i64, 24, 24, 3, v41, v42);
      v197 = v198 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)v198 = v194;
    *(_DWORD *)(v198 + 8) = 0;
    v195 = v197 | 4;
    *(_QWORD *)(v198 + 16) = v75;
  }
  v17 = v195 & 0xFFFFFFFFFFFFFFFELL;
  v39 = v17 | 1;
  *(_QWORD *)(v75 + 96) = v17 | 1;
LABEL_186:
  if ( v17 )
  {
    v17 &= 4u;
    if ( (_DWORD)v17 )
    {
      v39 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v39 )
      {
        v176 = *(_QWORD *)v39;
        v177 = *(_DWORD *)(*(_QWORD *)v39 + 12LL);
        if ( *(_DWORD *)(v39 + 8) != v177 )
        {
          *(_DWORD *)(v39 + 8) = v177;
          v17 = v75;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v176 + 152LL))(v176, v75);
        }
      }
    }
  }
  v79 = *(_QWORD *)(v10 + 128);
LABEL_63:
  if ( (*(_BYTE *)(v79 + 32) & 1) != 0 )
    v80 = sub_B72C80(v79);
  else
    v80 = *(_QWORD *)(v79 + 32);
  LODWORD(v280) = 0;
  if ( v80 == v262 )
    goto LABEL_141;
  LODWORD(v281) = v56;
  v278 = v6 + 16;
  v283 = v10;
  v266 = v277 + 2;
  do
  {
    v81 = *(_QWORD *)(**(_QWORD **)(v80 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v81 + 8) & 0xF) != 0 )
      v81 = sub_F411C0(**(_QWORD **)(v80 + 16));
    v82 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v82 + 16LL) != 48 )
      goto LABEL_110;
    v83 = sub_F3D1D0(*v82, v17, v39, v40, v41);
    v84 = sub_E05EB0(v6, v83);
    if ( !v84 )
      goto LABEL_110;
    v87 = v6[16];
    v88 = v282 & 0xFFFFFF00FFFFFFFFLL;
    v282 &= 0xFFFFFF00FFFFFFFFLL;
    ptr = (void *)(v83 & 0xFFFFFFFFFFFFFFFDLL);
    v89 = (__m128 *)((v87 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    v6[26] += 88;
    if ( v6[17] >= (unsigned __int64)&v89[5].m128_u64[1] && v87 )
    {
      v279 = &ptr;
      v90 = (v87 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      v6[16] = (__int64)&v89[5].m128_i64[1];
      sub_CCB750(v89, (unsigned __int64 *)&ptr, v84, v88, 0, 0, 0, 0);
      v42 = v259;
      if ( !v90 )
        goto LABEL_110;
    }
    else
    {
      v273 = v88;
      v203 = (__m128 *)sub_962430((__int64)v278, 88, 88, 4, v85, v86);
      v279 = &ptr;
      sub_CCB750(v203, (unsigned __int64 *)&ptr, v84, v273, 0, 0, 0, 0);
    }
    v40 = (const __m128i *)&ptr;
    v273 = v84;
    ptr = (void *)v83;
    v41 = (unsigned int)(v280 + 16);
    v91 = v287;
    v17 = HIDWORD(v288);
    LODWORD(v291) = v280 + 16;
    v39 = (unsigned int)v288 + 1LL;
    v292 = _mm_loadh_ps((const double *)&v273);
    v92 = (__m128i *)((char *)v287 + 32 * (unsigned int)v288);
    if ( v39 > HIDWORD(v288) )
    {
      LODWORD(v273) = v280 + 16;
      v17 = (unsigned __int64)v266;
      if ( v287 > &ptr || v92 <= (__m128i *)&ptr )
      {
        sub_22134E0(v277, v266, v39, 32);
        v40 = (const __m128i *)&ptr;
        v41 = (unsigned int)v273;
        v92 = (__m128i *)((char *)v287 + 32 * (unsigned int)v288);
      }
      else
      {
        sub_22134E0(v277, v266, v39, 32);
        v41 = (unsigned int)v273;
        v39 = 32LL * (unsigned int)v288;
        v40 = (const __m128i *)((char *)v287 + (char *)&ptr - v91);
        v92 = (__m128i *)((char *)v287 + v39);
      }
    }
    v80 += 24;
    *v92 = _mm_loadu_si128(v40);
    v93 = _mm_loadu_si128(v40 + 1);
    LODWORD(v288) = v288 + 1;
    v92[1] = v93;
    LODWORD(v280) = v41 + ((*(_DWORD *)(v84 + 640) + 7) & 0xFFFFFFF8);
  }
  while ( v80 != v262 );
  v56 = (int)v281;
  v10 = v283;
  p_ptr = v279;
LABEL_77:
  v95 = p_ptr + 2;
  ptr = p_ptr + 2;
  v291 = 0x800000000LL;
  v97 = sub_B5ABC0(v10, v17, v39, (__int64)v40, v41, v42);
  if ( v97 )
  {
    v281 = (__m128 *)v95;
    v282 = (__int64)(v6 + 16);
    v278 = (__int64 *)v10;
    v100 = v6;
    v101 = v56;
LABEL_79:
    v102 = v97;
    if ( *(char *)(v97 + 29) < 0 )
      v102 = sub_B4E9E0(v97);
    v103 = *(_QWORD *)(v102 + 48);
    v104 = v101 + 16;
    v105 = 1;
    if ( (*(_BYTE *)(v102 + 48) & 1) == 0 )
    {
      v96 = (const __m128i *)(v103 & 0xFFFFFFFFFFFFFFF0LL);
      v105 = *(_QWORD *)&byte_8[v103 & 0xFFFFFFFFFFFFFFF0LL] & 1LL;
    }
    LODWORD(v106) = 1;
    v107 = (*(_BYTE *)(v102 + 68) & 2) != 0;
    if ( (v103 & 4) == 0 )
      v106 = (*(_QWORD *)&byte_8[v103 & 0xFFFFFFFFFFFFFFF0LL] >> 2) & 1LL;
    v108 = *v100;
    v109 = *(_QWORD *)(v102 + 48);
    LODWORD(v273) = v105;
    v267 = v103;
    v110 = sub_CC2440(v108, v109, v103, (__int64)v96, v105);
    v111 = v107;
    v112 = v110;
    v113 = (unsigned int)v273;
    if ( BYTE4(v110) )
    {
      v114 = v100[16];
      v284 = v102 & 0xFFFFFFFFFFFFFFFDLL;
      v115 = v276 & 0xFFFFFF00FFFFFFFFLL;
      v100[26] += 88;
      v276 = v115;
      v116 = (v114 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v100[17] >= (unsigned __int64)(v116 + 88) && v114 )
      {
        v100[16] = v116 + 88;
      }
      else
      {
        v283 = v112;
        LODWORD(v273) = v111;
        v269 = v113;
        v116 = sub_962430(v282, 88, 88, 4, v113, v111);
        LODWORD(v112) = v283;
        LOBYTE(v111) = v273;
        LODWORD(v113) = v269;
      }
      v268 = v116;
      sub_CCAC30(v116, (__int64 *)&v284, 0, v112, v115, v113, 0, v111, v106);
      v117 = v268;
    }
    else
    {
      v274 &= 0xFFFFFF00FFFFFFFFLL;
      v133 = *(_QWORD *)(v267 & 0xFFFFFFFFFFFFFFF0LL);
      v284 = v102 & 0xFFFFFFFFFFFFFFFDLL;
      v117 = sub_E08460((_DWORD)v100, (unsigned int)&v284, v133, v274, v273, 0, v107, v106);
    }
    v118 = (void **)ptr;
    if ( !v117 )
    {
      v19 = 0;
      goto LABEL_103;
    }
    v285 = v104;
    v284 = v102;
    v119 = (unsigned int)v291 + 1LL;
    v286 = v117;
    v120 = (__m128i *)((char *)ptr + 24 * (unsigned int)v291);
    v96 = (const __m128i *)&v284;
    if ( v119 > HIDWORD(v291) )
    {
      v270 = v117;
      if ( ptr > &v284 || v120 <= (__m128i *)&v284 )
      {
        sub_22134E0(v279, v281, v119, 24);
        v117 = v270;
        v120 = (__m128i *)((char *)ptr + 24 * (unsigned int)v291);
        v96 = (const __m128i *)&v284;
      }
      else
      {
        sub_22134E0(v279, v281, v119, 24);
        v117 = v270;
        v96 = (const __m128i *)((char *)ptr + (char *)&v284 - (char *)v118);
        v120 = (__m128i *)((char *)ptr + 24 * (unsigned int)v291);
      }
    }
    *v120 = _mm_loadu_si128(v96);
    v120[1].m128i_i64[0] = v96[1].m128i_i64[0];
    LODWORD(v291) = v291 + 1;
    v101 = ((*(_DWORD *)(v117 + 28) + 7) & 0xFFFFFFF8) + v104;
    while ( 1 )
    {
      v121 = *(_QWORD *)(v97 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v97 = v121;
      if ( !v121 )
        break;
      if ( (*(_BYTE *)(v121 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_79;
    }
    v56 = v101;
    v6 = v100;
    v10 = (__int64)v278;
  }
  v122 = v6[16];
  v6[26] += 656;
  v19 = (v122 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v6[17] >= v19 + 656 && v122 )
    v6[16] = v19 + 656;
  else
    v19 = sub_962430((__int64)(v6 + 16), 656, 656, 4, v98, v99);
  sub_E0C540(v19, v10, (_DWORD)v275, (_DWORD)v279, (_DWORD)v277, v280, v56);
  v126 = *((unsigned int *)v6 + 72);
  v127 = (__int64 *)v6[34];
  if ( !(_DWORD)v126 )
    goto LABEL_297;
  v123 = (unsigned int)(v126 - 1);
  v128 = ((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4);
  v129 = v123 & v128;
  v130 = &v127[2 * ((unsigned int)v123 & v128)];
  v131 = *v130;
  if ( v10 != *v130 )
  {
    v124 = 1;
    v206 = nullptr;
    if ( v131 == -4096 )
      goto LABEL_265;
    while ( 1 )
    {
      if ( !v206 && v131 == -8192 )
        v206 = v130;
      v125 = (unsigned int)(v124 + 1);
      v129 = v123 & (v124 + v129);
      v130 = &v127[2 * v129];
      v131 = *v130;
      if ( v10 == *v130 )
        goto LABEL_101;
      if ( v131 == -4096 )
        break;
      v124 = (unsigned int)v125;
    }
    if ( !v206 )
LABEL_265:
      v206 = v130;
    v207 = *((_DWORD *)v6 + 70) + 1;
    if ( 4 * v207 < (unsigned int)(3 * v126) )
    {
      if ( (int)v126 - *((_DWORD *)v6 + 71) - v207 > (unsigned int)v126 >> 3 )
      {
        v208 = *v206;
        goto LABEL_269;
      }
      v209 = (((((((((v123 | (v123 >> 1)) >> 2) | v123 | (v123 >> 1)) >> 4)
                | ((v123 | (v123 >> 1)) >> 2)
                | v123
                | (v123 >> 1)) >> 8)
              | ((((v123 | (v123 >> 1)) >> 2) | v123 | (v123 >> 1)) >> 4)
              | ((v123 | (v123 >> 1)) >> 2)
              | v123
              | (v123 >> 1)) >> 16)
            | ((((((v123 | (v123 >> 1)) >> 2) | v123 | (v123 >> 1)) >> 4)
              | ((v123 | (v123 >> 1)) >> 2)
              | v123
              | (v123 >> 1)) >> 8)
            | ((((v123 | (v123 >> 1)) >> 2) | v123 | (v123 >> 1)) >> 4)
            | ((v123 | (v123 >> 1)) >> 2)
            | v123
            | (v123 >> 1))
           + 1;
      if ( (unsigned int)v209 < 0x40 )
        LODWORD(v209) = 64;
      *((_DWORD *)v6 + 72) = v209;
      v210 = (_QWORD *)sub_220C370(16LL * (unsigned int)v209, 8, 64, v123, v124, v125);
      v6[34] = (__int64)v210;
      if ( v127 )
      {
        v211 = *((unsigned int *)v6 + 72);
        v212 = v210;
        v6[35] = 0;
        v213 = &v127[2 * v126];
        v214 = v211;
        v272 = v213;
        v215 = &v210[2 * v211];
        if ( v210 != v215 )
        {
          do
          {
            *v212 = -4096;
            v212 += 2;
          }
          while ( v215 != v212 );
        }
        v216 = v127;
        v264 = v214 - 1;
        do
        {
          v217 = *v216;
          if ( *v216 != -4096 && v217 != -8192 )
          {
            if ( !v214 )
            {
              *(_QWORD *)&dword_0 = *v216;
              BUG();
            }
            v218 = v264 & (((unsigned int)v217 >> 9) ^ ((unsigned int)v217 >> 4));
            v219 = &v210[2 * v218];
            v220 = *v219;
            if ( *v219 != v217 )
            {
              v257 = 1;
              v258 = nullptr;
              if ( v220 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v258 && v220 == -8192 )
                    v258 = v219;
                  v218 = v264 & (v257 + v218);
                  LODWORD(v273) = v257 + 1;
                  v219 = &v210[2 * v218];
                  v220 = *v219;
                  if ( v217 == *v219 )
                    break;
                  if ( v220 == -4096 )
                  {
                    if ( v258 )
                      v219 = v258;
                    break;
                  }
                  v257 = v273;
                }
              }
            }
            *v219 = v217;
            v221 = v216[1];
            ++*((_DWORD *)v6 + 70);
            v219[1] = v221;
          }
          v216 += 2;
        }
        while ( v272 != v216 );
        operator delete();
      }
      else
      {
        v253 = *((unsigned int *)v6 + 72);
        v6[35] = 0;
        for ( i = &v210[2 * v253]; i != v210; v210 += 2 )
          *v210 = -4096;
      }
      v222 = *((_DWORD *)v6 + 72);
      v207 = *((_DWORD *)v6 + 70) + 1;
      if ( v222 )
      {
        v223 = v222 - 1;
        v224 = v6[34];
        v225 = v223 & v128;
        v206 = (__int64 *)(v224 + 16LL * (v223 & v128));
        v208 = *v206;
        if ( v10 != *v206 )
        {
          v226 = 1;
          v227 = nullptr;
          if ( v208 != -4096 )
          {
            while ( 1 )
            {
              if ( v208 == -8192 && !v227 )
                v227 = v206;
              v225 = v223 & (v226 + v225);
              v206 = (__int64 *)(v224 + 16LL * v225);
              v208 = *v206;
              if ( v10 == *v206 )
                goto LABEL_269;
              if ( v208 == -4096 )
              {
                if ( !v227 )
                  break;
                v208 = *v227;
                v206 = v227;
                goto LABEL_269;
              }
              ++v226;
            }
          }
LABEL_288:
          *((_DWORD *)v6 + 70) = v207;
LABEL_271:
          *v206 = v10;
          v132 = (unsigned __int64 *)(v206 + 1);
          v206[1] = 0;
          goto LABEL_102;
        }
        goto LABEL_269;
      }
      goto LABEL_389;
    }
LABEL_297:
    v230 = (((((((unsigned int)(2 * v126 - 1) | ((unsigned __int64)(unsigned int)(2 * v126 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v126 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v126 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v126 - 1) | ((unsigned __int64)(unsigned int)(2 * v126 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v126 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v126 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v126 - 1) | ((unsigned __int64)(unsigned int)(2 * v126 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v126 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v126 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v126 - 1) | ((unsigned __int64)(unsigned int)(2 * v126 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v126 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v126 - 1) >> 1);
    v231 = ((v230 >> 16) | v230) + 1;
    if ( (unsigned int)v231 < 0x40 )
      LODWORD(v231) = 64;
    *((_DWORD *)v6 + 72) = v231;
    v232 = (_QWORD *)sub_220C370(16LL * (unsigned int)v231, 8, 64, v123, v124, v125);
    v6[34] = (__int64)v232;
    if ( v127 )
    {
      v233 = *((unsigned int *)v6 + 72);
      v234 = v232;
      v6[35] = 0;
      v235 = &v127[2 * v126];
      v236 = v233;
      v265 = v235;
      v237 = &v232[2 * v233];
      if ( v232 != v237 )
      {
        do
        {
          *v234 = -4096;
          v234 += 2;
        }
        while ( v237 != v234 );
      }
      v238 = v127;
      v239 = v236 - 1;
      if ( v127 != v235 )
      {
        do
        {
          v240 = *v238;
          if ( *v238 != -4096 && v240 != -8192 )
          {
            if ( !v236 )
            {
              *(_QWORD *)&dword_0 = *v238;
              BUG();
            }
            v241 = v239 & (((unsigned int)v240 >> 9) ^ ((unsigned int)v240 >> 4));
            v242 = &v232[2 * v241];
            v243 = *v242;
            if ( *v242 != v240 )
            {
              v255 = 1;
              v256 = nullptr;
              if ( v243 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v256 && v243 == -8192 )
                    v256 = v242;
                  v241 = v239 & (v255 + v241);
                  v242 = &v232[2 * v241];
                  v243 = *v242;
                  if ( v240 == *v242 )
                    break;
                  if ( v243 == -4096 )
                  {
                    if ( v256 )
                      v242 = v256;
                    break;
                  }
                  ++v255;
                }
              }
            }
            *v242 = v240;
            v244 = v238[1];
            ++*((_DWORD *)v6 + 70);
            v242[1] = v244;
          }
          v238 += 2;
        }
        while ( v265 != v238 );
      }
      operator delete();
    }
    else
    {
      v251 = *((unsigned int *)v6 + 72);
      v6[35] = 0;
      for ( j = &v232[2 * v251]; j != v232; v232 += 2 )
        *v232 = -4096;
    }
    v245 = *((_DWORD *)v6 + 72);
    v207 = *((_DWORD *)v6 + 70) + 1;
    if ( v245 )
    {
      v246 = v245 - 1;
      v247 = v6[34];
      v248 = v246 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v206 = (__int64 *)(v247 + 16LL * v248);
      v208 = *v206;
      if ( v10 != *v206 )
      {
        v249 = 1;
        v250 = nullptr;
        if ( v208 != -4096 )
        {
          while ( 1 )
          {
            if ( v208 == -8192 && !v250 )
              v250 = v206;
            v248 = v246 & (v249 + v248);
            v206 = (__int64 *)(v247 + 16LL * v248);
            v208 = *v206;
            if ( v10 == *v206 )
              goto LABEL_269;
            if ( v208 == -4096 )
            {
              if ( !v250 )
                goto LABEL_288;
              v208 = *v250;
              v206 = v250;
              goto LABEL_269;
            }
            ++v249;
          }
        }
        goto LABEL_288;
      }
LABEL_269:
      *((_DWORD *)v6 + 70) = v207;
      if ( v208 != -4096 )
        --*((_DWORD *)v6 + 71);
      goto LABEL_271;
    }
LABEL_389:
    ++*((_DWORD *)v6 + 70);
    BUG();
  }
LABEL_101:
  v132 = (unsigned __int64 *)(v130 + 1);
LABEL_102:
  *v132 = v19;
  v118 = (void **)ptr;
LABEL_103:
  if ( v118 != v279 + 2 )
    free(v118);
LABEL_105:
  if ( v287 != v277 + 2 )
    free(v287);
  if ( (__m128 *)v293.m128_u64[0] != &v275[1] )
    free((void *)v293.m128_u64[0]);
  return v19;
}

