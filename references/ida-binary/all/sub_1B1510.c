__int64 __fastcall sub_1B1510(
        QT::QObject *this,
        QT::QObject *a2,
        QT::QEvent *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rdi
  int v14; // eax
  QT::QEvent *v15; // [rsp+8h] [rbp-10h]

  if ( *((QT::QObject **)this + 6) == a2
    && *((_WORD *)a3 + 4) == 6
    && (v13 = *((_QWORD *)this + 8)) != 0
    && (v15 = a3, v14 = sub_1B0E80(v13, (int *)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11), a3 = v15, !v14) )
  {
    return 1;
  }
  else
  {
    return QT::QObject::eventFilter(this, a2, a3);
  }
}
