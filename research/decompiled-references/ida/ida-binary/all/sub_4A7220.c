__int64 __fastcall sub_4A7220(
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
  __int64 *v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8

  v9 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v10 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 72LL))(v9, a1);
  sub_4A71C0(v10, a2, a3, a4, a5, v11, v12, a8, a9);
  return 1;
}
