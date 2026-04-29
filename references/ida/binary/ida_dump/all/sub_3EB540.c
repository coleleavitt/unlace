__int64 __fastcall sub_3EB540(__int64 a1, int a2, unsigned __int8 a3, double a4)
{
  __int64 result; // rax

  if ( (unsigned __int16)a2 > 0x2Cu )
  {
    if ( (_WORD)a2 == 216 )
      goto LABEL_8;
    if ( (unsigned __int16)a2 > 0xD8u )
    {
      if ( (_WORD)a2 == 219 )
        goto LABEL_8;
    }
    else
    {
      if ( (_WORD)a2 == 131 )
      {
        if ( a3 <= 2u || a3 == 7 )
          goto LABEL_9;
        goto LABEL_24;
      }
      if ( (_WORD)a2 == 209 )
      {
LABEL_8:
        if ( a3 <= 2u || a3 == 7 )
        {
LABEL_9:
          qsnprintf();
          return a1;
        }
LABEL_24:
        if ( !under_debugger )
          sub_383060(0xC8A2u, a4);
        goto LABEL_26;
      }
    }
LABEL_17:
    if ( !under_debugger )
      sub_383060(0xC8A1u, a4);
LABEL_26:
    BUG();
  }
  if ( (unsigned __int16)a2 <= 5u )
    goto LABEL_17;
  switch ( a2 )
  {
    case 6:
    case 7:
    case 34:
    case 44:
      goto LABEL_8;
    case 14:
    case 15:
      if ( a3 > 2u && a3 != 7 )
        goto LABEL_24;
      qsnprintf();
      *(_BYTE *)(a1 + 1) = 105;
      result = a1;
      break;
    default:
      goto LABEL_17;
  }
  return result;
}
