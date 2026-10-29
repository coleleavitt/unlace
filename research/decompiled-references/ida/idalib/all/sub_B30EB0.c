__int64 __fastcall sub_B30EB0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  int v9; // edx

  result = sub_9C3B30((__int64 *)(a1 + 2352), 64, 3u);
  *(_BYTE *)(result + 35) &= 0xFCu;
  v9 = *(_DWORD *)(result + 32);
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a5;
  *(_DWORD *)(result + 32) = v9 & 0xFF000000 | 0xFA01A2;
  *(_WORD *)(result + 36) = 292;
  LOBYTE(v9) = *(_BYTE *)(result + 38);
  *(_DWORD *)(result + 40) = a2;
  *(_QWORD *)(result + 48) = a3;
  *(_QWORD *)(result + 56) = a4;
  *(_BYTE *)(result + 38) = v9 & 0xE0 | 4;
  *(_BYTE *)(result + 34) = 10;
  return result;
}
