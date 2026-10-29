char __fastcall sub_59C098(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char result; // al

  if ( a2 <= sub_59C9B6(a1) )
  {
    result = a2 < sub_59C9B6(a1);
    if ( result )
      return sub_59CBF0(a1, *(_QWORD *)(a1 + 24) + 8 * a2);
  }
  else
  {
    v2 = sub_59C9B6(a1);
    return sub_59C9DE(a1, a2 - v2);
  }
  return result;
}
