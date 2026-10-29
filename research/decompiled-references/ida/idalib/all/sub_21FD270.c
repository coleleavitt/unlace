_BOOL8 __fastcall sub_21FD270(__int64 a1, __int64 a2)
{
  char v2; // cl
  _BOOL8 result; // rax

  v2 = *(_BYTE *)(a1 + 20);
  switch ( (*(_BYTE *)(a2 + 20) & 7) + 4 * (v2 & 7) )
  {
    case 0:
    case 2:
    case 3:
    case 0xB:
    case 0xF:
      sub_21F9270((__int64 *)a1, 0, 0, nullptr);
      result = 1;
      break;
    case 1:
    case 9:
    case 0xD:
      sub_21F9190(a1, a2);
      v2 = *(_BYTE *)(a1 + 20);
      goto LABEL_3;
    case 4:
    case 5:
    case 6:
    case 7:
LABEL_3:
      if ( (v2 & 7) == 1 && sub_21F8C40((_QWORD *)a1) )
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
    case 0xA:
    case 0xC:
    case 0xE:
      result = 0;
      break;
  }
  return result;
}
