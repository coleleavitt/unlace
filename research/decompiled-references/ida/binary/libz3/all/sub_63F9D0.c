__m128i *__fastcall sub_63F9D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rcx
  int v11; // esi
  unsigned int v12; // edx
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rcx
  unsigned int v20; // edx
  __int64 *v21; // rdi
  __int64 v22; // rdx
  __int64 *v23; // r8
  __int64 *i; // rax
  __int64 v25; // rdx
  _DWORD *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 *v31; // rsi
  __int64 v32; // rcx
  __m128i *v33; // r13
  unsigned int v34; // r9d
  __int64 v35; // rcx
  __int64 *v36; // r14
  int v37; // esi
  __int64 v38; // r9
  __m128i *v39; // rdi
  __m128i *v40; // rax
  __int64 *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 *v50; // rcx
  __int64 v51; // r8
  __int64 *v52; // r14
  unsigned int v53; // r9d
  __int64 v54; // r8
  __int64 *v55; // r15
  int v56; // ecx
  __int64 v57; // r9
  __int64 *v58; // rdi
  __int64 *v59; // rax
  __int64 *v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rax
  unsigned int v63; // r13d
  size_t v64; // rsi
  unsigned int *v65; // rax
  unsigned int v66; // r13d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __m128i *v71; // r13
  unsigned int v72; // r9d
  __int64 v73; // rcx
  __m128i *v74; // r14
  int v75; // esi
  __int64 v76; // r9
  __m128i *v77; // rdi
  __m128i *result; // rax
  __int64 *v79; // rcx
  __int64 v80; // rdx
  __m128i *v81; // rax
  int v82; // r10d
  __m128i *v83; // r8
  const __m128i *v84; // r15
  __m128i *v85; // r11
  __int64 v86; // rax
  __m128i *v87; // rdx
  __m128i *v88; // rax
  __m128i v89; // xmm0
  __m128i *v90; // rax
  int v91; // r10d
  __m128i *v92; // r8
  const __m128i *v93; // r15
  __m128i *v94; // r11
  __int64 v95; // rax
  __m128i *v96; // rdx
  __m128i *v97; // rax
  __m128i v98; // xmm0
  unsigned int v99; // r14d
  unsigned int v100; // ecx
  unsigned int *v101; // rax
  __int64 v102; // rcx
  __int64 *v103; // rax
  int v104; // r10d
  char *v105; // rcx
  char *v106; // r11
  __int64 v107; // rax
  __int64 *v108; // rdx
  __int64 *v109; // rax
  __int64 v110; // rdx
  _QWORD *v111; // rax
  _QWORD *v112; // rdx
  __int64 n; // [rsp+8h] [rbp-90h]
  unsigned int nc; // [rsp+8h] [rbp-90h]
  __int64 na; // [rsp+8h] [rbp-90h]
  unsigned int nd; // [rsp+8h] [rbp-90h]
  __int64 nb; // [rsp+8h] [rbp-90h]
  unsigned int ne; // [rsp+8h] [rbp-90h]
  int v119; // [rsp+10h] [rbp-88h]
  __int64 v120; // [rsp+10h] [rbp-88h]
  int v121; // [rsp+10h] [rbp-88h]
  __int64 v122; // [rsp+10h] [rbp-88h]
  int v123; // [rsp+10h] [rbp-88h]
  __int64 v124; // [rsp+10h] [rbp-88h]
  int v125; // [rsp+18h] [rbp-80h]
  int v126; // [rsp+18h] [rbp-80h]
  int v127; // [rsp+18h] [rbp-80h]
  __int64 v128[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = a3;
  v9 = *(unsigned int *)(a2 + 160);
  v10 = *(__int64 **)(a2 + 152);
  v11 = *(_DWORD *)(a3 + 12);
  v12 = v9 - 1;
  v9 *= 8;
  v13 = (__int64 *)((char *)v10 + v9);
  v14 = 8LL * (v11 & v12);
  v15 = &v10[(unsigned __int64)v14 / 8];
  if ( v14 == v9 )
  {
LABEL_50:
    if ( v10 == v15 )
      goto LABEL_8;
    while ( 1 )
    {
      v45 = *v10;
      if ( (unsigned __int64)*v10 > 1 )
      {
        if ( *(_DWORD *)(v45 + 12) == v11 && v8 == v45 )
          goto LABEL_58;
      }
      else if ( !v45 )
      {
        goto LABEL_8;
      }
      if ( v15 == ++v10 )
        goto LABEL_8;
    }
  }
  v16 = &v10[(unsigned __int64)v14 / 8];
  while ( 1 )
  {
    v17 = *v16;
    if ( (unsigned __int64)*v16 <= 1 )
    {
      if ( !v17 )
        goto LABEL_8;
      goto LABEL_5;
    }
    if ( *(_DWORD *)(v17 + 12) == v11 && v8 == v17 )
      break;
LABEL_5:
    if ( v13 == ++v16 )
      goto LABEL_50;
  }
LABEL_58:
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  v46 = *(_QWORD **)(a1 + 232);
  if ( v46 )
  {
    v47 = *((_DWORD *)v46 - 1);
    if ( v47 != *((_DWORD *)v46 - 2) )
    {
      v48 = v47;
      v49 = v47 + 1;
      v50 = &v46[v48];
      goto LABEL_63;
    }
    v99 = (3 * v47 + 1) >> 1;
    v100 = 8 * v99 + 8;
    if ( 8 * v47 + 8 < v100 && v47 < v99 )
    {
      v101 = (unsigned int *)sub_186B300(v46 - 1, v100);
      v102 = v101[1];
      v46 = v101 + 2;
      *v101 = v99;
      *(_QWORD *)(a1 + 232) = v101 + 2;
      LODWORD(v101) = v102;
      v50 = &v46[v102];
      v49 = (_DWORD)v101 + 1;
      goto LABEL_63;
    }
LABEL_206:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v128, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v128);
    sub_233E40((__int64)v128);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v112 = (_QWORD *)sub_186B270(0x18u);
  *v112 = 2;
  v49 = 1;
  v46 = v112 + 1;
  *(_QWORD *)(a1 + 232) = v46;
  v50 = v46;
LABEL_63:
  *v50 = a4;
  *((_DWORD *)v46 - 1) = v49;
  v51 = *(unsigned int *)(a1 + 160);
  if ( 3 * (int)v51 < (unsigned int)(4 * (*(_DWORD *)(a1 + 164) + *(_DWORD *)(a1 + 168))) )
  {
    v123 = 2 * v51;
    nb = 8LL * (unsigned int)(2 * v51);
    v103 = (__int64 *)sub_186B270(nb);
    v104 = v123;
    v54 = nb;
    v52 = v103;
    if ( v123 )
    {
      memset(v103, 0, nb);
      v54 = nb;
      v104 = v123;
    }
    v105 = *(char **)(a1 + 152);
    v53 = v104 - 1;
    v55 = (__int64 *)((char *)v52 + v54);
    v106 = &v105[8 * *(unsigned int *)(a1 + 160)];
    if ( v105 != v106 )
    {
      do
      {
        while ( *(_QWORD *)v105 <= 1u )
        {
          v105 += 8;
          if ( v106 == v105 )
            goto LABEL_176;
        }
        v107 = 8LL * (*(_DWORD *)(*(_QWORD *)v105 + 12LL) & v53);
        v108 = &v52[(unsigned __int64)v107 / 8];
        if ( v54 == v107 )
        {
LABEL_180:
          if ( v52 == v108 )
          {
LABEL_188:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v109 = v52;
          while ( *v109 )
          {
            if ( v108 == ++v109 )
              goto LABEL_188;
          }
        }
        else
        {
          v109 = &v52[(unsigned __int64)v107 / 8];
          while ( *v109 )
          {
            if ( v55 == ++v109 )
              goto LABEL_180;
          }
        }
        v110 = *(_QWORD *)v105;
        v105 += 8;
        *v109 = v110;
      }
      while ( v106 != v105 );
LABEL_176:
      v106 = *(char **)(a1 + 152);
    }
    if ( v106 )
    {
      v127 = v104;
      v124 = v54;
      ne = v104 - 1;
      sub_186B220(v106);
      v104 = v127;
      v54 = v124;
      v53 = ne;
    }
    *(_QWORD *)(a1 + 152) = v52;
    *(_DWORD *)(a1 + 160) = v104;
    *(_DWORD *)(a1 + 168) = 0;
  }
  else
  {
    v52 = *(__int64 **)(a1 + 152);
    v53 = v51 - 1;
    v54 = 8 * v51;
    v55 = (__int64 *)((char *)v52 + v54);
  }
  v56 = *(_DWORD *)(a4 + 12);
  v57 = 8LL * (v56 & v53);
  v58 = &v52[(unsigned __int64)v57 / 8];
  if ( v57 != v54 )
  {
    v59 = &v52[(unsigned __int64)v57 / 8];
    v60 = nullptr;
    while ( 1 )
    {
      v61 = *v59;
      if ( (unsigned __int64)*v59 > 1 )
      {
        if ( *(_DWORD *)(v61 + 12) == v56 && a4 == v61 )
        {
          *v59 = a4;
          v11 = *(_DWORD *)(v8 + 12);
          goto LABEL_8;
        }
      }
      else
      {
        if ( !v61 )
        {
          if ( v60 )
            goto LABEL_186;
          v60 = v59;
          goto LABEL_187;
        }
        v60 = v59;
      }
      if ( ++v59 == v55 )
        goto LABEL_76;
    }
  }
  v60 = nullptr;
LABEL_76:
  while ( 2 )
  {
    if ( v58 == v52 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v62 = *v52;
    if ( (unsigned __int64)*v52 > 1 )
    {
      if ( *(_DWORD *)(v62 + 12) == v56 && a4 == v62 )
      {
        *v52 = a4;
        v11 = *(_DWORD *)(v8 + 12);
        goto LABEL_8;
      }
      goto LABEL_75;
    }
    if ( v62 )
    {
      v60 = v52;
LABEL_75:
      ++v52;
      continue;
    }
    break;
  }
  if ( v60 )
LABEL_186:
    --*(_DWORD *)(a1 + 168);
  else
    v60 = v52;
LABEL_187:
  *v60 = a4;
  v11 = *(_DWORD *)(v8 + 12);
  ++*(_DWORD *)(a1 + 164);
LABEL_8:
  v18 = *(unsigned int *)(a2 + 208);
  v19 = *(__int64 **)(a2 + 200);
  v20 = v18 - 1;
  v18 *= 16;
  v21 = (__int64 *)((char *)v19 + v18);
  v22 = 16LL * (v11 & v20);
  v23 = &v19[(unsigned __int64)v22 / 8];
  if ( v22 != v18 )
  {
    for ( i = &v19[(unsigned __int64)v22 / 8]; v21 != i; i += 2 )
    {
      v25 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v25 + 12) == v11 && v8 == v25 )
        {
LABEL_41:
          v8 = i[1];
          goto LABEL_15;
        }
      }
      else if ( !v25 )
      {
        goto LABEL_15;
      }
    }
  }
  for ( ; v23 != v19; v19 += 2 )
  {
    v44 = *v19;
    if ( (unsigned __int64)*v19 > 1 )
    {
      if ( *(_DWORD *)(v44 + 12) == v11 && v8 == v44 )
      {
        i = v19;
        goto LABEL_41;
      }
    }
    else if ( !v44 )
    {
      break;
    }
  }
