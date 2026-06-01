bool __fastcall sub_16FF980(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v2 - 53 > 1 && ((v2 + 52) & 0x7Fu) > 1 )
    return v2 == 24;
  else
    return (*(_BYTE *)(sub_B72ED0(a2) + 28) & 0x7F) == 24;
}
