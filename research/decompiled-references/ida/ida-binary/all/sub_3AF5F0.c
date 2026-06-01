QT::QMainWindow *__fastcall sub_3AF5F0(
        __m128i *a1,
        __m128i *a2,
        __m128 *a3,
        unsigned int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  QT::QMainWindow *result; // rax

  sub_205300(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  result = (QT::QMainWindow *)&QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
  {
    result = (QT::QMainWindow *)(*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 224LL))(QT::QCoreApplication::self);
    if ( result )
      return (QT::QMainWindow *)sub_53EBA0(result);
  }
  return result;
}
