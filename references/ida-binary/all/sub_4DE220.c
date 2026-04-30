void __fastcall sub_4DE220(__int64 *a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __m128i *v5; // rax
  _QWORD *v7; // rax

  if ( *(_QWORD *)(a3 + 16) )
  {
    v7 = sub_4DE140(a1, a2, 1);
    QT::QItemSelection::merge(v7 + 1, a3, 34);
  }
  if ( a4->m128i_i32[0] >= 0 && a4->m128i_i32[1] >= 0 )
  {
    if ( a4[1].m128i_i64[0] )
    {
      v5 = (__m128i *)sub_4DE140(a1, a2, 1);
      if ( v5[2].m128i_i32[0] < 0 || v5[2].m128i_i32[1] < 0 || !v5[3].m128i_i64[0] )
      {
        v5[2] = _mm_loadu_si128(a4);
        v5[3].m128i_i64[0] = a4[1].m128i_i64[0];
      }
    }
  }
}
