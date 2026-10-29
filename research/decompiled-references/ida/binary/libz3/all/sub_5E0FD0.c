__int64 __fastcall sub_5E0FD0(__int64 a1, int a2, unsigned int a3)
{
  char **exception; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 *v9; // rbp
  __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // rdi
  char *v13; // rdi
  __int64 v14; // rcx
  char *v15; // rdx
  __int64 v16; // rax
  int v17; // esi
  unsigned int v18; // r14d
  unsigned int v19; // r14d
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  _QWORD *v22; // rax
  int v23; // ebx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r14
  unsigned int v27; // r15d
  __int64 v28; // r12
  __int64 i; // r13
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // esi
  unsigned int v36; // eax
  __int64 v37; // r11
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rax
  unsigned int v43; // r12d
  __int64 v44; // r8
  __int64 v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // edx
  int v49; // edi
  int v50; // esi
  unsigned int v51; // edx
  int v52; // edi
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // r11
  __int64 v56; // rax
  int v57; // edx
  int v58; // eax
  __int64 v59; // r9
  __int64 v60; // r13
  _QWORD *v61; // rbp
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rdx
  int v66; // eax
  __int64 v67; // rax
  unsigned int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rbx
  char *v71; // r9
  __int64 v72; // rax
  __int64 v73; // rcx
  int v74; // esi
  unsigned int v75; // r9d
  __int64 v76; // r8
  __m128i *v77; // r12
  unsigned int v78; // r10d
  __int64 v79; // rcx
  __m128i *v80; // r13
  int v81; // edi
  __int64 v82; // r10
  __m128i *v83; // r9
  __m128i *v84; // rax
  __int64 *v85; // rcx
  __int64 v86; // rdx
  int v87; // eax
  __int64 v89; // rax
  unsigned int v90; // ecx
  __int64 v91; // rax
  unsigned int v92; // r14d
  size_t v93; // rsi
  unsigned int *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  int v97; // esi
  unsigned int v98; // r9d
  __int64 v99; // r8
  __m128i *v100; // r12
  unsigned int v101; // eax
  __int64 v102; // rcx
  __m128i *v103; // r13
  int v104; // edi
  __int64 v105; // rax
  __m128i *v106; // r9
  __m128i *v107; // rax
  __int64 *v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v112; // r13
  __m128i *v113; // rax
  int v114; // r9d
  __m128i *v115; // rdx
  const __m128i *v116; // r14
  __m128i *v117; // r10
  __int64 v118; // rdx
  __m128i *v119; // rsi
  __m128i *v120; // rdx
  __m128i v121; // xmm0
  __int64 v122; // r13
  __m128i *v123; // rax
  int v124; // r9d
  __m128i *v125; // rdx
  const __m128i *v126; // r14
  __m128i *v127; // rax
  __int64 v128; // rdx
  __m128i *v129; // rsi
  __m128i *v130; // rdx
  __m128i v131; // xmm0
  __int64 v132; // rdx
  unsigned int v133; // r8d
  _QWORD *v134; // r12
  __int64 v135; // rcx
  unsigned int v136; // eax
  _QWORD *v137; // r13
  int v138; // esi
  __int64 v139; // rax
  _QWORD *v140; // rdi
  _QWORD *v141; // rax
  _QWORD *v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rax
  unsigned int v145; // edx
  int v146; // esi
  unsigned int v147; // r9d
  __int64 v148; // r8
  __m128i *v149; // r12
  int v150; // eax
  __int64 v151; // rcx
  __m128i *v152; // r13
  int v153; // edi
  __int64 v154; // rax
  __m128i *v155; // r9
  __m128i *v156; // rax
  __int64 *v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rax
  __int64 v160; // r13
  __m128i *v161; // rax
  int v162; // r9d
  __m128i *v163; // rdx
  const __m128i *v164; // r14
  __m128i *v165; // r10
  __int64 v166; // rdx
  __m128i *v167; // rsi
  __m128i *v168; // rdx
  __int64 v169; // r13
  _QWORD *v170; // rax
  int v171; // r8d
  char *v172; // r14
  __int64 v173; // rdx
  _QWORD *v174; // rsi
  _QWORD *v175; // rdx
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // r13
  __int64 v179; // r12
  __int64 *v180; // r14
  __int64 v181; // r14
  unsigned __int64 v182; // r12
  int v183; // [rsp+0h] [rbp-C8h]
  int v184; // [rsp+0h] [rbp-C8h]
  int v185; // [rsp+8h] [rbp-C0h]
  __int64 v186; // [rsp+8h] [rbp-C0h]
  size_t v187; // [rsp+8h] [rbp-C0h]
  __int64 v188; // [rsp+8h] [rbp-C0h]
  size_t v189; // [rsp+8h] [rbp-C0h]
  __int64 v190; // [rsp+8h] [rbp-C0h]
  size_t v191; // [rsp+8h] [rbp-C0h]
  __int64 v192; // [rsp+8h] [rbp-C0h]
  int v193[2]; // [rsp+10h] [rbp-B8h]
  int v194[2]; // [rsp+10h] [rbp-B8h]
  int v195[2]; // [rsp+10h] [rbp-B8h]
  int v196; // [rsp+10h] [rbp-B8h]
  int v197; // [rsp+10h] [rbp-B8h]
  int v198[2]; // [rsp+10h] [rbp-B8h]
  int v199[2]; // [rsp+18h] [rbp-B0h]
  int v200[2]; // [rsp+18h] [rbp-B0h]
  int v201[2]; // [rsp+18h] [rbp-B0h]
  int v202[2]; // [rsp+18h] [rbp-B0h]
  int v203; // [rsp+18h] [rbp-B0h]
  int v204[2]; // [rsp+20h] [rbp-A8h]
  int v205[2]; // [rsp+20h] [rbp-A8h]
  int v206[2]; // [rsp+20h] [rbp-A8h]
  char v207; // [rsp+28h] [rbp-A0h]
  __int64 v208; // [rsp+28h] [rbp-A0h]
  int v209; // [rsp+28h] [rbp-A0h]
  int v210; // [rsp+30h] [rbp-98h]
  unsigned int v211; // [rsp+34h] [rbp-94h]
  __int64 v213; // [rsp+38h] [rbp-90h]
  int v214[2]; // [rsp+40h] [rbp-88h]
  int v215[2]; // [rsp+40h] [rbp-88h]
  int v216[2]; // [rsp+40h] [rbp-88h]
  int v217[2]; // [rsp+40h] [rbp-88h]
  int v218; // [rsp+40h] [rbp-88h]
  void *v219; // [rsp+48h] [rbp-80h]
  __int64 v220; // [rsp+48h] [rbp-80h]
  size_t v221; // [rsp+48h] [rbp-80h]
  unsigned int v222; // [rsp+58h] [rbp-70h]
  __int64 v223[11]; // [rsp+70h] [rbp-58h] BYREF

  v207 = a3;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a3);
  v185 = v5;
  v6 = sub_62B230(*(_QWORD *)(a1 + 40), v5);
  v7 = *(_QWORD *)(v5 + 40);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = (__int64 *)v6;
  v10 = *(_QWORD *)(v7 + 16);
  v11 = *(_DWORD *)(v10 + 32);
  if ( !*(_DWORD *)(v8 + 28) )
  {
    v12 = *(_QWORD *)(a1 + 40);
    if ( !*(_DWORD *)(v8 + 32) )
      goto LABEL_19;
  }
  v13 = *(char **)(v8 + 16);
  v14 = *(unsigned int *)(v8 + 24);
  v15 = &v13[16 * v14];
  if ( v13 == v15 )
    goto LABEL_88;
  v16 = *(_QWORD *)(v8 + 16);
  v17 = 0;
  do
  {
    while ( *(_DWORD *)(v16 + 4) )
    {
      *(_DWORD *)(v16 + 4) = 0;
      v16 += 16;
      if ( v15 == (char *)v16 )
        goto LABEL_8;
    }
    v16 += 16;
    ++v17;
  }
  while ( v15 != (char *)v16 );
