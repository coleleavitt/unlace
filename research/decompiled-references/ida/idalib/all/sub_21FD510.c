_BOOL8 __fastcall sub_21FD510(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // si
  _BOOL8 result; // rax
  bool v5; // al
  char v6; // dl
  char v7; // al

  v3 = *(_BYTE *)(a2 + 20);
  switch ( (v3 & 7) + 4 * (*(_BYTE *)(a1 + 20) & 7) )
  {
    case 0:
    case 2:
    case 8:
      *(_BYTE *)(a1 + 20) &= 0xF8u;
      result = 0;
      break;
    case 1:
    case 9:
    case 0xD:
      sub_21F9190(a1, a2);
      v5 = 0;
      v6 = *(_BYTE *)(a1 + 20) & 0xF7;
      *(_BYTE *)(a1 + 20) = v6;
      v3 = *(_BYTE *)(a2 + 20);
      goto LABEL_7;
    case 3:
    case 0xC:
      sub_21F9270((__int64 *)a1, 0, 0, nullptr);
      result = 1;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      v6 = *(_BYTE *)(a1 + 20);
      v5 = (v6 & 8) != 0;
LABEL_7:
      v7 = v6 & 0xF7 | (8 * (((v3 >> 3) ^ v5) & 1));
      *(_BYTE *)(a1 + 20) = v7;
      if ( (v7 & 7) == 1 && sub_21F8C40((_QWORD *)a1) )
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
    case 0xA:
      result = 0;
      break;
    case 0xB:
    case 0xE:
    case 0xF:
      *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 3;
      result = 0;
      break;
  }
  return result;
}
