__int64 __fastcall sub_ED1560(_WORD *a1)
{
  int v1; // edx
  int v2; // eax

  v1 = *a1 & 0x1FF;
  v2 = v1 + 320;
  LOWORD(v2) = (v1 + 320) & 0x1FF;
  LOBYTE(v2) = (unsigned __int16)v2 <= 0x21u;
  LOBYTE(v1) = (_WORD)v1 == 168;
  return v1 | (unsigned int)v2;
}

