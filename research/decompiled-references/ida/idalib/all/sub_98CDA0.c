__int64 __fastcall sub_98CDA0(_BYTE *a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  __int64 result; // rax
  char v5; // al
  __int64 v6; // rax

  while ( 2 )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        v3 = *(_WORD *)a2 & 0x1FF;
        if ( v3 <= 0x75u )
          break;
        if ( v3 > 0x77u )
          goto LABEL_10;
        switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
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
          case 0x20:
            return 0;
          case 0xE:
          case 0xF:
            if ( !*a1 )
              return 0;
LABEL_16:
            result = sub_98CDA0(a1, *(_QWORD *)(a2 + 16));
            if ( result )
              return result;
            a2 = *(_QWORD *)(a2 + 24);
            break;
          default:
            goto LABEL_10;
        }
      }
      if ( v3 != 4 )
      {
LABEL_10:
        switch ( v3 )
        {
          case 0u:
          case 1u:
          case 2u:
            return 0;
          case 3u:
          case 0x52u:
          case 0x6Cu:
          case 0x70u:
            v6 = sub_BFD550(a2);
            if ( a2 == v6 )
              return 0;
            a2 = v6;
            continue;
          case 4u:
            v5 = *(_BYTE *)(a2 + 2) >> 3;
            if ( v5 == 5 )
              goto LABEL_14;
            if ( v5 == 9 )
              goto LABEL_13;
            return 0;
          case 5u:
          case 6u:
          case 7u:
          case 8u:
          case 9u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
          case 0x11u:
          case 0x12u:
          case 0x13u:
          case 0x14u:
          case 0x15u:
          case 0x16u:
          case 0x17u:
          case 0x18u:
          case 0x19u:
          case 0x1Bu:
          case 0x1Cu:
          case 0x1Du:
          case 0x1Eu:
          case 0x1Fu:
          case 0x20u:
          case 0x21u:
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
          case 0x4Fu:
          case 0x50u:
          case 0x51u:
          case 0x53u:
          case 0x54u:
          case 0x55u:
          case 0x56u:
          case 0x57u:
          case 0x58u:
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
          case 0x6Du:
          case 0x6Eu:
          case 0x6Fu:
          case 0x71u:
          case 0x72u:
          case 0x73u:
          case 0x74u:
          case 0x75u:
            return sub_98D800(a1, a2);
          case 0x1Au:
            goto LABEL_14;
          case 0x47u:
            return a2;
          case 0x59u:
          case 0x5Au:
          case 0x5Bu:
          case 0x5Cu:
          case 0x5Du:
            return sub_98D840(a1, a2);
          case 0x76u:
          case 0x77u:
            if ( !*a1 || ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) - 14 > 1 )
              return 0;
            goto LABEL_16;
          default:
            goto LABEL_10;
        }
      }
      break;
    }
    switch ( *(_BYTE *)(a2 + 2) >> 3 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 6:
      case 7:
      case 8:
      case 10:
      case 11:
      case 12:
      case 13:
        return 0;
      case 5:
        goto LABEL_14;
      case 9:
LABEL_13:
        if ( *a1 )
        {
LABEL_14:
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        }
        return 0;
      default:
        goto LABEL_10;
    }
  }
}
