__int64 __fastcall sub_B30B50(__int64 a1, __int64 a2, int a3)
{
  char v3; // bp
  char v4; // bl
  __int64 result; // rax

  if ( a3 == 1 )
  {
    v3 = 1;
    v4 = 1;
  }
  else
  {
    v3 = a3 == 0 ? 0 : 2;
    v4 = a3 == 0 ? 6 : 2;
  }
  result = sub_9C3B30((__int64 *)(a1 + 2352), 40, 3u);
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_WORD *)(result + 32) = 418;
  *(_BYTE *)(result + 34) = (16 * v3) | v4 & 0xF;
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_WORD *)(result + 36) = 182;
  *(_BYTE *)(result + 38) &= 0xE0u;
  return result;
}
