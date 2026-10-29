__int64 sub_3D8A90()
{
  __m128i v1[7]; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v2; // [rsp+78h] [rbp-20h]

  v2 = __readfsqword(0x28u);
  sub_3D8560(v1, 0, 0, 0);
  sub_53AB40((QT::QWidget *)v1);
  ViewSwitcher__::vfunc_3((QT::QDialog *)v1);
  return 1;
}
