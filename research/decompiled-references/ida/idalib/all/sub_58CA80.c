_QWORD *__fastcall sub_58CA80(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  _QWORD *v11; // r12
  __int64 v12; // r13
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  _BOOL8 v16; // rdi

  v2 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  if ( !v4 )
  {
    v6 = a1 + 1;
LABEL_8:
    v9 = operator new(0x48u);
    v10 = *a2;
    *(_BYTE *)(v9 + 40) = 2;
    v11 = (_QWORD *)v9;
    v12 = v9 + 40;
    *(_QWORD *)(v9 + 32) = v10;
    *(_QWORD *)(v9 + 64) = 0;
    *(_OWORD *)(v9 + 48) = 0;
    v14 = sub_589700(a1, v6, v10, v13);
    v6 = v14;
    if ( v15 )
    {
      v16 = v14 || v2 == v15 || v10 < v15[4];
      v6 = v11;
      std::_Rb_tree_insert_and_rebalance(v16, v11, v15, v2);
      ++a1[5];
    }
    else if ( v11 )
    {
      free_idcv(v12);
      operator delete(v11, 0x48u);
    }
    return v6 + 5;
  }
  v5 = *a2;
  v6 = v2;
  do
  {
    while ( 1 )
    {
      v7 = v4[2];
      v8 = v4[3];
      if ( v4[4] < v5 )
        break;
      v6 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v7 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v8 );
LABEL_6:
  if ( v2 == v6 || v5 < v6[4] )
    goto LABEL_8;
  return v6 + 5;
}
