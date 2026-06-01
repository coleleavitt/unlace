__int64 __fastcall sub_13A0(unsigned __int64 a1)
{
  int v1; // edx
  unsigned int v2; // ecx
  __int16 v3; // ax
  __int16 v5; // di

  v1 = DWORD2(xmmword_51C0);
  v2 = 0;
  LODWORD(xmmword_51C0) = 4;
  DWORD2(xmmword_51C0) += 3;
  if ( a1 <= 0xFFFF )
    return v2;
  LODWORD(xmmword_51C0) = 6;
  DWORD2(xmmword_51C0) = v1 + 4;
  v2 = 1;
  v3 = WORD6(xmmword_51C0) + BYTE2(a1);
  WORD6(xmmword_51C0) = v3;
  if ( a1 <= 0xFFFFFF )
    return v2;
  LODWORD(xmmword_51C0) = 8;
  DWORD2(xmmword_51C0) = v1 + 5;
  v5 = v3 + BYTE3(a1);
  WORD6(xmmword_51C0) = v5;
  return 2;
}

