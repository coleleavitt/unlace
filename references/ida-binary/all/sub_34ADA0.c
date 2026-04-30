void __fastcall sub_34ADA0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 i; // r13
  __int64 *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 j; // r15
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // [rsp+8h] [rbp-40h]

  v3 = *a1;
  if ( v3 )
  {
    v13 = a1[1];
    if ( v13 )
    {
      for ( i = 0; i != v13; ++i )
      {
        v5 = (__int64 *)(v3 + 48 * i);
        v6 = v5[3];
        if ( v6 )
        {
          v7 = v5[4];
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = (__int64 *)(v6 + 48 * j);
              v10 = v9[3];
              if ( v10 )
              {
                v9[4] = 0;
                qfree(v10, a2);
              }
              v11 = *v9;
              if ( *v9 )
              {
                v9[1] = 0;
                qfree(v11, a2);
              }
              v6 = v5[3];
            }
          }
          v5[4] = 0;
          qfree(v6, a2);
        }
        v12 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v12, a2);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v3, a2);
  }
}
