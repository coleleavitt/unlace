__int64 __fastcall sub_3ECDD0(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  int v6; // r12d
  int v7; // ebp
  unsigned __int16 v8; // ax
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // r14d
  unsigned int v12; // esi
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // edx
  unsigned __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // [rsp-10h] [rbp-38h]
  __int64 v23; // [rsp-10h] [rbp-38h]

  v6 = a3;
  v7 = a2;
  v8 = *(_WORD *)(a1 + 48);
  v9 = a1;
  if ( v8 == 831 )
  {
    if ( a3 == -1 )
    {
      v14 = *(_QWORD *)(a1 + 832);
      v11 = 51;
      v6 = **(_DWORD **)(v14 + 696);
      goto LABEL_22;
    }
    goto LABEL_108;
  }
  if ( v8 > 0x33Fu )
  {
    if ( v8 > 0x6D9u )
    {
      v11 = 45;
      if ( v8 == 1756 )
        goto LABEL_14;
      if ( v8 <= 0x6DCu )
      {
        v11 = 50;
        if ( v8 == 1754 )
          v11 = 44;
        goto LABEL_14;
      }
      goto LABEL_8;
    }
    if ( v8 > 0x6D2u )
    {
      v10 = 1LL << ((unsigned __int8)v8 + 45);
      if ( (v10 & 0x13) != 0 )
      {
        v11 = 43;
      }
      else
      {
        if ( (v10 & 0x48) != 0 )
        {
          v11 = 46;
          goto LABEL_14;
        }
        if ( (v10 & 0x24) == 0 )
          goto LABEL_8;
        v11 = 51;
      }
      if ( v8 != 1748 )
      {
LABEL_14:
        if ( !a4 )
          goto LABEL_24;
        goto LABEL_15;
      }
LABEL_59:
      if ( *(_BYTE *)(a1 + 105) == 5 )
      {
        v20 = *(_DWORD *)(a1 + 112) + 32 * (((v8 - 575) & 0xFFFD) == 0);
        if ( v20 <= 63 )
        {
          v21 = *(_QWORD *)(a1 + 832);
          if ( v6 < *(_DWORD *)(v21 + 676) || v6 > *(_DWORD *)(v21 + 688) )
          {
            if ( !under_debugger )
              sub_37E160(0xCD87u, a2, a5);
            goto LABEL_119;
          }
          sub_3EC710(a1, 1LL << v20, 1, v6, *(unsigned __int16 *)(a1 + 890));
          a2 = 20;
          sub_3EAB70(a1, 0x14u, *(unsigned __int16 *)(a1 + 890), v7, v6, v6, 0);
          v14 = *(_QWORD *)(a1 + 832);
          a1 = v23;
          v15 = **(_DWORD **)(v14 + 696);
          v8 = *(_WORD *)(v9 + 48);
          if ( v8 == 831 )
          {
            v7 = v6;
            v6 = **(_DWORD **)(v14 + 696);
            goto LABEL_22;
          }
LABEL_20:
          v7 = v6;
          v6 = v15;
          if ( v8 > 0x33Fu )
          {
            if ( v8 == 833 )
              goto LABEL_22;
            goto LABEL_14;
          }
          goto LABEL_48;
        }
        if ( !under_debugger )
          sub_37E160(0xCD86u, a2, a5);
      }
      else if ( !under_debugger )
      {
        sub_37E160(0xCD85u, a2, a5);
      }
LABEL_119:
      BUG();
    }
    switch ( v8 )
    {
      case 0x6D1u:
        v11 = 50;
        goto LABEL_14;
      case 0x6D2u:
        v11 = 45;
        goto LABEL_14;
      case 0x341u:
        v11 = 50;
        break;
      default:
        if ( v8 > 0x341u )
        {
          if ( (unsigned __int16)(v8 - 1743) <= 1u )
          {
            v11 = 44;
            if ( v8 != 1744 )
              goto LABEL_14;
            goto LABEL_59;
          }
LABEL_8:
          if ( !under_debugger )
            sub_37E160(0xCC1Fu, a2, a5);
          goto LABEL_119;
        }
        v11 = 44;
        break;
    }
    goto LABEL_76;
  }
  if ( v8 > 0xC9u )
  {
    if ( v8 > 0x23Fu )
    {
      if ( v8 <= 0x241u )
      {
        v11 = 43;
        goto LABEL_59;
      }
      if ( v8 != 830 )
        goto LABEL_8;
      v11 = 43;
LABEL_76:
      if ( a3 == -1 )
      {
        v14 = *(_QWORD *)(a1 + 832);
        v6 = a2;
        v15 = **(_DWORD **)(v14 + 696);
        goto LABEL_20;
      }
      goto LABEL_108;
    }
    if ( v8 > 0x23Du )
    {
      v11 = 44;
      goto LABEL_59;
    }
    if ( v8 == 439 )
    {
      v11 = 44;
    }
    else
    {
      if ( v8 != 440 )
        goto LABEL_8;
      v11 = 43;
    }
    if ( (_DWORD)a2 != -1 )
    {
      if ( !under_debugger )
        sub_37E160(0xCCD4u, a2, a5);
      goto LABEL_119;
    }
    v14 = *(_QWORD *)(a1 + 832);
    v7 = *(_DWORD *)(v14 + 452);
    if ( v6 == -1 )
    {
      v6 = **(_DWORD **)(v14 + 696);
      goto LABEL_48;
    }
LABEL_108:
    if ( !under_debugger )
      sub_37E160(0xCC20u, a2, a5);
    goto LABEL_119;
  }
  if ( v8 <= 0x61u )
    goto LABEL_8;
  switch ( *(_WORD *)(a1 + 48) )
  {
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
      v11 = 50;
      goto LABEL_80;
    case 0x66:
    case 0x67:
      if ( a3 != -1 )
        goto LABEL_108;
      v14 = *(_QWORD *)(a1 + 832);
      v6 = a2;
      v11 = 49;
      v15 = **(_DWORD **)(v14 + 696);
      goto LABEL_20;
    case 0x68:
    case 0x69:
      if ( a3 != -1 )
        goto LABEL_108;
      v14 = *(_QWORD *)(a1 + 832);
      v6 = a2;
      v11 = 52;
      v15 = **(_DWORD **)(v14 + 696);
      goto LABEL_20;
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x6D:
      v11 = 51;
      goto LABEL_83;
    case 0x6E:
    case 0x6F:
    case 0xC8:
    case 0xC9:
      v11 = 44;
LABEL_83:
      if ( v8 > 0x6Du )
        goto LABEL_84;
      goto LABEL_80;
    case 0x70:
    case 0x71:
    case 0xC6:
    case 0xC7:
      v11 = 43;
LABEL_84:
      if ( (unsigned __int16)(v8 - 198) > 3u )
        goto LABEL_14;
LABEL_80:
      if ( a3 != -1 )
        goto LABEL_108;
      v14 = *(_QWORD *)(a1 + 832);
      v6 = **(_DWORD **)(v14 + 696);
      break;
    default:
      goto LABEL_8;
  }
LABEL_48:
  if ( v8 > 0x64u )
  {
    if ( (unsigned __int16)(v8 - 107) > 1u )
      goto LABEL_14;
  }
  else if ( v8 <= 0x62u )
  {
    goto LABEL_14;
  }
LABEL_22:
  v16 = **(_DWORD **)(v14 + 728);
  if ( *(_QWORD *)(v9 + 416) == -1 )
    sub_3E53B0(a5, a1, a2);
  a1 = v9;
  a2 = *(_QWORD *)(v9 + 440) + *(unsigned __int16 *)(v9 + 450);
  sub_3ECCE0(v9, a2, v16);
  if ( !a4 )
  {
LABEL_24:
    v17 = *(_WORD *)(v9 + 48);
    if ( v17 <= 0xC9u )
    {
      if ( v17 <= 0xC5u )
      {
        switch ( *(_WORD *)(v9 + 48) )
        {
          case 'R':
          case 'S':
          case 'T':
          case 'U':
          case 'V':
          case 'W':
          case 'X':
          case 'Y':
          case 'Z':
          case '[':
          case '\\':
          case ']':
          case '^':
          case '_':
          case '`':
          case 'a':
            v18 = *(_BYTE *)(v9 + 105) != 0;
            goto LABEL_28;
          case 'b':
          case 'c':
          case 'd':
          case 'e':
          case 'f':
          case 'g':
          case 'h':
          case 'i':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
            goto LABEL_30;
          case 'n':
          case 'o':
          case 'p':
          case 'q':
            goto LABEL_32;
          case 's':
          case 'u':
          case 'v':
            goto LABEL_39;
          default:
            goto LABEL_73;
        }
      }
      goto LABEL_30;
    }
    if ( v17 > 0x341u )
    {
      if ( v17 == 1739 )
        goto LABEL_32;
      if ( v17 <= 0x6CBu )
      {
        if ( (unsigned __int16)(v17 - 1736) <= 1u )
        {
          v18 = 0;
          goto LABEL_28;
        }
      }
      else if ( (unsigned __int16)(v17 - 1743) <= 0xDu )
      {
        goto LABEL_32;
      }
    }
    else
    {
      if ( v17 > 0x33Du )
      {
LABEL_30:
        v18 = 1;
LABEL_28:
        v19 = v9 + 40 * v18;
        if ( *(_BYTE *)(v19 + 65) != 7 )
          sub_3E5390(a5, a1, a2);
        sub_3EAB70(v9, v11, *(_DWORD *)(*(_QWORD *)(v9 + 832) + 80LL), v7, v6, *(_QWORD *)(v19 + 80), 0);
        return v22;
      }
      if ( v17 <= 0x241u )
      {
        if ( v17 <= 0x23Du )
        {
          if ( v17 <= 0xCBu || (unsigned __int16)(v17 - 439) <= 1u )
          {
LABEL_39:
            v18 = 0;
            goto LABEL_28;
          }
          goto LABEL_73;
        }
LABEL_32:
        v18 = 2;
        goto LABEL_28;
      }
      if ( v17 == 821 )
      {
        v18 = 0;
        goto LABEL_28;
      }
    }
LABEL_73:
    if ( !under_debugger )
      sub_37E160(0xCC4Fu, a2, a5);
    goto LABEL_119;
  }
LABEL_15:
  v12 = v11 - 11;
  if ( a4 == 2 )
    v12 = sub_329AA0(v12);
  return sub_3EAB70(
           v9,
           v12,
           *(_DWORD *)(*(_QWORD *)(v9 + 832) + 80LL),
           v7,
           v6,
           *(int *)(*(_QWORD *)(v9 + 832) + 352LL),
           0);
}
