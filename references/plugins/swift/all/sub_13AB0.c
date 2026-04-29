const char *__fastcall sub_13AB0(_QWORD *a1, const char *a2, __int64 **a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __m128i si128; // xmm0
  __int64 v10; // rcx
  __int64 v11; // r8
  const char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  const char *v16; // rbp
  __int64 v18; // rdi
  const char *v19; // rsi
  const char *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // [rsp+0h] [rbp-38h]

  v5 = operator new(0x88u);
  v6 = *a3;
  v7 = _mm_loadu_si128((const __m128i *)(*a3 + 1));
  v8 = **a3;
  *v6 = 0;
  *(__m128i *)(v5 + 40) = v7;
  *(_OWORD *)(v6 + 1) = 0;
  *(_OWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 32) = v8;
  *(_OWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 88) = 0;
  *(_OWORD *)(v5 + 104) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_216F0);
  *(_DWORD *)(v5 + 120) = 12;
  *(__m128i *)(v5 + 72) = si128;
  v12 = sub_136E0(a1, a2, v5 + 32, v10, v11);
  if ( v13 )
  {
    v14 = 1;
    v15 = a1 + 1;
    if ( !v12 && (_QWORD *)v13 != v15 )
    {
      v19 = s1;
      if ( *(_QWORD *)(v13 + 40) )
        v19 = *(const char **)(v13 + 32);
      v20 = s1;
      if ( *(_QWORD *)(v5 + 40) )
        v20 = *(const char **)(v5 + 32);
      v22 = v13;
      v21 = strcmp(v20, v19);
      v15 = a1 + 1;
      v13 = v22;
      v14 = v21 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v14, v5, v13, v15);
    ++a1[5];
    return (const char *)v5;
  }
  v16 = v12;
  if ( !v5 )
    return v16;
  clear_tinfo_t();
  v18 = *(_QWORD *)(v5 + 32);
  if ( v18 )
  {
    *(_QWORD *)(v5 + 40) = 0;
    qfree(v18);
  }
  operator delete((void *)v5, 0x88u);
  return v16;
}
