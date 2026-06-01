char __fastcall sub_5AD090(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char result; // al

  if ( a2 <= sub_5986CE(a1) )
  {
    result = a2 < sub_5986CE(a1);
    if ( result )
      return sub_5AD524(a1, a2 + *(_QWORD *)(a1 + 24));
  }
  else
  {
    v2 = sub_5986CE(a1);
    return sub_5AD322(a1, a2 - v2);
  }
  return result;
}
