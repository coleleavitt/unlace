/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E2C0
// Address: 0x000000000046E2C0

//----- (000000000046E2C0) ----------------------------------------------------
__int64 __fastcall sub_46E2C0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // r15
  _QWORD *v8; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _BOOL8 v16; // rdi
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-50h]
  _QWORD *v22; // [rsp+10h] [rbp-48h]
  _QWORD *v23; // [rsp+10h] [rbp-48h]
  _QWORD *v24; // [rsp+10h] [rbp-48h]
  _QWORD *v25; // [rsp+10h] [rbp-48h]
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v5 = *(_QWORD **)(a1 + 88);
  v6 = (_QWORD *)v5[3];
  v7 = v5 + 2;
  if ( !v6 )
    goto LABEL_26;
  v8 = v5 + 2;
  do
  {
    while ( 1 )
    {
      v9 = v6[2];
      v10 = v6[3];
      if ( v6[4] < a2 )
        break;
      v8 = v6;
      v6 = (_QWORD *)v6[2];
      if ( !v9 )
        goto LABEL_6;
    }
    v6 = (_QWORD *)v6[3];
  }
  while ( v10 );
LABEL_6:
  if ( v7 == v8 )
  {
LABEL_26:
    v21 = (__int64)(v5 + 1);
    v19 = (_QWORD *)operator new(0x30u);
    v19[4] = a2;
    v12 = v19;
    v19[5] = 0;
    if ( v5[6] )
    {
      v10 = v5[5];
      v8 = nullptr;
      if ( *(_QWORD *)(v10 + 32) < a2 )
      {
LABEL_13:
        if ( v10 )
        {
          if ( v7 == (_QWORD *)v10 || v8 )
          {
            v16 = 1;
LABEL_17:
            a2 = (unsigned __int64)v12;
            v23 = v12;
            std::_Rb_tree_insert_and_rebalance(v16, v12, v10, v5 + 2);
            v8 = v23;
            ++*(_QWORD *)(v21 + 40);
            goto LABEL_18;
          }
          v13 = *(_QWORD *)(v10 + 32);
LABEL_30:
          v16 = a2 < v13;
          goto LABEL_17;
        }
        goto LABEL_20;
      }
    }
LABEL_28:
    v25 = v12;
    v20 = sub_46DA80(v21, a2, v10, v15, (__int64)v12);
    v12 = v25;
    v8 = v20;
    goto LABEL_13;
  }
  if ( a2 >= v8[4] )
    goto LABEL_18;
  v21 = (__int64)(v5 + 1);
  v11 = (_QWORD *)operator new(0x30u);
  v11[4] = a2;
  v12 = v11;
  v11[5] = 0;
  v13 = v8[4];
  if ( a2 < v13 )
  {
    v10 = (unsigned __int64)v8;
    if ( (_QWORD *)v5[4] == v8 )
      goto LABEL_13;
    v22 = v11;
    v14 = std::_Rb_tree_decrement(v8, a2, v8, v13, v11);
    v12 = v22;
    v10 = v14;
    if ( *(_QWORD *)(v14 + 32) < a2 )
    {
      if ( *(_QWORD *)(v14 + 24) )
        v10 = (unsigned __int64)v8;
      else
        v8 = nullptr;
      goto LABEL_13;
    }
    goto LABEL_28;
  }
  if ( v13 < a2 )
  {
    if ( (_QWORD *)v5[5] != v8 )
    {
      v24 = v11;
      v26 = v8[4];
      v18 = std::_Rb_tree_increment(v8);
      v12 = v24;
      v10 = v18;
      if ( a2 >= *(_QWORD *)(v18 + 32) )
        goto LABEL_28;
      v13 = v26;
      if ( v8[3] )
      {
        v8 = (_QWORD *)v18;
        goto LABEL_13;
      }
    }
    v10 = (unsigned __int64)v8;
    if ( v8 )
      goto LABEL_30;
  }
LABEL_20:
  if ( v12 )
  {
    a2 = 48;
    operator delete(v12, 0x30u);
  }
LABEL_18:
  v8[5] = a3;
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(**(_QWORD **)(a1 + 88) + 24LL))(
           *(_QWORD *)(a1 + 88),
           a2,
           v10);
}
// 46E3A3: variable 'v10' is possibly undefined
// 46E4AD: variable 'v15' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