LABEL_15:
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  v26 = *(_DWORD **)(a1 + 232);
  if ( !v26 )
  {
    v111 = (_QWORD *)sub_186B270(0x18u);
    v26 = v111 + 1;
    v111[1] = a4;
    *v111 = 0x100000002LL;
    v30 = 1;
    *(_QWORD *)(a1 + 232) = v26;
    if ( v8 )
      goto LABEL_21;
    goto LABEL_23;
  }
  v27 = *(v26 - 1);
  v28 = *(v26 - 2);
  if ( v27 != v28 )
  {
    v29 = v27;
    v30 = v27 + 1;
    v31 = (__int64 *)&v26[2 * v29];
    goto LABEL_20;
  }
  v66 = (3 * v28 + 1) >> 1;
  v67 = 8 * v66 + 8;
  if ( 8 * v28 + 8 >= (unsigned int)v67 || v28 >= v66 )
    goto LABEL_206;
  v68 = (unsigned int *)sub_186B300(v26 - 2, v67);
  v69 = v68[1];
  v26 = v68 + 2;
  *v68 = v66;
  *(_QWORD *)(a1 + 232) = v68 + 2;
  LODWORD(v68) = v69;
  v31 = (__int64 *)&v26[2 * v69];
  v28 = v66;
  v30 = (_DWORD)v68 + 1;
