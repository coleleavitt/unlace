__int64 __fastcall sub_676470(_QWORD *a1, __int64 a2, __int64 **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp

  v4 = operator new(0x30u);
  v5 = **a3;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 32) = v5;
  v6 = sub_675720(a1, a2, (unsigned int *)(v4 + 32));
  if ( v7 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
  v8 = v6;
  if ( !v4 )
    return v8;
  clear_tinfo_t(v4 + 40);
  operator delete((void *)v4, 0x30u);
  return v8;
}

