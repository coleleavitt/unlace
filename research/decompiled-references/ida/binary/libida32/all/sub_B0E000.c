__int64 __fastcall sub_B0E000(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v5; // bp
  char v6; // bl
  char v7; // bl
  __int64 result; // rax
  char v9; // dl

  if ( a4 == 1 )
  {
    v5 = 1;
    v6 = 3;
  }
  else
  {
    v5 = a4 == 0 ? 0 : 2;
    v6 = 2 - (a4 != 0);
  }
  v7 = (16 * v5) | v6 & 0xF;
  result = sub_99FDF0((__int64 *)(a1 + 2352), 48, 3u);
  *(_WORD *)(result + 32) = 418;
  v9 = *(_BYTE *)(result + 38);
  *(_WORD *)(result + 36) = 413;
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_OWORD *)result = 0;
  *(_BYTE *)(result + 38) = v9 & 0xE0 | 4;
  *(_QWORD *)(result + 16) = 0;
  if ( (v7 & 0xF0) == 0xF0 )
    v7 &= 0xFu;
  *(_QWORD *)(result + 24) = a3;
  *(_QWORD *)(result + 40) = a2;
  *(_BYTE *)(result + 34) = v7;
  return result;
}

