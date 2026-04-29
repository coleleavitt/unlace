__int64 __fastcall sub_1E130(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // cl

  v2 = *(_BYTE *)(a2 + 1);
  if ( v2 > 0xAu )
    return 0;
  if ( ((1LL << v2) & 0x94) != 0 )
    return (*(_WORD *)(a1 + 34) & 4) == 0 ? 196 : 212;
  return 4 * (unsigned int)(((1LL << v2) & 0x420) != 0);
}
