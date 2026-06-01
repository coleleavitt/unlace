__int64 __fastcall sub_B0D940(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  result = sub_99FDF0((__int64 *)(a1 + 2352), 40, 3u);
  *(_BYTE *)(result + 35) &= 0xFCu;
  v3 = *(_DWORD *)(result + 32);
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_DWORD *)(result + 32) = v3 & 0xFF000000 | 0x601A2;
  *(_WORD *)(result + 36) = 150;
  *(_BYTE *)(result + 38) &= 0xE0u;
  return result;
}

