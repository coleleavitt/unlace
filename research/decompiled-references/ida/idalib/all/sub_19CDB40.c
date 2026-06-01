unsigned __int64 __fastcall sub_19CDB40(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  unsigned __int16 v5; // ax
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // esi
  int v13; // edx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int16 v18; // cx

LABEL_1:
  v3 = a1;
  v4 = a2;
  while ( 2 )
  {
    while ( 2 )
    {
      v5 = *(_WORD *)v4 & 0x1FF;
      if ( v5 <= 0x75u )
      {
        if ( v5 == 4 )
        {
          switch ( *(_BYTE *)(v4 + 2) >> 3 )
          {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
              return (unsigned int)sub_BFE6E0(v4, *(_QWORD *)v3, 2, a3) != 0;
            case 12:
              v4 = sub_BFB9F0(*(_QWORD *)(v4 + 16));
              continue;
            case 13:
              return (unsigned int)sub_BFE6E0(v4, *(_QWORD *)v3, 2, a3) != 0;
            default:
              goto LABEL_7;
          }
        }
      }
      else if ( v5 <= 0x77u )
      {
        switch ( (*(_WORD *)(v4 + 2) >> 3) & 0x3F )
        {
          case 0:
          case 1:
          case 2:
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
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
            return (unsigned int)sub_BFE6E0(v4, *(_QWORD *)v3, 2, a3) != 0;
          case 0x20:
            v4 = sub_BFB9F0(*(_QWORD *)(v4 + 24));
            continue;
          default:
            goto LABEL_7;
        }
      }
      break;
    }
LABEL_7:
    switch ( v5 )
    {
      case 0u:
      case 1u:
      case 2u:
        return 0;
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Eu:
      case 0x1Fu:
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x5Eu:
      case 0x5Fu:
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
      case 0x66u:
      case 0x67u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
      case 0x74u:
      case 0x75u:
      case 0x76u:
      case 0x77u:
        return (unsigned int)sub_BFE6E0(v4, *(_QWORD *)v3, 2, a3) != 0;
      case 0xAu:
        v14 = *(_QWORD *)(v4 + 16);
        v4 = 0;
        v15 = *(_DWORD *)(v14 + 4);
        if ( v15 )
          v4 = *(_QWORD *)(v14 + 8LL * (unsigned int)(v15 - 1) + 16);
        continue;
      case 0x11u:
        v16 = *(unsigned __int16 *)(v4 + 6);
        if ( (_WORD)v16 )
          v17 = *(_QWORD *)(v4 + 8 * v16 + 16);
        else
          v17 = 0;
        v4 = sub_BFB9F0(v17);
        continue;
      case 0x1Du:
        return (*(_DWORD *)(v3 + 12) == 1) | (unsigned __int8)((unsigned int)(*(_DWORD *)(v3 + 12) - 3) <= 1);
      case 0x20u:
        v7 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v4 + 16) & 4) == 0 )
          v7 = *(_QWORD *)(v7 + 104);
        return sub_19CD6C0((_DWORD *)(v3 + 12), v7);
      case 0x21u:
        v7 = 0;
        if ( (*(_BYTE *)(v4 + 27) & 1) != 0 )
          v7 = *(_QWORD *)(v4 + 16);
        return sub_19CD6C0((_DWORD *)(v3 + 12), v7);
      case 0x47u:
        v8 = *(_QWORD *)(v4 + 16);
        if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 40 >= 7 )
          v8 = 0;
        v9 = *(_DWORD *)(v3 + 12);
        if ( (unsigned int)(v9 - 3) > 1 && v9 != 1 )
          return 0;
        v10 = *(_DWORD *)(v3 + 8);
        if ( (unsigned int)(v10 - 3) > 1 && v10 != 1 )
          return 0;
        if ( !v8 )
          return 0;
        if ( (unsigned int)sub_B7DD50(v8, *(_QWORD *)v3) )
          return 0;
        v11 = *(_QWORD *)(v8 + 48);
        if ( (v11 & 1) == 0 && (byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
          return 0;
        v12 = *(_DWORD *)(v8 + 24);
        if ( !v12 )
          return 2;
        v13 = sub_1021680(*(_QWORD *)(*(_QWORD *)v3 + 2312LL), v12);
        if ( !v13 )
          return 2;
        result = 1;
        if ( v13 == 3 )
          return 2;
        return result;
      case 0x4Fu:
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
        v18 = (*(_WORD *)(v4 + 2) >> 3) & 0x7F;
        if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x7Fu) <= 0x2A )
        {
          if ( ((1LL << v18) & 0x70000000032LL) == 0 )
            return ((unsigned __int64)(1LL << v18) >> 13) & 1;
          a1 = v3;
          a2 = sub_BFB9F0(*(_QWORD *)(v4 + 16));
          goto LABEL_1;
        }
        return 0;
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
        return sub_19CD8C0(v3, v4, a3);
      default:
        goto LABEL_7;
    }
  }
}
