_QWORD *__fastcall sub_E7B5E0(_QWORD *a1, int *a2)
{
  _QWORD *v2; // r15
  _QWORD *v4; // rbx
  int v5; // ebp
  _QWORD *v6; // rax
  char v7; // si
  int v8; // edx
  _QWORD *v9; // rcx
  _BOOL4 v11; // r14d
  __int64 v12; // rbp
  char v13; // al
  __int64 v14; // rax

  v2 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  if ( !v4 )
  {
    v4 = a1 + 1;
    if ( (_QWORD *)a1[3] == v2 )
    {
      v11 = 1;
      goto LABEL_18;
    }
    v5 = *a2;
LABEL_20:
    v14 = std::_Rb_tree_decrement(v4);
    v8 = *(_DWORD *)(v14 + 32);
    if ( v5 <= v8 )
    {
      v9 = v4;
      v4 = (_QWORD *)v14;
      goto LABEL_11;
    }
    goto LABEL_17;
  }
  v5 = *a2;
  while ( 1 )
  {
    v8 = *((_DWORD *)v4 + 8);
    if ( v5 < v8 || v5 == v8 && *((_BYTE *)a2 + 4) < *((_BYTE *)v4 + 36) )
      break;
    v6 = (_QWORD *)v4[3];
    v7 = 0;
    if ( !v6 )
      goto LABEL_9;
LABEL_6:
    v4 = v6;
  }
  v6 = (_QWORD *)v4[2];
  v7 = 1;
  if ( v6 )
    goto LABEL_6;
LABEL_9:
  if ( v7 )
  {
    if ( (_QWORD *)a1[3] == v4 )
      goto LABEL_17;
    goto LABEL_20;
  }
  v9 = v4;
  if ( v5 > v8 )
    goto LABEL_17;
LABEL_11:
  if ( v5 != v8 || *((_BYTE *)v4 + 36) >= *((_BYTE *)a2 + 4) )
    return v4;
  if ( !v9 )
    return nullptr;
  v4 = v9;
LABEL_17:
  v11 = 1;
  if ( v2 != v4 && v5 >= *((_DWORD *)v4 + 8) )
  {
    v11 = 0;
    if ( v5 == *((_DWORD *)v4 + 8) )
      v11 = *((_BYTE *)a2 + 4) < *((_BYTE *)v4 + 36);
  }
LABEL_18:
  v12 = operator new(0x28u);
  v13 = *((_BYTE *)a2 + 4);
  *(_DWORD *)(v12 + 32) = *a2;
  *(_BYTE *)(v12 + 36) = v13;
  std::_Rb_tree_insert_and_rebalance(v11, v12, v4, v2);
  ++a1[5];
  return (_QWORD *)v12;
}
