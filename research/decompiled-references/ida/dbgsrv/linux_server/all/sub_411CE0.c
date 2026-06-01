/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411CE0
// Address: 0x0000000000411CE0

//----- (0000000000411CE0) ----------------------------------------------------
unsigned __int64 __fastcall sub_411CE0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  char *v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbp
  char *v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  char *v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbp
  char *v13; // rax
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rbp
  void *v17; // rdi
  void *v18; // rdi
  char *v19; // rdx
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 k; // rbp
  void *v23; // rdi
  __int64 v24; // rbp
  void *v25; // rdi
  void *v26; // rdi
  char *v27; // rdi
  __int64 v28; // r13
  __int64 m; // r12
  char *v30; // rbp
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rdi
  char *v34; // rdi
  __int64 v35; // r13
  __int64 n; // r12
  char *v37; // rbp
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  __m128i v41; // xmm2
  __m128i v42; // xmm1
  __m128i v43; // xmm0
  void *v44; // rdi
  void **v45; // rbp
  unsigned __int64 v46; // r12
  void *v47; // rdi
  void *v48; // rdi
  void *v49; // rdi
  char *v50; // rdi
  __int64 v51; // r14
  __int64 v52; // r13
  __int64 ii; // r12
  char *v54; // rbp
  void *v55; // rdi
  void *v56; // rdi
  _OWORD v58[2]; // [rsp+0h] [rbp-78h] BYREF
  _OWORD v59[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-30h]

  v60 = __readfsqword(0x28u);
  *(_QWORD *)a1 = off_4C45E8;
  sub_4569A0((__int64 *)a1);
  v2 = *(void **)(a1 + 832);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 840) = 0;
    j__free(v2);
  }
  v3 = *(void **)(a1 + 808);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 816) = 0;
    j__free(v3);
  }
  v4 = *(char **)(a1 + 744);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 752);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v4[24 * i];
        v8 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          j__free(v8);
          v4 = *(char **)(a1 + 744);
        }
      }
    }
    *(_QWORD *)(a1 + 752) = 0;
    j__free(v4);
  }
  v9 = *(void **)(a1 + 720);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 728) = 0;
    j__free(v9);
  }
  v10 = *(char **)(a1 + 696);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 704);
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = &v10[24 * j];
        v14 = *(void **)v13;
        if ( *(_QWORD *)v13 )
        {
          *((_QWORD *)v13 + 1) = 0;
          j__free(v14);
          v10 = *(char **)(a1 + 696);
        }
      }
    }
    *(_QWORD *)(a1 + 704) = 0;
    j__free(v10);
  }
  v15 = *(void **)(a1 + 672);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 680) = 0;
    j__free(v15);
  }
  v16 = *(_QWORD *)(a1 + 624);
  while ( v16 )
  {
    sub_40EC10(*(_QWORD **)(v16 + 24));
    v17 = (void *)v16;
    v16 = *(_QWORD *)(v16 + 16);
    operator delete(v17, 0x50u);
  }
  v18 = *(void **)(a1 + 584);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 592) = 0;
    j__free(v18);
  }
  v19 = *(char **)(a1 + 560);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 568);
    if ( v20 )
    {
      v21 = 0;
      for ( k = 0; k != v20; ++k )
      {
        v23 = *(void **)&v19[v21 + 8];
        if ( v23 )
        {
          *(_QWORD *)&v19[v21 + 16] = 0;
          j__free(v23);
          v19 = *(char **)(a1 + 560);
        }
        v21 += 56;
      }
    }
    *(_QWORD *)(a1 + 568) = 0;
    j__free(v19);
  }
  v24 = *(_QWORD *)(a1 + 528);
  while ( v24 )
  {
    sub_40EDE0(*(_QWORD **)(v24 + 24));
    v25 = (void *)v24;
    v24 = *(_QWORD *)(v24 + 16);
    operator delete(v25, 0x40u);
  }
  v26 = *(void **)(a1 + 488);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 496) = 0;
    j__free(v26);
  }
  v27 = *(char **)(a1 + 456);
  if ( v27 )
  {
    v28 = *(_QWORD *)(a1 + 464);
    if ( v28 )
    {
      for ( m = 0; m != v28; ++m )
      {
        v30 = &v27[80 * m];
        v31 = *((void **)v30 + 5);
        if ( v31 )
        {
          *((_QWORD *)v30 + 6) = 0;
          j__free(v31);
        }
        v32 = *((void **)v30 + 2);
        if ( v32 )
        {
          *((_QWORD *)v30 + 3) = 0;
          j__free(v32);
        }
        v27 = *(char **)(a1 + 456);
      }
    }
    *(_QWORD *)(a1 + 464) = 0;
    j__free(v27);
  }
  v33 = *(void **)(a1 + 432);
  if ( v33 )
  {
    *(_QWORD *)(a1 + 440) = 0;
    j__free(v33);
  }
  sub_40DE70(*(void **)(a1 + 400));
  sub_40E090(*(_QWORD **)(a1 + 352));
  v34 = *(char **)(a1 + 312);
  if ( v34 )
  {
    v35 = *(_QWORD *)(a1 + 320);
    if ( v35 )
    {
      for ( n = 0; n != v35; ++n )
      {
        v37 = &v34[64 * n];
        v38 = *((void **)v37 + 5);
        if ( v38 )
        {
          *((_QWORD *)v37 + 6) = 0;
          j__free(v38);
        }
        v39 = *((void **)v37 + 1);
        if ( v39 )
        {
          *((_QWORD *)v37 + 2) = 0;
          j__free(v39);
        }
        v34 = *(char **)(a1 + 312);
      }
    }
    *(_QWORD *)(a1 + 320) = 0;
    j__free(v34);
  }
  v40 = *(void **)(a1 + 280);
  if ( v40 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    j__free(v40);
  }
  sub_478720(a1 + 200);
  v41 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  v42 = _mm_loadu_si128((const __m128i *)(a1 + 136));
  v43 = _mm_loadu_si128((const __m128i *)(a1 + 152));
  v58[0] = _mm_loadu_si128((const __m128i *)(a1 + 168));
  v58[1] = v41;
  v59[0] = v42;
  v59[1] = v43;
  sub_40DD40((__int64 *)v59, (__int64 *)v58);
  v44 = *(void **)(a1 + 120);
  if ( v44 )
  {
    v45 = *(void ***)(a1 + 160);
    v46 = *(_QWORD *)(a1 + 192) + 8LL;
    if ( (unsigned __int64)v45 < v46 )
    {
      do
      {
        v47 = *v45++;
        operator delete(v47, 0x1F8u);
      }
      while ( (unsigned __int64)v45 < v46 );
      v44 = *(void **)(a1 + 120);
    }
    operator delete(v44, 8LL * *(_QWORD *)(a1 + 128));
  }
  v48 = *(void **)(a1 + 96);
  if ( v48 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    j__free(v48);
  }
  v49 = *(void **)(a1 + 72);
  if ( v49 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    j__free(v49);
  }
  v50 = *(char **)(a1 + 48);
  if ( v50 )
  {
    v51 = *(_QWORD *)(a1 + 56);
    if ( v51 )
    {
      v52 = 0;
      for ( ii = 0; ii != v51; ++ii )
      {
        v54 = &v50[v52];
        v55 = *(void **)&v50[v52 + 32];
        if ( v55 )
        {
          *((_QWORD *)v54 + 5) = 0;
          j__free(v55);
        }
        v56 = *((void **)v54 + 1);
        if ( v56 )
        {
          *((_QWORD *)v54 + 2) = 0;
          j__free(v56);
        }
        v50 = *(char **)(a1 + 48);
        v52 += 56;
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v50);
  }
  return v60 - __readfsqword(0x28u);
}
// 4C45E8: using guessed type __int64 (__fastcall *off_4C45E8[4])();
