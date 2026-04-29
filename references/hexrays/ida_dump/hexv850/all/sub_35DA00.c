__int64 __fastcall sub_35DA00(_QWORD *a1, int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r14
  _QWORD *v6; // rbx
  int v7; // ebp
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // r12
  __int64 v12; // rax
  _BOOL4 v13; // [rsp+Ch] [rbp-3Ch]

  v5 = a1 + 1;
  v6 = (_QWORD *)a1[2];
  v7 = *a2;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = *((unsigned int *)v6 + 8);
      v9 = (_QWORD *)v6[3];
      if ( v7 < (int)v8 )
        v9 = (_QWORD *)v6[2];
      if ( !v9 )
        break;
      v6 = v9;
    }
    v10 = (__int64)v6;
    if ( v7 < (int)v8 )
    {
      if ( (_QWORD *)a1[3] == v6 )
        goto LABEL_9;
      LOBYTE(a4) = v7 < (int)v8;
      v12 = std::_Rb_tree_decrement(v6, a2, v8, a4, a5);
      LODWORD(v8) = *(_DWORD *)(v12 + 32);
      v10 = v12;
    }
    if ( v7 <= (int)v8 )
      return v10;
LABEL_9:
    v13 = 1;
    if ( v5 != v6 )
      v13 = v7 < *((_DWORD *)v6 + 8);
    goto LABEL_11;
  }
  if ( v5 == (_QWORD *)a1[3] || (v10 = std::_Rb_tree_decrement(a1 + 1, a2, a3, a4, a5), v7 > *(_DWORD *)(v10 + 32)) )
  {
    v13 = 1;
    v6 = a1 + 1;
LABEL_11:
    v10 = operator new(0x28u);
    *(_DWORD *)(v10 + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance(v13, v10, v6, v5);
    ++a1[5];
  }
  return v10;
}
