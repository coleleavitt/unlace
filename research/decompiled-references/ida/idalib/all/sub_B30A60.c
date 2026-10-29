__int64 __fastcall sub_B30A60(__int64 a1, char a2, __int64 a3, int a4)
{
  char v5; // bl
  __int64 result; // rax
  char v7; // dl
  int v8; // edx

  v5 = 1;
  if ( a4 != 1 )
    v5 = 2 * (a4 != 0);
  result = sub_9C3B30((__int64 *)(a1 + 2352), 40, 3u);
  v7 = *(_BYTE *)(result + 34);
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a3;
  *(_BYTE *)(result + 34) = v7 & 0xF | (16 * v5);
  v8 = *(_DWORD *)(result + 32);
  *(_BYTE *)(result + 38) &= 0xE0u;
  *(_BYTE *)(result + 39) = a2;
  *(_DWORD *)(result + 32) = v8 & 0xFFF00000 | 0x601A2;
  *(_WORD *)(result + 36) = 92;
  return result;
}
