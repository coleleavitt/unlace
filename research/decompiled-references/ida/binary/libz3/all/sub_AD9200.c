__int64 __fastcall sub_AD9200(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rax
  __int64 v3; // r10
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  _DWORD *v7; // r12
  int v8; // ecx
  __int64 v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rdi
  _QWORD *i; // rax
  _DWORD *v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // edx
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  _QWORD *v21; // r8
  _QWORD *k; // rax
  _DWORD *v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rax
  char *v26; // rdi
  int v27; // esi
  __int64 v28; // rdx
  char *v29; // rax
  char *v30; // rcx
  __int64 v31; // r10
  unsigned int v32; // r15d
  size_t v33; // rbx
  _OWORD *v34; // rax
  _OWORD *v35; // rcx
  _OWORD *v36; // rdx
  char *v37; // rdi
  int v38; // esi
  __int64 v39; // rdx
  char *v40; // rax
  char *v41; // rcx
  __int64 v42; // r10
  unsigned int v43; // r15d
  size_t v44; // rbx
  _OWORD *v45; // rax
  _OWORD *v46; // rcx
  _OWORD *v47; // rdx
  _QWORD *v48; // rbx
  _QWORD *v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rdi
  bool v52; // zf
  __int64 v53; // rax
  __int64 *v54; // rbx
  __int64 *m; // r12
  __int64 v56; // r15
  _QWORD *v57; // rax
  unsigned int v58; // edx
  __int64 v59; // rcx
  int v60; // edx
  _QWORD *v61; // rcx
  __int64 v62; // r10
  __int64 v63; // rax
  __int64 *v64; // rsi
  __int64 *v65; // rbx
  __int64 *v66; // r15
  __int64 v67; // r12
  int *v68; // rax
  int v69; // eax
  __int64 v70; // rdi
  __int64 v71; // rsi
  char v72; // al
  __int64 *v73; // r13
  __int64 v74; // r15
  __int64 v75; // rax
  __int64 v76; // rdx
  unsigned int v77; // eax
  int v78; // eax
  unsigned int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r14
  __int64 *v83; // rbx
  __int64 *v84; // r12
  __int64 (__fastcall *v85)(_QWORD *, unsigned __int64, int); // rax
  __int64 v86; // rax
  __int64 *v87; // rcx
  int v88; // edi
  unsigned int v89; // edx
  __int64 *v90; // rsi
  __int64 v91; // rdx
  __int64 *v92; // r8
  __int64 *v93; // rax
  __int64 v94; // rdx
  void *v95; // r15
  __int64 v96; // rax
  __int64 v97; // rdi
  char v98; // al
  __int64 v99; // rdi
  __int64 v100; // r10
  _DWORD *v101; // rsi
  __int64 v102; // rdi
  _QWORD *j; // rax
  _DWORD *v104; // rdx
  _DWORD *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  _DWORD *v108; // r13
  __int64 v109; // rax
  int v110; // edi
  _QWORD *v111; // rcx
  unsigned int v112; // edx
  _QWORD *v113; // rsi
  __int64 v114; // rdx
  _QWORD *v115; // r8
  _QWORD *n; // rax
  _DWORD *v117; // rdx
  __int64 *v118; // rax
  _DWORD *v119; // rax
  _DWORD *v120; // rsi
  __int64 v121; // rdi
  __int64 v122; // r8
  __int64 v123; // r9
  char *v124; // rdx
  int v125; // esi
  unsigned int v126; // r15d
  char *v127; // rcx
  __int64 v128; // r15
  char *v129; // rdi
  char *v130; // rax
  __int64 v131; // r9
  __int64 v132; // rax
  __int64 v133; // r14
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 (__fastcall *v136)(__int64, unsigned __int64, int); // rcx
  __int64 v137; // rax
  __int64 v138; // rdx
  unsigned __int64 v139; // rsi
  __int64 v140; // rax
  int v141; // edx
  int v142; // ecx
  int v143; // r8d
  int v144; // r9d
  int *v145; // r12
  int *v146; // r14
  _DWORD *v147; // rdx
  __int64 v148; // rax
  __int64 result; // rax
  unsigned int v150; // r13d
  unsigned int v151; // ecx
  unsigned int *v152; // rdx
  __int64 v153; // rcx
  size_t v154; // rdx
  size_t v155; // rdx
  _QWORD *v156; // rax
  unsigned int v157; // eax
  char **exception; // r15
  int v159; // [rsp-8h] [rbp-148h]
  int v160; // [rsp+0h] [rbp-140h]
  int v161; // [rsp+0h] [rbp-140h]
  unsigned int v162; // [rsp+4h] [rbp-13Ch]
  void **v163; // [rsp+8h] [rbp-138h]
  _QWORD *ptr; // [rsp+10h] [rbp-130h]
  __int64 v165; // [rsp+18h] [rbp-128h]
  int v166; // [rsp+18h] [rbp-128h]
  int *v167; // [rsp+20h] [rbp-120h]
  __int64 v168; // [rsp+20h] [rbp-120h]
  __int64 v169; // [rsp+20h] [rbp-120h]
  _QWORD *v170; // [rsp+28h] [rbp-118h]
  __int64 v171; // [rsp+30h] [rbp-110h]
  unsigned int v172; // [rsp+30h] [rbp-110h]
  __int64 v173; // [rsp+30h] [rbp-110h]
  __m128i v174; // [rsp+38h] [rbp-108h] BYREF
  int v175[2]; // [rsp+48h] [rbp-F8h] BYREF
  _DWORD *v176; // [rsp+50h] [rbp-F0h] BYREF
  __int64 v177; // [rsp+58h] [rbp-E8h]
  _QWORD *v178; // [rsp+60h] [rbp-E0h] BYREF
  unsigned int v179; // [rsp+68h] [rbp-D8h]
  __int64 v180; // [rsp+6Ch] [rbp-D4h]
  int v181; // [rsp+78h] [rbp-C8h]
  void *v182[2]; // [rsp+80h] [rbp-C0h] BYREF
  int v183[6]; // [rsp+90h] [rbp-B0h] BYREF
  void *v184; // [rsp+A8h] [rbp-98h]
  int v185; // [rsp+B0h] [rbp-90h]
  __int64 v186; // [rsp+B8h] [rbp-88h]

  v174.m128i_i64[0] = a1;
  sub_AD5C60(a1);
  *(_QWORD *)(a1 + 272) = a2;
  v2 = (_OWORD *)sub_186B270(0x40u);
  v3 = v174.m128i_i64[0];
  v180 = 0;
  ptr = v2;
  *v2 = 0;
  v4 = *(_QWORD *)(v3 + 128);
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v5 = v4 + 32LL * *(unsigned int *)(v3 + 136);
  if ( v4 == v5 )
  {
LABEL_224:
    v162 = 8;
  }
  else
  {
    while ( *(_DWORD *)(v4 + 4) != 2 )
    {
      v4 += 32;
      if ( v5 == v4 )
        goto LABEL_224;
    }
    v162 = 8;
    v6 = v5;
    if ( v5 != v4 )
    {
      do
      {
        v7 = *(_DWORD **)(v4 + 8);
        v8 = v7[3];
        v9 = 8LL * v162;
        v10 = &ptr[(unsigned __int64)v9 / 8];
        v11 = 8LL * (v8 & (v162 - 1));
        v12 = &ptr[(unsigned __int64)v11 / 8];
        if ( v11 != v9 )
        {
          for ( i = &ptr[(unsigned __int64)v11 / 8]; v10 != i; ++i )
          {
            v14 = (_DWORD *)*i;
            if ( *i > 1u )
            {
              if ( v14[3] == v8 && v7 == v14 )
                goto LABEL_23;
            }
            else if ( !v14 )
            {
              goto LABEL_13;
            }
          }
        }
        for ( j = ptr; v12 != j; ++j )
        {
          v104 = (_DWORD *)*j;
          if ( *j > 1u )
          {
            if ( v104[3] == v8 && v7 == v104 )
              goto LABEL_23;
          }
          else if ( !v104 )
          {
            break;
          }
        }
LABEL_13:
        v15 = *(_QWORD *)(v3 + 192);
        v16 = *(_QWORD **)(v15 + 48);
        v17 = *(unsigned int *)(v15 + 56);
        v18 = v17 - 1;
        v17 *= 16;
        v19 = (_QWORD *)((char *)v16 + v17);
        v20 = 16LL * (v8 & v18);
        v21 = &v16[(unsigned __int64)v20 / 8];
        if ( v20 != v17 )
        {
          for ( k = &v16[(unsigned __int64)v20 / 8]; v19 != k; k += 2 )
          {
            v23 = (_DWORD *)*k;
            if ( *k > 1u )
            {
              if ( v23[3] == v8 && v7 == v23 )
              {
LABEL_226:
                v24 = k[1];
                if ( !v24 )
                  goto LABEL_20;
                goto LABEL_21;
              }
            }
            else if ( !v23 )
            {
              goto LABEL_20;
            }
          }
        }
        for ( ; v21 != v16; v16 += 2 )
        {
          v105 = (_DWORD *)*v16;
          if ( *v16 > 1u )
          {
            if ( v105[3] == v8 && v7 == v105 )
            {
              k = v16;
              goto LABEL_226;
            }
          }
          else if ( !v105 )
          {
            break;
          }
        }
LABEL_20:
        v174.m128i_i64[0] = v3;
        v24 = sub_186B270(0x38u);
        sub_13478B0(v24, *(_QWORD *)(v174.m128i_i64[0] + 8), (unsigned int)v7[8]);
        sub_135F980(*(_QWORD *)(v174.m128i_i64[0] + 192), v7, v24);
        v3 = v174.m128i_i64[0];
LABEL_21:
        if ( !*(_QWORD *)(v24 + 24) )
        {
          v174.m128i_i64[0] = v3;
          v182[0] = v7;
          v178 = ptr;
          v179 = v162;
          sub_656920((__int64)&v178, (__int64 **)v182);
          v3 = v174.m128i_i64[0];
          ptr = v178;
          v162 = v179;
        }
LABEL_23:
        v25 = v4 + 32;
        if ( v6 == v4 + 32 )
          break;
        while ( 1 )
        {
          v4 = v25;
          if ( *(_DWORD *)(v25 + 4) == 2 )
            break;
          v25 += 32;
          if ( v6 == v25 )
            goto LABEL_28;
        }
      }
      while ( v6 != v25 );
    }
  }
LABEL_28:
  if ( *(_DWORD *)(v3 + 212) || *(_DWORD *)(v3 + 216) )
  {
    v26 = *(char **)(v3 + 200);
    v27 = 0;
    v28 = *(unsigned int *)(v3 + 208);
    v29 = v26;
    v30 = &v26[16 * v28];
    if ( v26 == v30 )
      goto LABEL_43;
    do
    {
      while ( *(_QWORD *)v29 )
      {
        *(_QWORD *)v29 = 0;
        v29 += 16;
        if ( v30 == v29 )
          goto LABEL_35;
      }
      v29 += 16;
      ++v27;
    }
    while ( v30 != v29 );
LABEL_35:
    if ( (unsigned int)v28 <= 0x10 || 3 * (int)v28 >= (unsigned int)(4 * v27) )
      goto LABEL_43;
    if ( v26 )
    {
      v174.m128i_i64[0] = v3;
      sub_186B220(v26);
      v31 = v174.m128i_i64[0];
      v32 = *(_DWORD *)(v174.m128i_i64[0] + 208);
      *(_QWORD *)(v174.m128i_i64[0] + 200) = 0;
      v32 >>= 1;
      *(_DWORD *)(v31 + 208) = v32;
      v33 = v32;
      v34 = (_OWORD *)sub_186B270(v33 * 16);
      v3 = v174.m128i_i64[0];
      if ( !v32 )
      {
LABEL_42:
        *(_QWORD *)(v3 + 200) = v34;
LABEL_43:
        *(_QWORD *)(v3 + 212) = 0;
        goto LABEL_44;
      }
    }
    else
    {
      v155 = (unsigned int)v28 >> 1;
      v174.m128i_i64[0] = v3;
      *(_DWORD *)(v3 + 208) = v155;
      *(_QWORD *)(v3 + 200) = 0;
      v33 = v155;
      v34 = (_OWORD *)sub_186B270(16 * v155);
      v3 = v174.m128i_i64[0];
    }
    v35 = &v34[v33];
    v36 = v34;
    if ( ((v33 * 16) & 0x10) == 0 || (v36 = v34 + 1, *v34 = 0, v34 + 1 != v35) )
    {
      do
      {
        *v36 = 0;
        v36 += 2;
        *(v36 - 1) = 0;
      }
      while ( v36 != v35 );
    }
    goto LABEL_42;
  }
LABEL_44:
  if ( *(_DWORD *)(v3 + 236) || *(_DWORD *)(v3 + 240) )
  {
    v37 = *(char **)(v3 + 224);
    v38 = 0;
    v39 = *(unsigned int *)(v3 + 232);
    v40 = v37;
    v41 = &v37[16 * v39];
    if ( v37 == v41 )
      goto LABEL_59;
    do
    {
      while ( *(_QWORD *)v40 )
      {
        *(_QWORD *)v40 = 0;
        v40 += 16;
        if ( v41 == v40 )
          goto LABEL_51;
      }
      v40 += 16;
      ++v38;
    }
    while ( v41 != v40 );
LABEL_51:
    if ( (unsigned int)v39 <= 0x10 || 3 * (int)v39 >= (unsigned int)(4 * v38) )
      goto LABEL_59;
    if ( v37 )
    {
      v174.m128i_i64[0] = v3;
      sub_186B220(v37);
      v42 = v174.m128i_i64[0];
      v43 = *(_DWORD *)(v174.m128i_i64[0] + 232);
      *(_QWORD *)(v174.m128i_i64[0] + 224) = 0;
      v43 >>= 1;
      *(_DWORD *)(v42 + 232) = v43;
      v44 = v43;
      v45 = (_OWORD *)sub_186B270(v44 * 16);
      v3 = v174.m128i_i64[0];
      if ( !v43 )
      {
LABEL_58:
        *(_QWORD *)(v3 + 224) = v45;
LABEL_59:
        *(_QWORD *)(v3 + 236) = 0;
        goto LABEL_60;
      }
    }
    else
    {
      v154 = (unsigned int)v39 >> 1;
      v174.m128i_i64[0] = v3;
      *(_DWORD *)(v3 + 232) = v154;
      *(_QWORD *)(v3 + 224) = 0;
      v44 = v154;
      v45 = (_OWORD *)sub_186B270(16 * v154);
      v3 = v174.m128i_i64[0];
    }
    v46 = &v45[v44];
    v47 = v45;
    if ( ((v44 * 16) & 0x10) == 0 || (v47 = v45 + 1, *v45 = 0, v46 != v45 + 1) )
    {
      do
      {
        *v47 = 0;
        v47 += 2;
        *(v47 - 1) = 0;
      }
      while ( v46 != v47 );
    }
    goto LABEL_58;
  }
LABEL_60:
  v48 = *(_QWORD **)(v3 + 256);
  if ( v48 )
  {
    v49 = &v48[*((unsigned int *)v48 - 1)];
    if ( v48 >= v49 )
      goto LABEL_68;
    do
    {
      while ( 1 )
      {
        v50 = *v48;
        if ( *v48 )
        {
          v51 = *(_QWORD *)(v3 + 248);
          v52 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v52 )
            break;
        }
        if ( ++v48 >= v49 )
          goto LABEL_67;
      }
      v174.m128i_i64[0] = v3;
      sub_15D7BC0(v51, v50);
      ++v48;
      v3 = v174.m128i_i64[0];
    }
    while ( v48 < v49 );
LABEL_67:
    v48 = *(_QWORD **)(v3 + 256);
    if ( v48 )
LABEL_68:
      *((_DWORD *)v48 - 1) = 0;
  }
  v53 = *(_QWORD *)(v3 + 264);
  if ( v53 )
    *(_DWORD *)(v53 - 4) = 0;
  v54 = *(__int64 **)(v3 + 72);
  if ( v54 )
  {
    for ( m = &v54[*((unsigned int *)v54 - 1)]; m != v54; *((_DWORD *)v57 - 1) = v60 )
    {
      while ( 1 )
      {
        v56 = *v54;
        if ( !*(_QWORD *)(*v54 + 8) )
          break;
        if ( m == ++v54 )
          goto LABEL_80;
      }
      v57 = *(_QWORD **)(v3 + 264);
      if ( v57 )
      {
        v58 = *((_DWORD *)v57 - 1);
        if ( v58 == *((_DWORD *)v57 - 2) )
        {
          v150 = (3 * v58 + 1) >> 1;
          v151 = 8 * v150 + 8;
          if ( 8 * v58 + 8 >= v151 || v58 >= v150 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v182, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v182);
            sub_233E40((__int64)v182);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v174.m128i_i64[0] = v3;
          v152 = (unsigned int *)sub_186B300(v57 - 1, v151);
          v3 = v174.m128i_i64[0];
          v57 = v152 + 2;
          v153 = v152[1];
          *v152 = v150;
          *(_QWORD *)(v3 + 264) = v152 + 2;
          LODWORD(v152) = v153;
          v61 = &v57[v153];
          v60 = (_DWORD)v152 + 1;
        }
        else
        {
          v59 = v58;
          v60 = v58 + 1;
          v61 = &v57[v59];
        }
      }
      else
      {
        v174.m128i_i64[0] = v3;
        v156 = (_QWORD *)sub_186B270(0x18u);
        v3 = v174.m128i_i64[0];
        *v156 = 2;
        v57 = v156 + 1;
        v60 = 1;
        v61 = v57;
        *(_QWORD *)(v3 + 264) = v57;
      }
      ++v54;
      *v61 = v56;
    }
  }
