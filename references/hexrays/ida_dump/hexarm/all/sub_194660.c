__int64 __fastcall sub_194660(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4D8920;
  result = a1[8];
  if ( result )
  {
    a1[9] = 0;
    return qfree(result);
  }
  return result;
}
