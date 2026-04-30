void __fastcall sub_22A2E0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 j; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 k; // rbp
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi

  v3 = a1[6];
  if ( v3 )
  {
    v4 = a1[7];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 48 * i);
        v7 = v6[3];
        if ( v7 )
        {
          v6[4] = 0;
          qfree(v7, a2);
        }
        v8 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v8, a2);
        }
        v3 = a1[6];
      }
    }
    a1[7] = 0;
    qfree(v3, a2);
  }
  v9 = a1[3];
  if ( v9 )
  {
    v10 = a1[4];
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = (__int64 *)(v9 + 24 * j);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13, a2);
          v9 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree(v9, a2);
  }
  v14 = *a1;
  if ( *a1 )
  {
    v15 = a1[1];
    if ( v15 )
    {
      for ( k = 0; k != v15; ++k )
      {
        v17 = (__int64 *)(v14 + 48 * k);
        v18 = v17[3];
        if ( v18 )
        {
          v17[4] = 0;
          qfree(v18, a2);
        }
        v19 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v19, a2);
        }
        v14 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v14, a2);
  }
}
