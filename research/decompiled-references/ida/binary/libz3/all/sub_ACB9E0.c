void __fastcall sub_ACB9E0(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C71590;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

