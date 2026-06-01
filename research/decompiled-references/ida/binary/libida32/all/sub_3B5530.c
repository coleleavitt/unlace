_DWORD *__fastcall sub_3B5530(_QWORD *a1, __int64 a2, _DWORD **a3)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp

  v4 = (_DWORD *)operator new(0x28u);
  v5 = *a3;
  v4[9] = 0;
  LODWORD(a3) = *v5;
  v4[8] = *v5;
  v6 = sub_3B4C40(a1, a2, (unsigned int)a3);
  if ( v7 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
  v8 = v6;
  if ( !v4 )
    return (_DWORD *)v8;
  operator delete(v4, 0x28u);
  return (_DWORD *)v8;
}

