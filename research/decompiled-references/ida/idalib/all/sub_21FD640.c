__int64 __fastcall sub_21FD640(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 v4; // si
  char v6; // cl

  v4 = *(_BYTE *)(a1 + 20);
  switch ( (*(_BYTE *)(a2 + 20) & 7) + 4 * (v4 & 7) )
  {
    case 0:
      if ( (((*(_BYTE *)(a2 + 20) ^ v4) & 8) != 0) == a3 )
        return 0;
      sub_21F9270((__int64 *)a1, 0, 0, nullptr);
      return 1;
    case 1:
    case 9:
    case 0xD:
      sub_21F9190(a1, a2);
      v4 = *(_BYTE *)(a1 + 20);
      goto LABEL_5;
    case 2:
    case 3:
    case 0xB:
    case 0xF:
      return 0;
    case 4:
    case 5:
    case 6:
    case 7:
LABEL_5:
      if ( (v4 & 7) == 1 && sub_21F8C40((_QWORD *)a1) )
      {
        sub_21FD230((__int64 *)a1);
        return 1;
      }
      else
      {
        return (*(_BYTE *)(a2 + 20) & 7) == 1 && sub_21F8C40((_QWORD *)a2);
      }
    case 8:
    case 0xC:
      v6 = *(_BYTE *)(a1 + 20) & 0xF0;
      *(_BYTE *)(a1 + 20) &= 0xF8u;
      *(_BYTE *)(a1 + 20) = v6 | (8 * (((*(_BYTE *)(a2 + 20) >> 3) ^ a3) & 1));
      return 0;
    case 0xA:
      return 2;
    case 0xE:
      sub_21F9190(a1, a2);
      *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF7 | (8 * ((a3 ^ (*(_BYTE *)(a2 + 20) >> 3)) & 1));
      return 0;
  }
}
