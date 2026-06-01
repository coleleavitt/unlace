unsigned __int64 __fastcall sub_46BAA0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v7; // r15
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int i; // r13d
  char v16; // dl
  __int64 v17; // r13
  unsigned __int64 j; // r15
  const char *v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // [rsp+0h] [rbp-58h]
  _QWORD *v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v3 = *a2;
  v27 = a2;
  v4 = qword_2CCB598;
  v5 = *a2 & 0x600LL;
  v29 = __readfsqword(0x28u);
  v7 = *(_QWORD **)(qword_2CCB598 + 1672);
  if ( v5 == 1024 && (v3 & 0xF0000000) == 0xB0000000LL )
  {
    v3 &= 0x4FFFFFFFu;
    v21 = ea2node(a3);
    netnode_supdel(v21, 17, 65);
  }
  if ( *(_DWORD *)a1 != -1 )
  {
    LODWORD(v28) = *(_DWORD *)a1 + 1;
    v8 = ea2node(a3);
    netnode_supset(v8, 17, &v28, 4, 65, v9);
    v3 |= 0xB0000000uLL;
  }
  v10 = ea2node(a3);
  netnode_supdel(v10, 5, 83);
  if ( *(_BYTE *)(a1 + 376) )
    set_array_parameters(a3, a1 + 4);
  sub_60C640(a3);
  if ( *(_QWORD *)(a1 + 24) )
    sub_60C450(a3, a1 + 16);
  v11 = 15;
  if ( (unsigned __int8)is_manual(v3, 15) )
  {
    for ( i = 0; i != 8; ++i )
    {
      v16 = i;
      v11 = a3;
      sub_3C82A0(v7, a3, v16);
    }
    v3 &= 0xFF666666F66FFFFFLL;
  }
  if ( *(_BYTE *)(a1 + 385) )
  {
    v17 = a1 + 40;
    for ( j = 0; j != 8; ++j )
    {
      if ( *(_BYTE *)(a1 + j + 377) )
      {
        v19 = haystack;
        if ( *(_QWORD *)(v17 + 8) )
          v19 = *(const char **)v17;
        v11 = (unsigned int)j;
        sub_3C8250(a3, j, (__int64)v19, v12, v13, v14, v26, (__int64)v27);
        v12 = 4 * ((j > 1) + (unsigned int)j + 5);
        v3 |= 9LL << (4 * ((j > 1) + (unsigned __int8)j + 5));
      }
      v17 += 24;
    }
  }
  if ( (*(_BYTE *)(v4 + 939) & 2) != 0 )
  {
    v22 = ea2node(a3);
    v11 = 15;
    netnode_supdel(v22, 15, 65);
    v23 = *(_QWORD *)(a1 + 232);
    if ( v23 != -1 )
    {
      v28 = v23 + 1;
      v24 = ea2node(a3);
      v11 = 15;
      netnode_supset(v24, 15, &v28, 8, 65, v25);
    }
  }
  if ( (~(_WORD)v3 & 0x600) == 0 )
  {
    if ( (int)v3 < 0 )
    {
      v3 &= 0x7FFFFFFFu;
      del_switch_info(a3, v11);
      del_jumptable_info(a3);
    }
    if ( *(_BYTE *)(a1 + 386) )
    {
      set_switch_info(a3, a1 + 240);
      if ( !*(_BYTE *)(a1 + 387) )
      {
        if ( !*(_BYTE *)(a1 + 386) )
          goto LABEL_21;
        goto LABEL_30;
      }
    }
    else if ( !*(_BYTE *)(a1 + 387) )
    {
      goto LABEL_21;
    }
    set_jumptable_info(a3, a1 + 360);
    if ( !*(_BYTE *)(a1 + 386) && !*(_BYTE *)(a1 + 387) )
      goto LABEL_21;
LABEL_30:
    v3 |= 0x80000000uLL;
  }
LABEL_21:
  *v27 = v3;
  return v29 - __readfsqword(0x28u);
}
