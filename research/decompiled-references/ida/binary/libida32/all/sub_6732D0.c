__int64 __fastcall sub_6732D0(_QWORD *a1, __int64 a2, _DWORD **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp

  v4 = operator new(0x30u);
  LODWORD(a3) = **a3;
  *(_QWORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 32) = (_DWORD)a3;
  v5 = sub_673200(a1, a2, (unsigned int)a3);
  if ( v6 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
  v7 = v5;
  if ( !v4 )
    return v7;
  clear_tinfo_t(v4 + 40);
  operator delete((void *)v4, 0x30u);
  return v7;
}

