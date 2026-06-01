__int64 __fastcall sub_A0170(_QWORD *a1)
{
  __int64 result; // rax

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
  if ( a1[3] )
  {
    a1[4] = 0;
    return qfree();
  }
  return result;
}

