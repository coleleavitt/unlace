void __fastcall sub_396DC0(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  v2 = *(char **)(a1 + 56);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 24];
        if ( v7 )
        {
          *((_QWORD *)v6 + 4) = 0;
          qfree(v7);
        }
        v8 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v8);
        }
        v2 = *(char **)(a1 + 56);
        v4 += 56;
      }
    }
    *(_QWORD *)(a1 + 64) = 0;
    qfree(v2);
  }
  v9 = *(void **)(a1 + 32);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v9);
  }
  v10 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v10);
  }
}

