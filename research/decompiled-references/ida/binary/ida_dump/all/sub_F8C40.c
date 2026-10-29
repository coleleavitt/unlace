__int64 __fastcall sub_F8C40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // ebx
  unsigned __int64 v4; // r14
  _QWORD *v5; // rdx
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rbx
  _QWORD *v17; // r12
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  char v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // rax
  _QWORD v26[9]; // [rsp+0h] [rbp-48h] BYREF

  v26[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 8 )
    return 0;
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_DWORD *)(v2 + 280) & 4;
  if ( v3 )
    return 0;
  if ( (*(_DWORD *)(v2 + 20) & 0xFFFFFFF0) == 64 || (*(_DWORD *)(v2 + 20) & 0xFFFFFFF0) == 208 )
    return 0;
  v4 = *(_QWORD *)v2;
  if ( *(_QWORD *)v2 == -1 )
    return 0;
  v5 = **(_QWORD ***)(a1 + 48);
  if ( !v5 )
    return 0;
  v6 = 24;
  v7 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v7 )
  {
LABEL_16:
    if ( *(int *)(v6 + 32) < 0 )
    {
      if ( !under_debugger )
        sub_383060(51677);
      BUG();
    }
    v12 = *(int *)(v6 + 32);
    v13 = *(_QWORD *)(v2 + 32);
    if ( v12 < v13 )
    {
      sub_82440((__int64 *)(v2 + 24), v12);
      v13 = *(_QWORD *)(v2 + 32);
    }
    v14 = 0;
    if ( *(_QWORD *)(v6 + 16) )
    {
      do
      {
        while ( 1 )
        {
          v15 = *(int *)(*(_QWORD *)(v6 + 8) + 4 * v14);
          if ( v15 < v13 )
            break;
          v14 = ++v3;
          if ( (unsigned __int64)v3 >= *(_QWORD *)(v6 + 16) )
            goto LABEL_24;
        }
        ++v3;
        sub_F8B40(v2, v15);
        v13 = *(_QWORD *)(v2 + 32);
        v14 = v3;
      }
      while ( (unsigned __int64)v3 < *(_QWORD *)(v6 + 16) );
    }
LABEL_24:
    if ( v13 < *(int *)(v2 + 8) )
      *(_DWORD *)(v2 + 8) = v13;
    if ( *(_DWORD *)(v2 + 20) == 128 )
    {
      if ( v13 )
      {
        v25 = *(_QWORD *)(v6 + 16);
        if ( v25 && !*(_DWORD *)(*(_QWORD *)(v6 + 8) + 4 * v25 - 4) )
          *(_DWORD *)(v2 + 20) = 80;
      }
      else
      {
        *(_DWORD *)(v2 + 20) = 32;
      }
    }
    v16 = *(_QWORD **)(a1 + 72);
    v17 = (_QWORD *)(a1 + 64);
    if ( v16 )
    {
      v18 = (_QWORD *)(a1 + 64);
      v19 = *(_QWORD **)(a1 + 72);
      do
      {
        if ( v19[4] >= v4 )
        {
          v18 = v19;
          v19 = (_QWORD *)v19[2];
        }
        else
        {
          v19 = (_QWORD *)v19[3];
        }
      }
      while ( v19 );
      if ( v17 != v18 && v4 >= v18[4] )
      {
LABEL_13:
        v9 = *(_QWORD *)(a1 + 16);
        v10 = *(_DWORD *)(v9 + 24);
        BYTE1(v10) &= ~2u;
        LOBYTE(v10) = v10 | 0x80;
        *(_DWORD *)(v9 + 24) = v10;
        return 0;
      }
      while ( 1 )
      {
        v20 = v16[4];
        v21 = 0;
        v22 = (_QWORD *)v16[3];
        if ( v4 < v20 )
        {
          v22 = (_QWORD *)v16[2];
          v21 = 1;
        }
        if ( !v22 )
          break;
        v16 = v22;
      }
      if ( !v21 )
      {
LABEL_38:
        if ( v20 >= v4 )
          goto LABEL_40;
        goto LABEL_39;
      }
      if ( *(_QWORD **)(a1 + 80) != v16 )
      {
        v20 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
        goto LABEL_38;
      }
    }
    else if ( v17 != *(_QWORD **)(a1 + 80) && *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= v4 )
    {
LABEL_40:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 757LL) & 1) == 0 )
      {
        sub_336290(v26, v2);
        if ( (unsigned __int8)sub_F34C0(*(_QWORD *)(a1 + 8), v4, (int)v26, 0, v23, v24) )
          *(_BYTE *)(a1 + 104) = 1;
        clear_tinfo_t();
      }
      goto LABEL_13;
    }
LABEL_39:
    *(_QWORD *)(operator new(0x28u) + 32) = v4;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 96);
    goto LABEL_40;
  }
  while ( (*(_BYTE *)v7 & 2) == 0 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    v6 = v7 + 24;
    if ( v4 < v8 )
    {
      v7 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      if ( v8 >= v4 )
      {
        if ( v5 == (_QWORD *)v7 )
          return 0;
        goto LABEL_16;
      }
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  return 0;
}
