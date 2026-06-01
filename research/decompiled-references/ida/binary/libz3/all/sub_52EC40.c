__int64 __fastcall sub_52EC40(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v6; // rax
  __int32 *v7; // rdx
  int v8; // esi
  __m128i v9; // xmm0
  __int64 v10; // r14
  _DWORD *v11; // r8
  unsigned int v12; // eax
  __m128i v13; // xmm0
  __int64 *v14; // rbx
  int v15; // r11d
  size_t v16; // r13
  __int64 *v17; // rbp
  int v18; // edi
  int v19; // edx
  int v20; // eax
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 *v23; // rdx
  __int64 *v24; // r12
  int v25; // edi
  _DWORD *v26; // rsi
  unsigned int v27; // edx
  unsigned int v28; // r13d
  unsigned int v29; // r14d
  unsigned int v30; // r14d
  __int64 v31; // rbp
  unsigned int v32; // ebx
  _QWORD *v33; // rax
  __int64 v34; // r10
  unsigned int v35; // edx
  size_t v36; // rsi
  unsigned int v37; // r12d
  unsigned int *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // r12
  __int64 *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rbx
  int v45; // esi
  unsigned int v46; // ecx
  unsigned int v47; // eax
  int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // eax
  int v52; // edx
  __int64 v53; // rax
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  unsigned int v56; // r8d
  unsigned int v57; // eax
  unsigned __int64 v58; // r9
  __int64 v59; // r12
  __int64 v60; // r14
  __int64 v61; // r13
  __int32 v62; // edx
  __int64 v63; // rbp
  __int64 v64; // rax
  __int32 *v65; // r14
  int v66; // ebp
  int v67; // r13d
  __int64 v68; // rbx
  __int64 v69; // rdi
  unsigned int v70; // ecx
  __int64 v71; // rax
  __int64 v72; // rax
  __int32 *v73; // rax
  _DWORD *v74; // rbx
  __int64 v75; // rax
  _DWORD *v76; // rax
  __int64 v77; // rax
  __int64 (*v78)(); // rdx
  __int64 v79; // rax
  _QWORD *v80; // rbp
  __m128i v81; // xmm6
  int v82; // ebx
  __int64 *v83; // rdi
  unsigned int v84; // ebx
  unsigned int v85; // eax
  __int64 v86; // rcx
  int v87; // eax
  _QWORD *v88; // rcx
  __int64 v89; // r9
  __int64 v90; // rax
  __int64 *v91; // rdx
  int v92; // ecx
  __int64 *v93; // rsi
  __int64 v94; // rcx
  __int64 *v95; // rdi
  __int64 *v96; // rax
  int v97; // ecx
  __int64 v98; // rax
  __int64 result; // rax
  __int64 *v100; // rbx
  __int64 v101; // r12
  unsigned __int64 v102; // rbp
  __int64 v103; // rsi
  __int64 v105; // rax
  __int64 v106; // rax
  float v107; // xmm0_4
  __int64 v108; // rax
  __int64 v109; // rbp
  __int64 v110; // r13
  __int64 v111; // rdi
  unsigned int v112; // ecx
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rax
  float v117; // xmm0_4
  __int64 v118; // rax
  _QWORD *v119; // r13
  __int64 v120; // rbp
  __int64 v121; // r14
  __int64 v122; // rdi
  unsigned int v123; // ecx
  __int64 v124; // rax
  __int64 v125; // rsi
  __int64 v126; // rax
  __int64 v127; // rax
  float v128; // xmm0_4
  __int64 *v129; // rbp
  __int64 v130; // rbp
  __int64 v131; // rdx
  __int64 v132; // r12
  __int64 v133; // rax
  int v134; // edi
  __int64 *v135; // rcx
  __int64 *v136; // rsi
  __int64 v137; // r9
  __int64 *v138; // r8
  __int64 *v139; // rax
  _QWORD *v140; // r14
  __int64 v141; // rax
  _QWORD *v142; // r12
  __int64 v143; // rax
  __int64 v144; // rax
  float v145; // xmm0_4
  __int64 *v146; // rbp
  __int64 v147; // rbp
  __int64 v148; // r14
  __int64 v149; // r12
  __int64 v150; // rax
  int v151; // edi
  __int64 *v152; // rcx
  __int64 v153; // rdx
  __int64 *v154; // rsi
  __int64 v155; // r9
  __int64 *v156; // r8
  __int64 *v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rax
  _QWORD *v160; // r14
  __int64 v161; // rax
  __int64 v162; // rax
  float v163; // xmm0_4
  int v164; // eax
  unsigned int v165; // ecx
  size_t v166; // rsi
  _DWORD *v167; // rax
  unsigned int v168; // ecx
  size_t v169; // rsi
  _DWORD *v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rsi
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 (*v176)(); // rdx
  _QWORD *v177; // r14
  __int64 v178; // rax
  _QWORD *v179; // rbp
  __int64 v180; // rax
  __int64 v181; // rax
  unsigned int v182; // ebx
  unsigned int v183; // ecx
  unsigned int *v184; // rax
  __int64 v185; // rcx
  __int64 *v186; // rax
  int v187; // r10d
  __int64 *v188; // rcx
  __int64 *v189; // r12
  __int64 *v190; // r9
  __int64 v191; // rax
  __int64 *v192; // rdx
  __int64 *v193; // rax
  __int64 v194; // rdx
  __m128i v195; // xmm1
  __int64 v196; // rax
  __int64 v197; // rax
  _DWORD *v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  unsigned int v201; // eax
  _QWORD *v202; // rax
  _QWORD *v203; // rax
  int v204; // eax
  int v205; // eax
  _QWORD *v206; // rax
  char **v207; // rbp
  char **exception; // rbp
  char **v209; // r12
  char **v210; // r12
  __int64 *v213; // [rsp+10h] [rbp-F8h]
  int v214; // [rsp+10h] [rbp-F8h]
  __m128i v215; // [rsp+20h] [rbp-E8h] BYREF
  __int64 *v216; // [rsp+30h] [rbp-D8h]
  __int32 *v217; // [rsp+38h] [rbp-D0h]
  __int64 v218; // [rsp+40h] [rbp-C8h]
  _DWORD *v219; // [rsp+48h] [rbp-C0h]
  __int64 v220; // [rsp+50h] [rbp-B8h]
  _QWORD *v221; // [rsp+58h] [rbp-B0h]
  _QWORD *v222; // [rsp+60h] [rbp-A8h]
  __int64 *v223; // [rsp+68h] [rbp-A0h]
  unsigned int v224; // [rsp+74h] [rbp-94h]
  __int64 v225; // [rsp+78h] [rbp-90h]
  _QWORD *v226; // [rsp+88h] [rbp-80h] BYREF
  __int64 v227; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v228; // [rsp+98h] [rbp-70h]
  __int64 v229; // [rsp+A0h] [rbp-68h] BYREF

  v220 = a4;
  v216 = a5;
  v6 = sub_52E440((__int64)a1, a2, a3);
  v8 = *((_DWORD *)a1 + 16);
  v9 = (__m128i)(unsigned __int64)v6;
  v10 = v6;
  v11 = v7;
  v12 = *((_DWORD *)a1 + 14);
  v13 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)v7);
  if ( 3 * v12 < 4 * (v8 + *((_DWORD *)a1 + 15)) )
  {
    v217 = v7;
    v16 = 64LL * v12;
    v214 = 2 * v12;
    v215 = v13;
    v186 = (__int64 *)sub_186B270(v16);
    v187 = v214;
    v13 = _mm_load_si128(&v215);
    v11 = v217;
    v14 = v186;
    v188 = &v186[v16 / 8];
    if ( v214 )
    {
      do
      {
        *v186 = 0;
        v186 += 4;
        *(v186 - 3) = 0;
        *(v186 - 2) = 0;
      }
      while ( v188 != v186 );
    }
    v189 = a1[6];
    v15 = v214 - 1;
    v17 = v188;
    v190 = &v189[4 * *((unsigned int *)a1 + 14)];
    if ( v189 != v190 )
    {
      do
      {
        while ( *((_DWORD *)v189 + 1) != 2 )
        {
          v189 += 4;
          if ( v190 == v189 )
            goto LABEL_252;
        }
        v191 = 32LL * (*(_DWORD *)v189 & (unsigned int)v15);
        v192 = &v14[(unsigned __int64)v191 / 8];
        if ( v191 == v16 )
        {
LABEL_277:
          if ( v192 == v14 )
          {
LABEL_302:
            v221 = v188;
            v219 = v11;
            LODWORD(v218) = v214;
            LODWORD(v217) = v214 - 1;
            v215.m128i_i64[0] = (__int64)v190;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v193 = v14;
          while ( *((_DWORD *)v193 + 1) )
          {
            v193 += 4;
            if ( v192 == v193 )
              goto LABEL_302;
          }
        }
        else
        {
          v193 = &v14[(unsigned __int64)v191 / 8];
          while ( *((_DWORD *)v193 + 1) )
          {
            v193 += 4;
            if ( v188 == v193 )
              goto LABEL_277;
          }
        }
        v194 = v189[3];
        *(_DWORD *)v193 = *(_DWORD *)v189;
        v189 += 4;
        *((_DWORD *)v193 + 1) = 2;
        v195 = _mm_loadu_si128((const __m128i *)(v189 - 3));
        v193[3] = v194;
        *(__m128i *)(v193 + 1) = v195;
      }
      while ( v190 != v189 );
LABEL_252:
      v190 = a1[6];
    }
    if ( v190 )
    {
      v218 = (__int64)v11;
      LODWORD(v217) = v214;
      v215 = v13;
      sub_186B220(v190);
      v11 = (_DWORD *)v218;
      v187 = (int)v217;
      v13 = _mm_load_si128(&v215);
      v15 = v214 - 1;
    }
    a1[6] = v14;
    v8 = 0;
    *((_DWORD *)a1 + 14) = v187;
    *((_DWORD *)a1 + 16) = 0;
  }
  else
  {
    v14 = a1[6];
    v15 = v12 - 1;
    v16 = 32LL * v12;
    v17 = &v14[v16 / 8];
  }
  v18 = *(_DWORD *)(v10 + 12);
  v19 = (v11[3] - v18) ^ (v18 << 8);
  v20 = (v19 - v18 + (v19 ^ ((v18 - v19) << 16))) ^ ((v18 - v19) << 10);
  v21 = 32LL * (v20 & (unsigned int)v15);
  v22 = &v14[(unsigned __int64)v21 / 8];
  if ( v21 != v16 )
  {
    v23 = &v14[(unsigned __int64)v21 / 8];
    v24 = nullptr;
    while ( 1 )
    {
      v25 = *((_DWORD *)v23 + 1);
      if ( v25 == 2 )
      {
        if ( v20 == *(_DWORD *)v23 && v23[1] == v10 && (_DWORD *)v23[2] == v11 )
        {
          v218 = v23[3];
          goto LABEL_13;
        }
      }
      else
      {
        if ( !v25 )
        {
          if ( v24 )
            goto LABEL_59;
          v24 = v23;
          goto LABEL_60;
        }
        v24 = v23;
      }
      v23 += 4;
      if ( v23 == v17 )
        goto LABEL_52;
    }
  }
  v24 = nullptr;
  while ( 1 )
  {
LABEL_52:
    if ( v22 == v14 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v52 = *((_DWORD *)v14 + 1);
    if ( v52 == 2 )
      break;
    if ( !v52 )
    {
      if ( v24 )
LABEL_59:
        *((_DWORD *)a1 + 16) = v8 - 1;
      else
        v24 = v14;
LABEL_60:
      v24[3] = 0;
      *((_DWORD *)v24 + 1) = 2;
      *(_DWORD *)v24 = v20;
      *(__m128i *)(v24 + 1) = v13;
      ++*((_DWORD *)a1 + 15);
      goto LABEL_61;
    }
    v24 = v14;
LABEL_51:
    v14 += 4;
  }
  if ( v20 != *(_DWORD *)v14 || v14[1] != v10 || (_DWORD *)v14[2] != v11 )
    goto LABEL_51;
  v23 = v14;
  v218 = v14[3];
LABEL_13:
  if ( !v218 )
  {
    v24 = v23;
LABEL_61:
    v53 = sub_186B270(0x20u);
    v13.m128i_i64[0] = 0;
    *(_DWORD *)(v53 + 12) = 0;
    *(_QWORD *)v53 = 0;
    *(_BYTE *)(v53 + 8) = 1;
    *(_OWORD *)(v53 + 16) = 0;
    v218 = v53;
    v24[3] = v53;
  }
  v223 = &v227;
  sub_52D980(&v227, (__int64)a1, a2, a3);
  v213 = v228;
  if ( v228 )
  {
    v215.m128i_i32[0] = *((_DWORD *)v228 - 1);
    LODWORD(v219) = v215.m128i_i32[0] - 1;
  }
  else
  {
    LODWORD(v219) = -1;
  }
  v226 = nullptr;
  v26 = (_DWORD *)*v216;
  if ( !*v216 )
    goto LABEL_64;
  v27 = *(v26 - 1);
  v28 = 32 * v27;
  if ( !(32 * v27) || !v27 )
    goto LABEL_64;
  v29 = *v26 & 1;
  if ( v29 )
  {
    v30 = 0;
LABEL_21:
    LODWORD(v217) = *(_DWORD *)(v228[(unsigned int)v219 - v30] + 16);
    v31 = (unsigned int)v217 >> 5;
    v32 = v31 + 1;
    v33 = (_QWORD *)sub_186B270(0x10u);
    v34 = (__int64)(v33 + 1);
    *v33 = 2;
    v226 = v33 + 1;
    v215.m128i_i32[0] = 0;
LABEL_25:
    while ( 1 )
    {
      v39 = *(_DWORD *)(v34 - 8);
      if ( v39 >= v32 )
        break;
      v35 = (3 * v39 + 1) >> 1;
      v36 = 4 * v35 + 8;
      v37 = v35;
      if ( 4 * v39 + 8 >= (unsigned int)v36 || v39 >= v35 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v229, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v229);
        sub_233E40((__int64)&v229);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v38 = (unsigned int *)sub_186B300((void *)(v34 - 8), v36);
      v34 = (__int64)(v38 + 2);
      *v38 = v37;
      v226 = v38 + 2;
    }
    v40 = v215.m128i_u32[0];
    v41 = v216;
    *(_DWORD *)(v34 - 4) = v32;
    v42 = 4LL * v32;
    v43 = 4 * v40;
    v44 = *v41;
    if ( v43 != v42 )
    {
      v215.m128i_i64[0] = v34;
      memset((void *)(v34 + v43), 0, v42 - v43);
      v34 = v215.m128i_i64[0];
    }
    v45 = (int)v219;
    LOBYTE(v46) = (_BYTE)v217;
    while ( 1 )
    {
      ++v30;
      *(_DWORD *)(v34 + 4 * v31) |= 1 << v46;
      if ( v30 == v28 )
      {
        if ( !v44 )
          goto LABEL_64;
        v47 = v30 >> 5;
        if ( v30 >> 5 >= *(_DWORD *)(v44 - 4) )
          goto LABEL_64;
LABEL_141:
        v48 = *(_DWORD *)(v44 + 4LL * v47);
        if ( (v48 & (1 << v30)) == 0 )
        {
          if ( v28 != v30 )
            goto LABEL_38;
          goto LABEL_64;
        }
      }
      else
      {
        if ( !v44 )
        {
          while ( (v30 & 0x1F) != 0 )
          {
            if ( v28 == ++v30 )
            {
              v47 = v28 >> 5;
              goto LABEL_133;
            }
          }
          v47 = v30 >> 5;
LABEL_133:
          if ( v28 != v30 )
          {
            v48 = *(_DWORD *)(4LL * v47);
            goto LABEL_38;
          }
          goto LABEL_64;
        }
        do
        {
          v47 = v30 >> 5;
          if ( v30 >> 5 < *(_DWORD *)(v44 - 4) && (*(_DWORD *)(v44 + 4LL * v47) & (1 << (v30 & 0x1F))) != 0
            || (v30 & 0x1F) == 0 )
          {
            if ( v47 < *(_DWORD *)(v44 - 4) )
              goto LABEL_141;
            goto LABEL_34;
          }
          ++v30;
        }
        while ( v28 != v30 );
        v47 = v28 >> 5;
        if ( v28 >> 5 < *(_DWORD *)(v44 - 4) )
          goto LABEL_141;
LABEL_34:
        if ( v30 == v28 )
          goto LABEL_64;
        while ( 1 )
        {
          v48 = *(_DWORD *)(v44 + 4LL * v47);
LABEL_38:
          if ( v48 )
            break;
          v30 += 32;
          ++v47;
          if ( v28 == v30 )
            goto LABEL_64;
        }
        if ( v28 == v30 )
          goto LABEL_64;
        v49 = v30 >> 5;
        if ( !v44 )
        {
          while ( v28 != ++v30 )
          {
            if ( (v30 & 0x1F) == 0 )
              goto LABEL_46;
          }
          goto LABEL_64;
        }
        if ( ((unsigned int)v49 >= *(_DWORD *)(v44 - 4) || (*(_DWORD *)(v44 + 4 * v49) & (1 << v30)) == 0)
          && v28 == ++v30 )
        {
          goto LABEL_64;
        }
        while ( 1 )
        {
          v50 = v30 >> 5;
          if ( (unsigned int)v50 < *(_DWORD *)(v44 - 4) && (*(_DWORD *)(v44 + 4 * v50) & (1 << (v30 & 0x1F))) != 0 )
            break;
          if ( (v30 & 0x1F) == 0 )
            break;
          if ( ++v30 == v28 )
            goto LABEL_64;
        }
      }
LABEL_46:
      if ( v28 == v30 )
        goto LABEL_64;
      v46 = *(_DWORD *)(v213[v45 - v30] + 16);
      v51 = *(_DWORD *)(v34 - 4);
      v31 = v46 >> 5;
      if ( (unsigned int)v31 >= v51 )
      {
        LODWORD(v217) = *(_DWORD *)(v213[v45 - v30] + 16);
        v32 = v31 + 1;
        v215.m128i_i32[0] = v51;
        goto LABEL_25;
      }
    }
  }
  v198 = (_DWORD *)*v216;
  while ( !*v198 )
  {
    v29 += 32;
    ++v198;
    if ( v29 == v28 )
      goto LABEL_64;
  }
  if ( v29 != v28 )
  {
    v199 = v29 >> 5;
    v30 = (unsigned int)v199 < v27 ? ((v26[v199] & 1) == 0) + v29 : v29 + 1;
    while ( 1 )
    {
      v200 = v30 >> 5;
      if ( (unsigned int)v200 < v27 && (v26[v200] & (1 << (v30 & 0x1F))) != 0 )
        break;
      if ( (v30 & 0x1F) == 0 )
        break;
      if ( ++v30 == v28 )
        goto LABEL_64;
    }
    if ( v30 != v28 )
      goto LABEL_21;
  }
LABEL_64:
  v54 = *(_QWORD **)(v218 + 24);
  if ( v54 && (v55 = *((_DWORD *)v54 - 1)) != 0 )
  {
LABEL_105:
    if ( *((_DWORD *)v54 - 2) == v55 )
    {
      v182 = (3 * v55 + 1) >> 1;
      v183 = 8 * v182 + 8;
      if ( 8 * v55 + 8 >= v183 || v55 >= v182 )
      {
        v207 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v229, "Overflow encountered when expanding vector");
        *v207 = (char *)off_1C63128;
        sub_2333C0(v207 + 1, &v229);
        sub_233E40((__int64)&v229);
        __cxa_throw(v207, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v184 = (unsigned int *)sub_186B300(v54 - 1, v183);
      v185 = v184[1];
      v54 = v184 + 2;
      *(_QWORD *)(v218 + 24) = v184 + 2;
      *v184 = v182;
      LODWORD(v184) = v185;
      v88 = &v54[v185];
      v87 = (_DWORD)v184 + 1;
    }
    else
    {
      v86 = v55;
      v87 = v55 + 1;
      v88 = &v54[v86];
    }
  }
  else
  {
    v56 = *(_DWORD *)(a3 + 24);
    v225 = **a1;
    v57 = *(_DWORD *)(a2 + 24);
    if ( v57 )
    {
      v219 = nullptr;
      v58 = v57;
      v59 = 0;
      v60 = v56;
      v217 = nullptr;
LABEL_69:
      while ( 1 )
      {
        v61 = *(_QWORD *)(a2 + 8 * v59 + 32);
        if ( *(_WORD *)(v61 + 4) == 1 )
        {
          if ( v56 )
            break;
        }
        if ( v58 == ++v59 )
          goto LABEL_79;
      }
      v62 = v59;
      while ( 1 )
      {
        v63 = 0;
        do
        {
          v64 = *(_QWORD *)(a3 + 8 * v63 + 32);
          if ( *(_WORD *)(v64 + 4) == 1 && *(_DWORD *)(v61 + 16) == *(_DWORD *)(v64 + 16) )
          {
            if ( v217 )
            {
              v72 = (unsigned int)*(v217 - 1);
              if ( (_DWORD)v72 == *(v217 - 2) )
              {
                v168 = (unsigned int)(3 * v72 + 1) >> 1;
                v169 = 4 * v168 + 8;
                if ( 4 * (int)v72 + 8 >= (unsigned int)v169 || (unsigned int)v72 >= v168 )
                {
                  v210 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v229, "Overflow encountered when expanding vector");
                  *v210 = (char *)off_1C63128;
                  sub_2333C0(v210 + 1, &v229);
                  sub_233E40((__int64)&v229);
                  __cxa_throw(v210, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                LODWORD(v221) = (unsigned int)(3 * v72 + 1) >> 1;
                v224 = v56;
                v222 = (_QWORD *)v58;
                v215.m128i_i32[0] = v62;
                v170 = (_DWORD *)sub_186B300(v217 - 2, v169);
                v62 = v215.m128i_i32[0];
                v58 = (unsigned __int64)v222;
                v56 = v224;
                v217 = v170 + 2;
                *v170 = (_DWORD)v221;
                v73 = &v170[v170[1] + 2];
              }
              else
              {
                v73 = &v217[v72];
              }
            }
            else
            {
              v215.m128i_i32[0] = v62;
              LODWORD(v222) = v56;
              v221 = (_QWORD *)v58;
              v203 = (_QWORD *)sub_186B270(0x10u);
              *v203 = 2;
              v73 = (__int32 *)(v203 + 1);
              v62 = v215.m128i_i32[0];
              v58 = (unsigned __int64)v221;
              v56 = (unsigned int)v222;
              v217 = v73;
            }
            *v73 = v62;
            v74 = v219;
            ++*(v217 - 1);
            if ( v74 )
            {
              v75 = (unsigned int)*(v74 - 1);
              if ( (_DWORD)v75 == *(v74 - 2) )
              {
                v165 = (unsigned int)(3 * v75 + 1) >> 1;
                v166 = 4 * v165 + 8;
                if ( 4 * (int)v75 + 8 >= (unsigned int)v166 || (unsigned int)v75 >= v165 )
                {
                  v209 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v229, "Overflow encountered when expanding vector");
                  *v209 = (char *)off_1C63128;
                  sub_2333C0(v209 + 1, &v229);
                  sub_233E40((__int64)&v229);
                  __cxa_throw(v209, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                LODWORD(v221) = (unsigned int)(3 * v75 + 1) >> 1;
                v224 = v56;
                v222 = (_QWORD *)v58;
                v215.m128i_i32[0] = v62;
                v167 = (_DWORD *)sub_186B300(v74 - 2, v166);
                v62 = v215.m128i_i32[0];
                v58 = (unsigned __int64)v222;
                v56 = v224;
                v219 = v167 + 2;
                *v167 = (_DWORD)v221;
                v76 = &v167[v167[1] + 2];
              }
              else
              {
                v76 = &v74[v75];
              }
            }
            else
            {
              v215.m128i_i32[0] = v62;
              LODWORD(v222) = v56;
              v221 = (_QWORD *)v58;
              v202 = (_QWORD *)sub_186B270(0x10u);
              *v202 = 2;
              v76 = v202 + 1;
              v62 = v215.m128i_i32[0];
              v58 = (unsigned __int64)v221;
              v56 = (unsigned int)v222;
              v219 = v76;
            }
            *v76 = v63;
            ++*(v219 - 1);
          }
          ++v63;
        }
        while ( v63 != v60 );
        if ( ++v59 == v58 )
          break;
        v62 = v59;
        v61 = *(_QWORD *)(a2 + 8 * v59 + 32);
        if ( *(_WORD *)(v61 + 4) != 1 )
        {
          if ( v58 != ++v59 )
            goto LABEL_69;
          break;
        }
      }
LABEL_79:
      v65 = v217;
      if ( v217 )
      {
        v66 = *(v217 - 1);
        if ( v66 )
        {
          v67 = 0;
          v68 = *v216;
          LODWORD(v222) = 1065353216;
          v215.m128i_i32[0] = 1065353216;
          while ( 1 )
          {
            v69 = *(_QWORD *)(a2 + 8LL * (unsigned int)*v65 + 32);
            v70 = *(_DWORD *)(v69 + 16);
            v71 = v70 >> 5;
            if ( !v68 )
              break;
            if ( (unsigned int)v71 < *(_DWORD *)(v68 - 4) )
            {
              if ( (*(_DWORD *)(v68 + 4 * v71) & (1 << v70)) != 0 )
              {
                v105 = sub_15D1F10(v69);
                v106 = sub_64BCA0(*a1, v105, *(double *)v13.m128i_i64);
                v13.m128i_i32[1] = 0;
                if ( v106 < 0 )
                  v107 = (float)(v106 & 1 | (unsigned int)((unsigned __int64)v106 >> 1))
                       + (float)(v106 & 1 | (unsigned int)((unsigned __int64)v106 >> 1));
                else
                  v107 = (float)(int)v106;
                *(float *)v13.m128i_i32 = v107 * *(float *)v215.m128i_i32;
                v215.m128i_i32[0] = v13.m128i_i32[0];
              }
              if ( v66 == ++v67 )
                break;
              ++v65;
              v68 = *v216;
            }
            else
            {
              if ( ++v67 == v66 )
                break;
              ++v65;
            }
          }
        }
        else
        {
          LODWORD(v222) = 1065353216;
          v215.m128i_i32[0] = 1065353216;
        }
      }
      else
      {
        LODWORD(v222) = 1065353216;
        v215.m128i_i32[0] = 1065353216;
      }
      v108 = *(unsigned int *)(a2 + 24);
      v221 = (_QWORD *)(a2 + 32);
      v108 *= 8;
      v109 = a2 + 32 + v108;
      if ( v108 )
      {
        v110 = a2 + 32;
        do
        {
          while ( 1 )
          {
            v111 = *(_QWORD *)v110;
            if ( *(_WORD *)(*(_QWORD *)v110 + 4LL) == 1 )
            {
              v112 = *(_DWORD *)(v111 + 16);
              v113 = *v216;
              v114 = v112 >> 5;
              if ( !*v216
                || (unsigned int)v114 >= *(_DWORD *)(v113 - 4)
                || (*(_DWORD *)(v113 + 4 * v114) & (1 << v112)) == 0 )
              {
                break;
              }
            }
            v110 += 8;
            if ( v109 == v110 )
              goto LABEL_161;
          }
          v115 = sub_15D1F10(v111);
          v116 = sub_64BCA0(*a1, v115, *(double *)v13.m128i_i64);
          v13.m128i_i32[1] = 0;
          if ( v116 < 0 )
            v117 = (float)(v116 & 1 | (unsigned int)((unsigned __int64)v116 >> 1))
                 + (float)(v116 & 1 | (unsigned int)((unsigned __int64)v116 >> 1));
          else
            v117 = (float)(int)v116;
          *(float *)v13.m128i_i32 = v117 * *(float *)v215.m128i_i32;
          v110 += 8;
          v215.m128i_i32[0] = v13.m128i_i32[0];
        }
        while ( v109 != v110 );
      }
LABEL_161:
      v118 = a3;
      v56 = *(_DWORD *)(a3 + 24);
    }
    else
    {
      v219 = nullptr;
      v217 = nullptr;
      LODWORD(v222) = 1065353216;
      v221 = (_QWORD *)(a2 + 32);
      v118 = a3;
      v215.m128i_i32[0] = 1065353216;
    }
    v119 = (_QWORD *)(v118 + 32);
    v120 = v118 + 32 + 8LL * v56;
    if ( 8LL * v56 )
    {
      v121 = v118 + 32;
      do
      {
        while ( 1 )
        {
          v122 = *(_QWORD *)v121;
          if ( *(_WORD *)(*(_QWORD *)v121 + 4LL) == 1 )
          {
            v123 = *(_DWORD *)(v122 + 16);
            v124 = *v216;
            v125 = v123 >> 5;
            if ( !*v216
              || (unsigned int)v125 >= *(_DWORD *)(v124 - 4)
              || (*(_DWORD *)(v124 + 4 * v125) & (1 << v123)) == 0 )
            {
              break;
            }
          }
          v121 += 8;
          if ( v120 == v121 )
            goto LABEL_172;
        }
        v126 = sub_15D1F10(v122);
        v127 = sub_64BCA0(*a1, v126, *(double *)v13.m128i_i64);
        v13.m128i_i32[1] = 0;
        if ( v127 < 0 )
          v128 = (float)(v127 & 1 | (unsigned int)((unsigned __int64)v127 >> 1))
               + (float)(v127 & 1 | (unsigned int)((unsigned __int64)v127 >> 1));
        else
          v128 = (float)(int)v127;
        *(float *)v13.m128i_i32 = v128 * *(float *)v215.m128i_i32;
        v121 += 8;
        v215.m128i_i32[0] = v13.m128i_i32[0];
      }
      while ( v120 != v121 );
    }
LABEL_172:
    v129 = *a1;
    sub_654200(*a1, 0);
    v130 = v129[371];
    if ( !v130 )
      goto LABEL_300;
    v131 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)v130 + 192LL))(v130, *(double *)v13.m128i_i64);
    v132 = *(_QWORD *)(a2 + 16);
    if ( *((_BYTE *)*a1 + 2985)
      && (v173 = *(_QWORD *)(a2 + 16), v216 = (__int64 *)v131, v174 = sub_4C3050(v131, v173), v131 = (__int64)v216, v174) )
    {
LABEL_228:
      v175 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v130 + 208LL))(v130, v132, v131);
      v176 = *(__int64 (**)())(*(_QWORD *)v175 + 96LL);
      LODWORD(v216) = 1333788672;
      if ( v176 == sub_4D9530 )
      {
LABEL_229:
        v177 = v221;
        v178 = *(unsigned int *)(a2 + 24);
        v179 = &v221[v178];
        if ( v178 * 8 )
        {
          do
          {
            if ( *(_WORD *)(*v177 + 4LL) != 1 )
            {
              v180 = sub_15D1F10(*v177);
              v181 = sub_64BCA0(*a1, v180, *(double *)v13.m128i_i64);
              v13.m128i_i32[1] = 0;
              if ( v181 >= 0 )
                *(float *)v13.m128i_i32 = (float)(int)v181;
              else
                *(float *)v13.m128i_i32 = (float)(v181 & 1 | (unsigned int)((unsigned __int64)v181 >> 1))
                                        + (float)(v181 & 1 | (unsigned int)((unsigned __int64)v181 >> 1));
              *(float *)&v216 = *(float *)&v216 / *(float *)v13.m128i_i32;
            }
            ++v177;
          }
          while ( v179 != v177 );
        }
        goto LABEL_188;
      }
      v205 = ((__int64 (__fastcall *)(__int64))v176)(v175);
      if ( v205 )
      {
        *(float *)&v216 = (float)v205;
        goto LABEL_229;
      }
    }
    else
    {
      v133 = *(unsigned int *)(v131 + 152);
      v134 = *(_DWORD *)(v132 + 12);
      v135 = *(__int64 **)(v131 + 144);
      v131 = 8 * v133;
      v136 = &v135[v133];
      v137 = 8LL * (v134 & (unsigned int)(v133 - 1));
      v138 = &v135[(unsigned __int64)v137 / 8];
      v139 = &v135[(unsigned __int64)v137 / 8];
      if ( v137 != v131 )
      {
        do
        {
          v131 = *v139;
          if ( (unsigned __int64)*v139 > 1 )
          {
            if ( *(_DWORD *)(v131 + 12) == v134 && v132 == v131 )
              goto LABEL_228;
          }
          else if ( !v131 )
          {
            goto LABEL_181;
          }
          ++v139;
        }
        while ( v136 != v139 );
      }
      for ( ; v138 != v135; ++v135 )
      {
        v196 = *v135;
        if ( (unsigned __int64)*v135 > 1 )
        {
          if ( *(_DWORD *)(v196 + 12) == v134 && v132 == v196 )
            goto LABEL_228;
        }
        else if ( !v196 )
        {
          break;
        }
      }
    }
LABEL_181:
    v140 = v221;
    v141 = *(unsigned int *)(a2 + 24);
    v142 = &v221[v141];
    if ( !(v141 * 8) )
    {
LABEL_300:
      LODWORD(v216) = (_DWORD)v222;
      goto LABEL_188;
    }
    LODWORD(v216) = (_DWORD)v222;
    do
    {
      while ( *(_WORD *)(*v140 + 4LL) != 1 )
      {
        if ( v142 == ++v140 )
          goto LABEL_188;
      }
      v143 = sub_15D1F10(*v140);
      v144 = sub_64BCA0(*a1, v143, *(double *)v13.m128i_i64);
      v13.m128i_i32[1] = 0;
      if ( v144 < 0 )
        v145 = (float)(v144 & 1 | (unsigned int)((unsigned __int64)v144 >> 1))
             + (float)(v144 & 1 | (unsigned int)((unsigned __int64)v144 >> 1));
      else
        v145 = (float)(int)v144;
      *(float *)v13.m128i_i32 = v145 * *(float *)&v216;
      ++v140;
      LODWORD(v216) = v13.m128i_i32[0];
    }
    while ( v142 != v140 );
LABEL_188:
    v146 = *a1;
    sub_654200(*a1, 0);
    v147 = v146[371];
    if ( !v147 )
      goto LABEL_97;
    v148 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v147 + 192LL))(v147);
    v149 = *(_QWORD *)(a3 + 16);
    if ( *((_BYTE *)*a1 + 2985) && sub_4C3050(v148, *(_QWORD *)(a3 + 16)) )
    {
LABEL_94:
      v77 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v147 + 208LL))(v147, v149);
      v78 = *(__int64 (**)())(*(_QWORD *)v77 + 96LL);
      LODWORD(v221) = 1333788672;
      if ( v78 == sub_4D9530 )
        goto LABEL_95;
      v204 = ((__int64 (__fastcall *)(__int64))v78)(v77);
      if ( v204 )
      {
        *(float *)&v221 = (float)v204;
LABEL_95:
        v79 = *(unsigned int *)(a3 + 24);
        v80 = &v119[v79];
        if ( v79 * 8 )
        {
          do
          {
            if ( *(_WORD *)(*v119 + 4LL) != 1 )
            {
              v171 = sub_15D1F10(*v119);
              v172 = sub_64BCA0(*a1, v171, *(double *)v13.m128i_i64);
              v13.m128i_i32[1] = 0;
              if ( v172 >= 0 )
                *(float *)v13.m128i_i32 = (float)(int)v172;
              else
                *(float *)v13.m128i_i32 = (float)(v172 & 1 | (unsigned int)((unsigned __int64)v172 >> 1))
                                        + (float)(v172 & 1 | (unsigned int)((unsigned __int64)v172 >> 1));
              *(float *)&v221 = *(float *)&v221 / *(float *)v13.m128i_i32;
            }
            ++v119;
          }
          while ( v80 != v119 );
          *(float *)&v216 = *(float *)&v216 * *(float *)&v221;
        }
        else
        {
LABEL_96:
          *(float *)&v216 = *(float *)&v216 * *(float *)&v221;
        }
        goto LABEL_97;
      }
    }
    else
    {
      v150 = *(unsigned int *)(v148 + 152);
      v151 = *(_DWORD *)(v149 + 12);
      v152 = *(__int64 **)(v148 + 144);
      v153 = 8 * v150;
      v154 = &v152[v150];
      v155 = 8LL * (v151 & (unsigned int)(v150 - 1));
      v156 = &v152[(unsigned __int64)v155 / 8];
      v157 = &v152[(unsigned __int64)v155 / 8];
      if ( v155 != v153 )
      {
        do
        {
          v158 = *v157;
          if ( (unsigned __int64)*v157 > 1 )
          {
            if ( *(_DWORD *)(v158 + 12) == v151 && v149 == v158 )
              goto LABEL_94;
          }
          else if ( !v158 )
          {
            goto LABEL_197;
          }
          ++v157;
        }
        while ( v154 != v157 );
      }
      for ( ; v156 != v152; ++v152 )
      {
        v197 = *v152;
        if ( (unsigned __int64)*v152 > 1 )
        {
          if ( *(_DWORD *)(v197 + 12) == v151 && v149 == v197 )
            goto LABEL_94;
        }
        else if ( !v197 )
        {
          break;
        }
      }
    }
