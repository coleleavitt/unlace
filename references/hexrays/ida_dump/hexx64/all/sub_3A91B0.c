void __fastcall sub_3A91B0(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdi

  if ( a1 )
  {
    sub_258970(a1);
    v2 = a1[23];
    if ( v2 )
    {
      v3 = a1[24];
      if ( v3 )
      {
        for ( i = 0; i != v3; ++i )
        {
          v5 = (__int64 *)(v2 + 24 * i);
          v6 = *v5;
          if ( *v5 )
          {
            v5[1] = 0;
            qfree(v6);
            v2 = a1[23];
          }
        }
      }
      a1[24] = 0;
      qfree(v2);
    }
    v7 = a1[20];
    if ( v7 )
    {
      a1[21] = 0;
      qfree(v7);
    }
    v8 = a1[16];
    if ( v8 )
    {
      v9 = a1[17];
      if ( v9 )
      {
        for ( j = 0; j != v9; ++j )
        {
          v11 = (__int64 *)(v8 + 32 * j);
          v12 = *v11;
          if ( *v11 )
          {
            v11[1] = 0;
            qfree(v12);
            v8 = a1[16];
          }
        }
      }
      a1[17] = 0;
      qfree(v8);
    }
    sub_255050((__int64)(a1 + 2));
    j__qfree(a1);
  }
}
