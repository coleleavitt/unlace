void __fastcall sub_C984F0(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C74AB0;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

