__int64 __fastcall sub_46F0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 j; // rbp
  __int64 *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi

  v2 = a1[6];
  if ( v2 )
  {
    v3 = a1[7];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 80 * i);
        v6 = v5[6];
        if ( v6 )
        {
          v5[7] = 0;
          qfree(v6);
        }
        v7 = v5[3];
        if ( v7 )
        {
          v5[4] = 0;
          qfree(v7);
        }
        v8 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v8);
        }
        v2 = a1[6];
      }
    }
    a1[7] = 0;
    result = qfree(v2);
  }
  v10 = a1[3];
  if ( v10 )
  {
    v11 = a1[4];
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (__int64 *)(v10 + 80 * j);
        v14 = v13[6];
        if ( v14 )
        {
          v13[7] = 0;
          qfree(v14);
        }
        v15 = v13[3];
        if ( v15 )
        {
          v13[4] = 0;
          qfree(v15);
        }
        v16 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v16);
        }
        v10 = a1[3];
      }
    }
    a1[4] = 0;
    result = qfree(v10);
  }
  v17 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v17);
  }
  return result;
}
