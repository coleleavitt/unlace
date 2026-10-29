void __fastcall sub_8E1D30(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char **v3; // r15
  char **exception; // r15
  char **v5; // r15
  __int64 v6; // rax
  _DWORD *v7; // r14
  _DWORD *v8; // r12
  _DWORD *v9; // rbx
  _DWORD *v10; // r13
  __int64 v11; // r15
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  int v15; // edx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 i; // rax
  _DWORD *v25; // rdx
  __int64 v26; // rax
  _DWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // rbx
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rdx
  char v35; // al
  bool v36; // zf
  _DWORD *v37; // rax
  __int64 v38; // rcx
  int v39; // r8d
  int v40; // r9d
  _DWORD *v41; // rax
  bool v42; // si
  __int64 v43; // rdi
  __int64 v44; // rax
  int v45; // r8d
  int v46; // r9d
  int v47; // ecx
  __int64 v48; // rdx
  _DWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // r12
  _QWORD *v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  _QWORD *v62; // rcx
  int v63; // ecx
  int v64; // eax
  int v65; // edx
  __int64 v66; // rax
  unsigned int v67; // ecx
  __m128i *v68; // r12
  unsigned int v69; // r8d
  __int64 v70; // r9
  __m128i *v71; // r13
  __int64 v72; // r8
  __m128i *v73; // rsi
  __m128i *v74; // rax
  __m128i *v75; // rcx
  _DWORD *v76; // rdx
  int v77; // r12d
  unsigned int v78; // r13d
  unsigned int v79; // r12d
  __int64 v80; // r9
  __int64 v81; // r8
  _QWORD *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // r9
  __int64 v85; // r8
  __int64 v86; // rax
  int v87; // r9d
  __int64 v88; // rsi
  __int64 v89; // r9
  __int64 v90; // r8
  __int64 v91; // r12
  __int64 v92; // r13
  __int64 v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rsi
  unsigned int v97; // eax
  _DWORD *v98; // rax
  unsigned int v99; // r13d
  unsigned int v100; // ecx
  unsigned int *v101; // rax
  __int64 v102; // rcx
  __int64 v103; // r13
  __m128i *v104; // rax
  int v105; // ecx
  __m128i *v106; // rdx
  __m128i *v107; // rax
  __m128i *v108; // rax
  const __m128i *v109; // r11
  __m128i *v110; // rax
  __int64 v111; // rdx
  __m128i *v112; // rsi
  __m128i *v113; // rdx
  unsigned int v114; // edx
  unsigned int *v115; // r8
  const __m128i *v116; // rdi
  __int64 v117; // rsi
  const __m128i *v118; // rax
  __m128i *v119; // rdx
  const __m128i *v120; // rsi
  __m128i *v121; // rax
  __int8 v122; // dl
  _QWORD *v123; // rdx
  _DWORD *v124; // r13
  __int64 v125; // rax
  __int64 v126; // rdx
  _QWORD *v127; // rdx
  _QWORD *v128; // rax
  unsigned int v129; // r12d
  unsigned int v130; // edx
  unsigned int *v131; // r15
  __int64 v132; // rcx
  __int64 v133; // rdx
  unsigned __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // [rsp-10h] [rbp-E0h]
  unsigned int *v137; // [rsp+10h] [rbp-C0h]
  int v138; // [rsp+18h] [rbp-B8h]
  int v139; // [rsp+18h] [rbp-B8h]
  _DWORD *v140; // [rsp+18h] [rbp-B8h]
  __int64 v141; // [rsp+20h] [rbp-B0h]
  size_t v142; // [rsp+20h] [rbp-B0h]
  unsigned int v143; // [rsp+20h] [rbp-B0h]
  __int64 v144; // [rsp+28h] [rbp-A8h]
  int v145; // [rsp+28h] [rbp-A8h]
  int v146; // [rsp+28h] [rbp-A8h]
  __int64 v147; // [rsp+30h] [rbp-A0h]
  int v148; // [rsp+30h] [rbp-A0h]
  int v149; // [rsp+30h] [rbp-A0h]
  unsigned int v150; // [rsp+30h] [rbp-A0h]
  _QWORD *v151; // [rsp+30h] [rbp-A0h]
  __int64 v152; // [rsp+30h] [rbp-A0h]
  __int64 v153; // [rsp+38h] [rbp-98h]
  __int64 v154; // [rsp+38h] [rbp-98h]
  __int64 v155; // [rsp+38h] [rbp-98h]
  __int64 v156; // [rsp+38h] [rbp-98h]
  unsigned int *v157; // [rsp+40h] [rbp-90h]
  unsigned __int8 v158; // [rsp+48h] [rbp-88h]
  __int64 v159; // [rsp+48h] [rbp-88h]
  int v160[2]; // [rsp+50h] [rbp-80h]
  int v162; // [rsp+58h] [rbp-78h]
  int v163; // [rsp+58h] [rbp-78h]
  unsigned int v164; // [rsp+58h] [rbp-78h]
  __int64 v165; // [rsp+68h] [rbp-68h] BYREF
  __m128i v166; // [rsp+70h] [rbp-60h] BYREF
  __int64 v167[10]; // [rsp+80h] [rbp-50h] BYREF

  if ( a2 == a3 )
    return;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = a2;
  v8 = (_DWORD *)*a3;
  v9 = a3;
  v10 = (_DWORD *)*a2;
  *(_QWORD *)v160 = *(_QWORD *)(v6 + 24);
  if ( *(_DWORD *)*a3 >= *(_DWORD *)*a2 )
  {
    v8 = (_DWORD *)*a2;
    v10 = (_DWORD *)*a3;
    v9 = a2;
    v7 = a3;
  }
  v11 = *(_QWORD *)(v6 + 16);
  v158 = sub_15D27F0(*(_QWORD *)v160, v8, v10);
  if ( v158 )
  {
    v30 = sub_15E1B70(v160[0]);
    v31 = (unsigned int *)v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    sub_B6F780(v11);
    v32 = *(_QWORD *)(v11 + 8848);
    v33 = *(_DWORD *)(*(_QWORD *)(v11 + 8832) + 4LL * *v31);
    v167[0] = 2;
    v34 = (unsigned int)(2 * v33);
    v35 = *(_BYTE *)(v32 + ((unsigned int)v34 ^ 1));
    if ( v35 == -1 )
    {
      sub_8E8670(v11, v167, v34);
    }
    else if ( !v35 )
    {
      sub_8F28B0(v11, (unsigned int)v34 ^ 1, 2, 0);
    }
    v36 = v31[2]-- == 1;
    if ( v36 )
      sub_15D7BC0(*(_QWORD *)v160, v31);
    return;
  }
  if ( (unsigned __int8)sub_15D26C0(*(_QWORD *)v160, v8) && (unsigned __int8)sub_15D26C0(*(_QWORD *)v160, v10)
    || v10 == v8 )
  {
    return;
  }
  v12 = *(_DWORD *)(*(_QWORD *)v9 + 12LL);
  v13 = (*(_DWORD *)(*(_QWORD *)v7 + 12LL) - v12) ^ (v12 << 8);
  v14 = (v12 - v13) << 10;
  v15 = v13 ^ ((v12 - v13) << 16);
  v16 = v13 - v12;
  v17 = *(_QWORD *)(a1 + 24);
  v18 = (v15 + v16) ^ v14;
  v19 = *(unsigned int *)(a1 + 32);
  v20 = v19 - 1;
  v19 *= 48;
  v21 = v17 + v19;
  v22 = 48LL * (v18 & v20);
  v23 = v17 + v22;
  if ( v22 != v19 )
  {
    for ( i = v17 + v22; v21 != i; i += 48 )
    {
      v25 = *(_DWORD **)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(i + 40) == v18 && v9 == v25 && v7 == *(_DWORD **)(i + 8) )
          return;
      }
      else if ( !v25 )
      {
        goto LABEL_14;
      }
    }
  }
  for ( ; v23 != v17; v17 += 48 )
  {
    v37 = *(_DWORD **)v17;
    if ( *(_QWORD *)v17 > 1u )
    {
      if ( *(_DWORD *)(v17 + 40) == v18 && v9 == v37 && v7 == *(_DWORD **)(v17 + 8) )
        return;
    }
    else if ( !v37 )
    {
      break;
    }
  }
