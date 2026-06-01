void __fastcall sub_1C4C820(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int16 v4; // ax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *k; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rbp
  __int64 *v23; // r13
  _QWORD *v24; // rdi
  unsigned int m; // edx
  _QWORD *v26; // rsi
  _QWORD *v27; // r11
  __int64 v28; // rax
  int v29; // esi
  _QWORD *v30; // rsi
  _QWORD *v31; // r12
  __int64 i; // rbx
  __int64 v33; // rax
  __int64 v34; // r11
  unsigned int j; // edx
  __int64 *v36; // rsi
  __int64 v37; // r10
  int v38; // edx
  int v39; // edi
  __int64 v40; // rdx
  __int64 *v41; // rsi
  __int64 v42; // rsi
  __int64 v43; // rbp
  int v44; // edx
  __m128i si128; // [rsp+0h] [rbp-78h] BYREF
  __int64 v46; // [rsp+10h] [rbp-68h]
  __m128 v47; // [rsp+20h] [rbp-58h] BYREF
  __int64 v48; // [rsp+30h] [rbp-48h]

  v3 = a2;
  while ( 2 )
  {
    v4 = *(_WORD *)v3 & 0x1FF;
    if ( v4 <= 0x75u )
    {
      if ( v4 == 4 )
      {
        switch ( *(_BYTE *)(v3 + 2) >> 3 )
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
          case 11:
          case 12:
          case 13:
            sub_1C4DBE0(a1, v3);
            return;
          case 10:
LABEL_61:
            sub_1C4C820(a1);
            return;
          default:
            break;
        }
      }
    }
    else if ( v4 <= 0x77u )
    {
      switch ( (*(_WORD *)(v3 + 2) >> 3) & 0x3F )
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
        case 0x20:
          sub_1C4DC00(a1, v3);
          return;
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
LABEL_16:
          sub_1C4DC30(a1, v3);
          return;
        default:
          break;
      }
    }
