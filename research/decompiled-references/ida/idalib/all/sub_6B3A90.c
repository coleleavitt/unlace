__int64 __fastcall sub_6B3A90(__int64 a1, __int64 a2, _BYTE *a3)
{
  char *v4; // rcx
  char v5; // dl
  int v6; // eax

  if ( !a3 )
    return 0;
  if ( *a3 != 35 )
    return 0;
  v4 = a3 + 1;
  v5 = a3[1];
  if ( !v5 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    ++v4;
    if ( v5 >= 0 )
      break;
    v6 = v5 & 0x7F | (v6 << 7);
    v5 = *v4;
    if ( !*v4 )
      return 0;
  }
  return sub_64DF40(a1, a2, (v6 << 6) | v5 & 0x3Fu);
}
