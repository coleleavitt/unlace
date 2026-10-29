__int64 __fastcall sub_4F2FE0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 v3; // r12
  __int64 v5; // rax
  _QWORD *v7; // r13
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  unsigned int v10; // r12d
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  void *v17; // rax
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v3 = a2;
  v5 = *a1;
  v20 = __readfsqword(0x28u);
  v7 = *(_QWORD **)(v5 + 1752);
  if ( (debug & 0x800) != 0 )
  {
    if ( (unsigned __int8)(a2 - 1) <= 0xFu )
      sub_3879F0();
    sub_3879F0();
  }
  if ( (_BYTE)a2 == 14 )
  {
    v12 = (_QWORD *)v7[3];
    if ( !v12 )
      return 0;
    v13 = v7 + 2;
    do
    {
      while ( 1 )
      {
        v14 = v12[2];
        v15 = v12[3];
        if ( v12[4] < a3 )
          break;
        v13 = v12;
        v12 = (_QWORD *)v12[2];
        if ( !v14 )
          goto LABEL_12;
      }
      v12 = (_QWORD *)v12[3];
    }
    while ( v15 );
LABEL_12:
    if ( v13 == v7 + 2 || a3 < v13[4] )
      return 0;
    if ( (unsigned __int8)must_journal(a1, a2, v15) )
    {
      v16 = v13[4];
      ptr = nullptr;
      v19 = 0;
      sub_3A0A80((__int64 *)&ptr, v16);
      sub_3A0970((__int64 *)&ptr, *((_DWORD *)v13 + 10));
      add_undo_record(182, ptr, v19);
      if ( ptr )
      {
        *(_QWORD *)&v19 = 0;
        qfree(ptr);
      }
    }
    v17 = (void *)std::_Rb_tree_rebalance_for_erase(v13, v7 + 2);
    operator delete(v17, 0x30u);
    --v7[6];
  }
  v8 = sub_3BDD60(a1, a3);
  v9 = (__int64)&a1[v3 + 327];
  v10 = sub_7BE850(&a1[v3 + 327], *a1, v8, 65);
  sub_7BE850(v9, *a1, v8, 83);
  return v10;
}
