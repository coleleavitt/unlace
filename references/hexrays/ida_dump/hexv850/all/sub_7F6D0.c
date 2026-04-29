__int64 __fastcall sub_7F6D0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 i; // r12
  _QWORD *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rbp
  void *v23; // rdi
  __int64 v24; // rbp
  void *v25; // rdi
  __int64 v26; // rbp
  void *v27; // rdi
  __int64 v28; // rbp
  void *v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // r12
  __int64 j; // rbp
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // r12
  _QWORD *v46; // rbp
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 result; // rax
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 *v58; // r12
  __int64 v59; // rdx
  __int64 *v60; // rdi
  __int64 *v61; // rdi
  __int64 *v62; // r12
  __int64 v63; // rdx
  __int64 *v64; // rdi
  __int64 *v65; // rdi

  sub_332870();
  v2 = *(_QWORD *)(a1 + 1472);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1480) = 0;
    qfree(v2);
  }
  v3 = *(_QWORD *)(a1 + 1448);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1456) = 0;
    qfree(v3);
  }
  v4 = *(_QWORD *)(a1 + 1408);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1416) = 0;
    qfree(v4);
  }
  if ( *(_QWORD *)(a1 + 1392) )
  {
    sub_7F5D0((unsigned __int64 **)(a1 + 1392));
    v5 = *(_QWORD *)(a1 + 1392);
    if ( v5 )
      qfree(v5);
  }
  if ( *(_QWORD *)(a1 + 1376) )
  {
    sub_7F5D0((unsigned __int64 **)(a1 + 1376));
    v6 = *(_QWORD *)(a1 + 1376);
    if ( v6 )
      qfree(v6);
  }
  if ( *(_QWORD *)(a1 + 1360) )
  {
    sub_7F4C0((unsigned __int64 **)(a1 + 1360));
    v7 = *(_QWORD *)(a1 + 1360);
    if ( v7 )
      qfree(v7);
  }
  if ( *(_QWORD *)(a1 + 1312) )
  {
    sub_7F3B0((unsigned __int64 **)(a1 + 1312));
    v8 = *(_QWORD *)(a1 + 1312);
    if ( v8 )
      qfree(v8);
  }
  if ( *(_QWORD *)(a1 + 1280) )
  {
    sub_7F050((unsigned __int64 **)(a1 + 1280));
    v9 = *(_QWORD *)(a1 + 1280);
    if ( v9 )
      qfree(v9);
  }
  v10 = *(_QWORD *)(a1 + 1256);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 1264);
    if ( v11 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v13 = (_QWORD *)(v10 + 96 * i);
        v14 = v13[7];
        if ( v14 )
        {
          v13[8] = 0;
          qfree(v14);
        }
        clear_tinfo_t(v13 + 6);
        v15 = v13[3];
        if ( v15 )
        {
          v13[4] = 0;
          qfree(v15);
        }
        cleanup_argloc(v13);
        v10 = *(_QWORD *)(a1 + 1256);
      }
    }
    *(_QWORD *)(a1 + 1264) = 0;
    qfree(v10);
  }
  v16 = *(_QWORD *)(a1 + 1216);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 1224) = 0;
    qfree(v16);
  }
  v17 = *(_QWORD *)(a1 + 1192);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 1200) = 0;
    qfree(v17);
  }
  v18 = *(_QWORD *)(a1 + 1160);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 1168) = 0;
    qfree(v18);
  }
  v19 = *(unsigned __int64 **)(a1 + 1144);
  if ( v19 )
  {
    v20 = *v19;
    if ( !*(_QWORD *)(a1 + 1152) )
    {
      *v19 = *v19 & 3 | (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1144));
      **(_QWORD **)(a1 + 1144) &= ~1uLL;
      **(_QWORD **)(a1 + 1144) |= 2uLL;
      goto LABEL_40;
    }
    v62 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
    v63 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v63 & 2) != 0 )
    {
LABEL_112:
      *v19 = v20 & 3 | (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1144));
      **(_QWORD **)(a1 + 1144) &= ~1uLL;
      **(_QWORD **)(a1 + 1144) |= 2uLL;
      *(_QWORD *)(a1 + 1152) = 0;
