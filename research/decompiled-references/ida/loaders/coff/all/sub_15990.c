__int64 __fastcall sub_15990(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // cx
  unsigned __int16 v6; // cx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, unsigned int); // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  unsigned int dword; // r12d
  char v18; // cl
  unsigned int v19; // r14d
  unsigned int v20; // r12d
  unsigned int v21; // eax
  unsigned int v22; // r13d
  __int64 v23; // rax
  void (*v24)(); // rdx
  unsigned int v25; // r12d
  unsigned int v26; // esi
  __int64 v27; // rsi
  __int64 (__fastcall *v28)(__int64, __int64, __int64); // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, __int64); // rax
  int word; // r13d
  int v34; // r13d
  __int64 (__fastcall *v35)(__int64, __int64); // rax
  int byte; // r12d
  __int64 v37; // rax
  int v38; // r12d
  void (*v39)(); // rdx
  unsigned int v40; // r12d
  __int64 (__fastcall *v41)(__int64, __int64, __int64); // rax
  __int64 (__fastcall *v42)(__int64, __int64, __int64); // rax

  v4 = *(_WORD *)(a3 + 12);
  if ( v4 <= 0x17u )
  {
    if ( v4 > 4u )
    {
      switch ( v4 )
      {
        case 5u:
          *(_WORD *)a2 = 4;
          v30 = *a1;
          v31 = a1[4];
          v32 = *(__int64 (__fastcall **)(__int64, __int64))(v30 + 40);
          if ( v32 == sub_14A40 )
            word = (unsigned __int16)get_word(v31);
          else
            word = (unsigned __int16)v32((__int64)a1, v31);
          v34 = word << 8;
          v35 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 32LL);
          if ( v35 == sub_14A80 )
            byte = (unsigned __int8)get_byte(a1[4] + 2LL);
          else
            byte = (unsigned __int8)v35((__int64)a1, a1[4] + 2LL);
          v37 = *a1;
          v38 = v34 | byte;
          v39 = *(void (**)())(*a1 + 16LL);
          if ( v39 != nullsub_2 )
          {
            ((void (__fastcall *)(_QWORD *, _QWORD))v39)(a1, v38);
            v37 = *a1;
          }
          v40 = *((_DWORD *)a1 + 14) + v38;
          v41 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v37 + 72);
          if ( v41 == sub_14A50 )
            put_word(a1[4], (unsigned __int16)(v40 >> 8));
          else
            v41((__int64)a1, a1[4], (unsigned __int16)(v40 >> 8));
          v42 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 64LL);
          if ( v42 == sub_14A70 )
            put_byte(a1[4] + 2LL, (unsigned __int8)v40);
          else
            v42((__int64)a1, a1[4] + 2LL, (unsigned __int8)v40);
          break;
        case 0x10u:
          goto LABEL_8;
        case 0x11u:
          *(_WORD *)a2 = 4;
          v29 = *a1;
          v7 = a1[7];
          v8 = a1[4];
          v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v29 + 112);
          if ( v9 != sub_14A20 )
            goto LABEL_15;
          add_dword(v8, v7);
          break;
        case 0x16u:
          v14 = *a1;
          v15 = a1[4];
          v16 = *(__int64 (__fastcall **)(__int64, __int64))(v14 + 48);
          if ( v16 == sub_14A30 )
            dword = get_dword(v15);
          else
            dword = v16((__int64)a1, v15);
          v18 = *((_BYTE *)a1 + 67);
          v19 = (unsigned __int16)dword;
          v20 = HIWORD(dword);
          if ( !v18 )
          {
            v21 = v20;
            v20 = v19;
            v19 = v21;
          }
          v22 = v19 & 0x7FF | ((int)(v20 << 21) >> 10);
          v23 = *a1;
          v24 = *(void (**)())(*a1 + 16LL);
          if ( v24 != nullsub_2 )
          {
            ((void (__fastcall *)(_QWORD *, _QWORD))v24)(a1, v22);
            v18 = *((_BYTE *)a1 + 67);
            v23 = *a1;
          }
          v25 = v20 & 0xFFFFF800 | ((unsigned int)((int)(a1[7] - *((_DWORD *)a1 + 12) + 2 * v22) >> 1) >> 11) & 0x7FF;
          v26 = v19 & 0xFFFFF800 | ((int)(a1[7] - *((_DWORD *)a1 + 12) + 2 * v22) >> 1) & 0x7FF;
          if ( v18 )
            v27 = (v25 << 16) | v26;
          else
            v27 = v25 | (v26 << 16);
          v28 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v23 + 80);
          if ( v28 == sub_149F0 )
            put_dword(a1[4], v27);
          else
            v28((__int64)a1, a1[4], v27);
          *(_WORD *)a2 = 1;
          break;
        case 0x17u:
          *(_WORD *)a2 = 4;
          break;
        default:
          goto LABEL_10;
      }
    }
    goto LABEL_10;
  }
  if ( v4 <= 0x400Cu )
  {
    if ( v4 > 0x3FFFu )
      return 1;
    v6 = v4 - 124;
    if ( v6 <= 0x19u )
    {
      if ( ((1LL << v6) & 0x200A000) != 0 )
      {
LABEL_8:
        *(_WORD *)a2 = 1;
        v7 = a1[7];
        v8 = a1[4];
        v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 104LL);
        if ( v9 == sub_14A10 )
          add_word(v8, v7);
        else
LABEL_15:
          v9((__int64)a1, v8, v7);
      }
      else if ( ((1LL << v6) & 0x40001) != 0 )
      {
        *(_WORD *)a2 = 13;
        v11 = *((unsigned int *)a1 + 14);
        v12 = a1[4];
        v13 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int))(*a1 + 96LL);
        if ( v13 == sub_14A00 )
          add_byte(v12, v11);
        else
          v13((__int64)a1, a1[4], v11);
      }
    }
LABEL_10:
    *(_DWORD *)(a2 + 4) &= ~4u;
    return 1;
  }
  if ( v4 != 16406 )
  {
    if ( v4 > 0x4016u )
    {
      if ( (unsigned __int16)(v4 - 20480) <= 2u )
        return 1;
      goto LABEL_10;
    }
    if ( v4 > 0x4010u )
      return 1;
    if ( v4 <= 0x400Eu )
      goto LABEL_10;
  }
  *(_WORD *)a2 = 1;
  (*(void (__fastcall **)(_QWORD *, _QWORD))*a1)(a1, *(unsigned __int16 *)(a3 + 12));
  return 1;
}

