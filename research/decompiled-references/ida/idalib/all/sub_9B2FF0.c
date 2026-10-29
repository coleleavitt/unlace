void __fastcall sub_9B2FF0(_QWORD *a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  unsigned __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __m128i v13[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __m128i v15; // [rsp+28h] [rbp-50h] BYREF

  v3 = *(_WORD *)a2 & 0x1FF;
  if ( v3 <= 0x75u )
  {
    if ( v3 == 4 )
    {
LABEL_8:
      sub_9AD020((__int64)a1, a2);
      return;
    }
    goto LABEL_4;
  }
  if ( v3 > 0x77u )
  {
LABEL_4:
    while ( 2 )
    {
      switch ( v3 )
      {
        case 0u:
        case 1u:
        case 2u:
        case 3u:
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
        case 0x1Au:
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
        case 0x2Fu:
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
        case 0x73u:
        case 0x75u:
          return;
        case 4u:
          goto LABEL_8;
        case 0x2Eu:
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
          goto LABEL_9;
        case 0x30u:
          v5 = *(_QWORD *)(a2 + 16);
          if ( (v5 & 4) != 0 )
            v4 = *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 40);
          else
            v4 = v5 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_10;
        case 0x47u:
          v6 = *(_QWORD *)(a2 + 16);
          if ( v6 && (*(_BYTE *)(v6 + 28) & 0x7Fu) - 40 <= 6 && (unsigned int)sub_9ADE40(a1[1], *(_QWORD *)(a2 + 16)) )
          {
            v14 = a2;
            v15.m128i_i32[0] = 4;
            v15.m128i_i64[1] = v6;
            sub_9AC3A0(v13, (__int64)(a1 + 2), &v14, &v15, v7, v8);
          }
          break;
        case 0x59u:
        case 0x5Au:
        case 0x5Du:
          sub_9B2F50(a1, a2);
          break;
        case 0x5Bu:
          sub_9B2E20(a1, a2);
          break;
        case 0x5Cu:
          v9 = sub_C946E0(a2);
          if ( v9 )
          {
            v10 = sub_C94680(a2);
            sub_9B1E40(a1, a2, v10, v9);
            sub_9ACB40((__int64)a1, a2, v9, v11, v12);
          }
          break;
        case 0x71u:
        case 0x72u:
          sub_9B0640((__int64)a1, a2);
          break;
        case 0x74u:
          sub_9B1300((__int64)a1, a2);
          break;
        case 0x76u:
        case 0x77u:
          if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
            goto LABEL_9;
          if ( ((((*(_WORD *)(a2 + 2) >> 3) & 0x3F) + 45) & 0x3Fu) <= 1 )
            sub_9AD280((__int64)a1, a2);
          break;
        default:
          continue;
      }
      return;
    }
  }
  switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
  {
    case 0:
LABEL_9:
      v4 = *(_QWORD *)(a2 + 16);
LABEL_10:
      sub_9ACCE0((__int64)a1, v4, a2);
      break;
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
    case 0x1E:
    case 0x1F:
    case 0x20:
      sub_9ADD20((__int64)a1, a2);
      break;
    case 0x1B:
    case 0x1C:
    case 0x1D:
      return;
    default:
      goto LABEL_4;
  }
}