LABEL_40:
      v21 = *(_QWORD *)(a1 + 1144);
      if ( v21 )
        qfree(v21);
      goto LABEL_42;
    }
    v64 = (__int64 *)v62[1];
    if ( (*(_BYTE *)v64 & 2) != 0 )
    {
      v65 = (__int64 *)v62[2];
      if ( (*(_BYTE *)v65 & 2) != 0 )
        goto LABEL_117;
    }
    else
    {
      sub_76240(v64);
      v65 = (__int64 *)v62[2];
      if ( (*(_BYTE *)v65 & 2) != 0 )
        goto LABEL_108;
    }
    sub_76240(v65);
LABEL_108:
    v63 = *v62;
    if ( (*v62 & 2) != 0 )
    {
LABEL_109:
      if ( v20 > 3 )
        qfree(v20 & 0xFFFFFFFFFFFFFFFCLL);
      v19 = *(unsigned __int64 **)(a1 + 1144);
      v20 = *v19;
      goto LABEL_112;
    }
LABEL_117:
    *v62 = v63 | 2;
    goto LABEL_109;
  }
LABEL_42:
  v22 = *(_QWORD *)(a1 + 1112);
  while ( v22 )
  {
    sub_77680(*(_QWORD **)(v22 + 24));
    v23 = (void *)v22;
    v22 = *(_QWORD *)(v22 + 16);
    operator delete(v23, 0x28u);
  }
  v24 = *(_QWORD *)(a1 + 1064);
  while ( v24 )
  {
    sub_77680(*(_QWORD **)(v24 + 24));
    v25 = (void *)v24;
    v24 = *(_QWORD *)(v24 + 16);
    operator delete(v25, 0x28u);
  }
  v26 = *(_QWORD *)(a1 + 1016);
  while ( v26 )
  {
    sub_77680(*(_QWORD **)(v26 + 24));
    v27 = (void *)v26;
    v26 = *(_QWORD *)(v26 + 16);
    operator delete(v27, 0x28u);
  }
  v28 = *(_QWORD *)(a1 + 968);
  while ( v28 )
  {
    sub_77680(*(_QWORD **)(v28 + 24));
    v29 = (void *)v28;
    v28 = *(_QWORD *)(v28 + 16);
    operator delete(v29, 0x28u);
  }
  if ( *(_QWORD *)(a1 + 872) )
  {
    sub_7E080((unsigned __int64 **)(a1 + 872));
    v30 = *(_QWORD *)(a1 + 872);
    if ( v30 )
      qfree(v30);
  }
  v31 = *(_QWORD *)(a1 + 848);
  if ( v31 )
  {
    *(_QWORD *)(a1 + 856) = 0;
    qfree(v31);
  }
  qfree(*(_QWORD *)(a1 + 832));
  v32 = *(unsigned __int64 **)(a1 + 816);
  if ( v32 )
  {
    v33 = *v32;
    if ( !*(_QWORD *)(a1 + 824) )
    {
      *v32 = *v32 & 3 | (unsigned __int64)v32 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 816));
      **(_QWORD **)(a1 + 816) &= ~1uLL;
      **(_QWORD **)(a1 + 816) |= 2uLL;
      goto LABEL_58;
    }
    v58 = (__int64 *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
    v59 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v59 & 2) != 0 )
    {
LABEL_104:
      *v32 = v33 & 3 | (unsigned __int64)v32 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 816));
      **(_QWORD **)(a1 + 816) &= ~1uLL;
      **(_QWORD **)(a1 + 816) |= 2uLL;
      *(_QWORD *)(a1 + 824) = 0;