LABEL_20:
  *v31 = a4;
  *(v26 - 1) = v30;
  if ( v8 )
  {
LABEL_21:
    ++*(_DWORD *)(v8 + 8);
    v30 = *(v26 - 1);
    v28 = *(v26 - 2);
  }
  if ( v30 == v28 )
  {
    v63 = (3 * v30 + 1) >> 1;
    v64 = 8 * v63 + 8;
    if ( 8 * v30 + 8 < (unsigned int)v64 && v30 < v63 )
    {
      v65 = (unsigned int *)sub_186B300(v26 - 2, v64);
      v26 = v65 + 2;
      *v65 = v63;
      v30 = v65[1];
      *(_QWORD *)(a1 + 232) = v26;
      goto LABEL_23;
    }
    goto LABEL_206;
  }
LABEL_23:
  *(_QWORD *)&v26[2 * v30] = v8;
  *(v26 - 1) = v30 + 1;
  v32 = *(unsigned int *)(a1 + 184);
  if ( 3 * (int)v32 < (unsigned int)(4 * (*(_DWORD *)(a1 + 188) + *(_DWORD *)(a1 + 192))) )
  {
    v121 = 2 * v32;
    na = 16LL * (unsigned int)(2 * v32);
    v90 = (__m128i *)sub_186B270(na);
    v35 = na;
    v91 = v121;
    v33 = v90;
    v92 = &v90[(unsigned __int64)na / 0x10];
    if ( v121 )
    {
      if ( (na & 0x10) == 0 || (*v90 = 0, ++v90, v90 != v92) )
      {
        do
        {
          *v90 = 0;
          v90 += 2;
          v90[-1] = 0;
        }
        while ( v90 != v92 );
      }
    }
    v93 = *(const __m128i **)(a1 + 176);
    v34 = v121 - 1;
    v36 = (__int64 *)v92;
    v94 = (__m128i *)&v93[*(unsigned int *)(a1 + 184)];
    if ( v93 != v94 )
    {
      do
      {
        while ( v93->m128i_i64[0] <= 1uLL )
        {
          if ( v94 == ++v93 )
            goto LABEL_140;
        }
        v95 = 16LL * (*(_DWORD *)(v93->m128i_i64[0] + 12) & v34);
        v96 = &v33[(unsigned __int64)v95 / 0x10];
        if ( na == v95 )
        {
LABEL_144:
          if ( v33 == v96 )
          {
LABEL_160:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v97 = v33;
          while ( v97->m128i_i64[0] )
          {
            if ( v96 == ++v97 )
              goto LABEL_160;
          }
        }
        else
        {
          v97 = &v33[(unsigned __int64)v95 / 0x10];
          while ( v97->m128i_i64[0] )
          {
            if ( v92 == ++v97 )
              goto LABEL_144;
          }
        }
        v98 = _mm_loadu_si128(v93++);
        *v97 = v98;
      }
      while ( v94 != v93 );
LABEL_140:
      v94 = *(__m128i **)(a1 + 176);
    }
    if ( v94 )
    {
      v126 = v121;
      v122 = na;
      nd = v91 - 1;
      sub_186B220(v94);
      v91 = v126;
      v35 = v122;
      v34 = nd;
    }
    *(_QWORD *)(a1 + 176) = v33;
    *(_DWORD *)(a1 + 184) = v91;
    *(_DWORD *)(a1 + 192) = 0;
  }
  else
  {
    v33 = *(__m128i **)(a1 + 176);
    v34 = v32 - 1;
    v35 = 16 * v32;
    v36 = (__int64 *)((char *)v33->m128i_i64 + v35);
  }
  v37 = *(_DWORD *)(v8 + 12);
  v38 = 16LL * (v37 & v34);
  v39 = &v33[(unsigned __int64)v38 / 0x10];
  if ( v38 != v35 )
  {
    v40 = &v33[(unsigned __int64)v38 / 0x10];
    v41 = nullptr;
    while ( 1 )
    {
      v42 = v40->m128i_i64[0];
      if ( v40->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v42 + 12) == v37 && v8 == v42 )
        {
          v40->m128i_i64[0] = v8;
          v40->m128i_i64[1] = a4;
          goto LABEL_87;
        }
      }
      else
      {
        if ( !v42 )
        {
          if ( v41 )
            goto LABEL_153;
          v41 = (__int64 *)v40;
          goto LABEL_154;
        }
        v41 = (__int64 *)v40;
      }
      if ( ++v40 == (__m128i *)v36 )
        goto LABEL_36;
    }
  }
  v41 = nullptr;
