void __fastcall sub_C9F490(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C74BC8;
  std::exception::~exception(a1);
  operator delete(a1, 0x10u);
}

