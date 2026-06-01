__int64 __fastcall sub_3CD690(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  const __m128i *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  _BOOL4 v8; // r14d
  __m128i *v9; // rax
  unsigned __int64 v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rbp

  v5 = (const __m128i *)a2;
  result = sub_3CD340(a2, a3, a4);
  if ( (_BYTE)result && a3 != a2 )
  {
    do
    {
      v10 = v5[2].m128i_u64[0];
      v11 = sub_3B9400(a1, a1 + 1, v10, v7);
      v13 = v12;
      if ( v12 )
      {
        v8 = v11 || a1 + 1 == v12 || v10 < v12[4];
        v9 = (__m128i *)operator new(0x30u);
        v9[2] = _mm_loadu_si128(v5 + 2);
        std::_Rb_tree_insert_and_rebalance(v8, v9, v13, a1 + 1);
        ++a1[5];
      }
      result = std::_Rb_tree_increment(v5);
      v5 = (const __m128i *)result;
    }
    while ( a3 != result );
  }
  return result;
}
