__int64 __fastcall sub_FE5D0(_QWORD *a1, __int64 a2, _DWORD **a3)
{
  __int64 v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp

  v4 = operator new(0x30u);
  v5 = *a3;
  *(_QWORD *)(v4 + 40) = 0;
  LODWORD(a3) = *v5;
  *(_DWORD *)(v4 + 32) = *v5;
  v6 = sub_FE500(a1, a2, (unsigned int)a3);
  if ( v7 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
  v8 = v6;
  if ( !v4 )
    return v8;
  operator delete((void *)v4, 0x30u);
  return v8;
}

