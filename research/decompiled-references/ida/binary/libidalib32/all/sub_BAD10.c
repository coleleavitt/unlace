void __fastcall sub_BAD10(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 j; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 k; // rbp
  _QWORD *v13; // rbx

  v2 = a1[6];
  if ( v2 )
  {
    v3 = a1[7];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 48 * i);
        if ( v5[3] )
        {
          v5[4] = 0;
          qfree();
        }
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
        }
        v2 = a1[6];
      }
    }
    a1[7] = 0;
    qfree();
  }
  v6 = a1[3];
  if ( v6 )
  {
    v7 = a1[4];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree();
  }
  v10 = *a1;
  if ( *a1 )
  {
    v11 = a1[1];
    if ( v11 )
    {
      for ( k = 0; k != v11; ++k )
      {
        v13 = (_QWORD *)(v10 + 48 * k);
        if ( v13[3] )
        {
          v13[4] = 0;
          qfree();
        }
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
        }
        v10 = *a1;
      }
    }
    a1[1] = 0;
    qfree();
  }
}

