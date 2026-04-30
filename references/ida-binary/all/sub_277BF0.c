void __fastcall sub_277BF0(const __m128i *a1, __int64 *a2)
{
  QT::QWidget *v2; // rdi
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rdi

  v3 = a1[1].m128i_i64[1];
  v4 = _mm_loadu_si128(a1 + 2);
  a1[1].m128i_i64[1] = *a2;
  a1[2].m128i_i64[0] = a2[1];
  a1[2].m128i_i64[1] = a2[2];
  *a2 = v3;
  *(__m128i *)(a2 + 1) = v4;
  v5 = a1[3].m128i_i64[0];
  if ( v5 )
  {
    v2 = *(QT::QWidget **)(v5 + 48);
    if ( v2 )
      QT::QWidget::update(v2);
    else
      nullsub_341();
  }
}
