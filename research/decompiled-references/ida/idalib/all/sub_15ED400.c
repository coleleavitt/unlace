__int64 __fastcall sub_15ED400(__int64 *a1)
{
  while ( (*((_BYTE *)a1 + 9) & 1) == 0 )
  {
    a1 = (__int64 *)*a1;
    if ( !a1 )
      return 0;
  }
  return 1;
}
