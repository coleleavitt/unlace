void __fastcall sub_6A9800(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C69D20;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

