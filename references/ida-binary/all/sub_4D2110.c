void __fastcall sub_4D2110(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  double v10; // xmm4_8
  double v11; // xmm5_8

  if ( !--dword_8D1DC0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 224LL))(QT::QCoreApplication::self);
    if ( v9 )
      sub_4D1B30(a1, v9, a2, a3, a4, a5, v10, v11, a8, a9);
  }
}
