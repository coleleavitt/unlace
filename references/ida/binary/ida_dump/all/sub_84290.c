__int64 __fastcall sub_84290(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  _QWORD *v5; // rbp
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rbp
  void *v9; // rdi
  __int64 v10; // rbp
  void *v11; // rdi
  __int64 v12; // rbp
  void *v13; // rdi
  __int64 v14; // rbp
  void *v15; // rdi
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 j; // rbp
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // r12
  _QWORD *v26; // rbp
  __int64 result; // rax
  __int64 *v28; // r12
  __int64 v29; // rdx
  __int64 *v30; // rdi
  __int64 *v31; // rdi
  __int64 *v32; // r12
  __int64 v33; // rdx
  __int64 *v34; // rdi
  __int64 *v35; // rdi

  sub_3385F0();
  if ( *(_QWORD *)(a1 + 1472) )
  {
    *(_QWORD *)(a1 + 1480) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1448) )
  {
    *(_QWORD *)(a1 + 1456) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1408) )
  {
    *(_QWORD *)(a1 + 1416) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1392) )
  {
    sub_84190((unsigned __int64 **)(a1 + 1392));
    if ( *(_QWORD *)(a1 + 1392) )
      qfree();
  }
  if ( *(_QWORD *)(a1 + 1376) )
  {
    sub_84190((unsigned __int64 **)(a1 + 1376));
    if ( *(_QWORD *)(a1 + 1376) )
      qfree();
  }
  if ( *(_QWORD *)(a1 + 1360) )
  {
    sub_84080((unsigned __int64 **)(a1 + 1360));
    if ( *(_QWORD *)(a1 + 1360) )
      qfree();
  }
  if ( *(_QWORD *)(a1 + 1312) )
  {
    sub_83F70((unsigned __int64 **)(a1 + 1312));
    if ( *(_QWORD *)(a1 + 1312) )
      qfree();
  }
  if ( *(_QWORD *)(a1 + 1280) )
  {
    sub_83C10((unsigned __int64 **)(a1 + 1280));
    if ( *(_QWORD *)(a1 + 1280) )
      qfree();
  }
  v2 = *(_QWORD *)(a1 + 1256);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 1264);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 96 * i);
        if ( v5[7] )
        {
          v5[8] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v5[3] )
        {
          v5[4] = 0;
          qfree();
        }
        cleanup_argloc();
        v2 = *(_QWORD *)(a1 + 1256);
      }
    }
    *(_QWORD *)(a1 + 1264) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1216) )
  {
    *(_QWORD *)(a1 + 1224) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1192) )
  {
    *(_QWORD *)(a1 + 1200) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1160) )
  {
    *(_QWORD *)(a1 + 1168) = 0;
    qfree();
  }
  v6 = *(unsigned __int64 **)(a1 + 1144);
  if ( v6 )
  {
    v7 = *v6;
    if ( !*(_QWORD *)(a1 + 1152) )
    {
      *v6 = *v6 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1144));
      **(_QWORD **)(a1 + 1144) &= ~1uLL;
      **(_QWORD **)(a1 + 1144) |= 2uLL;
      goto LABEL_40;
    }
    v32 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    v33 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v33 & 2) != 0 )
    {
LABEL_112:
      *v6 = v7 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1144));
      **(_QWORD **)(a1 + 1144) &= ~1uLL;
      **(_QWORD **)(a1 + 1144) |= 2uLL;
      *(_QWORD *)(a1 + 1152) = 0;
LABEL_40:
      if ( *(_QWORD *)(a1 + 1144) )
        qfree();
      goto LABEL_42;
    }
    v34 = (__int64 *)v32[1];
    if ( (*(_BYTE *)v34 & 2) != 0 )
    {
      v35 = (__int64 *)v32[2];
      if ( (*(_BYTE *)v35 & 2) != 0 )
        goto LABEL_117;
    }
    else
    {
      sub_7ACC0(v34);
      v35 = (__int64 *)v32[2];
      if ( (*(_BYTE *)v35 & 2) != 0 )
        goto LABEL_108;
    }
    sub_7ACC0(v35);
LABEL_108:
    v33 = *v32;
    if ( (*v32 & 2) != 0 )
    {
LABEL_109:
      if ( v7 > 3 )
        qfree();
      v6 = *(unsigned __int64 **)(a1 + 1144);
      v7 = *v6;
      goto LABEL_112;
    }
LABEL_117:
    *v32 = v33 | 2;
    goto LABEL_109;
  }
