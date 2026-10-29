__int64 __fastcall sub_C91120(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 *v3; // r15
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rax
  _DWORD *v7; // rdx
  __int64 *v8; // rax
  __int64 *v9; // r9
  __int64 *v10; // rbx
  __int64 *v11; // r15
  __int64 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // esi
  unsigned int v17; // edx
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 *v20; // rdi
  __int64 *i; // rax
  __int64 v22; // rdx
  void *v23; // r14
  __int64 v24; // rdx
  __int64 *v25; // rsi
  bool v26; // zf
  unsigned int v27; // edx
  __int64 v28; // rdi
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // esi
  __int64 *v33; // rdi
  char *v34; // rdi
  __int64 v35; // rax
  __int64 *v36; // r13
  char *v37; // r14
  char *v38; // rbx
  void *v39; // r12
  char *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rcx
  void **v43; // r14
  void *v44; // rbx
  const __m128i *v45; // rbx
  const __m128i **v46; // rdx
  __int64 v47; // rax
  __int32 v48; // esi
  unsigned int v49; // ecx
  __int64 v50; // r8
  const __m128i **v51; // rcx
  __int64 v52; // r8
  const __m128i **v53; // rdi
  const __m128i **j; // r13
  const __m128i *v55; // rax
  void **v56; // rax
  void *v57; // r13
  __int64 *v58; // r14
  void *v59; // r13
  __int64 v60; // rdi
  _QWORD *v61; // rcx
  _QWORD *v62; // rsi
  const __m128i **v63; // rdx
  __int64 v64; // rax
  __int32 v65; // esi
  unsigned int v66; // ecx
  __int64 v67; // r8
  const __m128i **v68; // rcx
  __int64 v69; // r8
  const __m128i **v70; // rdi
  const __m128i **k; // r13
  const __m128i *v72; // rax
  void **v73; // rax
  void *v74; // r13
  void *v75; // r13
  __int64 v76; // rdi
  _QWORD *v77; // rcx
  _QWORD *v78; // rsi
  void **v79; // r14
  void *v80; // rdi
  void *v81; // r13
  int v82; // eax
  void *v83; // r14
  int v84; // edx
  __int64 v85; // rdx
  char v86; // cl
  __int64 v87; // rax
  void *v88; // r14
  void *v89; // rdi
  unsigned int v90; // r14d
  __int64 v91; // rdi
  int v92; // edx
  __int64 v93; // rdx
  char v94; // cl
  __int64 v95; // rax
  unsigned int v96; // r13d
  void *v97; // r14
  void *v98; // r14
  __int64 v99; // r14
  int v100; // r13d
  int v101; // eax
  int v102; // r8d
  int v103; // r9d
  __int64 v104; // rax
  __int64 v105; // r8
  _QWORD *v106; // rdx
  unsigned int v107; // eax
  __int64 v108; // rcx
  int v109; // eax
  __int64 *v110; // rcx
  __int64 v111; // rdi
  unsigned int v112; // esi
  __m128i *v113; // r12
  __int32 v114; // ecx
  __int64 v115; // r11
  const __m128i **v116; // r13
  __int32 v117; // esi
  __int64 v118; // rcx
  __m128i *v119; // rdi
  const __m128i **v120; // rax
  const __m128i **v121; // rcx
  const __m128i *v122; // rdx
  const __m128i *v123; // rax
  __m128i v124; // xmm1
  __int64 v125; // r11
  __int64 v126; // rcx
  __int64 v127; // r14
  unsigned int v128; // r9d
  __m128i *v129; // rbx
  unsigned int v130; // r8d
  size_t v131; // r14
  __m128i *v132; // r12
  int v133; // esi
  __m128i v134; // xmm0
  __int64 v135; // r8
  __m128i *v136; // rdi
  __m128i *v137; // rax
  __m128i *v138; // r8
  __int64 v139; // rdx
  __int64 v140; // rax
  const __m128i *v141; // rax
  const __m128i *v142; // rax
  unsigned int v143; // r13d
  size_t v144; // rsi
  unsigned int *v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rdi
  __int64 v148; // rax
  int v149; // r9d
  __m128i *v150; // rdx
  __m128i *v151; // rax
  void **v152; // rdi
  const __m128i *v153; // r13
  __m128i *v154; // r10
  __int64 v155; // rdx
  __m128i *v156; // rsi
  void **v157; // rdi
  __m128i *v158; // rdx
  __m128i v159; // xmm0
  __int64 v160; // rax
  __int32 v161; // r9d
  __m128i *v162; // rdx
  __m128i *v163; // rax
  void **v164; // rcx
  const __m128i *v165; // r14
  __m128i *v166; // r10
  __int64 v167; // rdx
  __m128i *v168; // rsi
  void **v169; // rdi
  __m128i *v170; // rdx
  __m128i v171; // xmm0
  __int64 v172; // rax
  __int64 v173; // rax
  int v174; // eax
  int v175; // eax
  void **v176; // rax
  void *v177; // r14
  void *v178; // r14
  int v179; // eax
  int v180; // eax
  void *v181; // r13
  void *v182; // r13
  void *v183; // rdi
  unsigned int v184; // eax
  __int64 *v185; // r13
  void *v186; // r14
  int v187; // eax
  int v188; // eax
  __int64 v189; // r14
  void *v190; // r13
  void **v191; // rax
  void *v192; // r14
  void *v193; // r14
  int v194; // eax
  int v195; // eax
  void *v196; // r13
  void *v197; // r13
  void *v198; // rdi
  unsigned int v199; // eax
  __int64 *v200; // r13
  void *v201; // r14
  int v202; // eax
  int v203; // eax
  void *v204; // r13
  _QWORD *v205; // rax
  char **exception; // r15
  int v207; // [rsp-8h] [rbp-168h]
  int v208; // [rsp+0h] [rbp-160h]
  int v209; // [rsp+0h] [rbp-160h]
  int v210; // [rsp+8h] [rbp-158h]
  int v211; // [rsp+8h] [rbp-158h]
  int v212; // [rsp+10h] [rbp-150h]
  int v213; // [rsp+10h] [rbp-150h]
  int v214; // [rsp+14h] [rbp-14Ch]
  __int64 *v215; // [rsp+18h] [rbp-148h]
  int v216; // [rsp+18h] [rbp-148h]
  __int64 *v217; // [rsp+20h] [rbp-140h]
  int v218; // [rsp+20h] [rbp-140h]
  char v219; // [rsp+28h] [rbp-138h]
  __int64 v220; // [rsp+28h] [rbp-138h]
  unsigned int v221; // [rsp+28h] [rbp-138h]
  __int32 v222; // [rsp+28h] [rbp-138h]
  __int64 *v223; // [rsp+30h] [rbp-130h]
  int v224; // [rsp+30h] [rbp-130h]
  __int64 *v225; // [rsp+38h] [rbp-128h]
  int v226; // [rsp+38h] [rbp-128h]
  __int64 *v227; // [rsp+40h] [rbp-120h]
  int v228; // [rsp+40h] [rbp-120h]
  __m128i v229; // [rsp+48h] [rbp-118h] BYREF
  __m128i v230; // [rsp+58h] [rbp-108h] BYREF
  __int64 *v231; // [rsp+68h] [rbp-F8h]
  __int64 v232; // [rsp+70h] [rbp-F0h]
  void **v233; // [rsp+78h] [rbp-E8h]
  int v234; // [rsp+80h] [rbp-E0h]
  __int64 *v235; // [rsp+88h] [rbp-D8h] BYREF
  __int64 v236; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v237; // [rsp+98h] [rbp-C8h]
  __int64 v238; // [rsp+A0h] [rbp-C0h] BYREF
  void *v239; // [rsp+A8h] [rbp-B8h]
  __int64 v240; // [rsp+B0h] [rbp-B0h] BYREF
  __int64 v241; // [rsp+B8h] [rbp-A8h]
  _QWORD v242[2]; // [rsp+C0h] [rbp-A0h] BYREF
  __int64 v243; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v244; // [rsp+D8h] [rbp-88h]
  __int64 v245; // [rsp+E0h] [rbp-80h] BYREF
  __int64 v246; // [rsp+E8h] [rbp-78h]
  char v247; // [rsp+F0h] [rbp-70h]
  __int64 v248; // [rsp+100h] [rbp-60h] BYREF
  __int64 v249; // [rsp+108h] [rbp-58h] BYREF
  __int64 v250; // [rsp+110h] [rbp-50h] BYREF
  __int64 v251; // [rsp+118h] [rbp-48h] BYREF
  __int64 v252; // [rsp+120h] [rbp-40h]
  char v253; // [rsp+128h] [rbp-38h]

  v2 = *(unsigned int *)(a1 + 792);
  v3 = *(__int64 **)(a1 + 784);
  v229.m128i_i64[1] = a1;
  LODWORD(v215) = a2;
  result = 5 * v2;
  v5 = &v3[result];
  if ( v3 != v5 )
  {
    v6 = v3;
    while ( (unsigned __int64)*v6 <= 1 )
    {
      v6 += 5;
      if ( v5 == v6 )
      {
        v231 = v6;
        goto LABEL_294;
      }
    }
    v231 = v6;
    if ( v5 == v6 )
      goto LABEL_294;
    v217 = nullptr;
    v7 = (_DWORD *)*v6;
LABEL_7:
    if ( *v7 < *(_DWORD *)(v229.m128i_i64[1] + 816)
      && (*(_DWORD *)(*(_QWORD *)(v229.m128i_i64[1] + 824) + 4LL * (*v7 >> 5)) & (1 << *v7)) != 0 )
    {
      v235 = v217;
      sub_C8B2F0(&v235, v231);
      v217 = v235;
    }
    v8 = v231;
    while ( 1 )
    {
      v8 += 5;
      if ( v5 == v8 )
        break;
      v7 = (_DWORD *)*v8;
      v231 = v8;
      if ( (unsigned __int64)v7 > 1 )
      {
        if ( v5 != v8 )
          goto LABEL_7;
        break;
      }
    }
    v9 = *(__int64 **)(v229.m128i_i64[1] + 784);
    v3 = v9;
    v231 = &v9[5 * *(unsigned int *)(v229.m128i_i64[1] + 792)];
    if ( !v217 )
    {
LABEL_294:
      result = (__int64)v231;
      v217 = nullptr;
      if ( v3 == v231 )
        return result;
    }
    else
    {
      v10 = &v217[*((unsigned int *)v217 - 1)];
      if ( v217 == v10 )
      {
        result = (__int64)v231;
        if ( v9 == v231 )
          return sub_186B220(v217 - 1);
      }
      else
      {
        v11 = v217;
        v12 = &v251;
        v13 = v229.m128i_i64[1];
        while ( 1 )
        {
          v14 = *v11;
          v15 = *(unsigned int *)(v13 + 792);
          v249 = 0;
          v251 = 1;
          v16 = *(_DWORD *)(v14 + 12);
          v17 = v15 - 1;
          v248 = v14;
          v15 *= 40;
          v250 = 0;
          v252 = 0;
          v18 = (__int64 *)((char *)v9 + v15);
          v19 = 40LL * (v16 & v17);
          v20 = &v9[(unsigned __int64)v19 / 8];
          if ( v19 != v15 )
          {
            for ( i = &v9[(unsigned __int64)v19 / 8]; v18 != i; i += 5 )
            {
              v22 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v22 + 12) == v16 && v14 == v22 )
                {
LABEL_35:
                  v25 = i + 5;
                  if ( v18 == i + 5 )
                    v25 = v9;
                  v26 = *v25 == 0;
                  LODWORD(v233) = *(_DWORD *)(v229.m128i_i64[1] + 796);
                  v27 = (_DWORD)v233 - 1;
                  if ( v26 )
                  {
                    *i = 0;
                    *(_DWORD *)(v229.m128i_i64[1] + 796) = v27;
                  }
                  else
                  {
                    v28 = v229.m128i_i64[1];
                    *i = 1;
                    v29 = *(_DWORD *)(v28 + 800);
                    *(_DWORD *)(v28 + 796) = v27;
                    LODWORD(v233) = v29;
                    v30 = v29 + 1;
                    if ( v27 < 0x40 )
                      v27 = 64;
                    *(_DWORD *)(v28 + 800) = v30;
                    if ( v27 < v30 && !(unsigned __int8)sub_186AF10(v28) )
                    {
                      v31 = sub_7FF080(*(_DWORD *)(v229.m128i_i64[1] + 792));
                      v32 = *(_DWORD *)(v229.m128i_i64[1] + 792);
                      v33 = *(__int64 **)(v229.m128i_i64[1] + 784);
                      v232 = v31;
                      sub_7FF100(v33, v32, v31, v32);
                      v34 = *(char **)(v229.m128i_i64[1] + 784);
                      if ( v34 )
                      {
                        v35 = *(unsigned int *)(v229.m128i_i64[1] + 792);
                        if ( (_DWORD)v35 )
                        {
                          v230.m128i_i64[1] = *(_QWORD *)(v229.m128i_i64[1] + 784);
                          v36 = v12;
                          v37 = &v34[40 * v35];
                          v231 = v10;
                          v38 = v34;
                          v233 = &qword_1C7F2C0;
                          do
                          {
                            v39 = *v233;
                            sub_182CBA0(*v233, v38 + 8);
                            v40 = v38 + 24;
                            v38 += 40;
                            sub_182CBA0(v39, v40);
                          }
                          while ( v38 != v37 );
                          v10 = v231;
                          v34 = (char *)v230.m128i_i64[1];
                          v12 = v36;
                        }
                        sub_186B220(v34);
                      }
                      v41 = v229.m128i_i64[1];
                      v42 = v232;
                      *(_DWORD *)(v229.m128i_i64[1] + 800) = 0;
                      *(_QWORD *)(v41 + 784) = v42;
                    }
                  }
                  goto LABEL_23;
                }
              }
              else if ( !v22 )
              {
                goto LABEL_23;
              }
            }
          }
          if ( v9 != v20 )
          {
            for ( i = v9; v20 != i; i += 5 )
            {
              v24 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v24 + 12) == v16 && v14 == v24 )
                  goto LABEL_35;
              }
              else if ( !v24 )
              {
                break;
              }
            }
          }
