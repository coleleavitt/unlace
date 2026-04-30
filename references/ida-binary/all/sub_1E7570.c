__int64 __fastcall sub_1E7570(_QWORD *a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 result; // rax
  __int64 i; // rbx
  void *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 j; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi

  if ( !*(_BYTE *)(*a1 + 881LL) )
  {
    if ( !under_debugger )
      interr(40732, a2, a3, a4, a5);
    BUG();
  }
  *(_BYTE *)(*a1 + 881LL) = 0;
  v6 = a1[10];
  if ( v6 )
  {
    a1[11] = 0;
    qfree(v6, a2);
  }
  v7 = a1[7];
  result = a1[6];
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      v10 = *(void **)(result + 8 * i);
      if ( v10 )
      {
        a2 = (const char *)&off_18;
        operator delete(v10, 0x18u);
        result = a1[6];
      }
    }
  }
  if ( result )
  {
    a1[7] = 0;
    result = qfree(result, a2);
  }
  v11 = a1[2];
  if ( v11 )
  {
    v12 = a1[3];
    if ( v12 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v14 = (__int64 *)(v11 + 24 * j);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15, a2);
          v11 = a1[2];
        }
      }
    }
    a1[3] = 0;
    return qfree(v11, a2);
  }
  return result;
}
