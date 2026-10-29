void __fastcall sub_3799E0(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C64CB0;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

