void __fastcall sub_69A760(__int64 a1)
{
  char v2; // al
  void *v3; // rdi
  char *v4; // rdx
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 i; // rbp
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  v2 = *(_BYTE *)(a1 + 97);
  if ( v2 == 2 )
  {
    v4 = *(char **)(a1 + 24);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 32);
      if ( v5 )
      {
        v6 = 0;
        for ( i = 0; i != v5; ++i )
        {
          v8 = *(void **)&v4[v6];
          if ( v8 )
          {
            *(_QWORD *)&v4[v6 + 8] = 0;
            qfree(v8);
            v4 = *(char **)(a1 + 24);
          }
          v6 += 56;
        }
      }
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v4);
    }
  }
  else if ( v2 == 1 )
  {
    v9 = *(void **)(a1 + 64);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 72) = 0;
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
  *(_BYTE *)(a1 + 97) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3);
  }
}
