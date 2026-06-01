__int64 __fastcall sub_B0F4A0(__int64 a1, __int64 a2, int a3)
{
  char v3; // bp
  char v4; // bl
  __int64 result; // rax
  char v6; // cl
  char v7; // dl

  switch ( a3 )
  {
    case 0:
      v3 = 0;
      v4 = 6;
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
      v4 = 2;
      break;
    case 5:
      v3 = 5;
      v4 = 3;
      break;
    case 6:
      v3 = 6;
      v4 = 2;
      break;
    case 7:
      v3 = 7;
      v4 = 3;
      break;
    case 8:
      v3 = 8;
      v4 = 4;
      break;
  }
  result = sub_99FDF0((__int64 *)(a1 + 2352), 40, 3u);
  *(_WORD *)(result + 32) = 418;
  *(_WORD *)(result + 36) = 54;
  v6 = *(_BYTE *)(result + 38);
  v7 = v4 | (16 * v3);
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_BYTE *)(result + 38) = v6 & 0xE0 | 4;
  *(_QWORD *)(result + 24) = a2;
  if ( (v4 & 0xF0 | (unsigned __int8)(16 * v3)) == -16 )
    v7 = v4 & 0xF;
  *(_BYTE *)(result + 34) = v7;
  return result;
}