LABEL_80:
  v174.m128i_i64[0] = v3;
  sub_AD3020(v3);
  v62 = v174.m128i_i64[0];
  v63 = *(_QWORD *)(v174.m128i_i64[0] + 264);
  if ( !v63 )
    goto LABEL_216;
  v64 = *(__int64 **)(v174.m128i_i64[0] + 264);
  v65 = &v64[*(unsigned int *)(v63 - 4)];
  if ( v64 == v65 )
  {
LABEL_232:
    v157 = 214013 * *(_DWORD *)(v62 + 280) + 2531011;
    *(_DWORD *)(v62 + 280) = v157;
    v161 = HIWORD(v157) & 0x7FFF;
    goto LABEL_99;
  }
  v66 = *(__int64 **)(v174.m128i_i64[0] + 264);
  do
  {
    while ( 1 )
    {
      v67 = *(_QWORD *)(*v66 + 24);
      v68 = *(int **)(v67 + 24);
      if ( !v68 || (v69 = *v68, v69 == -1) || v69 == 4 )
      {
        v70 = *(_QWORD *)(v62 + 192);
        v71 = *(_QWORD *)(*v66 + 24);
        v174.m128i_i64[0] = v62;
        v72 = sub_C05A60(v70, v71);
        v62 = v174.m128i_i64[0];
        if ( !v72 )
          break;
      }
      if ( v65 == ++v66 )
        goto LABEL_89;
    }
    sub_C05A40(*(_QWORD *)(v174.m128i_i64[0] + 192), v67);
    v62 = v174.m128i_i64[0];
    ++v66;
  }
  while ( v65 != v66 );
