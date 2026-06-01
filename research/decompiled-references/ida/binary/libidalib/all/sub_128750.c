void __fastcall sub_128750(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 j; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 k; // rbp
  _QWORD *v12; // rax

  v1 = *a1;
  *((_DWORD *)a1 + 36) = -1;
  if ( v1 )
  {
    v2 = a1[1];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  v5 = a1[6];
  if ( v5 )
  {
    v6 = a1[7];
    if ( v6 )
    {
      for ( j = 0; j != v6; ++j )
      {
        v8 = (_QWORD *)(v5 + 24 * j);
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
          v5 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree();
    a1[6] = 0;
    a1[8] = 0;
  }
  v9 = a1[3];
  if ( v9 )
  {
    v10 = a1[4];
    if ( v10 )
    {
      for ( k = 0; k != v10; ++k )
      {
        v12 = (_QWORD *)(v9 + 24 * k);
        if ( *v12 )
        {
          v12[1] = 0;
          qfree();
          v9 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree();
    a1[3] = 0;
    a1[5] = 0;
  }
  if ( a1[9] )
  {
    a1[10] = 0;
    qfree();
    a1[9] = 0;
    a1[11] = 0;
  }
}

