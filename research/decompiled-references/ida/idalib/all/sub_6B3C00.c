__int64 __fastcall sub_6B3C00(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r12
  unsigned __int64 v4; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  _BOOL4 v8; // r13d
  __int64 v9; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_3BDE50(**(_QWORD ***)a1, *a3);
  v5 = sub_6B3B40(v3, v4);
  if ( v6 )
  {
    v7 = v6;
    v8 = 1;
    if ( !v5 && v6 != v3 + 8 )
      v8 = v4 < *(_QWORD *)(v6 + 32);
    v9 = operator new(0x28u);
    *(_QWORD *)(v9 + 32) = v4;
    std::_Rb_tree_insert_and_rebalance(v8, v9, v7, v3 + 8);
    ++*(_QWORD *)(v3 + 40);
  }
  return 0;
}
