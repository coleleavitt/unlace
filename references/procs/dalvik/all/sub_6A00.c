unsigned __int64 __fastcall sub_6A00(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int8 v4; // al
  unsigned __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // edx
  char v9; // al
  __int64 v10; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  __int16 v14; // ax
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned int next_dword; // eax
  __int64 v20; // rcx
  unsigned __int16 next_word; // ax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 next_qword; // rax
  unsigned int v25; // eax
  unsigned __int8 next_byte; // al
  unsigned __int8 v27; // al
  unsigned __int8 v28; // [rsp+Eh] [rbp-5Ah]
  char v29; // [rsp+Fh] [rbp-59h]
  char v30; // [rsp+Fh] [rbp-59h]
  char v31; // [rsp+Fh] [rbp-59h]
  char v32; // [rsp+Fh] [rbp-59h]
  _BYTE v33[16]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v34; // [rsp+20h] [rbp-48h]
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v3 = a2;
  v4 = *(_BYTE *)(a3 + 4) & 0xF;
  v35 = __readfsqword(0x28u);
  if ( v4 > 2u )
    *(_BYTE *)(a2 + 73) = insn_get_next_byte(a2);
  v28 = 0;
  v6 = a2 + 41;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(unsigned __int8 *)(a3 + v7 + 4);
    v9 = *(_BYTE *)(a3 + v7 + 4);
    v10 = v8 >> 4;
    if ( v8 > 0xCF )
      break;
    switch ( (int)v10 )
    {
      case 0:
        return v35 - __readfsqword(0x28u);
      case 1:
        return sub_61E0(a1, v3);
      case 2:
        goto LABEL_17;
      case 3:
        *(_BYTE *)(v6 + 31) = 1;
LABEL_17:
        v12 = 1;
        goto LABEL_10;
      case 4:
        v12 = 1;
        goto LABEL_41;
      case 5:
        v12 = 0;
LABEL_41:
        *(_BYTE *)v6 = 5;
        goto LABEL_42;
      case 6:
        v12 = 9;
        goto LABEL_10;
      case 7:
        *(_BYTE *)v6 = 10;
        switch ( v9 & 0xF )
        {
          case 1:
            *(_BYTE *)(v6 + 4) = 0;
            if ( (v7 & 1) == 0 )
            {
              LOBYTE(v12) = 0;
LABEL_66:
              v32 = v12;
              next_byte = insn_get_next_byte(v3);
              LOBYTE(v12) = v32;
              v28 = next_byte >> 4;
              a2 = next_byte & 0xF;
LABEL_49:
              *(_QWORD *)(v6 + 7) = a2;
              if ( (_BYTE)v12 )
              {
LABEL_50:
                if ( a2 > 7 )
                {
                  a2 -= 16LL;
                  *(_QWORD *)(v6 + 7) = a2;
                }
              }
              goto LABEL_14;
            }
            *(_QWORD *)(v6 + 7) = v28;
LABEL_7:
            ++v7;
            v6 += 40LL;
            if ( v7 == 3 )
              return v35 - __readfsqword(0x28u);
            break;
          case 2:
LABEL_27:
            *(_BYTE *)(v6 + 4) = 0;
            LOBYTE(v13) = insn_get_next_byte(v3);
LABEL_28:
            v13 = (unsigned __int8)v13;
            goto LABEL_13;
          case 3:
LABEL_32:
            *(_BYTE *)(v6 + 4) = 1;
            next_word = insn_get_next_word(v3);
LABEL_33:
            v20 = next_word;
            goto LABEL_31;
          case 4:
LABEL_29:
            *(_BYTE *)(v6 + 4) = 2;
            next_dword = insn_get_next_dword(v3);
LABEL_30:
            v20 = next_dword;
LABEL_31:
            *(_QWORD *)(v6 + 7) = v20;
            goto LABEL_14;
          case 5:
            next_qword = insn_get_next_qword(v3, a2, (unsigned int)v10, (unsigned int)v7);
            *(_BYTE *)v6 = 5;
            *(_BYTE *)(v6 + 4) = 7;
            *(_QWORD *)(v6 + 7) = next_qword;
            goto LABEL_7;
          default:
            goto LABEL_7;
        }
        break;
      case 8:
      case 11:
        v12 = 11;
        goto LABEL_10;
      case 9:
      case 12:
        v12 = 12;
LABEL_10:
        *(_BYTE *)v6 = v12;
        switch ( v9 & 0xF )
        {
          case 1:
            *(_BYTE *)(v6 + 4) = 0;
            if ( (v7 & 1) != 0 )
            {
              *(_QWORD *)(v6 + 7) = v28;
            }
            else
            {
              v25 = insn_get_next_byte(v3);
              a2 = v25;
              LOBYTE(a2) = (unsigned __int8)v25 >> 4;
              v28 = (unsigned __int8)v25 >> 4;
              *(_QWORD *)(v6 + 7) = v25 & 0xF;
            }
            break;
          case 2:
            goto LABEL_27;
          case 3:
            goto LABEL_32;
          case 4:
            goto LABEL_29;
          case 5:
            goto LABEL_12;
          default:
            goto LABEL_14;
        }
        goto LABEL_14;
      case 10:
        *(_BYTE *)v6 = 7;
        switch ( v9 & 0xF )
        {
          case 1:
            *(_BYTE *)(v6 + 4) = 0;
            if ( (v7 & 1) != 0 )
            {
              v23 = v28;
              if ( v28 >= 8u )
                v23 = v28 | 0xFFFFFFFFFFFFFFF0LL;
              *(_QWORD *)(v6 + 7) = v23;
LABEL_25:
              *(_QWORD *)(v6 + 15) = (unsigned int)*(_QWORD *)(v3 + 16) + 2 * (unsigned int)*(_QWORD *)(v6 + 7);
              goto LABEL_7;
            }
            v27 = insn_get_next_byte(v3);
            a2 = v27 & 0xF;
            v28 = v27 >> 4;
            *(_QWORD *)(v6 + 7) = a2;
            break;
          case 2:
            *(_BYTE *)(v6 + 4) = 0;
            LOBYTE(v13) = insn_get_next_byte(v3);
LABEL_53:
            v13 = (char)v13;
LABEL_13:
            *(_QWORD *)(v6 + 7) = v13;
            goto LABEL_14;
          case 3:
            *(_BYTE *)(v6 + 4) = 1;
            *(_QWORD *)(v6 + 7) = (__int16)insn_get_next_word(v3);
            goto LABEL_25;
          case 4:
            *(_BYTE *)(v6 + 4) = 2;
            *(_QWORD *)(v6 + 7) = (int)insn_get_next_dword(v3);
            goto LABEL_25;
          case 5:
            v22 = insn_get_next_qword(v3, a2, (unsigned int)v10, (unsigned int)v7);
            *(_BYTE *)v6 = 5;
            *(_BYTE *)(v6 + 4) = 7;
            *(_QWORD *)(v6 + 7) = v22;
            goto LABEL_25;
          default:
            goto LABEL_25;
        }
        goto LABEL_50;
    }
  }
  v12 = 0;
