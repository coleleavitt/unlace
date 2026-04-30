__int64 __fastcall sub_4A8680(
        QT::QWidget *a1,
        QT::QKeyEvent *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 result; // rax

  if ( (unsigned int)(*((_DWORD *)a2 + 16) - 16777220) > 1 )
    return QT::QWidget::keyPressEvent(a1, a2);
  result = sub_4A7260((__int64 *)a1, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( (*((_BYTE *)a1 + 2008) & 4) == 0 )
    return QT::QWidget::keyPressEvent(a1, a2);
  return result;
}
