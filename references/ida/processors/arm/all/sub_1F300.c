__int64 __fastcall sub_1F300(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned int next_dword; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ecx
  __int16 v14; // ax
  int v15; // edx
  int v16; // eax
  int v17; // ebp
  __int64 v18; // rax
  unsigned int v19; // eax
  __int16 v20; // ax
  char v21; // al
  unsigned __int64 v22; // rdx
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  __int16 v27; // ax
  int v28; // eax
  __int16 v29; // dx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int16 v34; // ax
  __int16 v35; // dx
  __int64 v36; // rsi
  char v37; // al
  __int16 v38; // ax
  int v39; // eax
  __int16 v40; // di
  __int64 v41; // rdx
  char v42; // al
  unsigned int v43; // ebp
  __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  char v49; // cl
  _BYTE *v50; // rax
  __int64 v51; // rax
  int v52; // esi
  int v53; // r8d
  int v54; // eax
  char v55; // dl
  int v56; // eax
  __int64 v57; // rax
  __int16 v58; // ax
  char v59; // cl
  __int64 v60; // rsi
  char *v61; // rsi
  _BYTE *v62; // rdx
  int v63; // ecx
  int v64; // r8d
  __int16 v65; // ax
  __int16 v66; // ax
  __int64 v67; // r12
  _DWORD *v68; // rdi
  _DWORD *v69; // rsi
  __int64 i; // rcx
  int v71; // ebp
  __int16 v72; // di
  int v73; // edx
  int v74; // ecx
  __int64 v75; // rax
  char *v76; // rax
  char v77; // al
  __int16 v78; // ax
  __int64 v79; // rsi
  __int64 v80; // rax
  char v81; // al
  __int16 v82; // dx
  __int16 v83; // cx
  char *v84; // rax
  char v85; // al
  __int16 v86; // ax
  int v87; // ebp
  __int16 v88; // ax
  __int64 v89; // [rsp+0h] [rbp-38h]
  __int64 v90; // [rsp+8h] [rbp-30h]
  __int64 v91; // [rsp+10h] [rbp-28h]

  v3 = *(_QWORD *)(a2 + 8) & 3LL;
  if ( (*(_QWORD *)(a2 + 8) & 3) != 0 )
    return 0;
  next_dword = insn_get_next_dword();
  if ( (unsigned __int8)getinf_flag(3, 32, v9, v10, v11, v12, v89, v90, v91) && *(_BYTE *)(a1 + 288) )
    next_dword = _byteswap_ulong(next_dword);
  if ( (unsigned __int8)sub_6A990(a1, a2, next_dword, 0) )
    return *(unsigned __int16 *)(a2 + 26);
  v13 = next_dword >> 28;
  *(_BYTE *)(a2 + 32) = next_dword >> 28;
  switch ( HIBYTE(next_dword) & 0xF )
  {
    case 0:
      if ( (next_dword & 0xF0000F0) != 0x90 )
        goto LABEL_49;
      v34 = word_891D0[(next_dword >> 21) & 7];
      *(_WORD *)(a2 + 24) = v34;
      if ( v34 > 0x28u )
      {
        if ( v34 != 236 )
        {
          if ( v34 != 279 )
            goto LABEL_114;
          goto LABEL_112;
        }
      }
      else if ( v34 <= 0x24u )
      {
        if ( !v34 )
          return 0;
        if ( (unsigned __int16)(v34 - 28) > 1u )
        {
LABEL_114:
          if ( (next_dword & 0x100000) != 0 )
            *(_DWORD *)(a2 + 28) |= 1u;
          return *(unsigned __int16 *)(a2 + 26);
        }
LABEL_112:
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = next_dword & 0xF;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 2;
        *(_WORD *)(a2 + 126) = (next_dword >> 8) & 0xF;
        v35 = (unsigned __int16)next_dword >> 12;
        if ( v34 == 28 )
        {
          if ( (_BYTE)v35 )
            return 0;
        }
        else
        {
          *(_BYTE *)(a2 + 161) = 1;
          *(_WORD *)(a2 + 166) = (unsigned __int8)v35;
          *(_BYTE *)(a2 + 165) = 2;
        }
        goto LABEL_114;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
      *(_BYTE *)(a2 + 121) = 1;
      *(_WORD *)(a2 + 126) = next_dword & 0xF;
      *(_BYTE *)(a2 + 125) = 2;
      *(_BYTE *)(a2 + 161) = 1;
      *(_WORD *)(a2 + 166) = (next_dword >> 8) & 0xF;
      *(_BYTE *)(a2 + 165) = 2;
      goto LABEL_114;
    case 1:
LABEL_49:
      v25 = next_dword;
      BYTE1(v25) = BYTE1(next_dword) & 0xFD;
      if ( v25 == -251592704 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = 189;
        *(_BYTE *)(a2 + 41) = 13;
        qstrncpy();
        v14 = *(_WORD *)(a2 + 24);
        goto LABEL_11;
      }
      v26 = next_dword & 0xF9000F0;
      if ( (next_dword & 0xF9000F0) == 0x1000060 )
      {
        if ( (~next_dword & 0x600000) == 0 && ((next_dword >> 4) & 0xFFF0 | next_dword & 0xF) == 0xE )
        {
          *(_WORD *)(a2 + 24) = 429;
          return *(unsigned __int16 *)(a2 + 26);
        }
        return 0;
      }
      if ( v26 == 16777328 )
      {
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 73) = 0;
        *(_QWORD *)(a2 + 64) = 0;
        *(_QWORD *)(a2 + 48) = next_dword & 0xF | (next_dword >> 4) & 0xFFF0;
        v38 = word_891C0[(next_dword >> 21) & 3];
        *(_WORD *)(a2 + 24) = v38;
        if ( v38 )
          return *(unsigned __int16 *)(a2 + 26);
        return 0;
      }
      if ( (next_dword & 0xFFF1FE20) == 0xF1000000 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = 169;
        if ( (next_dword & 0x80000) == 0 )
        {
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = next_dword & 0x1F;
          *(_BYTE *)(a2 + 73) = 0;
          *(_QWORD *)(a2 + 64) = 0;
          return *(unsigned __int16 *)(a2 + 26);
        }
        *(_BYTE *)(a2 + 41) = 13;
        *(_WORD *)(a2 + 24) = ((next_dword & 0x40000) == 0) + 170;
        v50 = (_BYTE *)(a2 + 48);
        if ( (next_dword & 0x100) != 0 )
        {
          *(_BYTE *)(a2 + 48) = 65;
          v50 = (_BYTE *)(a2 + 49);
        }
        if ( (next_dword & 0x80u) != 0 )
          *v50++ = 73;
        if ( (next_dword & 0x40) != 0 )
          *v50++ = 70;
        *v50 = 0;
        v14 = *(_WORD *)(a2 + 24);
        if ( (next_dword & 0x20000) != 0 )
        {
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 85) = 2;
          *(_QWORD *)(a2 + 88) = next_dword & 0x1F;
          *(_BYTE *)(a2 + 113) = 0;
          *(_QWORD *)(a2 + 104) = 0;
        }
        goto LABEL_11;
      }
      if ( v26 != 0x1000000 || (next_dword & 0xC00) != 0 )
        goto LABEL_54;
      v52 = ((int)next_dword >> 12) & 0xF;
      v53 = next_dword & 0x200000;
      if ( (next_dword & 0x200000) != 0 && v52 != 15 )
      {
        if ( (next_dword & 0xE000090) == 0x90 && (next_dword & 0x100040) != 0x40 )
        {
LABEL_222:
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
          v54 = (next_dword >> 5) & 3;
          switch ( v54 )
          {
            case 2:
              v56 = *(_DWORD *)(a2 + 28);
              v55 = 0;
              BYTE1(v56) |= 4u;
              goto LABEL_226;
            case 3:
              v56 = *(_DWORD *)(a2 + 28);
              v55 = 1;
              BYTE1(v56) |= 8u;
              goto LABEL_226;
            case 1:
              v56 = *(_DWORD *)(a2 + 28);
              v55 = 1;
              BYTE1(v56) |= 0x10u;
LABEL_226:
              *(_DWORD *)(a2 + 28) = v56;
              v57 = *(unsigned __int16 *)(a2 + 24);
              *(_BYTE *)(a2 + 85) = v55;
              if ( (*((_BYTE *)&off_A5A60 + 16 * v57 + 9) & 1) != 0 )
                *(_BYTE *)(a2 + 45) = v55;
              sub_1E550(a1, a2, a2 + 80, next_dword);
              v14 = *(_WORD *)(a2 + 24);
              goto LABEL_11;
          }
          if ( (next_dword & 0xF800FF0) == 0x1800F90 )
            goto LABEL_252;
LABEL_57:
          if ( (next_dword & 0xF900090) != 0x1000080 )
          {
            if ( (next_dword & 0xE0000D0) != 0xD0 )
            {
LABEL_59:
              if ( (next_dword & 0xFFFFF00) == 0x320F000 )
              {
                sub_1E6A0(a2, (unsigned __int8)next_dword);
                v14 = *(_WORD *)(a2 + 24);
                goto LABEL_11;
              }
              goto LABEL_60;
            }
            goto LABEL_256;
          }
          goto LABEL_243;
        }
        goto LABEL_56;
      }
      v72 = next_dword & 0xF;
      if ( !v53 && (next_dword & 0xF) != 0 )
        goto LABEL_54;
      v73 = ((int)next_dword >> 22) & 1;
      v74 = ((int)next_dword >> 8) & 1;
      if ( (next_dword & 0x200) != 0 )
      {
        v75 = 4LL * ((16 * v74) | ((int)next_dword >> 16) & 0xF);
        if ( v53 )
        {
          if ( v73 )
            v76 = (char *)&unk_893E0 + v75;
          else
            v76 = (char *)&unk_89460 + v75;
          if ( *(_WORD *)v76 != 0xFFFF )
          {
            *(_WORD *)(a2 + 46) = *(_WORD *)v76;
            v77 = v76[2];
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 86) = v72;
            *(_BYTE *)(a2 + 72) = v77 | 0x80;
            v78 = 27;
LABEL_279:
            *(_BYTE *)(a2 + 81) = 1;
            *(_BYTE *)(a2 + 85) = 2;
            *(_WORD *)(a2 + 24) = v78;
            return *(unsigned __int16 *)(a2 + 26);
          }
LABEL_319:
          if ( (next_dword & 0xE000090) != 0x90 )
          {
            if ( (next_dword & 0xF900090) != 0x1000080 )
            {
              if ( (next_dword & 0xE0000D0) != 0xD0 )
              {
LABEL_60:
                if ( (next_dword & 0xFB0F000) == 0x320F000 )
                {
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_WORD *)(a2 + 24) = 27;
                  *(_BYTE *)(a2 + 45) = 2;
                  *(_BYTE *)(a2 + 72) = BYTE2(next_dword) & 0xF;
                  *(_WORD *)(a2 + 46) = (next_dword & 0x400000) == 0 ? 16 : 18;
                  sub_1DC40(a2, a2 + 80, next_dword, a3);
                  if ( *(_BYTE *)(a2 + 81) != 8 )
                    goto LABEL_19;
                  return 0;
                }
                if ( (next_dword & 0xFB00000) != 0x3000000 )
                {
LABEL_67:
                  v28 = (next_dword >> 21) & 0xF;
                  *(_WORD *)(a2 + 24) = v28 + 10;
                  switch ( v28 )
                  {
                    case 8:
                    case 10:
                      goto LABEL_75;
                    case 9:
                      v31 = next_dword & 0xFF000F0;
                      if ( (next_dword & 0xFF000F0) == 0x1200010 )
                      {
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_WORD *)(a2 + 24) = 41;
                        *(_WORD *)(a2 + 46) = next_dword & 0xF;
                        *(_BYTE *)(a2 + 45) = 2;
                        return *(unsigned __int16 *)(a2 + 26);
                      }
                      if ( v31 == 18874416 )
                      {
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_WORD *)(a2 + 24) = 47;
                        *(_WORD *)(a2 + 46) = next_dword & 0xF;
                        *(_BYTE *)(a2 + 45) = 2;
                        return *(unsigned __int16 *)(a2 + 26);
                      }
                      if ( v31 == 18874400 )
                      {
                        *(_WORD *)(a2 + 24) = 166;
                        *(_WORD *)(a2 + 46) = next_dword & 0xF;
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_BYTE *)(a2 + 45) = 2;
                        return *(unsigned __int16 *)(a2 + 26);
                      }
LABEL_81:
                      if ( v31 == 23068688 )
                      {
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_WORD *)(a2 + 24) = 48;
                        *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                        *(_BYTE *)(a2 + 45) = 2;
                        *(_WORD *)(a2 + 86) = next_dword & 0xF;
                        *(_BYTE *)(a2 + 81) = 1;
                        *(_BYTE *)(a2 + 85) = 2;
                        return *(unsigned __int16 *)(a2 + 26);
                      }
LABEL_75:
                      if ( (~(next_dword >> 12) & 0xF) == 0 )
                        *(_DWORD *)(a2 + 28) |= 0x2000u;
                      *(_BYTE *)(a2 + 41) = 1;
                      *(_BYTE *)(a2 + 45) = 2;
                      *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
                      sub_1DC40(a2, a2 + 80, next_dword, a3);
                      v14 = *(_WORD *)(a2 + 24);
                      goto LABEL_11;
                    case 11:
                      v31 = next_dword & 0xFF000F0;
                      goto LABEL_81;
                    case 13:
                      if ( next_dword == -509546482 )
                      {
                        if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
                        {
                          *(_WORD *)(a2 + 24) = 1;
                          *(_BYTE *)(a2 + 41) = 0;
                          *(_BYTE *)(a2 + 81) = 0;
                          return *(unsigned __int16 *)(a2 + 26);
                        }
                        *(_WORD *)(a2 + 46) = 15;
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_BYTE *)(a2 + 45) = 2;
                        sub_1DC40(a2, a2 + 80, 0xE1A0F00E, a3);
                        v14 = *(_WORD *)(a2 + 24);
                      }
                      else
                      {
                        if ( next_dword == -509607936 )
                        {
                          *(_BYTE *)(a2 + 41) = 0;
                          *(_WORD *)(a2 + 24) = 2;
                          *(_BYTE *)(a2 + 81) = 0;
                          return *(unsigned __int16 *)(a2 + 26);
                        }
LABEL_78:
                        *(_BYTE *)(a2 + 41) = 1;
                        *(_BYTE *)(a2 + 45) = 2;
                        *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                        sub_1DC40(a2, a2 + 80, next_dword, a3);
                        if ( (next_dword & 0x100000) == 0 )
                          goto LABEL_19;
                        *(_DWORD *)(a2 + 28) |= 1u;
                        v14 = *(_WORD *)(a2 + 24);
                      }
                      break;
                    case 15:
                      goto LABEL_78;
                    default:
                      *(_BYTE *)(a2 + 41) = 1;
                      *(_BYTE *)(a2 + 45) = 2;
                      *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                      *(_BYTE *)(a2 + 81) = 1;
                      *(_BYTE *)(a2 + 85) = 2;
                      *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
                      sub_1DC40(a2, a2 + 120, next_dword, a3);
                      if ( (next_dword & 0x100000) != 0 )
                        *(_DWORD *)(a2 + 28) |= 1u;
                      v14 = *(_WORD *)(a2 + 24);
                      if ( (v14 & 0xFFFD) != 0xC )
                        goto LABEL_11;
                      if ( *(_WORD *)(a2 + 86) != 15 || *(_BYTE *)(a2 + 121) != 5 )
                        return *(unsigned __int16 *)(a2 + 26);
                      v32 = *(_QWORD *)(a2 + 128);
                      if ( v14 == 12 )
                        v32 = -v32;
                      v33 = *(_QWORD *)(a2 + 8);
                      *(_BYTE *)(a2 + 81) = 5;
                      *(_BYTE *)(a2 + 85) = 2;
                      *(_BYTE *)(a2 + 113) = 0;
                      *(_QWORD *)(a2 + 88) = v32 + v33 + 8;
                      *(_QWORD *)(a2 + 104) = 0;
                      *(_BYTE *)(a2 + 121) = 0;
                      *(_WORD *)(a2 + 24) = 44;
                      if ( !a3 )
                        return *(unsigned __int16 *)(a2 + 26);
                      sub_1DB20(a3, 12, 12, 0);
                      v14 = *(_WORD *)(a2 + 24);
                      goto LABEL_11;
                  }
                  goto LABEL_11;
                }
                v27 = 269;
                if ( (next_dword & 0xF00000) == 0 )
                {
                  *(_DWORD *)(a2 + 28) |= 0x200u;
                  v27 = 23;
                }
                *(_WORD *)(a2 + 24) = v27;
                *(_BYTE *)(a2 + 41) = 1;
                *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                *(_BYTE *)(a2 + 45) = 2;
                *(_BYTE *)(a2 + 81) = 5;
                *(_BYTE *)(a2 + 85) = 2;
                *(_BYTE *)(a2 + 113) = 0;
                *(_QWORD *)(a2 + 88) = (next_dword >> 4) & 0xF000 | next_dword & 0xFFF;
                *(_QWORD *)(a2 + 104) = 0;
                if ( !a3 )
                  return *(unsigned __int16 *)(a2 + 26);
                if ( (get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0xF000000) != 0x5000000 )
                  goto LABEL_19;
                sub_1DB20(a3, 12, 12, 0);
                sub_1DB20(a3, 20, 20, 16);
                v14 = *(_WORD *)(a2 + 24);
