void __fastcall sub_C985B0(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C74A88;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

