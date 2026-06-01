char __fastcall sub_200E170(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_BYTE *)(a2 + 9);
  if ( result )
  {
    result = *(_BYTE *)(a1 + 9);
    if ( result )
      return *(_BYTE *)(a1 + 8) == *(_BYTE *)(a2 + 8);
  }
  return result;
}
