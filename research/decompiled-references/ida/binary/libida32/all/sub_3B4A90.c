void *__fastcall sub_3B4A90(_QWORD *a1, __int64 a2, _DWORD **a3)
{
  __int64 v4; // rax
  __m128i si128; // xmm0
  void *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp

  v4 = operator new(0x40u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
  v6 = (void *)v4;
  LODWORD(a3) = **a3;
  *(_DWORD *)(v4 + 36) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_DWORD *)(v4 + 32) = (_DWORD)a3;
  *(__m128i *)(v4 + 40) = si128;
  v7 = sub_3B49C0(a1, a2, (unsigned int)a3);
  if ( v8 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v6;
  }
  v9 = v7;
  if ( !v6 )
    return (void *)v9;
  operator delete(v6, 0x40u);
  return (void *)v9;
}

