__int64 __fastcall sub_18490(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, double a6, double a7)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r13
  int v10; // r15d
  unsigned __int8 byte; // al
  int v12; // r9d
  int v13; // r14d
  unsigned __int16 word; // ax
  __int64 v16; // rbx
  int v17; // r8d
  int dword; // eax
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  int v25; // [rsp+Ch] [rbp-3Ch]
  __int16 v26; // [rsp+Ch] [rbp-3Ch]

  v7 = *a2;
  v8 = *(_QWORD *)(a2 + 4);
  v9 = *(_QWORD *)(a2 + 20);
  if ( (unsigned int)v7 > 0x13 )
    goto LABEL_14;
  a4 = *a2;
  if ( ((1LL << v7) & 0x94824) != 0 )
  {
    v10 = 2;
    word = get_word(*(_QWORD *)(a2 + 4));
    v12 = 1;
    v13 = word;
    goto LABEL_5;
  }
  if ( ((1LL << v7) & 0x48) == 0 )
  {
LABEL_14:
    v10 = 4;
    dword = get_dword(*(_QWORD *)(a2 + 4), a2, a3, a4, a5);
    v12 = 4;
    v13 = dword;
    goto LABEL_5;
  }
  v10 = 1;
  byte = get_byte(*(_QWORD *)(a2 + 4));
  v12 = 13;
  v13 = byte;
LABEL_5:
  switch ( v7 )
  {
    case 0LL:
      return 0;
    case 2LL:
      if ( (int)v9 + 0x8000 > (unsigned int)&algn_17FF8[7] )
      {
        v26 = v12;
        sub_BFC0((__int64)"Possible fixup overflow at %a (target %a)", a6, a7);
        LOWORD(v12) = v26;
      }
      v12 = (unsigned __int16)v12;
      v16 = (unsigned __int16)(v13 + v9);
      goto LABEL_9;
    case 5LL:
      v19 = v13;
      LOBYTE(v19) = 0;
      v16 = v19 | (unsigned int)(unsigned __int8)(v13 + (((int)v9 - (int)v8) >> 2));
      auto_mark_range(v8, v8 + 1, 20);
      v12 = 13;
      if ( v10 == 2 )
        goto LABEL_17;
      goto LABEL_10;
    case 20LL:
      sub_40E20(a1, v8, 2);
      return 0;
    case 21LL:
    case 22LL:
      v16 = v9;
      v13 = 0;
LABEL_9:
      if ( v10 == 2 )
      {
LABEL_17:
        v20 = v16;
        v25 = v12;
        put_word(v8, v16);
      }
      else
      {
LABEL_10:
        if ( v10 != 1 )
        {
          v17 = v13;
          goto LABEL_12;
        }
        v20 = v16;
        v25 = v12;
        put_byte(v8, v16);
      }
      v24 = get_dword(v8, v20, v21, v22, v23);
      v12 = v25;
      v17 = 0;
      LODWORD(v16) = v24;
LABEL_12:
      sub_42050(a1, v8, v9, v16, v17, v12, 0, 0, 0);
      return 0;
    default:
      return 2;
  }
}
