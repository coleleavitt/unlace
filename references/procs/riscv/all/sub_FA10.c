__int64 __fastcall sub_FA10(
        __int64 a1,
        __int64 a2,
        signed __int16 a3,
        unsigned __int16 a4,
        char a5,
        unsigned __int8 a6)
{
  __int64 v6; // r10
  char v8; // r13
  int v9; // ebx
  __int16 v10; // dx
  char v11; // al
  char v12; // dl
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  char v16; // r11
  unsigned __int8 v17; // al
  char v18; // cl
  __int16 v19; // dx
  __int16 v20; // ax
  __int16 v21; // dx
  unsigned __int16 v22; // r11
  char v23; // r11
  __int64 v24; // rbp
  char v25; // al
  __int64 v26; // rdx
  char v27; // r11
  char v28; // al
  char v29; // al
  __int16 v30; // ax
  __int16 v31; // r11
  char v32; // al
  char v33; // al
  __int16 v34; // bp
  char v35; // al
  bool v36; // zf
  __int16 v37; // ax
  int v38; // eax
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  char v41; // al
  char v42; // r11
  char v43; // al
  __int16 v44; // dx
  __int64 v45; // rsi
  __m128i v46; // xmm0
  int v47; // eax
  __m128i v48; // xmm0
  char v49; // al
  __int16 v50; // dx
  char v51; // al
  __int16 v52; // dx
  __int64 v53; // rsi
  char v54; // al
  __int16 v55; // bp
  char v56; // r11
  char v57; // r11
  char v58; // al
  __int16 v59; // dx
  __int16 v60; // dx
  char v61; // dl
  char v62; // al
  char v63; // al
  __int16 v64; // dx
  char v65; // al
  __int16 v66; // dx
  __int16 v67; // dx
  __int16 v68; // dx
  __int64 v69; // rsi
  char v70; // al
  __int16 v71; // dx
  char v72; // al
  char v73; // al
  __int16 v74; // bp

  v6 = a2;
  v8 = a5;
  switch ( a5 )
  {
    case 0:
      v9 = word_2AC80[a6 >> 1];
      if ( (v9 & 0x8000u) == 0 )
        goto LABEL_17;
      LOWORD(v9) = v9 & 0x1FFF;
      *(_WORD *)(a2 + 24) = v9;
      if ( !(_WORD)v9 )
        return 0;
      if ( (_WORD)v9 == 182 )
      {
        v9 = 183;
        *(_WORD *)(a2 + 24) = 183;
        sub_F980(a1, a2, a3, a4);
      }
      else
      {
        sub_F980(a1, a2, a3, a4);
        if ( (unsigned __int16)v9 > 0x10Cu )
        {
          if ( (unsigned __int16)(v9 - 321) <= 1u )
          {
LABEL_140:
            v58 = *(_BYTE *)(v6 + 28) | 0x50;
            goto LABEL_141;
          }
        }
        else if ( (unsigned __int16)v9 > 0x108u || (unsigned __int16)(v9 - 210) <= 3u )
        {
          goto LABEL_140;
        }
      }
      v58 = *(_BYTE *)(v6 + 28) | 0x10;
LABEL_141:
      *(_BYTE *)(v6 + 28) = v58;
      v59 = *(_WORD *)(v6 + 34);
      *(_BYTE *)(v6 + 121) = 1;
      v21 = v59 & 4;
      v20 = (char)(((2 * v57) & 0x1E) + (a3 < 0) + 64);
      goto LABEL_30;
    case 1:
      v9 = word_2AB80[a6 >> 1];
      if ( (v9 & 0x8000u) == 0 )
        goto LABEL_17;
      LOWORD(v9) = v9 & 0x1FFF;
      *(_WORD *)(a2 + 24) = v9;
      if ( !(_WORD)v9 )
        return 0;
      sub_F980(a1, a2, a3, a4);
      v17 = (2 * v16) & 0x1E;
      if ( (_WORD)v9 == 290 )
      {
        v61 = v17 + (a3 < 0);
        v62 = v17 >> 3;
        if ( v62 == 1 )
        {
          v73 = 4 * v61;
          v71 = 291;
          v72 = v73 & 0x1C | 2;
        }
        else
        {
          if ( v62 != 2 )
          {
            if ( v62 )
              return 0;
            *(_BYTE *)(v6 + 29) = 4 * v61 + 2;
            goto LABEL_72;
          }
          *(_BYTE *)(v6 + 28) |= 0xD0u;
          v70 = 4 * v61;
          v71 = 292;
          v72 = v70 & 0x1C | 2;
        }
        *(_WORD *)(v6 + 24) = v71;
        *(_BYTE *)(v6 + 29) = v72;
        goto LABEL_72;
      }
      if ( (_WORD)v9 != 293 )
      {
        if ( (_WORD)v9 == 289 )
        {
          if ( (a3 < 0) + v17 )
            return 0;
          v63 = *(_BYTE *)(a1 + 468);
          v64 = *(_WORD *)(v6 + 34);
          *(_BYTE *)(v6 + 41) = 1;
          *(_BYTE *)(v6 + 30) = 5;
          *(_WORD *)(v6 + 28) = 3;
          *(_WORD *)(v6 + 46) = (char)((((unsigned __int16)a3 >> 7) & 0x1F) + 32 * ((v63 & 8) == 0));
          *(_BYTE *)(v6 + 45) = (v64 & 4) == 0 ? 2 : 7;
          goto LABEL_68;
        }
        v18 = *(_BYTE *)(v6 + 28);
        if ( (unsigned __int16)v9 <= 0x10Cu )
        {
          if ( (unsigned __int16)v9 <= 0x108u && (unsigned __int16)(v9 - 210) > 3u )
          {
            v19 = *(_WORD *)(v6 + 34);
            *(_BYTE *)(v6 + 28) = v18 | 0x10;
            v20 = (char)(v17 + (a3 < 0) + 64);
            v21 = v19 & 4;
            if ( (unsigned __int16)v9 > 0x104u )
              goto LABEL_29;
LABEL_28:
            if ( (unsigned __int16)v9 > 0x100u )
            {
LABEL_70:
              *(_WORD *)(v6 + 86) = v20;
              *(_BYTE *)(v6 + 81) = 1;
              *(_BYTE *)(v6 + 85) = v21 == 0 ? 2 : 7;
LABEL_71:
              if ( (unsigned __int16)v9 <= 0x121u )
                goto LABEL_68;
LABEL_72:
              if ( (a6 & 1) == 0 )
              {
                *(_BYTE *)(v6 + 121) = 12;
                v13 = *(unsigned __int16 *)(v6 + 24);
LABEL_10:
                if ( (unsigned __int16)v13 <= 0xDFu )
                {
                  if ( (unsigned __int16)v13 <= 0xD5u )
                    return *(unsigned __int16 *)(v6 + 26);
                  goto LABEL_13;
                }
                LOWORD(v13) = v13 - 277;
                if ( (unsigned __int16)v13 > 0x2Bu )
                  return *(unsigned __int16 *)(v6 + 26);
LABEL_12:
                v14 = 0xA0000000055LL;
                if ( _bittest64(&v14, v13) )
                {
LABEL_13:
                  *(_BYTE *)(v6 + 28) = -59;
                  return *(unsigned __int16 *)(v6 + 26);
                }
                return *(unsigned __int16 *)(v6 + 26);
              }
LABEL_9:
              v13 = *(unsigned __int16 *)(v6 + 24);
              goto LABEL_10;
            }
            goto LABEL_29;
          }
LABEL_172:
          v67 = *(_WORD *)(v6 + 34);
          *(_BYTE *)(v6 + 28) = v18 | 0x50;
          v20 = (char)(v17 + (a3 < 0) + 64);
          v21 = v67 & 4;
          goto LABEL_29;
        }
        if ( (unsigned __int16)(v9 - 321) <= 1u )
          goto LABEL_172;
        v68 = *(_WORD *)(v6 + 34);
        *(_BYTE *)(v6 + 28) = v18 | 0x10;
        v20 = (char)(v17 + (a3 < 0) + 64);
        v21 = v68 & 4;
        if ( (unsigned __int16)(v9 - 272) > 0x37u
          || (v69 = 0xF01FE00000000FLL, !_bittest64(&v69, (unsigned int)(v9 - 272))) )
        {
LABEL_29:
          *(_BYTE *)(v6 + 121) = 1;
LABEL_30:
          *(_WORD *)(v6 + 126) = v20;
          *(_BYTE *)(v6 + 125) = v21 == 0 ? 2 : 7;
LABEL_61:
          v12 = a6 & 1;
          if ( (unsigned __int16)v9 <= 0xEFu )
            goto LABEL_62;
LABEL_95:
          if ( (unsigned __int16)v9 > 0x128u )
          {
            if ( (_WORD)v9 == 297 )
            {
              if ( !v12 )
              {
LABEL_75:
                v37 = *(_WORD *)(v6 + 34);
                *(_BYTE *)(v6 + 29) |= 1u;
                *(_BYTE *)(v6 + 161) = 1;
                *(_WORD *)(v6 + 166) = 64;
                *(_BYTE *)(v6 + 165) = (v37 & 4) == 0 ? 2 : 7;
                v13 = 20;
                if ( (unsigned __int16)v9 <= 0xDFu )
                  return *(unsigned __int16 *)(v6 + 26);
                goto LABEL_12;
              }
              if ( *(_BYTE *)(v6 + 81) == 1 && *(_WORD *)(v6 + 86) == 64 )
              {
                v46 = _mm_loadu_si128((const __m128i *)(v6 + 120));
                *(_BYTE *)(v6 + 121) = 0;
                v47 = *(_DWORD *)(v6 + 152);
                *(_WORD *)(v6 + 24) = 298;
                *(__m128i *)(v6 + 80) = v46;
                v48 = _mm_loadu_si128((const __m128i *)(v6 + 136));
                *(_DWORD *)(v6 + 112) = v47;
                *(_BYTE *)(v6 + 80) = 1;
                *(_BYTE *)(v6 + 28) = -75;
                *(__m128i *)(v6 + 96) = v48;
                return *(unsigned __int16 *)(v6 + 26);
              }
              return 0;
            }
LABEL_68:
            if ( (a6 & 1) == 0 )
              *(_BYTE *)(v6 + 161) = 12;
            goto LABEL_9;
          }
          goto LABEL_71;
        }
        goto LABEL_93;
      }
      v65 = (a3 < 0) + v17;
      if ( v65 == 5 )
      {
        *(_WORD *)(v6 + 24) = 295;
        goto LABEL_72;
      }
      if ( v65 <= 5 )
      {
        if ( !v65 )
          goto LABEL_72;
        if ( v65 == 4 )
        {
          *(_WORD *)(v6 + 24) = 294;
          goto LABEL_72;
        }
        return 0;
      }
      if ( v65 == 16 )
      {
        *(_WORD *)(v6 + 24) = 296;
        goto LABEL_72;
      }
      return 0;
    case 2:
      v9 = word_2AC00[a6 >> 1];
      if ( (v9 & 0x8000u) == 0 )
        goto LABEL_17;
      LOWORD(v9) = v9 & 0x1FFF;
      *(_WORD *)(a2 + 24) = v9;
      if ( !(_WORD)v9 )
        return 0;
      sub_F980(a1, a2, a3, a4);
      switch ( v9 )
      {
        case 232:
          v54 = (a3 < 0) + ((2 * v22) & 0x1E);
          if ( v54 == 16 )
          {
            *(_WORD *)(v6 + 24) = 230;
          }
          else
          {
            if ( v54 != 17 )
            {
              if ( v54 )
                return 0;
              *(_BYTE *)(v6 + 30) = 4;
              v55 = ((unsigned __int16)a3 >> 7) & 0x1F;
              *(_WORD *)(v6 + 28) = 35;
              if ( (*(_BYTE *)(v6 + 34) & 4) != 0 )
                v8 = 7;
              *(_BYTE *)(v6 + 41) = 1;
              *(_WORD *)(v6 + 46) = v55;
              *(_BYTE *)(v6 + 45) = v8;
              *(_BYTE *)(v6 + 81) = 1;
              *(_BYTE *)(v6 + 85) = v8;
              *(_WORD *)(v6 + 86) = (char)(((v22 >> 4) & 0x1F) + 64);
              goto LABEL_7;
            }
            *(_WORD *)(v6 + 24) = 231;
          }
          *(_BYTE *)(v6 + 28) = -27;
          v74 = ((unsigned __int16)a3 >> 7) & 0x1F;
          v36 = (*(_BYTE *)(v6 + 34) & 4) == 0;
          *(_BYTE *)(v6 + 41) = 1;
          if ( !v36 )
            v8 = 7;
          *(_WORD *)(v6 + 46) = v74;
          *(_BYTE *)(v6 + 45) = v8;
          goto LABEL_72;
        case 233:
          if ( (v22 & 0xC) != 0 )
            return 0;
          v56 = (16 * v22) | 6;
          if ( a3 < 0 )
            *(_WORD *)(v6 + 24) = 234;
          *(_BYTE *)(v6 + 28) = v56;
          goto LABEL_72;
        case 235:
          switch ( ((2 * (_BYTE)v22) & 0x1E) + (a3 < 0) )
          {
            case 1:
              break;
            case 2:
              *(_BYTE *)(v6 + 28) = -27;
              *(_WORD *)(v6 + 24) = 236;
              goto LABEL_72;
            case 3:
              *(_WORD *)(v6 + 24) = 237;
              break;
            case 0x10:
              *(_BYTE *)(v6 + 28) = -27;
              *(_WORD *)(v6 + 24) = 238;
              goto LABEL_72;
            case 0x11:
              *(_BYTE *)(v6 + 81) = 0;
              *(_WORD *)(v6 + 24) = 239;
LABEL_85:
              if ( (a6 & 1) == 0 )
                *(_BYTE *)(v6 + 81) = 12;
              return *(unsigned __int16 *)(v6 + 26);
            default:
              return 0;
          }
          *(_BYTE *)(v6 + 28) = -27;
          goto LABEL_72;
        case 240:
          *(_BYTE *)(v6 + 28) = 0;
          v34 = (unsigned __int16)a3 >> 15;
          *(_BYTE *)(v6 + 121) = 1;
          v35 = (2 * v22) & 0x1E;
          goto LABEL_65;
        case 241:
        case 242:
        case 243:
        case 244:
        case 245:
        case 246:
        case 247:
        case 248:
          *(_BYTE *)(v6 + 28) = -11;
          v34 = (unsigned __int16)a3 >> 15;
          *(_BYTE *)(v6 + 121) = 1;
          v35 = (2 * v22) & 0x1E;
LABEL_65:
          v36 = (*(_BYTE *)(v6 + 34) & 4) == 0;
          *(_WORD *)(v6 + 126) = (char)(v35 + v34 + 64);
          if ( !v36 )
            v8 = 7;
          *(_BYTE *)(v6 + 125) = v8;
          goto LABEL_68;
        default:
          v51 = *(_BYTE *)(v6 + 28);
          if ( (unsigned __int16)v9 > 0x10Cu )
          {
            if ( (unsigned __int16)(v9 - 321) > 1u )
            {
LABEL_111:
              v52 = *(_WORD *)(v6 + 34);
              *(_BYTE *)(v6 + 28) = v51 | 0x10;
              v21 = v52 & 4;
              v20 = (char)(((2 * v22) & 0x1E) + (a3 < 0) + 64);
              if ( (unsigned __int16)v9 <= 0x104u )
              {
                if ( (unsigned __int16)v9 > 0x100u )
                  goto LABEL_70;
                *(_WORD *)(v6 + 126) = v20;
                if ( v21 )
                  v8 = 7;
                *(_BYTE *)(v6 + 121) = 1;
                *(_BYTE *)(v6 + 125) = v8;
                goto LABEL_61;
              }
              if ( (unsigned __int16)(v9 - 272) > 0x37u )
                goto LABEL_151;
              v53 = 0xF01FE00000000FLL;
              if ( !_bittest64(&v53, (unsigned int)(v9 - 272)) )
                goto LABEL_151;
              if ( v21 )
                v8 = 7;
LABEL_94:
              *(_BYTE *)(v6 + 81) = 1;
              *(_WORD *)(v6 + 86) = v20;
              v12 = a6 & 1;
              *(_BYTE *)(v6 + 85) = v8;
              goto LABEL_95;
            }
          }
          else if ( (unsigned __int16)v9 <= 0x108u && (unsigned __int16)(v9 - 210) > 3u )
          {
            goto LABEL_111;
          }
          v66 = *(_WORD *)(v6 + 34);
          *(_BYTE *)(v6 + 28) = v51 | 0x50;
          v21 = v66 & 4;
          v20 = (char)(((2 * v22) & 0x1E) + (a3 < 0) + 64);
          if ( (unsigned __int16)v9 > 0x104u )
            goto LABEL_151;
          goto LABEL_169;
      }
    case 3:
      v9 = word_2AC80[a6 >> 1];
      if ( (v9 & 0x2000) == 0 )
        goto LABEL_17;
      LOWORD(v9) = v9 & 0x1FFF;
      *(_WORD *)(a2 + 24) = v9;
      if ( !(_WORD)v9 )
        return 0;
      LOWORD(v24) = (unsigned __int16)a3 >> 15;
      sub_F980(a1, a2, a3, a4);
      LOBYTE(v24) = (v23 & 0x1E) + v24;
      if ( (_WORD)v9 == 204 )
      {
        *(_WORD *)(v6 + 24) = 205;
        if ( (v24 & 0xFB) == 3 || (char)v24 <= 1 )
        {
          *(_BYTE *)(v6 + 29) = 32;
          *(_BYTE *)(v6 + 30) = v24;
          goto LABEL_7;
        }
        return 0;
      }
      v25 = *(_BYTE *)(v6 + 28);
      v24 = (char)v24;
      if ( (unsigned __int16)v9 > 0x10Cu )
      {
        if ( (unsigned __int16)(v9 - 321) > 1u )
        {
          *(_BYTE *)(v6 + 121) = 5;
          *(_BYTE *)(v6 + 28) = v25 | 0x40;
          v12 = a6 & 1;
          *(_BYTE *)(v6 + 125) = 0;
          *(_QWORD *)(v6 + 128) = v24;
          goto LABEL_95;
        }
      }
      else if ( (unsigned __int16)v9 <= 0x108u && (unsigned __int16)(v9 - 210) > 3u )
      {
        *(_BYTE *)(v6 + 121) = 5;
        *(_BYTE *)(v6 + 28) = v25 | 0x40;
        *(_BYTE *)(v6 + 125) = 0;
        if ( (unsigned __int16)(v9 - 171) > 0x1Du )
        {
          *(_QWORD *)(v6 + 128) = v24;
          v12 = a6 & 1;
          if ( (unsigned __int16)v9 > 0xEFu )
            goto LABEL_68;
        }
        else
        {
          v26 = 1073005445;
          if ( _bittest64(&v26, (unsigned int)(v9 - 171)) )
            v24 = v24 << 59 >> 59;
          *(_QWORD *)(v6 + 128) = v24;
          v12 = a6 & 1;
        }
LABEL_62:
        if ( (unsigned __int16)v9 > 0xB8u )
        {
          switch ( v9 )
          {
            case 185:
            case 186:
            case 187:
            case 188:
              if ( !v12 )
                goto LABEL_75;
              return *(unsigned __int16 *)(v6 + 26);
            case 189:
              if ( !v12 )
                goto LABEL_75;
              if ( *(_BYTE *)(v6 + 81) != 1 || *(_WORD *)(v6 + 86) != 64 )
                return 0;
              v38 = *(_DWORD *)(v6 + 152);
              v39 = _mm_loadu_si128((const __m128i *)(v6 + 120));
              *(_BYTE *)(v6 + 121) = 0;
              *(_WORD *)(v6 + 24) = 190;
              *(_DWORD *)(v6 + 112) = v38;
              LOBYTE(v38) = *(_BYTE *)(v6 + 28);
              *(__m128i *)(v6 + 80) = v39;
              v40 = _mm_loadu_si128((const __m128i *)(v6 + 136));
              v41 = v38 & 0xF0;
              *(_BYTE *)(v6 + 80) = 1;
              *(__m128i *)(v6 + 96) = v40;
              switch ( v41 )
              {
                case 32:
                  *(_BYTE *)(v6 + 28) = -107;
                  break;
                case 64:
                  *(_BYTE *)(v6 + 28) = -91;
                  break;
                case 16:
                  *(_BYTE *)(v6 + 28) = 5;
                  break;
              }
              break;
            case 205:
            case 232:
              goto LABEL_8;
            case 230:
            case 231:
            case 233:
            case 234:
            case 235:
            case 236:
            case 237:
            case 238:
              goto LABEL_72;
            case 239:
              goto LABEL_85;
            default:
              goto LABEL_68;
          }
          return *(unsigned __int16 *)(v6 + 26);
        }
        goto LABEL_68;
      }
      *(_BYTE *)(v6 + 121) = 5;
      *(_BYTE *)(v6 + 28) = v25 | 0x70;
      *(_BYTE *)(v6 + 125) = 0;
      *(_QWORD *)(v6 + 128) = v24;
      goto LABEL_68;
    case 4:
      v9 = word_2AC80[a6 >> 1];
      if ( (v9 & 0x4000) == 0 )
        goto LABEL_17;
      LOWORD(v9) = v9 & 0x1FFF;
      *(_WORD *)(a2 + 24) = v9;
      if ( !(_WORD)v9 )
        return 0;
      sub_F980(a1, a2, a3, a4);
      v28 = *(_BYTE *)(v6 + 28);
      if ( (unsigned __int16)v9 > 0x10Cu )
      {
        if ( (unsigned __int16)(v9 - 321) > 1u )
        {
LABEL_49:
          v29 = v28 | 0x20;
          goto LABEL_50;
        }
      }
      else if ( (unsigned __int16)v9 <= 0x108u && (unsigned __int16)(v9 - 210) > 3u )
      {
        goto LABEL_49;
      }
      v29 = v28 | 0x60;
LABEL_50:
      *(_BYTE *)(v6 + 28) = v29;
      v30 = *(_WORD *)(v6 + 34);
      *(_BYTE *)(v6 + 121) = 1;
      *(_WORD *)(v6 + 126) = ((2 * v27) & 0x1E) + ((unsigned __int16)a3 >> 15);
      *(_BYTE *)(v6 + 125) = (v30 & 4) == 0 ? 2 : 7;
      goto LABEL_61;
    case 5:
      v9 = word_2AB80[a6 >> 1];
      if ( (v9 & 0x4000) == 0 )
        goto LABEL_17;
      LOWORD(v9) = v9 & 0x1FFF;
      *(_WORD *)(a2 + 24) = v9;
      if ( !(_WORD)v9 )
        return 0;
      sub_F980(a1, a2, a3, a4);
      if ( (_WORD)v9 == 289 )
      {
        if ( (v31 & 0x1F0) != 0 )
          return 0;
        v49 = *(_BYTE *)(a1 + 468);
        v50 = *(_WORD *)(v6 + 34);
        *(_BYTE *)(v6 + 81) = 1;
        *(_WORD *)(v6 + 28) = 1283;
        *(_BYTE *)(v6 + 30) = 0;
        *(_WORD *)(v6 + 86) = (char)((a3 < 0) + ((2 * v31) & 0x1E) + 32 * ((v49 & 8) == 0));
        *(_BYTE *)(v6 + 85) = (v50 & 4) == 0 ? 2 : 7;
        goto LABEL_68;
      }
      v32 = *(_BYTE *)(v6 + 28);
      if ( (unsigned __int16)v9 > 0x10Cu )
      {
        if ( (unsigned __int16)(v9 - 321) > 1u )
        {
LABEL_57:
          v33 = v32 | 0x30;
          goto LABEL_58;
        }
      }
      else if ( (unsigned __int16)v9 <= 0x108u && (unsigned __int16)(v9 - 210) > 3u )
      {
        goto LABEL_57;
      }
      v33 = v32 | 0x80;
LABEL_58:
      *(_BYTE *)(v6 + 28) = v33;
      v21 = *(_WORD *)(v6 + 34) & 4;
      v20 = (char)((a3 < 0) + ((2 * v31) & 0x1E) + 32 * ((*(_BYTE *)(a1 + 468) & 8) == 0));
      if ( (unsigned __int16)v9 > 0x104u )
        goto LABEL_91;
      goto LABEL_28;
    case 6:
      v9 = word_2AC00[a6 >> 1];
      if ( (v9 & 0x4000) == 0 )
      {
LABEL_17:
        *(_WORD *)(a2 + 24) = 0;
        return 0;
      }
      LOWORD(v9) = v9 & 0x1FFF;
      *(_WORD *)(a2 + 24) = v9;
      if ( !(_WORD)v9 )
        return 0;
      if ( (_WORD)v9 != 232 )
      {
        sub_F980(a1, a2, a3, a4);
        v43 = *(_BYTE *)(v6 + 28);
        if ( (unsigned __int16)v9 > 0x10Cu )
        {
          if ( (unsigned __int16)(v9 - 321) > 1u )
            goto LABEL_90;
        }
        else if ( (unsigned __int16)v9 <= 0x108u && (unsigned __int16)(v9 - 210) > 3u )
        {
LABEL_90:
          v44 = *(_WORD *)(v6 + 34);
          *(_BYTE *)(v6 + 28) = v43 | 0x20;
          v21 = v44 & 4;
          v20 = ((unsigned __int16)a3 >> 15) + ((2 * v42) & 0x1E);
          if ( (unsigned __int16)v9 <= 0x104u )
            goto LABEL_28;
LABEL_91:
          if ( (unsigned __int16)(v9 - 272) <= 0x37u )
          {
            v45 = 0xF01FE00000000FLL;
            if ( _bittest64(&v45, (unsigned int)(v9 - 272)) )
            {
LABEL_93:
              v8 = v21 == 0 ? 2 : 7;
              goto LABEL_94;
            }
          }
          goto LABEL_151;
        }
        v60 = *(_WORD *)(v6 + 34);
        *(_BYTE *)(v6 + 28) = v43 | 0x60;
        v21 = v60 & 4;
        v20 = ((unsigned __int16)a3 >> 15) + ((2 * v42) & 0x1E);
        if ( (unsigned __int16)v9 <= 0x104u )
        {
LABEL_169:
          *(_BYTE *)(v6 + 121) = 1;
          *(_WORD *)(v6 + 126) = v20;
          if ( v21 )
            *(_BYTE *)(v6 + 125) = 7;
          else
            *(_BYTE *)(v6 + 125) = 2;
          v12 = a6 & 1;
          goto LABEL_62;
        }
LABEL_151:
        *(_BYTE *)(v6 + 121) = 1;
        *(_WORD *)(v6 + 126) = v20;
        if ( v21 )
          *(_BYTE *)(v6 + 125) = 7;
        else
          *(_BYTE *)(v6 + 125) = 2;
        v12 = a6 & 1;
        goto LABEL_95;
      }
      if ( (a4 & 0x1F0) != 0 )
        return 0;
      v10 = *(_WORD *)(a2 + 34);
      *(_BYTE *)(a2 + 30) = 0;
      *(_WORD *)(a2 + 28) = 1043;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 46) = (char)((((unsigned __int16)a3 >> 7) & 0x1F) + 64);
      v11 = (v10 & 4) == 0 ? 2 : 7;
      *(_BYTE *)(a2 + 45) = v11;
      *(_WORD *)(a2 + 86) = ((2 * (_BYTE)a4) & 0x1E) + ((unsigned __int16)a3 >> 15);
      *(_BYTE *)(a2 + 85) = v11;
LABEL_7:
      v12 = a6 & 1;
LABEL_8:
      if ( v12 )
        goto LABEL_9;
      return 0;
    case 7:
      return sub_F820(a1, a2, a3, a4, a6);
    default:
      v9 = *(unsigned __int16 *)(a2 + 24);
      goto LABEL_61;
  }
}
