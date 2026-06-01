__int64 __fastcall sub_1C540(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned __int64 v4; // rsi

  switch ( *(_DWORD *)(a1 + 352) )
  {
    case 2:
    case 4:
      if ( a2 <= 71 )
        goto LABEL_5;
      v2 = a2 - 72;
      if ( a2 - 72 <= 0xFFFF )
      {
        if ( (v2 & 7) == 0 )
          goto LABEL_8;
        goto LABEL_5;
      }
      if ( (((_BYTE)a2 - 72) & 0xF) != 0 )
        goto LABEL_5;
      result = (unsigned int)((a2 - 65608) >> 4) + 0x2000;
      break;
    case 3:
      if ( a2 < 0 || (a2 & 3) != 0 )
        goto LABEL_5;
      result = (unsigned int)(a2 >> 2);
      break;
    case 5:
      if ( a2 <= 23 )
        goto LABEL_5;
      v4 = a2 - 24;
      if ( __ROR8__(0xAAAAAAAAAAAAAAABLL * v4, 3) > 0xAAAAAAAAAAAAAAAuLL )
        goto LABEL_5;
      result = (unsigned int)(v4 / 0x18);
      break;
    case 6:
      if ( a2 <= 15 )
        goto LABEL_5;
      v2 = a2 - 16;
      if ( (a2 & 7) != 0 )
        goto LABEL_5;
LABEL_8:
      result = v2 >> 3;
      break;
    default:
LABEL_5:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

