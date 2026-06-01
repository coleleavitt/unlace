__int64 __fastcall sub_1374F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 j; // rbx
  _QWORD *v9; // rax

  sub_258970(a1, a2);
  v2 = a1[23];
  if ( v2 )
  {
    v3 = a1[24];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree();
  }
  if ( a1[20] )
  {
    a1[21] = 0;
    qfree();
  }
  v6 = a1[16];
  if ( v6 )
  {
    v7 = a1[17];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 32 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = a1[16];
        }
      }
    }
    a1[17] = 0;
    qfree();
  }
  return sub_255050(a1 + 2);
}
