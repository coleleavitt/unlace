__int64 __fastcall sub_1CAB0(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  __int16 v6; // ax
  __int64 v7; // rax
  __int16 v8; // cx
  __int64 result; // rax
  int v10; // esi
  int v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  unsigned __int16 *v14; // rcx
  char v15; // al
  __int16 v16; // cx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdi
  int v20; // r12d
  __int64 first_seg; // rax
  char v22; // cl
  unsigned __int16 v23; // cx
  __int64 v24; // rax
  unsigned int v25; // [rsp+Ch] [rbp-1Ch]

  v6 = *(_WORD *)(a2 + 24);
  if ( v6 != 78 )
  {
    if ( v6 == 79 )
    {
      *(_DWORD *)(a2 + 28) |= 2u;
      if ( (unsigned int)(*(_DWORD *)(a1 + 184) - 2) <= 1 )
      {
        sub_1C8E0(a1, a2, a3);
        return 1;
      }
      v7 = a3 & 0x1FFFFFF;
    }
    else if ( v6 == 77 )
    {
      v7 = a3 & 0x1FFFFFF;
      if ( (unsigned int)(*(_DWORD *)(a1 + 184) - 4) <= 1 )
      {
        if ( (_DWORD)v7 == 56 )
        {
          *(_WORD *)(a2 + 24) = 511;
          return 1;
        }
        if ( (_DWORD)v7 == 57 )
        {
          *(_WORD *)(a2 + 24) = 509;
          return 1;
        }
      }
      v8 = word_58AE0[a3 & 0x3F];
      if ( v8 )
      {
        *(_WORD *)(a2 + 24) = v8;
        if ( v8 == 506 )
        {
          *(_BYTE *)(a2 + 41) = 5;
          v12 = (a3 >> 6) & 0x7FFFF;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = v12;
          if ( !v12 )
            *(_BYTE *)(a2 + 44) &= ~8u;
        }
        return 1;
      }
    }
    else
    {
      v7 = a3 & 0x1FFFFFF;
    }
    *(_BYTE *)(a2 + 41) = 5;
    *(_BYTE *)(a2 + 45) = 2;
    *(_QWORD *)(a2 + 48) = v7;
    return 1;
  }
  v10 = *(_DWORD *)(a2 + 28) | 1;
  v11 = (a3 >> 21) & 0x1F;
  *(_DWORD *)(a2 + 28) = v10;
  if ( (unsigned int)(*(_DWORD *)(a1 + 184) - 4) > 1 )
  {
    switch ( v11 )
    {
      case 16:
        v14 = (unsigned __int16 *)&unk_58960;
        v15 = 115;
        goto LABEL_30;
      case 17:
        v14 = (unsigned __int16 *)&unk_588E0;
        v15 = 100;
        goto LABEL_30;
      case 20:
        v14 = (unsigned __int16 *)&unk_58860;
        v15 = 119;
        goto LABEL_30;
      case 21:
        v14 = (unsigned __int16 *)&unk_58860;
        v15 = 108;
        goto LABEL_30;
      case 22:
        v14 = (unsigned __int16 *)&unk_587E0;
        v15 = 112;
LABEL_30:
        *(_BYTE *)(a2 + 32) = v15;
        v13 = v14[a3 & 0x3F];
        *(_WORD *)(a2 + 24) = v13;
        goto LABEL_31;
      default:
        return 0;
    }
  }
  v13 = word_589E0[a3 & 0x3F];
  *(_WORD *)(a2 + 24) = v13;
  if ( v11 != 16 )
  {
    if ( v11 == 20 )
    {
      *(_BYTE *)(a2 + 32) = 119;
      if ( (_WORD)v13 == 163 )
      {
LABEL_23:
        if ( (*(_BYTE *)(a1 + 188) & 2) == 0 || (a3 & 0x1F0000) == 0 )
          goto LABEL_25;
      }
    }
    return 0;
  }
  if ( (_WORD)v13 == 163 )
    return 0;
  *(_BYTE *)(a2 + 32) = 115;
LABEL_31:
  if ( (unsigned __int16)v13 > 0xE5u )
  {
    if ( (unsigned __int16)v13 > 0x203u )
    {
      if ( (unsigned __int16)v13 <= 0x213u )
      {
        if ( (unsigned __int16)v13 <= 0x20Fu )
          goto LABEL_49;
        goto LABEL_52;
      }
      v23 = v13 - 787;
      if ( v23 > 0x1Bu )
        goto LABEL_49;
      v24 = 1LL << v23;
      if ( ((1LL << v23) & 0xA800001) != 0 )
      {
LABEL_52:
        *(_BYTE *)(a2 + 121) = 9;
        *(_BYTE *)(a2 + 125) = 2;
        *(_WORD *)(a2 + 153) = 260;
        *(_WORD *)(a2 + 126) = BYTE2(a3) & 0x1F;
LABEL_25:
        *(_BYTE *)(a2 + 41) = 9;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 73) = 260;
        *(_WORD *)(a2 + 46) = (a3 >> 6) & 0x1F;
        *(_BYTE *)(a2 + 81) = 9;
        *(_WORD *)(a2 + 86) = (unsigned __int16)a3 >> 11;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 113) = 260;
LABEL_26:
        *(_DWORD *)(a2 + 28) = v10 | 4;
        return 1;
      }
      if ( (v24 & 0x5000000) != 0 )
        goto LABEL_23;
      if ( (v24 & 0x600000) == 0 )
        goto LABEL_49;
    }
    else if ( (unsigned __int16)v13 <= 0x201u )
    {
      if ( (unsigned __int16)v13 <= 0x142u )
      {
        if ( (unsigned __int16)v13 > 0x13Du )
        {
LABEL_42:
          if ( (*(_BYTE *)(a1 + 188) & 2) != 0 )
          {
            if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 792) > 0xFu )
            {
              if ( (a3 & 0xC0) != 0 )
                return 0;
            }
            else if ( (a3 & 0x80u) != 0 )
            {
              return 0;
            }
          }
          v16 = (unsigned __int16)a3 >> 11;
          v17 = HIWORD(a3) & 0x1F;
          if ( (a3 & 0x700) != 0 || (unsigned __int16)(*(_WORD *)(a2 + 24) - 792) <= 0xFu )
          {
            *(_BYTE *)(a2 + 41) = 11;
            *(_BYTE *)(a2 + 81) = 9;
            *(_WORD *)(a2 + 46) = (a3 >> 8) & 7;
            *(_WORD *)(a2 + 86) = v16;
            *(_BYTE *)(a2 + 85) = 2;
            *(_WORD *)(a2 + 113) = 260;
            *(_BYTE *)(a2 + 121) = 9;
            *(_WORD *)(a2 + 126) = v17;
            *(_BYTE *)(a2 + 125) = 2;
            *(_WORD *)(a2 + 153) = 260;
          }
          else
          {
            *(_BYTE *)(a2 + 41) = 9;
            *(_WORD *)(a2 + 46) = v16;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 73) = 260;
            *(_BYTE *)(a2 + 81) = 9;
            *(_WORD *)(a2 + 86) = v17;
            *(_BYTE *)(a2 + 85) = 2;
            *(_WORD *)(a2 + 113) = 260;
          }
          goto LABEL_26;
        }
