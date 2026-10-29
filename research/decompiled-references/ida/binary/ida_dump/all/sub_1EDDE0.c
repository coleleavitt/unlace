void __fastcall sub_1EDDE0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 j; // rbp
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 k; // rbp
  __int64 v14; // r12

  *a1 = &off_4DED20;
  v2 = a1[18];
  if ( v2 )
  {
    v3 = a1[19];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 40 * i;
        if ( *(_QWORD *)(v5 + 16) )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree();
        }
        qfree();
        v2 = a1[18];
      }
    }
    a1[19] = 0;
    qfree();
  }
  v6 = a1[15];
  if ( v6 )
  {
    v7 = a1[16];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = v6 + 40 * j;
        if ( *(_QWORD *)(v9 + 16) )
        {
          *(_QWORD *)(v9 + 24) = 0;
          qfree();
        }
        qfree();
        v6 = a1[15];
      }
    }
    a1[16] = 0;
    qfree();
  }
  v10 = a1[11];
  *a1 = &unk_4EBF08;
  if ( v10 )
  {
    a1[12] = 0;
    qfree();
  }
  qfree();
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  qfree();
  v11 = a1[1];
  if ( v11 )
  {
    v12 = a1[2];
    if ( v12 )
    {
      for ( k = 0; k != v12; ++k )
      {
        v14 = v11 + 40 * k;
        if ( *(_QWORD *)(v14 + 16) )
        {
          *(_QWORD *)(v14 + 24) = 0;
          qfree();
        }
        qfree();
        v11 = a1[1];
      }
    }
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0xA8u);
}
