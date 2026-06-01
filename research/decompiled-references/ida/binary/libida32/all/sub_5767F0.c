void __fastcall sub_5767F0(std::exception *a1)
{
  *(_QWORD *)a1 = &off_2BD1280;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