LABEL_8:
  if ( (unsigned int)v14 <= 0x10 || 3 * (int)v14 >= (unsigned int)(4 * v17) )
  {
LABEL_88:
    *(_QWORD *)(v8 + 28) = 0;
    v12 = v8;
    goto LABEL_19;
  }
  *(_QWORD *)v193 = v7;
  if ( !v13 )
  {
    v90 = (unsigned int)v14 >> 1;
    *(_QWORD *)(v8 + 16) = 0;
    *(_DWORD *)(v8 + 24) = v90;
    v19 = v90;
    v91 = sub_186B270(16LL * v90);
    v7 = *(_QWORD *)v193;
    v21 = (_QWORD *)v91;
    goto LABEL_13;
  }
  sub_186B220(v13);
  v18 = *(_DWORD *)(v8 + 24);
  *(_QWORD *)(v8 + 16) = 0;
  v19 = v18 >> 1;
  *(_DWORD *)(v8 + 24) = v19;
  v20 = (_QWORD *)sub_186B270(16LL * v19);
  v7 = *(_QWORD *)v193;
  v21 = v20;
  if ( v19 )
  {
    if ( v19 == 1 )
    {
LABEL_17:
      *v20 = 0;
      goto LABEL_18;
    }
LABEL_13:
    v22 = v21;
    do
    {
      *v22 = 0;
      v22 += 4;
      *(v22 - 2) = 0;
    }
    while ( &v21[4 * (v19 >> 1)] != v22 );
    if ( (v19 & 1) == 0 )
      goto LABEL_18;
    v20 = &v21[2 * (v19 & 0x7FFFFFFE)];
    goto LABEL_17;
  }
LABEL_18:
  v12 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(v8 + 16) = v21;
  *(_QWORD *)(v8 + 28) = 0;
