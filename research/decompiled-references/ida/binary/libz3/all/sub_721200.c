__int64 __fastcall sub_721200(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d
  __int64 *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r15
  int v18; // eax
  _DWORD *v19; // rsi
  int v20; // eax
  _DWORD *v21; // rsi
  __int64 *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 *v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // r12
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rdi
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // r12
  int v40; // eax
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 result; // rax
  __int64 v46; // rsi
  __int64 v47; // rdi
  _QWORD *v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // rsi
  int v51; // eax
  _QWORD *v52; // rsi
  unsigned int v53; // r15d
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rsi
  _QWORD *v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rdx
  char v62; // al
  __int64 *v63; // r15
  unsigned __int64 v64; // r13
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // r9
  int v68; // ecx
  int v69; // eax
  int v70; // esi
  int v71; // edx
  int v72; // eax
  __int64 *v73; // rcx
  int v74; // esi
  __int64 v75; // rax
  unsigned int v76; // edx
  __int64 *v77; // rdi
  __int64 v78; // rdx
  __int64 *v79; // r8
  __int64 *v80; // rax
  unsigned __int64 v81; // rdx
  _QWORD *v82; // r12
  __int64 v83; // rax
  unsigned int v84; // r15d
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned int v89; // r15d
  __int64 v90; // rcx
  __int64 v91; // rdx
  unsigned int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // r12
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rdi
  __int64 v98; // rbx
  __int64 v99; // rsi
  __int64 v100; // rdi
  unsigned int v101; // r15d
  __int64 v102; // rcx
  __int64 v103; // rax
  unsigned int i; // r13d
  __int64 v105; // rcx
  __int64 v106; // r14
  __int64 v107; // rax
  unsigned __int32 v108; // r13d
  _QWORD *v109; // rax
  __m128i *j; // rbp
  unsigned int v111; // r15d
  size_t v112; // rsi
  unsigned int *v113; // rax
  unsigned int v114; // eax
  __m128i *v115; // rax
  __m128i v116; // xmm0
  unsigned __int64 v117; // rcx
  __m128i *v118; // rdx
  __int64 *v119; // rax
  __int64 v120; // r15
  int v121; // eax
  int v122; // r8d
  int v123; // r9d
  __int64 v124; // rcx
  __int64 v125; // r13
  int v126; // edx
  __int64 v127; // rbx
  __int64 v128; // rsi
  __int64 v129; // rdi
  int v130; // eax
  __m128i *v131; // rax
  __int64 v132; // rax
  char **exception; // rbp
  char **v134; // r12
  int v135; // [rsp-8h] [rbp-150h]
  __int64 v136; // [rsp+0h] [rbp-148h]
  int v137; // [rsp+0h] [rbp-148h]
  int v138; // [rsp+0h] [rbp-148h]
  __int64 v139; // [rsp+0h] [rbp-148h]
  __int64 v140; // [rsp+0h] [rbp-148h]
  int v141[2]; // [rsp+8h] [rbp-140h]
  int v142[2]; // [rsp+8h] [rbp-140h]
  int v143; // [rsp+8h] [rbp-140h]
  _QWORD *v144; // [rsp+10h] [rbp-138h]
  int v145; // [rsp+10h] [rbp-138h]
  int v146; // [rsp+10h] [rbp-138h]
  char v147; // [rsp+10h] [rbp-138h]
  unsigned int v148; // [rsp+10h] [rbp-138h]
  int v150; // [rsp+18h] [rbp-130h]
  int v151; // [rsp+18h] [rbp-130h]
  __int64 *v152; // [rsp+18h] [rbp-130h]
  __int64 *v153; // [rsp+18h] [rbp-130h]
  int v154[2]; // [rsp+20h] [rbp-128h]
  int v155; // [rsp+20h] [rbp-128h]
  int v156; // [rsp+20h] [rbp-128h]
  __int64 *v157; // [rsp+20h] [rbp-128h]
  int v159; // [rsp+28h] [rbp-120h]
  char v160; // [rsp+28h] [rbp-120h]
  char v162; // [rsp+30h] [rbp-118h]
  int v163; // [rsp+30h] [rbp-118h]
  __m128i *v164; // [rsp+38h] [rbp-110h] BYREF
  __m128i v165; // [rsp+40h] [rbp-108h] BYREF
  int v166; // [rsp+50h] [rbp-F8h]
  int v167; // [rsp+58h] [rbp-F0h]
  __m128i v168; // [rsp+60h] [rbp-E8h] BYREF
  __int64 *v169; // [rsp+70h] [rbp-D8h]
  __int64 v170; // [rsp+78h] [rbp-D0h]
  int v171[4]; // [rsp+80h] [rbp-C8h] BYREF
  int v172; // [rsp+90h] [rbp-B8h]
  __int64 v173; // [rsp+98h] [rbp-B0h]
  void *v174; // [rsp+A0h] [rbp-A8h]
  void *v175; // [rsp+A8h] [rbp-A0h]
  __int64 v176; // [rsp+B0h] [rbp-98h]
  void *v177; // [rsp+B8h] [rbp-90h]
  __int64 (__fastcall **v178)(); // [rsp+C0h] [rbp-88h]
  __int64 v179; // [rsp+D0h] [rbp-78h]
  void *v180; // [rsp+D8h] [rbp-70h]
  __int64 v181; // [rsp+E8h] [rbp-60h]
  void *ptr; // [rsp+F0h] [rbp-58h]
  __int64 v183; // [rsp+F8h] [rbp-50h]
  __int64 *v184; // [rsp+100h] [rbp-48h]
  char v185; // [rsp+108h] [rbp-40h]

  v7 = *a2;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *a4;
  *(_QWORD *)v154 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 40LL);
  v164 = &v168;
  sub_6AA8D0(&v168, v8, v9);
  v12 = v169;
  if ( !v169 )
    goto LABEL_51;
  v13 = *((unsigned int *)v169 - 1);
  if ( !(_DWORD)v13 )
  {
    sub_186B220(v169 - 1);
LABEL_51:
    *(_QWORD *)v141 = a1 + 32;
    goto LABEL_25;
  }
  v14 = 8 * v13;
  v15 = 0;
  v144 = nullptr;
  v136 = v14;
  *(_QWORD *)v141 = a1 + 32;
  do
  {
    while ( 1 )
    {
      v16 = v12[v15 / 8];
      if ( !*(_WORD *)(v16 + 4) )
        break;
      v15 += 8LL;
      if ( v136 == v15 )
        goto LABEL_11;
    }
    v17 = *(_QWORD *)(v16 + 16);
    v18 = sub_15F0200(*(_QWORD *)v141);
    v19 = *(_DWORD **)(v17 + 24);
    if ( v19 && v18 == *v19 && v19[1] == 1 )
    {
      v48 = v144;
      if ( !v144 )
        goto LABEL_49;
      goto LABEL_41;
    }
    v20 = sub_15F0200(*(_QWORD *)v141);
    v21 = *(_DWORD **)(v17 + 24);
    if ( v21 && v20 == *v21 && v21[1] == 2 )
    {
      v48 = v144;
      if ( !v144 )
      {
LABEL_49:
        v57 = (_QWORD *)sub_186B270(0x18u);
        *v57 = 2;
        v144 = v57 + 1;
        v52 = v57 + 1;
        v48 = v57 + 1;
        v51 = 1;
LABEL_43:
        *v52 = v16;
        *((_DWORD *)v48 - 1) = v51;
        goto LABEL_10;
      }
LABEL_41:
      v49 = *((_DWORD *)v48 - 1);
      if ( v49 == *((_DWORD *)v48 - 2) )
      {
        v53 = (3 * v49 + 1) >> 1;
        v54 = 8 * v53 + 8;
        if ( 8 * v49 + 8 >= (unsigned int)v54 || v49 >= v53 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v171, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v171);
          sub_233E40((__int64)v171);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v55 = (unsigned int *)sub_186B300(v48 - 1, v54);
        v56 = v55[1];
        v48 = v55 + 2;
        *v55 = v53;
        v144 = v48;
        LODWORD(v55) = v56;
        v52 = &v48[v56];
        v51 = (_DWORD)v55 + 1;
      }
      else
      {
        v50 = v49;
        v51 = v49 + 1;
        v52 = &v48[v50];
      }
      goto LABEL_43;
    }
LABEL_10:
    v12 = v169;
    v15 += 8LL;
  }
  while ( v136 != v15 );
