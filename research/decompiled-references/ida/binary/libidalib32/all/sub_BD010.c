__int64 (__fastcall **__fastcall sub_BD010(_QWORD *a1))()
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 (__fastcall **result)(); // rax
  __int64 v13; // r12
  __int64 j; // rbx
  _QWORD *v15; // rax

  v2 = a1[29];
  *a1 = &off_22EFA8;
  if ( v2 )
  {
    v3 = a1[30];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = a1[29];
        }
      }
    }
    a1[30] = 0;
    qfree();
  }
  if ( a1[26] )
  {
    a1[27] = 0;
    qfree();
  }
  v6 = (_QWORD *)a1[22];
  v7 = &v6[a1[23]];
  if ( v6 != v7 )
  {
    do
    {
      if ( *v6 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
      ++v6;
    }
    while ( v7 != v6 );
    v7 = (_QWORD *)a1[22];
  }
  if ( v7 )
  {
    a1[23] = 0;
    qfree();
  }
  v8 = a1[18];
  *a1 = &off_22EF48;
  if ( v8 )
  {
    a1[19] = 0;
    qfree();
  }
  v9 = a1[15];
  *a1 = &off_22EE20;
  if ( v9 )
  {
    a1[16] = 0;
    qfree();
  }
  v10 = a1[13];
  *a1 = &off_22EE00;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = a1[10];
  result = &off_22ED40;
  a1[13] = 0;
  *a1 = &off_22ED40;
  if ( v11 )
  {
    v13 = a1[11];
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        v15 = (_QWORD *)(v11 + 24 * j);
        if ( *v15 )
        {
          v15[1] = 0;
          qfree();
          v11 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[7] )
  {
    a1[8] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

