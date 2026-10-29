__int64 __fastcall sub_142370(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbp
  _QWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 j; // rbp
  _QWORD *v9; // rax

  *a1 = &off_234C80;
  if ( a1[33] )
  {
    a1[34] = 0;
    qfree();
  }
  v1 = a1[27];
  *a1 = &unk_2389E8;
  if ( v1 )
  {
    v2 = a1[28];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[27];
        }
      }
    }
    a1[28] = 0;
    qfree();
  }
  if ( a1[24] )
  {
    a1[25] = 0;
    qfree();
  }
  if ( a1[21] )
  {
    a1[22] = 0;
    qfree();
  }
  if ( a1[18] )
  {
    a1[19] = 0;
    qfree();
  }
  result = clear_tinfo_t();
  v6 = a1[12];
  if ( v6 )
  {
    v7 = a1[13];
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = a1[12];
        }
      }
    }
    a1[13] = 0;
    result = qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    result = qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

