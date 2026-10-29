char __fastcall sub_2210000(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_BYTE *)(a2 + 12);
  if ( result )
  {
    result = *(_BYTE *)(a1 + 12);
    if ( result )
      return *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8);
  }
  return result;
}
