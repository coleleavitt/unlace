_QWORD *__fastcall sub_3CD760(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  __m128i v7; // xmm0
  void *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _BOOL8 v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rbp

  v5 = operator new(0x38u);
  v6 = *(_QWORD *)a3;
  v7 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v8 = (void *)v5;
  *(_QWORD *)(v5 + 32) = *(_QWORD *)a3;
  *(__m128i *)(v5 + 40) = v7;
  v10 = sub_3B95C0(a1, a2, v6, v9);
  if ( v11 )
  {
    v12 = 1;
    v13 = a1 + 1;
    if ( !v10 && v11 != v13 )
      v12 = v6 < v11[4];
    std::_Rb_tree_insert_and_rebalance(v12, v8, v11, v13);
    ++a1[5];
    return v8;
  }
  v14 = v10;
  if ( !v8 )
    return v14;
  operator delete(v8, 0x38u);
  return v14;
}