LABEL_19:
  v23 = 0;
  *(_QWORD *)v194 = v7;
  sub_148BC40(v12 + 16, v7, 1);
  v24 = *(_QWORD *)v194;
  v194[0] = (_DWORD)v10 << 8;
  if ( !v11 )
    return 0;
  v25 = a1;
  v26 = v10;
  v27 = v11;
  *(_QWORD *)v199 = v24;
  v28 = v25;
  for ( i = v24 + 32; ; i += 8 )
  {
    if ( *(_WORD *)(*(_QWORD *)i + 4LL) == 1 )
    {
      v30 = *(unsigned int *)(*(_QWORD *)i + 16LL);
      v31 = *v9;
      v32 = (unsigned int)v30 >> 5;
      if ( (!*v9 || (unsigned int)v32 >= *(_DWORD *)(v31 - 4) || (*(_DWORD *)(v31 + 4 * v32) & (1 << v30)) == 0)
        && *(_DWORD *)sub_148B390(*(_QWORD *)(v28 + 40) + 16LL, v30) == 1 )
      {
        break;
      }
    }
LABEL_21:
    if ( ++v23 == v27 )
      return 0;
  }
  v33 = *(unsigned int *)(v28 + 96);
  v34 = *(_QWORD *)(v28 + 88);
  v35 = ((v194[0] ^ (v23 - v26) ^ (((_DWORD)v26 - (v194[0] ^ (v23 - (_DWORD)v26))) << 16))
       + (v194[0] ^ (v23 - v26))
       - v26)
      ^ (((_DWORD)v26 - (v194[0] ^ (v23 - (_DWORD)v26))) << 10);
  v36 = v33 - 1;
  v33 *= 24;
  v37 = v34 + v33;
  v38 = 24LL * (v35 & v36);
  v39 = v34 + v38;
  if ( v38 == v33 )
  {
LABEL_79:
    if ( v34 != v39 )
    {
      while ( 1 )
      {
        v87 = *(_DWORD *)(v34 + 4);
        if ( v87 == 2 )
        {
          if ( v35 == *(_DWORD *)v34 && v26 == *(_QWORD *)(v34 + 8) && *(_DWORD *)(v34 + 16) == v23 )
            goto LABEL_35;
        }
        else if ( !v87 )
        {
          goto LABEL_21;
        }
        v34 += 24;
        if ( v39 == v34 )
          goto LABEL_21;
      }
    }
    goto LABEL_21;
  }
  v40 = v34 + v38;
  while ( 1 )
  {
    v41 = *(_DWORD *)(v40 + 4);
    if ( v41 != 2 )
    {
      if ( !v41 )
        goto LABEL_21;
      goto LABEL_30;
    }
    if ( v35 == *(_DWORD *)v40 && v26 == *(_QWORD *)(v40 + 8) && *(_DWORD *)(v40 + 16) == v23 )
      break;
LABEL_30:
    v40 += 24;
    if ( v37 == v40 )
      goto LABEL_79;
  }
LABEL_35:
  v42 = v28;
  v43 = v27;
  v222 = 1;
  v44 = *(_QWORD *)v199;
  v45 = v42;
  if ( v43 == v23 )
    return 0;
  v46 = *(_QWORD *)(v42 + 120);
  v47 = *(unsigned int *)(v42 + 128);
  v48 = (v23 - v26) ^ ((_DWORD)v26 << 8);
  v49 = ((_DWORD)v26 - v48) << 10;
  v50 = v48 - v26 + (v48 ^ (((_DWORD)v26 - v48) << 16));
  v51 = v47 - 1;
  v47 *= 32;
  v52 = v50 ^ v49;
  v53 = v46 + v47;
  v54 = 32LL * (v52 & v51);
  v55 = v46 + v54;
  if ( v54 == v47 )
  {
LABEL_45:
    while ( v55 != v46 )
    {
      v58 = *(_DWORD *)(v46 + 4);
      if ( v58 == 2 )
      {
        if ( v52 == *(_DWORD *)v46 && v26 == *(_QWORD *)(v46 + 8) && *(_DWORD *)(v46 + 16) == v23 )
        {
          v56 = v46;
          goto LABEL_54;
        }
      }
      else if ( !v58 )
      {
        break;
      }
      v46 += 32;
    }
LABEL_303:
    BUG();
  }
  v56 = v46 + v54;
  while ( 1 )
  {
    v57 = *(_DWORD *)(v56 + 4);
    if ( v57 != 2 )
    {
      if ( !v57 )
        goto LABEL_303;
LABEL_39:
      v56 += 32;
      if ( v53 == v56 )
        goto LABEL_45;
      continue;
    }
    if ( v52 != *(_DWORD *)v56 || v26 != *(_QWORD *)(v56 + 8) )
      goto LABEL_39;
    if ( *(_DWORD *)(v56 + 16) == v23 )
      break;
    v56 += 32;
    if ( v53 == v56 )
      goto LABEL_45;
  }
