__int64 __fastcall sub_78F9F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rbp
  _DWORD *v7; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 7) != 0 )
    return 0;
  v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  v4 = sub_77F000(a1, 0);
  if ( v4 <= 0x39C )
  {
    if ( v4 > 0x38E )
    {
      switch ( v4 )
      {
        case 0x38Fu:
          return 911;
        case 0x390u:
        case 0x391u:
        case 0x398u:
          return 913;
        case 0x392u:
        case 0x393u:
        case 0x399u:
          return 915;
        case 0x394u:
        case 0x395u:
        case 0x39Cu:
          return 917;
        case 0x39Au:
        case 0x39Bu:
          return 922;
        default:
          goto LABEL_13;
      }
    }
    if ( v4 > 0xDD )
    {
      if ( v4 == 635 )
        return 635;
    }
    else if ( v4 > 0xB2 )
    {
      switch ( v4 )
      {
        case 0xB3u:
        case 0xCBu:
          return 179;
        case 0xB7u:
        case 0xB8u:
          return 184;
        case 0xB9u:
        case 0xBAu:
          return 186;
        case 0xDBu:
          return 911;
        case 0xDDu:
          return 922;
        default:
          break;
      }
    }
LABEL_13:
    if ( (unsigned __int8)sub_78F820(a1) )
    {
      v5 = *(_QWORD *)(v3 + 16);
      v6 = *(_QWORD *)v5;
      if ( (unsigned int)*(_QWORD *)v5 == 6 )
      {
        if ( *(_DWORD *)(v5 + 16) == 1936549229 && *(_WORD *)(v5 + 20) == 29797 )
          return 917;
        if ( *(_DWORD *)(v5 + 16) == 1668113773 && *(_WORD *)(v5 + 20) == 31088 )
          return 913;
      }
      if ( sub_7791E0((_DWORD *)v5, "mempcpy") )
        return 922;
      if ( sub_7791E0((_DWORD *)v5, "memmove") )
        return 915;
      if ( (_DWORD)v6 == 6 )
      {
        if ( *(_DWORD *)(v5 + 16) == 1668113773 && *(_WORD *)(v5 + 20) == 28781 )
          return 911;
      }
      else if ( (_DWORD)v6 == 4 && *(_DWORD *)(v5 + 16) == 1886217058 )
      {
        return 179;
      }
      if ( sub_7791E0((_DWORD *)v5, "strncpy") )
        return 1213;
      if ( sub_7791E0((_DWORD *)v5, "strncmp") )
        return 1211;
      if ( (_DWORD)v6 == 11 && !memcmp((const void *)(v5 + 16), "strncasecmp", 0xBu) )
        return 1234;
      if ( sub_7791E0((_DWORD *)v5, "strncat") )
        return 1209;
      if ( sub_7791E0((_DWORD *)v5, "strndup") )
        return 1236;
      if ( (_DWORD)v6 == 6 && !memcmp((const void *)(v5 + 16), "strlen", 6u) )
        return 1207;
      if ( sub_7791A0(v5, (__int64)"bzero") )
        return 184;
      if ( sub_7791A0(v5, (__int64)"bcopy") )
        return 186;
      return 0;
    }
    if ( !(unsigned __int8)sub_79C450(a1) )
      return 0;
    v7 = *(_DWORD **)(v3 + 16);
    if ( *v7 != 4 || v7[4] != 1701147238 )
      return 0;
    return 635;
  }
  switch ( v4 )
  {
    case 0x4B6u:
    case 0x4B7u:
      return 1207;
    case 0x4B8u:
    case 0x4B9u:
    case 0x4D5u:
      return 1209;
    case 0x4BAu:
    case 0x4BBu:
      return 1211;
    case 0x4BCu:
    case 0x4BDu:
    case 0x4D6u:
      return 1213;
    case 0x4CDu:
    case 0x4CFu:
      result = 1229;
      break;
    case 0x4CEu:
    case 0x4D0u:
      result = 1230;
      break;
    case 0x4D1u:
    case 0x4D2u:
      return 1234;
    case 0x4D3u:
    case 0x4D4u:
      return 1236;
    default:
      goto LABEL_13;
  }
  return result;
}

