unsigned __int64 __fastcall sub_3B9AA0(__int64 a1, unsigned int a2, char a3)
{
  unsigned int *v6; // rax
  int v7; // edx
  unsigned __int64 v8; // r13
  int v9; // edx
  unsigned __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  _DWORD *v17; // rdi
  _DWORD *v18; // r13
  int v19; // eax
  __int64 range; // rdx
  unsigned __int64 v21; // rax

  if ( a2 == -1 )
    return 0;
  sub_3B8E40(a1, a2, 0);
  v6 = *(unsigned int **)(a1 + 1024);
  v7 = *(_DWORD *)(a1 + 1016);
  if ( (unsigned __int64)v6 > 0xFFFFFFFFFFFFFFFDLL )
  {
    if ( v7 == a2 )
    {
      v8 = *(unsigned int *)(*(_QWORD *)(a1 + 992) + 40LL);
    }
    else
    {
      v16 = a1 + 896;
      v17 = *(_DWORD **)(a1 + 992);
      if ( v6 == (unsigned int *)-1LL )
        v16 = a1 + 944;
      v18 = *(_DWORD **)(v16 + 24);
      while ( 1 )
      {
        if ( v17 == v18 )
          goto LABEL_33;
        v17 = (_DWORD *)std::_Rb_tree_decrement();
        v19 = v17[9];
        if ( v19 )
          break;
        if ( (v17[10] & 0x600) != 0x200 )
          goto LABEL_33;
      }
      if ( v17 == (_DWORD *)(v16 + 8) )
      {
LABEL_33:
        v8 = 0;
        goto LABEL_34;
      }
      v8 = (unsigned __int64)(a2 < v17[8] + v19) << 9;
LABEL_34:
      if ( *(_QWORD *)(a1 + 1160) )
      {
        range = rangeset_t_find_range(a1 + 1152, a2);
        v21 = v8;
        if ( range )
        {
          BYTE1(v21) = BYTE1(v8) | 1;
          v8 = v21;
        }
      }
    }
    if ( (a3 & 3) != 0 )
      goto LABEL_6;
    goto LABEL_17;
  }
  if ( !v6 || v7 != a2 )
    return 0;
  v8 = *v6;
  if ( (a3 & 3) != 0 )
  {
LABEL_6:
    if ( (a3 & 2) == 0 )
    {
      if ( (unsigned __int8)sub_3E9640(a1) )
      {
        if ( sub_3E9F50(a1, a2) )
        {
          v9 = sub_3E9860(a1, 0, a2);
          v10 = v8;
          if ( v9 > 0 )
          {
            BYTE1(v10) = BYTE1(v8) | 1;
            v8 = v10;
          }
        }
      }
    }
    goto LABEL_18;
  }
LABEL_17:
  v8 &= 0xFFFFFFFFFFFFFE00LL;
LABEL_18:
  if ( (a3 & 4) != 0 )
    return v8;
  v12 = *(_QWORD *)(a1 + 1496);
  if ( !v12 )
    return v8;
  v13 = a1 + 1488;
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v12 + 16);
      v15 = *(_QWORD *)(v12 + 24);
      if ( *(_DWORD *)(v12 + 32) < a2 )
        break;
      v13 = v12;
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v14 )
        goto LABEL_24;
    }
    v12 = *(_QWORD *)(v12 + 24);
  }
  while ( v15 );
LABEL_24:
  if ( v13 == a1 + 1488 || a2 < *(_DWORD *)(v13 + 32) )
    return v8;
  return ((unsigned __int64)*(unsigned int *)(v13 + 36) << 32) | v8;
}

