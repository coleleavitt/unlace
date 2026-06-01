__int64 __fastcall sub_B0DE20(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  char v9; // r13
  __int64 result; // rax
  char v11; // dl
  int v12; // edx
  unsigned int v13; // ecx

  switch ( a6 )
  {
    case 0:
      v9 = 0;
      break;
    case 1:
      v9 = 1;
      break;
    case 2:
      v9 = 2;
      break;
    case 3:
      v9 = 3;
      break;
    case 4:
      v9 = 4;
      break;
  }
  result = sub_99FDF0((__int64 *)(a1 + 2352), 56, 3u);
  v11 = *(_BYTE *)(result + 34);
  *(_BYTE *)(result + 35) &= 0xFCu;
  *(_OWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a5;
  *(_BYTE *)(result + 34) = (16 * v9) | v11 & 0xF;
  v12 = *(_DWORD *)(result + 32);
  *(_DWORD *)(result + 40) = a2;
  *(_DWORD *)(result + 44) = a3;
  *(_QWORD *)(result + 48) = a4;
  v13 = v12 & 0xFFF00000 | 0x701A2;
  *(_DWORD *)(result + 32) = v13;
  *(_WORD *)(result + 36) = 418;
  *(_BYTE *)(result + 38) = *(_BYTE *)(result + 38) & 0xE0 | 4;
  if ( (BYTE2(v13) & 0xF0) == 0xF0 )
    *(_BYTE *)(result + 34) = BYTE2(v13) & 0xF;
  return result;
}

