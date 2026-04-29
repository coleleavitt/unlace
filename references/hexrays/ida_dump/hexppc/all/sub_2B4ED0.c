__int64 __fastcall sub_2B4ED0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4CE490;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree(result);
  }
  return result;
}
