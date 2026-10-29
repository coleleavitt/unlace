__int64 __fastcall sub_B31A30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  result = sub_9C3B30((__int64 *)(a1 + 2352), 40, 3u);
  *(_BYTE *)(result + 35) &= 0xFCu;
  v3 = *(_DWORD *)(result + 32);
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_DWORD *)(result + 32) = v3 & 0xFF000000 | 0x601A2;
  *(_WORD *)(result + 36) = 382;
  *(_BYTE *)(result + 38) &= 0xE0u;
  return result;
}
