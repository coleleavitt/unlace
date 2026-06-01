unsigned __int64 __fastcall sub_2D73E0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int64 result; // rax
  QT::QBasicTimer *v12; // rdi
  double v13; // xmm4_8
  double v14; // xmm5_8

  result = *(unsigned int *)(a1 + 552);
  if ( *(_DWORD *)(a2 + 16) == (_DWORD)result )
  {
    v12 = (QT::QBasicTimer *)(a1 + 552);
    QT::QBasicTimer::stop(v12);
    if ( !qword_8CCE70 || (result = *((_QWORD *)qword_8CCE70 + 4), *(char *)(result + 9) >= 0) )
    {
      *(_QWORD *)(a1 + 556) = QT::QCursor::pos(v12);
      return sub_2D7150(a1, (const char *)a2, a3, a4, a5, a6, v13, v14, a9, a10);
    }
  }
  return result;
}
