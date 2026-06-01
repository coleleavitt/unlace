__int64 __fastcall dwarf_get_form_class(unsigned __int16 a1, int a2, __int16 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r8

  if ( (unsigned __int16)a4 > 0x2Cu )
  {
    result = 10;
    if ( (_WORD)a4 != 7968 )
    {
      if ( (unsigned __int16)a4 > 0x1F20u )
      {
        result = 0;
        if ( (_WORD)a4 == 7969 )
          return 11;
      }
      else
      {
        result = 1;
        if ( (_WORD)a4 != 7937 )
        {
          result = 0;
          if ( (_WORD)a4 == 7938 )
            return 11;
        }
      }
    }
  }
  else if ( (_WORD)a4 )
  {
    switch ( a4 )
    {
      case 1LL:
      case 27LL:
      case 41LL:
      case 42LL:
      case 43LL:
      case 44LL:
        return 1;
      case 3LL:
      case 4LL:
      case 9LL:
      case 10LL:
        result = 2;
        if ( a1 > 3u )
          return result;
        if ( (unsigned __int16)a2 > 0x46u )
        {
          if ( (unsigned __int16)a2 > 0x86u )
          {
            result = 2 * (unsigned int)((a2 & 0xFFFD) == 8465) + 2;
          }
          else if ( (_WORD)a2 != 71 )
          {
            v5 = 0x78C00200000003E5LL;
            v6 = (unsigned int)(a2 - 72);
            return _bittest64(&v5, v6) == 0 ? 2 : 4;
          }
        }
        else
        {
          if ( (unsigned __int16)a2 > 0xAu )
          {
            v5 = 0x820301880804005LL;
            v6 = (unsigned int)(a2 - 11);
            return _bittest64(&v5, v6) == 0 ? 2 : 4;
          }
          result = 2 * (unsigned int)((_WORD)a2 == 2) + 2;
        }
        break;
      case 5LL:
      case 11LL:
      case 13LL:
      case 15LL:
      case 30LL:
      case 33LL:
        return 3;
      case 6LL:
        if ( a1 > 3u || a3 != 4 )
          return 3;
        goto LABEL_20;
      case 7LL:
        if ( a1 > 3u || a3 != 8 )
          return 3;
LABEL_20:
        result = sub_4FE70((unsigned __int16)a2, a1);
        if ( !(_DWORD)result )
          return 3;
        return result;
      case 8LL:
      case 14LL:
      case 26LL:
      case 29LL:
      case 31LL:
      case 37LL:
      case 38LL:
      case 39LL:
        return 11;
      case 12LL:
      case 25LL:
        return 5;
      case 16LL:
      case 17LL:
      case 18LL:
      case 19LL:
      case 20LL:
      case 21LL:
      case 32LL:
        return 10;
      case 23LL:
        return sub_4FE70((unsigned __int16)a2, a1);
      case 24LL:
        return 4;
      case 34LL:
        return 15;
      case 35LL:
        return 17;
      default:
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return result;
}

