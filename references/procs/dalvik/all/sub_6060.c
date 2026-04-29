_UNKNOWN **__fastcall sub_6060(unsigned __int8 a1, unsigned int a2)
{
  _UNKNOWN **result; // rax

  if ( a1 < 0xFAu )
    return &off_13180 + a1;
  switch ( a1 )
  {
    case 0xFA:
      result = (_UNKNOWN **)&unk_13160;
      if ( a2 <= 0x25 )
        return &off_13180 + a1;
      break;
    case 0xFB:
      result = (_UNKNOWN **)&unk_13168;
      if ( a2 <= 0x25 )
        return &off_13180 + a1;
      break;
    case 0xFC:
      result = (_UNKNOWN **)&unk_13170;
      if ( a2 <= 0x25 )
        return &off_13180 + a1;
      break;
    case 0xFD:
      result = (_UNKNOWN **)&unk_13178;
      if ( a2 <= 0x25 )
        return &off_13180 + a1;
      break;
    case 0xFE:
      if ( a2 <= 0x26 )
        return &off_13180 + a1;
      result = (_UNKNOWN **)nullsub_7();
      break;
    case 0xFF:
      result = (_UNKNOWN **)&unk_13158;
      if ( a2 <= 0x26 )
        return &off_13180 + a1;
      break;
  }
  return result;
}
