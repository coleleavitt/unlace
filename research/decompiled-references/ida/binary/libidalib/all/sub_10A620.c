__int64 __fastcall sub_10A620(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 result; // rax

  v2 = a1[6];
  if ( v2 )
  {
    v3 = a1[7];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = (_QWORD *)(v2 + v4);
        if ( *(_QWORD *)(v2 + v4 + 64) )
        {
          v6[9] = 0;
          qfree();
        }
        if ( v6[4] )
        {
          v6[5] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        v2 = a1[6];
        v4 += 88;
      }
    }
    a1[7] = 0;
    result = qfree();
  }
  if ( a1[3] )
  {
    a1[4] = 0;
    result = qfree();
  }
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}

