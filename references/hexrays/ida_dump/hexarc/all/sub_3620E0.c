__int64 __fastcall sub_3620E0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4B29E0;
  result = a1[6];
  if ( result )
  {
    a1[7] = 0;
    return qfree(result);
  }
  return result;
}
