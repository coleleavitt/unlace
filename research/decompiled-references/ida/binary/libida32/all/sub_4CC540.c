__int64 __fastcall sub_4CC540(__int64 *a1, __int64 a2)
{
  unsigned int v4; // r13d
  __int64 v5; // rdi
  __int64 v6; // rbp
  int segm_base; // eax
  __int64 v8; // r15
  int v9; // r14d
  unsigned int v10; // ebp
  __int64 v11; // rsi
  char *v13; // rax
  int v14; // eax
  int v15; // eax

  v4 = *((_DWORD *)a1 + 11);
  v5 = *(_QWORD *)(*a1 + 1480);
  if ( (*(_BYTE *)(a1[2] + 12) & 0x20) != 0 )
  {
    v6 = sub_4EE820(v5 + 1552, v4 - 1);
    if ( v6 )
      goto LABEL_3;
  }
  else
  {
    v6 = sub_4EE820(v5 + 1552, v4);
    if ( v6 )
      goto LABEL_3;
  }
  v6 = sub_4EEB90(*(_QWORD *)(*a1 + 1480) + 1552LL, v4);
  if ( !v6 && !*((_BYTE *)a1 + 36) )
  {
    if ( (debug & 2) != 0 )
      sub_383DA0();
    return 0;
  }
LABEL_3:
  segm_base = get_segm_base(v6);
  v8 = a1[2];
  v9 = segm_base;
  if ( *(_DWORD *)(*a1 + 764) == 6 )
  {
    v14 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 == -1 )
    {
      v15 = sub_4CA120(*(_QWORD *)(*a1 + 1480), *((unsigned int *)a1 + 6), *(_DWORD *)(v8 + 12), *((_DWORD *)a1 + 8));
      if ( (*(_BYTE *)(v8 + 13) & 1) != 0 )
        v15 = -v15;
      v14 = *(_DWORD *)(v8 + 4) + v15 - *(_DWORD *)(v8 + 8);
      v8 = a1[2];
    }
    if ( v4 == v14 && *(_DWORD *)(v8 + 4) != v9 && (!v6 || *(_BYTE *)(v6 + 20)) && !*((_BYTE *)a1 + 36) )
      return 0;
  }
  if ( sub_4CC2D0(a1, a2, v4, v4 - v9, 0, (*(_BYTE *)(v8 + 12) & 0x10) != 0) <= 0 )
    return 0;
  v10 = 1;
  if ( *(_QWORD *)(a2 + 8) && (v13 = strchr(*(const char **)a2, 9)) != nullptr )
  {
    v10 = (((v13[1] - 43) & 0xFD) == 0) + 1;
    v11 = *(unsigned int *)(a1[2] + 8);
    if ( (_DWORD)v11 )
      goto LABEL_15;
  }
  else
  {
    v11 = *(unsigned int *)(a1[2] + 8);
    if ( (_DWORD)v11 )
    {
LABEL_15:
      v10 = 2;
      append_disp(a2, v11, 1);
    }
  }
  return v10;
}

