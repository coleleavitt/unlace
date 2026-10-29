__int64 __fastcall sub_B0D0E0(__int64 a1, int a2, int a3, __int64 a4, char a5, int a6, __int64 a7)
{
  __int64 result; // rax
  int v12; // edx

  result = sub_99FDF0((__int64 *)(a1 + 2352), 64, 3u);
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_QWORD *)(result + 24) = a7;
  v12 = *(_DWORD *)(result + 32);
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 40) = a2;
  *(_DWORD *)(result + 32) = v12 & 0xFF000000 | 0x701A2;
  *(_WORD *)(result + 36) = 295;
  LOBYTE(v12) = *(_BYTE *)(result + 38);
  *(_DWORD *)(result + 44) = a3;
  *(_QWORD *)(result + 48) = a4;
  *(_BYTE *)(result + 56) = a5;
  *(_DWORD *)(result + 60) = a6;
  *(_BYTE *)(result + 38) = v12 & 0xE0 | 4;
  return result;
}

