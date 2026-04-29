__int64 __fastcall sub_2B8D70(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4DB968;
  result = a1[4];
  if ( result )
  {
    a1[5] = 0;
    return qfree(result);
  }
  return result;
}
