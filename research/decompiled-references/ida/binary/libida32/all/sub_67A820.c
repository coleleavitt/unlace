void __fastcall sub_67A820(__int64 a1)
{
  char v1; // al
  void *v3; // rdi
  char *v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbp
  char *v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  v1 = *(_BYTE *)(a1 + 89);
  if ( v1 == 2 )
  {
    v4 = *(char **)(a1 + 24);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 32);
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = &v4[40 * i];
          v8 = *(void **)v7;
          if ( *(_QWORD *)v7 )
          {
            *((_QWORD *)v7 + 1) = 0;
            qfree(v8);
            v4 = *(char **)(a1 + 24);
          }
        }
      }
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v4);
    }
  }
  else if ( v1 == 1 )
  {
    v9 = *(void **)(a1 + 56);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 64) = 0;
      qfree(v9);
    }
    v10 = *(void **)(a1 + 24);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v10);
    }
  }
  v3 = *(void **)a1;
  *(_BYTE *)(a1 + 89) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3);
  }
}

