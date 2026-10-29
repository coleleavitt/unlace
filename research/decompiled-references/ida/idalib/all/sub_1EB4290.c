_QWORD *__fastcall sub_1EB4290(_QWORD *a1, unsigned int *a2, __int64 *a3)
{
  _QWORD *v4; // r14
  __int64 v6; // rax
  unsigned int v7; // r13d
  _QWORD *v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  char v12; // dl
  unsigned int v13; // ecx
  _BOOL8 v14; // rdi
  __int64 v16; // rax

  v4 = a1 + 1;
  v6 = operator new(0x30u);
  v7 = *a2;
  v8 = (_QWORD *)v6;
  *(_DWORD *)(v6 + 32) = *a2;
  v9 = *a3;
  v10 = (_QWORD *)a1[2];
  v8[5] = v9;
  if ( !v10 )
  {
    v10 = a1 + 1;
    if ( v4 != (_QWORD *)a1[3] )
      goto LABEL_12;
    v14 = 1;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v13 = *((_DWORD *)v10 + 8);
    if ( v7 >= v13 )
      break;
    v11 = (_QWORD *)v10[2];
    v12 = 1;
    if ( !v11 )
      goto LABEL_7;
LABEL_4:
    v10 = v11;
  }
  v11 = (_QWORD *)v10[3];
  v12 = 0;
  if ( v11 )
    goto LABEL_4;
LABEL_7:
  if ( !v12 )
  {
    if ( v7 > v13 )
      goto LABEL_9;
    goto LABEL_14;
  }
  if ( (_QWORD *)a1[3] == v10 )
  {
LABEL_9:
    v14 = 1;
    if ( v4 != v10 )
      goto LABEL_17;
    goto LABEL_10;
  }
LABEL_12:
  v16 = std::_Rb_tree_decrement(v10);
  if ( *(_DWORD *)(v16 + 32) >= v7 )
  {
    v10 = (_QWORD *)v16;
    goto LABEL_14;
  }
  if ( v10 )
  {
    v14 = 1;
    if ( v4 != v10 )
LABEL_17:
      v14 = v7 < *((_DWORD *)v10 + 8);
LABEL_10:
    std::_Rb_tree_insert_and_rebalance(v14, v8, v10, a1 + 1);
    ++a1[5];
    return v8;
  }
  else
  {
LABEL_14:
    operator delete(v8);
    return v10;
  }
}
