__int64 __fastcall sub_B120C0(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, __int64 a6)
{
  __int64 result; // rax
  int v11; // edx

  result = sub_99FDF0((__int64 *)(a1 + 2352), 64, 3u);
  *(_BYTE *)(result + 35) &= 0xFCu;
  v11 = *(_DWORD *)(result + 32);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 32) = v11 & 0xFF000000 | 0xFA01A2;
  *(_WORD *)(result + 36) = 441;
  LOBYTE(v11) = *(_BYTE *)(result + 38);
  *(_QWORD *)(result + 24) = a6;
  *(_QWORD *)(result + 40) = a2;
  *(_QWORD *)(result + 48) = a3;
  *(_BYTE *)(result + 38) = v11 & 0xE0 | 4;
  *(_DWORD *)(result + 56) = a4;
  *(_BYTE *)(result + 60) = a5;
  *(_BYTE *)(result + 34) = 10;
  return result;
}

