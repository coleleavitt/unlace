bool __fastcall sub_102BD50(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  bool result; // al

  result = 0;
  if ( a2 <= a3 && a2 <= *(unsigned __int8 *)(a1 + 287) )
  {
    result = 1;
    if ( a2 > 8 )
      return ((a2 >> 3) & ((a2 >> 3) - 1)) == 0;
  }
  return result;
}