LABEL_54:
  v59 = v43;
  v60 = 0;
  v61 = nullptr;
  *(_QWORD *)v214 = *(_QWORD *)(v56 + 24);
  while ( v23 == (_DWORD)v60 )
  {
LABEL_105:
    if ( ++v60 == v59 )
      goto LABEL_63;
  }
  v62 = *(_QWORD *)(v44 + 8 * v60 + 32);
  if ( v61 )
  {
    while ( 1 )
    {
      v68 = *((_DWORD *)v61 - 1);
      if ( v68 == *((_DWORD *)v61 - 2) )
        break;
      v61[v68] = v62;
      *((_DWORD *)v61 - 1) = v68 + 1;
      v67 = v60 + 1;
      if ( v59 == v60 + 1 )
        goto LABEL_63;
LABEL_59:
      if ( v23 == (_DWORD)v67 )
      {
        v60 += 2;
        if ( v60 == v59 )
          goto LABEL_63;
        if ( v23 == (_DWORD)v60 )
          goto LABEL_105;
        v62 = *(_QWORD *)(v44 + 8 * v60 + 32);
      }
      else
      {
        v62 = *(_QWORD *)(v44 + 8 * v67 + 32);
        v60 = v67;
      }
    }
    v92 = (3 * v68 + 1) >> 1;
    v93 = 8 * v92 + 8;
    if ( 8 * v68 + 8 >= (unsigned int)v93 || v68 >= v92 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v223, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v223);
      sub_233E40((__int64)v223);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    *(_QWORD *)v206 = v59;
    *(_QWORD *)v199 = v62;
    *(_QWORD *)v194 = v44;
    v94 = (unsigned int *)sub_186B300(v61 - 1, v93);
    v95 = v94[1];
    v61 = v94 + 2;
    v44 = *(_QWORD *)v194;
    *v94 = v92;
    v64 = *(_QWORD *)v199;
    v59 = *(_QWORD *)v206;
    LODWORD(v94) = v95;
    v65 = &v61[v95];
    v66 = (_DWORD)v94 + 1;
  }
  else
  {
    *(_QWORD *)v204 = v59;
    *(_QWORD *)v199 = *(_QWORD *)(v44 + 8 * v60 + 32);
    *(_QWORD *)v194 = v44;
    v63 = (_QWORD *)sub_186B270(0x18u);
    v44 = *(_QWORD *)v194;
    v64 = *(_QWORD *)v199;
    v61 = v63 + 1;
    v59 = *(_QWORD *)v204;
    v65 = v63 + 1;
    *v63 = 2;
    v66 = 1;
  }
  *v65 = v64;
  *((_DWORD *)v61 - 1) = v66;
  v67 = v60 + 1;
  if ( v59 != v60 + 1 )
    goto LABEL_59;
