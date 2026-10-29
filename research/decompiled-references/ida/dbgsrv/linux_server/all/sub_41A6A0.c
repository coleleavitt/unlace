/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A6A0
// Address: 0x000000000041A6A0

//----- (000000000041A6A0) ----------------------------------------------------
_QWORD *__fastcall sub_41A6A0(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 **a4)
{
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  _BOOL8 v14; // rdi
  __int64 v15; // rax

  v6 = a2;
  v10 = operator new(0x40u);
  v11 = **a4;
  *(_OWORD *)(v10 + 48) = 0;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 32) = v11;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v7 = a1[4];
      v6 = nullptr;
      if ( *(_QWORD *)(v7 + 32) < v11 )
        goto LABEL_6;
    }
LABEL_5:
    v6 = sub_40DB00((__int64)a1, v11, v7, v8, v9);
    goto LABEL_6;
  }
  v12 = a2[4];
  if ( v11 < v12 )
  {
    v7 = (unsigned __int64)a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v13 = std::_Rb_tree_decrement(a2, a2, a2, v8, v9);
    v7 = v13;
    if ( *(_QWORD *)(v13 + 32) >= v11 )
      goto LABEL_5;
    if ( *(_QWORD *)(v13 + 24) )
      v7 = (unsigned __int64)a2;
    else
      v6 = nullptr;
LABEL_6:
    if ( v7 )
    {
      if ( v6 || a1 + 1 == (_QWORD *)v7 )
      {
        v14 = 1;
LABEL_10:
        v6 = (_QWORD *)v10;
        std::_Rb_tree_insert_and_rebalance(v14, v10, v7, a1 + 1);
        ++a1[5];
        return v6;
      }
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  if ( v12 >= v11 )
    goto LABEL_17;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v15 = std::_Rb_tree_increment(a2);
    v7 = v15;
    if ( v11 < *(_QWORD *)(v15 + 32) )
    {
      if ( !a2[3] )
      {
        v7 = (unsigned __int64)a2;
        if ( a2 )
          goto LABEL_26;
        goto LABEL_17;
      }
      v6 = (_QWORD *)v15;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v7 = (unsigned __int64)a2;
  if ( a2 )
  {
LABEL_25:
    v12 = *(_QWORD *)(v7 + 32);
LABEL_26:
    v14 = v11 < v12;
    goto LABEL_10;
  }
LABEL_17:
  if ( v10 )
    operator delete((void *)v10, 0x40u);
  return v6;
}
// 41A705: variable 'v8' is possibly undefined
// 41A705: variable 'v9' is possibly undefined
// 41A71D: variable 'v7' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
