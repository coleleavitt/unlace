__int64 __fastcall sub_6F33F0(__int64 a1)
{
  char v1; // si
  unsigned __int64 v2; // rcx
  _BOOL8 v3; // rdx
  __int64 v4; // rsi

  v1 = *(_BYTE *)(a1 + 19) & 0x40;
  v2 = (a1 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 19) >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7)
     & 0xFFFFFFFFFFFFFFF8LL;
  v3 = v1 != 0;
  if ( !v1 )
    return v2 + 8 * v3;
  v4 = v2 + 8 * v3 + 8;
  if ( (*(_BYTE *)(v2 + 1) & 4) == 0 )
    return v2 + 8 * v3;
  return v4;
}
