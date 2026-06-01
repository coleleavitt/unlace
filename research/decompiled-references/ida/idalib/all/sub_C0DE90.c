__int64 __fastcall sub_C0DE90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  __m128i *v8; // rdx
  __int64 v9; // rbp
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // r13
  char v20; // al
  unsigned int *v21; // rdi
  __int64 v22; // r13
  _WORD *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rax
  char v28; // dl
  __int64 v29; // rbp
  unsigned __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  _WORD *v37; // rbx
  char v38; // dl
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // r13
  char v43; // al
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rbx
  __int64 v55; // rax
  char v56; // dl
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  __m128i *v59; // [rsp+0h] [rbp-98h]
  __m128i *v60; // [rsp+0h] [rbp-98h]
  __m128i *v61; // [rsp+0h] [rbp-98h]
  __m128i *v62; // [rsp+0h] [rbp-98h]
  __m128i *v63; // [rsp+0h] [rbp-98h]
  __m128i *v64; // [rsp+0h] [rbp-98h]
  __m128i *v65; // [rsp+0h] [rbp-98h]
  __m128i *v66; // [rsp+8h] [rbp-90h]
  __m128i si128; // [rsp+10h] [rbp-88h] BYREF
  __int64 v68; // [rsp+20h] [rbp-78h]
  void *v69[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v70; // [rsp+40h] [rbp-58h]

  v6 = a2;
  v7 = *(_QWORD *)(a1 + 2320);
  v8 = &si128;
  while ( 2 )
  {
    switch ( (*(_WORD *)v6 + 509) & 0x1FF )
    {
      case 0:
        return sub_C0DDA0(a1, *(_QWORD *)(v6 + 8), (__int64)v8, a4);
      case 1:
        switch ( *(_BYTE *)(v6 + 2) >> 3 )
        {
          case 2:
          case 3:
            if ( (*(_BYTE *)(v7 + 1) & 8) == 0 )
              return 11;
            return 0;
          case 5:
            return 0;
          case 10:
          case 11:
            v37 = (_WORD *)sub_BFB9F0(*(_QWORD *)(v6 + 16));
            result = sub_C0DE90(a1, v37);
            if ( (_DWORD)result )
              return result;
            if ( (*v37 & 0x1FF) == 0x20 )
              return 7;
            return 0;
          case 12:
            goto LABEL_3;
          default:
            return 11;
        }
      case 2:
      case 3:
      case 4:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0x10:
      case 0x16:
      case 0x18:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x2A:
      case 0x31:
      case 0x33:
      case 0x34:
      case 0x37:
      case 0x3B:
      case 0x3C:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x47:
      case 0x48:
      case 0x4B:
      case 0x5E:
      case 0x61:
      case 0x63:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x69:
      case 0x6B:
      case 0x70:
      case 0x72:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x7A:
      case 0x7B:
      case 0x7C:
        return 11;
      case 5:
      case 0x2C:
      case 0x39:
      case 0x3A:
      case 0x62:
LABEL_3:
        v6 = *(_QWORD *)(v6 + 16);
        continue;
      case 6:
      case 0x22:
        if ( ((*(_BYTE *)(v6 + 1) >> 1) & 3) != 1 )
          return 11;
        return 0;
      case 7:
        v24 = *(_QWORD *)(v6 + 16);
        v25 = *(_DWORD *)(v24 + 4);
        if ( !v25 )
          return 11;
        v26 = *(_QWORD *)(v24 + 8LL * (unsigned int)(v25 - 1) + 16);
        if ( !v26 || ((*(_WORD *)v26 + 509) & 0x1FFu) > 0x7E )
          return 11;
        return sub_C0DDA0(a1, *(_QWORD *)(v26 + 8), v26, a4);
      case 0xD:
      case 0xE:
      case 0x17:
      case 0x4C:
        return sub_C0DD40(v7, v6, (*(_BYTE *)(v6 + 1) >> 1) & 3);
      case 0xF:
        v14 = *(_QWORD *)v6;
        a4 = *(_QWORD *)v6 >> 16;
        if ( (BYTE2(*(_QWORD *)v6) & 0x80u) == 0 )
          return 0;
        v6 = *(_QWORD *)(v6 + 16);
        v15 = v14 >> 24;
        if ( !v6 )
          return 0;
        if ( (v15 & 1) != 0 )
          continue;
        return 0;
      case 0x11:
      case 0x13:
      case 0x71:
        goto LABEL_12;
      case 0x12:
        v59 = v8;
        if ( (*(_DWORD *)v6 & 0x8000) != 0 )
          return 0;
        a2 = *(_QWORD *)(v6 + 32);
        sub_BF7A50((__int64)v69, a2);
        v8 = v59;
        if ( BYTE4(v69[1]) )
        {
          v21 = (unsigned int *)v69[0];
          if ( LODWORD(v69[1]) > 0x40 )
          {
LABEL_124:
            v22 = 8LL * *v21 + 40;
            operator delete[](v21);
            v8 = v59;
            goto LABEL_43;
          }
          v22 = 8LL * LODWORD(v69[0]) + 40;
        }
        else
        {
          v21 = (unsigned int *)v69[0];
          if ( LODWORD(v69[1]) > 0x40 )
            goto LABEL_124;
          v22 = 40;
          if ( LODWORD(v69[1]) )
          {
            a4 = (unsigned int)(64 - LODWORD(v69[1]));
            v22 = 8LL * (unsigned int)((__int64)v69[0] << (64 - LOBYTE(v69[1])) >> (64 - LOBYTE(v69[1]))) + 40;
          }
        }
LABEL_43:
        v6 = *(_QWORD *)(v6 + v22);
        v7 = *(_QWORD *)(a1 + 2320);
        continue;
      case 0x14:
      case 0x15:
      case 0x19:
      case 0x1D:
      case 0x1F:
      case 0x20:
      case 0x28:
      case 0x29:
      case 0x2E:
      case 0x2F:
      case 0x35:
      case 0x38:
      case 0x42:
      case 0x43:
      case 0x5B:
      case 0x5D:
      case 0x6A:
      case 0x79:
        return 0;
      case 0x1E:
        if ( (*(_BYTE *)(v6 + 27) & 1) == 0 )
          return 11;
        v32 = *(_QWORD *)(v6 + 16);
        if ( !v32 )
          return 11;
        result = sub_C0DDA0(a1, *(_QWORD *)(v32 + 80), (__int64)v8, a4);
        if ( (_DWORD)result == 11 )
          return 10;
        return result;
      case 0x2B:
        if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(a1 + 19104) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v6 + 24) + 28LL) & 0x7Fu) - 34 > 5 )
            return 0;
          return 11;
        }
        if ( (*(_BYTE *)(v7 + 1) & 8) == 0 )
        {
          if ( (*(_QWORD *)v6 & 0x80000LL) != 0 )
            return 0;
          v23 = (_WORD *)sub_BFB9F0(*(_QWORD *)(v6 + 16));
          if ( (*v23 & 0x1FF) != 0x20 )
            return sub_C0DE90(a1, v23);
          return 7;
        }
        v9 = *(_QWORD *)(v6 + 24);
        v10 = *(_BYTE *)(v9 + 28) & 0x7F;
        if ( (unsigned int)(v10 - 26) <= 0x1A
          && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 <= 1 )
        {
          return 0;
        }
        if ( (unsigned int)(v10 - 40) <= 6 )
        {
          v11 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
            v11 = *(_QWORD *)v11;
          if ( ((*(_BYTE *)(v11 + 8) + 70) & 0x7Fu) > 3 )
            return 11;
          return 0;
        }
        if ( (unsigned int)(v10 - 49) <= 2 )
        {
          if ( (*(_QWORD *)v6 & 0x80000LL) == 0 )
          {
            v54 = *(_QWORD *)(v6 + 16);
            if ( (*(_WORD *)sub_BFBAE0(v54) & 0x1FF) != 0x20 )
              return sub_C0DE90(a1, v54);
            return 7;
          }
          return 0;
        }
        if ( (unsigned int)(v10 - 35) > 3 )
          return 11;
        if ( sub_B979F0(*(_QWORD **)(v6 + 24)) )
          return 0;
        v56 = sub_B98200((_QWORD *)v9, a2);
        result = 6;
        if ( !v56 )
          return 11;
        return result;
      case 0x2D:
        return ((*(_BYTE *)(v6 + 1) >> 1) & 3) != 1;
      case 0x30:
      case 0x60:
      case 0x68:
      case 0x6E:
      case 0x6F:
        return 8;
      case 0x32:
        if ( (*(_BYTE *)(v6 + 1) & 6) == 0 )
          return sub_C0DD40(v7, v6, 0);
        v6 = **(_QWORD **)(v6 + 16);
        continue;
      case 0x36:
        if ( (*(_DWORD *)(v6 + 16) & 0x3FFF8000) == 0x3FFF8000 )
          return 11;
        a2 = (*(_DWORD *)(v6 + 16) >> 15) & 0x7FFF;
        a4 = (*(_BYTE *)(v6 + 19) & 0x40) != 0;
        v6 = *(_QWORD *)(v6 + 8LL * (unsigned int)(a4 + a2) + 32);
        continue;
      case 0x3D:
        v62 = v8;
        if ( (unsigned __int8)sub_C00430(v6) )
          return 5;
        if ( sub_C00400(v6) )
          return 0;
        v6 = *(_QWORD *)(v6 + 16);
