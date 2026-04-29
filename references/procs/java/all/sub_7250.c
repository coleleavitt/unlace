__int64 __fastcall sub_7250(__int64 a1, __int64 a2)
{
  char v3; // r13
  __int64 result; // rax
  unsigned __int8 next_byte; // al
  int v6; // ebp
  char v7; // dl
  bool v8; // zf
  unsigned __int8 v9; // al
  __int64 next_word; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v13; // al
  int v14; // ebp
  unsigned __int16 v15; // ax
  char v16; // al
  unsigned __int8 v17; // al
  int v18; // ebp
  int v19; // ebp
  __int16 v20; // ax
  unsigned int next_dword; // eax
  unsigned __int64 v22; // rax
  int v23; // eax
  int v24; // r14d
  __int64 v25; // rdx
  unsigned int v26; // ebp
  __int64 v27; // r13
  __int16 v28; // ax
  unsigned __int8 v29; // al
  bool v30; // cc
  char v31; // al
  unsigned __int8 v32; // al
  __int16 v33; // ax
  unsigned __int8 v34; // al
  unsigned __int8 v35; // al
  __int16 v36; // si
  unsigned __int16 v37; // dx
  unsigned int v38; // eax

  v3 = *(_BYTE *)(sub_19F50(a1, *(_QWORD *)(a2 + 16), 0) + 184);
  if ( v3 != 2 || *(_QWORD *)(a2 + 8) >= (unsigned __int64)*(unsigned int *)(a1 + 33153) )
  {
    sub_6E90((__int64)"Can't decode non-code fragment!");
    return 0;
  }
  *(_BYTE *)(a2 + 45) = 10;
  *(_BYTE *)(a2 + 32) = 0;
  *(_WORD *)(a2 + 72) = 0;
  next_byte = insn_get_next_byte(a2);
  v6 = next_byte;
  *(_WORD *)(a2 + 24) = next_byte;
  if ( next_byte == 196 )
  {
    v9 = insn_get_next_byte(a2);
    *(_WORD *)(a2 + 24) = v9;
    if ( (unsigned __int16)(v9 - 21) <= 4u || v9 == 132 || (unsigned __int16)(v9 - 54) <= 4u || v9 == 169 )
    {
      *(_BYTE *)(a2 + 32) = 1;
      v6 = v9;
      goto LABEL_12;
    }
    if ( !*(_BYTE *)(a1 + 33344) )
      return 0;
    *(_DWORD *)(a2 + 24) = 65732;
LABEL_30:
    if ( (unsigned __int16)(v6 - 153) <= 0xFu )
    {
LABEL_31:
      next_word = (__int16)insn_get_next_word(a2);
LABEL_32:
      *(_QWORD *)(a2 + 56) = next_word;
      v11 = *(_QWORD *)(a2 + 8) + next_word;
      *(_WORD *)(a2 + 41) = 263;
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v11;
      *(_QWORD *)(a2 + 56) = v12;
      if ( v12 >= *(unsigned int *)(a1 + 33153) )
      {
LABEL_83:
        if ( !*(_BYTE *)(a1 + 33344) )
          return 0;
        ++*(_BYTE *)(a2 + 72);
      }
    }
  }
  else
  {
    if ( next_byte <= 0xCAu )
      goto LABEL_12;
    if ( !*(_BYTE *)(a1 + 33344) )
      return 0;
    if ( next_byte <= 0xE4u )
    {
      if ( next_byte <= 0xD5u )
      {
        v7 = 3;
        if ( next_byte <= 0xD3u )
          v7 = ((unsigned __int16)(next_byte - 208) < 2u) + 2;
      }
      else
      {
        v7 = (unsigned __int16)(next_byte - 226) < 3u ? 4 : 2;
      }
      *(_BYTE *)(a2 + 32) = v7;
      v6 = byte_245B0[next_byte - 203];
      *(_WORD *)(a2 + 24) = v6;
LABEL_12:
      switch ( v6 )
      {
        case 16:
          *(_BYTE *)(a2 + 45) = 0;
          result = (char)insn_get_next_byte(a2);
          goto LABEL_78;
        case 17:
          *(_BYTE *)(a2 + 45) = 1;
          result = (__int16)insn_get_next_word(a2);
LABEL_78:
          *(_QWORD *)(a2 + 48) = result;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_WORD *)(a2 + 41) = 261;
          return (unsigned __int16)result;
        case 18:
          v14 = 0;
          *(_WORD *)(a2 + 64) = (unsigned __int8)insn_get_next_byte(a2);
          goto LABEL_42;
        case 19:
          v14 = 0;
          goto LABEL_41;
        case 20:
          v14 = 1;
          goto LABEL_41;
        case 21:
        case 54:
        case 132:
          goto LABEL_14;
        case 22:
        case 55:
          v3 = 7;
          goto LABEL_14;
        case 23:
        case 56:
          v3 = 3;
          goto LABEL_14;
        case 24:
        case 57:
          v3 = 4;
          goto LABEL_14;
        case 25:
        case 58:
          v3 = 13;
          goto LABEL_14;
        case 169:
          v3 = 9;
LABEL_14:
          *(_BYTE *)(a2 + 45) = v3;
          if ( !(unsigned int)sub_6F60(a1, a2) )
            return 0;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          if ( *(_WORD *)(a2 + 24) == 132 )
          {
            v8 = *(_BYTE *)(a2 + 32) == 0;
            *(_BYTE *)(a2 + 81) = 5;
            *(_BYTE *)(a2 + 112) = 0;
            *(_BYTE *)(a2 + 82) = result;
            if ( v8 )
            {
              *(_BYTE *)(a2 + 85) = 0;
              *(_QWORD *)(a2 + 88) = (char)insn_get_next_byte(a2);
            }
            else
            {
              *(_BYTE *)(a2 + 85) = 1;
              *(_QWORD *)(a2 + 88) = (__int16)insn_get_next_word(a2);
            }
            LOWORD(result) = *(_WORD *)(a2 + 26);
          }
          return (unsigned __int16)result;
        case 170:
        case 171:
          v18 = *(_DWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 73) = 1;
          v19 = -v18 & 3;
          if ( !v19 )
            goto LABEL_56;
          break;
        case 178:
        case 179:
        case 180:
        case 181:
          v13 = *(_BYTE *)(a2 + 32);
          if ( v13 > 1 )
          {
            *(_BYTE *)(a2 + 72) = 2;
            *(_WORD *)(a2 + 41) = 261;
            if ( v13 == 4 )
            {
              *(_BYTE *)(a2 + 45) = 1;
              *(_QWORD *)(a2 + 48) = (unsigned __int16)insn_get_next_word(a2);
              LOWORD(result) = *(_WORD *)(a2 + 26);
            }
            else
            {
              *(_BYTE *)(a2 + 45) = 0;
              *(_QWORD *)(a2 + 48) = (unsigned __int8)insn_get_next_byte(a2);
              LOWORD(result) = *(_WORD *)(a2 + 26) + 1;
              *(_WORD *)(a2 + 26) = result;
            }
            return (unsigned __int16)result;
          }
          v14 = 2;
LABEL_41:
          *(_WORD *)(a2 + 64) = insn_get_next_word(a2);
LABEL_42:
          if ( !(unsigned int)sub_7010(a1, a2, v14) )
            return 0;
          goto LABEL_33;
        case 182:
        case 204:
          v16 = *(_BYTE *)(a2 + 32);
          *(_BYTE *)(a2 + 85) = 10;
          if ( v16 <= 1 )
            goto LABEL_47;
          if ( v16 == 4 )
            goto LABEL_44;
          *(_BYTE *)(a2 + 81) = 5;
          *(_BYTE *)(a2 + 72) = 2;
          *(_BYTE *)(a2 + 85) = 0;
          *(_BYTE *)(a2 + 45) = 0;
          v17 = insn_get_next_byte(a2);
          *(_BYTE *)(a2 + 82) = 2;
          *(_QWORD *)(a2 + 48) = v17;
          *(_QWORD *)(a2 + 88) = (unsigned __int8)insn_get_next_byte(a2);
          goto LABEL_45;
        case 183:
        case 184:
LABEL_47:
          v14 = 3;
          goto LABEL_41;
        case 185:
          v28 = insn_get_next_word(a2);
          *(_BYTE *)(a2 + 81) = 5;
          *(_WORD *)(a2 + 64) = v28;
          *(_BYTE *)(a2 + 112) = 1;
          *(_BYTE *)(a2 + 85) = 0;
          v29 = insn_get_next_byte(a2);
          v30 = *(_BYTE *)(a2 + 32) <= 1;
          *(_QWORD *)(a2 + 88) = v29;
          if ( v30 )
          {
            ++*(_WORD *)(a2 + 26);
            v31 = 10;
          }
          else
          {
            *(_BYTE *)(a2 + 121) = 5;
            *(_BYTE *)(a2 + 152) = 2;
            v35 = insn_get_next_byte(a2);
            *(_BYTE *)(a2 + 122) = 4;
            *(_QWORD *)(a2 + 128) = v35;
            v31 = 0;
          }
          *(_BYTE *)(a2 + 125) = v31;
          v14 = 4;
          goto LABEL_42;
        case 186:
          *(_WORD *)(a2 + 64) = insn_get_next_word(a2);
          if ( !(unsigned int)sub_7010(a1, a2, 8) )
            return 0;
          insn_get_next_word(a2);
          *(_BYTE *)(a2 + 72) = 0;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          return (unsigned __int16)result;
        case 187:
          v14 = 5;
          goto LABEL_41;
        case 188:
          *(_WORD *)(a2 + 41) = 265;
          v32 = insn_get_next_byte(a2);
          *(_WORD *)(a2 + 66) = v32;
          if ( (unsigned __int8)(v32 - 4) > 7u )
            goto LABEL_83;
          goto LABEL_33;
        case 189:
        case 192:
        case 193:
          v14 = 7;
          goto LABEL_41;
        case 197:
          v33 = insn_get_next_word(a2);
          *(_BYTE *)(a2 + 81) = 5;
          *(_WORD *)(a2 + 64) = v33;
          *(_BYTE *)(a2 + 112) = 1;
          *(_BYTE *)(a2 + 85) = 0;
          v34 = insn_get_next_byte(a2);
          *(_QWORD *)(a2 + 88) = v34;
          if ( !v34 && !*(_BYTE *)(a1 + 33344) )
            return 0;
          v14 = 6;
          goto LABEL_42;
        case 198:
        case 199:
          goto LABEL_31;
        case 200:
        case 201:
          next_word = (unsigned int)insn_get_next_dword(a2);
          goto LABEL_32;
        case 203:
        case 205:
LABEL_44:
          v15 = insn_get_next_word(a2);
          *(_BYTE *)(a2 + 45) = 1;
          *(_QWORD *)(a2 + 48) = v15;
LABEL_45:
          *(_BYTE *)(a2 + 72) = 2;
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_WORD *)(a2 + 41) = 261;
          return (unsigned __int16)result;
        default:
          if ( (unsigned __int16)(v6 - 26) <= 0x13u )
          {
            LODWORD(result) = (unsigned __int16)v6 - 26;
          }
          else
          {
            if ( (unsigned __int16)(v6 - 59) > 0x13u )
              goto LABEL_30;
            LODWORD(result) = (unsigned __int16)v6 - 59;
          }
          v36 = (result & 0xFFFFFFF4) == 4;
          *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 33165) + (result & 3);
          v37 = v36 + (result & 3);
          LOWORD(result) = *(_WORD *)(a2 + 26);
          *(_BYTE *)(a2 + 72) = v36 + 1;
          if ( v37 >= *(_WORD *)(a1 + 33173) )
            *(_BYTE *)(a2 + 72) = (v36 + 1) | 0x80;
          return (unsigned __int16)result;
      }
      do
      {
        if ( (unsigned __int8)insn_get_next_byte(a2) )
        {
          if ( !*(_BYTE *)(a1 + 33344) )
            return 0;
          *(_BYTE *)(a2 + 73) |= 0x40u;
        }
        --v19;
      }
      while ( v19 );
