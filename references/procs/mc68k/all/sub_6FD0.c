__int64 __fastcall sub_6FD0(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int8 a5, double a6)
{
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int16 v10; // ax
  unsigned int v11; // ecx
  unsigned __int16 v12; // r13
  int v13; // eax
  unsigned int v14; // edx
  __int16 v15; // dx
  __int16 next_word; // ax
  char v17; // cl
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // ecx
  char v21; // al
  __int64 v22; // rax
  unsigned int v23; // r14d
  _BYTE *v24; // r13
  _BYTE *v25; // r12
  unsigned int next_dword; // eax
  __int16 v27; // ax
  unsigned __int8 v28; // dl
  char v29; // cl
  unsigned int v30; // eax
  unsigned int v31; // eax

  *(_WORD *)(a3 + 6) = a5 + 8;
  switch ( a4 )
  {
    case 0:
      *(_WORD *)(a3 + 6) = a5;
      goto LABEL_3;
    case 1:
LABEL_3:
      *(_BYTE *)(a3 + 1) = 1;
      return 1;
    case 2:
    case 3:
    case 4:
      *(_BYTE *)(a3 + 1) = 3;
      *(_WORD *)(a3 + 6) = a5 | (unsigned __int16)(8 * a4);
      return 1;
    case 5:
      *(_BYTE *)(a3 + 1) = 4;
      *(_WORD *)(a3 + 32) = 0;
      *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
      *(_QWORD *)(a3 + 16) = (__int16)insn_get_next_word(a2);
      return 1;
    case 6:
      goto LABEL_7;
    case 7:
      if ( a5 > 4u )
        return 0;
      if ( a5 != 3 )
      {
        *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
        if ( a5 != 4 )
        {
          if ( a5 == 1 )
          {
            LODWORD(v18) = insn_get_next_dword(a2);
            v17 = 1;
            v18 = (unsigned int)v18;
          }
          else if ( a5 == 2 )
          {
            *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
            next_word = insn_get_next_word(a2);
            v17 = 3;
            v18 = *(_QWORD *)(a3 + 16) + next_word;
          }
          else
          {
            LOWORD(v18) = insn_get_next_word(a2);
            v17 = 0;
            v18 = (__int16)v18;
          }
          *(_QWORD *)(a3 + 16) = v18;
          v19 = *(_DWORD *)(a1 + 188);
          if ( v19 <= 1 || v19 == 5 )
            *(_QWORD *)(a3 + 16) = v18 & 0xFFFFFF;
          *(_BYTE *)(a3 + 1) = 2;
          *(_BYTE *)(a3 + 32) = v17;
          return 1;
        }
        v22 = *(unsigned __int8 *)(a3 + 5);
        *(_BYTE *)(a3 + 1) = 5;
        *(_BYTE *)(a3 + 32) = 0;
        switch ( v22 )
        {
          case 0LL:
            *(_QWORD *)(a3 + 8) = (char)insn_get_next_word(a2);
            return 1;
          case 1LL:
            *(_QWORD *)(a3 + 8) = (__int16)insn_get_next_word(a2);
            return 1;
          case 2LL:
            goto LABEL_55;
          case 3LL:
            v23 = 4;
            goto LABEL_48;
          case 4LL:
            v23 = 8;
            goto LABEL_48;
          case 5LL:
          case 6LL:
            v23 = 12;
LABEL_48:
            *(_BYTE *)(a3 + 32) = 3;
            v24 = (_BYTE *)(a3 + v23 + 8);
            v25 = (_BYTE *)(a3 + 8);
            do
              *v25++ = insn_get_next_byte(a2);
            while ( v25 != v24 );
            if ( *(_BYTE *)(a3 + 5) != 6 )
            {
              if ( (unsigned int)ieee_realcvt(a3 + 8, 0, (unsigned __int16)((v23 >> 1) - 1)) == 1 )
                return 1;
              goto LABEL_52;
            }
            if ( !(unsigned int)sub_115B0(a3 + 8) )
            {
LABEL_52:
              sub_6D50((__int64)"%a: illegal data in float immediate operand.\n", a6);
              return 0;
            }
            break;
          case 7LL:
            next_dword = insn_get_next_dword(a2);
            *(_BYTE *)(a3 + 4) |= 0x10u;
            *(_QWORD *)(a3 + 16) = next_dword;
LABEL_55:
            *(_QWORD *)(a3 + 8) = (unsigned int)insn_get_next_dword(a2);
            return 1;
          default:
            sub_6C80((__int64)"ana: %a: bad opsize %d", a6, *(_QWORD *)(a2 + 8));
            return 1;
        }
        return 1;
      }
      *(_WORD *)(a3 + 6) = 91;
LABEL_7:
      *(_BYTE *)(a3 + 1) = 4;
      v8 = *(_QWORD *)(a2 + 8);
      v9 = *(unsigned __int16 *)(a2 + 26);
      v10 = insn_get_next_word(a2);
      v11 = v10;
      v12 = v10;
      v13 = (v10 >> 9) & 3;
      *(_BYTE *)(a3 + 33) = v13;
      if ( (_BYTE)v13 && *(int *)(a1 + 188) <= 1 )
        return 0;
      v14 = v11 >> 12;
      if ( (v12 & 0x800) == 0 )
        LOBYTE(v14) = (v11 >> 12) | 0x10;
      *(_BYTE *)(a3 + 32) = v14;
      if ( (v12 & 0x100) == 0 )
      {
        v15 = *(_WORD *)(a2 + 26);
        *(_QWORD *)(a3 + 16) = (char)v12;
        *(_BYTE *)(a3 + 2) = v15 - 1;
        if ( !(_BYTE)v12 )
        {
          *(_BYTE *)(a3 + 4) |= 0x80u;
          *(_BYTE *)(a3 + 33) = v13 | 0x90;
          return 1;
        }
        *(_BYTE *)(a3 + 33) = v13 | 0x10;
        goto LABEL_14;
      }
      if ( (v12 & 8) != 0 || *(int *)(a1 + 188) <= 1 )
        return 0;
      if ( (v12 & 0x40) == 0 )
        *(_BYTE *)(a3 + 33) = v13 | 0x10;
      if ( (v12 & 0x80u) != 0 )
        *(_BYTE *)(a3 + 33) |= 0x20u;
      if ( (v12 & 7) == 4 || (v12 & 0x47u) > 0x44 )
        return 0;
      if ( (v12 & 0x20) != 0 )
        *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
      v20 = (v11 >> 4) & 3;
      switch ( v20 )
      {
        case 2:
          *(_QWORD *)(a3 + 16) = (__int16)insn_get_next_word(a2);
          break;
        case 3:
          v30 = insn_get_next_dword(a2);
          *(_QWORD *)(a3 + 16) = v30;
          if ( v30 <= 0xFFFFuLL )
            *(_BYTE *)(a3 + 32) |= 0x20u;
          break;
        case 1:
          *(_BYTE *)(a3 + 33) |= 0x80u;
          *(_QWORD *)(a3 + 16) = 0;
          break;
        default:
          return 0;
      }
      if ( (v12 & 2) != 0 )
      {
        *(_BYTE *)(a3 + 3) = *(_WORD *)(a2 + 26);
        v27 = v12 & 3;
        if ( v27 == 2 )
        {
          *(_QWORD *)(a3 + 8) = (__int16)insn_get_next_word(a2);
        }
        else
        {
          if ( v27 != 3 )
            goto LABEL_42;
          v31 = insn_get_next_dword(a2);
          *(_QWORD *)(a3 + 8) = v31;
          if ( v31 <= 0xFFFFuLL )
            *(_BYTE *)(a3 + 32) |= 0x40u;
        }
        *(_BYTE *)(a3 + 33) |= 0x40u;
      }
      else if ( (v12 & 3) != 1 )
      {
LABEL_42:
        v21 = *(_BYTE *)(a3 + 33);
        goto LABEL_43;
      }
      if ( *(_DWORD *)(a1 + 188) != 5 )
      {
        v28 = *(_BYTE *)(a3 + 33);
        v29 = *(_BYTE *)(a3 + 4);
        if ( (v12 & 4) != 0 )
        {
          v21 = v28 | 4;
          *(_BYTE *)(a3 + 33) = v28 | 4;
          if ( (~(v28 | 4) & 0xA0) == 0 )
          {
LABEL_69:
            *(_BYTE *)(a3 + 33) = v21 & 0x7F;
            *(_BYTE *)(a3 + 4) = v29 | v21 & 0x40;
            goto LABEL_14;
          }
        }
        else
        {
          v21 = v28 | 8;
          *(_BYTE *)(a3 + 33) = v28 | 8;
          if ( (~(v28 | 8) & 0xA0) == 0 )
          {
            if ( (v28 & 0x14) == 0x10 )
            {
              *(_BYTE *)(a3 + 4) = v29 | v28 & 0xC0;
              return 1;
            }
            goto LABEL_69;
          }
        }
LABEL_43:
        *(_BYTE *)(a3 + 4) |= v21 & 0xC0;
        if ( v21 < 0 )
          return 1;
LABEL_14:
        if ( *(_WORD *)(a3 + 6) == 91 )
          *(_QWORD *)(a3 + 16) += v8 + v9;
        return 1;
      }
      return 0;
    default:
      return 1;
  }
}
