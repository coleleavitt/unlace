__int64 __fastcall sub_F565F0(char a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // edx

  v1 = a1 & 0x20;
  if ( (a1 & 0x20) != 0 )
    v1 = 8;
  v2 = a1 & 0x10;
  if ( (a1 & 0x10) != 0 )
    v2 = 16;
  v3 = a1 & 0xC;
  if ( (a1 & 0xC) != 0 )
    v3 = 4;
  v4 = a1 & 2;
  if ( (a1 & 2) != 0 )
    v4 = 2;
  return v4 | v3 | v2 | a1 & 1 | (unsigned int)v1;
}
