__int64 __fastcall sub_3BCF60(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // r12d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  _DWORD *v8; // rdi
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  unsigned __int16 v13; // ax

  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 1204) == a2 )
    return *(unsigned int *)(a1 + 1208);
  *(_DWORD *)(a1 + 1204) = a2;
LABEL_4:
  v4 = v3 + 1;
  if ( v3 == -2 )
    goto LABEL_19;
  while ( 1 )
  {
    v5 = sub_3B9AA0(a1, v4, 4);
    if ( (v5 & 0x600) != 0x200 )
      goto LABEL_19;
    v6 = *(_QWORD *)(a1 + 1024);
    if ( v6 > 0xFFFFFFFFFFFFFFFDLL )
      break;
    if ( (v4 & 1) == 0 )
    {
      v13 = (v5 >> 20) & 0xFFF;
      if ( !v13 || __CFADD__(v13, v4) )
        goto LABEL_19;
      v3 += v13;
      goto LABEL_4;
    }
    v3 = v4++;
  }
  v7 = a1 + 896;
  v8 = *(_DWORD **)(a1 + 992);
  if ( v6 == -1 )
    v7 = a1 + 944;
  if ( *(_DWORD *)(a1 + 1016) != v4 )
    goto LABEL_14;
  v9 = v8[9];
  if ( !v9 )
  {
    while ( (v8[10] & 0x600) == 0x200 )
    {
LABEL_14:
      if ( *(_DWORD **)(v7 + 24) == v8 )
        break;
      v8 = (_DWORD *)std::_Rb_tree_decrement();
      v9 = v8[9];
      if ( v9 )
        goto LABEL_16;
    }
LABEL_12:
    if ( !under_debugger )
      interr(71);
    BUG();
  }
LABEL_16:
  if ( v8 == (_DWORD *)(v7 + 8) )
    goto LABEL_12;
  v10 = v8[8];
  v11 = v10 + v9;
  if ( v10 != v4 )
    v4 = v11;
LABEL_19:
  *(_DWORD *)(a1 + 1208) = v4;
  return v4;
}

