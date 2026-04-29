void __fastcall sub_370840(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  _BOOL4 v9; // r13d
  __int64 v10; // rax

  v5 = *(_QWORD *)(a1 + 1144);
  if ( v5 )
  {
    v6 = sub_365D80(*(_QWORD *)(a1 + 1144), a2, a3, a4, a5);
    v8 = v7;
    if ( v7 )
    {
      v9 = 1;
      if ( !v6 && v7 != v5 + 8 )
        v9 = a2 < *(_QWORD *)(v7 + 32);
      v10 = operator new(0x28u);
      *(_QWORD *)(v10 + 32) = a2;
      std::_Rb_tree_insert_and_rebalance(v9, v10, v8, v5 + 8);
      ++*(_QWORD *)(v5 + 40);
    }
  }
}
