__int64 __fastcall sub_346A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 i; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

  v2 = a1[75];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = a1[72];
  if ( v4 )
  {
    a1[73] = 0;
    result = qfree(v4);
  }
  v5 = a1[36];
  if ( v5 )
  {
    v6 = a1[37];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 96 * i);
        v9 = v8[3];
        if ( v9 )
        {
          v8[4] = 0;
          qfree(v9);
        }
        v10 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v10);
        }
        v5 = a1[36];
      }
    }
    a1[37] = 0;
    result = qfree(v5);
  }
  v11 = a1[14];
  if ( v11 )
  {
    a1[15] = 0;
    result = qfree(v11);
  }
  v12 = a1[4];
  if ( v12 )
  {
    a1[5] = 0;
    return qfree(v12);
  }
  return result;
}

