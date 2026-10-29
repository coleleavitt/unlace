__int64 __fastcall sub_909F0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  if ( *a1 )
  {
    result = qfree();
    *a1 = 0;
  }
  v3 = a1[21];
  a1[7] = 0;
  a1[10] = 0;
  if ( v3 )
  {
    a1[22] = 0;
    result = qfree();
  }
  if ( a1[18] )
  {
    a1[19] = 0;
    result = qfree();
  }
  if ( a1[15] )
  {
    a1[16] = 0;
    result = qfree();
  }
  if ( a1[12] )
  {
    a1[13] = 0;
    result = qfree();
  }
  if ( a1[9] )
  {
    a1[10] = 0;
    result = qfree();
  }
  if ( a1[6] )
  {
    a1[7] = 0;
    result = qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

