__int64 __fastcall sub_294400(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  int v4; // eax
  char tinfo_property; // r13
  unsigned __int8 v7; // r13
  int v8; // r14d
  int v9; // r15d
  int v10; // eax
  int v11; // r8d
  int tinfo_size; // eax
  int v13; // [rsp+8h] [rbp-40h]
  int v14; // [rsp+8h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 8) & 8;
  if ( v2 )
    goto LABEL_33;
  while ( 1 )
  {
    v3 = *(_DWORD *)(a2 + 8);
    if ( v3 > 0x3D )
      goto LABEL_6;
    if ( v3 > 0x1F )
    {
      switch ( v3 )
      {
        case ' ':
        case '!':
        case '"':
          if ( !(unsigned __int8)sub_291ED0(a2) )
            goto LABEL_30;
          goto LABEL_31;
        case '#':
        case '$':
          if ( (unsigned __int8)sub_28F940(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '%':
          if ( sub_28C830(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '&':
        case '\'':
LABEL_30:
          if ( sub_28AAF0(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '0':
          if ( (unsigned __int8)sub_2928C0(a1, a2) || (unsigned __int8)sub_2902B0(a1, a2) )
            goto LABEL_31;
          tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 48), 2);
          if ( ((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 2) & 0xF) == 9) != ((tinfo_property & 0xF) == 9) )
            goto LABEL_6;
          if ( (unsigned __int8)sub_2915A0(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_2903F0(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_290920(a1, (__int64 *)a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_292DD0(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_2933E0(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_293610(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_2939B0(a1, a2) )
            goto LABEL_31;
          v7 = sub_292A50(a1, a2);
          if ( v7 )
            goto LABEL_31;
          v8 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 3);
          v13 = get_tinfo_property(*(_QWORD *)(a2 + 48), 3);
          v9 = 8 * get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
          v10 = sub_285970(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
          v11 = v13;
          if ( (__int16)v10 <= v9 )
          {
            v14 = (__int16)v10;
            if ( v8 != v11 )
            {
              tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 0);
              if ( v14 == v9 )
              {
                v7 = 1;
              }
              else if ( v8 == 1 )
              {
                v7 = 8 * tinfo_size == v14;
              }
              if ( (unsigned int)sub_2862C0(a1, a2, tinfo_size, v7, 0) )
                goto LABEL_6;
            }
          }
          else if ( v8 != 1 || v13 != 1 || (__int16)v10 - (v10 >> 16) > v9 )
          {
            goto LABEL_6;
          }
          if ( !(unsigned __int8)sub_291680(a1, (__int64 *)a2)
            && !(unsigned __int8)sub_2922E0(a1, (__int64 *)a2)
            && !(unsigned __int8)sub_291320(a1, a2) )
          {
            goto LABEL_6;
          }
          break;
        case '1':
          if ( (unsigned __int8)sub_28D600(a1, (__int64 *)a2)
            || (unsigned __int8)sub_28D6B0(a1, a2)
            || (unsigned __int8)sub_28D9E0(a1, a2)
            || (unsigned __int8)sub_28DAE0(a1, a2) )
          {
            goto LABEL_31;
          }
          goto LABEL_6;
        case '3':
          if ( (unsigned __int8)sub_28CA40((__int64 *)a2)
            || (unsigned __int8)sub_291F50(a1, (__int64 *)a2)
            || (unsigned __int8)sub_28A2A0((_QWORD *)a1, a2) )
          {
            goto LABEL_31;
          }
          goto LABEL_6;
        case '4':
          if ( (unsigned __int8)sub_28F1A0((_QWORD *)a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '9':
          if ( (unsigned __int8)sub_28CAA0(a1, (__int64 *)a2) || (unsigned __int8)sub_28D140(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case ':':
          if ( (unsigned __int8)sub_2914E0(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case ';':
          if ( (unsigned __int8)sub_294360(a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '=':
          if ( (unsigned __int8)sub_28DBF0(a1, a2)
            || (unsigned __int8)sub_294AF0(a1, a2)
            || (unsigned __int8)sub_294DE0(a1, a2)
            || (unsigned __int8)sub_292780((_QWORD *)a1, a2) )
          {
            goto LABEL_31;
          }
          goto LABEL_6;
        default:
          goto LABEL_6;
      }
      goto LABEL_31;
    }
    if ( v3 <= 0x14 )
      break;
    if ( v3 == 31 )
      goto LABEL_6;
    if ( ((1LL << v3) & 0x55000000) != 0 )
    {
      if ( !(unsigned __int8)sub_28F2F0(a1, a2) )
        goto LABEL_6;
    }
    else if ( ((1LL << v3) & 0xC00000) != 0 )
    {
      if ( !(unsigned __int8)sub_28C620(a1, a2) && !(unsigned __int8)sub_28D8B0(a1, a2) )
        goto LABEL_6;
    }
    else if ( v3 != 21
           || !(unsigned __int8)sub_2901F0(a1, a2)
           && !(unsigned __int8)sub_28A710(a1, a2)
           && !(unsigned __int8)sub_28D8B0(a1, a2)
           && !(unsigned __int8)sub_28DA50(a1, a2)
           && !(unsigned __int8)sub_28F690((_QWORD *)a1, a2) )
    {
      goto LABEL_6;
    }
LABEL_31:
    v4 = *(_DWORD *)(a1 + 8);
    ++v2;
    if ( (v4 & 8) != 0 )
    {
      if ( !v2 )
      {
LABEL_33:
        if ( !under_debugger )
          sub_383060(50612);
        BUG();
      }
      goto LABEL_8;
    }
  }
  if ( v3 )
  {
    switch ( *(_DWORD *)(a2 + 8) )
    {
      case 1:
        if ( (unsigned __int8)sub_28D3D0(a1, a2) )
          goto LABEL_31;
        break;
      case 2:
        if ( !(unsigned __int8)sub_292B60(a1, a2)
          && !(unsigned __int8)sub_2453C0(a2, *(_QWORD *)(a1 + 72))
          && !(unsigned __int8)sub_293BB0(a1, a2) )
        {
          goto LABEL_26;
        }
        goto LABEL_31;
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
LABEL_26:
        if ( (unsigned __int8)sub_290E30(*(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), a2)
          || (unsigned __int8)sub_28FC60(a1, a2) )
        {
          goto LABEL_31;
        }
        break;
      case 0x10:
        if ( !(unsigned __int8)sub_28FA70(a1, a2) )
          break;
        goto LABEL_31;
      case 0x13:
        if ( (unsigned __int8)sub_292CF0(a1, a2)
          || (unsigned __int8)sub_28DA50(a1, a2)
          || (unsigned __int8)sub_28A710(a1, a2) )
        {
          goto LABEL_31;
        }
        break;
      case 0x14:
        if ( (unsigned __int8)sub_28D8B0(a1, a2) || (unsigned __int8)sub_28F8B0(a1, a2) )
          goto LABEL_31;
        break;
      default:
        break;
    }
  }
LABEL_6:
  if ( v2 )
  {
    v4 = *(_DWORD *)(a1 + 8);
LABEL_8:
    *(_DWORD *)(a1 + 8) = v4 | 8;
  }
  return v2;
}
