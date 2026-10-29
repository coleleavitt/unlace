__int64 __fastcall sub_13880(int a1, int *a2, double a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  int word; // ebp
  int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // r14
  int v11; // eax
  __int16 v12; // r15
  bool v13; // cc
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int dword; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 result; // rax

  word = 0;
  v8 = *a2;
  v9 = *(_QWORD *)(a2 + 1);
  v10 = *(_QWORD *)(a2 + 5);
  v11 = a2[7];
  if ( (unsigned __int8)(*a2 - 4) <= 1u || (_BYTE)v8 == 1 )
  {
    v12 = 1;
    if ( !v11 )
      word = (unsigned __int16)get_word(*(_QWORD *)(a2 + 1));
LABEL_5:
    v8 = (unsigned __int8)v8;
    v13 = (unsigned __int8)v8 <= 2u;
    if ( (unsigned __int8)v8 != 2 )
      goto LABEL_6;
LABEL_14:
    if ( (unsigned int)((unsigned int)&unk_80000 + v10) > 0x17FFFF )
      sub_BFC0((__int64)"Possible fixup overflow at %a (target %a)", a3, a4);
    v14 = (int)(word & 0xFFF00000) | (unsigned __int64)(((_DWORD)v10 + word) & 0xFFFFF);
    goto LABEL_21;
  }
  v12 = 4;
  if ( v11 )
    goto LABEL_5;
  v8 = (unsigned __int8)v8;
  word = get_dword(*(_QWORD *)(a2 + 1), a2, (unsigned int)(*a2 - 4), a6, a7);
  v13 = (unsigned __int8)v8 <= 2u;
  if ( (unsigned __int8)v8 == 2 )
    goto LABEL_14;
LABEL_6:
  if ( !v13 )
  {
    result = 2;
    if ( v8 != 3 )
      return result;
    if ( (unsigned int)(v10 + 0x800000) > 0x17FFFFF )
      sub_BFC0((__int64)"Possible fixup overflow at %a (target %a)", a3, a4);
    v14 = (int)(word & 0xFF000000) | (unsigned __int64)(((_DWORD)v10 + word) & 0xFFFFFF);
    word = 0;
LABEL_21:
    if ( v12 != 1 )
    {
      v20 = word;
      v21 = 4;
      goto LABEL_23;
    }
LABEL_11:
    v15 = v14;
    put_word(v9, v14);
    dword = get_dword(v9, v15, v16, v17, v18);
    v20 = 0;
    v21 = 1;
    LODWORD(v14) = dword;
LABEL_23:
    sub_42050(a1, v9, v10, v14, v20, v21, 0, 0, 0);
    return 0;
  }
  if ( v8 )
  {
    if ( (int)v10 + 0x8000 > (unsigned int)&algn_17FF8[7] )
      sub_BFC0((__int64)"Possible fixup overflow at %a (target %a)", a3, a4);
    v14 = (unsigned __int16)(word + v10);
    goto LABEL_11;
  }
  return 0;
}

