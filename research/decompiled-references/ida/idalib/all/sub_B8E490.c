char __fastcall sub_B8E490(__int64 a1)
{
  char v1; // dl

  v1 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( v1 == 62 )
    return (unsigned __int8)~*(_BYTE *)(a1 + 12) >> 7;
  else
    return v1 == 25 || (*(_BYTE *)(a1 + 8) & 0x7D) == 4;
}
