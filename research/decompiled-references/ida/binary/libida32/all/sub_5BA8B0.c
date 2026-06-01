__int64 __fastcall sub_5BA8B0(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128i si128,
        double a8,
        __m128i a9,
        char a10)
{
  __int64 v12; // rbp
  unsigned int v13; // ebx
  __int64 v14; // r14
  __int64 *v15; // r12
  __int64 func; // rax
  unsigned int *v17; // r13
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 next_fchunk; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  unsigned int *v26; // rax
  unsigned int v27; // r8d
  void *v28; // rdi
  unsigned int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rdi
  char *v32; // rcx
  __int64 v33; // rax
  char *v34; // r9
  char *v35; // r8
  __int64 i; // rax
  char *v37; // r10
  __int64 v38; // r9
  __int64 v39; // r9
  char *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rbx
  char *v43; // r15
  __int64 v44; // rbp
  void *v45; // r14
  char *v46; // rdi
  signed int v47; // eax
  __int64 v48; // rbx
  char *v49; // r15
  __int64 v50; // r14
  char *v51; // rbp
  char *v52; // rdi
  signed int v53; // eax
  __int64 v54; // rbx
  char *v55; // r15
  __int64 v56; // r14
  char *v57; // rbp
  char *v58; // rdi
  signed int v59; // eax
  __int64 v60; // r14
  unsigned int v61; // r15d
  __int64 j; // r15
  __int64 v63; // r14
  const char *v64; // rdi
  size_t v65; // rbx
  void *v66; // rdi
  int v67; // eax
  __int64 v68; // rbx
  unsigned __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rax
  unsigned int *v72; // r15
  unsigned int *v73; // r14
  unsigned int *v74; // rax
  __int64 v75; // r15
  const char *v77; // rdx
  __int64 v78; // rbx
  const char *v79; // rdx
  __int64 v80; // rsi
  unsigned int *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // [rsp+0h] [rbp-108h]
  __int64 v84; // [rsp+0h] [rbp-108h]
  __int64 v85; // [rsp+0h] [rbp-108h]
  __int64 v86; // [rsp+0h] [rbp-108h]
  __int64 v87; // [rsp+8h] [rbp-100h]
  unsigned __int64 v88; // [rsp+8h] [rbp-100h]
  __int64 *src; // [rsp+10h] [rbp-F8h]
  void *v90; // [rsp+18h] [rbp-F0h]
  __int64 v91; // [rsp+20h] [rbp-E8h]
  unsigned int v92; // [rsp+28h] [rbp-E0h]
  unsigned int v93; // [rsp+2Ch] [rbp-DCh]
  __int64 v94; // [rsp+30h] [rbp-D8h]
  __int64 *v95; // [rsp+38h] [rbp-D0h]
  unsigned int v97; // [rsp+48h] [rbp-C0h]
  int v98; // [rsp+4Ch] [rbp-BCh]
  void *v99; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v100; // [rsp+58h] [rbp-B0h]
  __int16 v101; // [rsp+68h] [rbp-A0h]
  __m128 v102; // [rsp+6Ch] [rbp-9Ch]
  __int64 v103; // [rsp+80h] [rbp-88h]
  int v104; // [rsp+88h] [rbp-80h]
  __int64 v105; // [rsp+90h] [rbp-78h]
  int v106; // [rsp+98h] [rbp-70h]
  __int64 v107; // [rsp+A0h] [rbp-68h]
  int v108; // [rsp+A8h] [rbp-60h]
  __int64 v109; // [rsp+B0h] [rbp-58h]
  int v110; // [rsp+B8h] [rbp-50h]
  __int64 v111; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v112; // [rsp+C8h] [rbp-40h]

  v12 = (__int64)a2;
  v92 = a5;
  v93 = a6;
  v91 = a1;
  HIDWORD(v94) = a4;
  HIBYTE(v90) = a10;
  v112 = __readfsqword(0x28u);
  v13 = *a2;
  v97 = *a2;
  sub_457210(a1, a5, a6, *a2);
  v95 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 4LL * a6 + 16)) + 1480);
  v98 = sub_4DB5F0(v95, 0xBu, v13);
  v14 = a5 + 4LL;
  v15 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 4LL * a5 + 16)) + 1480);
  func = get_func(v13);
  if ( !func )
  {
    if ( !BYTE4(v94) )
      goto LABEL_120;
    goto LABEL_17;
  }
  v17 = (unsigned int *)func;
  if ( *(__int64 *)(func + 8) < 0 )
    return 1;
  if ( BYTE4(v94) )
  {
LABEL_17:
    a9 = _mm_cvtsi32_si128(a2[1]);
    *(_QWORD *)&v100 = 512;
    v101 = 0;
    v99 = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v97), a9).m128i_u64[0];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
    *((_QWORD *)&v100 + 1) = 0xFFFFFFFFLL;
    v103 = 0;
    v104 = 0;
    v105 = 0;
    v106 = 0;
    v107 = 0;
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v102 = (__m128)si128;
    if ( !(unsigned __int8)add_func_ex((int)&v99) )
    {
      if ( !under_debugger )
        interr(1860);
      goto LABEL_154;
    }
    v26 = (unsigned int *)get_func(v97);
    v17 = v26;
    if ( v26 && v97 == *v26 )
    {
LABEL_20:
      if ( v17[1] == *(_DWORD *)(v12 + 4) )
      {
        v27 = v17[10];
        *((_QWORD *)v17 + 1) = *(_QWORD *)(v12 + 8);
        v17[5] = *(_DWORD *)(v12 + 20);
        *((_WORD *)v17 + 12) = *(_WORD *)(v12 + 24);
        v17[7] = *(_DWORD *)(v12 + 28);
        v17[8] = *(_DWORD *)(v12 + 32);
        v17[9] = *(_DWORD *)(v12 + 36);
        if ( v27 )
        {
          if ( BYTE4(v94) )
            goto LABEL_113;
          goto LABEL_23;
        }
        goto LABEL_26;
      }
      if ( !under_debugger )
        interr(1927);
LABEL_154:
      BUG();
    }
