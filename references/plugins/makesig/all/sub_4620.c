__int64 __fastcall sub_4620(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_1FD00;
  result = a1[41];
  if ( result )
  {
    a1[42] = 0;
    return qfree(result);
  }
  return result;
}
