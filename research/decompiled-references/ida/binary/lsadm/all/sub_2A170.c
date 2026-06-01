void __fastcall sub_2A170(std::exception *a1)
{
  *(_QWORD *)a1 = &off_79CE8;
  std::exception::~exception(a1);
  operator delete(a1, 0x10u);
}