LABEL_120:
    if ( !under_debugger )
      interr(1861);
    goto LABEL_154;
  }
  if ( v97 != *(_DWORD *)func )
    goto LABEL_120;
  v18 = a2[1];
  if ( *(_DWORD *)(func + 4) != (_DWORD)v18 )
  {
    src = v15;
    v87 = v14;
    while ( !(unsigned __int8)set_func_end(v97, v18) )
    {
      next_fchunk = get_next_fchunk(v97);
      v25 = next_fchunk;
      if ( !next_fchunk || v17 == (unsigned int *)next_fchunk || *(_DWORD *)next_fchunk >= *(_DWORD *)(v12 + 4) )
      {
        if ( !under_debugger )
          interr(1926);
        goto LABEL_154;
      }
      if ( *(char *)(next_fchunk + 9) >= 0 )
      {
        v19 = switch_dbctx(*(int *)(a1 + 4 * v87));
        sub_445720(a1, 3u, v92, 0xFFFFFFFF, v25);
        sub_5B9040(*(_QWORD *)(v19 + 1480), v25, v87, (int)src, v90, v91, v92, v94);
      }
      else if ( !(unsigned __int8)sub_5B96C0(
                                    *(__int64 **)(qword_2CA1698 + 1480),
                                    next_fchunk,
                                    *(double *)si128.m128i_i64,
                                    a8,
                                    *(double *)a9.m128i_i64,
                                    v21,
                                    v22,
                                    v23,
                                    v24,
                                    v83,
                                    v87,
                                    (int)src,
                                    v90,
                                    v91,
                                    v92,
                                    v94) )
      {
        if ( !under_debugger )
          interr(1925);
        goto LABEL_154;
      }
      v18 = *(unsigned int *)(v12 + 4);
    }
    v15 = src;
    goto LABEL_20;
  }
  *(_QWORD *)(func + 8) = *(_QWORD *)(v12 + 8);
  *(_DWORD *)(func + 20) = *(_DWORD *)(v12 + 20);
  *(_WORD *)(func + 24) = *(_WORD *)(v12 + 24);
  *(_DWORD *)(func + 28) = *(_DWORD *)(v12 + 28);
  *(_DWORD *)(func + 32) = *(_DWORD *)(v12 + 32);
  *(_DWORD *)(func + 36) = *(_DWORD *)(v12 + 36);
  if ( *(_DWORD *)(func + 40) )
  {
LABEL_23:
    v28 = *((void **)v17 + 6);
    if ( v28 )
      qfree(v28);
    *((_QWORD *)v17 + 6) = 0;
    v17[10] = 0;
  }
