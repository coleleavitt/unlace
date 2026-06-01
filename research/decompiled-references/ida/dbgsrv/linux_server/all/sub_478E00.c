/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478E00
// Address: 0x0000000000478E00

//----- (0000000000478E00) ----------------------------------------------------
__int64 __fastcall sub_478E00(_QWORD *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r14
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
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
      v9 = 0;
      v10 = (_QWORD *)v6[3];
      if ( v7 < v8 )
      {
        v10 = (_QWORD *)v6[2];
        v9 = 1;
      }
      if ( !v10 )
        break;
      v6 = v10;
    }
    v11 = (__int64)v6;
    if ( (_BYTE)v9 )
    {
      if ( v6 == (_QWORD *)a1[3] )
        goto LABEL_9;
      v13 = std::_Rb_tree_decrement(v6, v6[2], v8, v9, a5);
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
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
