__int64 __fastcall sub_96CD80(__int64 a1, __int64 a2, __int64 **a3, int *a4)
{
  char **v4; // rbp
  char **v5; // r13
  char **v6; // rbp
  char **exception; // rbp
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  int v12; // r14d
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  __int32 v15; // ebx
  __int64 v16; // r10
  int v17; // r15d
  __int64 v18; // r8
  __m128i *v19; // rbp
  __m128i *v20; // rdi
  __int64 v21; // rax
  __m128i *v22; // rcx
  __m128i *v23; // rax
  __m128i *v24; // rsi
  __int32 v25; // edx
  int v26; // edx
  __int64 v27; // rsi
  char *v28; // rbp
  unsigned int v29; // ebx
  char *v30; // rcx
  char *v31; // rax
  char *v32; // rbx
  char *v33; // r12
  void *v34; // rdi
  unsigned int v35; // ebx
  __int64 v36; // r12
  __int64 v37; // rbp
  _QWORD *v38; // rbx
  _QWORD *v39; // rax
  unsigned int *v40; // rax
  _DWORD *v41; // r13
  __m128i *v42; // rbx
  unsigned int v43; // r15d
  _QWORD *v44; // rax
  char *v45; // r12
  __int64 v46; // rax
  _DWORD *v47; // rsi
  _DWORD *v48; // rax
  int v49; // edx
  unsigned int *v50; // rdi
  unsigned int v51; // r8d
  char *v52; // rax
  int v53; // edx
  unsigned int v54; // r8d
  unsigned int v55; // ebp
  __int64 v56; // rcx
  __int64 v57; // r10
  __int32 v58; // edx
  char *v59; // rax
  char *v60; // rdx
  __int64 v61; // r11
  __int64 v62; // rax
  char *v63; // rax
  char *v64; // rbp
  unsigned int v65; // r11d
  char *i; // rax
  __int64 v67; // rdx
  char *v68; // rsi
  __int64 v69; // rsi
  unsigned int v70; // r8d
  __int64 v71; // rdx
  char *v72; // rsi
  char *v73; // rax
  int v74; // edx
  unsigned int v75; // r10d
  char *v76; // rax
  char *v77; // rdx
  __int64 *v78; // r15
  int v79; // esi
  __int64 v80; // rax
  __m128i *v81; // rdi
  __m128i *j; // rax
  __int32 v83; // ecx
  _DWORD *v84; // rcx
  unsigned int v85; // eax
  __int64 v86; // rsi
  int v87; // eax
  __int64 *v88; // rsi
  char *v89; // rax
  __int64 v90; // rax
  __m128i *v91; // rcx
  __m128i *k; // rax
  __int32 v93; // edx
  __int64 v94; // rbp
  unsigned int v95; // eax
  __int64 v96; // rdx
  int v97; // eax
  __int64 *v98; // rdx
  __int64 *v99; // rdx
  __int64 v100; // rdi
  char *v101; // rbp
  _DWORD *v102; // rdx
  _QWORD *v103; // rax
  void *v104; // rdx
  __int64 v105; // rcx
  _QWORD *v106; // rdi
  _DWORD *v107; // rsi
  int v108; // eax
  __int64 v109; // rcx
  _DWORD *v110; // rdx
  unsigned int v111; // eax
  __int64 *v112; // rbp
  __int64 v113; // rax
  int v114; // edx
  __int64 *v115; // rbx
  __int64 v116; // rsi
  bool v117; // zf
  __int64 result; // rax
  __int32 v119; // ecx
  unsigned int v120; // r9d
  size_t v121; // rsi
  unsigned int *v122; // rax
  __int64 v123; // rsi
  _DWORD *v124; // rax
  int v125; // edx
  char *v126; // rax
  int v127; // edx
  _QWORD *v128; // rax
  __int32 v129; // edx
  __m128i *v130; // rax
  int v131; // ecx
  __m128i *v132; // r9
  __m128i *v133; // rdx
  const __m128i *v134; // rax
  const __m128i *v135; // r14
  __int64 v136; // rdx
  __m128i *v137; // rsi
  __m128i *v138; // rdx
  __m128i v139; // xmm0
  unsigned int v140; // r8d
  unsigned int *v141; // rax
  __int64 v142; // rdi
  unsigned int v143; // esi
  unsigned int v144; // eax
  unsigned int *v145; // rcx
  __int64 *v146; // rbp
  __int64 v147; // r11
  __int64 *v148; // rdi
  _DWORD *v149; // r8
  __int64 *v150; // r9
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 *v153; // rbx
  __int64 *v154; // r12
  __int64 *v155; // r13
  __int64 v156; // rsi
  __int64 v157; // rdi
  unsigned int v158; // edx
  unsigned int v159; // ecx
  unsigned int *v160; // rax
  _QWORD *v161; // rax
  _QWORD *v162; // rdx
  unsigned int v163; // ebx
  __m128i *ptr; // [rsp+8h] [rbp-180h]
  int v165; // [rsp+10h] [rbp-178h]
  char *v166; // [rsp+10h] [rbp-178h]
  void *v167; // [rsp+10h] [rbp-178h]
  __m128i *v168; // [rsp+10h] [rbp-178h]
  _DWORD *v169; // [rsp+10h] [rbp-178h]
  _DWORD *v170; // [rsp+10h] [rbp-178h]
  void *v171; // [rsp+10h] [rbp-178h]
  char *v172; // [rsp+10h] [rbp-178h]
  char *v173; // [rsp+10h] [rbp-178h]
  unsigned int v174; // [rsp+10h] [rbp-178h]
  __int64 v175; // [rsp+18h] [rbp-170h]
  unsigned int *v176; // [rsp+20h] [rbp-168h]
  _DWORD *v177; // [rsp+28h] [rbp-160h]
  char *v178; // [rsp+30h] [rbp-158h]
  unsigned int v179; // [rsp+38h] [rbp-150h]
  char *v180; // [rsp+38h] [rbp-150h]
  size_t v181; // [rsp+38h] [rbp-150h]
  char *v182; // [rsp+38h] [rbp-150h]
  __int64 v183; // [rsp+38h] [rbp-150h]
  _DWORD *v184; // [rsp+38h] [rbp-150h]
  __int64 v185; // [rsp+40h] [rbp-148h]
  unsigned int v186; // [rsp+40h] [rbp-148h]
  unsigned int v187; // [rsp+40h] [rbp-148h]
  size_t v188; // [rsp+40h] [rbp-148h]
  unsigned int v189; // [rsp+40h] [rbp-148h]
  __m128i *v190; // [rsp+40h] [rbp-148h]
  unsigned int *v191; // [rsp+40h] [rbp-148h]
  unsigned int v192; // [rsp+48h] [rbp-140h]
  unsigned int v193; // [rsp+48h] [rbp-140h]
  __m128i *v194; // [rsp+48h] [rbp-140h]
  __int64 *v195; // [rsp+48h] [rbp-140h]
  unsigned int v196; // [rsp+50h] [rbp-138h]
  unsigned int v197; // [rsp+50h] [rbp-138h]
  __int64 v198; // [rsp+50h] [rbp-138h]
  unsigned int v199; // [rsp+50h] [rbp-138h]
  unsigned int v201; // [rsp+64h] [rbp-124h]
  __int64 v202; // [rsp+68h] [rbp-120h]
  unsigned int v203; // [rsp+78h] [rbp-110h]
  unsigned int v204; // [rsp+7Ch] [rbp-10Ch]
  unsigned int *v206; // [rsp+98h] [rbp-F0h]
  unsigned int *v207; // [rsp+A0h] [rbp-E8h]
  _DWORD *v209; // [rsp+D0h] [rbp-B8h] BYREF
  unsigned int v210; // [rsp+D8h] [rbp-B0h]
  __int64 v211; // [rsp+DCh] [rbp-ACh]
  char *v212; // [rsp+F0h] [rbp-98h] BYREF
  unsigned int v213; // [rsp+F8h] [rbp-90h]
  __int64 v214; // [rsp+FCh] [rbp-8Ch]
  char *v215; // [rsp+110h] [rbp-78h] BYREF
  __int64 v216; // [rsp+118h] [rbp-70h]
  int v217; // [rsp+120h] [rbp-68h]
  __int64 v218[2]; // [rsp+130h] [rbp-58h] BYREF
  int v219; // [rsp+140h] [rbp-48h]
  int v220; // [rsp+144h] [rbp-44h]
  int v221; // [rsp+148h] [rbp-40h]

  v9 = (_QWORD *)sub_186B270(0x60u);
  v211 = 0;
  *v9 = 0;
  *(_QWORD *)((char *)v9 + 12) = 0;
  v9[3] = 0;
  *(_QWORD *)((char *)v9 + 36) = 0;
  v9[6] = 0;
  *(_QWORD *)((char *)v9 + 60) = 0;
  v9[9] = 0;
  *(_QWORD *)((char *)v9 + 84) = 0;
  v177 = v9;
  v10 = (_QWORD *)sub_186B270(0x60u);
  *v10 = 0;
  *(_QWORD *)((char *)v10 + 12) = 0;
  v10[3] = 0;
  *(_QWORD *)((char *)v10 + 36) = 0;
  v10[6] = 0;
  *(_QWORD *)((char *)v10 + 60) = 0;
  v10[9] = 0;
  *(_QWORD *)((char *)v10 + 84) = 0;
  v178 = (char *)v10;
  v214 = 0;
  ptr = (__m128i *)sub_186B270(0xC0u);
  ptr->m128i_i64[0] = 0;
  ptr[1].m128i_i64[1] = 0;
  ptr[3].m128i_i64[0] = 0;
  ptr[4].m128i_i64[1] = 0;
  ptr[6].m128i_i64[0] = 0;
  ptr[7].m128i_i64[1] = 0;
  ptr[9].m128i_i64[0] = 0;
  ptr[10].m128i_i64[1] = 0;
  v11 = *(_QWORD *)(a2 + 8);
  if ( !v11 )
  {
    v204 = 8;
    v203 = 8;
    v201 = 8;
    goto LABEL_15;
  }
  v165 = 0;
  v12 = 0;
  v13 = 0;
  v204 = 8;
  v203 = 8;
  v201 = 8;
  while ( 1 )
  {
LABEL_3:
    if ( v13 >= *(_DWORD *)(v11 - 4) )
      goto LABEL_15;
    LODWORD(v218[0]) = sub_B645B0(a1, *(_QWORD *)(v11 + 8LL * v13));
    v14 = v218[0];
    v209 = v177;
    v210 = v201;
    sub_9765A0(&v209, v218);
    v177 = v209;
    v201 = v210;
    LODWORD(v218[0]) = v14 ^ 1;
    v212 = v178;
    v213 = v203;
    sub_9765A0(&v212, v218);
    v15 = v14 >> 1;
    v178 = v212;
    v203 = v213;
    v16 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL * v13);
    if ( 3 * v204 >= 4 * (v12 + v165) )
    {
      v17 = v204 - 1;
      v18 = 24LL * v204;
      v19 = (__m128i *)((char *)ptr + v18);
      v20 = ptr;
      goto LABEL_6;
    }
    v198 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL * v13);
    v188 = 48LL * v204;
    v130 = (__m128i *)sub_186B270(v188);
    v131 = 2 * v204;
    v132 = v130;
    v18 = v188;
    v16 = v198;
    if ( 2 * v204 )
    {
      v133 = &v130[3 * (v204 & 0x7FFFFFFE)];
      do
      {
        v130->m128i_i64[0] = 0;
        v130 += 3;
        v130[-2].m128i_i64[1] = 0;
      }
      while ( v130 != v133 );
      v17 = v131 - 1;
      v19 = &v132[v188 / 0x10];
      v134 = (__m128i *)((char *)ptr + 24 * v204);
LABEL_211:
      v135 = ptr;
      do
      {
        while ( v135->m128i_i32[1] != 2 )
        {
          v135 = (const __m128i *)((char *)v135 + 24);
          if ( v134 == v135 )
            goto LABEL_219;
        }
        v136 = 24LL * (v135->m128i_i32[0] & (unsigned int)v17);
        v137 = (__m128i *)((char *)v132 + v136);
        if ( v188 == v136 )
        {
LABEL_222:
          if ( v132 == v137 )
          {
LABEL_254:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v138 = v132;
          while ( v138->m128i_i32[1] )
          {
            v138 = (__m128i *)((char *)v138 + 24);
            if ( v137 == v138 )
              goto LABEL_254;
          }
        }
        else
        {
          v138 = (__m128i *)((char *)v132 + v136);
          while ( v138->m128i_i32[1] )
          {
            v138 = (__m128i *)((char *)v138 + 24);
            if ( v138 == v19 )
              goto LABEL_222;
          }
        }
        v139 = _mm_loadu_si128(v135);
        v135 = (const __m128i *)((char *)v135 + 24);
        *v138 = v139;
        v138[1].m128i_i64[0] = v135[-1].m128i_i64[1];
      }
      while ( v134 != v135 );
      goto LABEL_219;
    }
    v19 = v130;
    v17 = -1;
    v134 = (__m128i *)((char *)ptr + 24 * v204);
    if ( v134 != ptr )
      goto LABEL_211;
LABEL_219:
    if ( ptr )
    {
      v194 = v132;
      sub_186B220(ptr);
      v16 = v198;
      v18 = v188;
      v132 = v194;
      v131 = 2 * v204;
    }
    v204 = v131;
    v12 = 0;
    v20 = v132;
    ptr = v132;
LABEL_6:
    v21 = 24LL * (v15 & (unsigned int)v17);
    v22 = (__m128i *)((char *)v20 + v21);
    if ( v18 == v21 )
    {
      v24 = nullptr;
LABEL_52:
      v23 = ptr;
      if ( v22 == ptr )
      {
LABEL_61:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v58 = v23->m128i_i32[1];
        if ( v58 != 2 )
          break;
        if ( v15 == v23->m128i_i32[0] )
        {
          if ( v15 == v23->m128i_i32[2] )
            goto LABEL_14;
          v23 = (__m128i *)((char *)v23 + 24);
          if ( v22 == v23 )
            goto LABEL_61;
        }
        else
        {
LABEL_56:
          v23 = (__m128i *)((char *)v23 + 24);
          if ( v22 == v23 )
            goto LABEL_61;
        }
      }
      if ( !v58 )
        goto LABEL_62;
      v24 = v23;
      goto LABEL_56;
    }
    v23 = (__m128i *)((char *)v20 + v21);
    v24 = nullptr;
LABEL_11:
    v25 = v23->m128i_i32[1];
    if ( v25 != 2 )
      break;
    if ( v15 != v23->m128i_i32[0] || v15 != v23->m128i_i32[2] )
      goto LABEL_10;
LABEL_14:
    v23->m128i_i32[2] = v15;
    ++v13;
    v23[1].m128i_i64[0] = v16;
    v23->m128i_i32[1] = 2;
    v11 = *(_QWORD *)(a2 + 8);
    if ( !v11 )
      goto LABEL_15;
  }
  if ( v25 )
  {
    v24 = v23;
LABEL_10:
    v23 = (__m128i *)((char *)v23 + 24);
    if ( v19 == v23 )
      goto LABEL_52;
    goto LABEL_11;
  }
