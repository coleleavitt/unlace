char __fastcall sub_2012A40(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_BYTE *)(a2 + 12);
  if ( result )
  {
    result = *(_BYTE *)(a1 + 12);
    if ( result )
      return *(float *)(a1 + 8) == *(float *)(a2 + 8);
  }
  return result;
}
