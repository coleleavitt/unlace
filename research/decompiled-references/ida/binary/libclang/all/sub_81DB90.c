__int64 __fastcall sub_81DB90(__int64 a1, _WORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int16 v5; // ax
  __int64 result; // rax
  char v7; // dl
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // r13
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128i si128; // xmm0
  __int64 *v30; // rax
  unsigned __int8 v31; // al
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r13
  char v40; // al
  __int64 v41; // r14
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  _WORD *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  char v57; // al
  unsigned __int8 v58; // dl
  __m128i v59; // [rsp+0h] [rbp-78h] BYREF
  __int64 v60; // [rsp+10h] [rbp-68h]
  void *v61[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v62; // [rsp+30h] [rbp-48h]

  v3 = (__int64)a2;
  v4 = *(_QWORD *)(a1 + 2160);
  v5 = *a2 & 0x1FF;
  while ( 2 )
  {
    switch ( (v5 + 509) & 0x1FF )
    {
      case 0:
        v9 = *(_QWORD *)(v3 + 8);
        return sub_81DA90(v4, v9);
      case 1:
        v31 = *(_BYTE *)(v3 + 2) >> 3;
        if ( *(_BYTE *)(v3 + 2) > 0x5Fu )
        {
          if ( v31 != 12 )
            return 11;
LABEL_4:
          v3 = *(_QWORD *)(v3 + 16);
LABEL_5:
          v5 = *(_WORD *)v3 & 0x1FF;
          continue;
        }
        if ( v31 <= 9u )
        {
          if ( v31 > 3u )
          {
            if ( v31 == 5 )
              return 0;
          }
          else if ( v31 > 1u && (*(_BYTE *)(v4 + 1) & 8) != 0 )
          {
            return 0;
          }
          return 11;
        }
        v45 = (_WORD *)sub_80F230(*(_QWORD *)(v3 + 16));
        result = sub_81DB90(a1, v45, v46, v47, v48, v49, v59.m128i_i64[0], v59.m128i_i64[1], v60);
        if ( !(_DWORD)result )
        {
          if ( (*v45 & 0x1FF) == 0x21 )
            return 7;
          else
            return 0;
        }
        return result;
      case 2:
      case 4:
      case 5:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0x11:
      case 0x17:
      case 0x19:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x22:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x2B:
      case 0x32:
      case 0x34:
      case 0x35:
      case 0x38:
      case 0x3C:
      case 0x3D:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x48:
      case 0x49:
      case 0x4C:
      case 0x5F:
      case 0x62:
      case 0x64:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x6A:
      case 0x6C:
      case 0x71:
      case 0x73:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x7B:
      case 0x7C:
      case 0x7D:
        return 11;
      case 3:
      case 0x15:
      case 0x16:
      case 0x1A:
      case 0x1E:
      case 0x20:
      case 0x21:
      case 0x29:
      case 0x2A:
      case 0x2F:
      case 0x30:
      case 0x36:
      case 0x39:
      case 0x43:
      case 0x44:
      case 0x5C:
      case 0x5E:
      case 0x6B:
      case 0x7A:
        return 0;
      case 6:
      case 0x2D:
      case 0x3A:
      case 0x3B:
      case 0x63:
        goto LABEL_4;
      case 7:
      case 0x23:
        if ( ((*(_BYTE *)(v3 + 1) >> 1) & 3) != 1 )
          return 11;
        return 0;
      case 8:
        v32 = *(_QWORD *)(v3 + 16);
        v33 = *(_DWORD *)(v32 + 4);
        if ( !v33 )
          return 11;
        v34 = *(_QWORD *)(v32 + 8LL * (unsigned int)(v33 - 1) + 16);
        if ( !v34 || ((*(_WORD *)v34 + 509) & 0x1FFu) > 0x7F )
          return 11;
        v9 = *(_QWORD *)(v34 + 8);
        return sub_81DA90(v4, v9);
      case 0xE:
      case 0xF:
      case 0x18:
      case 0x4D:
        v7 = (*(_BYTE *)(v3 + 1) >> 1) & 3;
        if ( v7 == 1 )
          return 0;
        result = 1;
        if ( v7 == 2 )
          return result;
        if ( (*(_BYTE *)(v4 + 1) & 8) == 0 )
          return 11;
LABEL_15:
        v8 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL);
        result = 8;
        if ( v8 != 47 )
          return (unsigned __int8)(v8 - 2) < 5u ? 9 : 11;
        return result;
      case 0x10:
        if ( *(char *)(v3 + 2) >= 0 || (*(_BYTE *)(v3 + 3) & 1) == 0 || !*(_QWORD *)(v3 + 16) )
          return 0;
        v3 = *(_QWORD *)(v3 + 16);
        goto LABEL_5;
      case 0x12:
      case 0x14:
      case 0x72:
        goto LABEL_17;
      case 0x13:
        if ( *(char *)(v3 + 1) < 0 )
          return 0;
        sub_805650((__int64)v61, *(_QWORD *)(v3 + 32));
        if ( BYTE4(v61[1]) )
        {
          if ( LODWORD(v61[1]) > 0x40 )
          {
LABEL_132:
            v16 = 8LL * *(unsigned int *)v61[0] + 48;
            operator delete[](v61[0]);
            goto LABEL_48;
          }
          v16 = 8LL * LODWORD(v61[0]) + 48;
        }
        else
        {
          if ( LODWORD(v61[1]) > 0x40 )
            goto LABEL_132;
          v16 = 48;
          if ( LODWORD(v61[1]) )
            v16 = 8LL * (unsigned int)((__int64)v61[0] << (64 - LOBYTE(v61[1])) >> (64 - LOBYTE(v61[1]))) + 48;
        }
LABEL_48:
        v3 = *(_QWORD *)(v3 + v16);
        v4 = *(_QWORD *)(a1 + 2160);
        goto LABEL_5;
      case 0x1F:
        if ( (*(_BYTE *)(v3 + 27) & 1) == 0 )
          return 11;
        v17 = *(_QWORD *)(v3 + 16);
        if ( !v17 )
          return 11;
        result = sub_81DA90(v4, *(_QWORD *)(v17 + 80));
        if ( (unsigned int)result > 0xA )
          return 10;
        return result;
      case 0x2C:
        if ( *(_QWORD *)(v3 + 8) == *(_QWORD *)(a1 + 18944) )
        {
          v15 = *(_QWORD *)(v3 + 24);
LABEL_35:
          if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 32 > 5 )
            return 0;
          return 11;
        }
        if ( (*(_BYTE *)(v4 + 1) & 8) == 0 )
        {
          if ( (*(_BYTE *)(v3 + 2) & 8) != 0 )
            return 0;
          v3 = sub_80F230(*(_QWORD *)(v3 + 16));
          v5 = *(_WORD *)v3 & 0x1FF;
          if ( v5 == 33 )
            return 7;
          continue;
        }
        v41 = *(_QWORD *)(v3 + 24);
        v42 = *(_BYTE *)(v41 + 28) & 0x7F;
        if ( (unsigned int)(v42 - 24) > 0x1A )
          return 11;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 48)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 42 <= 1 )
          return 0;
        if ( (unsigned int)(v42 - 38) <= 6 )
        {
          v52 = *(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v41 + 16) & 4) != 0 )
            v52 = *(_QWORD *)v52;
          if ( ((*(_BYTE *)(v52 + 8) + 72) & 0x7Fu) <= 3 )
            return 0;
          return 11;
        }
        if ( (unsigned int)(v42 - 47) > 2 )
        {
          if ( (unsigned int)(v42 - 33) > 3 )
            return 11;
          if ( !(unsigned __int8)sub_7A4F00(*(_QWORD **)(v3 + 24)) )
          {
            if ( !(unsigned __int8)sub_7A5610((_DWORD *)v41) )
              return 11;
            return 6;
          }
          return 0;
        }
        if ( (*(_BYTE *)(v3 + 2) & 8) != 0 )
          return 0;
        v3 = *(_QWORD *)(v3 + 16);
        if ( (*(_WORD *)sub_80F310(v3) & 0x1FF) == 0x21 )
          return 7;
        goto LABEL_5;
      case 0x2E:
        return ((*(_BYTE *)(v3 + 1) >> 1) & 3) != 1;
      case 0x31:
      case 0x61:
      case 0x69:
      case 0x6F:
      case 0x70:
        return 8;
      case 0x33:
        if ( (*(_BYTE *)(v3 + 1) & 6) == 0 )
        {
          if ( (*(_BYTE *)(v4 + 1) & 8) == 0 )
            return 11;
          v57 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                     & 0xFFFFFFFFFFFFFFF0LL)
                         + 16LL);
          if ( v57 == 47 )
            return 8;
          v58 = v57 - 2;
          result = 9;
          if ( v58 > 4u )
            return 11;
          return result;
        }
        v3 = **(_QWORD **)(v3 + 16);
        goto LABEL_5;
      case 0x37:
        if ( (~*(_DWORD *)(v3 + 16) & 0x3FFF8000) == 0 )
          return 11;
        v3 = *(_QWORD *)(v3
                       + 8LL
                       * (((*(_DWORD *)(v3 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v3 + 19) & 0x40) != 0))
                       + 32);
        goto LABEL_5;
      case 0x3E:
        if ( (unsigned __int8)sub_819A40(v3) )
          return 5;
        if ( sub_819A10(v3) )
          return 0;
        goto LABEL_77;
      case 0x42:
        sub_AC4830(v61);
        si128 = _mm_load_si128((const __m128i *)v61);
        v60 = v62;
        v59 = si128;
        v30 = (__int64 *)si128.m128i_i64[0];
        if ( (si128.m128i_i8[8] & 3) != 0 )
          v30 = (__int64 *)sub_ACE280(&v59, v3, v25, v26, v27, v28);
        v3 = *v30;
        goto LABEL_74;
      case 0x45:
        if ( *(_QWORD *)(v3 + 8) == *(_QWORD *)(a1 + 18944) )
        {
          v15 = *(_QWORD *)(v3 + 16);
          goto LABEL_35;
        }
        v35 = *(_QWORD *)(v3 + 16);
        v36 = *(_BYTE *)(v35 + 28) & 0x7F;
        if ( (*(_BYTE *)(v35 + 28) & 0x7Fu) - 33 > 3 )
        {
          if ( (_BYTE)v36 == 45 )
          {
            v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v51 + 16) - 42 <= 1 )
              return 0;
            if ( *(_BYTE *)(v51 + 16) == 47 )
              return 0;
          }
          else
          {
            if ( (unsigned __int8)v36 <= 0x32u )
            {
              v54 = 0x79FC078000000LL;
              if ( _bittest64(&v54, v36) )
                return 0;
            }
            if ( (*(_BYTE *)(v4 + 1) & 8) != 0 )
            {
              v55 = ((_BYTE)v36 + 96) & 0x7F;
              if ( (unsigned __int8)v55 <= 0x25u )
              {
                v56 = 0x200000403FLL;
                if ( _bittest64(&v56, v55) )
                  return 0;
              }
            }
          }
        }
        else
        {
          if ( (unsigned __int8)sub_7A5610((_DWORD *)v35) )
            return 6;
          if ( (unsigned __int8)sub_7A4F00((_QWORD *)v35) )
            return 0;
        }
        return 11;
      case 0x46:
      case 0x47:
        v3 = *(_QWORD *)(v3 + 56);
        goto LABEL_5;
      case 0x4A:
        if ( ((*(_BYTE *)(v3 + 1) >> 1) & 3) != 1 )
          goto LABEL_15;
        return 0;
      case 0x4B:
        if ( *(_BYTE *)(v3 + 48) )
