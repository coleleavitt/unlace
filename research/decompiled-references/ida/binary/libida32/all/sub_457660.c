unsigned __int64 __fastcall sub_457660(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v7; // r15
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rsi
  int i; // r13d
  char v12; // dl
  __int64 v13; // r13
  unsigned __int64 j; // r15
  const char *v15; // rdx
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  int v22; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v3 = *a2;
  v4 = qword_2CA1698;
  v5 = *a2 & 0x600;
  v23 = __readfsqword(0x28u);
  v7 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( v5 == 1024 && (v3 & 0xF0000000) == 0xB0000000LL )
  {
    v3 &= 0x4FFFFFFFu;
    v17 = ea2node(a3);
    netnode_supdel(v17, 17, 65);
  }
  if ( *(_DWORD *)a1 != -1 )
  {
    v22 = *(_DWORD *)a1 + 1;
    v8 = ea2node(a3);
    netnode_supset(v8, 17, &v22, 4, 65);
    v3 |= 0xB0000000uLL;
  }
  v9 = ea2node(a3);
  netnode_supdel(v9, 5, 83);
  if ( *(_BYTE *)(a1 + 328) )
    set_array_parameters(a3, a1 + 4);
  sub_5F0670(a3);
  if ( *(_QWORD *)(a1 + 24) )
    sub_5F0480(a3, a1 + 16);
  v10 = 15;
  if ( (unsigned __int8)is_manual(v3, 15) )
  {
    for ( i = 0; i != 8; ++i )
    {
      v12 = i;
      v10 = a3;
      sub_3C3030(v7, a3, v12);
    }
    v3 &= 0xFF666666F66FFFFFLL;
  }
  if ( *(_BYTE *)(a1 + 337) )
  {
    v13 = a1 + 40;
    for ( j = 0; j != 8; ++j )
    {
      if ( *(_BYTE *)(a1 + j + 329) )
      {
        v15 = haystack;
        if ( *(_QWORD *)(v13 + 8) )
          v15 = *(const char **)v13;
        v10 = (unsigned int)j;
        sub_3C2FE0(a3, j, (__int64)v15);
        v3 |= 9LL << (4 * ((j > 1) + (unsigned __int8)j + 5));
      }
      v13 += 24;
    }
  }
  if ( (*(_BYTE *)(v4 + 771) & 2) != 0 )
  {
    v18 = ea2node(a3);
    v10 = 15;
    netnode_supdel(v18, 15, 65);
    v19 = *(_DWORD *)(a1 + 232);
    if ( v19 != -1 )
    {
      v22 = v19 + 1;
      v20 = ea2node(a3);
      v10 = 15;
      netnode_supset(v20, 15, &v22, 4, 65);
    }
  }
  if ( (~(_WORD)v3 & 0x600) == 0 )
  {
    if ( (int)v3 < 0 )
    {
      v3 &= 0x7FFFFFFFu;
      del_switch_info(a3, v10);
      del_jumptable_info(a3);
    }
    if ( *(_BYTE *)(a1 + 338) )
    {
      set_switch_info(a3, a1 + 240);
      if ( !*(_BYTE *)(a1 + 339) )
      {
        if ( !*(_BYTE *)(a1 + 338) )
          goto LABEL_21;
        goto LABEL_30;
      }
    }
    else if ( !*(_BYTE *)(a1 + 339) )
    {
      goto LABEL_21;
    }
    set_jumptable_info(a3, a1 + 320);
    if ( !*(_BYTE *)(a1 + 338) && !*(_BYTE *)(a1 + 339) )
      goto LABEL_21;
LABEL_30:
    v3 |= 0x80000000uLL;
  }
LABEL_21:
  *a2 = v3;
  return v23 - __readfsqword(0x28u);
}

