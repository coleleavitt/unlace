/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417000
// Address: 0x0000000000417000

//----- (0000000000417000) ----------------------------------------------------
_QWORD *__fastcall sub_417000(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r13
  _QWORD *v13; // r12
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  _BOOL8 v19; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rax
  bool v23; // zf

  v2 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  if ( !v4 )
    goto LABEL_29;
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
  if ( v2 == v6 )
  {
LABEL_29:
    v22 = (_QWORD *)operator new(0x40u);
    v12 = *a2;
    v23 = a1[5] == 0;
    v22[5] = -1;
    v13 = v22;
    v22[4] = v12;
    v22[7] = 0;
    if ( !v23 )
    {
      v15 = a1[4];
      v6 = nullptr;
      if ( *(_QWORD *)(v15 + 32) < v12 )
      {
LABEL_13:
        if ( v15 )
        {
          if ( v6 || v2 == (_QWORD *)v15 )
          {
            v19 = 1;
LABEL_17:
            v6 = v13;
            std::_Rb_tree_insert_and_rebalance(v19, v13, v15, v2);
            ++a1[5];
            return v6 + 5;
          }
          goto LABEL_27;
        }
        goto LABEL_20;
      }
    }
LABEL_31:
    v6 = sub_40DA40((__int64)a1, v12, v15, v17, v18);
    goto LABEL_13;
  }
  if ( v5 >= v6[4] )
    return v6 + 5;
  v9 = (_QWORD *)operator new(0x40u);
  v12 = *a2;
  v9[5] = -1;
  v13 = v9;
  v9[4] = v12;
  v9[7] = 0;
  v14 = v6[4];
  if ( v12 < v14 )
  {
    v15 = (unsigned __int64)v6;
    if ( (_QWORD *)a1[3] == v6 )
      goto LABEL_13;
    v16 = std::_Rb_tree_decrement(v6, a2, v6, v10, v11);
    v15 = v16;
    if ( *(_QWORD *)(v16 + 32) < v12 )
    {
      if ( *(_QWORD *)(v16 + 24) )
        v15 = (unsigned __int64)v6;
      else
        v6 = nullptr;
      goto LABEL_13;
    }
    goto LABEL_31;
  }
  if ( v14 < v12 )
  {
    if ( (_QWORD *)a1[4] == v6 )
    {
      v15 = (unsigned __int64)v6;
      if ( v6 )
      {
LABEL_27:
        v14 = *(_QWORD *)(v15 + 32);
LABEL_28:
        v19 = v12 < v14;
        goto LABEL_17;
      }
      goto LABEL_20;
    }
    v21 = std::_Rb_tree_increment(v6);
    v15 = v21;
    if ( v12 >= *(_QWORD *)(v21 + 32) )
      goto LABEL_31;
    if ( v6[3] )
    {
      v6 = (_QWORD *)v21;
      goto LABEL_13;
    }
    v15 = (unsigned __int64)v6;
    if ( v6 )
      goto LABEL_28;
  }
LABEL_20:
  if ( v13 )
    operator delete(v13, 0x40u);
  return v6 + 5;
}
// 4170AE: variable 'v10' is possibly undefined
// 4170AE: variable 'v11' is possibly undefined
// 4170D3: variable 'v15' is possibly undefined
// 4171B6: variable 'v17' is possibly undefined
// 4171B6: variable 'v18' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