LABEL_7:
    switch ( v4 )
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
      case 0x2Eu:
      case 0x2Fu:
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x35u:
      case 0x36u:
      case 0x38u:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
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
      case 0x74u:
        goto LABEL_9;
      case 4u:
        if ( *(_BYTE *)(v3 + 2) >> 3 != 5 )
          goto LABEL_61;
        goto LABEL_9;
      case 5u:
      case 0x1Bu:
      case 0x34u:
      case 0x37u:
      case 0x3Au:
      case 0x3Eu:
      case 0x41u:
      case 0x4Eu:
      case 0x5Eu:
      case 0x69u:
      case 0x73u:
      case 0x75u:
        return;
      case 0x14u:
        v3 = *(_QWORD *)(v3 + 24);
        continue;
      case 0x33u:
        v31 = (_QWORD *)(v3 + 32);
        for ( i = v3 + 8LL * *(unsigned __int16 *)(v3 + 4) + 32; (_QWORD *)i != v31; ++v31 )
        {
          if ( *v31 )
            sub_1C4C820(a1);
        }
        return;
      case 0x39u:
        if ( (*(_DWORD *)(v3 + 16) & 0x3FFF8000) != 0x3FFF8000 )
          goto LABEL_61;
        return;
      case 0x44u:
        sub_EE9E50(&v47, v3);
        v46 = v48;
        si128 = _mm_load_si128((const __m128i *)&v47);
        if ( (si128.m128i_i8[8] & 3) != 0 )
          sub_EF2B30((__int64)&si128);
        sub_1C4C820(a1);
        return;
      case 0x47u:
        if ( (*(_BYTE *)(*(_QWORD *)(v3 + 16) + 28LL) & 0x7Fu) - 40 > 6 )
          goto LABEL_9;
        v5 = *(_QWORD *)(a1 + 16);
        si128.m128i_i64[0] = *(_QWORD *)(v3 + 16);
        v6 = sub_EEC8C0(v3, a2, a3);
        v9 = *(unsigned int *)(v5 + 8);
        v10 = v6;
        if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(v5 + 12) )
        {
          sub_2237220(v5, v5 + 16, v9 + 1, 8);
          v9 = *(unsigned int *)(v5 + 8);
        }
        v11 = *(_QWORD *)v5;
        *(_QWORD *)(*(_QWORD *)v5 + 8 * v9) = v10;
        v12 = *(_QWORD *)(a1 + 8);
        ++*(_DWORD *)(v5 + 8);
        v13 = *(_DWORD *)(v12 + 8);
        if ( v13 )
        {
          v33 = *(unsigned int *)(v12 + 16);
          if ( (_DWORD)v33 )
          {
            v9 = si128.m128i_i64[0];
            v34 = *(_QWORD *)v12;
            v8 = 1;
            v7 = 0;
            for ( j = (v33 - 1)
                    & (((unsigned __int32)si128.m128i_i32[0] >> 9)
                     ^ ((unsigned __int32)si128.m128i_i32[0] >> 4)); ; j = (v33 - 1) & v44 )
            {
              v36 = (__int64 *)(v34 + 8LL * j);
              v37 = *v36;
              if ( si128.m128i_i64[0] == *v36 )
              {
                sub_1C39470(&v47, v36, (_QWORD *)(v34 + 8 * v33), v12, 1);
                return;
              }
              if ( v37 == -4096 )
                break;
              if ( v7 || v37 != -8192 )
                v36 = (__int64 *)v7;
              v44 = v8 + j;
              v7 = (__int64)v36;
              v8 = (unsigned int)(v8 + 1);
            }
            v11 = (unsigned int)(3 * v33);
            if ( v7 )
              v36 = (__int64 *)v7;
            v39 = v13 + 1;
            v47.m128_u64[0] = (unsigned __int64)v36;
            if ( 4 * v39 < (unsigned int)v11 )
            {
              v40 = (unsigned int)(v33 - *(_DWORD *)(v12 + 12) - v39);
              if ( (unsigned int)v40 > (unsigned int)v33 >> 3 )
              {
LABEL_101:
                v41 = (__int64 *)v47.m128_u64[0];
                ++*(_DWORD *)(v12 + 8);
                if ( *v41 != -4096 )
                  --*(_DWORD *)(v12 + 12);
                *v41 = v9;
                sub_1C39470(&v47, v41, (_QWORD *)(*(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 16)), v12, 1);
                v42 = *(unsigned int *)(v12 + 32);
                v43 = si128.m128i_i64[0];
                if ( v42 + 1 > (unsigned __int64)*(unsigned int *)(v12 + 36) )
                {
                  sub_2237220(v12 + 24, v12 + 40, v42 + 1, 8);
                  v42 = *(unsigned int *)(v12 + 32);
                }
                *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8 * v42) = v43;
                ++*(_DWORD *)(v12 + 32);
                return;
              }
              sub_1C4C5C0(v12, v33, v40, si128.m128i_i64[0], v7, v8);
LABEL_107:
              sub_1C38F80((__int64 *)v12, si128.m128i_i64, &v47);
              v9 = si128.m128i_i64[0];
              goto LABEL_101;
            }
          }
          else
          {
            v47.m128_u64[0] = 0;
          }
          sub_1C4C5C0(v12, 2 * v33, v11, v9, v7, v8);
          goto LABEL_107;
        }
        v14 = *(unsigned int *)(v12 + 32);
        v15 = *(_QWORD **)(v12 + 24);
        v16 = v15;
        v17 = (__int64)&v15[v14];
        if ( (8 * v14) >> 5 )
        {
          if ( si128.m128i_i64[0] == *v15 )
            goto LABEL_69;
          if ( v15[1] == si128.m128i_i64[0] )
          {
            v16 = v15 + 1;
            goto LABEL_69;
          }
          if ( v15[2] == si128.m128i_i64[0] )
          {
            v16 = v15 + 2;
            goto LABEL_69;
          }
          if ( v15[3] == si128.m128i_i64[0] )
          {
            v16 = v15 + 3;
            goto LABEL_69;
          }
          for ( k = *(_QWORD **)(v12 + 24); ; k = v16 )
          {
            v16 += 4;
            if ( &v15[4 * ((8 * v14) >> 5)] == v16 )
              break;
            if ( *v16 == si128.m128i_i64[0] )
              goto LABEL_69;
            if ( v16[1] == si128.m128i_i64[0] )
            {
              v16 = k + 5;
              goto LABEL_69;
            }
            if ( v16[2] == si128.m128i_i64[0] )
            {
              v16 = k + 6;
              goto LABEL_69;
            }
            if ( v16[3] == si128.m128i_i64[0] )
            {
              v16 = k + 7;
              goto LABEL_69;
            }
          }
        }
        v19 = (v17 - (__int64)v16) >> 3;
        if ( v19 != 2 )
        {
          if ( v19 != 3 )
          {
            if ( v19 != 1 )
              goto LABEL_38;
            goto LABEL_79;
          }
          if ( *v16 == si128.m128i_i64[0] )
            goto LABEL_69;
          ++v16;
        }
        if ( *v16 == si128.m128i_i64[0] )
          goto LABEL_69;
        ++v16;
