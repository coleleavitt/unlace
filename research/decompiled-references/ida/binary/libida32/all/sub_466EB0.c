void __fastcall sub_466EB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // r13d
  __int64 v7; // r14
  __int64 v8; // rdx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v6 = *(_DWORD *)(v4 + 32);
      if ( !*(_QWORD *)(a1 + 40) || (v7 = *(_QWORD *)(a1 + 32), *(_DWORD *)(v7 + 32) >= v6) )
      {
        sub_454D80(a1, v6);
        v7 = v8;
      }
      if ( v7 )
      {
        v5 = operator new(0x30u);
        *(_QWORD *)(v5 + 32) = *(_QWORD *)(v4 + 32);
        *(_DWORD *)(v5 + 40) = *(_DWORD *)(v4 + 40);
        std::_Rb_tree_insert_and_rebalance();
        ++*(_QWORD *)(a1 + 40);
      }
      v4 = std::_Rb_tree_increment();
    }
    while ( v4 != a3 );
  }
}

