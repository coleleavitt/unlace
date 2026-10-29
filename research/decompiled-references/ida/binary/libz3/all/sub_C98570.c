void __fastcall sub_C98570(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C74B00;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

