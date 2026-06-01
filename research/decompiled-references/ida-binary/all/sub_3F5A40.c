__m128i *__fastcall sub_3F5A40(__m128i *a1, QT::QAbstractButton **a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  a1[1].m128i_i64[0] = 0;
  a1[1].m128i_i16[4] = 1;
  a1[1].m128i_i32[3] = 0;
  *a1 = 0;
  QT::QLineEdit::text((QT::QLineEdit *)ptr);
  v2 = _mm_loadu_si128(a1);
  v3 = a1[1].m128i_i64[0];
  v4 = v7;
  *a1 = _mm_load_si128((const __m128i *)ptr);
  a1[1].m128i_i64[0] = v4;
  v7 = v3;
  *(__m128i *)ptr = v2;
  if ( v2.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v2.m128i_i64[0], 1u) )
    free(ptr[0]);
  a1[1].m128i_i8[8] = QT::QAbstractButton::isChecked(a2[6]);
  a1[1].m128i_i8[9] = QT::QAbstractButton::isChecked(a2[7]);
  a1[1].m128i_i32[3] = (unsigned __int8)QT::QAbstractButton::isChecked(a2[8]);
  return a1;
}
