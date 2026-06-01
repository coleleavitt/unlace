__int64 (__fastcall **__fastcall sub_BDA70(_QWORD *a1))()
{
  __int64 v1; // rdx
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 j; // rbp
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 (__fastcall **result)(); // rax
  __int64 v17; // r12
  __int64 k; // rbp
  _QWORD *v19; // rax

  v1 = a1[60];
  *a1 = &off_2301F8;
  if ( v1 )
  {
    v3 = a1[61];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v1 + 32 * i;
        if ( *(_QWORD *)(v5 + 8) )
        {
          *(_QWORD *)(v5 + 16) = 0;
          qfree();
          v1 = a1[60];
        }
      }
    }
    a1[61] = 0;
    qfree();
  }
  if ( a1[56] )
  {
    a1[57] = 0;
    qfree();
  }
  if ( a1[52] )
  {
    a1[53] = 0;
    qfree();
  }
  if ( a1[49] )
  {
    a1[50] = 0;
    qfree();
  }
  if ( a1[45] )
  {
    a1[46] = 0;
    qfree();
  }
  if ( a1[42] )
  {
    a1[43] = 0;
    qfree();
  }
  if ( a1[39] )
  {
    a1[40] = 0;
    qfree();
  }
  if ( a1[36] )
  {
    a1[37] = 0;
    qfree();
  }
  if ( a1[33] )
  {
    a1[34] = 0;
    qfree();
  }
  v6 = a1[29];
  *a1 = &off_230028;
  if ( v6 )
  {
    v7 = a1[30];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = a1[29];
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
  v10 = (_QWORD *)a1[22];
  v11 = &v10[a1[23]];
  if ( v10 != v11 )
  {
    do
    {
      if ( *v10 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 8LL))(*v10);
      ++v10;
    }
    while ( v11 != v10 );
    v11 = (_QWORD *)a1[22];
  }
  if ( v11 )
  {
    a1[23] = 0;
    qfree();
  }
  v12 = a1[18];
  *a1 = &off_22FFC8;
  if ( v12 )
  {
    a1[19] = 0;
    qfree();
  }
  v13 = a1[15];
  *a1 = &off_22FEA0;
  if ( v13 )
  {
    a1[16] = 0;
    qfree();
  }
  v14 = a1[13];
  *a1 = &off_22FE80;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = a1[10];
  result = &off_22FDC0;
  a1[13] = 0;
  *a1 = &off_22FDC0;
  if ( v15 )
  {
    v17 = a1[11];
    if ( v17 )
    {
      for ( k = 0; k != v17; ++k )
      {
        v19 = (_QWORD *)(v15 + 24 * k);
        if ( *v19 )
        {
          v19[1] = 0;
          qfree();
          v15 = a1[10];
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

