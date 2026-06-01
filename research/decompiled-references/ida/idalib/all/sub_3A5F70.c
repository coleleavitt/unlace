void __fastcall sub_3A5F70(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // r12d
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax

  if ( a2 == -1 )
    return;
  v4 = a1[3];
  if ( *(_QWORD *)(v4 + 16) < a2 )
    return;
  v5 = a3;
  v6 = a4;
  if ( *(_DWORD *)(v4 + 24) != 8 && a3 > 0x100000000LL )
    v5 = 0x100000000LL;
  v7 = 0;
  while ( a4 != dword_23AD7A0[v7] )
  {
    if ( ++v7 == 14 )
    {
      if ( !under_debugger )
        interr(44);
      BUG();
    }
  }
  v8 = v7;
  v9 = *(_QWORD *)(*a1 + 1536LL);
  if ( ((unsigned int)getinf(10) & *(_DWORD *)&asc_23AD760[4 * (int)v7]) == 0 )
    return;
  if ( v5 >= a2 )
  {
    v10 = v5;
    v5 = a2;
    a2 = v10;
  }
  v11 = -2;
  if ( a2 != -1 )
    v11 = a2;
  if ( v11 == v5 )
    return;
  if ( (*(_BYTE *)(a1[2] + 12LL) & 8) != 0 && v11 == v5 + 1 )
  {
    if ( (unsigned int)v6 > 0x23 )
      goto LABEL_31;
    v12 = 0x840100000LL;
    if ( _bittest64(&v12, v6) )
    {
      v5 &= ~1uLL;
      v11 = v5 + 1;
    }
  }
  if ( (_DWORD)v6 == 30 )
  {
    v13 = sub_3BE900(a1, v5, 4);
    if ( (~(_WORD)v13 & 0x600) == 0 && (v13 & 0x10000000) != 0
      || (get_aflags(v5) & 0x20000000) != 0
      || (get_aflags(v5) & 0x10000000) != 0 )
    {
      return;
    }
    goto LABEL_31;
  }
  if ( (int)v6 > 30 )
  {
    if ( (_DWORD)v6 == 35 && sub_505D70(a1 + 213, v5) )
      return;
    goto LABEL_31;
  }
  if ( (_DWORD)v6 == 10 )
  {
    sub_3A5CC0(a1, (char *)v5, (char *)v11);
    goto LABEL_31;
  }
  if ( (_DWORD)v6 != 20 )
  {
LABEL_31:
    sub_3A44A0(v9, v8, v5, (void *)v11);
    return;
  }
  if ( (~(unsigned __int16)sub_3BE900(a1, v5, 4) & 0x600) != 0 && (get_aflags(v5) & 0x10000000) == 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*a1 + 1536LL) + 144LL) == 25 )
      v8 = 2;
    goto LABEL_31;
  }
}
