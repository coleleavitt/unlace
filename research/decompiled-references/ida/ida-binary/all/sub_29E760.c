void __fastcall sub_29E760(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  _BOOL4 v5; // r14d
  __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v7 = *(_DWORD *)(v4 + 32);
      if ( !*(_QWORD *)(a1 + 40) || (v8 = *(_QWORD *)(a1 + 32), v9 = 0, v7 <= *(_DWORD *)(v8 + 32)) )
      {
        v9 = sub_28FD20(a1, v7);
        v8 = v10;
      }
      if ( v8 )
      {
        v5 = v8 == a1 + 8 || v9 || v7 < *(_DWORD *)(v8 + 32);
        v6 = operator new(0x28u);
        *(_DWORD *)(v6 + 32) = *(_DWORD *)(v4 + 32);
        std::_Rb_tree_insert_and_rebalance(v5, v6, v8, a1 + 8);
        ++*(_QWORD *)(a1 + 40);
      }
      v4 = std::_Rb_tree_increment(v4);
    }
    while ( v4 != a3 );
  }
}