LABEL_49:
        sub_1C8A0(a2, a4);
      }
      if ( (unsigned __int16)v13 > 0x146u && (_WORD)v13 != 513 )
        goto LABEL_49;
      goto LABEL_52;
    }
    *(_BYTE *)(a2 + 32) = 0;
    goto LABEL_23;
  }
  if ( (unsigned __int16)v13 <= 0x9Du )
  {
    if ( !(_WORD)v13 )
      return 0;
    goto LABEL_49;
  }
  switch ( v13 )
  {
    case 158:
    case 159:
    case 160:
    case 161:
      goto LABEL_52;
    case 162:
    case 163:
    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 173:
    case 174:
    case 175:
    case 176:
    case 177:
    case 228:
    case 229:
      goto LABEL_23;
    case 178:
    case 179:
    case 180:
    case 181:
    case 182:
    case 183:
    case 184:
    case 185:
    case 186:
    case 187:
    case 188:
    case 189:
    case 190:
    case 191:
    case 192:
    case 193:
      if ( (a3 & 0x40) != 0 )
        *(_WORD *)(a2 + 24) = v13 + 614;
      goto LABEL_42;
    case 220:
      if ( (a3 & 0x10000) == 0 )
        *(_WORD *)(a2 + 24) = 219;
      *(_BYTE *)(a2 + 121) = 11;
      *(_WORD *)(a2 + 126) = (a3 >> 18) & 7;
      goto LABEL_25;
    case 221:
    case 222:
      *(_BYTE *)(a2 + 121) = 1;
      v18 = *(_DWORD *)(a1 + 120);
      v19 = *(_QWORD *)(a2 + 16);
      v20 = HIWORD(a3) & 0x1F;
      if ( v18 > 5 )
        goto LABEL_84;
      if ( ((1LL << v18) & 0x16) != 0 )
      {
        v22 = 7;
LABEL_61:
        *(_BYTE *)(a2 + 125) = v22;
        *(_WORD *)(a2 + 126) = v20;
        goto LABEL_25;
      }
      if ( ((1LL << v18) & 0x29) == 0 )
        goto LABEL_84;
      v25 = a3;
      if ( v19 == -1 )
        first_seg = get_first_seg();
      else
        first_seg = getseg(v19);
      a3 = v25;
      if ( first_seg )
      {
        v10 = *(_DWORD *)(a2 + 28);
        v22 = 7;
        if ( *(_BYTE *)(first_seg + 43) != 2 )
          v22 = (unsigned int)(*(_DWORD *)(a1 + 184) - 4) < 2 ? 7 : 2;
        goto LABEL_61;
      }
      if ( under_debugger )
        goto LABEL_105;
      interr(10206);
LABEL_84:
      if ( under_debugger )
LABEL_105:
        BUG();
      interr(10339);
      switch ( v10 )
      {
        case -33:
          result = (__int64)&unk_58360;
          break;
        case -31:
          result = (__int64)&unk_584A0;
          break;
        case -30:
          result = (__int64)&unk_584E0;
          break;
        case -29:
          result = (__int64)&unk_58520;
          break;
        case -28:
          result = (__int64)&unk_58420;
          break;
        case -27:
          result = (__int64)&unk_58560;
          break;
        case -26:
          result = (__int64)&unk_58460;
          break;
        case -25:
          result = (__int64)&unk_585E0;
          break;
        case -24:
          result = (__int64)&unk_58660;
          break;
        case -23:
          result = (__int64)&unk_586E0;
          break;
        case -22:
          result = (__int64)&unk_58760;
          break;
        case -21:
          result = (__int64)&unk_58620;
          break;
        case -20:
          result = (__int64)&unk_586A0;
          break;
        case -19:
          result = (__int64)&unk_58720;
          break;
        case -18:
          result = (__int64)&unk_587A0;
          break;
        case -17:
          result = (__int64)&unk_585A0;
          break;
        case -9:
          result = (__int64)&unk_58CE0;
          break;
        case -8:
          result = 0x69D680000000000LL;
          break;
        default:
          result = 0;
          break;
      }
      break;
    default:
      goto LABEL_49;
  }
  return result;
}
