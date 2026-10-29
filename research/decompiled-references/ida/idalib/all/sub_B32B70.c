__int64 __fastcall sub_B32B70(__int64 a1, __int64 a2, int a3)
{
  char v3; // bp
  char v4; // bl
  __int64 result; // rax
  char v6; // dl

  switch ( a3 )
  {
    case 0:
      v3 = 0;
      v4 = 2;
      break;
    case 1:
      v3 = 1;
      v4 = 1;
      break;
    case 2:
      v3 = 2;
      v4 = 2;
      break;
    case 3:
      v3 = 3;
      v4 = 3;
      break;
    case 4:
      v3 = 4;
      v4 = 3;
      break;
  }
  result = sub_9C3B30((__int64 *)(a1 + 2352), 40, 3u);
  *(_WORD *)(result + 32) = 418;
  v6 = *(_BYTE *)(result + 38);
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_WORD *)(result + 36) = 389;
  *(_BYTE *)(result + 38) = v6 & 0xE0 | 4;
  *(_BYTE *)(result + 34) = (16 * v3) | v4;
  return result;
}
