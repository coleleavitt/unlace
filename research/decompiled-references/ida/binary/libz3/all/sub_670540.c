__int64 __fastcall sub_670540(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  _OWORD *v7; // rax
  char *v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rax
  __int64 *v13; // r15
  __int64 *v14; // rbx
  __int64 v15; // r8
  char *v16; // rbp
  int v17; // r9d
  __int64 v18; // r8
  __int64 *v19; // r13
  int v20; // esi
  char *v21; // rdi
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rbx
  __int64 *v26; // r14
  __int64 v27; // r8
  char *v28; // rbp
  int v29; // r9d
  __int64 v30; // r8
  __int64 *v31; // r13
  int v32; // esi
  char *v33; // rdi
  __int64 *v34; // rax
  __int64 v35; // rax
  char *v36; // rbx
  char *v37; // r15
  __int64 v38; // rsi
  void *v39; // rbp
  int v40; // eax
  __int64 v41; // rax
  unsigned int v42; // r9d
  __int64 v43; // rbp
  int v44; // ecx
  __int64 v45; // r8
  __int64 v46; // r13
  __int64 v47; // rdi
  int v48; // esi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rax
  void *v55; // rbp
  __int64 *v56; // r13
  __int64 *v57; // rbx
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rbp
  unsigned int v61; // eax
  unsigned int v62; // r14d
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 v65; // rcx
  __int64 *v66; // r13
  __int64 *v67; // rbx
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rbp
  unsigned int v71; // eax
  unsigned int v72; // r14d
  size_t v73; // rsi
  unsigned int *v74; // rax
  __int64 v75; // rcx
  _QWORD *v76; // rbp
  _QWORD *v77; // rbx
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // r13
  unsigned int v82; // eax
  unsigned int v83; // r14d
  size_t v84; // rsi
  unsigned int *v85; // rax
  __int64 v86; // rcx
  __m128i *v87; // rax
  __int64 v88; // rax
  _DWORD *v89; // rbx
  unsigned __int64 v90; // rbp
  _OWORD *v91; // rax
  int v92; // edx
  int v93; // ecx
  int v94; // r8d
  int v95; // r9d
  __int64 (*v96)(); // rax
  __int64 v97; // rax
  __int64 v98; // rbp
  void (__fastcall ***v99)(void *); // r14
  bool v100; // zf
  __int64 *i; // rax
  __int64 v103; // rax
  int v104; // r10d
  char *v105; // rax
  const __m128i *v106; // r15
  __m128i *v107; // r11
  __int64 v108; // rdx
  char *v109; // rsi
  __m128i v110; // xmm0
  __int64 v111; // r13
  __int64 v112; // rax
  int v113; // r9d
  __int64 v114; // rdx
  char *v115; // r14
  __int64 v116; // rax
  char *v117; // r10
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rax
  int v122; // esi
  int v123; // edx
  __int64 v124; // rsi
  __int64 v125; // rdx
  char v126; // di
  char v127; // di
  __int64 v128; // rsi
  __int64 v129; // rdx
  char v130; // di
  char v131; // di
  char *v132; // r14
  char *v133; // rbx
  void *v134; // rbp
  char *v135; // rsi
  __int64 v136; // rax
  int v137; // r10d
  char *v138; // rax
  const __m128i *v139; // r14
  __m128i *v140; // r11
  __int64 v141; // rdx
  char *v142; // rsi
  __m128i v143; // xmm0
  __int32 v144; // eax
  __int32 v145; // edx
  __int64 v146; // rax
  char v147; // cl
  void *v148; // rax
  char v149; // cl
  __int32 v150; // edx
  __int32 v151; // ecx
  __int64 v152; // rdx
  char v153; // si
  void *v154; // rdx
  char v155; // si
  _QWORD *v156; // rax
  _QWORD *v157; // rax
  _QWORD *v158; // rax
  __int32 v159; // eax
  __int32 v160; // edx
  __int64 v161; // rax
  char v162; // cl
  void *v163; // rax
  char v164; // cl
  char **v165; // rbp
  __int64 v166; // rdx
  char **v167; // rbp
  __int64 v168; // rdx
  char **exception; // rbp
  __int64 v170; // rdx
  int v171; // [rsp+0h] [rbp-148h]
  __m128i *v172; // [rsp+0h] [rbp-148h]
  __int8 *v173; // [rsp+8h] [rbp-140h]
  __int64 v174; // [rsp+10h] [rbp-138h]
  char *v175; // [rsp+18h] [rbp-130h]
  int v176[2]; // [rsp+20h] [rbp-128h]
  int v177; // [rsp+28h] [rbp-120h]
  char *v178; // [rsp+28h] [rbp-120h]
  __int64 v179; // [rsp+30h] [rbp-118h]
  __int64 v180; // [rsp+30h] [rbp-118h]
  int v181; // [rsp+38h] [rbp-110h]
  char *v182; // [rsp+38h] [rbp-110h]
  __int64 v183; // [rsp+40h] [rbp-108h]
  int v184; // [rsp+48h] [rbp-100h]
  int v185; // [rsp+4Ch] [rbp-FCh]
  __m128i v186; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v187; // [rsp+60h] [rbp-E8h]
  __int64 v188; // [rsp+70h] [rbp-D8h]
  void *ptr; // [rsp+78h] [rbp-D0h]
  __int64 v190; // [rsp+80h] [rbp-C8h]
  int v191; // [rsp+88h] [rbp-C0h]
  __int128 v192; // [rsp+90h] [rbp-B8h]
  int v193; // [rsp+A0h] [rbp-A8h]
  int v194; // [rsp+A8h] [rbp-A0h]
  __m128i v195; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v196; // [rsp+C0h] [rbp-88h] BYREF
  void *v197; // [rsp+D0h] [rbp-78h]
  void *v198; // [rsp+D8h] [rbp-70h]
  __int64 v199; // [rsp+E0h] [rbp-68h]
  int v200; // [rsp+E8h] [rbp-60h]
  __int128 v201; // [rsp+F0h] [rbp-58h]
  int v202; // [rsp+100h] [rbp-48h]

  *(_QWORD *)v176 = a2;
  v174 = a1;
  sub_66E8A0(a1);
  v4 = sub_186B270(0x3D0u);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 184) + 80LL))(
         *(_QWORD *)(a1 + 184),
         a2,
         a3);
  sub_66AA60(v4, a2, a3, v5);
  v6 = *(_QWORD *)(a1 + 120);
  v188 = 0;
  v186 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(unsigned __int64)a2);
  v187 = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  ptr = v7;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v191 = 0;
  v190 = 8;
  v193 = 0;
  v192 = 0;
  if ( v6 != a2 )
  {
    sub_15DA640(v186.m128i_i32[2], v186.m128i_i32[0], (_DWORD)v8, v9, (_DWORD)v10, v11, v171);
    sub_15D2280(v186.m128i_i64[1], v186.m128i_i64[0]);
  }
  v12 = *(__int64 **)(a1 + 240);
  v13 = &v12[2 * *(unsigned int *)(a1 + 248)];
  if ( v12 == v13 )
    goto LABEL_252;
  while ( 1 )
  {
    v14 = v12;
    if ( (unsigned __int64)*v12 > 1 )
      break;
    v12 += 2;
    if ( v13 == v12 )
      goto LABEL_252;
  }
  if ( v13 == v12 )
  {
LABEL_252:
    v172 = &v186;
    goto LABEL_35;
  }
  v172 = &v186;
  do
  {
    v173 = (__int8 *)v14[1];
    if ( v186.m128i_i64[1] == v186.m128i_i64[0] )
    {
      v9 = *v14;
    }
    else
    {
      v173 = (__int8 *)sub_15CFF50(&v186, v14[1]);
      v9 = *v14;
      if ( v186.m128i_i64[0] != v186.m128i_i64[1] )
        v9 = sub_15CFF50(&v186, *v14);
    }
    v15 = *(unsigned int *)(v4 + 248);
    LODWORD(v8) = 3 * v15;
    if ( 3 * (int)v15 < (unsigned int)(4 * (*(_DWORD *)(v4 + 252) + *(_DWORD *)(v4 + 256))) )
    {
      v179 = v9;
      v177 = 2 * v15;
      v175 = (char *)(16LL * (unsigned int)(2 * v15));
      v136 = sub_186B270((size_t)v175);
      v137 = v177;
      v18 = (__int64)v175;
      v16 = (char *)v136;
      v8 = (char *)v136;
      v9 = v179;
      v138 = &v175[v136];
      if ( v177 )
      {
        if ( (((_BYTE)v138 - (_BYTE)v16) & 0x10) == 0 || (v8 = v16 + 16, *(_OWORD *)v16 = 0, v138 != v16 + 16) )
        {
          do
          {
            v8 += 32;
            *((_OWORD *)v8 - 2) = 0;
            *((_OWORD *)v8 - 1) = 0;
          }
          while ( v138 != v8 );
        }
      }
      v139 = *(const __m128i **)(v4 + 240);
      v17 = v177 - 1;
      v19 = (__int64 *)v138;
      v140 = (__m128i *)&v139[*(unsigned int *)(v4 + 248)];
      if ( v139 != v140 )
      {
        do
        {
          while ( 1 )
          {
            v8 = (char *)v139->m128i_i64[0];
            if ( v139->m128i_i64[0] > 1uLL )
              break;
            if ( v140 == ++v139 )
              goto LABEL_214;
          }
          v141 = 16LL * (*((_DWORD *)v8 + 3) & (unsigned int)v17);
          v142 = &v16[v141];
          if ( v175 == (char *)v141 )
          {
LABEL_218:
            if ( v16 == v142 )
            {
LABEL_235:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v8 = v16;
            while ( *(_QWORD *)v8 )
            {
              v8 += 16;
              if ( v142 == v8 )
                goto LABEL_235;
            }
          }
          else
          {
            v8 = &v16[v141];
            while ( *(_QWORD *)v8 )
            {
              v8 += 16;
              if ( v138 == v8 )
                goto LABEL_218;
            }
          }
          v143 = _mm_loadu_si128(v139++);
          *(__m128i *)v8 = v143;
        }
        while ( v140 != v139 );
LABEL_214:
        v140 = *(__m128i **)(v4 + 240);
      }
      if ( v140 )
      {
        v181 = v177;
        v179 = (__int64)v175;
        --v177;
        v175 = (char *)v9;
        sub_186B220(v140);
        v137 = v181;
        v18 = v179;
        v17 = v177;
        v9 = (__int64)v175;
      }
      *(_QWORD *)(v4 + 240) = v16;
      *(_DWORD *)(v4 + 248) = v137;
      *(_DWORD *)(v4 + 256) = 0;
    }
    else
    {
      v16 = *(char **)(v4 + 240);
      v17 = v15 - 1;
      v18 = 16 * v15;
      v19 = (__int64 *)&v16[v18];
    }
    v20 = *(_DWORD *)(v9 + 12);
    v11 = 16LL * (v20 & (unsigned int)v17);
    v21 = &v16[v11];
    if ( v11 != v18 )
    {
      v22 = (__int64 *)&v16[v11];
      v10 = nullptr;
      while ( 1 )
      {
        v8 = (char *)*v22;
        if ( (unsigned __int64)*v22 > 1 )
        {
          if ( *((_DWORD *)v8 + 3) == v20 && (char *)v9 == v8 )
          {
            *v22 = v9;
            v22[1] = (__int64)v173;
            goto LABEL_30;
          }
        }
        else
        {
          if ( !v8 )
          {
            if ( v10 )
              goto LABEL_232;
            v10 = v22;
            goto LABEL_233;
          }
          v10 = v22;
        }
        v22 += 2;
        if ( v22 == v19 )
          goto LABEL_25;
      }
    }
    v10 = nullptr;
    while ( 1 )
    {
LABEL_25:
      if ( v21 == v16 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v23 = *(_QWORD *)v16;
      if ( *(_QWORD *)v16 <= 1u )
        break;
      if ( *(_DWORD *)(v23 + 12) == v20 && v9 == v23 )
      {
        *(_QWORD *)v16 = v9;
        *((_QWORD *)v16 + 1) = v173;
        goto LABEL_30;
      }
LABEL_24:
      v16 += 16;
    }
    if ( v23 )
    {
      v10 = (__int64 *)v16;
      goto LABEL_24;
    }
    if ( v10 )
LABEL_232:
      --*(_DWORD *)(v4 + 256);
    else
      v10 = (__int64 *)v16;
LABEL_233:
    *v10 = v9;
    v10[1] = (__int64)v173;
    ++*(_DWORD *)(v4 + 252);
LABEL_30:
    v24 = v14 + 2;
    if ( v13 == v14 + 2 )
      break;
    while ( 1 )
    {
      v14 = v24;
      if ( (unsigned __int64)*v24 > 1 )
        break;
      v24 += 2;
      if ( v13 == v24 )
        goto LABEL_35;
    }
  }
  while ( v13 != v24 );
LABEL_35:
  v25 = *(__int64 **)(v174 + 264);
  v26 = &v25[2 * *(unsigned int *)(v174 + 272)];
  if ( v25 == v26 )
    goto LABEL_60;
  while ( (unsigned __int64)*v25 <= 1 )
  {
    v25 += 2;
    if ( v26 == v25 )
      goto LABEL_60;
  }
LABEL_39:
  if ( v26 == v25 )
    goto LABEL_60;
  v173 = (__int8 *)v25[1];
  if ( v186.m128i_i64[0] == v186.m128i_i64[1] )
  {
    v9 = *v25;
  }
  else
  {
    v173 = (__int8 *)sub_15CFF50(&v186, v25[1]);
    v9 = *v25;
    if ( v186.m128i_i64[0] != v186.m128i_i64[1] )
      v9 = sub_15CFF50(&v186, *v25);
  }
  v27 = *(unsigned int *)(v4 + 272);
  LODWORD(v8) = 3 * v27;
  if ( 3 * (int)v27 < (unsigned int)(4 * (*(_DWORD *)(v4 + 276) + *(_DWORD *)(v4 + 280))) )
  {
    v179 = v9;
    v177 = 2 * v27;
    v175 = (char *)(16LL * (unsigned int)(2 * v27));
    v103 = sub_186B270((size_t)v175);
    v104 = v177;
    v30 = (__int64)v175;
    v28 = (char *)v103;
    v8 = (char *)v103;
    v9 = v179;
    v105 = &v175[v103];
    if ( v177 )
    {
      if ( (((_BYTE)v105 - (_BYTE)v28) & 0x10) == 0 || (v8 = v28 + 16, *(_OWORD *)v28 = 0, v105 != v28 + 16) )
      {
        do
        {
          v8 += 32;
          *((_OWORD *)v8 - 2) = 0;
          *((_OWORD *)v8 - 1) = 0;
        }
        while ( v105 != v8 );
      }
    }
    v106 = *(const __m128i **)(v4 + 264);
    v29 = v177 - 1;
    v31 = (__int64 *)v105;
    v107 = (__m128i *)&v106[*(unsigned int *)(v4 + 272)];
    if ( v106 != v107 )
    {
      do
      {
        while ( 1 )
        {
          v8 = (char *)v106->m128i_i64[0];
          if ( v106->m128i_i64[0] > 1uLL )
            break;
          if ( v107 == ++v106 )
            goto LABEL_165;
        }
        v108 = 16LL * (*((_DWORD *)v8 + 3) & (unsigned int)v29);
        v109 = &v28[v108];
        if ( v175 == (char *)v108 )
        {
LABEL_169:
          if ( v28 == v109 )
          {
LABEL_234:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v8 = v28;
          while ( *(_QWORD *)v8 )
          {
            v8 += 16;
            if ( v109 == v8 )
              goto LABEL_234;
          }
        }
        else
        {
          v8 = &v28[v108];
          while ( *(_QWORD *)v8 )
          {
            v8 += 16;
            if ( v105 == v8 )
              goto LABEL_169;
          }
        }
        v110 = _mm_loadu_si128(v106++);
        *(__m128i *)v8 = v110;
      }
      while ( v107 != v106 );
LABEL_165:
      v107 = *(__m128i **)(v4 + 264);
    }
    if ( v107 )
    {
      v181 = v177;
      v179 = (__int64)v175;
      --v177;
      v175 = (char *)v9;
      sub_186B220(v107);
      v104 = v181;
      v30 = v179;
      v29 = v177;
      v9 = (__int64)v175;
    }
    *(_QWORD *)(v4 + 264) = v28;
    *(_DWORD *)(v4 + 272) = v104;
    *(_DWORD *)(v4 + 280) = 0;
  }
  else
  {
    v28 = *(char **)(v4 + 264);
    v29 = v27 - 1;
    v30 = 16 * v27;
    v31 = (__int64 *)&v28[v30];
  }
  v32 = *(_DWORD *)(v9 + 12);
  v11 = 16LL * (v32 & (unsigned int)v29);
  v33 = &v28[v11];
  if ( v11 != v30 )
  {
    v34 = (__int64 *)&v28[v11];
    v10 = nullptr;
    while ( 1 )
    {
      v8 = (char *)*v34;
      if ( (unsigned __int64)*v34 > 1 )
      {
        if ( *((_DWORD *)v8 + 3) == v32 && (char *)v9 == v8 )
        {
          *v34 = v9;
          v34[1] = (__int64)v173;
          goto LABEL_147;
        }
      }
      else
      {
        if ( !v8 )
        {
          if ( v10 )
            goto LABEL_226;
          v10 = v34;
          goto LABEL_227;
        }
        v10 = v34;
      }
      v34 += 2;
      if ( v34 == v31 )
        goto LABEL_56;
    }
  }
  v10 = nullptr;
LABEL_56:
  while ( 2 )
  {
    if ( v33 == v28 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v35 = *(_QWORD *)v28;
    if ( *(_QWORD *)v28 > 1u )
    {
      if ( *(_DWORD *)(v35 + 12) == v32 && v9 == v35 )
      {
        *(_QWORD *)v28 = v9;
        *((_QWORD *)v28 + 1) = v173;
        goto LABEL_147;
      }
      goto LABEL_55;
    }
    if ( v35 )
    {
      v10 = (__int64 *)v28;
LABEL_55:
      v28 += 16;
      continue;
    }
    break;
  }
  if ( v10 )
LABEL_226:
    --*(_DWORD *)(v4 + 280);
  else
    v10 = (__int64 *)v28;
LABEL_227:
  *v10 = v9;
  v10[1] = (__int64)v173;
  ++*(_DWORD *)(v4 + 276);
LABEL_147:
  for ( i = v25 + 2; v26 != i; i += 2 )
  {
    v25 = i;
    if ( (unsigned __int64)*i > 1 )
      goto LABEL_39;
  }
LABEL_60:
  v36 = *(char **)(v174 + 288);
  v37 = &v36[40 * *(unsigned int *)(v174 + 296)];
  if ( v36 == v37 )
    goto LABEL_95;
  while ( *(_QWORD *)v36 <= 1u )
  {
    v36 += 40;
    if ( v37 == v36 )
      goto LABEL_95;
  }
  if ( v37 == v36 )
    goto LABEL_95;
  v38 = *(_QWORD *)v36;
  v173 = &v195.m128i_i8[8];
  v175 = (char *)&v196 + 8;
  while ( 2 )
  {
    if ( v186.m128i_i64[0] != v186.m128i_i64[1] )
      v38 = sub_15CFF50(&v186, v38);
    v195 = (__m128i)(unsigned __int64)v38;
    *(_QWORD *)&v196 = 0;
    v39 = qword_1C7F2C0;
    *((_QWORD *)&v196 + 1) = 1;
    v197 = nullptr;
    if ( (v36[12] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v195.m128i_u64[1], v36 + 8);
    else
      v195.m128i_i32[2] = *((_DWORD *)v36 + 2);
    if ( (v36[28] & 1) != 0 )
    {
      sub_182C690(v39, (char *)&v196 + 8, v36 + 24);
    }
    else
    {
      v40 = *((_DWORD *)v36 + 6);
      BYTE12(v196) &= ~1u;
      DWORD2(v196) = v40;
    }
    v41 = *(unsigned int *)(v4 + 296);
    v42 = 2 * v41;
    if ( 3 * (int)v41 < (unsigned int)(4 * (*(_DWORD *)(v4 + 300) + *(_DWORD *)(v4 + 304))) )
    {
      v111 = v42;
      v181 = 2 * v41;
      v179 = 40LL * v42;
      v177 = v179;
      v112 = sub_186B270(v179);
      v113 = v181;
      v43 = v112;
      v45 = v179;
      if ( v181 )
      {
        v114 = v112 + 40 * v111;
        do
        {
          *(_OWORD *)(v112 + 24) = 0;
          v112 += 40;
          *(_OWORD *)(v112 - 32) = 0;
          *(_QWORD *)(v112 - 40) = 0;
          *(_BYTE *)(v112 - 28) = 0;
          *(_DWORD *)(v112 - 16) = 1;
          *(_BYTE *)(v112 - 12) = 0;
        }
        while ( v114 != v112 );
      }
      v44 = v181 - 1;
      v46 = v43 + v179;
      v115 = *(char **)(v4 + 288);
      v116 = *(unsigned int *)(v4 + 296);
      v117 = &v115[40 * v116];
      if ( v115 != v117 )
      {
        do
        {
          while ( 1 )
          {
            v118 = *(_QWORD *)v115;
            if ( *(_QWORD *)v115 > 1u )
              break;
            v115 += 40;
            if ( v117 == v115 )
              goto LABEL_186;
          }
          v119 = 40LL * (*(_DWORD *)(v118 + 12) & (unsigned int)v44);
          v120 = v43 + v119;
          if ( v179 == v119 )
          {
LABEL_194:
            if ( v43 == v120 )
            {
LABEL_236:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v121 = v43;
            while ( *(_QWORD *)v121 )
            {
              v121 += 40;
              if ( v120 == v121 )
                goto LABEL_236;
            }
          }
          else
          {
            v121 = v43 + v119;
            while ( *(_QWORD *)v121 )
            {
              v121 += 40;
              if ( v46 == v121 )
                goto LABEL_194;
            }
          }
          v122 = *((_DWORD *)v115 + 2);
          *(_QWORD *)v121 = v118;
          v115 += 40;
          v123 = *(_DWORD *)(v121 + 8);
          *(_DWORD *)(v121 + 8) = v122;
          v124 = *((_QWORD *)v115 - 3);
          *((_DWORD *)v115 - 8) = v123;
          v125 = *(_QWORD *)(v121 + 16);
          *(_QWORD *)(v121 + 16) = v124;
          v126 = *(v115 - 28);
          *((_QWORD *)v115 - 3) = v125;
          LOBYTE(v125) = *(_BYTE *)(v121 + 12);
          *(_BYTE *)(v121 + 12) = v126 & 2 | v125 & 0xFD;
          LOBYTE(v125) = v125 & 2 | *(v115 - 28) & 0xFD;
          *(v115 - 28) = v125;
          v127 = *(_BYTE *)(v121 + 12);
          *(_BYTE *)(v121 + 12) = v125 & 1 | v127 & 0xFE;
          LODWORD(v124) = *((_DWORD *)v115 - 4);
          *(v115 - 28) = v127 & 1 | *(v115 - 28) & 0xFE;
          LODWORD(v125) = *(_DWORD *)(v121 + 24);
          *(_DWORD *)(v121 + 24) = v124;
          v128 = *((_QWORD *)v115 - 1);
          *((_DWORD *)v115 - 4) = v125;
          v129 = *(_QWORD *)(v121 + 32);
          *(_QWORD *)(v121 + 32) = v128;
          v130 = *(v115 - 12);
          *((_QWORD *)v115 - 1) = v129;
          LOBYTE(v129) = *(_BYTE *)(v121 + 28);
          *(_BYTE *)(v121 + 28) = v130 & 2 | v129 & 0xFD;
          LOBYTE(v129) = v129 & 2 | *(v115 - 12) & 0xFD;
          *(v115 - 12) = v129;
          v131 = *(_BYTE *)(v121 + 28) & 1;
          *(_BYTE *)(v121 + 28) = v129 & 1 | *(_BYTE *)(v121 + 28) & 0xFE;
          *(v115 - 12) = v131 | *(v115 - 12) & 0xFE;
        }
        while ( v117 != v115 );
LABEL_186:
        v116 = *(unsigned int *)(v4 + 296);
        v117 = *(char **)(v4 + 288);
      }
      if ( v117 )
      {
        if ( (_DWORD)v116 )
        {
          v180 = v43;
          v182 = v117;
          v184 = v44;
          v132 = &v117[40 * v116];
          v183 = v45;
          v185 = v113;
          v178 = v36;
          v133 = v117;
          do
          {
            v134 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v133 + 8);
            v135 = v133 + 24;
            v133 += 40;
            sub_182CBA0(v134, v135);
          }
          while ( v133 != v132 );
          v36 = v178;
          v43 = v180;
          v117 = v182;
          v44 = v184;
          v45 = v183;
          v113 = v185;
        }
        v181 = v113;
        v179 = v45;
        v177 = v44;
        sub_186B220(v117);
        v44 = v177;
        v45 = v179;
        v113 = v181;
      }
      *(_QWORD *)(v4 + 288) = v43;
      *(_DWORD *)(v4 + 296) = v113;
      *(_DWORD *)(v4 + 304) = 0;
    }
    else
    {
      v43 = *(_QWORD *)(v4 + 288);
      v44 = v41 - 1;
      v45 = 40 * v41;
      v46 = v43 + 40 * v41;
    }
    v47 = v195.m128i_i64[0];
    v48 = *(_DWORD *)(v195.m128i_i64[0] + 12);
    v49 = 40LL * (v48 & (unsigned int)v44);
    v50 = v43 + v49;
    if ( v49 != v45 )
    {
      v51 = v43 + v49;
      v52 = 0;
      while ( 1 )
      {
        v53 = *(_QWORD *)v51;
        if ( *(_QWORD *)v51 > 1u )
        {
          if ( *(_DWORD *)(v53 + 12) == v48 && v195.m128i_i64[0] == v53 )
          {
            v150 = *(_DWORD *)(v51 + 8);
            v151 = v195.m128i_i32[2];
            *(_QWORD *)v51 = v195.m128i_i64[0];
            *(_DWORD *)(v51 + 8) = v151;
            v195.m128i_i32[2] = v150;
            v152 = *(_QWORD *)(v51 + 16);
            *(_QWORD *)(v51 + 16) = v196;
            *(_QWORD *)&v196 = v152;
            LOBYTE(v152) = *(_BYTE *)(v51 + 12);
            *(_BYTE *)(v51 + 12) = v195.m128i_i8[12] & 2 | v152 & 0xFD;
            v195.m128i_i8[12] = v152 & 2 | v195.m128i_i8[12] & 0xFD;
            v153 = *(_BYTE *)(v51 + 12);
            *(_BYTE *)(v51 + 12) = v195.m128i_i8[12] & 1 | v153 & 0xFE;
            v195.m128i_i8[12] = v153 & 1 | v195.m128i_i8[12] & 0xFE;
            LODWORD(v152) = *(_DWORD *)(v51 + 24);
            *(_DWORD *)(v51 + 24) = DWORD2(v196);
            DWORD2(v196) = v152;
            v154 = *(void **)(v51 + 32);
            *(_QWORD *)(v51 + 32) = v197;
            v197 = v154;
            LOBYTE(v154) = *(_BYTE *)(v51 + 28);
            *(_BYTE *)(v51 + 28) = BYTE12(v196) & 2 | (unsigned __int8)v154 & 0xFD;
            BYTE12(v196) = (unsigned __int8)v154 & 2 | BYTE12(v196) & 0xFD;
            v155 = *(_BYTE *)(v51 + 28) & 1;
            *(_BYTE *)(v51 + 28) = BYTE12(v196) & 1 | *(_BYTE *)(v51 + 28) & 0xFE;
            BYTE12(v196) = v155 | BYTE12(v196) & 0xFE;
            goto LABEL_90;
          }
        }
        else
        {
          if ( !v53 )
          {
            if ( v52 )
              goto LABEL_229;
            v52 = v51;
            goto LABEL_230;
          }
          v52 = v51;
        }
        v51 += 40;
        if ( v51 == v46 )
          goto LABEL_85;
      }
    }
    v52 = 0;
LABEL_85:
    while ( 2 )
    {
      if ( v50 == v43 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v54 = *(_QWORD *)v43;
      if ( *(_QWORD *)v43 > 1u )
      {
        if ( *(_DWORD *)(v54 + 12) == v48 && v195.m128i_i64[0] == v54 )
        {
          v159 = *(_DWORD *)(v43 + 8);
          v160 = v195.m128i_i32[2];
          *(_QWORD *)v43 = v195.m128i_i64[0];
          *(_DWORD *)(v43 + 8) = v160;
          v195.m128i_i32[2] = v159;
          v161 = *(_QWORD *)(v43 + 16);
          *(_QWORD *)(v43 + 16) = v196;
          *(_QWORD *)&v196 = v161;
          LOBYTE(v160) = *(_BYTE *)(v43 + 12);
          *(_BYTE *)(v43 + 12) = v195.m128i_i8[12] & 2 | v160 & 0xFD;
          v195.m128i_i8[12] = v160 & 2 | v195.m128i_i8[12] & 0xFD;
          v162 = *(_BYTE *)(v43 + 12);
          *(_BYTE *)(v43 + 12) = v195.m128i_i8[12] & 1 | v162 & 0xFE;
          v195.m128i_i8[12] = v162 & 1 | v195.m128i_i8[12] & 0xFE;
          LODWORD(v161) = *(_DWORD *)(v43 + 24);
          *(_DWORD *)(v43 + 24) = DWORD2(v196);
          DWORD2(v196) = v161;
          v163 = *(void **)(v43 + 32);
          *(_QWORD *)(v43 + 32) = v197;
          v197 = v163;
          LOBYTE(v160) = *(_BYTE *)(v43 + 28);
          *(_BYTE *)(v43 + 28) = BYTE12(v196) & 2 | v160 & 0xFD;
          BYTE12(v196) = v160 & 2 | BYTE12(v196) & 0xFD;
          v164 = *(_BYTE *)(v43 + 28) & 1;
          *(_BYTE *)(v43 + 28) = BYTE12(v196) & 1 | *(_BYTE *)(v43 + 28) & 0xFE;
          BYTE12(v196) = v164 | BYTE12(v196) & 0xFE;
          goto LABEL_90;
        }
        goto LABEL_84;
      }
      if ( v54 )
      {
        v52 = v43;
LABEL_84:
        v43 += 40;
        continue;
      }
      break;
    }
    if ( v52 )
LABEL_229:
      --*(_DWORD *)(v4 + 304);
    else
      v52 = v43;
LABEL_230:
    v144 = *(_DWORD *)(v52 + 8);
    v145 = v195.m128i_i32[2];
    *(_QWORD *)v52 = v47;
    *(_DWORD *)(v52 + 8) = v145;
    v195.m128i_i32[2] = v144;
    v146 = *(_QWORD *)(v52 + 16);
    *(_QWORD *)(v52 + 16) = v196;
    *(_QWORD *)&v196 = v146;
    LOBYTE(v145) = *(_BYTE *)(v52 + 12);
    *(_BYTE *)(v52 + 12) = v195.m128i_i8[12] & 2 | v145 & 0xFD;
    v195.m128i_i8[12] = v145 & 2 | v195.m128i_i8[12] & 0xFD;
    v147 = *(_BYTE *)(v52 + 12);
    *(_BYTE *)(v52 + 12) = v195.m128i_i8[12] & 1 | v147 & 0xFE;
    v195.m128i_i8[12] = v147 & 1 | v195.m128i_i8[12] & 0xFE;
    LODWORD(v146) = *(_DWORD *)(v52 + 24);
    *(_DWORD *)(v52 + 24) = DWORD2(v196);
    DWORD2(v196) = v146;
    v148 = *(void **)(v52 + 32);
    *(_QWORD *)(v52 + 32) = v197;
    v197 = v148;
    LOBYTE(v145) = *(_BYTE *)(v52 + 28);
    *(_BYTE *)(v52 + 28) = BYTE12(v196) & 2 | v145 & 0xFD;
    BYTE12(v196) = v145 & 2 | BYTE12(v196) & 0xFD;
    v149 = *(_BYTE *)(v52 + 28) & 1;
    *(_BYTE *)(v52 + 28) = BYTE12(v196) & 1 | *(_BYTE *)(v52 + 28) & 0xFE;
    LOBYTE(v148) = BYTE12(v196);
    ++*(_DWORD *)(v4 + 300);
    BYTE12(v196) = v149 | (unsigned __int8)v148 & 0xFE;
LABEL_90:
    v55 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v195.m128i_u64[1]);
    sub_182CBA0(v55, (char *)&v196 + 8);
    v8 = v36 + 40;
    if ( v37 != v36 + 40 )
    {
      while ( 1 )
      {
        v38 = *(_QWORD *)v8;
        v36 = v8;
        if ( *(_QWORD *)v8 > 1u )
          break;
        v8 += 40;
        if ( v37 == v8 )
          goto LABEL_95;
      }
      if ( v8 != v37 )
        continue;
    }
    break;
  }
LABEL_95:
  v56 = *(__int64 **)(v174 + 208);
  if ( v56 )
  {
    v57 = &v56[*((unsigned int *)v56 - 1)];
    if ( v57 != v56 )
    {
      while ( 1 )
      {
        v60 = *v56;
        if ( v186.m128i_i64[0] != v186.m128i_i64[1] )
          v60 = sub_15CFF50(&v186, *v56);
        if ( v60 )
          ++*(_DWORD *)(v60 + 8);
        v8 = *(char **)(v4 + 208);
        if ( !v8 )
          break;
        v61 = *((_DWORD *)v8 - 1);
        if ( v61 == *((_DWORD *)v8 - 2) )
        {
          v62 = (3 * v61 + 1) >> 1;
          v63 = 8 * v62 + 8;
          if ( 8 * v61 + 8 >= (unsigned int)v63 || v61 >= v62 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_107D5E(v195.m128i_i64, "Overflow encountered when expanding vector", v170);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v195);
            sub_233E40((__int64)&v195);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v64 = (unsigned int *)sub_186B300(v8 - 8, v63);
          v65 = v64[1];
          v8 = (char *)(v64 + 2);
          *v64 = v62;
          ++v56;
          *(_QWORD *)(v4 + 208) = v64 + 2;
          LODWORD(v64) = v65;
          v9 = (__int64)&v8[8 * v65];
          *(_QWORD *)v9 = v60;
          *((_DWORD *)v8 - 1) = (_DWORD)v64 + 1;
          if ( v57 == v56 )
            goto LABEL_109;
        }
        else
        {
          v58 = v61;
          v59 = v61 + 1;
          v9 = (__int64)&v8[8 * v58];
LABEL_99:
          ++v56;
          *(_QWORD *)v9 = v60;
          *((_DWORD *)v8 - 1) = v59;
          if ( v57 == v56 )
            goto LABEL_109;
        }
      }
      v156 = (_QWORD *)sub_186B270(0x18u);
      v8 = (char *)(v156 + 1);
      *v156 = 2;
      v59 = 1;
      *(_QWORD *)(v4 + 208) = v8;
      v9 = (__int64)v8;
      goto LABEL_99;
    }
  }
LABEL_109:
  v66 = *(__int64 **)(v174 + 224);
  if ( v66 )
  {
    v67 = &v66[*((unsigned int *)v66 - 1)];
    if ( v67 != v66 )
    {
      while ( 1 )
      {
        v70 = *v66;
        if ( v186.m128i_i64[0] != v186.m128i_i64[1] )
          v70 = sub_15CFF50(&v186, *v66);
        if ( v70 )
          ++*(_DWORD *)(v70 + 8);
        v8 = *(char **)(v4 + 224);
        if ( !v8 )
          break;
        v71 = *((_DWORD *)v8 - 1);
        if ( v71 == *((_DWORD *)v8 - 2) )
        {
          v72 = (3 * v71 + 1) >> 1;
          v73 = 8 * v72 + 8;
          if ( 8 * v71 + 8 >= (unsigned int)v73 || v71 >= v72 )
          {
            v167 = (char **)__cxa_allocate_exception(0x28u);
            sub_107D5E(v195.m128i_i64, "Overflow encountered when expanding vector", v168);
            *v167 = (char *)off_1C63128;
            sub_2333C0(v167 + 1, &v195);
            sub_233E40((__int64)&v195);
            __cxa_throw(v167, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v74 = (unsigned int *)sub_186B300(v8 - 8, v73);
          v75 = v74[1];
          v8 = (char *)(v74 + 2);
          *v74 = v72;
          ++v66;
          *(_QWORD *)(v4 + 224) = v74 + 2;
          LODWORD(v74) = v75;
          v9 = (__int64)&v8[8 * v75];
          *(_QWORD *)v9 = v70;
          *((_DWORD *)v8 - 1) = (_DWORD)v74 + 1;
          if ( v67 == v66 )
            goto LABEL_123;
        }
        else
        {
          v68 = v71;
          v69 = v71 + 1;
          v9 = (__int64)&v8[8 * v68];
LABEL_113:
          ++v66;
          *(_QWORD *)v9 = v70;
          *((_DWORD *)v8 - 1) = v69;
          if ( v67 == v66 )
            goto LABEL_123;
        }
      }
      v158 = (_QWORD *)sub_186B270(0x18u);
      v8 = (char *)(v158 + 1);
      *v158 = 2;
      v69 = 1;
      *(_QWORD *)(v4 + 224) = v8;
      v9 = (__int64)v8;
      goto LABEL_113;
    }
  }
LABEL_123:
  v76 = *(_QWORD **)(v174 + 192);
  if ( v76 )
  {
    v77 = &v76[*((unsigned int *)v76 - 1)];
    if ( v77 != v76 )
    {
      while ( 1 )
      {
        v80 = sub_F74CB0(
                *v76,
                v176[0],
                (int)v8,
                v9,
                (int)v10,
                v11,
                (__int64)v172,
                (int)v173,
                v174,
                (int)v175,
                v176[0],
                v177,
                v179,
                v181,
                v183,
                v184,
                v186.m128i_i32[0],
                v186.m128i_i32[2],
                v187,
                SDWORD2(v187),
                v188,
                (int)ptr,
                v190,
                v191,
                v192,
                SDWORD2(v192),
                v193,
                v194,
                v195.m128i_i32[0],
                v195.m128i_i64[1],
                v196,
                *((__int64 *)&v196 + 1),
                v197);
        v8 = *(char **)(v4 + 192);
        v81 = v80;
        if ( !v8 )
          break;
        v82 = *((_DWORD *)v8 - 1);
        if ( v82 == *((_DWORD *)v8 - 2) )
        {
          v83 = (3 * v82 + 1) >> 1;
          v84 = 8 * v83 + 8;
          if ( 8 * v82 + 8 >= (unsigned int)v84 || v82 >= v83 )
          {
            v165 = (char **)__cxa_allocate_exception(0x28u);
            sub_107D5E(v195.m128i_i64, "Overflow encountered when expanding vector", v166);
            *v165 = (char *)off_1C63128;
            sub_2333C0(v165 + 1, &v195);
            sub_233E40((__int64)&v195);
            __cxa_throw(v165, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v85 = (unsigned int *)sub_186B300(v8 - 8, v84);
          v86 = v85[1];
          v8 = (char *)(v85 + 2);
          *v85 = v83;
          ++v76;
          *(_QWORD *)(v4 + 192) = v85 + 2;
          LODWORD(v85) = v86;
          v9 = (__int64)&v8[8 * v86];
          *(_QWORD *)v9 = v81;
          *((_DWORD *)v8 - 1) = (_DWORD)v85 + 1;
          if ( v77 == v76 )
            goto LABEL_133;
        }
        else
        {
          v78 = v82;
          v79 = v82 + 1;
          v9 = (__int64)&v8[8 * v78];
LABEL_127:
          ++v76;
          *(_QWORD *)v9 = v81;
          *((_DWORD *)v8 - 1) = v79;
          if ( v77 == v76 )
            goto LABEL_133;
        }
      }
      v157 = (_QWORD *)sub_186B270(0x18u);
      v8 = (char *)(v157 + 1);
      *v157 = 2;
      v79 = 1;
      *(_QWORD *)(v4 + 192) = v8;
      v9 = (__int64)v8;
      goto LABEL_127;
    }
  }
LABEL_133:
  *(_BYTE *)(v4 + 968) = 1;
  v87 = sub_66A120(v174);
  v88 = sub_1336AB0(*(_QWORD *)(v174 + 56), v87);
  v89 = (_DWORD *)v88;
  if ( v88 )
  {
    ++*(_DWORD *)(v88 + 8);
    v197 = nullptr;
    v90 = *(_QWORD *)(v174 + 120);
    v195 = _mm_unpacklo_epi64((__m128i)v90, (__m128i)*(unsigned __int64 *)v176);
    v196 = 0;
    v91 = (_OWORD *)sub_186B270(0x80u);
    v198 = v91;
    *v91 = 0;
    v91[1] = 0;
    v91[2] = 0;
    v91[3] = 0;
    v91[4] = 0;
    v91[5] = 0;
    v91[6] = 0;
    v91[7] = 0;
    v200 = 0;
    v199 = 8;
    v202 = 0;
    v201 = 0;
    if ( v90 != *(_QWORD *)v176 )
    {
      sub_15DA640(v195.m128i_i32[2], v195.m128i_i32[0], v92, v93, v94, v95, (_DWORD)v172);
      sub_15D2280(v195.m128i_i64[1], v195.m128i_i64[0]);
    }
    v96 = *(__int64 (**)())(*(_QWORD *)v89 + 56LL);
    if ( v96 == sub_667B10 )
      v97 = sub_1333690(v89, &v195);
    else
      v97 = ((__int64 (__fastcall *)(_DWORD *, __m128i *))v96)(v89, &v195);
    v98 = v97;
    if ( v97 )
      ++*(_DWORD *)(v97 + 8);
    v99 = *(void (__fastcall ****)(void *))(v4 + 56);
    if ( v99 )
    {
      v100 = (*((_DWORD *)v99 + 2))-- == 1;
      if ( v100 )
      {
        (**v99)(v99);
        sub_186B220(v99);
      }
    }
    *(_QWORD *)(v4 + 56) = v98;
    sub_15CE760(&v195);
    v100 = v89[2]-- == 1;
    if ( v100 )
    {
      (**(void (__fastcall ***)(_DWORD *))v89)(v89);
      sub_186B220(v89);
    }
  }
  sub_15CE760(v172);
  return v4;
}

