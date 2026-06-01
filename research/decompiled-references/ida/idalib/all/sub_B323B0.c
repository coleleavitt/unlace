__int64 __fastcall sub_B323B0(__int64 a1, __int64 a2, int a3)
{
  char v3; // bp
  char v4; // bl
  char v5; // bl
  __int64 result; // rax

  if ( a3 == 1 )
  {
    v3 = 1;
    v4 = 2;
  }
  else
  {
    v3 = a3 == 0 ? 0 : 2;
    v4 = a3 == 0 ? 1 : 3;
  }
  v5 = (16 * v3) | v4 & 0xF;
  result = sub_9C3B30((__int64 *)(a1 + 2352), 40, 3u);
  *(_WORD *)(result + 36) = 143;
  *(_WORD *)(result + 32) = 418;
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_BYTE *)(result + 38) &= 0xE0u;
  if ( (v5 & 0xF0) == 0xF0 )
    v5 &= 0xFu;
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_BYTE *)(result + 34) = v5;
  return result;
}
