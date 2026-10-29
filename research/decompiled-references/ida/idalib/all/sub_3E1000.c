__int64 __fastcall sub_3E1000(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  _QWORD *v7; // rcx
  __int64 v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  __int64 v20; // r13
  _QWORD *v22; // [rsp+8h] [rbp-40h]

  v4 = switch_dbctx(*(int *)(a1 + 8));
  v5 = *(_QWORD *)(v4 + 1672);
  if ( !*(_BYTE *)(v5 + 2321) )
    return sub_454400(a1, a2, a3);
  v6 = v4;
  v7 = *(_QWORD **)(v4 + 1672);
  v8 = v5 + 2000;
  if ( *(_BYTE *)(a1 + 72) == 100 )
    v8 = v5 + 1792;
  v9 = *(_QWORD **)(v8 + 72);
  v10 = v8 + 64;
  if ( v9 )
  {
    v11 = v8 + 64;
    do
    {
      while ( 1 )
      {
        v12 = v9[2];
        v13 = v9[3];
        if ( v9[4] < a2 )
          break;
        v11 = (__int64)v9;
        v9 = (_QWORD *)v9[2];
        if ( !v12 )
          goto LABEL_9;
      }
      v9 = (_QWORD *)v9[3];
    }
    while ( v13 );
LABEL_9:
    if ( a3 == 1 )
    {
      if ( v10 != v11 )
      {
        while ( *(_QWORD *)(v11 + 32) == a2 )
        {
          v22 = v7;
          v16 = std::_Rb_tree_increment(v11);
          v7 = v22;
          v11 = v16;
          if ( v16 == v10 )
            return -1;
        }
        goto LABEL_12;
      }
      return -1;
    }
    if ( a3 != 2 )
    {
      if ( !a3 )
      {
LABEL_12:
        if ( v11 != v10 )
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)(v11 + 32);
            if ( *(_QWORD *)(v7[3] + 16LL) >= v14 && (sub_3BE900(v7, v14, 4) & 0x400) != 0 )
              break;
            v11 = std::_Rb_tree_increment(v11);
            if ( v11 == v10 )
              return -1;
            v7 = *(_QWORD **)(v6 + 1672);
          }
          if ( v10 != v11 )
            return *(_QWORD *)(v11 + 32);
        }
        return -1;
      }
      return -1;
    }
  }
  else
  {
    if ( a3 != 2 )
      return -1;
    v11 = v8 + 64;
  }
  v17 = *(_QWORD *)(v8 + 80);
  if ( v11 == v17 )
    return -1;
  v11 = std::_Rb_tree_decrement(v11);
  if ( v17 == v11 )
  {
    v20 = v17;
LABEL_38:
    v19 = *(_QWORD *)(v20 + 32);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) >= v19 && (sub_3BE900((_QWORD *)v5, v19, 4) & 0x400) != 0 )
    {
      v11 = v20;
      return *(_QWORD *)(v11 + 32);
    }
    return -1;
  }
  while ( 1 )
  {
    v18 = *(_QWORD *)(v11 + 32);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) >= v18 )
      break;
LABEL_32:
    v20 = v17;
    v11 = std::_Rb_tree_decrement(v11);
    if ( v11 == v17 )
      goto LABEL_38;
  }
  if ( (sub_3BE900((_QWORD *)v5, v18, 4) & 0x400) == 0 )
  {
    v5 = *(_QWORD *)(v6 + 1672);
    v17 = *(_QWORD *)(v8 + 80);
    goto LABEL_32;
  }
  if ( v11 == *(_QWORD *)(v8 + 80) )
  {
    v5 = *(_QWORD *)(v6 + 1672);
    v20 = v11;
    goto LABEL_38;
  }
  return *(_QWORD *)(v11 + 32);
}
