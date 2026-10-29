__int64 __fastcall sub_19C070(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[7] )
  {
    a1[8] = 0;
    result = qfree();
  }
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}
