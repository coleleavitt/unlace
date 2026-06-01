void __fastcall sub_1A86E50(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rsi
  _QWORD *v5; // r12
  __int64 i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __m128i si128; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+10h] [rbp-58h]
  __m128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]

  while ( 2 )
  {
    v3 = *(_WORD *)a2 & 0x1FF;
    if ( v3 > 0x75u )
    {
      if ( v3 <= 0x77u )
      {
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
          case 0x20:
LABEL_13:
            sub_1A86C80(a1, a2);
            break;
          default:
            goto LABEL_6;
        }
        return;
      }
LABEL_6:
      switch ( v3 )
      {
        case 0u:
        case 1u:
        case 2u:
        case 3u:
        case 4u:
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
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
        case 0x21u:
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
        case 0x2Fu:
        case 0x30u:
        case 0x31u:
        case 0x32u:
        case 0x34u:
        case 0x35u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x3Au:
        case 0x3Bu:
        case 0x3Cu:
        case 0x3Du:
        case 0x3Eu:
        case 0x3Fu:
        case 0x40u:
        case 0x42u:
        case 0x43u:
        case 0x45u:
        case 0x46u:
        case 0x48u:
        case 0x49u:
        case 0x4Au:
        case 0x4Bu:
        case 0x4Cu:
        case 0x4Eu:
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
        case 0x5Fu:
        case 0x61u:
        case 0x62u:
        case 0x63u:
        case 0x64u:
        case 0x65u:
        case 0x66u:
        case 0x67u:
        case 0x68u:
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
          goto LABEL_12;
        case 5u:
        case 0x1Bu:
        case 0x41u:
        case 0x5Eu:
        case 0x69u:
          return;
        case 0x1Au:
          if ( !*(_QWORD *)(a1 + 16) )
          {
            v4 = *(_QWORD *)(a2 + 16);
            if ( v4 )
              goto LABEL_16;
          }
          return;
        case 0x22u:
          if ( !*(_QWORD *)(a1 + 16) )
          {
            sub_1A86E50(a1, *(_QWORD *)(a2 + 24));
            if ( *(_QWORD *)(a1 + 16) )
            {
              if ( (*(_BYTE *)(a2 + 40) & 2) != 0 )
                *(_QWORD *)(a1 + 16) = a2;
            }
          }
          return;
        case 0x2Eu:
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        case 0x33u:
          v5 = (_QWORD *)(a2 + 32);
          for ( i = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 32; (_QWORD *)i != v5; ++v5 )
          {
            if ( *v5 )
              sub_1A86E50(a1, *v5);
          }
          return;
        case 0x39u:
          if ( (*(_DWORD *)(a2 + 16) & 0x3FFF8000) != 0x3FFF8000 )
            sub_1A86E50(
              a1,
              *(_QWORD *)(a2
                        + 8LL
                        * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                        + 32));
          return;
        case 0x44u:
          sub_EE9E50(&v11, a2);
          v10 = v12;
          si128 = _mm_load_si128((const __m128i *)&v11);
          v7 = (_QWORD *)si128.m128i_i64[0];
          if ( (si128.m128i_i8[8] & 3) != 0 )
            v7 = (_QWORD *)sub_EF2B30((__int64)&si128);
          sub_1A86E50(a1, *v7);
          return;
        case 0x47u:
          if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 16) && !*(_QWORD *)(a1 + 16) )
            *(_QWORD *)(a1 + 16) = a2;
          return;
        case 0x4Du:
          if ( (**(_DWORD **)(a2 + 16) & 0x20000) != 0 )
            return;
          if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
            v4 = *(_QWORD *)(a2 + 24);
          else
            v4 = *(_QWORD *)(a2 + 32);
LABEL_16:
          sub_1A86E50(a1, v4);
          break;
        case 0x59u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Cu:
        case 0x5Du:
          sub_1A884E0(a1, a2);
          return;
        case 0x60u:
          if ( sub_C960B0(a2) )
            sub_1A86E50(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          return;
        case 0x75u:
          if ( (unsigned __int8)sub_B79030(*(_QWORD *)(a2 + 16), *(_QWORD *)(a1 + 8)) )
          {
            v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 16) + 64LL))(*(_QWORD *)(a2 + 16));
            sub_1A86E50(a1, v8);
          }
          return;
        case 0x76u:
        case 0x77u:
          goto LABEL_13;
        default:
          goto LABEL_6;
      }
      return;
    }
    break;
  }
  if ( v3 != 4 )
    goto LABEL_6;
  switch ( *(_BYTE *)(a2 + 2) >> 3 )
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
    case 12:
    case 13:
LABEL_12:
      sub_1A883F0(a1, a2);
      break;
    default:
      goto LABEL_6;
  }
}