LABEL_26:
  v29 = *(_DWORD *)(v12 + 40);
  if ( v29 )
  {
    v17[10] = v29;
    *((_QWORD *)v17 + 6) = sub_5B6880(*(_QWORD *)(v12 + 48), v29);
  }
  v30 = *v17;
  v31 = *(_QWORD *)(*v15 + 1424);
  v32 = *(char **)(v31 + 16);
  v33 = 8LL * *(_QWORD *)(v31 + 24);
  v34 = v32;
  v35 = &v32[v33];
  for ( i = v33 >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v37 = &v34[8 * (i >> 1)];
      if ( *(_DWORD *)v37 >= (unsigned int)v30 )
        break;
      v34 = v37 + 8;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_32;
    }
  }
LABEL_32:
  if ( v35 != v34 && (_DWORD)v30 == *(_DWORD *)v34 )
  {
    v38 = (v34 - v32) >> 3;
    if ( (_DWORD)v38 != -1 )
    {
      v39 = 8LL * (int)v38;
      v40 = &v32[v39];
      v41 = *((unsigned int *)v40 + 1);
      *((_DWORD *)v40 + 1) |= 1u;
      sub_5B53D0(v31, v30, v41, *(_DWORD *)(*(_QWORD *)(v31 + 16) + v39 + 4));
    }
  }
  v42 = (int)v17[14];
  if ( !(_DWORD)v42 )
  {
    v47 = *(_DWORD *)(v12 + 56);
    if ( !v47 )
      goto LABEL_111;
    goto LABEL_133;
  }
  if ( BYTE4(v94) )
    goto LABEL_113;
  if ( *((_QWORD *)v17 + 8) )
  {
    v84 = v12;
    v43 = *((char **)v17 + 8);
    v44 = 0;
    v45 = v43;
    do
    {
      v46 = v43;
      ++v44;
      v43 += 32;
      free_regvar(v46);
    }
    while ( v42 != v44 );
    v12 = v84;
    qfree(v45);
  }
  *((_QWORD *)v17 + 8) = 0;
  v17[14] = 0;
  v47 = *(_DWORD *)(v12 + 56);
  if ( v47 )
  {
LABEL_133:
    v17[14] = v47;
    *((_QWORD *)v17 + 8) = sub_5B69C0(*(char **)(v12 + 64), v47);
LABEL_111:
    v48 = (int)v17[18];
    if ( !(_DWORD)v48 )
    {
      v53 = *(_DWORD *)(v12 + 72);
      if ( !v53 )
        goto LABEL_123;
      goto LABEL_126;
    }
    if ( !BYTE4(v94) )
      goto LABEL_44;
LABEL_113:
    if ( !under_debugger )
      interr(1862);
    goto LABEL_154;
  }
  v48 = (int)v17[18];
  if ( !(_DWORD)v48 )
  {
    v53 = *(_DWORD *)(v12 + 72);
    if ( !v53 )
    {
      v54 = (int)v17[22];
      if ( !(_DWORD)v54 )
        goto LABEL_55;
      goto LABEL_50;
    }
    goto LABEL_126;
  }
