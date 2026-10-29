__int64 __fastcall sub_54FB50(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // ebx
  __int64 v6; // rax
  _DWORD *v7; // r14
  _DWORD *v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // r13d
  std::ostream *v11; // r15
  std::ostream *v12; // r15
  std::ostream *v13; // rdi
  __int64 v14; // rax
  _DWORD *v15; // r15
  unsigned int v16; // edx
  _DWORD *v17; // rax
  __int64 insert_hint_unique_pos; // rax
  __int64 v19; // rdx
  _DWORD *v21; // [rsp+8h] [rbp-50h]
  _DWORD *v22; // [rsp+8h] [rbp-50h]

  v4 = a2;
  v5 = a3;
  if ( a3 >= a2 )
  {
    v5 = a2;
    v4 = a3;
  }
  v6 = *(_QWORD *)(a1 + 120);
  v7 = (_DWORD *)(a1 + 112);
  if ( !v6 )
    goto LABEL_13;
  v8 = (_DWORD *)(a1 + 112);
  do
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v6 + 32);
      if ( v5 == v9 )
        break;
      if ( v9 >= v5 )
        goto LABEL_9;
LABEL_6:
      v6 = *(_QWORD *)(v6 + 24);
      if ( !v6 )
        goto LABEL_10;
    }
    if ( *(_DWORD *)(v6 + 36) < v4 )
      goto LABEL_6;
LABEL_9:
    v8 = (_DWORD *)v6;
    v6 = *(_QWORD *)(v6 + 16);
  }
  while ( v6 );
LABEL_10:
  if ( v7 == v8 )
    goto LABEL_13;
  if ( v5 != v8[8] )
  {
    if ( v5 < v8[8] )
      goto LABEL_13;
    return (unsigned int)v8[10];
  }
  if ( v4 >= v8[9] )
    return (unsigned int)v8[10];
LABEL_13:
  v10 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 96) = v10 + 2;
  v11 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  if ( *(_QWORD *)((char *)v11 + *(_QWORD *)(*(_QWORD *)v11 - 24LL) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v11, 32);
  v12 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  if ( *(_QWORD *)((char *)v12 + *(_QWORD *)(*(_QWORD *)v12 - 24LL) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v12, 32);
  v13 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  if ( *(_QWORD *)((char *)v13 + *(_QWORD *)(*(_QWORD *)v13 - 24LL) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v13, 10);
  v14 = *(_QWORD *)(a1 + 120);
  v15 = (_DWORD *)(a1 + 112);
  if ( !v14 )
  {
LABEL_29:
    v21 = v15;
    v17 = (_DWORD *)operator new(0x30u);
    v17[8] = v5;
    v15 = v17;
    v17[9] = v4;
    v17[10] = 0;
    insert_hint_unique_pos = std::_Rb_tree<std::pair<unsigned int,unsigned int>,std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>,std::_Select1st<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>,std::less<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::_M_get_insert_hint_unique_pos(
                               a1 + 104,
                               v21,
                               v17 + 8);
    if ( v19 )
    {
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(a1 + 144);
    }
    else
    {
      v22 = (_DWORD *)insert_hint_unique_pos;
      operator delete(v15, 0x30u);
      v15 = v22;
    }
    goto LABEL_31;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      v16 = *(_DWORD *)(v14 + 32);
      if ( v5 != v16 )
      {
        if ( v16 >= v5 )
          break;
        goto LABEL_22;
      }
      if ( *(_DWORD *)(v14 + 36) < v4 )
      {
LABEL_22:
        v14 = *(_QWORD *)(v14 + 24);
        if ( !v14 )
          goto LABEL_26;
        continue;
      }
      break;
    }
    v15 = (_DWORD *)v14;
    v14 = *(_QWORD *)(v14 + 16);
    if ( v14 )
      continue;
    break;
  }
LABEL_26:
  if ( v7 == v15 )
    goto LABEL_29;
  if ( v5 == v15[8] )
  {
    if ( v4 < v15[9] )
      goto LABEL_29;
  }
  else if ( v5 < v15[8] )
  {
    goto LABEL_29;
  }
LABEL_31:
  v15[10] = v10;
  ++*(_DWORD *)(a1 + 152);
  return v10;
}

