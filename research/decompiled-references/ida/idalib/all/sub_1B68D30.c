__int64 __fastcall sub_1B68D30(__int64 a1, _WORD *a2)
{
  unsigned __int16 v3; // dx
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int64 v6; // rdi

  while ( 1 )
  {
    v3 = *a2 & 0x1FF;
    if ( v3 <= 0x75u )
      break;
    if ( v3 <= 0x77u )
    {
      switch ( (a2[1] >> 3) & 0x3F )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x20:
          return sub_1BC65D0(a1);
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
          return sub_1BC65F0(a1);
        default:
          break;
      }
    }
LABEL_3:
    if ( v3 == 118 )
      return sub_1BC65D0(a1);
    if ( v3 <= 0x76u )
    {
      if ( v3 > 0x58u )
      {
        if ( v3 <= 0x5Du )
          return sub_1BC6610(a1);
      }
      else if ( !v3 )
      {
        goto LABEL_28;
      }
      goto LABEL_8;
    }
    if ( v3 <= 0xECu )
    {
      if ( v3 >= 0xA1u )
        return sub_1BC67C0(a1);
      if ( v3 == 119 )
        return sub_1BC65F0(a1);
      goto LABEL_8;
    }
    if ( v3 != 250 )
    {
      if ( v3 > 0x100u )
LABEL_28:
        BUG();
LABEL_8:
      v4 = a1;
      return sub_1BC6420(v4);
    }
    v6 = sub_EEE260((__int64)a2);
    a2 = (_WORD *)sub_B70A90(v6);
  }
  if ( v3 != 4 )
    goto LABEL_3;
  v4 = a1;
  switch ( *((_BYTE *)a2 + 2) >> 3 )
  {
    case 12:
    case 13:
      return sub_1BC6420(v4);
    default:
      result = sub_1BC65B0(a1);
      break;
  }
  return result;
}
