__int64 __fastcall sub_1C3B90(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  _QWORD v9[61]; // [rsp+0h] [rbp-1E8h] BYREF

  v9[57] = __readfsqword(0x28u);
  sub_1C27E0((QT::QWidget *)v9, (__int64)&qword_8CAE60, (__int64)qword_8CD748, a1, a2, a3, a4, a5, a6, a7, a8);
  sub_53AB40((QT::QWidget *)v9);
  ColorsOptionsDialog__::vfunc_3((QT::QDialog *)v9);
  return 1;
}
