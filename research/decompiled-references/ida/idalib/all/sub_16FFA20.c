__int64 __fastcall sub_16FFA20(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  unsigned int v5; // edx

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  v3 = (unsigned __int8)v2;
  if ( (unsigned int)(unsigned __int8)v2 - 53 <= 1 || (((_BYTE)v2 + 52) & 0x7Fu) <= 1 )
  {
    v2 = *(_BYTE *)(sub_B72ED0(a2) + 28) & 0x7F;
    v3 = (unsigned __int8)v2;
  }
  v4 = v2 + 57;
  LOBYTE(v4) = (v4 & 0x7B) == 0;
  v5 = v3 - 26;
  LOBYTE(v5) = v5 <= 0x1A;
  return v5 | v4;
}
