__int64 __fastcall sub_A9800(_QWORD *a1, unsigned int *a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r12d
  void *v11; // r13
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  bool v18; // zf

  v2 = a1 + 1;
  v4 = a1[2];
  if ( !v4 )
    goto LABEL_25;
  v5 = *a2;
  v6 = (__int64)v2;
  do
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 16);
      v8 = *(_QWORD *)(v4 + 24);
      if ( *(_DWORD *)(v4 + 32) < v5 )
        break;
      v6 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v7 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v8 );
LABEL_6:
  if ( v2 == (_QWORD *)v6 )
  {
LABEL_25:
    v17 = operator new(0x28u);
    v10 = *a2;
    v18 = a1[5] == 0;
    *(_DWORD *)(v17 + 36) = 0;
    v11 = (void *)v17;
    *(_DWORD *)(v17 + 32) = v10;
    if ( !v18 )
    {
      v13 = a1[4];
      v6 = 0;
      if ( *(_DWORD *)(v13 + 32) < v10 )
      {
LABEL_13:
        if ( v13 )
        {
LABEL_14:
          v6 = (__int64)v11;
          std::_Rb_tree_insert_and_rebalance();
          ++a1[5];
          return v6 + 36;
        }
        goto LABEL_17;
      }
    }
LABEL_27:
    v6 = sub_9BA80((__int64)a1, v10);
    goto LABEL_13;
  }
  if ( v5 >= *(_DWORD *)(v6 + 32) )
    return v6 + 36;
  v9 = operator new(0x28u);
  v10 = *a2;
  *(_DWORD *)(v9 + 36) = 0;
  v11 = (void *)v9;
  *(_DWORD *)(v9 + 32) = v10;
  v12 = *(_DWORD *)(v6 + 32);
  if ( v10 < v12 )
  {
    v13 = v6;
    if ( a1[3] == v6 )
      goto LABEL_13;
    v14 = std::_Rb_tree_decrement();
    v13 = v14;
    if ( *(_DWORD *)(v14 + 32) < v10 )
    {
      if ( *(_QWORD *)(v14 + 24) )
        v13 = v6;
      else
        v6 = 0;
      goto LABEL_13;
    }
    goto LABEL_27;
  }
  if ( v12 < v10 )
  {
    if ( a1[4] == v6 )
    {
      if ( v6 )
        goto LABEL_14;
    }
    else
    {
      v16 = std::_Rb_tree_increment();
      v13 = v16;
      if ( v10 >= *(_DWORD *)(v16 + 32) )
        goto LABEL_27;
      if ( *(_QWORD *)(v6 + 24) )
      {
        v6 = v16;
        goto LABEL_13;
      }
      if ( v6 )
        goto LABEL_14;
    }
  }
LABEL_17:
  if ( v11 )
    operator delete(v11, 0x28u);
  return v6 + 36;
}

