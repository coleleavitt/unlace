unsigned __int64 *__fastcall sub_10CF850(_QWORD *a1, _QWORD *a2, __int64 a3, const double **a4)
{
  unsigned __int64 *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v9; // [rsp+8h] [rbp-30h]

  v5 = (unsigned __int64 *)operator new(0x30u);
  *((__m128 *)v5 + 2) = _mm_loadh_ps(*a4);
  v6 = sub_10CF760(a1, a2, v5 + 4);
  if ( v7 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v5;
  }
  else
  {
    v9 = v6;
    operator delete(v5);
    return v9;
  }
}

