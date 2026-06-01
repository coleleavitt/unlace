__int64 __fastcall sub_11A14A0(__int64 a1, __m128i *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r13
  unsigned int v5; // r15d
  __m128i *v6; // rax
  __m128i *v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax

  result = sub_110F560(a1, (__int64)a2);
  if ( v3 )
  {
    v4 = v3;
    v5 = 1;
    if ( !result && v3 != a1 + 8 )
      v5 = (unsigned int)sub_9C4B50((__int64)a2, v3 + 32) >> 31;
    v6 = (__m128i *)operator new(0x40u);
    v7 = (__m128i *)a2->m128i_i64[0];
    v8 = (__int64 *)v6;
    v6[2].m128i_i64[0] = (__int64)v6[3].m128i_i64;
    if ( v7 == &a2[1] )
    {
      v6[3] = _mm_loadu_si128(a2 + 1);
    }
    else
    {
      v9 = a2[1].m128i_i64[0];
      v8[4] = (__int64)v7;
      v8[6] = v9;
    }
    v10 = a2->m128i_i64[1];
    a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
    a2->m128i_i64[1] = 0;
    a2[1].m128i_i8[0] = 0;
    v8[5] = v10;
    std::_Rb_tree_insert_and_rebalance(v5, v8, v4, a1 + 8);
    ++*(_QWORD *)(a1 + 40);
    return (__int64)v8;
  }
  return result;
}
