void __fastcall sub_14DD80(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 j; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 k; // rbx
  _QWORD *v13; // rax

  *a1 = &off_234C10;
  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
  }
  v2 = a1[11];
  if ( v2 )
  {
    v3 = a1[12];
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
        v2 = a1[11];
      }
    }
    a1[12] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  v6 = a1[5];
  if ( v6 )
  {
    v7 = a1[6];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 32 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = a1[5];
        }
      }
    }
    a1[6] = 0;
    qfree();
  }
  v10 = a1[2];
  if ( v10 )
  {
    v11 = a1[3];
    if ( v11 )
    {
      for ( k = 0; k != v11; ++k )
      {
        v13 = (_QWORD *)(v10 + 24 * k);
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
          v10 = a1[2];
        }
      }
    }
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0xC0u);
}

