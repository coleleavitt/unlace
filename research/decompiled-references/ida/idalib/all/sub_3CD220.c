__int64 __fastcall sub_3CD220(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdx
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rcx
  const __m128i *v9; // rbx
  const __m128i *v10; // r15
  __int64 result; // rax
  __int64 v12; // rcx
  _BOOL4 v13; // r13d
  __m128i *v14; // rax
  unsigned __int64 v15; // r13
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rbp

  v5 = a4;
  v7 = a1[129];
  if ( v7 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v8 = nullptr;
  }
  else
  {
    v8 = a1 + 113;
    if ( v7 == -1 )
      v8 = a1 + 119;
  }
  if ( a2 == v8 )
    a1[128] = -1;
  v9 = *(const __m128i **)(a3 + 24);
  v10 = (const __m128i *)(a3 + 8);
  result = sub_3CCDE0((__int64)v9, a3 + 8, v5);
  if ( (_BYTE)result && v9 != v10 )
  {
    do
    {
      v15 = v9[2].m128i_u64[0];
      v16 = sub_3B95C0(a2, a2 + 1, v15, v12);
      v18 = v17;
      if ( v17 )
      {
        v13 = v16 || a2 + 1 == v17 || v15 < v17[4];
        v14 = (__m128i *)operator new(0x38u);
        v14[2] = _mm_loadu_si128(v9 + 2);
        v14[3].m128i_i64[0] = v9[3].m128i_i64[0];
        std::_Rb_tree_insert_and_rebalance(v13, v14, v18, a2 + 1);
        ++a2[5];
      }
      result = std::_Rb_tree_increment(v9);
      v9 = (const __m128i *)result;
    }
    while ( v10 != (const __m128i *)result );
  }
  return result;
}