LABEL_89:
  v73 = *(__int64 **)(v62 + 264);
  if ( !v73 )
  {
LABEL_216:
    *(_DWORD *)(v62 + 280) = 214013 * *(_DWORD *)(v62 + 280) + 2531011;
    goto LABEL_217;
  }
  v65 = &v73[*((unsigned int *)v73 - 1)];
  if ( v73 == v65 )
    goto LABEL_232;
  v163 = v182;
  v167 = v183;
  do
  {
    v74 = *v73;
    v75 = *v73;
    do
    {
      v76 = v75;
      v75 = *(_QWORD *)(v75 + 8);
    }
    while ( v75 );
    v52 = *(_BYTE *)(v76 + 32) == 0;
    v174.m128i_i64[0] = v62;
    if ( !v52 )
    {
      sub_AD8770(v62, v74);
LABEL_96:
      v62 = v174.m128i_i64[0];
      goto LABEL_97;
    }
    sub_AD1820(v62, v74);
    v182[0] = v167;
    v182[1] = (void *)0x1000000000LL;
    sub_AD06C0(v174.m128i_i64[0], v74, (__int64)v163);
    v165 = sub_15E3D10(
             *(_QWORD *)(v174.m128i_i64[0] + 8),
             (int)&qword_18D6CD0,
             (int)&qword_18D6CD0,
             1,
             (int)v175,
             *(_QWORD *)(v74 + 24),
             1,
             v159,
             v160,
             (int)v163,
             (int)ptr,
             v165,
             (int)v167,
             (int)v170,
             v171,
             v174.m128i_i32[0],
             v174.m128i_i32[2],
             *(_QWORD *)(v74 + 24),
             (int)v176,
             v177,
             (int)v178,
             v179,
             SHIDWORD(v180),
             v181,
             (int)v182[0],
             (int)v182[1],
             v183[0],
             v183[2],
             v183[4],
             v184,
             v185,
             v186);
    v133 = sub_186B270(0x38u);
    sub_13478B0(v133, *(_QWORD *)(v174.m128i_i64[0] + 8), 1);
    sub_C04AD0(*(_QWORD *)(v174.m128i_i64[0] + 192), v165, v133);
    v62 = v174.m128i_i64[0];
    v134 = v74;
    do
    {
      v135 = v134;
      v134 = *(_QWORD *)(v134 + 8);
    }
    while ( v134 );
    v171 = v133;
    if ( *(_QWORD *)(v135 + 64) )
    {
      v136 = *(__int64 (__fastcall **)(__int64, unsigned __int64, int))(*(_QWORD *)v174.m128i_i64[0] + 16LL);
      v137 = v74;
      do
      {
        v138 = v137;
        v137 = *(_QWORD *)(v137 + 8);
      }
      while ( v137 );
      v171 = v133;
      v139 = *(_QWORD *)(v138 + 64);
      v140 = (char *)v136 == (char *)sub_AD0270 ? sub_AC8870(v174.m128i_i64[0], v139) : v136(v174.m128i_i64[0], v139, 1);
      v62 = v174.m128i_i64[0];
      if ( v140 )
      {
        sub_1349280(v133, v140, v141, v142, v143, v144);
        v62 = v174.m128i_i64[0];
      }
    }
    v145 = (int *)((char *)v182[0] + 8 * LODWORD(v182[1]));
    if ( v182[0] != v145 )
    {
      v146 = (int *)v182[0];
      v170 = &v176;
      do
      {
        v147 = *(_DWORD **)v146;
        v174.m128i_i64[0] = v62;
        v176 = v147;
        sub_1348F50(v171, &v176, v147);
        v146 += 2;
        v62 = v174.m128i_i64[0];
      }
      while ( v145 != v146 );
      v145 = (int *)v182[0];
    }
    do
    {
      v148 = v74;
      v74 = *(_QWORD *)(v74 + 8);
    }
    while ( v74 );
    *(_QWORD *)(v148 + 72) = v165;
    if ( v145 != v167 && v145 )
    {
      v174.m128i_i64[0] = v62;
      sub_186B220(v145);
      goto LABEL_96;
    }
LABEL_97:
    ++v73;
  }
  while ( v65 != v73 );
  v65 = *(__int64 **)(v62 + 264);
  v77 = 214013 * *(_DWORD *)(v62 + 280) + 2531011;
  *(_DWORD *)(v62 + 280) = v77;
  v161 = HIWORD(v77) & 0x7FFF;
  if ( v65 )
  {
LABEL_99:
    v78 = *((_DWORD *)v65 - 1);
    if ( v78 )
    {
      v166 = v161 + v78 - 1;
      v79 = v166;
      while ( 1 )
      {
        v80 = v65[v79 % *((_DWORD *)v65 - 1)];
        do
        {
          v81 = v80;
          v80 = *(_QWORD *)(v80 + 8);
        }
        while ( v80 );
        v82 = *(_QWORD *)(v81 + 56);
        v83 = *(__int64 **)(v82 + 8);
        v84 = &v83[2 * *(unsigned int *)(v82 + 16)];
        if ( v83 != v84 )
        {
          while ( (unsigned __int64)*v83 <= 1 )
          {
            v83 += 2;
            if ( v84 == v83 )
              goto LABEL_122;
          }
          if ( v84 != v83 )
            break;
        }
LABEL_122:
        v79 = v166 - 1;
        if ( v166 == v161 )
          goto LABEL_217;
        v65 = *(__int64 **)(v62 + 264);
        if ( !v65 )
          BUG();
        --v166;
      }
      v174.m128i_i64[0] = *v83;
LABEL_109:
      v172 = *((_DWORD *)v83 + 2);
      v85 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, int))(*(_QWORD *)v62 + 16LL);
      if ( v85 != sub_AD0270 )
      {
        v169 = v62;
        v107 = v85((_QWORD *)v62, v174.m128i_i64[0], 1);
        v62 = v169;
        v108 = (_DWORD *)v107;
        goto LABEL_150;
      }
      v86 = *(unsigned int *)(v62 + 232);
      v87 = *(__int64 **)(v62 + 224);
      v88 = *(_DWORD *)(v174.m128i_i64[0] + 12);
      v89 = v86 - 1;
      v86 *= 16;
      v90 = (__int64 *)((char *)v87 + v86);
      v91 = 16LL * (v88 & v89);
      v92 = &v87[(unsigned __int64)v91 / 8];
      if ( v91 == v86 )
      {
LABEL_141:
        while ( v92 != v87 )
        {
          v106 = *v87;
          if ( (unsigned __int64)*v87 > 1 )
          {
            if ( *(_DWORD *)(v106 + 12) == v88 && v106 == v174.m128i_i64[0] )
            {
              v93 = v87;
              goto LABEL_193;
            }
          }
          else if ( !v106 )
          {
            break;
          }
          v87 += 2;
        }
LABEL_117:
        v95 = (void *)v174.m128i_i64[0];
        v96 = *(_QWORD *)(v62 + 8);
        v176 = nullptr;
        v97 = *(_QWORD *)(v62 + 192);
        v168 = v62;
        v177 = v96;
        v98 = sub_C05810(v97, v174.m128i_i64[0], &v176, 1);
        v99 = v168 + 224;
        if ( v98 )
        {
          v108 = v176;
          *(__m128i *)v182 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v174), (__m128i)(unsigned __int64)v176);
          sub_686B20(v99, (const __m128i *)v182);
          *(_QWORD *)v175 = v108;
          v100 = v168;
          if ( v108 )
          {
            ++v108[2];
            sub_AC8490((_QWORD *)(v168 + 256), v175);
            v120 = v176;
            v62 = v168;
            if ( v176 )
            {
              v121 = v177;
              v52 = v176[2]-- == 1;
              if ( v52 )
              {
                sub_15D7BC0(v121, v120);
                v62 = v168;
              }
            }
            goto LABEL_151;
          }
        }
        else
        {
          v174.m128i_i64[0] = v168;
          v182[0] = v95;
          v182[1] = nullptr;
          sub_686B20(v99, (const __m128i *)v182);
          *(_QWORD *)v175 = 0;
          v100 = v174.m128i_i64[0];
        }
        v174.m128i_i64[0] = v100;
        sub_AC8490((_QWORD *)(v100 + 256), v175);
        v101 = v176;
        v62 = v174.m128i_i64[0];
        if ( v176 )
        {
          v102 = v177;
          v52 = v176[2]-- == 1;
          if ( v52 )
          {
            sub_15D7BC0(v102, v101);
            v62 = v174.m128i_i64[0];
          }
        }
        goto LABEL_122;
      }
      v93 = &v87[(unsigned __int64)v91 / 8];
      while ( 1 )
      {
        v94 = *v93;
        if ( (unsigned __int64)*v93 > 1 )
        {
          if ( *(_DWORD *)(v94 + 12) == v88 && v94 == v174.m128i_i64[0] )
          {
LABEL_193:
            v108 = (_DWORD *)v93[1];
LABEL_150:
            if ( !v108 )
              goto LABEL_122;
LABEL_151:
            v109 = *(unsigned int *)(v82 + 40);
            v110 = v108[3];
            v111 = *(_QWORD **)(v82 + 32);
            v112 = v109 - 1;
            v109 *= 16;
            v113 = (_QWORD *)((char *)v111 + v109);
            v114 = 16LL * (v110 & v112);
            v115 = &v111[(unsigned __int64)v114 / 8];
            if ( v114 != v109 )
            {
              for ( n = &v111[(unsigned __int64)v114 / 8]; v113 != n; n += 2 )
              {
                v117 = (_DWORD *)*n;
                if ( *n > 1u )
                {
                  if ( v117[3] == v110 && v108 == v117 )
                  {
LABEL_177:
                    v122 = n[1];
                    v123 = *(unsigned int *)(v82 + 16);
                    v124 = *(char **)(v82 + 8);
                    v125 = *(_DWORD *)(v122 + 12);
                    v126 = v123 - 1;
                    v123 *= 16;
                    v127 = &v124[v123];
                    v128 = 16LL * (v125 & v126);
                    v129 = &v124[v128];
                    v130 = &v124[v128];
                    if ( v128 == v123 )
                    {
LABEL_185:
                      if ( v124 != v129 )
                      {
                        while ( 1 )
                        {
                          v132 = *(_QWORD *)v124;
                          if ( *(_QWORD *)v124 > 1u )
                          {
                            if ( *(_DWORD *)(v132 + 12) == v125 && v122 == v132 )
                            {
                              v130 = v124;
                              goto LABEL_194;
                            }
                          }
                          else if ( !v132 )
                          {
                            goto LABEL_159;
                          }
                          v124 += 16;
                          if ( v129 == v124 )
                            goto LABEL_159;
                        }
                      }
                    }
                    else
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          v131 = *(_QWORD *)v130;
                          if ( *(_QWORD *)v130 > 1u )
                            break;
                          if ( !v131 )
                            goto LABEL_159;
                          v130 += 16;
                          if ( v127 == v130 )
                            goto LABEL_185;
                        }
                        if ( *(_DWORD *)(v131 + 12) == v125 && v122 == v131 )
                          break;
                        v130 += 16;
                        if ( v127 == v130 )
                          goto LABEL_185;
                      }
LABEL_194:
                      if ( v172 < *((_DWORD *)v130 + 2) )
                        goto LABEL_158;
                    }
                    goto LABEL_159;
                  }
                }
                else if ( !v117 )
                {
                  goto LABEL_158;
                }
              }
            }
            for ( ; v115 != v111; v111 += 2 )
            {
              v119 = (_DWORD *)*v111;
              if ( *v111 > 1u )
              {
                if ( v119[3] == v110 && v108 == v119 )
                {
                  n = v111;
                  goto LABEL_177;
                }
              }
              else if ( !v119 )
              {
                break;
              }
            }
LABEL_158:
            v173 = v62;
            v182[0] = v108;
            v182[1] = (void *)v174.m128i_i64[0];
            sub_686B20(v82 + 32, (const __m128i *)v182);
            v62 = v173;
LABEL_159:
            v118 = v83 + 2;
            if ( v84 == v83 + 2 )
              goto LABEL_122;
            while ( 1 )
            {
              v83 = v118;
              if ( (unsigned __int64)*v118 > 1 )
                break;
              v118 += 2;
              if ( v84 == v118 )
                goto LABEL_122;
            }
            v174.m128i_i64[0] = *v118;
            if ( v84 == v118 )
              goto LABEL_122;
            goto LABEL_109;
          }
        }
        else if ( !v94 )
        {
          goto LABEL_117;
        }
        v93 += 2;
        if ( v90 == v93 )
          goto LABEL_141;
      }
    }
  }
LABEL_217:
  v178 = ptr;
  v179 = v162;
  result = sub_ACE840(v62, &v178);
  if ( ptr )
    return sub_186B220(ptr);
  return result;
}

