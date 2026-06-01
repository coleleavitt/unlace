void __fastcall sub_6304F0(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  _QWORD *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  char *v12; // rdx
  __int64 v13; // r12
  __int64 j; // rbx
  char *v15; // rax
  void *v16; // rdi
  void *v17; // rdi

  v2 = *(char **)(a1 + 136);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 144);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[128 * i];
        clear_tinfo_t(v5 + 64);
        v6 = *((void **)v5 + 5);
        if ( v6 )
        {
          *((_QWORD *)v5 + 6) = 0;
          qfree(v6);
        }
        v7 = *((void **)v5 + 2);
        if ( v7 )
        {
          *((_QWORD *)v5 + 3) = 0;
          qfree(v7);
        }
        v2 = *(char **)(a1 + 136);
      }
    }
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v2);
  }
  v8 = *(void **)(a1 + 112);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v8);
  }
  v9 = *(_QWORD **)(a1 + 72);
  while ( v9 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    operator delete(v10, 0x20u);
  }
  memset(*(void **)(a1 + 56), 0, 8LL * *(_QWORD *)(a1 + 64));
  v11 = *(void **)(a1 + 56);
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  if ( v11 != (void *)(a1 + 104) )
    operator delete(v11, 8LL * *(_QWORD *)(a1 + 64));
  v12 = *(char **)(a1 + 32);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 40);
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        v15 = &v12[32 * j];
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v16);
          v12 = *(char **)(a1 + 32);
        }
      }
    }
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v12);
  }
  v17 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v17);
  }
}

