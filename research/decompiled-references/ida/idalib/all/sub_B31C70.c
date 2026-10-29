__int64 __fastcall sub_B31C70(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  char v9; // bp
  char v10; // bl
  char v11; // bl
  __int64 result; // rax
  char v13; // dl

  if ( a6 == 1 )
  {
    v9 = 1;
    v10 = 2;
  }
  else
  {
    v9 = a6 == 0 ? 0 : 2;
    v10 = a6 == 0 ? 1 : 3;
  }
  v11 = (16 * v9) | v10 & 0xF;
  result = sub_9C3B30((__int64 *)(a1 + 2352), 56, 3u);
  *(_WORD *)(result + 32) = 418;
  v13 = *(_BYTE *)(result + 38);
  *(_WORD *)(result + 36) = 217;
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_OWORD *)result = 0;
  *(_BYTE *)(result + 38) = v13 & 0xE0 | 4;
  *(_QWORD *)(result + 16) = 0;
  if ( (v11 & 0xF0) == 0xF0 )
    v11 &= 0xFu;
  *(_QWORD *)(result + 24) = a5;
  *(_QWORD *)(result + 40) = a2;
  *(_DWORD *)(result + 48) = a3;
  *(_DWORD *)(result + 52) = a4;
  *(_BYTE *)(result + 34) = v11;
  return result;
}
