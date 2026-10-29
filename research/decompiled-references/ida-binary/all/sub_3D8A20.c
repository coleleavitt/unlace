__int64 __fastcall sub_3D8A20(int a1, int a2)
{
  __m128i v3[7]; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v4; // [rsp+78h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  sub_3D8560(v3, a1, a2, 0);
  sub_53AB40((QT::QWidget *)v3);
  ViewSwitcher__::vfunc_3((QT::QDialog *)v3);
  return 1;
}
