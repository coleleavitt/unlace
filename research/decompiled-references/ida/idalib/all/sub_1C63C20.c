void __fastcall sub_1C63C20(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 *v3; // rax
  _QWORD *v4; // rbp
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rax
  __m128i si128; // [rsp+10h] [rbp-68h] BYREF
  __int64 v9; // [rsp+20h] [rbp-58h]
  __m128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]

  v2 = *(_WORD *)a2 & 0x1FF;
  if ( v2 > 0x75u || v2 == 4 )
  {
LABEL_2:
    sub_1C63DD0(a1);
  }
  else
  {
    while ( 2 )
    {
      switch ( v2 )
      {
        case 0u:
          *(_BYTE *)(a1 + 8) = 1;
          return;
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
        case 0x1Au:
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
        case 0x76u:
        case 0x77u:
          goto LABEL_2;
        case 5u:
        case 0x1Bu:
        case 0x41u:
        case 0x47u:
        case 0x5Eu:
        case 0x69u:
        case 0x75u:
          return;
        case 0x2Eu:
          sub_1C63C20(a1, *(_QWORD *)(a2 + 16));
          return;
        case 0x33u:
          v4 = (_QWORD *)(a2 + 32);
          v5 = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 32;
          if ( a2 + 32 != v5 )
          {
            do
            {
              if ( *v4 )
                sub_1C63C20(a1, *v4);
              ++v4;
            }
            while ( (_QWORD *)v5 != v4 );
          }
          return;
        case 0x39u:
          if ( (*(_DWORD *)(a2 + 16) & 0x3FFF8000) != 0x3FFF8000 )
            sub_1C63C20(
              a1,
              *(_QWORD *)(a2
                        + 8LL
                        * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                        + 32));
          return;
        case 0x44u:
          sub_EE9E50(&v10, a2);
          si128 = _mm_load_si128((const __m128i *)&v10);
          v9 = v11;
          if ( (si128.m128i_i8[8] & 3) != 0 )
            v7 = (_QWORD *)sub_EF2B30((__int64)&si128);
          else
            v7 = (_QWORD *)si128.m128i_i64[0];
          sub_1C63C20(a1, *v7);
          return;
        case 0x4Du:
          if ( (**(_DWORD **)(a2 + 16) & 0x20000) != 0 )
            return;
          if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
            v6 = *(_QWORD *)(a2 + 24);
          else
            v6 = *(_QWORD *)(a2 + 32);
          break;
        case 0x59u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Cu:
        case 0x5Du:
          v10.m128_u64[0] = a2;
          v3 = *(__int64 **)(a1 + 24);
          if ( v3 == *(__int64 **)(a1 + 32) )
          {
            sub_1C63AD0(a1 + 16, *(const void **)(a1 + 24), (__int64 *)&v10);
          }
          else
          {
            *v3 = a2;
            *(_QWORD *)(a1 + 24) = v3 + 1;
          }
          return;
        case 0x60u:
          if ( !sub_C960B0(a2) )
            return;
          v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          break;
        default:
          continue;
      }
      break;
    }
    sub_1C63C20(a1, v6);
  }
}
