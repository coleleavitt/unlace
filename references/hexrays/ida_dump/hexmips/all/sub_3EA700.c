char __fastcall sub_3EA700(__int16 a1)
{
  char result; // al

  result = (unsigned __int16)(a1 - 1736) <= 1u || (unsigned __int16)(a1 - 202) <= 1u;
  if ( !result )
  {
    result = 1;
    if ( a1 != 115 && a1 != 1739 )
      return a1 == 821 || (unsigned __int16)(a1 - 117) <= 1u;
  }
  return result;
}
