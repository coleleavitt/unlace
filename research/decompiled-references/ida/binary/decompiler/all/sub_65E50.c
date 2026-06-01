__int64 __fastcall sub_65E50(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 j; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdi

  *a1 = off_4DB348;
  if ( a1[88] )
  {
    a1[89] = 0;
    qfree();
  }
  v2 = a1[85];
  a1[66] = off_4EADD8;
  if ( v2 )
  {
    a1[86] = 0;
    qfree();
  }
  if ( a1[81] )
  {
    a1[82] = 0;
    qfree();
  }
  if ( a1[78] )
  {
    a1[79] = 0;
    qfree();
  }
  v3 = a1[75];
  if ( v3 )
  {
    v4 = a1[76];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 24 * i);
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
          v3 = a1[75];
        }
      }
    }
    a1[76] = 0;
    qfree();
  }
  v7 = a1[72];
  if ( v7 )
  {
    v8 = a1[73];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = (_QWORD *)(v7 + 24 * j);
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
          v7 = a1[72];
        }
      }
    }
    a1[73] = 0;
    qfree();
  }
  v11 = a1[67];
  a1[66] = &unk_4EB890;
  if ( v11 )
  {
    a1[68] = 0;
    qfree();
  }
  sub_3338A0(a1);
  return j__qfree();
}
