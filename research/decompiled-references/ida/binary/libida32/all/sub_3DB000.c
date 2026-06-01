__int64 __fastcall sub_3DB000(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // r13

  v3 = switch_dbctx(*(int *)(a1 + 8));
  v4 = *(_QWORD *)(v3 + 1480);
  if ( !*(_BYTE *)(v4 + 2233) )
    return sub_4406B0(a1, a2, a3);
  v5 = v3;
  v6 = v4 + 1912;
  if ( *(_BYTE *)(a1 + 72) == 100 )
    v6 = v4 + 1704;
  v7 = *(_QWORD *)(v6 + 72);
  v8 = v6 + 64;
  if ( !v7 )
  {
    if ( a3 != 2 )
      return -1;
    v9 = v6 + 64;
    goto LABEL_27;
  }
  v9 = v6 + 64;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_QWORD *)(v7 + 24);
      if ( *(_DWORD *)(v7 + 32) < (unsigned int)a2 )
        break;
      v9 = v7;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v10 )
        goto LABEL_9;
    }
    v7 = *(_QWORD *)(v7 + 24);
  }
  while ( v11 );
LABEL_9:
  if ( a3 != 1 )
  {
    if ( a3 != 2 )
    {
      if ( !a3 )
        goto LABEL_12;
      return -1;
    }
LABEL_27:
    v13 = *(_QWORD *)(v6 + 80);
    if ( v9 != v13 )
    {
      v9 = std::_Rb_tree_decrement();
      if ( v13 != v9 )
      {
        while ( 1 )
        {
          v14 = sub_3B9AA0(v4, *(_DWORD *)(v9 + 32), 4);
          v15 = *(_QWORD *)(v6 + 80);
          if ( (v14 & 0x400) != 0 )
            break;
          v9 = std::_Rb_tree_decrement();
          if ( v15 == v9 )
            goto LABEL_31;
          v4 = *(_QWORD *)(v5 + 1480);
        }
        if ( v9 != v15 )
          return *(unsigned int *)(v9 + 32);
LABEL_31:
        v4 = *(_QWORD *)(v5 + 1480);
        v9 = v15;
      }
      if ( (sub_3B9AA0(v4, *(_DWORD *)(v9 + 32), 4) & 0x400) != 0 )
        return *(unsigned int *)(v9 + 32);
    }
    return -1;
  }
  if ( v8 != v9 )
  {
    while ( *(_DWORD *)(v9 + 32) == (_DWORD)a2 )
    {
      v9 = std::_Rb_tree_increment();
      if ( v9 == v8 )
        return -1;
    }
LABEL_12:
    if ( v9 != v8 )
    {
      while ( (sub_3B9AA0(v4, *(_DWORD *)(v9 + 32), 4) & 0x400) == 0 )
      {
        v9 = std::_Rb_tree_increment();
        if ( v9 == v8 )
          return -1;
        v4 = *(_QWORD *)(v5 + 1480);
      }
      if ( v8 != v9 )
        return *(unsigned int *)(v9 + 32);
    }
  }
  return -1;
}

