__m128i *__fastcall sub_143A500(__int64 a1, unsigned __int64 a2, unsigned __int32 a3, unsigned __int8 a4)
{
  _QWORD *v4; // r14
  _QWORD *v5; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  const __m128i *v14; // r12
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __m128i *v17; // rax
  __int64 v18; // rdi
  __m128i *result; // rax
  _QWORD *v20; // r15
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // r12
  _BOOL8 v24; // rdi
  _QWORD *v25; // rsi
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  _QWORD *v29; // rbx
  _QWORD *v30; // rbp
  _QWORD *v31; // r14
  __int64 v32; // rax
  _QWORD *v33; // r10
  unsigned __int64 v34; // r12
  __int64 v35; // r15
  unsigned __int64 v36; // rdx
  char *v37; // r12
  unsigned int v38; // eax
  __int64 v39; // r8
  unsigned __int64 v40; // r15
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // r15
  __int64 v47; // rdi
  char *v48; // rsi
  unsigned __int64 v49; // rcx
  signed __int64 v50; // rax
  unsigned __int64 v51; // rdx
  char *v52; // r11
  char *v53; // r8
  __int64 v54; // rax
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  char *v59; // r8
  __int64 v60; // r13
  __int64 v61; // r12
  size_t v62; // r8
  unsigned __int64 v63; // rax
  unsigned int v64; // ecx
  _QWORD *v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rdi
  void **v68; // rdi
  void **v69; // r12
  void **v70; // rdi
  __int64 v71; // rdi
  void **v72; // rdi
  void **v73; // r12
  void **v74; // rdi
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  int v78; // eax
  const __m128i *v80; // rbx
  __int64 v81; // rdx
  unsigned __int64 v82; // rbp
  __int64 v83; // rax
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  __int64 v86; // rdi
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 *v90; // r8
  __int64 v91; // rdx
  __int64 *v92; // r9
  _QWORD *j; // rdx
  __int64 *v94; // r13
  _QWORD *v95; // r15
  __int64 *v96; // rbx
  __int64 v97; // r11
  int v98; // edx
  int v99; // edx
  __int64 v100; // rdi
  unsigned int v101; // ecx
  _QWORD *v102; // rax
  __int64 v103; // rsi
  __int64 v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rdx
  void **v107; // rdx
  __int64 v108; // rax
  void **v109; // rax
  int v110; // r11d
  int v111; // edx
  int v112; // r11d
  __int64 v113; // r13
  __int64 v114; // rcx
  int v115; // edi
  _QWORD *v116; // r9
  void *v117; // rdi
  _QWORD *v118; // rbx
  __int64 v119; // rax
  __int64 v120; // rsi
  _QWORD *v121; // rbp
  __int64 v122; // rax
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // r13
  __int64 v125; // rax
  void **v126; // rax
  __int64 v127; // rax
  void **v128; // rax
  void **v129; // r13
  void *v130; // rdi
  __int64 v131; // rax
  size_t v132; // r9
  size_t v133; // rax
  char *v134; // rcx
  unsigned __int64 v135; // rdx
  int v136; // edi
  __int64 v137; // rcx
  __int64 v138; // rdx
  unsigned __int64 v139; // rdx
  __int64 i; // rax
  unsigned __int64 v142; // rax
  unsigned __int64 v143; // rax
  unsigned __int64 v144; // rdx
  __int64 v145; // rax
  _QWORD *v146; // rax
  _QWORD *v147; // r8
  __int64 v148; // rdx
  __int64 *v149; // r9
  _QWORD *k; // rdx
  __int64 *v151; // r13
  __int64 *v152; // rbx
  __int64 v153; // r11
  int v154; // ecx
  int v155; // ecx
  __int64 v156; // rdi
  unsigned int v157; // edx
  _QWORD *v158; // rax
  __int64 v159; // rsi
  __int64 v160; // rax
  unsigned __int64 v161; // rax
  __int64 v162; // rdx
  void **v163; // rdx
  __int64 v164; // rax
  void **v165; // rax
  int v166; // esi
  int v167; // r11d
  __int64 v168; // r15
  int v169; // edi
  _QWORD *v170; // rdi
  _QWORD *v171; // rsi
  __int64 v172; // rax
  __int64 v173; // rcx
  _QWORD *v174; // rcx
  _QWORD *v175; // rdx
  __int64 v176; // rcx
  _QWORD *v177; // rcx
  _QWORD *v178; // rdx
  _QWORD *v179; // rdi
  _QWORD *v180; // rsi
  __int64 v181; // rax
  int v182; // r8d
  _QWORD *v183; // r9
  int v184; // r8d
  _QWORD *v185; // r9
  void **v187; // [rsp+8h] [rbp-C0h]
  __int64 v188; // [rsp+10h] [rbp-B8h]
  size_t n; // [rsp+20h] [rbp-A8h]
  __int64 na; // [rsp+20h] [rbp-A8h]
  size_t ng; // [rsp+20h] [rbp-A8h]
  size_t nh; // [rsp+20h] [rbp-A8h]
  size_t nb; // [rsp+20h] [rbp-A8h]
  size_t nc; // [rsp+20h] [rbp-A8h]
  size_t nd; // [rsp+20h] [rbp-A8h]
  size_t ni; // [rsp+20h] [rbp-A8h]
  size_t ne; // [rsp+20h] [rbp-A8h]
  size_t nf; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v201; // [rsp+28h] [rbp-A0h]
  _QWORD *src; // [rsp+30h] [rbp-98h]
  char *srca; // [rsp+30h] [rbp-98h]
  _QWORD *srcb; // [rsp+30h] [rbp-98h]
  _QWORD *srcc; // [rsp+30h] [rbp-98h]
  _QWORD *srcg; // [rsp+30h] [rbp-98h]
  _QWORD *srch; // [rsp+30h] [rbp-98h]
  char *srcd; // [rsp+30h] [rbp-98h]
  char *srci; // [rsp+30h] [rbp-98h]
  _QWORD *srcj; // [rsp+30h] [rbp-98h]
  _QWORD *srce; // [rsp+30h] [rbp-98h]
  _QWORD *srcf; // [rsp+30h] [rbp-98h]
  __int64 v213; // [rsp+38h] [rbp-90h]
  signed __int64 v214; // [rsp+38h] [rbp-90h]
  __int64 *v215; // [rsp+38h] [rbp-90h]
  unsigned __int64 v216; // [rsp+38h] [rbp-90h]
  _QWORD *v217; // [rsp+38h] [rbp-90h]
  _QWORD *v218; // [rsp+38h] [rbp-90h]
  _QWORD *v219; // [rsp+40h] [rbp-88h]
  char *v220; // [rsp+48h] [rbp-80h]
  unsigned __int64 v221; // [rsp+48h] [rbp-80h]
  unsigned __int64 v222; // [rsp+48h] [rbp-80h]
  void **v223; // [rsp+48h] [rbp-80h]
  char *v224; // [rsp+48h] [rbp-80h]
  _QWORD *v225; // [rsp+48h] [rbp-80h]
  char *v226; // [rsp+48h] [rbp-80h]
  _QWORD *v227; // [rsp+50h] [rbp-78h]
  void **v228; // [rsp+50h] [rbp-78h]
  char *v229; // [rsp+50h] [rbp-78h]
  unsigned __int64 v230; // [rsp+50h] [rbp-78h]
  unsigned __int64 v231; // [rsp+50h] [rbp-78h]
  void **v232; // [rsp+50h] [rbp-78h]
  char *v233; // [rsp+50h] [rbp-78h]
  __int64 v234; // [rsp+58h] [rbp-70h]
  size_t v235; // [rsp+58h] [rbp-70h]
  void **v236; // [rsp+58h] [rbp-70h]
  size_t v237; // [rsp+58h] [rbp-70h]
  _QWORD *v238; // [rsp+60h] [rbp-68h]
  _QWORD *v239; // [rsp+68h] [rbp-60h]
  __m128 v240; // [rsp+70h] [rbp-58h] BYREF
  __int64 v241; // [rsp+80h] [rbp-48h]
  int v242; // [rsp+88h] [rbp-40h]

  v4 = (_QWORD *)a1;
  if ( *(char *)(*(_QWORD *)(a1 + 56) + 22LL) < 0 )
  {
    v5 = (_QWORD *)(a1 + 1608);
    v6 = *(_QWORD *)(a1 + 104) + 632LL;
    sub_1409280(v6, a2, 0);
    sub_1408340(v6, a2, 0);
    sub_13FAAE0(v6, a2, 0);
    v7 = *(_QWORD **)(a1 + 1616);
    v8 = (_QWORD *)(a1 + 1608);
    if ( v7 )
    {
      do
      {
        while ( v7[4] >= a2 )
        {
          v8 = v7;
          v7 = (_QWORD *)v7[2];
          if ( !v7 )
            goto LABEL_7;
        }
        v7 = (_QWORD *)v7[3];
      }
      while ( v7 );
LABEL_7:
      if ( v8 != v5 && v8[4] <= a2 )
      {
        v9 = v8 + 5;
        v10 = 0;
        v188 = (__int64)v9;
LABEL_10:
        v11 = v4[213];
        v242 = *((_DWORD *)v4 + 454);
        v12 = *((unsigned int *)v4 + 334);
        v13 = v4[166];
        v240.m128_u64[0] = a2;
        v14 = (const __m128i *)&v240;
        v240.m128_i32[2] = a3;
        v15 = *((unsigned int *)v4 + 335);
        v241 = v11;
        v16 = v12 + 1;
        v240.m128_i8[12] = a4;
        v17 = (__m128i *)(v13 + 32 * v12);
        if ( v16 > v15 )
        {
          v170 = v4 + 166;
          v171 = v4 + 168;
          if ( v13 > (unsigned __int64)&v240 || v17 <= (__m128i *)&v240 )
          {
            sub_2237220(v170, v171, v16, 32);
            v14 = (const __m128i *)&v240;
            v17 = (__m128i *)(v4[166] + 32LL * *((unsigned int *)v4 + 334));
          }
          else
          {
            sub_2237220(v170, v171, v16, 32);
            v172 = v4[166];
            v14 = (const __m128i *)((char *)&v240 + v172 - v13);
            v17 = (__m128i *)(32LL * *((unsigned int *)v4 + 334) + v172);
          }
        }
        *v17 = _mm_loadu_si128(v14);
        v17[1] = _mm_loadu_si128(v14 + 1);
        v18 = v4[149];
        ++*((_DWORD *)v4 + 334);
        if ( v18 )
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 72LL))(v18, a2, a3, a4);
        result = (__m128i *)v188;
        v4[213] = v188;
        if ( v10 )
          return (__m128i *)sub_1464EA0(v4, a2, a3, 0);
        return result;
      }
    }
    v20 = (_QWORD *)operator new(0x60u);
    v20[11] = 0;
    v20[4] = a2;
    v20[5] = 0;
    v20[6] = 0;
    v20[10] = 0;
    *(_OWORD *)(v20 + 7) = 0;
    *((_OWORD *)v20 + 4) = 0;
    v21 = sub_143A240((_QWORD *)(a1 + 1600), v8, v20 + 4);
    v23 = v21;
    if ( v22 )
    {
      v24 = v5 == v22 || v21 || v20[4] < v22[4];
      std::_Rb_tree_insert_and_rebalance(v24, v20, v22, v4 + 201);
      ++v4[205];
    }
    else
    {
      v117 = (void *)v20[8];
      if ( v117 )
        operator delete(v117);
      v118 = (_QWORD *)v20[5];
      v119 = *((unsigned int *)v20 + 14);
      v120 = 2 * v119;
      if ( (_DWORD)v119 )
      {
        v121 = &v118[v120];
        do
        {
          if ( *v118 != -8192 && *v118 != -4096 )
          {
            v122 = v118[1];
            if ( v122 )
            {
              if ( (v122 & 4) != 0 )
              {
                v123 = v122 & 0xFFFFFFFFFFFFFFF8LL;
                v124 = v123;
                if ( v123 )
                {
                  v125 = *(_QWORD *)(v123 + 24);
                  if ( v125 )
                  {
                    if ( (v125 & 4) != 0 )
                    {
                      v126 = (void **)(v125 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v126 )
                      {
                        if ( *v126 != v126 + 2 )
                        {
                          v187 = v126;
                          free(*v126);
                          v126 = v187;
                        }
                        operator delete(v126, 0x30u);
                      }
                    }
                  }
                  v127 = *(_QWORD *)(v124 + 8);
                  if ( v127 )
                  {
                    if ( (v127 & 4) != 0 )
                    {
                      v128 = (void **)(v127 & 0xFFFFFFFFFFFFFFF8LL);
                      v129 = v128;
                      if ( v128 )
                      {
                        if ( *v128 != v128 + 2 )
                          free(*v128);
                        operator delete(v129, 0x30u);
                      }
                    }
                  }
                }
              }
            }
          }
          v118 += 2;
        }
        while ( v121 != v118 );
        v118 = (_QWORD *)v20[5];
        v120 = 2LL * *((unsigned int *)v20 + 14);
      }
      operator delete(v118, v120 * 8, 8);
      v130 = v20;
      v20 = v23;
      operator delete(v130);
    }
    v25 = (_QWORD *)v4[206];
    if ( *((_DWORD *)v4 + 414) )
      sub_13C4310(&v240, v25, &v25[2 * *((unsigned int *)v4 + 416)], (__int64)(v4 + 206), 0);
    else
      sub_13C4310(
        &v240,
        &v25[2 * *((unsigned int *)v4 + 416)],
        &v25[2 * *((unsigned int *)v4 + 416)],
        (__int64)(v4 + 206),
        1);
    src = (_QWORD *)v240.m128_u64[1];
    n = v240.m128_u64[0];
    v26 = (_QWORD *)(v4[206] + 16LL * *((unsigned int *)v4 + 416));
    v188 = (__int64)(v20 + 5);
    sub_13C4310(&v240, v26, v26, (__int64)(v4 + 206), 1);
    v28 = (__int64)src;
    v201 = v240.m128_u64[0];
    if ( v240.m128_u64[0] == n )
    {
LABEL_77:
      v10 = 1;
      goto LABEL_10;
    }
    v219 = v4;
    v29 = (_QWORD *)n;
    v30 = src;
    v31 = v20;
    while ( 1 )
    {
      v32 = v29[1];
      if ( !v32 )
        goto LABEL_68;
      v33 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
      v34 = v32 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v32 & 4) != 0 )
      {
        if ( !v33 )
          goto LABEL_68;
        if ( !*v33 )
        {
          v139 = v33[3] & 0xFFFFFFFFFFFFFFF8LL;
          if ( !((v33[3] & 4) != 0 ? *(_DWORD *)(v139 + 8) : v139 != 0) )
            goto LABEL_68;
        }
        v35 = *v33;
        v33 = (_QWORD *)(*v33 & 0xFFFFFFFFFFFFFFFBLL);
        v36 = *(_QWORD *)(v34 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v34 + 24) & 4) != 0 )
        {
          v37 = *(char **)v36;
          v38 = *(_DWORD *)(v36 + 8);
        }
        else
        {
          v37 = (char *)(v34 + 24);
          v38 = v36 != 0;
        }
        v39 = v38;
        if ( v38 )
        {
          v40 = v35 & 0xFFFFFFFFFFFFFFF8LL;
          v41 = v219[16];
          v219[26] += 32LL;
          v42 = (v41 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          v27 = v42 + 32;
          if ( v219[17] >= v42 + 32 && v41 )
          {
            v219[16] = v27;
            v43 = (v41 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            ni = v39;
            v131 = sub_986170((__int64)(v219 + 16), 32, 32, 4, v39, v28);
            v39 = ni;
            v43 = v131;
            v42 = v131 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v43 = v40;
          v33 = (_QWORD *)(v42 | 4);
          *(_BYTE *)(v43 + 20) = 0;
          na = 8 * v39;
          srca = &v37[8 * v39];
          *(_QWORD *)(v43 + 8) = 0;
          *(_DWORD *)(v43 + 16) = 0;
          *(_QWORD *)(v43 + 24) = 0;
          if ( srca == v37 + 8 )
          {
            *(_QWORD *)(v43 + 24) = *(_QWORD *)v37 & 0xFFFFFFFFFFFFFFFBLL;
          }
          else
          {
            v213 = v42 | 4;
            v44 = operator new(0x30u);
            v33 = (_QWORD *)v213;
            *(_QWORD *)(v44 + 8) = 0x400000000LL;
            *(_QWORD *)v44 = v44 + 16;
            v45 = na >> 3;
            v46 = v44 & 0xFFFFFFFFFFFFFFF8LL;
            *(_QWORD *)(v43 + 24) = v44 | 4;
            v47 = *(unsigned int *)((v44 & 0xFFFFFFFFFFFFFFF8LL) + 8);
            v48 = *(char **)(v44 & 0xFFFFFFFFFFFFFFF8LL);
            v49 = *(unsigned int *)((v44 & 0xFFFFFFFFFFFFFFF8LL) + 12);
            v50 = 8 * v47;
            v51 = (na >> 3) + v47;
            v52 = &v48[8 * v47];
            v53 = v48;
            if ( v48 == v52 )
            {
              if ( v51 > v49 )
              {
                sub_2237220(v46, v46 + 16, v51, 8);
                v45 = na >> 3;
                v33 = (_QWORD *)v213;
                v52 = (char *)(*(_QWORD *)v46 + 8LL * *(unsigned int *)(v46 + 8));
              }
              v216 = v45;
              srch = v33;
              memcpy(v52, v37, na);
              v28 = v216;
              v33 = srch;
              *(_DWORD *)(v46 + 8) += v216;
            }
            else
            {
              if ( v51 > v49 )
              {
                sub_2237220(v46, v46 + 16, v51, 8);
                v47 = *(unsigned int *)(v46 + 8);
                v48 = *(char **)v46;
                v45 = na >> 3;
                v33 = (_QWORD *)v213;
                v50 = 8 * v47;
                v53 = *(char **)v46;
                v52 = (char *)(*(_QWORD *)v46 + 8 * v47);
              }
              v214 = v50;
              v27 = v50 >> 3;
              if ( v50 >> 3 >= v45 )
              {
                v132 = v50 - na;
                v133 = na;
                srcd = &v48[v132];
                v134 = v52;
                v135 = (na >> 3) + v47;
                if ( v135 > *(unsigned int *)(v46 + 12) )
                {
                  v239 = v33;
                  v237 = v132;
                  v233 = v52;
                  v226 = v53;
                  sub_2237220(v46, v46 + 16, v135, 8);
                  v47 = *(unsigned int *)(v46 + 8);
                  v33 = v239;
                  v133 = na;
                  v134 = (char *)(*(_QWORD *)v46 + 8 * v47);
                  v132 = v237;
                  v52 = v233;
                  v53 = v226;
                }
                if ( srcd != v52 )
                {
                  v238 = v33;
                  v235 = v132;
                  v229 = v52;
                  v224 = v53;
                  memmove(v134, srcd, v133);
                  LODWORD(v47) = *(_DWORD *)(v46 + 8);
                  v33 = v238;
                  v132 = v235;
                  v52 = v229;
                  v53 = v224;
                }
                *(_DWORD *)(v46 + 8) = (na >> 3) + v47;
                if ( srcd != v53 )
                {
                  v217 = v33;
                  srci = v53;
                  memmove(&v52[-v132], v53, v132);
                  v33 = v217;
                  v53 = srci;
                }
                srcj = v33;
                memmove(v53, v37, na);
                v33 = srcj;
              }
              else
              {
                v28 = v47 + v45;
                *(_DWORD *)(v46 + 8) = v28;
                if ( v53 != v52 )
                {
                  v234 = v50 >> 3;
                  v227 = v33;
                  v220 = v52;
                  ng = (size_t)v53;
                  memcpy(&v48[8 * (unsigned int)v28 - v50], v53, v50);
                  v27 = v234;
                  v33 = v227;
                  v52 = v220;
                  v53 = (char *)ng;
                }
                if ( !v27 )
                  goto LABEL_49;
                if ( (v37 >= v53 + 16 || v53 >= v37 + 16) && (unsigned __int64)(v27 - 1) > 3 )
                {
                  v54 = 0;
                  v55 = 0;
                  v56 = ((unsigned __int64)(v27 - 2) >> 1) + 1;
                  do
                  {
                    ++v55;
                    *(__m128i *)&v53[v54] = _mm_loadu_si128((const __m128i *)&v37[v54]);
                    v54 += 16;
                  }
                  while ( v55 < v56 );
                  v57 = 2 * v56;
                  v58 = 16 * v56;
                  v59 = &v53[v58];
                  if ( v27 != v57 )
                    *(_QWORD *)v59 = *(_QWORD *)&v37[v58];
                }
                else
                {
                  for ( i = 0; i != v27; ++i )
                    *(_QWORD *)&v53[8 * i] = *(_QWORD *)&v37[8 * i];
                }
                v37 += v214;
                if ( srca != v37 )
                {
LABEL_49:
                  nh = (size_t)v33;
                  memcpy(v52, v37, srca - v37);
                  v33 = (_QWORD *)nh;
                }
              }
            }
          }
          *(_DWORD *)(v43 + 16) = 0;
        }
        v60 = *((unsigned int *)v31 + 14);
        v61 = *v29;
        v62 = v31[5];
        if ( !(_DWORD)v60 )
          goto LABEL_83;
      }
      else
      {
        if ( !v33 )
          goto LABEL_68;
        v60 = *((unsigned int *)v31 + 14);
        v61 = *v29;
        v62 = v31[5];
        if ( !(_DWORD)v60 )
          goto LABEL_83;
      }
      v63 = (unsigned int)(v60 - 1);
      v64 = v63 & (((unsigned int)v61 >> 4) ^ ((unsigned int)v61 >> 9));
      v65 = (_QWORD *)(v62 + 16LL * v64);
      v66 = *v65;
      if ( v61 != *v65 )
      {
        v136 = 1;
        v28 = 0;
        if ( v66 != -4096 )
        {
          while ( 1 )
          {
            if ( !v28 && v66 == -8192 )
              v28 = (__int64)v65;
            v64 = v63 & (v136 + v64);
            v65 = (_QWORD *)(v62 + 16LL * v64);
            v66 = *v65;
            if ( v61 == *v65 )
              goto LABEL_53;
            if ( v66 == -4096 )
              break;
            ++v136;
          }
          if ( v28 )
            v65 = (_QWORD *)v28;
        }
        v111 = *((_DWORD *)v31 + 12) + 1;
        v27 = (unsigned int)(3 * v60);
        if ( 4 * v111 >= (unsigned int)v27 )
        {
LABEL_83:
          srcb = v33;
          nc = v62;
          v87 = ((((((((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                   | (unsigned int)(2 * v60 - 1)
                   | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 4)
                 | (((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v60 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 8)
               | (((((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v60 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v60 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 16;
          v88 = (v87
               | (((((((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                   | (unsigned int)(2 * v60 - 1)
                   | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 4)
                 | (((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v60 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 8)
               | (((((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v60 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v60 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1))
              + 1;
          if ( (unsigned int)v88 < 0x40 )
            LODWORD(v88) = 64;
          *((_DWORD *)v31 + 14) = v88;
          v89 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v88, 8, v87, v27, v62, v28);
          v90 = (__int64 *)nc;
          v33 = srcb;
          v31[5] = v89;
          if ( nc )
          {
            v91 = *((unsigned int *)v31 + 14);
            v31[6] = 0;
            nd = 16 * v60;
            v92 = &v90[2 * v60];
            for ( j = &v89[2 * v91]; j != v89; v89 += 2 )
              *v89 = -4096;
            v94 = v90;
            if ( v90 != v92 )
            {
              v215 = v90;
              v95 = srcb;
              srcc = v29;
              v96 = v92;
              do
              {
                v97 = *v94;
                if ( *v94 != -4096 && v97 != -8192 )
                {
                  v98 = *((_DWORD *)v31 + 14);
                  if ( !v98 )
                  {
                    *(_QWORD *)&dword_0 = *v94;
                    BUG();
                  }
                  v99 = v98 - 1;
                  v100 = v31[5];
                  v101 = v99 & (((unsigned int)v97 >> 9) ^ ((unsigned int)v97 >> 4));
                  v102 = (_QWORD *)(v100 + 16LL * v101);
                  v103 = *v102;
                  if ( v97 != *v102 )
                  {
                    v182 = 1;
                    v183 = nullptr;
                    if ( v103 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v183 && v103 == -8192 )
                          v183 = v102;
                        v101 = v99 & (v182 + v101);
                        v102 = (_QWORD *)(v100 + 16LL * v101);
                        v103 = *v102;
                        if ( v97 == *v102 )
                          break;
                        if ( v103 == -4096 )
                        {
                          if ( v183 )
                            v102 = v183;
                          break;
                        }
                        ++v182;
                      }
                    }
                  }
                  *v102 = v97;
                  v102[1] = v94[1];
                  v94[1] = 0;
                  ++*((_DWORD *)v31 + 12);
                  v104 = v94[1];
                  if ( v104 )
                  {
                    if ( (v104 & 4) != 0 )
                    {
                      v105 = v104 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( v105 )
                      {
                        v106 = *(_QWORD *)(v105 + 24);
                        if ( v106 )
                        {
                          if ( (v106 & 4) != 0 )
                          {
                            v107 = (void **)(v106 & 0xFFFFFFFFFFFFFFF8LL);
                            if ( v107 )
                            {
                              if ( *v107 != v107 + 2 )
                              {
                                v228 = v107;
                                v221 = v105;
                                free(*v107);
                                v107 = v228;
                                v105 = v221;
                              }
                              v222 = v105;
                              operator delete(v107, 0x30u);
                              v105 = v222;
                            }
                          }
                        }
                        v108 = *(_QWORD *)(v105 + 8);
                        if ( v108 )
                        {
                          if ( (v108 & 4) != 0 )
                          {
                            v109 = (void **)(v108 & 0xFFFFFFFFFFFFFFF8LL);
                            if ( v109 )
                            {
                              if ( *v109 != v109 + 2 )
                              {
                                v223 = v109;
                                free(*v109);
                                v109 = v223;
                              }
                              operator delete(v109, 0x30u);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                v94 += 2;
              }
              while ( v96 != v94 );
              v29 = srcc;
              v90 = v215;
              v33 = v95;
            }
            srcg = v33;
            operator delete(v90, nd, 8);
            v89 = (_QWORD *)v31[5];
            v110 = *((_DWORD *)v31 + 14);
            v33 = srcg;
            v111 = *((_DWORD *)v31 + 12) + 1;
          }
          else
          {
            v173 = *((unsigned int *)v31 + 14);
            v31[6] = 0;
            v110 = v173;
            v174 = &v89[2 * v173];
            if ( v89 != v174 )
            {
              v175 = v89;
              do
              {
                *v175 = -4096;
                v175 += 2;
              }
              while ( v174 != v175 );
            }
            v111 = 1;
          }
          if ( !v110 )
          {
LABEL_264:
            ++*((_DWORD *)v31 + 12);
            BUG();
          }
          v112 = v110 - 1;
          v113 = v112 & (((unsigned int)v61 >> 4) ^ ((unsigned int)v61 >> 9));
          v65 = &v89[2 * v113];
          v114 = *v65;
          if ( v61 != *v65 )
          {
            v115 = 1;
            v116 = nullptr;
            if ( v114 == -4096 )
              goto LABEL_115;
            while ( 1 )
            {
              if ( !v116 && v114 == -8192 )
                v116 = v65;
              v113 = v112 & (unsigned int)(v113 + v115);
              v65 = &v89[2 * v113];
              v114 = *v65;
              if ( v61 == *v65 )
                break;
              if ( v114 == -4096 )
              {
LABEL_205:
                if ( !v116 )
                  goto LABEL_115;
                v114 = *v116;
                v65 = v116;
                break;
              }
              ++v115;
            }
          }
        }
        else
        {
          v137 = (unsigned int)(v60 - *((_DWORD *)v31 + 13) - v111);
          if ( (unsigned int)v137 > (unsigned int)v60 >> 3 )
          {
            v114 = *v65;
            goto LABEL_159;
          }
          srce = v33;
          ne = v62;
          v142 = (((v63 >> 1) | v63) >> 2) | (v63 >> 1) | v63;
          v143 = (((v142 >> 4) | v142) >> 8) | (v142 >> 4) | v142;
          v144 = v143 >> 16;
          v145 = ((v143 >> 16) | v143) + 1;
          if ( (unsigned int)v145 < 0x40 )
            LODWORD(v145) = 64;
          *((_DWORD *)v31 + 14) = v145;
          v146 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v145, 8, v144, v137, v62, v28);
          v147 = (_QWORD *)ne;
          v33 = srce;
          v31[5] = v146;
          if ( ne )
          {
            v148 = *((unsigned int *)v31 + 14);
            v31[6] = 0;
            nf = 16 * v60;
            v149 = &v147[2 * v60];
            for ( k = &v146[2 * v148]; k != v146; v146 += 2 )
              *v146 = -4096;
            v218 = v147;
            v151 = v147;
            v225 = srce;
            srcf = v29;
            v152 = v149;
            do
            {
              v153 = *v151;
              if ( *v151 != -8192 && v153 != -4096 )
              {
                v154 = *((_DWORD *)v31 + 14);
                if ( !v154 )
                {
                  *(_QWORD *)&dword_0 = *v151;
                  BUG();
                }
                v155 = v154 - 1;
                v156 = v31[5];
                v157 = v155 & (((unsigned int)v153 >> 9) ^ ((unsigned int)v153 >> 4));
                v158 = (_QWORD *)(v156 + 16LL * v157);
                v159 = *v158;
                if ( *v158 != v153 )
                {
                  v184 = 1;
                  v185 = nullptr;
                  if ( v159 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( v159 == -8192 && !v185 )
                        v185 = v158;
                      v157 = v155 & (v184 + v157);
                      v158 = (_QWORD *)(v156 + 16LL * v157);
                      v159 = *v158;
                      if ( v153 == *v158 )
                        break;
                      if ( v159 == -4096 )
                      {
                        if ( v185 )
                          v158 = v185;
                        break;
                      }
                      ++v184;
                    }
                  }
                }
                *v158 = v153;
                v158[1] = v151[1];
                v151[1] = 0;
                ++*((_DWORD *)v31 + 12);
                v160 = v151[1];
                if ( v160 )
                {
                  if ( (v160 & 4) != 0 )
                  {
                    v161 = v160 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( v161 )
                    {
                      v162 = *(_QWORD *)(v161 + 24);
                      if ( v162 )
                      {
                        if ( (v162 & 4) != 0 )
                        {
                          v163 = (void **)(v162 & 0xFFFFFFFFFFFFFFF8LL);
                          if ( v163 )
                          {
                            if ( *v163 != v163 + 2 )
                            {
                              v236 = v163;
                              v230 = v161;
                              free(*v163);
                              v163 = v236;
                              v161 = v230;
                            }
                            v231 = v161;
                            operator delete(v163, 0x30u);
                            v161 = v231;
                          }
                        }
                      }
                      v164 = *(_QWORD *)(v161 + 8);
                      if ( v164 )
                      {
                        if ( (v164 & 4) != 0 )
                        {
                          v165 = (void **)(v164 & 0xFFFFFFFFFFFFFFF8LL);
                          if ( v165 )
                          {
                            if ( *v165 != v165 + 2 )
                            {
                              v232 = v165;
                              free(*v165);
                              v165 = v232;
                            }
                            operator delete(v165, 0x30u);
                          }
                        }
                      }
                    }
                  }
                }
              }
              v151 += 2;
            }
            while ( v152 != v151 );
            v29 = srcf;
            operator delete(v218, nf, 8);
            v146 = (_QWORD *)v31[5];
            v166 = *((_DWORD *)v31 + 14);
            v33 = v225;
            v111 = *((_DWORD *)v31 + 12) + 1;
          }
          else
          {
            v176 = *((unsigned int *)v31 + 14);
            v31[6] = 0;
            v166 = v176;
            v177 = &v146[2 * v176];
            if ( v146 != v177 )
            {
              v178 = v146;
              do
              {
                *v178 = -4096;
                v178 += 2;
              }
              while ( v177 != v178 );
            }
            v111 = 1;
          }
          if ( !v166 )
            goto LABEL_264;
          v167 = v166 - 1;
          LODWORD(v168) = (v166 - 1) & (((unsigned int)v61 >> 4) ^ ((unsigned int)v61 >> 9));
          v65 = &v146[2 * (unsigned int)v168];
          v114 = *v65;
          if ( v61 != *v65 )
          {
            v169 = 1;
            v116 = nullptr;
            if ( v114 != -4096 )
            {
              while ( 1 )
              {
                if ( !v116 && v114 == -8192 )
                  v116 = v65;
                v168 = v167 & (unsigned int)(v168 + v169);
                v65 = &v146[2 * v168];
                v114 = *v65;
                if ( v61 == *v65 )
                  goto LABEL_159;
                if ( v114 == -4096 )
                  goto LABEL_205;
                ++v169;
              }
            }
LABEL_115:
            *((_DWORD *)v31 + 12) = v111;
LABEL_161:
            v65[1] = v33;
            v138 = *((unsigned int *)v31 + 14);
            *v65 = v61;
            sub_13C4310(&v240, v65, (_QWORD *)(v31[5] + 16 * v138), v188, 1);
            goto LABEL_68;
          }
        }
LABEL_159:
        *((_DWORD *)v31 + 12) = v111;
        if ( v114 != -4096 )
          --*((_DWORD *)v31 + 13);
        goto LABEL_161;
      }
LABEL_53:
      nb = (size_t)v33;
      sub_13C4310(&v240, v65, (_QWORD *)(v62 + 16LL * (unsigned int)v60), v188, 1);
      if ( nb && (nb & 4) != 0 && (nb & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v67 = *(_QWORD *)((nb & 0xFFFFFFFFFFFFFFF8LL) + 24);
        if ( v67 )
        {
          if ( (v67 & 4) != 0 )
          {
            v68 = (void **)(v67 & 0xFFFFFFFFFFFFFFF8LL);
            v69 = v68;
            if ( v68 )
            {
              v70 = (void **)*v68;
              if ( v70 != v69 + 2 )
                free(v70);
              operator delete(v69, 0x30u);
            }
          }
        }
        v71 = *(_QWORD *)((nb & 0xFFFFFFFFFFFFFFF8LL) + 8);
        if ( v71 )
        {
          if ( (v71 & 4) != 0 )
          {
            v72 = (void **)(v71 & 0xFFFFFFFFFFFFFFF8LL);
            v73 = v72;
            if ( v72 )
            {
              v74 = (void **)*v72;
              if ( v74 != v73 + 2 )
                free(v74);
              operator delete(v73, 0x30u);
            }
          }
        }
      }
LABEL_68:
      if ( v29 + 2 != v30 )
      {
        v75 = v29[2];
        if ( v75 != -8192 && v75 != -4096 )
        {
          v29 += 2;
          goto LABEL_75;
        }
        v76 = v29 + 4;
        while ( 1 )
        {
          v29 = v76;
          if ( v76 == v30 )
            break;
          v77 = *v76;
          v76 += 2;
          if ( v77 != -4096 && v77 != -8192 )
            goto LABEL_75;
        }
      }
      v29 = v30;
LABEL_75:
      if ( v29 == (_QWORD *)v201 )
      {
        v4 = v219;
        goto LABEL_77;
      }
    }
  }
  v78 = *(_DWORD *)(a1 + 1816);
  v240.m128_i8[12] = a4;
  v80 = (const __m128i *)&v240;
  v81 = v4[213];
  v82 = v4[166];
  v240.m128_u64[0] = a2;
  v242 = v78;
  v83 = *((unsigned int *)v4 + 334);
  v84 = *((unsigned int *)v4 + 335);
  v241 = v81;
  v85 = v83 + 1;
  v240.m128_i32[2] = a3;
  result = (__m128i *)(v82 + 32 * v83);
  if ( v85 > v84 )
  {
    v179 = v4 + 166;
    v180 = v4 + 168;
    if ( v82 > (unsigned __int64)&v240 || result <= (__m128i *)&v240 )
    {
      sub_2237220(v179, v180, v85, 32);
      result = (__m128i *)(v4[166] + 32LL * *((unsigned int *)v4 + 334));
    }
    else
    {
      sub_2237220(v179, v180, v85, 32);
      v181 = v4[166];
      v80 = (const __m128i *)((char *)&v240 + v181 - v82);
      result = (__m128i *)(32LL * *((unsigned int *)v4 + 334) + v181);
    }
  }
  *result = _mm_loadu_si128(v80);
  result[1] = _mm_loadu_si128(v80 + 1);
  v86 = v4[149];
  ++*((_DWORD *)v4 + 334);
  if ( v86 )
    return (__m128i *)(*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)v86 + 72LL))(
                        v86,
                        a2,
                        a3,
                        a4);
  return result;
}