LABEL_62:
  if ( v24 )
    --v12;
  else
    v24 = v23;
  v24->m128i_i32[2] = v15;
  v24[1].m128i_i64[0] = v16;
  v24->m128i_i32[1] = 2;
  v24->m128i_i32[0] = v15;
  ++v165;
  v11 = *(_QWORD *)(a2 + 8);
  ++v13;
  if ( v11 )
    goto LABEL_3;
LABEL_15:
  if ( *(_DWORD *)(a1 + 10460) || *(_DWORD *)(a1 + 10464) )
  {
    v26 = 0;
    v27 = *(unsigned int *)(a1 + 10456);
    v28 = *(char **)(a1 + 10448);
    v29 = *(_DWORD *)(a1 + 10456);
    v30 = &v28[40 * v27];
    v31 = v28;
    if ( v28 != v30 )
    {
      do
      {
        while ( *((_DWORD *)v31 + 1) )
        {
          *((_DWORD *)v31 + 1) = 0;
          v31 += 40;
          if ( v30 == v31 )
            goto LABEL_22;
        }
        v31 += 40;
        ++v26;
      }
      while ( v30 != v31 );
LABEL_22:
      if ( v29 > 0x10 && 3 * v29 < 4 * v26 )
      {
        if ( !v28 )
        {
          v163 = v29 >> 1;
          v36 = v163;
          *(_QWORD *)(a1 + 10448) = 0;
          *(_DWORD *)(a1 + 10456) = v163;
          v37 = sub_186B270(40LL * v163);
          goto LABEL_29;
        }
        v32 = v28;
        v33 = &v28[40 * v27];
        do
        {
          while ( 1 )
          {
            v34 = *((void **)v32 + 2);
            if ( !v34 )
              break;
            sub_186B220(v34);
            v32 += 40;
            if ( v32 == v33 )
              goto LABEL_28;
          }
          v32 += 40;
        }
        while ( v32 != v33 );
LABEL_28:
        sub_186B220(v28);
        v35 = *(_DWORD *)(a1 + 10456);
        *(_QWORD *)(a1 + 10448) = 0;
        v35 >>= 1;
        v36 = v35;
        *(_DWORD *)(a1 + 10456) = v35;
        v37 = sub_186B270(40LL * v35);
        if ( v35 )
        {
LABEL_29:
          v38 = (_QWORD *)v37;
          do
          {
            *v38 = 0;
            v39 = (_QWORD *)sub_186B270(0x60u);
            v38[2] = v39;
            v38 += 5;
            *(v38 - 2) = 8;
            *((_DWORD *)v38 - 2) = 0;
            *v39 = 0;
            *(_QWORD *)((char *)v39 + 12) = 0;
            v39[3] = 0;
            *(_QWORD *)((char *)v39 + 36) = 0;
            v39[6] = 0;
            *(_QWORD *)((char *)v39 + 60) = 0;
            v39[9] = 0;
            *(_QWORD *)((char *)v39 + 84) = 0;
          }
          while ( v38 != (_QWORD *)(v37 + 40 * v36) );
        }
        *(_QWORD *)(a1 + 10448) = v37;
      }
    }
    *(_QWORD *)(a1 + 10460) = 0;
  }
  v40 = *(unsigned int **)(a1 + 8920);
  if ( !v40 )
    goto LABEL_149;
  v206 = &v40[*(v40 - 1)];
  if ( v206 == v40 )
    goto LABEL_149;
  v176 = *(unsigned int **)(a1 + 8920);
  v41 = &v177[3 * v201];
  v175 = 24LL * v204;
  v42 = (__m128i *)((char *)ptr + v175);
  while ( 2 )
  {
    while ( 2 )
    {
      v43 = *v176;
      v44 = (_QWORD *)sub_186B270(0x60u);
      *v44 = 0;
      v45 = (char *)v44;
      *(_QWORD *)((char *)v44 + 12) = 0;
      v44[3] = 0;
      *(_QWORD *)((char *)v44 + 36) = 0;
      v44[6] = 0;
      *(_QWORD *)((char *)v44 + 60) = 0;
      v44[9] = 0;
      *(_QWORD *)((char *)v44 + 84) = 0;
      v217 = 0;
      v46 = 3LL * (v43 & (v201 - 1));
      v47 = &v177[v46];
      if ( v46 != 3LL * v201 )
      {
        v48 = &v177[v46];
        do
        {
          v49 = v48[1];
          if ( v49 == 2 )
          {
            if ( v43 == *v48 && v43 == v48[2] )
            {
LABEL_43:
              v50 = nullptr;
              v51 = v43 >> 1;
              v52 = &v45[12 * ((v43 >> 1) & 7)];
              while ( 1 )
              {
                v53 = *((_DWORD *)v52 + 1);
                if ( v53 == 2 )
                {
                  if ( *(_DWORD *)v52 == v51 && *((_DWORD *)v52 + 2) == v51 )
                  {
                    *((_DWORD *)v52 + 2) = v51;
                    *((_DWORD *)v52 + 1) = 2;
                    LODWORD(v218[0]) = v43 >> 1;
                    v185 = a1 + 10448;
                    v219 = 8;
                    v166 = (char *)sub_186B270(0x60u);
                    v54 = v43 >> 1;
                    v55 = 8;
                    v56 = 0;
                    v57 = 96;
                    goto LABEL_70;
                  }
                }
                else
                {
                  if ( !v53 )
                  {
                    if ( v50 )
                    {
LABEL_68:
                      v217 = -1;
                      goto LABEL_69;
                    }
                    v50 = (unsigned int *)v52;
LABEL_69:
                    v50[2] = v51;
                    v50[1] = 2;
                    *v50 = v51;
                    v185 = a1 + 10448;
                    LODWORD(v218[0]) = v43 >> 1;
                    v219 = 8;
                    v166 = (char *)sub_186B270(0x60u);
                    v54 = v43 >> 1;
                    v55 = 8;
                    v56 = 1;
                    v57 = 96;
LABEL_70:
                    v59 = v166;
                    v60 = &v166[24 * (v55 >> 1)];
                    do
                    {
                      *(_QWORD *)v59 = 0;
                      v59 += 24;
                      *(_QWORD *)(v59 - 12) = 0;
                    }
                    while ( v60 != v59 );
                    v61 = v55 & 0xFFFFFFFE;
                    if ( (v55 & 1) != 0 )
                    {
                      v62 = 3 * v61;
                      LODWORD(v61) = v55;
                      v63 = &v166[4 * v62];
                      goto LABEL_74;
                    }
                    goto LABEL_75;
                  }
                  v50 = (unsigned int *)v52;
                }
                v52 += 12;
                if ( v45 + 96 == v52 )
                {
                  if ( v45 == &v45[12 * ((v43 >> 1) & 7)] )
                  {
                    sub_1872CE0("");
                    sub_1873130(114, 405);
                  }
                  if ( v50 )
                    goto LABEL_68;
                  v50 = (unsigned int *)v45;
                  goto LABEL_69;
                }
              }
            }
          }
          else if ( !v49 )
          {
            goto LABEL_180;
          }
          v48 += 3;
        }
        while ( v41 != v48 );
      }
      v124 = v177;
      if ( v47 != v177 )
      {
        while ( 1 )
        {
          v125 = v124[1];
          if ( v125 != 2 )
            break;
          if ( v43 == *v124 )
          {
            if ( v43 == v124[2] )
              goto LABEL_43;
            v124 += 3;
            if ( v47 == v124 )
              goto LABEL_180;
          }
          else
          {
LABEL_175:
            v124 += 3;
            if ( v47 == v124 )
              goto LABEL_180;
          }
        }
        if ( !v125 )
          goto LABEL_180;
        goto LABEL_175;
      }
LABEL_180:
      v215 = v45;
      v216 = 8;
      sub_969AA0(a1, v43, &v215);
      v45 = v215;
      v55 = v216;
      v197 = HIDWORD(v216);
      LODWORD(v218[0]) = v43 >> 1;
      v185 = a1 + 10448;
      v219 = v216;
      v181 = 12LL * (unsigned int)v216;
      v63 = (char *)sub_186B270(v181);
      v57 = v181;
      v56 = v197;
      v166 = v63;
      v54 = v43 >> 1;
      if ( v55 )
      {
        if ( v55 != 1 )
          goto LABEL_70;
        LODWORD(v61) = 1;
LABEL_74:
        *(_QWORD *)v63 = 0;
      }
      else
      {
        LODWORD(v61) = 0;
        v57 = 0;
      }
LABEL_75:
      v64 = &v45[v57];
      v65 = v61 - 1;
      v218[1] = (__int64)v166;
      for ( i = v45; v64 != i; *((_DWORD *)v60 + 2) = *((_DWORD *)i - 1) )
      {
        while ( *((_DWORD *)i + 1) != 2 )
        {
          i += 12;
          if ( v64 == i )
            goto LABEL_84;
        }
        v67 = 12LL * (*(_DWORD *)i & v65);
        v68 = &v166[v67];
        if ( v67 == v57 )
        {
LABEL_167:
          if ( v68 == v166 )
          {
LABEL_191:
            sub_1872CE0("");
            sub_1873130(114, 181);
          }
          v60 = v166;
          while ( *((_DWORD *)v60 + 1) )
          {
            v60 += 12;
            if ( v68 == v60 )
              goto LABEL_191;
          }
        }
        else
        {
          v60 = &v166[v67];
          while ( *((_DWORD *)v60 + 1) )
          {
            v60 += 12;
            if ( &v166[v57] == v60 )
              goto LABEL_167;
          }
        }
        v69 = *(_QWORD *)i;
        i += 12;
        *(_QWORD *)v60 = v69;
      }
LABEL_84:
      v179 = v54;
      v220 = v56;
      v221 = 0;
      sub_9768E0(v185, v218, v60, v56);
      sub_186B220(v166);
      v70 = v179;
      v71 = 12LL * (v43 & (v203 - 1));
      v72 = &v178[v71];
      v73 = &v178[v71];
      if ( v71 == 12LL * v203 )
      {
LABEL_183:
        v126 = v178;
        if ( v72 == v178 )
          goto LABEL_147;
        while ( 1 )
        {
          v127 = *((_DWORD *)v126 + 1);
          if ( v127 == 2 )
          {
            if ( v43 == *(_DWORD *)v126 && v43 == *((_DWORD *)v126 + 2) )
              goto LABEL_91;
          }
          else if ( !v127 )
          {
            goto LABEL_147;
          }
          v126 += 12;
          if ( v72 == v126 )
            goto LABEL_147;
        }
      }
      while ( 2 )
      {
        v74 = *((_DWORD *)v73 + 1);
        if ( v74 != 2 )
        {
          if ( !v74 )
            goto LABEL_147;
LABEL_87:
          v73 += 12;
          if ( &v178[12 * v203] == v73 )
            goto LABEL_183;
          continue;
        }
        break;
      }
      if ( v43 != *(_DWORD *)v73 || v43 != *((_DWORD *)v73 + 2) )
        goto LABEL_87;
LABEL_91:
      v202 = *(_QWORD *)(a1 + 104);
      v75 = v204 - 1;
      v76 = v45;
      if ( v45 == v64 )
      {
LABEL_205:
        v78 = nullptr;
        goto LABEL_113;
      }
      while ( 1 )
      {
        v77 = v76;
        if ( *((_DWORD *)v76 + 1) == 2 )
          break;
        v76 += 12;
        if ( v64 == v76 )
          goto LABEL_205;
      }
      v78 = nullptr;
      if ( v76 == v64 )
        goto LABEL_113;
      while ( 2 )
      {
        v79 = *((_DWORD *)v77 + 2);
        v80 = 24LL * (v75 & v79);
        v81 = (__m128i *)((char *)ptr + v80);
        if ( v80 == v175 )
        {
LABEL_156:
          for ( j = ptr; v81 != j; j = (__m128i *)((char *)j + 24) )
          {
            v119 = j->m128i_i32[1];
            if ( v119 == 2 )
            {
              if ( v79 == j->m128i_i32[0] && v79 == j->m128i_i32[2] )
                goto LABEL_103;
            }
            else if ( !v119 )
            {
              break;
            }
          }
LABEL_271:
          BUG();
        }
        j = (__m128i *)((char *)ptr + v80);
        while ( 2 )
        {
          v83 = j->m128i_i32[1];
          if ( v83 != 2 )
          {
            if ( !v83 )
              goto LABEL_271;
LABEL_99:
            j = (__m128i *)((char *)j + 24);
            if ( v42 == j )
              goto LABEL_156;
            continue;
          }
          break;
        }
        if ( v79 != j->m128i_i32[0] || v79 != j->m128i_i32[2] )
          goto LABEL_99;
LABEL_103:
        v84 = (_DWORD *)j[1].m128i_i64[0];
        if ( v84 )
          ++v84[2];
        if ( v78 )
        {
          v85 = *((_DWORD *)v78 - 1);
          if ( v85 == *((_DWORD *)v78 - 2) )
          {
            v120 = (3 * v85 + 1) >> 1;
            v121 = 8 * v120 + 8;
            if ( 8 * v85 + 8 >= (unsigned int)v121 || v85 >= v120 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v218, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v218);
              sub_233E40((__int64)v218);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v196 = v75;
            v192 = (3 * v85 + 1) >> 1;
            v186 = v70;
            v180 = v77;
            v169 = v84;
            v122 = (unsigned int *)sub_186B300(v78 - 1, v121);
            v123 = v122[1];
            v78 = (__int64 *)(v122 + 2);
            v84 = v169;
            v77 = v180;
            v70 = v186;
            v75 = v196;
            *v122 = v192;
            v87 = v123 + 1;
            v88 = &v78[v123];
          }
          else
          {
            v86 = v85;
            v87 = v85 + 1;
            v88 = &v78[v86];
          }
        }
        else
        {
          v193 = v75;
          v187 = v70;
          v182 = v77;
          v170 = v84;
          v128 = (_QWORD *)sub_186B270(0x18u);
          v78 = v128 + 1;
          v84 = v170;
          v77 = v182;
          v70 = v187;
          v88 = v128 + 1;
          *v128 = 2;
          v75 = v193;
          v87 = 1;
        }
        *v88 = (__int64)v84;
        *((_DWORD *)v78 - 1) = v87;
        v89 = v77 + 12;
        if ( v77 + 12 != v64 )
        {
          while ( 1 )
          {
            v77 = v89;
            if ( *((_DWORD *)v89 + 1) == 2 )
              break;
            v89 += 12;
            if ( v64 == v89 )
              goto LABEL_113;
          }
          if ( v89 != v64 )
            continue;
        }
        break;
      }
LABEL_113:
      v90 = 24LL * (v70 & v75);
      v91 = (__m128i *)((char *)ptr + v90);
      if ( v175 == v90 )
      {
LABEL_195:
        for ( k = ptr; v91 != k; k = (__m128i *)((char *)k + 24) )
        {
          v129 = k->m128i_i32[1];
          if ( v129 == 2 )
          {
            if ( v70 == k->m128i_i32[0] && v70 == k->m128i_i32[2] )
              goto LABEL_120;
          }
          else if ( !v129 )
          {
            break;
          }
        }
LABEL_272:
        BUG();
      }
      k = (__m128i *)((char *)ptr + v90);
      while ( 2 )
      {
        v93 = k->m128i_i32[1];
        if ( v93 != 2 )
        {
          if ( !v93 )
            goto LABEL_272;
LABEL_116:
          k = (__m128i *)((char *)k + 24);
          if ( v42 == k )
            goto LABEL_195;
          continue;
        }
        break;
      }
      if ( v70 != k->m128i_i32[0] || v70 != k->m128i_i32[2] )
        goto LABEL_116;
LABEL_120:
      v94 = k[1].m128i_i64[0];
      if ( v94 )
        ++*(_DWORD *)(v94 + 8);
      if ( v78 )
      {
        v95 = *((_DWORD *)v78 - 1);
        if ( v95 == *((_DWORD *)v78 - 2) )
        {
          v158 = (3 * v95 + 1) >> 1;
          v159 = 8 * v158 + 8;
          if ( 8 * v95 + 8 >= v159 || v95 >= v158 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v218, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v218);
            sub_233E40((__int64)v218);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v174 = (3 * v95 + 1) >> 1;
          v160 = (unsigned int *)sub_186B300(v78 - 1, v159);
          v78 = (__int64 *)(v160 + 2);
          *v160 = v174;
          LODWORD(v160) = v160[1];
          v98 = &v78[(unsigned int)v160];
          v97 = (_DWORD)v160 + 1;
        }
        else
        {
          v96 = v95;
          v97 = v95 + 1;
          v98 = &v78[v96];
        }
      }
      else
      {
        v162 = (_QWORD *)sub_186B270(0x18u);
        *v162 = 2;
        v97 = 1;
        v98 = v162 + 1;
        v78 = v98;
      }
      *v98 = v94;
      *((_DWORD *)v78 - 1) = v97;
      v99 = *a3;
      if ( *a3 )
      {
        LODWORD(v100) = *((_DWORD *)v99 - 1);
        v101 = (char *)&v99[2 * (unsigned int)v100];
        if ( (_DWORD)v100 == *((_DWORD *)v99 - 2) )
        {
          v143 = (unsigned int)(3 * v100 + 1) >> 1;
          v144 = 16 * v143 + 8;
          if ( 16 * (int)v100 + 8 >= v144 || (unsigned int)v100 >= v143 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v218, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v218);
            sub_233E40((__int64)v218);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v145 = (unsigned int *)sub_186B270(v144);
          v99 = (__int64 *)(v145 + 2);
          v146 = *a3;
          if ( *a3 )
          {
            v147 = *((unsigned int *)v146 - 1);
            v148 = *a3;
            v149 = v145 + 2;
            v145[1] = v147;
            v150 = &v146[2 * v147];
            if ( v146 != v150 )
            {
              do
              {
                v151 = *v148;
                v148 += 2;
                v149 += 4;
                *((_QWORD *)v149 - 2) = v151;
                v152 = *(v148 - 1);
                *(v148 - 1) = 0;
                *((_QWORD *)v149 - 1) = v152;
              }
              while ( v150 != v148 );
            }
            if ( (_DWORD)v147 )
            {
              v172 = v45;
              v184 = v41;
              v195 = (__int64 *)(v145 + 2);
              v199 = v143;
              v207 = v145;
              v190 = v42;
              v153 = &v146[2 * v147];
              do
              {
                v154 = (__int64 *)v146[1];
                if ( v154 )
                {
                  v155 = &v154[*((unsigned int *)v154 - 1)];
                  if ( v154 >= v155 )
                    goto LABEL_246;
                  do
                  {
                    while ( 1 )
                    {
                      v156 = *v154;
                      if ( *v154 )
                      {
                        v157 = *v146;
                        v117 = (*(_DWORD *)(v156 + 8))-- == 1;
                        if ( v117 )
                          break;
                      }
                      if ( ++v154 >= v155 )
                        goto LABEL_245;
                    }
                    sub_15D7BC0(v157, v156);
                    ++v154;
                  }
                  while ( v154 < v155 );
LABEL_245:
                  v154 = (__int64 *)v146[1];
                  if ( v154 )
LABEL_246:
                    sub_186B220(v154 - 1);
                }
                v146 += 2;
              }
              while ( v146 != v153 );
              v45 = v172;
              v41 = v184;
              v42 = v190;
              v99 = v195;
              v143 = v199;
              v145 = v207;
              v146 = *a3;
            }
            v191 = v145;
            v173 = (char *)v99;
            sub_186B220(v146 - 1);
            v145 = v191;
            v99 = (__int64 *)v173;
            v100 = v191[1];
            v101 = &v173[16 * v100];
          }
          else
          {
            v145[1] = 0;
            v101 = (char *)(v145 + 2);
            LODWORD(v100) = 0;
          }
          *v145 = v143;
          *a3 = v99;
          v97 = *((_DWORD *)v78 - 1);
        }
      }
      else
      {
        v161 = (_QWORD *)sub_186B270(0x28u);
        *v161 = 2;
        LODWORD(v100) = 0;
        v99 = v161 + 1;
        *a3 = v161 + 1;
        v101 = (char *)(v161 + 1);
        v97 = *((_DWORD *)v78 - 1);
      }
      *((_QWORD *)v101 + 1) = 0;
      *(_QWORD *)v101 = v202;
      if ( v97 )
      {
        v102 = (_DWORD *)*v78;
        if ( *v78 )
          ++v102[2];
        v167 = v102;
        v103 = (_QWORD *)sub_186B270(0x18u);
        v104 = v167;
        v105 = 0;
        v106 = v103 + 1;
        *v103 = 2;
        v107 = v106;
        v108 = 1;
        *((_QWORD *)v101 + 1) = v106;
        while ( 1 )
        {
          *v106 = v104;
          v109 = v105 + 1;
          *(v107 - 1) = v108;
          if ( (unsigned int)v109 >= *((_DWORD *)v78 - 1) )
            break;
          while ( 1 )
          {
            v110 = (_DWORD *)v78[v109];
            if ( v110 )
              ++v110[2];
            v111 = *(v107 - 1);
            if ( v111 == *(v107 - 2) )
              break;
            ++v109;
            *(_QWORD *)&v107[2 * v111] = v110;
            *(v107 - 1) = v111 + 1;
            if ( (unsigned int)v109 >= *((_DWORD *)v78 - 1) )
              goto LABEL_136;
          }
          v140 = (3 * v111 + 1) >> 1;
          if ( 8 * v111 + 8 >= 8 * v140 + 8 || v111 >= v140 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v218, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v218);
            sub_233E40((__int64)v218);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v189 = (3 * v111 + 1) >> 1;
          v183 = v109;
          v171 = v110;
          v141 = (unsigned int *)sub_186B300(v107 - 2, 8 * v140 + 8);
          v142 = v141[1];
          v107 = v141 + 2;
          v104 = v171;
          v105 = v183;
          *((_QWORD *)v101 + 1) = v141 + 2;
          *v141 = v189;
          LODWORD(v141) = v142;
          v106 = &v107[2 * v142];
          v108 = (_DWORD)v141 + 1;
        }
LABEL_136:
        v99 = *a3;
        LODWORD(v100) = *((_DWORD *)*a3 - 1);
      }
      v112 = v78;
      *((_DWORD *)v99 - 1) = v100 + 1;
      v113 = *((unsigned int *)v78 - 1);
      v114 = *a4;
      if ( *a4 > (unsigned int)v113 )
        v114 = *((_DWORD *)v78 - 1);
      *a4 = v114;
      if ( v78 < &v78[v113] )
      {
        v168 = v42;
        v115 = &v78[v113];
        do
        {
          while ( 1 )
          {
            v116 = *v112;
            if ( *v112 )
            {
              v117 = (*(_DWORD *)(v116 + 8))-- == 1;
              if ( v117 )
                break;
            }
            if ( ++v112 >= v115 )
              goto LABEL_145;
          }
          ++v112;
          sub_15D7BC0(v202, v116);
        }
        while ( v112 < v115 );
LABEL_145:
        v42 = v168;
      }
      sub_186B220(v78 - 1);
LABEL_147:
      if ( v45 )
      {
        sub_186B220(v45);
        if ( v206 == ++v176 )
          goto LABEL_149;
        continue;
      }
      break;
    }
    if ( v206 != ++v176 )
      continue;
    break;
  }
LABEL_149:
  if ( ptr )
    sub_186B220(ptr);
  if ( v178 )
    sub_186B220(v178);
  result = (__int64)v177;
  if ( v177 )
    return sub_186B220(v177);
  return result;
}

