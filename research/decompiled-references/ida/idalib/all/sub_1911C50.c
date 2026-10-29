void __fastcall sub_1911C50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rbx
  unsigned __int16 v10; // ax
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // r12
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // r12
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __m128i si128; // [rsp+0h] [rbp-68h] BYREF
  __int64 v46; // [rsp+10h] [rbp-58h]
  __m128 v47; // [rsp+20h] [rbp-48h] BYREF
  __int64 v48; // [rsp+30h] [rbp-38h]

  v9 = a2;
  v10 = *(_WORD *)a2 & 0x1FF;
  if ( v10 > 0x75u || v10 == 4 )
  {
LABEL_2:
    sub_19120F0(a1, v9);
  }
  else
  {
    while ( 2 )
    {
      switch ( v10 )
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
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x3Au:
        case 0x3Bu:
        case 0x3Cu:
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
        case 0x6Bu:
        case 0x6Cu:
        case 0x6Du:
        case 0x73u:
        case 0x76u:
        case 0x77u:
          goto LABEL_2;
        case 5u:
        case 0x1Bu:
        case 0x3Du:
        case 0x41u:
        case 0x5Eu:
        case 0x69u:
        case 0x75u:
          return;
        case 0x2Eu:
          sub_1911B60(*(__m128 **)(a1 + 8), a2, a7, a8);
          sub_1911FF0(a1, *(_QWORD *)(a2 + 16));
          return;
        case 0x33u:
          v15 = (_QWORD *)(a2 + 32);
          v16 = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 32;
          if ( a2 + 32 != v16 )
          {
            do
            {
              if ( *v15 )
                sub_1911C50(a1, *v15, a3, a4, a5, a6, si128.m128i_i64[0], si128.m128i_i64[1], v46);
              ++v15;
            }
            while ( (_QWORD *)v16 != v15 );
          }
          return;
        case 0x35u:
          v20 = *(_QWORD *)(a2 + 56);
          if ( v20 && (v20 & 2) == 0 && (v20 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            sub_1911FF0(a1, v20 & 0xFFFFFFFFFFFFFFFCLL);
          goto LABEL_2;
        case 0x39u:
          if ( (*(_DWORD *)(a2 + 16) & 0x3FFF8000) != 0x3FFF8000 )
            sub_1911C50(
              a1,
              *(_QWORD *)(a2
                        + 8LL
                        * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                        + 32),
              (*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF,
              a4,
              a5,
              a6,
              si128.m128i_i64[0],
              si128.m128i_i64[1],
              v46);
          return;
        case 0x44u:
          sub_EE9E50(&v47, a2);
          v46 = v48;
          si128 = _mm_load_si128((const __m128i *)&v47);
          v25 = (_QWORD *)si128.m128i_i64[0];
          if ( (si128.m128i_i8[8] & 3) != 0 )
            v25 = (_QWORD *)sub_EF2B30((__int64)&si128);
          sub_1911C50(a1, *v25, v21, v22, v23, v24, si128.m128i_i64[0], si128.m128i_i64[1], v46);
          return;
        case 0x47u:
          if ( !*(_BYTE *)(a1 + 16)
            || (v27 = *(_QWORD *)(a2 + 16), (*(_BYTE *)(v27 + 28) & 0x7Fu) - 40 > 6)
            || !sub_9B48E0(v27) )
          {
            sub_1911920(*(__m128 **)(a1 + 8), a2, 0, a7, a8);
          }
          return;
        case 0x4Du:
          if ( (**(_DWORD **)(a2 + 16) & 0x20000) != 0 )
            return;
          if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
            v17 = *(_QWORD *)(a2 + 24);
          else
            v17 = *(_QWORD *)(a2 + 32);
          goto LABEL_17;
        case 0x59u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Cu:
        case 0x5Du:
          sub_19121E0(a1, a2);
          return;
        case 0x60u:
          if ( !sub_C960B0(a2) )
            return;
          v17 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_17:
          sub_1911C50(a1, v17, a3, a4, a5, a6, si128.m128i_i64[0], si128.m128i_i64[1], v46);
          break;
        case 0x6Au:
          v18 = *(_QWORD *)(a2 + 16);
          if ( v18 )
            sub_1910D40(*(_QWORD *)(a1 + 8), *(unsigned int *)(a2 + 40), v18, 1, a5, a6, a7, a8);
          v19 = *(_QWORD *)(a2 + 24);
          if ( v19 )
            sub_1910D40(*(_QWORD *)(a1 + 8), *(unsigned int *)(a2 + 40), v19, 1, a5, a6, a7, a8);
          goto LABEL_2;
        case 0x6Eu:
          v28 = *(_QWORD *)(a2 + 16);
          if ( v28 )
          {
            a2 = *(unsigned int *)(a2 + 4);
            sub_1910D40(*(_QWORD *)(a1 + 8), a2, v28, 1, a5, a6, a7, a8);
          }
          v29 = sub_C93F60(v9, a2, v28, a4);
          if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v30 = v29;
            v31 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL), v29)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v31 + 16) == 48 )
            {
              v40 = sub_F60F10(*v31, v30, v32, v33, v34, v35);
              v41 = v40[16];
              if ( v41 || (sub_7052B0((__int64 *)(v40[13] + 96LL), v40[13], v36, v37, v38, v39), (v41 = v40[16]) != 0) )
              {
                if ( *(_QWORD *)(v41 + 88) )
                {
                  v42 = sub_1A69EF0(*(_QWORD *)(a1 + 8), v40);
                  sub_1910D40(*(_QWORD *)(a1 + 8), *(unsigned int *)(v9 + 4), v42, 1, v43, v44, a7, a8);
                }
              }
            }
          }
          goto LABEL_2;
        case 0x6Fu:
          v26 = sub_C94CC0((_QWORD *)a2);
          goto LABEL_32;
        case 0x70u:
          v26 = sub_C94C80(a2);
LABEL_32:
          sub_1911FF0(a1, v26);
          sub_19120F0(a1, a2);
          break;
        case 0x71u:
        case 0x72u:
          sub_1912470(a1, a2);
          break;
        case 0x74u:
          v11 = **(_QWORD **)(a2 + 16);
          v12 = sub_EEB7E0(*(_QWORD *)(a2 + 24), a2, *(double *)a7.m128_u64);
          sub_1910D40(*(_QWORD *)(a1 + 8), v12, v11, 1, v13, v14, a7, a8);
          sub_1911FF0(a1, *(_QWORD *)(a2 + 24));
          break;
        default:
          continue;
      }
      break;
    }
  }
}