LABEL_84:
        v7 = *(_QWORD *)(a1 + 2320);
        v8 = v62;
        continue;
      case 0x41:
        a2 = v6;
        v61 = v8;
        sub_EE9E50(v69, v6);
        v8 = v61;
        si128 = _mm_load_si128((const __m128i *)v69);
        v68 = v70;
        if ( (si128.m128i_i8[8] & 3) != 0 )
        {
          v31 = (__int64 *)sub_EF2B30(v61);
          v8 = v61;
        }
        else
        {
          v31 = (__int64 *)si128.m128i_i64[0];
        }
        v6 = *v31;
        v7 = *(_QWORD *)(a1 + 2320);
        continue;
      case 0x44:
        v29 = *(_QWORD *)(v6 + 16);
        v30 = *(_BYTE *)(v29 + 28) & 0x7F;
        if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(a1 + 19104) )
        {
          if ( (unsigned int)(unsigned __int8)v30 - 34 <= 5 )
            return 11;
          return 0;
        }
        if ( (unsigned int)(unsigned __int8)v30 - 35 > 3 )
        {
          if ( (_BYTE)v30 == 47 )
          {
            v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v51 + 16) - 43 <= 1 )
              return 0;
            if ( *(_BYTE *)(v51 + 16) == 48 )
              return 0;
          }
          else
          {
            if ( (unsigned __int8)v30 <= 0x34u )
            {
              v13 = 0x1E7F01E0000000LL;
              if ( _bittest64(&v13, v30) )
                return 0;
            }
            if ( (*(_BYTE *)(v7 + 1) & 8) != 0 )
            {
              v57 = ((_BYTE)v30 + 94) & 0x7F;
              if ( (unsigned __int8)v57 <= 0x25u )
              {
                v58 = 0x200000403FLL;
                if ( _bittest64(&v58, v57) )
                  return 0;
              }
            }
          }
        }
        else
        {
          v38 = sub_B98200(*(_QWORD **)(v6 + 16), a2);
          result = 6;
          if ( v38 )
            return result;
          if ( sub_B979F0((_QWORD *)v29) )
            return 0;
        }
        return 11;
      case 0x45:
      case 0x46:
        v6 = *(_QWORD *)(v6 + 56);
        continue;
      case 0x49:
        if ( ((*(_BYTE *)(v6 + 1) >> 1) & 3) == 1 )
          return 0;
        v28 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                   & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL);
        result = 8;
        if ( v28 != 48 )
          return (unsigned __int8)(v28 - 2) < 5u ? 9 : 11;
        return result;
      case 0x4A:
        if ( (*(_BYTE *)(v6 + 2) & 8) != 0 )
