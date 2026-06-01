void __fastcall sub_C2670(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  _QWORD *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 j; // r12
  _QWORD *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 k; // r12
  _QWORD *v13; // rbp

  if ( a1 )
  {
    v2 = a1[11];
    if ( v2 )
    {
      v3 = a1[12];
      if ( v3 )
      {
        for ( i = 0; i != v3; ++i )
        {
          v5 = (_QWORD *)(v2 + 80 * i);
          if ( v5[5] )
          {
            v5[6] = 0;
            qfree();
          }
          if ( v5[2] )
          {
            v5[3] = 0;
            qfree();
          }
          v2 = a1[11];
        }
      }
      a1[12] = 0;
      qfree();
    }
    v6 = a1[8];
    if ( v6 )
    {
      v7 = a1[9];
      if ( v7 )
      {
        for ( j = 0; j != v7; ++j )
        {
          v9 = (_QWORD *)(v6 + 80 * j);
          if ( v9[5] )
          {
            v9[6] = 0;
            qfree();
          }
          if ( v9[2] )
          {
            v9[3] = 0;
            qfree();
          }
          v6 = a1[8];
        }
      }
      a1[9] = 0;
      qfree();
    }
    if ( a1[4] )
    {
      a1[5] = 0;
      qfree();
    }
    v10 = a1[1];
    if ( v10 )
    {
      v11 = a1[2];
      if ( v11 )
      {
        for ( k = 0; k != v11; ++k )
        {
          v13 = (_QWORD *)(v10 + 80 * k);
          if ( v13[5] )
          {
            v13[6] = 0;
            qfree();
          }
          if ( v13[2] )
          {
            v13[3] = 0;
            qfree();
          }
          v10 = a1[1];
        }
      }
      a1[2] = 0;
      qfree();
    }
    operator delete(a1, 0xD0u);
  }
}

