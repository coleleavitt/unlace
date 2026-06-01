__int64 __fastcall sub_15B6D0(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[5] )
  {
    result = qfree();
    a1[5] = 0;
  }
  if ( a1[6] )
  {
    a1[7] = 0;
    result = qfree();
    a1[6] = 0;
    a1[8] = 0;
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
  if ( a1[5] )
    return qfree();
  return result;
}

