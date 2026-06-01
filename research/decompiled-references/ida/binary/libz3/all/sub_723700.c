__int64 __fastcall sub_723700(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v6; // r9
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // eax
  __int64 *v12; // rcx
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 *i; // rax
  __int64 v20; // rdx
  __m128i *v21; // rax
  __int64 v22; // rsi
  __int64 *v23; // r13
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // r8
  int v31; // eax
  __m128i v32; // xmm1
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // edx
  int v36; // r15d
  __m128i *v37; // rbx
  __int32 v38; // eax
  __int64 v39; // r9
  __m128i *v40; // r14
  __int64 v41; // r10
  __m128i *v42; // rsi
  __m128i *v43; // rax
  __m128i *v44; // rcx
  __int64 v45; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // r14d
  unsigned int v50; // ecx
  unsigned int *v51; // rax
  unsigned int v52; // r15d
  unsigned int v53; // ecx
  unsigned int *v54; // rax
  __int64 v55; // rcx
  __int64 *v56; // rcx
  int v57; // eax
  __int64 v58; // rax
  __int32 v59; // r11d
  __int32 v60; // edx
  unsigned __int64 v61; // rcx
  __m128i *v62; // rax
  const __m128i *v63; // rcx
  __int64 v64; // rsi
  __m128i *v65; // r10
  __int64 v66; // r8
  const __m128i *v67; // rbp
  __int64 v68; // r10
  __m128i *v69; // r12
  const __m128i *v70; // rbx
  int v71; // ecx
  __int64 *v72; // r15
  __int32 v73; // r13d
  __int64 v74; // rdx
  __m128i *v75; // rsi
  __m128i *v76; // rdx
  void *v77; // rdi
  void *v78; // rdi
  __int64 *v79; // rbx
  __int64 *v80; // rbp
  __int64 v81; // rsi
  __int64 v82; // rdi
  bool v83; // zf
  __int64 *v84; // rbx
  __int64 *v85; // rbp
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 *v88; // rbx
  __int64 *v89; // rbp
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 *v92; // rbx
  __int64 *v93; // rbp
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 *v96; // rbx
  __int64 *v97; // rbp
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 *v100; // rbx
  __int64 *v101; // rbp
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 *v104; // rbx
  __int64 *v105; // rbp
  __int64 v106; // rsi
  __int64 v107; // rdi
  void *v108; // rdi
  void *v109; // rdi
  __int64 *v110; // rbx
  __int64 *v111; // rbp
  __int64 v112; // rsi
  __int64 v113; // rdi
  __int64 *v114; // rbx
  __int64 *v115; // rbp
  __int64 v116; // rsi
  __int64 v117; // rdi
  __int64 *v118; // rbx
  __int64 *v119; // rbp
  __int64 v120; // rsi
  __int64 v121; // rdi
  __int64 *v122; // rbx
  __int64 *v123; // rbp
  __int64 v124; // rsi
  __int64 v125; // rdi
  __int64 *v126; // rbx
  __int64 *v127; // rbp
  __int64 v128; // rsi
  __int64 v129; // rdi
  __int64 *v130; // rbx
  __int64 *v131; // rbp
  __int64 v132; // rsi
  __int64 v133; // rdi
  __int64 *v134; // rbp
  __int64 v135; // rsi
  __int64 v136; // rdi
  _QWORD *v137; // rdx
  char **exception; // rbp
  __m128i v139; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v140; // [rsp+10h] [rbp-A8h]
  __int64 v141; // [rsp+18h] [rbp-A0h]
  __m128i v142; // [rsp+20h] [rbp-98h] BYREF
  __int64 v143; // [rsp+30h] [rbp-88h]
  __int64 v144; // [rsp+38h] [rbp-80h]
  __int64 v145; // [rsp+40h] [rbp-78h]
  __int32 v146; // [rsp+4Ch] [rbp-6Ch]
  __int64 v147[11]; // [rsp+60h] [rbp-58h] BYREF

  v3 = a3;
  v4 = a1;
  v6 = *a2;
  v7 = *(_DWORD *)(*a2 + 12);
  v8 = (*(_DWORD *)(a3 + 12) - v7) ^ (v7 << 8);
  v9 = (v7 - v8) << 10;
  v10 = v8 ^ ((v7 - v8) << 16);
  v11 = v8 - v7;
  v12 = *(__int64 **)(a1 + 192);
  v13 = (v10 + v11) ^ v9;
  v14 = *(unsigned int *)(a1 + 200);
  v15 = v14 - 1;
  v14 *= 32;
  v16 = (__int64 *)((char *)v12 + v14);
  v17 = 32LL * (v13 & v15);
  v18 = &v12[(unsigned __int64)v17 / 8];
  if ( v17 != v14 )
  {
    for ( i = &v12[(unsigned __int64)v17 / 8]; v16 != i; i += 4 )
    {
      v20 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 6) == v13 && v6 == v20 && v3 == i[1] )
          return 1;
      }
      else if ( !v20 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v18 != v12; v12 += 4 )
  {
    v47 = *v12;
    if ( (unsigned __int64)*v12 > 1 )
    {
      if ( *((_DWORD *)v12 + 6) == v13 && v6 == v47 && v3 == v12[1] )
        return 1;
    }
    else if ( !v47 )
    {
      break;
    }
  }