LABEL_44:
  if ( *((_QWORD *)v17 + 10) )
  {
    v85 = v12;
    v49 = *((char **)v17 + 10);
    v50 = 0;
    v51 = v49;
    do
    {
      v52 = v51;
      ++v50;
      v51 += 16;
      sub_621FE0(v52);
    }
    while ( v48 != v50 );
    v12 = v85;
    qfree(v49);
  }
  *((_QWORD *)v17 + 10) = 0;
  v17[18] = 0;
  v53 = *(_DWORD *)(v12 + 72);
  if ( v53 )
  {
LABEL_126:
    v17[18] = v53;
    *((_QWORD *)v17 + 10) = sub_5B6BE0(*(_QWORD *)(v12 + 80), v53);
LABEL_123:
    v54 = (int)v17[22];
    if ( !(_DWORD)v54 )
      goto LABEL_55;
    if ( !BYTE4(v94) )
      goto LABEL_50;
    goto LABEL_113;
  }
  v54 = (int)v17[22];
  if ( (_DWORD)v54 )
  {
LABEL_50:
    if ( *((_QWORD *)v17 + 12) )
    {
      v86 = v12;
      v55 = *((char **)v17 + 12);
      v56 = 0;
      v57 = v55;
      do
      {
        v58 = v57;
        ++v56;
        v57 += 24;
        free_regarg(v58);
      }
      while ( v54 != v56 );
      v12 = v86;
      qfree(v55);
    }
    *((_QWORD *)v17 + 12) = 0;
    v17[22] = 0;
LABEL_55:
    v59 = *(_DWORD *)(v12 + 88);
    if ( !v59 )
      goto LABEL_56;
    goto LABEL_132;
  }
  v59 = *(_DWORD *)(v12 + 88);
  if ( !v59 )
  {
LABEL_128:
    v99 = nullptr;
    *(_QWORD *)((char *)&v100 + 4) = 0;
    func_tail_iterator_set(&v99, v17, 0xFFFFFFFFLL);
    while ( v99 )
    {
      LODWORD(v100) = 0;
      if ( *((int *)v99 + 26) <= 0 )
      {
        lock_func_range(v99, 0);
        goto LABEL_71;
      }
      sub_5B3360(
        v15,
        (__int64)v17,
        *((unsigned int **)v99 + 14),
        0,
        *(double *)si128.m128i_i64,
        a8,
        *(double *)a9.m128i_i64);
    }
    goto LABEL_71;
  }
LABEL_132:
  v17[22] = v59;
  *((_QWORD *)v17 + 12) = sub_5B6E50(*(char **)(v12 + 96), v59);
LABEL_56:
  if ( (int)v17[18] > 0 )
  {
    v60 = 0;
    do
    {
      while ( 1 )
      {
        v61 = *(_DWORD *)(*((_QWORD *)v17 + 10) + 16 * v60);
        if ( (sub_3C0CC0((__int64)v95, v61) & 0x4000) != 0 )
          break;
        if ( (int)v17[18] <= (int)++v60 )
          goto LABEL_61;
      }
      sub_3CB500((__int64)v15, v61, 0, 0x4000u);
      sub_3CA520(v15, v61, 0x4000);
      ++v60;
    }
    while ( (int)v17[18] > (int)v60 );
  }
LABEL_61:
  if ( (int)v17[22] > 0 )
  {
    for ( j = 0; (int)v17[22] > (int)j; ++j )
    {
      while ( 1 )
      {
        v63 = *((_QWORD *)v17 + 12) + 24 * j;
        if ( *(_QWORD *)(v63 + 8) )
          break;
LABEL_65:
        if ( (int)v17[22] <= (int)++j )
          goto LABEL_70;
      }
      a8 = 0.0;
      v64 = *(const char **)(v63 + 8);
      v99 = nullptr;
      v100 = 0;
      v65 = strlen(v64);
      v99 = (void *)qvector_reserve(&v99, 0, v65 + 1, 1);
      *(_QWORD *)&v100 = v65 + 1;
      memmove(v99, v64, v65);
      *((_BYTE *)v99 + v65) = 0;
      if ( !(unsigned __int8)sub_483310(v91, (__int64)&v99, v93, v92, 1) )
      {
        if ( v99 )
        {
          *(_QWORD *)&v100 = 0;
          qfree(v99);
        }
        goto LABEL_65;
      }
      qfree(*(void **)(v63 + 8));
      v66 = v99;
      if ( (unsigned __int64)v100 < *((_QWORD *)&v100 + 1) )
      {
        if ( v99 )
        {
          if ( (_QWORD)v100 )
          {
            v66 = (void *)qrealloc(v99);
            if ( !v66 )
              v66 = v99;
          }
        }
      }
      *(_QWORD *)(v63 + 8) = v66;
    }
  }
LABEL_70:
  if ( !BYTE4(v94) )
    goto LABEL_128;
