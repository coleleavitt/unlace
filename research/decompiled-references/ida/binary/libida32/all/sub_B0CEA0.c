__int64 __fastcall sub_B0CEA0(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  __int64 result; // rax
  char v5; // dl

  v3 = 1;
  if ( a3 != 1 )
    v3 = 2 * (a3 != 0);
  result = sub_99FDF0((__int64 *)(a1 + 2352), 40, 3u);
  v5 = *(_BYTE *)(result + 34);
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_BYTE *)(result + 34) = v5 & 0xF | (16 * v3);
  *(_QWORD *)(result + 32) = *(_QWORD *)(result + 32) & 0xE00000FFF00000LL | 0x5C000601A2LL;
  return result;
}

