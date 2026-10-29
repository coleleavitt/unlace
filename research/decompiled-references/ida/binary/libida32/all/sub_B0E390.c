__int64 __fastcall sub_B0E390(__int64 a1, __int64 a2, int a3)
{
  char v3; // bp
  char v4; // bl
  __int64 result; // rax
  char v6; // dl
  char v7; // bl

  v3 = 16 * (a3 != 0);
  v4 = 2 - (a3 == 0);
  result = sub_99FDF0((__int64 *)(a1 + 2352), 40, 3u);
  *(_WORD *)(result + 32) = 418;
  v6 = *(_BYTE *)(result + 38);
  v7 = v3 | v4 & 0xF;
  *(_WORD *)(result + 36) = 67;
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_OWORD *)result = 0;
  *(_BYTE *)(result + 38) = v6 & 0xE0 | 4;
  *(_QWORD *)(result + 16) = 0;
  if ( (v7 & 0xF0) == 0xF0 )
    v7 &= 0xFu;
  *(_QWORD *)(result + 24) = a2;
  *(_BYTE *)(result + 34) = v7;
  return result;
}

