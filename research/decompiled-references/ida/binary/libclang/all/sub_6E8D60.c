unsigned __int64 __fastcall sub_6E8D60(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v2 - 62) <= 2 )
    return sub_6DE140(a1, a2, 0);
  if ( (unsigned int)(v2 - 56) <= 3 )
    return sub_6E8B00(a1, a2);
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x3C )
    return sub_6E8C30(a1, a2);
  return sub_6C7D80(a1, a2);
}

