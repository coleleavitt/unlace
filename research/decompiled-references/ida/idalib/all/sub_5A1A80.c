void __fastcall sub_5A1A80(__int64 a1)
{
  void **v1; // r14
  void *v3; // rdi
  char *v4; // r13
  __int64 v5; // r12
  char *v6; // rbp
  __int64 v7; // rdi
  _QWORD *v8; // rbp
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi

  v1 = *(void ***)(a1 + 96);
  *(_QWORD *)a1 = &off_2B2F2B8;
  *(_OWORD *)(a1 + 120) = 0;
  if ( v1 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      v4 = (char *)v1[1];
      if ( v4 )
      {
        v5 = 0;
        v6 = nullptr;
        do
        {
          v7 = (__int64)v3 + v5;
          ++v6;
          v5 += 56;
          sub_37C6A0(v7);
          v3 = *v1;
        }
        while ( v4 != v6 );
      }
      v1[1] = nullptr;
      qfree(v3);
    }
    qfree(v1);
  }
  v8 = *(_QWORD **)(a1 + 104);
  if ( v8 )
  {
    clear_tinfo_t(v8 + 5);
    v9 = (void *)v8[2];
    if ( v9 )
    {
      v8[3] = 0;
      qfree(v9);
    }
    cleanup_argloc(v8);
    qfree(v8);
  }
  v10 = *(void **)(a1 + 64);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v10);
  }
  v11 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_2B2F258;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v11);
  }
}
