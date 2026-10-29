unsigned __int64 __fastcall sub_2D8200(__int64 a1, QT::QAccessibleInterface *(*a2)(const QT::QString *, QT::QObject *))
{
  _QWORD v3[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v4; // [rsp+10h] [rbp-38h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  QT::QAccessible::installFactory((QT::QAccessible *)sub_2D9390, a2);
  v3[0] = sub_2DA800;
  v3[1] = 0;
  v4 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_8621F0), (__m128i)(unsigned __int64)sub_2D7920);
  if ( (unsigned __int8)QT::QMetaType::registerConverterFunction(
                          v3,
                          &unk_8BA7C0,
                          &QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType)
    && !(_BYTE)qword_8CCE90
    && __cxa_guard_acquire(&qword_8CCE90) )
  {
    unk_8CCEB0 = 1;
    xmmword_8CCEA0 = _mm_loadh_ps((const double *)&QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType);
    __cxa_atexit((void (*)(void *))sub_2D7580, &xmmword_8CCEA0, &off_85BC80);
    __cxa_guard_release(&qword_8CCE90);
  }
  if ( v4.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v4.m128i_i64[0])(v3, v3, 3);
  return v5 - __readfsqword(0x28u);
}
