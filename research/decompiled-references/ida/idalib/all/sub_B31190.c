__int64 __fastcall sub_B31190(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edx

  result = sub_9C3B30((__int64 *)(a1 + 2352), 48, 3u);
  *(_BYTE *)(result + 35) &= 0xFCu;
  v5 = *(_DWORD *)(result + 32);
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a3;
  *(_DWORD *)(result + 32) = v5 & 0xFF000000 | 0xFA01A2;
  *(_WORD *)(result + 36) = 437;
  LOBYTE(v5) = *(_BYTE *)(result + 38);
  *(_DWORD *)(result + 40) = a2;
  *(_BYTE *)(result + 38) = v5 & 0xE0 | 4;
  *(_BYTE *)(result + 34) = 10;
  return result;
}
