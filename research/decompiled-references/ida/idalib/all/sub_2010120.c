char __fastcall sub_2010120(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_BYTE *)(a2 + 16);
  if ( result )
  {
    result = *(_BYTE *)(a1 + 16);
    if ( result )
      return *(double *)(a1 + 8) == *(double *)(a2 + 8);
  }
  return result;
}
