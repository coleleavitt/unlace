__int64 __fastcall sub_21FD320(__int64 a1, __int64 a2)
{
  char v3; // dl
  unsigned __int8 v4; // si
  __int64 result; // rax
  char v6; // al
  bool v7; // dl
  char v8; // dl

  v3 = *(_BYTE *)(a1 + 20);
  v4 = *(_BYTE *)(a2 + 20);
  switch ( (v4 & 7) + 4 * (v3 & 7) )
  {
    case 0:
    case 0xF:
      sub_21F9270((__int64 *)a1, 0, 0, nullptr);
      result = 1;
      break;
    case 1:
    case 9:
    case 0xD:
      sub_21F9190(a1, a2);
      v7 = 0;
      v6 = *(_BYTE *)(a1 + 20) & 0xF7;
      *(_BYTE *)(a1 + 20) = v6;
      v4 = *(_BYTE *)(a2 + 20);
      goto LABEL_5;
    case 2:
    case 3:
    case 0xA:
    case 0xC:
    case 0xE:
      result = 0;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      v6 = *(_BYTE *)(a1 + 20);
      v7 = (v3 & 8) != 0;
LABEL_5:
      v8 = v6 & 0xF7 | (8 * (((v4 >> 3) ^ v7) & 1));
      *(_BYTE *)(a1 + 20) = v8;
      if ( (v8 & 7) == 1 && sub_21F8C40((_QWORD *)a1) )
      {
        sub_21FD230((__int64 *)a1);
        result = 1;
      }
      else
      {
        result = 0;
        if ( (*(_BYTE *)(a2 + 20) & 7) == 1 )
          result = sub_21F8C40((_QWORD *)a2);
      }
      break;
    case 8:
      *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 3;
      result = 0;
      break;
    case 0xB:
      if ( *(_DWORD *)(*(_QWORD *)a1 + 16LL) == 1 )
        sub_21F9270((__int64 *)a1, 0, (v3 & 8) != 0, nullptr);
      else
        *(_BYTE *)(a1 + 20) &= 0xF8u;
      result = 2;
      break;
  }
  return result;
}
