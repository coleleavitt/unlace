__int64 __fastcall dto_init(__int64 a1, char a2)
{
  char v2; // r10
  char v3; // r9
  char v4; // r8
  char v5; // cl
  char v6; // dl
  __int16 v7; // ax

  if ( a2 )
  {
    v2 = 0;
    v3 = 0;
    v4 = 24;
    v5 = 0;
    v6 = 0;
    v7 = 40;
  }
  else
  {
    v2 = 2;
    v3 = 1;
    v4 = 40;
    v5 = 16;
    v6 = 3;
    v7 = 132;
  }
  *(_WORD *)(a1 + 10) = v7;
  *(_DWORD *)a1 = 16;
  *(_BYTE *)(a1 + 4) = a2;
  *(_BYTE *)(a1 + 5) = v2;
  *(_BYTE *)(a1 + 6) = v3;
  *(_BYTE *)(a1 + 7) = v4;
  *(_BYTE *)(a1 + 8) = v5;
  *(_BYTE *)(a1 + 9) = v6;
  *(_WORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 14) = 1;
  return 0;
}

