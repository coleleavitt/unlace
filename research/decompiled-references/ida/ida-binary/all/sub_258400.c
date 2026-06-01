_QWORD *__fastcall sub_258400(_QWORD *a1, char *a2, __int64 **a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // r13
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rbp
  const char *v15; // rsi
  const char *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // [rsp+0h] [rbp-38h]

  v5 = operator new(0x50u);
  v6 = *a3;
  v7 = _mm_loadu_si128((const __m128i *)(*a3 + 1));
  v8 = **a3;
  *v6 = 0;
  *(__m128i *)(v5 + 40) = v7;
  *(_OWORD *)(v6 + 1) = 0;
  *(_QWORD *)(v5 + 32) = v8;
  *(_QWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 64) = 0;
  v9 = sub_258240(a1, a2, v5 + 32);
  if ( v10 )
  {
    v11 = 1;
    v12 = a1 + 1;
    if ( !v9 && (_QWORD *)v10 != v12 )
    {
      v15 = &s1;
      if ( *(_QWORD *)(v10 + 40) )
        v15 = *(const char **)(v10 + 32);
      v16 = &s1;
      if ( *(_QWORD *)(v5 + 40) )
        v16 = *(const char **)(v5 + 32);
      v18 = v10;
      v17 = strcmp(v16, v15);
      v12 = a1 + 1;
      v10 = v18;
      v11 = v17 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v11, v5, v10, v12);
    ++a1[5];
    return (_QWORD *)v5;
  }
  v13 = v9;
  if ( !v5 )
    return v13;
  if ( v8 )
  {
    *(_QWORD *)(v5 + 40) = 0;
    qfree(v8, a2);
  }
  operator delete((void *)v5, 0x50u);
  return v13;
}
