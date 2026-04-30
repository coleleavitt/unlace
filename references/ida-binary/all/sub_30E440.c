__int64 __fastcall sub_30E440(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        QT::QString *a10)
{
  unsigned __int8 isEnabled; // al
  double v12; // xmm4_8
  double v13; // xmm5_8

  if ( !unk_8BDE41 )
    return sub_30A6D0(a10, nullptr, a1, a2, a3, a4, a5, a6, a7, a8);
  isEnabled = QT::QAction::isEnabled(qword_8C9928);
  return sub_30A6D0(a10, (const char *)isEnabled, a1, a2, a3, a4, v12, v13, a7, a8);
}
