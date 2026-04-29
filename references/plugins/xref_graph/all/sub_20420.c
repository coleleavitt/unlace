__int64 __fastcall sub_20420(volatile signed __int32 **a1, unsigned __int64 *a2)
{
  volatile signed __int32 *v2; // rbp
  volatile signed __int32 *v3; // r13
  unsigned __int64 v4; // r12
  _QWORD *v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  bool v14; // r14
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-50h]

  v2 = *a1;
  if ( !*a1 || *v2 == 1 )
    v2 = nullptr;
  else
    _InterlockedAdd(v2, 1u);
  sub_1B620(a1);
  v3 = *a1;
  v4 = *a2;
  v5 = *((_QWORD **)*a1 + 3);
  v6 = (__int64)(*a1 + 4);
  if ( !v5 )
    goto LABEL_16;
  v7 = (__int64)(*a1 + 4);
  do
  {
    while ( 1 )
    {
      v8 = v5[2];
      v9 = v5[3];
      if ( v5[4] < v4 )
        break;
      v7 = (__int64)v5;
      v5 = (_QWORD *)v5[2];
      if ( !v8 )
        goto LABEL_9;
    }
    v5 = (_QWORD *)v5[3];
  }
  while ( v9 );
LABEL_9:
  if ( v6 == v7 || v4 < *(_QWORD *)(v7 + 32) )
  {
LABEL_16:
    v12 = sub_1EE80((__int64)(v3 + 2), v4);
    v7 = (__int64)v12;
    if ( v13 )
    {
      v14 = v12 != nullptr || v6 == v13;
      if ( !v14 )
        v14 = v4 < *(_QWORD *)(v13 + 32);
      v16 = v13;
      v15 = operator new(0x30u);
      *(_QWORD *)(v15 + 32) = v4;
      *(_QWORD *)(v15 + 40) = 0;
      v7 = v15;
      std::_Rb_tree_insert_and_rebalance(v14, v15, v16, v6);
      ++*((_QWORD *)v3 + 6);
    }
  }
  v10 = v7 + 40;
  if ( v2 && !_InterlockedSub(v2, 1u) )
  {
    sub_1F430(*((_QWORD **)v2 + 3));
    operator delete((void *)v2, 0x38u);
  }
  return v10;
}
