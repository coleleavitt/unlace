unsigned __int64 *__fastcall sub_10F3590(_QWORD *a1, const char *a2, __int64 a3, const double **a4)
{
  unsigned __int64 *v6; // rbx
  const char *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  _BOOL8 v10; // rdi
  const char *v12; // [rsp+8h] [rbp-30h]

  v6 = (unsigned __int64 *)operator new(0x30u);
  *((__m128 *)v6 + 2) = _mm_loadh_ps(*a4);
  v7 = sub_10F34A0(a1, a2, v6 + 4);
  if ( v8 )
  {
    v9 = a1 + 1;
    v10 = 1;
    if ( !v7 && v8 != v9 )
      v10 = v6[4] < v8[4];
    std::_Rb_tree_insert_and_rebalance(v10, v6, v8, v9);
    ++a1[5];
    return v6;
  }
  else
  {
    v12 = v7;
    operator delete(v6);
    return (unsigned __int64 *)v12;
  }
}
