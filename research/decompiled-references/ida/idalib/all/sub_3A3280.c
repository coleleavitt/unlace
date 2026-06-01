_QWORD *__fastcall sub_3A3280(_QWORD *a1, unsigned __int64 *a2, unsigned int a3)
{
  _QWORD *v3; // r13
  _QWORD *v6; // rdx
  void *v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rdx
  _BOOL4 v18; // r15d
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v3 = a1 + 1;
  v25 = __readfsqword(0x28u);
  v6 = (_QWORD *)a1[2];
  if ( !v6 )
    goto LABEL_15;
  v7 = (void *)*a2;
  v8 = a1 + 1;
  do
  {
    while ( 1 )
    {
      v9 = v6[2];
      v10 = v6[3];
      if ( v6[4] < (unsigned __int64)v7 )
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
  if ( v3 == v8 )
  {
LABEL_15:
    if ( !(unsigned __int8)must_journal() )
    {
      v12 = *a2;
      goto LABEL_20;
    }
    v8 = a1 + 1;
LABEL_17:
    v16 = *a2;
    ptr = nullptr;
    v24 = 0;
    sub_3A0A80((__int64 *)&ptr, v16);
    v7 = ptr;
    add_undo_record(a3, ptr, v24);
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
    v12 = *a2;
    if ( v3 != v8 )
      goto LABEL_10;
LABEL_20:
    if ( !a1[5] )
      goto LABEL_21;
    v14 = (_QWORD *)a1[4];
    v8 = nullptr;
    if ( v14[4] >= v12 )
      goto LABEL_21;
    goto LABEL_22;
  }
  if ( (void *)v8[4] == v7 )
    return v8;
  if ( (unsigned __int8)must_journal() )
    goto LABEL_17;
  v12 = *a2;
LABEL_10:
  v13 = v8[4];
  if ( v12 < v13 )
  {
    v14 = v8;
    if ( (_QWORD *)a1[3] == v8 )
      goto LABEL_22;
    v15 = std::_Rb_tree_decrement(v8);
    v14 = (_QWORD *)v15;
    if ( *(_QWORD *)(v15 + 32) < v12 )
    {
      if ( *(_QWORD *)(v15 + 24) )
      {
        v14 = v8;
        goto LABEL_22;
      }
      goto LABEL_40;
    }
    goto LABEL_21;
  }
  v22 = v8[4];
  if ( v13 >= v12 )
    return v8;
  if ( (_QWORD *)a1[4] == v8 )
  {
    v14 = v8;
LABEL_40:
    v8 = nullptr;
    goto LABEL_22;
  }
  v20 = std::_Rb_tree_increment(v8, v7, v13, v11);
  v14 = (_QWORD *)v20;
  if ( v12 >= *(_QWORD *)(v20 + 32) )
  {
LABEL_21:
    v8 = sub_3A0080((__int64)a1, v12);
    v14 = v17;
    goto LABEL_22;
  }
  v21 = v22;
  if ( !v8[3] )
  {
    v14 = v8;
    if ( !v8 )
      return v8;
    goto LABEL_37;
  }
  v8 = (_QWORD *)v20;
LABEL_22:
  if ( v14 )
  {
    if ( v8 || v3 == v14 )
    {
      v18 = 1;
LABEL_26:
      v8 = (_QWORD *)operator new(0x28u);
      v8[4] = *a2;
      std::_Rb_tree_insert_and_rebalance(v18, v8, v14, v3);
      ++a1[5];
      return v8;
    }
    v21 = v14[4];
LABEL_37:
    v18 = v12 < v21;
    goto LABEL_26;
  }
  return v8;
}