LABEL_11:
                if ( v14 )
                  return *(unsigned __int16 *)(a2 + 26);
                return 0;
              }
LABEL_256:
              *(_BYTE *)(a2 + 41) = 1;
              *(_BYTE *)(a2 + 45) = 2;
              *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
              if ( (unsigned __int16)next_dword >> 12 == 14 || (next_dword & 0x1000) != 0 )
                return 0;
              v67 = a2 + 80;
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 2) == 0 )
              {
                v68 = (_DWORD *)(a2 + 80);
                v69 = (_DWORD *)(a2 + 40);
                for ( i = 9; i; --i )
                  *v68++ = *v69++;
                v67 = a2 + 120;
                ++*(_WORD *)(a2 + 86);
              }
              sub_1E550(a1, a2, v67, next_dword);
              if ( (*(_BYTE *)(a2 + 28) & 4) != 0 )
                return 0;
              *(_BYTE *)(v67 + 5) = 2;
              v71 = next_dword & 0x20;
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 2) != 0 )
              {
                v58 = 872 - (v71 == 0);
              }
              else
              {
                v58 = 49;
                if ( v71 )
                  v58 = 71;
              }
              goto LABEL_233;
            }
LABEL_243:
            v14 = a7C[(next_dword >> 21) & 3] + ((next_dword >> 5) & 3);
            v61 = (char *)&unk_89190 + 4 * ((next_dword >> 21) & 3);
            *(_WORD *)(a2 + 24) = v14;
            v62 = (_BYTE *)(a2 + 41);
            v63 = (unsigned __int8)v61[v3];
            if ( v63 == 255 )
              goto LABEL_11;
            while ( v3 != 3 )
            {
              ++v3;
              *v62 = 1;
              v62 += 40;
              *(v62 - 36) = 2;
              *(_WORD *)(v62 - 35) = (next_dword >> v63) & 0xF;
              v63 = (unsigned __int8)v61[v3];
              if ( v63 == 255 )
                goto LABEL_11;
            }
            if ( (v14 & 0xFFFD) != 0x40 )
            {
              *(_BYTE *)(a2 + 161) = 1;
              *(_BYTE *)(a2 + 165) = 2;
              *(_WORD *)(a2 + 166) = (next_dword >> v63) & 0xF;
              goto LABEL_11;
            }
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (next_dword & 0x100040) == 0x40 )
            goto LABEL_57;
          goto LABEL_222;
        }
        *(_WORD *)(a2 + 46) = v52;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        if ( v73 )
          v84 = (char *)&unk_893E0 + v75;
        else
          v84 = (char *)&unk_89460 + v75;
        if ( *(_WORD *)v84 == 0xFFFF )
          goto LABEL_319;
        *(_WORD *)(a2 + 86) = *(_WORD *)v84;
        v85 = v84[2] | 0x80;
      }
      else
      {
        if ( v74 )
          goto LABEL_54;
        if ( v53 )
        {
          v83 = 16;
          if ( v73 )
            v83 = 18;
          *(_WORD *)(a2 + 46) = v83;
          *(_BYTE *)(a2 + 72) = BYTE2(next_dword) & 0xF;
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 45) = 2;
          *(_WORD *)(a2 + 86) = v72;
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = 2;
          *(_WORD *)(a2 + 24) = 27;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( (((int)next_dword >> 16) & 0xF) != 0xF )
        {
LABEL_54:
          if ( (next_dword & 0xFB00FF0) == 0x1000090 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_WORD *)(a2 + 24) = 35;
            *(_BYTE *)(a2 + 45) = 2;
            *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
            *(_BYTE *)(a2 + 81) = 1;
            *(_WORD *)(a2 + 86) = next_dword & 0xF;
            *(_BYTE *)(a2 + 85) = 2;
            *(_BYTE *)(a2 + 125) = 2;
            *(_BYTE *)(a2 + 121) = 4;
            *(_WORD *)(a2 + 126) = BYTE2(next_dword) & 0xF;
            *(_QWORD *)(a2 + 136) = 0;
            if ( (~(next_dword >> 12) & 0xF) != 0 && (~BYTE2(next_dword) & 0xF) != 0 && (next_dword & 0xF) != 0xF )
            {
              if ( (next_dword & 0x400000) != 0 )
              {
                *(_DWORD *)(a2 + 28) |= 2u;
                *(_BYTE *)(a2 + 45) = 0;
                *(_BYTE *)(a2 + 85) = 0;
                *(_BYTE *)(a2 + 125) = 0;
              }
              return *(unsigned __int16 *)(a2 + 26);
            }
            return 0;
          }
          if ( (next_dword & 0xE000090) == 0x90 )
          {
            if ( (next_dword & 0x100040) != 0x40 )
              goto LABEL_222;
            if ( (next_dword & 0xF800FF0) == 0x1800F90 )
            {
LABEL_252:
              if ( (next_dword & 0x100000) != 0 )
              {
                if ( (~(_BYTE)next_dword & 0xF) != 0 )
                  return 0;
                v66 = word_891B0[(next_dword >> 20) & 7];
                *(_WORD *)(a2 + 24) = v66;
                if ( v66 )
                {
                  *(_BYTE *)(a2 + 41) = 1;
                  *(_BYTE *)(a2 + 45) = 2;
                  *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                  *(_BYTE *)(a2 + 81) = 4;
                  *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
                  return *(unsigned __int16 *)(a2 + 26);
                }
                if ( (next_dword & 0xE0000D0) == 0xD0 )
                  goto LABEL_256;
                goto LABEL_67;
              }
              v88 = word_891B0[(next_dword >> 20) & 7];
              *(_WORD *)(a2 + 24) = v88;
              if ( v88 )
              {
                *(_BYTE *)(a2 + 41) = 1;
                *(_BYTE *)(a2 + 45) = 2;
                *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = next_dword & 0xF;
                *(_BYTE *)(a2 + 85) = 2;
                *(_BYTE *)(a2 + 121) = 4;
                *(_WORD *)(a2 + 126) = BYTE2(next_dword) & 0xF;
                return *(unsigned __int16 *)(a2 + 26);
              }
            }
          }
LABEL_56:
          if ( (next_dword & 0xF900FF0) == 0x1000050 )
          {
            *(_BYTE *)(a2 + 41) = 1;
            *(_BYTE *)(a2 + 45) = 2;
            *(_BYTE *)(a2 + 81) = 1;
            v14 = a3645[(next_dword >> 21) & 3];
            *(_BYTE *)(a2 + 85) = 2;
            *(_BYTE *)(a2 + 121) = 1;
            *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
            *(_WORD *)(a2 + 24) = v14;
            *(_WORD *)(a2 + 86) = next_dword & 0xF;
            *(_BYTE *)(a2 + 125) = 2;
            *(_WORD *)(a2 + 126) = BYTE2(next_dword) & 0xF;
            goto LABEL_11;
          }
          goto LABEL_57;
        }
        *(_WORD *)(a2 + 46) = v52;
        v86 = 16;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        if ( v73 )
          v86 = 18;
        *(_WORD *)(a2 + 86) = v86;
        v85 = 0;
      }
      *(_BYTE *)(a2 + 112) = v85;
      v78 = 26;
      goto LABEL_279;
    case 2:
      goto LABEL_67;
    case 3:
      goto LABEL_59;
    case 4:
    case 5:
      v19 = next_dword;
      LOBYTE(v19) = 0;
      if ( v19 != -176164864 )
        goto LABEL_21;
      if ( next_dword == -176164833 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = 256;
        return *(unsigned __int16 *)(a2 + 26);
      }
      v24 = next_dword & 0xF0;
      if ( v24 != 80 )
        goto LABEL_34;
      *(_WORD *)(a2 + 24) = 285;
      goto LABEL_37;
    case 6:
    case 7:
      if ( next_dword == -436207600 )
      {
        *(_WORD *)(a2 + 24) = 82;
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( (next_dword & 0x10) != 0 )
      {
        v39 = word_891E0[((unsigned __int8)next_dword >> 5) | (next_dword >> 17) & 0xF8];
        *(_WORD *)(a2 + 24) = v39;
        if ( !(_WORD)v39 )
          return 0;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
        v40 = (unsigned __int16)next_dword >> 12;
        if ( (unsigned __int16)v39 <= 0x120u )
        {
          if ( (unsigned __int16)v39 > 0xD3u )
          {
            switch ( v39 )
            {
              case 212:
                goto LABEL_285;
              case 215:
              case 245:
                *(_BYTE *)(a2 + 81) = 5;
                *(_BYTE *)(a2 + 85) = 2;
                v48 = HIWORD(next_dword) & 0xF;
                *(_BYTE *)(a2 + 113) = 0;
                *(_QWORD *)(a2 + 88) = v48;
                *(_QWORD *)(a2 + 104) = 0;
                if ( (_WORD)v39 == 215 )
                  *(_QWORD *)(a2 + 88) = v48 + 1;
                goto LABEL_176;
              case 216:
              case 246:
                if ( (~(_WORD)next_dword & 0xF00) != 0 )
                  return 0;
                *(_BYTE *)(a2 + 81) = 5;
                *(_BYTE *)(a2 + 85) = 2;
                v47 = HIWORD(next_dword) & 0xF;
                *(_BYTE *)(a2 + 113) = 0;
                *(_QWORD *)(a2 + 88) = v47;
                *(_QWORD *)(a2 + 104) = 0;
                if ( (_WORD)v39 == 216 )
                  *(_QWORD *)(a2 + 88) = v47 + 1;
                *(_BYTE *)(a2 + 121) = 1;
                *(_WORD *)(a2 + 126) = next_dword & 0xF;
                *(_BYTE *)(a2 + 125) = 2;
                return *(unsigned __int16 *)(a2 + 26);
              case 221:
              case 223:
              case 225:
              case 250:
              case 252:
              case 254:
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
                if ( (~HIWORD(next_dword) & 0xF) != 0 )
                {
                  v41 = a2 + 120;
                }
                else
                {
                  v41 = a2 + 80;
                  *(_WORD *)(a2 + 24) = v39 + 1;
                }
                if ( (next_dword & 0x300) != 0 )
                  return 0;
                *(_BYTE *)(v41 + 5) = 2;
                *(_WORD *)(v41 + 6) = next_dword & 0xF;
                v42 = 1;
                v43 = (next_dword >> 7) & 0x18;
                if ( v43 )
                {
                  *(_BYTE *)(v41 + 33) = 3;
                  *(_QWORD *)(v41 + 8) = v43;
                  v42 = 8;
                }
                *(_BYTE *)(v41 + 1) = v42;
                v14 = *(_WORD *)(a2 + 24);
                if ( v14 == 251 || v14 == 222 )
                {
                  *(_BYTE *)(v41 + 5) = 0;
                  v14 = *(_WORD *)(a2 + 24);
                }
                else if ( v14 == 255 || v14 == 226 )
                {
                  *(_BYTE *)(v41 + 5) = 1;
                  v14 = *(_WORD *)(a2 + 24);
                }
                goto LABEL_11;
              case 243:
                if ( (_BYTE)v40 != 15 )
                  goto LABEL_285;
                LOWORD(v39) = 243;
                v82 = 1;
                goto LABEL_298;
              case 270:
              case 271:
              case 272:
                v44 = (next_dword >> 7) & 0x1F;
                v45 = (HIWORD(next_dword) & 0x1F) + 1;
                if ( (_WORD)v39 == 272 )
                {
                  v87 = next_dword & 0xF;
                  if ( v87 == 15 )
                  {
                    *(_WORD *)(a2 + 24) = 273;
                    v46 = a2 + 80;
                  }
                  else
                  {
                    *(_WORD *)(a2 + 86) = v87;
                    v46 = a2 + 120;
                    *(_BYTE *)(a2 + 81) = 1;
                    *(_BYTE *)(a2 + 85) = 2;
                  }
                  v45 -= v44;
                  if ( v45 <= 0 )
                    return 0;
                }
                else
                {
                  *(_BYTE *)(a2 + 81) = 1;
                  v46 = a2 + 120;
                  *(_WORD *)(a2 + 86) = next_dword & 0xF;
                  *(_BYTE *)(a2 + 85) = 2;
                }
                *(_QWORD *)(v46 + 8) = v44;
                *(_BYTE *)(v46 + 1) = 5;
                *(_BYTE *)(v46 + 5) = 2;
                *(_BYTE *)(v46 + 33) = 0;
                *(_QWORD *)(v46 + 24) = 0;
                *(_BYTE *)(v46 + 41) = 5;
                *(_BYTE *)(v46 + 45) = 2;
                *(_QWORD *)(v46 + 48) = v45;
                *(_BYTE *)(v46 + 73) = 0;
                *(_QWORD *)(v46 + 64) = 0;
                v14 = *(_WORD *)(a2 + 24);
                goto LABEL_11;
              case 277:
                goto LABEL_294;
              case 280:
              case 281:
                if ( (~(_WORD)next_dword & 0xF000) != 0 )
                  return 0;
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_BYTE *)(a2 + 121) = 1;
                *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
                *(_BYTE *)(a2 + 125) = 2;
                *(_WORD *)(a2 + 86) = next_dword & 0xF;
                *(_WORD *)(a2 + 126) = (next_dword >> 8) & 0xF;
                return *(unsigned __int16 *)(a2 + 26);
              case 288:
                *(_BYTE *)(a2 + 41) = 5;
                *(_BYTE *)(a2 + 73) = 0;
                *(_QWORD *)(a2 + 48) = next_dword & 0xF | (next_dword >> 4) & 0xFFF0;
                *(_QWORD *)(a2 + 64) = 0;
                return *(unsigned __int16 *)(a2 + 26);
              default:
                goto LABEL_153;
            }
          }
          if ( (unsigned __int16)v39 <= 0xAEu )
          {
            if ( (unsigned __int16)v39 > 0xACu )
            {
              *(_BYTE *)(a2 + 81) = 1;
              *(_BYTE *)(a2 + 85) = 2;
              *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
LABEL_176:
              v49 = (next_dword >> 5) & 2;
              *(_BYTE *)(a2 + 121) = 8;
              *(_BYTE *)(a2 + 125) = 2;
              *(_WORD *)(a2 + 126) = next_dword & 0xF;
              *(_BYTE *)(a2 + 153) = v49;
              *(_QWORD *)(a2 + 128) = (next_dword >> 7) & 0x1F;
              if ( ((next_dword >> 7) & 0x1F) == 0 )
              {
                if ( v49 )
                  *(_QWORD *)(a2 + 128) = 32;
                else
                  *(_BYTE *)(a2 + 121) = 1;
              }
              return *(unsigned __int16 *)(a2 + 26);
            }
          }
          else
          {
            v59 = v39 + 75;
            if ( (unsigned __int16)(v39 - 181) <= 0x1Bu )
            {
              v60 = 1LL << v59;
              if ( ((1LL << v59) & 0x8208000) != 0 )
              {
                if ( (_BYTE)v40 == 15 )
                {
                  v82 = 2;
LABEL_298:
                  LOWORD(v39) = v82 + v39;
                  *(_WORD *)(a2 + 24) = v39;
                }
                else
                {
LABEL_285:
                  *(_WORD *)(a2 + 166) = (unsigned __int16)next_dword >> 12;
                  *(_BYTE *)(a2 + 161) = 1;
                  *(_BYTE *)(a2 + 165) = 2;
                }
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_BYTE *)(a2 + 121) = 1;
                *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
                *(_BYTE *)(a2 + 125) = 2;
                *(_WORD *)(a2 + 86) = next_dword & 0xF;
                *(_WORD *)(a2 + 126) = (next_dword >> 8) & 0xF;
                if ( (next_dword & 0x20) == 0 )
                  return *(unsigned __int16 *)(a2 + 26);
                v58 = v39 + 1;
                goto LABEL_233;
              }
              if ( (v60 & 7) != 0 )
              {
LABEL_294:
                if ( (~(_WORD)next_dword & 0xF00) != 0 )
                  return 0;
                *(_BYTE *)(a2 + 81) = 1;
                *(_WORD *)(a2 + 86) = next_dword & 0xF;
                *(_BYTE *)(a2 + 85) = 2;
                return *(unsigned __int16 *)(a2 + 26);
              }
              if ( (v60 & 0x2080000) != 0 )
              {
                if ( (next_dword & 0x20) != 0 )
                  *(_WORD *)(a2 + 24) = v39 + 1;
                *(_BYTE *)(a2 + 161) = 1;
                *(_BYTE *)(a2 + 165) = 2;
                *(_WORD *)(a2 + 166) = (next_dword >> 8) & 0xF;
LABEL_154:
                *(_BYTE *)(a2 + 81) = 1;
                *(_BYTE *)(a2 + 85) = 2;
                *(_WORD *)(a2 + 126) = next_dword & 0xF;
                *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
                *(_BYTE *)(a2 + 121) = 1;
                *(_BYTE *)(a2 + 125) = 2;
                return *(unsigned __int16 *)(a2 + 26);
              }
            }
          }
        }
