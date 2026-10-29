const char *__fastcall sub_123B0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  const char *result; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int dword; // ecx
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned __int64 v19; // [rsp+8h] [rbp-30h]

  v5 = *(_QWORD *)(a2 + 4);
  v6 = *(_QWORD *)(a2 + 20);
  switch ( *(_BYTE *)a2 )
  {
    case 0:
      v12 = 0;
      dword = 0;
      goto LABEL_7;
    case 1:
      v9 = (16 * (_WORD)v6) & 0xFF0;
      v10 = get_word(*(_QWORD *)(a2 + 4)) & 0xF00F;
      goto LABEL_5;
    case 2:
      v12 = 4;
      v19 = get_dword(*(_QWORD *)(a2 + 4), a2, a3, a4, a5) & 0xFF0F0000LL
          | (unsigned __int16)v6
          | (unsigned __int64)((16 * (_DWORD)v6) & 0xF00000);
      auto_mark_range(v5, v5 + 1, 20);
      dword = v19;
      goto LABEL_7;
    case 4:
      v17 = v5 + 1;
      v18 = v5;
      LODWORD(v5) = v5 + 2;
      v12 = 4;
      auto_mark_range(v18, v17, 20);
      dword = v6;
      goto LABEL_7;
    case 5:
      return "Relocation type R_FR_6_IN_4 cannot be used by IDA";
    case 6:
      v12 = 13;
      v11 = get_word(*(_QWORD *)(a2 + 4)) & 0xF00F | (16 * (_WORD)v6) & 0xFF0;
      goto LABEL_6;
    case 7:
      v12 = 13;
      v11 = get_word(*(_QWORD *)(a2 + 4)) & 0xF00F | (8 * (_WORD)v6) & 0x7F8;
      goto LABEL_6;
    case 8:
      v12 = 13;
      v11 = get_word(*(_QWORD *)(a2 + 4)) & 0xF00F | (4 * (_WORD)v6) & 0x3FC;
      goto LABEL_6;
    case 9:
      v10 = get_word(*(_QWORD *)(a2 + 4)) & 0xFF00;
      v9 = ((unsigned __int64)(unsigned __int8)v6 - v5 - 2) >> 1;
LABEL_5:
      v11 = v10 | v9;
      auto_mark_range(v5, v5 + 1, 20);
      v12 = 13;
      goto LABEL_6;
    case 0xA:
      v12 = 1;
      v11 = get_word(*(_QWORD *)(a2 + 4)) & 0xF800 | (((unsigned __int64)(v6 & 0x7FF) - v5 - 2) >> 1);
      auto_mark_range(v5, v5 + 1, 20);
LABEL_6:
      put_word(v5, v11);
      dword = get_dword(v5, v11, v13, v14, v15);
LABEL_7:
      sub_42050(a1, v5, v6, dword, 0, v12, 0, 0, 0);
      result = nullptr;
      break;
    case 0xB:
    case 0xC:
      result = (_BYTE *)(&dword_0 + 3);
      break;
    default:
      result = (_BYTE *)(&dword_0 + 2);
      break;
  }
  return result;
}

