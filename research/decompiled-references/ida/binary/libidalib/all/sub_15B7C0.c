__int64 __fastcall sub_15B7C0(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 i; // rbx
  void *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 j; // rbx
  _QWORD *v9; // rax

  if ( !*(_BYTE *)(*a1 + 849LL) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  *(_BYTE *)(*a1 + 849LL) = 0;
  if ( a1[10] )
  {
    a1[11] = 0;
    qfree();
  }
  v2 = a1[7];
  result = a1[6];
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v5 = *(void **)(result + 8 * i);
      if ( v5 )
      {
        operator delete(v5, 0x18u);
        result = a1[6];
      }
    }
  }
  if ( result )
  {
    a1[7] = 0;
    result = qfree();
  }
  v6 = a1[2];
  if ( v6 )
  {
    v7 = a1[3];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = a1[2];
        }
      }
    }
    a1[3] = 0;
    return qfree();
  }
  return result;
}

