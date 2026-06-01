__int64 __fastcall sub_3A3560(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r12
  void *v9; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = a2;
  v13 = __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal() )
  {
    v7 = a2[4];
    ptr = nullptr;
    v12 = 0;
    sub_3A0A80((__int64 *)&ptr, v7);
    sub_3A0A80((__int64 *)&ptr, v3[5]);
    a2 = ptr;
    add_undo_record(a3, ptr, v12);
    if ( ptr )
    {
      *(_QWORD *)&v12 = 0;
      qfree(ptr);
    }
  }
  v8 = std::_Rb_tree_increment(v3, a2, v5, v6);
  v9 = (void *)std::_Rb_tree_rebalance_for_erase(v3, a1 + 8);
  operator delete(v9, 0x30u);
  --*(_QWORD *)(a1 + 40);
  return v8;
}
