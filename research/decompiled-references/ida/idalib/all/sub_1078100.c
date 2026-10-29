_BOOL8 __fastcall sub_1078100(_BYTE *a1, __int64 a2)
{
  _BOOL8 result; // rax

  if ( a2 == 1 )
    return *a1 == 51 || *a1 == 53 || *a1 == 54;
  if ( a2 != 2 )
  {
    result = 0;
    if ( a2 != 3 )
      return result;
    if ( (*(_WORD *)a1 != 12337 || a1[2] != 50)
      && (*(_WORD *)a1 != 12337 || a1[2] != 51)
      && (*(_WORD *)a1 != 12337 || a1[2] != 52)
      && (*(_WORD *)a1 != 12337 || a1[2] != 53)
      && (*(_WORD *)a1 != 12337 || a1[2] != 54) )
    {
      return memcmp(a1, "107", 3u) == 0;
    }
    return 1;
  }
  if ( *(_WORD *)a1 == 12595 )
    return 1;
  if ( *(_WORD *)a1 == 13619 )
    return 1;
  result = 0;
  if ( *(_WORD *)a1 == 12597 )
    return 1;
  return result;
}