LABEL_153:
        if ( (~(_WORD)next_dword & 0xF00) != 0 )
          return 0;
        goto LABEL_154;
      }
      v23 = next_dword;
      LOBYTE(v23) = 0;
      if ( v23 == -176164864 )
      {
        v24 = next_dword & 0xF0;
LABEL_34:
        if ( v24 == 96 )
        {
          *(_WORD *)(a2 + 24) = 286;
          goto LABEL_37;
        }
        if ( v24 == 64 )
        {
          *(_WORD *)(a2 + 24) = 284;
LABEL_37:
          *(_BYTE *)(a2 + 32) = 14;
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = next_dword & 0xF;
          *(_BYTE *)(a2 + 73) = 0;
          *(_QWORD *)(a2 + 64) = 0;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( *(_WORD *)(a2 + 24) )
          goto LABEL_37;
        sub_1D540(a2, next_dword);
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = 15;
        *(_BYTE *)(a2 + 45) = 2;
        goto LABEL_140;
      }
LABEL_21:
      if ( (next_dword & 0xFC30F000) == 0xF410F000 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        if ( !(((next_dword & 0x400000) != 0) | HIBYTE(next_dword) & 1) )
        {
          *(_BYTE *)(a2 + 41) = 5;
          *(_WORD *)(a2 + 24) = 541;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = next_dword & 0xFFF;
          *(_BYTE *)(a2 + 73) = 0;
          *(_QWORD *)(a2 + 64) = 0;
          return *(unsigned __int16 *)(a2 + 26);
        }
        if ( (next_dword & 0x2000010) == 0x2000000 )
        {
          sub_1D810(a2, a2 + 40, next_dword);
          if ( !v64 )
            *(_DWORD *)(a2 + 28) |= 0x10u;
          v65 = *(_WORD *)(a2 + 46);
          *(_BYTE *)(a2 + 41) = 3;
          *(_BYTE *)(a2 + 72) = v65;
          *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
          goto LABEL_198;
        }
        if ( (next_dword & 0x2000000) == 0 )
        {
          *(_BYTE *)(a2 + 41) = 4;
          *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
          *(_QWORD *)(a2 + 56) = next_dword & 0xFFF;
          if ( ((next_dword >> 23) & 1) == 0 )
            *(_DWORD *)(a2 + 28) |= 0x10u;
          sub_1E470(a1, a2, a2 + 40, 1);
          if ( *(_WORD *)(a2 + 86) == 15 )
          {
            v79 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
            v80 = *(_QWORD *)(a2 + 56) + 16LL * *(_QWORD *)a2;
            if ( v80 != v79 )
            {
              v79 &= v80;
              if ( v80 == -1 )
                goto LABEL_198;
LABEL_282:
              v81 = sub_38180(*(_QWORD *)(a2 + 16), v79);
              if ( a3 && v81 != 1 )
                sub_1DB20(a3, 12, 12, 0);
              goto LABEL_198;
            }
          }
          else
          {
            if ( *(_BYTE *)(a2 + 41) != 2 )
            {
LABEL_198:
              if ( (next_dword & 0x1000000) != 0 )
              {
                v58 = 50;
                if ( ((next_dword >> 22) & 1) == 0 )
                  v58 = 880;
LABEL_233:
                *(_WORD *)(a2 + 24) = v58;
                return *(unsigned __int16 *)(a2 + 26);
              }
              *(_WORD *)(a2 + 24) = 276;
              return *(unsigned __int16 *)(a2 + 26);
            }
            v79 = *(_QWORD *)(a2 + 56);
          }
          if ( v79 == -1 )
            goto LABEL_198;
          goto LABEL_282;
        }
LABEL_19:
        v14 = *(_WORD *)(a2 + 24);
        goto LABEL_11;
      }
      sub_1D540(a2, next_dword);
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = (unsigned __int16)next_dword >> 12;
      if ( (next_dword & 0x2000000) != 0 )
      {
        if ( (next_dword & 0x10) != 0 )
          return 0;
        sub_1D810(a2, a2 + 80, next_dword);
        v20 = *(_WORD *)(a2 + 86);
        *(_BYTE *)(a2 + 81) = 3;
        *(_BYTE *)(a2 + 112) = v20;
        *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
        goto LABEL_25;
      }
LABEL_140:
      *(_BYTE *)(a2 + 81) = 4;
      *(_WORD *)(a2 + 86) = BYTE2(next_dword) & 0xF;
      *(_QWORD *)(a2 + 96) = next_dword & 0xFFF;
      sub_1E470(a1, a2, a2 + 80, 1);
      if ( *(_WORD *)(a2 + 86) == 15 )
      {
        v36 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v51 = *(_QWORD *)(a2 + 96) + 16LL * *(_QWORD *)a2;
        if ( v51 != v36 )
        {
          v36 &= v51;
          if ( v51 != -1 )
            goto LABEL_144;
          goto LABEL_25;
        }
      }
      else
      {
        if ( *(_BYTE *)(a2 + 81) != 2 )
          goto LABEL_25;
        v36 = *(_QWORD *)(a2 + 96);
      }
      if ( v36 != -1 )
      {
LABEL_144:
        v37 = sub_38180(*(_QWORD *)(a2 + 16), v36);
        if ( a3 && v37 != 1 )
          sub_1DB20(a3, 12, 12, 0);
      }
LABEL_25:
      v21 = 2;
      if ( (next_dword & 0x400000) != 0 )
      {
        *(_DWORD *)(a2 + 28) |= 2u;
        v21 = 0;
      }
      *(_BYTE *)(a2 + 45) = 2;
      v22 = *(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL;
      *(_BYTE *)(a2 + 85) = v21;
      v14 = *(_WORD *)(a2 + 24);
      if ( v22 != 0xF000000000100LL || v14 != 30 )
        goto LABEL_11;
      *(_WORD *)(a2 + 24) = 31;
      return *(unsigned __int16 *)(a2 + 26);
    case 8:
    case 9:
      *(_WORD *)(a2 + 24) = ((next_dword & 0x100000) == 0) + 33;
      if ( (next_dword & 0x200000) != 0 )
        *(_DWORD *)(a2 + 28) |= 0x40u;
      if ( (next_dword & 0x800000) == 0 )
        *(_DWORD *)(a2 + 28) |= 0x10u;
      if ( (next_dword & 0x1000000) == 0 )
        *(_DWORD *)(a2 + 28) |= 0x80u;
      if ( (next_dword & 0xFE5FFFE0) == 0xF84D0500 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = 214;
        *(_WORD *)(a2 + 46) = 13;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 2;
        *(_QWORD *)(a2 + 88) = next_dword & 0x1F;
        *(_BYTE *)(a2 + 113) = 0;
        *(_QWORD *)(a2 + 104) = 0;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 46) = BYTE2(next_dword) & 0xF;
        if ( (~HIWORD(next_dword) & 0xF) == 0 )
          return 0;
        if ( (next_dword & 0xFE50FF00) == 0xF8100A00 )
        {
          *(_BYTE *)(a2 + 32) = 14;
          *(_WORD *)(a2 + 24) = 184;
        }
        else
        {
          if ( !(_WORD)next_dword )
            return 0;
          *(_BYTE *)(a2 + 81) = 9;
          *(_BYTE *)(a2 + 85) = 2;
          *(_QWORD *)(a2 + 104) = (unsigned __int16)next_dword;
          *(_BYTE *)(a2 + 112) = (next_dword & 0x400000) != 0;
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 0xA:
    case 0xB:
      v15 = next_dword & 0x800000;
      v16 = next_dword & 0x1000000;
      v17 = 4 * (next_dword & 0xFFFFFF);
      if ( v13 == 15 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = 46;
        if ( v15 )
          v17 |= 0xFC000000;
        if ( v16 )
          v17 |= 2u;
      }
      else
      {
        if ( !v16 )
        {
          *(_BYTE *)(a2 + 41) = 7;
          *(_WORD *)(a2 + 24) = 3;
          *(_BYTE *)(a2 + 45) = 9;
          if ( v15 )
            v17 |= 0xFC000000;
          *(_QWORD *)(a2 + 56) = v17 + (unsigned int)*(_QWORD *)(a2 + 8) + 8;
          if ( !a3 )
            return *(unsigned __int16 *)(a2 + 26);
          if ( !(unsigned __int8)sub_38100(a2) )
            goto LABEL_19;
LABEL_18:
          sub_1DB20(a3, 24, 24, 0);
          goto LABEL_19;
        }
        *(_WORD *)(a2 + 24) = 4;
        if ( v15 )
          v17 |= 0xFC000000;
      }
      v18 = *(_QWORD *)(a2 + 8);
      *(_BYTE *)(a2 + 41) = 7;
      *(_BYTE *)(a2 + 45) = 9;
      *(_QWORD *)(a2 + 56) = (unsigned int)(v17 + v18 + 8);
      if ( !a3 )
        goto LABEL_19;
      goto LABEL_18;
    case 0xC:
      if ( !*(_DWORD *)(a1 + 220) || (next_dword & 0xFE00FFF) != 0xC400000 )
        goto LABEL_10;
      v29 = (unsigned __int16)next_dword >> 12;
      v30 = HIWORD(next_dword) & 0xF;
      if ( (next_dword & 0x100000) != 0 )
      {
        *(_WORD *)(a2 + 86) = v30;
        *(_WORD *)(a2 + 24) = 79;
        *(_WORD *)(a2 + 46) = v29;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 126) = 23;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 4;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 78;
        *(_WORD *)(a2 + 46) = 23;
        *(_BYTE *)(a2 + 45) = 4;
        *(_WORD *)(a2 + 86) = v29;
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 126) = v30;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 2;
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 0xD:
      goto LABEL_10;
    case 0xE:
      if ( !*(_DWORD *)(a1 + 220) || (next_dword & 0xFF00FF0) != 0xE200010 )
      {
LABEL_10:
        sub_743B0(a1, a2, next_dword);
        v14 = *(_WORD *)(a2 + 24);
        goto LABEL_11;
      }
      switch ( HIWORD(next_dword) & 0xF )
      {
        case 0:
          *(_WORD *)(a2 + 24) = 72;
          break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 9:
        case 0xA:
        case 0xB:
          if ( !*(_WORD *)(a2 + 24) )
            goto LABEL_10;
          break;
        case 8:
          *(_WORD *)(a2 + 24) = 73;
          break;
        case 0xC:
          *(_WORD *)(a2 + 24) = 74;
          break;
        case 0xD:
          *(_WORD *)(a2 + 24) = 75;
          break;
        case 0xE:
          *(_WORD *)(a2 + 24) = 76;
          break;
        case 0xF:
          *(_WORD *)(a2 + 24) = 77;
          break;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 46) = 23;
      *(_BYTE *)(a2 + 45) = 4;
      *(_WORD *)(a2 + 86) = next_dword & 0xF;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 2;
      *(_WORD *)(a2 + 126) = (unsigned __int16)next_dword >> 12;
      *(_BYTE *)(a2 + 121) = 1;
      *(_BYTE *)(a2 + 125) = 2;
      return *(unsigned __int16 *)(a2 + 26);
    case 0xF:
      *(_BYTE *)(a2 + 41) = 5;
      *(_WORD *)(a2 + 24) = 36;
      *(_BYTE *)(a2 + 45) = 2;
      *(_QWORD *)(a2 + 48) = next_dword & 0xFFFFFF;
      *(_BYTE *)(a2 + 73) = 0;
      *(_QWORD *)(a2 + 64) = 0;
      return *(unsigned __int16 *)(a2 + 26);
  }
}
