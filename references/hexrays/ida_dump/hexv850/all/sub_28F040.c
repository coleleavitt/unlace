__int64 __fastcall sub_28F040(__int64 a1, __int64 a2)
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
          if ( !(unsigned __int8)sub_28CB10(a2) )
            goto LABEL_30;
          goto LABEL_31;
        case '#':
        case '$':
          if ( (unsigned __int8)sub_28A580(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '%':
          if ( sub_287470(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '&':
        case '\'':
LABEL_30:
          if ( sub_285730(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '0':
          if ( (unsigned __int8)sub_28D500(a1, a2) || (unsigned __int8)sub_28AEF0(a1, a2) )
            goto LABEL_31;
          tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 48), 2);
          if ( ((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 2) & 0xF) == 9) != ((tinfo_property & 0xF) == 9) )
            goto LABEL_6;
          if ( (unsigned __int8)sub_28C1E0(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28B030(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28B560(a1, (__int64 *)a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28DA10(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28E020(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28E250(a1, a2) )
            goto LABEL_31;
          if ( (unsigned __int8)sub_28E5F0(a1, a2) )
            goto LABEL_31;
          v7 = sub_28D690(a1, a2);
          if ( v7 )
            goto LABEL_31;
          v8 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 3);
          v13 = get_tinfo_property(*(_QWORD *)(a2 + 48), 3);
          v9 = 8 * get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
          v10 = sub_2805B0(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
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
              if ( (unsigned int)sub_280F00(a1, a2, tinfo_size, v7, 0) )
                goto LABEL_6;
            }
          }
          else if ( v8 != 1 || v13 != 1 || (__int16)v10 - (v10 >> 16) > v9 )
          {
            goto LABEL_6;
          }
          if ( !(unsigned __int8)sub_28C2C0(a1, (__int64 *)a2)
            && !(unsigned __int8)sub_28CF20(a1, (__int64 *)a2)
            && !(unsigned __int8)sub_28BF60(a1, a2) )
          {
            goto LABEL_6;
          }
          break;
        case '1':
          if ( (unsigned __int8)sub_288240(a1, (__int64 *)a2)
            || (unsigned __int8)sub_2882F0(a1, a2)
            || (unsigned __int8)sub_288620(a1, a2)
            || (unsigned __int8)sub_288720(a1, a2) )
          {
            goto LABEL_31;
          }
          goto LABEL_6;
        case '3':
          if ( (unsigned __int8)sub_287680((__int64 *)a2)
            || (unsigned __int8)sub_28CB90(a1, (__int64 *)a2)
            || (unsigned __int8)sub_284EE0((_QWORD *)a1, a2) )
          {
            goto LABEL_31;
          }
          goto LABEL_6;
        case '4':
          if ( (unsigned __int8)sub_289DE0((_QWORD *)a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '9':
          if ( (unsigned __int8)sub_2876E0(a1, (__int64 *)a2) || (unsigned __int8)sub_287D80(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case ':':
          if ( (unsigned __int8)sub_28C120(a1, a2) )
            goto LABEL_31;
          goto LABEL_6;
        case ';':
          if ( (unsigned __int8)sub_28EFA0(a2) )
            goto LABEL_31;
          goto LABEL_6;
        case '=':
          if ( (unsigned __int8)sub_288830(a1, a2)
            || (unsigned __int8)sub_28F730(a1, a2)
            || (unsigned __int8)sub_28FA20(a1, a2)
            || (unsigned __int8)sub_28D3C0((_QWORD *)a1, a2) )
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
      if ( !(unsigned __int8)sub_289F30(a1, a2) )
        goto LABEL_6;
    }
    else if ( ((1LL << v3) & 0xC00000) != 0 )
    {
      if ( !(unsigned __int8)sub_287260(a1, a2) && !(unsigned __int8)sub_2884F0(a1, a2) )
        goto LABEL_6;
    }
    else if ( v3 != 21
           || !(unsigned __int8)sub_28AE30(a1, a2)
           && !(unsigned __int8)sub_285350(a1, a2)
           && !(unsigned __int8)sub_2884F0(a1, a2)
           && !(unsigned __int8)sub_288690(a1, a2)
           && !(unsigned __int8)sub_28A2D0((_QWORD *)a1, a2) )
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
          sub_37CFE0(50612);
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
        if ( (unsigned __int8)sub_288010(a1, a2) )
          goto LABEL_31;
        break;
      case 2:
        if ( !(unsigned __int8)sub_28D7A0(a1, a2)
          && !(unsigned __int8)sub_240000(a2, *(_QWORD *)(a1 + 72))
          && !(unsigned __int8)sub_28E7F0(a1, a2) )
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
        if ( (unsigned __int8)sub_28BA70(*(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), a2)
          || (unsigned __int8)sub_28A8A0(a1, a2) )
        {
          goto LABEL_31;
        }
        break;
      case 0x10:
        if ( !(unsigned __int8)sub_28A6B0(a1, a2) )
          break;
        goto LABEL_31;
      case 0x13:
        if ( (unsigned __int8)sub_28D930(a1, a2)
          || (unsigned __int8)sub_288690(a1, a2)
          || (unsigned __int8)sub_285350(a1, a2) )
        {
          goto LABEL_31;
        }
        break;
      case 0x14:
        if ( (unsigned __int8)sub_2884F0(a1, a2) || (unsigned __int8)sub_28A4F0(a1, a2) )
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
