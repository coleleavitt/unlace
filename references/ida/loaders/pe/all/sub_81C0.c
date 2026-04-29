__int64 (__fastcall **__fastcall sub_81C0(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 j; // r12
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 (__fastcall **result)(); // rax

  *a1 = off_324C8;
  a1[102] = &off_325A8;
  v2 = a1[114];
  if ( v2 )
  {
    v3 = a1[115];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + (i << 6));
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
        v2 = a1[114];
      }
    }
    a1[115] = 0;
    qfree();
  }
  v6 = a1[93];
  a1[81] = &off_325A8;
  if ( v6 )
  {
    v7 = a1[94];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + (j << 6));
        if ( v9[3] )
        {
          v9[4] = 0;
          qfree();
        }
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
        }
        v6 = a1[93];
      }
    }
    a1[94] = 0;
    qfree();
  }
  if ( a1[78] )
  {
    a1[79] = 0;
    qfree();
  }
  v10 = a1[1];
  result = off_324F0;
  *a1 = off_324F0;
  if ( v10 )
  {
    a1[2] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}
