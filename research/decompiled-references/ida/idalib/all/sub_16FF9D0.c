__int64 __fastcall sub_16FF9D0(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // eax
  unsigned int v4; // eax

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  v3 = (unsigned __int8)v2;
  if ( (unsigned int)(unsigned __int8)v2 - 53 <= 1 || (((_BYTE)v2 + 52) & 0x7Fu) <= 1 )
  {
    v2 = *(_BYTE *)(sub_B72ED0(a2) + 28) & 0x7F;
    v3 = (unsigned __int8)v2;
  }
  v4 = v3 - 58;
  LOBYTE(v4) = v4 <= 9;
  LOBYTE(v2) = (_BYTE)v2 == 20;
  return v2 | v4;
}
