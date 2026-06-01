__int64 __fastcall sub_B101F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  result = sub_99FDF0((__int64 *)(a1 + 2352), 104, 3u);
  *(_BYTE *)(result + 35) &= 0xFCu;
  v3 = *(_DWORD *)(result + 32);
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_DWORD *)(result + 32) = v3 & 0xFF000000 | 0x701A2;
  *(_WORD *)(result + 36) = 319;
  *(_BYTE *)(result + 38) &= 0xE0u;
  *(_QWORD *)(result + 40) = result + 56;
  *(_QWORD *)(result + 48) = 0x600000000LL;
  return result;
}

