unsigned __int64 __fastcall sub_4F3480(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v4; // rbp
  __int64 v5; // rsi
  signed int v6; // ebx
  _QWORD *v7; // r13
  _QWORD *v8; // rax
  _QWORD *v9; // r12
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _BOOL8 v19; // rdi
  __int64 v20; // rax
  _BYTE *v21; // rsi
  void *v23; // [rsp+8h] [rbp-60h]
  char v24; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v26; // [rsp+18h] [rbp-50h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v4 = a1;
  v5 = *a1;
  v27 = __readfsqword(0x28u);
  v6 = a3;
  v7 = *(_QWORD **)(v5 + 1752);
  v8 = (_QWORD *)v7[3];
  v9 = v7 + 2;
  if ( !v8 )
    goto LABEL_37;
  v10 = v7 + 2;
  v11 = (_QWORD *)v7[3];
  do
  {
    while ( 1 )
    {
      a1 = (__int64 *)v11[2];
      v12 = v11[3];
      if ( v11[4] < a2 )
        break;
      v10 = v11;
      v11 = (_QWORD *)v11[2];
      if ( !a1 )
        goto LABEL_6;
    }
    v11 = (_QWORD *)v11[3];
  }
  while ( v12 );
LABEL_6:
  if ( v10 != v9 && a2 >= v10[4] )
    v6 |= *((_DWORD *)v10 + 10);
  v13 = v7 + 2;
  do
  {
    while ( 1 )
    {
      v14 = v8[2];
      a3 = v8[3];
      if ( v8[4] < a2 )
        break;
      v13 = v8;
      v8 = (_QWORD *)v8[2];
      if ( !v14 )
        goto LABEL_13;
    }
    v8 = (_QWORD *)v8[3];
  }
  while ( a3 );
LABEL_13:
  if ( v9 == v13 )
  {
LABEL_37:
    v13 = v7 + 2;
    if ( !(unsigned __int8)must_journal(a1, v5, a3) )
      goto LABEL_16;
    goto LABEL_22;
  }
  if ( a2 == v13[4] )
  {
    if ( *((_DWORD *)v13 + 10) == v6 )
      goto LABEL_31;
    v24 = must_journal(a1, v5, a3);
    if ( !v24 )
      goto LABEL_30;
    goto LABEL_23;
  }
  if ( (unsigned __int8)must_journal(a1, v5, a3) )
  {
LABEL_22:
    v24 = 0;
LABEL_23:
    ptr = nullptr;
    v26 = 0;
    sub_3A0A80((__int64 *)&ptr, a2);
    v20 = v26;
    v21 = ptr;
    if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v26 + 1, 1);
      v21 = ptr;
      v20 = v26;
    }
    v21[v20] = v24;
    *(_QWORD *)&v26 = v26 + 1;
    if ( v24 )
      sub_3A0970((__int64 *)&ptr, *((_DWORD *)v13 + 10));
    sub_3A0970((__int64 *)&ptr, v6);
    add_undo_record(181, ptr, v26);
    if ( ptr )
    {
      *(_QWORD *)&v26 = 0;
      qfree(ptr);
    }
    if ( !v24 )
      goto LABEL_16;
LABEL_30:
    *((_DWORD *)v13 + 10) = v6;
    v5 = *v4;
    goto LABEL_31;
  }
LABEL_16:
  v15 = operator new(0x30u);
  *(_QWORD *)(v15 + 32) = a2;
  *(_DWORD *)(v15 + 40) = v6;
  v23 = (void *)v15;
  v17 = sub_4F1700(v7 + 1, v13, a2, v16);
  if ( v18 )
  {
    v19 = v17 || v9 == v18 || a2 < v18[4];
    std::_Rb_tree_insert_and_rebalance(v19, v23, v18, v7 + 2);
    ++v7[6];
  }
  else if ( v23 )
  {
    operator delete(v23, 0x30u);
  }
  v5 = *v4;
LABEL_31:
  ptr = (void *)v6;
  sub_7BE7C0(v4 + 341, v5, a2, &ptr, 8, 321);
  return v27 - __readfsqword(0x28u);
}
