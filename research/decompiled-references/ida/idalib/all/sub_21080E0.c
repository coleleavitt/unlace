__int64 __fastcall sub_21080E0(_DWORD *a1, _QWORD *a2, char a3)
{
  __int64 result; // rax
  char v5; // dl
  unsigned __int64 v6; // rdx
  char v7; // dl
  unsigned __int64 v8; // rdx
  char v9; // dl
  char v10; // dl
  unsigned __int64 v11; // rdx
  char v12; // dl
  unsigned __int64 v13; // rdx
  char v14; // dl
  unsigned __int64 v15; // rdx

  switch ( *a1 )
  {
    case 0:
      result = sub_21236A0(32, a2, a1);
      v9 = *(_BYTE *)(result + 8);
      *(_QWORD *)result = 0;
      *(_BYTE *)(result + 8) = v9 & 0xFD | (2 * (a3 & 1));
      v6 = *(_QWORD *)(result + 8) & 0xFFFF0000FFF00003LL;
      BYTE1(v6) |= 2u;
      goto LABEL_3;
    case 1:
      result = sub_21236A0(40, a2, a1);
      v10 = *(_BYTE *)(result + 8);
      *(_QWORD *)result = 0;
      *(_DWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_BYTE *)(result + 8) = v10 & 0xFD | (2 * (a3 & 1));
      v11 = *(_QWORD *)(result + 8) & 0xFFFF0000FFF00003LL;
      BYTE1(v11) |= 1u;
      *(_QWORD *)(result + 8) = v11;
      *(_BYTE *)(result + 8) = (a2 != nullptr) | v11 & 2;
      if ( a2 )
        *(_QWORD *)(result - 8) = a2;
      *(_QWORD *)(result + 32) = 0;
      break;
    case 2:
      result = sub_21236A0(48, a2, a1);
      v12 = *(_BYTE *)(result + 8);
      *(_QWORD *)result = 0;
      *(_DWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_BYTE *)(result + 8) = v12 & 0xFD | (2 * (a3 & 1));
      v13 = *(_QWORD *)(result + 8) & 0xFFFF0000FFF00003LL | 0x180;
      *(_QWORD *)(result + 8) = v13;
      *(_BYTE *)(result + 8) = (a2 != nullptr) | v13 & 0x82;
      if ( a2 )
        *(_QWORD *)(result - 8) = a2;
      *(_DWORD *)(result + 40) = (_DWORD)&loc_1000000;
      *(_BYTE *)(result + 45) = 0;
      break;
    case 3:
      result = sub_21236A0(40, a2, a1);
      v14 = *(_BYTE *)(result + 8);
      *(_QWORD *)result = 0;
      *(_DWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_BYTE *)(result + 8) = v14 & 0xFD | (2 * (a3 & 1));
      v15 = *(_QWORD *)(result + 8) & 0xFFFF0000FFF00003LL;
      LOBYTE(v15) = v15 | 0x80;
      *(_QWORD *)(result + 8) = v15;
      *(_BYTE *)(result + 8) = (a2 != nullptr) | v15 & 0x82;
      if ( a2 )
        *(_QWORD *)(result - 8) = a2;
      *(_WORD *)(result + 32) = 0;
      break;
    case 5:
      result = sub_21236A0(192, a2, a1);
      v7 = *(_BYTE *)(result + 8);
      *(_QWORD *)result = 0;
      *(_DWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_BYTE *)(result + 8) = v7 & 0xFD | (2 * (a3 & 1));
      v8 = *(_QWORD *)(result + 8) & 0xFFFF0000FFF00003LL | 0x280;
      *(_QWORD *)(result + 8) = v8;
      *(_BYTE *)(result + 8) = (a2 != nullptr) | v8 & 0x82;
      if ( a2 )
        *(_QWORD *)(result - 8) = a2;
      *(_BYTE *)(result + 36) = 0;
      *(_DWORD *)(result + 40) = 0;
      *(_WORD *)(result + 44) = 0;
      *(_BYTE *)(result + 64) = 0;
      *(_BYTE *)(result + 88) = 0;
      *(_BYTE *)(result + 112) = 0;
      *(_QWORD *)(result + 120) = 0;
      *(_BYTE *)(result + 130) = 0;
      *(_BYTE *)(result + 176) = 0;
      *(_QWORD *)(result + 184) = 0;
      break;
    case 6:
      result = sub_2107BE0((__int64)a1, a2, a3);
      break;
    default:
      result = sub_21236A0(32, a2, a1);
      v5 = *(_BYTE *)(result + 8);
      *(_QWORD *)result = 0;
      *(_BYTE *)(result + 8) = v5 & 0xFD | (2 * (a3 & 1));
      v6 = *(_QWORD *)(result + 8) & 0xFFFF0000FFF00003LL;
LABEL_3:
      *(_QWORD *)(result + 8) = v6;
      *(_DWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_BYTE *)(result + 8) = (a2 != nullptr) | v6 & 2;
      if ( a2 )
        *(_QWORD *)(result - 8) = a2;
      break;
  }
  return result;
}
