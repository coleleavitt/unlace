void __fastcall sub_186F230(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 v8; // ax
  _WORD *v9; // rsi
  _WORD *v10; // rsi
  __int64 v11; // rax
  unsigned __int64 *v12; // r12
  unsigned __int64 *i; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // r12
  __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 *v21; // r12
  __int64 *j; // rbx
  __int64 v23; // rsi
  __m128i si128; // [rsp+0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+10h] [rbp-58h]
  __m128 v26; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+30h] [rbp-38h]

  v8 = *(_WORD *)a2 & 0x1FF;
  if ( v8 <= 0x75u )
  {
    if ( v8 == 4 )
    {
LABEL_4:
      sub_186F880(a1, a2);
    }
    else
    {
      while ( 2 )
      {
        switch ( v8 )
        {
          case 0u:
          case 1u:
          case 2u:
          case 3u:
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
          case 0x73u:
          case 0x74u:
            goto LABEL_10;
          case 4u:
            goto LABEL_4;
          case 5u:
          case 0x1Bu:
          case 0x41u:
          case 0x47u:
          case 0x5Eu:
          case 0x69u:
          case 0x75u:
            return;
          case 0x2Eu:
            sub_186EA30((__int64)a1, a2, 1, 0, a5, a6);
            return;
          case 0x33u:
            v17 = (_QWORD *)(a2 + 32);
            v18 = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 32;
            if ( a2 + 32 != v18 )
            {
              do
              {
                if ( *v17 )
                  sub_186F230(a1, *v17);
                ++v17;
              }
              while ( (_QWORD *)v18 != v17 );
            }
            return;
          case 0x39u:
            if ( (*(_DWORD *)(a2 + 16) & 0x3FFF8000) != 0x3FFF8000 )
              sub_186F230(
                a1,
                *(_QWORD *)(a2
                          + 8LL
                          * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                          + 32));
            return;
          case 0x44u:
            sub_EE9E50(&v26, a2);
            v25 = v27;
            si128 = _mm_load_si128((const __m128i *)&v26);
            v16 = (_QWORD *)si128.m128i_i64[0];
            if ( (si128.m128i_i8[8] & 3) != 0 )
              v16 = (_QWORD *)sub_EF2B30((__int64)&si128);
            sub_186F230(a1, *v16);
            return;
          case 0x4Du:
            if ( (**(_DWORD **)(a2 + 16) & 0x20000) != 0 )
              return;
            if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
              v19 = *(_QWORD *)(a2 + 24);
            else
              v19 = *(_QWORD *)(a2 + 32);
            goto LABEL_30;
          case 0x4Fu:
            if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) != 4 )
              goto LABEL_10;
            sub_186F530(a1, *(_QWORD *)(a2 + 16), 0);
            return;
          case 0x59u:
          case 0x5Au:
          case 0x5Du:
            sub_186F8D0(a1, a2);
            return;
          case 0x5Bu:
            v10 = *(_WORD **)(a2 + 32);
            if ( (*v10 & 0x1FF) == 0x18 )
              goto LABEL_8;
            sub_186F230(a1, v10);
            v11 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
            v12 = (unsigned __int64 *)(a2 + v11 + 8LL * *(unsigned int *)(a2 + 16));
            for ( i = (unsigned __int64 *)(v11 + a2); v12 != i; ++i )
            {
              v14 = *i;
              v15 = sub_BFBAE0(v14);
              sub_186F530(a1, v15, 0);
            }
            return;
          case 0x5Cu:
            v9 = *(_WORD **)(a2 + 32);
            if ( (*v9 & 0x1FF) == 0x2E )
            {
              sub_186F530(a1, v9, 0);
              v20 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
              v21 = (__int64 *)(a2 + v20 + 8LL * *(unsigned int *)(a2 + 16));
              for ( j = (__int64 *)(v20 + a2); v21 != j; ++j )
              {
                v23 = *j;
                sub_186F230(a1, v23);
              }
            }
            else
            {
LABEL_8:
              if ( sub_BFE550(a2) )
              {
                sub_186F530(a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), 0);
              }
              else if ( !sub_BFD3B0(a2, *a1) )
              {
LABEL_10:
                sub_186F790(a1, a2);
              }
            }
            return;
          case 0x60u:
            if ( !sub_C960B0(a2) )
              return;
            v19 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_30:
            sub_186F230(a1, v19);
            break;
          case 0x71u:
          case 0x72u:
            sub_186F940(a1, a2);
            return;
          case 0x76u:
          case 0x77u:
            goto LABEL_2;
          default:
            continue;
        }
        break;
      }
    }
  }
  else
  {
LABEL_2:
    sub_186FA00(a1, a2);
  }
}