LABEL_36:
  while ( 2 )
  {
    if ( v39 == v33 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v43 = v33->m128i_i64[0];
    if ( v33->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v43 + 12) == v37 && v8 == v43 )
      {
        v33->m128i_i64[0] = v8;
        v33->m128i_i64[1] = a4;
        goto LABEL_87;
      }
      goto LABEL_35;
    }
    if ( v43 )
    {
      v41 = (__int64 *)v33;
LABEL_35:
      ++v33;
      continue;
    }
    break;
  }
  if ( v41 )
LABEL_153:
    --*(_DWORD *)(a1 + 192);
  else
    v41 = (__int64 *)v33;
LABEL_154:
  *v41 = v8;
  v41[1] = a4;
  ++*(_DWORD *)(a1 + 188);
LABEL_87:
  v70 = *(unsigned int *)(a1 + 208);
  if ( 3 * (int)v70 < (unsigned int)(4 * (*(_DWORD *)(a1 + 212) + *(_DWORD *)(a1 + 216))) )
  {
    v119 = 2 * v70;
    n = 16LL * (unsigned int)(2 * v70);
    v81 = (__m128i *)sub_186B270(n);
    v73 = n;
    v82 = v119;
    v71 = v81;
    v83 = &v81[(unsigned __int64)n / 0x10];
    if ( v119 )
    {
      if ( (n & 0x10) == 0 || (*v81 = 0, ++v81, v81 != v83) )
      {
        do
        {
          *v81 = 0;
          v81 += 2;
          v81[-1] = 0;
        }
        while ( v81 != v83 );
      }
    }
    v84 = *(const __m128i **)(a1 + 200);
    v72 = v119 - 1;
    v74 = v83;
    v85 = (__m128i *)&v84[*(unsigned int *)(a1 + 208)];
    if ( v84 != v85 )
    {
      do
      {
        while ( v84->m128i_i64[0] <= 1uLL )
        {
          if ( v85 == ++v84 )
            goto LABEL_118;
        }
        v86 = 16LL * (*(_DWORD *)(v84->m128i_i64[0] + 12) & v72);
        v87 = &v71[(unsigned __int64)v86 / 0x10];
        if ( n == v86 )
        {
LABEL_122:
          if ( v71 == v87 )
          {
LABEL_159:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v88 = v71;
          while ( v88->m128i_i64[0] )
          {
            if ( v87 == ++v88 )
              goto LABEL_159;
          }
        }
        else
        {
          v88 = &v71[(unsigned __int64)v86 / 0x10];
          while ( v88->m128i_i64[0] )
          {
            if ( v83 == ++v88 )
              goto LABEL_122;
          }
        }
        v89 = _mm_loadu_si128(v84++);
        *v88 = v89;
      }
      while ( v85 != v84 );
LABEL_118:
      v85 = *(__m128i **)(a1 + 200);
    }
    if ( v85 )
    {
      v125 = v119;
      v120 = n;
      nc = v82 - 1;
      sub_186B220(v85);
      v82 = v125;
      v73 = v120;
      v72 = nc;
    }
    *(_QWORD *)(a1 + 200) = v71;
    *(_DWORD *)(a1 + 208) = v82;
    *(_DWORD *)(a1 + 216) = 0;
  }
  else
  {
    v71 = *(__m128i **)(a1 + 200);
    v72 = v70 - 1;
    v73 = 16 * v70;
    v74 = (__m128i *)((char *)v71 + v73);
  }
  v75 = *(_DWORD *)(a4 + 12);
  v76 = 16LL * (v75 & v72);
  v77 = &v71[(unsigned __int64)v76 / 0x10];
  if ( v76 != v73 )
  {
    result = &v71[(unsigned __int64)v76 / 0x10];
    v79 = nullptr;
    while ( 1 )
    {
      v80 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v80 + 12) == v75 && a4 == v80 )
        {
          result->m128i_i64[0] = a4;
          result->m128i_i64[1] = v8;
          return result;
        }
      }
      else
      {
        if ( !v80 )
        {
          if ( v79 )
            goto LABEL_150;
          v79 = (__int64 *)result;
          goto LABEL_151;
        }
        v79 = (__int64 *)result;
      }
      if ( ++result == v74 )
        goto LABEL_100;
    }
  }
  v79 = nullptr;
LABEL_100:
  while ( 2 )
  {
    if ( v77 == v71 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v71->m128i_i64[0];
    if ( v71->m128i_i64[0] > 1uLL )
    {
      if ( result->m128i_i32[3] == v75 && (__m128i *)a4 == result )
      {
        v71->m128i_i64[0] = a4;
        v71->m128i_i64[1] = v8;
        return result;
      }
      goto LABEL_99;
    }
    if ( result )
    {
      v79 = (__int64 *)v71;
LABEL_99:
      ++v71;
      continue;
    }
    break;
  }
  if ( v79 )
LABEL_150:
    --*(_DWORD *)(a1 + 216);
  else
    v79 = (__int64 *)v71;
LABEL_151:
  *v79 = a4;
  v79[1] = v8;
  ++*(_DWORD *)(a1 + 212);
  return result;
}

