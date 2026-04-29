__int64 __fastcall sub_2B1630(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4ADAA8;
  result = a1[4];
  if ( result )
  {
    a1[5] = 0;
    return qfree(result);
  }
  return result;
}