LABEL_71:
  v67 = *(_DWORD *)(v12 + 104) - 1;
  if ( v67 < 0 )
  {
LABEL_91:
    v77 = haystack;
    v78 = qword_2CA1698;
    if ( *(_QWORD *)(a3 + 8) )
      v77 = *(const char **)a3;
    sub_4F0D50((unsigned int *)(*(_QWORD *)(qword_2CA1698 + 1480) + 1624LL), v17, v77, 0);
    v79 = haystack;
    if ( *(_QWORD *)(a3 + 32) )
      v79 = *(const char **)(a3 + 24);
    sub_4F0D50((unsigned int *)(*(_QWORD *)(v78 + 1480) + 1624LL), v17, v79, 1u);
    sub_656810(v15, v17, 0);
    sub_6220C0(v15, v17, 0);
    sub_655CA0(v15, v17, 0);
    sub_5AD0D0(v15, (__int64)v17, 0);
    *((_QWORD *)v17 + 1) = *(_QWORD *)(v12 + 8);
    update_func(v17);
    v80 = *v17;
    *((_QWORD *)v17 + 1) |= 0x8000000000000000LL;
    v81 = sub_4EE820((__int64)(v95 + 203), v80);
    if ( v81 )
    {
      v82 = *((_QWORD *)v81 + 1);
      if ( (v82 & 0x8000) != 0 )
      {
        v81 = sub_4EE820((__int64)(v95 + 203), v81[4]);
        v82 = *((_QWORD *)v81 + 1);
      }
    }
    else
    {
      v82 = 0;
    }
    *((_QWORD *)v81 + 1) = v82 | 0x8000000000000000LL;
    if ( v97 == v98 )
      sub_4DB6D0(v15, 0xBu, v97, 0);
    else
      sub_4DB7C0(v15, 11, v97);
    if ( *v17 != *(_DWORD *)v12
      || v17[1] != *(_DWORD *)(v12 + 4)
      || (unsigned int)sub_5AD640((__int64)v17, v12, 5u, v91, v92, v93) )
    {
      if ( !under_debugger )
        interr(1864);
      goto LABEL_154;
    }
    if ( BYTE4(v94) )
      sub_445720(v91, 2u, v92, v93, v17);
    return 1;
  }
  v68 = 8LL * v67;
  v88 = 8 * (v67 - (unsigned __int64)(unsigned int)v67);
  while ( 1 )
  {
    v72 = (unsigned int *)(v68 + *(_QWORD *)(v12 + 112));
    if ( !sub_4EE820((__int64)(v15 + 194), *v72) )
      sub_365330();
    if ( !(unsigned __int8)append_func_tail(v17, *v72, v72[1]) )
      return 0;
    v73 = sub_4EE820((__int64)(v15 + 203), *v72);
    v74 = sub_4EE820((__int64)(v95 + 203), *v72);
    v75 = (__int64)v74;
    if ( HIBYTE(v90) )
    {
      if ( !sub_5B0550((__int64)v15, (__int64)v73, v74[4]) )
        return 0;
    }
    if ( !v73 || !v75 )
    {
      if ( !under_debugger )
        interr(2204);
      goto LABEL_154;
    }
    *((_QWORD *)v73 + 1) = *(_QWORD *)(v75 + 8);
    v73[4] = *(_DWORD *)(v75 + 16);
    v69 = *(int *)(v75 + 20);
    if ( (_DWORD)v69 )
    {
      v70 = *((_QWORD *)v73 + 3);
      if ( (int)v69 > (int)v73[5] )
      {
        if ( 4 * v69 < v69 )
        {
          *((_QWORD *)v73 + 3) = 0;
LABEL_104:
          sub_3B74D0((int)"merge_func_tail:referers");
        }
        v71 = qrealloc(v70);
        *((_QWORD *)v73 + 3) = v71;
        v70 = v71;
      }
      if ( !v70 )
        goto LABEL_104;
      if ( !(unsigned __int8)sub_5AD260(v95, v75) )
      {
        if ( !under_debugger )
          interr(2205);
        goto LABEL_154;
      }
      memcpy(*((void **)v73 + 3), *(const void **)(v75 + 24), 4LL * *(int *)(v75 + 20));
      LODWORD(v69) = *(_DWORD *)(v75 + 20);
    }
    v73[5] = v69;
    sub_5ADA10(v15, (__int64)v73, 1);
    if ( v68 == v88 )
      goto LABEL_91;
    v68 -= 8;
  }
}

