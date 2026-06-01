__int64 __fastcall sub_5ADAC7(_BYTE *a1, _BYTE *a2)
{
  while ( 1 )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    if ( *a1 > *a2 )
      return 1;
    if ( !*a1 )
      break;
    ++a1;
    ++a2;
  }
  return 0;
}
