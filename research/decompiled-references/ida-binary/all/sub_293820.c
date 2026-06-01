void __fastcall sub_293820(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  _BOOL4 v8; // r15d
  __int64 v9; // rax

  v2 = a2 + 8;
  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 != a2 + 8 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v3 + 32);
        if ( v4 == *(_DWORD *)(v3 + 36) )
        {
          v5 = sub_28FD20(a1, v4);
          v7 = v6;
          if ( v6 )
            break;
        }
        v3 = std::_Rb_tree_increment(v3);
        if ( v3 == v2 )
          return;
      }
      v8 = 1;
      if ( !v5 && v6 != a1 + 8 )
        v8 = v4 < *(_DWORD *)(v6 + 32);
      v9 = operator new(0x28u);
      *(_DWORD *)(v9 + 32) = *(_DWORD *)(v3 + 32);
      std::_Rb_tree_insert_and_rebalance(v8, v9, v7, a1 + 8);
      ++*(_QWORD *)(a1 + 40);
      v3 = std::_Rb_tree_increment(v3);
    }
    while ( v3 != v2 );
  }
}
