__int64 __fastcall sub_16900(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // ax
  __int64 result; // rax
  unsigned __int16 v7; // si
  unsigned __int16 v8; // ax
  char v9; // al

  v4 = *(_WORD *)(a4 + 24);
  if ( v4 > 0x2Au )
  {
    v7 = v4 - 96;
    result = 0;
    if ( v7 > 3u )
      return result;
LABEL_9:
    *(_QWORD *)(a2 + 8) = a4 + 80;
    *(_QWORD *)(a2 + 16) = a4 + 40;
    v8 = *(_WORD *)(a4 + 24);
    if ( v8 > 0x63u )
    {
      if ( v8 != 207 )
        goto LABEL_18;
    }
    else if ( v8 <= 0x5Fu )
    {
      if ( v8 > 0x12u )
      {
        if ( (unsigned __int16)(v8 - 40) <= 2u )
          goto LABEL_13;
      }
      else if ( v8 > 0xFu )
      {
LABEL_13:
        v9 = 1;
LABEL_14:
        *(_BYTE *)(a2 + 24) = v9;
        return 1;
      }
LABEL_18:
      sub_16410(a1);
      return sub_169D0(a1);
    }
    v9 = 0;
    goto LABEL_14;
  }
  if ( v4 <= 8u )
    return 0;
  switch ( *(_WORD *)(a4 + 24) )
  {
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x27:
      goto LABEL_7;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x28:
    case 0x29:
    case 0x2A:
      goto LABEL_9;
    case 0x26:
      result = 0;
      if ( *(_BYTE *)(a4 + 41) == 1 )
      {
LABEL_7:
        *(_QWORD *)(a2 + 8) = a4 + 80;
        *(_QWORD *)(a2 + 16) = a4 + 40;
        result = 1;
      }
      break;
    default:
      return 0;
  }
  return result;
}
