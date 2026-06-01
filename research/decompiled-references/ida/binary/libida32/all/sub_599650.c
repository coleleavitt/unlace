__int64 __fastcall sub_599650(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  __int64 v4; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbp

  v4 = operator new(0x30u);
  v5 = *a3;
  *(_DWORD *)(v4 + 40) = 0;
  v6 = *v5;
  *(_QWORD *)(v4 + 32) = *v5;
  v7 = sub_599580(a1, a2, v6);
  if ( v8 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
  v9 = v7;
  if ( !v4 )
    return (__int64)v9;
  operator delete((void *)v4, 0x30u);
  return (__int64)v9;
}