LABEL_63:
  v69 = sub_15DC610(
          *(_QWORD *)(v45 + 32),
          v214[0],
          v43 - 1,
          (int)v61,
          v44,
          v59,
          v183,
          v185,
          v194[0],
          v199[0],
          *(_QWORD *)(v45 + 32),
          v207,
          v210,
          a2,
          v214[0],
          v219);
  v70 = v69;
  if ( v69 )
    ++*(_DWORD *)(v69 + 8);
  *(_BYTE *)(v45 + 64) = 1;
  if ( !*(_DWORD *)(v186 + 56) && (unsigned __int8)sub_62A2E0(*(_QWORD *)(v45 + 24) + 656LL, v69) )
  {
    v132 = *(unsigned int *)(v45 + 152);
    v133 = 2 * v132;
    if ( 3 * (int)v132 < (unsigned int)(4 * (*(_DWORD *)(v45 + 156) + *(_DWORD *)(v45 + 160))) )
    {
      v169 = v133;
      v197 = 2 * v132;
      v186 = 8LL * v133;
      v170 = (_QWORD *)sub_186B270(v186);
      v171 = v197;
      v135 = v186;
      v134 = v170;
      if ( v197 )
      {
        memset(v170, 0, 8 * v169);
        v135 = v186;
        v171 = v197;
      }
      v172 = *(char **)(v45 + 144);
      v136 = v171 - 1;
      v137 = (_QWORD *)((char *)v134 + v135);
      v71 = &v172[8 * *(unsigned int *)(v45 + 152)];
      if ( v172 != v71 )
      {
        do
        {
          if ( *(_QWORD *)v172 > 1u )
          {
            v173 = 8LL * (*(_DWORD *)(*(_QWORD *)v172 + 12LL) & v136);
            v174 = &v134[(unsigned __int64)v173 / 8];
            if ( v135 == v173 )
            {
LABEL_257:
              if ( v134 == v174 )
              {
LABEL_287:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v175 = v134;
              while ( *v175 )
              {
                if ( v174 == ++v175 )
                  goto LABEL_287;
              }
            }
            else
            {
              v175 = &v134[(unsigned __int64)v173 / 8];
              while ( *v175 )
              {
                if ( v137 == ++v175 )
                  goto LABEL_257;
              }
            }
            *v175 = *(_QWORD *)v172;
          }
          v172 += 8;
        }
        while ( v71 != v172 );
        v71 = *(char **)(v45 + 144);
      }
      if ( v71 )
      {
        v203 = v171;
        *(_QWORD *)v198 = v135;
        LODWORD(v186) = v171 - 1;
        sub_186B220(v71);
        v171 = v203;
        v135 = *(_QWORD *)v198;
        v136 = v186;
      }
      *(_QWORD *)(v45 + 144) = v134;
      *(_DWORD *)(v45 + 152) = v171;
      *(_DWORD *)(v45 + 160) = 0;
    }
    else
    {
      v134 = *(_QWORD **)(v45 + 144);
      v135 = 8 * v132;
      v136 = v132 - 1;
      v137 = &v134[v132];
    }
    v138 = *(_DWORD *)(*(_QWORD *)v215 + 12LL);
    v139 = 8LL * (v138 & v136);
    v140 = &v134[(unsigned __int64)v139 / 8];
    if ( v139 == v135 )
    {
      v142 = nullptr;
    }
    else
    {
      v141 = &v134[(unsigned __int64)v139 / 8];
      v142 = nullptr;
      do
      {
        v143 = *v141;
        if ( *v141 > 1u )
        {
          if ( *(_DWORD *)(v143 + 12) == v138 && *(_QWORD *)v215 == v143 )
          {
            *v141 = *(_QWORD *)v215;
            goto LABEL_208;
          }
        }
        else
        {
          if ( !v143 )
          {
            if ( !v142 )
            {
              v142 = v141;
              goto LABEL_283;
            }
            goto LABEL_282;
          }
          v142 = v141;
        }
        ++v141;
      }
      while ( v141 != v137 );
    }
    if ( v140 == v134 )
    {
LABEL_207:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    LODWORD(v143) = v215[0];
    while ( 1 )
    {
      v144 = *v134;
      if ( *v134 > 1u )
      {
        if ( *(_DWORD *)(v144 + 12) == v138 && *(_QWORD *)v215 == v144 )
        {
          *v134 = *(_QWORD *)v215;
LABEL_208:
          sub_654AB0(*(_QWORD *)(v45 + 24), v70, v143, (_DWORD)v142, v215[0], (_DWORD)v71, v184, v186);
          v145 = *(_DWORD *)(v45 + 176);
          v146 = *(_DWORD *)(v45 + 184);
          v147 = 2 * v145;
          v148 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 56) + 8 * v208) + 40LL) + 16LL);
          if ( 3 * v145 < 4 * (v146 + *(_DWORD *)(v45 + 180)) )
          {
            v160 = v147;
            *(_QWORD *)v201 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 56) + 8 * v208) + 40LL) + 16LL);
            v196 = 2 * v145;
            v191 = 16LL * v147;
            v161 = (__m128i *)sub_186B270(v191);
            v162 = v196;
            v151 = v191;
            v149 = v161;
            v148 = *(_QWORD *)v201;
            v163 = &v161[v160];
            if ( v196 )
            {
              do
              {
                v161->m128i_i64[0] = 0;
                ++v161;
                v161[-1].m128i_i32[2] = 0;
              }
              while ( v161 != v163 );
            }
            v164 = *(const __m128i **)(v45 + 168);
            v150 = v196 - 1;
            v152 = &v149[v191 / 0x10];
            v165 = (__m128i *)&v164[*(unsigned int *)(v45 + 176)];
            if ( v164 != v165 )
            {
              do
              {
                if ( v164->m128i_i64[0] > 1uLL )
                {
                  v166 = 16LL * (*(_DWORD *)(v164->m128i_i64[0] + 12) & (unsigned int)v150);
                  v167 = &v149[(unsigned __int64)v166 / 0x10];
                  if ( v191 == v166 )
                  {
LABEL_237:
                    if ( v149 == v167 )
                    {
LABEL_284:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v168 = v149;
                    while ( v168->m128i_i64[0] )
                    {
                      if ( v167 == ++v168 )
                        goto LABEL_284;
                    }
                  }
                  else
                  {
                    v168 = &v149[(unsigned __int64)v166 / 0x10];
                    while ( v168->m128i_i64[0] )
                    {
                      if ( v152 == ++v168 )
                        goto LABEL_237;
                    }
                  }
                  *v168 = _mm_loadu_si128(v164);
                }
                ++v164;
              }
              while ( v165 != v164 );
              v165 = *(__m128i **)(v45 + 168);
            }
            if ( v165 )
            {
              *(_QWORD *)v202 = v191;
              v192 = v148;
              sub_186B220(v165);
              v162 = v196;
              v151 = *(_QWORD *)v202;
              v150 = v196 - 1;
              v148 = v192;
            }
            *(_QWORD *)(v45 + 168) = v149;
            v146 = 0;
            *(_DWORD *)(v45 + 176) = v162;
            *(_DWORD *)(v45 + 184) = 0;
          }
          else
          {
            v149 = *(__m128i **)(v45 + 168);
            v150 = v145 - 1;
            v151 = 16LL * v145;
            v152 = (__m128i *)((char *)v149 + v151);
          }
          v153 = *(_DWORD *)(v148 + 12);
          v154 = 16LL * (v153 & (unsigned int)v150);
          v155 = &v149[(unsigned __int64)v154 / 0x10];
          if ( v154 != v151 )
          {
            v156 = &v149[(unsigned __int64)v154 / 0x10];
            v157 = nullptr;
            while ( 1 )
            {
              v158 = v156->m128i_i64[0];
              if ( v156->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v158 + 12) == v153 && v148 == v158 )
                {
                  v157 = (__int64 *)v156;
                  goto LABEL_271;
                }
              }
              else
              {
                if ( !v158 )
                {
                  if ( v157 )
                    goto LABEL_269;
                  v157 = (__int64 *)v156;
                  goto LABEL_270;
                }
                v157 = (__int64 *)v156;
              }
              if ( ++v156 == v152 )
                goto LABEL_221;
            }
          }
          v157 = nullptr;
          while ( 1 )
          {
LABEL_221:
            if ( v155 == v149 )
            {
              sub_1872CE0("");
              sub_1873130(114, 461);
            }
            v159 = v149->m128i_i64[0];
            if ( v149->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v159 + 12) == v153 && v148 == v159 )
              {
                v157 = (__int64 *)v149;
LABEL_271:
                v176 = *(_QWORD *)(v45 + 56);
                --*((_DWORD *)v157 + 2);
                if ( v176 )
                {
                  v177 = *(unsigned int *)(v176 - 4);
                  v178 = (unsigned int)(v177 - 1);
                  v179 = 8 * v178;
                  v180 = (__int64 *)(v176 + 8 * v178);
                  if ( v211 < (unsigned int)v178 )
                  {
                    v181 = *v180;
                    goto LABEL_274;
                  }
LABEL_276:
                  v182 = v176 + 8 * v177;
                  if ( (unsigned __int64)v180 >= v182 )
                    goto LABEL_279;
                  do
                    sub_62A410(*(_QWORD *)(v45 + 48), *v180++);
                  while ( (unsigned __int64)v180 < v182 );
                  v176 = *(_QWORD *)(v45 + 56);
                  if ( v176 )
LABEL_279:
                    *(_DWORD *)(v176 - 4) = v178;
                }
                else if ( v211 != -1 )
                {
                  v179 = 0x7FFFFFFF8LL;
                  LODWORD(v178) = -1;
                  v181 = MEMORY[0x7FFFFFFF8];
LABEL_274:
                  sub_62A000(*(_QWORD *)(v45 + 48), v181);
                  sub_62A410(*(_QWORD *)(v45 + 48), *(_QWORD *)(*(_QWORD *)(v45 + 56) + 8 * v208));
                  v176 = *(_QWORD *)(v45 + 56);
                  *(_QWORD *)(v176 + 8 * v208) = v181;
                  if ( v176 )
                  {
                    v177 = *(unsigned int *)(v176 - 4);
                    v180 = (__int64 *)(v176 + v179);
                    goto LABEL_276;
                  }
                }
                v222 = -1;
                goto LABEL_127;
              }
            }
            else
            {
              if ( !v159 )
              {
                if ( v157 )
LABEL_269:
                  *(_DWORD *)(v45 + 184) = v146 - 1;
                else
                  v157 = (__int64 *)v149;
LABEL_270:
                *v157 = v148;
                *((_DWORD *)v157 + 2) = 0;
                ++*(_DWORD *)(v45 + 180);
                goto LABEL_271;
              }
              v157 = (__int64 *)v149;
            }
            ++v149;
          }
        }
      }
      else
      {
        if ( !v144 )
        {
          if ( !v142 )
          {
            v142 = v134;
            goto LABEL_283;
          }
LABEL_282:
          --*(_DWORD *)(v45 + 160);
LABEL_283:
          *v142 = *(_QWORD *)v215;
          ++*(_DWORD *)(v45 + 156);
          goto LABEL_208;
        }
        v142 = v134;
      }
      if ( v140 == ++v134 )
        goto LABEL_207;
    }
  }
  *(_QWORD *)v200 = *(_QWORD *)(v45 + 24) + 656LL;
  v72 = sub_62A1F0(*(_QWORD *)v200, v186, v70, v186 + 72);
  *(_QWORD *)v195 = v72;
  if ( v72 )
    sub_62A000(*(_QWORD *)v200, v72);
  sub_629AF0(*(_QWORD *)v195, *(_QWORD *)(v45 + 24));
  v73 = *(unsigned int *)(v45 + 176);
  v74 = *(_DWORD *)(v45 + 184);
  v75 = 2 * v73;
  v76 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 56) + 8 * v208) + 40LL) + 16LL);
  if ( 3 * (int)v73 < (unsigned int)(4 * (v74 + *(_DWORD *)(v45 + 180))) )
  {
    v122 = v75;
    v220 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 56) + 8 * v208) + 40LL) + 16LL);
    v218 = 2 * v73;
    v189 = 16LL * v75;
    v123 = (__m128i *)sub_186B270(v189);
    v124 = v218;
    v79 = v189;
    v77 = v123;
    v76 = v220;
    v125 = &v123[v122];
    if ( v218 )
    {
      do
      {
        v123->m128i_i64[0] = 0;
        ++v123;
        v123[-1].m128i_i32[2] = 0;
      }
      while ( v123 != v125 );
    }
    v126 = *(const __m128i **)(v45 + 168);
    v78 = v218 - 1;
    v80 = &v77[v189 / 0x10];
    v127 = (__m128i *)&v126[*(unsigned int *)(v45 + 176)];
    if ( v126 != v127 )
    {
      do
      {
        while ( v126->m128i_i64[0] <= 1uLL )
        {
          if ( v127 == ++v126 )
            goto LABEL_163;
        }
        v128 = 16LL * (*(_DWORD *)(v126->m128i_i64[0] + 12) & v78);
        v129 = &v77[(unsigned __int64)v128 / 0x10];
        if ( v189 == v128 )
        {
LABEL_167:
          if ( v77 == v129 )
          {
LABEL_189:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v130 = v77;
          while ( v130->m128i_i64[0] )
          {
            if ( v129 == ++v130 )
              goto LABEL_189;
          }
        }
        else
        {
          v130 = &v77[(unsigned __int64)v128 / 0x10];
          while ( v130->m128i_i64[0] )
          {
            if ( v80 == ++v130 )
              goto LABEL_167;
          }
        }
        v131 = _mm_loadu_si128(v126++);
        *v130 = v131;
      }
      while ( v127 != v126 );
LABEL_163:
      v127 = *(__m128i **)(v45 + 168);
    }
    if ( v127 )
    {
      v221 = v189;
      v190 = v76;
      sub_186B220(v127);
      v124 = v218;
      v79 = v221;
      v78 = v218 - 1;
      v76 = v190;
    }
    *(_QWORD *)(v45 + 168) = v77;
    v74 = 0;
    *(_DWORD *)(v45 + 176) = v124;
    *(_DWORD *)(v45 + 184) = 0;
  }
  else
  {
    v77 = *(__m128i **)(v45 + 168);
    v78 = v73 - 1;
    v79 = 16 * v73;
    v80 = (__m128i *)((char *)v77 + v79);
  }
  v81 = *(_DWORD *)(v76 + 12);
  v82 = 16LL * (v81 & v78);
  v83 = &v77[(unsigned __int64)v82 / 0x10];
  if ( v82 != v79 )
  {
    v84 = &v77[(unsigned __int64)v82 / 0x10];
    v85 = nullptr;
    while ( 1 )
    {
      v86 = v84->m128i_i64[0];
      if ( v84->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v86 + 12) == v81 && v76 == v86 )
        {
          v85 = (__int64 *)v84;
          goto LABEL_108;
        }
      }
      else
      {
        if ( !v86 )
        {
          if ( v85 )
            goto LABEL_176;
          v85 = (__int64 *)v84;
          goto LABEL_177;
        }
        v85 = (__int64 *)v84;
      }
      if ( ++v84 == v80 )
        goto LABEL_94;
    }
  }
  v85 = nullptr;
