__int64 (__fastcall **__fastcall sub_45E090(__int64 a1, QT::QObject *a2))()
{
  __m128i si128; // xmm0

  *(_OWORD *)a2 = 0;
  *((_OWORD *)a2 + 1) = 0;
  *((_OWORD *)a2 + 2) = 0;
  QT::QObject::QObject(a2, nullptr);
  *((_OWORD *)a2 + 1) = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  *(_QWORD *)a2 = &ea_navigation_data_t___vtable;
  *((__m128i *)a2 + 2) = si128;
  return &ea_navigation_data_t___vtable;
}
