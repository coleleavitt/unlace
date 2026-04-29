__int64 __fastcall sub_F8680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  int v6; // ebx
  unsigned __int64 v7; // r14
  _QWORD *v8; // rdx
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // r12
  _QWORD *v21; // rsi
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _BOOL4 v26; // r15d
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // r9d
  __int64 v30; // rax
  _QWORD v31[9]; // [rsp+0h] [rbp-48h] BYREF

  v31[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 8 )
    return 0;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_DWORD *)(v5 + 280) & 4;
  if ( v6 )
    return 0;
  if ( (*(_DWORD *)(v5 + 20) & 0xFFFFFFF0) == 64 || (*(_DWORD *)(v5 + 20) & 0xFFFFFFF0) == 208 )
    return 0;
  v7 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 == -1 )
    return 0;
  v8 = **(_QWORD ***)(a1 + 48);
  if ( !v8 )
    return 0;
  v9 = 24;
  v10 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v10 )
  {
LABEL_16:
    v15 = *(unsigned int *)(v9 + 32);
    if ( (int)v15 < 0 )
    {
      if ( !under_debugger )
        sub_3835A0(51677);
      BUG();
    }
    v16 = *(int *)(v9 + 32);
    v17 = *(_QWORD *)(v5 + 32);
    if ( v16 < v17 )
    {
      sub_81E80((_QWORD *)(v5 + 24), v16);
      v17 = *(_QWORD *)(v5 + 32);
    }
    v18 = 0;
    if ( *(_QWORD *)(v9 + 16) )
    {
      do
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v9 + 8);
          v16 = *(int *)(v15 + 4 * v18);
          if ( v16 < v17 )
            break;
          v18 = ++v6;
          if ( (unsigned __int64)v6 >= *(_QWORD *)(v9 + 16) )
            goto LABEL_24;
        }
        ++v6;
        sub_F8580(v5, v16);
        v17 = *(_QWORD *)(v5 + 32);
        v18 = v6;
      }
      while ( (unsigned __int64)v6 < *(_QWORD *)(v9 + 16) );
    }
LABEL_24:
    if ( v17 < *(int *)(v5 + 8) )
      *(_DWORD *)(v5 + 8) = v17;
    if ( *(_DWORD *)(v5 + 20) == 128 )
    {
      if ( v17 )
      {
        v30 = *(_QWORD *)(v9 + 16);
        if ( v30 )
        {
          v15 = *(_QWORD *)(v9 + 8);
          if ( !*(_DWORD *)(v15 + 4 * v30 - 4) )
            *(_DWORD *)(v5 + 20) = 80;
        }
      }
      else
      {
        *(_DWORD *)(v5 + 20) = 32;
      }
    }
    v19 = *(_QWORD **)(a1 + 72);
    v20 = (_QWORD *)(a1 + 64);
    if ( !v19 )
    {
      if ( v20 != *(_QWORD **)(a1 + 80) && *(_QWORD *)(std::_Rb_tree_decrement(a1 + 64, v16, v15, v17, a5) + 32) >= v7 )
      {
LABEL_42:
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 757LL) & 1) == 0 )
        {
          sub_3363F0(v31, v5);
          if ( (unsigned __int8)sub_F2F00(*(_QWORD *)(a1 + 8), v7, v31, 0, v28, v29) )
            *(_BYTE *)(a1 + 104) = 1;
          clear_tinfo_t(v31);
        }
        goto LABEL_13;
      }
      v19 = (_QWORD *)(a1 + 64);
      v26 = 1;
LABEL_41:
      v27 = operator new(0x28u);
      *(_QWORD *)(v27 + 32) = v7;
      std::_Rb_tree_insert_and_rebalance(v26, v27, v19, a1 + 64);
      ++*(_QWORD *)(a1 + 96);
      goto LABEL_42;
    }
    v21 = (_QWORD *)(a1 + 64);
    v22 = *(_QWORD **)(a1 + 72);
    do
    {
      if ( v22[4] >= v7 )
      {
        v21 = v22;
        v22 = (_QWORD *)v22[2];
      }
      else
      {
        v22 = (_QWORD *)v22[3];
      }
    }
    while ( v22 );
    if ( v20 != v21 && v7 >= v21[4] )
    {
LABEL_13:
      v12 = *(_QWORD *)(a1 + 16);
      v13 = *(_DWORD *)(v12 + 24);
      BYTE1(v13) &= ~2u;
      LOBYTE(v13) = v13 | 0x80;
      *(_DWORD *)(v12 + 24) = v13;
      return 0;
    }
    while ( 1 )
    {
      v23 = v19[4];
      v24 = 0;
      v25 = (_QWORD *)v19[3];
      if ( v7 < v23 )
      {
        v25 = (_QWORD *)v19[2];
        v24 = 1;
      }
      if ( !v25 )
        break;
      v19 = v25;
    }
    if ( (_BYTE)v24 )
    {
      if ( *(_QWORD **)(a1 + 80) == v19 )
      {
LABEL_39:
        v26 = 1;
        if ( v20 != v19 )
          v26 = v7 < v19[4];
        goto LABEL_41;
      }
      v23 = *(_QWORD *)(std::_Rb_tree_decrement(v19, v19[2], v23, v24, a5) + 32);
    }
    if ( v23 >= v7 )
      goto LABEL_42;
    goto LABEL_39;
  }
  while ( (*(_BYTE *)v10 & 2) == 0 )
  {
    v11 = *(_QWORD *)(v10 + 24);
    v9 = v10 + 24;
    if ( v7 < v11 )
    {
      v10 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      if ( v11 >= v7 )
      {
        if ( v8 == (_QWORD *)v10 )
          return 0;
        goto LABEL_16;
      }
      v10 = *(_QWORD *)(v10 + 16);
    }
  }
  return 0;
}
