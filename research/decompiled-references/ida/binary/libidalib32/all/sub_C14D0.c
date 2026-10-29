void __fastcall sub_C14D0(_QWORD *a1)
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
          v5 = (_QWORD *)(v2 + (i << 6));
          if ( v5[4] )
          {
            v5[5] = 0;
            qfree();
          }
          if ( v5[1] )
          {
            v5[2] = 0;
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
          v9 = (_QWORD *)(v6 + (j << 6));
          if ( v9[4] )
          {
            v9[5] = 0;
            qfree();
          }
          if ( v9[1] )
          {
            v9[2] = 0;
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
          v13 = (_QWORD *)(v10 + (k << 6));
          if ( v13[4] )
          {
            v13[5] = 0;
            qfree();
          }
          if ( v13[1] )
          {
            v13[2] = 0;
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

