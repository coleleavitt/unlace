__int64 __fastcall sub_9FB10(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[4] )
  {
    a1[5] = 0;
    result = qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

