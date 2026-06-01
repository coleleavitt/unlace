char __fastcall sub_5A9154(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char result; // al

  if ( a2 <= sub_5A92A2(a1) )
  {
    result = a2 < sub_5A92A2(a1);
    if ( result )
      return sub_5A9496(a1, *a1 + 2 * a2);
  }
  else
  {
    v2 = sub_5A92A2(a1);
    return sub_5A9A9A(a1, a2 - v2);
  }
  return result;
}