LABEL_14:
  ++*(_DWORD *)a1;
  v26 = sub_8E7230(v11, v8, v10, v17, v23);
  v157 = (unsigned int *)v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  if ( *((_WORD *)v8 + 2) || (v27 = *(_DWORD **)(*((_QWORD *)v8 + 2) + 24LL)) == nullptr || *v27 != 5 || v27[1] )
  {
    if ( *((_WORD *)v10 + 2) )
      goto LABEL_49;
    v27 = *(_DWORD **)(*((_QWORD *)v10 + 2) + 24LL);
    if ( !v27 || *v27 != 5 )
      goto LABEL_49;
  }
  else
  {
    v8 = v10;
  }
  if ( v27[1] )
  {
LABEL_49:
    v38 = sub_15D1F10(v8);
    v41 = *(_DWORD **)(v38 + 24);
    if ( v41 )
    {
      v42 = 0;
      if ( *v41 == 5 )
        v42 = v41[1] == 1;
    }
    else
    {
      v42 = 0;
    }
    v43 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    if ( !v43 )
    {
      v152 = v38;
      v156 = *(_QWORD *)(a1 + 16);
      sub_16669E0(v156);
      v38 = v152;
      v43 = *(_QWORD *)(v156 + 8);
    }
    v154 = v38;
    v44 = sub_166A700(v43, (unsigned int)&qword_1C7F260, v42, v38, v39, v40);
    v141 = v44;
    v47 = v154;
    if ( v44 )
      ++*(_DWORD *)(v44 + 8);
    v48 = *(_QWORD *)(a1 + 16);
    v49 = *(_DWORD **)(v154 + 24);
    if ( v49 && *v49 == 5 )
      v158 = v49[1] == 1;
    v50 = *(_QWORD *)(v48 + 8);
    if ( !v50 )
    {
      v155 = *(_QWORD *)(a1 + 16);
      sub_16669E0(v48);
      v50 = *(_QWORD *)(v155 + 8);
    }
    v51 = sub_166A700(v50, (unsigned int)&qword_1C7F2A0, v158, v47, v45, v46);
    v147 = v51;
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    v52 = sub_15E1B70(**(_QWORD **)(a1 + 16));
    v144 = v52;
    if ( v52 )
      ++*(_DWORD *)(v52 + 8);
    v53 = sub_15E1B70(**(_QWORD **)(a1 + 16));
    v54 = v53;
    if ( v53 )
      ++*(_DWORD *)(v53 + 8);
    v55 = sub_15E1B70(**(_QWORD **)(a1 + 16));
    v159 = v55;
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
    v56 = sub_15E1B70(**(_QWORD **)(a1 + 16));
    v153 = v56;
    if ( v56 )
      ++*(_DWORD *)(v56 + 8);
    if ( v54 )
    {
      v36 = (*(_DWORD *)(v54 + 8))-- == 1;
      if ( v36 )
        sub_15D7BC0(*(_QWORD *)v160, v54);
    }
    if ( v144 )
    {
      v138 = *(_DWORD *)(v144 + 8);
      *(_DWORD *)(v144 + 8) = v138 - 1;
      if ( v138 == 1 )
        sub_15D7BC0(*(_QWORD *)v160, v144);
    }
    if ( v147 )
    {
      v145 = *(_DWORD *)(v147 + 8);
      *(_DWORD *)(v147 + 8) = v145 - 1;
      if ( v145 == 1 )
        sub_15D7BC0(*(_QWORD *)v160, v147);
    }
    if ( v141 )
    {
      v148 = *(_DWORD *)(v141 + 8);
      *(_DWORD *)(v141 + 8) = v148 - 1;
      if ( v148 == 1 )
        sub_15D7BC0(*(_QWORD *)v160, v141);
    }
    goto LABEL_83;
  }
  v28 = sub_15E1B70(**(_QWORD **)(a1 + 16));
  v159 = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v29 = sub_15E1B70(**(_QWORD **)(a1 + 16));
  v153 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
