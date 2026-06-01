__int64 __fastcall sub_4BE680(_QWORD *a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdx

  v5 = operator new(0x40u);
  LODWORD(a4) = **a4;
  *(_QWORD *)(v5 + 40) = 0;
  *(_OWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 32) = (_DWORD)a4;
  v6 = sub_4B0E80(a1, a2, (unsigned int)a4);
  if ( v7 )
  {
    v6 = v5;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v6;
  }
  if ( !v5 )
    return v6;
  operator delete((void *)v5, 0x40u);
  return v6;
}