LABEL_56:
      v20 = *(_WORD *)(a2 + 26);
      *(_BYTE *)(a2 + 121) = 7;
      *(_BYTE *)(a2 + 122) = v20;
      next_dword = insn_get_next_dword(a2);
      *(_QWORD *)(a2 + 136) = next_dword;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*(_QWORD *)(a2 + 8) + next_dword);
      *(_BYTE *)(a2 + 152) = 0;
      *(_QWORD *)(a2 + 136) = v22;
      if ( v22 >= *(unsigned int *)(a1 + 33153) )
      {
        if ( !*(_BYTE *)(a1 + 33344) )
          return 0;
        *(_BYTE *)(a2 + 152) = 1;
      }
      *(_BYTE *)(a2 + 73) |= 2u;
      v23 = insn_get_next_dword(a2);
      v24 = v23;
      if ( *(_WORD *)(a2 + 24) == 170 )
      {
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 2;
        *(_QWORD *)(a2 + 48) = v23;
        *(_BYTE *)(a2 + 112) = 0;
        *(_BYTE *)(a2 + 81) = 5;
        *(_BYTE *)(a2 + 85) = 2;
        v38 = insn_get_next_dword(a2);
        *(_QWORD *)(a2 + 88) = v38;
        v24 = v38 - v24 + 1;
      }
      v25 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 128) = v24;
      *(_QWORD *)(a2 + 96) = v25 + *(unsigned __int16 *)(a2 + 26);
      v26 = *(_DWORD *)(a1 + 33153) - v25;
      while ( v24 )
      {
        if ( *(_WORD *)(a2 + 24) == 171 )
          insn_get_next_dword(a2);
        v27 = *(_QWORD *)(a2 + 8);
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v27 + (unsigned __int64)(unsigned int)insn_get_next_dword(a2))) >= *(unsigned int *)(a1 + 33153) )
        {
          if ( !*(_BYTE *)(a1 + 33344) )
            return 0;
          *(_BYTE *)(a2 + 73) |= 0x80u;
        }
        --v24;
        if ( *(unsigned __int16 *)(a2 + 26) >= v26 )
          return 0;
      }
      goto LABEL_33;
    }
    if ( next_byte <= 0xFDu )
      return 0;
    *(_WORD *)(a2 + 24) = next_byte - 48;
  }
LABEL_33:
  LOWORD(result) = *(_WORD *)(a2 + 26);
  return (unsigned __int16)result;
}