LABEL_83:
  v57 = (_QWORD *)sub_180C100(v11 + 8400, 32);
  v58 = *(_QWORD **)(v11 + 9456);
  *v57 = off_1C559E0;
  v57[2] = v9;
  v57[3] = v7;
  v57[1] = a1 + 24;
  if ( v58 )
  {
    v59 = *((_DWORD *)v58 - 1);
    if ( v59 == *((_DWORD *)v58 - 2) )
    {
      v99 = (3 * v59 + 1) >> 1;
      v100 = 8 * v99 + 8;
      if ( 8 * v59 + 8 >= v100 || v59 >= v99 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v167, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v167);
        sub_233E40((__int64)v167);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v101 = (unsigned int *)sub_186B300(v58 - 1, v100);
      v102 = v101[1];
      v58 = v101 + 2;
      *(_QWORD *)(v11 + 9456) = v101 + 2;
      *v101 = v99;
      LODWORD(v101) = v102;
      v62 = &v58[v102];
      v61 = (_DWORD)v101 + 1;
    }
    else
    {
      v60 = v59;
      v61 = v59 + 1;
      v62 = &v58[v60];
    }
  }
  else
  {
    v123 = (_QWORD *)sub_186B270(0x18u);
    *v123 = 2;
    v61 = 1;
    v58 = v123 + 1;
    *(_QWORD *)(v11 + 9456) = v58;
    v62 = v58;
  }
  *v62 = v57;
  *((_DWORD *)v58 - 1) = v61;
  v63 = *(_DWORD *)(*(_QWORD *)v9 + 12LL);
  v64 = (*(_DWORD *)(*(_QWORD *)v7 + 12LL) - v63) ^ (v63 << 8);
  v65 = ((v64 ^ ((v63 - v64) << 16)) + v64 - v63) ^ ((v63 - v64) << 10);
  v66 = *(unsigned int *)(a1 + 32);
  v149 = v65;
  v67 = 2 * v66;
  if ( 3 * (int)v66 < (unsigned int)(4 * (*(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40))) )
  {
    v103 = v67;
    v139 = 2 * v66;
    v142 = 48LL * v67;
    v104 = (__m128i *)sub_186B270(v142);
    v105 = v139;
    v68 = v104;
    v70 = v142;
    if ( v139 )
    {
      v106 = &v104[3 * v103];
      do
      {
        v104->m128i_i64[0] = 0;
        v104 += 6;
        v104[-3].m128i_i64[0] = 0;
      }
      while ( v106 != v104 );
      v107 = v68;
      if ( (((_BYTE)v106 - (_BYTE)v68) & 0x10) == 0 || (v68->m128i_i64[1] = 0, v107 = v68 + 3, &v68[3] != v106) )
      {
        do
        {
          v107->m128i_i64[1] = 0;
          v107 += 6;
          v107[-3].m128i_i64[1] = 0;
        }
        while ( v107 != v106 );
      }
      v108 = v68;
      do
      {
        v108[2].m128i_i64[0] = 0;
        v108 += 3;
        v108[-2] = 0;
        v108[-1].m128i_i32[2] = 0;
      }
      while ( v108 != v106 );
    }
    v69 = v139 - 1;
    v71 = &v68[v142 / 0x10];
    v109 = *(const __m128i **)(a1 + 24);
    v110 = (__m128i *)&v109[3 * *(unsigned int *)(a1 + 32)];
    if ( v109 != v110 )
    {
      do
      {
        if ( v109->m128i_i64[0] > 1uLL )
        {
          v111 = 48LL * (v109[2].m128i_i32[2] & v69);
          v112 = &v68[(unsigned __int64)v111 / 0x10];
          if ( v142 == v111 )
          {
LABEL_164:
            if ( v68 == v112 )
            {
LABEL_177:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v113 = v68;
            while ( v113->m128i_i64[0] )
            {
              v113 += 3;
              if ( v112 == v113 )
                goto LABEL_177;
            }
          }
          else
          {
            v113 = &v68[(unsigned __int64)v111 / 0x10];
            while ( v113->m128i_i64[0] )
            {
              v113 += 3;
              if ( v71 == v113 )
                goto LABEL_164;
            }
          }
          *v113 = _mm_loadu_si128(v109);
          v113[1] = _mm_loadu_si128(v109 + 1);
          v113[2] = _mm_loadu_si128(v109 + 2);
        }
        v109 += 3;
      }
      while ( v110 != v109 );
      v110 = *(__m128i **)(a1 + 24);
    }
    if ( v110 )
    {
      sub_186B220(v110);
      v105 = v139;
      v69 = v139 - 1;
      v70 = v142;
    }
    *(_QWORD *)(a1 + 24) = v68;
    *(_DWORD *)(a1 + 32) = v105;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    v68 = *(__m128i **)(a1 + 24);
    v69 = v66 - 1;
    v70 = 48 * v66;
    v71 = &v68[3 * v66];
  }
  v72 = v149 & v69;
  v73 = &v68[3 * v72];
  if ( v70 == 48 * v72 )
  {
    v75 = nullptr;
LABEL_134:
    if ( v68 == v73 )
    {
LABEL_173:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v98 = (_DWORD *)v68->m128i_i64[0];
      if ( v68->m128i_i64[0] > 1uLL )
      {
        if ( v68[2].m128i_i32[2] == v149 && v9 == v98 && v7 == (_DWORD *)v68->m128i_i64[1] )
        {
          v68->m128i_i64[0] = (__int64)v9;
          v68[1].m128i_i64[0] = (__int64)v157;
          v68->m128i_i64[1] = (__int64)v7;
          v68[1].m128i_i64[1] = v159;
          v68[2].m128i_i64[0] = v153;
          v68[2].m128i_i32[2] = v149;
          goto LABEL_100;
        }
      }
      else
      {
        if ( !v98 )
        {
          if ( v75 )
            --*(_DWORD *)(a1 + 40);
          else
            v75 = v68;
          goto LABEL_176;
        }
        v75 = v68;
      }
      v68 += 3;
      if ( v73 == v68 )
        goto LABEL_173;
    }
  }
  v74 = &v68[3 * v72];
  v75 = nullptr;
  while ( 1 )
  {
    v76 = (_DWORD *)v74->m128i_i64[0];
    if ( v74->m128i_i64[0] <= 1uLL )
      break;
    if ( v74[2].m128i_i32[2] == v149 && v9 == v76 && v7 == (_DWORD *)v74->m128i_i64[1] )
    {
      v74->m128i_i64[0] = (__int64)v9;
      v74[1].m128i_i64[0] = (__int64)v157;
      v74->m128i_i64[1] = (__int64)v7;
      v74[1].m128i_i64[1] = v159;
      v74[2].m128i_i64[0] = v153;
      v74[2].m128i_i32[2] = v149;
      goto LABEL_100;
    }
LABEL_92:
    v74 += 3;
    if ( v71 == v74 )
      goto LABEL_134;
  }
  if ( v76 )
  {
    v75 = v74;
    goto LABEL_92;
  }
  if ( v75 )
    --*(_DWORD *)(a1 + 40);
  else
    v75 = v74;
LABEL_176:
  v75->m128i_i64[0] = (__int64)v9;
  v75->m128i_i64[1] = (__int64)v7;
  v75[1].m128i_i64[0] = (__int64)v157;
  v75[1].m128i_i64[1] = v159;
  v75[2].m128i_i64[0] = v153;
  v75[2].m128i_i32[2] = v149;
  ++*(_DWORD *)(a1 + 36);
LABEL_100:
  sub_B6F780(v11);
  v77 = *(_DWORD *)(*(_QWORD *)(v11 + 8832) + 4LL * *v157);
  v146 = 2 * v77;
  sub_B6F780(v11);
  sub_B6F780(v11);
  v150 = sub_B645B0(v11, v159);
  v78 = sub_B645B0(v11, v153);
  if ( (*(_BYTE *)(*(_QWORD *)(v11 + 8872) + 16LL * (v77 & 0x7FFFFFFF) + 11) & 0x20) != 0 )
  {
    sub_8F18B0(v11, v150 >> 1);
    sub_8F18B0(v11, v78 >> 1);
  }
  v79 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( !*(_DWORD *)(*(_QWORD *)v160 + 712LL) )
    goto LABEL_110;
  v80 = *(_QWORD *)(a1 + 56);
  if ( !v80 || (v81 = *(unsigned int *)(v80 - 4), !(_DWORD)v81) )
  {
    sub_180C5A0(&v165, "triangle-eq");
    v166.m128i_i8[8] = 2;
    v166.m128i_i64[0] = v165;
    v82 = *(_QWORD **)(a1 + 56);
    if ( v82 )
    {
      v83 = *((unsigned int *)v82 - 1);
      if ( (_DWORD)v83 != *((_DWORD *)v82 - 2) )
      {
        *(__m128i *)&v82[2 * v83] = _mm_load_si128(&v166);
        goto LABEL_108;
      }
      v143 = (unsigned int)(3 * v83 + 1) >> 1;
      v114 = 16 * v143 + 8;
      if ( 16 * (int)v83 + 8 >= v114 || (unsigned int)v83 >= (unsigned int)(3 * v83 + 1) >> 1 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v167, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v167);
        sub_233E40((__int64)v167);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v115 = (unsigned int *)sub_186B270(v114);
      v82 = v115 + 2;
      v116 = *(const __m128i **)(a1 + 56);
      if ( v116 )
      {
        v117 = v116[-1].m128i_u32[3];
        v118 = *(const __m128i **)(a1 + 56);
        v119 = (__m128i *)(v115 + 2);
        v115[1] = v117;
        v120 = &v116[v117];
        if ( v116 != v120 )
        {
          do
          {
            v36 = v118->m128i_i8[8] == 0;
            *v119 = _mm_loadu_si128(v118);
            v118->m128i_i32[0] = 0;
            if ( !v36 )
              v118->m128i_i8[8] = 0;
            ++v118;
            ++v119;
          }
          while ( v118 != v120 );
        }
        v137 = v115;
        v140 = v115 + 2;
        sub_186B220(&v116[-1].m128i_u64[1]);
        v115 = v137;
        v82 = v140;
        v121 = (__m128i *)&v140[4 * v137[1]];
      }
      else
      {
        v115[1] = 0;
        v121 = (__m128i *)(v115 + 2);
      }
      v122 = v166.m128i_i8[8];
      *(_QWORD *)(a1 + 56) = v82;
      *v115 = v143;
    }
    else
    {
      v128 = (_QWORD *)sub_186B270(0x28u);
      *v128 = 2;
      v82 = v128 + 1;
      v122 = v166.m128i_i8[8];
      *(_QWORD *)(a1 + 56) = v128 + 1;
      v121 = (__m128i *)(v128 + 1);
    }
    *v121 = _mm_load_si128(&v166);
    if ( v122 )
    {
LABEL_108:
      v166.m128i_i32[0] = 0;
      v166.m128i_i8[8] = 0;
    }
    else
    {
      v166.m128i_i32[0] = 0;
    }
    ++*((_DWORD *)v82 - 1);
    sub_15D0DF0(&v166);
LABEL_110:
    v81 = 0;
    v80 = *(_QWORD *)(a1 + 56);
    if ( v80 )
      v81 = *(unsigned int *)(v80 - 4);
  }
  sub_B6A470(v11, v79, v146 ^ 1u, v150, v81, v80);
  v84 = *(_QWORD *)(a1 + 56);
  if ( v84 )
    v85 = *(unsigned int *)(v84 - 4);
  else
    v85 = 0;
  sub_B6A470(v11, v79, v146 ^ 1u, v78, v85, v84);
  v86 = *(_QWORD *)(a1 + 56);
  if ( v86 )
    v87 = *(_DWORD *)(v86 - 4);
  else
    v87 = 0;
  sub_B6A4A0(v11, v79, v146, v150 ^ 1, v78 ^ 1, v87, *(_QWORD *)(a1 + 56));
  v88 = v136;
  if ( *(_BYTE *)(sub_966740(*(_QWORD *)(a1 + 8), v136) + 356) )
  {
    v89 = *(_QWORD *)(a1 + 56);
    if ( v89 )
      v90 = *(unsigned int *)(v89 - 4);
    else
      v90 = 0;
    v88 = v79;
    sub_B6A470(v11, v79, v150, v78, v90, v89);
  }
  if ( (unsigned int)sub_8E7030(v11) )
  {
    v91 = *(_QWORD *)v7;
    v92 = *(_QWORD *)v9;
    v93 = sub_918C00(*(_QWORD *)(v11 + 7488));
    v94 = (_QWORD *)sub_180C100(v93, 48);
    v95 = *(_QWORD *)(v11 + 7488);
    v96 = *(_QWORD *)v9;
    *v94 = off_1C55A08;
    v94[1] = v92;
    v94[3] = v157;
    v94[2] = v91;
    v94[4] = v159;
    v151 = v94;
    v94[5] = v153;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v95 + 16LL))(v95, v96);
    v88 = *(_QWORD *)v7;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(v11 + 7488) + 16LL))(
      *(_QWORD *)(v11 + 7488),
      *(_QWORD *)v7,
      v151);
  }
  if ( !*(_BYTE *)(sub_966740(*(_QWORD *)(a1 + 8), v88) + 365) )
  {
    v97 = *(_DWORD *)(v11 + 9468);
    if ( *(_DWORD *)(v11 + 9464) != v97 && v97 >= v9[12] && v97 >= v7[12] )
    {
      v124 = *(_DWORD **)(a1 + 48);
      if ( v124 )
      {
        LODWORD(v125) = *(v124 - 1);
        v126 = 4LL * (unsigned int)v125;
        if ( (_DWORD)v125 == *(v124 - 2) )
        {
          v129 = (unsigned int)(3 * v125 + 1) >> 1;
          v130 = 16 * v129 + 8;
          if ( 16 * (int)v125 + 8 >= v130 || (unsigned int)v125 >= v129 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v167, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v167);
            sub_233E40((__int64)v167);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v131 = (unsigned int *)sub_186B270(v130);
          v124 = v131 + 2;
          v132 = *(_QWORD *)(a1 + 48);
          if ( v132 )
          {
            v133 = *(unsigned int *)(v132 - 4);
            v134 = 0;
            v131[1] = v133;
            v135 = 16 * v133;
            if ( v135 )
            {
              do
              {
                *(__m128i *)&v131[v134 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v132 + v134));
                v134 += 16LL;
              }
              while ( v135 != v134 );
            }
            sub_186B220((void *)(v132 - 8));
            v125 = v131[1];
            v126 = 4 * v125;
          }
          else
          {
            v126 = 0;
            LODWORD(v125) = 0;
            v131[1] = 0;
          }
          *v131 = v129;
          *(_QWORD *)(a1 + 48) = v124;
        }
      }
      else
      {
        v125 = sub_186B270(0x28u);
        *(_QWORD *)v125 = 2;
        v126 = 0;
        v124 = (_DWORD *)(v125 + 8);
        *(_QWORD *)(a1 + 48) = v125 + 8;
        LODWORD(v125) = 0;
      }
      v127 = &v124[v126];
      *v127 = v9;
      v127[1] = v7;
      *(v124 - 1) = v125 + 1;
    }
  }
  if ( v153 )
  {
    v162 = *(_DWORD *)(v153 + 8);
    *(_DWORD *)(v153 + 8) = v162 - 1;
    if ( v162 == 1 )
      sub_15D7BC0(*(_QWORD *)v160, v153);
  }
  if ( v159 )
  {
    v163 = *(_DWORD *)(v159 + 8);
    *(_DWORD *)(v159 + 8) = v163 - 1;
    if ( v163 == 1 )
      sub_15D7BC0(*(_QWORD *)v160, v159);
  }
  v164 = v157[2];
  v157[2] = v164 - 1;
  if ( v164 == 1 )
    sub_15D7BC0(*(_QWORD *)v160, v157);
}

