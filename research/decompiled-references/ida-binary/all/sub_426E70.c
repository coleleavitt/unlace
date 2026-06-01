double __fastcall sub_426E70(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 j; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi

  v3 = a1[9];
  if ( v3 )
  {
    a1[10] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[6];
  if ( v5 )
  {
    a1[7] = 0;
    result = qfree(v5, a2);
  }
  v6 = a1[3];
  if ( v6 )
  {
    v7 = a1[4];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10, a2);
          v6 = a1[3];
        }
      }
    }
    a1[4] = 0;
    result = qfree(v6, a2);
  }
  v11 = *a1;
  if ( *a1 )
  {
    v12 = a1[1];
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = (__int64 *)(v11 + 24 * j);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15, a2);
          v11 = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree(v11, a2);
  }
  return result;
}
