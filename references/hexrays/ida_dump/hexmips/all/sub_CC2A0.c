void __fastcall sub_CC2A0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi

  if ( a1 )
  {
    v1 = a1[21];
    if ( v1 )
    {
      v3 = a1[22];
      if ( v3 )
      {
        for ( i = 0; i != v3; ++i )
        {
          v5 = (__int64 *)(v1 + 24 * i);
          v6 = *v5;
          if ( *v5 )
          {
            v5[1] = 0;
            qfree(v6);
            v1 = a1[21];
          }
        }
      }
      a1[22] = 0;
      qfree(v1);
    }
    v7 = a1[18];
    if ( v7 )
    {
      a1[19] = 0;
      qfree(v7);
    }
    qfree(a1[16]);
    qfree(a1[14]);
    qfree(a1[12]);
    qfree(a1[10]);
    qfree(a1[8]);
    qfree(a1[6]);
    qfree(a1[4]);
    qfree(a1[2]);
    qfree(*a1);
    operator delete(a1, 0xC0u);
  }
}
