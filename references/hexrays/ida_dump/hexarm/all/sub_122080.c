bool __fastcall sub_122080(__int64 a1, int a2)
{
  bool result; // al

  if ( (*(_BYTE *)(a1 + 1) & 4) != 0 )
    return sub_11C510(a2);
  if ( *(_BYTE *)a1 != 4 )
  {
    result = 0;
    if ( (unsigned int)(a2 - 1) <= 0xF )
      return (a2 & (a2 - 1)) == 0;
    return result;
  }
  if ( sub_122040(*(unsigned int **)(a1 + 8)) )
    return sub_11C510(a2);
  result = 0;
  if ( (unsigned int)(a2 - 1) <= 0xF )
    return (a2 & (a2 - 1)) == 0;
  return result;
}
