__int64 __fastcall sub_64170(__int64 a1, __int64 a2, int a3, char a4)
{
  __int16 v6; // dx
  __int64 result; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int16 v11; // dx
  __m128i v12; // xmm0
  int v13; // eax
  __m128i v14; // xmm0
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rax
  _WORD *v18; // rdx
  __int16 v19; // ax
  __int16 v20; // cx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  if ( (getinf() & 1) == 0 && (*(_DWORD *)(a1 + 4436) & 0x7D783) == 0 )
    return 0;
  *(_BYTE *)(a2 + 44) &= ~8u;
  *(_WORD *)(a2 + 46) = 0;
  *(_BYTE *)(a2 + 41) = 11;
  *(_BYTE *)(a2 + 45) = 4;
  *(_BYTE *)(a2 + 85) = 4;
  *(_BYTE *)(a2 + 72) = 0;
  *(_BYTE *)(a2 + 112) = 0;
  sub_63BB0(a1, a2, a2 + 80);
  switch ( a3 )
  {
    case 216:
      v8 = *(_BYTE *)(a2 + 81) == 1;
      *(_BYTE *)(a2 + 85) = 3;
      *(_BYTE *)(a2 + 45) = 3;
      if ( !v8 )
        goto LABEL_10;
      *(_BYTE *)(a2 + 81) = 11;
      *(_BYTE *)(a2 + 85) = 5;
      goto LABEL_20;
    case 217:
      if ( *(_BYTE *)(a2 + 81) == 1 )
      {
        *(_BYTE *)(a2 + 81) = 0;
        switch ( *(_DWORD *)(a1 + 5200) )
        {
          case 0:
            *(_BYTE *)(a2 + 81) = 11;
            v6 = 258;
            *(_WORD *)(a2 + 24) = 258;
            *(_BYTE *)(a2 + 85) = 5;
            goto LABEL_7;
          case 1:
            *(_BYTE *)(a2 + 45) = 5;
            v6 = 261;
            *(_WORD *)(a2 + 24) = 261;
            *(_BYTE *)(a2 + 85) = 5;
            *(_BYTE *)(a2 + 81) = 11;
            goto LABEL_7;
          case 2:
            if ( *(_WORD *)(a2 + 86) )
              return 0;
            *(_BYTE *)(a2 + 41) = 0;
            v6 = 330;
            *(_WORD *)(a2 + 24) = 330;
            goto LABEL_7;
          case 3:
            *(_BYTE *)(a2 + 81) = 11;
            v6 = 510;
            *(_WORD *)(a2 + 24) = 510;
            *(_BYTE *)(a2 + 85) = 5;
            goto LABEL_7;
          case 4:
            v23 = *(unsigned __int16 *)(a2 + 86);
            if ( (unsigned __int16)v23 > 7u )
              return 0;
            v6 = word_97620[v23];
            *(_WORD *)(a2 + 24) = v6;
            goto LABEL_6;
          case 5:
            v22 = *(unsigned __int16 *)(a2 + 86);
            if ( (unsigned __int16)v22 > 7u )
              return 0;
            v6 = word_97610[v22];
            *(_WORD *)(a2 + 24) = v6;
            goto LABEL_6;
          case 6:
            v21 = *(unsigned __int16 *)(a2 + 86);
            if ( (unsigned __int16)v21 > 7u )
              return 0;
            v6 = word_97600[v21];
            *(_WORD *)(a2 + 24) = v6;
            if ( v6 != 335 )
              goto LABEL_6;
            if ( (*(_DWORD *)(a1 + 4436) & 0x7D78F) != 0 )
              goto LABEL_7;
LABEL_79:
            *(_WORD *)(a2 + 24) = 0;
            result = 0;
            break;
          case 7:
            v24 = *(unsigned __int16 *)(a2 + 86);
            if ( (unsigned __int16)v24 > 7u )
              return 0;
            v6 = word_975F0[v24];
            *(_WORD *)(a2 + 24) = v6;
            if ( (*(_DWORD *)(a1 + 4436) & 0x7D78F) != 0 || (unsigned __int16)(v6 - 336) > 2u )
              goto LABEL_6;
            goto LABEL_79;
          default:
            goto LABEL_38;
        }
        return result;
      }
      v6 = word_975E0[*(unsigned int *)(a1 + 5200)];
      *(_WORD *)(a2 + 24) = v6;
      *(_BYTE *)(a2 + 85) = byte_975D8[*(unsigned int *)(a1 + 5200)];
      if ( *(_DWORD *)(a1 + 5200) <= 3u )
        goto LABEL_6;
      goto LABEL_24;
    case 218:
      if ( *(_DWORD *)(a1 + 5196) == 233 && (*(_DWORD *)(a1 + 4436) & 0x7D78F) != 0 )
      {
        *(_BYTE *)(a2 + 84) &= ~8u;
        v6 = 341;
        *(_WORD *)(a2 + 24) = 341;
        *(_BYTE *)(a2 + 81) = 11;
        *(_BYTE *)(a2 + 85) = 5;
        goto LABEL_7;
      }
      if ( *(_BYTE *)(a2 + 81) != 1 )
      {
        v6 = word_975C0[*(unsigned int *)(a1 + 5200)];
        v16 = 2;
        goto LABEL_27;
      }
      if ( (*(_WORD *)(a1 + 4437) & 0x7D6) != 0 )
      {
        v10 = *(unsigned int *)(a1 + 5200);
        v18 = &unk_975D0;
        if ( (unsigned int)v10 <= 3 )
          goto LABEL_42;
      }
      return 0;
    case 219:
      v10 = *(unsigned int *)(a1 + 5200);
      if ( *(_BYTE *)(a2 + 81) != 1 )
      {
        v6 = word_97580[v10];
        *(_WORD *)(a2 + 24) = v6;
        *(_BYTE *)(a2 + 85) = byte_97570[*(unsigned int *)(a1 + 5200)];
        goto LABEL_6;
      }
      if ( (*(_WORD *)(a1 + 4437) & 0x7D6) == 0 )
        goto LABEL_93;
      if ( (unsigned int)v10 <= 3 )
      {
        v18 = &unk_975A0;
LABEL_42:
        v6 = v18[v10];
        *(_BYTE *)(a2 + 44) |= 8u;
        *(_BYTE *)(a2 + 81) = 11;
        *(_WORD *)(a2 + 24) = v6;
        *(_BYTE *)(a2 + 85) = 5;
        goto LABEL_6;
      }
      if ( (_DWORD)v10 == 5 )
      {
        *(_BYTE *)(a2 + 44) |= 8u;
        v6 = 254;
        *(_WORD *)(a2 + 24) = 254;
        *(_BYTE *)(a2 + 81) = 11;
        *(_BYTE *)(a2 + 85) = 5;
        goto LABEL_7;
      }
      if ( (_DWORD)v10 == 6 )
      {
        *(_BYTE *)(a2 + 44) |= 8u;
        v6 = 253;
        *(_WORD *)(a2 + 24) = 253;
        *(_BYTE *)(a2 + 81) = 11;
        *(_BYTE *)(a2 + 85) = 5;
        goto LABEL_7;
      }
LABEL_93:
      if ( (_DWORD)v10 == 4 )
      {
        v25 = *(unsigned __int16 *)(a2 + 86);
        if ( (unsigned __int16)v25 <= 7u )
        {
          *(_BYTE *)(a2 + 41) = 0;
          v6 = word_97590[v25];
          *(_BYTE *)(a2 + 81) = 0;
          *(_WORD *)(a2 + 24) = v6;
          goto LABEL_6;
        }
      }
      return 0;
    case 220:
      v8 = *(_BYTE *)(a2 + 81) == 1;
      *(_BYTE *)(a2 + 85) = 4;
      *(_BYTE *)(a2 + 45) = 4;
      if ( !v8 )
        goto LABEL_10;
      *(_BYTE *)(a2 + 81) = 11;
      *(_BYTE *)(a2 + 85) = 5;
      v9 = *(unsigned int *)(a1 + 5200);
      if ( (unsigned int)v9 > 3 )
      {
        v9 = (unsigned int)v9 ^ 1;
        *(_DWORD *)(a1 + 5200) = v9;
      }
      if ( (unsigned int)(v9 - 2) > 1 )
      {
        v11 = *(_WORD *)(a2 + 86);
        *(_WORD *)(a2 + 86) = *(_WORD *)(a2 + 46);
        *(_WORD *)(a2 + 46) = v11;
LABEL_20:
        v9 = *(unsigned int *)(a1 + 5200);
        if ( (unsigned int)(v9 - 2) > 1 )
        {
          *(_BYTE *)(a2 + 44) |= 8u;
LABEL_10:
          v9 = *(unsigned int *)(a1 + 5200);
        }
      }
      v6 = word_97630[v9];
      *(_WORD *)(a2 + 24) = v6;
      if ( !v6 )
        return 0;
      goto LABEL_7;
    case 221:
      if ( *(_BYTE *)(a2 + 81) == 1 )
      {
        switch ( *(_DWORD *)(a1 + 5200) )
        {
          case 0:
            v6 = 329;
            goto LABEL_64;
          case 1:
            v6 = 513;
            goto LABEL_64;
          case 2:
            v6 = 259;
            goto LABEL_64;
          case 3:
            v6 = 260;
            goto LABEL_64;
          case 4:
            v6 = 339;
            if ( (*(_DWORD *)(a1 + 4436) & 0x7D78F) != 0 )
              goto LABEL_64;
            return 0;
          case 5:
            v6 = 340;
            if ( (*(_DWORD *)(a1 + 4436) & 0x7D78F) == 0 )
              return 0;
LABEL_64:
            *(_WORD *)(a2 + 24) = v6;
            *(_BYTE *)(a2 + 81) = 11;
            *(_BYTE *)(a2 + 85) = 5;
            if ( *(_DWORD *)(a1 + 5200) )
              goto LABEL_7;
            break;
          default:
            return 0;
        }
      }
      else
      {
        v6 = word_97560[*(unsigned int *)(a1 + 5200)];
        *(_WORD *)(a2 + 24) = v6;
        *(_BYTE *)(a2 + 85) = byte_97550[*(unsigned int *)(a1 + 5200)];
        if ( *(_DWORD *)(a1 + 5200) <= 3u )
          goto LABEL_6;
      }
LABEL_24:
      v12 = _mm_loadu_si128((const __m128i *)(a2 + 80));
      v13 = *(_DWORD *)(a2 + 112);
      *(_BYTE *)(a2 + 81) = 0;
      *(__m128i *)(a2 + 40) = v12;
      v14 = _mm_loadu_si128((const __m128i *)(a2 + 96));
      *(_DWORD *)(a2 + 72) = v13;
      *(__m128i *)(a2 + 56) = v14;
      goto LABEL_6;
    case 222:
      v15 = *(unsigned int *)(a1 + 5200);
      if ( *(_BYTE *)(a2 + 81) != 1 )
      {
        v6 = word_975C0[v15];
        v16 = 1;
LABEL_27:
        *(_WORD *)(a2 + 24) = v6;
        *(_BYTE *)(a2 + 85) = v16;
LABEL_6:
        if ( !v6 )
          return 0;
LABEL_7:
        if ( a4 )
        {
          v17 = 0;
          while ( word_97520[v17] != v6 )
          {
            if ( ++v17 == 9 )
              return 0;
          }
          *(_WORD *)(a2 + 24) = word_97500[(int)v17];
        }
        return 1;
      }
      if ( (_DWORD)v15 != 3 || *(_DWORD *)(a1 + 5196) == 217 )
      {
        *(_BYTE *)(a2 + 81) = 11;
        v6 = word_975B0[v15];
        v19 = *(_WORD *)(a2 + 86);
        *(_BYTE *)(a2 + 85) = 5;
        *(_WORD *)(a2 + 24) = v6;
        if ( v19 == 1 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 5200) - 2) > 1 )
          {
LABEL_46:
            v20 = *(_WORD *)(a2 + 46);
            *(_BYTE *)(a2 + 44) |= 8u;
            *(_WORD *)(a2 + 46) = v19;
            *(_WORD *)(a2 + 86) = v20;
            goto LABEL_6;
          }
          *(_BYTE *)(a2 + 84) &= ~8u;
        }
        if ( *(_DWORD *)(a1 + 5200) == 3 )
          goto LABEL_6;
        goto LABEL_46;
      }
      return 0;
    case 223:
      if ( *(_BYTE *)(a2 + 81) == 1 )
      {
        switch ( *(_DWORD *)(a1 + 5200) )
        {
          case 0:
            *(_BYTE *)(a2 + 81) = 11;
            v6 = 515;
            *(_WORD *)(a2 + 24) = 515;
            *(_BYTE *)(a2 + 85) = 5;
            goto LABEL_7;
          case 1:
            *(_BYTE *)(a2 + 81) = 11;
            v6 = 516;
            *(_WORD *)(a2 + 24) = 516;
            *(_BYTE *)(a2 + 85) = 5;
            goto LABEL_7;
          case 2:
            *(_BYTE *)(a2 + 81) = 11;
            v6 = 517;
            *(_WORD *)(a2 + 24) = 517;
            *(_BYTE *)(a2 + 85) = 5;
            goto LABEL_7;
          case 3:
            *(_BYTE *)(a2 + 81) = 11;
            v6 = 518;
            *(_WORD *)(a2 + 24) = 518;
            *(_BYTE *)(a2 + 85) = 5;
            goto LABEL_7;
          case 4:
            if ( *(_WORD *)(a2 + 86) )
              return 0;
            *(_BYTE *)(a2 + 85) = 1;
            v6 = 318;
            *(_WORD *)(a2 + 24) = 318;
            goto LABEL_24;
          case 5:
            if ( (*(_WORD *)(a1 + 4437) & 0x7D6) == 0 )
              return 0;
            *(_BYTE *)(a2 + 44) |= 8u;
            *(_WORD *)(a2 + 24) = 256;
            v6 = 256;
            *(_BYTE *)(a2 + 81) = 11;
            *(_BYTE *)(a2 + 85) = 5;
            goto LABEL_7;
          case 6:
            if ( (*(_WORD *)(a1 + 4437) & 0x7D6) == 0 )
              return 0;
            *(_BYTE *)(a2 + 44) |= 8u;
            v6 = 255;
            *(_WORD *)(a2 + 24) = 255;
            *(_BYTE *)(a2 + 81) = 11;
            *(_BYTE *)(a2 + 85) = 5;
            goto LABEL_7;
          default:
            return 0;
        }
      }
      v6 = word_97540[*(unsigned int *)(a1 + 5200)];
      *(_WORD *)(a2 + 24) = v6;
      *(_BYTE *)(a2 + 85) = byte_97538[*(unsigned int *)(a1 + 5200)];
      goto LABEL_6;
    default:
LABEL_38:
      v6 = *(_WORD *)(a2 + 24);
      goto LABEL_6;
  }
}
