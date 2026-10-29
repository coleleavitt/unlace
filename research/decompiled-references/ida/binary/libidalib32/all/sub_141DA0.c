void __fastcall sub_141DA0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 j; // rbp
  _QWORD *v8; // rax

  *a1 = &off_233C80;
  if ( a1[32] )
  {
    a1[33] = 0;
    qfree();
  }
  v1 = a1[26];
  *a1 = &unk_2379E8;
  if ( v1 )
  {
    v2 = a1[27];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[26];
        }
      }
    }
    a1[27] = 0;
    qfree();
  }
  if ( a1[23] )
  {
    a1[24] = 0;
    qfree();
  }
  if ( a1[20] )
  {
    a1[21] = 0;
    qfree();
  }
  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
  }
  clear_tinfo_t();
  v5 = a1[11];
  if ( v5 )
  {
    v6 = a1[12];
    if ( v6 )
    {
      for ( j = 0; j != v6; ++j )
      {
        v8 = (_QWORD *)(v5 + 24 * j);
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
          v5 = a1[11];
        }
      }
    }
    a1[12] = 0;
    qfree();
  }
  if ( a1[7] )
  {
    a1[8] = 0;
    qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x120u);
}