LABEL_197:
    v159 = *(unsigned int *)(a3 + 24);
    v160 = &v119[v159];
    if ( v159 * 8 )
    {
      LODWORD(v221) = (_DWORD)v222;
      do
      {
        if ( *(_WORD *)(*v119 + 4LL) == 1 )
        {
          v161 = sub_15D1F10(*v119);
          v162 = sub_64BCA0(*a1, v161, *(double *)v13.m128i_i64);
          v13.m128i_i32[1] = 0;
          if ( v162 < 0 )
            v163 = (float)(v162 & 1 | (unsigned int)((unsigned __int64)v162 >> 1))
                 + (float)(v162 & 1 | (unsigned int)((unsigned __int64)v162 >> 1));
          else
            v163 = (float)(int)v162;
          *(float *)v13.m128i_i32 = v163 * *(float *)&v221;
          LODWORD(v221) = v13.m128i_i32[0];
        }
        ++v119;
      }
      while ( v160 != v119 );
      goto LABEL_96;
    }
LABEL_97:
    v81 = (__m128i)(unsigned int)v216;
    *(float *)v81.m128i_i32 = *(float *)&v216 / *(float *)v215.m128i_i32;
    v82 = _mm_cvtsi128_si32(v81);
    if ( v219 )
      sub_186B220(v219 - 2);
    if ( v217 )
      sub_186B220(v217 - 2);
    v83 = a1[4];
    *(_DWORD *)v218 = v82;
    v84 = sub_63BB50(v83, *(_QWORD *)(a3 + 16));
    v85 = sub_63BB50(a1[4], *(_QWORD *)(a2 + 16));
    if ( v84 < v85 )
      v84 = v85;
    v54 = *(_QWORD **)(v218 + 24);
    *(_DWORD *)(v218 + 12) = v84;
    if ( v54 )
    {
      v55 = *((_DWORD *)v54 - 1);
      goto LABEL_105;
    }
    v206 = (_QWORD *)sub_186B270(0x18u);
    *v206 = 2;
    v54 = v206 + 1;
    *(_QWORD *)(v218 + 24) = v206 + 1;
    v88 = v206 + 1;
    v87 = 1;
  }
  v89 = v220;
  *v88 = v220;
  *((_DWORD *)v54 - 1) = v87;
  v90 = *((unsigned int *)a1 + 22);
  v91 = a1[10];
  v92 = v90 - 1;
  v90 *= 24;
  v93 = (__int64 *)((char *)v91 + v90);
  v94 = 24LL * ((unsigned int)v89 & v92);
  v95 = &v91[(unsigned __int64)v94 / 8];
  if ( v94 == v90 )
  {
LABEL_206:
    while ( v95 != v91 )
    {
      v164 = *((_DWORD *)v91 + 1);
      if ( v164 == 2 )
      {
        if ( (_DWORD)v89 == *(_DWORD *)v91 && v220 == v91[1] )
        {
          v96 = v91;
          goto LABEL_114;
        }
      }
      else if ( !v164 )
      {
        break;
      }
      v91 += 3;
    }
LABEL_318:
    BUG();
  }
  v96 = &v91[(unsigned __int64)v94 / 8];
  while ( 2 )
  {
    v97 = *((_DWORD *)v96 + 1);
    if ( v97 != 2 )
    {
      if ( !v97 )
        goto LABEL_318;
LABEL_110:
      v96 += 3;
      if ( v93 == v96 )
        goto LABEL_206;
      continue;
    }
    break;
  }
  if ( (_DWORD)v89 != *(_DWORD *)v96 || v89 != v96[1] )
    goto LABEL_110;
