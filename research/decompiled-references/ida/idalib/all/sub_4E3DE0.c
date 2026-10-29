__int64 __fastcall sub_4E3DE0(__int64 *a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 segm_base; // rax
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // r14
  unsigned int v11; // ebp
  __int64 v12; // rsi
  char *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = a1[7];
  v5 = *(_QWORD *)(*a1 + 1672);
  if ( (*(_BYTE *)(a1[2] + 24) & 0x20) != 0 )
  {
    v6 = sub_505D70(v5 + 1624, v4 - 1);
    if ( v6 )
      goto LABEL_3;
  }
  else
  {
    v6 = sub_505D70(v5 + 1624, v4);
    if ( v6 )
      goto LABEL_3;
  }
  v6 = sub_5060F0(*(_QWORD *)(*a1 + 1672) + 1624LL, v4);
  if ( !v6 && !*((_BYTE *)a1 + 48) )
  {
    if ( (debug & 2) != 0 )
      sub_3879F0();
    return 0;
  }
LABEL_3:
  segm_base = get_segm_base(v6);
  v8 = *a1;
  v9 = a1[2];
  v10 = segm_base;
  if ( *(_DWORD *)(*a1 + 932) == 6 )
  {
    v15 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 == -1 )
    {
      v16 = sub_4E1680(*(_QWORD *)(v8 + 1672), a1[3], *(_DWORD *)(v9 + 24), a1[5]);
      if ( (*(_BYTE *)(v9 + 25) & 1) != 0 )
        v16 = -v16;
      v15 = *(_QWORD *)(v9 + 8) + v16 - *(_QWORD *)(v9 + 16);
      v9 = a1[2];
    }
    if ( v4 == v15 && *(_QWORD *)(v9 + 8) != v10 && (!v6 || *(_BYTE *)(v6 + 40)) && !*((_BYTE *)a1 + 48) )
      return 0;
    v8 = *a1;
  }
  if ( sub_4E3B70(a1, a2, v4, *(_QWORD *)(v8 + 1504) & (v4 - v10), 0, (*(_BYTE *)(v9 + 24) & 0x10) != 0) <= 0 )
    return 0;
  v11 = 1;
  if ( *(_QWORD *)(a2 + 8) && (v14 = strchr(*(const char **)a2, 9)) != nullptr )
  {
    v11 = (((v14[1] - 43) & 0xFD) == 0) + 1;
    v12 = *(_QWORD *)(a1[2] + 16);
    if ( v12 )
      goto LABEL_15;
  }
  else
  {
    v12 = *(_QWORD *)(a1[2] + 16);
    if ( v12 )
    {
LABEL_15:
      v11 = 2;
      append_disp(a2, v12, 1);
    }
  }
  return v11;
}
