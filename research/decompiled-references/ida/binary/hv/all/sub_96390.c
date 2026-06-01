void __fastcall sub_96390(std::exception *a1)
{
  *(_QWORD *)a1 = &off_164B48;
  std::exception::~exception(a1);
  operator delete(a1, 0x10u);
}

