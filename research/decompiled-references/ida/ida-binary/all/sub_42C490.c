double __fastcall sub_42C490(__int64 *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  double result; // xmm0_8
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 k; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi

  v3 = a1[11];
  if ( v3 )
  {
    v4 = a1[12];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 48 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a2);
          v3 = a1[11];
        }
      }
    }
    a1[12] = 0;
    result = qfree(v3, a2);
  }
  v9 = a1[6];
  if ( v9 )
  {
    a1[7] = 0;
    result = qfree(v9, a2);
  }
  v10 = a1[3];
  if ( v10 )
  {
    v11 = a1[4];
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (__int64 *)(v10 + 24 * j);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14, a2);
          v10 = a1[3];
        }
      }
    }
    a1[4] = 0;
    result = qfree(v10, a2);
  }
  v15 = *a1;
  if ( *a1 )
  {
    v16 = a1[1];
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = (__int64 *)(v15 + 40 * k);
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19, a2);
          v15 = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree(v15, a2);
  }
  return result;
}
