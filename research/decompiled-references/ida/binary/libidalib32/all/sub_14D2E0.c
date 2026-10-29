__int64 (__fastcall **__fastcall sub_14D2E0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 j; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 k; // rbx
  _QWORD *v14; // rax

  result = &off_233C10;
  *a1 = &off_233C10;
  if ( a1[17] )
  {
    a1[18] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  v3 = a1[11];
  if ( v3 )
  {
    v4 = a1[12];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 48 * i);
        if ( v6[3] )
        {
          v6[4] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        v3 = a1[11];
      }
    }
    a1[12] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  v7 = a1[5];
  if ( v7 )
  {
    v8 = a1[6];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = (_QWORD *)(v7 + 32 * j);
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
          v7 = a1[5];
        }
      }
    }
    a1[6] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  v11 = a1[2];
  if ( v11 )
  {
    v12 = a1[3];
    if ( v12 )
    {
      for ( k = 0; k != v12; ++k )
      {
        v14 = (_QWORD *)(v11 + 24 * k);
        if ( *v14 )
        {
          v14[1] = 0;
          qfree();
          v11 = a1[2];
        }
      }
    }
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

