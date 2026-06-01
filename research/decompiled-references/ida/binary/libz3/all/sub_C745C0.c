__int64 __fastcall sub_C745C0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  unsigned int v5; // ebp
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 *v9; // rcx
  bool v10; // r12
  _DWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  bool *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i *v18; // r12
  unsigned int v19; // r9d
  size_t v20; // rbx
  __m128i *v21; // r14
  int v22; // esi
  __int64 v23; // r9
  __m128i *v24; // rdi
  __m128i *v25; // rax
  __m128i *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // r14d
  size_t v30; // rsi
  unsigned int *v31; // rax
  _DWORD *v32; // rdi
  __int64 v33; // rax
  unsigned int v34; // ebx
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  _QWORD *v42; // rsi
  unsigned __int64 v43; // r12
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  _QWORD *v47; // rsi
  __int64 v48; // r9
  __int64 v49; // rax
  int v50; // edi
  __int64 *v51; // rcx
  unsigned int v52; // edx
  __int64 *v53; // rsi
  __int64 v54; // rdx
  __int64 *v55; // r8
  __int64 *i; // rax
  __int64 v57; // rdx
  __int64 v58; // rdi
  char v59; // bl
  __int64 v60; // rax
  char *v61; // rdi
  __int64 v63; // rax
  unsigned int v64; // r12d
  size_t v65; // rsi
  unsigned int *v66; // rax
  _DWORD *v67; // rdi
  __int64 v68; // rax
  unsigned int v69; // r12d
  size_t v70; // rdi
  __int64 v71; // rax
  __int64 *v72; // r14
  __int64 *v73; // rbx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 *v76; // r9
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rsi
  __m128i v80; // xmm0
  unsigned __int64 v81; // rax
  __int64 v82; // r9
  __int64 *v83; // rax
  void *v84; // rdi
  unsigned int v85; // r12d
  size_t v86; // rdi
  __int64 v87; // rax
  __int64 *v88; // r14
  __int64 *v89; // r12
  __int64 v90; // r8
  __int64 v91; // rax
  __int64 *v92; // r9
  unsigned __int64 v93; // rsi
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rsi
  __m128i v96; // xmm0
  unsigned __int64 v97; // rax
  __int64 v98; // r9
  __int64 *v99; // rax
  void *v100; // rdi
  __m128i *v101; // rax
  int v102; // r10d
  __m128i *v103; // r8
  const __m128i *v104; // rax
  __m128i *v105; // r11
  __int64 v106; // rdx
  __m128i *v107; // rsi
  __m128i *v108; // rdx
  __m128i v109; // xmm0
  _QWORD *v110; // rax
  __int64 *v111; // rax
  unsigned __int64 v112; // rsi
  __int64 v113; // r10
  __int64 *v114; // rax
  unsigned __int64 v115; // rsi
  __int64 v116; // r10
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  _QWORD *v120; // rax
  char **exception; // rbp
  __int64 v122; // rdx
  bool v123; // [rsp+Fh] [rbp-79h]
  __int64 *v124; // [rsp+10h] [rbp-78h]
  __int64 *v125; // [rsp+10h] [rbp-78h]
  int v126; // [rsp+10h] [rbp-78h]
  unsigned int v127; // [rsp+18h] [rbp-70h]
  unsigned int v128; // [rsp+18h] [rbp-70h]
  __int64 v129[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD **)(a1 + 624);
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 - 1);
    v6 = v5;
    if ( a2 )
    {
      ++*(_DWORD *)(a2 + 8);
      v6 = *((_DWORD *)v4 - 1);
    }
    if ( *((_DWORD *)v4 - 2) == v6 )
    {
      v34 = (3 * v6 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v35 || v6 >= v34 )
        goto LABEL_151;
      v36 = (unsigned int *)sub_186B300(v4 - 1, v35);
      v37 = v36[1];
      v4 = v36 + 2;
      *v36 = v34;
      *(_QWORD *)(a1 + 624) = v36 + 2;
      LODWORD(v36) = v37;
      v9 = &v4[v37];
      v8 = (_DWORD)v36 + 1;
    }
    else
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = &v4[v7];
    }
  }
  else
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v5 = 0;
    v117 = (_QWORD *)sub_186B270(0x18u);
    v4 = v117 + 1;
    *v117 = 2;
    v8 = 1;
    *(_QWORD *)(a1 + 624) = v4;
    v9 = v4;
  }
  *v9 = a2;
  v10 = 0;
  *((_DWORD *)v4 - 1) = v8;
  v123 = 0;
  v11 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v11 && *v11 == 5 )
  {
    v123 = v11[1] == 1;
    v10 = v123;
  }
  v12 = *(_QWORD *)(a1 + 600);
  if ( v12 )
  {
    v13 = *(unsigned int *)(v12 - 4);
    if ( (_DWORD)v13 == *(_DWORD *)(v12 - 8) )
    {
      v29 = (unsigned int)(3 * v13 + 1) >> 1;
      v30 = v29 + 8;
      if ( (int)v13 + 8 >= (unsigned int)v30 || (unsigned int)v13 >= v29 )
        goto LABEL_151;
      v31 = (unsigned int *)sub_186B300((void *)(v12 - 8), v30);
      v32 = v31 + 2;
      *v31 = v29;
      v33 = v31[1];
      *(_QWORD *)(a1 + 600) = v32;
      v14 = (bool *)v32 + v33;
    }
    else
    {
      v14 = (bool *)(v13 + v12);
    }
  }
  else
  {
    v120 = (_QWORD *)sub_186B270(0xAu);
    *v120 = 2;
    v14 = (bool *)(v120 + 1);
    *(_QWORD *)(a1 + 600) = v120 + 1;
  }
  *v14 = v10;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 600) - 4LL);
  v15 = *(_QWORD *)(a1 + 656);
  if ( !v15 || (v16 = *(unsigned int *)(v15 - 4), (_DWORD)v16 == *(_DWORD *)(v15 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 656));
    v15 = *(_QWORD *)(a1 + 656);
    v16 = *(unsigned int *)(v15 - 4);
  }
  *(_DWORD *)(v15 + 4 * v16) = -1;
  ++*(_DWORD *)(v15 - 4);
  v17 = *(unsigned int *)(a1 + 640);
  if ( 3 * (int)v17 < (unsigned int)(4 * (*(_DWORD *)(a1 + 644) + *(_DWORD *)(a1 + 648))) )
  {
    v126 = 2 * v17;
    v20 = 16LL * (unsigned int)(2 * v17);
    v101 = (__m128i *)sub_186B270(v20);
    v102 = v126;
    v18 = v101;
    v103 = &v101[v20 / 0x10];
    if ( v126 )
    {
      do
      {
        v101->m128i_i64[0] = 0;
        ++v101;
        v101[-1].m128i_i32[2] = 0;
      }
      while ( v101 != v103 );
    }
    v104 = *(const __m128i **)(a1 + 632);
    v19 = v126 - 1;
    v21 = v103;
    v105 = (__m128i *)&v104[*(unsigned int *)(a1 + 640)];
    if ( v104 != v105 )
    {
      do
      {
        while ( v104->m128i_i64[0] <= 1uLL )
        {
          if ( v105 == ++v104 )
            goto LABEL_116;
        }
        v106 = 16LL * (*(_DWORD *)(v104->m128i_i64[0] + 12) & v19);
        v107 = &v18[(unsigned __int64)v106 / 0x10];
        if ( v20 == v106 )
        {
LABEL_120:
          if ( v18 == v107 )
          {
LABEL_135:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v108 = v18;
          while ( v108->m128i_i64[0] )
          {
            if ( v107 == ++v108 )
              goto LABEL_135;
          }
        }
        else
        {
          v108 = &v18[(unsigned __int64)v106 / 0x10];
          while ( v108->m128i_i64[0] )
          {
            if ( v103 == ++v108 )
              goto LABEL_120;
          }
        }
        v109 = _mm_loadu_si128(v104++);
        *v108 = v109;
      }
      while ( v105 != v104 );
LABEL_116:
      v105 = *(__m128i **)(a1 + 632);
    }
    if ( v105 )
    {
      sub_186B220(v105);
      v102 = v126;
      v19 = v126 - 1;
    }
    *(_QWORD *)(a1 + 632) = v18;
    *(_DWORD *)(a1 + 640) = v102;
    *(_DWORD *)(a1 + 648) = 0;
  }
  else
  {
    v18 = *(__m128i **)(a1 + 632);
    v19 = v17 - 1;
    v20 = 16 * v17;
    v21 = &v18[v17];
  }
  v22 = *(_DWORD *)(a2 + 12);
  v23 = 16LL * (v22 & v19);
  v24 = &v18[(unsigned __int64)v23 / 0x10];
  if ( v23 != v20 )
  {
    v25 = &v18[(unsigned __int64)v23 / 0x10];
    v26 = nullptr;
    while ( 1 )
    {
      v27 = v25->m128i_i64[0];
      if ( v25->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v27 + 12) == v22 && a2 == v27 )
        {
          v25->m128i_i64[0] = a2;
          v25->m128i_i32[2] = v5;
          goto LABEL_39;
        }
      }
      else
      {
        if ( !v27 )
        {
          if ( v26 )
            goto LABEL_126;
          v26 = v25;
          goto LABEL_127;
        }
        v26 = v25;
      }
      if ( ++v25 == v21 )
        goto LABEL_27;
    }
  }
  v26 = nullptr;
  while ( 1 )
  {
LABEL_27:
    if ( v24 == v18 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v28 = v18->m128i_i64[0];
    if ( v18->m128i_i64[0] <= 1uLL )
    {
      if ( v28 )
      {
        v26 = v18;
        goto LABEL_26;
      }
      if ( v26 )
LABEL_126:
        --*(_DWORD *)(a1 + 648);
      else
        v26 = v18;
LABEL_127:
      v38 = *(_QWORD *)(a1 + 664);
      v26->m128i_i64[0] = a2;
      v26->m128i_i32[2] = v5;
      ++*(_DWORD *)(a1 + 644);
      if ( v38 )
        goto LABEL_40;
LABEL_128:
      v110 = (_QWORD *)sub_186B270(0x18u);
      v38 = (unsigned __int64)(v110 + 1);
      *v110 = 2;
      v41 = 1;
      *(_QWORD *)(a1 + 664) = v38;
      v42 = (_QWORD *)v38;
      goto LABEL_42;
    }
    if ( *(_DWORD *)(v28 + 12) == v22 && a2 == v28 )
      break;
LABEL_26:
    ++v18;
  }
  v18->m128i_i64[0] = a2;
  v18->m128i_i32[2] = v5;
LABEL_39:
  v38 = *(_QWORD *)(a1 + 664);
  if ( !v38 )
    goto LABEL_128;
LABEL_40:
  v39 = *(_DWORD *)(v38 - 4);
  if ( v39 == *(_DWORD *)(v38 - 8) )
  {
    v85 = (3 * v39 + 1) >> 1;
    v86 = 8 * v85 + 8;
    v128 = v85;
    if ( 8 * v39 + 8 >= (unsigned int)v86 || v39 >= v85 )
      goto LABEL_151;
    v87 = sub_186B270(v86);
    v88 = *(__int64 **)(a1 + 664);
    v89 = (__int64 *)v87;
    v38 = v87 + 8;
    if ( v88 )
    {
      v90 = *((unsigned int *)v88 - 1);
      *(_DWORD *)(v87 + 4) = v90;
      v91 = 8 * v90;
      v92 = &v88[v90];
      if ( v92 != v88 )
      {
        v93 = v91 - 8;
        if ( (unsigned __int64)(v91 - 8) <= 8 || v38 < (unsigned __int64)(v88 + 2) && v88 < v89 + 3 )
        {
          v111 = v88;
          v112 = v38;
          do
          {
            v113 = *v111;
            *v111++ = 0;
            v112 += 8LL;
            *(_QWORD *)(v112 - 8) = v113;
          }
          while ( v111 != v92 );
        }
        else
        {
          v94 = 0;
          v95 = (v93 >> 3) + 1;
          do
          {
            v96 = _mm_loadu_si128((const __m128i *)&v88[v94]);
            *(_OWORD *)&v88[v94] = 0;
            *(__m128i *)&v89[v94 + 1] = v96;
            v94 += 2LL;
          }
          while ( v94 != 2 * (v95 >> 1) );
          if ( (v95 & 1) != 0 )
          {
            v97 = v95 & 0xFFFFFFFFFFFFFFFELL;
            v98 = v88[v97];
            v88[v97] = 0;
            v89[v97 + 1] = v98;
          }
        }
      }
      v99 = &v88[v90];
      if ( (_DWORD)v90 )
      {
        do
        {
          while ( *v88 )
          {
            v100 = (void *)(*v88 - 8);
            v125 = v99;
            ++v88;
            sub_186B220(v100);
            v99 = v125;
            if ( v88 == v125 )
              goto LABEL_100;
          }
          ++v88;
        }
        while ( v88 != v99 );
LABEL_100:
        v88 = *(__int64 **)(a1 + 664);
      }
      sub_186B220(v88 - 1);
      v42 = (_QWORD *)(v38 + 8LL * *((unsigned int *)v89 + 1));
      v41 = *((_DWORD *)v89 + 1) + 1;
    }
    else
    {
      *(_DWORD *)(v87 + 4) = 0;
      v42 = (_QWORD *)(v87 + 8);
      v41 = 1;
    }
    *(_QWORD *)(a1 + 664) = v38;
    *(_DWORD *)v89 = v128;
  }
  else
  {
    v40 = v39;
    v41 = v39 + 1;
    v42 = (_QWORD *)(v38 + 8 * v40);
  }
LABEL_42:
  v43 = *(_QWORD *)(a1 + 672);
  *v42 = 0;
  *(_DWORD *)(v38 - 4) = v41;
  if ( v43 )
  {
    v44 = *(_DWORD *)(v43 - 4);
    if ( v44 == *(_DWORD *)(v43 - 8) )
    {
      v69 = (3 * v44 + 1) >> 1;
      v70 = 8 * v69 + 8;
      v127 = v69;
      if ( 8 * v44 + 8 >= (unsigned int)v70 || v44 >= v69 )
        goto LABEL_151;
      v71 = sub_186B270(v70);
      v72 = *(__int64 **)(a1 + 672);
      v73 = (__int64 *)v71;
      v43 = v71 + 8;
      if ( v72 )
      {
        v74 = *((unsigned int *)v72 - 1);
        *(_DWORD *)(v71 + 4) = v74;
        v75 = 8 * v74;
        v76 = &v72[v74];
        if ( v76 != v72 )
        {
          v77 = v75 - 8;
          if ( (unsigned __int64)(v75 - 8) <= 8 || v43 < (unsigned __int64)(v72 + 2) && v72 < v73 + 3 )
          {
            v114 = v72;
            v115 = v43;
            do
            {
              v116 = *v114;
              *v114++ = 0;
              v115 += 8LL;
              *(_QWORD *)(v115 - 8) = v116;
            }
            while ( v114 != v76 );
          }
          else
          {
            v78 = 0;
            v79 = (v77 >> 3) + 1;
            do
            {
              v80 = _mm_loadu_si128((const __m128i *)&v72[v78]);
              *(_OWORD *)&v72[v78] = 0;
              *(__m128i *)&v73[v78 + 1] = v80;
              v78 += 2LL;
            }
            while ( 2 * (v79 >> 1) != v78 );
            if ( (v79 & 1) != 0 )
            {
              v81 = v79 & 0xFFFFFFFFFFFFFFFELL;
              v82 = v72[v81];
              v72[v81] = 0;
              v73[v81 + 1] = v82;
            }
          }
        }
        v83 = &v72[v74];
        if ( (_DWORD)v74 )
        {
          do
          {
            while ( *v72 )
            {
              v84 = (void *)(*v72 - 8);
              v124 = v83;
              ++v72;
              sub_186B220(v84);
              v83 = v124;
              if ( v124 == v72 )
                goto LABEL_81;
            }
            ++v72;
          }
          while ( v72 != v83 );
LABEL_81:
          v72 = *(__int64 **)(a1 + 672);
        }
        sub_186B220(v72 - 1);
        v47 = (_QWORD *)(v43 + 8LL * *((unsigned int *)v73 + 1));
        v46 = *((_DWORD *)v73 + 1) + 1;
      }
      else
      {
        *(_DWORD *)(v71 + 4) = 0;
        v47 = (_QWORD *)(v71 + 8);
        v46 = 1;
      }
      *(_QWORD *)(a1 + 672) = v43;
      *(_DWORD *)v73 = v127;
    }
    else
    {
      v45 = v44;
      v46 = v44 + 1;
      v47 = (_QWORD *)(v43 + 8 * v45);
    }
  }
  else
  {
    v119 = (_QWORD *)sub_186B270(0x18u);
    v43 = (unsigned __int64)(v119 + 1);
    *v119 = 2;
    v46 = 1;
    *(_QWORD *)(a1 + 672) = v43;
    v47 = (_QWORD *)v43;
  }
  v48 = *(_QWORD *)(a2 + 16);
  *v47 = 0;
  *(_DWORD *)(v43 - 4) = v46;
  v49 = *(unsigned int *)(a1 + 688);
  v50 = *(_DWORD *)(v48 + 12);
  v51 = *(__int64 **)(a1 + 680);
  v52 = v49 - 1;
  v49 *= 8;
  v53 = (__int64 *)((char *)v51 + v49);
  v54 = 8LL * (v50 & v52);
  v55 = &v51[(unsigned __int64)v54 / 8];
  if ( v54 != v49 )
  {
    for ( i = &v51[(unsigned __int64)v54 / 8]; v53 != i; ++i )
    {
      v57 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v57 + 12) == v50 && v48 == v57 )
        {
LABEL_141:
          v58 = *(_QWORD *)(a1 + 608);
          v59 = 1;
          if ( !v58 )
            goto LABEL_142;
LABEL_53:
          v60 = *(unsigned int *)(v58 - 4);
          if ( (_DWORD)v60 != *(_DWORD *)(v58 - 8) )
          {
            v61 = (char *)(v60 + v58);
            goto LABEL_55;
          }
          v64 = (unsigned int)(3 * v60 + 1) >> 1;
          v65 = v64 + 8;
          if ( (int)v60 + 8 < (unsigned int)v65 && (unsigned int)v60 < v64 )
          {
            v66 = (unsigned int *)sub_186B300((void *)(v58 - 8), v65);
            v67 = v66 + 2;
            *v66 = v64;
            v68 = v66[1];
            *(_QWORD *)(a1 + 608) = v67;
            v61 = (char *)v67 + v68;
            goto LABEL_55;
          }
LABEL_151:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_161886(v129, "Overflow encountered when expanding vector", v122);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v129);
          sub_233E40((__int64)v129);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
      }
      else if ( !v57 )
      {
        goto LABEL_52;
      }
    }
  }
  for ( ; v55 != v51; ++v51 )
  {
    v63 = *v51;
    if ( (unsigned __int64)*v51 > 1 )
    {
      if ( *(_DWORD *)(v63 + 12) == v50 && v48 == v63 )
        goto LABEL_141;
    }
    else if ( !v63 )
    {
      break;
    }
  }
LABEL_52:
  v58 = *(_QWORD *)(a1 + 608);
  v59 = *(_BYTE *)(a1 + 737) & v123;
  if ( v58 )
    goto LABEL_53;
LABEL_142:
  v118 = (_QWORD *)sub_186B270(0xAu);
  *v118 = 2;
  v61 = (char *)(v118 + 1);
  *(_QWORD *)(a1 + 608) = v118 + 1;
LABEL_55:
  *v61 = v59;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 608) - 4LL);
  return v5;
}

