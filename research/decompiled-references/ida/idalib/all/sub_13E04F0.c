bool __fastcall sub_13E04F0(__int16 a1, char *a2)
{
  bool result; // al

  result = 0;
  if ( *a2 < 0 )
  {
    result = 1;
    if ( a1 != 209 )
      return (unsigned __int16)(a1 - 212) <= 3u;
  }
  return result;
}
