void __fastcall sub_21C4C0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 j; // rbp
  __int64 v12; // rdi

  *a1 = &off_4DF770;
  clear_tinfo_t();
  cleanup_argloc();
  v2 = a1[12];
  if ( v2 )
  {
    v3 = a1[13];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 32 * i);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = a1[12];
        }
      }
    }
    a1[13] = 0;
    qfree(v2);
  }
  v7 = a1[8];
  if ( v7 )
  {
    a1[9] = 0;
    qfree(v7);
  }
  qfree(a1[6]);
  v8 = a1[3];
  if ( v8 )
  {
    v9 = a1[4];
    if ( v9 )
    {
      v10 = 0;
      for ( j = 0; j != v9; ++j )
      {
        v12 = *(_QWORD *)(v8 + v10);
        if ( v12 )
        {
          *(_QWORD *)(v8 + v10 + 8) = 0;
          qfree(v12);
          v8 = a1[3];
        }
        v10 += 56;
      }
    }
    a1[4] = 0;
    qfree(v8);
  }
  operator delete(a1, 0xA0u);
}
