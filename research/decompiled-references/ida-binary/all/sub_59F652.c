char __fastcall sub_59F652(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char result; // al

  if ( a2 <= sub_59BDEE(a1) )
  {
    result = a2 < sub_59BDEE(a1);
    if ( result )
      return sub_59F96E(a1, *(_QWORD *)(a1 + 24) + 4 * a2);
  }
  else
  {
    v2 = sub_59BDEE(a1);
    return sub_59F75C(a1, a2 - v2);
  }
  return result;
}