LABEL_79:
        if ( *v16 == si128.m128i_i64[0] )
        {
LABEL_69:
          if ( (_QWORD *)v17 != v16 )
            return;
        }
LABEL_38:
        v20 = v14 + 1;
        if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(v12 + 36) )
        {
          sub_2237220(v12 + 24, v12 + 40, v20, 8);
          v15 = *(_QWORD **)(v12 + 24);
          v14 = *(unsigned int *)(v12 + 32);
        }
        v15[v14] = si128.m128i_i64[0];
        v21 = (unsigned int)(*(_DWORD *)(v12 + 32) + 1);
        *(_DWORD *)(v12 + 32) = v21;
        if ( (unsigned int)v21 > 8 )
        {
          v22 = *(__int64 **)(v12 + 24);
          v23 = &v22[v21];
          while ( 1 )
          {
            if ( v23 == v22 )
              return;
            v28 = *(unsigned int *)(v12 + 16);
            if ( !(_DWORD)v28 )
              break;
            v15 = (_QWORD *)*v22;
            v8 = *(_QWORD *)v12;
            v24 = nullptr;
            v17 = 1;
            for ( m = (v28 - 1) & (((unsigned int)*v22 >> 9) ^ ((unsigned int)*v22 >> 4)); ; m = (v28 - 1) & v38 )
            {
              v26 = (_QWORD *)(v8 + 8LL * m);
              v27 = (_QWORD *)*v26;
              if ( v15 == (_QWORD *)*v26 )
              {
                sub_1C39470(&v47, v26, (_QWORD *)(v8 + 8 * v28), v12, 1);
                goto LABEL_45;
              }
              if ( v27 == (_QWORD *)-4096LL )
                break;
              if ( v27 != (_QWORD *)-8192LL || v24 )
                v26 = v24;
              v38 = v17 + m;
              v24 = v26;
              v17 = (unsigned int)(v17 + 1);
            }
            if ( v24 )
              v26 = v24;
            v20 = (unsigned int)(*(_DWORD *)(v12 + 8) + 1);
            v47.m128_u64[0] = (unsigned __int64)v26;
            if ( 4 * (int)v20 >= (unsigned int)(3 * v28) )
              goto LABEL_49;
            v20 = (unsigned int)(v28 - *(_DWORD *)(v12 + 12) - v20);
            if ( (unsigned int)v20 <= (unsigned int)v28 >> 3 )
            {
              v29 = v28;
LABEL_50:
              sub_1C4C5C0(v12, v29, v20, (__int64)v15, v17, v8);
              sub_1C38F80((__int64 *)v12, v22, &v47);
              v15 = (_QWORD *)*v22;
            }
            v30 = (_QWORD *)v47.m128_u64[0];
            ++*(_DWORD *)(v12 + 8);
            if ( *v30 != -4096 )
              --*(_DWORD *)(v12 + 12);
            *v30 = v15;
            sub_1C39470(&v47, v30, (_QWORD *)(*(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 16)), v12, 1);
LABEL_45:
            ++v22;
          }
          v47.m128_u64[0] = 0;
LABEL_49:
          v29 = 2 * v28;
          goto LABEL_50;
        }
        return;
      case 0x4Du:
        if ( (**(_DWORD **)(v3 + 16) & 0x20000) == 0 )
          goto LABEL_61;
        return;
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
        goto LABEL_61;
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
        if ( !sub_BFD3B0(v3, *(_QWORD *)a1) )
LABEL_9:
          *(_BYTE *)(a1 + 24) = 0;
        return;
      case 0x60u:
        if ( sub_C960B0(v3) )
          goto LABEL_61;
        return;
      case 0x76u:
        sub_1C4C820(a1);
        sub_1C4C820(a1);
        return;
      case 0x77u:
        goto LABEL_16;
      default:
        goto LABEL_7;
    }
  }
}
