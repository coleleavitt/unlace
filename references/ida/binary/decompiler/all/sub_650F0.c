void *__fastcall sub_650F0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 j; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  void *result; // rax

  *a1 = off_4EADD8;
  if ( a1[19] )
  {
    a1[20] = 0;
    qfree();
  }
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  v2 = a1[9];
  if ( v2 )
  {
    v3 = a1[10];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree();
  }
  v6 = a1[6];
  if ( v6 )
  {
    v7 = a1[7];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree();
  }
  v10 = a1[1];
  result = &unk_4EB890;
  *a1 = &unk_4EB890;
  if ( v10 )
  {
    a1[2] = 0;
    return (void *)qfree();
  }
  return result;
}
