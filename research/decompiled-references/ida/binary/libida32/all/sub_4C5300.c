_QWORD *__fastcall sub_4C5300(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  char *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // xmm0_8
  _QWORD *v12; // rbp
  const char *v14; // rsi
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v16; // [rsp+18h] [rbp-30h]

  v4 = operator new(0x40u);
  v5 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v6 = *(char **)a3;
  v7 = v4;
  *(_QWORD *)a3 = 0;
  *(__m128i *)(v4 + 40) = v5;
  v8 = v4 + 32;
  *(_QWORD *)(v4 + 32) = v6;
  LODWORD(v4) = *(_DWORD *)(a3 + 24);
  *(_OWORD *)(a3 + 8) = 0;
  *(_DWORD *)(v7 + 56) = v4;
  v15 = v5;
  v9 = sub_3D8410(a1, a2, v8);
  if ( v10 )
  {
    v11 = _mm_load_si128(&v15).m128i_u64[0];
    if ( !v9 && (_QWORD *)v10 != a1 + 1 )
    {
      v14 = haystack;
      if ( *(_QWORD *)(v10 + 40) )
        v14 = *(const char **)(v10 + 32);
      v16 = a1 + 1;
      v15.m128i_i64[0] = v10;
      if ( !v11 )
        v6 = (char *)haystack;
      strcmp(v6, v14);
    }
    v12 = (_QWORD *)v7;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v12;
  }
  v12 = v9;
  if ( !v7 )
    return v12;
  if ( v6 )
  {
    *(_QWORD *)(v7 + 40) = 0;
    qfree(v6);
  }
  operator delete((void *)v7, 0x40u);
  return v12;
}

