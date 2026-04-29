__int64 __fastcall sub_13FF0(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r12d
  unsigned __int8 v8; // al
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // dx
  int v11; // r12d
  unsigned __int16 v12; // r15
  unsigned int v13; // r15d
  __int64 v14; // rdi
  __m128i v15; // xmm1
  int v16; // r15d
  __m128i v17; // xmm0
  unsigned __int16 epi16; // dx
  int v19; // r15d
  unsigned __int16 v21; // dx
  unsigned __int8 v22; // cl
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  int v26; // ebp
  __int64 v27; // r8
  unsigned int v28; // [rsp+8h] [rbp-80h]
  unsigned __int16 v29; // [rsp+8h] [rbp-80h]
  unsigned int v30; // [rsp+1Ch] [rbp-6Ch]
  __int64 v31; // [rsp+28h] [rbp-60h] BYREF
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  int v33; // [rsp+38h] [rbp-50h]
  char v34; // [rsp+3Ch] [rbp-4Ch] BYREF
  char v35; // [rsp+3Dh] [rbp-4Bh]
  unsigned int v36; // [rsp+40h] [rbp-48h]
  unsigned int v37; // [rsp+44h] [rbp-44h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  sub_1E4A0(a1, a2, a3, a4, a5, a6);
  sub_E500((__int64)"\nLoading constant pool...");
  if ( *(_WORD *)(a1 + 33017) )
  {
    v7 = 1;
    while ( 1 )
    {
      v32 = 0;
      v33 = 0;
      v8 = sub_19A50(a1);
      LOBYTE(v32) = v8;
      switch ( v8 )
      {
        case 1u:
          WORD2(v32) = v7;
          if ( (unsigned __int8)sub_1BB60(a1, (unsigned __int16)v7, &v32) )
            sub_1C290(a1, (unsigned __int16)v7, &v32);
          goto LABEL_11;
        case 2u:
          sub_12DB0((__int64)"File contains CONSTANT_Unicode, which was removed from the standard in 1996, and is not supported by IDA");
        case 3u:
        case 4u:
          goto LABEL_28;
        case 5u:
        case 6u:
          v33 = sub_199C0(a1);
LABEL_28:
          HIDWORD(v32) = sub_199C0(a1);
          goto LABEL_11;
        case 7u:
          goto LABEL_7;
        case 8u:
        case 0x10u:
          goto LABEL_8;
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
          v9 = sub_19930(a1);
          if ( !v9 )
            goto LABEL_78;
          if ( *(_WORD *)(a1 + 33017) < v9 )
            goto LABEL_76;
          HIWORD(v32) = v9;
LABEL_7:
          WORD1(v32) = 0;
LABEL_8:
          v9 = sub_19930(a1);
          if ( !v9 )
          {
LABEL_78:
            v26 = 0;
LABEL_77:
            v27 = qftell(*(_QWORD *)(a1 + 33312));
            sub_12DB0(
              (__int64)"Bad record in constant pool.\n"
                       "Record %u have reference to %u\n"
                       "(maxnum %u, file offset after the read is 0x%llX)",
              (unsigned __int16)v7,
              v26,
              *(unsigned __int16 *)(a1 + 33017),
              v27);
          }
          if ( *(_WORD *)(a1 + 33017) < v9 )
          {
LABEL_76:
            v26 = v9;
            goto LABEL_77;
          }
          WORD2(v32) = v9;
LABEL_11:
          netnode_supset(*(_QWORD *)(a1 + 33336), (unsigned __int16)v7, &v32, 12, 83);
          v10 = *(_WORD *)(a1 + 33017);
          if ( (unsigned __int8)(v32 - 5) <= 1u )
          {
            if ( (_WORD)v7 == v10 )
              sub_12DB0((__int64)"Premature end of constant pool");
            ++v7;
          }
          if ( v10 < (unsigned __int16)++v7 )
            goto LABEL_13;
          break;
        case 0xFu:
          WORD2(v32) = (unsigned __int8)sub_19A50(a1);
          HIWORD(v32) = sub_19930(a1);
          goto LABEL_11;
        case 0x12u:
          HIWORD(v32) = sub_19930(a1);
          goto LABEL_8;
        default:
          sub_12DB0((__int64)"Bad constant type 0x%x (%u)", v8, (unsigned __int16)v7);
      }
    }
  }
LABEL_13:
  v11 = 1;
  sub_1E2D0(a1);
  sub_E500((__int64)"checking...");
  if ( *(_WORD *)(a1 + 33017) )
  {
    while ( 1 )
    {
      netnode_supval(*(_QWORD *)(a1 + 33336), (unsigned __int16)v11, &v32, 12, 83);
      if ( (_BYTE)v32 == 8 )
        break;
      if ( (unsigned __int8)v32 <= 8u )
      {
        if ( (_BYTE)v32 == 7 )
        {
          if ( !sub_13D40(a1, 2, WORD2(v32), 0xA0u, &v34) )
            goto LABEL_42;
          v33 = 0;
          BYTE1(v32) |= v35 & 0x16;
LABEL_18:
          netnode_supset(*(_QWORD *)(a1 + 33336), (unsigned __int16)v11, &v32, 12, 83);
          if ( (*(_BYTE *)(a1 + 33346) & 1) != 0 && (_BYTE)v32 == 7 && (v32 & 0x1000) != 0 )
          {
            if ( *(_WORD *)(a1 + 33081) )
            {
              v12 = 1;
              do
              {
                v28 = netnode_altval(*(_QWORD *)(a1 + 33328), v12, 65);
                if ( !(unsigned int)sub_1A030(a1, WORD2(v32), (unsigned __int16)v28) )
                {
                  v13 = HIWORD(v28);
                  goto LABEL_49;
                }
                ++v12;
              }
              while ( *(_WORD *)(a1 + 33081) >= v12 );
              v24 = v12;
            }
            else
            {
              v24 = 1;
            }
            LOWORD(v13) = v11;
            v25 = *(_QWORD *)(a1 + 33328);
            v31 = WORD2(v32) | (v11 << 16);
            netnode_supset(v25, v24, &v31, 8, 65);
            ++*(_WORD *)(a1 + 33081);
LABEL_49:
            v14 = *(_QWORD *)(a1 + 33336);
            HIWORD(v33) = v13;
            netnode_supset(v14, (unsigned __int16)v11, &v32, 12, 83);
          }
          goto LABEL_20;
        }
        LOWORD(v11) = v11 - (((unsigned __int8)v32 < 5u) - 1);
        if ( *(_WORD *)(a1 + 33017) < (unsigned __int16)++v11 )
          goto LABEL_36;
      }
      else
      {
        if ( (_BYTE)v32 == 12 )
        {
          if ( !sub_13D40(a1, 2, HIWORD(v32), 0x60u, &v34) )
LABEL_67:
            sub_12E60(v11, HIWORD(v32));
          BYTE1(v32) |= (16 * v35) & 0x20;
          if ( !sub_13D40(a1, 2, WORD2(v32), 0x20u, &v34) )
LABEL_42:
            sub_12E60(v11, WORD2(v32));
          BYTE1(v32) |= (16 * v35) & 0xC0;
          goto LABEL_18;
        }
LABEL_20:
        if ( *(_WORD *)(a1 + 33017) < (unsigned __int16)++v11 )
          goto LABEL_36;
      }
    }
    if ( !sub_13D40(a1, 2, WORD2(v32), 1u, nullptr) )
      goto LABEL_42;
    goto LABEL_20;
  }
LABEL_36:
  if ( (*(_BYTE *)(a1 + 33346) & 1) != 0 )
    netnode_supdel_all(*(_QWORD *)(a1 + 33328), 65);
  sub_E500((__int64)"referencing...");
  if ( *(_WORD *)(a1 + 33017) )
  {
    v30 = 0;
    v11 = 1;
    do
    {
      while ( 2 )
      {
        netnode_supval(*(_QWORD *)(a1 + 33336), (unsigned __int16)v11, &v32, 12, 83);
        switch ( (char)v32 )
        {
          case 5:
          case 6:
            v11 += 2;
            if ( *(_WORD *)(a1 + 33017) < (unsigned __int16)v11 )
              goto LABEL_59;
            continue;
          case 9:
          case 10:
          case 11:
            if ( !sub_13D40(a1, 2, HIWORD(v32), 7u, &v34) )
              goto LABEL_67;
            v15 = _mm_cvtsi32_si128(v36);
            BYTE1(v32) |= v35 & 0x10;
            v16 = *(_DWORD *)(a1 + 33348);
            v29 = WORD2(v32);
            *(_DWORD *)((char *)&v32 + 2) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_unpacklo_epi16(_mm_cvtsi32_si128(v37), v15), 230));
            sub_13D40(a1, 2, _mm_extract_epi16(v15, 0), 0xE0u, nullptr);
            if ( !sub_13D40(a1, 2, v29, 0xCu, &v34) )
              sub_12E60(v11, v29);
            v17 = _mm_cvtsi32_si128(v36);
            BYTE1(v32) |= v35 & 0xE0;
            v33 = _mm_cvtsi128_si32(v17);
            epi16 = _mm_extract_epi16(v17, 0);
            if ( (_BYTE)v32 == 9 )
              sub_13D40(a1, 2, epi16, 0x40u, nullptr);
            else
              sub_13D40(a1, 2, epi16, 0xC0u, nullptr);
            v19 = v16 - !sub_13D40(a1, 2, HIWORD(v33), 0x61u, nullptr);
            if ( (*(_BYTE *)(a1 + 33346) & 1) != 0 && *(_DWORD *)(a1 + 33348) == v19 )
            {
              ++v30;
              v23 = *(_QWORD *)(a1 + 33328);
              v31 = (unsigned __int16)v11;
              netnode_supset(v23, v30, &v31, 8, 48);
              ++*(_WORD *)(a1 + 33081);
            }
            else
            {
              WORD1(v32) = 0;
            }
            goto LABEL_57;
          case 15:
            if ( !sub_13D40(a1, 2, HIWORD(v32), 0, &v34) )
              goto LABEL_67;
            goto LABEL_57;
          case 16:
            v21 = WORD2(v32);
            v22 = 1;
            goto LABEL_63;
          case 18:
            v21 = WORD2(v32);
            v22 = 12;
LABEL_63:
            if ( !sub_13D40(a1, 2, v21, v22, &v34) )
              goto LABEL_42;
LABEL_57:
            netnode_supset(*(_QWORD *)(a1 + 33336), (unsigned __int16)v11, &v32, 12, 83);
            break;
          default:
            goto LABEL_58;
        }
        break;
      }
LABEL_58:
      ++v11;
    }
    while ( *(_WORD *)(a1 + 33017) >= (unsigned __int16)v11 );
  }
  else
  {
    v30 = 0;
  }
LABEL_59:
  sub_E500((__int64)"complete\n");
  return v30;
}
