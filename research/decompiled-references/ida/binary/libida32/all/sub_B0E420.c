__int64 __fastcall sub_B0E420(__int64 a1, __int64 a2, int a3)
{
  bool v3; // bl
  __int64 result; // rax
  char v5; // dl
  unsigned int v6; // ecx

  v3 = a3 != 0;
  result = sub_99FDF0((__int64 *)(a1 + 2352), 40, 3u);
  v5 = *(_BYTE *)(result + 34);
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_BYTE *)(result + 34) = (16 * v3) | v5 & 0xF;
  v6 = *(_DWORD *)(result + 32) & 0xFFF00000 | 0x601A2;
  *(_DWORD *)(result + 32) = v6;
  *(_WORD *)(result + 36) = 214;
  *(_BYTE *)(result + 38) = *(_BYTE *)(result + 38) & 0xE0 | 4;
  if ( (BYTE2(v6) & 0xF0) == 0xF0 )
    *(_BYTE *)(result + 34) = BYTE2(v6) & 0xF;
  return result;
}

