__int64 __fastcall sub_B32020(__int64 a1, char a2, __int64 a3, int a4)
{
  char v5; // bl
  __int64 result; // rax
  char v7; // dl
  int v8; // edx
  unsigned int v9; // ecx

  v5 = 1;
  if ( a4 != 1 )
  {
    v5 = 0;
    if ( a4 )
      v5 = (a4 != 2) + 2;
  }
  result = sub_9C3B30((__int64 *)(a1 + 2352), 40, 3u);
  v7 = *(_BYTE *)(result + 34);
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a3;
  *(_BYTE *)(result + 34) = v7 & 0xF | (16 * v5);
  v8 = *(_DWORD *)(result + 32);
  *(_BYTE *)(result + 39) = a2;
  v9 = v8 & 0xFFF00000 | 0x601A2;
  *(_DWORD *)(result + 32) = v9;
  *(_WORD *)(result + 36) = 248;
  *(_BYTE *)(result + 38) = *(_BYTE *)(result + 38) & 0xE0 | 4;
  if ( (BYTE2(v9) & 0xF0) == 0xF0 )
    *(_BYTE *)(result + 34) = BYTE2(v9) & 0xF;
  return result;
}
