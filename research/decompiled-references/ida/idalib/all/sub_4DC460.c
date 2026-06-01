_QWORD *__fastcall sub_4DC460(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __m128i v6; // xmm0
  char *v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // xmm0_8
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  _QWORD *v16; // rbp
  const char *v18; // rsi
  unsigned int v19; // eax
  __m128i v20; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v21; // [rsp+18h] [rbp-30h]

  v5 = operator new(0x40u);
  v6 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v7 = *(char **)a3;
  v8 = (_QWORD *)v5;
  *(_QWORD *)a3 = 0;
  *(__m128i *)(v5 + 40) = v6;
  v9 = v5 + 32;
  *(_QWORD *)(v5 + 32) = v7;
  v10 = *(_QWORD *)(a3 + 24);
  *(_OWORD *)(a3 + 8) = 0;
  v8[7] = v10;
  v20 = v6;
  v11 = sub_45DA90(a1, a2, v9);
  if ( v12 )
  {
    v13 = _mm_load_si128(&v20).m128i_u64[0];
    v14 = 1;
    v15 = a1 + 1;
    if ( !v11 && (_QWORD *)v12 != v15 )
    {
      v18 = haystack;
      if ( *(_QWORD *)(v12 + 40) )
        v18 = *(const char **)(v12 + 32);
      v21 = a1 + 1;
      v20.m128i_i64[0] = v12;
      if ( !v13 )
        v7 = (char *)haystack;
      v19 = strcmp(v7, v18);
      v15 = v21;
      v12 = v20.m128i_i64[0];
      v14 = v19 >> 31;
    }
    v16 = v8;
    std::_Rb_tree_insert_and_rebalance(v14, v8, v12, v15);
    ++a1[5];
    return v16;
  }
  v16 = v11;
  if ( !v8 )
    return v16;
  if ( v7 )
  {
    v8[5] = 0;
    qfree(v7);
  }
  operator delete(v8, 0x40u);
  return v16;
}
