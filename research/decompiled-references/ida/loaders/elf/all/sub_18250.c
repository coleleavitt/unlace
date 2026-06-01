__int64 __fastcall sub_18250(int a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, double a6, double a7)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r13
  int dword; // r14d
  __int64 v12; // rdi
  __int16 word; // ax
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  int v21; // r9d
  int v22; // ecx
  __int16 v24; // ax
  __int16 v25; // r15
  __int64 v26; // [rsp+8h] [rbp-40h]
  int v27; // [rsp+8h] [rbp-40h]

  v7 = *a2;
  v8 = *(_QWORD *)(a2 + 4);
  v9 = *(_QWORD *)(a2 + 20);
  if ( (_DWORD)v7 != 5 )
  {
    if ( (unsigned int)v7 > 5 )
    {
      v12 = *(_QWORD *)(a2 + 4);
      if ( (_DWORD)v7 != 6 )
      {
        get_dword(v12, a2, a3, a4, a5);
        return 2;
      }
      word = get_word(v12);
      v26 = word & 0xFF00 | (unsigned int)(unsigned __int8)(word + (((int)v9 - (int)v8) >> 2));
      auto_mark_range(v8, v8 + 1, 20);
      v14 = v26;
      v15 = 13;
    }
    else
    {
      if ( (_DWORD)v7 != 2 )
      {
        if ( (_DWORD)v7 != 3 )
        {
          dword = get_dword(*(_QWORD *)(a2 + 4), a2, a3, a4, a5);
          switch ( v7 )
          {
            case 0LL:
              return 0;
            case 1LL:
              v21 = 4;
              v22 = dword + v9;
              goto LABEL_9;
            case 4LL:
              if ( (unsigned int)(v9 + 0x800000) > 0x17FFFFF )
                sub_BFC0((__int64)"Possible fixup overflow at %a (target %a)", a6, a7);
              v21 = 4;
              v22 = dword & 0xFF000000 | (v9 + dword) & 0xFFFFFF;
              goto LABEL_9;
          }
          return 0;
        }
        goto LABEL_11;
      }
      v24 = get_word(*(_QWORD *)(a2 + 4));
      if ( (int)v9 + 0x8000 > (unsigned int)&algn_17FF8[7] )
      {
        v25 = v24;
        sub_BFC0((__int64)"Possible fixup overflow at %a (target %a)", a6, a7);
        v15 = 1;
        v14 = (unsigned __int16)(v25 + v9);
      }
      else
      {
        v15 = 1;
        v14 = (unsigned __int16)(v9 + v24);
      }
    }
    v16 = v14;
    v27 = v15;
    put_word(v8, v14);
    v20 = get_dword(v8, v16, v17, v18, v19);
    v21 = v27;
    v22 = v20;
LABEL_9:
    sub_42050(a1, v8, v9, v22, 0, v21, 0, 0, 0);
    return 0;
  }
LABEL_11:
  get_byte(*(_QWORD *)(a2 + 4));
  return 2;
}

