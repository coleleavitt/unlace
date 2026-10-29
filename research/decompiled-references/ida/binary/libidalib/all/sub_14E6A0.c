__int64 __fastcall sub_14E6A0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 i; // rbp
  _QWORD *v7; // rbx

  if ( a1[3] )
  {
    a1[4] = 0;
    result = qfree();
  }
  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (_QWORD *)(v3 + v5);
        if ( *(_QWORD *)(v3 + v5 + 24) )
        {
          v7[4] = 0;
          qfree();
        }
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
        }
        v3 = *a1;
        v5 += 56;
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

