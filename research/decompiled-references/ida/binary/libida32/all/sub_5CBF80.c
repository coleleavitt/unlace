void __fastcall sub_5CBF80(__int64 a1)
{
  __int64 v2; // rdi
  char *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 i; // r12
  char *v7; // rbp
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  char *v11; // rdx
  __int64 v12; // r12
  __int64 j; // rbp
  char *v14; // rax
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  char *v21; // rdx
  __int64 v22; // r12
  __int64 k; // rbp
  char *v24; // rax
  void *v25; // rdi
  void *v26; // rdi
  char *v27; // rdi
  __int64 v28; // r12
  __int64 m; // rbp
  __int64 v30; // rax
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rdi
  void *v34; // rdi

  sub_5CBE90(a1);
  v2 = *(_QWORD *)(a1 + 496);
  if ( v2 )
    qfclose(v2);
  destroy_lexer(*(void **)(a1 + 232));
  v3 = *(char **)(a1 + 688);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 696);
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = &v3[v5];
        v8 = *(void **)&v3[v5 + 24];
        if ( v8 )
        {
          *((_QWORD *)v7 + 4) = 0;
          qfree(v8);
        }
        v9 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          qfree(v9);
        }
        v3 = *(char **)(a1 + 688);
        v5 += 56;
      }
    }
    *(_QWORD *)(a1 + 696) = 0;
    qfree(v3);
  }
  v10 = *(void **)(a1 + 656);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 664) = 0;
    qfree(v10);
  }
  v11 = *(char **)(a1 + 624);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 632);
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = &v11[24 * j];
        v15 = *(void **)v14;
        if ( *(_QWORD *)v14 )
        {
          *((_QWORD *)v14 + 1) = 0;
          qfree(v15);
          v11 = *(char **)(a1 + 624);
        }
      }
    }
    *(_QWORD *)(a1 + 632) = 0;
    qfree(v11);
  }
  v16 = *(void **)(a1 + 600);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 608) = 0;
    qfree(v16);
  }
  v17 = *(void **)(a1 + 576);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 584) = 0;
    qfree(v17);
  }
  v18 = *(void **)(a1 + 552);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 560) = 0;
    qfree(v18);
  }
  v19 = *(void **)(a1 + 528);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 536) = 0;
    qfree(v19);
  }
  v20 = *(void **)(a1 + 504);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 512) = 0;
    qfree(v20);
  }
  v21 = *(char **)(a1 + 456);
  if ( v21 )
  {
    v22 = *(_QWORD *)(a1 + 464);
    if ( v22 )
    {
      for ( k = 0; k != v22; ++k )
      {
        v24 = &v21[64 * k];
        v25 = *(void **)v24;
        if ( *(_QWORD *)v24 )
        {
          *((_QWORD *)v24 + 1) = 0;
          qfree(v25);
          v21 = *(char **)(a1 + 456);
        }
      }
    }
    *(_QWORD *)(a1 + 464) = 0;
    qfree(v21);
  }
  v26 = *(void **)(a1 + 432);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 440) = 0;
    qfree(v26);
  }
  v27 = *(char **)(a1 + 408);
  if ( v27 )
  {
    v28 = *(_QWORD *)(a1 + 416);
    if ( v28 )
    {
      for ( m = 0; m != v28; ++m )
      {
        v30 = m;
        cleanup_argloc(&v27[16 * v30]);
        v27 = *(char **)(a1 + 408);
      }
    }
    *(_QWORD *)(a1 + 416) = 0;
    qfree(v27);
  }
  v31 = *(void **)(a1 + 384);
  if ( v31 )
  {
    *(_QWORD *)(a1 + 392) = 0;
    qfree(v31);
  }
  sub_5C6510(*(void **)(a1 + 344));
  sub_5C6510(*(void **)(a1 + 296));
  v32 = *(void **)(a1 + 184);
  if ( v32 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    qfree(v32);
  }
  v33 = *(void **)(a1 + 160);
  if ( v33 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v33);
  }
  v34 = *(void **)(a1 + 40);
  if ( v34 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v34);
  }
}