LABEL_17:
          v3 = *(_QWORD *)(v3 + 24);
        else
          v3 = *(_QWORD *)(v3 + 32);
        goto LABEL_5;
      case 0x4E:
      case 0x4F:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
        if ( (*(_BYTE *)(v4 + 1) & 8) == 0 )
          return 11;
        v9 = **(_QWORD **)(v3 + 24);
        return sub_81DA90(v4, v9);
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        v10 = sub_80ED30(v3, a1);
        return sub_81DA90(*(_QWORD *)(a1 + 2160), v10);
      case 0x5D:
        v9 = *(_QWORD *)(*(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        return sub_81DA90(v4, v9);
      case 0x60:
        if ( (*(_BYTE *)(v4 + 89) & 1) != 0 )
          return 0;
        return 11;
      case 0x65:
        return (unsigned int)((unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                                              - 2) <= 4u)
             + 8;
      case 0x6D:
        v24 = sub_8C4900(v3);
        v4 = *(_QWORD *)(a1 + 2160);
        v3 = v24;
        goto LABEL_5;
      case 0x6E:
        v14 = sub_8C4680(v3);
        v4 = *(_QWORD *)(a1 + 2160);
        v3 = v14;
        goto LABEL_5;
      case 0x74:
      case 0x75:
        if ( (*(_BYTE *)(v4 + 1) & 8) == 0 )
          return 11;
        v11 = (*(_WORD *)(v3 + 2) >> 3) & 0x3F;
        if ( (unsigned int)(v11 - 21) <= 0xA )
        {
          if ( ((*(_BYTE *)(*(_QWORD *)(v3 + 16) + 1LL) >> 3) & 7) != 3 )
            return 0;
          return 11;
        }
        if ( v11 == 32 )
        {
          v3 = *(_QWORD *)(v3 + 24);
          v5 = *(_WORD *)v3 & 0x1FF;
        }
        else
        {
          if ( v11 )
          {
            if ( v11 != 1 )
              return 11;
            v53 = *(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 25 <= 1 )
              return 6;
            if ( *(_BYTE *)(v53 + 16) == 13 )
            {
              if ( ((*(_WORD *)(v53 + 18) >> 3) & 0x1FF) != 0x1F2 )
                return 0;
              return 6;
            }
            return 0;
          }
          v44 = *(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
            || *(_BYTE *)(v44 + 16) == 13 && ((*(_WORD *)(v44 + 18) >> 3) & 0x1FF) == 0x1F2 )
          {
            return 6;
          }
          v3 = *(_QWORD *)(v3 + 16);
          v5 = *(_WORD *)v3 & 0x1FF;
        }
        continue;
      case 0x79:
        v18 = *(_QWORD *)(v3 + 24);
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        v20 = *(_BYTE *)(v19 + 16);
        if ( v20 == 13 )
        {
          if ( (((*(_WORD *)(v19 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
            goto LABEL_61;
LABEL_95:
          v18 = *(_QWORD *)(v3 + 16);
          goto LABEL_61;
        }
        if ( v20 != 46 )
        {
          if ( v20 != 10 )
            goto LABEL_61;
          goto LABEL_95;
        }
        v37 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                   & 0xFFFFFFFFFFFFFFF0LL));
        if ( ((*(_BYTE *)(v37 + 74) & 1) != 0 || *(_QWORD *)(v37 + 128) > 7u) && *(char *)(sub_B14A40(v19) + 76) >= 0 )
          goto LABEL_95;
        v18 = *(_QWORD *)(v3 + 24);
LABEL_61:
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 56 > 1 )
        {
          if ( (*(_BYTE *)(v4 + 1) & 0x10) == 0 )
            return 0;
          v38 = *(_QWORD *)(v3 + 24);
          v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          v40 = *(_BYTE *)(v39 + 16);
          switch ( v40 )
          {
            case 13:
              if ( (((*(_WORD *)(v39 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
              {
LABEL_107:
                v3 = sub_80F040(v38);
                if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
                                     - 2) > 4u )
                  return 0;
LABEL_74:
                v4 = *(_QWORD *)(a1 + 2160);
                goto LABEL_5;
              }
              break;
            case 46:
              v50 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL));
              if ( (*(_BYTE *)(v50 + 74) & 1) == 0 && *(_QWORD *)(v50 + 128) <= 7u
                || *(char *)(sub_B14A40(v39) + 76) < 0 )
              {
                v38 = *(_QWORD *)(v3 + 24);
                goto LABEL_107;
              }
              break;
            case 10:
              break;
            default:
              goto LABEL_107;
          }
          v38 = *(_QWORD *)(v3 + 16);
          goto LABEL_107;
        }
        v21 = *(_QWORD *)(v3 + 24);
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        v23 = *(_BYTE *)(v22 + 16);
        switch ( v23 )
        {
          case 13:
            if ( (((*(_WORD *)(v22 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
              goto LABEL_64;
            break;
          case 46:
            v43 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL));
            if ( (*(_BYTE *)(v43 + 74) & 1) == 0 && *(_QWORD *)(v43 + 128) <= 7u || *(char *)(sub_B14A40(v22) + 76) < 0 )
            {
              v21 = *(_QWORD *)(v3 + 24);
LABEL_64:
              v4 = *(_QWORD *)(a1 + 2160);
              v3 = v21;
              goto LABEL_5;
            }
            break;
          case 10:
            break;
          default:
            goto LABEL_64;
        }
LABEL_77:
        v3 = *(_QWORD *)(v3 + 16);
        v4 = *(_QWORD *)(a1 + 2160);
        goto LABEL_5;
      case 0x7E:
        if ( (*(_BYTE *)(v4 + 1) & 8) == 0 )
          return 11;
        v12 = *(_QWORD *)(v3 + 40);
        v13 = *(_QWORD *)(v3 + 32);
        return sub_81E630(a1, v13, v12);
      case 0x7F:
        if ( (*(_BYTE *)(v4 + 1) & 8) == 0 )
          return 11;
        v12 = *(_QWORD *)(v3 + 48);
        v13 = *(_QWORD *)(v3 + 40);
        return sub_81E630(a1, v13, v12);
    }
  }
}

