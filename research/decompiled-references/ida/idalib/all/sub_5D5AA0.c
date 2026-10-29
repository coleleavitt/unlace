__int64 __fastcall sub_5D5AA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        int a6,
        double a7,
        double a8,
        double a9,
        __int64 a10)
{
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // r14
  __m128i *v15; // r12
  __int64 func; // rax
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 next_fchunk; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  __m128 v26; // xmm0
  _QWORD *v27; // rax
  int v28; // r8d
  void *v29; // rdi
  unsigned int v30; // eax
  unsigned __int64 v31; // r8
  __int64 v32; // rdi
  char *v33; // r9
  __int64 v34; // rax
  char *v35; // rsi
  char *v36; // r11
  __int64 i; // rax
  unsigned __int64 *v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rsi
  char *v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rbx
  char *v44; // r15
  __int64 v45; // rbp
  void *v46; // r14
  char *v47; // rdi
  int v48; // eax
  __int64 v49; // rbx
  char *v50; // r15
  __int64 v51; // r14
  char *v52; // rbp
  char *v53; // rdi
  int v54; // eax
  __int64 v55; // rbx
  char *v56; // r15
  __int64 v57; // r14
  char *v58; // rbp
  char *v59; // rdi
  int v60; // eax
  __int64 v61; // r14
  void *v62; // r15
  __int64 j; // r15
  __int64 v64; // r14
  const char *v65; // rdi
  size_t v66; // rbx
  void *v67; // rdi
  int v68; // eax
  __int64 v69; // rbx
  unsigned __int64 v70; // rdx
  __int64 v71; // rdi
  __int64 v72; // rax
  unsigned __int64 *v73; // r15
  unsigned __int64 *v74; // r14
  unsigned __int64 *v75; // rax
  __int64 v76; // r15
  const char *v78; // rdx
  __int64 v79; // rbx
  const char *v80; // rdx
  unsigned __int64 v81; // rsi
  unsigned __int64 *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // [rsp+0h] [rbp-138h]
  int v85; // [rsp+8h] [rbp-130h]
  int v86[2]; // [rsp+8h] [rbp-130h]
  int v87[2]; // [rsp+8h] [rbp-130h]
  int v88[2]; // [rsp+8h] [rbp-130h]
  __int64 v89; // [rsp+10h] [rbp-128h]
  unsigned __int64 v90; // [rsp+10h] [rbp-128h]
  __m128i *src; // [rsp+18h] [rbp-120h]
  __int64 v92; // [rsp+20h] [rbp-118h]
  __int64 v93; // [rsp+28h] [rbp-110h]
  unsigned int v94; // [rsp+30h] [rbp-108h]
  unsigned int v95; // [rsp+34h] [rbp-104h]
  int v96; // [rsp+38h] [rbp-100h]
  char v97; // [rsp+3Ch] [rbp-FCh]
  __int64 *v98; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v99; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v101; // [rsp+58h] [rbp-E0h]
  void *v102[5]; // [rsp+60h] [rbp-D8h] BYREF
  __int16 v103; // [rsp+88h] [rbp-B0h]
  __int128 v104; // [rsp+90h] [rbp-A8h]
  __int64 v105; // [rsp+A0h] [rbp-98h]
  __int64 v106; // [rsp+A8h] [rbp-90h]
  int v107; // [rsp+B0h] [rbp-88h]
  __int64 v108; // [rsp+B8h] [rbp-80h]
  int v109; // [rsp+C0h] [rbp-78h]
  __int64 v110; // [rsp+C8h] [rbp-70h]
  int v111; // [rsp+D0h] [rbp-68h]
  __int64 v112; // [rsp+D8h] [rbp-60h]
  int v113; // [rsp+E0h] [rbp-58h]
  __int64 v114; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v115; // [rsp+F8h] [rbp-40h]

  v12 = a2;
  v94 = a5;
  v95 = a6;
  v93 = a1;
  v97 = a4;
  HIBYTE(v92) = a10;
  v115 = __readfsqword(0x28u);
  v13 = *(_QWORD *)a2;
  v99 = *(_QWORD *)a2;
  sub_46B610(a1, a5, a6, *(void **)a2);
  v98 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 4LL * a6 + 16)) + 1672);
  v101 = sub_4F2E10(v98, 0xBu, v13);
  v14 = a5 + 4LL;
  v15 = *(__m128i **)(switch_dbctx(*(int *)(a1 + 4LL * a5 + 16)) + 1672);
  func = get_func(v13);
  if ( !func )
  {
    if ( !v97 )
      goto LABEL_120;
    goto LABEL_17;
  }
  v17 = func;
  if ( *(__int64 *)(func + 16) < 0 )
    return 1;
  if ( v97 )
  {
LABEL_17:
    v102[4] = nullptr;
    v26 = _mm_loadh_ps((const double *)(a2 + 8));
    v103 = 0;
    *(__m128 *)v102 = v26;
    v105 = 0xFFFFFFFFLL;
    *(__m128i *)&v102[2] = _mm_load_si128((const __m128i *)&xmmword_23A76D0);
    v106 = 0;
    v107 = 0;
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v104 = 0;
    if ( !(unsigned __int8)add_func_ex((int)v102) )
    {
      if ( !under_debugger )
        interr(1860);
      goto LABEL_154;
    }
    v27 = (_QWORD *)get_func(v99);
    v17 = (__int64)v27;
    if ( v27 && v99 == *v27 )
    {
LABEL_20:
      if ( *(_QWORD *)(v17 + 8) == *(_QWORD *)(v12 + 8) )
      {
        v28 = *(_DWORD *)(v17 + 68);
        *(_QWORD *)(v17 + 16) = *(_QWORD *)(v12 + 16);
        *(_QWORD *)(v17 + 32) = *(_QWORD *)(v12 + 32);
        *(_WORD *)(v17 + 40) = *(_WORD *)(v12 + 40);
        *(_QWORD *)(v17 + 48) = *(_QWORD *)(v12 + 48);
        *(_QWORD *)(v17 + 56) = *(_QWORD *)(v12 + 56);
        *(_DWORD *)(v17 + 64) = *(_DWORD *)(v12 + 64);
        if ( v28 )
        {
          if ( v97 )
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
  if ( v99 != *(_QWORD *)func )
    goto LABEL_120;
  v18 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(func + 8) != v18 )
  {
    src = v15;
    v89 = v14;
    while ( !(unsigned __int8)set_func_end(v99, v18) )
    {
      next_fchunk = get_next_fchunk(v99);
      v25 = next_fchunk;
      if ( !next_fchunk || v17 == next_fchunk || *(_QWORD *)next_fchunk >= *(_QWORD *)(v12 + 8) )
      {
        if ( !under_debugger )
          interr(1926);
        goto LABEL_154;
      }
      if ( *(char *)(next_fchunk + 17) >= 0 )
      {
        v19 = switch_dbctx(*(int *)(a1 + 4 * v89));
        sub_459560(a1, 3u, v94, 0xFFFFFFFF, v25);
        sub_5D4180(*(_QWORD *)(v19 + 1672), v84, v25, v89, src, v92, v93, v94, v96, (__int64)v98);
      }
      else if ( !(unsigned __int8)sub_5D4820(
                                    *(__m128i **)(qword_2CCB598 + 1672),
                                    next_fchunk,
                                    a7,
                                    a8,
                                    a9,
                                    v21,
                                    v22,
                                    v23,
                                    v24,
                                    v84,
                                    v85,
                                    v89,
                                    src,
                                    v92,
                                    v93,
                                    v94,
                                    v96,
                                    (__int64)v98) )
      {
        if ( !under_debugger )
          interr(1925);
        goto LABEL_154;
      }
      v18 = *(_QWORD *)(v12 + 8);
    }
    v15 = src;
    goto LABEL_20;
  }
  *(_QWORD *)(func + 16) = *(_QWORD *)(v12 + 16);
  *(_QWORD *)(func + 32) = *(_QWORD *)(v12 + 32);
  *(_WORD *)(func + 40) = *(_WORD *)(v12 + 40);
  *(_QWORD *)(func + 48) = *(_QWORD *)(v12 + 48);
  *(_QWORD *)(func + 56) = *(_QWORD *)(v12 + 56);
  *(_DWORD *)(func + 64) = *(_DWORD *)(v12 + 64);
  if ( *(_DWORD *)(func + 68) )
  {
LABEL_23:
    v29 = *(void **)(v17 + 72);
    if ( v29 )
      qfree(v29);
    *(_QWORD *)(v17 + 72) = 0;
    *(_DWORD *)(v17 + 68) = 0;
  }
LABEL_26:
  v30 = *(_DWORD *)(v12 + 68);
  if ( v30 )
  {
    *(_DWORD *)(v17 + 68) = v30;
    *(_QWORD *)(v17 + 72) = sub_5D19A0(*(_QWORD *)(v12 + 72), v30);
  }
  v31 = *(_QWORD *)v17;
  v32 = *(_QWORD *)(v15->m128i_i64[0] + 1616);
  v33 = *(char **)(v32 + 24);
  v34 = 16LL * *(_QWORD *)(v32 + 32);
  v35 = v33;
  v36 = &v33[v34];
  for ( i = v34 >> 4; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v38 = (unsigned __int64 *)&v35[16 * (i >> 1)];
      if ( *v38 >= v31 )
        break;
      v35 = (char *)(v38 + 2);
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_32;
    }
  }
LABEL_32:
  if ( v36 != v35 && v31 == *(_QWORD *)v35 )
  {
    v39 = (v35 - v33) >> 4;
    if ( (_DWORD)v39 != -1 )
    {
      v40 = 16LL * (int)v39;
      v41 = &v33[v40];
      v42 = *((unsigned int *)v41 + 2);
      *((_DWORD *)v41 + 2) |= 1u;
      sub_5D0480(v32, v31, v42, *(_DWORD *)(*(_QWORD *)(v32 + 24) + v40 + 8));
    }
  }
  v43 = *(int *)(v17 + 80);
  if ( !(_DWORD)v43 )
  {
    v48 = *(_DWORD *)(v12 + 80);
    if ( !v48 )
      goto LABEL_111;
    goto LABEL_133;
  }
  if ( v97 )
    goto LABEL_113;
  if ( *(_QWORD *)(v17 + 88) )
  {
    *(_QWORD *)v86 = v12;
    v44 = *(char **)(v17 + 88);
    v45 = 0;
    v46 = v44;
    do
    {
      v47 = v44;
      ++v45;
      v44 += 40;
      free_regvar(v47);
    }
    while ( v43 != v45 );
    v12 = *(_QWORD *)v86;
    qfree(v46);
  }
  *(_QWORD *)(v17 + 88) = 0;
  *(_DWORD *)(v17 + 80) = 0;
  v48 = *(_DWORD *)(v12 + 80);
  if ( v48 )
  {
LABEL_133:
    *(_DWORD *)(v17 + 80) = v48;
    *(_QWORD *)(v17 + 88) = sub_5D1AE0(*(const __m128i **)(v12 + 88), v48);
LABEL_111:
    v49 = *(int *)(v17 + 96);
    if ( !(_DWORD)v49 )
    {
      v54 = *(_DWORD *)(v12 + 96);
      if ( !v54 )
        goto LABEL_123;
      goto LABEL_126;
    }
    if ( !v97 )
      goto LABEL_44;
LABEL_113:
    if ( !under_debugger )
      interr(1862);
    goto LABEL_154;
  }
  v49 = *(int *)(v17 + 96);
  if ( !(_DWORD)v49 )
  {
    v54 = *(_DWORD *)(v12 + 96);
    if ( !v54 )
    {
      v55 = *(int *)(v17 + 112);
      if ( !(_DWORD)v55 )
        goto LABEL_55;
      goto LABEL_50;
    }
    goto LABEL_126;
  }
LABEL_44:
  if ( *(_QWORD *)(v17 + 104) )
  {
    *(_QWORD *)v87 = v12;
    v50 = *(char **)(v17 + 104);
    v51 = 0;
    v52 = v50;
    do
    {
      v53 = v52;
      ++v51;
      v52 += 16;
      sub_63F180(v53);
    }
    while ( v49 != v51 );
    v12 = *(_QWORD *)v87;
    qfree(v50);
  }
  *(_QWORD *)(v17 + 104) = 0;
  *(_DWORD *)(v17 + 96) = 0;
  v54 = *(_DWORD *)(v12 + 96);
  if ( v54 )
  {
LABEL_126:
    *(_DWORD *)(v17 + 96) = v54;
    *(_QWORD *)(v17 + 104) = sub_5D1CF0(*(_QWORD *)(v12 + 104), v54);
LABEL_123:
    v55 = *(int *)(v17 + 112);
    if ( !(_DWORD)v55 )
      goto LABEL_55;
    if ( !v97 )
      goto LABEL_50;
    goto LABEL_113;
  }
  v55 = *(int *)(v17 + 112);
  if ( (_DWORD)v55 )
  {
LABEL_50:
    if ( *(_QWORD *)(v17 + 120) )
    {
      *(_QWORD *)v88 = v12;
      v56 = *(char **)(v17 + 120);
      v57 = 0;
      v58 = v56;
      do
      {
        v59 = v58;
        ++v57;
        v58 += 24;
        free_regarg(v59);
      }
      while ( v55 != v57 );
      v12 = *(_QWORD *)v88;
      qfree(v56);
    }
    *(_QWORD *)(v17 + 120) = 0;
    *(_DWORD *)(v17 + 112) = 0;
LABEL_55:
    v60 = *(_DWORD *)(v12 + 112);
    if ( !v60 )
      goto LABEL_56;
    goto LABEL_132;
  }
  v60 = *(_DWORD *)(v12 + 112);
  if ( !v60 )
  {
LABEL_128:
    v102[0] = nullptr;
    *(_OWORD *)&v102[2] = 0;
    func_tail_iterator_set(v102, v17, -1);
    while ( v102[0] )
    {
      LODWORD(v102[1]) = 0;
      if ( *((int *)v102[0] + 32) <= 0 )
      {
        lock_func_range(v102[0], 0);
        goto LABEL_71;
      }
      sub_5CE320(v15, v17, *((unsigned __int64 **)v102[0] + 17), 0, 0.0, a8, a9);
    }
    goto LABEL_71;
  }
LABEL_132:
  *(_DWORD *)(v17 + 112) = v60;
  *(_QWORD *)(v17 + 120) = sub_5D1F60(*(char **)(v12 + 120), v60);
LABEL_56:
  if ( *(int *)(v17 + 96) > 0 )
  {
    v61 = 0;
    do
    {
      while ( 1 )
      {
        v62 = *(void **)(*(_QWORD *)(v17 + 104) + 16 * v61);
        if ( (((unsigned __int16)sub_3C5DC0((__int64)v98, (unsigned __int64)v62) >> 8) & 0x40) != 0 )
          break;
        if ( *(_DWORD *)(v17 + 96) <= (int)++v61 )
          goto LABEL_61;
      }
      sub_3D0E60((__int64)v15, v62, 0, 0x4000u);
      sub_3CFE00(v15, v62, 0x4000);
      ++v61;
    }
    while ( *(_DWORD *)(v17 + 96) > (int)v61 );
  }
LABEL_61:
  if ( *(int *)(v17 + 112) > 0 )
  {
    for ( j = 0; *(_DWORD *)(v17 + 112) > (int)j; ++j )
    {
      while ( 1 )
      {
        v64 = *(_QWORD *)(v17 + 120) + 24 * j;
        if ( *(_QWORD *)(v64 + 8) )
          break;
LABEL_65:
        if ( *(_DWORD *)(v17 + 112) <= (int)++j )
          goto LABEL_70;
      }
      a8 = 0.0;
      v65 = *(const char **)(v64 + 8);
      memset(v102, 0, 24);
      v66 = strlen(v65);
      v102[0] = (void *)qvector_reserve(v102, 0, v66 + 1, 1);
      v102[1] = (void *)(v66 + 1);
      memmove(v102[0], v65, v66);
      *((_BYTE *)v102[0] + v66) = 0;
      if ( !(unsigned __int8)sub_498010(v93, (__int64)v102, v95, v94, 1) )
      {
        if ( v102[0] )
        {
          v102[1] = nullptr;
          qfree(v102[0]);
        }
        goto LABEL_65;
      }
      qfree(*(void **)(v64 + 8));
      v67 = v102[0];
      if ( v102[1] < v102[2] )
      {
        if ( v102[0] )
        {
          if ( v102[1] )
          {
            v67 = (void *)qrealloc(v102[0]);
            if ( !v67 )
              v67 = v102[0];
          }
        }
      }
      *(_QWORD *)(v64 + 8) = v67;
    }
  }
LABEL_70:
  if ( !v97 )
    goto LABEL_128;
LABEL_71:
  v68 = *(_DWORD *)(v12 + 128) - 1;
  if ( v68 < 0 )
  {
LABEL_91:
    v78 = haystack;
    v79 = qword_2CCB598;
    if ( *(_QWORD *)(a3 + 8) )
      v78 = *(const char **)a3;
    sub_5083D0((__int64 *)(*(_QWORD *)(qword_2CCB598 + 1672) + 1704LL), (_QWORD *)v17, v78, 0);
    v80 = haystack;
    if ( *(_QWORD *)(a3 + 32) )
      v80 = *(const char **)(a3 + 24);
    sub_5083D0((__int64 *)(*(_QWORD *)(v79 + 1672) + 1704LL), (_QWORD *)v17, v80, 1u);
    sub_674600(v15, v17, 0);
    sub_63F270(v15, v17, 0);
    sub_673A70(v15, v17, 0);
    sub_5C7BB0(v15->m128i_i64, v17, 0);
    *(_QWORD *)(v17 + 16) = *(_QWORD *)(v12 + 16);
    update_func(v17);
    v81 = *(_QWORD *)v17;
    *(_QWORD *)(v17 + 16) |= 0x8000000000000000LL;
    v82 = sub_505D70((__int64)(v98 + 213), v81);
    if ( v82 )
    {
      v83 = v82[2];
      if ( (v83 & 0x8000) != 0 )
      {
        v82 = sub_505D70((__int64)(v98 + 213), v82[3]);
        v83 = v82[2];
      }
    }
    else
    {
      v83 = 0x1003E0003LL;
    }
    v82[2] = v83 | 0x8000000000000000LL;
    if ( v99 == v101 )
      sub_4F2EF0(v15, 0xBu, v99, 0);
    else
      sub_4F2FE0(v15, 11, v99);
    if ( *(_QWORD *)v17 != *(_QWORD *)v12
      || *(_QWORD *)(v17 + 8) != *(_QWORD *)(v12 + 8)
      || (unsigned int)sub_5C8180(v17, v12, 5u, v93, v94, v95) )
    {
      if ( !under_debugger )
        interr(1864);
      goto LABEL_154;
    }
    if ( v97 )
      sub_459560(v93, 2u, v94, v95, v17);
    return 1;
  }
  v69 = 16LL * v68;
  v90 = 16 * (v68 - (unsigned __int64)(unsigned int)v68);
  while ( 1 )
  {
    v73 = (unsigned __int64 *)(v69 + *(_QWORD *)(v12 + 136));
    if ( !sub_505D70((__int64)&v15[101].m128i_i64[1], *v73) )
      sub_368890();
    if ( !(unsigned __int8)append_func_tail(v17, *v73, v73[1]) )
      return 0;
    v74 = sub_505D70((__int64)&v15[106].m128i_i64[1], *v73);
    v75 = sub_505D70((__int64)(v98 + 213), *v73);
    v76 = (__int64)v75;
    if ( HIBYTE(v92) )
    {
      if ( !sub_5CB2B0((__int64)v15, (__int64)v74, v75[3]) )
        return 0;
    }
    if ( !v74 || !v76 )
    {
      if ( !under_debugger )
        interr(2204);
      goto LABEL_154;
    }
    v74[2] = *(_QWORD *)(v76 + 16);
    v74[3] = *(_QWORD *)(v76 + 24);
    v70 = *(int *)(v76 + 32);
    if ( (_DWORD)v70 )
    {
      v71 = v74[5];
      if ( (int)v70 > *((_DWORD *)v74 + 8) )
      {
        if ( 8 * v70 < v70 )
        {
          v74[5] = 0;
LABEL_104:
          sub_3BC000((int)"merge_func_tail:referers");
        }
        v72 = qrealloc(v71);
        v74[5] = v72;
        v71 = v72;
      }
      if ( !v71 )
        goto LABEL_104;
      if ( !(unsigned __int8)sub_5C7D50(v98, v76, v70) )
      {
        if ( !under_debugger )
          interr(2205);
        goto LABEL_154;
      }
      memcpy((void *)v74[5], *(const void **)(v76 + 40), 8LL * *(int *)(v76 + 32));
      LODWORD(v70) = *(_DWORD *)(v76 + 32);
    }
    *((_DWORD *)v74 + 8) = v70;
    sub_5C85A0(v15->m128i_i64, (__int64)v74, 1);
    if ( v69 == v90 )
      goto LABEL_91;
    v69 -= 16;
  }
}
