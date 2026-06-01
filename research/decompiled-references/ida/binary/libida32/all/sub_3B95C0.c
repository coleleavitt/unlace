void __fastcall sub_3B95C0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rbp
  void *v3; // rax

  v1 = *(_QWORD *)(a1 + 1024);
  if ( v1 > 0xFFFFFFFFFFFFFFFDLL )
  {
    v2 = a1 + 896;
    if ( v1 == -1 )
      v2 = a1 + 944;
    v3 = (void *)std::_Rb_tree_rebalance_for_erase();
    operator delete(v3, 0x30u);
    --*(_QWORD *)(v2 + 40);
    *(_DWORD *)(a1 + 1016) = -1;
  }
}

