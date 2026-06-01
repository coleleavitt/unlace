__int64 __fastcall sub_5ADB25(_BYTE *a1, _BYTE *a2, unsigned __int64 a3)
{
  unsigned __int64 i; // [rsp+20h] [rbp-8h]

  for ( i = 0; i < a3; ++i )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    if ( *a1 > *a2 )
      return 1;
    if ( !*a1 )
      return 0;
    ++a1;
    ++a2;
  }
  return 0;
}
