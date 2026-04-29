__int64 __fastcall sub_168900(_QWORD *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r14
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v13; // rax
  _BOOL4 v14; // [rsp+Ch] [rbp-3Ch]

  v5 = a1 + 1;
  v6 = (_QWORD *)a1[2];
  v7 = *a2;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = v6[4];
      v9 = (_QWORD *)v6[2];
      v10 = 1;
      if ( v7 >= v8 )
      {
        v9 = (_QWORD *)v6[3];
        v10 = 0;
      }
      if ( !v9 )
        break;
      v6 = v9;
    }
    v11 = (__int64)v6;
    if ( (_BYTE)v10 )
    {
      if ( (_QWORD *)a1[3] == v6 )
        goto LABEL_9;
      v13 = std::_Rb_tree_decrement(v6, v6[3], v8, v10, a5);
      v8 = *(_QWORD *)(v13 + 32);
      v11 = v13;
    }
    if ( v8 >= v7 )
      return v11;
LABEL_9:
    v14 = 1;
    if ( v5 != v6 )
      v14 = v7 < v6[4];
    goto LABEL_11;
  }
  if ( v5 == (_QWORD *)a1[3] || (v11 = std::_Rb_tree_decrement(a1 + 1, a2, a3, a4, a5), *(_QWORD *)(v11 + 32) < v7) )
  {
    v14 = 1;
    v6 = a1 + 1;
LABEL_11:
    v11 = operator new(0x28u);
    *(_QWORD *)(v11 + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance(v14, v11, v6, v5);
    ++a1[5];
  }
  return v11;
}
