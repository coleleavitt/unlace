void __fastcall sub_63FCA0(std::exception *a1)
{
  *(_QWORD *)a1 = &off_2B36F00;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}
