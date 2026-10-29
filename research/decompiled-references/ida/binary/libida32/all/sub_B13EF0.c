__int64 __fastcall sub_B13EF0(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  char v7; // bp
  char v8; // bl
  char v9; // bl
  __int64 result; // rax
  char v11; // dl

  if ( a5 == 1 )
  {
    v7 = 1;
    v8 = 2;
  }
  else
  {
    v7 = a5 == 0 ? 0 : 2;
    v8 = a5 == 0 ? 1 : 3;
  }
  v9 = (16 * v7) | v8 & 0xF;
  result = sub_99FDF0((__int64 *)(a1 + 2352), 48, 3u);
  *(_WORD *)(result + 32) = 418;
  v11 = *(_BYTE *)(result + 38);
  *(_WORD *)(result + 36) = 128;
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_QWORD *)result = 0;
  *(_BYTE *)(result + 38) = v11 & 0xE0 | 4;
  *(_QWORD *)(result + 8) = 0;
  if ( (v9 & 0xF0) == 0xF0 )
    v9 &= 0xFu;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a4;
  *(_DWORD *)(result + 40) = a2;
  *(_DWORD *)(result + 44) = a3;
  *(_BYTE *)(result + 34) = v9;
  return result;
}

