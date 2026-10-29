__int64 __fastcall sub_86B8E0(unsigned int *a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v7; // rsi

  v6 = *a1;
  if ( *a1 )
    return v6;
  a1[36] = 0;
  if ( a5 <= 126 && a3 == a5 )
  {
    v7 = (unsigned int)(a2 - 33);
    goto LABEL_5;
  }
  if ( a5 == 127 )
  {
    switch ( a2 )
    {
      case '!':
        a6 = (unsigned __int8)a6;
LABEL_24:
        if ( (unsigned int)sub_86B170(a1, 0, a3, a4, a5, a6) )
          return *a1;
        break;
      case '"':
        a6 = (char)a6;
LABEL_21:
        if ( (unsigned int)sub_86B170(a1, 1, a3, a4, a5, a6) )
          return *a1;
        break;
      case '#':
        a6 = (unsigned __int16)a6;
LABEL_18:
        if ( (unsigned int)sub_86B050(a1, 0, a3, a4, a5, a6) )
          return *a1;
        break;
      case '$':
        a6 = (__int16)a6;
LABEL_15:
        if ( (unsigned int)sub_86B050(a1, 1, a3, a4, a5, a6) )
          return *a1;
        break;
      case '%':
        a6 = (unsigned int)a6;
LABEL_12:
        if ( (unsigned int)sub_868D40(a1, 0, a3, a4, a5, a6) )
          return *a1;
        break;
      case '&':
        a6 = (int)a6;
LABEL_7:
        if ( (unsigned int)sub_868D40(a1, 1, a3, a4, a5, a6) )
          return *a1;
        break;
      default:
        goto LABEL_27;
    }
  }
  else
  {
    v7 = (unsigned int)(a2 - 33);
    if ( (unsigned int)v7 <= 5 )
    {
LABEL_5:
      switch ( v7 )
      {
        case 0LL:
          goto LABEL_24;
        case 1LL:
          goto LABEL_21;
        case 2LL:
          goto LABEL_18;
        case 3LL:
          goto LABEL_15;
        case 4LL:
          goto LABEL_12;
        case 5LL:
          goto LABEL_7;
        default:
          return v6;
      }
      return v6;
    }
LABEL_27:
    if ( (unsigned int)sub_868510(a1, a3, a4, a5, a6) )
      return *a1;
  }
  return v6;
}
