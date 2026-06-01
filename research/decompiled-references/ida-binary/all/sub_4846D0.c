double __fastcall sub_4846D0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 j; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  double result; // xmm0_8

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 48 * i);
        v7 = v6[3];
        if ( v7 )
        {
          v8 = v6[4];
          if ( v8 )
          {
            for ( j = 0; j != v8; ++j )
            {
              v10 = (__int64 *)(v7 + 24 * j);
              v11 = *v10;
              if ( *v10 )
              {
                v10[1] = 0;
                qfree(v11, a2);
                v7 = v6[3];
              }
            }
          }
          v6[4] = 0;
          qfree(v7, a2);
        }
        v12 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v12, a2);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