LABEL_114:
  v98 = v96[2];
  if ( v98 && *(_DWORD *)(v98 - 4) > 2u )
    ++*(_DWORD *)(v218 + 4);
  if ( *(_BYTE *)(v218 + 8) )
  {
    v201 = sub_63BB50(a1[4], *(_QWORD *)(*(_QWORD *)(v220 + 40) + 16LL));
    *(_BYTE *)(v218 + 8) = *(_DWORD *)(v218 + 12) < v201;
  }
  sub_6472E0(v218 + 16, &v226, *(double *)v13.m128i_i64);
  result = (__int64)v226;
  if ( v226 )
    result = sub_186B220(v226 - 1);
  v100 = v213;
  if ( v213 )
  {
    v101 = v227;
    v102 = (unsigned __int64)&v213[*((unsigned int *)v213 - 1)];
    if ( (unsigned __int64)v213 < v102 )
    {
      do
      {
        while ( 1 )
        {
          v103 = *v100;
          if ( *v100 )
          {
            if ( (*(_DWORD *)(v103 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v100 >= v102 )
            return sub_186B220(v213 - 1);
        }
        ++v100;
        sub_15D7BC0(v101, v103);
      }
      while ( (unsigned __int64)v100 < v102 );
    }
    return sub_186B220(v213 - 1);
  }
  return result;
}