LABEL_23:
          ++v11;
          v23 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v249);
          sub_182CBA0(v23, v12);
          v13 = v229.m128i_i64[1];
          if ( v10 == v11 )
            break;
          v9 = *(__int64 **)(v229.m128i_i64[1] + 784);
        }
        v3 = *(__int64 **)(v229.m128i_i64[1] + 784);
        result = (__int64)&v3[5 * *(unsigned int *)(v229.m128i_i64[1] + 792)];
        v231 = (__int64 *)result;
        if ( v3 == (__int64 *)result )
          return sub_186B220(v217 - 1);
      }
    }
    while ( (unsigned __int64)*v3 <= 1 )
    {
      v3 += 5;
      if ( v3 == (__int64 *)result )
        goto LABEL_55;
    }
    result = (__int64)v231;
    if ( v3 != v231 )
    {
      v45 = (const __m128i *)*v3;
      v233 = &qword_1C7F2C0;
      v227 = &v249;
      v223 = &v251;
      v230.m128i_i64[1] = (__int64)&v243;
      v225 = &v236;
LABEL_64:
      v245 = 1;
      v238 = 1;
      v46 = *(const __m128i ***)(v229.m128i_i64[1] + 672);
      v47 = *(unsigned int *)(v229.m128i_i64[1] + 680);
      v243 = 0;
      v249 = 0;
      v251 = 1;
      v48 = v45->m128i_i32[3];
      v49 = v47 - 1;
      v47 *= 48;
      v247 = 0;
      v248 = (__int64)v45;
      v50 = 3LL * (v48 & v49);
      v253 = 0;
      v51 = (const __m128i **)((char *)v46 + v47);
      v52 = 16 * v50;
      v236 = 0;
      v237 = 0;
      v53 = &v46[(unsigned __int64)v52 / 8];
      v239 = nullptr;
      v244 = 0;
      v246 = 0;
      v250 = 0;
      v252 = 0;
      if ( v52 != v47 )
      {
        for ( j = &v46[(unsigned __int64)v52 / 8]; v51 != j; j += 6 )
        {
          v55 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( v55->m128i_i32[3] == v48 && v55 == v45 )
            {
              v191 = v233;
              goto LABEL_250;
            }
          }
          else if ( !v55 )
          {
            v56 = v233;
            goto LABEL_72;
          }
        }
      }
      v56 = v233;
      if ( v46 == v53 )
        goto LABEL_72;
      while ( 1 )
      {
        v142 = *v46;
        if ( (unsigned __int64)*v46 > 1 )
        {
          if ( v142->m128i_i32[3] == v48 && v142 == v45 )
          {
            v191 = v233;
            j = v46;
LABEL_250:
            v192 = *v191;
            sub_182CBA0(*v191, v227);
            sub_182CBA0(v192, v223);
            v193 = *v233;
            if ( (*((_BYTE *)j + 12) & 1) != 0 )
            {
              sub_182C690(*v233, v230.m128i_i64[1], j + 1);
            }
            else
            {
              v194 = *((_DWORD *)j + 2);
              BYTE4(v243) &= ~1u;
              LODWORD(v243) = v194;
            }
            if ( (*((_BYTE *)j + 28) & 1) != 0 )
            {
              sub_182C690(v193, &v245, j + 3);
            }
            else
            {
              v195 = *((_DWORD *)j + 6);
              BYTE4(v245) &= ~1u;
              LODWORD(v245) = v195;
            }
            v247 = *((_BYTE *)j + 40);
            v196 = *v233;
            if ( (v243 & 0x100000000LL) != 0 )
            {
              sub_182C690(*v233, v225, v230.m128i_i64[1]);
              if ( (v245 & 0x100000000LL) != 0 )
                goto LABEL_271;
LABEL_256:
              BYTE4(v238) &= ~1u;
              LODWORD(v238) = v245;
              v197 = *v233;
              sub_182CBA0(*v233, v230.m128i_i64[1]);
              v229.m128i_i64[0] = (__int64)&v245;
              sub_182CBA0(v197, &v245);
            }
            else
            {
              BYTE4(v236) &= ~1u;
              LODWORD(v236) = v243;
              if ( (v245 & 0x100000000LL) == 0 )
                goto LABEL_256;
LABEL_271:
              v229.m128i_i64[0] = (__int64)&v245;
              sub_182C690(v196, &v238, &v245);
              v204 = *v233;
              sub_182CBA0(*v233, v230.m128i_i64[1]);
              sub_182CBA0(v204, &v245);
            }
            v198 = *v233;
            if ( (*((_BYTE *)v3 + 28) & 1) != 0
              || *((_DWORD *)v3 + 6) != 1
              || (v238 & 0x100000000LL) != 0
              || (_DWORD)v238 != 1 )
            {
              LOBYTE(v199) = sub_1848D40(v198, v3 + 1, v225);
            }
            else
            {
              v201 = *v233;
              if ( (*((_BYTE *)v3 + 12) & 1) == 0 && (v236 & 0x100000000LL) == 0 )
              {
                v202 = v236;
                v200 = v225;
                if ( *((_DWORD *)v3 + 2) >= (int)v236 )
                {
                  v200 = v3 + 1;
LABEL_262:
                  v202 = *(_DWORD *)v200;
                }
                *((_BYTE *)v3 + 12) &= ~1u;
                *((_DWORD *)v3 + 2) = v202;
                if ( (*((_BYTE *)v200 + 20) & 1) == 0 )
                {
LABEL_264:
                  v203 = *((_DWORD *)v200 + 4);
                  *((_BYTE *)v3 + 28) &= ~1u;
                  *((_DWORD *)v3 + 6) = v203;
                  goto LABEL_76;
                }
LABEL_269:
                sub_182C690(v201, v3 + 3, v200 + 2);
LABEL_76:
                v245 = 1;
                v243 = 0;
                v63 = *(const __m128i ***)(v229.m128i_i64[1] + 648);
                v247 = 0;
                v64 = *(unsigned int *)(v229.m128i_i64[1] + 656);
                v248 = (__int64)v45;
                v249 = 0;
                v251 = 1;
                v65 = v45->m128i_i32[3];
                v66 = v64 - 1;
                v64 *= 48;
                v246 = 0;
                v250 = 0;
                v67 = 3LL * (v65 & v66);
                v252 = 0;
                v68 = (const __m128i **)((char *)v63 + v64);
                v69 = 16 * v67;
                v253 = 0;
                v244 = 0;
                v70 = &v63[(unsigned __int64)v69 / 8];
                if ( v69 != v64 )
                {
                  for ( k = &v63[(unsigned __int64)v69 / 8]; v68 != k; k += 6 )
                  {
                    v72 = *k;
                    if ( (unsigned __int64)*k > 1 )
                    {
                      if ( v72->m128i_i32[3] == v65 && v72 == v45 )
                      {
                        v176 = v233;
                        goto LABEL_227;
                      }
                    }
                    else if ( !v72 )
                    {
                      v73 = v233;
LABEL_84:
                      v74 = *v73;
                      sub_182CBA0(*v73, v227);
                      sub_182CBA0(v74, v223);
                      v75 = *v233;
                      sub_182CBA0(*v233, v230.m128i_i64[1]);
                      sub_182CBA0(v75, v229.m128i_i64[0]);
                      goto LABEL_85;
                    }
                  }
                }
                v73 = v233;
                if ( v63 == v70 )
                  goto LABEL_84;
                while ( 2 )
                {
                  v141 = *v63;
                  if ( (unsigned __int64)*v63 <= 1 )
                  {
                    if ( !v141 )
                    {
LABEL_146:
                      v73 = v233;
                      goto LABEL_84;
                    }
                    goto LABEL_143;
                  }
                  if ( v141->m128i_i32[3] != v65 || v141 != v45 )
                  {
LABEL_143:
                    v63 += 6;
                    if ( v70 == v63 )
                      goto LABEL_146;
                    continue;
                  }
                  break;
                }
                v176 = v233;
                k = v63;
LABEL_227:
                v177 = *v176;
                sub_182CBA0(*v176, v227);
                sub_182CBA0(v177, v223);
                v178 = *v233;
                if ( (*((_BYTE *)k + 12) & 1) != 0 )
                {
                  sub_182C690(*v233, v230.m128i_i64[1], k + 1);
                }
                else
                {
                  v179 = *((_DWORD *)k + 2);
                  BYTE4(v243) &= ~1u;
                  LODWORD(v243) = v179;
                }
                if ( (*((_BYTE *)k + 28) & 1) != 0 )
                {
                  sub_182C690(v178, v229.m128i_i64[0], k + 3);
                }
                else
                {
                  v180 = *((_DWORD *)k + 6);
                  BYTE4(v245) &= ~1u;
                  LODWORD(v245) = v180;
                }
                v247 = *((_BYTE *)k + 40);
                v181 = *v233;
                if ( (v243 & 0x100000000LL) != 0 )
                {
                  sub_182C690(*v233, v225, v230.m128i_i64[1]);
                  if ( (v245 & 0x100000000LL) != 0 )
                    goto LABEL_248;
LABEL_233:
                  BYTE4(v238) &= ~1u;
                  LODWORD(v238) = v245;
                  v182 = *v233;
                  sub_182CBA0(*v233, v230.m128i_i64[1]);
                  sub_182CBA0(v182, v229.m128i_i64[0]);
                }
                else
                {
                  BYTE4(v236) &= ~1u;
                  LODWORD(v236) = v243;
                  if ( (v245 & 0x100000000LL) == 0 )
                    goto LABEL_233;
LABEL_248:
                  v189 = v229.m128i_i64[0];
                  sub_182C690(v181, &v238, v229.m128i_i64[0]);
                  v190 = *v233;
                  sub_182CBA0(*v233, v230.m128i_i64[1]);
                  sub_182CBA0(v190, v189);
                }
                v183 = *v233;
                if ( (*((_BYTE *)v3 + 28) & 1) != 0
                  || *((_DWORD *)v3 + 6) != 1
                  || (v238 & 0x100000000LL) != 0
                  || (_DWORD)v238 != 1 )
                {
                  LOBYTE(v184) = sub_1848D40(v183, v3 + 1, v225);
                }
                else
                {
                  v186 = *v233;
                  if ( (*((_BYTE *)v3 + 12) & 1) == 0 && (v236 & 0x100000000LL) == 0 )
                  {
                    v187 = v236;
                    v185 = v225;
                    if ( *((_DWORD *)v3 + 2) >= (int)v236 )
                    {
                      v185 = v3 + 1;
LABEL_239:
                      v187 = *(_DWORD *)v185;
                    }
                    *((_BYTE *)v3 + 12) &= ~1u;
                    *((_DWORD *)v3 + 2) = v187;
                    if ( (*((_BYTE *)v185 + 20) & 1) == 0 )
                    {
LABEL_241:
                      v188 = *((_DWORD *)v185 + 4);
                      *((_BYTE *)v3 + 28) &= ~1u;
                      *((_DWORD *)v3 + 6) = v188;
                      goto LABEL_85;
                    }
LABEL_246:
                    sub_182C690(v186, v3 + 3, v185 + 2);
LABEL_85:
                    LODWORD(v248) = 1;
                    LODWORD(v250) = 1;
                    v76 = (__int64)*v233;
                    v249 = 0;
                    v251 = 0;
                    BYTE4(v248) &= 0xFCu;
                    BYTE4(v250) &= 0xFCu;
                    if ( *((_DWORD *)v3 + 2) )
                    {
                      v77 = v3 + 1;
                      v78 = v3 + 1;
                      if ( (*((_BYTE *)v3 + 28) & 1) == 0 && *((_DWORD *)v3 + 6) == 1 )
                      {
                        v232 = v76;
                        sub_1831A80(v76, v78, &v248, v77);
                        sub_182CBA0(v232, v3 + 3);
                        *((_BYTE *)v3 + 28) &= ~1u;
                        *((_DWORD *)v3 + 6) = 1;
                      }
                      else
                      {
                        sub_1851D20(v76, v78, &v248, v77);
                      }
                    }
                    else
                    {
                      *((_BYTE *)v3 + 12) &= ~1u;
                      *((_DWORD *)v3 + 2) = 1;
                      if ( (v250 & 0x100000000LL) != 0 )
                      {
                        sub_182C690(v76, v3 + 3, &v250);
                      }
                      else
                      {
                        v174 = v250;
                        *((_BYTE *)v3 + 28) &= ~1u;
                        *((_DWORD *)v3 + 6) = v174;
                      }
                    }
                    v79 = v233;
                    v240 = 2;
                    v241 = 0;
                    v80 = *v233;
                    v242[0] = 1;
                    v242[1] = 0;
                    sub_182CBA0(v80, v242);
                    BYTE4(v242[0]) &= ~1u;
                    v81 = *v79;
                    LODWORD(v242[0]) = 1;
                    v243 = 0;
                    v244 = 0;
                    v245 = 1;
                    v246 = 0;
                    if ( (*((_BYTE *)v3 + 12) & 1) != 0 )
                      sub_182C690(v81, v230.m128i_i64[1], v3 + 1);
                    else
                      LODWORD(v243) = *((_DWORD *)v3 + 2);
                    if ( (*((_BYTE *)v3 + 28) & 1) != 0 )
                    {
                      sub_182C690(v81, v229.m128i_i64[0], v3 + 3);
                    }
                    else
                    {
                      v82 = *((_DWORD *)v3 + 6);
                      BYTE4(v245) &= ~1u;
                      LODWORD(v245) = v82;
                    }
                    BYTE4(v248) &= 0xFCu;
                    v230.m128i_i64[0] = (__int64)&v240;
                    v83 = *v233;
                    BYTE4(v250) &= 0xFCu;
                    LODWORD(v248) = 0;
                    v249 = 0;
                    LODWORD(v250) = 1;
                    v251 = 0;
                    sub_1833EB0(v83, v230.m128i_i64[1], &v240, &v248);
                    sub_182CBA0(v83, &v250);
                    v84 = v248;
                    LODWORD(v248) = v243;
                    LODWORD(v243) = v84;
                    v85 = v249;
                    v249 = v244;
                    v244 = v85;
                    v86 = BYTE4(v248) & 1;
                    LOBYTE(v85) = BYTE4(v243) & 0xFC | BYTE4(v248) & 2;
                    BYTE4(v248) = BYTE4(v243) & 1 | BYTE4(v248) & 0xFC | BYTE4(v243) & 2;
                    BYTE4(v243) = v86 | v85;
                    LODWORD(v250) = v245;
                    v87 = v246;
                    v246 = v251;
                    v251 = v87;
                    LODWORD(v245) = 1;
                    LOBYTE(v85) = BYTE4(v245) & 0xFC | BYTE4(v250) & 2;
                    BYTE4(v250) = BYTE4(v245) & 1 | BYTE4(v245) & 2 | BYTE4(v250) & 0xFC;
                    BYTE4(v245) = v85;
                    v88 = *v233;
                    sub_182CBA0(*v233, &v248);
                    v89 = v88;
                    v90 = 1;
                    sub_182CBA0(v89, &v250);
                    if ( (int)v243 <= 0 )
                    {
                      v96 = 2;
                    }
                    else
                    {
                      do
                      {
                        BYTE4(v248) &= 0xFCu;
                        ++v90;
                        LODWORD(v248) = 0;
                        v91 = (__int64)*v233;
                        BYTE4(v250) &= 0xFCu;
                        v249 = 0;
                        LODWORD(v250) = 1;
                        v251 = 0;
                        v232 = v91;
                        sub_1833EB0(v91, v230.m128i_i64[1], v230.m128i_i64[0], &v248);
                        sub_182CBA0(v232, &v250);
                        v92 = v248;
                        LODWORD(v248) = v243;
                        LODWORD(v243) = v92;
                        v93 = v249;
                        v249 = v244;
                        v244 = v93;
                        v94 = BYTE4(v248) & 1;
                        LOBYTE(v93) = BYTE4(v243) & 0xFC | BYTE4(v248) & 2;
                        BYTE4(v248) = BYTE4(v243) & 1 | BYTE4(v248) & 0xFC | BYTE4(v243) & 2;
                        BYTE4(v243) = v94 | v93;
                        LODWORD(v250) = v245;
                        v95 = v246;
                        v246 = v251;
                        v251 = v95;
                        LODWORD(v245) = 1;
                        LOBYTE(v93) = BYTE4(v245) & 0xFC | BYTE4(v250) & 2;
                        BYTE4(v250) = BYTE4(v245) & 1 | BYTE4(v245) & 2 | BYTE4(v250) & 0xFC;
                        BYTE4(v245) = v93;
                        v232 = (__int64)*v233;
                        sub_182CBA0(v232, &v248);
                        sub_182CBA0(v232, &v250);
                      }
                      while ( (int)v243 > 0 );
                      v96 = 2;
                      if ( v90 >= 2 )
                        v96 = v90;
                    }
                    v97 = *v233;
                    sub_182CBA0(*v233, v230.m128i_i64[1]);
                    sub_182CBA0(v97, v229.m128i_i64[0]);
                    v98 = *v233;
                    sub_182CBA0(*v233, v230.m128i_i64[0]);
                    sub_182CBA0(v98, v242);
                    v99 = *(_QWORD *)(v229.m128i_i64[1] + 16);
                    v100 = sub_1674700(v229.m128i_i64[1] + 40, v96);
                    sub_180C5A0(v230.m128i_i64[0], "z");
                    v101 = sub_15E3D10(
                             v99,
                             v230.m128i_i32[0],
                             (int)&qword_18D6CD0,
                             0,
                             0,
                             v100,
                             1,
                             v207,
                             v208,
                             v210,
                             v212,
                             (int)v215,
                             (int)v217,
                             (int)v242,
                             (char)v223,
                             (int)v225,
                             (int)v227,
                             v229.m128i_i32[0],
                             v229.m128i_i32[2],
                             v230.m128i_i32[0],
                             v230.m128i_i32[2],
                             (int)v231,
                             v232,
                             (int)v233,
                             v234,
                             (int)v235,
                             v236,
                             v237,
                             v238,
                             v239,
                             v240,
                             v241);
                    v104 = sub_15DC610(
                             v99,
                             v101,
                             0,
                             0,
                             v102,
                             v103,
                             v209,
                             v211,
                             v213,
                             v216,
                             v218,
                             v219,
                             v224,
                             v226,
                             v228,
                             (void *)v229.m128i_i64[0]);
                    v105 = v104;
                    if ( v104 )
                      ++*(_DWORD *)(v104 + 8);
                    v106 = *(_QWORD **)(v229.m128i_i64[1] + 624);
                    if ( v106 )
                    {
                      v107 = *((_DWORD *)v106 - 1);
                      if ( v107 == *((_DWORD *)v106 - 2) )
                      {
                        v143 = (3 * v107 + 1) >> 1;
                        v144 = 8 * v143 + 8;
                        if ( 8 * v107 + 8 >= (unsigned int)v144 || v107 >= v143 )
                        {
                          exception = (char **)__cxa_allocate_exception(0x28u);
                          sub_C8AA10(&v248, "Overflow encountered when expanding vector");
                          *exception = (char *)off_1C63128;
                          sub_2333C0(exception + 1, &v248);
                          sub_233E40((__int64)&v248);
                          __cxa_throw(
                            exception,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v232 = v105;
                        v145 = (unsigned int *)sub_186B300(v106 - 1, v144);
                        v146 = v145[1];
                        v147 = v229.m128i_i64[1];
                        v106 = v145 + 2;
                        *v145 = v143;
                        v105 = v232;
                        LODWORD(v145) = v146;
                        *(_QWORD *)(v147 + 624) = v106;
                        v110 = &v106[v146];
                        v109 = (_DWORD)v145 + 1;
                      }
                      else
                      {
                        v108 = v107;
                        v109 = v107 + 1;
                        v110 = &v106[v108];
                      }
                    }
                    else
                    {
                      v232 = v104;
                      v205 = (_QWORD *)sub_186B270(0x18u);
                      v106 = v205 + 1;
                      *v205 = 2;
                      v105 = v232;
                      v110 = v205 + 1;
                      *(_QWORD *)(v229.m128i_i64[1] + 624) = v205 + 1;
                      v109 = 1;
                    }
                    v111 = v229.m128i_i64[1];
                    *v110 = v105;
                    *((_DWORD *)v106 - 1) = v109;
                    v112 = *(_DWORD *)(v111 + 768);
                    if ( 3 * v112 >= 4 * (*(_DWORD *)(v111 + 772) + *(_DWORD *)(v111 + 776)) )
                    {
                      v113 = *(__m128i **)(v111 + 760);
                      v114 = v112 - 1;
                      v115 = 16LL * v112;
                      v116 = (const __m128i **)((char *)v113->m128i_i64 + v115);
                      goto LABEL_104;
                    }
                    v229.m128i_i64[0] = v105;
                    v230.m128i_i32[0] = 2 * v112;
                    v232 = 32LL * v112;
                    v160 = sub_186B270(v232);
                    v161 = v230.m128i_i32[0];
                    v115 = v232;
                    v113 = (__m128i *)v160;
                    v162 = (__m128i *)v160;
                    v105 = v229.m128i_i64[0];
                    v163 = (__m128i *)(v232 + v160);
                    if ( v230.m128i_i32[0] )
                    {
                      if ( (((_BYTE)v163 - (_BYTE)v113) & 0x10) != 0 )
                      {
                        v162 = v113 + 1;
                        v164 = v233;
                        *v113 = 0;
                        if ( &v113[1] != v163 )
                          goto LABEL_187;
                      }
                      else
                      {
                        v164 = v233;
                        do
                        {
LABEL_187:
                          *v162 = 0;
                          v162 += 2;
                          v162[-1] = 0;
                        }
                        while ( v162 != v163 );
                        v233 = v164;
                      }
                    }
                    v114 = v161 - 1;
                    v116 = (const __m128i **)v163;
                    v165 = *(const __m128i **)(v229.m128i_i64[1] + 760);
                    v166 = (__m128i *)&v165[*(unsigned int *)(v229.m128i_i64[1] + 768)];
                    if ( v165 != v166 )
                    {
                      do
                      {
                        while ( v165->m128i_i64[0] <= 1uLL )
                        {
                          if ( v166 == ++v165 )
                            goto LABEL_198;
                        }
                        v167 = 16LL * (*(_DWORD *)(v165->m128i_i64[0] + 12) & (unsigned int)v114);
                        v168 = &v113[(unsigned __int64)v167 / 0x10];
                        if ( v115 == v167 )
                        {
LABEL_202:
                          if ( v113 == v168 )
                          {
LABEL_216:
                            v229.m128i_i32[0] = v161 - 1;
                            v230.m128i_i64[0] = (__int64)v166;
                            v232 = v105;
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v169 = v233;
                          v170 = v113;
                          while ( v170->m128i_i64[0] )
                          {
                            if ( v168 == ++v170 )
                              goto LABEL_216;
                          }
                        }
                        else
                        {
                          v169 = v233;
                          v170 = &v113[(unsigned __int64)v167 / 0x10];
                          while ( v170->m128i_i64[0] )
                          {
                            if ( v163 == ++v170 )
                              goto LABEL_202;
                          }
                        }
                        v171 = _mm_loadu_si128(v165++);
                        v233 = v169;
                        *v170 = v171;
                      }
                      while ( v166 != v165 );
LABEL_198:
                      v166 = *(__m128i **)(v229.m128i_i64[1] + 760);
                    }
                    if ( v166 )
                    {
                      v222 = v161;
                      v229.m128i_i64[0] = v115;
                      v230.m128i_i32[0] = v161 - 1;
                      v232 = v105;
                      sub_186B220(v166);
                      v161 = v222;
                      v115 = v229.m128i_i64[0];
                      v114 = v230.m128i_i32[0];
                      v105 = v232;
                    }
                    v172 = v229.m128i_i64[1];
                    *(_QWORD *)(v229.m128i_i64[1] + 760) = v113;
                    *(_DWORD *)(v172 + 768) = v161;
                    *(_DWORD *)(v172 + 776) = 0;
LABEL_104:
                    v117 = v45->m128i_i32[3];
                    v118 = 16LL * (v117 & (unsigned int)v114);
                    v119 = &v113[(unsigned __int64)v118 / 0x10];
                    if ( v118 == v115 )
                    {
                      v121 = nullptr;
LABEL_112:
                      if ( v119 == v113 )
                      {
LABEL_120:
                        v232 = v105;
                        sub_1872CE0("");
                        sub_1873130(114, 405);
                      }
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          v123 = (const __m128i *)v113->m128i_i64[0];
                          if ( v113->m128i_i64[0] <= 1uLL )
                            break;
                          if ( v123->m128i_i32[3] == v117 && v123 == v45 )
                          {
                            v113->m128i_i64[0] = (__int64)v45;
                            v113->m128i_i64[1] = v105;
                            goto LABEL_121;
                          }
                          if ( v119 == ++v113 )
                            goto LABEL_120;
                        }
                        if ( !v123 )
                          break;
                        v121 = (const __m128i **)v113++;
                        if ( v119 == v113 )
                          goto LABEL_120;
                      }
                      if ( v121 )
                        goto LABEL_208;
                      v121 = (const __m128i **)v113;
                    }
                    else
                    {
                      v120 = (const __m128i **)&v113[(unsigned __int64)v118 / 0x10];
                      v121 = nullptr;
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          v122 = *v120;
                          if ( (unsigned __int64)*v120 <= 1 )
                            break;
                          if ( v122->m128i_i32[3] == v117 && v122 == v45 )
                          {
                            *v120 = v45;
                            v120[1] = (const __m128i *)v105;
                            goto LABEL_121;
                          }
                          v120 += 2;
                          if ( v120 == v116 )
                            goto LABEL_112;
                        }
                        if ( !v122 )
                          break;
                        v121 = v120;
                        v120 += 2;
                        if ( v120 == v116 )
                          goto LABEL_112;
                      }
                      if ( v121 )
LABEL_208:
                        --*(_DWORD *)(v229.m128i_i64[1] + 776);
                      else
                        v121 = v120;
                    }
                    v173 = v229.m128i_i64[1];
                    *v121 = v45;
                    v121[1] = (const __m128i *)v105;
                    ++*(_DWORD *)(v173 + 772);
LABEL_121:
                    v124 = _mm_loadl_epi64(v45 + 1);
                    v125 = *(_QWORD *)(v105 + 16);
                    v126 = *v215;
                    v127 = *(unsigned int *)(*v215 + 40);
                    v128 = 2 * v127;
                    if ( 3 * (int)v127 < (unsigned int)(4 * (*(_DWORD *)(*v215 + 44) + *(_DWORD *)(*v215 + 48))) )
                    {
                      v220 = *v215;
                      v131 = 16LL * v128;
                      v230.m128i_i64[0] = *(_QWORD *)(v105 + 16);
                      LODWORD(v232) = v128;
                      v229.m128i_i64[0] = v124.m128i_i64[0];
                      v148 = sub_186B270(v131);
                      v149 = v232;
                      v129 = (__m128i *)v148;
                      v150 = (__m128i *)v148;
                      v125 = v230.m128i_i64[0];
                      v124 = _mm_loadl_epi64(&v229);
                      v126 = v220;
                      v151 = (__m128i *)(v131 + v148);
                      if ( (_DWORD)v232 )
                      {
                        if ( (((_BYTE)v151 - (_BYTE)v129) & 0x10) == 0 || (v150 = v129 + 1, *v129 = 0, &v129[1] != v151) )
                        {
                          v152 = v233;
                          do
                          {
                            *v150 = 0;
                            v150 += 2;
                            v150[-1] = 0;
                          }
                          while ( v150 != v151 );
                          v233 = v152;
                        }
                      }
                      v153 = *(const __m128i **)(v220 + 32);
                      v130 = v149 - 1;
                      v132 = v151;
                      v154 = (__m128i *)&v153[*(unsigned int *)(v220 + 40)];
                      if ( v153 != v154 )
                      {
                        do
                        {
                          while ( v153->m128i_i64[0] <= 1uLL )
                          {
                            if ( v154 == ++v153 )
                              goto LABEL_175;
                          }
                          v155 = 16LL * (*(_DWORD *)(v153->m128i_i64[0] + 12) & v130);
                          v156 = &v129[(unsigned __int64)v155 / 0x10];
                          if ( v131 == v155 )
                          {
LABEL_179:
                            if ( v129 == v156 )
                            {
LABEL_215:
                              v229.m128i_i64[0] = v220;
                              v232 = v125;
                              v230.m128i_i64[0] = v124.m128i_i64[0];
                              sub_1872CE0("");
                              sub_1873130(114, 213);
                            }
                            v157 = v233;
                            v158 = v129;
                            while ( v158->m128i_i64[0] )
                            {
                              if ( v156 == ++v158 )
                                goto LABEL_215;
                            }
                          }
                          else
                          {
                            v157 = v233;
                            v158 = &v129[(unsigned __int64)v155 / 0x10];
                            while ( v158->m128i_i64[0] )
                            {
                              if ( v151 == ++v158 )
                                goto LABEL_179;
                            }
                          }
                          v159 = _mm_loadu_si128(v153++);
                          v233 = v157;
                          *v158 = v159;
                        }
                        while ( v154 != v153 );
LABEL_175:
                        v154 = *(__m128i **)(v220 + 32);
                      }
                      if ( v154 )
                      {
                        v214 = v149;
                        v221 = v149 - 1;
                        v229.m128i_i64[0] = v126;
                        v232 = v125;
                        v230.m128i_i64[0] = v124.m128i_i64[0];
                        sub_186B220(v154);
                        v149 = v214;
                        v130 = v221;
                        v126 = v229.m128i_i64[0];
                        v125 = v232;
                        v124 = _mm_loadl_epi64(&v230);
                      }
                      *(_QWORD *)(v126 + 32) = v129;
                      *(_DWORD *)(v126 + 40) = v149;
                      *(_DWORD *)(v126 + 48) = 0;
                    }
                    else
                    {
                      v129 = *(__m128i **)(v126 + 32);
                      v130 = v127 - 1;
                      v131 = 16 * v127;
                      v132 = &v129[v131 / 0x10];
                    }
                    v133 = *(_DWORD *)(v125 + 12);
                    v134 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v125, v124);
                    v135 = 16LL * (v133 & v130);
                    v136 = &v129[(unsigned __int64)v135 / 0x10];
                    if ( v135 == v131 )
                    {
                      v138 = nullptr;
LABEL_131:
                      if ( v136 == v129 )
                      {
LABEL_49:
                        sub_1872CE0("");
                        sub_1873130(114, 405);
                      }
                      while ( 1 )
                      {
                        v140 = v129->m128i_i64[0];
                        if ( v129->m128i_i64[0] > 1uLL )
                        {
                          if ( *(_DWORD *)(v140 + 12) == v133 && v125 == v140 )
                          {
                            *v129 = v134;
                            goto LABEL_50;
                          }
                        }
                        else
                        {
                          if ( !v140 )
                          {
                            if ( v138 )
                              goto LABEL_211;
                            v138 = v129;
                            goto LABEL_212;
                          }
                          v138 = v129;
                        }
                        if ( v136 == ++v129 )
                          goto LABEL_49;
                      }
                    }
                    v137 = &v129[(unsigned __int64)v135 / 0x10];
                    v138 = nullptr;
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v139 = v137->m128i_i64[0];
                        if ( v137->m128i_i64[0] <= 1uLL )
                          break;
                        if ( *(_DWORD *)(v139 + 12) == v133 && v125 == v139 )
                        {
                          *v137 = v134;
                          goto LABEL_50;
                        }
                        if ( ++v137 == v132 )
                          goto LABEL_131;
                      }
                      if ( !v139 )
                        break;
                      v138 = v137++;
                      if ( v137 == v132 )
                        goto LABEL_131;
                    }
                    if ( v138 )
LABEL_211:
                      --*(_DWORD *)(v126 + 48);
                    else
                      v138 = v137;
LABEL_212:
                    *v138 = v134;
                    ++*(_DWORD *)(v126 + 44);
LABEL_50:
                    v43 = v233;
                    v44 = *v233;
                    sub_182CBA0(*v233, v225);
                    sub_182CBA0(v44, &v238);
                    result = (__int64)(v3 + 5);
                    if ( v3 + 5 == v231 )
                      break;
                    while ( 1 )
                    {
                      v45 = *(const __m128i **)result;
                      v3 = (__int64 *)result;
                      if ( *(_QWORD *)result > 1u )
                        break;
                      result += 40;
                      if ( v231 == (__int64 *)result )
                        goto LABEL_55;
                    }
                    result = (__int64)v231;
                    v233 = v43;
                    if ( v3 == v231 )
                      break;
                    goto LABEL_64;
                  }
                  v184 = (unsigned int)sub_182C7B0(v183, v3 + 1, v225) >> 31;
                }
                if ( (_BYTE)v184 )
                {
                  v185 = v225;
                  v186 = *v233;
                  if ( (v236 & 0x100000000LL) == 0 )
                    goto LABEL_239;
                }
                else
                {
                  v185 = v3 + 1;
                  v186 = *v233;
                  if ( (*((_BYTE *)v3 + 12) & 1) == 0 )
                    goto LABEL_239;
                }
                sub_182C690(*v233, v3 + 1, v185);
                if ( (*((_BYTE *)v185 + 20) & 1) == 0 )
                  goto LABEL_241;
                goto LABEL_246;
              }
              v199 = (unsigned int)sub_182C7B0(v198, v3 + 1, v225) >> 31;
            }
            if ( (_BYTE)v199 )
            {
              v200 = v225;
              v201 = *v233;
              if ( (v236 & 0x100000000LL) == 0 )
                goto LABEL_262;
            }
            else
            {
              v200 = v3 + 1;
              v201 = *v233;
              if ( (*((_BYTE *)v3 + 12) & 1) == 0 )
                goto LABEL_262;
            }
            sub_182C690(*v233, v3 + 1, v200);
            if ( (*((_BYTE *)v200 + 20) & 1) == 0 )
              goto LABEL_264;
            goto LABEL_269;
          }
        }
        else if ( !v142 )
        {
LABEL_154:
          v56 = v233;
LABEL_72:
          v57 = *v56;
          sub_182CBA0(*v56, v227);
          sub_182CBA0(v57, v223);
          v58 = (__int64 *)v233;
          v59 = *v233;
          sub_182CBA0(*v233, v230.m128i_i64[1]);
          v229.m128i_i64[0] = (__int64)&v245;
          sub_182CBA0(v59, &v245);
          LODWORD(v245) = 1;
          LODWORD(v243) = 1;
          v60 = *v58;
          v246 = 0;
          BYTE4(v243) &= 0xFCu;
          v244 = 0;
          BYTE4(v245) &= 0xFCu;
          if ( *((_DWORD *)v3 + 2) )
          {
            v61 = v3 + 1;
            v62 = v3 + 1;
            if ( (*((_BYTE *)v3 + 28) & 1) == 0 && *((_DWORD *)v3 + 6) == 1 )
            {
              v232 = v60;
              sub_1831A80(v60, v62, v230.m128i_i64[1], v61);
              sub_182CBA0(v232, v3 + 3);
              *((_BYTE *)v3 + 28) &= ~1u;
              *((_DWORD *)v3 + 6) = 1;
            }
            else
            {
              sub_1851D20(v60, v62, v230.m128i_i64[1], v61);
            }
          }
          else
          {
            *((_BYTE *)v3 + 12) &= ~1u;
            *((_DWORD *)v3 + 2) = 1;
            if ( (v245 & 0x100000000LL) != 0 )
            {
              sub_182C690(v60, v3 + 3, v229.m128i_i64[0]);
            }
            else
            {
              v175 = v245;
              *((_BYTE *)v3 + 28) &= ~1u;
              *((_DWORD *)v3 + 6) = v175;
            }
          }
          goto LABEL_76;
        }
        v46 += 6;
        if ( v53 == v46 )
          goto LABEL_154;
      }
    }
LABEL_55:
    if ( v217 )
      return sub_186B220(v217 - 1);
  }
  return result;
}