LABEL_94:
  while ( 2 )
  {
    if ( v83 == v77 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v89 = v77->m128i_i64[0];
    if ( v77->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v89 + 12) == v81 && v76 == v89 )
      {
        v85 = (__int64 *)v77;
        goto LABEL_108;
      }
      goto LABEL_93;
    }
    if ( v89 )
    {
      v85 = (__int64 *)v77;
LABEL_93:
      ++v77;
      continue;
    }
    break;
  }
  if ( v85 )
LABEL_176:
    *(_DWORD *)(v45 + 184) = v74 - 1;
  else
    v85 = (__int64 *)v77;
LABEL_177:
  *v85 = v76;
  *((_DWORD *)v85 + 2) = 0;
  ++*(_DWORD *)(v45 + 180);
LABEL_108:
  --*((_DWORD *)v85 + 2);
  sub_62A000(*(_QWORD *)(v45 + 48), *(_QWORD *)v195);
  sub_62A410(*(_QWORD *)(v45 + 48), *(_QWORD *)(*(_QWORD *)(v45 + 56) + 8 * v208));
  v96 = *(unsigned int *)(v45 + 176);
  v97 = *(_DWORD *)(v45 + 184);
  *(_QWORD *)(*(_QWORD *)(v45 + 56) + 8 * v208) = *(_QWORD *)v195;
  v98 = 2 * v96;
  v99 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v195 + 40LL) + 16LL);
  if ( 3 * (int)v96 < (unsigned int)(4 * (v97 + *(_DWORD *)(v45 + 180))) )
  {
    v112 = v98;
    *(_QWORD *)v216 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v195 + 40LL) + 16LL);
    v209 = 2 * v96;
    v187 = 16LL * v98;
    v113 = (__m128i *)sub_186B270(v187);
    v114 = v209;
    v102 = v187;
    v100 = v113;
    v99 = *(_QWORD *)v216;
    v115 = &v113[v112];
    if ( v209 )
    {
      do
      {
        v113->m128i_i64[0] = 0;
        ++v113;
        v113[-1].m128i_i32[2] = 0;
      }
      while ( v113 != v115 );
    }
    v116 = *(const __m128i **)(v45 + 168);
    v101 = v209 - 1;
    v103 = &v100[v187 / 0x10];
    v117 = (__m128i *)&v116[*(unsigned int *)(v45 + 176)];
    if ( v116 != v117 )
    {
      do
      {
        while ( v116->m128i_i64[0] <= 1uLL )
        {
          if ( v117 == ++v116 )
            goto LABEL_143;
        }
        v118 = 16LL * (*(_DWORD *)(v116->m128i_i64[0] + 12) & v101);
        v119 = &v100[(unsigned __int64)v118 / 0x10];
        if ( v187 == v118 )
        {
LABEL_147:
          if ( v100 == v119 )
          {
LABEL_188:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v120 = v100;
          while ( v120->m128i_i64[0] )
          {
            if ( v119 == ++v120 )
              goto LABEL_188;
          }
        }
        else
        {
          v120 = &v100[(unsigned __int64)v118 / 0x10];
          while ( v120->m128i_i64[0] )
          {
            if ( v103 == ++v120 )
              goto LABEL_147;
          }
        }
        v121 = _mm_loadu_si128(v116++);
        *v120 = v121;
      }
      while ( v117 != v116 );
LABEL_143:
      v117 = *(__m128i **)(v45 + 168);
    }
    if ( v117 )
    {
      *(_QWORD *)v217 = v187;
      v188 = v99;
      sub_186B220(v117);
      v114 = v209;
      v102 = *(_QWORD *)v217;
      v101 = v209 - 1;
      v99 = v188;
    }
    *(_QWORD *)(v45 + 168) = v100;
    v97 = 0;
    *(_DWORD *)(v45 + 176) = v114;
    *(_DWORD *)(v45 + 184) = 0;
  }
  else
  {
    v100 = *(__m128i **)(v45 + 168);
    v101 = v96 - 1;
    v102 = 16 * v96;
    v103 = (__m128i *)((char *)v100 + v102);
  }
  v104 = *(_DWORD *)(v99 + 12);
  v105 = 16LL * (v104 & v101);
  v106 = &v100[(unsigned __int64)v105 / 0x10];
  if ( v105 != v102 )
  {
    v107 = &v100[(unsigned __int64)v105 / 0x10];
    v108 = nullptr;
    while ( 1 )
    {
      v109 = v107->m128i_i64[0];
      if ( v107->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v109 + 12) == v104 && v99 == v109 )
        {
          v108 = (__int64 *)v107;
          goto LABEL_126;
        }
      }
      else
      {
        if ( !v109 )
        {
          if ( v108 )
            goto LABEL_173;
          v108 = (__int64 *)v107;
          goto LABEL_174;
        }
        v108 = (__int64 *)v107;
      }
      if ( ++v107 == v103 )
        goto LABEL_121;
    }
  }
  v108 = nullptr;
LABEL_121:
  while ( 2 )
  {
    if ( v106 == v100 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v110 = v100->m128i_i64[0];
    if ( v100->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v110 + 12) == v104 && v99 == v110 )
      {
        v108 = (__int64 *)v100;
        goto LABEL_126;
      }
      goto LABEL_120;
    }
    if ( v110 )
    {
      v108 = (__int64 *)v100;
LABEL_120:
      ++v100;
      continue;
    }
    break;
  }
  if ( v108 )
LABEL_173:
    *(_DWORD *)(v45 + 184) = v97 - 1;
  else
    v108 = (__int64 *)v100;
LABEL_174:
  *v108 = v99;
  *((_DWORD *)v108 + 2) = 0;
  ++*(_DWORD *)(v45 + 180);
LABEL_126:
  ++*((_DWORD *)v108 + 2);
  sub_5E0CF0(v45, v213, v211);
  sub_62A410(*(_QWORD *)v200, *(_QWORD *)v195);
LABEL_127:
  if ( v70 )
  {
    if ( (*(_DWORD *)(v70 + 8))-- == 1 )
      sub_15D7BC0(*(_QWORD *)v205, v70);
  }
  if ( v61 )
    sub_186B220(v61 - 1);
  return v222;
}

