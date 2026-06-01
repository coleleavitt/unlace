__int64 __fastcall sub_1EC8C0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4DED48;
  result = a1[6];
  if ( result )
  {
    a1[7] = 0;
    return qfree(result);
  }
  return result;
}
