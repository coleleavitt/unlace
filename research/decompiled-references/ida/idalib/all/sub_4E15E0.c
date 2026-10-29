__int64 __fastcall sub_4E15E0(char a1)
{
  int v2; // edi
  int v3; // eax

  v2 = a1 & 0x80;
  v3 = a1 & 0xF;
  if ( v3 <= 2 )
    return (v2 == 0 ? 0xFFFFFFFD : 0) + v3 + 12;
  if ( (unsigned int)(v3 - 6) <= 1 )
    return (v2 == 0 ? 0xFFFFFFFE : 0) + v3 - 6 + 35;
  return (v2 == 0 ? 0xFFFFFFFD : 0) + v3 + 21;
}
