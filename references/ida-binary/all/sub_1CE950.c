QT::QString *__fastcall sub_1CE950(QT::QString *this, const __m128i *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax

  v2 = _mm_loadu_si128(a2);
  v3 = a2[1].m128i_i64[0];
  *((_QWORD *)this + 2) = v3;
  *(__m128i *)this = v2;
  if ( v2.m128i_i64[0] )
  {
    _InterlockedAdd((volatile signed __int32 *)v2.m128i_i64[0], 1u);
    v3 = *((_QWORD *)this + 2);
  }
  if ( !v3 || *(_BYTE *)(*((_QWORD *)this + 1) + 2 * v3 - 2) != 92 )
    return this;
  QT::QString::resize(this, v3 - 1);
  return this;
}