LABEL_42:
  switch ( v9 & 0xF )
  {
    case 1:
      *(_BYTE *)(v6 + 4) = 0;
      a2 = v28;
      if ( (v7 & 1) != 0 )
        goto LABEL_49;
      goto LABEL_66;
    case 2:
      *(_BYTE *)(v6 + 4) = 0;
      v31 = v12;
      LOBYTE(v13) = insn_get_next_byte(v3);
      if ( v31 )
        goto LABEL_53;
      goto LABEL_28;
    case 3:
      *(_BYTE *)(v6 + 4) = 1;
      v30 = v12;
      next_word = insn_get_next_word(v3);
      v20 = (__int16)next_word;
      if ( !v30 )
        goto LABEL_33;
      goto LABEL_31;
    case 4:
      *(_BYTE *)(v6 + 4) = 2;
      v29 = v12;
      next_dword = insn_get_next_dword(v3);
      v20 = (int)next_dword;
      if ( !v29 )
        goto LABEL_30;
      goto LABEL_31;
    case 5:
LABEL_12:
      v13 = insn_get_next_qword(v3, a2, v12, (unsigned int)v7);
      *(_BYTE *)v6 = 5;
      *(_BYTE *)(v6 + 4) = 7;
      goto LABEL_13;
    default:
      break;
  }
LABEL_14:
  switch ( v10 )
  {
    case 2LL:
    case 3LL:
      v14 = *(_WORD *)(v6 + 7);
      *(_QWORD *)(v6 + 7) = 0;
      *(_WORD *)(v6 + 5) = v14 + 2;
      goto LABEL_7;
    case 5LL:
      *(_BYTE *)(v6 + 4) = (*(_BYTE *)(v6 + 4) != 7) + 3;
      goto LABEL_7;
    case 6LL:
      v17 = *(_QWORD *)(v6 + 7);
      v18 = (unsigned int)sub_C5C0(a1 + 120, *(_QWORD *)(v3 + 16)) - 1;
      if ( v18 >= *(_QWORD *)(a1 + 176) )
        goto LABEL_68;
      a2 = (unsigned int)v17;
      *(_QWORD *)(v6 + 15) = netnode_altval(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v18), (unsigned int)v17, 595);
      goto LABEL_7;
    case 8LL:
      v15 = *(_QWORD *)(v6 + 7);
      v16 = (unsigned int)sub_C5C0(a1 + 120, *(_QWORD *)(v3 + 16)) - 1;
      if ( v16 < *(_QWORD *)(a1 + 176) )
      {
        a2 = (unsigned int)v15;
        if ( netnode_supval(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v16), (unsigned int)v15, v33, 24, 70) > 23 )
          *(_QWORD *)(v6 + 15) = v34;
        goto LABEL_7;
      }
LABEL_68:
      sub_6040();
      return sub_6F90();
    case 10LL:
      goto LABEL_25;
    case 11LL:
    case 12LL:
      *(_BYTE *)(v6 + 31) = 1;
      goto LABEL_7;
    default:
      goto LABEL_7;
  }
}