LABEL_42:
  v8 = *(_QWORD *)(a1 + 1112);
  while ( v8 )
  {
    sub_7C100(*(_QWORD **)(v8 + 24));
    v9 = (void *)v8;
    v8 = *(_QWORD *)(v8 + 16);
    operator delete(v9, 0x28u);
  }
  v10 = *(_QWORD *)(a1 + 1064);
  while ( v10 )
  {
    sub_7C100(*(_QWORD **)(v10 + 24));
    v11 = (void *)v10;
    v10 = *(_QWORD *)(v10 + 16);
    operator delete(v11, 0x28u);
  }
  v12 = *(_QWORD *)(a1 + 1016);
  while ( v12 )
  {
    sub_7C100(*(_QWORD **)(v12 + 24));
    v13 = (void *)v12;
    v12 = *(_QWORD *)(v12 + 16);
    operator delete(v13, 0x28u);
  }
  v14 = *(_QWORD *)(a1 + 968);
  while ( v14 )
  {
    sub_7C100(*(_QWORD **)(v14 + 24));
    v15 = (void *)v14;
    v14 = *(_QWORD *)(v14 + 16);
    operator delete(v15, 0x28u);
  }
  if ( *(_QWORD *)(a1 + 872) )
  {
    sub_82C40((unsigned __int64 **)(a1 + 872));
    if ( *(_QWORD *)(a1 + 872) )
      qfree();
  }
  if ( *(_QWORD *)(a1 + 848) )
  {
    *(_QWORD *)(a1 + 856) = 0;
    qfree();
  }
  qfree();
  v16 = *(unsigned __int64 **)(a1 + 816);
  if ( v16 )
  {
    v17 = *v16;
    if ( !*(_QWORD *)(a1 + 824) )
    {
      *v16 = *v16 & 3 | (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 816));
      **(_QWORD **)(a1 + 816) &= ~1uLL;
      **(_QWORD **)(a1 + 816) |= 2uLL;
      goto LABEL_58;
    }
    v28 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
    v29 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v29 & 2) != 0 )
    {
LABEL_104:
      *v16 = v17 & 3 | (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 816));
      **(_QWORD **)(a1 + 816) &= ~1uLL;
      **(_QWORD **)(a1 + 816) |= 2uLL;
      *(_QWORD *)(a1 + 824) = 0;
LABEL_58:
      if ( *(_QWORD *)(a1 + 816) )
        qfree();
      goto LABEL_60;
    }
    v30 = (__int64 *)v28[1];
    if ( (*(_BYTE *)v30 & 2) != 0 )
    {
      v31 = (__int64 *)v28[2];
      if ( (*(_BYTE *)v31 & 2) != 0 )
        goto LABEL_118;
    }
    else
    {
      sub_7ACC0(v30);
      v31 = (__int64 *)v28[2];
      if ( (*(_BYTE *)v31 & 2) != 0 )
        goto LABEL_100;
    }
    sub_7ACC0(v31);
LABEL_100:
    v29 = *v28;
    if ( (*v28 & 2) != 0 )
    {
LABEL_101:
      if ( v17 > 3 )
        qfree();
      v16 = *(unsigned __int64 **)(a1 + 816);
      v17 = *v16;
      goto LABEL_104;
    }
LABEL_118:
    *v28 = v29 | 2;
    goto LABEL_101;
  }
LABEL_60:
  v18 = *(_QWORD *)(a1 + 728);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 736);
    if ( v19 )
    {
      for ( j = 0; j != v19; ++j )
      {
        v21 = v18 + 40 * j;
        if ( *(_QWORD *)(v21 + 16) )
        {
          *(_QWORD *)(v21 + 24) = 0;
          qfree();
          v18 = *(_QWORD *)(a1 + 728);
        }
      }
    }
    *(_QWORD *)(a1 + 736) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 496) )
  {
    *(_QWORD *)(a1 + 504) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 456) )
  {
    *(_QWORD *)(a1 + 464) = 0;
    qfree();
  }
  v22 = *(_QWORD *)(a1 + 432);
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1 + 440);
    if ( v23 )
    {
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = (_QWORD *)(v22 + v24);
        clear_tinfo_t();
        if ( *(_QWORD *)(v22 + v24 + 56) )
        {
          v26[8] = 0;
          qfree();
        }
        if ( v26[4] )
        {
          v26[5] = 0;
          qfree();
        }
        ++v25;
        v24 += 104;
        cleanup_argloc();
        v22 = *(_QWORD *)(a1 + 432);
      }
      while ( v23 != v25 );
    }
    *(_QWORD *)(a1 + 440) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 408) )
  {
    *(_QWORD *)(a1 + 416) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 376) )
  {
    *(_QWORD *)(a1 + 384) = 0;
    qfree();
  }
  qfree();
  if ( *(_QWORD *)(a1 + 336) )
  {
    *(_QWORD *)(a1 + 344) = 0;
    qfree();
  }
  clear_tinfo_t();
  qfree();
  if ( *(_QWORD *)(a1 + 272) )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree();
  }
  result = qfree();
  if ( *(_QWORD *)(a1 + 232) )
  {
    *(_QWORD *)(a1 + 240) = 0;
    result = qfree();
  }
  if ( *(_QWORD *)(a1 + 208) )
  {
    *(_QWORD *)(a1 + 216) = 0;
    result = qfree();
  }
  if ( *(_QWORD *)(a1 + 184) )
  {
    *(_QWORD *)(a1 + 192) = 0;
    result = qfree();
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    return qfree();
  }
  return result;
}