LABEL_58:
      v34 = *(_QWORD *)(a1 + 816);
      if ( v34 )
        qfree(v34);
      goto LABEL_60;
    }
    v60 = (__int64 *)v58[1];
    if ( (*(_BYTE *)v60 & 2) != 0 )
    {
      v61 = (__int64 *)v58[2];
      if ( (*(_BYTE *)v61 & 2) != 0 )
        goto LABEL_118;
    }
    else
    {
      sub_76240(v60);
      v61 = (__int64 *)v58[2];
      if ( (*(_BYTE *)v61 & 2) != 0 )
        goto LABEL_100;
    }
    sub_76240(v61);
LABEL_100:
    v59 = *v58;
    if ( (*v58 & 2) != 0 )
    {
LABEL_101:
      if ( v33 > 3 )
        qfree(v33 & 0xFFFFFFFFFFFFFFFCLL);
      v32 = *(unsigned __int64 **)(a1 + 816);
      v33 = *v32;
      goto LABEL_104;
    }
LABEL_118:
    *v58 = v59 | 2;
    goto LABEL_101;
  }
LABEL_60:
  v35 = *(_QWORD *)(a1 + 728);
  if ( v35 )
  {
    v36 = *(_QWORD *)(a1 + 736);
    if ( v36 )
    {
      for ( j = 0; j != v36; ++j )
      {
        v38 = v35 + 40 * j;
        v39 = *(_QWORD *)(v38 + 16);
        if ( v39 )
        {
          *(_QWORD *)(v38 + 24) = 0;
          qfree(v39);
          v35 = *(_QWORD *)(a1 + 728);
        }
      }
    }
    *(_QWORD *)(a1 + 736) = 0;
    qfree(v35);
  }
  v40 = *(_QWORD *)(a1 + 496);
  if ( v40 )
  {
    *(_QWORD *)(a1 + 504) = 0;
    qfree(v40);
  }
  v41 = *(_QWORD *)(a1 + 456);
  if ( v41 )
  {
    *(_QWORD *)(a1 + 464) = 0;
    qfree(v41);
  }
  v42 = *(_QWORD *)(a1 + 432);
  if ( v42 )
  {
    v43 = *(_QWORD *)(a1 + 440);
    if ( v43 )
    {
      v44 = 0;
      v45 = 0;
      do
      {
        v46 = (_QWORD *)(v42 + v44);
        clear_tinfo_t(v42 + v44 + 80);
        v47 = *(_QWORD *)(v42 + v44 + 56);
        if ( v47 )
        {
          v46[8] = 0;
          qfree(v47);
        }
        v48 = v46[4];
        if ( v48 )
        {
          v46[5] = 0;
          qfree(v48);
        }
        ++v45;
        v44 += 104;
        cleanup_argloc(v46);
        v42 = *(_QWORD *)(a1 + 432);
      }
      while ( v43 != v45 );
    }
    *(_QWORD *)(a1 + 440) = 0;
    qfree(v42);
  }
  v49 = *(_QWORD *)(a1 + 408);
  if ( v49 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    qfree(v49);
  }
  v50 = *(_QWORD *)(a1 + 376);
  if ( v50 )
  {
    *(_QWORD *)(a1 + 384) = 0;
    qfree(v50);
  }
  qfree(*(_QWORD *)(a1 + 360));
  v51 = *(_QWORD *)(a1 + 336);
  if ( v51 )
  {
    *(_QWORD *)(a1 + 344) = 0;
    qfree(v51);
  }
  clear_tinfo_t(a1 + 328);
  qfree(*(_QWORD *)(a1 + 296));
  v52 = *(_QWORD *)(a1 + 272);
  if ( v52 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree(v52);
  }
  result = qfree(*(_QWORD *)(a1 + 256));
  v54 = *(_QWORD *)(a1 + 232);
  if ( v54 )
  {
    *(_QWORD *)(a1 + 240) = 0;
    result = qfree(v54);
  }
  v55 = *(_QWORD *)(a1 + 208);
  if ( v55 )
  {
    *(_QWORD *)(a1 + 216) = 0;
    result = qfree(v55);
  }
  v56 = *(_QWORD *)(a1 + 184);
  if ( v56 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    result = qfree(v56);
  }
  v57 = *(_QWORD *)(a1 + 16);
  if ( v57 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    return qfree(v57);
  }
  return result;
}
