__int64 __fastcall sub_B0E890(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  char v4; // bp
  __int64 result; // rax
  char v6; // dl

  if ( a3 == 1 )
  {
    v3 = 1;
    v4 = 1;
  }
  else if ( a3 )
  {
    v3 = (a3 != 2) + 2;
    v4 = v3;
  }
  else
  {
    v3 = 0;
    v4 = 4;
  }
  result = sub_99FDF0((__int64 *)(a1 + 2352), 40, 3u);
  *(_WORD *)(result + 32) = 418;
  v6 = *(_BYTE *)(result + 38);
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_WORD *)(result + 36) = 195;
  *(_BYTE *)(result + 38) = v6 & 0xE0 | 4;
  *(_BYTE *)(result + 34) = v4 | (16 * v3);
  return result;
}

