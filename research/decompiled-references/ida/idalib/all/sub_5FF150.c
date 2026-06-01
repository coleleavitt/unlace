void __fastcall sub_5FF150(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  char *v6; // rdi
  __int64 v7; // r13
  __int64 i; // r12
  char *v9; // rbp
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  char *v13; // rdx
  __int64 v14; // r12
  __int64 j; // rbp
  char *v16; // rax
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  char *v20; // rdx
  __int64 v21; // r12
  __int64 k; // rbp
  char *v23; // rax
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi

  jvalue_t_clear(a1 + 576);
  v2 = *(void **)(a1 + 544);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 552) = 0;
    qfree(v2);
  }
  v3 = *(void **)(a1 + 520);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 528) = 0;
    qfree(v3);
  }
  v4 = *(void **)(a1 + 488);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 496) = 0;
    qfree(v4);
  }
  v5 = *(void **)(a1 + 424);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 432) = 0;
    qfree(v5);
  }
  v6 = *(char **)(a1 + 384);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 392);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = &v6[48 * i];
        v10 = *((void **)v9 + 3);
        if ( v10 )
        {
          *((_QWORD *)v9 + 4) = 0;
          qfree(v10);
        }
        v11 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v11);
        }
        v6 = *(char **)(a1 + 384);
      }
    }
    *(_QWORD *)(a1 + 392) = 0;
    qfree(v6);
  }
  v12 = *(void **)(a1 + 336);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 344) = 0;
    qfree(v12);
  }
  v13 = *(char **)(a1 + 304);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 312);
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = &v13[24 * j];
        v17 = *(void **)v16;
        if ( *(_QWORD *)v16 )
        {
          *((_QWORD *)v16 + 1) = 0;
          qfree(v17);
          v13 = *(char **)(a1 + 304);
        }
      }
    }
    *(_QWORD *)(a1 + 312) = 0;
    qfree(v13);
  }
  sub_5FC700(*(void **)(a1 + 272));
  sub_5FC690(*(void **)(a1 + 224));
  v18 = *(void **)(a1 + 184);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    qfree(v18);
  }
  sub_5FD110(*(void **)(a1 + 136));
  v19 = *(void **)(a1 + 96);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v19);
  }
  v20 = *(char **)(a1 + 72);
  if ( v20 )
  {
    v21 = *(_QWORD *)(a1 + 80);
    if ( v21 )
    {
      for ( k = 0; k != v21; ++k )
      {
        v23 = &v20[24 * k];
        v24 = *(void **)v23;
        if ( *(_QWORD *)v23 )
        {
          *((_QWORD *)v23 + 1) = 0;
          qfree(v24);
          v20 = *(char **)(a1 + 72);
        }
      }
    }
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v20);
  }
  v25 = *(void **)(a1 + 40);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v25);
  }
  v26 = *(void **)(a1 + 16);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v26);
  }
}