LABEL_12:
          v6 = *(_QWORD *)(v6 + 24);
        else
          v6 = *(_QWORD *)(v6 + 32);
        continue;
      case 0x4D:
      case 0x4E:
      case 0x4F:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        if ( (*(_BYTE *)(v7 + 1) & 8) == 0 )
          return 11;
        return sub_C0DDA0(a1, **(_QWORD **)(v6 + 24), (__int64)v8, a4);
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
        v33 = sub_BFB6C0(v6, a1, (__int64)v8, a4);
        return sub_C0DDA0(a1, v33, v34, v35);
      case 0x5C:
        return sub_C0DDA0(a1, *(_QWORD *)(*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL), (__int64)v8, a4);
      case 0x5F:
        if ( (*(_BYTE *)(v7 + 89) & 1) == 0 )
          return 11;
        return 0;
      case 0x64:
        return (unsigned int)((unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                                              - 2) < 5u)
             + 8;
      case 0x6C:
        v60 = v8;
        v27 = sub_C94CC0(v6);
        v7 = *(_QWORD *)(a1 + 2320);
        v8 = v60;
        v6 = v27;
        continue;
      case 0x6D:
        v63 = v8;
        v36 = sub_C94C80(v6);
        v7 = *(_QWORD *)(a1 + 2320);
        v8 = v63;
        v6 = v36;
        continue;
      case 0x73:
      case 0x74:
        if ( (*(_BYTE *)(v7 + 1) & 8) == 0 )
          return 11;
        v16 = (*(_WORD *)(v6 + 2) >> 3) & 0x3F;
        if ( (unsigned int)(v16 - 21) > 0xA )
        {
          if ( v16 == 32 )
            return sub_C0DE90(a1, *(_QWORD *)(v6 + 24));
          if ( v16 )
          {
            if ( v16 != 1 )
              return 11;
            v53 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 25 > 1 )
            {
              if ( *(_BYTE *)(v53 + 16) != 13 )
                return 0;
              if ( ((*(_WORD *)(v53 + 18) >> 3) & 0x1FF) != 0x1F3 )
                return 0;
            }
          }
          else
          {
            v46 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 25 > 1
              && (*(_BYTE *)(v46 + 16) != 13 || ((*(_WORD *)(v46 + 18) >> 3) & 0x1FF) != 0x1F3) )
            {
              return sub_C0DE90(a1, *(_QWORD *)(v6 + 16));
            }
          }
          return 6;
        }
        if ( ((*(_BYTE *)(*(_QWORD *)(v6 + 16) + 1LL) >> 3) & 7) == 3 )
          return 11;
        return 0;
      case 0x78:
        v17 = *(_QWORD *)(v6 + 24);
        a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL);
        v18 = *(_BYTE *)(a2 + 16);
        if ( v18 == 13 )
        {
          if ( (((*(_WORD *)(a2 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
            goto LABEL_28;
LABEL_95:
          v17 = *(_QWORD *)(v6 + 16);
          goto LABEL_28;
        }
        if ( v18 != 47 )
        {
          if ( v18 != 10 )
            goto LABEL_28;
          goto LABEL_95;
        }
        v66 = v8;
        v39 = sub_F60F10(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
                a2,
                v8,
                v17,
                a5);
        v8 = v66;
        if ( (*(_BYTE *)(v39 + 74) & 1) != 0 || (*(_QWORD *)(v39 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v50 = sub_F60F10(a2, a2, v66, v40, a5);
          v8 = v66;
          if ( *(char *)(v50 + 76) >= 0 )
            goto LABEL_95;
        }
        v17 = *(_QWORD *)(v6 + 24);
LABEL_28:
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 57 > 1 )
        {
          if ( (*(_BYTE *)(v7 + 1) & 0x10) == 0 )
            return 0;
          v41 = *(_QWORD *)(v6 + 24);
          v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          v43 = *(_BYTE *)(v42 + 16);
          switch ( v43 )
          {
            case 13:
              if ( (((*(_WORD *)(v42 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
                break;
LABEL_123:
              v41 = *(_QWORD *)(v6 + 16);
              break;
            case 47:
              v65 = v8;
              v47 = sub_F60F10(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL),
                      a2,
                      v8,
                      v17,
                      a5);
              v8 = v65;
              if ( (*(_BYTE *)(v47 + 74) & 1) != 0 || (*(_QWORD *)(v47 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v55 = sub_F60F10(v42, a2, v65, v48, v49);
                v8 = v65;
                if ( *(char *)(v55 + 76) >= 0 )
                  goto LABEL_123;
              }
              v41 = *(_QWORD *)(v6 + 24);
              break;
            case 10:
              goto LABEL_123;
          }
          v62 = v8;
          v6 = sub_BFB840(v41);
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
                               - 2) > 4u )
            return 0;
          goto LABEL_84;
        }
        a4 = *(_QWORD *)(v6 + 24);
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        v20 = *(_BYTE *)(v19 + 16);
        switch ( v20 )
        {
          case 13:
            if ( (((*(_WORD *)(v19 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
              goto LABEL_31;
            break;
          case 47:
            v64 = v8;
            v44 = sub_F60F10(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL),
                    a2,
                    v8,
                    a4,
                    a5);
            v8 = v64;
            if ( (*(_BYTE *)(v44 + 74) & 1) == 0 && (*(_QWORD *)(v44 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
              || (v52 = sub_F60F10(v19, a2, v64, v45, a5), v8 = v64, *(char *)(v52 + 76) < 0) )
            {
              a4 = *(_QWORD *)(v6 + 24);
LABEL_31:
              v7 = *(_QWORD *)(a1 + 2320);
              v6 = a4;
              continue;
            }
            break;
          case 10:
            break;
          default:
            goto LABEL_31;
        }
        v6 = *(_QWORD *)(v6 + 16);
        v7 = *(_QWORD *)(a1 + 2320);
        continue;
      case 0x7D:
        if ( (*(_BYTE *)(v7 + 1) & 8) == 0 )
          return 11;
        return sub_C0EA40(a1, *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 40));
      case 0x7E:
        if ( (*(_BYTE *)(v7 + 1) & 8) == 0 )
          return 11;
        return sub_C0EA40(a1, *(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48));
    }
  }
}
