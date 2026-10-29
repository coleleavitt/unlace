__int64 __fastcall sub_3D86B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp

  v4 = operator new(0x30u);
  *(_DWORD *)(v4 + 32) = *(_DWORD *)a3;
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(a3 + 8);
  v5 = sub_3D85D0(a1, a2, (unsigned int *)(v4 + 32));
  if ( v6 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
  v7 = v5;
  if ( !v4 )
    return v7;
  operator delete((void *)v4, 0x30u);
  return v7;
}