LABEL_11:
  if ( v12 )
  {
    v22 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v22 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v23 = *v12;
        if ( *v12 )
        {
          v24 = v168.m128i_i64[1];
          v25 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( ++v12 >= v22 )
          goto LABEL_18;
      }
      sub_15D7BC0(v24, v23);
      ++v12;
    }
    while ( v12 < v22 );
LABEL_18:
    v12 = v169;
    if ( v169 )
LABEL_19:
      sub_186B220(v12 - 1);
  }
  if ( !v144 )
  {
LABEL_25:
    v29 = (_QWORD *)sub_15F6BE0(*(_QWORD *)v141, *(_QWORD *)v154);
    v30 = sub_182D020(qword_1C7F2C0, a3);
    v31 = sub_15F0A30(*(_QWORD *)v141, *(_QWORD *)(*v29 + 8LL * v30));
    v32 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)v171 = v7;
    sub_15DC610(
      v32,
      v31,
      1,
      (int)v171,
      v33,
      v34,
      v136,
      (int)v171,
      (int)v144,
      (int)a5,
      v154[0],
      a3,
      (int)a2,
      (int)v164,
      v165.m128i_i32[0],
      (void *)v165.m128i_i64[1]);
    v35 = sub_15E1B70(*(_QWORD *)(a1 + 8));
    v36 = v35;
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    v37 = *a4;
    if ( *a4 )
    {
      v38 = a4[1];
      v25 = (*(_DWORD *)(v37 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v38, v37);
    }
    *a4 = v36;
    v39 = *(_QWORD *)(a1 + 8);
    sub_180C5A0(*(_QWORD *)v142, "x");
    v40 = sub_15E3D10(
            v39,
            v142[0],
            (int)&qword_18D6CD0,
            0,
            0,
            v155,
            1,
            v135,
            v137,
            v142[0],
            v145,
            v150,
            v155,
            v159,
            v162,
            (int)v164,
            v165.m128i_i32[0],
            v165.m128i_i32[2],
            v166,
            v167,
            v168.m128i_i32[0],
            v168.m128i_i32[2],
            (int)v169,
            v170,
            v171[0],
            v171[2],
            v172,
            v173,
            (int)v174,
            v175,
            v176,
            (__int64)v177);
    v43 = sub_15DC610(
            v39,
            v40,
            0,
            0,
            v41,
            v42,
            v138,
            v143,
            v146,
            v151,
            v156,
            v160,
            v163,
            (int)v164,
            v165.m128i_i32[0],
            (void *)v165.m128i_i64[1]);
    v44 = v43;
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 88LL))(*(_QWORD *)(a1 + 24), v43);
    sub_14EC390(a1 + 56, v7, v44, a4);
    result = (__int64)v152;
    if ( v152 )
    {
      v46 = *v152;
      v47 = v152[1];
      if ( !v44 )
      {
        if ( v46 )
        {
          v25 = (*(_DWORD *)(v46 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v47, v46);
          result = (__int64)v152;
        }
        *(_QWORD *)result = 0;
        return result;
      }
      result = *(unsigned int *)(v44 + 8);
      *(_DWORD *)(v44 + 8) = result + 1;
      if ( !v46 )
      {
        *v152 = v44;
LABEL_37:
        *(_DWORD *)(v44 + 8) = result;
        if ( (_DWORD)result )
          return result;
        return sub_15D7BC0(v39, v44);
      }
      v25 = (*(_DWORD *)(v46 + 8))-- == 1;
      if ( !v25 )
      {
        *v152 = v44;
        result = (unsigned int)(*(_DWORD *)(v44 + 8) - 1);
        goto LABEL_37;
      }
      sub_15D7BC0(v47, v46);
      *v152 = v44;
    }
    else if ( !v44 )
    {
      return result;
    }
    result = (unsigned int)(*(_DWORD *)(v44 + 8) - 1);
    *(_DWORD *)(v44 + 8) = result;
    if ( (_DWORD)result )
      return result;
    return sub_15D7BC0(v39, v44);
  }
  v26 = v144;
  v27 = &v144[*((unsigned int *)v144 - 1)];
  do
  {
    if ( v26 == v27 )
    {
      sub_186B220(v144 - 1);
      goto LABEL_25;
    }
    v28 = *v26++;
  }
  while ( v7 != *(_QWORD *)(v28 + 32) );
  v139 = *(_QWORD *)(v28 + 16);
  v157 = (__int64 *)sub_15F0BB0(v141[0], v139, v28, (_DWORD)v27, v10, v11);
  v165 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v164), (__m128i)(unsigned __int64)&off_1C62200);
  sub_186B220(v144 - 1);
  v58 = _mm_load_si128(&v165);
  v59 = *a4;
  v168.m128i_i64[0] = (__int64)off_1C53798;
  v60 = *a2;
  v170 = *(_QWORD *)v141;
  v169 = v157;
  v168.m128i_i64[1] = v60;
  v61 = *(_QWORD *)(a1 + 8);
  v173 = 0;
  v174 = nullptr;
  v176 = 0;
  v177 = nullptr;
  v178 = &off_1C62200;
  v179 = 0;
  v180 = nullptr;
  v181 = 0;
  ptr = nullptr;
  v183 = v61;
  v184 = nullptr;
  v185 = 1;
  *(__m128i *)v171 = v58;
  v62 = sub_168D740(v171, v59);
  v63 = v184;
  v147 = v62;
  if ( v184 )
  {
    v64 = (unsigned __int64)&v184[*((unsigned int *)v184 - 1)];
    if ( (unsigned __int64)v184 >= v64 )
      goto LABEL_64;
    do
    {
      while ( 1 )
      {
        v65 = *v63;
        if ( *v63 )
        {
          v66 = v183;
          v25 = (*(_DWORD *)(v65 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( (unsigned __int64)++v63 >= v64 )
          goto LABEL_63;
      }
      sub_15D7BC0(v66, v65);
      ++v63;
    }
    while ( (unsigned __int64)v63 < v64 );
LABEL_63:
    v63 = v184;
    if ( v184 )
LABEL_64:
      sub_186B220(v63 - 1);
  }
  v178 = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v180 )
    sub_186B220(v180);
  *(_QWORD *)&v171[2] = &off_1C62200;
  if ( v177 )
    sub_186B220(v177);
  if ( v174 )
    sub_186B220(v174);
  if ( v147 )
    return sub_71F3C0(a1, a2, v157, (__int64)a4, a5);
  v67 = *a4;
  v68 = *(_DWORD *)(v7 + 12);
  v69 = (*(_DWORD *)(*a4 + 12) - v68) ^ (v68 << 8);
  v70 = (v68 - v69) << 10;
  v71 = v69 ^ ((v68 - v69) << 16);
  v72 = v69 - v68;
  v73 = *(__int64 **)(a1 + 192);
  v74 = (v71 + v72) ^ v70;
  v75 = *(unsigned int *)(a1 + 200);
  v76 = v75 - 1;
  v75 *= 32;
  v77 = (__int64 *)((char *)v73 + v75);
  v78 = 32LL * (v74 & v76);
  v79 = &v73[(unsigned __int64)v78 / 8];
  if ( v78 == v75 )
  {
LABEL_146:
    while ( v79 != v73 )
    {
      v132 = *v73;
      if ( (unsigned __int64)*v73 > 1 )
      {
        if ( *((_DWORD *)v73 + 6) == v74 && v7 == v132 && v67 == v73[1] )
        {
          v80 = v73;
          goto LABEL_83;
        }
      }
      else if ( !v132 )
      {
        break;
      }
      v73 += 4;
    }
LABEL_81:
    sub_1872CE0("");
    sub_1873130(114, 828);
  }
  v80 = &v73[(unsigned __int64)v78 / 8];
  while ( 2 )
  {
    v81 = *v80;
    if ( (unsigned __int64)*v80 <= 1 )
    {
      if ( !v81 )
        goto LABEL_81;
      goto LABEL_78;
    }
    if ( *((_DWORD *)v80 + 6) != v74 || v7 != v81 || v67 != v80[1] )
    {
LABEL_78:
      v80 += 4;
      if ( v77 == v80 )
        goto LABEL_146;
      continue;
    }
    break;
  }
LABEL_83:
  v82 = (_QWORD *)v80[2];
  v148 = sub_182D020(qword_1C7F2C0, a3);
  v83 = v82[2];
  if ( v83 )
  {
    v84 = 0;
    do
    {
      if ( v84 >= *(_DWORD *)(v83 - 4) )
        break;
      v86 = *(_QWORD *)(v83 + 8LL * v84);
      v87 = *(_QWORD *)(a1 + 8);
      v85 = *(_QWORD *)(v86 + 16) == v139 ? *(_QWORD *)(v87 + 856) : *(_QWORD *)(v87 + 864);
      ++v84;
      sub_14EC390(a1 + 56, v86, v85, a4);
      v83 = v82[2];
    }
    while ( v83 );
  }
  v88 = v82[12];
  if ( v88 )
  {
    v89 = 0;
    do
    {
      if ( v89 >= *(_DWORD *)(v88 - 4) )
        break;
      v90 = v89++;
      sub_14EC390(a1 + 56, *(_QWORD *)(v88 + 8 * v90), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL), a4);
      v88 = v82[12];
    }
    while ( v88 );
  }
  v91 = v82[4];
  if ( v91 )
  {
    v92 = *(_DWORD *)(v91 - 4);
    if ( v148 < v92 )
    {
      v93 = *(_QWORD *)(v91 + 8LL * v148);
      v94 = *(_QWORD *)(v82[14] + 8LL * v148);
      if ( a5 )
      {
        if ( v93 )
          ++*(_DWORD *)(v93 + 8);
        v95 = *a5;
        if ( *a5 )
        {
          v96 = a5[1];
          v25 = (*(_DWORD *)(v95 + 8))-- == 1;
          if ( v25 )
          {
            v140 = v93;
            sub_15D7BC0(v96, v95);
            v93 = v140;
          }
        }
        *a5 = v93;
      }
      result = sub_14EC390(a1 + 56, v7, v93, a4);
      v97 = *(_QWORD *)(a1 + 8);
      if ( v94 != *(_QWORD *)(v97 + 856) )
      {
        result = sub_15E1B70(v97);
        v98 = result;
        if ( result )
          ++*(_DWORD *)(result + 8);
        v99 = *a4;
        if ( *a4 )
        {
          v100 = a4[1];
          v25 = (*(_DWORD *)(v99 + 8))-- == 1;
          if ( v25 )
            result = sub_15D7BC0(v100, v99);
        }
        *a4 = v98;
      }
      return result;
    }
    v101 = 0;
    while ( v101 < v92 )
    {
      v102 = v101++;
      sub_14EC390(a1 + 56, *(_QWORD *)(v82[8] + 8 * v102), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL), a4);
      v103 = v82[4];
      if ( !v103 )
        break;
      v92 = *(_DWORD *)(v103 - 4);
    }
  }
  result = v82[10];
  for ( i = 0; result; result = v82[10] )
  {
    if ( i >= *(_DWORD *)(result - 4) )
      break;
    v105 = i++;
    sub_14EC390(a1 + 56, *(_QWORD *)(result + 8 * v105), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL), a4);
  }
  if ( a5 )
  {
    v106 = sub_15D1F10(v7);
    v107 = v82[6];
    if ( v107 && (v108 = *(_DWORD *)(v107 - 4)) != 0 )
    {
      v109 = (_QWORD *)sub_186B270(0x18u);
      *v109 = 2;
      for ( j = (__m128i *)(v109 + 1); ; j = (__m128i *)(v113 + 2) )
      {
        v114 = j[-1].m128i_u32[2];
        if ( v114 >= v108 )
          break;
        v111 = (3 * v114 + 1) >> 1;
        v112 = 8 * v111 + 8;
        if ( 8 * v114 + 8 >= (unsigned int)v112 || v114 >= v111 )
        {
          v134 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v171, "Overflow encountered when expanding vector");
          *v134 = (char *)off_1C63128;
          sub_2333C0(v134 + 1, v171);
          sub_233E40((__int64)v171);
          __cxa_throw(v134, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v113 = (unsigned int *)sub_186B300(&j[-1].m128i_u64[1], v112);
        *v113 = v111;
      }
      j[-1].m128i_i32[3] = v108;
      if ( v108 == 1 )
      {
        v119 = (__int64 *)j;
LABEL_130:
        *v119 = v106;
      }
      else
      {
        v115 = j;
        v116 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v106, (__m128i)(unsigned __int64)v106);
        v117 = (unsigned __int64)v108 >> 1;
        v118 = &j[v117];
        if ( ((v117 * 16) & 0x10) == 0 || (v115 = j + 1, *j = v116, &j[1] != v118) )
        {
          do
          {
            *v115 = v116;
            v131 = v115 + 2;
            v131[-1] = v116;
            if ( v131 == v118 )
              break;
            *v131 = v116;
            v115 = v131 + 2;
            v115[-1] = v116;
          }
          while ( v115 != v118 );
        }
        if ( (v108 & 1) != 0 )
        {
          v119 = &j->m128i_i64[v108 & 0xFFFFFFFE];
          goto LABEL_130;
        }
      }
      v120 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v120 = *(_QWORD *)(a1 + 8);
      j = nullptr;
      v108 = 0;
    }
    sub_180C5A0(v171, "diag");
    v121 = sub_15E3510(v120, v171, v108, j, v106, 0);
    v124 = v82[6];
    v125 = *(_QWORD *)(a1 + 8);
    if ( v124 )
      v126 = *(_DWORD *)(v124 - 4);
    else
      v126 = 0;
    v127 = sub_15DC610(
             *(_QWORD *)(a1 + 8),
             v121,
             v126,
             v124,
             v122,
             v123,
             v139,
             (int)v171,
             v148,
             (int)a5,
             (int)v157,
             a3,
             (int)a2,
             (int)v164,
             v165.m128i_i32[0],
             (void *)v165.m128i_i64[1]);
    result = (__int64)v153;
    v128 = *v153;
    v129 = v153[1];
    if ( v127 )
    {
      v130 = *(_DWORD *)(v127 + 8);
      *(_DWORD *)(v127 + 8) = v130 + 2;
      if ( v128 )
      {
        v25 = (*(_DWORD *)(v128 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v129, v128);
        *v153 = v127;
        result = (unsigned int)(*(_DWORD *)(v127 + 8) - 1);
      }
      else
      {
        result = (unsigned int)(v130 + 1);
        *v153 = v127;
      }
      *(_DWORD *)(v127 + 8) = result;
      if ( !(_DWORD)result )
        result = sub_15D7BC0(v125, v127);
    }
    else
    {
      if ( v128 )
      {
        v25 = (*(_DWORD *)(v128 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v129, v128);
        result = (__int64)v153;
      }
      *(_QWORD *)result = 0;
    }
    if ( j )
      return sub_186B220(&j[-1].m128i_u64[1]);
  }
  return result;
}

