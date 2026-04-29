__int64 __fastcall sub_E1F40(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // r12
  _QWORD *v6; // rbx

  clear_tinfo_t();
  if ( a1[33] )
  {
    a1[34] = 0;
    qfree();
  }
  qfree();
  qfree();
  if ( a1[25] )
  {
    a1[26] = 0;
    qfree();
  }
  if ( a1[22] )
  {
    a1[23] = 0;
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
  result = qfree();
  v3 = a1[6];
  if ( v3 )
  {
    v4 = a1[7];
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
        v3 = a1[6];
      }
    }
    a1[7] = 0;
    result = qfree();
  }
  if ( a1[3] )
  {
    a1[4] = 0;
    return qfree();
  }
  return result;
}