LABEL_8:
  v21 = (__m128i *)sub_186B270(0xC8u);
  v22 = *(_QWORD *)(v4 + 8);
  v23 = (__int64 *)v21;
  v21[1].m128i_i64[0] = 0;
  v21[1].m128i_i64[1] = v22;
  v21[2].m128i_i64[0] = 0;
  v21[2].m128i_i64[1] = v22;
  v21[3].m128i_i64[0] = 0;
  v21[3].m128i_i64[1] = v22;
  v21[4].m128i_i64[0] = 0;
  v21[4].m128i_i64[1] = v22;
  v21[5].m128i_i64[0] = 0;
  v21[5].m128i_i64[1] = v22;
  v21[6].m128i_i64[0] = 0;
  v21[6].m128i_i64[1] = v22;
  v21[7].m128i_i64[0] = 0;
  *v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
  v21[7].m128i_i64[1] = (__int64)&off_1C62200;
  v21[8].m128i_i64[1] = 0;
  v21[9].m128i_i64[0] = 0;
  v21[10].m128i_i64[0] = 0;
  v21[10].m128i_i64[1] = 0;
  sub_15F01E0(&v21[11], v22);
  v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 24) + 24LL))(*(_QWORD *)(v4 + 24));
  if ( !(unsigned __int8)sub_7224C0(v23, a2, v24, 1) )
  {
    v77 = (void *)v23[21];
    v23[15] = (__int64)&off_1C62200;
    if ( v77 )
      sub_186B220(v77);
    v78 = (void *)v23[18];
    if ( v78 )
      sub_186B220(v78);
    v79 = (__int64 *)v23[14];
    if ( v79 )
    {
      v80 = &v79[*((unsigned int *)v79 - 1)];
      if ( v79 >= v80 )
        goto LABEL_93;
      do
      {
        v81 = *v79;
        if ( *v79 )
        {
          v82 = v23[13];
          v83 = (*(_DWORD *)(v81 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v82, v81);
        }
        ++v79;
      }
      while ( v79 < v80 );
      v79 = (__int64 *)v23[14];
      if ( v79 )
LABEL_93:
        sub_186B220(v79 - 1);
    }
    v84 = (__int64 *)v23[12];
    if ( v84 )
    {
      v85 = &v84[*((unsigned int *)v84 - 1)];
      if ( v84 >= v85 )
        goto LABEL_102;
      do
      {
        v86 = *v84;
        if ( *v84 )
        {
          v87 = v23[11];
          v83 = (*(_DWORD *)(v86 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v87, v86);
        }
        ++v84;
      }
      while ( v84 < v85 );
      v84 = (__int64 *)v23[12];
      if ( v84 )
LABEL_102:
        sub_186B220(v84 - 1);
    }
    v88 = (__int64 *)v23[10];
    if ( v88 )
    {
      v89 = &v88[*((unsigned int *)v88 - 1)];
      if ( v88 >= v89 )
        goto LABEL_111;
      do
      {
        v90 = *v88;
        if ( *v88 )
        {
          v91 = v23[9];
          v83 = (*(_DWORD *)(v90 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v91, v90);
        }
        ++v88;
      }
      while ( v88 < v89 );
      v88 = (__int64 *)v23[10];
      if ( v88 )
LABEL_111:
        sub_186B220(v88 - 1);
    }
    v92 = (__int64 *)v23[8];
    if ( v92 )
    {
      v93 = &v92[*((unsigned int *)v92 - 1)];
      if ( v92 >= v93 )
        goto LABEL_120;
      do
      {
        v94 = *v92;
        if ( *v92 )
        {
          v95 = v23[7];
          v83 = (*(_DWORD *)(v94 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v95, v94);
        }
        ++v92;
      }
      while ( v92 < v93 );
      v92 = (__int64 *)v23[8];
      if ( v92 )
LABEL_120:
        sub_186B220(v92 - 1);
    }
    v96 = (__int64 *)v23[6];
    if ( v96 )
    {
      v97 = &v96[*((unsigned int *)v96 - 1)];
      if ( v96 >= v97 )
        goto LABEL_129;
      do
      {
        v98 = *v96;
        if ( *v96 )
        {
          v99 = v23[5];
          v83 = (*(_DWORD *)(v98 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v99, v98);
        }
        ++v96;
      }
      while ( v96 < v97 );
      v96 = (__int64 *)v23[6];
      if ( v96 )
LABEL_129:
        sub_186B220(v96 - 1);
    }
    v100 = (__int64 *)v23[4];
    if ( v100 )
    {
      v101 = &v100[*((unsigned int *)v100 - 1)];
      if ( v100 >= v101 )
        goto LABEL_138;
      do
      {
        v102 = *v100;
        if ( *v100 )
        {
          v103 = v23[3];
          v83 = (*(_DWORD *)(v102 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v103, v102);
        }
        ++v100;
      }
      while ( v100 < v101 );
      v100 = (__int64 *)v23[4];
      if ( v100 )
LABEL_138:
        sub_186B220(v100 - 1);
    }
    v104 = (__int64 *)v23[2];
    if ( !v104 )
      goto LABEL_148;
    v105 = &v104[*((unsigned int *)v104 - 1)];
    if ( v104 < v105 )
    {
      do
      {
        v106 = *v104;
        if ( *v104 )
        {
          v107 = v23[1];
          v83 = (*(_DWORD *)(v106 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v107, v106);
        }
        ++v104;
      }
      while ( v104 < v105 );
      v104 = (__int64 *)v23[2];
      if ( !v104 )
        goto LABEL_148;
    }
LABEL_147:
    sub_186B220(v104 - 1);
LABEL_148:
    sub_186B220(v23);
    return 0;
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 24) + 32LL))(*(_QWORD *)(v4 + 24));
  if ( !(unsigned __int8)sub_7224C0(v23, a2, v25, 0) )
  {
    v108 = (void *)v23[21];
    v23[15] = (__int64)&off_1C62200;
    if ( v108 )
      sub_186B220(v108);
    v109 = (void *)v23[18];
    if ( v109 )
      sub_186B220(v109);
    v110 = (__int64 *)v23[14];
    if ( v110 )
    {
      v111 = &v110[*((unsigned int *)v110 - 1)];
      if ( v110 >= v111 )
        goto LABEL_165;
      do
      {
        v112 = *v110;
        if ( *v110 )
        {
          v113 = v23[13];
          v83 = (*(_DWORD *)(v112 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v113, v112);
        }
        ++v110;
      }
      while ( v110 < v111 );
      v110 = (__int64 *)v23[14];
      if ( v110 )
LABEL_165:
        sub_186B220(v110 - 1);
    }
    v114 = (__int64 *)v23[12];
    if ( v114 )
    {
      v115 = &v114[*((unsigned int *)v114 - 1)];
      if ( v114 >= v115 )
        goto LABEL_174;
      do
      {
        v116 = *v114;
        if ( *v114 )
        {
          v117 = v23[11];
          v83 = (*(_DWORD *)(v116 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v117, v116);
        }
        ++v114;
      }
      while ( v114 < v115 );
      v114 = (__int64 *)v23[12];
      if ( v114 )
LABEL_174:
        sub_186B220(v114 - 1);
    }
    v118 = (__int64 *)v23[10];
    if ( v118 )
    {
      v119 = &v118[*((unsigned int *)v118 - 1)];
      if ( v118 >= v119 )
        goto LABEL_183;
      do
      {
        v120 = *v118;
        if ( *v118 )
        {
          v121 = v23[9];
          v83 = (*(_DWORD *)(v120 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v121, v120);
        }
        ++v118;
      }
      while ( v118 < v119 );
      v118 = (__int64 *)v23[10];
      if ( v118 )
LABEL_183:
        sub_186B220(v118 - 1);
    }
    v122 = (__int64 *)v23[8];
    if ( v122 )
    {
      v123 = &v122[*((unsigned int *)v122 - 1)];
      if ( v122 >= v123 )
        goto LABEL_192;
      do
      {
        v124 = *v122;
        if ( *v122 )
        {
          v125 = v23[7];
          v83 = (*(_DWORD *)(v124 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v125, v124);
        }
        ++v122;
      }
      while ( v122 < v123 );
      v122 = (__int64 *)v23[8];
      if ( v122 )
LABEL_192:
        sub_186B220(v122 - 1);
    }
    v126 = (__int64 *)v23[6];
    if ( v126 )
    {
      v127 = &v126[*((unsigned int *)v126 - 1)];
      if ( v126 >= v127 )
        goto LABEL_201;
      do
      {
        v128 = *v126;
        if ( *v126 )
        {
          v129 = v23[5];
          v83 = (*(_DWORD *)(v128 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v129, v128);
        }
        ++v126;
      }
      while ( v126 < v127 );
      v126 = (__int64 *)v23[6];
      if ( v126 )
LABEL_201:
        sub_186B220(v126 - 1);
    }
    v130 = (__int64 *)v23[4];
    if ( v130 )
    {
      v131 = &v130[*((unsigned int *)v130 - 1)];
      if ( v130 >= v131 )
        goto LABEL_210;
      do
      {
        v132 = *v130;
        if ( *v130 )
        {
          v133 = v23[3];
          v83 = (*(_DWORD *)(v132 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v133, v132);
        }
        ++v130;
      }
      while ( v130 < v131 );
      v130 = (__int64 *)v23[4];
      if ( v130 )
LABEL_210:
        sub_186B220(v130 - 1);
    }
    v104 = (__int64 *)v23[2];
    if ( !v104 )
      goto LABEL_148;
    v134 = &v104[*((unsigned int *)v104 - 1)];
    if ( v104 < v134 )
    {
      do
      {
        v135 = *v104;
        if ( *v104 )
        {
          v136 = v23[1];
          v83 = (*(_DWORD *)(v135 + 8))-- == 1;
          if ( v83 )
            sub_15D7BC0(v136, v135);
        }
        ++v104;
      }
      while ( v104 < v134 );
      v104 = (__int64 *)v23[2];
      if ( !v104 )
        goto LABEL_148;
    }
    goto LABEL_147;
  }
  v26 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v26 + 8);
  v27 = *(_QWORD **)(v4 + 248);
  if ( v27 )
  {
    v28 = *((_DWORD *)v27 - 1);
    if ( v28 != *((_DWORD *)v27 - 2) )
    {
      v27[v28] = v26;
      *((_DWORD *)v27 - 1) = v28 + 1;
      goto LABEL_15;
    }
    v52 = (3 * v28 + 1) >> 1;
    v53 = 8 * v52 + 8;
    if ( 8 * v28 + 8 >= v53 || v28 >= v52 )
      goto LABEL_228;
    v54 = (unsigned int *)sub_186B300(v27 - 1, v53);
    v27 = v54 + 2;
    v55 = v54[1];
    *v54 = v52;
    *(_QWORD *)(v4 + 248) = v54 + 2;
    LODWORD(v54) = v55;
    v56 = &v27[v55];
    v57 = (_DWORD)v54 + 1;
  }
  else
  {
    v137 = (_QWORD *)sub_186B270(0x18u);
    *v137 = 2;
    v57 = 1;
    v27 = v137 + 1;
    *(_QWORD *)(v4 + 248) = v27;
    v56 = v27;
  }
  *v56 = v26;
  *((_DWORD *)v27 - 1) = v57;
LABEL_15:
  ++*(_DWORD *)(v3 + 8);
  v29 = *((_DWORD *)v27 - 2);
  if ( *((_DWORD *)v27 - 1) == v29 )
  {
    v49 = (3 * v29 + 1) >> 1;
    v50 = 8 * v49 + 8;
    if ( 8 * v29 + 8 < v50 && v29 < v49 )
    {
      v51 = (unsigned int *)sub_186B300(v27 - 1, v50);
      v27 = v51 + 2;
      *v51 = v49;
      *(_QWORD *)(v4 + 248) = v51 + 2;
      goto LABEL_16;
    }
LABEL_228:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v147, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v147);
    sub_233E40((__int64)v147);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_16:
  v30 = *a2;
  v31 = *((_DWORD *)v27 - 1);
  v27[v31] = v3;
  v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)v3);
  *((_DWORD *)v27 - 1) = v31 + 1;
  v33 = *(_DWORD *)(v30 + 12);
  v34 = (*(_DWORD *)(v3 + 12) - v33) ^ (v33 << 8);
  v35 = *(_DWORD *)(v4 + 200);
  v36 = ((v34 ^ ((v33 - v34) << 16)) + v34 - v33) ^ ((v33 - v34) << 10);
  if ( 3 * v35 < 4 * (*(_DWORD *)(v4 + 204) + *(_DWORD *)(v4 + 208)) )
  {
    v141 = v30;
    v139.m128i_i32[0] = 2 * v35;
    v140 = 64LL * v35;
    v142 = v32;
    v58 = sub_186B270(v140);
    v59 = v139.m128i_i32[0];
    v39 = v140;
    v30 = v141;
    v32 = _mm_load_si128(&v142);
    v37 = (__m128i *)v58;
    if ( v139.m128i_i32[0] )
    {
      v60 = v139.m128i_i32[0] - 1;
      if ( (unsigned int)(v139.m128i_i32[0] - 1) <= 2 )
      {
        *(_DWORD *)(v58 + 24) = 0;
        *(_DWORD *)(v58 + 56) = 0;
        *(_OWORD *)v58 = 0;
        *(_OWORD *)(v58 + 32) = 0;
      }
      else
      {
        v61 = v58 + ((unsigned __int64)((unsigned __int32)v139.m128i_i32[0] >> 2) << 7);
        do
        {
          *(_DWORD *)(v58 + 24) = 0;
          v58 += 128;
          *(_OWORD *)(v58 - 128) = 0;
          *(_OWORD *)(v58 - 96) = 0;
          *(_OWORD *)(v58 - 64) = 0;
          *(_OWORD *)(v58 - 32) = 0;
          *(_DWORD *)(v58 - 72) = 0;
          *(_DWORD *)(v58 - 40) = 0;
          *(_DWORD *)(v58 - 8) = 0;
        }
        while ( v61 != v58 );
        if ( (v59 & 2) != 0 )
        {
          v62 = &v37[2 * (v59 & 0xFFFFFFFC)];
          v62[1].m128i_i32[2] = 0;
          v62[3].m128i_i32[2] = 0;
          *v62 = 0;
          v62[2] = 0;
          if ( v59 - (v59 & 0xFFFFFFFC) != 2 )
          {
            v62[5].m128i_i32[2] = 0;
            v62[4] = 0;
          }
        }
      }
    }
    else
    {
      v60 = -1;
    }
    v63 = *(const __m128i **)(v4 + 192);
    v38 = v60;
    v40 = (__m128i *)((char *)v37 + v39);
    v64 = 2LL * *(unsigned int *)(v4 + 200);
    v65 = (__m128i *)&v63[v64];
    if ( v63 != &v63[v64] )
    {
      v140 = v30;
      v66 = v4;
      v67 = &v63[v64];
      v68 = v3;
      v69 = v37;
      v70 = v63;
      v71 = v36;
      v72 = v23;
      v73 = v60;
      do
      {
        if ( v70->m128i_i64[0] > 1uLL )
        {
          v74 = 32LL * (v70[1].m128i_i32[2] & (unsigned int)v73);
          v75 = &v69[(unsigned __int64)v74 / 0x10];
          if ( v74 == v39 )
          {
LABEL_72:
            if ( v75 == v69 )
            {
LABEL_220:
              v146 = v59;
              v145 = v68;
              v144 = v66;
              v143 = v39;
              v142.m128i_i32[0] = v38;
              LODWORD(v141) = v71;
              v139 = v32;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v76 = v69;
            while ( v76->m128i_i64[0] )
            {
              v76 += 2;
              if ( v75 == v76 )
                goto LABEL_220;
            }
          }
          else
          {
            v76 = &v69[(unsigned __int64)v74 / 0x10];
            while ( v76->m128i_i64[0] )
            {
              v76 += 2;
              if ( v40 == v76 )
                goto LABEL_72;
            }
          }
          *v76 = _mm_loadu_si128(v70);
          v76[1] = _mm_loadu_si128(v70 + 1);
        }
        v70 += 2;
      }
      while ( v67 != v70 );
      v4 = v66;
      v37 = v69;
      v30 = v140;
      v3 = v68;
      v65 = *(__m128i **)(v4 + 192);
      v23 = v72;
      v36 = v71;
    }
    if ( v65 )
    {
      LODWORD(v143) = v59;
      v142.m128i_i64[0] = v39;
      LODWORD(v141) = v38;
      v140 = v30;
      v139 = v32;
      sub_186B220(v65);
      v59 = v143;
      v39 = v142.m128i_i64[0];
      v38 = v141;
      v32 = _mm_load_si128(&v139);
      v30 = v140;
    }
    *(_QWORD *)(v4 + 192) = v37;
    *(_DWORD *)(v4 + 200) = v59;
    *(_DWORD *)(v4 + 208) = 0;
  }
  else
  {
    v37 = *(__m128i **)(v4 + 192);
    v38 = v35 - 1;
    v39 = 32LL * v35;
    v40 = (__m128i *)((char *)v37 + v39);
  }
  v41 = 32LL * (v36 & (unsigned int)v38);
  v42 = &v37[(unsigned __int64)v41 / 0x10];
  if ( v41 != v39 )
  {
    v43 = &v37[(unsigned __int64)v41 / 0x10];
    v44 = nullptr;
    while ( 1 )
    {
      v45 = v43->m128i_i64[0];
      if ( v43->m128i_i64[0] > 1uLL )
      {
        if ( v43[1].m128i_i32[2] == v36 && v30 == v45 && v3 == v43->m128i_i64[1] )
        {
          v43[1].m128i_i64[0] = (__int64)v23;
          v43[1].m128i_i32[2] = v36;
          *v43 = v32;
          return 1;
        }
      }
      else
      {
        if ( !v45 )
        {
          if ( v44 )
            goto LABEL_162;
          v44 = v43;
          goto LABEL_163;
        }
        v44 = v43;
      }
      v43 += 2;
      if ( v43 == v40 )
        goto LABEL_41;
    }
  }
  v44 = nullptr;
  while ( 1 )
  {
LABEL_41:
    if ( v42 == v37 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v48 = v37->m128i_i64[0];
    if ( v37->m128i_i64[0] <= 1uLL )
      break;
    if ( v37[1].m128i_i32[2] == v36 && v30 == v48 && v3 == v37->m128i_i64[1] )
    {
      v37[1].m128i_i64[0] = (__int64)v23;
      v37[1].m128i_i32[2] = v36;
      *v37 = v32;
      return 1;
    }
LABEL_40:
    v37 += 2;
  }
  if ( v48 )
  {
    v44 = v37;
    goto LABEL_40;
  }
  if ( v44 )
LABEL_162:
    --*(_DWORD *)(v4 + 208);
  else
    v44 = v37;
LABEL_163:
  v44[1].m128i_i64[0] = (__int64)v23;
  v44[1].m128i_i32[2] = v36;
  *v44 = v32;
  ++*(_DWORD *)(v4 + 204);
  return 1;
}

