__int64 __fastcall sub_37E300(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4BA528;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree(result);
  }
  return result;
}
